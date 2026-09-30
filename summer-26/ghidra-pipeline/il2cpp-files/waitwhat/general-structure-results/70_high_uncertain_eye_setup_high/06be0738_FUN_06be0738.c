/*
FUNCTION_NAME: FUN_06be0738
ENTRY_POINT: 06be0738
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


long FUN_06be0738(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar4 = Method_OVRObjectPool_ListScope<OVRSpatialAnchor>__ctor__;
  puVar3 = Method_OVRObjectPool_ListScope<OVRScenePlane>_Dispose__;
  if ((DAT_0756055e & 1) == 0) {
    FUN_03188a78(Method_OVRObjectPool_ListScope<OVRScenePlane>_Dispose__);
    FUN_03188a78(Method_OVRObjectPool_ListScope<OVRSpatialAnchor>_Dispose__);
    FUN_03188a78(Method_OVRObjectPool_ListScope<string>__ctor__);
    FUN_03188a78(Method_OVRObjectPool_ListScope<string>_Dispose__);
    FUN_03188a78(Method_OVRObjectPool_ListScope<OVRAnchor_TrackableType>__ctor__);
    FUN_03188a78(Method_OVRObjectPool_ListScope<OVRAnchor_TrackableType>_Dispose__);
    FUN_03188a78(Method_OVRObjectPool_ListScope<OVRPlugin_SpaceComponentType>__ctor__);
    FUN_03188a78(Method_OVRObjectPool_ListScope<OVRPlugin_SpaceComponentType>_Dispose__);
    FUN_03188a78(Method_OVRObjectPool_ListScope<OVRSceneManager_Metrics>__ctor__);
    FUN_03188a78(Method_OVRObjectPool_ListScope<OVRSpatialAnchor>__ctor__);
    FUN_03188a78(Method_OVRObjectPool_ListScope<OVRSceneManager_Metrics>_Dispose__);
    FUN_03188a78(PTR_DAT_070c7188);
    FUN_03188a78(Method_System_RuntimeType_ListBuilder<ConstructorInfo>_get_Count__);
    FUN_03188a78(Method_OVRObjectPool_ListScope<OVRSpatialAnchor_UnboundAnchor>__ctor__);
    FUN_03188a78(PTR_DAT_070fcc40);
    FUN_03188a78(PTR_DAT_070c6cb0);
    FUN_03188a78(Method_System_RuntimeType_ListBuilder<ConstructorInfo>_get_Item__);
    DAT_0756055e = 1;
  }
  puVar2 = Method_System_RuntimeType_ListBuilder<ConstructorInfo>_get_Item__;
  puVar1 = PTR_DAT_070c6cb0;
  lVar5 = FUN_03188b1c(*(undefined8 *)puVar3,3);
  lVar6 = *(long *)puVar4;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_031e5338(lVar6);
    lVar6 = *(long *)puVar4;
  }
  puVar7 = *(undefined8 **)(lVar6 + 0xb8);
  uVar8 = *(undefined8 *)puVar2;
  uVar9 = *(undefined8 *)puVar1;
  lVar10 = puVar7[1];
  if (lVar10 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_031e5338(lVar6);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)Method_OVRObjectPool_ListScope<string>__ctor__);
    FUN_03e02568(lVar10,uVar11,*(undefined8 *)Method_OVRObjectPool_ListScope<string>_Dispose__,0);
    lVar6 = *(long *)puVar4;
    *(long *)(*(long *)(lVar6 + 0xb8) + 8) = lVar10;
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_031e5338(lVar6);
    lVar6 = *(long *)puVar4;
  }
  puVar3 = Method_OVRObjectPool_ListScope<OVRSpatialAnchor>_Dispose__;
  puVar7 = *(undefined8 **)(lVar6 + 0xb8);
  lVar12 = puVar7[2];
  if (lVar12 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_031e5338(lVar6);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)
                         Method_OVRObjectPool_ListScope<OVRSceneManager_Metrics>_Dispose__);
    FUN_04f77e94(lVar12,uVar11,
                 *(undefined8 *)Method_OVRObjectPool_ListScope<OVRAnchor_TrackableType>__ctor__,0);
    *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10) = lVar12;
  }
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  FUN_056e3c8c(&local_70,uVar9,uVar8,lVar10,lVar12,*(undefined8 *)puVar3);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) != 0) {
      *(undefined8 *)(lVar5 + 0x28) = uStack_68;
      *(undefined8 *)(lVar5 + 0x20) = local_70;
      *(undefined8 *)(lVar5 + 0x38) = uStack_58;
      *(undefined8 *)(lVar5 + 0x30) = uStack_60;
      puVar2 = Method_System_RuntimeType_ListBuilder<ConstructorInfo>_get_Count__;
      puVar1 = PTR_DAT_070fcc40;
      lVar6 = *(long *)puVar4;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar6 = *(long *)puVar4;
      }
      puVar7 = *(undefined8 **)(lVar6 + 0xb8);
      uVar8 = *(undefined8 *)puVar2;
      uVar9 = *(undefined8 *)puVar1;
      lVar10 = puVar7[3];
      if (lVar10 == 0) {
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
        }
        uVar11 = *puVar7;
        lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (*(undefined8 *)Method_OVRObjectPool_ListScope<string>__ctor__);
        FUN_03e02568(lVar10,uVar11,
                     *(undefined8 *)
                      Method_OVRObjectPool_ListScope<OVRAnchor_TrackableType>_Dispose__,0);
        lVar6 = *(long *)puVar4;
        *(long *)(*(long *)(lVar6 + 0xb8) + 0x18) = lVar10;
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar6 = *(long *)puVar4;
      }
      puVar7 = *(undefined8 **)(lVar6 + 0xb8);
      lVar12 = puVar7[4];
      if (lVar12 == 0) {
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
        }
        uVar11 = *puVar7;
        lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (*(undefined8 *)
                             Method_OVRObjectPool_ListScope<OVRSceneManager_Metrics>_Dispose__);
        FUN_04f77e94(lVar12,uVar11,
                     *(undefined8 *)
                      Method_OVRObjectPool_ListScope<OVRPlugin_SpaceComponentType>__ctor__,0);
        *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20) = lVar12;
      }
      uStack_68 = 0;
      local_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      FUN_056e3c8c(&local_70,uVar9,uVar8,lVar10,lVar12,*(undefined8 *)puVar3);
      if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar5 + 0x48) = uStack_68;
        *(undefined8 *)(lVar5 + 0x40) = local_70;
        *(undefined8 *)(lVar5 + 0x58) = uStack_58;
        *(undefined8 *)(lVar5 + 0x50) = uStack_60;
        puVar2 = Method_OVRObjectPool_ListScope<OVRSpatialAnchor_UnboundAnchor>__ctor__;
        puVar1 = PTR_DAT_070c7188;
        lVar6 = *(long *)puVar4;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          lVar6 = *(long *)puVar4;
        }
        puVar7 = *(undefined8 **)(lVar6 + 0xb8);
        uVar8 = *(undefined8 *)puVar2;
        uVar9 = *(undefined8 *)puVar1;
        lVar10 = puVar7[5];
        if (lVar10 == 0) {
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_031e5338();
            puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
          }
          uVar11 = *puVar7;
          lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                             (*(undefined8 *)Method_OVRObjectPool_ListScope<string>__ctor__);
          FUN_03e02568(lVar10,uVar11,
                       *(undefined8 *)
                        Method_OVRObjectPool_ListScope<OVRPlugin_SpaceComponentType>_Dispose__,0);
          lVar6 = *(long *)puVar4;
          *(long *)(*(long *)(lVar6 + 0xb8) + 0x28) = lVar10;
        }
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          lVar6 = *(long *)puVar4;
        }
                    /* try { // try from 06be0b58 to 06ce0c27 has its CatchHandler @ 06be0b58
                       catch() { ... } // from try @ 06be0b58 with catch @ 06be0b58
                       catch() { ... } // from try @ 06be0c60 with catch @ 06be0b58
                       catch() { ... } // from try @ 06be0cb0 with catch @ 06be0b58
                       catch() { ... } // from try @ 06be0cd4 with catch @ 06be0b58 */
        puVar7 = *(undefined8 **)(lVar6 + 0xb8);
        lVar12 = puVar7[6];
        if (lVar12 == 0) {
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_031e5338();
            puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
          }
          uVar11 = *puVar7;
          lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                             (*(undefined8 *)
                               Method_OVRObjectPool_ListScope<OVRSceneManager_Metrics>_Dispose__);
          FUN_04f77e94(lVar12,uVar11,
                       *(undefined8 *)
                        Method_OVRObjectPool_ListScope<OVRSceneManager_Metrics>__ctor__,0);
          *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x30) = lVar12;
        }
        uStack_68 = 0;
        local_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        FUN_056e3c8c(&local_70,uVar9,uVar8,lVar10,lVar12,*(undefined8 *)puVar3);
        if (2 < *(uint *)(lVar5 + 0x18)) {
          *(undefined8 *)(lVar5 + 0x68) = uStack_68;
          *(undefined8 *)(lVar5 + 0x60) = local_70;
          *(undefined8 *)(lVar5 + 0x78) = uStack_58;
          *(undefined8 *)(lVar5 + 0x70) = uStack_60;
          return lVar5;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03188ce0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


