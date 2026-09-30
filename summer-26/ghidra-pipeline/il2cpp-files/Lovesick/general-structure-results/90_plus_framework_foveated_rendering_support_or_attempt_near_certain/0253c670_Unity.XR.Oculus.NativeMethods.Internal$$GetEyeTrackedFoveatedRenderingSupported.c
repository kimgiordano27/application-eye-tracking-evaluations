/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods.Internal$$GetEyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 0253c670
PROGRAM: Lovesick-libil2cpp.so
SCORE: 125
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_NativeMethods_Internal__GetEyeTrackedFoveatedRenderingSupported(void)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long unaff_x21;
  undefined8 uVar4;
  undefined8 *unaff_x24;
  
  do {
    lVar2 = FUN_017b78c8(unaff_x21);
    if (lVar2 != 0) {
      uVar4 = *unaff_x24;
      lVar3 = thunk_FUN_00d6225c(lVar2,uVar4);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(lVar2,uVar4);
      }
    }
    lVar2 = FUN_00d744e8();
    bVar1 = unaff_x21 != lVar2;
    unaff_x21 = lVar2;
  } while (bVar1);
  return;
}


