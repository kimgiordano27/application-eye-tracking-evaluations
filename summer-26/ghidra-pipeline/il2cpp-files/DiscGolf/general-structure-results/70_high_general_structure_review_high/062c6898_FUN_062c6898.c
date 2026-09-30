/*
FUNCTION_NAME: FUN_062c6898
ENTRY_POINT: 062c6898
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


void FUN_062c6898(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  
  if ((DAT_06dc77dc & 1) == 0) {
    FUN_02d965b8(Method_LipSyncMicInput_StartMicrophone_Internal__);
    FUN_02d965b8(Method_System_Collections_Specialized_ListDictionary_Add__);
    FUN_02d965b8(Method_System_Threading_LazyInitializer_EnsureInitialized<ManualResetEvent>__);
    FUN_02d965b8(Method_LightingExampleManager_HandleOnSceneWillLoad__);
                    /* try { // try from 062c68f4 to 063c68f7 has its CatchHandler @ 062c6904 */
    FUN_02d965b8(Method_System_Runtime_Remoting_Lifetime_Lease_ProcessSponsorResponse__);
                    /* try { // try from 062c68f8 to 063c6927 has its CatchHandler @ 062c65e4 */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 062c67c8 with catch @ 062c68fc
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 062c6784 with catch @ 062c6900
                        */
    FUN_02d965b8(Method_LobbyCreateUI_<Awake>b__22_2__);
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 062c68f4 with catch @ 062c6904
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 062c6764 with catch @ 062c6908
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 062c6750 with catch @ 062c690c
                        */
    FUN_02d965b8(Method_UnityEngine_Rendering_LightUnitUtils_GetNativeLightUnit__);
    FUN_02d965b8(Method_TMPro_SetPropertyUtility_SetClass<Scrollbar>__);
    FUN_02d965b8(Method_TMPro_SetPropertyUtility_SetClass<TMP_FontAsset>__);
                    /* try { // try from 062c6928 to 063c692b has its CatchHandler @ 062c6944 */
                    /* try { // try from 062c692c to 063c6947 has its CatchHandler @ 062c65e4 */
    FUN_02d965b8(Method_System_MonoCustomAttrs_GetCustomAttributesData__);
    FUN_02d965b8(Method_Unity_Properties_PropertyPath_get_Item__);
                    /* catch() { ... } // from try @ 062c6928 with catch @ 062c6944 */
                    /* try { // try from 062c6948 to 063c694f has its CatchHandler @ 062c6958 */
    FUN_02d965b8(Method_TMPro_SetPropertyUtility_SetClass<TMP_InputValidator>__);
                    /* try { // try from 062c6950 to 063c695b has its CatchHandler @ 062c65e4 */
    FUN_02d965b8(Method_System_MonoCustomAttrs_IsDefined__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 062c6948 with catch @ 062c6958
                        */
    FUN_02d965b8(Method_Unity_Properties_PropertyPathPart_CheckKind__);
    FUN_02d965b8(Method_TMPro_SetPropertyUtility_SetClass<TMP_Text>__);
    FUN_02d965b8(
                Method_Mono_Net_Security_MonoSslClientAuthenticationOptions_get_ClientCertificateRequired__
                );
    FUN_02d965b8(Method_Unity_Networking_QoS_QosRequest_Send__);
    FUN_02d965b8(Method_TMPro_SetPropertyUtility_SetClass<TMP_InputField_TextSelectionEvent>__);
    FUN_02d965b8(Method_Mono_Net_Security_MonoSslClientAuthenticationOptions_get_ServerCertificate__
                );
    FUN_02d965b8(Method_TMPro_SetPropertyUtility_SetClass<TMP_InputField_TouchScreenKeyboardEvent>__
                );
    FUN_02d965b8(Method_TMPro_SetPropertyUtility_SetStruct<bool>__);
    FUN_02d965b8(Method_Unity_Networking_QoS_QosRequest_set_Title__);
    FUN_02d965b8(Method_TMPro_SetPropertyUtility_SetStruct<char>__);
    DAT_06dc77dc = 1;
  }
  if (param_1[10] == 0) goto LAB_062c7204;
  FUN_061d59b8(param_1[10],0);
  if ((char)param_1[0x1b] != '\0') {
    plVar11 = (long *)param_1[0x12];
    uVar6 = thunk_FUN_02dd3144(*(undefined8 *)Method_LipSyncMicInput_StartMicrophone_Internal__);
    FUN_04be213c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x230),0);
    puVar2 = Method_LobbyCreateUI_<Awake>b__22_2__;
    puVar1 = Method_System_Collections_Specialized_ListDictionary_Add__;
    if (plVar11 != (long *)0x0) {
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)Method_LobbyCreateUI_<Awake>b__22_2__) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_062c6a80;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)Method_LobbyCreateUI_<Awake>b__22_2__,1);
LAB_062c6a80:
      (*(code *)*puVar7)(plVar11,uVar6,puVar7[1]);
      plVar11 = (long *)param_1[0x12];
      uVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
      FUN_04be213c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x240),0);
      if (plVar11 != (long *)0x0) {
        lVar8 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 3) * 0x10 + 0x138);
              goto LAB_062c6b08;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)puVar2,3);
