/*
FUNCTION_NAME: FUN_06d950e8
ENTRY_POINT: 06d950e8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 76
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_5;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;negative_generic_rendering_without_foveation_or_eye_source;functionality_possible_biometrics_hits_12
*/


void FUN_06d950e8(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  int *piVar19;
  uint *puVar20;
  
                    /* try { // try from 06d950e8 to 06e950f7 has its CatchHandler @ 06d95180 */
  puVar2 = UnityEngine_Animations_AnimationPosePlayable_TypeInfo;
                    /* try { // try from 06d950f8 to 06e9519b has its CatchHandler @ 06d94f60 */
  if ((DAT_07a51759 & 1) == 0) {
    FUN_031f20f4(UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo);
    FUN_031f20f4(UnityEngine_Animations_AnimationScriptPlayable_TypeInfo);
    FUN_031f20f4(UnityEngine_Animations_AnimationPosePlayable_TypeInfo);
    FUN_031f20f4(UnityEngine_AnimationState_TypeInfo);
    FUN_031f20f4(UnityEngine_Timeline_AnimationTrack_TypeInfo);
    FUN_031f20f4(UnityEngine_UI_AnimationTriggers_TypeInfo);
    FUN_031f20f4(AnimationWire_TypeInfo);
    FUN_031f20f4(PTR_DAT_0759bc60);
    FUN_031f20f4(UnityEngine_Animator_TypeInfo);
    FUN_031f20f4(UnityEngine_AnimatorControllerParameter_TypeInfo);
    FUN_031f20f4(UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo);
    FUN_031f20f4(PTR_DAT_0759bc40);
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Anssi_AnssiNamedCurves_TypeInfo);
    FUN_031f20f4(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Anssi_AnssiObjectIdentifiers_TypeInfo
                );
    FUN_031f20f4(UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo);
    FUN_031f20f4(PTR_DAT_0759bc38);
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1StreamParser_TypeInfo);
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_X500_AttributeTypeAndValue_TypeInfo)
    ;
    FUN_031f20f4(System_AttributeUsageAttribute_TypeInfo);
    FUN_031f20f4(Unity_VisualScripting_AttributeUtility_TypeInfo);
    FUN_031f20f4(PTR_DAT_075eb090);
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_BerSet_TypeInfo);
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_BerSetGenerator_TypeInfo);
    FUN_031f20f4(Mono_Net_Security_AsyncWriteRequest_TypeInfo);
    FUN_031f20f4(Unity_Services_Authentication_AuthenticationExceptionHandler_TypeInfo);
    FUN_031f20f4(Fusion_Photon_Realtime_Async_AuthenticationFailedException_TypeInfo);
    FUN_031f20f4(UnityEngine_Rendering_AtlasAllocator_TypeInfo);
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_BerSetParser_TypeInfo);
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_BerTaggedObject_TypeInfo);
    FUN_031f20f4(System_Net_AuthenticationManager_TypeInfo);
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_BerTaggedObjectParser_TypeInfo);
    FUN_031f20f4(Unity_Services_Authentication_AuthenticationMetrics_TypeInfo);
    FUN_031f20f4(UnityEngine_UIElements_UIR_BestFitAllocator_TypeInfo);
    FUN_031f20f4(Unity_VisualScripting_IKeyedCollection<string,_ValueOutput>_TypeInfo);
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1TaggedObjectParser_TypeInfo);
    FUN_031f20f4(UnityEngine_ResourceManagement_ResourceProviders_AtlasSpriteProvider_TypeInfo);
    FUN_031f20f4(PTR_DAT_07621d68);
    FUN_031f20f4(PTR_DAT_07621d70);
    FUN_031f20f4(PTR_DAT_07621d28);
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_X509_AttCertIssuer_TypeInfo);
    FUN_031f20f4(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Operators_Asn1VerifierFactory_TypeInfo
                );
    FUN_031f20f4(PTR_DAT_07621d60);
    FUN_031f20f4(Oculus_Interaction_BestHoverInteractorGroup_TypeInfo);
    FUN_031f20f4(PTR_DAT_075fbb60);
    FUN_031f20f4(UnityEngine_XR_Interaction_Toolkit_Attachment_AttachPointVelocityTracker_TypeInfo);
    FUN_031f20f4(Oculus_Platform_Models_AppDownloadProgressResult_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_IList<ArraySegment<byte>>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_IList<KeyValuePair<string,_JsonData>>_TypeInfo);
    FUN_031f20f4(PTR_DAT_07621dc8);
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_BerSequenceGenerator_TypeInfo);
    FUN_031f20f4(PTR_DAT_07621d08);
    FUN_031f20f4(UnityEngine_UIElements_AttachToPanelEvent_TypeInfo);
    FUN_031f20f4(PTR_DAT_076257f0);
    FUN_031f20f4(PTR_DAT_07621dd0);
    FUN_031f20f4(UnityEngine_Rendering_AttachmentDescriptor_TypeInfo);
    FUN_031f20f4(PTR_DAT_07612590);
    FUN_031f20f4(UnityEngine_Rendering_AttachmentIndexArray_TypeInfo);
    FUN_031f20f4(System_Security_Cryptography_AsnEncodedData_TypeInfo);
    FUN_031f20f4(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_X509_AuthorityInformationAccess_TypeInfo
                );
    FUN_031f20f4(System_Collections_Generic_IList<ValueTuple<RTHandle,_int>>_TypeInfo);
    FUN_031f20f4(Oculus_Interaction_BestSelectInteractorGroup_TypeInfo);
    FUN_031f20f4(PTR_DAT_07621d38);
    FUN_031f20f4(UnityEngine_InputSystem_AttitudeSensor_TypeInfo);
    FUN_031f20f4(PTR_DAT_07621dd8);
    FUN_031f20f4(PTR_DAT_07621d40);
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Math_BigInteger_TypeInfo);
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Cms_Attribute_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_IList<byte[]>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_IList<Vector2[]>_TypeInfo);
    FUN_031f20f4(Mono_Math_BigInteger_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_IList<AsyncOperationHandle>_TypeInfo);
    FUN_031f20f4(PTR_DAT_075ff118);
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_X509_AttributeCertificate_TypeInfo);
    FUN_031f20f4(PTR_DAT_07621d78);
    FUN_031f20f4(PTR_DAT_07621d50);
    FUN_031f20f4(PTR_DAT_075ff120);
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_X509_AttributeCertificateHolder_TypeInfo)
    ;
    FUN_031f20f4(Photon_Voice_Unity_AudioClipWrapper_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_IEnumerator<PaintReceiverTC>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_IList<Attribute>_TypeInfo);
    FUN_031f20f4(System_Data_AutoIncrementBigInteger_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_IList<AttributeX509>_TypeInfo);
    FUN_031f20f4(Mono_Math_BigInteger_TypeInfo);
    FUN_031f20f4(UnityEngine_Events_UnityEvent<SpriteRenderer>_TypeInfo);
    FUN_031f20f4(System_Numerics_BigInteger_TypeInfo);
    FUN_031f20f4(Best_HTTP_Shared_PlatformSupport_Memory_AutoReleaseBuffer_TypeInfo);
    FUN_031f20f4(System_Threading_AutoResetEvent_TypeInfo);
    FUN_031f20f4(System_Numerics_BigIntegerCalculator_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_IList<BigInteger>_TypeInfo);
    FUN_031f20f4(PTR_DAT_07621d58);
    FUN_031f20f4(PTR_DAT_0759b1c0);
    FUN_031f20f4(UnityEngine_Events_ArgumentCache_TypeInfo);
    FUN_031f20f4(System_Data_Common_BigIntegerStorage_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_IList<bool>_TypeInfo);
    FUN_031f20f4(System_Runtime_Serialization_AttributeData_TypeInfo);
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Utilities_BigIntegers_TypeInfo);
    FUN_031f20f4(Photon_Voice_AudioInChangeNotifierNotSupported_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_IList<char>_TypeInfo);
    FUN_031f20f4(MyBox_Billboard_TypeInfo);
    FUN_031f20f4(Oculus_Platform_Models_BillingPlan_TypeInfo);
    FUN_031f20f4(UnityEngine_InputSystem_Controls_AxisControl_TypeInfo);
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1OctetStringParser_TypeInfo);
    FUN_031f20f4(Photon_Voice_IOS_AudioSessionCategory_TypeInfo);
    FUN_031f20f4(System_Configuration_Assemblies_AssemblyHashAlgorithm_TypeInfo);
    DAT_07a51759 = 1;
  }
  lVar9 = thunk_FUN_0322f148(*(undefined8 *)puVar2);
  FUN_06d70ad4(lVar9,0);
  puVar8 = Oculus_Platform_Models_BillingPlan_TypeInfo;
  puVar7 = System_Numerics_BigIntegerCalculator_TypeInfo;
  puVar6 = Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_BerSequenceGenerator_TypeInfo;
  puVar4 = Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Anssi_AnssiNamedCurves_TypeInfo;
  puVar5 = UnityEngine_AnimatorControllerParameter_TypeInfo;
  puVar3 = UnityEngine_AnimationState_TypeInfo;
  puVar2 = PTR_DAT_0759b1c0;
  if (lVar9 != 0) {
    *(undefined8 *)(lVar9 + 0x10) =
         *(undefined8 *)Best_HTTP_SecureProtocol_Org_BouncyCastle_Math_BigInteger_TypeInfo;
    thunk_FUN_0329bf60();
    *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)puVar6;
    thunk_FUN_0329bf60();
    *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)puVar7;
    thunk_FUN_0329bf60();
    *(undefined8 *)(lVar9 + 0x38) = *(undefined8 *)puVar8;
    thunk_FUN_0329bf60();
    *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)puVar2;
    thunk_FUN_0329bf60();
    lVar10 = thunk_FUN_0322f148(*(undefined8 *)puVar4);
    FUN_047aec0c(lVar10,*(undefined8 *)puVar5);
    lVar11 = thunk_FUN_0322f148(*(undefined8 *)puVar3);
    FUN_06d70acc(lVar11,0);
    puVar2 = UnityEngine_Events_ArgumentCache_TypeInfo;
    if (lVar11 != 0) {
      *(undefined4 *)(lVar11 + 0x10) = 0x164;
      *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)puVar2;
      thunk_FUN_0329bf60();
      puVar2 = UnityEngine_Timeline_AnimationTrack_TypeInfo;
      if (lVar10 != 0) {
        lVar15 = *(long *)(lVar10 + 0x10);
        lVar16 = *(long *)UnityEngine_Timeline_AnimationTrack_TypeInfo;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar15 != 0) {
          uVar1 = *(uint *)(lVar10 + 0x18);
          if (uVar1 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
            plVar12 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
            *plVar12 = lVar11;
            thunk_FUN_0329bf60(plVar12,lVar11);
          }
          else {
            FUN_047af440(lVar10,lVar11,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          lVar11 = thunk_FUN_0322f148(*(undefined8 *)puVar3);
          FUN_06d70acc(lVar11,0);
          puVar3 = Oculus_Platform_Models_AppDownloadProgressResult_TypeInfo;
          if (lVar11 != 0) {
            *(undefined4 *)(lVar11 + 0x10) = 0x264;
            *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)puVar3;
            thunk_FUN_0329bf60();
            lVar15 = *(long *)(lVar10 + 0x10);
            lVar16 = *(long *)puVar2;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            puVar3 = 
            Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Anssi_AnssiObjectIdentifiers_TypeInfo;
            puVar2 = UnityEngine_Animator_TypeInfo;
            if (lVar15 != 0) {
              uVar1 = *(uint *)(lVar10 + 0x18);
              if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                plVar12 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                *plVar12 = lVar11;
                thunk_FUN_0329bf60(plVar12,lVar11);
              }
              else {
                FUN_047af440(lVar10,lVar11,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              *(long *)(lVar9 + 0x20) = lVar10;
              thunk_FUN_0329bf60((long *)(lVar9 + 0x20),lVar10);
              lVar10 = thunk_FUN_0322f148(*(undefined8 *)puVar3);
              FUN_047aec0c(lVar10,*(undefined8 *)puVar2);
              lVar11 = thunk_FUN_0322f148(*(undefined8 *)
                                           UnityEngine_Animations_AnimationScriptPlayable_TypeInfo);
              FUN_06d70ac4(lVar11,0);
              puVar5 = Oculus_Interaction_BestHoverInteractorGroup_TypeInfo;
              puVar3 = PTR_DAT_0759bc40;
              puVar2 = PTR_DAT_0759bc38;
              if (lVar11 != 0) {
                *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)PTR_DAT_07612590;
                thunk_FUN_0329bf60();
                *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)puVar5;
                thunk_FUN_0329bf60((undefined8 *)(lVar11 + 0x20));
                *(undefined4 *)(lVar11 + 0x18) = 0;
                lVar15 = thunk_FUN_0322f148(*(undefined8 *)puVar2);
                FUN_047aec0c(lVar15,*(undefined8 *)puVar3);
                puVar2 = PTR_DAT_0759bc60;
                if (lVar15 != 0) {
                  uVar14 = *(undefined8 *)System_Collections_Generic_IList<Attribute>_TypeInfo;
                  lVar16 = *(long *)(lVar15 + 0x10);
                  lVar17 = *(long *)PTR_DAT_0759bc60;
                  *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                  if (lVar16 != 0) {
                    uVar1 = *(uint *)(lVar15 + 0x18);
                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                      *(undefined8 *)(lVar16 + (long)(int)uVar1 * 8 + 0x20) = uVar14;
                      thunk_FUN_0329bf60();
                    }
                    else {
                      FUN_047af440(lVar15,uVar14,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                    }
                    *(long *)(lVar11 + 0x30) = lVar15;
                    thunk_FUN_0329bf60((long *)(lVar11 + 0x30),lVar15);
                    lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                 UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                               );
                    FUN_047aec0c(lVar15,*(undefined8 *)
                                         UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo)
                    ;
                    lVar16 = thunk_FUN_0322f148(*(undefined8 *)
                                                 UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                               );
                    FUN_06d70abc(lVar16,0);
                    if (lVar16 != 0) {
                      *(undefined8 *)(lVar16 + 0x18) =
                           *(undefined8 *)
                            Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_X500_AttributeTypeAndValue_TypeInfo
                      ;
                      thunk_FUN_0329bf60();
                      *(undefined8 *)(lVar16 + 0x10) =
                           *(undefined8 *)System_Numerics_BigIntegerCalculator_TypeInfo;
                      thunk_FUN_0329bf60();
                      puVar3 = UnityEngine_UI_AnimationTriggers_TypeInfo;
                      if (lVar15 != 0) {
                        lVar17 = *(long *)(lVar15 + 0x10);
                        lVar18 = *(long *)UnityEngine_UI_AnimationTriggers_TypeInfo;
                        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                        if (lVar17 != 0) {
                          uVar1 = *(uint *)(lVar15 + 0x18);
                          if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                            *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                            plVar12 = (long *)(lVar17 + (long)(int)uVar1 * 8 + 0x20);
                            *plVar12 = lVar16;
                            thunk_FUN_0329bf60(plVar12,lVar16);
                          }
                          else {
                            FUN_047af440(lVar15,lVar16,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                          }
                          *(long *)(lVar11 + 0x28) = lVar15;
                          thunk_FUN_0329bf60((long *)(lVar11 + 0x28),lVar15);
                          puVar5 = AnimationWire_TypeInfo;
                          if (lVar10 != 0) {
                            lVar15 = *(long *)AnimationWire_TypeInfo;
                            piVar19 = (int *)(lVar10 + 0x1c);
                            *piVar19 = *piVar19 + 1;
                            plVar12 = (long *)(lVar10 + 0x10);
                            lVar16 = *plVar12;
                            puVar20 = (uint *)(lVar10 + 0x18);
                            uVar1 = *puVar20;
                            if (lVar16 != 0) {
                              if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                *puVar20 = uVar1 + 1;
                                plVar13 = (long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar13 = lVar11;
                                thunk_FUN_0329bf60(plVar13,lVar11);
                              }
                              else {
                                FUN_047af440(lVar10,lVar11,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                              }
                              lVar11 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                      
                                                  UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                                  );
                              FUN_06d70ac4(lVar11,0);
                              puVar4 = 
                              Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_BerSet_TypeInfo;
                              if (lVar11 != 0) {
                                *(undefined8 *)(lVar11 + 0x10) =
                                     *(undefined8 *)
                                      Best_HTTP_SecureProtocol_Org_BouncyCastle_Utilities_BigIntegers_TypeInfo
                                ;
                                thunk_FUN_0329bf60();
                                *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)puVar4;
                                thunk_FUN_0329bf60((undefined8 *)(lVar11 + 0x20));
                                *(undefined4 *)(lVar11 + 0x18) = 0;
                                lVar15 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_0759bc38);
                                FUN_047aec0c(lVar15,*(undefined8 *)PTR_DAT_0759bc40);
                                if (lVar15 != 0) {
                                  lVar17 = *(long *)puVar2;
                                  uVar14 = *(undefined8 *)Mono_Math_BigInteger_TypeInfo;
                                  lVar16 = *(long *)(lVar15 + 0x10);
                                  *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                                  if (lVar16 != 0) {
                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                      *(undefined8 *)(lVar16 + (long)(int)uVar1 * 8 + 0x20) = uVar14
                                      ;
                                      thunk_FUN_0329bf60();
                                    }
                                    else {
                                      FUN_047af440(lVar15,uVar14,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar11 + 0x30) = lVar15;
                                    thunk_FUN_0329bf60((long *)(lVar11 + 0x30),lVar15);
                                    lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                  
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                    FUN_047aec0c(lVar15,*(undefined8 *)
                                                                                                                  
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                );
                                    lVar16 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                  
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                    FUN_06d70abc(lVar16,0);
                                    if (lVar16 != 0) {
                                      *(undefined8 *)(lVar16 + 0x18) =
                                           *(undefined8 *)
                                            Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_BerTaggedObjectParser_TypeInfo
                                      ;
                                      thunk_FUN_0329bf60();
                                      *(undefined8 *)(lVar16 + 0x10) =
                                           *(undefined8 *)
                                            System_Numerics_BigIntegerCalculator_TypeInfo;
                                      thunk_FUN_0329bf60();
                                      if (lVar15 != 0) {
                                        lVar17 = *(long *)(lVar15 + 0x10);
                                        lVar18 = *(long *)puVar3;
                                        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                                        if (lVar17 != 0) {
                                          uVar1 = *(uint *)(lVar15 + 0x18);
                                          if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                            *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                            plVar13 = (long *)(lVar17 + (long)(int)uVar1 * 8 + 0x20)
                                            ;
                                            *plVar13 = lVar16;
                                            thunk_FUN_0329bf60(plVar13,lVar16);
                                          }
                                          else {
                                            FUN_047af440(lVar15,lVar16,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          *(long *)(lVar11 + 0x28) = lVar15;
                                          thunk_FUN_0329bf60((long *)(lVar11 + 0x28),lVar15);
                                          lVar15 = *(long *)puVar5;
                                          *piVar19 = *piVar19 + 1;
                                          lVar16 = *plVar12;
                                          if (lVar16 != 0) {
                                            uVar1 = *puVar20;
                                            if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                              *puVar20 = uVar1 + 1;
                                              plVar13 = (long *)(lVar16 + (long)(int)uVar1 * 8 +
                                                                0x20);
                                              *plVar13 = lVar11;
                                              thunk_FUN_0329bf60(plVar13,lVar11);
                                            }
                                            else {
                                              FUN_047af440(lVar10,lVar11,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar15 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            lVar11 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                  
                                                  UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                                  );
                                            FUN_06d70ac4(lVar11,0);
                                            puVar4 = UnityEngine_InputSystem_AttitudeSensor_TypeInfo
                                            ;
                                            if (lVar11 != 0) {
                                              *(undefined8 *)(lVar11 + 0x10) =
                                                   *(undefined8 *)PTR_DAT_07621d60;
                                              thunk_FUN_0329bf60();
                                              *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)puVar4
                                              ;
                                              thunk_FUN_0329bf60((undefined8 *)(lVar11 + 0x20));
                                              *(undefined4 *)(lVar11 + 0x18) = 0;
                                              lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                           PTR_DAT_0759bc38);
                                              FUN_047aec0c(lVar15,*(undefined8 *)PTR_DAT_0759bc40);
                                              if (lVar15 != 0) {
                                                lVar17 = *(long *)puVar2;
                                                uVar14 = *(undefined8 *)
                                                                                                                    
                                                  System_Collections_Generic_IList<byte[]>_TypeInfo;
                                                lVar16 = *(long *)(lVar15 + 0x10);
                                                *(int *)(lVar15 + 0x1c) =
                                                     *(int *)(lVar15 + 0x1c) + 1;
                                                if (lVar16 != 0) {
                                                  uVar1 = *(uint *)(lVar15 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                    *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                    *(undefined8 *)
                                                     (lVar16 + (long)(int)uVar1 * 8 + 0x20) = uVar14
                                                    ;
                                                    thunk_FUN_0329bf60();
                                                  }
                                                  else {
                                                    FUN_047af440(lVar15,uVar14,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar17 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar15;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar16 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_06d70abc(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_X509_AttributeCertificate_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Numerics_BigIntegerCalculator_TypeInfo;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar3;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_0329bf60(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_047af440(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar15;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)puVar5;
                                                  *piVar19 = *piVar19 + 1;
                                                  lVar16 = *plVar12;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *puVar20;
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *puVar20 = uVar1 + 1;
                                                      plVar13 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar11;
                                                      thunk_FUN_0329bf60(plVar13,lVar11);
                                                    }
                                                    else {
                                                      FUN_047af440(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                                  );
                                                  FUN_06d70ac4(lVar11,0);
                                                  puVar4 = 
                                                  Unity_Services_Authentication_AuthenticationMetrics_TypeInfo
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07621dd8;
                                                    thunk_FUN_0329bf60();
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         *(undefined8 *)puVar4;
                                                    thunk_FUN_0329bf60((undefined8 *)(lVar11 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar11 + 0x18) = 0;
                                                    lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                 PTR_DAT_0759bc38);
                                                    FUN_047aec0c(lVar15,*(undefined8 *)
                                                                         PTR_DAT_0759bc40);
                                                    if (lVar15 != 0) {
                                                      lVar17 = *(long *)puVar2;
                                                      uVar14 = *(undefined8 *)
                                                                                                                                
                                                  System_Collections_Generic_IList<char>_TypeInfo;
                                                  lVar16 = *(long *)(lVar15 + 0x10);
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_0329bf60();
                                                    }
                                                    else {
                                                      FUN_047af440(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar15;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar16 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_06d70abc(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Data_AutoIncrementBigInteger_TypeInfo;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Numerics_BigIntegerCalculator_TypeInfo;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar3;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_0329bf60(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_047af440(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar15;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)puVar5;
                                                  *piVar19 = *piVar19 + 1;
                                                  lVar16 = *plVar12;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *puVar20;
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *puVar20 = uVar1 + 1;
                                                      plVar13 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar11;
                                                      thunk_FUN_0329bf60(plVar13,lVar11);
                                                    }
                                                    else {
                                                      FUN_047af440(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                                  );
                                                  FUN_06d70ac4(lVar11,0);
                                                  puVar4 = 
                                                  UnityEngine_Rendering_AttachmentDescriptor_TypeInfo
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07621d68;
                                                    thunk_FUN_0329bf60();
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         *(undefined8 *)puVar4;
                                                    thunk_FUN_0329bf60((undefined8 *)(lVar11 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar11 + 0x18) = 0;
                                                    lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                 PTR_DAT_0759bc38);
                                                    FUN_047aec0c(lVar15,*(undefined8 *)
                                                                         PTR_DAT_0759bc40);
                                                    if (lVar15 != 0) {
                                                      lVar17 = *(long *)puVar2;
                                                      uVar14 = *(undefined8 *)
                                                                                                                                
                                                  System_Collections_Generic_IList<bool>_TypeInfo;
                                                  lVar16 = *(long *)(lVar15 + 0x10);
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_0329bf60();
                                                    }
                                                    else {
                                                      FUN_047af440(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar15;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar16 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_06d70abc(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Cms_Attribute_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Numerics_BigIntegerCalculator_TypeInfo;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar3;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_0329bf60(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_047af440(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar15;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)puVar5;
                                                  *piVar19 = *piVar19 + 1;
                                                  lVar16 = *plVar12;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *puVar20;
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *puVar20 = uVar1 + 1;
                                                      plVar13 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar11;
                                                      thunk_FUN_0329bf60(plVar13,lVar11);
                                                    }
                                                    else {
                                                      FUN_047af440(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                                  );
                                                  FUN_06d70ac4(lVar11,0);
                                                  puVar4 = System_Threading_AutoResetEvent_TypeInfo;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07621dd0;
                                                    thunk_FUN_0329bf60();
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         *(undefined8 *)puVar4;
                                                    thunk_FUN_0329bf60((undefined8 *)(lVar11 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar11 + 0x18) = 0;
                                                    lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                 PTR_DAT_0759bc38);
                                                    FUN_047aec0c(lVar15,*(undefined8 *)
                                                                         PTR_DAT_0759bc40);
                                                    if (lVar15 != 0) {
                                                      lVar17 = *(long *)puVar2;
                                                      uVar14 = *(undefined8 *)
                                                                                                                                
                                                  System_Collections_Generic_IList<ArraySegment<byte>>_TypeInfo
                                                  ;
                                                  lVar16 = *(long *)(lVar15 + 0x10);
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_0329bf60();
                                                    }
                                                    else {
                                                      FUN_047af440(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar15;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar16 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_06d70abc(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Best_HTTP_Shared_PlatformSupport_Memory_AutoReleaseBuffer_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Numerics_BigIntegerCalculator_TypeInfo;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar3;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_0329bf60(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_047af440(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar15;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)puVar5;
                                                  *piVar19 = *piVar19 + 1;
                                                  lVar16 = *plVar12;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *puVar20;
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *puVar20 = uVar1 + 1;
                                                      plVar13 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar11;
                                                      thunk_FUN_0329bf60(plVar13,lVar11);
                                                    }
                                                    else {
                                                      FUN_047af440(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                                  );
                                                  FUN_06d70ac4(lVar11,0);
                                                  puVar4 = PTR_DAT_075ff118;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07621d28;
                                                    thunk_FUN_0329bf60();
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         *(undefined8 *)puVar4;
                                                    thunk_FUN_0329bf60((undefined8 *)(lVar11 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar11 + 0x18) = 1;
                                                    lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                 PTR_DAT_0759bc38);
                                                    FUN_047aec0c(lVar15,*(undefined8 *)
                                                                         PTR_DAT_0759bc40);
                                                    if (lVar15 != 0) {
                                                      uVar14 = *(undefined8 *)puVar4;
                                                      lVar16 = *(long *)(lVar15 + 0x10);
                                                      lVar17 = *(long *)puVar2;
                                                      *(int *)(lVar15 + 0x1c) =
                                                           *(int *)(lVar15 + 0x1c) + 1;
                                                      if (lVar16 != 0) {
                                                        uVar1 = *(uint *)(lVar15 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                          *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar14;
                                                          thunk_FUN_0329bf60();
                                                        }
                                                        else {
                                                          FUN_047af440(lVar15,uVar14,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar17 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar15;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar16 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_06d70abc(lVar16,0);
                                                  puVar4 = 
                                                  Mono_Net_Security_AsyncWriteRequest_TypeInfo;
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Mono_Net_Security_AsyncWriteRequest_TypeInfo;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Numerics_BigIntegerCalculator_TypeInfo;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar3;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_0329bf60(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_047af440(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar15;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)puVar5;
                                                  *piVar19 = *piVar19 + 1;
                                                  lVar16 = *plVar12;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *puVar20;
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *puVar20 = uVar1 + 1;
                                                      plVar13 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar11;
                                                      thunk_FUN_0329bf60(plVar13,lVar11);
                                                    }
                                                    else {
                                                      FUN_047af440(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                                  );
                                                  FUN_06d70ac4(lVar11,0);
                                                  puVar6 = 
                                                  UnityEngine_Rendering_AttachmentIndexArray_TypeInfo
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07621d08;
                                                    thunk_FUN_0329bf60();
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         *(undefined8 *)puVar6;
                                                    thunk_FUN_0329bf60((undefined8 *)(lVar11 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar11 + 0x18) = 0;
                                                    lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                 PTR_DAT_0759bc38);
                                                    FUN_047aec0c(lVar15,*(undefined8 *)
                                                                         PTR_DAT_0759bc40);
                                                    if (lVar15 != 0) {
                                                      lVar17 = *(long *)puVar2;
                                                      uVar14 = *(undefined8 *)
                                                                                                                                
                                                  System_Collections_Generic_IList<Vector2[]>_TypeInfo
                                                  ;
                                                  lVar16 = *(long *)(lVar15 + 0x10);
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_0329bf60();
                                                    }
                                                    else {
                                                      FUN_047af440(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar15;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar16 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_06d70abc(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)puVar4;
                                                    thunk_FUN_0329bf60();
                                                    *(undefined8 *)(lVar16 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Numerics_BigIntegerCalculator_TypeInfo;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar3;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_0329bf60(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_047af440(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar15;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)puVar5;
                                                  *piVar19 = *piVar19 + 1;
                                                  lVar16 = *plVar12;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *puVar20;
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *puVar20 = uVar1 + 1;
                                                      plVar13 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar11;
                                                      thunk_FUN_0329bf60(plVar13,lVar11);
                                                    }
                                                    else {
                                                      FUN_047af440(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                                  );
                                                  FUN_06d70ac4(lVar11,0);
                                                  puVar4 = 
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_BerTaggedObject_TypeInfo
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_BerSetGenerator_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_0329bf60((undefined8 *)(lVar11 + 0x20));
                                                  *(undefined4 *)(lVar11 + 0x18) = 1;
                                                  lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                               PTR_DAT_0759bc38);
                                                  FUN_047aec0c(lVar15,*(undefined8 *)
                                                                       PTR_DAT_0759bc40);
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)puVar2;
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_BerSetParser_TypeInfo
                                                  ;
                                                  lVar16 = *(long *)(lVar15 + 0x10);
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_0329bf60();
                                                    }
                                                    else {
                                                      FUN_047af440(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar15;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar16 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_06d70abc(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Data_Common_BigIntegerStorage_TypeInfo;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Numerics_BigIntegerCalculator_TypeInfo;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar3;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_0329bf60(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_047af440(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar15;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)puVar5;
                                                  *piVar19 = *piVar19 + 1;
                                                  lVar16 = *plVar12;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *puVar20;
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *puVar20 = uVar1 + 1;
                                                      plVar13 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar11;
                                                      thunk_FUN_0329bf60(plVar13,lVar11);
                                                    }
                                                    else {
                                                      FUN_047af440(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                                  );
                                                  FUN_06d70ac4(lVar11,0);
                                                  puVar4 = PTR_DAT_075ff120;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07621d40;
                                                    thunk_FUN_0329bf60();
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         *(undefined8 *)puVar4;
                                                    thunk_FUN_0329bf60((undefined8 *)(lVar11 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar11 + 0x18) = 1;
                                                    lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                 PTR_DAT_0759bc38);
                                                    FUN_047aec0c(lVar15,*(undefined8 *)
                                                                         PTR_DAT_0759bc40);
                                                    if (lVar15 != 0) {
                                                      uVar14 = *(undefined8 *)puVar4;
                                                      lVar16 = *(long *)(lVar15 + 0x10);
                                                      lVar17 = *(long *)puVar2;
                                                      *(int *)(lVar15 + 0x1c) =
                                                           *(int *)(lVar15 + 0x1c) + 1;
                                                      if (lVar16 != 0) {
                                                        uVar1 = *(uint *)(lVar15 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                          *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar14;
                                                          thunk_FUN_0329bf60();
                                                        }
                                                        else {
                                                          FUN_047af440(lVar15,uVar14,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar17 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar15;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar16 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_06d70abc(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_X509_AttributeCertificateHolder_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Numerics_BigIntegerCalculator_TypeInfo;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar3;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_0329bf60(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_047af440(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar15;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)puVar5;
                                                  *piVar19 = *piVar19 + 1;
                                                  lVar16 = *plVar12;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *puVar20;
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *puVar20 = uVar1 + 1;
                                                      plVar13 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar11;
                                                      thunk_FUN_0329bf60(plVar13,lVar11);
                                                    }
                                                    else {
                                                      FUN_047af440(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                                  );
                                                  FUN_06d70ac4(lVar11,0);
                                                  puVar4 = System_Numerics_BigInteger_TypeInfo;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07621d38;
                                                    thunk_FUN_0329bf60();
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         *(undefined8 *)puVar4;
                                                    thunk_FUN_0329bf60((undefined8 *)(lVar11 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar11 + 0x18) = 0;
                                                    lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                 PTR_DAT_0759bc38);
                                                    FUN_047aec0c(lVar15,*(undefined8 *)
                                                                         PTR_DAT_0759bc40);
                                                    if (lVar15 != 0) {
                                                      lVar17 = *(long *)puVar2;
                                                      uVar14 = *(undefined8 *)
                                                                                                                                
                                                  System_Collections_Generic_IList<ValueTuple<RTHandle,_int>>_TypeInfo
                                                  ;
                                                  lVar16 = *(long *)(lVar15 + 0x10);
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_0329bf60();
                                                    }
                                                    else {
                                                      FUN_047af440(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar15;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar16 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_06d70abc(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Photon_Voice_AudioInChangeNotifierNotSupported_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Numerics_BigIntegerCalculator_TypeInfo;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar3;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_0329bf60(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_047af440(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar15;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)puVar5;
                                                  *piVar19 = *piVar19 + 1;
                                                  lVar16 = *plVar12;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *puVar20;
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *puVar20 = uVar1 + 1;
                                                      plVar13 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar11;
                                                      thunk_FUN_0329bf60(plVar13,lVar11);
                                                    }
                                                    else {
                                                      FUN_047af440(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                                  );
                                                  FUN_06d70ac4(lVar11,0);
                                                  puVar4 = 
                                                  UnityEngine_InputSystem_Controls_AxisControl_TypeInfo
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07621dc8;
                                                    thunk_FUN_0329bf60();
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         *(undefined8 *)puVar4;
                                                    thunk_FUN_0329bf60((undefined8 *)(lVar11 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar11 + 0x18) = 0;
                                                    lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                 PTR_DAT_0759bc38);
                                                    FUN_047aec0c(lVar15,*(undefined8 *)
                                                                         PTR_DAT_0759bc40);
                                                    if (lVar15 != 0) {
                                                      lVar17 = *(long *)puVar2;
                                                      uVar14 = *(undefined8 *)
                                                                                                                                
                                                  Unity_Services_Authentication_AuthenticationExceptionHandler_TypeInfo
                                                  ;
                                                  lVar16 = *(long *)(lVar15 + 0x10);
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_0329bf60();
                                                    }
                                                    else {
                                                      FUN_047af440(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar15;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar16 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_06d70abc(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Fusion_Photon_Realtime_Async_AuthenticationFailedException_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Numerics_BigIntegerCalculator_TypeInfo;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar3;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_0329bf60(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_047af440(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar15;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)puVar5;
                                                  *piVar19 = *piVar19 + 1;
                                                  lVar16 = *plVar12;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *puVar20;
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *puVar20 = uVar1 + 1;
                                                      plVar13 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar11;
                                                      thunk_FUN_0329bf60(plVar13,lVar11);
                                                    }
                                                    else {
                                                      FUN_047af440(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                                  );
                                                  FUN_06d70ac4(lVar11,0);
                                                  puVar4 = 
                                                  System_Collections_Generic_IEnumerator<PaintReceiverTC>_TypeInfo
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_075fbb60;
                                                    thunk_FUN_0329bf60();
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         *(undefined8 *)puVar4;
                                                    thunk_FUN_0329bf60((undefined8 *)(lVar11 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar11 + 0x18) = 2;
                                                    lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                 PTR_DAT_0759bc38);
                                                    FUN_047aec0c(lVar15,*(undefined8 *)
                                                                         PTR_DAT_0759bc40);
                                                    if (lVar15 != 0) {
                                                      lVar17 = *(long *)puVar2;
                                                      uVar14 = *(undefined8 *)
                                                                                                                                
                                                  System_Collections_Generic_IList<KeyValuePair<string,_JsonData>>_TypeInfo
                                                  ;
                                                  lVar16 = *(long *)(lVar15 + 0x10);
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_0329bf60();
                                                    }
                                                    else {
                                                      FUN_047af440(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar15;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar16 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_06d70abc(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Attachment_AttachPointVelocityTracker_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Numerics_BigIntegerCalculator_TypeInfo;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar3;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_0329bf60(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_047af440(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar15;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)puVar5;
                                                  *piVar19 = *piVar19 + 1;
                                                  lVar16 = *plVar12;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *puVar20;
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *puVar20 = uVar1 + 1;
                                                      plVar13 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar11;
                                                      thunk_FUN_0329bf60(plVar13,lVar11);
                                                    }
                                                    else {
                                                      FUN_047af440(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                                  );
                                                  FUN_06d70ac4(lVar11,0);
                                                  puVar4 = 
                                                  UnityEngine_ResourceManagement_ResourceProviders_AtlasSpriteProvider_TypeInfo
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07621d78;
                                                    thunk_FUN_0329bf60();
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         *(undefined8 *)puVar4;
                                                    thunk_FUN_0329bf60((undefined8 *)(lVar11 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar11 + 0x18) = 0;
                                                    lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                 PTR_DAT_0759bc38);
                                                    FUN_047aec0c(lVar15,*(undefined8 *)
                                                                         PTR_DAT_0759bc40);
                                                    if (lVar15 != 0) {
                                                      lVar17 = *(long *)puVar2;
                                                      uVar14 = *(undefined8 *)
                                                                                                                                
                                                  System_Collections_Generic_IList<AttributeX509>_TypeInfo
                                                  ;
                                                  lVar16 = *(long *)(lVar15 + 0x10);
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_0329bf60();
                                                    }
                                                    else {
                                                      FUN_047af440(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar15;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar16 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_06d70abc(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_X509_AttCertIssuer_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Numerics_BigIntegerCalculator_TypeInfo;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar3;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_0329bf60(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_047af440(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar15;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)puVar5;
                                                  *piVar19 = *piVar19 + 1;
                                                  lVar16 = *plVar12;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *puVar20;
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *puVar20 = uVar1 + 1;
                                                      plVar13 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar11;
                                                      thunk_FUN_0329bf60(plVar13,lVar11);
                                                    }
                                                    else {
                                                      FUN_047af440(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                                  );
                                                  FUN_06d70ac4(lVar11,0);
                                                  puVar4 = 
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_X509_AuthorityInformationAccess_TypeInfo
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07621d70;
                                                    thunk_FUN_0329bf60();
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         *(undefined8 *)puVar4;
                                                    thunk_FUN_0329bf60((undefined8 *)(lVar11 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar11 + 0x18) = 0;
                                                    lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                 PTR_DAT_0759bc38);
                                                    FUN_047aec0c(lVar15,*(undefined8 *)
                                                                         PTR_DAT_0759bc40);
                                                    if (lVar15 != 0) {
                                                      lVar17 = *(long *)puVar2;
                                                      uVar14 = *(undefined8 *)
                                                                                                                                
                                                  System_Collections_Generic_IList<BigInteger>_TypeInfo
                                                  ;
                                                  lVar16 = *(long *)(lVar15 + 0x10);
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_0329bf60();
                                                    }
                                                    else {
                                                      FUN_047af440(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar15;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar16 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_06d70abc(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                          System_Net_AuthenticationManager_TypeInfo;
                                                    thunk_FUN_0329bf60();
                                                    *(undefined8 *)(lVar16 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Numerics_BigIntegerCalculator_TypeInfo;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar3;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_0329bf60(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_047af440(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar15;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)puVar5;
                                                  *piVar19 = *piVar19 + 1;
                                                  lVar16 = *plVar12;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *puVar20;
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *puVar20 = uVar1 + 1;
                                                      plVar13 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar11;
                                                      thunk_FUN_0329bf60(plVar13,lVar11);
                                                    }
                                                    else {
                                                      FUN_047af440(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                                  );
                                                  FUN_06d70ac4(lVar11,0);
                                                  puVar4 = 
                                                  Photon_Voice_Unity_AudioClipWrapper_TypeInfo;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07621d58;
                                                    thunk_FUN_0329bf60();
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         *(undefined8 *)puVar4;
                                                    thunk_FUN_0329bf60((undefined8 *)(lVar11 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar11 + 0x18) = 2;
                                                    lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                 PTR_DAT_0759bc38);
                                                    FUN_047aec0c(lVar15,*(undefined8 *)
                                                                         PTR_DAT_0759bc40);
                                                    if (lVar15 != 0) {
                                                      lVar17 = *(long *)puVar2;
                                                      uVar14 = *(undefined8 *)
                                                                                                                                
                                                  System_Collections_Generic_IList<AsyncOperationHandle>_TypeInfo
                                                  ;
                                                  lVar16 = *(long *)(lVar15 + 0x10);
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_0329bf60();
                                                    }
                                                    else {
                                                      FUN_047af440(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar15;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar16 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_06d70abc(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Unity_VisualScripting_AttributeUtility_TypeInfo;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Numerics_BigIntegerCalculator_TypeInfo;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar3;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_0329bf60(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_047af440(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar15;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)puVar5;
                                                  *piVar19 = *piVar19 + 1;
                                                  lVar16 = *plVar12;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *puVar20;
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *puVar20 = uVar1 + 1;
                                                      plVar13 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar11;
                                                      thunk_FUN_0329bf60(plVar13,lVar11);
                                                    }
                                                    else {
                                                      FUN_047af440(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                                  );
                                                  FUN_06d70ac4(lVar11,0);
                                                  puVar4 = 
                                                  Oculus_Interaction_BestSelectInteractorGroup_TypeInfo
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_UIR_BestFitAllocator_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_0329bf60((undefined8 *)(lVar11 + 0x20));
                                                  *(undefined4 *)(lVar11 + 0x18) = 1;
                                                  lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                               PTR_DAT_0759bc38);
                                                  FUN_047aec0c(lVar15,*(undefined8 *)
                                                                       PTR_DAT_0759bc40);
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)puVar2;
                                                    uVar14 = *(undefined8 *)
                                                              Mono_Math_BigInteger_TypeInfo;
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar14;
                                                        thunk_FUN_0329bf60();
                                                      }
                                                      else {
                                                        FUN_047af440(lVar15,uVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar15;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar16 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_06d70abc(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)MyBox_Billboard_TypeInfo;
                                                    thunk_FUN_0329bf60();
                                                    *(undefined8 *)(lVar16 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Numerics_BigIntegerCalculator_TypeInfo;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar3;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_0329bf60(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_047af440(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar15;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)puVar5;
                                                  *piVar19 = *piVar19 + 1;
                                                  lVar16 = *plVar12;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *puVar20;
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *puVar20 = uVar1 + 1;
                                                      plVar13 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar11;
                                                      thunk_FUN_0329bf60(plVar13,lVar11);
                                                    }
                                                    else {
                                                      FUN_047af440(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                                  );
                                                  FUN_06d70ac4(lVar11,0);
                                                  puVar4 = System_AttributeUsageAttribute_TypeInfo;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07621d50;
                                                    thunk_FUN_0329bf60();
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         *(undefined8 *)puVar4;
                                                    thunk_FUN_0329bf60((undefined8 *)(lVar11 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar11 + 0x18) = 0;
                                                    lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                 PTR_DAT_0759bc38);
                                                    FUN_047aec0c(lVar15,*(undefined8 *)
                                                                         PTR_DAT_0759bc40);
                                                    if (lVar15 != 0) {
                                                      lVar17 = *(long *)puVar2;
                                                      uVar14 = *(undefined8 *)
                                                                                                                                
                                                  Unity_VisualScripting_IKeyedCollection<string,_ValueOutput>_TypeInfo
                                                  ;
                                                  lVar16 = *(long *)(lVar15 + 0x10);
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_0329bf60();
                                                    }
                                                    else {
                                                      FUN_047af440(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar15;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar16 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_06d70abc(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Photon_Voice_IOS_AudioSessionCategory_TypeInfo;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Numerics_BigIntegerCalculator_TypeInfo;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar3;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_0329bf60(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_047af440(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar15;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)puVar5;
                                                  *piVar19 = *piVar19 + 1;
                                                  lVar16 = *plVar12;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *puVar20;
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *puVar20 = uVar1 + 1;
                                                      plVar13 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar11;
                                                      thunk_FUN_0329bf60(plVar13,lVar11);
                                                    }
                                                    else {
                                                      FUN_047af440(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                                  );
                                                  FUN_06d70ac4(lVar11,0);
                                                  puVar4 = 
                                                  System_Security_Cryptography_AsnEncodedData_TypeInfo
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1TaggedObjectParser_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_0329bf60((undefined8 *)(lVar11 + 0x20));
                                                  *(undefined4 *)(lVar11 + 0x18) = 3;
                                                  lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                               PTR_DAT_0759bc38);
                                                  FUN_047aec0c(lVar15,*(undefined8 *)
                                                                       PTR_DAT_0759bc40);
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)puVar2;
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1OctetStringParser_TypeInfo
                                                  ;
                                                  lVar16 = *(long *)(lVar15 + 0x10);
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_0329bf60();
                                                    }
                                                    else {
                                                      FUN_047af440(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar15;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar16 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_06d70abc(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Configuration_Assemblies_AssemblyHashAlgorithm_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Numerics_BigIntegerCalculator_TypeInfo;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar3;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_0329bf60(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_047af440(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar15;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)puVar5;
                                                  *piVar19 = *piVar19 + 1;
                                                  lVar16 = *plVar12;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *puVar20;
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *puVar20 = uVar1 + 1;
                                                      plVar13 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar11;
                                                      thunk_FUN_0329bf60(plVar13,lVar11);
                                                    }
                                                    else {
                                                      FUN_047af440(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                                  );
                                                  FUN_06d70ac4(lVar11,0);
                                                  puVar4 = 
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1StreamParser_TypeInfo
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_075eb090;
                                                    thunk_FUN_0329bf60();
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         *(undefined8 *)puVar4;
                                                    thunk_FUN_0329bf60((undefined8 *)(lVar11 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar11 + 0x18) = 3;
                                                    lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                 PTR_DAT_0759bc38);
                                                    FUN_047aec0c(lVar15,*(undefined8 *)
                                                                         PTR_DAT_0759bc40);
                                                    if (lVar15 != 0) {
                                                      lVar17 = *(long *)puVar2;
                                                      uVar14 = *(undefined8 *)PTR_DAT_076257f0;
                                                      lVar16 = *(long *)(lVar15 + 0x10);
                                                      *(int *)(lVar15 + 0x1c) =
                                                           *(int *)(lVar15 + 0x1c) + 1;
                                                      if (lVar16 != 0) {
                                                        uVar1 = *(uint *)(lVar15 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                          *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar14;
                                                          thunk_FUN_0329bf60();
                                                        }
                                                        else {
                                                          FUN_047af440(lVar15,uVar14,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar17 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar15;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar16 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_06d70abc(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Operators_Asn1VerifierFactory_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Numerics_BigIntegerCalculator_TypeInfo;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar3;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_0329bf60(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_047af440(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar15;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)puVar5;
                                                  *piVar19 = *piVar19 + 1;
                                                  lVar16 = *plVar12;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *puVar20;
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *puVar20 = uVar1 + 1;
                                                      plVar13 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar11;
                                                      thunk_FUN_0329bf60(plVar13,lVar11);
                                                    }
                                                    else {
                                                      FUN_047af440(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                                  );
                                                  FUN_06d70ac4(lVar11,0);
                                                  puVar4 = 
                                                  UnityEngine_UIElements_AttachToPanelEvent_TypeInfo
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Runtime_Serialization_AttributeData_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_0329bf60((undefined8 *)(lVar11 + 0x20));
                                                  *(undefined4 *)(lVar11 + 0x18) = 4;
                                                  lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                               PTR_DAT_0759bc38);
                                                  FUN_047aec0c(lVar15,*(undefined8 *)
                                                                       PTR_DAT_0759bc40);
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)puVar2;
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_Events_UnityEvent<SpriteRenderer>_TypeInfo
                                                  ;
                                                  lVar16 = *(long *)(lVar15 + 0x10);
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_0329bf60();
                                                    }
                                                    else {
                                                      FUN_047af440(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar15;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar16 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_06d70abc(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_AtlasAllocator_TypeInfo;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Numerics_BigIntegerCalculator_TypeInfo;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar3;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_0329bf60(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_047af440(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar15;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)puVar5;
                                                  *piVar19 = *piVar19 + 1;
                                                  lVar16 = *plVar12;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *puVar20;
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *puVar20 = uVar1 + 1;
                                                      plVar12 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_0329bf60(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_047af440(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar10;
                                                  thunk_FUN_0329bf60((long *)(lVar9 + 0x28),lVar10);
                                                  FUN_06d70888(param_1,lVar9,0);
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
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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
  FUN_031f2390();
}


