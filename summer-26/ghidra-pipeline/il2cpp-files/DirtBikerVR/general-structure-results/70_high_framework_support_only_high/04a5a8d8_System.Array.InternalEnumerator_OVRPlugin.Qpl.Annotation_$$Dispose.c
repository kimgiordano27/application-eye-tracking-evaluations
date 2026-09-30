/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Qpl.Annotation>$$Dispose
ENTRY_POINT: 04a5a8d8
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


void System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation>__Dispose(long *param_1,ulong param_2)

{
  long lVar1;
  long in_x9;
  long unaff_x19;
  ulong unaff_x20;
  
  while( true ) {
    param_2 = (**(code **)(in_x9 + 0x1a8))(param_1,param_2);
    unaff_x20 = unaff_x20 + 1;
    if ((long)(*(int *)(unaff_x19 + 0xe0) + -1) <= (long)unaff_x20) {
      return;
    }
    lVar1 = *(long *)(unaff_x19 + 0xf0);
    if (lVar1 == 0) break;
    if (*(uint *)(lVar1 + 0x18) <= unaff_x20) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    param_1 = *(long **)(lVar1 + unaff_x20 * 8 + 0x20);
    if (param_1 == (long *)0x0) break;
    in_x9 = *param_1;
    param_2 = param_2 & 0xff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


