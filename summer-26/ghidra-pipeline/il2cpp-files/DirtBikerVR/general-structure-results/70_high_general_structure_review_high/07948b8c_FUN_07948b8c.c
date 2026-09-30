/*
FUNCTION_NAME: FUN_07948b8c
ENTRY_POINT: 07948b8c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_21
*/


void FUN_07948b8c(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  int *piVar17;
  int iVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80 [2];
  undefined4 local_70;
  undefined8 local_68;
  
  if ((DAT_08987e31 & 1) == 0) {
    FUN_03a8a718(Unity_Services_Analytics_AnalyticsServiceInstance_TypeInfo);
    FUN_03a8a718(Unity_Services_Analytics_AnalyticsServiceSystemCalls_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_ATGTextEventHandler_TypeInfo);
    FUN_03a8a718(UnityEngine_Analytics_AnalyticsSessionInfo_TypeInfo);
    FUN_03a8a718(Unity_Services_Analytics_Internal_AnalyticsUserIdServiceComponent_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<SocketPose>_TypeInfo);
    FUN_03a8a718(Unity_Services_Analytics_Internal_AnalyticsWebRequest_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_AncestorFilter_TypeInfo);
    FUN_03a8a718(Meta_XR_MultiplayerBlocks_Colocation_Anchor_TypeInfo);
    FUN_03a8a718(Meta_XR_MultiplayerBlocks_Colocation_AnchorDebugVisual_TypeInfo);
    FUN_03a8a718(System_Linq_Expressions_Interpreter_AndInstruction_TypeInfo);
    FUN_03a8a718(UnityEngine_Android_AndroidApplication_TypeInfo);
    FUN_03a8a718(UnityEngine_Android_AndroidAssetPackInfo_TypeInfo);
    FUN_03a8a718(UnityEngine_Android_AndroidAssetPackState_TypeInfo);
    FUN_03a8a718(UnityEngine_Android_AndroidAssetPackUseMobileDataRequestResult_TypeInfo);
    FUN_03a8a718(PTR_DAT_08496dc0);
    FUN_03a8a718(UnityEngine_Rendering_HighDefinition_HDCamera_ViewConstants___TypeInfo);
    FUN_03a8a718(UnityEngine_InputSystem_HID_HIDSupport_HIDPageUsage___TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_HableCurve_Segment___TypeInfo);
    FUN_03a8a718(UnityEngine_Android_AndroidAssetPacks_TypeInfo);
    FUN_03a8a718(UnityEngine_InputSystem_Android_LowLevel_AndroidAxis_TypeInfo);
    FUN_03a8a718(UnityEngine_Terrain___TypeInfo);
    FUN_03a8a718(Unity_Services_Authentication_PlayerAccounts_AndroidBrowserUtils_TypeInfo);
    DAT_08987e31 = 1;
  }
  puVar4 = UnityEngine_UIElements_ATGTextEventHandler_TypeInfo;
  puVar3 = UnityEngine_Terrain___TypeInfo;
  local_68 = 0;
  local_70 = 0;
  if (*param_1 == 0) {
    local_68 = *(undefined8 *)(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    lVar13 = *(long *)(param_1 + 10);
    lVar10 = FUN_044e130c(*(undefined8 *)(param_1 + 8),
                          *(undefined8 *)System_Collections_Generic_List<SocketPose>_TypeInfo);
    lVar11 = *(long *)puVar3;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar11 = *(long *)puVar3;
    }
    puVar16 = *(undefined8 **)(lVar11 + 0xb8);
    lVar19 = puVar16[6];
    if (lVar19 == 0) {
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        puVar16 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
      }
      uVar20 = *puVar16;
      lVar19 = thunk_FUN_03ac74bc(*(undefined8 *)UnityEngine_Analytics_AnalyticsSessionInfo_TypeInfo
                                 );
      FUN_05d8d150(lVar19,uVar20,*(undefined8 *)UnityEngine_Android_AndroidAssetPacks_TypeInfo,0);
      plVar12 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30);
      *plVar12 = lVar19;
      thunk_FUN_03afed3c(plVar12,lVar19);
    }
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar20 = FUN_043cc1a0(lVar10,lVar19,
                          *(undefined8 *)System_Linq_Expressions_Interpreter_AndInstruction_TypeInfo
                         );
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0(uVar20,uVar20);
    }
    lVar13 = FUN_07945f20(lVar13);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    local_68 = FUN_058b71ec(lVar13,*(undefined8 *)
                                    UnityEngine_Rendering_HableCurve_Segment___TypeInfo);
    uVar14 = FUN_0587c6c4(&local_68,
                          *(undefined8 *)
                           UnityEngine_InputSystem_HID_HIDSupport_HIDPageUsage___TypeInfo);
    if ((uVar14 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xc) = local_68;
      thunk_FUN_03afed3c(param_1 + 0xc,0);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fd51b0(param_1 + 2,&local_68,param_1,
                   *(undefined8 *)Unity_Services_Analytics_AnalyticsServiceInstance_TypeInfo);
      return;
    }
  }
  lVar13 = FUN_0587c704(&local_68,
                        *(undefined8 *)
                         UnityEngine_Rendering_HighDefinition_HDCamera_ViewConstants___TypeInfo);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar1 = *(undefined4 *)(lVar13 + 0x18);
  lVar10 = thunk_FUN_03ac74bc(*(undefined8 *)
                               UnityEngine_Android_AndroidAssetPackUseMobileDataRequestResult_TypeInfo
                             );
  FUN_04caaf2c(lVar10,uVar1,*(undefined8 *)UnityEngine_Android_AndroidApplication_TypeInfo);
  puVar4 = Unity_Services_Analytics_Internal_AnalyticsWebRequest_TypeInfo;
  iVar18 = *(int *)(lVar13 + 0x18);
  if (iVar18 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar11 = *plVar12;
    uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar14 != 0) {
      piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) ==
            *(long *)Unity_Services_Analytics_Internal_AnalyticsWebRequest_TypeInfo) {
          puVar16 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_07948ee8;
        }
        uVar14 = uVar14 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar14 != 0);
    }
    puVar16 = (undefined8 *)
              FUN_03ac43c4(plVar12,*(long *)
                                    Unity_Services_Analytics_Internal_AnalyticsWebRequest_TypeInfo,0
                          );
