/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$GetInternalSerializer
ENTRY_POINT: 05908628
PROGRAM: waitwhat-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__GetInternalSerializer(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined4 unaff_w22;
  undefined8 *unaff_x23;
  uint unaff_w24;
  uint uVar3;
  int unaff_w25;
  long lVar4;
  long unaff_x26;
  
  *(undefined2 *)(unaff_x20 + (long)unaff_w25 * 2) = *(undefined2 *)(*(long *)(param_1 + 0xb8) + 10)
  ;
  lVar2 = 0;
  if (unaff_w24 == 0) {
    lVar2 = unaff_x26;
  }
  uVar1 = unaff_w25 + (unaff_w24 ^ 1);
  uVar3 = *(uint *)(lVar2 + 8);
  lVar4 = *(long *)PTR_DAT_070fbe70;
  if (uVar3 < uVar1) {
    FUN_05950030(0);
    uVar3 = *(uint *)(lVar2 + 8);
  }
  if ((*(ushort *)(*(long *)(lVar4 + 0x20) + 0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  FUN_049f4510(&stack0x00000010,unaff_x20 + (long)(int)uVar1 * 2,uVar3 - uVar1,*unaff_x23);
  *unaff_x19 = unaff_w22;
  return 1;
}


