/*
FUNCTION_NAME: FUN_06b51458
ENTRY_POINT: 06b51458
PROGRAM: waitwhat-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_06b51458(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar6 = 
  Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<byte,_HashSet<Player>>_Dispose__
  ;
  puVar5 = 
  Method_System_Collections_Generic_Dictionary_Enumerator<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_get_Current__
  ;
  puVar4 = 
  Method_System_Collections_Generic_Dictionary_Enumerator<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_MoveNext__
  ;
  puVar3 = 
  Method_System_Collections_Generic_Dictionary_Enumerator<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_Dispose__
  ;
  puVar2 = 
  Method_System_Collections_Generic_Dictionary_Enumerator<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Current__
  ;
  puVar1 = 
  Method_System_Collections_Generic_List_Enumerator<StandardVelocityCalculator_SamplePoseData>_MoveNext__
  ;
  if ((DAT_0755fef1 & 1) == 0) {
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary_Enumerator<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_Dispose__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary_Enumerator<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Current__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_List_Enumerator<StandardVelocityCalculator_SamplePoseData>_MoveNext__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<byte,_HashSet<Player>>_Dispose__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary_Enumerator<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_get_Current__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary_Enumerator<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_MoveNext__
                );
    DAT_0755fef1 = 1;
  }
  uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_042e4268(uVar7,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x18) = uVar7;
  FUN_05971910(param_1,0);
  uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar1);
  FUN_06b88208(uVar7,param_1,*(undefined8 *)puVar4,0);
  uVar8 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_1 + 0x28) = uVar7;
  uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar8);
  FUN_06b88208(uVar7,param_1,*(undefined8 *)puVar5,0);
  uVar8 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_1 + 0x30) = uVar7;
  uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar8);
  FUN_06b88208(uVar7,param_1,*(undefined8 *)puVar6,0);
  *(undefined8 *)(param_1 + 0x38) = uVar7;
  return;
}


