/*
FUNCTION_NAME: UnityEngine.Rendering.CommandBuffer$$ConfigureFoveatedRendering_Injected
ENTRY_POINT: 06d89a14
PROGRAM: vandalizer-libil2cpp.so
SCORE: 118
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;possible_biometrics;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;ui_interaction;telemetry;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_1;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering;functionality_possible_biometrics_hits_7
*/


void UnityEngine_Rendering_CommandBuffer__ConfigureFoveatedRendering_Injected(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long in_x9;
  long lVar8;
  long lVar9;
  uint *unaff_x19;
  undefined8 *unaff_x20;
  int *unaff_x21;
  undefined8 unaff_x22;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 unaff_x28;
  long *unaff_x29;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
  if (in_x9 != 0) {
    uVar1 = *unaff_x19;
    if (uVar1 < *(uint *)(in_x9 + 0x18)) {
      *unaff_x19 = uVar1 + 1;
      *(undefined8 *)(in_x9 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
      thunk_FUN_0329bf60();
    }
    else {
      FUN_047af440();
    }
    lVar3 = thunk_FUN_0322f148(*(undefined8 *)
                                UnityEngine_Animations_AnimationScriptPlayable_TypeInfo);
    FUN_06d70ac4(lVar3,0);
    puVar2 = System_Security_Cryptography_AsnEncodedData_TypeInfo;
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x10) =
           *(undefined8 *)
            Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1TaggedObjectParser_TypeInfo;
      thunk_FUN_0329bf60();
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
      thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x20));
      *(undefined4 *)(lVar3 + 0x18) = 3;
      lVar4 = thunk_FUN_0322f148(*unaff_x27);
      FUN_047aec0c(lVar4,*unaff_x20);
      if (lVar4 != 0) {
        lVar8 = *unaff_x29;
        uVar6 = *(undefined8 *)
                 Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1OctetStringParser_TypeInfo;
        lVar7 = *(long *)(lVar4 + 0x10);
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar7 != 0) {
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
            thunk_FUN_0329bf60();
          }
          else {
            FUN_047af440(lVar4,uVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          *(long *)(lVar3 + 0x30) = lVar4;
          thunk_FUN_0329bf60((long *)(lVar3 + 0x30),lVar4);
          lVar4 = thunk_FUN_0322f148(*(undefined8 *)
                                      UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo);
          FUN_047aec0c(lVar4,*(undefined8 *)
                              UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo);
          lVar7 = thunk_FUN_0322f148(*(undefined8 *)
                                      UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo);
          FUN_06d70abc(lVar7,0);
          if (lVar7 != 0) {
            *(undefined8 *)(lVar7 + 0x18) =
                 *(undefined8 *)System_Configuration_Assemblies_AssemblyHashAlgorithm_TypeInfo;
            thunk_FUN_0329bf60();
            *(undefined8 *)(lVar7 + 0x10) = *unaff_x25;
            thunk_FUN_0329bf60();
            if (lVar4 != 0) {
              lVar8 = *(long *)(lVar4 + 0x10);
              lVar9 = *(long *)UnityEngine_UI_AnimationTriggers_TypeInfo;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar8 != 0) {
                uVar1 = *(uint *)(lVar4 + 0x18);
                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                  *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                  plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar5 = lVar7;
                  thunk_FUN_0329bf60(plVar5,lVar7);
                }
                else {
                  FUN_047af440(lVar4,lVar7,
                               *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                }
                *(long *)(lVar3 + 0x28) = lVar4;
                thunk_FUN_0329bf60((long *)(lVar3 + 0x28),lVar4);
                *unaff_x21 = *unaff_x21 + 1;
                lVar4 = *unaff_x26;
                if (lVar4 != 0) {
                  uVar1 = *unaff_x19;
                  if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                    *unaff_x19 = uVar1 + 1;
                    plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar5 = lVar3;
                    thunk_FUN_0329bf60(plVar5,lVar3);
                  }
                  else {
                    FUN_047af440();
                  }
                  lVar3 = thunk_FUN_0322f148(*(undefined8 *)
                                              UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                            );
                  FUN_06d70ac4(lVar3,0);
                  puVar2 = Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1StreamParser_TypeInfo;
                  if (lVar3 != 0) {
                    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)PTR_DAT_075eb090;
                    thunk_FUN_0329bf60();
                    *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
                    thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x20));
                    *(undefined4 *)(lVar3 + 0x18) = 3;
                    lVar4 = thunk_FUN_0322f148(*unaff_x27);
                    FUN_047aec0c(lVar4,*unaff_x20);
                    if (lVar4 != 0) {
                      lVar8 = *unaff_x29;
                      uVar6 = *(undefined8 *)PTR_DAT_076257f0;
                      lVar7 = *(long *)(lVar4 + 0x10);
                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                      if (lVar7 != 0) {
                        uVar1 = *(uint *)(lVar4 + 0x18);
                        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                          *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                          thunk_FUN_0329bf60();
                        }
                        else {
                          FUN_047af440(lVar4,uVar6,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                        }
                        *(long *)(lVar3 + 0x30) = lVar4;
                        thunk_FUN_0329bf60((long *)(lVar3 + 0x30),lVar4);
                        lVar4 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                        
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                        FUN_047aec0c(lVar4,*(undefined8 *)
                                            UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                    );
                        lVar7 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                        
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                        FUN_06d70abc(lVar7,0);
                        if (lVar7 != 0) {
                          *(undefined8 *)(lVar7 + 0x18) =
                               *(undefined8 *)
                                Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Operators_Asn1VerifierFactory_TypeInfo
                          ;
                          thunk_FUN_0329bf60();
                          *(undefined8 *)(lVar7 + 0x10) = *unaff_x25;
                          thunk_FUN_0329bf60();
                          if (lVar4 != 0) {
                            lVar8 = *(long *)(lVar4 + 0x10);
                            lVar9 = *(long *)UnityEngine_UI_AnimationTriggers_TypeInfo;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                            if (lVar8 != 0) {
                              uVar1 = *(uint *)(lVar4 + 0x18);
                              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar5 = lVar7;
                                thunk_FUN_0329bf60(plVar5,lVar7);
                              }
                              else {
                                FUN_047af440(lVar4,lVar7,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                              }
                              *(long *)(lVar3 + 0x28) = lVar4;
                              thunk_FUN_0329bf60((long *)(lVar3 + 0x28),lVar4);
                              *unaff_x21 = *unaff_x21 + 1;
                              lVar4 = *unaff_x26;
                              if (lVar4 != 0) {
                                uVar1 = *unaff_x19;
                                if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                  *unaff_x19 = uVar1 + 1;
                                  plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                                  *plVar5 = lVar3;
                                  thunk_FUN_0329bf60(plVar5,lVar3);
                                }
                                else {
                                  FUN_047af440();
                                }
                                lVar3 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                        
                                                  UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                                  );
                                FUN_06d70ac4(lVar3,0);
                                puVar2 = UnityEngine_UIElements_AttachToPanelEvent_TypeInfo;
                                if (lVar3 != 0) {
                                  *(undefined8 *)(lVar3 + 0x10) =
                                       *(undefined8 *)
                                        System_Runtime_Serialization_AttributeData_TypeInfo;
                                  thunk_FUN_0329bf60();
                                  *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
                                  thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x20));
                                  *(undefined4 *)(lVar3 + 0x18) = 4;
                                  lVar4 = thunk_FUN_0322f148(*unaff_x27);
                                  FUN_047aec0c(lVar4,*unaff_x20);
                                  if (lVar4 != 0) {
                                    lVar8 = *unaff_x29;
                                    uVar6 = *(undefined8 *)
                                             UnityEngine_Events_UnityEvent<SpriteRenderer>_TypeInfo;
                                    lVar7 = *(long *)(lVar4 + 0x10);
                                    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                    if (lVar7 != 0) {
                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                        *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                        ;
                                        thunk_FUN_0329bf60();
                                      }
                                      else {
                                        FUN_047af440(lVar4,uVar6,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      *(long *)(lVar3 + 0x30) = lVar4;
                                      thunk_FUN_0329bf60((long *)(lVar3 + 0x30),lVar4);
                                      lVar4 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                    
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                      FUN_047aec0c(lVar4,*(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                      lVar7 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                    
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                      FUN_06d70abc(lVar7,0);
                                      if (lVar7 != 0) {
                                        *(undefined8 *)(lVar7 + 0x18) =
                                             *(undefined8 *)
                                              UnityEngine_Rendering_AtlasAllocator_TypeInfo;
                                        thunk_FUN_0329bf60();
                                        *(undefined8 *)(lVar7 + 0x10) = *unaff_x25;
                                        thunk_FUN_0329bf60();
                                        if (lVar4 != 0) {
                                          lVar8 = *(long *)(lVar4 + 0x10);
                                          lVar9 = *(long *)UnityEngine_UI_AnimationTriggers_TypeInfo
                                          ;
                                          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                          if (lVar8 != 0) {
                                            uVar1 = *(uint *)(lVar4 + 0x18);
                                            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                              plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20)
                                              ;
                                              *plVar5 = lVar7;
                                              thunk_FUN_0329bf60(plVar5,lVar7);
                                            }
                                            else {
                                              FUN_047af440(lVar4,lVar7,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar9 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            *(long *)(lVar3 + 0x28) = lVar4;
                                            thunk_FUN_0329bf60((long *)(lVar3 + 0x28),lVar4);
                                            *unaff_x21 = *unaff_x21 + 1;
                                            lVar4 = *unaff_x26;
                                            if (lVar4 != 0) {
                                              uVar1 = *unaff_x19;
                                              if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                *unaff_x19 = uVar1 + 1;
                                                plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 +
                                                                 0x20);
                                                *plVar5 = lVar3;
                                                thunk_FUN_0329bf60(plVar5,lVar3);
                                              }
                                              else {
                                                FUN_047af440();
                                              }
                                              lVar3 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                    
                                                  UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                                  );
                                              FUN_06d70ac4(lVar3,0);
                                              puVar2 = 
                                              Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_BasicTlsSrpIdentity_TypeInfo
                                              ;
                                              if (lVar3 != 0) {
                                                *(undefined8 *)(lVar3 + 0x10) =
                                                     *(undefined8 *)
                                                                                                            
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_BasicTlsPskIdentity_TypeInfo
                                                ;
                                                thunk_FUN_0329bf60();
                                                *(undefined8 *)(lVar3 + 0x20) =
                                                     *(undefined8 *)puVar2;
                                                thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x20));
                                                *(undefined4 *)(lVar3 + 0x18) = 1;
                                                lVar4 = thunk_FUN_0322f148(*unaff_x27);
                                                FUN_047aec0c(lVar4,*unaff_x20);
                                                if (lVar4 != 0) {
                                                  lVar8 = *unaff_x29;
                                                  uVar6 = *(undefined8 *)
                                                                                                                      
                                                  UnityEngine_Rendering_BatchRendererGroup_TypeInfo;
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_0329bf60();
                                                    }
                                                    else {
                                                      FUN_047af440(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_0329bf60((long *)(lVar3 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar7 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_06d70abc(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_BatchRendererGroupRuntimeAnalytic_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x25;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)
                                                  UnityEngine_UI_AnimationTriggers_TypeInfo;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_0329bf60(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_047af440(lVar4,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_0329bf60((long *)(lVar3 + 0x28),lVar4);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x26;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x19;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x19 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_0329bf60(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_047af440();
                                                    }
                                                    lVar3 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                                  );
                                                  FUN_06d70ac4(lVar3,0);
                                                  puVar2 = 
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_Crypto_Impl_BC_BcTls13Verifier_TypeInfo
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Analytics_BatchRenderGroupUsageAnalytic_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar3 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x20));
                                                  *(undefined4 *)(lVar3 + 0x18) = 1;
                                                  lVar4 = thunk_FUN_0322f148(*unaff_x27);
                                                  FUN_047aec0c(lVar4,*unaff_x20);
                                                  if (lVar4 != 0) {
                                                    lVar8 = *unaff_x29;
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_Crypto_Impl_BC_BcChaCha20Poly1305_TypeInfo
                                                  ;
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_0329bf60();
                                                    }
                                                    else {
                                                      FUN_047af440(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_0329bf60((long *)(lVar3 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar7 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_06d70abc(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_BatchBufferTarget_TypeInfo;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x25;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)
                                                  UnityEngine_UI_AnimationTriggers_TypeInfo;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_0329bf60(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_047af440(lVar4,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_0329bf60((long *)(lVar3 + 0x28),lVar4);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x26;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x19;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x19 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_0329bf60(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_047af440();
                                                    }
                                                    lVar3 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                                  );
                                                  FUN_06d70ac4(lVar3,0);
                                                  puVar2 = MS_Internal_Xml_XPath_Axis_TypeInfo;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_X509_AuthorityKeyIdentifier_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar3 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x20));
                                                  *(undefined4 *)(lVar3 + 0x18) = 1;
                                                  lVar4 = thunk_FUN_0322f148(*unaff_x27);
                                                  FUN_047aec0c(lVar4,*unaff_x20);
                                                  if (lVar4 != 0) {
                                                    lVar8 = *unaff_x29;
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Oculus_Platform_Models_AvatarEditorResult_TypeInfo
                                                  ;
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_0329bf60();
                                                    }
                                                    else {
                                                      FUN_047af440(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_0329bf60((long *)(lVar3 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar7 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_06d70abc(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_BatchMaterialID_TypeInfo;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x25;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)
                                                  UnityEngine_UI_AnimationTriggers_TypeInfo;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_0329bf60(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_047af440(lVar4,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_0329bf60((long *)(lVar3 + 0x28),lVar4);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x26;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x19;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x19 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_0329bf60(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_047af440();
                                                    }
                                                    lVar3 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                                  );
                                                  FUN_06d70ac4(lVar3,0);
                                                  puVar2 = 
                                                  Unity_Services_Authentication_AuthenticationNetworkClient_TypeInfo
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                          UnityEngine_Awaitable_TypeInfo;
                                                    thunk_FUN_0329bf60();
                                                    *(undefined8 *)(lVar3 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar3 + 0x18) = 1;
                                                    lVar4 = thunk_FUN_0322f148(*unaff_x27);
                                                    FUN_047aec0c(lVar4,*unaff_x20);
                                                    if (lVar4 != 0) {
                                                      lVar8 = *unaff_x29;
                                                      uVar6 = *(undefined8 *)
                                                                                                                              
                                                  System_Data_AutoIncrementInt64_TypeInfo;
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_0329bf60();
                                                    }
                                                    else {
                                                      FUN_047af440(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_0329bf60((long *)(lVar3 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar7 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_06d70abc(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_Crypto_Impl_BC_BcTlsCertificate_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x25;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)
                                                  UnityEngine_UI_AnimationTriggers_TypeInfo;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_0329bf60(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_047af440(lVar4,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_0329bf60((long *)(lVar3 + 0x28),lVar4);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x26;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x19;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x19 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_0329bf60(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_047af440();
                                                    }
                                                    lVar3 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                                  );
                                                  FUN_06d70ac4(lVar3,0);
                                                  puVar2 = AuthenticationManager_TypeInfo;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Threading_Tasks_AwaitTaskContinuation_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar3 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x20));
                                                  *(undefined4 *)(lVar3 + 0x18) = 0;
                                                  lVar4 = thunk_FUN_0322f148(*unaff_x27);
                                                  FUN_047aec0c(lVar4,*unaff_x20);
                                                  if (lVar4 != 0) {
                                                    lVar8 = *unaff_x29;
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Cms_AuthenticatedDataParser_TypeInfo
                                                  ;
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_0329bf60();
                                                    }
                                                    else {
                                                      FUN_047af440(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_0329bf60((long *)(lVar3 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar7 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_06d70abc(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Prng_BasicEntropySourceProvider_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x25;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)
                                                  UnityEngine_UI_AnimationTriggers_TypeInfo;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_0329bf60(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_047af440(lVar4,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_0329bf60((long *)(lVar3 + 0x28),lVar4);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x26;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x19;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x19 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_0329bf60(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_047af440();
                                                    }
                                                    lVar3 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                                  );
                                                  FUN_06d70ac4(lVar3,0);
                                                  puVar2 = 
                                                  Unity_Services_Authentication_AuthenticationApiClient_TypeInfo
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Oculus_Interaction_AutoMoveTowardsTarget_TypeInfo;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar3 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x20));
                                                  *(undefined4 *)(lVar3 + 0x18) = 0;
                                                  lVar4 = thunk_FUN_0322f148(*unaff_x27);
                                                  FUN_047aec0c(lVar4,*unaff_x20);
                                                  if (lVar4 != 0) {
                                                    lVar8 = *unaff_x29;
                                                    uVar6 = *(undefined8 *)
                                                             System_Net_Authorization_TypeInfo;
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar7 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar7 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar6;
                                                        thunk_FUN_0329bf60();
                                                      }
                                                      else {
                                                        FUN_047af440(lVar4,uVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_0329bf60((long *)(lVar3 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar7 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_06d70abc(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                          UnityEngine_Rendering_BatchID_TypeInfo;
                                                    thunk_FUN_0329bf60();
                                                    *(undefined8 *)(lVar7 + 0x10) = *unaff_x25;
                                                    thunk_FUN_0329bf60();
                                                    if (lVar4 != 0) {
                                                      lVar8 = *(long *)(lVar4 + 0x10);
                                                      lVar9 = *(long *)
                                                  UnityEngine_UI_AnimationTriggers_TypeInfo;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_0329bf60(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_047af440(lVar4,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_0329bf60((long *)(lVar3 + 0x28),lVar4);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x26;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x19;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x19 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_0329bf60(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_047af440();
                                                    }
                                                    lVar3 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                                  );
                                                  FUN_06d70ac4(lVar3,0);
                                                  puVar2 = 
                                                  UnityEngine_Rendering_BatchRendererGroupGlobals_TypeInfo
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                          UnityEngine_Rendering_BatchMeshID_TypeInfo
                                                    ;
                                                    thunk_FUN_0329bf60();
                                                    *(undefined8 *)(lVar3 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar3 + 0x18) = 4;
                                                    lVar4 = thunk_FUN_0322f148(*unaff_x27);
                                                    FUN_047aec0c(lVar4,*unaff_x20);
                                                    if (lVar4 != 0) {
                                                      lVar8 = *unaff_x29;
                                                      uVar6 = *(undefined8 *)
                                                                                                                              
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Modes_Gcm_BasicGcmExponentiator_TypeInfo
                                                  ;
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_0329bf60();
                                                    }
                                                    else {
                                                      FUN_047af440(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_0329bf60((long *)(lVar3 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar7 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_06d70abc(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_BatchPackedCullingViewID_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x25;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)
                                                  UnityEngine_UI_AnimationTriggers_TypeInfo;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_0329bf60(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_047af440(lVar4,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_0329bf60((long *)(lVar3 + 0x28),lVar4);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x26;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x19;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x19 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_0329bf60(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_047af440();
                                                    }
                                                    lVar3 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_Animations_AnimationScriptPlayable_TypeInfo
                                                  );
                                                  FUN_06d70ac4(lVar3,0);
                                                  puVar2 = 
                                                  UnityEngine_Rendering_BatchCullingViewType_TypeInfo
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Ocsp_BasicOcspResp_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar3 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x20));
                                                  *(undefined4 *)(lVar3 + 0x18) = 4;
                                                  lVar4 = thunk_FUN_0322f148(*unaff_x27);
                                                  FUN_047aec0c(lVar4,*unaff_x20);
                                                  if (lVar4 != 0) {
                                                    lVar8 = *unaff_x29;
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Ocsp_BasicOcspResponse_TypeInfo
                                                  ;
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_0329bf60();
                                                    }
                                                    else {
                                                      FUN_047af440(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_0329bf60((long *)(lVar3 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo
                                                  );
                                                  FUN_047aec0c(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo
                                                  );
                                                  lVar7 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                                  );
                                                  FUN_06d70abc(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_Crypto_Impl_BC_BcSsl3Hmac_TypeInfo
                                                  ;
                                                  thunk_FUN_0329bf60();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x25;
                                                  thunk_FUN_0329bf60();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)
                                                  UnityEngine_UI_AnimationTriggers_TypeInfo;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_0329bf60(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_047af440(lVar4,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_0329bf60((long *)(lVar3 + 0x28),lVar4);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x26;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x19;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x19 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_0329bf60(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_047af440();
                                                    }
                                                    *(undefined8 *)(in_stack_00000000 + 0x28) =
                                                         unaff_x28;
                                                    thunk_FUN_0329bf60();
                                                    FUN_06d70888(in_stack_00000008,in_stack_00000000
                                                                 ,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


