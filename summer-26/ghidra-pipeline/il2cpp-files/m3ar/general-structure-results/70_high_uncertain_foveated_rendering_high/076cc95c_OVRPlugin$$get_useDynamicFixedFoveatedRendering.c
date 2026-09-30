/*
FUNCTION_NAME: OVRPlugin$$get_useDynamicFixedFoveatedRendering
ENTRY_POINT: 076cc95c
PROGRAM: m3ar-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_useDynamicFixedFoveatedRendering(ulong param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x21;
  undefined8 *puVar3;
  long unaff_x22;
  undefined8 *puVar4;
  long unaff_x23;
  undefined8 *unaff_x24;
  
  puVar3 = *(undefined8 **)(unaff_x21 + 0xcb8);
  puVar4 = *(undefined8 **)(unaff_x22 + 0xca8);
  if ((param_1 & 1) == 0) {
    FUN_0403162c(PTR_DAT_08fadca8);
    FUN_0403162c(PTR_DAT_08fadcb8);
    FUN_0403162c(PTR_DAT_08fadcc0);
    *(undefined1 *)(unaff_x23 + 0x1ec) = 1;
  }
  uVar1 = thunk_FUN_0406deb8(*unaff_x24);
  FUN_057d4cdc(uVar1,param_3,*puVar3);
  lVar2 = thunk_FUN_0406deb8(*puVar4);
  FUN_075273c0(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar1;
  *(long *)(param_2 + 0x30) = lVar2;
  return;
}


