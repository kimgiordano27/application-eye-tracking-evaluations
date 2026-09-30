/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_DateFormatString
ENTRY_POINT: 050dd0e8
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


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_DateFormatString(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lVar5;
  short *psVar6;
  short *psVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  long unaff_x19;
  ulong unaff_x20;
  ulong uVar11;
  short *psVar12;
  long *unaff_x23;
  ulong unaff_x24;
  
  lVar5 = *unaff_x23;
  psVar12 = (short *)(param_1 + 0x28);
  while( true ) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar5 = *unaff_x23;
    iVar9 = (int)unaff_x20;
    if (unaff_x20 >> 0x20 == 0) break;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar5 = *unaff_x23;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = unaff_x20 >> 9;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = unaff_x24 & 0xffff | 0x44b82fa09b0000;
    unaff_x20 = SUB168(auVar3 * auVar4,8) >> 0xb;
    psVar7 = psVar12 + -1;
    uVar11 = (ulong)(uint)(iVar9 + (int)unaff_x20 * -1000000000);
    iVar9 = 7;
    do {
      do {
        psVar12 = psVar7;
        uVar8 = uVar11 / 10;
        uVar10 = (uint)uVar11;
        *psVar12 = (short)uVar11 + (short)(uVar11 / 10) * -10 + 0x30;
        iVar2 = iVar9 + -1;
        bVar1 = -1 < iVar9;
        psVar7 = psVar12 + -1;
        uVar11 = uVar8;
        iVar9 = iVar2;
      } while (bVar1);
    } while (9 < uVar10);
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  if (iVar9 != 0) {
    psVar7 = psVar12 + -1;
    iVar9 = -2;
    do {
      do {
        psVar12 = psVar7;
        uVar10 = (uint)unaff_x20;
        uVar11 = (unaff_x20 & 0xffffffff) / 10;
        *psVar12 = (short)unaff_x20 + (short)((unaff_x20 & 0xffffffff) / 10) * -10 + 0x30;
        iVar2 = iVar9 + -1;
        bVar1 = -1 < iVar9;
        psVar7 = psVar12 + -1;
        unaff_x20 = uVar11;
        iVar9 = iVar2;
      } while (bVar1);
    } while (9 < uVar10);
  }
  uVar11 = (param_1 + 0x28) - (long)psVar12;
  if ((long)uVar11 < 0) {
    uVar11 = uVar11 + 1;
  }
  uVar11 = uVar11 >> 1;
  *(int *)(unaff_x19 + 4) = (int)uVar11;
  psVar6 = (short *)FUN_050e41e0();
  psVar7 = psVar6;
  if (-1 < (int)uVar11 + -1) {
    do {
      uVar10 = (int)uVar11 - 1;
      uVar11 = (ulong)uVar10;
      psVar6 = psVar7 + 1;
      *psVar7 = *psVar12;
      psVar7 = psVar6;
      psVar12 = psVar12 + 1;
    } while (uVar10 != 0);
  }
  *psVar6 = 0;
  return;
}


