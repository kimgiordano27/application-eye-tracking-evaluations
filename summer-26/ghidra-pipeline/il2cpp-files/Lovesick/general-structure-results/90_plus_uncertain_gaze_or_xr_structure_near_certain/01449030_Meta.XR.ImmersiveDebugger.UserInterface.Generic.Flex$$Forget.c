/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Flex$$Forget
ENTRY_POINT: 01449030
PROGRAM: Lovesick-libil2cpp.so
SCORE: 141
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_5;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Flex__Forget(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x19;
  byte unaff_w20;
  long unaff_x21;
  undefined8 *unaff_x22;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x1a8));
  thunk_FUN_00d48444(
                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ushort>__
                    );
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_TryGetValue__
                    );
  thunk_FUN_00d48444(System_Func<TMP_SpriteCharacter,_uint>_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0xa49) = 1;
  lVar4 = FUN_00da4fb8(*unaff_x22,6);
  auVar10 = _DAT_0293f800;
  if (lVar4 == 0) goto LAB_014494c8;
  uVar1 = *(uint *)(lVar4 + 0x18);
  if (uVar1 != 0) {
    uVar8 = *(undefined8 *)PTR_DAT_033ec030;
    *(long *)(lVar4 + 0x30) = DAT_0293f800._8_8_;
    *(long *)(lVar4 + 0x28) = auVar10._0_8_;
    *(undefined8 *)(lVar4 + 0x20) = uVar8;
    auVar10 = _LAB_028aa0b0;
    if (uVar1 != 1) {
      uVar8 = *(undefined8 *)
               Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ushort>__
      ;
      *(long *)(lVar4 + 0x48) = LAB_028aa0b0._8_8_;
      *(long *)(lVar4 + 0x40) = auVar10._0_8_;
      *(undefined8 *)(lVar4 + 0x38) = uVar8;
      if (2 < uVar1) {
        uVar8 = *(undefined8 *)UnityEngine_InputSystem_InputProcessor_TypeInfo;
        *(undefined8 *)(lVar4 + 0x58) = 0;
        *(undefined8 *)(lVar4 + 0x60) = 0;
        *(undefined8 *)(lVar4 + 0x50) = uVar8;
        if (uVar1 != 3) {
          auVar10 = NEON_fmov(0x3f800000,4);
          uVar8 = *(undefined8 *)StringLiteral_5916;
          *(long *)(lVar4 + 0x78) = auVar10._8_8_;
          *(long *)(lVar4 + 0x70) = auVar10._0_8_;
          *(undefined8 *)(lVar4 + 0x68) = uVar8;
          if (4 < uVar1) {
            uVar8 = *(undefined8 *)
                     Method_Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_<>c__DisplayClass25_0_<TryBuildImmutableForDictionaryContract>b__0__
            ;
            *(undefined8 *)(lVar4 + 0x88) = 0;
            *(undefined8 *)(lVar4 + 0x90) = 0;
            *(undefined8 *)(lVar4 + 0x80) = uVar8;
            puVar3 = UnityEngine_UIElements_PointerDispatchState_TypeInfo;
            if (uVar1 != 5) {
              uVar8 = *(undefined8 *)
                       Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_TryGetValue__
              ;
              *(undefined8 *)(lVar4 + 0xa0) = 0;
              *(undefined8 *)(lVar4 + 0xa8) = 0;
              *(undefined8 *)(lVar4 + 0x98) = uVar8;
              *(long *)(unaff_x19 + 0x10) = lVar4;
              puVar2 = PTR_DAT_033eb8e0;
              plVar5 = (long *)FUN_00da4fb8(*(undefined8 *)puVar3,8);
              lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
              if ((lVar4 != 0) &&
                 (FUN_01449504(ZEXT816(0x3f800000),0x3f800000,0x3f800000,0x3f800000,lVar4,
                               *(undefined8 *)CollisionSound_<SoundPlayBuffer>d__14_TypeInfo),
                 plVar5 != (long *)0x0)) {
                lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar5 + 0x40));
                puVar3 = StringLiteral_2791;
                if (lVar6 == 0) {
LAB_014494e8:
                  uVar8 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                  FUN_00da5038(uVar8,0);
                }
                if ((int)plVar5[3] == 0) goto LAB_014494e4;
                plVar5[4] = lVar4;
                lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                if (lVar4 != 0) {
                  FUN_014495a4(lVar4,*(undefined8 *)
                                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_get_Task__
                              );
                  lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar5 + 0x40));
                  if (lVar6 == 0) goto LAB_014494e8;
                  if (*(uint *)(plVar5 + 3) < 2) goto LAB_014494e4;
                  plVar5[5] = lVar4;
                  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                  if (lVar4 != 0) {
                    FUN_014495a4(lVar4,*(undefined8 *)
                                        Method_UnityEngine_Component_GetComponentsInChildren<Animator>__
                                );
                    lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar5 + 0x40));
                    if (lVar6 == 0) goto LAB_014494e8;
                    if (*(uint *)(plVar5 + 3) < 3) goto LAB_014494e4;
                    plVar5[6] = lVar4;
                    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                    if (lVar4 != 0) {
                      FUN_014495a4(lVar4,*(undefined8 *)
                                          OVR_OpenVR_IVRSystem__IsTrackedDeviceConnected_TypeInfo);
                      lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar5 + 0x40));
                      if (lVar6 == 0) goto LAB_014494e8;
                      if (*(uint *)(plVar5 + 3) < 4) goto LAB_014494e4;
                      plVar5[7] = lVar4;
                      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                      if (lVar4 != 0) {
                        FUN_014495a4(lVar4,*(undefined8 *)
                                            OVR_OpenVR_IVRApplications__IsQuitUserPromptRequested_TypeInfo
                                    );
                        lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar5 + 0x40));
                        if (lVar6 == 0) goto LAB_014494e8;
                        if (*(uint *)(plVar5 + 3) < 5) goto LAB_014494e4;
                        plVar5[8] = lVar4;
                        lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                        if (lVar4 != 0) {
                          FUN_014495a4(lVar4,*(undefined8 *)
                                              System_Func<TMP_SpriteCharacter,_uint>_TypeInfo);
                          lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar5 + 0x40));
                          if (lVar6 == 0) goto LAB_014494e8;
                          if (*(uint *)(plVar5 + 3) < 6) goto LAB_014494e4;
                          plVar5[9] = lVar4;
                          lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                          if (lVar4 != 0) {
                            FUN_014495a4(lVar4,*(undefined8 *)
                                                Method_System_Runtime_Remoting_RemotingConfiguration_RegisterActivatedClientType__
                                        );
                            lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar5 + 0x40));
                            if (lVar6 == 0) goto LAB_014494e8;
                            if (*(uint *)(plVar5 + 3) < 7) goto LAB_014494e4;
                            plVar5[10] = lVar4;
                            lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                            if (lVar4 != 0) {
                              FUN_01449504(ZEXT816(0),0,0,0x3f800000,lVar4,
                                           *(undefined8 *)
                                            Method_Unity_Burst_Intrinsics_Arm_Neon_vhsubq_u32__);
                              lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar5 + 0x40));
                              puVar3 = StringLiteral_12432;
                              if (lVar6 == 0) goto LAB_014494e8;
                              if (*(uint *)(plVar5 + 3) < 8) goto LAB_014494e4;
                              plVar5[0xb] = lVar4;
                              *(long **)(unaff_x19 + 0x18) = plVar5;
                              *(undefined4 *)(unaff_x19 + 0x20) = 3;
                              puVar2 = StringLiteral_11235;
                              uVar8 = FUN_00da4fb8(*(undefined8 *)puVar3,0);
                              *(undefined8 *)(unaff_x19 + 0x30) = uVar8;
                              lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                              puVar3 = 
                              Method_UnityEngine_XR_Interaction_Toolkit_XRRayInteractor_RemoveAt<RaycastHit>__
                              ;
                              if (lVar4 != 0) {
                                FUN_01298da0(lVar4,*(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRRayInteractor_RemoveAt<RaycastHit>__
                                            );
                                *(long *)(unaff_x19 + 0x38) = lVar4;
                                FUN_017b46ec();
                                *(byte *)(unaff_x19 + 0x24) = unaff_w20 & 1;
                                lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                if (lVar4 != 0) {
                                  FUN_01298da0(lVar4,*(undefined8 *)puVar3);
                                  lVar6 = *(long *)(unaff_x19 + 0x10);
                                  *(long *)(unaff_x19 + 0x38) = lVar4;
                                  puVar3 = StringLiteral_6661;
                                  if (lVar6 != 0) {
                                    lVar4 = 0;
                                    uVar9 = 0;
                                    do {
                                      if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)uVar9) {
                                        return;
                                      }
                                      if (*(uint *)(lVar6 + 0x18) <= uVar9) goto LAB_014494e4;
                                      if (*(long *)(unaff_x19 + 0x38) == 0) break;
                                      FUN_0129a054(*(long *)(unaff_x19 + 0x38),
                                                   *(undefined8 *)(lVar6 + lVar4 + 0x20));
                                      lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                      if (lVar7 == 0) break;
                                      uVar9 = uVar9 + 1;
                                      lVar4 = lVar4 + 0x18;
                                      FUN_017b46ec(lVar7,0);
                                      *(long *)(lVar7 + 0x10) = unaff_x19;
                                      lVar6 = *(long *)(unaff_x19 + 0x10);
                                      *(long *)(unaff_x19 + 0x40) = lVar7;
                                    } while (lVar6 != 0);
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
LAB_014494c8:
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
          }
        }
      }
    }
  }
LAB_014494e4:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


