/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$GetDeviceLayoutName
ENTRY_POINT: 06a63594
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 86
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__GetDeviceLayoutName
               (long param_1,long param_2)

{
  long extraout_x1;
  long lVar1;
  int unaff_w20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  
  while( true ) {
    thunk_FUN_032cd7c0(param_1,param_2);
    lVar1 = **(long **)(*unaff_x21 + 0xb8);
    if (lVar1 == 0) break;
    do {
      param_2 = FUN_041e29a8(lVar1,unaff_w20,*unaff_x22);
      if (param_2 == 0) goto LAB_06a635e0;
      unaff_w20 = unaff_w20 + 1;
      if (*(char *)(param_2 + 0x10) != '\0') {
        FUN_06a635e4();
        return;
      }
      param_1 = *unaff_x21;
      if (*(int *)(param_1 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(param_1,param_2);
        param_1 = *unaff_x21;
        param_2 = extraout_x1;
      }
      lVar1 = **(long **)(param_1 + 0xb8);
      if (lVar1 == 0) goto LAB_06a635e0;
      if (*(int *)(lVar1 + 0x18) <= unaff_w20) {
        return;
      }
    } while (*(int *)(param_1 + 0xe0) != 0);
  }
LAB_06a635e0:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


