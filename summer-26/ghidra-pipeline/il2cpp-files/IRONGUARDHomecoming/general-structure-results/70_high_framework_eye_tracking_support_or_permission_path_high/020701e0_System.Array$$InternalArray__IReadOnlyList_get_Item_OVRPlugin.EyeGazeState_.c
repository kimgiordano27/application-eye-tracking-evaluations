/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 020701e0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_EyeGazeState>(void)

{
  long *plVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  plVar1 = (long *)thunk_FUN_01f117cc(*unaff_x20);
  FUN_02756464(plVar1,0,*unaff_x19);
  if (plVar1 != (long *)0x0) {
                    /* try { // try from 020701fc to 02170223 has its CatchHandler @ 02070464 */
    (**(code **)(*plVar1 + 0x238))(plVar1,0,0,0,*(undefined8 *)(*plVar1 + 0x240));
                    /* WARNING: Could not recover jumptable at 0x02070238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x218))(plVar1,0,*(undefined8 *)(*plVar1 + 0x220));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


