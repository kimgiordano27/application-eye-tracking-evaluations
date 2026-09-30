/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos.ColorScope$$Dispose
ENTRY_POINT: 051b35b8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos_ColorScope__Dispose(long *param_1,long param_2)

{
  undefined4 uVar1;
  
  *param_1 = param_2;
  LeanTween__value();
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x2c);
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)((long)param_1 + 0xc) = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


