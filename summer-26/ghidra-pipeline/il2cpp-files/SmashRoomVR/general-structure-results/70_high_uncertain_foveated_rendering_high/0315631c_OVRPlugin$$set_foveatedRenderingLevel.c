/*
FUNCTION_NAME: OVRPlugin$$set_foveatedRenderingLevel
ENTRY_POINT: 0315631c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


long OVRPlugin__set_foveatedRenderingLevel(undefined8 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_03d80410;
  if ((DAT_03ff2008 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d80410);
    DAT_03ff2008 = 1;
  }
  lVar3 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
  FUN_03081994(lVar3,0);
  *(undefined4 *)(lVar3 + 0x10) = 0xfffffffe;
  uVar2 = FUN_030852e8(0);
  *(undefined4 *)(lVar3 + 0x28) = uVar2;
  *(undefined8 *)(lVar3 + 0x30) = param_1;
  thunk_FUN_01b4f09c((undefined8 *)(lVar3 + 0x30),param_1);
  return lVar3;
}


