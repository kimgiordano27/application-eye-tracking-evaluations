/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.AppPerfFrameStats>$$Dispose
ENTRY_POINT: 05e741d0
PROGRAM: Waifu-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool System_Array_EmptyInternalEnumerator<OVRPlugin_AppPerfFrameStats>__Dispose
               (long param_1,long *param_2)

{
  bool bVar1;
  ulong uVar2;
  uint unaff_w23;
  
  if (param_1 != 0) {
    if (*(uint *)(param_1 + 0x18) <= unaff_w23) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    if (param_2 != (long *)0x0) {
      uVar2 = (**(code **)(*param_2 + 0x1b8))
                        (param_2,*(undefined8 *)(param_1 + (ulong)unaff_w23 * 0x18 + 0x30));
      bVar1 = (uVar2 & 1) != 0;
      if (bVar1) {
        FUN_05e75710();
      }
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


