/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_CheckAdditionalContent
ENTRY_POINT: 05908604
PROGRAM: waitwhat-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__set_CheckAdditionalContent(void)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined4 unaff_w22;
  undefined8 *unaff_x23;
  uint unaff_w24;
  uint uVar3;
  int unaff_w25;
  long lVar4;
  undefined1 *unaff_x26;
  
  puVar2 = (undefined1 *)register0x00000008;
  if (unaff_w24 == 0) {
    puVar2 = unaff_x26;
  }
  uVar1 = unaff_w25 + (unaff_w24 ^ 1);
  uVar3 = *(uint *)(puVar2 + 8);
  lVar4 = *(long *)PTR_DAT_070fbe70;
  if (uVar3 < uVar1) {
    FUN_05950030(0);
    uVar3 = *(uint *)(puVar2 + 8);
  }
  if ((*(ushort *)(*(long *)(lVar4 + 0x20) + 0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  FUN_049f4510(&stack0x00000010,unaff_x20 + (long)(int)uVar1 * 2,uVar3 - uVar1,*unaff_x23);
  *unaff_x19 = unaff_w22;
  return 1;
}


