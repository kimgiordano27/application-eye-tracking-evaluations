/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetEyeTrackingEnabled
ENTRY_POINT: 05bf57b4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin_OVRP_1_78_0__ovrp_GetEyeTrackingEnabled(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x19;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *unaff_x22;
  
  FUN_03188a78();
  FUN_03188a78(PTR_DAT_07116e48);
  FUN_03188a78(PTR_DAT_07116e50);
  FUN_03188a78(PTR_DAT_07116e58);
  FUN_03188a78(PTR_DAT_07116e60);
  FUN_03188a78(PTR_DAT_07116e30);
  *(undefined1 *)(unaff_x19 + 0xdf1) = 1;
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar3 = *unaff_x22;
  }
  puVar4 = *(undefined8 **)(lVar3 + 0xb8);
  lVar5 = puVar4[1];
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar4 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar6 = *puVar4;
    lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_07116e38);
    FUN_03dff730(lVar5,uVar6,*(undefined8 *)PTR_DAT_07116e58,0);
    lVar3 = *unaff_x22;
    *(long *)(*(long *)(lVar3 + 0xb8) + 8) = lVar5;
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar3 = *unaff_x22;
  }
  puVar2 = PTR_DAT_07116e50;
  puVar1 = PTR_DAT_07116e48;
  puVar4 = *(undefined8 **)(lVar3 + 0xb8);
  lVar7 = puVar4[2];
  if (lVar7 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar4 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar6 = *puVar4;
    lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_07116e40);
    FUN_03e08ea4(lVar7,uVar6,*(undefined8 *)PTR_DAT_07116e60,0);
    *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10) = lVar7;
  }
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_04786e28(uVar6,2,lVar5,lVar7,*(undefined8 *)puVar1);
  return uVar6;
}


