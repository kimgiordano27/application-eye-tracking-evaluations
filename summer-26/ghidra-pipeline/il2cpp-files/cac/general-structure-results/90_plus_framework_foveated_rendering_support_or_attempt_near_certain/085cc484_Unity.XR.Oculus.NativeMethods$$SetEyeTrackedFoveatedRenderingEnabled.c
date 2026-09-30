/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods$$SetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 085cc484
PROGRAM: cac-libil2cpp.so
SCORE: 109
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


undefined8
Unity_XR_Oculus_NativeMethods__SetEyeTrackedFoveatedRenderingEnabled
          (long *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x21;
  long *plVar5;
  long unaff_x25;
  long lVar6;
  
  lVar6 = *(long *)(unaff_x25 + 0x550);
  plVar5 = *(long **)(unaff_x21 + 0xae8);
  while( true ) {
    if ((DAT_0969b197 & 1) == 0) {
      FUN_03f13384(plVar5);
      DAT_0969b197 = 1;
    }
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    uVar1 = FUN_074d0d70(param_1,param_2,param_3,0);
    uVar2 = FUN_073e003c(uVar1,0,0);
    if ((uVar2 & 1) != 0) {
      return uVar1;
    }
    uVar3 = (**(code **)(*param_1 + 0x8f8))(param_1,*(undefined8 *)(*param_1 + 0x900));
    lVar4 = *(long *)(lVar6 + 0xe0);
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_03f6fea8(lVar4);
    }
    uVar2 = FUN_074cf3e8(uVar3,0,0);
    if ((uVar2 & 1) == 0) break;
    param_1 = (long *)(**(code **)(*param_1 + 0x8f8))(param_1,*(undefined8 *)(*param_1 + 0x900));
    lVar4 = *plVar5;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_03f6fea8(lVar4);
    }
  }
  return uVar1;
}


