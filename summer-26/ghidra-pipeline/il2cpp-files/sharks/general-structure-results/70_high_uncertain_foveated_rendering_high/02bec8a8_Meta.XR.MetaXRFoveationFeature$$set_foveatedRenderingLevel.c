/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$set_foveatedRenderingLevel
ENTRY_POINT: 02bec8a8
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;strong_foveation_hits_4;functionality_foveated_rendering
*/


void Meta_XR_MetaXRFoveationFeature__set_foveatedRenderingLevel(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x21;
  
  puVar1 = PTR_DAT_037f3df8;
  if ((*(byte *)(unaff_x21 + 0xd1e) & 1) == 0) {
    FUN_017fc350(PTR_DAT_037f3df8);
    *(undefined1 *)(unaff_x21 + 0xd1e) = 1;
  }
  uVar2 = *param_1;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  FUN_02b4d34c(uVar2,0);
  return;
}


