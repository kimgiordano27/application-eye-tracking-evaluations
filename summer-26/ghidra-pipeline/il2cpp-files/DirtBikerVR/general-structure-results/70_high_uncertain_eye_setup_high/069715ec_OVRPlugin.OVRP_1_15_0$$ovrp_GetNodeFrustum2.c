/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_GetNodeFrustum2
ENTRY_POINT: 069715ec
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


void OVRPlugin_OVRP_1_15_0__ovrp_GetNodeFrustum2(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  long lVar10;
  long lVar11;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *plVar12;
  long unaff_x21;
  long *unaff_x22;
  undefined8 unaff_x23;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 uVar16;
  long *plVar17;
  float fVar18;
  float fVar19;
  undefined8 in_stack_00000008;
  
  thunk_FUN_03afed3c();
  lVar6 = thunk_FUN_03ac74bc(*unaff_x20);
  FUN_0679343c(lVar6,0);
  plVar12 = (long *)(unaff_x21 + 0x18);
  *plVar12 = lVar6;
  thunk_FUN_03afed3c(plVar12,lVar6);
  if (*plVar12 == 0) goto LAB_06971e68;
  *(long **)(*plVar12 + 0x10) = unaff_x22;
  thunk_FUN_03afed3c();
                    /* try { // try from 0697162c to 06a71633 has its CatchHandler @ 0697190c */
  if (*plVar12 == 0) goto LAB_06971e68;
  *(undefined8 *)(*plVar12 + 0x18) = unaff_x23;
  thunk_FUN_03afed3c();
  lVar13 = *plVar12;
  uVar16 = *(undefined8 *)(unaff_x19 + 0x28);
  lVar6 = FUN_07c99058();
  puVar4 = PTR_DAT_084b7018;
  puVar2 = PTR_DAT_08486738;
                    /* try { // try from 06971654 to 06a71673 has its CatchHandler @ 06971918 */
  if (lVar6 == 0) goto LAB_06971e68;
  uVar7 = FUN_07c9c69c(lVar6,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*(long *)puVar2);
  }
  uVar16 = FUN_04658320(uVar16,uVar7,0,*(undefined8 *)puVar4);
  if (lVar13 == 0) goto LAB_06971e68;
  puVar14 = (undefined8 *)(lVar13 + 0x40);
  *puVar14 = uVar16;
  thunk_FUN_03afed3c(puVar14,uVar16);
  puVar2 = PTR_DAT_084b7330;
  if ((*plVar12 == 0) || (unaff_x22 == (long *)0x0)) goto LAB_06971e68;
  lVar6 = *(long *)(*plVar12 + 0x40);
  uVar16 = (**(code **)(*unaff_x22 + 0x1b8))();
  uVar16 = FUN_065c0764(uVar16,*(undefined8 *)puVar2,0);
  if (lVar6 == 0) goto LAB_06971e68;
  thunk_FUN_07ca23d0(lVar6,uVar16,0);
  lVar6 = *plVar12;
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x40) == 0)) ||
      (lVar13 = FUN_07c9c69c(*(long *)(lVar6 + 0x40),0), lVar13 == 0)) ||
     (lVar13 = FUN_07caea60(lVar13,1,0), puVar2 = PTR_DAT_084b5c18, lVar13 == 0)) goto LAB_06971e68;
  uVar16 = FUN_0447aad0(lVar13,*(undefined8 *)PTR_DAT_084b5c18);
  *(undefined8 *)(lVar6 + 0x20) = uVar16;
  thunk_FUN_03afed3c((undefined8 *)(lVar6 + 0x20),uVar16);
  lVar6 = *plVar12;
  if (((lVar6 == 0) || (*(long *)(lVar6 + 0x40) == 0)) ||
     ((lVar13 = FUN_07c9c69c(*(long *)(lVar6 + 0x40),0), lVar13 == 0 ||
      (lVar13 = FUN_07caea60(lVar13,2,0), lVar13 == 0)))) goto LAB_06971e68;
  uVar16 = FUN_0447aad0(lVar13,*(undefined8 *)puVar2);
  *(undefined8 *)(lVar6 + 0x28) = uVar16;
  thunk_FUN_03afed3c((undefined8 *)(lVar6 + 0x28),uVar16);
  lVar6 = *plVar12;
  if (((lVar6 == 0) || (*(long *)(lVar6 + 0x40) == 0)) ||
     ((lVar13 = FUN_07c9c69c(*(long *)(lVar6 + 0x40),0), lVar13 == 0 ||
      (lVar13 = FUN_07caea60(lVar13,3,0), puVar2 = PTR_DAT_08488820, lVar13 == 0))))
  goto LAB_06971e68;
  uVar16 = FUN_0447aad0(lVar13,*(undefined8 *)PTR_DAT_08488820);
  *(undefined8 *)(lVar6 + 0x30) = uVar16;
  thunk_FUN_03afed3c((undefined8 *)(lVar6 + 0x30),uVar16);
  lVar6 = *plVar12;
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x40) == 0)) ||
      (lVar13 = FUN_07c9c69c(*(long *)(lVar6 + 0x40),0), lVar13 == 0)) ||
     (lVar13 = FUN_07caea60(lVar13,4,0), lVar13 == 0)) goto LAB_06971e68;
  uVar16 = FUN_0447aad0(lVar13,*(undefined8 *)puVar2);
  *(undefined8 *)(lVar6 + 0x38) = uVar16;
  thunk_FUN_03afed3c((undefined8 *)(lVar6 + 0x38),uVar16);
  if (*plVar12 == 0) goto LAB_06971e68;
  plVar15 = *(long **)(*plVar12 + 0x20);
  uVar16 = (**(code **)(*unaff_x22 + 0x1b8))();
  puVar5 = PTR_DAT_084b72e8;
  puVar4 = PTR_DAT_084b72e0;
  puVar2 = PTR_DAT_084b72d0;
  if (plVar15 == (long *)0x0) goto LAB_06971e68;
  (**(code **)(*plVar15 + 0x5e8))(plVar15,uVar16,*(undefined8 *)(*plVar15 + 0x5f0));
  puVar3 = PTR_DAT_08486760;
  uVar16 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_0675ff58(uVar16,0);
  uVar16 = (**(code **)(*unaff_x22 + 0x218))();
  uVar16 = FUN_044b42f4(uVar16,*(undefined8 *)puVar4);
  lVar6 = FUN_044c8b18(uVar16,*(undefined8 *)puVar5);
  if (lVar6 == 0) {
    return;
  }
  if (*(long *)(lVar6 + 0x10) != 0) {
    if ((*plVar12 == 0) || (plVar15 = *(long **)(*plVar12 + 0x20), plVar15 == (long *)0x0))
    goto LAB_06971e68;
    (**(code **)(*plVar15 + 0x5e8))
              (plVar15,*(long *)(lVar6 + 0x10),*(undefined8 *)(*plVar15 + 0x5f0));
  }
  uVar16 = (**(code **)(*unaff_x22 + 0x268))();
  lVar13 = *(long *)(puVar3 + 0x78);
  if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*(long *)(puVar3 + 0xe0));
  }
  uVar7 = FUN_0675ff58(lVar13 + 0x20,0);
  uVar8 = FUN_067690d8(uVar16,uVar7,0);
  if ((uVar8 & 1) == 0) {
    uVar16 = (**(code **)(*unaff_x22 + 0x268))();
    lVar13 = *(long *)(puVar3 + 0x48);
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)(puVar3 + 0xe0));
    }
    uVar7 = FUN_0675ff58(lVar13 + 0x20,0);
    uVar8 = FUN_067690d8(uVar16,uVar7,0);
    if ((uVar8 & 1) != 0) {
      if (*plVar12 == 0) goto LAB_06971e68;
      plVar17 = *(long **)(*plVar12 + 0x28);
      plVar15 = (long *)(**(code **)(*unaff_x22 + 0x2f8))();
      if ((plVar15 == (long *)0x0) ||
         (uVar16 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170)),
         plVar17 == (long *)0x0)) goto LAB_06971e68;
      (**(code **)(*plVar17 + 0x5e8))(plVar17,uVar16,*(undefined8 *)(*plVar17 + 0x5f0));
      lVar13 = *plVar12;
      if (lVar13 == 0) goto LAB_06971e68;
      fVar18 = (float)*(undefined8 *)(lVar6 + 0x18);
      fVar19 = (float)((ulong)*(undefined8 *)(lVar6 + 0x18) >> 0x20);
      uVar8 = NEON_scvtf(CONCAT44((int)fVar19,(int)fVar18),4);
      *(ulong *)(lVar13 + 0x48) =
           uVar8 ^ (uVar8 ^ 0xcf000000cf000000) &
                   CONCAT44(-(uint)(fVar19 == INFINITY),-(uint)(fVar18 == INFINITY));
      fVar18 = -2.1474836e+09;
      if (*(float *)(lVar6 + 0x20) != INFINITY) {
        fVar18 = (float)(int)*(float *)(lVar6 + 0x20);
      }
      *(float *)(lVar13 + 0x50) = fVar18;
      puVar2 = PTR_DAT_084883a0;
      if (*(long *)(lVar13 + 0x30) == 0) goto LAB_06971e68;
      lVar6 = *(long *)(*(long *)(lVar13 + 0x30) + 0x100);
      uVar16 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
      FUN_07cb26a0();
      if (lVar6 == 0) goto LAB_06971e68;
      FUN_07cb2770(lVar6,uVar16,0);
      if ((*plVar12 == 0) || (lVar6 = *(long *)(*plVar12 + 0x38), lVar6 == 0)) goto LAB_06971e68;
      lVar6 = *(long *)(lVar6 + 0x100);
      uVar16 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
      goto LAB_06971dbc;
    }
    uVar16 = (**(code **)(*unaff_x22 + 0x268))();
    lVar6 = *(long *)(puVar3 + 0x28);
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)(puVar3 + 0xe0));
    }
    uVar7 = FUN_0675ff58(lVar6 + 0x20,0);
    uVar8 = FUN_067690d8(uVar16,uVar7,0);
    if ((uVar8 & 1) != 0) {
      if (*plVar12 == 0) goto LAB_06971e68;
      plVar17 = *(long **)(*plVar12 + 0x28);
      plVar15 = (long *)(**(code **)(*unaff_x22 + 0x2f8))();
      if ((plVar15 == (long *)0x0) ||
         (uVar16 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170)),
         plVar17 == (long *)0x0)) goto LAB_06971e68;
      (**(code **)(*plVar17 + 0x5e8))(plVar17,uVar16,*(undefined8 *)(*plVar17 + 0x5f0));
      puVar2 = PTR_DAT_084883a0;
      if ((*plVar12 == 0) || (lVar6 = *(long *)(*plVar12 + 0x30), lVar6 == 0)) goto LAB_06971e68;
      lVar6 = *(long *)(lVar6 + 0x100);
      uVar16 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
      FUN_07cb26a0();
      if (lVar6 == 0) goto LAB_06971e68;
      FUN_07cb2770(lVar6,uVar16,0);
      if ((*plVar12 == 0) || (lVar6 = *(long *)(*plVar12 + 0x38), lVar6 == 0)) goto LAB_06971e68;
      lVar6 = *(long *)(lVar6 + 0x100);
      uVar16 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
      goto LAB_06971dbc;
    }
    plVar15 = (long *)(**(code **)(*unaff_x22 + 0x268))();
    if (plVar15 == (long *)0x0) goto LAB_06971e68;
    uVar8 = (**(code **)(*plVar15 + 0x5b8))(plVar15,*(undefined8 *)(*plVar15 + 0x5c0));
    if ((uVar8 & 1) != 0) {
      plVar15 = (long *)(**(code **)(*unaff_x22 + 0x268))();
      lVar6 = *plVar12;
      if (((lVar6 == 0) || (*(undefined4 *)(lVar6 + 0x48) = 0, plVar15 == (long *)0x0)) ||
         (lVar13 = (**(code **)(*plVar15 + 0x6f8))(plVar15,0x18,*(undefined8 *)(*plVar15 + 0x700)),
         lVar13 == 0)) goto LAB_06971e68;
      lVar10 = *plVar12;
      *(float *)(lVar6 + 0x4c) = (float)(*(int *)(lVar13 + 0x18) + -1);
      if (lVar10 == 0) goto LAB_06971e68;
      *(undefined4 *)(lVar10 + 0x50) = 0x3f800000;
      puVar2 = PTR_DAT_084883a0;
      if (*(long *)(lVar10 + 0x30) == 0) goto LAB_06971e68;
      lVar6 = *(long *)(*(long *)(lVar10 + 0x30) + 0x100);
      uVar16 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
      FUN_07cb26a0();
      if (lVar6 == 0) goto LAB_06971e68;
      FUN_07cb2770(lVar6,uVar16,0);
      if ((*plVar12 == 0) || (lVar6 = *(long *)(*plVar12 + 0x38), lVar6 == 0)) goto LAB_06971e68;
      lVar6 = *(long *)(lVar6 + 0x100);
      uVar16 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
      goto LAB_06971dbc;
    }
  }
  else {
    if (*plVar12 == 0) goto LAB_06971e68;
    plVar17 = *(long **)(*plVar12 + 0x28);
    plVar15 = (long *)(**(code **)(*unaff_x22 + 0x2f8))();
    if (plVar15 == (long *)0x0) goto LAB_06971e68;
    if (*(long *)(*plVar15 + 0x40) != *(long *)(*(long *)(puVar3 + 0x78) + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8ad40();
    }
    puVar9 = (undefined4 *)thunk_FUN_03ac7604();
    in_stack_00000008._4_4_ = *puVar9;
    uVar16 = FUN_067638d0((long)&stack0x00000008 + 4,*(undefined8 *)PTR_DAT_0849ccf8,0);
    if (plVar17 == (long *)0x0) goto LAB_06971e68;
    (**(code **)(*plVar17 + 0x5e8))(plVar17,uVar16,*(undefined8 *)(*plVar17 + 0x5f0));
    lVar13 = *plVar12;
    if (lVar13 == 0) goto LAB_06971e68;
    *(undefined8 *)(lVar13 + 0x48) = *(undefined8 *)(lVar6 + 0x18);
    *(undefined4 *)(lVar13 + 0x50) = *(undefined4 *)(lVar6 + 0x20);
    puVar2 = PTR_DAT_084883a0;
    if (*(long *)(lVar13 + 0x30) == 0) goto LAB_06971e68;
    lVar6 = *(long *)(*(long *)(lVar13 + 0x30) + 0x100);
    uVar16 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
    FUN_07cb26a0();
    if (lVar6 == 0) goto LAB_06971e68;
    FUN_07cb2770(lVar6,uVar16,0);
    if ((*plVar12 == 0) || (lVar6 = *(long *)(*plVar12 + 0x38), lVar6 == 0)) goto LAB_06971e68;
    lVar6 = *(long *)(lVar6 + 0x100);
    uVar16 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
LAB_06971dbc:
    FUN_07cb26a0();
    if (lVar6 == 0) goto LAB_06971e68;
    FUN_07cb2770(lVar6,uVar16,0);
  }
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if (lVar6 != 0) {
    lVar10 = *(long *)(lVar6 + 0x10);
    lVar13 = *plVar12;
    lVar11 = *(long *)PTR_DAT_084b72c0;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar10 != 0) {
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        plVar12 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
        *plVar12 = lVar13;
        thunk_FUN_03afed3c(plVar12);
      }
      else {
        FUN_04de85b0(lVar6,lVar13,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70)
                    );
      }
      return;
    }
  }
LAB_06971e68:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


