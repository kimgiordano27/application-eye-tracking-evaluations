/*
FUNCTION_NAME: FUN_05cef384
ENTRY_POINT: 05cef384
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_15;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_05cef384(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  
  puVar2 = Method_System_Collections_Generic_HashSet<GameObject>_Contains__;
  puVar3 = Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__;
  puVar1 = PTR_DAT_069fb9d8;
  if ((DAT_06dc2db8 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069ffab0);
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<GameObject>_Contains__);
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<IClippable>_GetEnumerator__);
    FUN_02d965b8(PTR_DAT_06a19280);
    FUN_02d965b8(PTR_DAT_069fb9d8);
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<IClippable>_Remove__);
    FUN_02d965b8(
                Method_Unity_Burst_FunctionPointer<BurstMathUtility_OrthogonalUpVector_00000353_PostfixBurstDelegate>_get_Value__
                );
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<IDebugDisplaySettingsData>__ctor__);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__);
    FUN_02d965b8(Mono_Security_PKCS7_SignedData_TypeInfo);
    FUN_02d965b8(Mono_Security_PKCS7_SignerInfo_TypeInfo);
    FUN_02d965b8(UnityEngine_UIElements_PanelSettings_RuntimePanelAccess_TypeInfo);
    FUN_02d965b8(Unity_Networking_QoS_UcgQosServer_var);
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<IDebugDisplaySettingsData>_Add__);
    FUN_02d965b8(PTR_DAT_069ff558);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>__ctor__);
    FUN_02d965b8(UnityEngine_Physics_ContactEventDelegate_TypeInfo);
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<IDebugDisplaySettingsData>_Clear__);
    FUN_02d965b8(Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_0_TypeInfo);
    FUN_02d965b8(Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_1_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0db58);
    FUN_02d965b8(Assets_Scripts_Player_<>c__DisplayClass103_0_TypeInfo);
    FUN_02d965b8(
                Unity_Services_Authentication_PlayerAccounts_PlayerAccountServiceInternal_<>c__DisplayClass59_0_TypeInfo
                );
    FUN_02d965b8(
                UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass20_0_TypeInfo
                );
    FUN_02d965b8(PTR_DAT_069fc208);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<TerrainTileCoord,_Terrain>_Add__);
    FUN_02d965b8(
                Method_System_Collections_Generic_HashSet<IDebugDisplaySettingsData>_GetEnumerator__
                );
    FUN_02d965b8(Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass9_1_TypeInfo);
    DAT_06dc2db8 = 1;
  }
  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
  FUN_0552aca4(uVar8,0);
  **(undefined8 **)(*(long *)puVar3 + 0xb8) = uVar8;
  LeanTween__value(*(undefined8 *)(*(long *)puVar3 + 0xb8),uVar8);
  lVar9 = FUN_02d966a4(*(undefined8 *)puVar1,0x13);
  if (lVar9 != 0) {
    if (*(int *)(lVar9 + 0x18) != 0) {
      *(undefined8 *)(lVar9 + 0x20) =
           *(undefined8 *)
            Unity_Services_Authentication_PlayerAccounts_PlayerAccountServiceInternal_<>c__DisplayClass59_0_TypeInfo
      ;
      LeanTween__value((undefined8 *)(lVar9 + 0x20));
      if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)PTR_DAT_06a0db58;
        LeanTween__value((undefined8 *)(lVar9 + 0x28));
        if (2 < *(uint *)(lVar9 + 0x18)) {
          *(undefined8 *)(lVar9 + 0x30) =
               *(undefined8 *)UnityEngine_Physics_ContactEventDelegate_TypeInfo;
          LeanTween__value((undefined8 *)(lVar9 + 0x30));
          if ((*(uint *)(lVar9 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar9 + 0x38) = *(undefined8 *)PTR_DAT_069ff558;
            LeanTween__value((undefined8 *)(lVar9 + 0x38));
            if (4 < *(uint *)(lVar9 + 0x18)) {
              *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)Unity_Networking_QoS_UcgQosServer_var;
              LeanTween__value((undefined8 *)(lVar9 + 0x40));
              if (5 < *(uint *)(lVar9 + 0x18)) {
                *(undefined8 *)(lVar9 + 0x48) =
                     *(undefined8 *)
                      Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_0_TypeInfo;
                LeanTween__value((undefined8 *)(lVar9 + 0x48));
                if (6 < *(uint *)(lVar9 + 0x18)) {
                  *(undefined8 *)(lVar9 + 0x50) =
                       *(undefined8 *)
                        UnityEngine_UIElements_PanelSettings_RuntimePanelAccess_TypeInfo;
                  LeanTween__value((undefined8 *)(lVar9 + 0x50));
                  if ((*(uint *)(lVar9 + 0x18) & 0xfffffff8) != 0) {
                    *(undefined8 *)(lVar9 + 0x58) =
                         *(undefined8 *)Assets_Scripts_Player_<>c__DisplayClass103_0_TypeInfo;
                    LeanTween__value((undefined8 *)(lVar9 + 0x58));
                    if (8 < *(uint *)(lVar9 + 0x18)) {
                      *(undefined8 *)(lVar9 + 0x60) =
                           *(undefined8 *)Mono_Security_PKCS7_SignerInfo_TypeInfo;
                      LeanTween__value((undefined8 *)(lVar9 + 0x60));
                      if (9 < *(uint *)(lVar9 + 0x18)) {
                        *(undefined8 *)(lVar9 + 0x68) =
                             *(undefined8 *)
                              UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass20_0_TypeInfo
                        ;
                        LeanTween__value((undefined8 *)(lVar9 + 0x68));
                        if (10 < *(uint *)(lVar9 + 0x18)) {
                          *(undefined8 *)(lVar9 + 0x70) =
                               *(undefined8 *)
                                Method_System_Collections_Generic_HashSet<IDebugDisplaySettingsData>_Add__
                          ;
                          LeanTween__value((undefined8 *)(lVar9 + 0x70));
                          if (0xb < *(uint *)(lVar9 + 0x18)) {
                            *(undefined8 *)(lVar9 + 0x78) =
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<TerrainTileCoord,_Terrain>_Add__
                            ;
                            LeanTween__value((undefined8 *)(lVar9 + 0x78));
                            if (0xc < *(uint *)(lVar9 + 0x18)) {
                              *(undefined8 *)(lVar9 + 0x80) =
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>__ctor__
                              ;
                              LeanTween__value((undefined8 *)(lVar9 + 0x80));
                              if (0xd < *(uint *)(lVar9 + 0x18)) {
                                *(undefined8 *)(lVar9 + 0x88) =
                                     *(undefined8 *)Mono_Security_PKCS7_SignedData_TypeInfo;
                                LeanTween__value((undefined8 *)(lVar9 + 0x88));
                                if (0xe < *(uint *)(lVar9 + 0x18)) {
                                  *(undefined8 *)(lVar9 + 0x90) =
                                       *(undefined8 *)
                                        Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass9_1_TypeInfo
                                  ;
                                  LeanTween__value((undefined8 *)(lVar9 + 0x90));
                                  if ((*(uint *)(lVar9 + 0x18) & 0xfffffff0) != 0) {
                                    *(undefined8 *)(lVar9 + 0x98) =
                                         *(undefined8 *)
                                          Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_1_TypeInfo
                                    ;
                                    LeanTween__value((undefined8 *)(lVar9 + 0x98));
                                    if (0x10 < *(uint *)(lVar9 + 0x18)) {
                                      *(undefined8 *)(lVar9 + 0xa0) =
                                           *(undefined8 *)
                                            Method_System_Collections_Generic_HashSet<IDebugDisplaySettingsData>_Clear__
                                      ;
                                      LeanTween__value((undefined8 *)(lVar9 + 0xa0));
                                      if (0x11 < *(uint *)(lVar9 + 0x18)) {
                                        *(undefined8 *)(lVar9 + 0xa8) =
                                             *(undefined8 *)
                                              Method_System_Collections_Generic_HashSet<IDebugDisplaySettingsData>_GetEnumerator__
                                        ;
                                        LeanTween__value((undefined8 *)(lVar9 + 0xa8));
                                        puVar7 = 
                                        Method_System_Collections_Generic_HashSet<IDebugDisplaySettingsData>__ctor__
                                        ;
                                        puVar6 = 
                                        Method_System_Collections_Generic_HashSet<IClippable>_Remove__
                                        ;
                                        puVar5 = 
                                        Method_System_Collections_Generic_HashSet<IClippable>_GetEnumerator__
                                        ;
                                        puVar4 = 
                                        Method_Unity_Burst_FunctionPointer<BurstMathUtility_OrthogonalUpVector_00000353_PostfixBurstDelegate>_get_Value__
                                        ;
                                        puVar2 = PTR_DAT_06a19280;
                                        puVar1 = PTR_DAT_069ffab0;
                                        if (0x12 < *(uint *)(lVar9 + 0x18)) {
                                          *(undefined8 *)(lVar9 + 0xb0) =
                                               *(undefined8 *)PTR_DAT_069fc208;
                                          LeanTween__value();
                                          plVar10 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
                                          *plVar10 = lVar9;
                                          LeanTween__value(plVar10,lVar9);
                                          uVar8 = FUN_02d966a4(*(undefined8 *)puVar2,0x20);
                                          FUN_05411dc0(uVar8,*(undefined8 *)puVar6,0);
                                          puVar11 = (undefined8 *)
                                                    (*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
                                          *puVar11 = uVar8;
                                          LeanTween__value(puVar11,uVar8);
                                          uVar8 = FUN_02d966a4(*(undefined8 *)puVar1,6);
                                          FUN_05411dc0(uVar8,*(undefined8 *)puVar4,0);
                                          puVar11 = (undefined8 *)
                                                    (*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
                                          *puVar11 = uVar8;
                                          LeanTween__value(puVar11,uVar8);
                                          uVar8 = FUN_02d966a4(*(undefined8 *)puVar5,0x80);
                                          FUN_05411dc0(uVar8,*(undefined8 *)puVar7,0);
                                          puVar11 = (undefined8 *)
                                                    (*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
                                          *puVar11 = uVar8;
                                          LeanTween__value(puVar11,uVar8);
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
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


