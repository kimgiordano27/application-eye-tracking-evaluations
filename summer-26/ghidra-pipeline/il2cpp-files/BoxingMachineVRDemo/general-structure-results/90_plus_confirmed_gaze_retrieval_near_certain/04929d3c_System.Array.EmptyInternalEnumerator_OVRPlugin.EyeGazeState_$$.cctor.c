/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$.cctor
ENTRY_POINT: 04929d3c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


uint System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>___cctor
               (long param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_04928924(param_1,param_2,
                       *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x108));
  if ((int)uVar1 < 0) {
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x18);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(uint *)(lVar2 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    lVar2 = lVar2 + (ulong)uVar1 * 0x24;
    uVar4 = *(undefined8 *)(lVar2 + 0x34);
    uVar3 = *(undefined8 *)(lVar2 + 0x2c);
    param_3[2] = *(undefined8 *)(lVar2 + 0x3c);
    param_3[1] = uVar4;
    *param_3 = uVar3;
  }
  return ~uVar1 >> 0x1f;
}