LAB_07948ee8:
    iVar9 = (*(code *)*puVar16)(plVar12,puVar16[1]);
    if (iVar18 == iVar9) {
      lVar11 = *(long *)puVar3;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar11 = *(long *)puVar3;
      }
      puVar16 = *(undefined8 **)(lVar11 + 0xb8);
      lVar19 = puVar16[7];
      if (lVar19 == 0) {
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          puVar16 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
        }
        uVar20 = *puVar16;
        lVar19 = thunk_FUN_03ac74bc(*(undefined8 *)
                                     Unity_Services_Analytics_Internal_AnalyticsUserIdServiceComponent_TypeInfo
                                   );
        FUN_05d8d26c(lVar19,uVar20,
                     *(undefined8 *)UnityEngine_InputSystem_Android_LowLevel_AndroidAxis_TypeInfo,0)
        ;
        plVar12 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x38);
        *plVar12 = lVar19;
        thunk_FUN_03afed3c(plVar12,lVar19);
      }
      lVar13 = FUN_043cc2c0(lVar13,lVar19,
                            *(undefined8 *)
                             Meta_XR_MultiplayerBlocks_Colocation_AnchorDebugVisual_TypeInfo);
      puVar8 = Unity_Services_Authentication_PlayerAccounts_AndroidBrowserUtils_TypeInfo;
      puVar7 = UnityEngine_Android_AndroidAssetPackState_TypeInfo;
      puVar6 = Meta_XR_MultiplayerBlocks_Colocation_Anchor_TypeInfo;
      puVar5 = UnityEngine_UIElements_AncestorFilter_TypeInfo;
      puVar3 = PTR_DAT_08496dc0;
      plVar12 = *(long **)(param_1 + 8);
      if (plVar12 != (long *)0x0) {
        iVar18 = 0;
        do {
          lVar11 = *plVar12;
          uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar14 != 0) {
            piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
                puVar16 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_07949010;
              }
              uVar14 = uVar14 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar14 != 0);
          }
          puVar16 = (undefined8 *)FUN_03ac43c4(plVar12,*(long *)puVar4,0);
LAB_07949010:
          iVar9 = (*(code *)*puVar16)(plVar12,puVar16[1]);
          if (iVar9 <= iVar18) goto LAB_0794913c;
          plVar12 = *(long **)(param_1 + 8);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          lVar11 = *plVar12;
          uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar14 != 0) {
            piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
                puVar16 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_07949078;
              }
              uVar14 = uVar14 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar14 != 0);
          }
          puVar16 = (undefined8 *)FUN_03ac43c4(plVar12,*(long *)puVar5,0);
LAB_07949078:
          uVar20 = (*(code *)*puVar16)(plVar12,iVar18,puVar16[1]);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          local_80[0] = FUN_04ef5da8(lVar13,iVar18,*(undefined8 *)puVar7);
          uVar15 = thunk_FUN_03ac70f4(*(undefined8 *)puVar3,local_80);
          local_90 = 0;
          uStack_88 = 0;
          FUN_05b6c134(&local_90,uVar20,uVar15,*(undefined8 *)puVar8);
          if (lVar10 == 0) {
LAB_07949194:
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          lVar11 = *(long *)(lVar10 + 0x10);
          lVar19 = *(long *)puVar6;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar11 == 0) goto LAB_07949194;
          uVar2 = *(uint *)(lVar10 + 0x18);
          if (uVar2 < *(uint *)(lVar11 + 0x18)) {
            lVar11 = lVar11 + (long)(int)uVar2 * 0x10;
            *(uint *)(lVar10 + 0x18) = uVar2 + 1;
            puVar16 = (undefined8 *)(lVar11 + 0x20);
            *puVar16 = local_90;
            *(undefined8 *)(lVar11 + 0x28) = uStack_88;
            thunk_FUN_03afed3c(puVar16,0);
          }
          else {
            FUN_04cab760(lVar10,local_90,uStack_88,
                         *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
          }
          plVar12 = *(long **)(param_1 + 8);
          iVar18 = iVar18 + 1;
        } while (plVar12 != (long *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
  }
LAB_0794913c:
  puVar3 = Unity_Services_Analytics_AnalyticsServiceSystemCalls_TypeInfo;
  iVar18 = *(int *)(*(long *)UnityEngine_UIElements_ATGTextEventHandler_TypeInfo + 0xe4);
  *param_1 = -2;
  if (iVar18 == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(param_1 + 2,lVar10,*(undefined8 *)puVar3);
  return;
}


