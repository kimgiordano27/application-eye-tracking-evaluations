/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.XRFace$$get_rightEyePose
ENTRY_POINT: 06b26774
PROGRAM: vandalizer-libil2cpp.so
SCORE: 140
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void UnityEngine_XR_ARSubsystems_XRFace__get_rightEyePose(long param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x19;
  long lVar4;
  long *unaff_x21;
  long *unaff_x22;
  
  uVar2 = FUN_06e0cc10(param_2,*(undefined4 *)(*(long *)(param_1 + 0xb8) + 0xa4));
  if ((uVar2 & 1) == 0) {
    bVar1 = 0;
  }
  else {
    lVar4 = *(long *)(unaff_x19 + 0x110);
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    uVar3 = thunk_FUN_06e114a8(lVar4,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0xa4),0);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*unaff_x21);
    }
    bVar1 = FUN_06e587d8(uVar3,0,0);
  }
  *(byte *)(unaff_x19 + 0x208) = bVar1 & 1;
  return;
}


