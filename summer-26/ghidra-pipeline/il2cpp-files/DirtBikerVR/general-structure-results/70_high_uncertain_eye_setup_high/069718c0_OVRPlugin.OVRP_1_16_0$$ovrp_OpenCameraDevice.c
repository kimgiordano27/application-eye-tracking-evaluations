/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_OpenCameraDevice
ENTRY_POINT: 069718c0
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


void OVRPlugin_OVRP_1_16_0__ovrp_OpenCameraDevice(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  long *plVar11;
  long unaff_x26;
  long lVar12;
  float fVar13;
  float fVar14;
  undefined8 in_stack_00000008;
  
                    /* try { // try from 069718c0 to 06a718c3 has its CatchHandler @ 06971900 */
                    /* try { // try from 069718c4 to 06a718c7 has its CatchHandler @ 069718fc */
                    /* try { // try from 069718c8 to 06a718cb has its CatchHandler @ 069718f8 */
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* try { // try from 069718cc to 06a718cf has its CatchHandler @ 069718f4 */
                    /* try { // try from 069718d0 to 06a718d3 has its CatchHandler @ 069718f0 */
                    /* try { // try from 069718d4 to 06a718d7 has its CatchHandler @ 069718ec */
                    /* try { // try from 069718d8 to 06a718db has its CatchHandler @ 069718e8 */
    if ((*unaff_x20 == 0) || (plVar3 = *(long **)(*unaff_x20 + 0x20), plVar3 == (long *)0x0))
    goto LAB_06971e68;
                    /* try { // try from 069718dc to 06a718df has its CatchHandler @ 069718e4 */
                    /* try { // try from 069718e0 to 06a7193b has its CatchHandler @ 0697133c */
                    /* catch() { ... } // from try @ 069718dc with catch @ 069718e4 */
                    /* catch() { ... } // from try @ 069718d8 with catch @ 069718e8 */
    (**(code **)(*plVar3 + 0x5e8))
              (plVar3,*(long *)(param_1 + 0x10),*(undefined8 *)(*plVar3 + 0x5f0));
  }
                    /* catch() { ... } // from try @ 069718d4 with catch @ 069718ec */
                    /* catch() { ... } // from try @ 069718d0 with catch @ 069718f0 */
                    /* catch() { ... } // from try @ 069718cc with catch @ 069718f4 */
                    /* catch() { ... } // from try @ 069718c8 with catch @ 069718f8 */
                    /* catch() { ... } // from try @ 069718c4 with catch @ 069718fc */
  uVar4 = (**(code **)(*unaff_x22 + 0x268))();
                    /* catch() { ... } // from try @ 069718c0 with catch @ 06971900 */
                    /* catch() { ... } // from try @ 069718bc with catch @ 06971904 */
  lVar12 = *(long *)(unaff_x26 + 0x78);
                    /* catch() { ... } // from try @ 06971768 with catch @ 06971908 */
                    /* catch() { ... } // from try @ 0697162c with catch @ 0697190c */
                    /* catch() { ... } // from try @ 06971514 with catch @ 06971910 */
  if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 06971790 with catch @ 06971914 */
                    /* catch() { ... } // from try @ 06971654 with catch @ 06971918 */
    thunk_FUN_03ae8be4(*(long *)(unaff_x26 + 0xe0));
  }
                    /* catch() { ... } // from try @ 0697153c with catch @ 0697191c */
                    /* catch() { ... } // from try @ 069717bc with catch @ 06971920 */
  uVar5 = FUN_0675ff58(lVar12 + 0x20,0);
  uVar6 = FUN_067690d8(uVar4,uVar5,0);
  if ((uVar6 & 1) == 0) {
    uVar4 = (**(code **)(*unaff_x22 + 0x268))();
    lVar12 = *(long *)(unaff_x26 + 0x48);
    if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)(unaff_x26 + 0xe0));
    }
    uVar5 = FUN_0675ff58(lVar12 + 0x20,0);
    uVar6 = FUN_067690d8(uVar4,uVar5,0);
    if ((uVar6 & 1) != 0) {
      if (*unaff_x20 == 0) goto LAB_06971e68;
      plVar11 = *(long **)(*unaff_x20 + 0x28);
      plVar3 = (long *)(**(code **)(*unaff_x22 + 0x2f8))();
      if ((plVar3 == (long *)0x0) ||
         (uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170)),
         plVar11 == (long *)0x0)) goto LAB_06971e68;
      (**(code **)(*plVar11 + 0x5e8))(plVar11,uVar4,*(undefined8 *)(*plVar11 + 0x5f0));
      lVar12 = *unaff_x20;
      if (lVar12 == 0) goto LAB_06971e68;
      fVar13 = (float)*(undefined8 *)(param_1 + 0x18);
      fVar14 = (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20);
      uVar6 = NEON_scvtf(CONCAT44((int)fVar14,(int)fVar13),4);
      *(ulong *)(lVar12 + 0x48) =
           uVar6 ^ (uVar6 ^ 0xcf000000cf000000) &
                   CONCAT44(-(uint)(fVar14 == INFINITY),-(uint)(fVar13 == INFINITY));
      fVar13 = -2.1474836e+09;
      if (*(float *)(param_1 + 0x20) != INFINITY) {
        fVar13 = (float)(int)*(float *)(param_1 + 0x20);
      }
      *(float *)(lVar12 + 0x50) = fVar13;
      puVar2 = PTR_DAT_084883a0;
      if (*(long *)(lVar12 + 0x30) == 0) goto LAB_06971e68;
      lVar12 = *(long *)(*(long *)(lVar12 + 0x30) + 0x100);
      uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
      FUN_07cb26a0();
      if (lVar12 == 0) goto LAB_06971e68;
      FUN_07cb2770(lVar12,uVar4,0);
      if ((*unaff_x20 == 0) || (lVar12 = *(long *)(*unaff_x20 + 0x38), lVar12 == 0))
      goto LAB_06971e68;
      lVar12 = *(long *)(lVar12 + 0x100);
      uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
      goto LAB_06971dbc;
    }
    uVar4 = (**(code **)(*unaff_x22 + 0x268))();
    lVar12 = *(long *)(unaff_x26 + 0x28);
    if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)(unaff_x26 + 0xe0));
    }
    uVar5 = FUN_0675ff58(lVar12 + 0x20,0);
    uVar6 = FUN_067690d8(uVar4,uVar5,0);
    if ((uVar6 & 1) != 0) {
      if (*unaff_x20 == 0) goto LAB_06971e68;
      plVar11 = *(long **)(*unaff_x20 + 0x28);
      plVar3 = (long *)(**(code **)(*unaff_x22 + 0x2f8))();
      if ((plVar3 == (long *)0x0) ||
         (uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170)),
         plVar11 == (long *)0x0)) goto LAB_06971e68;
      (**(code **)(*plVar11 + 0x5e8))(plVar11,uVar4,*(undefined8 *)(*plVar11 + 0x5f0));
      puVar2 = PTR_DAT_084883a0;
      if ((*unaff_x20 == 0) || (lVar12 = *(long *)(*unaff_x20 + 0x30), lVar12 == 0))
      goto LAB_06971e68;
      lVar12 = *(long *)(lVar12 + 0x100);
      uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
      FUN_07cb26a0();
      if (lVar12 == 0) goto LAB_06971e68;
      FUN_07cb2770(lVar12,uVar4,0);
      if ((*unaff_x20 == 0) || (lVar12 = *(long *)(*unaff_x20 + 0x38), lVar12 == 0))
      goto LAB_06971e68;
      lVar12 = *(long *)(lVar12 + 0x100);
      uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
      goto LAB_06971dbc;
    }
    plVar3 = (long *)(**(code **)(*unaff_x22 + 0x268))();
    if (plVar3 == (long *)0x0) goto LAB_06971e68;
    uVar6 = (**(code **)(*plVar3 + 0x5b8))(plVar3,*(undefined8 *)(*plVar3 + 0x5c0));
    if ((uVar6 & 1) != 0) {
      plVar3 = (long *)(**(code **)(*unaff_x22 + 0x268))();
      lVar12 = *unaff_x20;
      if (((lVar12 == 0) || (*(undefined4 *)(lVar12 + 0x48) = 0, plVar3 == (long *)0x0)) ||
         (lVar8 = (**(code **)(*plVar3 + 0x6f8))(plVar3,0x18,*(undefined8 *)(*plVar3 + 0x700)),
         lVar8 == 0)) goto LAB_06971e68;
      lVar9 = *unaff_x20;
      *(float *)(lVar12 + 0x4c) = (float)(*(int *)(lVar8 + 0x18) + -1);
      if (lVar9 == 0) goto LAB_06971e68;
      *(undefined4 *)(lVar9 + 0x50) = 0x3f800000;
      puVar2 = PTR_DAT_084883a0;
      if (*(long *)(lVar9 + 0x30) == 0) goto LAB_06971e68;
      lVar12 = *(long *)(*(long *)(lVar9 + 0x30) + 0x100);
      uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
      FUN_07cb26a0();
      if (lVar12 == 0) goto LAB_06971e68;
      FUN_07cb2770(lVar12,uVar4,0);
      if ((*unaff_x20 == 0) || (lVar12 = *(long *)(*unaff_x20 + 0x38), lVar12 == 0))
      goto LAB_06971e68;
      lVar12 = *(long *)(lVar12 + 0x100);
      uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
      goto LAB_06971dbc;
    }
  }
  else {
    if (*unaff_x20 == 0) goto LAB_06971e68;
    plVar11 = *(long **)(*unaff_x20 + 0x28);
    plVar3 = (long *)(**(code **)(*unaff_x22 + 0x2f8))();
    if (plVar3 == (long *)0x0) goto LAB_06971e68;
    if (*(long *)(*plVar3 + 0x40) != *(long *)(*(long *)(unaff_x26 + 0x78) + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8ad40();
    }
    puVar7 = (undefined4 *)thunk_FUN_03ac7604();
    in_stack_00000008._4_4_ = *puVar7;
    uVar4 = FUN_067638d0((long)&stack0x00000008 + 4,*(undefined8 *)PTR_DAT_0849ccf8,0);
    if (plVar11 == (long *)0x0) goto LAB_06971e68;
    (**(code **)(*plVar11 + 0x5e8))(plVar11,uVar4,*(undefined8 *)(*plVar11 + 0x5f0));
    lVar12 = *unaff_x20;
    if (lVar12 == 0) goto LAB_06971e68;
    *(undefined8 *)(lVar12 + 0x48) = *(undefined8 *)(param_1 + 0x18);
    *(undefined4 *)(lVar12 + 0x50) = *(undefined4 *)(param_1 + 0x20);
    puVar2 = PTR_DAT_084883a0;
    if (*(long *)(lVar12 + 0x30) == 0) goto LAB_06971e68;
    lVar12 = *(long *)(*(long *)(lVar12 + 0x30) + 0x100);
    uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
    FUN_07cb26a0();
    if (lVar12 == 0) goto LAB_06971e68;
    FUN_07cb2770(lVar12,uVar4,0);
    if ((*unaff_x20 == 0) || (lVar12 = *(long *)(*unaff_x20 + 0x38), lVar12 == 0))
    goto LAB_06971e68;
    lVar12 = *(long *)(lVar12 + 0x100);
    uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
LAB_06971dbc:
    FUN_07cb26a0();
    if (lVar12 == 0) goto LAB_06971e68;
    FUN_07cb2770(lVar12,uVar4,0);
  }
  lVar12 = *(long *)(unaff_x19 + 0x20);
  if (lVar12 != 0) {
    lVar9 = *(long *)(lVar12 + 0x10);
    lVar8 = *unaff_x20;
    lVar10 = *(long *)PTR_DAT_084b72c0;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (lVar9 != 0) {
      uVar1 = *(uint *)(lVar12 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
        plVar3 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
        *plVar3 = lVar8;
        thunk_FUN_03afed3c(plVar3);
      }
      else {
        FUN_04de85b0(lVar12,lVar8,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70)
                    );
      }
      return;
    }
  }
LAB_06971e68:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


