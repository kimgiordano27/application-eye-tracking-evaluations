/*
FUNCTION_NAME: OVRManager$$set_foveatedRenderingLevel
ENTRY_POINT: 06368c78
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


void OVRManager__set_foveatedRenderingLevel(undefined8 param_1)

{
  undefined8 *puVar1;
  long *unaff_x23;
  long *unaff_x24;
  
  FUN_044a4918();
  puVar1 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x10);
  *puVar1 = param_1;
  thunk_FUN_037aeb94(puVar1,param_1);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  if (DAT_0825b38a == '\0') {
    FUN_0373b518(PTR_DAT_07d901a8);
    DAT_0825b38a = '\x01';
  }
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_03f63ec4();
  FUN_060c2498();
  return;
}


