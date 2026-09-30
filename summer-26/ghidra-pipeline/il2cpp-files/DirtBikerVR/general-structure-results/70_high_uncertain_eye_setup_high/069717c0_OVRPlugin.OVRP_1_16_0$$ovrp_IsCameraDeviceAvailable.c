/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_IsCameraDeviceAvailable
ENTRY_POINT: 069717c0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_16_0__ovrp_IsCameraDeviceAvailable(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  long lVar11;
  long lVar12;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  long unaff_x24;
  long lVar13;
  long *plVar14;
  undefined8 *unaff_x25;
  long *plVar15;
  float fVar16;
  float fVar17;
  undefined8 in_stack_00000008;
  
  uVar6 = FUN_0447aad0();
  *(undefined8 *)(unaff_x24 + 0x30) = uVar6;
  thunk_FUN_03afed3c((undefined8 *)(unaff_x24 + 0x30),uVar6);
  lVar13 = *unaff_x20;
  if ((((lVar13 == 0) || (*(long *)(lVar13 + 0x40) == 0)) ||
      (lVar7 = FUN_07c9c69c(*(long *)(lVar13 + 0x40),0), lVar7 == 0)) ||
     (lVar7 = FUN_07caea60(lVar7,4,0), lVar7 == 0)) goto LAB_06971e68;
  uVar6 = FUN_0447aad0(lVar7,*unaff_x25);
  *(undefined8 *)(lVar13 + 0x38) = uVar6;
  thunk_FUN_03afed3c((undefined8 *)(lVar13 + 0x38),uVar6);
  if (*unaff_x20 == 0) goto LAB_06971e68;
  plVar14 = *(long **)(*unaff_x20 + 0x20);
                    /* try { // try from 06971830 to 06a718bb has its CatchHandler @ 0697133c */
  uVar6 = (**(code **)(*unaff_x22 + 0x1b8))();
  puVar5 = PTR_DAT_084b72e8;
  puVar4 = PTR_DAT_084b72e0;
  puVar3 = PTR_DAT_084b72d0;
  if (plVar14 == (long *)0x0) goto LAB_06971e68;
  (**(code **)(*plVar14 + 0x5e8))(plVar14,uVar6,*(undefined8 *)(*plVar14 + 0x5f0));
  puVar2 = PTR_DAT_08486760;
  uVar6 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_0675ff58(uVar6,0);
  uVar6 = (**(code **)(*unaff_x22 + 0x218))();
  uVar6 = FUN_044b42f4(uVar6,*(undefined8 *)puVar4);
  lVar13 = FUN_044c8b18(uVar6,*(undefined8 *)puVar5);
  if (lVar13 == 0) {
    return;
  }
  if (*(long *)(lVar13 + 0x10) != 0) {
    if ((*unaff_x20 == 0) || (plVar14 = *(long **)(*unaff_x20 + 0x20), plVar14 == (long *)0x0))
    goto LAB_06971e68;
    (**(code **)(*plVar14 + 0x5e8))
              (plVar14,*(long *)(lVar13 + 0x10),*(undefined8 *)(*plVar14 + 0x5f0));
  }
  uVar6 = (**(code **)(*unaff_x22 + 0x268))();
  lVar7 = *(long *)(puVar2 + 0x78);
  if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*(long *)(puVar2 + 0xe0));
  }
  uVar8 = FUN_0675ff58(lVar7 + 0x20,0);
  uVar9 = FUN_067690d8(uVar6,uVar8,0);
  if ((uVar9 & 1) == 0) {
    uVar6 = (**(code **)(*unaff_x22 + 0x268))();
    lVar7 = *(long *)(puVar2 + 0x48);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)(puVar2 + 0xe0));
    }
    uVar8 = FUN_0675ff58(lVar7 + 0x20,0);
    uVar9 = FUN_067690d8(uVar6,uVar8,0);
    if ((uVar9 & 1) != 0) {
      if (*unaff_x20 == 0) goto LAB_06971e68;
      plVar15 = *(long **)(*unaff_x20 + 0x28);
      plVar14 = (long *)(**(code **)(*unaff_x22 + 0x2f8))();
      if ((plVar14 == (long *)0x0) ||
         (uVar6 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170)),
         plVar15 == (long *)0x0)) goto LAB_06971e68;
      (**(code **)(*plVar15 + 0x5e8))(plVar15,uVar6,*(undefined8 *)(*plVar15 + 0x5f0));
      lVar7 = *unaff_x20;
      if (lVar7 == 0) goto LAB_06971e68;
      fVar16 = (float)*(undefined8 *)(lVar13 + 0x18);
      fVar17 = (float)((ulong)*(undefined8 *)(lVar13 + 0x18) >> 0x20);
      uVar9 = NEON_scvtf(CONCAT44((int)fVar17,(int)fVar16),4);
      *(ulong *)(lVar7 + 0x48) =
           uVar9 ^ (uVar9 ^ 0xcf000000cf000000) &
                   CONCAT44(-(uint)(fVar17 == INFINITY),-(uint)(fVar16 == INFINITY));
      fVar16 = -2.1474836e+09;
      if (*(float *)(lVar13 + 0x20) != INFINITY) {
        fVar16 = (float)(int)*(float *)(lVar13 + 0x20);
      }
      *(float *)(lVar7 + 0x50) = fVar16;
      puVar3 = PTR_DAT_084883a0;
      if (*(long *)(lVar7 + 0x30) == 0) goto LAB_06971e68;
      lVar13 = *(long *)(*(long *)(lVar7 + 0x30) + 0x100);
      uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
      FUN_07cb26a0();
      if (lVar13 == 0) goto LAB_06971e68;
      FUN_07cb2770(lVar13,uVar6,0);
      if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 == 0))
      goto LAB_06971e68;
      lVar13 = *(long *)(lVar13 + 0x100);
      uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)puVar3);
      goto LAB_06971dbc;
    }
    uVar6 = (**(code **)(*unaff_x22 + 0x268))();
    lVar13 = *(long *)(puVar2 + 0x28);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)(puVar2 + 0xe0));
    }
    uVar8 = FUN_0675ff58(lVar13 + 0x20,0);
    uVar9 = FUN_067690d8(uVar6,uVar8,0);
    if ((uVar9 & 1) != 0) {
      if (*unaff_x20 == 0) goto LAB_06971e68;
      plVar15 = *(long **)(*unaff_x20 + 0x28);
      plVar14 = (long *)(**(code **)(*unaff_x22 + 0x2f8))();
      if ((plVar14 == (long *)0x0) ||
         (uVar6 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170)),
         plVar15 == (long *)0x0)) goto LAB_06971e68;
      (**(code **)(*plVar15 + 0x5e8))(plVar15,uVar6,*(undefined8 *)(*plVar15 + 0x5f0));
      puVar3 = PTR_DAT_084883a0;
      if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x30), lVar13 == 0))
      goto LAB_06971e68;
      lVar13 = *(long *)(lVar13 + 0x100);
      uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
      FUN_07cb26a0();
      if (lVar13 == 0) goto LAB_06971e68;
      FUN_07cb2770(lVar13,uVar6,0);
      if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 == 0))
      goto LAB_06971e68;
      lVar13 = *(long *)(lVar13 + 0x100);
      uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)puVar3);
      goto LAB_06971dbc;
    }
    plVar14 = (long *)(**(code **)(*unaff_x22 + 0x268))();
    if (plVar14 == (long *)0x0) goto LAB_06971e68;
    uVar9 = (**(code **)(*plVar14 + 0x5b8))(plVar14,*(undefined8 *)(*plVar14 + 0x5c0));
    if ((uVar9 & 1) != 0) {
      plVar14 = (long *)(**(code **)(*unaff_x22 + 0x268))();
      lVar13 = *unaff_x20;
      if (((lVar13 == 0) || (*(undefined4 *)(lVar13 + 0x48) = 0, plVar14 == (long *)0x0)) ||
         (lVar7 = (**(code **)(*plVar14 + 0x6f8))(plVar14,0x18,*(undefined8 *)(*plVar14 + 0x700)),
         lVar7 == 0)) goto LAB_06971e68;
      lVar11 = *unaff_x20;
      *(float *)(lVar13 + 0x4c) = (float)(*(int *)(lVar7 + 0x18) + -1);
      if (lVar11 == 0) goto LAB_06971e68;
      *(undefined4 *)(lVar11 + 0x50) = 0x3f800000;
      puVar3 = PTR_DAT_084883a0;
      if (*(long *)(lVar11 + 0x30) == 0) goto LAB_06971e68;
      lVar13 = *(long *)(*(long *)(lVar11 + 0x30) + 0x100);
      uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
      FUN_07cb26a0();
      if (lVar13 == 0) goto LAB_06971e68;
      FUN_07cb2770(lVar13,uVar6,0);
      if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 == 0))
      goto LAB_06971e68;
      lVar13 = *(long *)(lVar13 + 0x100);
      uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)puVar3);
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
    puVar10 = (undefined4 *)thunk_FUN_03ac7604();
    in_stack_00000008._4_4_ = *puVar10;
    uVar6 = FUN_067638d0((long)&stack0x00000008 + 4,*(undefined8 *)PTR_DAT_0849ccf8,0);
    if (plVar15 == (long *)0x0) goto LAB_06971e68;
    (**(code **)(*plVar15 + 0x5e8))(plVar15,uVar6,*(undefined8 *)(*plVar15 + 0x5f0));
    lVar7 = *unaff_x20;
    if (lVar7 == 0) goto LAB_06971e68;
    *(undefined8 *)(lVar7 + 0x48) = *(undefined8 *)(lVar13 + 0x18);
    *(undefined4 *)(lVar7 + 0x50) = *(undefined4 *)(lVar13 + 0x20);
    puVar3 = PTR_DAT_084883a0;
    if (*(long *)(lVar7 + 0x30) == 0) goto LAB_06971e68;
    lVar13 = *(long *)(*(long *)(lVar7 + 0x30) + 0x100);
    uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
    FUN_07cb26a0();
    if (lVar13 == 0) goto LAB_06971e68;
    FUN_07cb2770(lVar13,uVar6,0);
    if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 == 0))
    goto LAB_06971e68;
    lVar13 = *(long *)(lVar13 + 0x100);
    uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)puVar3);
LAB_06971dbc:
    FUN_07cb26a0();
    if (lVar13 == 0) goto LAB_06971e68;
    FUN_07cb2770(lVar13,uVar6,0);
  }
  lVar13 = *(long *)(unaff_x19 + 0x20);
  if (lVar13 != 0) {
    lVar11 = *(long *)(lVar13 + 0x10);
    lVar7 = *unaff_x20;
    lVar12 = *(long *)PTR_DAT_084b72c0;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (lVar11 != 0) {
      uVar1 = *(uint *)(lVar13 + 0x18);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
        plVar14 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
        *plVar14 = lVar7;
        thunk_FUN_03afed3c(plVar14);
      }
      else {
        FUN_04de85b0(lVar13,lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70)
                    );
      }
      return;
    }
  }
LAB_06971e68:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


