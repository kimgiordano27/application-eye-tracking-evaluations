/*
FUNCTION_NAME: FUN_089f1148
ENTRY_POINT: 089f1148
PROGRAM: cac-libil2cpp.so
SCORE: 92
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_089f1148(long param_1)

{
  if ((DAT_096a47ae & 1) == 0) {
    FUN_03f13384(UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice_var);
    DAT_096a47ae = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_054d9f24(*(long *)(param_1 + 0x20),
                 *(undefined8 *)
                  UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice_var);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


