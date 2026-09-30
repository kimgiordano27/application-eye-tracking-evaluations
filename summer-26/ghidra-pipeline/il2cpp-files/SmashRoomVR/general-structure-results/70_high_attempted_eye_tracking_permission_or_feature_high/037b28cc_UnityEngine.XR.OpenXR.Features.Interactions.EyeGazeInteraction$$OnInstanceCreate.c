/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$OnInstanceCreate
ENTRY_POINT: 037b28cc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 83
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__OnInstanceCreate
               (long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long *unaff_x21;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0xb8) + 0x20);
  if (lVar2 != 0) {
    uVar1 = FUN_025bc7b8(lVar2,param_2,*(undefined8 *)StringLiteral_5372);
    if ((uVar1 & 1) != 0) {
      return;
    }
    lVar2 = *unaff_x21;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar2 = *unaff_x21;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x20);
    if (lVar2 != 0) {
      FUN_025bc5c4(lVar2,param_2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


