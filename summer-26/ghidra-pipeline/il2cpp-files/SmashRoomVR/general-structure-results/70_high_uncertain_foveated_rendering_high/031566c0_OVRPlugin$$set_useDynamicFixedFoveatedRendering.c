/*
FUNCTION_NAME: OVRPlugin$$set_useDynamicFixedFoveatedRendering
ENTRY_POINT: 031566c0
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


undefined8
OVRPlugin__set_useDynamicFixedFoveatedRendering
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 unaff_w20;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  
  FUN_028b2014(param_2,param_3,*param_1,0);
  puVar1 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x10);
  *puVar1 = param_2;
  thunk_FUN_01b4f09c(puVar1,param_2);
  uVar2 = FUN_01ebe8b0();
  uVar3 = thunk_FUN_01afaadc(*unaff_x25);
  FUN_020854b0(uVar3,unaff_w20,uVar2,*unaff_x24);
  return uVar3;
}


