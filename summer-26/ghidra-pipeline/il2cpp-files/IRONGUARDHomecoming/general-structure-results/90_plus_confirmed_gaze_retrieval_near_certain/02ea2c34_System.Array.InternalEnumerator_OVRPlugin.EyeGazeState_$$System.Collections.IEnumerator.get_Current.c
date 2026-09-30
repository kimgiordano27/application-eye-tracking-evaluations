/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 02ea2c34
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 149
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__System_Collections_IEnumerator_get_Current
               (long param_1)

{
  undefined8 *puVar1;
  long in_x9;
  long *in_x10;
  int *piVar2;
  long unaff_x20;
  
  if (in_x9 != 0) {
    piVar2 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar2 + -2) == *in_x10) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar2 + 0xd) * 0x10 + 0x138);
        goto code_r0x02ea2c7c;
      }
      in_x9 = in_x9 + -1;
      piVar2 = piVar2 + 4;
    } while (in_x9 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238();
code_r0x02ea2c7c:
  (*(code *)*puVar1)();
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01fbfd14();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01eed990();
}


