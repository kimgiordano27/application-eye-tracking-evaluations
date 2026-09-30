/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.CurveVisualController.GetClosestPointOnLine_00000D25$PostfixBurstDelegate$$EndInvoke
ENTRY_POINT: 05cdb830
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;negative_framework_namespace_without_eye_use_flow
*/


undefined4
UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_GetClosestPointOnLine_00000D25_PostfixBurstDelegate__EndInvoke
          (undefined1 param_1 [16],ulong param_2,ulong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  byte bVar2;
  short sVar3;
  float fVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  undefined4 *puVar23;
  uint unaff_w19;
  int unaff_w20;
  uint uVar24;
  long unaff_x21;
  uint uVar25;
  long *plVar26;
  long unaff_x24;
  ulong uVar27;
  long *unaff_x25;
  undefined8 uVar28;
  uint *puVar29;
  uint unaff_w28;
  long lVar30;
  long *unaff_x29;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  uint in_stack_00000010;
  uint uStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  undefined4 uStack0000000000000038;
  uint uStack000000000000003c;
  long in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined4 in_stack_00000100;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  long in_stack_00000158;
  uint uStack0000000000000168;
  undefined1 uStack000000000000016c;
  
code_r0x05cdb830:
  uVar13 = FUN_04f72380(param_3,param_4);
  if (((uVar13 & 1) == 0) && (unaff_w28 != 0x200b)) {
    lVar14 = *unaff_x25;
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar14 = *unaff_x25;
    }
    lVar19 = **(long **)(lVar14 + 0xb8);
    if (lVar19 == 0) goto LAB_05cdc5cc;
    uVar10 = *(uint *)(unaff_x24 + 0x120);
    if (*(uint *)(lVar19 + 0x18) <= uVar10) goto LAB_05cdc664;
    if (*(int *)(lVar19 + (long)(int)uVar10 * 0x38 + 0x54) < 0x3fff) {
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        plVar20 = *(long **)(*unaff_x25 + 0xb8);
        goto LAB_05cdba64;
      }
LAB_05cdba6c:
      uVar10 = *(uint *)(unaff_x24 + 0x120);
      uVar24 = *(uint *)(lVar19 + 0x18);
    }
    else {
      if (uStack000000000000003c != 0) {
        if (*(long *)(unaff_x24 + 0x7b8) != 0) {
          uVar13 = FUN_047c90ec(*(long *)(unaff_x24 + 0x7b8),(long)(int)uVar10,
                                (long)&stack0x00000140 + 4,*(undefined8 *)PTR_DAT_066495e8);
          puVar5 = Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
          if ((uVar13 & 1) == 0) {
LAB_05cdb910:
            uVar28 = *(undefined8 *)(unaff_x24 + 0x118);
            uVar15 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0664ed78);
            FUN_05eb4804(uVar15,uVar28,0);
            puVar5 = Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
            uVar28 = *(undefined8 *)(unaff_x24 + 0x100);
            lVar14 = *(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
            if (*(int *)(lVar14 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
              lVar14 = *(long *)puVar5;
            }
            uVar10 = FUN_05ccd970(uVar15,uVar28,*(long *)(lVar14 + 0xb8),
                                  *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8));
            if (*(long *)(unaff_x24 + 0x7b8) == 0) goto LAB_05cdc5cc;
            FUN_047c776c(*(long *)(unaff_x24 + 0x7b8),*(undefined4 *)(unaff_x24 + 0x120),uVar10,
                         *(undefined8 *)PTR_DAT_06649600);
            lVar14 = *(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
          }
          else {
            lVar14 = *(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
            if (*(int *)(lVar14 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
              lVar14 = *(long *)puVar5;
            }
            lVar19 = **(long **)(lVar14 + 0xb8);
            if (lVar19 == 0) goto LAB_05cdc5cc;
            if (*(uint *)(lVar19 + 0x18) <= in_stack_00000140._4_4_) goto LAB_05cdc664;
            uVar10 = in_stack_00000140._4_4_;
            if (0x3ffe < *(int *)(lVar19 + (long)(int)in_stack_00000140._4_4_ * 0x38 + 0x54))
            goto LAB_05cdb910;
          }
          *(uint *)(unaff_x24 + 0x120) = uVar10;
          if (*(int *)(lVar14 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            lVar14 = *(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
          }
          plVar20 = *(long **)(lVar14 + 0xb8);
          unaff_x25 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
LAB_05cdba64:
          lVar19 = *plVar20;
          if (lVar19 != 0) goto LAB_05cdba6c;
        }
        goto LAB_05cdc5cc;
      }
      uVar28 = *(undefined8 *)(unaff_x24 + 0x118);
      uVar15 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0664ed78);
      FUN_05eb4804(uVar15,uVar28,0);
      lVar14 = *unaff_x25;
      uVar28 = *(undefined8 *)(unaff_x24 + 0x100);
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar14 = *unaff_x25;
      }
      uVar10 = FUN_05ccd970(uVar15,uVar28,*(long *)(lVar14 + 0xb8),
                            *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8));
      lVar14 = *unaff_x25;
      *(uint *)(unaff_x24 + 0x120) = uVar10;
      lVar19 = **(long **)(lVar14 + 0xb8);
      if (lVar19 == 0) goto LAB_05cdc5cc;
      uVar24 = *(uint *)(lVar19 + 0x18);
    }
    if (uVar24 <= uVar10) goto LAB_05cdc664;
    lVar19 = lVar19 + (long)(int)uVar10 * 0x38;
    *(int *)(lVar19 + 0x54) = *(int *)(lVar19 + 0x54) + 1;
  }
  if ((*unaff_x29 != 0) && (lVar14 = *(long *)(*unaff_x29 + 0x38), lVar14 != 0)) {
    if (*(uint *)(lVar14 + 0x18) <= *(uint *)(unaff_x24 + 0x4a0)) goto LAB_05cdc664;
    *(undefined8 *)(lVar14 + (long)(int)*(uint *)(unaff_x24 + 0x4a0) * (long)unaff_w20 + 0x48) =
         *(undefined8 *)(unaff_x24 + 0x118);
    thunk_FUN_02dc1ef0();
    if ((*unaff_x29 != 0) && (lVar14 = *(long *)(*unaff_x29 + 0x38), lVar14 != 0)) {
      if (*(uint *)(lVar14 + 0x18) <= *(uint *)(unaff_x24 + 0x4a0)) goto LAB_05cdc664;
      *(undefined4 *)(lVar14 + (long)(int)*(uint *)(unaff_x24 + 0x4a0) * (long)unaff_w20 + 0x50) =
           *(undefined4 *)(unaff_x24 + 0x120);
      lVar14 = *unaff_x25;
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar14 = *unaff_x25;
      }
      lVar19 = **(long **)(lVar14 + 0xb8);
      if (lVar19 == 0) goto LAB_05cdc5cc;
      if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x24 + 0x120)) goto LAB_05cdc664;
      *(char *)(lVar19 + (long)(int)*(uint *)(unaff_x24 + 0x120) * 0x38 + 0x41) =
           (char)uStack000000000000003c;
      if (uStack000000000000003c != 0) {
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar19 = **(long **)(*unaff_x25 + 0xb8);
          if (lVar19 == 0) goto LAB_05cdc5cc;
        }
        if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x24 + 0x120)) goto LAB_05cdc664;
        puVar16 = (undefined8 *)(lVar19 + (long)(int)*(uint *)(unaff_x24 + 0x120) * 0x38 + 0x48);
        *puVar16 = in_stack_00000020;
        thunk_FUN_02dc1ef0(puVar16,in_stack_00000020);
        *(undefined8 *)(unaff_x24 + 0x100) = in_stack_00000018;
        thunk_FUN_02dc1ef0(unaff_x24 + 0x100);
        *(undefined8 *)(unaff_x24 + 0x118) = in_stack_00000020;
        thunk_FUN_02dc1ef0(unaff_x24 + 0x118,in_stack_00000020);
        *(undefined4 *)(unaff_x24 + 0x120) = uStack0000000000000038;
      }
      uVar10 = *(uint *)(unaff_x24 + 0x4a0);
