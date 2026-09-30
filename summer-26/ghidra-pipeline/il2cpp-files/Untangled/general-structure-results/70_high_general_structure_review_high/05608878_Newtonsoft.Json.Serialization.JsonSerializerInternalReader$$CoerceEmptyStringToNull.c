/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CoerceEmptyStringToNull
ENTRY_POINT: 05608878
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CoerceEmptyStringToNull(void)

{
  bool bVar1;
  uint uVar2;
  short sVar3;
  uint in_w8;
  ulong uVar4;
  long unaff_x19;
  int unaff_w21;
  int iVar5;
  ulong unaff_x22;
  ulong uVar6;
  short *unaff_x24;
  
  do {
    do {
      uVar4 = (unaff_x22 & 0xffffffff) * (ulong)(in_w8 & 0xffff | 0xcccc0000);
      uVar2 = (uint)unaff_x22;
      uVar6 = uVar4 >> 0x23;
      unaff_x24 = unaff_x24 + -1;
      *unaff_x24 = (short)unaff_x22 + (short)(uint)(uVar4 >> 0x23) * -10 + 0x30;
      iVar5 = unaff_w21 + -1;
      bVar1 = -1 < unaff_w21;
      unaff_x22 = uVar6;
      unaff_w21 = iVar5;
    } while (bVar1);
  } while (9 < uVar2);
  iVar5 = *(int *)(unaff_x19 + 0x10);
  if (-1 < iVar5 + -1) {
    do {
      iVar5 = iVar5 + -1;
      sVar3 = FUN_05460528();
      unaff_x24 = unaff_x24 + -1;
      *unaff_x24 = sVar3;
    } while (0 < iVar5);
  }
  return;
}


