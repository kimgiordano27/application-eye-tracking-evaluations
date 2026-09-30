/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_aux_deactivate_account_t$$set_user_name
ENTRY_POINT: 07948cc8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_17
*/


void Unity_Services_Vivox_vx_req_aux_deactivate_account_t__set_user_name(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  int *piVar15;
  int *unaff_x19;
  long unaff_x20;
  int iVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  FUN_03a8a718();
  *(undefined1 *)(unaff_x20 + 0xe31) = 1;
  puVar4 = UnityEngine_UIElements_ATGTextEventHandler_TypeInfo;
  puVar3 = UnityEngine_Terrain___TypeInfo;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0xc);
    unaff_x19[0xc] = 0;
    unaff_x19[0xd] = 0;
    *unaff_x19 = -1;
  }
  else {
    lVar12 = *(long *)(unaff_x19 + 10);
    lVar9 = FUN_044e130c(*(undefined8 *)(unaff_x19 + 8),
                         *(undefined8 *)System_Collections_Generic_List<SocketPose>_TypeInfo);
    lVar10 = *(long *)puVar3;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar10 = *(long *)puVar3;
    }
    puVar14 = *(undefined8 **)(lVar10 + 0xb8);
    lVar17 = puVar14[6];
    if (lVar17 == 0) {
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        puVar14 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
      }
      uVar18 = *puVar14;
      lVar17 = thunk_FUN_03ac74bc(*(undefined8 *)UnityEngine_Analytics_AnalyticsSessionInfo_TypeInfo
                                 );
      FUN_05d8d150(lVar17,uVar18,*(undefined8 *)UnityEngine_Android_AndroidAssetPacks_TypeInfo,0);
      plVar11 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30);
      *plVar11 = lVar17;
      thunk_FUN_03afed3c(plVar11,lVar17);
    }
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar18 = FUN_043cc1a0(lVar9,lVar17,
                          *(undefined8 *)System_Linq_Expressions_Interpreter_AndInstruction_TypeInfo
                         );
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0(uVar18,uVar18);
    }
    lVar12 = FUN_07945f20(lVar12);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000028 =
         FUN_058b71ec(lVar12,*(undefined8 *)UnityEngine_Rendering_HableCurve_Segment___TypeInfo);
    uVar13 = FUN_0587c6c4(&stack0x00000028,
                          *(undefined8 *)
                           UnityEngine_InputSystem_HID_HIDSupport_HIDPageUsage___TypeInfo);
    if ((uVar13 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000028;
      thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fd51b0(unaff_x19 + 2,&stack0x00000028);
      return;
    }
  }
  lVar12 = FUN_0587c704(&stack0x00000028,
                        *(undefined8 *)
                         UnityEngine_Rendering_HighDefinition_HDCamera_ViewConstants___TypeInfo);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar1 = *(undefined4 *)(lVar12 + 0x18);
  lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)
                              UnityEngine_Android_AndroidAssetPackUseMobileDataRequestResult_TypeInfo
                            );
  FUN_04caaf2c(lVar9,uVar1,*(undefined8 *)UnityEngine_Android_AndroidApplication_TypeInfo);
  puVar4 = Unity_Services_Analytics_Internal_AnalyticsWebRequest_TypeInfo;
  iVar16 = *(int *)(lVar12 + 0x18);
  if (iVar16 != 0) {
    plVar11 = *(long **)(unaff_x19 + 8);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar10 = *plVar11;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) ==
            *(long *)Unity_Services_Analytics_Internal_AnalyticsWebRequest_TypeInfo) {
          puVar14 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_07948ee8;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar14 = (undefined8 *)
              FUN_03ac43c4(plVar11,*(long *)
                                    Unity_Services_Analytics_Internal_AnalyticsWebRequest_TypeInfo,0
                          );
LAB_07948ee8:
    iVar8 = (*(code *)*puVar14)(plVar11,puVar14[1]);
    if (iVar16 == iVar8) {
      lVar10 = *(long *)puVar3;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar10 = *(long *)puVar3;
      }
      puVar14 = *(undefined8 **)(lVar10 + 0xb8);
      lVar17 = puVar14[7];
      if (lVar17 == 0) {
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          puVar14 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
        }
        uVar18 = *puVar14;
        lVar17 = thunk_FUN_03ac74bc(*(undefined8 *)
                                     Unity_Services_Analytics_Internal_AnalyticsUserIdServiceComponent_TypeInfo
                                   );
        FUN_05d8d26c(lVar17,uVar18,
                     *(undefined8 *)UnityEngine_InputSystem_Android_LowLevel_AndroidAxis_TypeInfo,0)
        ;
        plVar11 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x38);
        *plVar11 = lVar17;
        thunk_FUN_03afed3c(plVar11,lVar17);
      }
      lVar12 = FUN_043cc2c0(lVar12,lVar17,
                            *(undefined8 *)
                             Meta_XR_MultiplayerBlocks_Colocation_AnchorDebugVisual_TypeInfo);
      puVar7 = UnityEngine_Android_AndroidAssetPackState_TypeInfo;
      puVar6 = Meta_XR_MultiplayerBlocks_Colocation_Anchor_TypeInfo;
      puVar5 = UnityEngine_UIElements_AncestorFilter_TypeInfo;
      puVar3 = PTR_DAT_08496dc0;
      plVar11 = *(long **)(unaff_x19 + 8);
      if (plVar11 != (long *)0x0) {
        iVar16 = 0;
        do {
          lVar10 = *plVar11;
          uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                puVar14 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_07949010;
              }
              uVar13 = uVar13 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar13 != 0);
          }
          puVar14 = (undefined8 *)FUN_03ac43c4(plVar11,*(long *)puVar4,0);
