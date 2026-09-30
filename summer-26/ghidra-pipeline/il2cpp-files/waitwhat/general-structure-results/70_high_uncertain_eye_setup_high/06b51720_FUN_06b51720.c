/*
FUNCTION_NAME: FUN_06b51720
ENTRY_POINT: 06b51720
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06b51720(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = System_Xml_Schema_XmlSchemaNotation_TypeInfo;
  if ((DAT_0755fee0 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c2c58);
    FUN_03188a78(System_Xml_Schema_XmlSchemaNotation_TypeInfo);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary_Enumerator<byte,_LocalVoice>_Dispose__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary_Enumerator<byte,_LocalVoice>_MoveNext__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary_Enumerator<byte,_LocalVoice>_get_Current__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_set_Item__
                );
    DAT_0755fee0 = 1;
  }
  uVar3 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_1 + 0x38) = 0;
  uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar3);
  FUN_06a274c4(uVar3,0);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  FUN_05971910(param_1,0);
  *(long *)(param_1 + 0x20) = param_2;
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x4b8);
    lVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_set_Item__
                      );
    FUN_06a44984(lVar4,uVar3,0);
    *(long *)(param_1 + 0x10) = lVar4;
    puVar2 = Method_System_Collections_Generic_Dictionary_Enumerator<byte,_LocalVoice>_Dispose__;
    puVar1 = PTR_DAT_070c2c58;
    if (lVar4 == 0) goto LAB_06b51948;
    uVar7 = *(undefined8 *)(lVar4 + 0x40);
    uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_070c2c58);
    FUN_058a163c(uVar3,param_1,*(undefined8 *)puVar2,0);
    plVar5 = (long *)FUN_05974b90(uVar7,uVar3,0);
    lVar6 = *(long *)puVar1;
    if (plVar5 == (long *)0x0) {
      *(undefined8 *)(lVar4 + 0x40) = 0;
    }
    else if ((*plVar5 != lVar6) || (*(long **)(lVar4 + 0x40) = plVar5, *plVar5 != lVar6))
    goto LAB_06b51930;
    puVar2 = Method_System_Collections_Generic_Dictionary_Enumerator<byte,_LocalVoice>_get_Current__
    ;
    lVar4 = *(long *)(param_1 + 0x10);
    if (lVar4 == 0) goto LAB_06b51948;
    uVar7 = *(undefined8 *)(lVar4 + 0x48);
    uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(lVar6);
    FUN_058a163c(uVar3,param_1,*(undefined8 *)puVar2,0);
    plVar5 = (long *)FUN_05974b90(uVar7,uVar3,0);
    lVar6 = *(long *)puVar1;
    if (plVar5 == (long *)0x0) {
      *(undefined8 *)(lVar4 + 0x48) = 0;
    }
    else if ((*plVar5 != lVar6) || (*(long **)(lVar4 + 0x48) = plVar5, *plVar5 != lVar6))
    goto LAB_06b51930;
    puVar2 = Method_System_Collections_Generic_Dictionary_Enumerator<byte,_LocalVoice>_MoveNext__;
    lVar4 = *(long *)(param_1 + 0x10);
    if (lVar4 != 0) {
      uVar7 = *(undefined8 *)(lVar4 + 0x50);
      uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(lVar6);
      FUN_058a163c(uVar3,param_1,*(undefined8 *)puVar2,0);
      plVar5 = (long *)FUN_05974b90(uVar7,uVar3,0);
      if (plVar5 == (long *)0x0) {
        *(undefined8 *)(lVar4 + 0x50) = 0;
      }
      else {
        lVar6 = *(long *)puVar1;
        if ((*plVar5 != lVar6) || (*(long **)(lVar4 + 0x50) = plVar5, *plVar5 != lVar6)) {
LAB_06b51930:
                    /* WARNING: Subroutine does not return */
          FUN_03189058();
        }
      }
      return;
    }
  }
LAB_06b51948:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


