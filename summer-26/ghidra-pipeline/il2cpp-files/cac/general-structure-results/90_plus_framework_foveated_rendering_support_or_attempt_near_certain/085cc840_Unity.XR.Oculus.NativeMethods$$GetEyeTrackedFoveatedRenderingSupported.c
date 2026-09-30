/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods$$GetEyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 085cc840
PROGRAM: cac-libil2cpp.so
SCORE: 131
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_NativeMethods__GetEyeTrackedFoveatedRenderingSupported
               (long param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x24;
  ulong uVar6;
  
  while (lVar2 = (**(code **)(param_1 + 0x8b8))(param_2,param_3,*(undefined8 *)(param_1 + 0x8c0)),
        lVar2 != 0) {
    if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
      uVar6 = 0;
      uVar4 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
      do {
        if (uVar4 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_03f13634();
        }
        if (unaff_x20 == 0) goto LAB_085cc938;
        lVar5 = *(long *)(unaff_x20 + 0x10);
        uVar3 = *(undefined8 *)(lVar2 + 0x20 + uVar6 * 8);
        *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_085cc938;
        uVar1 = *(uint *)(unaff_x20 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
          thunk_FUN_03f86000();
        }
        else {
          FUN_056b08d0();
        }
        uVar4 = (ulong)*(uint *)(lVar2 + 0x18);
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)*(uint *)(lVar2 + 0x18));
    }
    param_2 = (long *)(**(code **)(*unaff_x21 + 0x8f8))
                                (unaff_x21,*(undefined8 *)(*unaff_x21 + 0x900));
    if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8(*(long *)(unaff_x24 + 0xe0));
    }
    uVar6 = FUN_074cf3e8(param_2,0,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    if (param_2 == (long *)0x0) break;
    param_1 = *param_2;
    param_3 = unaff_x19 & 0xffffffff;
    unaff_x21 = param_2;
  }
LAB_085cc938:
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


