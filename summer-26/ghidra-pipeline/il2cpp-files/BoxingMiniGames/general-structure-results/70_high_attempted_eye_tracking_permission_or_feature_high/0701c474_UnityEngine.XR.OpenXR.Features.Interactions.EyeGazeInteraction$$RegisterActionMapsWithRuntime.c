/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$RegisterActionMapsWithRuntime
ENTRY_POINT: 0701c474
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


int UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__RegisterActionMapsWithRuntime
              (void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0xd7a) = 1;
  iVar1 = *(int *)(unaff_x19 + 0x2b8);
  if (iVar1 == 0) {
    if (*(int *)(*(long *)PTR_DAT_079fd888 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    iVar1 = 0x5c;
  }
  return iVar1;
}