LAB_062c6b08:
        (*(code *)*puVar7)(plVar11,uVar6,puVar7[1]);
        puVar1 = Method_System_Runtime_Remoting_Lifetime_Lease_ProcessSponsorResponse__;
        plVar11 = (long *)param_1[0x13];
        if (plVar11 != (long *)0x0) {
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) ==
                  *(long *)Method_System_Runtime_Remoting_Lifetime_Lease_ProcessSponsorResponse__) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_062c6b74;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)
                   FUN_02dd004c(plVar11,*(long *)
                                         Method_System_Runtime_Remoting_Lifetime_Lease_ProcessSponsorResponse__
                                ,0);
LAB_062c6b74:
          lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
          puVar2 = Method_Unity_Properties_PropertyPath_get_Item__;
          uVar6 = thunk_FUN_02dd3144(*(undefined8 *)Method_Unity_Properties_PropertyPath_get_Item__)
          ;
          FUN_0494d298(uVar6,param_1,*(undefined8 *)(*param_1 + 0x250),0);
          puVar4 = Method_Unity_Networking_QoS_QosRequest_Send__;
          if (lVar8 == 0) goto LAB_062c7204;
          FUN_0495040c(lVar8,uVar6,*(undefined8 *)Method_Unity_Networking_QoS_QosRequest_Send__);
          plVar11 = (long *)param_1[0x13];
          if (plVar11 == (long *)0x0) goto LAB_062c7204;
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                goto LAB_062c6c24;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)puVar1,1);
LAB_062c6c24:
          lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
          puVar3 = Method_Unity_Properties_PropertyPathPart_CheckKind__;
          uVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                      Method_Unity_Properties_PropertyPathPart_CheckKind__);
          FUN_0494d298(uVar6,param_1,*(undefined8 *)(*param_1 + 0x260),0);
          puVar5 = Method_Unity_Networking_QoS_QosRequest_set_Title__;
          if (lVar8 == 0) goto LAB_062c7204;
          FUN_0495040c(lVar8,uVar6,*(undefined8 *)Method_Unity_Networking_QoS_QosRequest_set_Title__
                      );
          plVar11 = (long *)param_1[0x13];
          if (plVar11 == (long *)0x0) goto LAB_062c7204;
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                goto LAB_062c6cd4;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)puVar1,2);
LAB_062c6cd4:
          lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
          uVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
          FUN_0494d298(uVar6,param_1,*(undefined8 *)(*param_1 + 0x270),0);
          if (lVar8 == 0) goto LAB_062c7204;
          FUN_0495040c(lVar8,uVar6,*(undefined8 *)puVar4);
          plVar11 = (long *)param_1[0x13];
          if (plVar11 == (long *)0x0) goto LAB_062c7204;
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 3) * 0x10 + 0x138);
                goto LAB_062c6d74;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)puVar1,3);
LAB_062c6d74:
          lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
          uVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
          FUN_0494d298(uVar6,param_1,*(undefined8 *)(*param_1 + 0x280),0);
          if (lVar8 == 0) goto LAB_062c7204;
          FUN_0495040c(lVar8,uVar6,*(undefined8 *)puVar5);
        }
        puVar1 = Method_UnityEngine_Rendering_LightUnitUtils_GetNativeLightUnit__;
        plVar11 = (long *)param_1[0x14];
        if (plVar11 != (long *)0x0) {
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) ==
                  *(long *)Method_UnityEngine_Rendering_LightUnitUtils_GetNativeLightUnit__) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_062c6e18;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)
                   FUN_02dd004c(plVar11,*(long *)
                                         Method_UnityEngine_Rendering_LightUnitUtils_GetNativeLightUnit__
                                ,0);
