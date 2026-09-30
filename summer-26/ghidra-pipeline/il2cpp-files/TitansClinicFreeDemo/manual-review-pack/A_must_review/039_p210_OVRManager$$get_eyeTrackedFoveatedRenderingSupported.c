/*
FUNCTION_NAME: OVRManager$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 01f5fa00
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 144
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


bool OVRManager__get_eyeTrackedFoveatedRenderingSupported(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000008;
  
  thunk_FUN_01279b34(*(undefined8 *)(param_1 + 0xad8));
  *(undefined1 *)(unaff_x21 + 0xcab) = 1;
  puVar1 = PTR_DAT_027b1b40;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  lVar2 = FUN_01e76400((undefined8 *)(unaff_x19 + 0x38),0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01220628(*(long *)puVar1);
  }
  uVar3 = lVar2 - *(long *)(unaff_x19 + 0x28);
  if ((long)uVar3 < 0) {
    uVar3 = uVar3 + 864000000000;
  }
  if (uVar3 < 0x2bca2875f4374000) {
    in_stack_00000008 = 0;
    FUN_01e766e4(&stack0x00000008,uVar3,1,0);
    *(undefined8 *)(unaff_x19 + 0x38) = in_stack_00000008;
  }
  else {
    uVar4 = *(undefined8 *)PTR_DAT_027c0ad8;
    *(undefined4 *)(unaff_x19 + 0x40) = 4;
    *(undefined8 *)(unaff_x19 + 0x48) = uVar4;
    *(undefined8 *)(unaff_x19 + 0x50) = 0;
  }
  return uVar3 < 0x2bca2875f4374000;
}


