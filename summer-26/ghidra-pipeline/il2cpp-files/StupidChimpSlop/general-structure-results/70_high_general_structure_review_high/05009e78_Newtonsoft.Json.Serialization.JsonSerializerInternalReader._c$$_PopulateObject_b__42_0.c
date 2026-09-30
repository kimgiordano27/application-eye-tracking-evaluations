/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$<PopulateObject>b__42_0
ENTRY_POINT: 05009e78
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__<PopulateObject>b__42_0(void)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  short *psVar6;
  short *psVar7;
  undefined4 in_w8;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  undefined4 *unaff_x19;
  ulong unaff_x20;
  short *psVar11;
  long *unaff_x22;
  ulong uVar12;
  
  *unaff_x19 = in_w8;
  uVar3 = FUN_05011ef8();
  uVar12 = -unaff_x20;
  if ((uVar3 & 1) == 0) {
    uVar12 = unaff_x20;
  }
  lVar4 = FUN_05011f14();
  lVar5 = *unaff_x22;
  psVar11 = (short *)(lVar4 + 0x26);
  while( true ) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar5 = *unaff_x22;
    iVar9 = (int)uVar12;
    if (uVar12 >> 0x20 == 0) break;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar5 = *unaff_x22;
    }
    uVar12 = uVar12 / 1000000000;
    psVar7 = psVar11 + -1;
    uVar3 = (ulong)(uint)(iVar9 + (int)uVar12 * -1000000000);
    iVar9 = 7;
    do {
      do {
        psVar11 = psVar7;
        uVar8 = uVar3 / 10;
        uVar10 = (uint)uVar3;
        *psVar11 = (short)uVar3 + (short)(uVar3 / 10) * -10 + 0x30;
        iVar2 = iVar9 + -1;
        bVar1 = -1 < iVar9;
        psVar7 = psVar11 + -1;
        uVar3 = uVar8;
        iVar9 = iVar2;
      } while (bVar1);
    } while (9 < uVar10);
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  if (iVar9 != 0) {
    psVar7 = psVar11 + -1;
    iVar9 = -2;
    do {
      do {
        psVar11 = psVar7;
        uVar10 = (uint)uVar12;
        uVar3 = (uVar12 & 0xffffffff) / 10;
        *psVar11 = (short)uVar12 + (short)((uVar12 & 0xffffffff) / 10) * -10 + 0x30;
        iVar2 = iVar9 + -1;
        bVar1 = -1 < iVar9;
        psVar7 = psVar11 + -1;
        uVar12 = uVar3;
        iVar9 = iVar2;
      } while (bVar1);
    } while (9 < uVar10);
  }
  uVar12 = (lVar4 + 0x26) - (long)psVar11;
  if ((long)uVar12 < 0) {
    uVar12 = uVar12 + 1;
  }
  uVar12 = uVar12 >> 1;
  unaff_x19[1] = (int)uVar12;
  psVar6 = (short *)FUN_05011f14();
  psVar7 = psVar6;
  if (-1 < (int)uVar12 + -1) {
    do {
      uVar10 = (int)uVar12 - 1;
      uVar12 = (ulong)uVar10;
      psVar6 = psVar7 + 1;
      *psVar7 = *psVar11;
      psVar7 = psVar6;
      psVar11 = psVar11 + 1;
    } while (uVar10 != 0);
  }
  *psVar6 = 0;
  return;
}