LAB_062c6e18:
          lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
          uVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                      Method_System_MonoCustomAttrs_GetCustomAttributesData__);
          FUN_0494d298(uVar6,param_1,*(undefined8 *)(*param_1 + 0x290),0);
          if (lVar8 == 0) goto LAB_062c7204;
          FUN_0495040c(lVar8,uVar6,
                       *(undefined8 *)
                        Method_Mono_Net_Security_MonoSslClientAuthenticationOptions_get_ClientCertificateRequired__
                      );
          plVar11 = (long *)param_1[0x14];
          if (plVar11 == (long *)0x0) goto LAB_062c7204;
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                goto LAB_062c6ec8;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)puVar1,1);
LAB_062c6ec8:
          lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
          uVar6 = thunk_FUN_02dd3144(*(undefined8 *)Method_System_MonoCustomAttrs_IsDefined__);
          FUN_0494d298(uVar6,param_1,*(undefined8 *)(*param_1 + 0x2a0),0);
          if (lVar8 == 0) goto LAB_062c7204;
          FUN_0495040c(lVar8,uVar6,
                       *(undefined8 *)
                        Method_Mono_Net_Security_MonoSslClientAuthenticationOptions_get_ServerCertificate__
                      );
        }
        puVar1 = Method_LightingExampleManager_HandleOnSceneWillLoad__;
        plVar11 = (long *)param_1[0x15];
        if (plVar11 != (long *)0x0) {
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) ==
                  *(long *)Method_LightingExampleManager_HandleOnSceneWillLoad__) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_062c6f7c;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)
                   FUN_02dd004c(plVar11,*(long *)
                                         Method_LightingExampleManager_HandleOnSceneWillLoad__,0);
LAB_062c6f7c:
          lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
          uVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                      Method_TMPro_SetPropertyUtility_SetClass<TMP_FontAsset>__);
          FUN_0494d298(uVar6,param_1,*(undefined8 *)(*param_1 + 0x2b0),0);
          if (lVar8 == 0) goto LAB_062c7204;
          FUN_0495040c(lVar8,uVar6,*(undefined8 *)Method_TMPro_SetPropertyUtility_SetStruct<char>__)
          ;
          plVar11 = (long *)param_1[0x15];
          if (plVar11 == (long *)0x0) goto LAB_062c7204;
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                goto LAB_062c702c;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)puVar1,1);
LAB_062c702c:
          lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
          uVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                      Method_TMPro_SetPropertyUtility_SetClass<TMP_InputValidator>__
                                    );
          FUN_0494d298(uVar6,param_1,*(undefined8 *)(*param_1 + 0x2c0),0);
          if (lVar8 == 0) goto LAB_062c7204;
          FUN_0495040c(lVar8,uVar6,
                       *(undefined8 *)
                        Method_TMPro_SetPropertyUtility_SetClass<TMP_InputField_TextSelectionEvent>__
                      );
        }
        puVar1 = Method_System_Threading_LazyInitializer_EnsureInitialized<ManualResetEvent>__;
        plVar11 = (long *)param_1[0x16];
        if (plVar11 == (long *)0x0) goto LAB_062c71e8;
        lVar8 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) ==
                *(long *)
                 Method_System_Threading_LazyInitializer_EnsureInitialized<ManualResetEvent>__) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_062c70e0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_02dd004c(plVar11,*(long *)
                                       Method_System_Threading_LazyInitializer_EnsureInitialized<ManualResetEvent>__
                              ,0);
LAB_062c70e0:
        lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
        uVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                    Method_TMPro_SetPropertyUtility_SetClass<TMP_Text>__);
        FUN_0494d298(uVar6,param_1,*(undefined8 *)(*param_1 + 0x2d0),0);
        if (lVar8 != 0) {
          FUN_0495040c(lVar8,uVar6,
                       *(undefined8 *)
                        Method_TMPro_SetPropertyUtility_SetClass<TMP_InputField_TouchScreenKeyboardEvent>__
                      );
          plVar11 = (long *)param_1[0x16];
          if (plVar11 != (long *)0x0) {
            lVar8 = *plVar11;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                  puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                  goto LAB_062c7190;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar7 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)puVar1,1);
LAB_062c7190:
            lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
            uVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                        Method_TMPro_SetPropertyUtility_SetClass<Scrollbar>__);
            FUN_0494d298(uVar6,param_1,*(undefined8 *)(*param_1 + 0x2e0),0);
            if (lVar8 != 0) {
              FUN_0495040c(lVar8,uVar6,
                           *(undefined8 *)Method_TMPro_SetPropertyUtility_SetStruct<bool>__);
              goto LAB_062c71e8;
            }
          }
        }
      }
    }
LAB_062c7204:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
LAB_062c71e8:
  *(undefined1 *)(param_1 + 0x1b) = 0;
  return;
}


