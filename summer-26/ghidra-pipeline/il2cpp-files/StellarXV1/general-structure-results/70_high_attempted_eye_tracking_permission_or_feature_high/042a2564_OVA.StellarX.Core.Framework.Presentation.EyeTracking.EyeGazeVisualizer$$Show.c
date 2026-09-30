/*
FUNCTION_NAME: OVA.StellarX.Core.Framework.Presentation.EyeTracking.EyeGazeVisualizer$$Show
ENTRY_POINT: 042a2564
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;attempted_use
EVIDENCE: strong_eye_source_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVA_StellarX_Core_Framework_Presentation_EyeTracking_EyeGazeVisualizer__Show(void)

{
  undefined *puVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  puVar1 = PTR_DAT_0928afa8;
  if ((DAT_09885fe8 & 1) == 0) {
    FUN_04077588(PTR_DAT_0928afa8);
    DAT_09885fe8 = 1;
  }
  local_38 = *(undefined8 *)puVar1;
  uStack_30 = 0xffffffffffffffff;
  local_28 = 0x1e;
  FUN_076b01b4(&local_38,0);
  return;
}


