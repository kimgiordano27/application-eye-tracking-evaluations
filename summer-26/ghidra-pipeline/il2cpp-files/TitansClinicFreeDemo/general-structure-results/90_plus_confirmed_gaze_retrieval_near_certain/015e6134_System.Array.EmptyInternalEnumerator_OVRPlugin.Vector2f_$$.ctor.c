/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector2f>$$.ctor
ENTRY_POINT: 015e6134
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 151
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_3;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>___ctor
               (long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,ulong param_5,
               long param_6)

{
  bool in_ZR;
  ulong uVar1;
  long lVar2;
  
  if ((in_ZR) ||
     (uVar1 = FUN_015e61f0(param_1,param_3,param_2,
                           *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x68)),
     (uVar1 & 1) != 0)) {
    return;
  }
  lVar2 = System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>___cctor
                    (param_1,*(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x30));
  if (lVar2 != 0) {
    FUN_01c612e4(lVar2,param_2,param_3,param_4,
                 *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x70));
    if ((param_5 & 1) == 0) {
      return;
    }
    if (param_1 != 0) {
      FUN_024e104c(param_1,0);
      FUN_024e04f8(param_1,param_2,param_3,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


