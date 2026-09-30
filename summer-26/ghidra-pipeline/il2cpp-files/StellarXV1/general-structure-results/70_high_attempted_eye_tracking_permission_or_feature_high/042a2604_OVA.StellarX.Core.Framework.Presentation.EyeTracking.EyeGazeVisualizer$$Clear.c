/*
FUNCTION_NAME: OVA.StellarX.Core.Framework.Presentation.EyeTracking.EyeGazeVisualizer$$Clear
ENTRY_POINT: 042a2604
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVA_StellarX_Core_Framework_Presentation_EyeTracking_EyeGazeVisualizer__Clear(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  
  uVar2 = _UNK_01aef1c8;
  uVar1 = _DAT_01aef1c0;
  *(undefined1 *)(unaff_x19 + 0x4a) = 1;
  *(undefined1 *)(unaff_x19 + 0x48) = 1;
  *(undefined8 *)(unaff_x19 + 0x18) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x10) = uVar1;
  return;
}


