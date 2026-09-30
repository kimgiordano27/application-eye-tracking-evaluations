/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$UnregisterDeviceLayout
ENTRY_POINT: 05ec6180
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


ulong UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__UnregisterDeviceLayout(void)

{
  ulong uVar1;
  float *unaff_x19;
  float *unaff_x20;
  float unaff_s8;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)0x0;
  FUN_05ec8f70(&stack0x00000008);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    if ((unaff_s8 <= ABS(*unaff_x20 - *unaff_x19)) || (unaff_s8 <= ABS(unaff_x20[1] - unaff_x19[1]))
       ) {
      uVar1 = 0;
    }
    else {
      uVar1 = (ulong)(ABS(unaff_x20[2] - unaff_x19[2]) < unaff_s8);
    }
    return uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x05ec61b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}


