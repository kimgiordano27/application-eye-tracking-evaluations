/*
FUNCTION_NAME: Mono.Unity.UnityTlsContext$$CertificateCallback
ENTRY_POINT: 035565d0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Mono_Unity_UnityTlsContext__CertificateCallback(void)

{
  long lVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  long lVar2;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  FUN_01c5d288();
  FUN_01c5d288(Method_OVRPlugin_PinnedArray<Guid>_op_Implicit__);
  *(undefined1 *)(unaff_x22 + 0x835) = 1;
  lVar2 = *(long *)(unaff_x20 + 0x170);
  lVar1 = thunk_FUN_01c496e0(*unaff_x21);
  FUN_03313b6c(lVar1,0);
  *(undefined8 *)(lVar1 + 0x10) = unaff_x19;
  *(undefined1 *)(lVar1 + 0x18) = 0;
  if (lVar2 != 0) {
    FUN_02fca078(lVar2,lVar1,*(undefined8 *)Method_OVRPlugin_PinnedArray<Guid>_op_Implicit__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


