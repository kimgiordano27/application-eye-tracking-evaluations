/*
FUNCTION_NAME: OVRPlugin$$get_useDynamicFixedFoveatedRendering
ENTRY_POINT: 03156674
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8 OVRPlugin__get_useDynamicFixedFoveatedRendering(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long in_x9;
  undefined4 unaff_w20;
  undefined8 uVar3;
  long *unaff_x23;
  long unaff_x24;
  undefined8 *puVar4;
  long unaff_x25;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(unaff_x25 + 0x440);
  puVar4 = *(undefined8 **)(unaff_x24 + 0x438);
  if (*(long *)(in_x9 + 0x10) == 0) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01ac7298(param_1);
      param_1 = *unaff_x23;
    }
    uVar3 = **(undefined8 **)(param_1 + 0xb8);
    uVar1 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d80420);
    FUN_028b2014(uVar1,uVar3,*(undefined8 *)PTR_DAT_03d80430,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x10);
    *puVar2 = uVar1;
    thunk_FUN_01b4f09c(puVar2,uVar1);
  }
  uVar1 = FUN_01ebe8b0();
  uVar3 = thunk_FUN_01afaadc(*puVar5);
  FUN_020854b0(uVar3,unaff_w20,uVar1,*puVar4);
  return uVar3;
}


