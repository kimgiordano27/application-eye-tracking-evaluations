/*
FUNCTION_NAME: OVRPlugin$$get_fixedFoveatedRenderingLevel
ENTRY_POINT: 056727ec
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_fixedFoveatedRenderingLevel(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_06a0f1a0;
  if ((DAT_06dbc677 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0f1a0);
    DAT_06dbc677 = 1;
  }
  uVar1 = *(undefined4 *)(param_1 + 0xc0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_05655544(uVar1,param_2,param_1,0);
  return;
}


