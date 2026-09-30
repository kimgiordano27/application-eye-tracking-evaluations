/*
FUNCTION_NAME: FUN_06a26efc
ENTRY_POINT: 06a26efc
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


uint FUN_06a26efc(undefined4 *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 auStack_98 [16];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_44;
  
  puVar1 = PTR_DAT_0727fd08;
  if ((DAT_076e2a61 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
    thunk_FUN_032e1da0(PTR_DAT_0727fd08);
    DAT_076e2a61 = 1;
  }
  local_44 = 0;
  memcpy(auStack_98,param_2,0x50);
  local_a0 = local_58;
  uStack_b8 = uStack_70;
  local_c0 = local_78;
  uStack_a8 = uStack_60;
  local_b0 = uStack_68;
  uStack_c8 = uStack_80;
  local_d0 = local_88;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uStack_108 = uStack_c8;
  local_110 = local_d0;
  uStack_f8 = uStack_b8;
  uStack_100 = local_c0;
  uStack_e8 = uStack_a8;
  local_f0 = local_b0;
  local_e0 = local_a0;
  uVar3 = Unity_XR_Oculus_NativeMethods__SetEyeTrackedFoveatedRenderingEnabled
                    (param_1 + 4,&local_110,0);
  if ((uVar3 & 1) != 0) {
    local_44 = *param_1;
    uVar3 = FUN_05935dc4(*param_2,&local_44,0);
    puVar1 = PTR_DAT_072794f0;
    if ((uVar3 & 1) != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x12);
      uVar5 = *(undefined8 *)(param_2 + 0x12);
      if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar3 = FUN_06bece64(uVar4,uVar5,0);
      if ((uVar3 & 1) != 0) {
        uVar5 = *(undefined8 *)(param_1 + 2);
        uVar4 = *(undefined8 *)(param_2 + 2);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar2 = FUN_06bece64(uVar5,uVar4,0);
        goto LAB_06a2703c;
      }
    }
  }
  uVar2 = 0;
LAB_06a2703c:
  return uVar2 & 1;
}


