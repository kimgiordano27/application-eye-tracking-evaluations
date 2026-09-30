/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods$$SetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 06a48328
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 109
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


bool Unity_XR_Oculus_NativeMethods__SetEyeTrackedFoveatedRenderingEnabled
               (long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  long local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  long local_70;
  long lStack_68;
  long local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  long local_40;
  
  puVar3 = PTR_DAT_0727fcb8;
  if ((DAT_076e2c58 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727fc38);
    thunk_FUN_032e1da0(PTR_DAT_0727fcb8);
    DAT_076e2c58 = 1;
  }
  lVar1 = *param_2;
  lVar2 = param_2[1];
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  if ((*param_1 == lVar1) && (param_1[1] == lVar2)) {
    local_40 = param_2[6];
    local_90 = param_2[2];
    lStack_68 = param_2[1];
    local_70 = *param_2;
    uStack_58 = (undefined4)param_2[3];
    uStack_54 = (undefined4)((ulong)param_2[3] >> 0x20);
    uStack_48 = (undefined4)param_2[5];
    uStack_44 = (undefined4)((ulong)param_2[5] >> 0x20);
    uStack_50 = (undefined4)param_2[4];
    uStack_4c = (undefined4)((ulong)param_2[4] >> 0x20);
    uStack_7c = CONCAT44(uStack_48,uStack_4c);
    uStack_84 = uStack_54;
    uStack_80 = uStack_50;
    uStack_88 = uStack_58;
    local_60 = local_90;
    if (*(int *)(*(long *)PTR_DAT_0727fc38 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uStack_a8 = uStack_88;
    local_b0 = local_90;
    uStack_9c = uStack_7c;
    uStack_a4 = uStack_84;
    uStack_a0 = uStack_80;
    uVar4 = FUN_06bf328c(param_1 + 2,&local_b0,0);
    if (((uVar4 & 1) != 0) &&
       (uVar4 = FUN_05935dc4(*(undefined4 *)((long)param_2 + 0x2c),(long)param_1 + 0x2c,0),
       (uVar4 & 1) != 0)) {
      return (int)param_1[6] == (int)param_2[6];
    }
  }
  return false;
}


