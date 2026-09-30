/*
FUNCTION_NAME: FUN_06c773f4
ENTRY_POINT: 06c773f4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_06c773f4(void)

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
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar3 = System_Collections_Generic_IEnumerable<VisualEffectPlayableSerializedEvent>_TypeInfo;
  puVar2 = System_Collections_Generic_IEnumerable<Vector3>_TypeInfo;
  puVar1 = System_Collections_Generic_ICollection<char>_TypeInfo;
  if ((DAT_07a50683 & 1) == 0) {
    FUN_031f20f4(System_Collections_Generic_IEnumerable<VisualElement>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_IEnumerable<VolumeParameter>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_IEnumerable<X509Certificate>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_IEnumerable<X509Crl>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_IEnumerable<X509CrlEntry>_TypeInfo);
    FUN_031f20f4(
                System_Collections_Generic_IEnumerable<VisualEffectPlayableSerializedEvent>_TypeInfo
                );
    FUN_031f20f4(System_Collections_Generic_IEnumerable<X509Extension>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_IEnumerable<X509Name>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_IEnumerable<Vector3>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_ICollection<char>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_IEnumerable<X509V2AttributeCertificate>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_IEnumerable<XAttribute>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_IEnumerable<XNode>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_IEnumerable<XRGrabInteractable>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_IEnumerable<XmlAttribute>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_IEnumerable<XmlNode>_TypeInfo);
    FUN_031f20f4(
                System_Collections_Generic_IEnumerable<BinaryStorageBuffer_ISerializationAdapter>_TypeInfo
                );
    FUN_031f20f4(System_Collections_Generic_IEnumerable<CmsSignedDataGenerator_SignerInf>_TypeInfo);
    FUN_031f20f4(
                System_Collections_Generic_IEnumerable<CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder>_TypeInfo
                );
    FUN_031f20f4(System_Collections_Generic_IEnumerable<DtlsReliableHandshake_Message>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_IEnumerable<DynamicHeap_TypeData>_TypeInfo);
    FUN_031f20f4(
                System_Collections_Generic_IEnumerable<InputBindingCompositeContext_PartBinding>_TypeInfo
                );
    FUN_031f20f4(
                System_Collections_Generic_IEnumerable<JointRotationActiveState_JointRotationFeatureConfig>_TypeInfo
                );
    FUN_031f20f4(
                System_Collections_Generic_IEnumerable<JointVelocityActiveState_JointVelocityFeatureConfig>_TypeInfo
                );
    FUN_031f20f4(System_Collections_Generic_IEnumerable<OVRPermissionsRequester_Permission>_TypeInfo
                );
    FUN_031f20f4(System_Collections_Generic_IEnumerable<OVRSemanticLabels_Classification>_TypeInfo);
    FUN_031f20f4(
                System_Collections_Generic_IEnumerable<OpenXRInteractionFeature_ActionConfig>_TypeInfo
                );
    FUN_031f20f4(
                System_Collections_Generic_IEnumerable<PlayerEditorConnectionEvents_MessageTypeSubscribers>_TypeInfo
                );
    DAT_07a50683 = 1;
  }
  puVar11 = 
  System_Collections_Generic_IEnumerable<InputBindingCompositeContext_PartBinding>_TypeInfo;
  puVar10 = System_Collections_Generic_IEnumerable<XNode>_TypeInfo;
  puVar9 = System_Collections_Generic_IEnumerable<X509Name>_TypeInfo;
  puVar8 = System_Collections_Generic_IEnumerable<X509Extension>_TypeInfo;
  puVar7 = System_Collections_Generic_IEnumerable<X509Crl>_TypeInfo;
  puVar6 = System_Collections_Generic_IEnumerable<X509Certificate>_TypeInfo;
  puVar5 = System_Collections_Generic_IEnumerable<VolumeParameter>_TypeInfo;
  puVar4 = System_Collections_Generic_IEnumerable<VisualElement>_TypeInfo;
  uVar12 = thunk_FUN_0322f148(*(undefined8 *)puVar3);
  FUN_047aec0c(uVar12,*(undefined8 *)System_Collections_Generic_IEnumerable<X509CrlEntry>_TypeInfo);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar12;
  thunk_FUN_0329bf60(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar12);
  lVar13 = *(long *)puVar2;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar13 = *(long *)puVar2;
  }
  uVar15 = **(undefined8 **)(lVar13 + 0xb8);
  uVar12 = thunk_FUN_0322f148(*(undefined8 *)puVar5);
  FUN_042cbcbc(uVar12,uVar15,*(undefined8 *)puVar8,0);
  uVar16 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  uVar15 = thunk_FUN_0322f148(*(undefined8 *)puVar4);
  FUN_056fa11c(uVar15,uVar16,*(undefined8 *)puVar9,0);
  uVar16 = thunk_FUN_0322f148(*(undefined8 *)puVar7);
  FUN_04601630(uVar16,uVar12,0,uVar15,0,0,10000,*(undefined8 *)puVar6);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  *puVar14 = uVar16;
  thunk_FUN_0329bf60(puVar14,uVar16);
  uVar12 = FUN_06dd1f88(*(undefined8 *)puVar11,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = uVar12;
  uVar12 = FUN_06dd1f88(*(undefined8 *)puVar10,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18) = uVar12;
  uVar12 = FUN_06dd1f88(*(undefined8 *)System_Collections_Generic_IEnumerable<XmlAttribute>_TypeInfo
                        ,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20) = uVar12;
  uVar12 = FUN_06dd1f88(*(undefined8 *)
                         System_Collections_Generic_IEnumerable<X509V2AttributeCertificate>_TypeInfo
                        ,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28) = uVar12;
  uVar12 = FUN_06dd1f88(*(undefined8 *)
                         System_Collections_Generic_IEnumerable<XRGrabInteractable>_TypeInfo,1,0,0,0
                       );
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30) = uVar12;
  uVar12 = FUN_06dd1f88(*(undefined8 *)
                         System_Collections_Generic_IEnumerable<CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder>_TypeInfo
                        ,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38) = uVar12;
  uVar12 = FUN_06dd1f88(*(undefined8 *)
                         System_Collections_Generic_IEnumerable<PlayerEditorConnectionEvents_MessageTypeSubscribers>_TypeInfo
                        ,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x40) = uVar12;
  uVar12 = FUN_06dd1f88(*(undefined8 *)
                         System_Collections_Generic_IEnumerable<CmsSignedDataGenerator_SignerInf>_TypeInfo
                        ,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x48) = uVar12;
  uVar12 = FUN_06dd1f88(*(undefined8 *)System_Collections_Generic_IEnumerable<XAttribute>_TypeInfo,1
                        ,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x50) = uVar12;
  uVar12 = FUN_06dd1f88(*(undefined8 *)
                         System_Collections_Generic_IEnumerable<DynamicHeap_TypeData>_TypeInfo,1,0,0
                        ,0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x58) = uVar12;
  uVar12 = FUN_06dd1f88(*(undefined8 *)
                         System_Collections_Generic_IEnumerable<DtlsReliableHandshake_Message>_TypeInfo
                        ,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x60) = uVar12;
  uVar12 = FUN_06dd1f88(*(undefined8 *)
                         System_Collections_Generic_IEnumerable<JointRotationActiveState_JointRotationFeatureConfig>_TypeInfo
                        ,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x68) = uVar12;
  uVar12 = FUN_06dd1f88(*(undefined8 *)
                         System_Collections_Generic_IEnumerable<OVRSemanticLabels_Classification>_TypeInfo
                        ,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x70) = uVar12;
  uVar12 = FUN_06dd1f88(*(undefined8 *)
                         System_Collections_Generic_IEnumerable<BinaryStorageBuffer_ISerializationAdapter>_TypeInfo
                        ,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x78) = uVar12;
  uVar12 = FUN_06dd1f88(*(undefined8 *)
                         System_Collections_Generic_IEnumerable<JointVelocityActiveState_JointVelocityFeatureConfig>_TypeInfo
                        ,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x80) = uVar12;
  uVar12 = FUN_06dd1f88(*(undefined8 *)System_Collections_Generic_IEnumerable<XmlNode>_TypeInfo,1,0,
                        0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x88) = uVar12;
  uVar12 = FUN_06dd1f88(*(undefined8 *)
                         System_Collections_Generic_IEnumerable<OpenXRInteractionFeature_ActionConfig>_TypeInfo
                        ,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x90) = uVar12;
  uVar12 = FUN_06dd1f88(*(undefined8 *)
                         System_Collections_Generic_IEnumerable<OVRPermissionsRequester_Permission>_TypeInfo
                        ,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x98) = uVar12;
  return;
}


