/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.VirtualKeyboardModelAnimationState>$$.cctor
ENTRY_POINT: 05fc1710
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_EmptyArray<OVRPlugin_VirtualKeyboardModelAnimationState>___cctor(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  int in_w8;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  undefined8 uVar4;
  long unaff_x24;
  ulong uVar5;
  long lVar6;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  uVar5 = 0;
  lVar6 = unaff_x24 + 0x30;
  while (uVar5 < *(uint *)(unaff_x24 + 0x18)) {
    if (-1 < *(int *)(lVar6 + -0x10)) {
      uVar4 = *(undefined8 *)(lVar6 + -8);
      uVar3 = thunk_FUN_03ac70f4(*(undefined8 *)
                                  (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78));
      in_stack_00000010 = 0;
      in_stack_00000018 = 0;
      FUN_066eba2c(&stack0x00000010,uVar4,uVar3,0);
      if (*(uint *)(param_1 + 0x18) <= unaff_w20) break;
      lVar2 = param_1 + (long)(int)unaff_w20 * 0x10;
      lVar1 = (long)(int)unaff_w20;
      unaff_w20 = unaff_w20 + 1;
      *(undefined8 *)(lVar2 + 0x28) = in_stack_00000018;
      *(undefined8 *)(lVar2 + 0x20) = in_stack_00000010;
      thunk_FUN_03afed3c(param_1 + 0x20 + lVar1 * 0x10,0);
      in_w8 = *(int *)(unaff_x21 + 0x20);
    }
    uVar5 = uVar5 + 1;
    lVar6 = lVar6 + 0x18;
    if ((long)in_w8 <= (long)uVar5) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


