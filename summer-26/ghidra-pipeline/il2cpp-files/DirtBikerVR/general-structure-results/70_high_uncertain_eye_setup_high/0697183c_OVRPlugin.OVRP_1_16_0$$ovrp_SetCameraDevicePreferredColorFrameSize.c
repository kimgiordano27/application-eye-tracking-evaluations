/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_SetCameraDevicePreferredColorFrameSize
ENTRY_POINT: 0697183c
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


void OVRPlugin_OVRP_1_16_0__ovrp_SetCameraDevicePreferredColorFrameSize(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  long lVar10;
  long lVar11;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  long *unaff_x24;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long unaff_x28;
  undefined8 *puVar15;
  float fVar16;
  float fVar17;
  undefined8 in_stack_00000008;
  
  puVar4 = PTR_DAT_084b72e8;
  puVar3 = PTR_DAT_084b72e0;
  puVar15 = *(undefined8 **)(unaff_x28 + 0x2d0);
  (**(code **)(*unaff_x24 + 0x5e8))();
  puVar2 = PTR_DAT_08486760;
  uVar12 = *puVar15;
  if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_0675ff58(uVar12,0);
  uVar12 = (**(code **)(*unaff_x22 + 0x218))();
  uVar12 = FUN_044b42f4(uVar12,*(undefined8 *)puVar3);
  lVar5 = FUN_044c8b18(uVar12,*(undefined8 *)puVar4);
                    /* try { // try from 069718bc to 06a718bf has its CatchHandler @ 06971904 */
  if (lVar5 == 0) {
    return;
  }
  if (*(long *)(lVar5 + 0x10) != 0) {
    if ((*unaff_x20 == 0) || (plVar6 = *(long **)(*unaff_x20 + 0x20), plVar6 == (long *)0x0))
    goto LAB_06971e68;
    (**(code **)(*plVar6 + 0x5e8))(plVar6,*(long *)(lVar5 + 0x10),*(undefined8 *)(*plVar6 + 0x5f0));
  }
  uVar12 = (**(code **)(*unaff_x22 + 0x268))();
  lVar14 = *(long *)(puVar2 + 0x78);
  if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*(long *)(puVar2 + 0xe0));
  }
  uVar7 = FUN_0675ff58(lVar14 + 0x20,0);
  uVar8 = FUN_067690d8(uVar12,uVar7,0);
  if ((uVar8 & 1) == 0) {
    uVar12 = (**(code **)(*unaff_x22 + 0x268))();
    lVar14 = *(long *)(puVar2 + 0x48);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)(puVar2 + 0xe0));
    }
    uVar7 = FUN_0675ff58(lVar14 + 0x20,0);
    uVar8 = FUN_067690d8(uVar12,uVar7,0);
    if ((uVar8 & 1) != 0) {
      if (*unaff_x20 == 0) goto LAB_06971e68;
      plVar13 = *(long **)(*unaff_x20 + 0x28);
      plVar6 = (long *)(**(code **)(*unaff_x22 + 0x2f8))();
      if ((plVar6 == (long *)0x0) ||
         (uVar12 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170)),
         plVar13 == (long *)0x0)) goto LAB_06971e68;
      (**(code **)(*plVar13 + 0x5e8))(plVar13,uVar12,*(undefined8 *)(*plVar13 + 0x5f0));
      lVar14 = *unaff_x20;
      if (lVar14 == 0) goto LAB_06971e68;
      fVar16 = (float)*(undefined8 *)(lVar5 + 0x18);
      fVar17 = (float)((ulong)*(undefined8 *)(lVar5 + 0x18) >> 0x20);
      uVar8 = NEON_scvtf(CONCAT44((int)fVar17,(int)fVar16),4);
      *(ulong *)(lVar14 + 0x48) =
           uVar8 ^ (uVar8 ^ 0xcf000000cf000000) &
                   CONCAT44(-(uint)(fVar17 == INFINITY),-(uint)(fVar16 == INFINITY));
      fVar16 = -2.1474836e+09;
      if (*(float *)(lVar5 + 0x20) != INFINITY) {
        fVar16 = (float)(int)*(float *)(lVar5 + 0x20);
      }
      *(float *)(lVar14 + 0x50) = fVar16;
      puVar2 = PTR_DAT_084883a0;
      if (*(long *)(lVar14 + 0x30) == 0) goto LAB_06971e68;
      lVar5 = *(long *)(*(long *)(lVar14 + 0x30) + 0x100);
      uVar12 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
      FUN_07cb26a0();
      if (lVar5 == 0) goto LAB_06971e68;
      FUN_07cb2770(lVar5,uVar12,0);
      if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x38), lVar5 == 0))
      goto LAB_06971e68;
      lVar5 = *(long *)(lVar5 + 0x100);
      uVar12 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
      goto LAB_06971dbc;
    }
    uVar12 = (**(code **)(*unaff_x22 + 0x268))();
    lVar5 = *(long *)(puVar2 + 0x28);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)(puVar2 + 0xe0));
    }
    uVar7 = FUN_0675ff58(lVar5 + 0x20,0);
    uVar8 = FUN_067690d8(uVar12,uVar7,0);
    if ((uVar8 & 1) != 0) {
      if (*unaff_x20 == 0) goto LAB_06971e68;
      plVar13 = *(long **)(*unaff_x20 + 0x28);
      plVar6 = (long *)(**(code **)(*unaff_x22 + 0x2f8))();
      if ((plVar6 == (long *)0x0) ||
         (uVar12 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170)),
         plVar13 == (long *)0x0)) goto LAB_06971e68;
      (**(code **)(*plVar13 + 0x5e8))(plVar13,uVar12,*(undefined8 *)(*plVar13 + 0x5f0));
      puVar2 = PTR_DAT_084883a0;
      if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x30), lVar5 == 0))
      goto LAB_06971e68;
      lVar5 = *(long *)(lVar5 + 0x100);
      uVar12 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
      FUN_07cb26a0();
      if (lVar5 == 0) goto LAB_06971e68;
      FUN_07cb2770(lVar5,uVar12,0);
      if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x38), lVar5 == 0))
      goto LAB_06971e68;
      lVar5 = *(long *)(lVar5 + 0x100);
      uVar12 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
      goto LAB_06971dbc;
    }
    plVar6 = (long *)(**(code **)(*unaff_x22 + 0x268))();
    if (plVar6 == (long *)0x0) goto LAB_06971e68;
    uVar8 = (**(code **)(*plVar6 + 0x5b8))(plVar6,*(undefined8 *)(*plVar6 + 0x5c0));
    if ((uVar8 & 1) != 0) {
      plVar6 = (long *)(**(code **)(*unaff_x22 + 0x268))();
      lVar5 = *unaff_x20;
      if (((lVar5 == 0) || (*(undefined4 *)(lVar5 + 0x48) = 0, plVar6 == (long *)0x0)) ||
         (lVar14 = (**(code **)(*plVar6 + 0x6f8))(plVar6,0x18,*(undefined8 *)(*plVar6 + 0x700)),
         lVar14 == 0)) goto LAB_06971e68;
      lVar10 = *unaff_x20;
      *(float *)(lVar5 + 0x4c) = (float)(*(int *)(lVar14 + 0x18) + -1);
      if (lVar10 == 0) goto LAB_06971e68;
      *(undefined4 *)(lVar10 + 0x50) = 0x3f800000;
      puVar2 = PTR_DAT_084883a0;
      if (*(long *)(lVar10 + 0x30) == 0) goto LAB_06971e68;
      lVar5 = *(long *)(*(long *)(lVar10 + 0x30) + 0x100);
      uVar12 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
      FUN_07cb26a0();
      if (lVar5 == 0) goto LAB_06971e68;
      FUN_07cb2770(lVar5,uVar12,0);
      if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x38), lVar5 == 0))
      goto LAB_06971e68;
      lVar5 = *(long *)(lVar5 + 0x100);
      uVar12 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
      goto LAB_06971dbc;
    }
  }
  else {
    if (*unaff_x20 == 0) goto LAB_06971e68;
    plVar13 = *(long **)(*unaff_x20 + 0x28);
    plVar6 = (long *)(**(code **)(*unaff_x22 + 0x2f8))();
    if (plVar6 == (long *)0x0) goto LAB_06971e68;
    if (*(long *)(*plVar6 + 0x40) != *(long *)(*(long *)(puVar2 + 0x78) + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8ad40();
    }
    puVar9 = (undefined4 *)thunk_FUN_03ac7604();
    in_stack_00000008._4_4_ = *puVar9;
    uVar12 = FUN_067638d0((long)&stack0x00000008 + 4,*(undefined8 *)PTR_DAT_0849ccf8,0);
    if (plVar13 == (long *)0x0) goto LAB_06971e68;
    (**(code **)(*plVar13 + 0x5e8))(plVar13,uVar12,*(undefined8 *)(*plVar13 + 0x5f0));
    lVar14 = *unaff_x20;
    if (lVar14 == 0) goto LAB_06971e68;
    *(undefined8 *)(lVar14 + 0x48) = *(undefined8 *)(lVar5 + 0x18);
    *(undefined4 *)(lVar14 + 0x50) = *(undefined4 *)(lVar5 + 0x20);
    puVar2 = PTR_DAT_084883a0;
    if (*(long *)(lVar14 + 0x30) == 0) goto LAB_06971e68;
    lVar5 = *(long *)(*(long *)(lVar14 + 0x30) + 0x100);
    uVar12 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
    FUN_07cb26a0();
    if (lVar5 == 0) goto LAB_06971e68;
    FUN_07cb2770(lVar5,uVar12,0);
    if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x38), lVar5 == 0)) goto LAB_06971e68;
    lVar5 = *(long *)(lVar5 + 0x100);
    uVar12 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
LAB_06971dbc:
    FUN_07cb26a0();
    if (lVar5 == 0) goto LAB_06971e68;
    FUN_07cb2770(lVar5,uVar12,0);
  }
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if (lVar5 != 0) {
    lVar10 = *(long *)(lVar5 + 0x10);
    lVar14 = *unaff_x20;
    lVar11 = *(long *)PTR_DAT_084b72c0;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar10 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        plVar6 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
        *plVar6 = lVar14;
        thunk_FUN_03afed3c(plVar6);
      }
      else {
        FUN_04de85b0(lVar5,lVar14,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70)
                    );
      }
      return;
    }
  }
LAB_06971e68:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


