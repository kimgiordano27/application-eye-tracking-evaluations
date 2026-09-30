/*
FUNCTION_NAME: OVRManager$$set_fixedFoveatedRenderingLevel
ENTRY_POINT: 06368f24
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8
OVRManager__set_fixedFoveatedRenderingLevel(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x21;
  long unaff_x22;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(unaff_x22 + 0x608);
  if ((param_1 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07db5608);
    *(undefined1 *)(unaff_x21 + 0x43e) = 1;
  }
  uVar1 = thunk_FUN_037788cc(*puVar2);
  FUN_06369668(uVar1,param_2,param_3);
  return uVar1;
}


