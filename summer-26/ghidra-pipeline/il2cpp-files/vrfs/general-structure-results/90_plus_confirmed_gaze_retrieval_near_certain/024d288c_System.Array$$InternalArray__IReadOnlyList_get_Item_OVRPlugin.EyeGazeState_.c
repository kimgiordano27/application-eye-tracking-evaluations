/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 024d288c
PROGRAM: vrfs-libil2cpp.so
SCORE: 149
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_EyeGazeState>(long param_1)

{
  long lVar1;
  byte bVar2;
  long in_x9;
  uint in_w11;
  long unaff_x19;
  
  if ((*(byte *)(in_x9 + 300) <= in_w11) &&
     (*(long *)(*(long *)(param_1 + 200) + (ulong)*(byte *)(in_x9 + 300) * 8 + -8) == in_x9)) {
    bVar2 = (**(code **)(param_1 + 0x278))();
    if (*(long *)(unaff_x19 + 0x68) != 0) {
      *(byte *)(*(long *)(unaff_x19 + 0x68) + 0x38) = bVar2 & 1;
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        lVar1 = 0x58;
        if ((bVar2 & 1) == 0) {
          lVar1 = 0x60;
        }
        FUN_039e46f4(*(long *)(unaff_x19 + 0x30),*(undefined8 *)(unaff_x19 + lVar1),0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


