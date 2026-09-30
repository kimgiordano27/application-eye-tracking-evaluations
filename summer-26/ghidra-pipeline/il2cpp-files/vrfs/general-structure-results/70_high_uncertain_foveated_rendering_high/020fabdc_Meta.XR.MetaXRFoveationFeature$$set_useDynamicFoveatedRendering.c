/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$set_useDynamicFoveatedRendering
ENTRY_POINT: 020fabdc
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;strong_foveation_hits_4;functionality_foveated_rendering
*/


undefined8 Meta_XR_MetaXRFoveationFeature__set_useDynamicFoveatedRendering(void)

{
  ulong uVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  long *unaff_x21;
  
  thunk_FUN_0159f088();
  *(undefined1 *)(unaff_x20 + 0x1a5) = 1;
  uVar2 = *unaff_x19;
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar1 = FUN_051d2ac0(uVar2,0,0);
  if ((uVar1 & 1) != 0) {
    uVar2 = unaff_x19[1];
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar1 = FUN_051d2ac0(uVar2,0,0);
    if ((uVar1 & 1) != 0) {
      uVar2 = unaff_x19[2];
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar1 = FUN_051d2ac0(uVar2,0,0);
      if ((uVar1 & 1) != 0) {
        uVar2 = unaff_x19[3];
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar2 = FUN_051d2ac0(uVar2,0,0);
        return uVar2;
      }
    }
  }
  return 0;
}


