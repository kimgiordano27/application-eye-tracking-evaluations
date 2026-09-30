/*
FUNCTION_NAME: FUN_06a48444
ENTRY_POINT: 06a48444
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 110
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


uint FUN_06a48444(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  puVar1 = PTR_DAT_0727fd08;
  if ((DAT_076e2c59 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727fd08);
    DAT_076e2c59 = 1;
  }
  uStack_58 = param_2[3];
  local_60 = param_2[2];
  uStack_48 = param_2[5];
  local_50 = param_2[4];
  local_40 = param_2[6];
  uStack_68 = param_2[1];
  local_70 = *param_2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uStack_a8 = uStack_68;
  local_b0 = local_70;
  uStack_98 = uStack_58;
  uStack_a0 = local_60;
  uStack_88 = uStack_48;
  local_90 = local_50;
  local_80 = local_40;
  uVar2 = Unity_XR_Oculus_NativeMethods__SetEyeTrackedFoveatedRenderingEnabled(param_1,&local_b0);
  return uVar2 & 1;
}


