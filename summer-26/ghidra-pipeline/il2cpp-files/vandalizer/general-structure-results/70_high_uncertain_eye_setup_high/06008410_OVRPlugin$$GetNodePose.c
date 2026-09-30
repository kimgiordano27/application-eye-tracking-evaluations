/*
FUNCTION_NAME: OVRPlugin$$GetNodePose
ENTRY_POINT: 06008410
PROGRAM: vandalizer-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__GetNodePose(float param_1)

{
  int in_w8;
  long unaff_x22;
  float fVar1;
  float unaff_s8;
  float unaff_s10;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000058;
  float fStack000000000000005c;
  
  fStack0000000000000004 = param_1;
  if (in_w8 == 0) {
    FUN_031f20f4(PTR_DAT_0759b378);
    *(undefined1 *)(unaff_x22 + 0xaf2) = 1;
  }
  fVar1 = (float)FUN_06e464bc(0);
  return 1.0 - ((fStack0000000000000058 * unaff_s13 +
                unaff_s14 * fStack000000000000000c + fStack000000000000005c * fStack0000000000000008
                ) * 0.5 + 0.5) *
               ((unaff_s8 * unaff_s12 + fStack0000000000000004 * fVar1 + unaff_s15 * unaff_s10) *
                0.5 + 0.5);
}


