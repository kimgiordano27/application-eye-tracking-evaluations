/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingStandingZeroPoseToRawTrackingPose$$BeginInvoke
ENTRY_POINT: 05b71a70
PROGRAM: waitwhat-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose__BeginInvoke
               (long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 unaff_w19;
  long unaff_x20;
  undefined8 unaff_x21;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x23;
  
  iVar1 = *(int *)(param_1 + 0xe4);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x21;
  if (iVar1 == 0) {
    thunk_FUN_031e5338();
    param_1 = *unaff_x23;
  }
  puVar2 = *(undefined8 **)(param_1 + 0xb8);
  lVar3 = puVar2[2];
  if (lVar3 == 0) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar2 = *(undefined8 **)(*unaff_x23 + 0xb8);
    }
    uVar4 = *puVar2;
    lVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_070c2c58);
    FUN_058a163c(lVar3,uVar4,*(undefined8 *)PTR_DAT_07114e08,0);
    *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x10) = lVar3;
  }
  *(long *)(unaff_x20 + 0x28) = lVar3;
  FUN_05971910();
  *(undefined4 *)(unaff_x20 + 0x10) = unaff_w19;
  return;
}


