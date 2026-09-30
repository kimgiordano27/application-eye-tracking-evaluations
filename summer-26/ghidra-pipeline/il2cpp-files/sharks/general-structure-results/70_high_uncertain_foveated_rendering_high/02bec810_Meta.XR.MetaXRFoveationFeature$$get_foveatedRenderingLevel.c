/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$get_foveatedRenderingLevel
ENTRY_POINT: 02bec810
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


void Meta_XR_MetaXRFoveationFeature__get_foveatedRenderingLevel(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 in_w8;
  undefined4 unaff_w20;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  
  *(undefined1 *)(unaff_x23 + 0xd94) = in_w8;
  uVar2 = FUN_02a4e620();
  uVar1 = *(undefined4 *)(unaff_x22 + 0x10);
  uVar3 = FUN_02b844b4();
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01843fdc(*unaff_x24);
  }
  FUN_02bdb538(uVar2,uVar1,unaff_w20,uVar3);
  return;
}


