/*
FUNCTION_NAME: OVA.StellarX.Core.Framework.Presentation.EyeTracking.EyeGazeVisualizer$$Hide
ENTRY_POINT: 042a258c
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


void OVA_StellarX_Core_Framework_Presentation_EyeTracking_EyeGazeVisualizer__Hide(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  FUN_04077588();
  *(undefined1 *)(unaff_x19 + 0xfe8) = 1;
  in_stack_00000008 = *unaff_x20;
  in_stack_00000010 = 0xffffffffffffffff;
  in_stack_00000018 = 0x1e;
  FUN_076b01b4(&stack0x00000008,0);
  return;
}


