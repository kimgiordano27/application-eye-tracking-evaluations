/*
FUNCTION_NAME: Oculus.Interaction.Collisions$$ClosestPointToColliders
ENTRY_POINT: 04d82608
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_12;ray_or_cast_sink_hits_4;strong_file_logging_hits_2
*/


bool Oculus_Interaction_Collisions__ClosestPointToColliders
               (ulong param_1,int param_2,undefined8 param_3,undefined8 param_4,int *param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  short *psVar9;
  short *psVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  int iVar14;
  
  if ((DAT_066c891a & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312c90);
    FUN_02b3c81c(PTR_DAT_0632a038);
    FUN_02b3c81c(PTR_DAT_0632fc48);
    FUN_02b3c81c(PTR_DAT_0632a2e8);
    DAT_066c891a = 1;
  }
  if (param_2 < 2) {
    param_2 = 1;
  }
  if (param_1 < 10000000) {
    iVar14 = 1;
    uVar13 = param_1;
  }
  else if (param_1 < 100000000000000) {
    iVar14 = 8;
    uVar13 = param_1 / 10000000;
  }
  else {
    iVar14 = 0xf;
    uVar13 = param_1 / 100000000000000;
  }
  uVar11 = (uint)uVar13;
  if (9 < uVar11) {
    if (uVar11 < 100) {
      iVar14 = iVar14 + 1;
    }
    else if (uVar11 < 1000) {
      iVar14 = iVar14 + 2;
    }
    else if (uVar11 >> 4 < 0x271) {
      iVar14 = iVar14 + 3;
    }
    else if (uVar11 >> 5 < 0xc35) {
      iVar14 = iVar14 + 4;
    }
    else if (uVar11 < 1000000) {
      iVar14 = iVar14 + 5;
    }
    else {
      iVar14 = iVar14 + 6;
    }
  }
  if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  puVar5 = PTR_DAT_0632fc48;
  puVar4 = PTR_DAT_0632a038;
  iVar2 = param_2;
  if (param_2 <= iVar14) {
    iVar2 = iVar14;
  }
  if ((int)param_4 < iVar2) {
    *param_5 = 0;
  }
  else {
    *param_5 = iVar2;
    lVar6 = FUN_03223504(param_3,param_4,*(undefined8 *)puVar4);
    lVar7 = *(long *)puVar5;
    iVar14 = param_2 + -2;
    psVar9 = (short *)(lVar6 + (ulong)(uint)(iVar2 << 1));
    while( true ) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      lVar7 = *(long *)puVar5;
      iVar12 = (int)param_1;
      if (param_1 >> 0x20 == 0) break;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar7 = *(long *)puVar5;
      }
      param_1 = param_1 / 1000000000;
      uVar13 = (ulong)(uint)(iVar12 + (int)param_1 * -1000000000);
      iVar12 = 7;
      do {
        do {
          uVar8 = uVar13 / 10;
          uVar11 = (uint)uVar13;
          psVar9 = psVar9 + -1;
          *psVar9 = (short)uVar13 + (short)(uVar13 / 10) * -10 + 0x30;
          iVar3 = iVar12 + -1;
          bVar1 = -1 < iVar12;
          uVar13 = uVar8;
          iVar12 = iVar3;
        } while (bVar1);
      } while (9 < uVar11);
      param_2 = param_2 + -9;
      iVar14 = iVar14 + -9;
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if ((iVar12 != 0) || (-1 < param_2 + -1)) {
      psVar9 = psVar9 + -1;
      do {
        do {
          uVar11 = (uint)param_1;
          iVar12 = iVar14 + -1;
          uVar13 = (param_1 & 0xffffffff) / 10;
          psVar10 = psVar9 + -1;
          *psVar9 = (short)param_1 + (short)((param_1 & 0xffffffff) / 10) * -10 + 0x30;
          bVar1 = -1 < iVar14;
          psVar9 = psVar10;
          param_1 = uVar13;
          iVar14 = iVar12;
        } while (bVar1);
      } while (9 < uVar11);
    }
  }
  return iVar2 <= (int)param_4;
}