LAB_05cdbba4:
      *(uint *)(unaff_x24 + 0x4a0) = uVar10 + 1;
      uVar10 = unaff_w19;
      do {
        uVar7 = *(uint *)(unaff_x21 + 0x18);
        uVar24 = uVar10 + 1;
        if ((int)uVar7 <= (int)uVar24) {
LAB_05cdbc70:
          if (*(char *)(unaff_x24 + 0x42d) != '\0') {
            *(undefined1 *)(unaff_x24 + 0x42d) = 0;
            goto LAB_05cdbc7c;
          }
          lVar14 = *unaff_x29;
          if (lVar14 == 0) goto LAB_05cdc5cc;
          lVar19 = *unaff_x25;
          *(int *)(lVar14 + 0x1c) = in_stack_00000028._4_4_;
          if (*(int *)(lVar19 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            lVar19 = *unaff_x25;
          }
          lVar19 = *(long *)(*(long *)(lVar19 + 0xb8) + 8);
          if (lVar19 == 0) goto LAB_05cdc5cc;
          uVar10 = FUN_047c741c(lVar19,*(undefined8 *)
                                        Method_PlayFab_PlayFabProgressionAPI_UnlinkLeaderboardFromStatistic__
                               );
          *(uint *)(lVar14 + 0x34) = uVar10;
          if (*unaff_x29 == 0) goto LAB_05cdc5cc;
          plVar20 = (long *)(*unaff_x29 + 0x60);
          lVar14 = *plVar20;
          if (lVar14 == 0) goto LAB_05cdc5cc;
          uVar13 = (ulong)uVar10;
          if (*(int *)(lVar14 + 0x18) < (int)uVar10) {
            if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListSecretSummaries__
                        + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            FUN_0338e09c(plVar20,uVar13,0,
                         *(undefined8 *)
                          Method_PlayFab_PlayFabProgressionInstanceAPI_UpdateLeaderboardEntries__);
          }
          if (*(long *)(unaff_x24 + 0x720) == 0) goto LAB_05cdc5cc;
          plVar20 = (long *)(unaff_x24 + 0x720);
          if (*(int *)(*(long *)(unaff_x24 + 0x720) + 0x18) < (int)uVar10) {
            uVar24 = uVar10 | (int)uVar10 >> 0x10;
            uVar24 = uVar24 | (int)uVar24 >> 8;
            uVar24 = uVar24 | (int)uVar24 >> 4;
            uVar24 = uVar24 | (int)uVar24 >> 2;
            if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListSecretSummaries__
                        + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            FUN_0338ddc0(plVar20,(uVar24 | (int)uVar24 >> 1) + 1,
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_PlayerInput_remove_onActionTriggered__);
          }
          if (*(char *)(unaff_x24 + 0x359) != '\0') {
            if (*unaff_x29 == 0) goto LAB_05cdc5cc;
            plVar26 = (long *)(*unaff_x29 + 0x38);
            lVar14 = *plVar26;
            if (lVar14 == 0) goto LAB_05cdc5cc;
            iVar11 = *(int *)(unaff_x24 + 0x4a0);
            if (0x100 < *(int *)(lVar14 + 0x18) - iVar11) {
              iVar12 = 0x100;
              if (0x100 < iVar11 + 1) {
                iVar12 = iVar11 + 1;
              }
              if (*(int *)(*(long *)
                            Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListSecretSummaries__ +
                          0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              FUN_0338dff0(plVar26,iVar12,1,
                           *(undefined8 *)
                            Method_PlayFab_PlayFabProgressionInstanceAPI_UpdateLeaderboardDefinition__
                          );
              unaff_x25 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
            }
          }
          fVar4 = DAT_01274fb8;
          if ((int)uVar10 < 1) goto LAB_05cdc510;
          lVar14 = 0;
          uVar27 = 0;
          lVar19 = 0x54;
          lVar30 = 0x20;
          goto LAB_05cdbe40;
        }
        if (uVar7 <= uVar24) goto LAB_05cdc664;
        puVar29 = (uint *)(in_stack_00000058 + (long)(int)uVar24 * 0x10 + 4);
        if (*puVar29 == 0) goto LAB_05cdbc70;
        if (*unaff_x29 == 0) goto LAB_05cdc5cc;
        plVar20 = (long *)(*unaff_x29 + 0x38);
        lVar14 = *plVar20;
        iVar11 = *(int *)(unaff_x24 + 0x4a0);
        if ((lVar14 == 0) || (*(int *)(lVar14 + 0x18) <= iVar11)) {
          if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListSecretSummaries__ +
                      0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          FUN_0338dff0(plVar20,iVar11 + 1,1,
                       *(undefined8 *)
                        Method_PlayFab_PlayFabProgressionInstanceAPI_UpdateLeaderboardDefinition__);
          uVar7 = *(uint *)(unaff_x21 + 0x18);
        }
        if (uVar7 <= uVar24) goto LAB_05cdc664;
        uVar7 = *puVar29;
        uStack0000000000000038 = *(undefined4 *)(unaff_x24 + 0x120);
        if ((*(char *)(unaff_x24 + 0x33a) == '\0') || (uVar7 != 0x3c)) {
LAB_05cda8a8:
          in_stack_00000018 = *(undefined8 *)(unaff_x24 + 0x100);
          in_stack_00000020 = *(undefined8 *)(unaff_x24 + 0x118);
          uStack000000000000016c = 0;
          if (*(int *)(unaff_x24 + 0x65c) != 0) goto LAB_05cda970;
          uVar25 = *(uint *)(unaff_x24 + 0x284);
          if ((uVar25 >> 4 & 1) == 0) {
            if ((uVar25 >> 3 & 1) == 0) {
              if ((uVar25 >> 5 & 1) != 0) goto LAB_05cda8d0;
            }
            else {
              if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              uVar13 = FUN_04f7494c(uVar7,0);
              if ((uVar13 & 1) != 0) {
                if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_02dabd98();
                }
                uVar7 = FUN_04f74dec(uVar7,0);
                goto LAB_05cda96c;
              }
            }
          }
          else {
LAB_05cda8d0:
            if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            uVar13 = FUN_04f749ec(uVar7,0);
            if ((uVar13 & 1) != 0) {
              if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              uVar7 = FUN_04f74c74(uVar7,0);
LAB_05cda96c:
              uVar7 = uVar7 & 0xffff;
            }
          }
LAB_05cda970:
          uVar10 = uVar10 + 2;
          if ((int)uVar10 < (int)*(uint *)(unaff_x21 + 0x18)) {
            if (*(uint *)(unaff_x21 + 0x18) <= uVar10) goto LAB_05cdc664;
            uVar25 = *(uint *)(in_stack_00000058 + (long)(int)uVar10 * 0x10 + 4);
          }
          else {
            uVar25 = 0;
          }
          unaff_w28 = uVar7;
          if (*(char *)(unaff_x24 + 0x33b) == '\0') {
LAB_05cdaaf0:
            lVar14 = FUN_05d16cf8();
            if (lVar14 == 0) {
              if (*(uint *)(unaff_x21 + 0x18) <= uVar24) goto LAB_05cdc664;
              FUN_05d173a0();
              if (*(int *)(*(long *)
                            Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__ +
                          0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              iVar11 = FUN_05d2c08c(0);
              bVar6 = *(uint *)(unaff_x21 + 0x18) <= uVar24;
              if (iVar11 == 0) {
                if (bVar6) goto LAB_05cdc664;
                uStack0000000000000014 = 0x25a1;
              }
              else {
                if (bVar6) goto LAB_05cdc664;
                if (*(int *)(*(long *)
                              Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__ +
                            0xe4) == 0) {
                  thunk_FUN_02dabd98();
                }
                uStack0000000000000014 = FUN_05d2c08c(0);
              }
              *puVar29 = uStack0000000000000014;
              uVar15 = *(undefined8 *)(unaff_x24 + 0x100);
              if (*(int *)(*(long *)
                            Method_PlayFab_PlayFabProgressionInstanceAPI_UnlinkAggregationSourceFromStatistic__
                          + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              lVar14 = FUN_05cf3ef4(uStack0000000000000014,uVar15,1,0,400,(long)&stack0x00000168 + 4
                                    ,0);
              if (lVar14 == 0) {
                if (*(int *)(*(long *)
                              Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__ +
                            0xe4) == 0) {
                  thunk_FUN_02dabd98();
                }
                lVar14 = FUN_05d2c604(0);
                if (lVar14 != 0) {
                  if (*(int *)(*(long *)
                                Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__ +
                              0xe4) == 0) {
                    thunk_FUN_02dabd98();
                  }
                  lVar14 = FUN_05d2c604(0);
                  if (lVar14 == 0) goto LAB_05cdc5cc;
                  if (0 < *(int *)(lVar14 + 0x18)) {
                    uVar15 = *(undefined8 *)(unaff_x24 + 0x100);
                    if (*(int *)(*(long *)
                                  Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__
                                + 0xe4) == 0) {
                      thunk_FUN_02dabd98();
                    }
                    uVar28 = FUN_05d2c604(0);
                    if (*(int *)(*(long *)
                                  Method_PlayFab_PlayFabProgressionInstanceAPI_UnlinkAggregationSourceFromStatistic__
                                + 0xe4) == 0) {
                      thunk_FUN_02dabd98(*(long *)
                                          Method_PlayFab_PlayFabProgressionInstanceAPI_UnlinkAggregationSourceFromStatistic__
                                        );
                    }
                    lVar14 = FUN_05cf465c(uStack0000000000000014,uVar15,uVar28,1,0,400,
                                          (long)&stack0x00000168 + 4,0);
                    if (lVar14 != 0) goto LAB_05cdae50;
                  }
                }
                if (*(int *)(*(long *)
                              Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__ +
                            0xe4) == 0) {
                  thunk_FUN_02dabd98();
                }
                uVar15 = FUN_05d2c200(0);
                if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
                  thunk_FUN_02dabd98(*(long *)PTR_DAT_066462d0);
                }
                uVar13 = FUN_05ee1474(uVar15,0,0);
                if ((uVar13 & 1) != 0) {
                  if (*(int *)(*(long *)
                                Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__ +
                              0xe4) == 0) {
                    thunk_FUN_02dabd98();
                  }
                  uVar15 = FUN_05d2c200(0);
                  if (*(int *)(*(long *)
                                Method_PlayFab_PlayFabProgressionInstanceAPI_UnlinkAggregationSourceFromStatistic__
                              + 0xe4) == 0) {
                    thunk_FUN_02dabd98(*(long *)
                                        Method_PlayFab_PlayFabProgressionInstanceAPI_UnlinkAggregationSourceFromStatistic__
                                      );
                  }
                  lVar14 = FUN_05cf3ef4(uStack0000000000000014,uVar15,1,0,400,
                                        (long)&stack0x00000168 + 4,0);
                  if (lVar14 != 0) goto LAB_05cdae50;
                }
                if (*(uint *)(unaff_x21 + 0x18) <= uVar24) goto LAB_05cdc664;
                *puVar29 = 0x20;
                uVar15 = *(undefined8 *)(unaff_x24 + 0x100);
                if (*(int *)(*(long *)
                              Method_PlayFab_PlayFabProgressionInstanceAPI_UnlinkAggregationSourceFromStatistic__
                            + 0xe4) == 0) {
                  thunk_FUN_02dabd98();
                }
                uStack0000000000000014 = 0x20;
                lVar14 = FUN_05cf3ef4(0x20,uVar15,1,0,400,(long)&stack0x00000168 + 4,0);
                if (lVar14 == 0) {
                  if (*(uint *)(unaff_x21 + 0x18) <= uVar24) goto LAB_05cdc664;
                  *puVar29 = 3;
                  uVar15 = *(undefined8 *)(unaff_x24 + 0x100);
                  if (*(int *)(*(long *)
                                Method_PlayFab_PlayFabProgressionInstanceAPI_UnlinkAggregationSourceFromStatistic__
                              + 0xe4) == 0) {
                    thunk_FUN_02dabd98();
                  }
                  uStack0000000000000014 = 3;
                  lVar14 = FUN_05cf3ef4(3,uVar15,1,0,400,(long)&stack0x00000168 + 4,0);
                }
              }
LAB_05cdae50:
              if (*(int *)(*(long *)
                            Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__ +
                          0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              uVar13 = FUN_05d2c1a4(0);
              unaff_w28 = uStack0000000000000014;
              if ((uVar13 & 1) == 0) {
                plVar20 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,4);
                if (uVar7 >> 0x10 == 0) {
                  in_stack_00000070 = CONCAT44(in_stack_00000070._4_4_,uVar7);
                  lVar19 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x50),
                                              &stack0x00000070);
                  if (plVar20 == (long *)0x0) goto LAB_05cdc5cc;
                  if ((lVar19 != 0) &&
                     (lVar30 = thunk_FUN_02d8a53c(lVar19,*(undefined8 *)(*plVar20 + 0x40)),
                     lVar30 == 0)) goto LAB_05cdc668;
                  if ((int)plVar20[3] == 0) goto LAB_05cdc664;
                  plVar20[4] = lVar19;
                  thunk_FUN_02dc1ef0(plVar20 + 4,lVar19);
                  if (*(long *)(unaff_x24 + 0xf8) == 0) goto LAB_05cdc5cc;
                  lVar19 = thunk_FUN_05ee6e70(*(long *)(unaff_x24 + 0xf8),0);
                  if ((lVar19 != 0) &&
                     (lVar30 = thunk_FUN_02d8a53c(lVar19,*(undefined8 *)(*plVar20 + 0x40)),
                     lVar30 == 0)) goto LAB_05cdc668;
                  if ((*(uint *)(plVar20 + 3) & 0xfffffffe) == 0) goto LAB_05cdc664;
                  plVar20[5] = lVar19;
                  thunk_FUN_02dc1ef0(plVar20 + 5,lVar19);
                  if (lVar14 == 0) goto LAB_05cdc5cc;
                  in_stack_00000100 = *(undefined4 *)(lVar14 + 0x14);
                  lVar19 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x50),
                                              &stack0x00000100);
                  if ((lVar19 != 0) &&
                     (lVar30 = thunk_FUN_02d8a53c(lVar19,*(undefined8 *)(*plVar20 + 0x40)),
                     lVar30 == 0)) goto LAB_05cdc668;
                  if (*(uint *)(plVar20 + 3) < 3) goto LAB_05cdc664;
                  plVar20[6] = lVar19;
                  thunk_FUN_02dc1ef0(plVar20 + 6,lVar19);
                  lVar19 = thunk_FUN_05ee6e70();
                  if ((lVar19 != 0) &&
                     (lVar30 = thunk_FUN_02d8a53c(lVar19,*(undefined8 *)(*plVar20 + 0x40)),
                     lVar30 == 0)) goto LAB_05cdc668;
                  if ((*(uint *)(plVar20 + 3) & 0xfffffffc) == 0) goto LAB_05cdc664;
                  plVar20[7] = lVar19;
                  thunk_FUN_02dc1ef0(plVar20 + 7,lVar19);
                  puVar16 = (undefined8 *)Method_PlayFabService_OnPlayFabError<bool>__;
                }
                else {
                  in_stack_00000070 = CONCAT44(in_stack_00000070._4_4_,uVar7);
                  lVar19 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x50),
                                              &stack0x00000070);
                  if (plVar20 == (long *)0x0) goto LAB_05cdc5cc;
                  if ((lVar19 != 0) &&
                     (lVar30 = thunk_FUN_02d8a53c(lVar19,*(undefined8 *)(*plVar20 + 0x40)),
                     lVar30 == 0)) goto LAB_05cdc668;
                  if ((int)plVar20[3] == 0) goto LAB_05cdc664;
                  plVar20[4] = lVar19;
                  thunk_FUN_02dc1ef0(plVar20 + 4,lVar19);
                  if (*(long *)(unaff_x24 + 0xf8) == 0) goto LAB_05cdc5cc;
                  lVar19 = thunk_FUN_05ee6e70(*(long *)(unaff_x24 + 0xf8),0);
                  if ((lVar19 != 0) &&
                     (lVar30 = thunk_FUN_02d8a53c(lVar19,*(undefined8 *)(*plVar20 + 0x40)),
                     lVar30 == 0)) goto LAB_05cdc668;
                  if ((*(uint *)(plVar20 + 3) & 0xfffffffe) == 0) goto LAB_05cdc664;
                  plVar20[5] = lVar19;
                  thunk_FUN_02dc1ef0(plVar20 + 5,lVar19);
                  if (lVar14 == 0) goto LAB_05cdc5cc;
                  in_stack_00000100 = *(undefined4 *)(lVar14 + 0x14);
                  lVar19 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x50),
                                              &stack0x00000100);
                  if ((lVar19 != 0) &&
                     (lVar30 = thunk_FUN_02d8a53c(lVar19,*(undefined8 *)(*plVar20 + 0x40)),
                     lVar30 == 0)) goto LAB_05cdc668;
                  if (*(uint *)(plVar20 + 3) < 3) goto LAB_05cdc664;
                  plVar20[6] = lVar19;
                  thunk_FUN_02dc1ef0(plVar20 + 6,lVar19);
                  lVar19 = thunk_FUN_05ee6e70();
                  if ((lVar19 != 0) &&
                     (lVar30 = thunk_FUN_02d8a53c(lVar19,*(undefined8 *)(*plVar20 + 0x40)),
                     lVar30 == 0)) goto LAB_05cdc668;
                  if ((*(uint *)(plVar20 + 3) & 0xfffffffc) == 0) goto LAB_05cdc664;
                  plVar20[7] = lVar19;
                  thunk_FUN_02dc1ef0(plVar20 + 7,lVar19);
                  puVar16 = (undefined8 *)
                            Method_PlayFab_PlayFabProgressionInstanceAPI_UpdateStatistics__;
                }
                uVar15 = FUN_04e81064(*puVar16,plVar20,0);
                if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
                  thunk_FUN_02dabd98();
                }
                FUN_05ea2efc(uVar15);
                unaff_x29 = in_stack_00000030;
              }
            }
          }
          else {
            if (*(int *)(*(long *)
                          Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListServerBackfillTicketsForPlayer__
                        + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            uVar13 = FUN_05d36a2c(uVar7,0);
            if (((uVar13 & 1) == 0) || (uVar25 == 0xfe0e)) {
              if (*(int *)(*(long *)
                            Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListServerBackfillTicketsForPlayer__
                          + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              uVar13 = FUN_05d369ac(uVar7,0);
              if (((uVar13 & 1) == 0) || (uVar25 != 0xfe0f)) goto LAB_05cdaaf0;
            }
            if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__
                        + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            lVar14 = FUN_05d2ca14(0);
            if (lVar14 == 0) goto LAB_05cdaaf0;
            if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__
                        + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            lVar14 = FUN_05d2ca14(0);
            if (lVar14 == 0) goto LAB_05cdc5cc;
            if (*(int *)(lVar14 + 0x18) < 1) goto LAB_05cdaaf0;
            uVar15 = *(undefined8 *)(unaff_x24 + 0x100);
            if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__
                        + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            uVar28 = FUN_05d2ca14(0);
            uVar9 = *(undefined4 *)(unaff_x24 + 0x280);
            uVar1 = *(undefined4 *)(unaff_x24 + 0x238);
            if (*(int *)(*(long *)
                          Method_PlayFab_PlayFabProgressionInstanceAPI_UnlinkAggregationSourceFromStatistic__
                        + 0xe4) == 0) {
              thunk_FUN_02dabd98(*(long *)
                                  Method_PlayFab_PlayFabProgressionInstanceAPI_UnlinkAggregationSourceFromStatistic__
                                );
            }
            lVar14 = FUN_05cf4878(uVar7,uVar15,uVar28,1,uVar9,uVar1,(long)&stack0x00000168 + 4,0);
            unaff_x25 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
            unaff_x29 = in_stack_00000030;
            if (lVar14 == 0) goto LAB_05cdaaf0;
          }
          if ((*unaff_x29 == 0) || (lVar19 = *(long *)(*unaff_x29 + 0x38), lVar19 == 0))
          goto LAB_05cdc5cc;
          if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x24 + 0x4a0)) goto LAB_05cdc664;
          puVar16 = (undefined8 *)(lVar19 + (long)(int)*(uint *)(unaff_x24 + 0x4a0) * 0x178 + 0x38);
          *puVar16 = 0;
          thunk_FUN_02dc1ef0(puVar16,0);
          if (lVar14 == 0) goto LAB_05cdc5cc;
          if (*(char *)(lVar14 + 0x10) != '\x01') {
            uStack000000000000003c = 0;
            unaff_w19 = uVar24;
            goto LAB_05cdb4b8;
          }
          if (*(long *)(lVar14 + 0x18) == 0) goto LAB_05cdc5cc;
          iVar11 = FUN_05cdf9e8(*(long *)(lVar14 + 0x18),0);
          if (*(long *)(unaff_x24 + 0x100) == 0) goto LAB_05cdc5cc;
          iVar12 = FUN_05cdf9e8(*(long *)(unaff_x24 + 0x100),0);
          uStack000000000000003c = (uint)(iVar11 != iVar12);
          if (iVar11 != iVar12) {
            plVar20 = *(long **)(lVar14 + 0x18);
            if (plVar20 == (long *)0x0) {
              plVar20 = (long *)0x0;
              *(undefined8 *)(unaff_x24 + 0x100) = 0;
            }
            else {
              lVar19 = *(long *)PTR_DAT_06649a88;
              bVar2 = *(byte *)(lVar19 + 0x130);
              if (*(byte *)(*plVar20 + 0x130) < bVar2) {
                plVar26 = (long *)0x0;
              }
              else {
                plVar26 = plVar20;
                if (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar2 * 8 + -8) != lVar19) {
                  plVar26 = (long *)0x0;
                }
              }
              *(long **)(unaff_x24 + 0x100) = plVar26;
              if (*(byte *)(*plVar20 + 0x130) < bVar2) {
                plVar20 = (long *)0x0;
              }
              else if (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar2 * 8 + -8) != lVar19) {
                plVar20 = (long *)0x0;
              }
            }
            thunk_FUN_02dc1ef0(unaff_x24 + 0x100,plVar20);
          }
          if ((uVar25 >> 4 == 0xfe0) || (uVar25 - 0xe0100 < 0xf0)) {
            if (*(long *)(unaff_x24 + 0x100) == 0) goto LAB_05cdc5cc;
            iVar11 = FUN_05ced2b8(*(long *)(unaff_x24 + 0x100),unaff_w28,uVar25,0);
            if (iVar11 != 0) {
              if (*(long *)(unaff_x24 + 0x100) == 0) goto LAB_05cdc5cc;
              uVar13 = FUN_05cef718(*(long *)(unaff_x24 + 0x100),iVar11,&stack0x00000150,0);
              if ((uVar13 & 1) != 0) {
                if ((*unaff_x29 == 0) || (lVar19 = *(long *)(*unaff_x29 + 0x38), lVar19 == 0))
                goto LAB_05cdc5cc;
                if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x24 + 0x4a0)) goto LAB_05cdc664;
                *(undefined8 *)(lVar19 + (long)(int)*(uint *)(unaff_x24 + 0x4a0) * 0x178 + 0x38) =
                     in_stack_00000150;
                thunk_FUN_02dc1ef0();
              }
            }
            if (*(uint *)(unaff_x21 + 0x18) <= uVar10) goto LAB_05cdc664;
            *(undefined4 *)(in_stack_00000058 + (long)(int)uVar10 * 0x10 + 4) = 0x1a;
            uVar24 = uVar10;
          }
          unaff_w19 = uVar24;
          if ((in_stack_00000010 & 1) == 0) goto LAB_05cdb4b8;
          if (((*(long *)(unaff_x24 + 0x100) != 0) &&
              (lVar19 = *(long *)(*(long *)(unaff_x24 + 0x100) + 0x178), lVar19 != 0)) &&
             (lVar19 = *(long *)(lVar19 + 0x38), lVar19 != 0)) {
            uVar13 = FUN_048bf6ac(lVar19,*(undefined4 *)(lVar14 + 0x28),&stack0x00000158,
                                  *(undefined8 *)
                                   Method_PlayFab_PlayFabProgressionInstanceAPI_GetStatistics__);
            if ((uVar13 & 1) != 0) {
              if (in_stack_00000158 == 0) goto LAB_05cdbc70;
              iVar11 = 0;
LAB_05cdb378:
              unaff_x29 = in_stack_00000030;
              unaff_w19 = uVar24;
              if (iVar11 < *(int *)(in_stack_00000158 + 0x18)) {
                auVar35 = FUN_0365de54(in_stack_00000158,iVar11,
                                       *(undefined8 *)
                                        Method_PlayFab_PlayFabProgressionInstanceAPI_ListStatisticDefinitions__
                                      );
                lVar19 = auVar35._0_8_;
                if (lVar19 != 0) {
                  uVar13 = 1;
                  iVar12 = (int)*(undefined8 *)(lVar19 + 0x18);
                  do {
                    uVar10 = unaff_w19 + 1;
                    puVar23 = (undefined4 *)(in_stack_00000060 + (long)(int)uVar10 * 0x10);
LAB_05cdb3d8:
                    if (auVar35._8_4_ == 0 || (long)iVar12 <= (long)uVar13) {
                      if ((auVar35._8_4_ != 0) && ((int)uVar13 == iVar12)) {
                        if (*(long *)(unaff_x24 + 0x100) == 0) break;
                        uVar13 = FUN_05cef718(*(long *)(unaff_x24 + 0x100),
                                              auVar35._8_8_ & 0xffffffff,&stack0x00000148,0);
                        if ((uVar13 & 1) == 0) goto LAB_05cdb488;
                        if ((*in_stack_00000030 == 0) ||
                           (lVar19 = *(long *)(*in_stack_00000030 + 0x38), lVar19 == 0)) break;
                        if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x24 + 0x4a0))
                        goto LAB_05cdc664;
                        *(undefined8 *)
                         (lVar19 + (long)(int)*(uint *)(unaff_x24 + 0x4a0) * 0x178 + 0x38) =
                             in_stack_00000148;
                        thunk_FUN_02dc1ef0();
                        unaff_x25 = (long *)
                                    Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
                        uVar7 = *(uint *)(in_stack_00000068 + 0x18) - uVar24;
                        if (*(uint *)(in_stack_00000068 + 0x18) < uVar24 || uVar7 == 0)
                        goto LAB_05cdc664;
                        uVar10 = uVar10 - uVar24;
                        *(uint *)(in_stack_00000058 + (long)(int)uVar24 * 0x10 + 0xc) = uVar10;
                        unaff_x21 = in_stack_00000068;
                        if ((int)uVar10 < 2) goto LAB_05cdb4b8;
                        uVar13 = 1;
                        goto LAB_05cdbc3c;
                      }
LAB_05cdb488:
                      iVar11 = iVar11 + 1;
                      unaff_x21 = in_stack_00000068;
                      unaff_x25 = (long *)
                                  Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
                      if (in_stack_00000158 != 0) goto LAB_05cdb378;
                      break;
                    }
                    if ((int)*(uint *)(in_stack_00000068 + 0x18) <= (int)uVar10) goto LAB_05cdb488;
                    if (*(uint *)(in_stack_00000068 + 0x18) <= uVar10) goto LAB_05cdc664;
                    if (*(long *)(unaff_x24 + 0x100) == 0) break;
                    uVar9 = *puVar23;
                    iVar8 = FUN_05ced1dc(*(long *)(unaff_x24 + 0x100),uVar9,0);
                    if (*(uint *)(lVar19 + 0x18) <= uVar13) goto LAB_05cdc664;
                    if (iVar8 != *(int *)(lVar19 + uVar13 * 4 + 0x20)) goto code_r0x05cdb420;
                    uVar13 = uVar13 + 1;
                    unaff_w19 = uVar10;
                  } while( true );
                }
                goto LAB_05cdc5cc;
              }
            }
            goto LAB_05cdb4b8;
          }
          goto LAB_05cdc5cc;
        }
        uVar13 = FUN_05d0be34();
        unaff_w19 = uStack0000000000000168;
        if ((uVar13 & 1) == 0) {
          uStack0000000000000038 = *(undefined4 *)(unaff_x24 + 0x120);
          goto LAB_05cda8a8;
        }
        if (*(uint *)(unaff_x21 + 0x18) <= uVar24) goto LAB_05cdc664;
        iVar11 = *(int *)(in_stack_00000058 + (long)(int)uVar24 * 0x10 + 8);
        if ((*(byte *)(unaff_x24 + 0x284) & 1) != 0) {
          *(undefined1 *)(unaff_x24 + 0x292) = 1;
        }
        uVar10 = uStack0000000000000168;
      } while (*(int *)(unaff_x24 + 0x65c) != 1);
      lVar14 = *unaff_x25;
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar14 = *unaff_x25;
      }
      lVar14 = **(long **)(lVar14 + 0xb8);
      if (lVar14 != 0) {
        if (*(uint *)(unaff_x24 + 0x120) < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)*(uint *)(unaff_x24 + 0x120) * 0x38;
          *(int *)(lVar14 + 0x54) = *(int *)(lVar14 + 0x54) + 1;
          if ((*unaff_x29 != 0) && (lVar14 = *(long *)(*unaff_x29 + 0x38), lVar14 != 0)) {
            if (*(uint *)(unaff_x24 + 0x4a0) < *(uint *)(lVar14 + 0x18)) {
              lVar14 = lVar14 + (long)(int)*(uint *)(unaff_x24 + 0x4a0) * 0x178;
              sVar3 = *(short *)(unaff_x24 + 0x6bc);
              *(undefined8 *)(lVar14 + 0x40) = *(undefined8 *)(unaff_x24 + 0x100);
              *(short *)(lVar14 + 0x24) = sVar3 + -0x2000;
              thunk_FUN_02dc1ef0();
              if ((*(long *)(unaff_x24 + 0x3a0) != 0) &&
                 (lVar14 = *(long *)(*(long *)(unaff_x24 + 0x3a0) + 0x38), lVar14 != 0)) {
                uVar10 = *(uint *)(unaff_x24 + 0x4a0);
                if (uVar10 < *(uint *)(lVar14 + 0x18)) {
                  *(undefined4 *)(lVar14 + 0x20 + (long)(int)uVar10 * 0x178 + 0x30) =
                       *(undefined4 *)(unaff_x24 + 0x120);
                  if ((*(long *)(unaff_x24 + 0x6b0) != 0) &&
                     (lVar19 = FUN_05d30174(*(long *)(unaff_x24 + 0x6b0),0), lVar19 != 0)) {
                    uVar15 = FUN_036a5b38(lVar19,*(undefined4 *)(unaff_x24 + 0x6bc),
                                          *(undefined8 *)
                                           Method_PlayFab_PlayFabProgressionInstanceAPI_ListLeaderboardDefinitions__
                                         );
                    if (uVar10 < *(uint *)(lVar14 + 0x18)) {
                      *(undefined8 *)(lVar14 + 0x20 + (long)(int)uVar10 * 0x178 + 0x10) = uVar15;
                      thunk_FUN_02dc1ef0();
                      if ((*unaff_x29 != 0) && (lVar14 = *(long *)(*unaff_x29 + 0x38), lVar14 != 0))
                      {
                        uVar10 = *(uint *)(unaff_x24 + 0x4a0);
                        if (uVar10 < *(uint *)(lVar14 + 0x18)) {
                          puVar23 = (undefined4 *)(lVar14 + 0x20 + (long)(int)uVar10 * 0x178);
                          *puVar23 = *(undefined4 *)(unaff_x24 + 0x65c);
                          puVar23[2] = iVar11;
                          if (unaff_w19 < *(uint *)(in_stack_00000068 + 0x18)) {
                            *(int *)(lVar14 + 0x20 + (long)(int)uVar10 * 0x178 + 0xc) =
                                 (*(int *)(in_stack_00000058 + (long)(int)unaff_w19 * 0x10 + 8) -
                                 iVar11) + 1;
                            *(undefined4 *)(unaff_x24 + 0x65c) = 0;
                            *(undefined4 *)(unaff_x24 + 0x120) = uStack0000000000000038;
                            unaff_x21 = in_stack_00000068;
                            goto LAB_05cdb644;
                          }
                        }
                        goto LAB_05cdc664;
                      }
                      goto LAB_05cdc5cc;
                    }
                    goto LAB_05cdc664;
                  }
                  goto LAB_05cdc5cc;
                }
                goto LAB_05cdc664;
              }
              goto LAB_05cdc5cc;
            }
            goto LAB_05cdc664;
          }
          goto LAB_05cdc5cc;
        }
        goto LAB_05cdc664;
      }
    }
  }
  goto LAB_05cdc5cc;
  while( true ) {
    iVar11 = (int)uVar13;
    uVar13 = uVar13 + 1;
    *(undefined4 *)(in_stack_00000058 + (long)(int)(uVar24 + iVar11) * 0x10 + 4) = 0x1a;
    if (uVar10 <= uVar13) break;
LAB_05cdbc3c:
    if (uVar7 == uVar13) goto LAB_05cdc664;
  }
