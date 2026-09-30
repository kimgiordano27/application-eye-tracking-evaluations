/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$.ctor
ENTRY_POINT: 07a48a60
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c___ctor(void)

{
  ulong uVar1;
  undefined8 uVar2;
  int in_w8;
  long lVar3;
  long *unaff_x19;
  undefined1 *unaff_x27;
  long unaff_x28;
  uint unaff_w29;
  int in_stack_00000010;
  
  if (in_w8 == 0) {
    thunk_FUN_044a54b4();
  }
  uVar1 = FUN_07a4a680();
  if ((uVar1 & 1) == 0) {
    lVar3 = 0;
    uVar2 = 0;
  }
  else if ((unaff_w29 & 1) == 0) {
    uVar2 = 1;
    lVar3 = unaff_x28 * in_stack_00000010;
  }
  else {
    lVar3 = 0;
    uVar2 = 0;
    *unaff_x27 = 1;
  }
  *unaff_x19 = lVar3;
  return uVar2;
}


