/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_Culture
ENTRY_POINT: 050dd128
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_Culture(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  short *psVar5;
  short *psVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  long unaff_x19;
  ulong unaff_x20;
  ulong uVar11;
  long unaff_x21;
  short *unaff_x22;
  long *unaff_x23;
  ulong unaff_x24;
  int unaff_w25;
  ulong unaff_x26;
  short unaff_w27;
  
  while( true ) {
    iVar9 = (int)unaff_x20;
    if (unaff_x20 >> 0x20 == 0) break;
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      param_1 = *unaff_x23;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = unaff_x20 >> 9;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = unaff_x24;
    unaff_x20 = SUB168(auVar3 * auVar4,8) >> 0xb;
    psVar6 = unaff_x22 + -1;
    uVar11 = (ulong)(uint)(iVar9 - (int)unaff_x20 * unaff_w25);
    iVar9 = 7;
    do {
      do {
        unaff_x22 = psVar6;
        uVar7 = uVar11 * (unaff_x26 & 0xffffffff);
        uVar8 = uVar7 >> 0x23;
        uVar10 = (uint)uVar11;
        *unaff_x22 = (short)uVar11 + (short)(uint)(uVar7 >> 0x23) * unaff_w27 + 0x30;
        iVar2 = iVar9 + -1;
        bVar1 = -1 < iVar9;
        psVar6 = unaff_x22 + -1;
        uVar11 = uVar8;
        iVar9 = iVar2;
      } while (bVar1);
    } while (9 < uVar10);
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    param_1 = *unaff_x23;
  }
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  if (iVar9 != 0) {
    psVar6 = unaff_x22 + -1;
    iVar9 = -2;
    do {
      do {
        unaff_x22 = psVar6;
        uVar10 = (uint)unaff_x20;
        uVar11 = (unaff_x20 & 0xffffffff) / 10;
        *unaff_x22 = (short)unaff_x20 + (short)((unaff_x20 & 0xffffffff) / 10) * -10 + 0x30;
        iVar2 = iVar9 + -1;
        bVar1 = -1 < iVar9;
        psVar6 = unaff_x22 + -1;
        unaff_x20 = uVar11;
        iVar9 = iVar2;
      } while (bVar1);
    } while (9 < uVar10);
  }
  uVar11 = unaff_x21 - (long)unaff_x22;
  if ((long)uVar11 < 0) {
    uVar11 = uVar11 + 1;
  }
  uVar11 = uVar11 >> 1;
  *(int *)(unaff_x19 + 4) = (int)uVar11;
  psVar5 = (short *)FUN_050e41e0();
  psVar6 = psVar5;
  if (-1 < (int)uVar11 + -1) {
    do {
      uVar10 = (int)uVar11 - 1;
      uVar11 = (ulong)uVar10;
      psVar5 = psVar6 + 1;
      *psVar6 = *unaff_x22;
      psVar6 = psVar5;
      unaff_x22 = unaff_x22 + 1;
    } while (uVar10 != 0);
  }
  *psVar5 = 0;
  return;
}


