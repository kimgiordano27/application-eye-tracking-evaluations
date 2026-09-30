/*
FUNCTION_NAME: OVRManager$$SetColorScaleAndOffset_Internal
ENTRY_POINT: 027d7c84
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetColorScaleAndOffset_Internal(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *in_x9;
  undefined8 *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  int unaff_w24;
  long *plVar7;
  int unaff_w27;
  undefined1 auVar8 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  lVar3 = FUN_01ab6a94(*in_x9,*(undefined4 *)(param_1 + 0x10));
  thunk_FUN_01a4b338();
  lVar4 = FUN_01aa50f0();
  if (lVar4 != 0) {
    lVar3 = lVar4;
  }
  if (lVar3 != 0) {
    iVar2 = 0;
    if (unaff_w27 != 0) {
      iVar2 = unaff_w24 / unaff_w27;
    }
    uVar1 = unaff_w24 - iVar2 * unaff_w27;
    if (*(uint *)(lVar3 + 0x18) <= uVar1) goto LAB_027d7da8;
    plVar7 = (long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
    lVar4 = *plVar7;
    thunk_FUN_01a4b338();
    if (lVar4 == 0) {
      uVar5 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cfcbb0);
      FUN_02090be4(uVar5,4,*(undefined8 *)PTR_DAT_03cfcba8);
      if (*(uint *)(lVar3 + 0x18) <= uVar1) {
LAB_027d7da8:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      FUN_01aa50f0(plVar7,uVar5,0);
      if (*(uint *)(lVar3 + 0x18) <= uVar1) goto LAB_027d7da8;
      lVar4 = *plVar7;
      if (lVar4 == 0) goto LAB_027d7da4;
    }
    auVar8 = FUN_02090c88(lVar4);
    in_stack_00000008 = unaff_x23;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000008);
    _in_stack_00000010 = auVar8;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000010,0);
    iVar2 = *(int *)(unaff_x22 + 0x20);
    thunk_FUN_01a4b338();
    if ((iVar2 < 2) || (uVar6 = FUN_027d99d8(&stack0x00000008), (uVar6 & 1) == 0)) {
      *(undefined1 (*) [16])(unaff_x19 + 1) = _in_stack_00000010;
      *unaff_x19 = in_stack_00000008;
    }
    else {
      if (unaff_x21 == 0) goto LAB_027d7da4;
      (**(code **)(unaff_x21 + 0x18))(*(undefined8 *)(unaff_x21 + 0x40));
      *unaff_x19 = 0;
      unaff_x19[1] = 0;
      unaff_x19[2] = 0;
    }
    return;
  }
LAB_027d7da4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


