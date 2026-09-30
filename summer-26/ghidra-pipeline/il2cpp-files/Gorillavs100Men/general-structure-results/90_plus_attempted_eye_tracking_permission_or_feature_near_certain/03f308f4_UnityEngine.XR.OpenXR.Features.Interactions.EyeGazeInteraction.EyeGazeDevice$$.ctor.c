/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$.ctor
ENTRY_POINT: 03f308f4
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 92
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8
UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice___ctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if ((DAT_04922bb0 & 1) == 0) {
    FUN_020612a4(PTR_DAT_046bf908);
    FUN_020612a4(StringLiteral_8731);
    DAT_04922bb0 = 1;
  }
  puVar2 = PTR_DAT_046bf908;
  puVar1 = StringLiteral_8731;
  if (param_1 != 0) {
    uVar3 = thunk_FUN_0409bb9c(param_1,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_020b5864(*(long *)puVar1);
    }
    uVar3 = FUN_024f7414(uVar3,*(undefined8 *)puVar2);
    thunk_FUN_0409bc6c(param_1,uVar3,0);
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0206154c();
}


