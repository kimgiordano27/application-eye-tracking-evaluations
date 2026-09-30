/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods$$GetEyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 06a486e4
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


void Unity_XR_Oculus_NativeMethods__GetEyeTrackedFoveatedRenderingSupported
               (undefined8 *param_1,long param_2,undefined4 param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [80];
  undefined1 auStack_90 [80];
  
  puVar1 = PTR_DAT_0727fd00;
  if ((DAT_076e2c5d & 1) == 0) {
    thunk_FUN_032e1da0(Method_System_Collections_Generic_Stack<IMGUIContainer>_get_Count__);
    thunk_FUN_032e1da0(PTR_DAT_0727fd00);
    DAT_076e2c5d = 1;
  }
  plVar3 = *(long **)(param_2 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  if (DAT_076e2c9e == '\0') {
    thunk_FUN_032e1da0(PTR_DAT_0727fd00);
    DAT_076e2c9e = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *(long *)puVar1;
  }
  memcpy(auStack_e0,*(void **)(lVar2 + 0xb8),0x50);
  if (plVar3 != (long *)0x0) {
    lVar2 = *plVar3;
    pcVar4 = *(code **)(lVar2 + 0x1e8);
    memcpy(auStack_90,auStack_e0,0x50);
    (*pcVar4)(&local_118,plVar3,auStack_90,param_3,*(undefined8 *)(lVar2 + 0x1f0));
    param_1[6] = local_e8;
    param_1[3] = uStack_100;
    param_1[2] = local_108;
    param_1[5] = uStack_f0;
    param_1[4] = local_f8;
    param_1[1] = uStack_110;
    *param_1 = local_118;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


