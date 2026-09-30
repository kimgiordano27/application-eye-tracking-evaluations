/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$TryConvertToString
ENTRY_POINT: 032a48fc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;weak_data_support;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;weak_string_building_near_file_sink_1;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x032a4948) */

undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__TryConvertToString
          (undefined8 param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 in_stack_00000008;
  
  if (param_2 != 1) {
    if (in_stack_00000008._4_1_ != '\0') {
      thunk_FUN_01c216e8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01cf64e4();
  }
  plVar1 = (long *)__cxa_begin_catch();
  lVar2 = *plVar1;
  __cxa_end_catch();
  if (in_stack_00000008._4_1_ != '\0') {
    thunk_FUN_01c216e8();
  }
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c01e80(lVar2);
  }
  return 0;
}


