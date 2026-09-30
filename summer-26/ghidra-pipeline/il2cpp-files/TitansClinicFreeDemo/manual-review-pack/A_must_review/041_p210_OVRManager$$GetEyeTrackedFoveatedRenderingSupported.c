/*
FUNCTION_NAME: OVRManager$$GetEyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 01f5fa4c
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


bool OVRManager__GetEyeTrackedFoveatedRenderingSupported(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000008;
  
  thunk_FUN_01220628();
  uVar1 = unaff_x21 - *(long *)(unaff_x19 + 0x28);
  if ((long)uVar1 < 0) {
    uVar1 = uVar1 + 864000000000;
  }
  if (uVar1 < 0x2bca2875f4374000) {
    in_stack_00000008 = 0;
    FUN_01e766e4(&stack0x00000008,uVar1,1,0);
    *unaff_x20 = in_stack_00000008;
  }
  else {
    uVar2 = *(undefined8 *)PTR_DAT_027c0ad8;
    *(undefined4 *)(unaff_x19 + 0x40) = 4;
    *(undefined8 *)(unaff_x19 + 0x48) = uVar2;
    *(undefined8 *)(unaff_x19 + 0x50) = 0;
  }
  return uVar1 < 0x2bca2875f4374000;
}


