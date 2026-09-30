/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 0638790c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin__get_eyeTrackedFoveatedRenderingEnabled(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  FUN_061683b8(param_1,*unaff_x22,0);
  puVar1 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
  *puVar1 = param_1;
  thunk_FUN_037aeb94(puVar1,param_1);
  uVar2 = RootMotion_FinalIK_Finger___ctor(*unaff_x21,7);
  FUN_061683b8(uVar2,*unaff_x29,0);
  puVar1 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
  *puVar1 = uVar2;
  thunk_FUN_037aeb94(puVar1,uVar2);
  uVar2 = RootMotion_FinalIK_Finger___ctor(*unaff_x21,0xb);
  FUN_061683b8(uVar2,*unaff_x28,0);
  puVar1 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x20);
  *puVar1 = uVar2;
  thunk_FUN_037aeb94(puVar1,uVar2);
  uVar2 = RootMotion_FinalIK_Finger___ctor(*unaff_x21,5);
  FUN_061683b8(uVar2,*unaff_x27,0);
  puVar1 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x28);
  *puVar1 = uVar2;
  thunk_FUN_037aeb94(puVar1,uVar2);
  uVar2 = RootMotion_FinalIK_Finger___ctor(*unaff_x21,4);
  FUN_061683b8(uVar2,*unaff_x26,0);
  puVar1 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x30);
  *puVar1 = uVar2;
  thunk_FUN_037aeb94(puVar1,uVar2);
  uVar2 = RootMotion_FinalIK_Finger___ctor(*unaff_x21,4);
  FUN_061683b8(uVar2,*unaff_x25,0);
  puVar1 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x38);
  *puVar1 = uVar2;
  thunk_FUN_037aeb94(puVar1,uVar2);
  uVar2 = RootMotion_FinalIK_Finger___ctor(*unaff_x21,5);
  FUN_061683b8(uVar2,*unaff_x24,0);
  puVar1 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x40);
  *puVar1 = uVar2;
  thunk_FUN_037aeb94(puVar1,uVar2);
  uVar2 = RootMotion_FinalIK_Finger___ctor(*unaff_x21,4);
  FUN_061683b8(uVar2,*unaff_x23,0);
  puVar1 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x48);
  *puVar1 = uVar2;
  thunk_FUN_037aeb94(puVar1,uVar2);
  uVar2 = RootMotion_FinalIK_Finger___ctor(*unaff_x21,5);
  FUN_061683b8(uVar2,*(undefined8 *)PTR_DAT_07db6318,0);
  puVar1 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x50);
  *puVar1 = uVar2;
  thunk_FUN_037aeb94(puVar1,uVar2);
  return;
}


