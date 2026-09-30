/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_GetLayerTexturePtr
ENTRY_POINT: 06971484
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_15_0__ovrp_GetLayerTexturePtr(long param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined4 *puVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  long *plVar17;
  float fVar18;
  float fVar19;
  undefined4 uStack000000000000000c;
  
  puVar2 = PTR_DAT_084b72d8;
  if ((DAT_0897d0fc & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08488820);
    FUN_03a8a718(PTR_DAT_084b5c18);
    FUN_03a8a718(PTR_DAT_084b72e0);
    FUN_03a8a718(PTR_DAT_084b72e8);
    FUN_03a8a718(PTR_DAT_084b72c0);
    FUN_03a8a718(PTR_DAT_084b7018);
    FUN_03a8a718(PTR_DAT_08486738);
                    /* try { // try from 06971514 to 06a7151b has its CatchHandler @ 06971910 */
    FUN_03a8a718(PTR_DAT_084b72c8);
    FUN_03a8a718(PTR_DAT_084b72d0);
    FUN_03a8a718(PTR_DAT_084b72f0);
    FUN_03a8a718(PTR_DAT_084b72f8);
    FUN_03a8a718(PTR_DAT_084b7300);
    FUN_03a8a718(PTR_DAT_084b7308);
    FUN_03a8a718(PTR_DAT_084b7310);
    FUN_03a8a718(PTR_DAT_084b7318);
    FUN_03a8a718(PTR_DAT_084b7320);
    FUN_03a8a718(PTR_DAT_084b7328);
    FUN_03a8a718(PTR_DAT_084b72d8);
    FUN_03a8a718(PTR_DAT_084883a0);
    FUN_03a8a718(PTR_DAT_0849ccf8);
    FUN_03a8a718(PTR_DAT_084b7330);
    DAT_0897d0fc = 1;
  }
  uStack000000000000000c = 0;
  lVar6 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
  FUN_0679343c(lVar6,0);
  puVar2 = PTR_DAT_084b72c8;
  if (lVar6 == 0) goto LAB_06971e68;
  *(long *)(lVar6 + 0x10) = param_1;
  thunk_FUN_03afed3c((long *)(lVar6 + 0x10),param_1);
  lVar7 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
  FUN_0679343c(lVar7,0);
  plVar14 = (long *)(lVar6 + 0x18);
  *plVar14 = lVar7;
  thunk_FUN_03afed3c(plVar14,lVar7);
  if (*plVar14 == 0) goto LAB_06971e68;
  plVar8 = (long *)(*plVar14 + 0x10);
  *plVar8 = (long)param_2;
  thunk_FUN_03afed3c(plVar8,param_2);
  if (*plVar14 == 0) goto LAB_06971e68;
  puVar9 = (undefined8 *)(*plVar14 + 0x18);
  *puVar9 = param_3;
  thunk_FUN_03afed3c(puVar9,param_3);
  lVar15 = *plVar14;
  uVar16 = *(undefined8 *)(param_1 + 0x28);
  lVar7 = FUN_07c99058(param_1,0);
  puVar4 = PTR_DAT_084b7018;
  puVar2 = PTR_DAT_08486738;
  if (lVar7 == 0) goto LAB_06971e68;
  uVar10 = FUN_07c9c69c(lVar7,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*(long *)puVar2);
  }
  uVar16 = FUN_04658320(uVar16,uVar10,0,*(undefined8 *)puVar4);
  if (lVar15 == 0) goto LAB_06971e68;
  puVar9 = (undefined8 *)(lVar15 + 0x40);
  *puVar9 = uVar16;
  thunk_FUN_03afed3c(puVar9,uVar16);
  puVar2 = PTR_DAT_084b7330;
  if ((*plVar14 == 0) || (param_2 == (long *)0x0)) goto LAB_06971e68;
  lVar7 = *(long *)(*plVar14 + 0x40);
  uVar16 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
  uVar16 = FUN_065c0764(uVar16,*(undefined8 *)puVar2,0);
  if (lVar7 == 0) goto LAB_06971e68;
  thunk_FUN_07ca23d0(lVar7,uVar16,0);
  lVar7 = *plVar14;
  if ((((lVar7 == 0) || (*(long *)(lVar7 + 0x40) == 0)) ||
      (lVar15 = FUN_07c9c69c(*(long *)(lVar7 + 0x40),0), lVar15 == 0)) ||
     (lVar15 = FUN_07caea60(lVar15,1,0), puVar2 = PTR_DAT_084b5c18, lVar15 == 0)) goto LAB_06971e68;
  uVar16 = FUN_0447aad0(lVar15,*(undefined8 *)PTR_DAT_084b5c18);
  *(undefined8 *)(lVar7 + 0x20) = uVar16;
  thunk_FUN_03afed3c((undefined8 *)(lVar7 + 0x20),uVar16);
  lVar7 = *plVar14;
  if (((lVar7 == 0) || (*(long *)(lVar7 + 0x40) == 0)) ||
     ((lVar15 = FUN_07c9c69c(*(long *)(lVar7 + 0x40),0), lVar15 == 0 ||
      (lVar15 = FUN_07caea60(lVar15,2,0), lVar15 == 0)))) goto LAB_06971e68;
  uVar16 = FUN_0447aad0(lVar15,*(undefined8 *)puVar2);
  *(undefined8 *)(lVar7 + 0x28) = uVar16;
  thunk_FUN_03afed3c((undefined8 *)(lVar7 + 0x28),uVar16);
  lVar7 = *plVar14;
  if (((lVar7 == 0) || (*(long *)(lVar7 + 0x40) == 0)) ||
     ((lVar15 = FUN_07c9c69c(*(long *)(lVar7 + 0x40),0), lVar15 == 0 ||
      (lVar15 = FUN_07caea60(lVar15,3,0), puVar2 = PTR_DAT_08488820, lVar15 == 0))))
  goto LAB_06971e68;
  uVar16 = FUN_0447aad0(lVar15,*(undefined8 *)PTR_DAT_08488820);
  *(undefined8 *)(lVar7 + 0x30) = uVar16;
  thunk_FUN_03afed3c((undefined8 *)(lVar7 + 0x30),uVar16);
  lVar7 = *plVar14;
  if ((((lVar7 == 0) || (*(long *)(lVar7 + 0x40) == 0)) ||
      (lVar15 = FUN_07c9c69c(*(long *)(lVar7 + 0x40),0), lVar15 == 0)) ||
     (lVar15 = FUN_07caea60(lVar15,4,0), lVar15 == 0)) goto LAB_06971e68;
  uVar16 = FUN_0447aad0(lVar15,*(undefined8 *)puVar2);
  *(undefined8 *)(lVar7 + 0x38) = uVar16;
  thunk_FUN_03afed3c((undefined8 *)(lVar7 + 0x38),uVar16);
  if (*plVar14 == 0) goto LAB_06971e68;
  plVar8 = *(long **)(*plVar14 + 0x20);
  uVar16 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
  puVar5 = PTR_DAT_084b72e8;
  puVar4 = PTR_DAT_084b72e0;
  puVar2 = PTR_DAT_084b72d0;
  if (plVar8 == (long *)0x0) goto LAB_06971e68;
  (**(code **)(*plVar8 + 0x5e8))(plVar8,uVar16,*(undefined8 *)(*plVar8 + 0x5f0));
  puVar3 = PTR_DAT_08486760;
  uVar16 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar16 = FUN_0675ff58(uVar16,0);
  uVar16 = (**(code **)(*param_2 + 0x218))(param_2,uVar16,0,*(undefined8 *)(*param_2 + 0x220));
  uVar16 = FUN_044b42f4(uVar16,*(undefined8 *)puVar4);
  lVar7 = FUN_044c8b18(uVar16,*(undefined8 *)puVar5);
  if (lVar7 == 0) {
    return;
  }
  if (*(long *)(lVar7 + 0x10) != 0) {
    if ((*plVar14 == 0) || (plVar8 = *(long **)(*plVar14 + 0x20), plVar8 == (long *)0x0))
    goto LAB_06971e68;
    (**(code **)(*plVar8 + 0x5e8))(plVar8,*(long *)(lVar7 + 0x10),*(undefined8 *)(*plVar8 + 0x5f0));
  }
  uVar16 = (**(code **)(*param_2 + 0x268))(param_2,*(undefined8 *)(*param_2 + 0x270));
  lVar15 = *(long *)(puVar3 + 0x78);
  if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*(long *)(puVar3 + 0xe0));
  }
  uVar10 = FUN_0675ff58(lVar15 + 0x20,0);
  uVar11 = FUN_067690d8(uVar16,uVar10,0);
  if ((uVar11 & 1) == 0) {
    uVar16 = (**(code **)(*param_2 + 0x268))(param_2,*(undefined8 *)(*param_2 + 0x270));
    lVar15 = *(long *)(puVar3 + 0x48);
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)(puVar3 + 0xe0));
    }
    uVar10 = FUN_0675ff58(lVar15 + 0x20,0);
    uVar11 = FUN_067690d8(uVar16,uVar10,0);
    if ((uVar11 & 1) != 0) {
      if (*plVar14 == 0) goto LAB_06971e68;
      plVar17 = *(long **)(*plVar14 + 0x28);
      plVar8 = (long *)(**(code **)(*param_2 + 0x2f8))
                                 (param_2,param_3,*(undefined8 *)(*param_2 + 0x300));
      if ((plVar8 == (long *)0x0) ||
         (uVar16 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170)),
         plVar17 == (long *)0x0)) goto LAB_06971e68;
      (**(code **)(*plVar17 + 0x5e8))(plVar17,uVar16,*(undefined8 *)(*plVar17 + 0x5f0));
      lVar15 = *plVar14;
      if (lVar15 == 0) goto LAB_06971e68;
      fVar18 = (float)*(undefined8 *)(lVar7 + 0x18);
      fVar19 = (float)((ulong)*(undefined8 *)(lVar7 + 0x18) >> 0x20);
      uVar11 = NEON_scvtf(CONCAT44((int)fVar19,(int)fVar18),4);
      *(ulong *)(lVar15 + 0x48) =
           uVar11 ^ (uVar11 ^ 0xcf000000cf000000) &
                    CONCAT44(-(uint)(fVar19 == INFINITY),-(uint)(fVar18 == INFINITY));
      fVar18 = -2.1474836e+09;
      if (*(float *)(lVar7 + 0x20) != INFINITY) {
        fVar18 = (float)(int)*(float *)(lVar7 + 0x20);
      }
      *(float *)(lVar15 + 0x50) = fVar18;
      puVar2 = PTR_DAT_084883a0;
      if (*(long *)(lVar15 + 0x30) == 0) goto LAB_06971e68;
      lVar7 = *(long *)(*(long *)(lVar15 + 0x30) + 0x100);
      uVar16 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
      FUN_07cb26a0(uVar16,lVar6,*(undefined8 *)PTR_DAT_084b7300,0);
      if (lVar7 == 0) goto LAB_06971e68;
      FUN_07cb2770(lVar7,uVar16,0);
      if ((*plVar14 == 0) || (lVar7 = *(long *)(*plVar14 + 0x38), lVar7 == 0)) goto LAB_06971e68;
      lVar7 = *(long *)(lVar7 + 0x100);
      uVar16 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
      puVar9 = (undefined8 *)PTR_DAT_084b7308;
      goto LAB_06971dbc;
    }
    uVar16 = (**(code **)(*param_2 + 0x268))(param_2,*(undefined8 *)(*param_2 + 0x270));
    lVar7 = *(long *)(puVar3 + 0x28);
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)(puVar3 + 0xe0));
    }
    uVar10 = FUN_0675ff58(lVar7 + 0x20,0);
    uVar11 = FUN_067690d8(uVar16,uVar10,0);
    if ((uVar11 & 1) != 0) {
      if (*plVar14 == 0) goto LAB_06971e68;
      plVar17 = *(long **)(*plVar14 + 0x28);
      plVar8 = (long *)(**(code **)(*param_2 + 0x2f8))
                                 (param_2,param_3,*(undefined8 *)(*param_2 + 0x300));
      if ((plVar8 == (long *)0x0) ||
         (uVar16 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170)),
         plVar17 == (long *)0x0)) goto LAB_06971e68;
      (**(code **)(*plVar17 + 0x5e8))(plVar17,uVar16,*(undefined8 *)(*plVar17 + 0x5f0));
      puVar2 = PTR_DAT_084883a0;
      if ((*plVar14 == 0) || (lVar7 = *(long *)(*plVar14 + 0x30), lVar7 == 0)) goto LAB_06971e68;
      lVar7 = *(long *)(lVar7 + 0x100);
      uVar16 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
      FUN_07cb26a0(uVar16,lVar6,*(undefined8 *)PTR_DAT_084b7310,0);
      if (lVar7 == 0) goto LAB_06971e68;
      FUN_07cb2770(lVar7,uVar16,0);
      if ((*plVar14 == 0) || (lVar7 = *(long *)(*plVar14 + 0x38), lVar7 == 0)) goto LAB_06971e68;
      lVar7 = *(long *)(lVar7 + 0x100);
      uVar16 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
      puVar9 = (undefined8 *)PTR_DAT_084b7318;
      goto LAB_06971dbc;
    }
    plVar8 = (long *)(**(code **)(*param_2 + 0x268))(param_2,*(undefined8 *)(*param_2 + 0x270));
    if (plVar8 == (long *)0x0) goto LAB_06971e68;
    uVar11 = (**(code **)(*plVar8 + 0x5b8))(plVar8,*(undefined8 *)(*plVar8 + 0x5c0));
    if ((uVar11 & 1) != 0) {
      plVar8 = (long *)(**(code **)(*param_2 + 0x268))(param_2,*(undefined8 *)(*param_2 + 0x270));
      lVar7 = *plVar14;
      if (((lVar7 == 0) || (*(undefined4 *)(lVar7 + 0x48) = 0, plVar8 == (long *)0x0)) ||
         (lVar15 = (**(code **)(*plVar8 + 0x6f8))(plVar8,0x18,*(undefined8 *)(*plVar8 + 0x700)),
         lVar15 == 0)) goto LAB_06971e68;
      lVar13 = *plVar14;
      *(float *)(lVar7 + 0x4c) = (float)(*(int *)(lVar15 + 0x18) + -1);
      if (lVar13 == 0) goto LAB_06971e68;
      *(undefined4 *)(lVar13 + 0x50) = 0x3f800000;
      puVar2 = PTR_DAT_084883a0;
      if (*(long *)(lVar13 + 0x30) == 0) goto LAB_06971e68;
      lVar7 = *(long *)(*(long *)(lVar13 + 0x30) + 0x100);
      uVar16 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
      FUN_07cb26a0(uVar16,lVar6,*(undefined8 *)PTR_DAT_084b7320,0);
      if (lVar7 == 0) goto LAB_06971e68;
      FUN_07cb2770(lVar7,uVar16,0);
      if ((*plVar14 == 0) || (lVar7 = *(long *)(*plVar14 + 0x38), lVar7 == 0)) goto LAB_06971e68;
      lVar7 = *(long *)(lVar7 + 0x100);
      uVar16 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
      puVar9 = (undefined8 *)PTR_DAT_084b7328;
      goto LAB_06971dbc;
    }
  }
  else {
    if (*plVar14 == 0) goto LAB_06971e68;
    plVar17 = *(long **)(*plVar14 + 0x28);
    plVar8 = (long *)(**(code **)(*param_2 + 0x2f8))
                               (param_2,param_3,*(undefined8 *)(*param_2 + 0x300));
    if (plVar8 == (long *)0x0) goto LAB_06971e68;
    if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)(puVar3 + 0x78) + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8ad40();
    }
    puVar12 = (undefined4 *)thunk_FUN_03ac7604();
    uStack000000000000000c = *puVar12;
    uVar16 = FUN_067638d0(&stack0x0000000c,*(undefined8 *)PTR_DAT_0849ccf8,0);
    if (plVar17 == (long *)0x0) goto LAB_06971e68;
    (**(code **)(*plVar17 + 0x5e8))(plVar17,uVar16,*(undefined8 *)(*plVar17 + 0x5f0));
    lVar15 = *plVar14;
    if (lVar15 == 0) goto LAB_06971e68;
    *(undefined8 *)(lVar15 + 0x48) = *(undefined8 *)(lVar7 + 0x18);
    *(undefined4 *)(lVar15 + 0x50) = *(undefined4 *)(lVar7 + 0x20);
    puVar2 = PTR_DAT_084883a0;
    if (*(long *)(lVar15 + 0x30) == 0) goto LAB_06971e68;
    lVar7 = *(long *)(*(long *)(lVar15 + 0x30) + 0x100);
    uVar16 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
    FUN_07cb26a0(uVar16,lVar6,*(undefined8 *)PTR_DAT_084b72f0,0);
    if (lVar7 == 0) goto LAB_06971e68;
    FUN_07cb2770(lVar7,uVar16,0);
    if ((*plVar14 == 0) || (lVar7 = *(long *)(*plVar14 + 0x38), lVar7 == 0)) goto LAB_06971e68;
    lVar7 = *(long *)(lVar7 + 0x100);
    uVar16 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
    puVar9 = (undefined8 *)PTR_DAT_084b72f8;
LAB_06971dbc:
    FUN_07cb26a0(uVar16,lVar6,*puVar9,0);
    if (lVar7 == 0) goto LAB_06971e68;
    FUN_07cb2770(lVar7,uVar16,0);
  }
  lVar6 = *(long *)(param_1 + 0x20);
  if (lVar6 != 0) {
    lVar15 = *(long *)(lVar6 + 0x10);
    lVar7 = *plVar14;
    lVar13 = *(long *)PTR_DAT_084b72c0;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar15 != 0) {
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        plVar14 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
        *plVar14 = lVar7;
        thunk_FUN_03afed3c(plVar14);
      }
      else {
        FUN_04de85b0(lVar6,lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70))
        ;
      }
      return;
    }
  }
LAB_06971e68:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


