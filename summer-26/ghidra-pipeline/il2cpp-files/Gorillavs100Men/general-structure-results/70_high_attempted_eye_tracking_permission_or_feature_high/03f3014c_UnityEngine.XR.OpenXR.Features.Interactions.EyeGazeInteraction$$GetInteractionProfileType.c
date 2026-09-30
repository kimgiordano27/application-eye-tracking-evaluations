/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$GetInteractionProfileType
ENTRY_POINT: 03f3014c
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined4
UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__GetInteractionProfileType(void)

{
  long *plVar1;
  long lVar2;
  undefined8 in_stack_00000028;
  
  plVar1 = (long *)__cxa_begin_catch();
  lVar2 = *plVar1;
  __cxa_end_catch();
                    /* try { // try from 03f30164 to 04030177 has its CatchHandler @ 03f302bc */
  FUN_030119f8(in_stack_00000028,*(undefined8 *)PTR_DAT_046bf8d8);
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02061544(lVar2);
  }
  return 0;
}


