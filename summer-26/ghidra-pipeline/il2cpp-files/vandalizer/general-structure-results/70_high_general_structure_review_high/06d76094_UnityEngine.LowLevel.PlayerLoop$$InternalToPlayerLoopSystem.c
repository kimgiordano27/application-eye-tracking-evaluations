/*
FUNCTION_NAME: UnityEngine.LowLevel.PlayerLoop$$InternalToPlayerLoopSystem
ENTRY_POINT: 06d76094
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;telemetry;frame_behavior;keyword_support
EVIDENCE: validity_or_gating_hits_21;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only
*/


void UnityEngine_LowLevel_PlayerLoop__InternalToPlayerLoopSystem(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  uVar8 = *param_1;
  lVar9 = *(long *)(unaff_x22 + 0x10);
  *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
  if (lVar9 != 0) {
    uVar1 = *(uint *)(unaff_x22 + 0x18);
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
      thunk_FUN_0329bf60();
    }
    else {
      FUN_047af440();
    }
    *(long *)(unaff_x21 + 0x30) = unaff_x22;
    thunk_FUN_0329bf60();
    lVar9 = thunk_FUN_0322f148(*(undefined8 *)
                                UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo);
    FUN_047aec0c(lVar9,*(undefined8 *)UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo);
    lVar6 = thunk_FUN_0322f148(*(undefined8 *)
                                UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo);
    FUN_05e44034(lVar6,0);
    if (lVar6 != 0) {
      *(undefined8 *)(lVar6 + 0x18) =
           *(undefined8 *)System_Configuration_Assemblies_AssemblyHashAlgorithm_TypeInfo;
      thunk_FUN_0329bf60();
      *(undefined8 *)(lVar6 + 0x10) = *unaff_x28;
      thunk_FUN_0329bf60();
      puVar4 = UnityEngine_UI_AnimationTriggers_TypeInfo;
      if (lVar9 != 0) {
        lVar10 = *(long *)(lVar9 + 0x10);
        lVar11 = *(long *)UnityEngine_UI_AnimationTriggers_TypeInfo;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar10 != 0) {
          uVar1 = *(uint *)(lVar9 + 0x18);
          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
            plVar7 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
            *plVar7 = lVar6;
            thunk_FUN_0329bf60(plVar7,lVar6);
          }
          else {
            FUN_047af440(lVar9,lVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
          *(long *)(unaff_x21 + 0x28) = lVar9;
          thunk_FUN_0329bf60((long *)(unaff_x21 + 0x28),lVar9);
          if (unaff_x20 != 0) {
            lVar9 = *(long *)(unaff_x20 + 0x10);
            *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
            if (lVar9 != 0) {
              uVar1 = *(uint *)(unaff_x20 + 0x18);
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = unaff_x21;
                thunk_FUN_0329bf60();
              }
              else {
                FUN_047af440();
              }
              lVar9 = thunk_FUN_0322f148(*(undefined8 *)
                                          UnityEngine_Animations_AnimationScriptPlayable_TypeInfo);
              FUN_05e44034(lVar9,0);
              puVar3 = Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1StreamParser_TypeInfo;
              if (lVar9 != 0) {
                *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)PTR_DAT_075eb090;
                thunk_FUN_0329bf60();
                *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar3;
                thunk_FUN_0329bf60((undefined8 *)(lVar9 + 0x20));
                *(undefined4 *)(lVar9 + 0x18) = 3;
                lVar6 = thunk_FUN_0322f148(*unaff_x24);
                FUN_047aec0c(lVar6,*unaff_x29);
                if (lVar6 != 0) {
                  lVar11 = *unaff_x25;
                  uVar8 = *(undefined8 *)PTR_DAT_076257f0;
                  lVar10 = *(long *)(lVar6 + 0x10);
                  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                  if (lVar10 != 0) {
                    uVar1 = *(uint *)(lVar6 + 0x18);
                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                      *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
                      thunk_FUN_0329bf60();
                    }
                    else {
                      FUN_047af440(lVar6,uVar8,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                    }
                    *(long *)(lVar9 + 0x30) = lVar6;
                    thunk_FUN_0329bf60((long *)(lVar9 + 0x30),lVar6);
                    lVar6 = thunk_FUN_0322f148(*(undefined8 *)
                                                UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                              );
                    FUN_047aec0c(lVar6,*(undefined8 *)
                                        UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo);
                    lVar10 = thunk_FUN_0322f148(*(undefined8 *)
                                                 UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                               );
                    FUN_05e44034(lVar10,0);
                    if (lVar10 != 0) {
                      *(undefined8 *)(lVar10 + 0x18) =
                           *(undefined8 *)
                            Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Operators_Asn1VerifierFactory_TypeInfo
                      ;
                      thunk_FUN_0329bf60();
                      *(undefined8 *)(lVar10 + 0x10) = *unaff_x28;
                      thunk_FUN_0329bf60();
                      if (lVar6 != 0) {
                        lVar11 = *(long *)(lVar6 + 0x10);
                        lVar12 = *(long *)puVar4;
                        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                        if (lVar11 != 0) {
                          uVar1 = *(uint *)(lVar6 + 0x18);
                          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                            plVar7 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                            *plVar7 = lVar10;
                            thunk_FUN_0329bf60(plVar7,lVar10);
                          }
                          else {
                            FUN_047af440(lVar6,lVar10,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                          }
                          *(long *)(lVar9 + 0x28) = lVar6;
                          thunk_FUN_0329bf60((long *)(lVar9 + 0x28),lVar6);
                          lVar6 = *(long *)(unaff_x20 + 0x10);
                          *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                          if (lVar6 != 0) {
                            uVar1 = *(uint *)(unaff_x20 + 0x18);
                            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                              *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                              plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                              *plVar7 = lVar9;
                              thunk_FUN_0329bf60(plVar7,lVar9);
                            }
                            else {
                              FUN_047af440();
                            }
                            lVar9 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                
                                                  UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                                  );
                            FUN_05e44034(lVar9,0);
                            puVar3 = 
                            Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Operators_Asn1VerifierFactoryProvider_TypeInfo
                            ;
                            if (lVar9 != 0) {
                              *(undefined8 *)(lVar9 + 0x10) =
                                   *(undefined8 *)
                                    Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1Tag_TypeInfo;
                              thunk_FUN_0329bf60();
                              *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar3;
                              thunk_FUN_0329bf60((undefined8 *)(lVar9 + 0x20));
                              *(undefined4 *)(lVar9 + 0x18) = 3;
                              lVar6 = thunk_FUN_0322f148(*unaff_x24);
                              FUN_047aec0c(lVar6,*unaff_x29);
                              if (lVar6 != 0) {
                                lVar11 = *unaff_x25;
                                uVar8 = *(undefined8 *)
                                         System_Linq_Expressions_Interpreter_AssignLocalInstruction_TypeInfo
                                ;
                                lVar10 = *(long *)(lVar6 + 0x10);
                                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                if (lVar10 != 0) {
                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                    *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
                                    thunk_FUN_0329bf60();
                                  }
                                  else {
                                    FUN_047af440(lVar6,uVar8,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70
                                                  ));
                                  }
                                  *(long *)(lVar9 + 0x30) = lVar6;
                                  thunk_FUN_0329bf60((long *)(lVar9 + 0x30),lVar6);
                                  lVar6 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                            
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                  FUN_047aec0c(lVar6,*(undefined8 *)
                                                                                                            
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                              );
                                  lVar10 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                              
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                  FUN_05e44034(lVar10,0);
                                  if (lVar10 != 0) {
                                    *(undefined8 *)(lVar10 + 0x18) =
                                         *(undefined8 *)
                                          Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1TaggedObject_TypeInfo
                                    ;
                                    thunk_FUN_0329bf60();
                                    *(undefined8 *)(lVar10 + 0x10) = *unaff_x28;
                                    thunk_FUN_0329bf60();
                                    if (lVar6 != 0) {
                                      lVar11 = *(long *)(lVar6 + 0x10);
                                      lVar12 = *(long *)puVar4;
                                      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                      if (lVar11 != 0) {
                                        uVar1 = *(uint *)(lVar6 + 0x18);
                                        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                          plVar7 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                                          *plVar7 = lVar10;
                                          thunk_FUN_0329bf60(plVar7,lVar10);
                                        }
                                        else {
                                          FUN_047af440(lVar6,lVar10,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0)
                                                        + 0x70));
                                        }
                                        *(long *)(lVar9 + 0x28) = lVar6;
                                        thunk_FUN_0329bf60((long *)(lVar9 + 0x28),lVar6);
                                        lVar6 = *(long *)(unaff_x20 + 0x10);
                                        *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                                        if (lVar6 != 0) {
                                          uVar1 = *(uint *)(unaff_x20 + 0x18);
                                          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                            *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                            plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                                            *plVar7 = lVar9;
                                            thunk_FUN_0329bf60(plVar7,lVar9);
                                          }
                                          else {
                                            FUN_047af440();
                                          }
                                          lVar9 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                            
                                                  UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                                  );
                                          FUN_05e44034(lVar9,0);
                                          puVar3 = 
                                          Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1UtcTime_TypeInfo
                                          ;
                                          if (lVar9 != 0) {
                                            *(undefined8 *)(lVar9 + 0x10) =
                                                 *(undefined8 *)
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Operators_Asn1SignatureFactory_TypeInfo
                                            ;
                                            thunk_FUN_0329bf60();
                                            *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar3;
                                            thunk_FUN_0329bf60((undefined8 *)(lVar9 + 0x20));
                                            *(undefined4 *)(lVar9 + 0x18) = 3;
                                            lVar6 = thunk_FUN_0322f148(*unaff_x24);
                                            FUN_047aec0c(lVar6,*unaff_x29);
                                            if (lVar6 != 0) {
                                              lVar11 = *unaff_x25;
                                              uVar8 = *(undefined8 *)PTR_DAT_075f3770;
                                              lVar10 = *(long *)(lVar6 + 0x10);
                                              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                              if (lVar10 != 0) {
                                                uVar1 = *(uint *)(lVar6 + 0x18);
                                                if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                  *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                  *(undefined8 *)
                                                   (lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
                                                  thunk_FUN_0329bf60();
                                                }
                                                else {
                                                  FUN_047af440(lVar6,uVar8,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar11 + 0x20)
                                                                          + 0xc0) + 0x70));
                                                }
                                                *(long *)(lVar9 + 0x30) = lVar6;
                                                thunk_FUN_0329bf60((long *)(lVar9 + 0x30),lVar6);
                                                lVar6 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                        
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                FUN_047aec0c(lVar6,*(undefined8 *)
                                                                                                                                        
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                lVar10 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                          
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                FUN_05e44034(lVar10,0);
                                                if (lVar10 != 0) {
                                                  *(undefined8 *)(lVar10 + 0x18) =
                                                       *(undefined8 *)
                                                        UnityEngine_AssemblyFullName_TypeInfo;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar10 + 0x10) = *unaff_x28;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar6 != 0) {
                                                    lVar11 = *(long *)(lVar6 + 0x10);
                                                    lVar12 = *(long *)puVar4;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar11 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar7 = lVar10;
                                                        thunk_FUN_0329bf60(plVar7,lVar10);
                                                      }
                                                      else {
                                                        FUN_047af440(lVar6,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar6;
                                                  thunk_FUN_0329bf60((long *)(lVar9 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar9;
                                                      thunk_FUN_0329bf60(plVar7,lVar9);
                                                    }
                                                    else {
                                                      FUN_047af440();
                                                    }
                                                    lVar9 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                                  );
                                                  FUN_05e44034(lVar9,0);
                                                  puVar2 = 
                                                  Oculus_Platform_Models_AssetDetailsList_TypeInfo;
                                                  puVar3 = 
                                                  System_Func<TMP_SpriteGlyph,_uint>_TypeInfo;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Func<TMP_SpriteGlyph,_uint>_TypeInfo;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_0329bf60((undefined8 *)(lVar9 + 0x20));
                                                  *(undefined4 *)(lVar9 + 0x18) = 1;
                                                  lVar6 = thunk_FUN_0322f148(*unaff_x24);
                                                  FUN_047aec0c(lVar6,*unaff_x29);
                                                  if (lVar6 != 0) {
                                                    uVar8 = *(undefined8 *)puVar3;
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *unaff_x25;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar8;
                                                        thunk_FUN_0329bf60();
                                                      }
                                                      else {
                                                        FUN_047af440(lVar6,uVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar6;
                                                  thunk_FUN_0329bf60((long *)(lVar9 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar10 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_05e44034(lVar10,0);
                                                  puVar3 = 
                                                  Oculus_Platform_Models_AssetFileDownloadUpdate_TypeInfo
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Oculus_Platform_Models_AssetFileDownloadUpdate_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_ResourceManagement_Profiling_AssetFrameData_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar6 != 0) {
                                                    lVar11 = *(long *)(lVar6 + 0x10);
                                                    lVar12 = *(long *)puVar4;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar11 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar7 = lVar10;
                                                        thunk_FUN_0329bf60(plVar7,lVar10);
                                                      }
                                                      else {
                                                        FUN_047af440(lVar6,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar6;
                                                  thunk_FUN_0329bf60((long *)(lVar9 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar9;
                                                      thunk_FUN_0329bf60(plVar7,lVar9);
                                                    }
                                                    else {
                                                      FUN_047af440();
                                                    }
                                                    lVar9 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                                  );
                                                  FUN_05e44034(lVar9,0);
                                                  puVar5 = 
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Pkcs_AsymmetricKeyEntry_TypeInfo
                                                  ;
                                                  puVar2 = 
                                                  Best_HTTP_Hosts_Settings_AsteriskStringComparer_TypeInfo
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Best_HTTP_Hosts_Settings_AsteriskStringComparer_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_0329bf60((undefined8 *)(lVar9 + 0x20));
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar6 = thunk_FUN_0322f148(*unaff_x24);
                                                  FUN_047aec0c(lVar6,*unaff_x29);
                                                  if (lVar6 != 0) {
                                                    uVar8 = *(undefined8 *)puVar2;
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *unaff_x25;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar8;
                                                        thunk_FUN_0329bf60();
                                                      }
                                                      else {
                                                        FUN_047af440(lVar6,uVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar6;
                                                  thunk_FUN_0329bf60((long *)(lVar9 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar10 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_05e44034(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x18) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_0329bf60();
                                                    puVar3 = 
                                                  UnityEngine_ResourceManagement_Profiling_AssetFrameData_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_ResourceManagement_Profiling_AssetFrameData_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar6 != 0) {
                                                    lVar11 = *(long *)(lVar6 + 0x10);
                                                    lVar12 = *(long *)puVar4;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar11 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar7 = lVar10;
                                                        thunk_FUN_0329bf60(plVar7,lVar10);
                                                      }
                                                      else {
                                                        FUN_047af440(lVar6,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar6;
                                                  thunk_FUN_0329bf60((long *)(lVar9 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar9;
                                                      thunk_FUN_0329bf60(plVar7,lVar9);
                                                    }
                                                    else {
                                                      FUN_047af440();
                                                    }
                                                    lVar9 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                                  );
                                                  FUN_05e44034(lVar9,0);
                                                  puVar5 = System_Xml_Schema_Asttree_TypeInfo;
                                                  puVar2 = System_Func<Touch,_TapGesture>_TypeInfo;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                          System_Func<Touch,_TapGesture>_TypeInfo;
                                                    thunk_FUN_0329bf60();
                                                    *(undefined8 *)(lVar9 + 0x20) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_0329bf60((undefined8 *)(lVar9 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar9 + 0x18) = 0;
                                                    lVar6 = thunk_FUN_0322f148(*unaff_x24);
                                                    FUN_047aec0c(lVar6,*unaff_x29);
                                                    if (lVar6 != 0) {
                                                      uVar8 = *(undefined8 *)puVar2;
                                                      lVar10 = *(long *)(lVar6 + 0x10);
                                                      lVar11 = *unaff_x25;
                                                      *(int *)(lVar6 + 0x1c) =
                                                           *(int *)(lVar6 + 0x1c) + 1;
                                                      if (lVar10 != 0) {
                                                        uVar1 = *(uint *)(lVar6 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar8;
                                                          thunk_FUN_0329bf60();
                                                        }
                                                        else {
                                                          FUN_047af440(lVar6,uVar8,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar11 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar6;
                                                  thunk_FUN_0329bf60((long *)(lVar9 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar10 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_05e44034(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Security_Cryptography_AsymmetricAlgorithm_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar6 != 0) {
                                                    lVar11 = *(long *)(lVar6 + 0x10);
                                                    lVar12 = *(long *)puVar4;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar11 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar7 = lVar10;
                                                        thunk_FUN_0329bf60(plVar7,lVar10);
                                                      }
                                                      else {
                                                        FUN_047af440(lVar6,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar6;
                                                  thunk_FUN_0329bf60((long *)(lVar9 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar9;
                                                      thunk_FUN_0329bf60(plVar7,lVar9);
                                                    }
                                                    else {
                                                      FUN_047af440();
                                                    }
                                                    lVar9 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                                  );
                                                  FUN_05e44034(lVar9,0);
                                                  puVar2 = 
                                                  System_Linq_Expressions_Interpreter_AssignLocalToClosureInstruction_TypeInfo
                                                  ;
                                                  puVar3 = 
                                                  System_Func<StyleSelector,_string>_TypeInfo;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Func<StyleSelector,_string>_TypeInfo;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_0329bf60((undefined8 *)(lVar9 + 0x20));
                                                  *(undefined4 *)(lVar9 + 0x18) = 1;
                                                  lVar6 = thunk_FUN_0322f148(*unaff_x24);
                                                  FUN_047aec0c(lVar6,*unaff_x29);
                                                  if (lVar6 != 0) {
                                                    uVar8 = *(undefined8 *)puVar3;
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *unaff_x25;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar8;
                                                        thunk_FUN_0329bf60();
                                                      }
                                                      else {
                                                        FUN_047af440(lVar6,uVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar6;
                                                  thunk_FUN_0329bf60((long *)(lVar9 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar10 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_05e44034(lVar10,0);
                                                  puVar3 = 
                                                  Oculus_Platform_Models_AssetDetails_TypeInfo;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Oculus_Platform_Models_AssetDetails_TypeInfo;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_ResourceManagement_Profiling_AssetFrameData_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar6 != 0) {
                                                    lVar11 = *(long *)(lVar6 + 0x10);
                                                    lVar12 = *(long *)puVar4;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar11 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar7 = lVar10;
                                                        thunk_FUN_0329bf60(plVar7,lVar10);
                                                      }
                                                      else {
                                                        FUN_047af440(lVar6,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar6;
                                                  thunk_FUN_0329bf60((long *)(lVar9 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar9;
                                                      thunk_FUN_0329bf60(plVar7,lVar9);
                                                    }
                                                    else {
                                                      FUN_047af440();
                                                    }
                                                    lVar9 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                                  );
                                                  FUN_05e44034(lVar9,0);
                                                  puVar5 = MyBox_AssetPath_TypeInfo;
                                                  puVar2 = 
                                                  UnityEditor_Analytics_AssetDatabaseRefreshAnalytic_TypeInfo
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEditor_Analytics_AssetDatabaseRefreshAnalytic_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_0329bf60((undefined8 *)(lVar9 + 0x20));
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar6 = thunk_FUN_0322f148(*unaff_x24);
                                                  FUN_047aec0c(lVar6,*unaff_x29);
                                                  if (lVar6 != 0) {
                                                    uVar8 = *(undefined8 *)puVar2;
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *unaff_x25;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar8;
                                                        thunk_FUN_0329bf60();
                                                      }
                                                      else {
                                                        FUN_047af440(lVar6,uVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar6;
                                                  thunk_FUN_0329bf60((long *)(lVar9 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar10 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_05e44034(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x18) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_0329bf60();
                                                    puVar3 = 
                                                  UnityEngine_ResourceManagement_Profiling_AssetFrameData_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_ResourceManagement_Profiling_AssetFrameData_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar6 != 0) {
                                                    lVar11 = *(long *)(lVar6 + 0x10);
                                                    lVar12 = *(long *)puVar4;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar11 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar7 = lVar10;
                                                        thunk_FUN_0329bf60(plVar7,lVar10);
                                                      }
                                                      else {
                                                        FUN_047af440(lVar6,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar6;
                                                  thunk_FUN_0329bf60((long *)(lVar9 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar9;
                                                      thunk_FUN_0329bf60(plVar7,lVar9);
                                                    }
                                                    else {
                                                      FUN_047af440();
                                                    }
                                                    lVar9 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                                  );
                                                  FUN_05e44034(lVar9,0);
                                                  puVar5 = 
                                                  Oculus_Platform_Models_AssetFileDownloadCancelResult_TypeInfo
                                                  ;
                                                  puVar2 = System_Func<string,_string>_TypeInfo;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                          System_Func<string,_string>_TypeInfo;
                                                    thunk_FUN_0329bf60();
                                                    *(undefined8 *)(lVar9 + 0x20) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_0329bf60((undefined8 *)(lVar9 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar9 + 0x18) = 0;
                                                    lVar6 = thunk_FUN_0322f148(*unaff_x24);
                                                    FUN_047aec0c(lVar6,*unaff_x29);
                                                    if (lVar6 != 0) {
                                                      uVar8 = *(undefined8 *)puVar2;
                                                      lVar10 = *(long *)(lVar6 + 0x10);
                                                      lVar11 = *unaff_x25;
                                                      *(int *)(lVar6 + 0x1c) =
                                                           *(int *)(lVar6 + 0x1c) + 1;
                                                      if (lVar10 != 0) {
                                                        uVar1 = *(uint *)(lVar6 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar8;
                                                          thunk_FUN_0329bf60();
                                                        }
                                                        else {
                                                          FUN_047af440(lVar6,uVar8,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar11 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar6;
                                                  thunk_FUN_0329bf60((long *)(lVar9 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar10 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_05e44034(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Linq_Expressions_AssignBinaryExpression_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar6 != 0) {
                                                    lVar11 = *(long *)(lVar6 + 0x10);
                                                    lVar12 = *(long *)puVar4;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar11 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar7 = lVar10;
                                                        thunk_FUN_0329bf60(plVar7,lVar10);
                                                      }
                                                      else {
                                                        FUN_047af440(lVar6,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar6;
                                                  thunk_FUN_0329bf60((long *)(lVar9 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar9;
                                                      thunk_FUN_0329bf60(plVar7,lVar9);
                                                    }
                                                    else {
                                                      FUN_047af440();
                                                    }
                                                    lVar9 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                                  );
                                                  FUN_05e44034(lVar9,0);
                                                  puVar2 = 
                                                  System_Linq_Expressions_Interpreter_AssignLocalBoxedInstruction_TypeInfo
                                                  ;
                                                  puVar3 = 
                                                  System_Func<StyleSelectorPart,_string>_TypeInfo;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Func<StyleSelectorPart,_string>_TypeInfo;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_0329bf60((undefined8 *)(lVar9 + 0x20));
                                                  *(undefined4 *)(lVar9 + 0x18) = 1;
                                                  lVar6 = thunk_FUN_0322f148(*unaff_x24);
                                                  FUN_047aec0c(lVar6,*unaff_x29);
                                                  if (lVar6 != 0) {
                                                    uVar8 = *(undefined8 *)puVar3;
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *unaff_x25;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar8;
                                                        thunk_FUN_0329bf60();
                                                      }
                                                      else {
                                                        FUN_047af440(lVar6,uVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar6;
                                                  thunk_FUN_0329bf60((long *)(lVar9 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar10 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_05e44034(lVar10,0);
                                                  puVar3 = 
                                                  Oculus_Platform_Models_AssetFileDownloadResult_TypeInfo
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Oculus_Platform_Models_AssetFileDownloadResult_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_ResourceManagement_Profiling_AssetFrameData_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar6 != 0) {
                                                    lVar11 = *(long *)(lVar6 + 0x10);
                                                    lVar12 = *(long *)puVar4;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar11 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar7 = lVar10;
                                                        thunk_FUN_0329bf60(plVar7,lVar10);
                                                      }
                                                      else {
                                                        FUN_047af440(lVar6,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar6;
                                                  thunk_FUN_0329bf60((long *)(lVar9 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar9;
                                                      thunk_FUN_0329bf60(plVar7,lVar9);
                                                    }
                                                    else {
                                                      FUN_047af440();
                                                    }
                                                    lVar9 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                                  );
                                                  FUN_05e44034(lVar9,0);
                                                  puVar5 = 
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_AsymmetricCipherKeyPair_TypeInfo
                                                  ;
                                                  puVar2 = 
                                                  UnityEditor_Analytics_AssetImportStatusAnalytic_TypeInfo
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEditor_Analytics_AssetImportStatusAnalytic_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_0329bf60((undefined8 *)(lVar9 + 0x20));
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar6 = thunk_FUN_0322f148(*unaff_x24);
                                                  FUN_047aec0c(lVar6,*unaff_x29);
                                                  if (lVar6 != 0) {
                                                    uVar8 = *(undefined8 *)puVar2;
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *unaff_x25;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar8;
                                                        thunk_FUN_0329bf60();
                                                      }
                                                      else {
                                                        FUN_047af440(lVar6,uVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar6;
                                                  thunk_FUN_0329bf60((long *)(lVar9 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar10 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_05e44034(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x18) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_0329bf60();
                                                    puVar3 = 
                                                  UnityEngine_ResourceManagement_Profiling_AssetFrameData_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_ResourceManagement_Profiling_AssetFrameData_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar6 != 0) {
                                                    lVar11 = *(long *)(lVar6 + 0x10);
                                                    lVar12 = *(long *)puVar4;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar11 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar7 = lVar10;
                                                        thunk_FUN_0329bf60(plVar7,lVar10);
                                                      }
                                                      else {
                                                        FUN_047af440(lVar6,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar6;
                                                  thunk_FUN_0329bf60((long *)(lVar9 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar9;
                                                      thunk_FUN_0329bf60(plVar7,lVar9);
                                                    }
                                                    else {
                                                      FUN_047af440();
                                                    }
                                                    lVar9 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                                  );
                                                  FUN_05e44034(lVar9,0);
                                                  puVar5 = 
                                                  UnityEditor_Analytics_AssetExportAnalytic_TypeInfo
                                                  ;
                                                  puVar2 = System_Func<TouchControl,_bool>_TypeInfo;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                          System_Func<TouchControl,_bool>_TypeInfo;
                                                    thunk_FUN_0329bf60();
                                                    *(undefined8 *)(lVar9 + 0x20) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_0329bf60((undefined8 *)(lVar9 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar9 + 0x18) = 0;
                                                    lVar6 = thunk_FUN_0322f148(*unaff_x24);
                                                    FUN_047aec0c(lVar6,*unaff_x29);
                                                    if (lVar6 != 0) {
                                                      uVar8 = *(undefined8 *)puVar2;
                                                      lVar10 = *(long *)(lVar6 + 0x10);
                                                      lVar11 = *unaff_x25;
                                                      *(int *)(lVar6 + 0x1c) =
                                                           *(int *)(lVar6 + 0x1c) + 1;
                                                      if (lVar10 != 0) {
                                                        uVar1 = *(uint *)(lVar6 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar8;
                                                          thunk_FUN_0329bf60();
                                                        }
                                                        else {
                                                          FUN_047af440(lVar6,uVar8,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar11 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar6;
                                                  thunk_FUN_0329bf60((long *)(lVar9 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar10 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_05e44034(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Oculus_Platform_Models_AssetFileDeleteResult_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar6 != 0) {
                                                    lVar11 = *(long *)(lVar6 + 0x10);
                                                    lVar12 = *(long *)puVar4;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar11 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar7 = lVar10;
                                                        thunk_FUN_0329bf60(plVar7,lVar10);
                                                      }
                                                      else {
                                                        FUN_047af440(lVar6,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar6;
                                                  thunk_FUN_0329bf60((long *)(lVar9 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar9;
                                                      thunk_FUN_0329bf60(plVar7,lVar9);
                                                    }
                                                    else {
                                                      FUN_047af440();
                                                    }
                                                    *(long *)(unaff_x19 + 0x28) = unaff_x20;
                                                    thunk_FUN_0329bf60();
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
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


