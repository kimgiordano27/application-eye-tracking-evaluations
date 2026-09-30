/*
FUNCTION_NAME: FUN_06d8bf10
ENTRY_POINT: 06d8bf10
PROGRAM: vandalizer-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3
*/


void FUN_06d8bf10(undefined8 param_1)

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
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  puVar2 = UnityEngine_Animations_AnimationPosePlayable_TypeInfo;
  if ((DAT_07a5173c & 1) == 0) {
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
    FUN_031f20f4(PTR_DAT_07624110);
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1StreamParser_TypeInfo);
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_Crypto_Impl_BC_BcTlsDHDomain_TypeInfo
                );
    FUN_031f20f4(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_Crypto_Impl_BC_BcTlsDsaVerifier_TypeInfo
                );
    FUN_031f20f4(PTR_DAT_075eb090);
    FUN_031f20f4(Mono_Net_Security_AsyncWriteRequest_TypeInfo);
    FUN_031f20f4(
                UnityEngine_XR_ARFoundation_VisualScripting_GetTrackablesUnit<ARTrackedObjectManager,_XRObjectTrackingSubsystem,_XRObjectTrackingSubsystemDescriptor,_XRObjectTrackingSubsystem_Provider,_XRTrackedObject,_ARTrackedObject>_TypeInfo
                );
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_Crypto_Impl_BC_BcTlsECDH_TypeInfo);
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_Crypto_Impl_BC_BcTlsECDomain_TypeInfo
                );
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1TaggedObjectParser_TypeInfo);
    FUN_031f20f4(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Operators_Asn1VerifierFactory_TypeInfo
                );
    FUN_031f20f4(Oculus_Platform_Models_AppDownloadProgressResult_TypeInfo);
    FUN_031f20f4(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_Crypto_Impl_BC_BcTlsECDsa13Signer_TypeInfo
                );
    FUN_031f20f4(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_Crypto_Impl_BC_BcTlsECDsaSigner_TypeInfo
                );
    FUN_031f20f4(PTR_DAT_076257f0);
    FUN_031f20f4(System_Security_Cryptography_AsnEncodedData_TypeInfo);
    FUN_031f20f4(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_Crypto_Impl_BC_BcTlsECDsaVerifier_TypeInfo
                );
    FUN_031f20f4(System_Collections_Generic_IList<byte[]>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_IList<Vector2[]>_TypeInfo);
    FUN_031f20f4(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_Crypto_Impl_BC_BcTlsEd25519Signer_TypeInfo
                );
    FUN_031f20f4(PTR_DAT_075ff118);
    FUN_031f20f4(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_Crypto_Impl_BC_BcTlsEd448Signer_TypeInfo
                );
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_Crypto_Impl_BC_BcTlsHash_TypeInfo);
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_Crypto_Impl_BC_BcTlsHmac_TypeInfo);
    FUN_031f20f4(PTR_DAT_0759b1c0);
    FUN_031f20f4(UnityEngine_Events_ArgumentCache_TypeInfo);
    FUN_031f20f4(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_Crypto_Impl_BC_BcTlsNonceGenerator_TypeInfo
                );
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1OctetStringParser_TypeInfo);
    FUN_031f20f4(System_Configuration_Assemblies_AssemblyHashAlgorithm_TypeInfo);
    DAT_07a5173c = 1;
  }
  lVar9 = thunk_FUN_0322f148(*(undefined8 *)puVar2);
  FUN_06d70ad4(lVar9,0);
  puVar8 = Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_Crypto_Impl_BC_BcTlsNonceGenerator_TypeInfo
  ;
  puVar6 = Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_Crypto_Impl_BC_BcTlsECDsaSigner_TypeInfo;
  puVar5 = Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_Crypto_Impl_BC_BcTlsDHDomain_TypeInfo;
  puVar7 = Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Anssi_AnssiNamedCurves_TypeInfo;
  puVar4 = UnityEngine_AnimatorControllerParameter_TypeInfo;
  puVar3 = UnityEngine_AnimationState_TypeInfo;
  puVar2 = PTR_DAT_0759b1c0;
  if (lVar9 != 0) {
    *(undefined8 *)(lVar9 + 0x10) =
         *(undefined8 *)
          Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_Crypto_Impl_BC_BcTlsEd25519Signer_TypeInfo;
    thunk_FUN_0329bf60();
    *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)puVar5;
    thunk_FUN_0329bf60();
    *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)puVar6;
    thunk_FUN_0329bf60();
    *(undefined8 *)(lVar9 + 0x38) = *(undefined8 *)puVar8;
    thunk_FUN_0329bf60();
    *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)puVar2;
    thunk_FUN_0329bf60();
    lVar10 = thunk_FUN_0322f148(*(undefined8 *)puVar7);
    FUN_047aec0c(lVar10,*(undefined8 *)puVar4);
    lVar11 = thunk_FUN_0322f148(*(undefined8 *)puVar3);
    FUN_06d70acc(lVar11,0);
    puVar2 = UnityEngine_Events_ArgumentCache_TypeInfo;
    if (lVar11 != 0) {
      *(undefined4 *)(lVar11 + 0x10) = 0x16c;
      *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)puVar2;
      thunk_FUN_0329bf60();
      puVar2 = UnityEngine_Timeline_AnimationTrack_TypeInfo;
      if (lVar10 != 0) {
        lVar14 = *(long *)(lVar10 + 0x10);
        lVar15 = *(long *)UnityEngine_Timeline_AnimationTrack_TypeInfo;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar14 != 0) {
          uVar1 = *(uint *)(lVar10 + 0x18);
          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
            plVar12 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
            *plVar12 = lVar11;
            thunk_FUN_0329bf60(plVar12,lVar11);
          }
          else {
            FUN_047af440(lVar10,lVar11,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
          lVar11 = thunk_FUN_0322f148(*(undefined8 *)puVar3);
          FUN_06d70acc(lVar11,0);
          puVar3 = Oculus_Platform_Models_AppDownloadProgressResult_TypeInfo;
          if (lVar11 != 0) {
            *(undefined4 *)(lVar11 + 0x10) = 0x26c;
            *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)puVar3;
            thunk_FUN_0329bf60();
            lVar14 = *(long *)(lVar10 + 0x10);
            lVar15 = *(long *)puVar2;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            puVar3 = 
            Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Anssi_AnssiObjectIdentifiers_TypeInfo;
            puVar2 = UnityEngine_Animator_TypeInfo;
            if (lVar14 != 0) {
              uVar1 = *(uint *)(lVar10 + 0x18);
              if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                plVar12 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                *plVar12 = lVar11;
                thunk_FUN_0329bf60(plVar12,lVar11);
              }
              else {
                FUN_047af440(lVar10,lVar11,
                             *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
              *(long *)(lVar9 + 0x20) = lVar10;
              thunk_FUN_0329bf60((long *)(lVar9 + 0x20),lVar10);
              lVar10 = thunk_FUN_0322f148(*(undefined8 *)puVar3);
              FUN_047aec0c(lVar10,*(undefined8 *)puVar2);
              lVar11 = thunk_FUN_0322f148(*(undefined8 *)
                                           UnityEngine_Animations_AnimationScriptPlayable_TypeInfo);
              FUN_06d70ac4(lVar11,0);
              puVar4 = 
              UnityEngine_XR_ARFoundation_VisualScripting_GetTrackablesUnit<ARTrackedObjectManager,_XRObjectTrackingSubsystem,_XRObjectTrackingSubsystemDescriptor,_XRObjectTrackingSubsystem_Provider,_XRTrackedObject,_ARTrackedObject>_TypeInfo
              ;
              puVar3 = PTR_DAT_0759bc40;
              puVar2 = PTR_DAT_0759bc38;
              if (lVar11 != 0) {
                *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)PTR_DAT_07624110;
                thunk_FUN_0329bf60();
                *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)puVar4;
                thunk_FUN_0329bf60((undefined8 *)(lVar11 + 0x20));
                *(undefined4 *)(lVar11 + 0x18) = 1;
                lVar14 = thunk_FUN_0322f148(*(undefined8 *)puVar2);
                FUN_047aec0c(lVar14,*(undefined8 *)puVar3);
                puVar4 = PTR_DAT_0759bc60;
                if (lVar14 != 0) {
                  uVar13 = *(undefined8 *)
                            Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_Crypto_Impl_BC_BcTlsECDomain_TypeInfo
                  ;
                  lVar15 = *(long *)(lVar14 + 0x10);
                  lVar16 = *(long *)PTR_DAT_0759bc60;
                  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                  if (lVar15 != 0) {
                    uVar1 = *(uint *)(lVar14 + 0x18);
                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                      *(undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = uVar13;
                      thunk_FUN_0329bf60();
                    }
                    else {
                      FUN_047af440(lVar14,uVar13,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                    }
                    *(long *)(lVar11 + 0x30) = lVar14;
                    thunk_FUN_0329bf60((long *)(lVar11 + 0x30),lVar14);
                    lVar14 = thunk_FUN_0322f148(*(undefined8 *)
                                                 UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                               );
                    FUN_047aec0c(lVar14,*(undefined8 *)
                                         UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo)
                    ;
                    lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                 UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                               );
                    FUN_06d70abc(lVar15,0);
                    puVar7 = 
                    Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_Crypto_Impl_BC_BcTlsECDsa13Signer_TypeInfo
                    ;
                    if (lVar15 != 0) {
                      *(undefined8 *)(lVar15 + 0x18) =
                           *(undefined8 *)
                            Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_Crypto_Impl_BC_BcTlsECDsa13Signer_TypeInfo
                      ;
                      thunk_FUN_0329bf60();
                      *(undefined8 *)(lVar15 + 0x10) =
                           *(undefined8 *)
                            Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_Crypto_Impl_BC_BcTlsECDsaSigner_TypeInfo
                      ;
                      thunk_FUN_0329bf60();
                      puVar5 = UnityEngine_UI_AnimationTriggers_TypeInfo;
                      if (lVar14 != 0) {
                        lVar16 = *(long *)(lVar14 + 0x10);
                        lVar17 = *(long *)UnityEngine_UI_AnimationTriggers_TypeInfo;
                        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                        if (lVar16 != 0) {
                          uVar1 = *(uint *)(lVar14 + 0x18);
                          if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                            *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                            plVar12 = (long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
                            *plVar12 = lVar15;
                            thunk_FUN_0329bf60(plVar12,lVar15);
                          }
                          else {
                            FUN_047af440(lVar14,lVar15,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                          }
                          *(long *)(lVar11 + 0x28) = lVar14;
                          thunk_FUN_0329bf60((long *)(lVar11 + 0x28),lVar14);
                          puVar6 = AnimationWire_TypeInfo;
                          if (lVar10 != 0) {
                            lVar14 = *(long *)(lVar10 + 0x10);
                            lVar15 = *(long *)AnimationWire_TypeInfo;
                            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                            if (lVar14 != 0) {
                              uVar1 = *(uint *)(lVar10 + 0x18);
                              if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                plVar12 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar12 = lVar11;
                                thunk_FUN_0329bf60(plVar12,lVar11);
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
                              puVar8 = 
                              Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_Crypto_Impl_BC_BcTlsECDsaVerifier_TypeInfo
                              ;
                              if (lVar11 != 0) {
                                *(undefined8 *)(lVar11 + 0x10) =
                                     *(undefined8 *)
                                      Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_Crypto_Impl_BC_BcTlsECDH_TypeInfo
                                ;
                                thunk_FUN_0329bf60();
                                *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)puVar8;
                                thunk_FUN_0329bf60((undefined8 *)(lVar11 + 0x20));
                                *(undefined4 *)(lVar11 + 0x18) = 0;
                                lVar14 = thunk_FUN_0322f148(*(undefined8 *)puVar2);
                                FUN_047aec0c(lVar14,*(undefined8 *)puVar3);
                                if (lVar14 != 0) {
                                  lVar16 = *(long *)puVar4;
                                  uVar13 = *(undefined8 *)
                                            System_Collections_Generic_IList<byte[]>_TypeInfo;
                                  lVar15 = *(long *)(lVar14 + 0x10);
                                  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                                  if (lVar15 != 0) {
                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                      *(undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = uVar13
                                      ;
                                      thunk_FUN_0329bf60();
                                    }
                                    else {
                                      FUN_047af440(lVar14,uVar13,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar11 + 0x30) = lVar14;
                                    thunk_FUN_0329bf60((long *)(lVar11 + 0x30),lVar14);
                                    lVar14 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                  
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                    FUN_047aec0c(lVar14,*(undefined8 *)
                                                                                                                  
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                );
                                    lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                  
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                    FUN_06d70abc(lVar15,0);
                                    if (lVar15 != 0) {
                                      *(undefined8 *)(lVar15 + 0x18) = *(undefined8 *)puVar7;
                                      thunk_FUN_0329bf60();
                                      *(undefined8 *)(lVar15 + 0x10) =
                                           *(undefined8 *)
                                            Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_Crypto_Impl_BC_BcTlsECDsaSigner_TypeInfo
                                      ;
                                      thunk_FUN_0329bf60();
                                      if (lVar14 != 0) {
                                        lVar16 = *(long *)(lVar14 + 0x10);
                                        lVar17 = *(long *)puVar5;
                                        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                                        if (lVar16 != 0) {
                                          uVar1 = *(uint *)(lVar14 + 0x18);
                                          if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                            *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                            plVar12 = (long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20)
                                            ;
                                            *plVar12 = lVar15;
                                            thunk_FUN_0329bf60(plVar12,lVar15);
                                          }
                                          else {
                                            FUN_047af440(lVar14,lVar15,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          *(long *)(lVar11 + 0x28) = lVar14;
                                          thunk_FUN_0329bf60((long *)(lVar11 + 0x28),lVar14);
                                          lVar14 = *(long *)(lVar10 + 0x10);
                                          lVar15 = *(long *)puVar6;
                                          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                                          if (lVar14 != 0) {
                                            uVar1 = *(uint *)(lVar10 + 0x18);
                                            if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                              *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                              plVar12 = (long *)(lVar14 + (long)(int)uVar1 * 8 +
                                                                0x20);
                                              *plVar12 = lVar11;
                                              thunk_FUN_0329bf60(plVar12,lVar11);
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
                                            puVar7 = 
                                            Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_Crypto_Impl_BC_BcTlsHmac_TypeInfo
                                            ;
                                            if (lVar11 != 0) {
                                              *(undefined8 *)(lVar11 + 0x10) =
                                                   *(undefined8 *)
                                                                                                        
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_Crypto_Impl_BC_BcTlsHash_TypeInfo
                                              ;
                                              thunk_FUN_0329bf60();
                                              *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)puVar7
                                              ;
                                              thunk_FUN_0329bf60((undefined8 *)(lVar11 + 0x20));
                                              *(undefined4 *)(lVar11 + 0x18) = 1;
                                              lVar14 = thunk_FUN_0322f148(*(undefined8 *)puVar2);
                                              FUN_047aec0c(lVar14,*(undefined8 *)puVar3);
                                              if (lVar14 != 0) {
                                                lVar16 = *(long *)puVar4;
                                                uVar13 = *(undefined8 *)PTR_DAT_075ff118;
                                                lVar15 = *(long *)(lVar14 + 0x10);
                                                *(int *)(lVar14 + 0x1c) =
                                                     *(int *)(lVar14 + 0x1c) + 1;
                                                if (lVar15 != 0) {
                                                  uVar1 = *(uint *)(lVar14 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                    *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                    *(undefined8 *)
                                                     (lVar15 + (long)(int)uVar1 * 8 + 0x20) = uVar13
                                                    ;
                                                    thunk_FUN_0329bf60();
                                                  }
                                                  else {
                                                    FUN_047af440(lVar14,uVar13,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar16 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar14;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar14,*(undefined8 *)
                                                                                                                                              
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_06d70abc(lVar15,0);
                                                  puVar7 = 
                                                  Mono_Net_Security_AsyncWriteRequest_TypeInfo;
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Mono_Net_Security_AsyncWriteRequest_TypeInfo;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar15 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_Crypto_Impl_BC_BcTlsECDsaSigner_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)(lVar14 + 0x10);
                                                    lVar17 = *(long *)puVar5;
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar14 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                        plVar12 = (long *)(lVar16 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar12 = lVar15;
                                                        thunk_FUN_0329bf60(plVar12,lVar15);
                                                      }
                                                      else {
                                                        FUN_047af440(lVar14,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar6;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
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
                                                  lVar11 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                                  );
                                                  FUN_06d70ac4(lVar11,0);
                                                  puVar8 = 
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_Crypto_Impl_BC_BcTlsDsaVerifier_TypeInfo
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_Crypto_Impl_BC_BcTlsEd448Signer_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_0329bf60((undefined8 *)(lVar11 + 0x20));
                                                  *(undefined4 *)(lVar11 + 0x18) = 0;
                                                  lVar14 = thunk_FUN_0322f148(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_047aec0c(lVar14,*(undefined8 *)puVar3);
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)puVar4;
                                                    uVar13 = *(undefined8 *)
                                                                                                                            
                                                  System_Collections_Generic_IList<Vector2[]>_TypeInfo
                                                  ;
                                                  lVar15 = *(long *)(lVar14 + 0x10);
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_0329bf60();
                                                    }
                                                    else {
                                                      FUN_047af440(lVar14,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar14;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar14,*(undefined8 *)
                                                                                                                                              
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_06d70abc(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_0329bf60();
                                                    *(undefined8 *)(lVar15 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_Crypto_Impl_BC_BcTlsECDsaSigner_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)(lVar14 + 0x10);
                                                    lVar17 = *(long *)puVar5;
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar14 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                        plVar12 = (long *)(lVar16 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar12 = lVar15;
                                                        thunk_FUN_0329bf60(plVar12,lVar15);
                                                      }
                                                      else {
                                                        FUN_047af440(lVar14,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar6;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
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
                                                  lVar11 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                                  );
                                                  FUN_06d70ac4(lVar11,0);
                                                  puVar7 = 
                                                  System_Security_Cryptography_AsnEncodedData_TypeInfo
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1TaggedObjectParser_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_0329bf60((undefined8 *)(lVar11 + 0x20));
                                                  *(undefined4 *)(lVar11 + 0x18) = 3;
                                                  lVar14 = thunk_FUN_0322f148(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_047aec0c(lVar14,*(undefined8 *)puVar3);
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)puVar4;
                                                    uVar13 = *(undefined8 *)
                                                                                                                            
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1OctetStringParser_TypeInfo
                                                  ;
                                                  lVar15 = *(long *)(lVar14 + 0x10);
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_0329bf60();
                                                    }
                                                    else {
                                                      FUN_047af440(lVar14,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar14;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar14,*(undefined8 *)
                                                                                                                                              
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_06d70abc(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Configuration_Assemblies_AssemblyHashAlgorithm_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar15 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_Crypto_Impl_BC_BcTlsECDsaSigner_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)(lVar14 + 0x10);
                                                    lVar17 = *(long *)puVar5;
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar14 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                        plVar12 = (long *)(lVar16 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar12 = lVar15;
                                                        thunk_FUN_0329bf60(plVar12,lVar15);
                                                      }
                                                      else {
                                                        FUN_047af440(lVar14,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar6;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
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
                                                  lVar11 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                                  );
                                                  FUN_06d70ac4(lVar11,0);
                                                  puVar7 = 
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1StreamParser_TypeInfo
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_075eb090;
                                                    thunk_FUN_0329bf60();
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_0329bf60((undefined8 *)(lVar11 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar11 + 0x18) = 3;
                                                    lVar14 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                 puVar2);
                                                    FUN_047aec0c(lVar14,*(undefined8 *)puVar3);
                                                    if (lVar14 != 0) {
                                                      lVar16 = *(long *)puVar4;
                                                      uVar13 = *(undefined8 *)PTR_DAT_076257f0;
                                                      lVar15 = *(long *)(lVar14 + 0x10);
                                                      *(int *)(lVar14 + 0x1c) =
                                                           *(int *)(lVar14 + 0x1c) + 1;
                                                      if (lVar15 != 0) {
                                                        uVar1 = *(uint *)(lVar14 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                          *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar13;
                                                          thunk_FUN_0329bf60();
                                                        }
                                                        else {
                                                          FUN_047af440(lVar14,uVar13,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar16 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar14;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar14,*(undefined8 *)
                                                                                                                                              
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_06d70abc(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Operators_Asn1VerifierFactory_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar15 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_Crypto_Impl_BC_BcTlsECDsaSigner_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)(lVar14 + 0x10);
                                                    lVar17 = *(long *)puVar5;
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar14 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                        plVar12 = (long *)(lVar16 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar12 = lVar15;
                                                        thunk_FUN_0329bf60(plVar12,lVar15);
                                                      }
                                                      else {
                                                        FUN_047af440(lVar14,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar6;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
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
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


