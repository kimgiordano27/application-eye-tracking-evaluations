/*
FUNCTION_NAME: FUN_0625aa48
ENTRY_POINT: 0625aa48
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;pose_vector;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0625aa48(long param_1)

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
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar9 = Method_Mono_Security_X509_PKCS12_ReadSafeBag__;
  puVar8 = Method_Mono_Security_X509_PKCS12_GetSymmetricAlgorithm__;
  puVar7 = Method_OvrPlatformInit_<InitializeOvrPlatform>g__CheckEntitlement_5_1__;
  puVar6 = Method_System_Runtime_Serialization_ObjectManager_CompleteObject__;
  puVar5 = Method_System_Runtime_Serialization_ObjectManager_CompleteISerializableObject__;
  puVar4 = Method_System_Collections_Specialized_NotifyCollectionChangedEventArgs__ctor__;
  puVar3 = 
  Method_Unity_Netcode_NetworkVariableSerializationTypedInitializers_InitializeEqualityChecker_UnmanagedIEquatable<Vector3>__
  ;
  puVar2 = 
  Method_Unity_Netcode_NetworkVariableSerializationTypedInitializers_InitializeEqualityChecker_UnmanagedIEquatable<NetcodeGameObjectsPlayer>__
  ;
  puVar1 = Unity_Services_Relay_Models_JoinRequest_TypeInfo;
  if ((DAT_06dc7398 & 1) == 0) {
    FUN_02d965b8(Method_OvrPlatformInit_<InitializeOvrPlatform>g__CheckEntitlement_5_1__);
    FUN_02d965b8(
                Method_Unity_Netcode_NetworkVariableSerializationTypedInitializers_InitializeEqualityChecker_UnmanagedIEquatable<NetcodeGameObjectsPlayer>__
                );
    FUN_02d965b8(
                Method_Unity_Netcode_NetworkVariableSerializationTypedInitializers_InitializeEqualityChecker_UnmanagedIEquatable<Vector3>__
                );
    FUN_02d965b8(Unity_Services_Relay_Models_JoinRequest_TypeInfo);
    FUN_02d965b8(Method_Mono_Security_X509_PKCS12_ReadSafeBag__);
    FUN_02d965b8(Method_Oculus_Platform_Packet_ReadBytes__);
    FUN_02d965b8(
                Method_System_Reflection_MemberInfo_HasSameMetadataDefinitionAsCore<RuntimeFieldInfo>__
                );
    FUN_02d965b8(Method_System_Reflection_MemberInfo_GetCustomAttributesData__);
    FUN_02d965b8(Method_Unity_Networking_Transport_PacketProcessor_AppendToPayload<byte>__);
    FUN_02d965b8(Method_Mono_Security_X509_PKCS12_GetSymmetricAlgorithm__);
    FUN_02d965b8(Method_System_Collections_Specialized_NotifyCollectionChangedEventArgs__ctor__);
    FUN_02d965b8(Method_System_Runtime_Serialization_ObjectManager_CompleteISerializableObject__);
    FUN_02d965b8(Method_System_Runtime_Serialization_ObjectManager_CompleteObject__);
    FUN_02d965b8(PTR_DAT_06a09458);
    DAT_06dc7398 = 1;
  }
  uVar11 = _DAT_010fee20;
  *(undefined8 *)(param_1 + 0x148) = _UNK_010fee28;
  *(undefined8 *)(param_1 + 0x140) = uVar11;
  *(undefined4 *)(param_1 + 0x150) = 0x3ba3d70a;
  uVar10 = FUN_06350090(0xffffffff,0);
  *(undefined4 *)(param_1 + 0x154) = uVar10;
  uVar11 = *(undefined8 *)puVar5;
  *(undefined4 *)(param_1 + 0x158) = 1;
  *(undefined2 *)(param_1 + 0x15c) = 0x101;
  uVar11 = thunk_FUN_02dd3144(uVar11);
  FUN_06224744(uVar11,0);
  *(undefined8 *)(param_1 + 0x160) = uVar11;
  LeanTween__value(param_1 + 0x160,uVar11);
  uVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
  FUN_0622478c(uVar11,0);
  *(undefined8 *)(param_1 + 0x168) = uVar11;
  LeanTween__value(param_1 + 0x168,uVar11);
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
  FUN_045b25dc(uVar11,&local_a0,1,0,0,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x170) = uVar11;
  LeanTween__value(param_1 + 0x170,uVar11);
  uVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
  FUN_0628e660(uVar11,0);
  *(undefined8 *)(param_1 + 0x178) = uVar11;
  LeanTween__value(param_1 + 0x178,uVar11);
  uVar11 = *(undefined8 *)puVar4;
  *(undefined1 *)(param_1 + 0x19c) = 1;
  uVar11 = FUN_02d966a4(uVar11,0x19);
  *(undefined8 *)(param_1 + 0x1b0) = uVar11;
  LeanTween__value(param_1 + 0x1b0,uVar11);
  uVar11 = FUN_02d966a4(*(undefined8 *)puVar1,0x19);
  *(undefined8 *)(param_1 + 0x1b8) = uVar11;
  LeanTween__value(param_1 + 0x1b8,uVar11);
  uVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar8);
  FUN_041a06a0(uVar11,*(undefined8 *)puVar9);
  *(undefined8 *)(param_1 + 0x1c0) = uVar11;
  LeanTween__value(param_1 + 0x1c0,uVar11);
  uVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_Unity_Networking_Transport_PacketProcessor_AppendToPayload<byte>__
                             );
  FUN_0400f984(uVar11,*(undefined8 *)Method_Oculus_Platform_Packet_ReadBytes__);
  *(undefined8 *)(param_1 + 0x1c8) = uVar11;
  LeanTween__value(param_1 + 0x1c8,uVar11);
  uVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_System_Reflection_MemberInfo_GetCustomAttributesData__);
  FUN_0400f984(uVar11,*(undefined8 *)
                       Method_System_Reflection_MemberInfo_HasSameMetadataDefinitionAsCore<RuntimeFieldInfo>__
              );
  *(undefined8 *)(param_1 + 0x1d0) = uVar11;
  LeanTween__value(param_1 + 0x1d0,uVar11);
  if (*(int *)(*(long *)PTR_DAT_06a09458 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_0624c844(param_1);
  return;
}


