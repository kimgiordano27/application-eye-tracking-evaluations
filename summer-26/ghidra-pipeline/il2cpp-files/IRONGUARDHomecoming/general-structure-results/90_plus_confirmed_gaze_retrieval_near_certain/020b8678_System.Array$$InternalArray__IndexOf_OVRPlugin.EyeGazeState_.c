/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPlugin.EyeGazeState>
ENTRY_POINT: 020b8678
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


void System_Array__InternalArray__IndexOf<OVRPlugin_EyeGazeState>(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  undefined8 *unaff_x22;
  
  FUN_04083a68();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x88);
    uVar1 = thunk_FUN_01f117cc(*unaff_x22);
    FUN_04083998();
    if (lVar2 != 0) {
      FUN_04083a68(lVar2,uVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


