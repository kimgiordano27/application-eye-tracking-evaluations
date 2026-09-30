/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$UnregisterDeviceLayout
ENTRY_POINT: 0701c31c
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


undefined4
UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__UnregisterDeviceLayout(void)

{
  long lVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  lVar1 = FUN_03d1b5c8();
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  uVar2 = FUN_070081e8(lVar1,0);
  uVar3 = 2;
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_0701c248();
    uVar3 = 2;
    if ((uVar2 & 1) == 0) {
      uVar3 = 3;
    }
  }
  return uVar3;
}


