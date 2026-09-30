/*
FUNCTION_NAME: Unity.XR.Oculus.Utils$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 022dde68
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 125
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_Utils__set_eyeTrackedFoveatedRenderingEnabled(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long *plVar5;
  long unaff_x21;
  
  plVar5 = *(long **)(unaff_x20 + 0x288);
  if ((*(byte *)(unaff_x21 + 0xbe8) & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027d1288);
    *(undefined1 *)(unaff_x21 + 0xbe8) = 1;
  }
  if (*(int *)(*plVar5 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  lVar2 = FUN_0228c670(0);
  plVar4 = *(long **)(param_1 + 0x10);
  if (((plVar4 != (long *)0x0) &&
      (lVar3 = (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180)), lVar3 != 0))
     && (lVar2 != 0)) {
    iVar1 = FUN_02290ba4(lVar2,*(undefined8 *)(lVar3 + 0x18),0);
    if (iVar1 < 0) {
      return;
    }
    if (*(int *)(*plVar5 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    lVar2 = FUN_0228c670(0);
    if (lVar2 != 0) {
      FUN_02290c7c(lVar2,iVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


