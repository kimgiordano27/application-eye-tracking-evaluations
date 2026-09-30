/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeString
ENTRY_POINT: 0592fbec
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeString(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined4 unaff_w23;
  long *unaff_x26;
  long in_stack_00000008;
  
  lVar1 = FUN_03aca200();
  in_stack_00000008 = lVar1;
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*unaff_x26);
  }
  uVar2 = FUN_0592f3c8(&stack0x00000008,lVar1 + ((unaff_x19 << 0x20) >> 0x1f),unaff_w23);
  if ((uVar2 & 1) == 0) {
LAB_0592fc84:
    uVar3 = 0;
  }
  else {
    lVar1 = in_stack_00000008 - lVar1;
    if (lVar1 < 0) {
      lVar1 = lVar1 + 1;
    }
    if (lVar1 >> 1 < (unaff_x19 << 0x20) >> 0x20) {
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar2 = FUN_0592fca4();
      if ((uVar2 & 1) == 0) goto LAB_0592fc84;
    }
    uVar3 = 1;
  }
  return uVar3;
}


