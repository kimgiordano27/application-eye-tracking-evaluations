/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$MoveNext
ENTRY_POINT: 05c0482c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


uint System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__MoveNext(long param_1)

{
  undefined8 *unaff_x19;
  uint unaff_w20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (unaff_w20 < *(uint *)(param_1 + 0x18)) {
    param_1 = param_1 + (ulong)unaff_w20 * 0x38;
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    unaff_x19[4] = *(undefined8 *)(param_1 + 0x50);
    unaff_x19[1] = uVar4;
    *unaff_x19 = uVar3;
    unaff_x19[3] = uVar2;
    unaff_x19[2] = uVar1;
    thunk_FUN_037aeb94();
    return ~unaff_w20 >> 0x1f;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7bc();
}


