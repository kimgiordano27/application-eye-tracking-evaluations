/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$.ctor
ENTRY_POINT: 05009eb0
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter___ctor(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  short *psVar5;
  short *psVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  long unaff_x19;
  short *unaff_x20;
  short *psVar10;
  long *unaff_x22;
  ulong unaff_x23;
  ulong uVar11;
  ulong unaff_x24;
  
  psVar10 = unaff_x20;
  while( true ) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    param_1 = *unaff_x22;
    iVar8 = (int)unaff_x23;
    if (unaff_x23 >> 0x20 == 0) break;
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      param_1 = *unaff_x22;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = unaff_x23 >> 9;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = unaff_x24 & 0xffffffff | 0x44b82f00000000;
    unaff_x23 = SUB168(auVar3 * auVar4,8) >> 0xb;
    psVar6 = psVar10 + -1;
    uVar11 = (ulong)(uint)(iVar8 + (int)unaff_x23 * -1000000000);
    iVar8 = 7;
    do {
      do {
        psVar10 = psVar6;
        uVar7 = uVar11 / 10;
        uVar9 = (uint)uVar11;
        *psVar10 = (short)uVar11 + (short)(uVar11 / 10) * -10 + 0x30;
        iVar2 = iVar8 + -1;
        bVar1 = -1 < iVar8;
        psVar6 = psVar10 + -1;
        uVar11 = uVar7;
        iVar8 = iVar2;
      } while (bVar1);
    } while (9 < uVar9);
  }
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  if (iVar8 != 0) {
    psVar6 = psVar10 + -1;
    iVar8 = -2;
    do {
      do {
        psVar10 = psVar6;
        uVar9 = (uint)unaff_x23;
        uVar11 = (unaff_x23 & 0xffffffff) / 10;
        *psVar10 = (short)unaff_x23 + (short)((unaff_x23 & 0xffffffff) / 10) * -10 + 0x30;
        iVar2 = iVar8 + -1;
        bVar1 = -1 < iVar8;
        psVar6 = psVar10 + -1;
        unaff_x23 = uVar11;
        iVar8 = iVar2;
      } while (bVar1);
    } while (9 < uVar9);
  }
  uVar11 = (long)unaff_x20 - (long)psVar10;
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


