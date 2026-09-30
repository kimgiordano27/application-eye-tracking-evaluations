/*
FUNCTION_NAME: OVA.StellarX.Core.Framework.Presentation.EyeTracking.EyeGazeVisualizerController$$.ctor
ENTRY_POINT: 042a263c
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


void OVA_StellarX_Core_Framework_Presentation_EyeTracking_EyeGazeVisualizerController___ctor
               (undefined8 param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  cVar1 = *(char *)(unaff_x20 + 0x777);
  *(undefined1 *)(param_2 + 0x4a) = 0;
  *(undefined1 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x20) = param_1;
  if (cVar1 == '\0') {
    FUN_04077588(PTR_DAT_09286e28);
    *(undefined1 *)(unaff_x20 + 0x777) = 1;
  }
  uVar2 = **(undefined8 **)(*(long *)PTR_DAT_09286e28 + 0xb8);
  *(undefined1 *)(unaff_x19 + 0x7e) = 0;
  *(undefined1 *)(unaff_x19 + 0x68) = 0;
  *(undefined8 *)(unaff_x19 + 0x30) = uVar2;
  return;
}


