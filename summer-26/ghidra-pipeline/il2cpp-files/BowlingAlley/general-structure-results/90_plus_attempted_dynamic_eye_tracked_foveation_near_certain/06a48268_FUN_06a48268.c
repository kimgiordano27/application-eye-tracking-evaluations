/*
FUNCTION_NAME: FUN_06a48268
ENTRY_POINT: 06a48268
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


uint FUN_06a48268(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  if ((DAT_076e2c57 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727fd08);
    DAT_076e2c57 = 1;
  }
  puVar1 = PTR_DAT_0727fd08;
  if (param_2 != (long *)0x0) {
    if (*param_2 == *(long *)PTR_DAT_0727fd08) {
      puVar3 = (undefined8 *)thunk_FUN_032a57f4(param_2);
      uStack_48 = puVar3[3];
      local_50 = puVar3[2];
      uStack_38 = puVar3[5];
      local_40 = puVar3[4];
      local_30 = puVar3[6];
      uStack_58 = puVar3[1];
      local_60 = *puVar3;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uStack_98 = uStack_58;
      local_a0 = local_60;
      uStack_88 = uStack_48;
      uStack_90 = local_50;
      uStack_78 = uStack_38;
      local_80 = local_40;
      local_70 = local_30;
      uVar2 = Unity_XR_Oculus_NativeMethods__SetEyeTrackedFoveatedRenderingEnabled
                        (param_1,&local_a0);
      goto LAB_06a48314;
    }
  }
  uVar2 = 0;
LAB_06a48314:
  return uVar2 & 1;
}


