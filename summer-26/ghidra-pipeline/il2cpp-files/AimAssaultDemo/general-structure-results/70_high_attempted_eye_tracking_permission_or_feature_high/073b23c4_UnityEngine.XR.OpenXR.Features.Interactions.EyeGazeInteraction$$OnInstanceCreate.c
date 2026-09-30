/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$OnInstanceCreate
ENTRY_POINT: 073b23c4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x073b2440) */

void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__OnInstanceCreate
               (undefined8 param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  
  if (param_2 != 1) {
    FUN_05d64e94(&stack0x00000040,*(undefined8 *)PTR_DAT_07d8c128);
                    /* WARNING: Subroutine does not return */
    FUN_0381d6e4(param_1);
  }
  plVar1 = (long *)__cxa_begin_catch();
  lVar2 = *plVar1;
  __cxa_end_catch();
  FUN_05d64e94(&stack0x00000040,*(undefined8 *)PTR_DAT_07d8c128);
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7ac(lVar2);
}


