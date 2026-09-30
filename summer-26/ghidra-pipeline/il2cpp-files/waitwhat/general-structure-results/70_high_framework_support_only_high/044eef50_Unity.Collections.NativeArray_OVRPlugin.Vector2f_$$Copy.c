/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Copy
ENTRY_POINT: 044eef50
PROGRAM: waitwhat-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy(long param_1,int param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
                    /* try { // try from 044eef58 to 045eef6f has its CatchHandler @ 044eefdc */
  FUN_05971910(param_1,0);
  if (param_2 < 0) {
    LipSyncMicInput__CanStartMic(0xc,4,0);
  }
  else {
                    /* try { // try from 044eef70 to 045eefcb has its CatchHandler @ 044eee10 */
    if (param_2 == 0) {
      lVar1 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_031c09d4();
      }
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      lVar1 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_031c09d4();
      }
      uVar2 = **(undefined8 **)(lVar1 + 0xb8);
      goto LAB_044eeff8;
    }
  }
  lVar1 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x18);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_031c09d4();
  }
  uVar2 = FUN_03188b1c(lVar1,param_2);
LAB_044eeff8:
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  return;
}


