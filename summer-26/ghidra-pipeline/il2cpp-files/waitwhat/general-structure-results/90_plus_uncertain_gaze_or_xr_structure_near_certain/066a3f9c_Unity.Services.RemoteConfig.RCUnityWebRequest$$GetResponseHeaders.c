/*
FUNCTION_NAME: Unity.Services.RemoteConfig.RCUnityWebRequest$$GetResponseHeaders
ENTRY_POINT: 066a3f9c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 119
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


void Unity_Services_RemoteConfig_RCUnityWebRequest__GetResponseHeaders(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  
  FUN_03188a78(PTR_DAT_070f2d18);
  FUN_03188a78(OVRPlugin_TrackingConfidence___TypeInfo);
  FUN_03188a78(Sentry_Protocol_Envelopes_ISerializable_TypeInfo);
  FUN_03188a78(Sentry_Unity_ISentrySystemInfo_TypeInfo);
  FUN_03188a78(System_Globalization_CalendarData_TypeInfo);
  FUN_03188a78(System_Runtime_Serialization_ISerializable_TypeInfo);
  FUN_03188a78(System_Runtime_Serialization_ISerializableDataMember_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0xf9c) = 1;
  puVar3 = System_Globalization_CalendarData_TypeInfo;
  iVar1 = *(int *)(unaff_x19 + 0x38);
  iVar2 = *(int *)(unaff_x19 + 0x18) * *(int *)(unaff_x19 + 0x3c);
  if ((*(int *)(unaff_x19 + 0x40) < iVar1) || (*(int *)(unaff_x19 + 0x44) < iVar2)) {
    if (*(long *)(unaff_x19 + 0x48) != 0) {
      FUN_0661e8dc(*(long *)(unaff_x19 + 0x48),0);
    }
    lVar4 = *(long *)puVar3;
    *(ulong *)(unaff_x19 + 0x40) = CONCAT44(iVar2,iVar1);
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar5 = FUN_0661f534(0,iVar1,iVar2,0x31,1,0,1,2,1);
    *(undefined8 *)(unaff_x19 + 0x48) = uVar5;
  }
  puVar3 = OVRPlugin_TrackingConfidence___TypeInfo;
  iVar2 = iVar2 * iVar1;
  if ((unaff_x20 & 1) == 0) {
    iVar2 = 0;
  }
  if (*(int *)(unaff_x19 + 0x50) < iVar2) {
    if (*(long *)(unaff_x19 + 0x58) != 0) {
      thunk_FUN_069a7610(*(long *)(unaff_x19 + 0x58),0);
    }
    uVar5 = *(undefined8 *)puVar3;
    *(int *)(unaff_x19 + 0x50) = iVar2;
    *(undefined1 *)(unaff_x19 + 0x60) = 1;
    uVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar5);
    FUN_069a7ab0(uVar5,0x10,0,iVar2 + 4,4,0);
    *(undefined8 *)(unaff_x19 + 0x58) = uVar5;
  }
  if (iVar2 == 0) {
    if (*(long *)(unaff_x19 + 0x58) != 0) {
      thunk_FUN_069a7610(*(long *)(unaff_x19 + 0x58),0);
      *(undefined8 *)(unaff_x19 + 0x58) = 0;
    }
    *(undefined4 *)(unaff_x19 + 0x50) = 0;
  }
  if (*(long *)(unaff_x19 + 0x68) == 0) {
    uVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_070f2d18);
    FUN_069df1cc(uVar5,1,0x2b0,8,0);
    *(undefined8 *)(unaff_x19 + 0x68) = uVar5;
  }
  if (*(long *)(unaff_x19 + 0x70) == 0) {
    in_stack_00000060 = 0;
    in_stack_00000068 = 0;
    FUN_045a3640(&stack0x00000060,1,4,1,
                 *(undefined8 *)Sentry_Protocol_Envelopes_ISerializable_TypeInfo);
    *(undefined8 *)(unaff_x19 + 0x78) = in_stack_00000068;
    *(long *)(unaff_x19 + 0x70) = in_stack_00000060;
  }
  return;
}


