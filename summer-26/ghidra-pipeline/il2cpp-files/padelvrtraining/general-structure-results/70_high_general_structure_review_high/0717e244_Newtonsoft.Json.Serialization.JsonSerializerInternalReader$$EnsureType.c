/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$EnsureType
ENTRY_POINT: 0717e244
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EnsureType(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  ulong unaff_x22;
  ulong uVar6;
  int unaff_w23;
  long *unaff_x24;
  short *psVar7;
  
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  psVar7 = (short *)(unaff_x20 + (long)unaff_w21 * 2);
  iVar5 = unaff_w23 + -2;
  do {
    do {
      uVar3 = (uint)unaff_x22;
      uVar6 = (unaff_x22 & 0xffffffff) / 10;
      psVar7 = psVar7 + -1;
      *psVar7 = (short)unaff_x22 + (short)((unaff_x22 & 0xffffffff) / 10) * -10 + 0x30;
      iVar2 = iVar5 + -1;
      bVar1 = -1 < iVar5;
      unaff_x22 = uVar6;
      iVar5 = iVar2;
    } while (bVar1);
  } while (9 < uVar3);
  iVar5 = *(int *)(unaff_x19 + 0x10);
  if (-1 < iVar5 + -1) {
    do {
      iVar5 = iVar5 + -1;
      sVar4 = FUN_06fcd2c8();
      psVar7 = psVar7 + -1;
      *psVar7 = sVar4;
    } while (0 < iVar5);
  }
  return;
}


