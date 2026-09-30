/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteObjectStart
ENTRY_POINT: 07688238
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteObjectStart(long *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  long unaff_x19;
  ulong unaff_x20;
  ulong uVar7;
  long unaff_x21;
  short *psVar8;
  
  if (*(int *)(*param_1 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*param_1);
  }
  psVar8 = (short *)(unaff_x21 + 0x14);
  if ((int)unaff_x20 != 0) {
    psVar5 = (short *)(unaff_x21 + 0x12);
    iVar6 = -2;
    do {
      do {
        psVar8 = psVar5;
        uVar3 = (uint)unaff_x20;
        uVar7 = (unaff_x20 & 0xffffffff) / 10;
        *psVar8 = (short)unaff_x20 + (short)((unaff_x20 & 0xffffffff) / 10) * -10 + 0x30;
        iVar2 = iVar6 + -1;
        bVar1 = -1 < iVar6;
        psVar5 = psVar8 + -1;
        unaff_x20 = uVar7;
        iVar6 = iVar2;
      } while (bVar1);
    } while (9 < uVar3);
  }
  uVar7 = (unaff_x21 + 0x14) - (long)psVar8;
  if ((long)uVar7 < 0) {
    uVar7 = uVar7 + 1;
  }
  uVar7 = uVar7 >> 1;
  *(int *)(unaff_x19 + 4) = (int)uVar7;
  psVar4 = (short *)FUN_07688678();
  psVar5 = psVar4;
  if (-1 < (int)uVar7 + -1) {
    do {
      uVar3 = (int)uVar7 - 1;
      uVar7 = (ulong)uVar3;
      psVar4 = psVar5 + 1;
      *psVar5 = *psVar8;
      psVar5 = psVar4;
      psVar8 = psVar8 + 1;
    } while (uVar3 != 0);
  }
  *psVar4 = 0;
  return;
}


