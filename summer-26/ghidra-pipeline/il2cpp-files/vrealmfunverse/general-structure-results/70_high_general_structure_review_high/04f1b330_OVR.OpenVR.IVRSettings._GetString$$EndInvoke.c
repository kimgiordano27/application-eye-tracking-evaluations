/*
FUNCTION_NAME: OVR.OpenVR.IVRSettings._GetString$$EndInvoke
ENTRY_POINT: 04f1b330
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;ui_interaction;telemetry
EVIDENCE: strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void OVR_OpenVR_IVRSettings__GetString__EndInvoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long unaff_x19;
  undefined8 uVar13;
  long *unaff_x21;
  
  FUN_02b3c81c();
  FUN_02b3c81c(
              System_Collections_Concurrent_ConcurrentDictionary<ServicePointManager_SPKey,_ServicePoint>_TypeInfo
              );
  FUN_02b3c81c(System_Collections_Concurrent_ConcurrentQueue<LayoutHandle>_TypeInfo);
  FUN_02b3c81c(System_Collections_Concurrent_ConcurrentQueue<StringBuilder>_TypeInfo);
  FUN_02b3c81c(
              System_Runtime_CompilerServices_ConditionalWeakTable<HttpWebRequest,_NtlmSession>_TypeInfo
              );
  FUN_02b3c81c(
              System_Runtime_CompilerServices_ConditionalWeakTable<object,_OSSpecificSynchronizationContext>_TypeInfo
              );
  FUN_02b3c81c(
              System_Runtime_CompilerServices_ConditionalWeakTable<object,_SerializationInfo>_TypeInfo
              );
  FUN_02b3c81c(Unity_Properties_ContainerPropertyBag<Angle>_TypeInfo);
  FUN_02b3c81c(Unity_Properties_ContainerPropertyBag<Background>_TypeInfo);
  FUN_02b3c81c(Unity_Properties_ContainerPropertyBag<BackgroundPosition>_TypeInfo);
  FUN_02b3c81c(
              System_Collections_Concurrent_ConcurrentDictionary<Type,_SerializationEvents>_TypeInfo
              );
  *(undefined1 *)(unaff_x19 + 0x87f) = 1;
  puVar9 = 
  System_Runtime_CompilerServices_ConditionalWeakTable<object,_OSSpecificSynchronizationContext>_TypeInfo
  ;
  puVar8 = 
  System_Runtime_CompilerServices_ConditionalWeakTable<HttpWebRequest,_NtlmSession>_TypeInfo;
  puVar7 = System_Collections_Concurrent_ConcurrentQueue<StringBuilder>_TypeInfo;
  puVar6 = System_Collections_Concurrent_ConcurrentQueue<LayoutHandle>_TypeInfo;
  puVar5 = 
  System_Collections_Concurrent_ConcurrentDictionary<ServicePointManager_SPKey,_ServicePoint>_TypeInfo
  ;
  puVar4 = System_Collections_Concurrent_ConcurrentDictionary<ulong,_Delegate>_TypeInfo;
  puVar3 = 
  System_Collections_Concurrent_ConcurrentDictionary<Type,_TypeUtility_ITypeConstructor>_TypeInfo;
  puVar2 = System_Collections_Concurrent_ConcurrentDictionary<Type,_string>_TypeInfo;
  puVar1 = System_Collections_Concurrent_ConcurrentDictionary<Type,_object>_TypeInfo;
  lVar10 = *unaff_x21;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar10 = *unaff_x21;
  }
  uVar13 = **(undefined8 **)(lVar10 + 0xb8);
  uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
  FUN_03ebf68c(uVar11,uVar13,*(undefined8 *)puVar5,0);
  uVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
  FUN_03ebf460(uVar13,uVar11,*(undefined8 *)puVar2);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar13;
  thunk_FUN_02bb0e9c(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar13);
  uVar13 = **(undefined8 **)(*unaff_x21 + 0xb8);
  uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
  FUN_03ebf68c(uVar11,uVar13,*(undefined8 *)puVar6,0);
  uVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
  FUN_03ebf460(uVar13,uVar11,*(undefined8 *)puVar2);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  *puVar12 = uVar13;
  thunk_FUN_02bb0e9c(puVar12,uVar13);
  uVar13 = **(undefined8 **)(*unaff_x21 + 0xb8);
  uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
  FUN_03ebf68c(uVar11,uVar13,*(undefined8 *)puVar7,0);
  uVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
  FUN_03ebf460(uVar13,uVar11,*(undefined8 *)puVar2);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
  *puVar12 = uVar13;
  thunk_FUN_02bb0e9c(puVar12,uVar13);
  uVar13 = **(undefined8 **)(*unaff_x21 + 0xb8);
  uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
  FUN_03ebf68c(uVar11,uVar13,*(undefined8 *)puVar8,0);
  uVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
  FUN_03ebf460(uVar13,uVar11,*(undefined8 *)puVar2);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
  *puVar12 = uVar13;
  thunk_FUN_02bb0e9c(puVar12,uVar13);
  uVar13 = **(undefined8 **)(*unaff_x21 + 0xb8);
  uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
  FUN_03ebf68c(uVar11,uVar13,*(undefined8 *)puVar9,0);
  uVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
  FUN_03ebf460(uVar13,uVar11,*(undefined8 *)puVar2);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
  *puVar12 = uVar13;
  thunk_FUN_02bb0e9c(puVar12,uVar13);
  uVar13 = **(undefined8 **)(*unaff_x21 + 0xb8);
  uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
  FUN_03ebf68c(uVar11,uVar13,
               *(undefined8 *)
                System_Runtime_CompilerServices_ConditionalWeakTable<object,_SerializationInfo>_TypeInfo
               ,0);
  uVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
  FUN_03ebf460(uVar13,uVar11,*(undefined8 *)puVar2);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
  *puVar12 = uVar13;
  thunk_FUN_02bb0e9c(puVar12,uVar13);
  uVar13 = **(undefined8 **)(*unaff_x21 + 0xb8);
  uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
  FUN_03ebf68c(uVar11,uVar13,*(undefined8 *)Unity_Properties_ContainerPropertyBag<Angle>_TypeInfo,0)
  ;
  uVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
  FUN_03ebf460(uVar13,uVar11,*(undefined8 *)puVar2);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
  *puVar12 = uVar13;
  thunk_FUN_02bb0e9c(puVar12,uVar13);
  uVar13 = **(undefined8 **)(*unaff_x21 + 0xb8);
  uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
  FUN_03ebf68c(uVar11,uVar13,
               *(undefined8 *)Unity_Properties_ContainerPropertyBag<Background>_TypeInfo,0);
  uVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
  FUN_03ebf460(uVar13,uVar11,*(undefined8 *)puVar2);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38);
  *puVar12 = uVar13;
  thunk_FUN_02bb0e9c(puVar12,uVar13);
  uVar13 = **(undefined8 **)(*unaff_x21 + 0xb8);
  uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
  FUN_03ebf68c(uVar11,uVar13,
               *(undefined8 *)Unity_Properties_ContainerPropertyBag<BackgroundPosition>_TypeInfo,0);
  uVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
  FUN_03ebf460(uVar13,uVar11,*(undefined8 *)puVar2);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x40);
  *puVar12 = uVar13;
  thunk_FUN_02bb0e9c(puVar12,uVar13);
  return;
}


