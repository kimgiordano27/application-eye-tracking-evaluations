/*
FUNCTION_NAME: FUN_08734be4
ENTRY_POINT: 08734be4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void FUN_08734be4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  puVar2 = System_Comparison<Cookie>_TypeInfo;
  puVar1 = PTR_DAT_08e69e98;
  if ((DAT_0943c968 & 1) == 0) {
    FUN_03c8f898(System_Comparison<NPCData>_TypeInfo);
    FUN_03c8f898(System_Comparison<NetworkObject>_TypeInfo);
    FUN_03c8f898(System_Comparison<OVRSpaceUser>_TypeInfo);
    FUN_03c8f898(System_Comparison<Panel>_TypeInfo);
    FUN_03c8f898(PTR_DAT_08e69e98);
    FUN_03c8f898(System_Collections_Concurrent_ConcurrentQueue<StringBuilder>_TypeInfo);
    FUN_03c8f898(System_Collections_Concurrent_ConcurrentQueue<ThreadUtility_EarlyTask>_TypeInfo);
    FUN_03c8f898(
                System_Runtime_CompilerServices_ConditionalWeakTable<HttpWebRequest,_NtlmSession>_TypeInfo
                );
    FUN_03c8f898(
                System_Runtime_CompilerServices_ConditionalWeakTable<object,_OSSpecificSynchronizationContext>_TypeInfo
                );
    FUN_03c8f898(
                System_Runtime_CompilerServices_ConditionalWeakTable<object,_SerializationInfo>_TypeInfo
                );
    FUN_03c8f898(System_Comparison<SelectorMatchRecord>_TypeInfo);
    FUN_03c8f898(System_Comparison<string>_TypeInfo);
    FUN_03c8f898(System_Comparison<StyleSelectorPart>_TypeInfo);
    FUN_03c8f898(System_Comparison<TimelineClip>_TypeInfo);
    FUN_03c8f898(System_Comparison<Timer>_TypeInfo);
    FUN_03c8f898(System_Comparison<VisualElementAsset>_TypeInfo);
    FUN_03c8f898(System_Comparison<Cookie>_TypeInfo);
    FUN_03c8f898(Unity_Properties_ContainerPropertyBag<Bounds>_TypeInfo);
    DAT_0943c968 = 1;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  lVar6 = *(long *)(param_1 + 0x3d8);
  uVar4 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
  FUN_07064478(uVar4,param_1,*(undefined8 *)puVar2,0);
  puVar2 = System_Comparison<VisualElementAsset>_TypeInfo;
  if (lVar6 != 0) {
    FUN_0874c608(lVar6,uVar4,0);
    lVar6 = *(long *)(param_1 + 0x408);
    uVar4 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
    FUN_07064478(uVar4,param_1,*(undefined8 *)puVar2,0);
    puVar2 = System_Comparison<SelectorMatchRecord>_TypeInfo;
    puVar1 = System_Comparison<OVRSpaceUser>_TypeInfo;
    if (lVar6 != 0) {
      FUN_08742718(lVar6,uVar4,0);
      lVar6 = *(long *)(param_1 + 0x420);
      uVar4 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
      FUN_04f10dac(uVar4,param_1,*(undefined8 *)puVar2,0);
      puVar2 = System_Comparison<StyleSelectorPart>_TypeInfo;
      puVar1 = System_Comparison<NPCData>_TypeInfo;
      if (lVar6 != 0) {
        FUN_08746d70(lVar6,uVar4,0);
        lVar6 = *(long *)(param_1 + 0x420);
        uVar4 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
        System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
                  (uVar4,param_1,*(undefined8 *)puVar2,0);
        puVar3 = System_Comparison<string>_TypeInfo;
        puVar2 = System_Comparison<NetworkObject>_TypeInfo;
        if (lVar6 != 0) {
          FUN_08746e20(lVar6,uVar4,0);
          lVar6 = *(long *)(param_1 + 0x420);
          uVar4 = thunk_FUN_03cf5234(*(undefined8 *)puVar2);
          FUN_04f10ecc(uVar4,param_1,*(undefined8 *)puVar3,0);
          puVar3 = System_Comparison<TimelineClip>_TypeInfo;
          puVar2 = System_Comparison<Panel>_TypeInfo;
          if (lVar6 != 0) {
            FUN_08746f80(lVar6,uVar4,0);
            lVar6 = *(long *)(param_1 + 0x420);
            uVar4 = thunk_FUN_03cf5234(*(undefined8 *)puVar2);
            FUN_04f12e94(uVar4,param_1,*(undefined8 *)puVar3,0);
            puVar2 = System_Comparison<Timer>_TypeInfo;
            if (lVar6 != 0) {
              FUN_08747190(lVar6,uVar4,0);
              lVar6 = *(long *)(param_1 + 0x420);
              uVar4 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
              System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
                        (uVar4,param_1,*(undefined8 *)puVar2,0);
              if (lVar6 != 0) {
                FUN_087470e0(lVar6,uVar4,0);
                if ((*(long *)(param_1 + 0x400) != 0) &&
                   (lVar6 = FUN_06a4e1b0(*(long *)(param_1 + 0x400),
                                         *(undefined8 *)
                                          System_Collections_Concurrent_ConcurrentQueue<ThreadUtility_EarlyTask>_TypeInfo
                                        ),
                   puVar3 = 
                   System_Runtime_CompilerServices_ConditionalWeakTable<object,_OSSpecificSynchronizationContext>_TypeInfo
                   , puVar2 = 
                     System_Runtime_CompilerServices_ConditionalWeakTable<HttpWebRequest,_NtlmSession>_TypeInfo
                   , puVar1 = System_Collections_Concurrent_ConcurrentQueue<StringBuilder>_TypeInfo,
                   lVar6 != 0)) {
                  FUN_05e10320(&local_58,lVar6,
                               *(undefined8 *)Unity_Properties_ContainerPropertyBag<Bounds>_TypeInfo
                              );
                  while (uVar5 = FUN_04aa69ec(&local_58,*(undefined8 *)puVar3), (uVar5 & 1) != 0) {
                    FUN_08731e8c(param_1,local_48);
                  }
                  FUN_04aa69e8(&local_58,*(undefined8 *)puVar2);
                  if (*(long *)(param_1 + 0x400) != 0) {
                    FUN_06a4e508(*(long *)(param_1 + 0x400),*(undefined8 *)puVar1);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


