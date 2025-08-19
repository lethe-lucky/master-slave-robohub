# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robo_interfaces:srv/ReadData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ReadData_Request(type):
    """Metaclass of message 'ReadData_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('robo_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robo_interfaces.srv.ReadData_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__read_data__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__read_data__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__read_data__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__read_data__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__read_data__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ReadData_Request(metaclass=Metaclass_ReadData_Request):
    """Message class 'ReadData_Request'."""

    __slots__ = [
        '_command',
    ]

    _fields_and_field_types = {
        'command': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.command = kwargs.get('command', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.command != other.command:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def command(self):
        """Message field 'command'."""
        return self._command

    @command.setter
    def command(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'command' field must be of type 'str'"
        self._command = value


# Import statements for member types

# Member 'servo_id'
# Member 'servo_data'
import array  # noqa: E402, I100

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_ReadData_Response(type):
    """Metaclass of message 'ReadData_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('robo_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robo_interfaces.srv.ReadData_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__read_data__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__read_data__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__read_data__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__read_data__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__read_data__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ReadData_Response(metaclass=Metaclass_ReadData_Response):
    """Message class 'ReadData_Response'."""

    __slots__ = [
        '_servo_id',
        '_servo_data',
    ]

    _fields_and_field_types = {
        'servo_id': 'sequence<uint8>',
        'servo_data': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.servo_id = array.array('B', kwargs.get('servo_id', []))
        self.servo_data = array.array('d', kwargs.get('servo_data', []))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.servo_id != other.servo_id:
            return False
        if self.servo_data != other.servo_data:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def servo_id(self):
        """Message field 'servo_id'."""
        return self._servo_id

    @servo_id.setter
    def servo_id(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'servo_id' array.array() must have the type code of 'B'"
            self._servo_id = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'servo_id' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._servo_id = array.array('B', value)

    @builtins.property
    def servo_data(self):
        """Message field 'servo_data'."""
        return self._servo_data

    @servo_data.setter
    def servo_data(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'servo_data' array.array() must have the type code of 'd'"
            self._servo_data = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'servo_data' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._servo_data = array.array('d', value)


class Metaclass_ReadData(type):
    """Metaclass of service 'ReadData'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('robo_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robo_interfaces.srv.ReadData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__read_data

            from robo_interfaces.srv import _read_data
            if _read_data.Metaclass_ReadData_Request._TYPE_SUPPORT is None:
                _read_data.Metaclass_ReadData_Request.__import_type_support__()
            if _read_data.Metaclass_ReadData_Response._TYPE_SUPPORT is None:
                _read_data.Metaclass_ReadData_Response.__import_type_support__()


class ReadData(metaclass=Metaclass_ReadData):
    from robo_interfaces.srv._read_data import ReadData_Request as Request
    from robo_interfaces.srv._read_data import ReadData_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
