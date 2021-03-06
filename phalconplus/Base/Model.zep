namespace PhalconPlus\Base;
use PhalconPlus\Base\Pagable;
use PhalconPlus\Assert\Assertion as Assert;

// use Phalcon\Mvc\Model;
// use Phalcon\Mvc\ModelMessage;
// use Phalcon\Db\RawValue;

class Model extends \Phalcon\Mvc\Model
{
    // 记录创建时间
    public ctime;
    // 记录更新时间
    public mtime;

    public function initialize()
    {
        self::setUp([
            "notNullValidations" : false
        ]);
        this->useDynamicUpdate(true);
        this->keepSnapshots(true);
    }

    public function getMessage()
    {
        return this->getFirstMessage();
    }

    public function getFirstMessage()
    {
        if count(this->getMessages("")) {
            return (string) current(this->getMessages(""));
        }
        return false;
    }

    public function getLastMessage()
    {
        if count(this->getMessages("")) {
            return (string) end(this->getMessages(""));
        }
        return false;
    }

    public function createBuilder(string! alias = "") -> <\Phalcon\Mvc\Model\Query\BuilderInterface>
    {
        var source;
        if !empty alias {
            let source = [alias:get_called_class()];
        } else {
            let source  = get_called_class();
        }
        return this->getModelsManager()->createBuilder()->from(source);
    }

    public static function getInstance() -> <\Phalcon\Mvc\Model>
    {
        var className;
        let className = get_called_class();
        return new {className}();
    }

    public function beforeValidationOnCreate()
    {
        let this->ctime = date("Y-m-d H:i:s");
        let this->mtime = this->ctime;
    }

    public function afterFetch()
    {
        // nothing
    }

    public function beforeSave()
    {
        let this->mtime = date("Y-m-d H:i:s");
        return true;
    }

    /**
     * params["columns"]
     * params["conditions"]
     * params["bind"]
     *
     */
    public function findByPagable(<Pagable> pagable, array params = [])
    {
        Assert::notNull(pagable, __CLASS__."::".__METHOD__ .": Pagable can not be null");
        
        var builder;
        let builder = this->createBuilder();
        
        var val, orderBy = "", orderBys = [];

        let orderBys = array_map("strval", pagable->getOrderBys());
        if !empty orderBys {
            // error_log(var_export(orderBys, true));
            builder->orderBy(implode(", ", orderBys));
        }

        if fetch val, params["columns"] {
            builder->columns(val);
        } else {
            builder->columns("*");
        }

        var bind = [];
        if fetch val, params["bind"] {
            let bind = val;
        }
        
        if fetch val, params["conditions"] {
            if empty bind {
                builder->where(val);
            } else {
                builder->where(val, bind);
            }
        }
        var queryBuilder, page;
        let queryBuilder = new \Phalcon\Paginator\Adapter\QueryBuilder([
            "builder":builder,
            "limit":pagable->getPageSize(),
            "page":pagable->getPageNo()
        ]);
        
        let page = queryBuilder->getPaginate();
        // error_log(var_export(pagable->toArray(), true));

        return new Page(pagable, page->total_items, page->items);
    }
}
