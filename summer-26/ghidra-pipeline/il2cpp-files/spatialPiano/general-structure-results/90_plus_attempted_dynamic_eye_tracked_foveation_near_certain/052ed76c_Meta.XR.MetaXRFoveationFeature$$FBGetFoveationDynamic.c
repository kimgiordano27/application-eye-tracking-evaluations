/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$FBGetFoveationDynamic
ENTRY_POINT: 052ed76c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 107
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_1;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


long Meta_XR_MetaXRFoveationFeature__FBGetFoveationDynamic(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = System_Runtime_Remoting_ConfigHandler_TypeInfo;
  if ((DAT_06bbb087 & 1) == 0) {
    FUN_02f08768(System_Runtime_Remoting_ConfigHandler_TypeInfo);
    DAT_06bbb087 = 1;
  }
  lVar2 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
  FUN_05116b38(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  return lVar2;
}


