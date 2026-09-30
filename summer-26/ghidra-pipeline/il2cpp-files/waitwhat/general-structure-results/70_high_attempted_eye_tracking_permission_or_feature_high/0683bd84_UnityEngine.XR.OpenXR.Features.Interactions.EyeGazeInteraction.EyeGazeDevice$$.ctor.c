/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$.ctor
ENTRY_POINT: 0683bd84
PROGRAM: waitwhat-libil2cpp.so
SCORE: 79
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice___ctor
               (undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 unaff_w19;
  undefined4 unaff_w20;
  long unaff_x21;
  long *unaff_x23;
  
  uVar1 = FUN_06835548(param_1,1,unaff_w20,unaff_w19);
  if (DAT_07558d01 == '\0') {
    FUN_03188a78(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_EC_CustomNamedCurves_SecP384R1Holder_TypeInfo
                );
    DAT_07558d01 = '\x01';
  }
  lVar2 = *unaff_x23;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar2 = *unaff_x23;
  }
  **(undefined8 **)(lVar2 + 0xb8) = uVar1;
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  if (DAT_07558d02 == '\0') {
    FUN_03188a78(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_EC_CustomNamedCurves_SecP384R1Holder_TypeInfo
                );
    DAT_07558d02 = '\x01';
  }
  lVar2 = *unaff_x23;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar2 = *unaff_x23;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 8) == 0) {
    uVar1 = *(undefined8 *)(unaff_x21 + 0x10);
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar1 = FUN_06835548(uVar1,2,unaff_w20,unaff_w19);
    if (DAT_07558d03 == '\0') {
      FUN_03188a78(
                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_EC_CustomNamedCurves_SecP384R1Holder_TypeInfo
                  );
      DAT_07558d03 = '\x01';
    }
    lVar2 = *unaff_x23;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar2 = *unaff_x23;
    }
    *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8) = uVar1;
  }
  return;
}


