/*
FUNCTION_NAME: OVRManager$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 053058e0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__get_eyeTrackedFoveatedRenderingEnabled(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar2;
  long unaff_x21;
  
  puVar2 = *(undefined8 **)(unaff_x20 + 0x9a8);
  if ((*(byte *)(unaff_x21 + 0x12e) & 1) == 0) {
    FUN_02f08768(System_Data_DataExpression_TypeInfo);
    *(undefined1 *)(unaff_x21 + 0x12e) = 1;
  }
  uVar1 = FUN_02f0880c(*puVar2,*(undefined4 *)(unaff_x19 + 0x44));
  *(undefined8 *)(unaff_x19 + 0x58) = uVar1;
  return;
}


