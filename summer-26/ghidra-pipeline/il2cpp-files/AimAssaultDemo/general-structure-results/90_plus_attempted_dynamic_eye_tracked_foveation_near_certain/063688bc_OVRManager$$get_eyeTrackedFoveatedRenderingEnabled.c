/*
FUNCTION_NAME: OVRManager$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 063688bc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 165
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_4;paired_field_refs_with_eye_source;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


long OVRManager__get_eyeTrackedFoveatedRenderingEnabled(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 *puVar3;
  long in_stack_00000078;
  
  FUN_05d64e94(&stack0x00000030,**(undefined8 **)(param_1 + 0x660));
  lVar1 = in_stack_00000078;
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    uVar2 = FUN_063683dc();
    if (lVar1 == 0) goto LAB_06368964;
    puVar3 = (undefined8 *)(lVar1 + 0x90);
    *puVar3 = uVar2;
    thunk_FUN_037aeb94(puVar3,uVar2);
  }
  lVar1 = in_stack_00000078;
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    uVar2 = FUN_063683dc();
    if (lVar1 == 0) {
LAB_06368964:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    puVar3 = (undefined8 *)(lVar1 + 0x98);
    *puVar3 = uVar2;
    thunk_FUN_037aeb94(puVar3,uVar2);
  }
  return in_stack_00000078;
}


