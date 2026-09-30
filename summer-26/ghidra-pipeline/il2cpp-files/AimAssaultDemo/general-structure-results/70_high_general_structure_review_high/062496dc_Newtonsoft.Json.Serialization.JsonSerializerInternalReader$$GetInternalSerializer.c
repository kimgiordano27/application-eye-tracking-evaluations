/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetInternalSerializer
ENTRY_POINT: 062496dc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer(void)

{
  bool bVar1;
  uint uVar2;
  short sVar3;
  long unaff_x19;
  int unaff_w21;
  int iVar4;
  ulong unaff_x22;
  ulong uVar5;
  short *unaff_x24;
  
  do {
    do {
      uVar2 = (uint)unaff_x22;
      uVar5 = (unaff_x22 & 0xffffffff) / 10;
      unaff_x24 = unaff_x24 + -1;
      *unaff_x24 = (short)unaff_x22 + (short)((unaff_x22 & 0xffffffff) / 10) * -10 + 0x30;
      iVar4 = unaff_w21 + -1;
      bVar1 = -1 < unaff_w21;
      unaff_x22 = uVar5;
      unaff_w21 = iVar4;
    } while (bVar1);
  } while (9 < uVar2);
  iVar4 = *(int *)(unaff_x19 + 0x10);
  if (-1 < iVar4 + -1) {
    do {
      iVar4 = iVar4 + -1;
      sVar3 = FUN_060bb390();
      unaff_x24 = unaff_x24 + -1;
      *unaff_x24 = sVar3;
    } while (0 < iVar4);
  }
  return;
}


