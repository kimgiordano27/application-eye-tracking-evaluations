/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 03d50910
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__System_Collections_IEnumerator_get_Current
               (void)

{
  undefined8 uVar1;
  int *unaff_x19;
  uint unaff_w20;
  int iVar2;
  int *piVar3;
  
  uVar1 = FUN_032d5d3c();
  if ((int)unaff_w20 < 2) {
    iVar2 = 0;
  }
  else {
    iVar2 = unaff_w20 - 1;
    FUN_05946528(*(undefined8 *)(unaff_x19 + 4),0,uVar1,0,iVar2,0);
  }
  piVar3 = unaff_x19 + 4;
  FUN_05946528(*(undefined8 *)piVar3,unaff_w20,uVar1,iVar2,*unaff_x19 + ~unaff_w20,0);
  *(undefined8 *)piVar3 = uVar1;
  thunk_FUN_0333a630(piVar3,uVar1);
  *unaff_x19 = *unaff_x19 + -1;
  return;
}


