/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$add_Error
ENTRY_POINT: 055df8cc
PROGRAM: beastcraft-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__add_Error(long param_1)

{
  uint uVar1;
  bool in_ZR;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined4 unaff_w22;
  undefined8 *unaff_x23;
  uint unaff_w24;
  uint uVar2;
  int unaff_w25;
  long lVar3;
  long unaff_x26;
  
  if (in_ZR) {
    param_1 = unaff_x26;
  }
  uVar1 = unaff_w25 + (unaff_w24 ^ 1);
  uVar2 = *(uint *)(param_1 + 8);
  lVar3 = *(long *)PTR_DAT_06a7ae10;
  if (uVar2 < uVar1) {
    FUN_056265f0(0);
    uVar2 = *(uint *)(param_1 + 8);
  }
  if ((*(ushort *)(*(long *)(lVar3 + 0x20) + 0x135) & 1) == 0) {
    FUN_02e7568c();
  }
  FUN_0451d8b4(&stack0x00000010,unaff_x20 + (long)(int)uVar1 * 2,uVar2 - uVar1,*unaff_x23);
  *unaff_x19 = unaff_w22;
  return 1;
}


