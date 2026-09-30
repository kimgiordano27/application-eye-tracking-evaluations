/*
FUNCTION_NAME: OVRPlugin$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 063879f8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin__set_eyeTrackedFoveatedRenderingEnabled(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  
  uVar1 = RootMotion_FinalIK_Finger___ctor();
  FUN_061683b8(uVar1,*unaff_x25,0);
  puVar2 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x38);
  *puVar2 = uVar1;
  thunk_FUN_037aeb94(puVar2,uVar1);
  uVar1 = RootMotion_FinalIK_Finger___ctor(*unaff_x21,5);
  FUN_061683b8(uVar1,*unaff_x24,0);
  puVar2 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x40);
  *puVar2 = uVar1;
  thunk_FUN_037aeb94(puVar2,uVar1);
  uVar1 = RootMotion_FinalIK_Finger___ctor(*unaff_x21,4);
  FUN_061683b8(uVar1,*unaff_x23,0);
  puVar2 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x48);
  *puVar2 = uVar1;
  thunk_FUN_037aeb94(puVar2,uVar1);
  uVar1 = RootMotion_FinalIK_Finger___ctor(*unaff_x21,5);
  FUN_061683b8(uVar1,*(undefined8 *)PTR_DAT_07db6318,0);
  puVar2 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x50);
  *puVar2 = uVar1;
  thunk_FUN_037aeb94(puVar2,uVar1);
  return;
}


