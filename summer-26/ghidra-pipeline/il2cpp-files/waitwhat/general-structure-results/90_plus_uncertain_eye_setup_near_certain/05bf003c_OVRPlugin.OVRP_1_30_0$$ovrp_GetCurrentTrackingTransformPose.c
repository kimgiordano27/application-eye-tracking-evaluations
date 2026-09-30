/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_GetCurrentTrackingTransformPose
ENTRY_POINT: 05bf003c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_30_0__ovrp_GetCurrentTrackingTransformPose
               (ulong param_1,float param_2,float param_3,long param_4,undefined8 param_5,
               undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long unaff_x22;
  long unaff_x23;
  undefined8 *puVar3;
  float fVar4;
  float unaff_s8;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fVar5;
  
  puVar3 = *(undefined8 **)(unaff_x23 + 0x2b0);
  if ((param_1 & 1) == 0) {
    FUN_03188a78(PTR_DAT_07116cf8);
    FUN_03188a78(PTR_DAT_070c22b0);
    *(undefined1 *)(unaff_x22 + 0xdaf) = 1;
  }
  lVar1 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*puVar3);
  FUN_069d76f4(lVar1,param_5,0);
  if ((lVar1 != 0) && (lVar1 = FUN_03ac2e98(lVar1,*(undefined8 *)PTR_DAT_07116cf8), lVar1 != 0)) {
    FUN_06a58cb4(lVar1,*(undefined1 *)(param_4 + 0x48),0);
    fVar5 = unaff_s15 - param_2;
    FUN_069c5558(fVar5,0);
    if (DAT_07546bbc == '\0') {
      FUN_03188a78(PTR_DAT_070c22f8);
      DAT_07546bbc = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_070c22f8 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    fVar5 = SQRT((unaff_s13 - unaff_s8) * (unaff_s13 - unaff_s8) +
                 fVar5 * fVar5 + (unaff_s14 - param_3) * (unaff_s14 - param_3)) - ABS(unaff_s11);
    FUN_06a576ec(unaff_s12,lVar1,0);
    FUN_06a57874(unaff_s12 + unaff_s12 + fVar5,lVar1,0);
    FUN_06a579fc(lVar1,2,0);
    if (DAT_07546bc0 == '\0') {
      FUN_03188a78(PTR_DAT_070c1a80);
      DAT_07546bc0 = '\x01';
    }
    fVar4 = 0.0;
    if (0.0 <= unaff_s11) {
      fVar4 = unaff_s11;
    }
    lVar2 = *(long *)(*(long *)PTR_DAT_070c1a80 + 0xb8);
    fVar4 = fVar4 + fVar5 * 0.5;
    FUN_06a57564(fVar4 * *(float *)(lVar2 + 0x48),fVar4 * *(float *)(lVar2 + 0x4c),
                 fVar4 * *(float *)(lVar2 + 0x50),lVar1,0);
    lVar2 = FUN_069d3a80(lVar1,0);
    if (lVar2 != 0) {
      FUN_069e7a48(lVar2,param_6,0,0);
      FUN_069e7c88(param_2,param_3,lVar2,0);
      lVar2 = FUN_069d3b50(lVar1,0);
      if (lVar2 != 0) {
        FUN_069d6f84(lVar2,*(undefined4 *)(param_4 + 0x4c),0);
        return lVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


