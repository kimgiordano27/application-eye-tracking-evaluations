/*
FUNCTION_NAME: OVRManager$$SetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 01f5fcf0
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


bool OVRManager__SetEyeTrackedFoveatedRenderingEnabled(void)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x24;
  ulong unaff_x25;
  long unaff_x28;
  
  uVar1 = unaff_x22 + unaff_x21;
  if ((long)uVar1 < 0) {
    uVar1 = unaff_x28 + uVar1 + 1;
  }
  if (uVar1 < unaff_x25) {
    FUN_01e76648();
    *unaff_x20 = 0;
  }
  else {
    lVar3 = *unaff_x24;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01220628();
      lVar3 = *unaff_x24;
    }
    puVar2 = PTR_DAT_027c0ad8;
    *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10);
    uVar4 = *(undefined8 *)puVar2;
    *(undefined4 *)(unaff_x19 + 0x40) = 4;
    *(undefined8 *)(unaff_x19 + 0x48) = uVar4;
    *(undefined8 *)(unaff_x19 + 0x50) = 0;
  }
  return uVar1 < unaff_x25;
}


