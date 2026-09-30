/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_GetTrackingTransformRawPose
ENTRY_POINT: 05bf00b8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_30_0__ovrp_GetTrackingTransformRawPose(void)

{
  long lVar1;
  long unaff_x19;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float fVar2;
  float fVar3;
  float unaff_s14;
  float unaff_s15;
  float fVar4;
  float fStack0000000000000004;
  undefined4 uStack000000000000000c;
  
  FUN_06a58cb4();
  fVar4 = unaff_s15 - unaff_s10;
  fVar2 = unaff_s13 - unaff_s8;
  fVar3 = fVar2;
  uStack000000000000000c = FUN_069c5558(fVar4,0);
  fStack0000000000000004 = fVar3;
  if (DAT_07546bbc == '\0') {
    FUN_03188a78(PTR_DAT_070c22f8);
    DAT_07546bbc = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_070c22f8 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  fVar3 = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + (unaff_s14 - unaff_s9) * (unaff_s14 - unaff_s9)) -
          ABS(unaff_s11);
  FUN_06a576ec(unaff_s12);
  FUN_06a57874(unaff_s12 + unaff_s12 + fVar3);
  FUN_06a579fc();
  if (DAT_07546bc0 == '\0') {
    FUN_03188a78(PTR_DAT_070c1a80);
    DAT_07546bc0 = '\x01';
  }
  fVar2 = 0.0;
  if (0.0 <= unaff_s11) {
    fVar2 = unaff_s11;
  }
  lVar1 = *(long *)(*(long *)PTR_DAT_070c1a80 + 0xb8);
  fVar2 = fVar2 + fVar3 * 0.5;
  FUN_06a57564(fVar2 * *(float *)(lVar1 + 0x48),fVar2 * *(float *)(lVar1 + 0x4c),
               fVar2 * *(float *)(lVar1 + 0x50));
  lVar1 = FUN_069d3a80();
  if (lVar1 != 0) {
    FUN_069e7a48();
    FUN_069e7c88(unaff_s10,lVar1,0);
    lVar1 = FUN_069d3b50();
    if (lVar1 != 0) {
      FUN_069d6f84(lVar1,*(undefined4 *)(unaff_x19 + 0x4c),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


