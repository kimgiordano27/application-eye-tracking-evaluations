/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingSeatedZeroPoseToRawTrackingPose$$EndInvoke
ENTRY_POINT: 05b71998
PROGRAM: waitwhat-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose__EndInvoke
               (long param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_07114df0;
  if ((DAT_0754e7b1 & 1) == 0) {
    FUN_03188a78(PTR_DAT_07114df8);
    FUN_03188a78(PTR_DAT_070c2c58);
    FUN_03188a78(PTR_DAT_07114e00);
    FUN_03188a78(PTR_DAT_07114e08);
    FUN_03188a78(PTR_DAT_07114df0);
    DAT_0754e7b1 = 1;
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar3 = *(long *)puVar2;
  }
  puVar4 = *(undefined8 **)(lVar3 + 0xb8);
  lVar5 = puVar4[1];
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar4 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar4;
    lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_07114df8);
    FUN_05110878(lVar5,uVar6,*(undefined8 *)PTR_DAT_07114e00,0);
    lVar3 = *(long *)puVar2;
    *(long *)(*(long *)(lVar3 + 0xb8) + 8) = lVar5;
  }
  if (param_1 != 0) {
    iVar1 = *(int *)(lVar3 + 0xe4);
    *(long *)(param_1 + 0x20) = lVar5;
    if (iVar1 == 0) {
      thunk_FUN_031e5338();
      lVar3 = *(long *)puVar2;
    }
    puVar4 = *(undefined8 **)(lVar3 + 0xb8);
    lVar5 = puVar4[2];
    if (lVar5 == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        puVar4 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar6 = *puVar4;
      lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)PTR_DAT_070c2c58);
      FUN_058a163c(lVar5,uVar6,*(undefined8 *)PTR_DAT_07114e08,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = lVar5;
    }
    *(long *)(param_1 + 0x28) = lVar5;
    FUN_05971910(param_1,0);
    *(undefined4 *)(param_1 + 0x10) = param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


