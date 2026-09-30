/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_SaveUnifiedConsentWithOlderVersion
ENTRY_POINT: 0696c948
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_OVRP_1_106_0__ovrp_SaveUnifiedConsentWithOlderVersion
          (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  undefined8 *unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x26;
  undefined1 unaff_w27;
  float fVar10;
  float fVar11;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  long in_stack_00000030;
  
  while (plVar5 = *(long **)(param_4 + 0x80), plVar5 != (long *)0x0) {
    fVar10 = (float)(**(code **)(*plVar5 + 0x2a8))(plVar5,*(undefined8 *)(*plVar5 + 0x2b0));
                    /* try { // try from 0696c974 to 06a6c977 has its CatchHandler @ 0696cb14 */
    if (*(char *)(unaff_x25 + 0xe27) == '\0') {
                    /* try { // try from 0696c978 to 06a6c97b has its CatchHandler @ 0696cb10 */
                    /* try { // try from 0696c97c to 06a6c9a3 has its CatchHandler @ 0696cb0c */
      FUN_03a8a718();
      *(undefined1 *)(unaff_x25 + 0xe27) = unaff_w27;
    }
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    plVar5 = *(long **)(param_4 + 0x80);
    if (plVar5 == (long *)0x0) break;
                    /* try { // try from 0696c9a4 to 06a6c9ab has its CatchHandler @ 0696cb00 */
    param_2 = (unaff_s9 - param_2) * (unaff_s9 - param_2);
                    /* try { // try from 0696c9bc to 06a6c9c3 has its CatchHandler @ 0696cafc */
    param_3 = (unaff_s10 - param_3) * (unaff_s10 - param_3);
    fVar10 = param_3 + (unaff_s8 - fVar10) * (unaff_s8 - fVar10) + param_2;
                    /* try { // try from 0696c9c8 to 06a6c9db has its CatchHandler @ 0696caf8 */
    fVar11 = (float)(**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230));
    if (SQRT(fVar10) < fVar11 * unaff_s15) {
      plVar5 = *(long **)(param_4 + 0x80);
      if (plVar5 == (long *)0x0) break;
      fVar10 = (float)(**(code **)(*plVar5 + 0x2f8))(plVar5,*(undefined8 *)(*plVar5 + 0x300));
      (**(code **)(*plVar5 + 0x308))(unaff_s14 + fVar10,plVar5,*(undefined8 *)(*plVar5 + 0x310));
    }
    unaff_w22 = unaff_w22 + 1;
    if ((*(long *)(unaff_x19 + 0x90) == 0) ||
       (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x90) + 0xe8), lVar4 == 0)) break;
    iVar3 = FUN_06936294(lVar4,0);
    lVar4 = *(long *)(unaff_x19 + 0x90);
    if (iVar3 <= unaff_w22) {
      if (lVar4 == 0) break;
      fVar10 = (float)FUN_069392f8(lVar4,0);
      if (*(char *)(unaff_x25 + 0xe27) == '\0') {
        FUN_03a8a718(PTR_DAT_08486c60);
        *(undefined1 *)(unaff_x25 + 0xe27) = 1;
      }
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      param_3 = param_3 - unaff_s10;
      fVar11 = 1.0;
      if (SQRT(param_3 * param_3 +
               (fVar10 - unaff_s8) * (fVar10 - unaff_s8) +
               (param_2 - unaff_s9) * (param_2 - unaff_s9)) < 1.0) {
        if (((*(long *)(unaff_x19 + 0x90) == 0) ||
            (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x90) + 0xe8), lVar4 == 0)) ||
           (lVar4 = *(long *)(lVar4 + 0x40), lVar4 == 0)) break;
        FUN_069464c0(unaff_s14 + *(float *)(lVar4 + 0x6c),lVar4,0);
      }
      if (*(long *)(unaff_x19 + 0x90) == 0) break;
      fVar10 = (float)FUN_06939358(*(long *)(unaff_x19 + 0x90),0);
      if (*(char *)(unaff_x25 + 0xe27) == '\0') {
        FUN_03a8a718(PTR_DAT_08486c60);
        *(undefined1 *)(unaff_x25 + 0xe27) = 1;
      }
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      if (SQRT((param_3 - unaff_s10) * (param_3 - unaff_s10) +
               (fVar10 - unaff_s8) * (fVar10 - unaff_s8) + (fVar11 - unaff_s9) * (fVar11 - unaff_s9)
              ) < 1.0) {
        if (((*(long *)(unaff_x19 + 0x90) == 0) ||
            (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x90) + 0xe8), lVar4 == 0)) ||
           (lVar4 = *(long *)(lVar4 + 0x48), lVar4 == 0)) break;
        FUN_069464c0(unaff_s14 + *(float *)(lVar4 + 0x6c),lVar4,0);
      }
      if (*(char *)(unaff_x19 + 0x5c) == '\0') {
        return 1;
      }
      if (*(long *)(unaff_x19 + 0x78) != 0) {
        FUN_04de90b8(&stack0x00000008,*(long *)(unaff_x19 + 0x78),*(undefined8 *)PTR_DAT_0849b370);
        puVar2 = PTR_DAT_084b70d0;
        puVar1 = PTR_DAT_0849b360;
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000018;
        in_stack_00000008 = 0;
        in_stack_00000010 = &stack0x00000020;
        goto LAB_0696cbb0;
      }
      break;
    }
    if (((lVar4 == 0) || (*(long *)(lVar4 + 0xe8) == 0)) ||
       ((lVar4 = *(long *)(*(long *)(lVar4 + 0xe8) + 0x58), lVar4 == 0 ||
        (param_4 = FUN_04de82e0(lVar4,unaff_w22,*unaff_x26), param_4 == 0)))) break;
  }
  goto LAB_0696ca1c;
LAB_0696cbb0:
  uVar6 = FUN_061c1964(&stack0x00000020,*(undefined8 *)puVar1);
  lVar4 = in_stack_00000030;
  if ((uVar6 & 1) != 0) {
    if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar7 = FUN_07c99058(in_stack_00000030,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar7 = FUN_07c997a0(lVar7,0);
    if (lVar7 == 0) {
      if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_054c57ac(*(long *)(unaff_x20 + 0x20),lVar4,*(undefined8 *)puVar2);
    }
    else {
      lVar8 = *(long *)(unaff_x19 + 0x38);
      if (lVar8 == 0) {
LAB_0696ccc0:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      iVar3 = 0;
      while (iVar3 < *(int *)(lVar8 + 0x18)) {
        uVar9 = FUN_04de82e0(lVar8,iVar3,*unaff_x24);
        uVar6 = thunk_FUN_065cbffc(lVar7,uVar9,0);
        if ((uVar6 & 1) != 0) goto LAB_0696cbb0;
        lVar8 = *(long *)(unaff_x19 + 0x38);
        iVar3 = iVar3 + 1;
        if (lVar8 == 0) goto LAB_0696ccc0;
      }
      if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_054c57ac(*(long *)(unaff_x20 + 0x20),lVar4,*(undefined8 *)puVar2);
    }
    goto LAB_0696cbb0;
  }
  FUN_061c1960(&stack0x00000020,*(undefined8 *)PTR_DAT_0849b358);
  if (*(long *)(unaff_x19 + 0x70) != 0) {
    FUN_054c57ac();
    return 1;
  }
LAB_0696ca1c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


