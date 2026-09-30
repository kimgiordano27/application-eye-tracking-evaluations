/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingStandingZeroPoseToRawTrackingPose$$Invoke
ENTRY_POINT: 05b71a5c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose__Invoke(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined4 unaff_w19;
  long unaff_x20;
  undefined8 unaff_x21;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x23;
  
  FUN_05110878();
  lVar2 = *unaff_x23;
  *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8) = unaff_x21;
  if (unaff_x20 != 0) {
    iVar1 = *(int *)(lVar2 + 0xe4);
    *(undefined8 *)(unaff_x20 + 0x20) = unaff_x21;
    if (iVar1 == 0) {
      thunk_FUN_031e5338();
      lVar2 = *unaff_x23;
    }
    puVar3 = *(undefined8 **)(lVar2 + 0xb8);
    lVar4 = puVar3[2];
    if (lVar4 == 0) {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        puVar3 = *(undefined8 **)(*unaff_x23 + 0xb8);
      }
      uVar5 = *puVar3;
      lVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)PTR_DAT_070c2c58);
      FUN_058a163c(lVar4,uVar5,*(undefined8 *)PTR_DAT_07114e08,0);
      *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x10) = lVar4;
    }
    *(long *)(unaff_x20 + 0x28) = lVar4;
    FUN_05971910();
    *(undefined4 *)(unaff_x20 + 0x10) = unaff_w19;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


