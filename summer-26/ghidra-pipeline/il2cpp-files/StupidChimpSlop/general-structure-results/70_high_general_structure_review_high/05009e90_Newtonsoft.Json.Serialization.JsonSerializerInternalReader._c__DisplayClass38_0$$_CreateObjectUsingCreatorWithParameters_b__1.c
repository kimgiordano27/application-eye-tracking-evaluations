/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c__DisplayClass38_0$$<CreateObjectUsingCreatorWithParameters>b__1
ENTRY_POINT: 05009e90
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__DisplayClass38_0__<CreateObjectUsingCreatorWithParameters>b__1
               (undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  bool in_ZR;
  long lVar3;
  long lVar4;
  short *psVar5;
  short *psVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  long unaff_x19;
  ulong unaff_x20;
  short *psVar10;
  long *unaff_x22;
  ulong uVar11;
  ulong uVar12;
  
  uVar11 = -unaff_x20;
  if (in_ZR) {
    uVar11 = unaff_x20;
  }
  lVar3 = FUN_05011f14(param_1,0);
  lVar4 = *unaff_x22;
  psVar10 = (short *)(lVar3 + 0x26);
  while( true ) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar4 = *unaff_x22;
    iVar8 = (int)uVar11;
    if (uVar11 >> 0x20 == 0) break;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar4 = *unaff_x22;
    }
    uVar11 = uVar11 / 1000000000;
    psVar6 = psVar10 + -1;
    uVar12 = (ulong)(uint)(iVar8 + (int)uVar11 * -1000000000);
    iVar8 = 7;
    do {
      do {
        psVar10 = psVar6;
        uVar7 = uVar12 / 10;
        uVar9 = (uint)uVar12;
        *psVar10 = (short)uVar12 + (short)(uVar12 / 10) * -10 + 0x30;
        iVar2 = iVar8 + -1;
        bVar1 = -1 < iVar8;
        psVar6 = psVar10 + -1;
        uVar12 = uVar7;
        iVar8 = iVar2;
      } while (bVar1);
    } while (9 < uVar9);
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  if (iVar8 != 0) {
    psVar6 = psVar10 + -1;
    iVar8 = -2;
    do {
      do {
        psVar10 = psVar6;
        uVar9 = (uint)uVar11;
        uVar12 = (uVar11 & 0xffffffff) / 10;
        *psVar10 = (short)uVar11 + (short)((uVar11 & 0xffffffff) / 10) * -10 + 0x30;
        iVar2 = iVar8 + -1;
        bVar1 = -1 < iVar8;
        psVar6 = psVar10 + -1;
        uVar11 = uVar12;
        iVar8 = iVar2;
      } while (bVar1);
    } while (9 < uVar9);
  }
  uVar11 = (lVar3 + 0x26) - (long)psVar10;
  if ((long)uVar11 < 0) {
    uVar11 = uVar11 + 1;
  }
  uVar11 = uVar11 >> 1;
  *(int *)(unaff_x19 + 4) = (int)uVar11;
  psVar5 = (short *)FUN_05011f14();
  psVar6 = psVar5;
  if (-1 < (int)uVar11 + -1) {
    do {
      uVar9 = (int)uVar11 - 1;
      uVar11 = (ulong)uVar9;
      psVar5 = psVar6 + 1;
      *psVar6 = *psVar10;
      psVar6 = psVar5;
      psVar10 = psVar10 + 1;
    } while (uVar9 != 0);
  }
  *psVar5 = 0;
  return;
}


