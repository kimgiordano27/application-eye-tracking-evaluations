/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetEyeGazesState
ENTRY_POINT: 05bf5830
PROGRAM: waitwhat-libil2cpp.so
SCORE: 94
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin_OVRP_1_78_0__ovrp_GetEyeGazesState(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *unaff_x22;
  
  uVar6 = *param_1;
  uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)PTR_DAT_07116e38);
  FUN_03dff730(uVar3,uVar6,*(undefined8 *)PTR_DAT_07116e58,0);
  lVar4 = *unaff_x22;
  *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 8) = uVar3;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar4 = *unaff_x22;
  }
  puVar2 = PTR_DAT_07116e50;
  puVar1 = PTR_DAT_07116e48;
  puVar5 = *(undefined8 **)(lVar4 + 0xb8);
  lVar7 = puVar5[2];
  if (lVar7 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar5 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_07116e40);
    FUN_03e08ea4(lVar7,uVar6,*(undefined8 *)PTR_DAT_07116e60,0);
    *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10) = lVar7;
  }
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_04786e28(uVar6,2,uVar3,lVar7,*(undefined8 *)puVar1);
  return uVar6;
}