LAB_07949010:
          iVar8 = (*(code *)*puVar14)(plVar11,puVar14[1]);
          if (iVar8 <= iVar16) goto LAB_0794913c;
          plVar11 = *(long **)(unaff_x19 + 8);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          lVar10 = *plVar11;
          uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
                puVar14 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_07949078;
              }
              uVar13 = uVar13 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar13 != 0);
          }
          puVar14 = (undefined8 *)FUN_03ac43c4(plVar11,*(long *)puVar5,0);
LAB_07949078:
          (*(code *)*puVar14)(plVar11,iVar16,puVar14[1]);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          in_stack_00000010 = FUN_04ef5da8(lVar12,iVar16,*(undefined8 *)puVar7);
          thunk_FUN_03ac70f4(*(undefined8 *)puVar3,&stack0x00000010);
          FUN_05b6c134();
          if (lVar9 == 0) {
LAB_07949194:
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          lVar10 = *(long *)(lVar9 + 0x10);
          lVar17 = *(long *)puVar6;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_07949194;
          uVar2 = *(uint *)(lVar9 + 0x18);
          if (uVar2 < *(uint *)(lVar10 + 0x18)) {
            lVar10 = lVar10 + (long)(int)uVar2 * 0x10;
            *(uint *)(lVar9 + 0x18) = uVar2 + 1;
            puVar14 = (undefined8 *)(lVar10 + 0x20);
            *puVar14 = 0;
            *(undefined8 *)(lVar10 + 0x28) = 0;
            thunk_FUN_03afed3c(puVar14,0);
          }
          else {
            FUN_04cab760(lVar9,0,0,
                         *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
          }
          plVar11 = *(long **)(unaff_x19 + 8);
          iVar16 = iVar16 + 1;
        } while (plVar11 != (long *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
  }
LAB_0794913c:
  puVar3 = Unity_Services_Analytics_AnalyticsServiceSystemCalls_TypeInfo;
  iVar16 = *(int *)(*(long *)UnityEngine_UIElements_ATGTextEventHandler_TypeInfo + 0xe4);
  *unaff_x19 = -2;
  if (iVar16 == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(unaff_x19 + 2,lVar9,*(undefined8 *)puVar3);
  return;
}