LAB_05cdb4b8:
  if ((*unaff_x29 == 0) || (lVar19 = *(long *)(*unaff_x29 + 0x38), lVar19 == 0)) goto LAB_05cdc5cc;
  if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x24 + 0x4a0)) goto LAB_05cdc664;
  lVar19 = lVar19 + (long)(int)*(uint *)(unaff_x24 + 0x4a0) * 0x178;
  plVar20 = (long *)(lVar19 + 0x30);
  *plVar20 = lVar14;
  *(undefined4 *)(lVar19 + 0x20) = 0;
  thunk_FUN_02dc1ef0(plVar20,lVar14);
  if ((*unaff_x29 == 0) || (lVar19 = *(long *)(*unaff_x29 + 0x38), lVar19 == 0)) goto LAB_05cdc5cc;
  uVar10 = *(uint *)(unaff_x24 + 0x4a0);
  if (*(uint *)(lVar19 + 0x18) <= uVar10) goto LAB_05cdc664;
  lVar30 = lVar19 + 0x20 + (long)(int)uVar10 * 0x178;
  *(undefined1 *)(lVar30 + 0x34) = uStack000000000000016c;
  *(short *)(lVar30 + 4) = (short)unaff_w28;
  if (*(uint *)(unaff_x21 + 0x18) <= unaff_w19) goto LAB_05cdc664;
  lVar19 = lVar19 + 0x20 + (long)(int)uVar10 * 0x178;
  uVar15 = *(undefined8 *)(in_stack_00000058 + (long)(int)unaff_w19 * 0x10 + 8);
  *(undefined8 *)(lVar19 + 0x20) = *(undefined8 *)(unaff_x24 + 0x100);
  *(undefined8 *)(lVar19 + 8) = uVar15;
  thunk_FUN_02dc1ef0();
  if (*(char *)(lVar14 + 0x10) != '\x02') goto LAB_05cdb64c;
  plVar20 = *(long **)(lVar14 + 0x18);
  if (plVar20 == (long *)0x0) goto LAB_05cdc5cc;
  bVar2 = *(byte *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListMatchmakingQueues__ +
                   0x130);
  if ((*(byte *)(*plVar20 + 0x130) < bVar2) ||
     (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar2 * 8 + -8) !=
      *(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListMatchmakingQueues__))
  goto LAB_05cdc5cc;
  lVar14 = *unaff_x25;
  lVar19 = plVar20[0x11];
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
    lVar14 = *unaff_x25;
  }
  uVar10 = FUN_05ccdbac(lVar19,plVar20,*(long *)(lVar14 + 0xb8),
                        *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8));
  lVar14 = *unaff_x25;
  *(uint *)(unaff_x24 + 0x120) = uVar10;
  lVar14 = **(long **)(lVar14 + 0xb8);
  if (lVar14 == 0) goto LAB_05cdc5cc;
  if (*(uint *)(lVar14 + 0x18) <= uVar10) goto LAB_05cdc664;
  lVar14 = lVar14 + (long)(int)uVar10 * 0x38;
  *(int *)(lVar14 + 0x54) = *(int *)(lVar14 + 0x54) + 1;
  if ((*unaff_x29 == 0) || (lVar14 = *(long *)(*unaff_x29 + 0x38), lVar14 == 0)) goto LAB_05cdc5cc;
  uVar10 = *(uint *)(unaff_x24 + 0x4a0);
  if (*(uint *)(lVar14 + 0x18) <= uVar10) goto LAB_05cdc664;
  lVar14 = lVar14 + (long)(int)uVar10 * 0x178;
  *(undefined4 *)(lVar14 + 0x20) = 1;
  *(undefined4 *)(lVar14 + 0x50) = *(undefined4 *)(unaff_x24 + 0x120);
  *(undefined4 *)(unaff_x24 + 0x65c) = 0;
  *(undefined4 *)(unaff_x24 + 0x120) = uStack0000000000000038;
