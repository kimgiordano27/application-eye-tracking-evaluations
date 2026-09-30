/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods.Internal$$SetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 0788d488
PROGRAM: Waifu-libil2cpp.so
SCORE: 128
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_NativeMethods_Internal__SetEyeTrackedFoveatedRenderingEnabled(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  ulong in_x9;
  long unaff_x19;
  long *unaff_x20;
  
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = *param_1 | in_x9;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  lVar3 = *unaff_x20;
  lVar4 = *(long *)(unaff_x19 + 0x38);
  if (lVar4 == 0) {
    if (lVar3 == 0) goto LAB_0788d4e8;
    *(undefined1 *)(lVar3 + 0x14) = 0;
  }
  else {
    if (lVar3 == 0) {
LAB_0788d4e8:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    cVar1 = *(char *)(lVar3 + 0x14);
    *(undefined1 *)(lVar3 + 0x14) = 0;
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0788d4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),lVar3,*(undefined8 *)(lVar4 + 0x28))
      ;
      return;
    }
  }
  return;
}


