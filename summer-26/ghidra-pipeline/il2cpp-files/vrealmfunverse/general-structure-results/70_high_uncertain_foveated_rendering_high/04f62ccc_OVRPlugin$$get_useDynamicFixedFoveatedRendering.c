/*
FUNCTION_NAME: OVRPlugin$$get_useDynamicFixedFoveatedRendering
ENTRY_POINT: 04f62ccc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_useDynamicFixedFoveatedRendering(void)

{
  undefined8 uVar1;
  undefined4 unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  
  thunk_FUN_02b9ad44();
  uVar1 = FUN_04f8bc1c(0);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  thunk_FUN_02bb0e9c();
  if (**(long **)(*unaff_x21 + 0xb8) != 0) {
    uVar1 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06318b00,
                         *(undefined4 *)(**(long **)(*unaff_x21 + 0xb8) + 0x18));
    *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
    thunk_FUN_02bb0e9c();
    FUN_04dbdb8c();
    *(undefined4 *)(unaff_x20 + 0x10) = unaff_w19;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


