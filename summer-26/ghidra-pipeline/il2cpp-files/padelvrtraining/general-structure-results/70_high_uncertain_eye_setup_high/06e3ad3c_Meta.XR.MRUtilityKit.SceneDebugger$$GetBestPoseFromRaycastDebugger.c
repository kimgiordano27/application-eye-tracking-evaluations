/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$GetBestPoseFromRaycastDebugger
ENTRY_POINT: 06e3ad3c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_SceneDebugger__GetBestPoseFromRaycastDebugger(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  uint unaff_w24;
  uint unaff_w25;
  uint uVar5;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  while( true ) {
    *(uint *)(unaff_x19 + 0xc) = unaff_w25 + 1;
    if (in_x9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(uint *)(in_x9 + 0x18) <= unaff_w25) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    lVar3 = in_x9 + (long)(int)unaff_w25 * 0x20;
    uVar5 = unaff_w25 + 1;
    if (-1 < *(int *)(lVar3 + 0x20)) break;
    if (unaff_w24 <= uVar5) {
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      *(undefined8 *)(unaff_x19 + 0x20) = 0;
      *(uint *)(unaff_x19 + 0xc) = unaff_w24 + 1;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      goto LAB_06e3add8;
    }
    in_x9 = *(long *)(param_1 + 0x18);
    unaff_w25 = uVar5;
  }
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  uVar2 = *(undefined8 *)(lVar3 + 0x30);
  uVar4 = *(undefined8 *)(lVar3 + 0x38);
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03d8f26c();
  }
  FUN_0580d0b0(&stack0x00000008,uVar1,uVar2,uVar4,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x38));
  *(undefined8 *)(unaff_x19 + 0x20) = in_stack_00000018;
  *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000010;
  *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000008;
  thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x20),0);
  uVar5 = unaff_w25;
LAB_06e3add8:
  return uVar5 < unaff_w24;
}


