/*
FUNCTION_NAME: FUN_066a3f78
ENTRY_POINT: 066a3f78
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


void FUN_066a3f78(long param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long local_40;
  undefined8 uStack_38;
  
  if ((DAT_07557f9c & 1) == 0) {
    FUN_03188a78(PTR_DAT_070f2d18);
    FUN_03188a78(OVRPlugin_TrackingConfidence___TypeInfo);
    FUN_03188a78(Sentry_Protocol_Envelopes_ISerializable_TypeInfo);
    FUN_03188a78(Sentry_Unity_ISentrySystemInfo_TypeInfo);
    FUN_03188a78(System_Globalization_CalendarData_TypeInfo);
    FUN_03188a78(System_Runtime_Serialization_ISerializable_TypeInfo);
    FUN_03188a78(System_Runtime_Serialization_ISerializableDataMember_TypeInfo);
    DAT_07557f9c = 1;
  }
  puVar3 = System_Globalization_CalendarData_TypeInfo;
  iVar1 = *(int *)(param_1 + 0x38);
  iVar2 = *(int *)(param_1 + 0x18) * *(int *)(param_1 + 0x3c);
  if ((*(int *)(param_1 + 0x40) < iVar1) || (*(int *)(param_1 + 0x44) < iVar2)) {
    if (*(long *)(param_1 + 0x48) != 0) {
      FUN_0661e8dc(*(long *)(param_1 + 0x48),0);
    }
    lVar4 = *(long *)puVar3;
    *(ulong *)(param_1 + 0x40) = CONCAT44(iVar2,iVar1);
    puVar3 = System_Runtime_Serialization_ISerializableDataMember_TypeInfo;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar5 = FUN_0661f534(0,iVar1,iVar2,0x31,1,0,1,2,1,0,1,0,1,1,0,0,0,0,0,*(undefined8 *)puVar3,0);
    *(undefined8 *)(param_1 + 0x48) = uVar5;
  }
  puVar3 = OVRPlugin_TrackingConfidence___TypeInfo;
  iVar2 = iVar2 * iVar1;
  if ((param_2 & 1) == 0) {
    iVar2 = 0;
  }
  if (*(int *)(param_1 + 0x50) < iVar2) {
    if (*(long *)(param_1 + 0x58) != 0) {
      thunk_FUN_069a7610(*(long *)(param_1 + 0x58),0);
    }
    uVar5 = *(undefined8 *)puVar3;
    *(int *)(param_1 + 0x50) = iVar2;
    *(undefined1 *)(param_1 + 0x60) = 1;
    uVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar5);
    FUN_069a7ab0(uVar5,0x10,0,iVar2 + 4,4,0);
    *(undefined8 *)(param_1 + 0x58) = uVar5;
  }
  if (iVar2 == 0) {
    if (*(long *)(param_1 + 0x58) != 0) {
      thunk_FUN_069a7610(*(long *)(param_1 + 0x58),0);
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  if (*(long *)(param_1 + 0x68) == 0) {
    uVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_070f2d18);
    FUN_069df1cc(uVar5,1,0x2b0,8,0);
    *(undefined8 *)(param_1 + 0x68) = uVar5;
  }
  if (*(long *)(param_1 + 0x70) == 0) {
    local_40 = 0;
    uStack_38 = 0;
    FUN_045a3640(&local_40,1,4,1,*(undefined8 *)Sentry_Protocol_Envelopes_ISerializable_TypeInfo);
    *(undefined8 *)(param_1 + 0x78) = uStack_38;
    *(long *)(param_1 + 0x70) = local_40;
  }
  return;
}


