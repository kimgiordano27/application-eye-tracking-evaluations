/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$set_pose
ENTRY_POINT: 0683bd04
PROGRAM: waitwhat-libil2cpp.so
SCORE: 99
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice__set_pose
               (ulong param_1,long param_2)

{
  long lVar1;
  undefined4 unaff_w19;
  undefined4 unaff_w20;
  long unaff_x22;
  undefined8 uVar2;
  long *unaff_x23;
  
  if ((param_1 & 1) == 0) {
    FUN_03188a78(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_EC_CustomNamedCurves_SecP384R1Holder_TypeInfo
                );
    *(undefined1 *)(unaff_x22 + 0xc2d) = 1;
  }
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  if (DAT_07558d00 == '\0') {
    FUN_03188a78(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_EC_CustomNamedCurves_SecP384R1Holder_TypeInfo
                );
    DAT_07558d00 = '\x01';
  }
  lVar1 = *unaff_x23;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar1 = *unaff_x23;
  }
  if (**(long **)(lVar1 + 0xb8) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar2 = FUN_06835548(uVar2,1,unaff_w20,unaff_w19);
    if (DAT_07558d01 == '\0') {
      FUN_03188a78(
                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_EC_CustomNamedCurves_SecP384R1Holder_TypeInfo
                  );
      DAT_07558d01 = '\x01';
    }
    lVar1 = *unaff_x23;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar1 = *unaff_x23;
    }
    **(undefined8 **)(lVar1 + 0xb8) = uVar2;
    lVar1 = *unaff_x23;
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  if (DAT_07558d02 == '\0') {
    FUN_03188a78(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_EC_CustomNamedCurves_SecP384R1Holder_TypeInfo
                );
    DAT_07558d02 = '\x01';
  }
  lVar1 = *unaff_x23;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar1 = *unaff_x23;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 8) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar2 = FUN_06835548(uVar2,2,unaff_w20,unaff_w19);
    if (DAT_07558d03 == '\0') {
      FUN_03188a78(
                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_EC_CustomNamedCurves_SecP384R1Holder_TypeInfo
                  );
      DAT_07558d03 = '\x01';
    }
    lVar1 = *unaff_x23;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar1 = *unaff_x23;
    }
    *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 8) = uVar2;
  }
  return;
}


