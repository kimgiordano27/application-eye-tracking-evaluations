/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$get_useDynamicFoveatedRendering
ENTRY_POINT: 03390f20
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 91
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_foveation_hits_4;functionality_foveated_rendering
*/


void Meta_XR_MetaXRFoveationFeature__get_useDynamicFoveatedRendering(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int in_w8;
  undefined4 *unaff_x19;
  undefined4 uVar4;
  long unaff_x20;
  long unaff_x21;
  
  uVar1 = *unaff_x19;
  if (in_w8 == 0) {
    FUN_01d7d918(StringLiteral_3003);
    *(undefined1 *)(unaff_x21 + 0x3b6) = 1;
  }
  puVar2 = StringLiteral_4737;
  if (unaff_x20 == 0) {
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = FUN_03277aec();
    uVar4 = *(undefined4 *)(unaff_x20 + 0x10);
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_0338f120(uVar1,uVar3,uVar4,0);
  return;
}


