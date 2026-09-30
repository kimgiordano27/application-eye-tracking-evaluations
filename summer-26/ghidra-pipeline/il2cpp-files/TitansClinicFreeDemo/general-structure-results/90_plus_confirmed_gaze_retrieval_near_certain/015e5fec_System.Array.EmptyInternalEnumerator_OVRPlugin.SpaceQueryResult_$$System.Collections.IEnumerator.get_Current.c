/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 015e5fec
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 148
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerator_get_Current
               (long *param_1,undefined4 param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>___cctor
                    (param_1,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x30));
  if (param_1 != (long *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x1f8))(param_1,param_2,*(undefined8 *)(*param_1 + 0x200));
    if (lVar2 != 0) {
      FUN_01c61184(lVar2,uVar1,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x40));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


