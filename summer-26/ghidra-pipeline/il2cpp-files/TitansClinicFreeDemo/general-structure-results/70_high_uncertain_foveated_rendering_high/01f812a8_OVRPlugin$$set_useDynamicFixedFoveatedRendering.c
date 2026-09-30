/*
FUNCTION_NAME: OVRPlugin$$set_useDynamicFixedFoveatedRendering
ENTRY_POINT: 01f812a8
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__set_useDynamicFixedFoveatedRendering(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint unaff_w20;
  
  thunk_FUN_01279b34();
  uVar1 = thunk_FUN_0124bba8();
  if ((unaff_w20 & 1) == 0) {
    uVar2 = thunk_FUN_01279b34(PTR_DAT_027bcbc8);
    FUN_01f68e18(uVar1,uVar2,0);
  }
  else {
    FUN_01f68dbc(uVar1,0);
  }
  uVar2 = thunk_FUN_01279b34(PTR_DAT_027c12d0);
                    /* WARNING: Subroutine does not return */
  FUN_01230b78(uVar1,uVar2);
}


