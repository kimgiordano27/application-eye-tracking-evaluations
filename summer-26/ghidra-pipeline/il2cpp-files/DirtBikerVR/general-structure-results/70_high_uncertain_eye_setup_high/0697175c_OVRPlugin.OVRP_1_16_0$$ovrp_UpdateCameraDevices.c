/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_UpdateCameraDevices
ENTRY_POINT: 0697175c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_16_0__ovrp_UpdateCameraDevices(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined4 *puVar11;
  long lVar12;
  long lVar13;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  long unaff_x24;
  long *plVar14;
  undefined8 *unaff_x25;
  long *plVar15;
  float fVar16;
  float fVar17;
  undefined8 in_stack_00000008;
  
                    /* try { // try from 06971768 to 06a7176f has its CatchHandler @ 06971908 */
  if ((param_1 == 0) || (lVar6 = FUN_07caea60(param_1,2,0), lVar6 == 0)) goto LAB_06971e68;
  uVar7 = FUN_0447aad0(lVar6,*unaff_x25);
  *(undefined8 *)(unaff_x24 + 0x28) = uVar7;
  thunk_FUN_03afed3c((undefined8 *)(unaff_x24 + 0x28),uVar7);
  lVar6 = *unaff_x20;
                    /* try { // try from 06971790 to 06a717af has its CatchHandler @ 06971914 */
  if ((lVar6 == 0) ||
     (((*(long *)(lVar6 + 0x40) == 0 ||
       (lVar8 = FUN_07c9c69c(*(long *)(lVar6 + 0x40),0), lVar8 == 0)) ||
      (lVar8 = FUN_07caea60(lVar8,3,0), puVar3 = PTR_DAT_08488820, lVar8 == 0)))) goto LAB_06971e68;
                    /* try { // try from 069717bc to 06a7182f has its CatchHandler @ 06971920 */
  uVar7 = FUN_0447aad0(lVar8,*(undefined8 *)PTR_DAT_08488820);
  *(undefined8 *)(lVar6 + 0x30) = uVar7;
  thunk_FUN_03afed3c((undefined8 *)(lVar6 + 0x30),uVar7);
  lVar6 = *unaff_x20;
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x40) == 0)) ||
      (lVar8 = FUN_07c9c69c(*(long *)(lVar6 + 0x40),0), lVar8 == 0)) ||
     (lVar8 = FUN_07caea60(lVar8,4,0), lVar8 == 0)) goto LAB_06971e68;
  uVar7 = FUN_0447aad0(lVar8,*(undefined8 *)puVar3);
  *(undefined8 *)(lVar6 + 0x38) = uVar7;
  thunk_FUN_03afed3c((undefined8 *)(lVar6 + 0x38),uVar7);
  if (*unaff_x20 == 0) goto LAB_06971e68;
  plVar14 = *(long **)(*unaff_x20 + 0x20);
  uVar7 = (**(code **)(*unaff_x22 + 0x1b8))();
  puVar5 = PTR_DAT_084b72e8;
  puVar4 = PTR_DAT_084b72e0;
  puVar3 = PTR_DAT_084b72d0;
  if (plVar14 == (long *)0x0) goto LAB_06971e68;
  (**(code **)(*plVar14 + 0x5e8))(plVar14,uVar7,*(undefined8 *)(*plVar14 + 0x5f0));
  puVar2 = PTR_DAT_08486760;
  uVar7 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_0675ff58(uVar7,0);
  uVar7 = (**(code **)(*unaff_x22 + 0x218))();
  uVar7 = FUN_044b42f4(uVar7,*(undefined8 *)puVar4);
  lVar6 = FUN_044c8b18(uVar7,*(undefined8 *)puVar5);
  if (lVar6 == 0) {
    return;
  }
  if (*(long *)(lVar6 + 0x10) != 0) {
    if ((*unaff_x20 == 0) || (plVar14 = *(long **)(*unaff_x20 + 0x20), plVar14 == (long *)0x0))
    goto LAB_06971e68;
    (**(code **)(*plVar14 + 0x5e8))
              (plVar14,*(long *)(lVar6 + 0x10),*(undefined8 *)(*plVar14 + 0x5f0));
  }
  uVar7 = (**(code **)(*unaff_x22 + 0x268))();
  lVar8 = *(long *)(puVar2 + 0x78);
  if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*(long *)(puVar2 + 0xe0));
  }
  uVar9 = FUN_0675ff58(lVar8 + 0x20,0);
  uVar10 = FUN_067690d8(uVar7,uVar9,0);
  if ((uVar10 & 1) == 0) {
    uVar7 = (**(code **)(*unaff_x22 + 0x268))();
    lVar8 = *(long *)(puVar2 + 0x48);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)(puVar2 + 0xe0));
    }
    uVar9 = FUN_0675ff58(lVar8 + 0x20,0);
    uVar10 = FUN_067690d8(uVar7,uVar9,0);
    if ((uVar10 & 1) != 0) {
      if (*unaff_x20 == 0) goto LAB_06971e68;
      plVar15 = *(long **)(*unaff_x20 + 0x28);
      plVar14 = (long *)(**(code **)(*unaff_x22 + 0x2f8))();
      if ((plVar14 == (long *)0x0) ||
         (uVar7 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170)),
         plVar15 == (long *)0x0)) goto LAB_06971e68;
      (**(code **)(*plVar15 + 0x5e8))(plVar15,uVar7,*(undefined8 *)(*plVar15 + 0x5f0));
      lVar8 = *unaff_x20;
      if (lVar8 == 0) goto LAB_06971e68;
      fVar16 = (float)*(undefined8 *)(lVar6 + 0x18);
      fVar17 = (float)((ulong)*(undefined8 *)(lVar6 + 0x18) >> 0x20);
      uVar10 = NEON_scvtf(CONCAT44((int)fVar17,(int)fVar16),4);
      *(ulong *)(lVar8 + 0x48) =
           uVar10 ^ (uVar10 ^ 0xcf000000cf000000) &
                    CONCAT44(-(uint)(fVar17 == INFINITY),-(uint)(fVar16 == INFINITY));
      fVar16 = -2.1474836e+09;
      if (*(float *)(lVar6 + 0x20) != INFINITY) {
        fVar16 = (float)(int)*(float *)(lVar6 + 0x20);
      }
      *(float *)(lVar8 + 0x50) = fVar16;
      puVar3 = PTR_DAT_084883a0;
      if (*(long *)(lVar8 + 0x30) == 0) goto LAB_06971e68;
      lVar6 = *(long *)(*(long *)(lVar8 + 0x30) + 0x100);
      uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
      FUN_07cb26a0();
      if (lVar6 == 0) goto LAB_06971e68;
      FUN_07cb2770(lVar6,uVar7,0);
      if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x38), lVar6 == 0))
      goto LAB_06971e68;
      lVar6 = *(long *)(lVar6 + 0x100);
      uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)puVar3);
      goto LAB_06971dbc;
    }
    uVar7 = (**(code **)(*unaff_x22 + 0x268))();
    lVar6 = *(long *)(puVar2 + 0x28);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)(puVar2 + 0xe0));
    }
    uVar9 = FUN_0675ff58(lVar6 + 0x20,0);
    uVar10 = FUN_067690d8(uVar7,uVar9,0);
    if ((uVar10 & 1) != 0) {
      if (*unaff_x20 == 0) goto LAB_06971e68;
      plVar15 = *(long **)(*unaff_x20 + 0x28);
      plVar14 = (long *)(**(code **)(*unaff_x22 + 0x2f8))();
      if ((plVar14 == (long *)0x0) ||
         (uVar7 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170)),
         plVar15 == (long *)0x0)) goto LAB_06971e68;
      (**(code **)(*plVar15 + 0x5e8))(plVar15,uVar7,*(undefined8 *)(*plVar15 + 0x5f0));
      puVar3 = PTR_DAT_084883a0;
      if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x30), lVar6 == 0))
      goto LAB_06971e68;
      lVar6 = *(long *)(lVar6 + 0x100);
      uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
      FUN_07cb26a0();
      if (lVar6 == 0) goto LAB_06971e68;
      FUN_07cb2770(lVar6,uVar7,0);
      if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x38), lVar6 == 0))
      goto LAB_06971e68;
      lVar6 = *(long *)(lVar6 + 0x100);
      uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)puVar3);
      goto LAB_06971dbc;
    }
    plVar14 = (long *)(**(code **)(*unaff_x22 + 0x268))();
    if (plVar14 == (long *)0x0) goto LAB_06971e68;
    uVar10 = (**(code **)(*plVar14 + 0x5b8))(plVar14,*(undefined8 *)(*plVar14 + 0x5c0));
    if ((uVar10 & 1) != 0) {
      plVar14 = (long *)(**(code **)(*unaff_x22 + 0x268))();
      lVar6 = *unaff_x20;
      if (((lVar6 == 0) || (*(undefined4 *)(lVar6 + 0x48) = 0, plVar14 == (long *)0x0)) ||
         (lVar8 = (**(code **)(*plVar14 + 0x6f8))(plVar14,0x18,*(undefined8 *)(*plVar14 + 0x700)),
         lVar8 == 0)) goto LAB_06971e68;
      lVar12 = *unaff_x20;
      *(float *)(lVar6 + 0x4c) = (float)(*(int *)(lVar8 + 0x18) + -1);
      if (lVar12 == 0) goto LAB_06971e68;
      *(undefined4 *)(lVar12 + 0x50) = 0x3f800000;
      puVar3 = PTR_DAT_084883a0;
      if (*(long *)(lVar12 + 0x30) == 0) goto LAB_06971e68;
      lVar6 = *(long *)(*(long *)(lVar12 + 0x30) + 0x100);
      uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
      FUN_07cb26a0();
      if (lVar6 == 0) goto LAB_06971e68;
      FUN_07cb2770(lVar6,uVar7,0);
      if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x38), lVar6 == 0))
      goto LAB_06971e68;
      lVar6 = *(long *)(lVar6 + 0x100);
      uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)puVar3);
      goto LAB_06971dbc;
    }
  }
  else {
    if (*unaff_x20 == 0) goto LAB_06971e68;
    plVar15 = *(long **)(*unaff_x20 + 0x28);
    plVar14 = (long *)(**(code **)(*unaff_x22 + 0x2f8))();
    if (plVar14 == (long *)0x0) goto LAB_06971e68;
    if (*(long *)(*plVar14 + 0x40) != *(long *)(*(long *)(puVar2 + 0x78) + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8ad40();
    }
    puVar11 = (undefined4 *)thunk_FUN_03ac7604();
    in_stack_00000008._4_4_ = *puVar11;
    uVar7 = FUN_067638d0((long)&stack0x00000008 + 4,*(undefined8 *)PTR_DAT_0849ccf8,0);
    if (plVar15 == (long *)0x0) goto LAB_06971e68;
    (**(code **)(*plVar15 + 0x5e8))(plVar15,uVar7,*(undefined8 *)(*plVar15 + 0x5f0));
    lVar8 = *unaff_x20;
    if (lVar8 == 0) goto LAB_06971e68;
    *(undefined8 *)(lVar8 + 0x48) = *(undefined8 *)(lVar6 + 0x18);
    *(undefined4 *)(lVar8 + 0x50) = *(undefined4 *)(lVar6 + 0x20);
    puVar3 = PTR_DAT_084883a0;
    if (*(long *)(lVar8 + 0x30) == 0) goto LAB_06971e68;
    lVar6 = *(long *)(*(long *)(lVar8 + 0x30) + 0x100);
    uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
    FUN_07cb26a0();
    if (lVar6 == 0) goto LAB_06971e68;
    FUN_07cb2770(lVar6,uVar7,0);
    if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x38), lVar6 == 0)) goto LAB_06971e68;
    lVar6 = *(long *)(lVar6 + 0x100);
    uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)puVar3);
LAB_06971dbc:
    FUN_07cb26a0();
    if (lVar6 == 0) goto LAB_06971e68;
    FUN_07cb2770(lVar6,uVar7,0);
  }
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if (lVar6 != 0) {
    lVar12 = *(long *)(lVar6 + 0x10);
    lVar8 = *unaff_x20;
    lVar13 = *(long *)PTR_DAT_084b72c0;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar12 != 0) {
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        plVar14 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
        *plVar14 = lVar8;
        thunk_FUN_03afed3c(plVar14);
      }
      else {
        FUN_04de85b0(lVar6,lVar8,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70))
        ;
      }
      return;
    }
  }
LAB_06971e68:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


