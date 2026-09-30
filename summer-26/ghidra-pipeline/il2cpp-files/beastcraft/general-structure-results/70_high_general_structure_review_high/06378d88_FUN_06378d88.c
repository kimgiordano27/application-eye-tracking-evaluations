/*
FUNCTION_NAME: FUN_06378d88
ENTRY_POINT: 06378d88
PROGRAM: beastcraft-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;telemetry_or_network_hits_12;frame_or_lifecycle_behavior
*/


void FUN_06378d88(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 local_48;
  
  puVar2 = PTR_DAT_06a6c960;
  if ((bRam0000000006e9ba1c & 1) == 0) {
    FUN_02e3ca1c(PTR_DAT_06a6c960);
    FUN_02e3ca1c(PTR_DAT_06a6ce48);
    FUN_02e3ca1c(UnityEngine_Pose_TypeInfo);
    FUN_02e3ca1c(UnityEngine_SpatialTracking_PoseDataSource_TypeInfo);
    FUN_02e3ca1c(UnityEngine_InputSystem_XR_PoseState_TypeInfo);
    FUN_02e3ca1c(System_Xml_Schema_Position_TypeInfo);
    FUN_02e3ca1c(System_Xml_PositionInfo_TypeInfo);
    FUN_02e3ca1c(System_Xml_Schema_Positions_TypeInfo);
    FUN_02e3ca1c(Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_PskIdentity_TypeInfo);
    FUN_02e3ca1c(VContainer_Unity_PostFixedTickableLoopItem_TypeInfo);
    FUN_02e3ca1c(System_Security_Cryptography_X509Certificates_PublicKey_TypeInfo);
    FUN_02e3ca1c(VContainer_Unity_PostLateTickableLoopItem_TypeInfo);
    FUN_02e3ca1c(UnityEngine_Rendering_Universal_PostProcessPass_TypeInfo);
    FUN_02e3ca1c(VContainer_Unity_PostStartableLoopItem_TypeInfo);
    FUN_02e3ca1c(VContainer_Unity_PostTickableLoopItem_TypeInfo);
    FUN_02e3ca1c(Cysharp_Threading_Tasks_UniTaskCompletionSource_TypeInfo);
    FUN_02e3ca1c(Cysharp_Threading_Tasks_UniTaskCompletionSourceCoreShared_TypeInfo);
    FUN_02e3ca1c(Cysharp_Threading_Tasks_UniTaskScheduler_TypeInfo);
    FUN_02e3ca1c(Cysharp_Threading_Tasks_UniTaskStatus_TypeInfo);
    FUN_02e3ca1c(Cysharp_Threading_Tasks_UniTaskSynchronizationContext_TypeInfo);
    FUN_02e3ca1c(System_Text_UnicodeEncoding_TypeInfo);
    FUN_02e3ca1c(UnityEngine_TextCore_Text_UnicodeLineBreakingRules_TypeInfo);
    FUN_02e3ca1c(System_Xml_Schema_UnionFacetsChecker_TypeInfo);
    FUN_02e3ca1c(System_Data_UniqueConstraint_TypeInfo);
    FUN_02e3ca1c(System_Reactive_Unit_TypeInfo);
    FUN_02e3ca1c(UnityEngine_Events_UnityAction_TypeInfo);
    FUN_02e3ca1c(Unity_Services_Core_Device_UnityAdsIdentifier_TypeInfo);
    FUN_02e3ca1c(Unity_Services_Core_Device_UnityAnalyticsIdentifier_TypeInfo);
    FUN_02e3ca1c(System_ComponentModel_TypeDescriptionProvider_TypeInfo);
    bRam0000000006e9ba1c = 1;
  }
  lVar5 = *(long *)puVar2;
  local_48 = 0;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar5 = *(long *)puVar2;
  }
  puVar4 = System_ComponentModel_TypeDescriptionProvider_TypeInfo;
  puVar1 = PTR_DAT_06a2f000;
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar5 != 0) {
    local_48 = *(undefined8 *)(lVar5 + 0x28);
    lVar5 = *(long *)(PTR_DAT_06a2f000 + 0x80);
    if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    uVar6 = FUN_05614e08(lVar5 + 0x20,0);
    uVar7 = FUN_05614e08(*(long *)(puVar1 + 0x28) + 0x20,0);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02e9a04c(lVar5);
      lVar5 = *(long *)puVar4;
    }
    puVar3 = PTR_DAT_06a6ce48;
    puVar8 = *(undefined8 **)(lVar5 + 0xb8);
    lVar9 = puVar8[0x6f];
    if (lVar9 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02e9a04c(lVar5);
        puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
      }
      uVar10 = *puVar8;
      lVar9 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_Schema_Position_TypeInfo);
      FUN_04808e1c(lVar9,uVar10,
                   *(undefined8 *)Cysharp_Threading_Tasks_UniTaskCompletionSource_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x378) = lVar9;
      thunk_FUN_02ee2be8(lVar5 + 0x378,lVar9);
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    FUN_063705cc(&local_48,uVar6,uVar7,lVar9);
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      lVar5 = *(long *)puVar2;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 != 0) {
      local_48 = *(undefined8 *)(lVar5 + 0x28);
      lVar5 = *(long *)(puVar1 + 0x80);
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      uVar6 = FUN_05614e08(lVar5 + 0x20,0);
      uVar7 = FUN_05614e08(*(long *)(puVar1 + 0x30) + 0x20,0);
      lVar5 = *(long *)puVar4;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02e9a04c(lVar5);
        lVar5 = *(long *)puVar4;
      }
      puVar8 = *(undefined8 **)(lVar5 + 0xb8);
      lVar9 = puVar8[0x70];
                    /* try { // try from 063790b8 to 06479147 has its CatchHandler @ 063790b8
                       catch() { ... } // from try @ 063790b8 with catch @ 063790b8
                       catch() { ... } // from try @ 06379230 with catch @ 063790b8
                       catch() { ... } // from try @ 06379278 with catch @ 063790b8
                       catch() { ... } // from try @ 063792d4 with catch @ 063790b8 */
      if (lVar9 == 0) {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02e9a04c(lVar5);
          puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
        }
        uVar10 = *puVar8;
        lVar9 = thunk_FUN_02e78ab8(*(undefined8 *)UnityEngine_InputSystem_XR_PoseState_TypeInfo);
        FUN_04809378(lVar9,uVar10,
                     *(undefined8 *)Cysharp_Threading_Tasks_UniTaskSynchronizationContext_TypeInfo,0
                    );
        lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
        *(long *)(lVar5 + 0x380) = lVar9;
        thunk_FUN_02ee2be8(lVar5 + 0x380,lVar9);
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      FUN_063705cc(&local_48,uVar6,uVar7,lVar9);
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
        lVar5 = *(long *)puVar2;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if (lVar5 != 0) {
        local_48 = *(undefined8 *)(lVar5 + 0x28);
        lVar5 = *(long *)(puVar1 + 0x80);
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar6 = FUN_05614e08(lVar5 + 0x20,0);
        uVar7 = FUN_05614e08(*(long *)(puVar1 + 0x88) + 0x20,0);
        lVar5 = *(long *)puVar4;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02e9a04c(lVar5);
          lVar5 = *(long *)puVar4;
        }
        puVar8 = *(undefined8 **)(lVar5 + 0xb8);
        lVar9 = puVar8[0x71];
        if (lVar9 == 0) {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02e9a04c(lVar5);
            puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
          }
          uVar10 = *puVar8;
          lVar9 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_Schema_Positions_TypeInfo);
          FUN_04808fa4(lVar9,uVar10,*(undefined8 *)System_Text_UnicodeEncoding_TypeInfo,0);
          lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
          *(long *)(lVar5 + 0x388) = lVar9;
          thunk_FUN_02ee2be8(lVar5 + 0x388,lVar9);
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        FUN_063705cc(&local_48,uVar6,uVar7,lVar9);
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
          lVar5 = *(long *)puVar2;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
        if (lVar5 != 0) {
          local_48 = *(undefined8 *)(lVar5 + 0x28);
          lVar5 = *(long *)(puVar1 + 0x80);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          uVar6 = FUN_05614e08(lVar5 + 0x20,0);
          uVar7 = FUN_05614e08(*(long *)(puVar1 + 0x38) + 0x20,0);
          lVar5 = *(long *)puVar4;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02e9a04c(lVar5);
            lVar5 = *(long *)puVar4;
          }
          puVar8 = *(undefined8 **)(lVar5 + 0xb8);
          lVar9 = puVar8[0x72];
          if (lVar9 == 0) {
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_02e9a04c(lVar5);
              puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
            }
            uVar10 = *puVar8;
            lVar9 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_PositionInfo_TypeInfo);
            FUN_04809068(lVar9,uVar10,
                         *(undefined8 *)UnityEngine_TextCore_Text_UnicodeLineBreakingRules_TypeInfo,
                         0);
            lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
            *(long *)(lVar5 + 0x390) = lVar9;
            thunk_FUN_02ee2be8(lVar5 + 0x390,lVar9);
          }
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          FUN_063705cc(&local_48,uVar6,uVar7,lVar9);
          lVar5 = *(long *)puVar2;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
            lVar5 = *(long *)puVar2;
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
          if (lVar5 != 0) {
            local_48 = *(undefined8 *)(lVar5 + 0x28);
            lVar5 = *(long *)(puVar1 + 0x80);
            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar6 = FUN_05614e08(lVar5 + 0x20,0);
            uVar7 = FUN_05614e08(*(long *)(puVar1 + 0x48) + 0x20,0);
            lVar5 = *(long *)puVar4;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_02e9a04c(lVar5);
              lVar5 = *(long *)puVar4;
            }
            puVar8 = *(undefined8 **)(lVar5 + 0xb8);
            lVar9 = puVar8[0x73];
            if (lVar9 == 0) {
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_02e9a04c(lVar5);
                puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
              }
              uVar10 = *puVar8;
              lVar9 = thunk_FUN_02e78ab8(*(undefined8 *)UnityEngine_Pose_TypeInfo);
              FUN_0480912c(lVar9,uVar10,*(undefined8 *)System_Xml_Schema_UnionFacetsChecker_TypeInfo
                           ,0);
              lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
              *(long *)(lVar5 + 0x398) = lVar9;
              thunk_FUN_02ee2be8(lVar5 + 0x398,lVar9);
            }
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            FUN_063705cc(&local_48,uVar6,uVar7,lVar9);
            lVar5 = *(long *)puVar2;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
              lVar5 = *(long *)puVar2;
            }
            lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
            if (lVar5 != 0) {
              local_48 = *(undefined8 *)(lVar5 + 0x28);
              lVar5 = *(long *)(puVar1 + 0x80);
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02e9a04c();
              }
              uVar6 = FUN_05614e08(lVar5 + 0x20,0);
              uVar7 = FUN_05614e08(*(long *)(puVar1 + 0x68) + 0x20,0);
              lVar5 = *(long *)puVar4;
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_02e9a04c(lVar5);
                lVar5 = *(long *)puVar4;
              }
              puVar8 = *(undefined8 **)(lVar5 + 0xb8);
              lVar9 = puVar8[0x74];
              if (lVar9 == 0) {
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_02e9a04c(lVar5);
                  puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
                }
                uVar10 = *puVar8;
                lVar9 = thunk_FUN_02e78ab8(*(undefined8 *)
                                            UnityEngine_SpatialTracking_PoseDataSource_TypeInfo);
                FUN_048091f0(lVar9,uVar10,*(undefined8 *)System_Data_UniqueConstraint_TypeInfo,0);
                lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                *(long *)(lVar5 + 0x3a0) = lVar9;
                thunk_FUN_02ee2be8(lVar5 + 0x3a0,lVar9);
              }
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_02e9a04c();
              }
              FUN_063705cc(&local_48,uVar6,uVar7,lVar9);
              lVar5 = *(long *)puVar2;
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_02e9a04c();
                lVar5 = *(long *)puVar2;
              }
              lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
              if (lVar5 != 0) {
                local_48 = *(undefined8 *)(lVar5 + 0x28);
                lVar5 = *(long *)(puVar1 + 0x80);
                if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_02e9a04c();
                }
                uVar6 = FUN_05614e08(lVar5 + 0x20,0);
                uVar7 = FUN_05614e08(*(long *)(puVar1 + 0x18) + 0x20,0);
                lVar5 = *(long *)puVar4;
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_02e9a04c(lVar5);
                  lVar5 = *(long *)puVar4;
                }
                puVar8 = *(undefined8 **)(lVar5 + 0xb8);
                lVar9 = puVar8[0x75];
                if (lVar9 == 0) {
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_02e9a04c(lVar5);
                    puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
                  }
                  uVar10 = *puVar8;
                  lVar9 = thunk_FUN_02e78ab8(*(undefined8 *)
                                              VContainer_Unity_PostTickableLoopItem_TypeInfo);
                  FUN_04808ee0(lVar9,uVar10,*(undefined8 *)System_Reactive_Unit_TypeInfo,0);
                  lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                  *(long *)(lVar5 + 0x3a8) = lVar9;
                  thunk_FUN_02ee2be8(lVar5 + 0x3a8,lVar9);
                }
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_02e9a04c();
                }
                FUN_063705cc(&local_48,uVar6,uVar7,lVar9);
                lVar5 = *(long *)puVar2;
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_02e9a04c();
                  lVar5 = *(long *)puVar2;
                }
                lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                if (lVar5 != 0) {
                  local_48 = *(undefined8 *)(lVar5 + 0x28);
                  lVar5 = *(long *)(puVar1 + 0x80);
                  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_02e9a04c();
                  }
                  uVar6 = FUN_05614e08(lVar5 + 0x20,0);
                  uVar7 = FUN_05614e08(*(long *)(puVar1 + 0x40) + 0x20,0);
                  lVar5 = *(long *)puVar4;
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_02e9a04c(lVar5);
                    lVar5 = *(long *)puVar4;
                  }
                  puVar8 = *(undefined8 **)(lVar5 + 0xb8);
                  lVar9 = puVar8[0x76];
                  if (lVar9 == 0) {
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      thunk_FUN_02e9a04c(lVar5);
                      puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
                    }
                    uVar10 = *puVar8;
                    lVar9 = thunk_FUN_02e78ab8(*(undefined8 *)
                                                UnityEngine_Rendering_Universal_PostProcessPass_TypeInfo
                                              );
                    FUN_04809500(lVar9,uVar10,*(undefined8 *)UnityEngine_Events_UnityAction_TypeInfo
                                 ,0);
                    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                    *(long *)(lVar5 + 0x3b0) = lVar9;
                    thunk_FUN_02ee2be8(lVar5 + 0x3b0,lVar9);
                  }
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_02e9a04c();
                  }
                  FUN_063705cc(&local_48,uVar6,uVar7,lVar9);
                  lVar5 = *(long *)puVar2;
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_02e9a04c();
                    lVar5 = *(long *)puVar2;
                  }
                  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                  if (lVar5 != 0) {
                    local_48 = *(undefined8 *)(lVar5 + 0x28);
                    lVar5 = *(long *)(puVar1 + 0x80);
                    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                      thunk_FUN_02e9a04c();
                    }
                    uVar6 = FUN_05614e08(lVar5 + 0x20,0);
                    uVar7 = FUN_05614e08(*(long *)(puVar1 + 0x50) + 0x20,0);
                    lVar5 = *(long *)puVar4;
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      thunk_FUN_02e9a04c(lVar5);
                      lVar5 = *(long *)puVar4;
                    }
                    puVar8 = *(undefined8 **)(lVar5 + 0xb8);
                    lVar9 = puVar8[0x77];
                    if (lVar9 == 0) {
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        thunk_FUN_02e9a04c(lVar5);
                        puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
                      }
                      uVar10 = *puVar8;
                      lVar9 = thunk_FUN_02e78ab8(*(undefined8 *)
                                                  VContainer_Unity_PostLateTickableLoopItem_TypeInfo
                                                );
                      FUN_048095c4(lVar9,uVar10,
                                   *(undefined8 *)
                                    Unity_Services_Core_Device_UnityAdsIdentifier_TypeInfo,0);
                      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                      *(long *)(lVar5 + 0x3b8) = lVar9;
                      thunk_FUN_02ee2be8(lVar5 + 0x3b8,lVar9);
                    }
                    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                      thunk_FUN_02e9a04c();
                    }
                    FUN_063705cc(&local_48,uVar6,uVar7,lVar9);
                    lVar5 = *(long *)puVar2;
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      thunk_FUN_02e9a04c();
                      lVar5 = *(long *)puVar2;
                    }
                    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                    if (lVar5 != 0) {
                      local_48 = *(undefined8 *)(lVar5 + 0x28);
                      lVar5 = *(long *)(puVar1 + 0x80);
                      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                        thunk_FUN_02e9a04c();
                      }
                      uVar6 = FUN_05614e08(lVar5 + 0x20,0);
                      uVar7 = FUN_05614e08(*(long *)(puVar1 + 0x70) + 0x20,0);
                      lVar5 = *(long *)puVar4;
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        thunk_FUN_02e9a04c(lVar5);
                        lVar5 = *(long *)puVar4;
                      }
                      puVar8 = *(undefined8 **)(lVar5 + 0xb8);
                      lVar9 = puVar8[0x78];
                      if (lVar9 == 0) {
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          thunk_FUN_02e9a04c(lVar5);
                          puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
                        }
                        uVar10 = *puVar8;
                        lVar9 = thunk_FUN_02e78ab8(*(undefined8 *)
                                                                                                        
                                                  VContainer_Unity_PostFixedTickableLoopItem_TypeInfo
                                                  );
                        FUN_04809688(lVar9,uVar10,
                                     *(undefined8 *)
                                      Unity_Services_Core_Device_UnityAnalyticsIdentifier_TypeInfo,0
                                    );
                        lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                        *(long *)(lVar5 + 0x3c0) = lVar9;
                        thunk_FUN_02ee2be8(lVar5 + 0x3c0,lVar9);
                      }
                      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                        thunk_FUN_02e9a04c();
                      }
                      FUN_063705cc(&local_48,uVar6,uVar7,lVar9);
                      lVar5 = *(long *)puVar2;
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        thunk_FUN_02e9a04c();
                        lVar5 = *(long *)puVar2;
                      }
                      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                      if (lVar5 != 0) {
                        local_48 = *(undefined8 *)(lVar5 + 0x28);
                        lVar5 = *(long *)(puVar1 + 0x80);
                        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                          thunk_FUN_02e9a04c();
                        }
                        uVar6 = FUN_05614e08(lVar5 + 0x20,0);
                        uVar7 = FUN_05614e08(*(long *)(puVar1 + 0x78) + 0x20,0);
                        lVar5 = *(long *)puVar4;
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          thunk_FUN_02e9a04c(lVar5);
                          lVar5 = *(long *)puVar4;
                        }
                        puVar8 = *(undefined8 **)(lVar5 + 0xb8);
                        lVar9 = puVar8[0x79];
                        if (lVar9 == 0) {
                          if (*(int *)(lVar5 + 0xe4) == 0) {
                            thunk_FUN_02e9a04c(lVar5);
                            puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
                          }
                          uVar10 = *puVar8;
                          lVar9 = thunk_FUN_02e78ab8(*(undefined8 *)
                                                                                                            
                                                  VContainer_Unity_PostStartableLoopItem_TypeInfo);
                          FUN_0480943c(lVar9,uVar10,
                                       *(undefined8 *)
                                        Cysharp_Threading_Tasks_UniTaskCompletionSourceCoreShared_TypeInfo
                                       ,0);
                          lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                          *(long *)(lVar5 + 0x3c8) = lVar9;
                          thunk_FUN_02ee2be8(lVar5 + 0x3c8,lVar9);
                        }
                        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                          thunk_FUN_02e9a04c();
                        }
                        FUN_063705cc(&local_48,uVar6,uVar7,lVar9);
                        lVar5 = *(long *)puVar2;
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          thunk_FUN_02e9a04c();
                          lVar5 = *(long *)puVar2;
                        }
                        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                        if (lVar5 != 0) {
                          local_48 = *(undefined8 *)(lVar5 + 0x28);
                          lVar5 = *(long *)(puVar1 + 0x80);
                          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                            thunk_FUN_02e9a04c();
                          }
                          uVar6 = FUN_05614e08(lVar5 + 0x20,0);
                          uVar7 = FUN_05614e08(*(long *)(puVar1 + 0x90) + 0x20,0);
                          lVar5 = *(long *)puVar4;
                          if (*(int *)(lVar5 + 0xe4) == 0) {
                            thunk_FUN_02e9a04c(lVar5);
                            lVar5 = *(long *)puVar4;
                          }
                          puVar8 = *(undefined8 **)(lVar5 + 0xb8);
                          lVar9 = puVar8[0x7a];
                          if (lVar9 == 0) {
                            if (*(int *)(lVar5 + 0xe4) == 0) {
                              thunk_FUN_02e9a04c(lVar5);
                              puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
                            }
                            uVar10 = *puVar8;
                            lVar9 = thunk_FUN_02e78ab8(*(undefined8 *)
                                                                                                                
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_PskIdentity_TypeInfo
                                                  );
                            FUN_048092b4(lVar9,uVar10,
                                         *(undefined8 *)
                                          Cysharp_Threading_Tasks_UniTaskScheduler_TypeInfo,0);
                            lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                            *(long *)(lVar5 + 0x3d0) = lVar9;
                            thunk_FUN_02ee2be8(lVar5 + 0x3d0,lVar9);
                          }
                          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                            thunk_FUN_02e9a04c();
                          }
                          FUN_063705cc(&local_48,uVar6,uVar7,lVar9);
                          lVar5 = *(long *)puVar2;
                          if (*(int *)(lVar5 + 0xe4) == 0) {
                            thunk_FUN_02e9a04c();
                            lVar5 = *(long *)puVar2;
                          }
                          lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                          if (lVar5 != 0) {
                            local_48 = *(undefined8 *)(lVar5 + 0x28);
                            lVar5 = *(long *)(puVar1 + 0x90);
                            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                              thunk_FUN_02e9a04c();
                            }
                            uVar6 = FUN_05614e08(lVar5 + 0x20,0);
                            uVar7 = FUN_05614e08(*(long *)(puVar1 + 0x80) + 0x20,0);
                            lVar5 = *(long *)puVar4;
                            if (*(int *)(lVar5 + 0xe4) == 0) {
                              thunk_FUN_02e9a04c(lVar5);
                              lVar5 = *(long *)puVar4;
                            }
                            puVar8 = *(undefined8 **)(lVar5 + 0xb8);
                            lVar9 = puVar8[0x7b];
                            if (lVar9 == 0) {
                              if (*(int *)(lVar5 + 0xe4) == 0) {
                                thunk_FUN_02e9a04c(lVar5);
                                puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
                              }
                              uVar10 = *puVar8;
                              lVar9 = thunk_FUN_02e78ab8(*(undefined8 *)
                                                                                                                    
                                                  System_Security_Cryptography_X509Certificates_PublicKey_TypeInfo
                                                  );
                              FUN_0480cad8(lVar9,uVar10,
                                           *(undefined8 *)
                                            Cysharp_Threading_Tasks_UniTaskStatus_TypeInfo,0);
                              lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                              *(long *)(lVar5 + 0x3d8) = lVar9;
                              thunk_FUN_02ee2be8(lVar5 + 0x3d8,lVar9);
                            }
                            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                              thunk_FUN_02e9a04c();
                            }
                            FUN_063705cc(&local_48,uVar6,uVar7,lVar9);
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
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


