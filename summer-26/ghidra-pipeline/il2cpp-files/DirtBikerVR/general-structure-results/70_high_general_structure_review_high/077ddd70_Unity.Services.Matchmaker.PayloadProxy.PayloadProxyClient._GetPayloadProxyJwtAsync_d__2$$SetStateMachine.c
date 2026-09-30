/*
FUNCTION_NAME: Unity.Services.Matchmaker.PayloadProxy.PayloadProxyClient.<GetPayloadProxyJwtAsync>d__2$$SetStateMachine
ENTRY_POINT: 077ddd70
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_6;telemetry_or_network_hits_6
*/


undefined8
Unity_Services_Matchmaker_PayloadProxy_PayloadProxyClient_<GetPayloadProxyJwtAsync>d__2__SetStateMachine
          (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long unaff_x19;
  long unaff_x20;
  
  FUN_03a8a718(System_Collections_Concurrent_ConcurrentDictionary<Type,_object>_TypeInfo);
  FUN_03a8a718(
              System_Collections_Concurrent_ConcurrentDictionary<Type,_SerializationEvents>_TypeInfo
              );
  FUN_03a8a718(System_Collections_Concurrent_ConcurrentDictionary<Type,_string>_TypeInfo);
  FUN_03a8a718(
              System_Collections_Concurrent_ConcurrentDictionary<Type,_TypeUtility_ITypeConstructor>_TypeInfo
              );
  FUN_03a8a718(
              System_Collections_Concurrent_ConcurrentDictionary<uint,_TaskCompletionSource<Reply>>_TypeInfo
              );
  *(undefined1 *)(unaff_x20 + 0x1d7) = 1;
  puVar5 = 
  System_Collections_Concurrent_ConcurrentDictionary<uint,_TaskCompletionSource<Reply>>_TypeInfo;
  puVar4 = System_Collections_Concurrent_ConcurrentDictionary<Type,_IPropertyBag>_TypeInfo;
  puVar3 = System_Collections_Concurrent_ConcurrentDictionary<string,_Subscription>_TypeInfo;
  puVar2 = System_Collections_Concurrent_ConcurrentDictionary<string,_object>_TypeInfo;
  puVar1 = System_Comparison<VisualEffectControlTrackController_Event>_TypeInfo;
  if (unaff_x19 != 0) {
    uVar6 = FUN_04490e44();
    uVar7 = FUN_04490e44();
    uVar8 = FUN_04490e44();
    uVar9 = FUN_04490e44();
    uVar6 = FUN_077de200(uVar6);
    uVar10 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
    FUN_077de324(uVar10,uVar6,0,0,0);
    uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)puVar4);
    FUN_078145d8(uVar6,0);
    uVar11 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
    FUN_0783938c(uVar11,uVar6,uVar8,uVar10,0);
    uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)puVar4);
    FUN_078145d8(uVar6,0);
    uVar12 = thunk_FUN_03ac74bc(*(undefined8 *)puVar3);
    FUN_07834960(uVar12,uVar6,uVar8,uVar10,0);
    uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)
                                System_Comparison<TimeNotificationBehaviour_NotificationEntry>_TypeInfo
                              );
    FUN_077de40c(uVar6,uVar9,uVar8);
    uVar8 = thunk_FUN_03ac74bc(*(undefined8 *)
                                System_Collections_Concurrent_ConcurrentDictionary<Type,_object>_TypeInfo
                              );
    FUN_077de450(uVar8,uVar7,uVar6,uVar11);
    uVar9 = thunk_FUN_03ac74bc(*(undefined8 *)
                                System_Collections_Concurrent_ConcurrentDictionary<string,_IList<VivoxMessage>>_TypeInfo
                              );
    FUN_077de4b0(uVar9,uVar7,uVar6,uVar11);
    uVar10 = thunk_FUN_03ac74bc(*(undefined8 *)
                                 System_Collections_Concurrent_ConcurrentDictionary<Type,_string>_TypeInfo
                               );
    FUN_077de510(uVar10,uVar7,uVar6,uVar12);
    uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)puVar5);
    FUN_07802d70(uVar6,0);
    lVar13 = thunk_FUN_03ac74bc(*(undefined8 *)
                                 System_Comparison<TimeZoneInfo_AdjustmentRule>_TypeInfo);
    FUN_0679343c(lVar13,0);
    *(undefined8 *)(lVar13 + 0x10) = uVar6;
    thunk_FUN_03afed3c((undefined8 *)(lVar13 + 0x10),uVar6);
    uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)puVar5);
    FUN_07802d70(uVar6,0);
    puVar1 = System_Comparison<OVRRaycaster_RaycastHit>_TypeInfo;
    lVar14 = thunk_FUN_03ac74bc(*(undefined8 *)System_Comparison<OVRRaycaster_RaycastHit>_TypeInfo);
    FUN_0679343c(lVar14,0);
    *(undefined8 *)(lVar14 + 0x10) = uVar6;
    thunk_FUN_03afed3c((undefined8 *)(lVar14 + 0x10),uVar6);
    uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)
                                System_Collections_Concurrent_ConcurrentDictionary<Type,_SerializationEvents>_TypeInfo
                              );
    FUN_077de5d0(uVar6,uVar8,lVar14);
    uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)puVar5);
    FUN_07802d70(uVar7,0);
    lVar14 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
    FUN_0679343c(lVar14,0);
    *(undefined8 *)(lVar14 + 0x10) = uVar7;
    thunk_FUN_03afed3c((undefined8 *)(lVar14 + 0x10),uVar7);
    uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)
                                System_Collections_Concurrent_ConcurrentDictionary<string,_TaskCompletionSource<IChatHistoryQueryResult>>_TypeInfo
                              );
    FUN_077de614(uVar7,uVar9,lVar14);
    uVar9 = thunk_FUN_03ac74bc(*(undefined8 *)
                                System_Collections_Concurrent_ConcurrentDictionary<string,_string>_TypeInfo
                              );
    FUN_077de658(uVar9,uVar8,lVar13,uVar6,uVar7);
    uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)puVar5);
    FUN_07802d70(uVar6,0);
    lVar13 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
    FUN_0679343c(lVar13,0);
    *(undefined8 *)(lVar13 + 0x10) = uVar6;
    thunk_FUN_03afed3c((undefined8 *)(lVar13 + 0x10),uVar6);
    uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)
                                System_Collections_Concurrent_ConcurrentDictionary<Type,_TypeUtility_ITypeConstructor>_TypeInfo
                              );
    FUN_077fe0b4(uVar6,uVar10,lVar13,0);
    lVar13 = thunk_FUN_03ac74bc(*(undefined8 *)
                                 System_Collections_Concurrent_ConcurrentDictionary<Type,_Tuple<bool,_bool,_bool,_bool>>_TypeInfo
                               );
    FUN_0679343c(lVar13,0);
    *(undefined8 *)(lVar13 + 0x10) = uVar6;
    thunk_FUN_03afed3c((undefined8 *)(lVar13 + 0x10),uVar6);
    uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)
                                System_Comparison<TrackedDeviceRaycaster_RaycastHitData>_TypeInfo);
    FUN_077de6fc(uVar6,uVar9,lVar13);
    FUN_0449121c();
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


