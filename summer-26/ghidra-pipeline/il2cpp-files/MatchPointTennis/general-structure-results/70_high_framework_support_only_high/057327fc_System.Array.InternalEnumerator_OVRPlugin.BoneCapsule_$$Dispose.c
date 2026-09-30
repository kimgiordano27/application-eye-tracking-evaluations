/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.BoneCapsule>$$Dispose
ENTRY_POINT: 057327fc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long System_Array_InternalEnumerator<OVRPlugin_BoneCapsule>__Dispose
               (long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  int in_w9;
  long unaff_x19;
  uint uVar2;
  
  if (in_w9 + -1 < 1) {
LAB_05732858:
    *(undefined4 *)(unaff_x19 + 0xf8) = param_3;
    *(undefined1 *)(unaff_x19 + 0xa4) = 0;
    return unaff_x19 + 0xf8;
  }
  uVar2 = 0;
  do {
    if (*(uint *)(param_1 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    plVar1 = *(long **)(param_1 + (long)(int)uVar2 * 8 + 0x20);
    if (plVar1 == (long *)0x0) break;
    param_3 = (**(code **)(*plVar1 + 0x1a8))();
    uVar2 = uVar2 + 1;
    if (*(int *)(unaff_x19 + 0xe0) + -1 <= (int)uVar2) goto LAB_05732858;
    param_1 = *(long *)(unaff_x19 + 0xf0);
  } while (param_1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


