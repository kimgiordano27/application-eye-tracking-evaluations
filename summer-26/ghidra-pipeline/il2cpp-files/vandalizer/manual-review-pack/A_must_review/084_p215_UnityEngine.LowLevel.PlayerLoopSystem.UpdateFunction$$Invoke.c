/*
FUNCTION_NAME: UnityEngine.LowLevel.PlayerLoopSystem.UpdateFunction$$Invoke
ENTRY_POINT: 06d75fe4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior;keyword_support
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only
*/


void UnityEngine_LowLevel_PlayerLoopSystem_UpdateFunction__Invoke(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long unaff_x19;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x28;
  
  thunk_FUN_0329bf60();
  lVar10 = thunk_FUN_0322f148(*unaff_x23);
  FUN_047aec0c(lVar10,*unaff_x22);
  lVar11 = thunk_FUN_0322f148(*(undefined8 *)UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                             );
  FUN_05e44034(lVar11,0);
  puVar4 = UnityEngine_AddressableAssets_AssetReference_TypeInfo;
  puVar3 = PTR_DAT_0759bc40;
  puVar2 = PTR_DAT_0759bc38;
  if (lVar11 != 0) {
    *(undefined8 *)(lVar11 + 0x10) =
         *(undefined8 *)
          Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1TaggedObjectParser_TypeInfo;
    thunk_FUN_0329bf60();
    *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)puVar4;
    thunk_FUN_0329bf60((undefined8 *)(lVar11 + 0x20));
    *(undefined4 *)(lVar11 + 0x18) = 3;
    lVar12 = thunk_FUN_0322f148(*(undefined8 *)puVar2);
    FUN_047aec0c(lVar12,*(undefined8 *)puVar3);
    puVar4 = PTR_DAT_0759bc60;
    if (lVar12 != 0) {
      uVar14 = *(undefined8 *)
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1OctetStringParser_TypeInfo;
      lVar15 = *(long *)(lVar12 + 0x10);
      lVar16 = *(long *)PTR_DAT_0759bc60;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar15 != 0) {
        uVar1 = *(uint *)(lVar12 + 0x18);
        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = uVar14;
          thunk_FUN_0329bf60();
        }
        else {
          FUN_047af440(lVar12,uVar14,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
        *(long *)(lVar11 + 0x30) = lVar12;
        thunk_FUN_0329bf60((long *)(lVar11 + 0x30),lVar12);
        lVar12 = thunk_FUN_0322f148(*(undefined8 *)
                                     UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo);
        FUN_047aec0c(lVar12,*(undefined8 *)
                             UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo);
        lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                     UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo);
        FUN_05e44034(lVar15,0);
        if (lVar15 != 0) {
          *(undefined8 *)(lVar15 + 0x18) =
               *(undefined8 *)System_Configuration_Assemblies_AssemblyHashAlgorithm_TypeInfo;
          thunk_FUN_0329bf60();
          *(undefined8 *)(lVar15 + 0x10) = *unaff_x28;
          thunk_FUN_0329bf60();
          puVar7 = UnityEngine_UI_AnimationTriggers_TypeInfo;
          if (lVar12 != 0) {
            lVar16 = *(long *)(lVar12 + 0x10);
            lVar17 = *(long *)UnityEngine_UI_AnimationTriggers_TypeInfo;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar16 != 0) {
              uVar1 = *(uint *)(lVar12 + 0x18);
              if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                plVar13 = (long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
                *plVar13 = lVar15;
                thunk_FUN_0329bf60(plVar13,lVar15);
              }
              else {
                FUN_047af440(lVar12,lVar15,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
              *(long *)(lVar11 + 0x28) = lVar12;
              thunk_FUN_0329bf60((long *)(lVar11 + 0x28),lVar12);
              puVar8 = AnimationWire_TypeInfo;
              if (lVar10 != 0) {
                lVar12 = *(long *)(lVar10 + 0x10);
                lVar15 = *(long *)AnimationWire_TypeInfo;
                *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                if (lVar12 != 0) {
                  uVar1 = *(uint *)(lVar10 + 0x18);
                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                    *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                    plVar13 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar13 = lVar11;
                    thunk_FUN_0329bf60(plVar13,lVar11);
                  }
                  else {
                    FUN_047af440(lVar10,lVar11,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  lVar11 = thunk_FUN_0322f148(*(undefined8 *)
                                               UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                             );
                  FUN_05e44034(lVar11,0);
                  puVar6 = Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1StreamParser_TypeInfo;
                  if (lVar11 != 0) {
                    *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)PTR_DAT_075eb090;
                    thunk_FUN_0329bf60();
                    *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)puVar6;
                    thunk_FUN_0329bf60((undefined8 *)(lVar11 + 0x20));
                    *(undefined4 *)(lVar11 + 0x18) = 3;
                    lVar12 = thunk_FUN_0322f148(*(undefined8 *)puVar2);
                    FUN_047aec0c(lVar12,*(undefined8 *)puVar3);
                    if (lVar12 != 0) {
                      lVar16 = *(long *)puVar4;
                      uVar14 = *(undefined8 *)PTR_DAT_076257f0;
                      lVar15 = *(long *)(lVar12 + 0x10);
                      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                      if (lVar15 != 0) {
                        uVar1 = *(uint *)(lVar12 + 0x18);
                        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                          *(undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = uVar14;
                          thunk_FUN_0329bf60();
                        }
                        else {
                          FUN_047af440(lVar12,uVar14,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                        }
                        *(long *)(lVar11 + 0x30) = lVar12;
                        thunk_FUN_0329bf60((long *)(lVar11 + 0x30),lVar12);
                        lVar12 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                          
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                        FUN_047aec0c(lVar12,*(undefined8 *)
                                             UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                    );
                        lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                          
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                        FUN_05e44034(lVar15,0);
                        if (lVar15 != 0) {
                          *(undefined8 *)(lVar15 + 0x18) =
                               *(undefined8 *)
                                Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Operators_Asn1VerifierFactory_TypeInfo
                          ;
                          thunk_FUN_0329bf60();
                          *(undefined8 *)(lVar15 + 0x10) = *unaff_x28;
                          thunk_FUN_0329bf60();
                          if (lVar12 != 0) {
                            lVar16 = *(long *)(lVar12 + 0x10);
                            lVar17 = *(long *)puVar7;
                            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                            if (lVar16 != 0) {
                              uVar1 = *(uint *)(lVar12 + 0x18);
                              if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                plVar13 = (long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar13 = lVar15;
                                thunk_FUN_0329bf60(plVar13,lVar15);
                              }
                              else {
                                FUN_047af440(lVar12,lVar15,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                              }
                              *(long *)(lVar11 + 0x28) = lVar12;
                              thunk_FUN_0329bf60((long *)(lVar11 + 0x28),lVar12);
                              lVar12 = *(long *)(lVar10 + 0x10);
                              lVar15 = *(long *)puVar8;
                              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                              if (lVar12 != 0) {
                                uVar1 = *(uint *)(lVar10 + 0x18);
                                if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                  *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                  plVar13 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                                  *plVar13 = lVar11;
                                  thunk_FUN_0329bf60(plVar13,lVar11);
                                }
                                else {
                                  FUN_047af440(lVar10,lVar11,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70))
                                  ;
                                }
                                lVar11 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                                  );
                                FUN_05e44034(lVar11,0);
                                puVar6 = 
                                Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Operators_Asn1VerifierFactoryProvider_TypeInfo
                                ;
                                if (lVar11 != 0) {
                                  *(undefined8 *)(lVar11 + 0x10) =
                                       *(undefined8 *)
                                        Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1Tag_TypeInfo
                                  ;
                                  thunk_FUN_0329bf60();
                                  *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)puVar6;
                                  thunk_FUN_0329bf60((undefined8 *)(lVar11 + 0x20));
                                  *(undefined4 *)(lVar11 + 0x18) = 3;
                                  lVar12 = thunk_FUN_0322f148(*(undefined8 *)puVar2);
                                  FUN_047aec0c(lVar12,*(undefined8 *)puVar3);
                                  if (lVar12 != 0) {
                                    lVar16 = *(long *)puVar4;
                                    uVar14 = *(undefined8 *)
                                              System_Linq_Expressions_Interpreter_AssignLocalInstruction_TypeInfo
                                    ;
                                    lVar15 = *(long *)(lVar12 + 0x10);
                                    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                                    if (lVar15 != 0) {
                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                        *(undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                             uVar14;
                                        thunk_FUN_0329bf60();
                                      }
                                      else {
                                        FUN_047af440(lVar12,uVar14,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      *(long *)(lVar11 + 0x30) = lVar12;
                                      thunk_FUN_0329bf60((long *)(lVar11 + 0x30),lVar12);
                                      lVar12 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                      
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                      FUN_047aec0c(lVar12,*(undefined8 *)
                                                                                                                      
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                      lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                      
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                      FUN_05e44034(lVar15,0);
                                      if (lVar15 != 0) {
                                        *(undefined8 *)(lVar15 + 0x18) =
                                             *(undefined8 *)
                                              Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1TaggedObject_TypeInfo
                                        ;
                                        thunk_FUN_0329bf60();
                                        *(undefined8 *)(lVar15 + 0x10) = *unaff_x28;
                                        thunk_FUN_0329bf60();
                                        if (lVar12 != 0) {
                                          lVar16 = *(long *)(lVar12 + 0x10);
                                          lVar17 = *(long *)puVar7;
                                          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                                          if (lVar16 != 0) {
                                            uVar1 = *(uint *)(lVar12 + 0x18);
                                            if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                              *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                              plVar13 = (long *)(lVar16 + (long)(int)uVar1 * 8 +
                                                                0x20);
                                              *plVar13 = lVar15;
                                              thunk_FUN_0329bf60(plVar13,lVar15);
                                            }
                                            else {
                                              FUN_047af440(lVar12,lVar15,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar17 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            *(long *)(lVar11 + 0x28) = lVar12;
                                            thunk_FUN_0329bf60((long *)(lVar11 + 0x28),lVar12);
                                            lVar12 = *(long *)(lVar10 + 0x10);
                                            lVar15 = *(long *)puVar8;
                                            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                                            if (lVar12 != 0) {
                                              uVar1 = *(uint *)(lVar10 + 0x18);
                                              if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                plVar13 = (long *)(lVar12 + (long)(int)uVar1 * 8 +
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
                                              FUN_05e44034(lVar11,0);
                                              puVar6 = 
                                              Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1UtcTime_TypeInfo
                                              ;
                                              if (lVar11 != 0) {
                                                *(undefined8 *)(lVar11 + 0x10) =
                                                     *(undefined8 *)
                                                                                                            
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Operators_Asn1SignatureFactory_TypeInfo
                                                ;
                                                thunk_FUN_0329bf60();
                                                *(undefined8 *)(lVar11 + 0x20) =
                                                     *(undefined8 *)puVar6;
                                                thunk_FUN_0329bf60((undefined8 *)(lVar11 + 0x20));
                                                *(undefined4 *)(lVar11 + 0x18) = 3;
                                                lVar12 = thunk_FUN_0322f148(*(undefined8 *)puVar2);
                                                FUN_047aec0c(lVar12,*(undefined8 *)puVar3);
                                                if (lVar12 != 0) {
                                                  lVar16 = *(long *)puVar4;
                                                  uVar14 = *(undefined8 *)PTR_DAT_075f3770;
                                                  lVar15 = *(long *)(lVar12 + 0x10);
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_0329bf60();
                                                    }
                                                    else {
                                                      FUN_047af440(lVar12,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar12;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_05e44034(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                          UnityEngine_AssemblyFullName_TypeInfo;
                                                    thunk_FUN_0329bf60();
                                                    *(undefined8 *)(lVar15 + 0x10) = *unaff_x28;
                                                    thunk_FUN_0329bf60();
                                                    if (lVar12 != 0) {
                                                      lVar16 = *(long *)(lVar12 + 0x10);
                                                      lVar17 = *(long *)puVar7;
                                                      *(int *)(lVar12 + 0x1c) =
                                                           *(int *)(lVar12 + 0x1c) + 1;
                                                      if (lVar16 != 0) {
                                                        uVar1 = *(uint *)(lVar12 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                          plVar13 = (long *)(lVar16 + (long)(int)
                                                  uVar1 * 8 + 0x20);
                                                  *plVar13 = lVar15;
                                                  thunk_FUN_0329bf60(plVar13,lVar15);
                                                  }
                                                  else {
                                                    FUN_047af440(lVar12,lVar15,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar17 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar12;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar8;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
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
                                                  FUN_05e44034(lVar11,0);
                                                  puVar5 = 
                                                  Oculus_Platform_Models_AssetDetailsList_TypeInfo;
                                                  puVar6 = 
                                                  System_Func<TMP_SpriteGlyph,_uint>_TypeInfo;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Func<TMP_SpriteGlyph,_uint>_TypeInfo;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_0329bf60((undefined8 *)(lVar11 + 0x20));
                                                  *(undefined4 *)(lVar11 + 0x18) = 1;
                                                  lVar12 = thunk_FUN_0322f148(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_047aec0c(lVar12,*(undefined8 *)puVar3);
                                                  if (lVar12 != 0) {
                                                    uVar14 = *(undefined8 *)puVar6;
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar4;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar14;
                                                        thunk_FUN_0329bf60();
                                                      }
                                                      else {
                                                        FUN_047af440(lVar12,uVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar12;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_05e44034(lVar15,0);
                                                  puVar6 = 
                                                  Oculus_Platform_Models_AssetFileDownloadUpdate_TypeInfo
                                                  ;
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Oculus_Platform_Models_AssetFileDownloadUpdate_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar15 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_ResourceManagement_Profiling_AssetFrameData_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar12 != 0) {
                                                    lVar16 = *(long *)(lVar12 + 0x10);
                                                    lVar17 = *(long *)puVar7;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar16 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar15;
                                                        thunk_FUN_0329bf60(plVar13,lVar15);
                                                      }
                                                      else {
                                                        FUN_047af440(lVar12,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar12;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar8;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
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
                                                  FUN_05e44034(lVar11,0);
                                                  puVar9 = 
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Pkcs_AsymmetricKeyEntry_TypeInfo
                                                  ;
                                                  puVar5 = 
                                                  Best_HTTP_Hosts_Settings_AsteriskStringComparer_TypeInfo
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Best_HTTP_Hosts_Settings_AsteriskStringComparer_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_0329bf60((undefined8 *)(lVar11 + 0x20));
                                                  *(undefined4 *)(lVar11 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_0322f148(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_047aec0c(lVar12,*(undefined8 *)puVar3);
                                                  if (lVar12 != 0) {
                                                    uVar14 = *(undefined8 *)puVar5;
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar4;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar14;
                                                        thunk_FUN_0329bf60();
                                                      }
                                                      else {
                                                        FUN_047af440(lVar12,uVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar12;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_05e44034(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)puVar6;
                                                    thunk_FUN_0329bf60();
                                                    puVar6 = 
                                                  UnityEngine_ResourceManagement_Profiling_AssetFrameData_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar15 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_ResourceManagement_Profiling_AssetFrameData_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar12 != 0) {
                                                    lVar16 = *(long *)(lVar12 + 0x10);
                                                    lVar17 = *(long *)puVar7;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar16 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar15;
                                                        thunk_FUN_0329bf60(plVar13,lVar15);
                                                      }
                                                      else {
                                                        FUN_047af440(lVar12,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar12;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar8;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
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
                                                  FUN_05e44034(lVar11,0);
                                                  puVar9 = System_Xml_Schema_Asttree_TypeInfo;
                                                  puVar5 = System_Func<Touch,_TapGesture>_TypeInfo;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                          System_Func<Touch,_TapGesture>_TypeInfo;
                                                    thunk_FUN_0329bf60();
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         *(undefined8 *)puVar9;
                                                    thunk_FUN_0329bf60((undefined8 *)(lVar11 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar11 + 0x18) = 0;
                                                    lVar12 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                 puVar2);
                                                    FUN_047aec0c(lVar12,*(undefined8 *)puVar3);
                                                    if (lVar12 != 0) {
                                                      uVar14 = *(undefined8 *)puVar5;
                                                      lVar15 = *(long *)(lVar12 + 0x10);
                                                      lVar16 = *(long *)puVar4;
                                                      *(int *)(lVar12 + 0x1c) =
                                                           *(int *)(lVar12 + 0x1c) + 1;
                                                      if (lVar15 != 0) {
                                                        uVar1 = *(uint *)(lVar12 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar14;
                                                          thunk_FUN_0329bf60();
                                                        }
                                                        else {
                                                          FUN_047af440(lVar12,uVar14,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar16 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar12;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_05e44034(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Security_Cryptography_AsymmetricAlgorithm_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar15 + 0x10) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar12 != 0) {
                                                    lVar16 = *(long *)(lVar12 + 0x10);
                                                    lVar17 = *(long *)puVar7;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar16 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar15;
                                                        thunk_FUN_0329bf60(plVar13,lVar15);
                                                      }
                                                      else {
                                                        FUN_047af440(lVar12,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar12;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar8;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
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
                                                  FUN_05e44034(lVar11,0);
                                                  puVar5 = 
                                                  System_Linq_Expressions_Interpreter_AssignLocalToClosureInstruction_TypeInfo
                                                  ;
                                                  puVar6 = 
                                                  System_Func<StyleSelector,_string>_TypeInfo;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Func<StyleSelector,_string>_TypeInfo;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_0329bf60((undefined8 *)(lVar11 + 0x20));
                                                  *(undefined4 *)(lVar11 + 0x18) = 1;
                                                  lVar12 = thunk_FUN_0322f148(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_047aec0c(lVar12,*(undefined8 *)puVar3);
                                                  if (lVar12 != 0) {
                                                    uVar14 = *(undefined8 *)puVar6;
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar4;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar14;
                                                        thunk_FUN_0329bf60();
                                                      }
                                                      else {
                                                        FUN_047af440(lVar12,uVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar12;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_05e44034(lVar15,0);
                                                  puVar6 = 
                                                  Oculus_Platform_Models_AssetDetails_TypeInfo;
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Oculus_Platform_Models_AssetDetails_TypeInfo;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar15 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_ResourceManagement_Profiling_AssetFrameData_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar12 != 0) {
                                                    lVar16 = *(long *)(lVar12 + 0x10);
                                                    lVar17 = *(long *)puVar7;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar16 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar15;
                                                        thunk_FUN_0329bf60(plVar13,lVar15);
                                                      }
                                                      else {
                                                        FUN_047af440(lVar12,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar12;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar8;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
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
                                                  FUN_05e44034(lVar11,0);
                                                  puVar9 = MyBox_AssetPath_TypeInfo;
                                                  puVar5 = 
                                                  UnityEditor_Analytics_AssetDatabaseRefreshAnalytic_TypeInfo
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEditor_Analytics_AssetDatabaseRefreshAnalytic_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_0329bf60((undefined8 *)(lVar11 + 0x20));
                                                  *(undefined4 *)(lVar11 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_0322f148(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_047aec0c(lVar12,*(undefined8 *)puVar3);
                                                  if (lVar12 != 0) {
                                                    uVar14 = *(undefined8 *)puVar5;
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar4;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar14;
                                                        thunk_FUN_0329bf60();
                                                      }
                                                      else {
                                                        FUN_047af440(lVar12,uVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar12;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_05e44034(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)puVar6;
                                                    thunk_FUN_0329bf60();
                                                    puVar6 = 
                                                  UnityEngine_ResourceManagement_Profiling_AssetFrameData_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar15 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_ResourceManagement_Profiling_AssetFrameData_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar12 != 0) {
                                                    lVar16 = *(long *)(lVar12 + 0x10);
                                                    lVar17 = *(long *)puVar7;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar16 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar15;
                                                        thunk_FUN_0329bf60(plVar13,lVar15);
                                                      }
                                                      else {
                                                        FUN_047af440(lVar12,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar12;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar8;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
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
                                                  FUN_05e44034(lVar11,0);
                                                  puVar9 = 
                                                  Oculus_Platform_Models_AssetFileDownloadCancelResult_TypeInfo
                                                  ;
                                                  puVar5 = System_Func<string,_string>_TypeInfo;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                          System_Func<string,_string>_TypeInfo;
                                                    thunk_FUN_0329bf60();
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         *(undefined8 *)puVar9;
                                                    thunk_FUN_0329bf60((undefined8 *)(lVar11 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar11 + 0x18) = 0;
                                                    lVar12 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                 puVar2);
                                                    FUN_047aec0c(lVar12,*(undefined8 *)puVar3);
                                                    if (lVar12 != 0) {
                                                      uVar14 = *(undefined8 *)puVar5;
                                                      lVar15 = *(long *)(lVar12 + 0x10);
                                                      lVar16 = *(long *)puVar4;
                                                      *(int *)(lVar12 + 0x1c) =
                                                           *(int *)(lVar12 + 0x1c) + 1;
                                                      if (lVar15 != 0) {
                                                        uVar1 = *(uint *)(lVar12 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar14;
                                                          thunk_FUN_0329bf60();
                                                        }
                                                        else {
                                                          FUN_047af440(lVar12,uVar14,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar16 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar12;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_05e44034(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Linq_Expressions_AssignBinaryExpression_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar15 + 0x10) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar12 != 0) {
                                                    lVar16 = *(long *)(lVar12 + 0x10);
                                                    lVar17 = *(long *)puVar7;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar16 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar15;
                                                        thunk_FUN_0329bf60(plVar13,lVar15);
                                                      }
                                                      else {
                                                        FUN_047af440(lVar12,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar12;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar8;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
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
                                                  FUN_05e44034(lVar11,0);
                                                  puVar5 = 
                                                  System_Linq_Expressions_Interpreter_AssignLocalBoxedInstruction_TypeInfo
                                                  ;
                                                  puVar6 = 
                                                  System_Func<StyleSelectorPart,_string>_TypeInfo;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Func<StyleSelectorPart,_string>_TypeInfo;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_0329bf60((undefined8 *)(lVar11 + 0x20));
                                                  *(undefined4 *)(lVar11 + 0x18) = 1;
                                                  lVar12 = thunk_FUN_0322f148(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_047aec0c(lVar12,*(undefined8 *)puVar3);
                                                  if (lVar12 != 0) {
                                                    uVar14 = *(undefined8 *)puVar6;
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar4;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar14;
                                                        thunk_FUN_0329bf60();
                                                      }
                                                      else {
                                                        FUN_047af440(lVar12,uVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar12;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_05e44034(lVar15,0);
                                                  puVar6 = 
                                                  Oculus_Platform_Models_AssetFileDownloadResult_TypeInfo
                                                  ;
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Oculus_Platform_Models_AssetFileDownloadResult_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar15 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_ResourceManagement_Profiling_AssetFrameData_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar12 != 0) {
                                                    lVar16 = *(long *)(lVar12 + 0x10);
                                                    lVar17 = *(long *)puVar7;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar16 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar15;
                                                        thunk_FUN_0329bf60(plVar13,lVar15);
                                                      }
                                                      else {
                                                        FUN_047af440(lVar12,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar12;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar8;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
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
                                                  FUN_05e44034(lVar11,0);
                                                  puVar9 = 
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_AsymmetricCipherKeyPair_TypeInfo
                                                  ;
                                                  puVar5 = 
                                                  UnityEditor_Analytics_AssetImportStatusAnalytic_TypeInfo
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEditor_Analytics_AssetImportStatusAnalytic_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_0329bf60((undefined8 *)(lVar11 + 0x20));
                                                  *(undefined4 *)(lVar11 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_0322f148(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_047aec0c(lVar12,*(undefined8 *)puVar3);
                                                  if (lVar12 != 0) {
                                                    uVar14 = *(undefined8 *)puVar5;
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar4;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar14;
                                                        thunk_FUN_0329bf60();
                                                      }
                                                      else {
                                                        FUN_047af440(lVar12,uVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar12;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_05e44034(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)puVar6;
                                                    thunk_FUN_0329bf60();
                                                    puVar6 = 
                                                  UnityEngine_ResourceManagement_Profiling_AssetFrameData_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar15 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_ResourceManagement_Profiling_AssetFrameData_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar12 != 0) {
                                                    lVar16 = *(long *)(lVar12 + 0x10);
                                                    lVar17 = *(long *)puVar7;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar16 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar15;
                                                        thunk_FUN_0329bf60(plVar13,lVar15);
                                                      }
                                                      else {
                                                        FUN_047af440(lVar12,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar12;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar8;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
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
                                                  FUN_05e44034(lVar11,0);
                                                  puVar9 = 
                                                  UnityEditor_Analytics_AssetExportAnalytic_TypeInfo
                                                  ;
                                                  puVar5 = System_Func<TouchControl,_bool>_TypeInfo;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                          System_Func<TouchControl,_bool>_TypeInfo;
                                                    thunk_FUN_0329bf60();
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         *(undefined8 *)puVar9;
                                                    thunk_FUN_0329bf60((undefined8 *)(lVar11 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar11 + 0x18) = 0;
                                                    lVar12 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                 puVar2);
                                                    FUN_047aec0c(lVar12,*(undefined8 *)puVar3);
                                                    if (lVar12 != 0) {
                                                      uVar14 = *(undefined8 *)puVar5;
                                                      lVar15 = *(long *)(lVar12 + 0x10);
                                                      lVar16 = *(long *)puVar4;
                                                      *(int *)(lVar12 + 0x1c) =
                                                           *(int *)(lVar12 + 0x1c) + 1;
                                                      if (lVar15 != 0) {
                                                        uVar1 = *(uint *)(lVar12 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar14;
                                                          thunk_FUN_0329bf60();
                                                        }
                                                        else {
                                                          FUN_047af440(lVar12,uVar14,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar16 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar12;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar15 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_05e44034(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Oculus_Platform_Models_AssetFileDeleteResult_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar15 + 0x10) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar12 != 0) {
                                                    lVar16 = *(long *)(lVar12 + 0x10);
                                                    lVar17 = *(long *)puVar7;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar16 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar15;
                                                        thunk_FUN_0329bf60(plVar13,lVar15);
                                                      }
                                                      else {
                                                        FUN_047af440(lVar12,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar12;
                                                  thunk_FUN_0329bf60((long *)(lVar11 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar8;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
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
                                                  *(long *)(unaff_x19 + 0x28) = lVar10;
                                                  thunk_FUN_0329bf60((long *)(unaff_x19 + 0x28),
                                                                     lVar10);
                                                  FUN_06d70888();
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
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


