/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 020eecac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__get_Item<OVRPlugin_EyeGazeState>(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  if (unaff_x20 != 0) {
    *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 0x10);
    *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x19 + 0x20);
    *(code **)(unaff_x19 + 0x38) = FUN_01bc4484;
    return;
  }
  uVar1 = thunk_FUN_01f2bcb0(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar1,0);
}