LAB_05cdb644:
  in_stack_00000028._4_4_ = in_stack_00000028._4_4_ + 1;
  goto LAB_05cdbba4;
code_r0x05cdb420:
  if (*(int *)(*(long *)
                Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListServerBackfillTicketsForPlayer__ +
              0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar27 = FUN_05d36978(uVar9,0);
  uVar10 = uVar10 + 1;
  puVar23 = puVar23 + 4;
  if ((uVar27 & 1) != 0) goto LAB_05cdb3d8;
  goto LAB_05cdb488;
LAB_05cdb64c:
  if (uStack000000000000003c != 0) {
    if (*(long *)(unaff_x24 + 0x100) == 0) goto LAB_05cdc5cc;
    iVar11 = FUN_05cdf9e8(*(long *)(unaff_x24 + 0x100),0);
    if (*(long *)(unaff_x24 + 0xf8) == 0) goto LAB_05cdc5cc;
    iVar12 = FUN_05cdf9e8(*(long *)(unaff_x24 + 0xf8),0);
    if (iVar11 != iVar12) {
      if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__ +
                  0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar13 = FUN_05d2c6c4(0);
      if ((uVar13 & 1) == 0) {
        if (*(long *)(unaff_x24 + 0x100) == 0) goto LAB_05cdc5cc;
        uVar15 = *(undefined8 *)(*(long *)(unaff_x24 + 0x100) + 0x88);
      }
      else {
        if (*(long *)(unaff_x24 + 0x100) == 0) goto LAB_05cdc5cc;
        uVar15 = *(undefined8 *)(unaff_x24 + 0x118);
        uVar28 = *(undefined8 *)(*(long *)(unaff_x24 + 0x100) + 0x88);
        if (*(int *)(*(long *)
                      Method_PlayFab_PlayFabProgressionInstanceAPI_UnlinkLeaderboardFromStatistic__
                    + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar15 = FUN_05d27688(uVar15,uVar28,0);
      }
      *(undefined8 *)(unaff_x24 + 0x118) = uVar15;
      thunk_FUN_02dc1ef0(unaff_x24 + 0x118);
      lVar19 = *unaff_x25;
      uVar15 = *(undefined8 *)(unaff_x24 + 0x118);
      uVar28 = *(undefined8 *)(unaff_x24 + 0x100);
      if (*(int *)(lVar19 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar19 = *unaff_x25;
      }
      uVar9 = FUN_05ccd970(uVar15,uVar28,*(long *)(lVar19 + 0xb8),
                           *(undefined8 *)(*(long *)(lVar19 + 0xb8) + 8));
      *(undefined4 *)(unaff_x24 + 0x120) = uVar9;
    }
  }
  if ((*unaff_x29 == 0) || (lVar19 = *(long *)(*unaff_x29 + 0x38), lVar19 == 0)) goto LAB_05cdc5cc;
  if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x24 + 0x4a0)) goto LAB_05cdc664;
  lVar19 = *(long *)(lVar19 + (long)(int)*(uint *)(unaff_x24 + 0x4a0) * 0x178 + 0x38);
  if ((lVar19 == 0) && (lVar19 = *(long *)(lVar14 + 0x20), lVar19 == 0)) goto LAB_05cdc5cc;
  iVar11 = FUN_05f85034(lVar19,0);
  if (0 < iVar11) {
    uVar15 = *(undefined8 *)(unaff_x24 + 0x100);
    uVar28 = *(undefined8 *)(unaff_x24 + 0x118);
    if (*(int *)(*(long *)
                  Method_PlayFab_PlayFabProgressionInstanceAPI_UnlinkLeaderboardFromStatistic__ +
                0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar15 = FUN_05d27104(uVar15,uVar28,iVar11,0);
    *(undefined8 *)(unaff_x24 + 0x118) = uVar15;
    thunk_FUN_02dc1ef0(unaff_x24 + 0x118,uVar15);
    lVar14 = *unaff_x25;
    uVar15 = *(undefined8 *)(unaff_x24 + 0x118);
    uVar28 = *(undefined8 *)(unaff_x24 + 0x100);
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar14 = *unaff_x25;
    }
    uVar9 = FUN_05ccd970(uVar15,uVar28,*(long *)(lVar14 + 0xb8),
                         *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8));
    *(undefined4 *)(unaff_x24 + 0x120) = uVar9;
    uStack000000000000003c = 1;
  }
  unaff_w20 = 0x178;
  if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  param_3 = (ulong)unaff_w28;
  param_4 = 0;
  goto code_r0x05cdb830;
LAB_05cdbe40:
  do {
    fVar34 = (float)param_2;
    if (uVar27 != 0) {
      lVar21 = *plVar20;
      if (lVar21 == 0) goto LAB_05cdc5cc;
      if (*(uint *)(lVar21 + 0x18) <= uVar27) goto LAB_05cdc664;
      uVar15 = *(undefined8 *)(lVar21 + uVar27 * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar17 = FUN_05ee2f7c(uVar15,0,0);
      if ((uVar17 & 1) != 0) {
        lVar21 = *unaff_x25;
        plVar26 = (long *)*plVar20;
        if (*(int *)(lVar21 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar21 = *unaff_x25;
        }
        lVar21 = **(long **)(lVar21 + 0xb8);
        if (lVar21 == 0) goto LAB_05cdc5cc;
        if (*(uint *)(lVar21 + 0x18) <= uVar27) goto LAB_05cdc664;
        lVar21 = lVar21 + lVar19;
        in_stack_000000f0 = *(undefined8 *)(lVar21 + -4);
        in_stack_000000e8 = *(undefined8 *)(lVar21 + -0xc);
        in_stack_000000e0 = *(undefined8 *)(lVar21 + -0x14);
        in_stack_000000c8 = *(undefined8 *)(lVar21 + -0x2c);
        uVar15 = *(undefined8 *)(lVar21 + -0x34);
        in_stack_000000d8 = *(undefined8 *)(lVar21 + -0x1c);
        in_stack_000000d0 = *(undefined8 *)(lVar21 + -0x24);
        in_stack_000000c0 = uVar15;
        lVar21 = FUN_05d34370();
        fVar34 = (float)uVar15;
        if (plVar26 == (long *)0x0) goto LAB_05cdc5cc;
        if ((lVar21 != 0) &&
           (lVar18 = thunk_FUN_02d8a53c(lVar21,*(undefined8 *)(*plVar26 + 0x40)), lVar18 == 0)) {
LAB_05cdc668:
          uVar15 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
          FUN_02d4ddac(uVar15,0);
        }
        if (*(uint *)(plVar26 + 3) <= uVar27) goto LAB_05cdc664;
        plVar26[uVar27 + 4] = lVar21;
        thunk_FUN_02dc1ef0((long)plVar26 + lVar30,lVar21);
        unaff_x25 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
        if ((*unaff_x29 == 0) || (lVar21 = *(long *)(*unaff_x29 + 0x60), lVar21 == 0))
        goto LAB_05cdc5cc;
        if (*(uint *)(lVar21 + 0x18) <= uVar27) goto LAB_05cdc664;
        puVar16 = (undefined8 *)(lVar21 + lVar14 + 0x30);
        *puVar16 = 0;
        thunk_FUN_02dc1ef0(puVar16,0);
      }
      if (*(long *)(unaff_x24 + 0x3b8) == 0) goto LAB_05cdc5cc;
      fVar31 = (float)FUN_05eef4e4(*(long *)(unaff_x24 + 0x3b8),0);
      lVar21 = *plVar20;
      if (lVar21 == 0) goto LAB_05cdc5cc;
      if (*(uint *)(lVar21 + 0x18) <= uVar27) goto LAB_05cdc664;
      lVar21 = *(long *)(lVar21 + uVar27 * 8 + 0x20);
      if ((lVar21 == 0) || (fVar33 = fVar34, lVar21 = FUN_05fd8988(lVar21,0), lVar21 == 0))
      goto LAB_05cdc5cc;
      fVar32 = (float)FUN_05eef4e4(lVar21,0);
      fVar34 = (fVar34 - fVar33) * (fVar34 - fVar33);
      param_2 = (ulong)(uint)fVar34;
      if (fVar4 <= (fVar31 - fVar32) * (fVar31 - fVar32) + fVar34) {
        lVar21 = *plVar20;
        if (lVar21 == 0) goto LAB_05cdc5cc;
        if (*(uint *)(lVar21 + 0x18) <= uVar27) goto LAB_05cdc664;
        lVar21 = *(long *)(lVar21 + uVar27 * 8 + 0x20);
        if (lVar21 == 0) goto LAB_05cdc5cc;
        lVar21 = FUN_05fd8988(lVar21,0);
        if ((*(long *)(unaff_x24 + 0x3b8) == 0) ||
           (FUN_05eef4e4(*(long *)(unaff_x24 + 0x3b8),0), lVar21 == 0)) goto LAB_05cdc5cc;
        FUN_05eef5a8(lVar21,0);
      }
      lVar21 = *plVar20;
      if (lVar21 == 0) goto LAB_05cdc5cc;
      if (*(uint *)(lVar21 + 0x18) <= uVar27) goto LAB_05cdc664;
      lVar21 = *(long *)(lVar21 + uVar27 * 8 + 0x20);
      if (lVar21 == 0) goto LAB_05cdc5cc;
      uVar15 = *(undefined8 *)(lVar21 + 0xf0);
      if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar17 = FUN_05ee2f7c(uVar15,0,0);
      if ((uVar17 & 1) == 0) {
        lVar21 = *plVar20;
        if (lVar21 == 0) goto LAB_05cdc5cc;
        if (*(uint *)(lVar21 + 0x18) <= uVar27) goto LAB_05cdc664;
        lVar21 = *(long *)(lVar21 + uVar27 * 8 + 0x20);
        if ((lVar21 == 0) || (lVar21 = *(long *)(lVar21 + 0xf0), lVar21 == 0)) goto LAB_05cdc5cc;
        iVar11 = FUN_05ee6bc0(lVar21,0);
        lVar21 = *unaff_x25;
        if (*(int *)(lVar21 + 0xe4) == 0) {
          thunk_FUN_02dabd98(lVar21);
          lVar21 = *unaff_x25;
        }
        lVar21 = **(long **)(lVar21 + 0xb8);
        if (lVar21 == 0) goto LAB_05cdc5cc;
        if (*(uint *)(lVar21 + 0x18) <= uVar27) goto LAB_05cdc664;
        lVar21 = *(long *)(lVar21 + lVar19 + -0x1c);
        if (lVar21 == 0) goto LAB_05cdc5cc;
        iVar12 = FUN_05ee6bc0(lVar21,0);
        if (iVar11 != iVar12)
        goto 
        UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorLineVisual__get_snapThresholdDistance
        ;
      }
      else {

        UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorLineVisual__get_snapThresholdDistance
        :
        lVar21 = *plVar20;
        if (lVar21 == 0) goto LAB_05cdc5cc;
        if (*(uint *)(lVar21 + 0x18) <= uVar27) goto LAB_05cdc664;
        lVar18 = *unaff_x25;
        lVar21 = *(long *)(lVar21 + uVar27 * 8 + 0x20);
        if (*(int *)(lVar18 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar18 = *unaff_x25;
        }
        lVar18 = **(long **)(lVar18 + 0xb8);
        if (lVar18 == 0) goto LAB_05cdc5cc;
        if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_05cdc664;
        if (lVar21 == 0) goto LAB_05cdc5cc;
        thunk_FUN_05d33fd0(lVar21,*(undefined8 *)(lVar18 + lVar19 + -0x1c),0);
        lVar21 = *plVar20;
        if (lVar21 == 0) goto LAB_05cdc5cc;
        if (*(uint *)(lVar21 + 0x18) <= uVar27) goto LAB_05cdc664;
        lVar18 = **(long **)(*unaff_x25 + 0xb8);
        if (lVar18 == 0) goto LAB_05cdc5cc;
        if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_05cdc664;
        lVar21 = *(long *)(lVar21 + uVar27 * 8 + 0x20);
        if (lVar21 == 0) goto LAB_05cdc5cc;
        *(undefined8 *)(lVar21 + 0xd8) = *(undefined8 *)(lVar18 + lVar19 + -0x2c);
        thunk_FUN_02dc1ef0();
        lVar21 = *plVar20;
        if (lVar21 == 0) goto LAB_05cdc5cc;
        if (*(uint *)(lVar21 + 0x18) <= uVar27) goto LAB_05cdc664;
        lVar18 = **(long **)(*unaff_x25 + 0xb8);
        if (lVar18 == 0) goto LAB_05cdc5cc;
        if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_05cdc664;
        lVar21 = *(long *)(lVar21 + uVar27 * 8 + 0x20);
        if (lVar21 == 0) goto LAB_05cdc5cc;
        *(undefined8 *)(lVar21 + 0xe0) = *(undefined8 *)(lVar18 + lVar19 + -0x24);
        thunk_FUN_02dc1ef0();
      }
      lVar21 = *unaff_x25;
      if (*(int *)(lVar21 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar21 = *unaff_x25;
      }
      lVar18 = **(long **)(lVar21 + 0xb8);
      if (lVar18 == 0) goto LAB_05cdc5cc;
      if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_05cdc664;
      if (*(char *)(lVar18 + lVar19 + -0x13) != '\0') {
        lVar22 = *plVar20;
        if (lVar22 == 0) goto LAB_05cdc5cc;
        if (*(uint *)(lVar22 + 0x18) <= uVar27) goto LAB_05cdc664;
        lVar22 = *(long *)(lVar22 + uVar27 * 8 + 0x20);
        if (*(int *)(lVar21 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar18 = **(long **)(*unaff_x25 + 0xb8);
          if (lVar18 == 0) goto LAB_05cdc5cc;
        }
        if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_05cdc664;
        if (lVar22 == 0) goto LAB_05cdc5cc;
        FUN_05d3402c(lVar22,*(undefined8 *)(lVar18 + lVar19 + -0x1c),0);
        lVar21 = *plVar20;
        if (lVar21 == 0) goto LAB_05cdc5cc;
        if (*(uint *)(lVar21 + 0x18) <= uVar27) goto LAB_05cdc664;
        lVar18 = **(long **)(*unaff_x25 + 0xb8);
        if (lVar18 == 0) goto LAB_05cdc5cc;
        if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_05cdc664;
        lVar21 = *(long *)(lVar21 + uVar27 * 8 + 0x20);
        if (lVar21 == 0) goto LAB_05cdc5cc;
        *(undefined8 *)(lVar21 + 0x100) = *(undefined8 *)(lVar18 + lVar19 + -0xc);
        thunk_FUN_02dc1ef0(lVar21 + 0x100);
      }
    }
    lVar21 = *unaff_x25;
    if (*(int *)(lVar21 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar21 = *unaff_x25;
    }
    unaff_x25 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
    lVar21 = **(long **)(lVar21 + 0xb8);
    if (lVar21 == 0) goto LAB_05cdc5cc;
    if (*(uint *)(lVar21 + 0x18) <= uVar27) goto LAB_05cdc664;
    if ((*unaff_x29 == 0) || (lVar18 = *(long *)(*unaff_x29 + 0x60), lVar18 == 0))
    goto LAB_05cdc5cc;
    if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_05cdc664;
    lVar22 = lVar18 + lVar14;
    uVar24 = *(uint *)(lVar21 + lVar19);
    if (*(long *)(lVar22 + 0x30) == 0) {
      if (uVar27 == 0) {
        in_stack_00000088 = 0;
        in_stack_00000080 = 0;
        in_stack_00000098 = 0;
        in_stack_00000090 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = 0;
        in_stack_000000b8 = 0;
        in_stack_000000b0 = 0;
        in_stack_00000078 = 0;
        in_stack_00000070 = 0;
        FUN_05d281bc(&stack0x00000070,*(undefined8 *)(unaff_x24 + 0x3d8),uVar24 + 1,0);
        if (*(int *)(lVar18 + 0x18) == 0) goto LAB_05cdc664;
      }
      else {
        lVar21 = *plVar20;
        if (lVar21 == 0) goto LAB_05cdc5cc;
        if (*(uint *)(lVar21 + 0x18) <= uVar27) goto LAB_05cdc664;
        lVar21 = *(long *)(lVar21 + uVar27 * 8 + 0x20);
        if (lVar21 == 0) goto LAB_05cdc5cc;
        uVar15 = FUN_05d34208(lVar21,0);
        in_stack_00000088 = 0;
        in_stack_00000080 = 0;
        in_stack_00000098 = 0;
        in_stack_00000090 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = 0;
        in_stack_000000b8 = 0;
        in_stack_000000b0 = 0;
        in_stack_00000078 = 0;
        in_stack_00000070 = 0;
        FUN_05d281bc(&stack0x00000070,uVar15,uVar24 + 1,0);
        if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_05cdc664;
        lVar18 = lVar18 + lVar14;
      }
      memmove((void *)(lVar18 + 0x20),&stack0x00000070,0x50);
      thunk_FUN_02dc1ef0(lVar22 + 0x20,0);
      unaff_x25 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
    }
    else {
      iVar11 = *(int *)(*(long *)(lVar22 + 0x30) + 0x18);
      if (iVar11 < (int)(uVar24 * 4)) {
        if ((int)uVar24 < 0x401) {
          uVar24 = uVar24 | (int)uVar24 >> 0x10;
          uVar24 = uVar24 | (int)uVar24 >> 8;
          uVar24 = uVar24 | (int)uVar24 >> 4;
          uVar24 = uVar24 | (int)uVar24 >> 2;
          uVar24 = uVar24 | (int)uVar24 >> 1;

          UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorLineVisual__get_stopLineAtFirstRaycastHit
          :
          iVar11 = uVar24 + 1;
        }
        else {
LAB_05cdc33c:
          iVar11 = uVar24 + 0x100;
        }
        if (*(int *)(*(long *)PTR_DAT_06649d28 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider__OnHoverExited
                  (lVar22 + 0x20,iVar11,0);
      }
      else if ((*(char *)(unaff_x24 + 0x359) != '\0') && (0 < (int)uVar24)) {
        iVar12 = iVar11 + 3;
        if (-1 < iVar11) {
          iVar12 = iVar11;
        }
        if (0x100 < (int)((iVar12 >> 2) - uVar24)) {
          if (uVar24 < 0x401) {
            uVar24 = uVar24 >> 4 | uVar24 >> 8 | uVar24;
            uVar24 = uVar24 | uVar24 >> 2;
            uVar24 = uVar24 | uVar24 >> 1;
            goto 
            UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorLineVisual__get_stopLineAtFirstRaycastHit
            ;
          }
          goto LAB_05cdc33c;
        }
      }
    }
    if ((*in_stack_00000030 == 0) || (lVar21 = *(long *)(*in_stack_00000030 + 0x60), lVar21 == 0))
    goto LAB_05cdc5cc;
    lVar18 = *unaff_x25;
    if (*(int *)(lVar18 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar18 = *unaff_x25;
    }
    lVar18 = **(long **)(lVar18 + 0xb8);
    if (lVar18 == 0) goto LAB_05cdc5cc;
    if ((*(uint *)(lVar18 + 0x18) <= uVar27) || (*(uint *)(lVar21 + 0x18) <= uVar27))
    goto LAB_05cdc664;
    *(undefined8 *)(lVar21 + lVar14 + 0x68) = *(undefined8 *)(lVar18 + lVar19 + -0x1c);
    thunk_FUN_02dc1ef0();
    uVar27 = uVar27 + 1;
    lVar14 = lVar14 + 0x50;
    lVar19 = lVar19 + 0x38;
    lVar30 = lVar30 + 8;
    unaff_x29 = in_stack_00000030;
  } while (uVar13 != uVar27);
LAB_05cdc510:
  lVar14 = *plVar20;
  if (lVar14 != 0) {
    lVar19 = (long)(int)uVar10 + 4;
    do {
      uVar10 = (uint)*(undefined8 *)(lVar14 + 0x18);
      if ((long)(int)uVar10 <= lVar19 + -4) {
LAB_05cdbc7c:
        return *(undefined4 *)(unaff_x24 + 0x4a0);
      }
      uVar24 = (uint)uVar13;
      if (uVar10 <= uVar24) {
LAB_05cdc664:
                    /* WARNING: Subroutine does not return */
        FUN_02d4def0();
      }
      uVar15 = *(undefined8 *)(lVar14 + lVar19 * 8);
      if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar13 = FUN_05ee1474(uVar15,0,0);
      if ((uVar13 & 1) == 0) goto LAB_05cdbc7c;
      if ((*unaff_x29 == 0) || (lVar14 = *(long *)(*unaff_x29 + 0x60), lVar14 == 0)) break;
      if (lVar19 + -4 < (long)*(int *)(lVar14 + 0x18)) {
        lVar14 = *plVar20;
        if (lVar14 == 0) break;
        if (*(uint *)(lVar14 + 0x18) <= uVar24) goto LAB_05cdc664;
        lVar14 = *(long *)(lVar14 + lVar19 * 8);
        if ((lVar14 == 0) || (lVar14 = FUN_05fd9268(lVar14,0), lVar14 == 0)) break;
        FUN_061b2e18(lVar14,0,0);
      }
      lVar14 = *plVar20;
      lVar19 = lVar19 + 1;
      uVar13 = (ulong)(uVar24 + 1);
    } while (lVar14 != 0);
  }
LAB_05cdc5cc:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


