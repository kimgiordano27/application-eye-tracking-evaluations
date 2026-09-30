/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$Dispose
ENTRY_POINT: 024cc3b4
PROGRAM: sharks-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__Dispose
               (long param_1,long param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined1 in_CY;
  uint in_w8;
  ulong in_x9;
  int in_w10;
  ulong in_x11;
  int in_w12;
  undefined4 *in_x13;
  
  while (!(bool)in_CY) {
    if (-1 < (int)in_x13[-2]) {
      uVar1 = in_w10 + param_3;
      if (in_w8 <= uVar1) break;
      in_w10 = in_w10 + 1;
      *(undefined4 *)(param_2 + (long)(int)uVar1 * 4 + 0x20) = *in_x13;
      in_w12 = *(int *)(param_1 + 0x24);
    }
    if (param_4 <= in_w10) {
      return;
    }
    in_x9 = in_x9 + 1;
    in_x13 = in_x13 + 3;
    if ((long)in_w12 <= (long)in_x9) {
      return;
    }
    in_CY = in_x11 <= in_x9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


