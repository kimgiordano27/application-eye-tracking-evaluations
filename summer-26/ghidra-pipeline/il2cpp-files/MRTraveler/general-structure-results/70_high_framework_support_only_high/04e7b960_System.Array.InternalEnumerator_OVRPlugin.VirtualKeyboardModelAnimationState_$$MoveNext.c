/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$MoveNext
ENTRY_POINT: 04e7b960
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_InternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__MoveNext(void)

{
  long lVar1;
  int *piVar2;
  long unaff_x20;
  undefined4 unaff_w23;
  uint uVar3;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000000;
  uint *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (unaff_x29 != 0) {
    uVar3 = (uint)unaff_x28;
    if (uVar3 < *(uint *)(unaff_x29 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x28) = *(undefined4 *)(unaff_x29 + unaff_x28 * 0x18 + 0x24);
      if (uVar3 < *(uint *)(unaff_x29 + 0x18)) {
        lVar1 = unaff_x29 + (long)(int)uVar3 * 0x18;
        *(undefined4 *)(lVar1 + 0x20) = unaff_w23;
        *(undefined8 *)(lVar1 + 0x28) = in_stack_00000010;
        *(undefined8 *)(lVar1 + 0x30) = in_stack_00000018;
        lVar1 = *(long *)(unaff_x20 + 0x10);
        if (lVar1 == 0) goto LAB_04e7bae0;
        if ((in_stack_00000000._4_4_ < *(uint *)(lVar1 + 0x18)) &&
           (uVar3 < *(uint *)(unaff_x29 + 0x18))) {
          piVar2 = (int *)(lVar1 + (long)(int)in_stack_00000000._4_4_ * 4 + 0x20);
          *(int *)(unaff_x29 + (long)(int)uVar3 * 0x18 + 0x24) = *piVar2 + -1;
          *piVar2 = uVar3 + 1;
          *(int *)(unaff_x20 + 0x20) = *(int *)(unaff_x20 + 0x20) + 1;
          *(int *)(unaff_x20 + 0x38) = *(int *)(unaff_x20 + 0x38) + 1;
          *in_stack_00000008 = uVar3;
          return 1;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb38();
  }
LAB_04e7bae0:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


