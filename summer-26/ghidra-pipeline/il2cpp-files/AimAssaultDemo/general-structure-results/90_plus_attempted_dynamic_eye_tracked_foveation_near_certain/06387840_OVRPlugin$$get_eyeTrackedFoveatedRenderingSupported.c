/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 06387840
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


void OVRPlugin__get_eyeTrackedFoveatedRenderingSupported(ulong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x19;
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
  
  if ((param_1 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07db62d0);
    FUN_0373b518(PTR_DAT_07d96690);
    FUN_0373b518(PTR_DAT_07db62e8);
    FUN_0373b518(PTR_DAT_07db6308);
    FUN_0373b518(PTR_DAT_07db62f8);
    FUN_0373b518(PTR_DAT_07db62e0);
    FUN_0373b518(PTR_DAT_07db62d8);
    FUN_0373b518(PTR_DAT_07db6310);
    FUN_0373b518(PTR_DAT_07db6300);
    FUN_0373b518(PTR_DAT_07db62f0);
    FUN_0373b518(PTR_DAT_07db6318);
    *(undefined1 *)(unaff_x19 + 0x588) = 1;
  }
  uVar1 = RootMotion_FinalIK_Finger___ctor(*unaff_x21,6);
  FUN_061683b8(uVar1,*unaff_x22,0);
  puVar2 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 8);
  *puVar2 = uVar1;
  thunk_FUN_037aeb94(puVar2,uVar1);
  uVar1 = RootMotion_FinalIK_Finger___ctor(*unaff_x21,6);
  FUN_061683b8(uVar1,*unaff_x22,0);
  puVar2 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
  *puVar2 = uVar1;
  thunk_FUN_037aeb94(puVar2,uVar1);
  uVar1 = RootMotion_FinalIK_Finger___ctor(*unaff_x21,7);
  FUN_061683b8(uVar1,*unaff_x29,0);
  puVar2 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
  *puVar2 = uVar1;
  thunk_FUN_037aeb94(puVar2,uVar1);
  uVar1 = RootMotion_FinalIK_Finger___ctor(*unaff_x21,0xb);
  FUN_061683b8(uVar1,*unaff_x28,0);
  puVar2 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x20);
  *puVar2 = uVar1;
  thunk_FUN_037aeb94(puVar2,uVar1);
  uVar1 = RootMotion_FinalIK_Finger___ctor(*unaff_x21,5);
  FUN_061683b8(uVar1,*unaff_x27,0);
  puVar2 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x28);
  *puVar2 = uVar1;
  thunk_FUN_037aeb94(puVar2,uVar1);
  uVar1 = RootMotion_FinalIK_Finger___ctor(*unaff_x21,4);
  FUN_061683b8(uVar1,*unaff_x26,0);
  puVar2 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x30);
  *puVar2 = uVar1;
  thunk_FUN_037aeb94(puVar2,uVar1);
  uVar1 = RootMotion_FinalIK_Finger___ctor(*unaff_x21,4);
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


