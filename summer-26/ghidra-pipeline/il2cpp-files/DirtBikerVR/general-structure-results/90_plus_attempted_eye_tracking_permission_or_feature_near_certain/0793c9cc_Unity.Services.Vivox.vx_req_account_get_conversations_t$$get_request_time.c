/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_account_get_conversations_t$$get_request_time
ENTRY_POINT: 0793c9cc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 113
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;telemetry;attempted_use
EVIDENCE: strong_eye_source_hits_14;weak_xr_or_state_hits_12;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Unity_Services_Vivox_vx_req_account_get_conversations_t__get_request_time(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_08486bc0;
  if ((DAT_08987db7 & 1) == 0) {
    FUN_03a8a718(OVRPlugin_AppPerfFrameStats___TypeInfo);
                    /* try { // try from 0793c9f0 to 07a3ca43 has its CatchHandler @ 0793cbe8 */
    FUN_03a8a718(OVRPlugin_BodyJointLocation___TypeInfo);
    FUN_03a8a718(OVRPlugin_Bone___TypeInfo);
    FUN_03a8a718(PTR_DAT_084902d8);
    FUN_03a8a718(PTR_DAT_08486bc0);
    FUN_03a8a718(System_Collections_Generic_Stack<Entry>_TypeInfo);
    FUN_03a8a718(OVRPlugin_BoneCapsule___TypeInfo);
    FUN_03a8a718(OVRPlugin_EyeGazeState___TypeInfo);
    FUN_03a8a718(OVRPlugin_FaceTrackingDataSource___TypeInfo);
    DAT_08987db7 = 1;
  }
  puVar3 = OVRPlugin_EyeGazeState___TypeInfo;
  puVar2 = PTR_DAT_084902d8;
  plVar4 = *(long **)(param_1 + 0x10);
  uVar6 = *(undefined8 *)puVar1;
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    uVar6 = FUN_065ce354(uVar6,*(undefined8 *)puVar3,uVar5,*(undefined8 *)puVar2,0);
  }
  puVar1 = System_Collections_Generic_Stack<Entry>_TypeInfo;
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    uVar6 = FUN_065ce354(uVar6,*(undefined8 *)puVar1,uVar5,*(undefined8 *)puVar2,0);
  }
  puVar1 = OVRPlugin_FaceTrackingDataSource___TypeInfo;
  plVar4 = *(long **)(param_1 + 0x20);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    uVar6 = FUN_065ce354(uVar6,*(undefined8 *)puVar1,uVar5,*(undefined8 *)puVar2,0);
  }
  puVar1 = OVRPlugin_AppPerfFrameStats___TypeInfo;
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    uVar6 = FUN_065ce354(uVar6,*(undefined8 *)puVar1,uVar5,*(undefined8 *)puVar2,0);
  }
  puVar1 = OVRPlugin_BodyJointLocation___TypeInfo;
  plVar4 = *(long **)(param_1 + 0x30);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    uVar6 = FUN_065ce354(uVar6,*(undefined8 *)puVar1,uVar5,*(undefined8 *)puVar2,0);
  }
  puVar1 = OVRPlugin_BoneCapsule___TypeInfo;
  plVar4 = *(long **)(param_1 + 0x38);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    uVar6 = FUN_065ce354(uVar6,*(undefined8 *)puVar1,uVar5,*(undefined8 *)puVar2,0);
  }
  puVar1 = OVRPlugin_Bone___TypeInfo;
  plVar4 = *(long **)(param_1 + 0x40);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    uVar6 = FUN_065cddf0(uVar6,*(undefined8 *)puVar1,uVar5,0);
    return uVar6;
  }
  return uVar6;
}


