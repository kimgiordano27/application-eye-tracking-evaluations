/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.CurveVisualController.GetClosestPointOnLine_00000D25$PostfixBurstDelegate$$BeginInvoke
ENTRY_POINT: 05cdb74c
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
UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_GetClosestPointOnLine_00000D25_PostfixBurstDelegate__BeginInvoke
          (long param_1,undefined1 param_2 [16],ulong param_3)

{
  undefined4 uVar1;
  byte bVar2;
  short sVar3;
  float fVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  undefined4 *puVar22;
  uint unaff_w19;
  int unaff_w20;
  uint uVar23;
  long unaff_x21;
  uint uVar24;
  long *plVar25;
  long unaff_x24;
  ulong uVar26;
  long *unaff_x25;
  undefined8 uVar27;
  uint *puVar28;
  long unaff_x27;
  undefined8 uVar29;
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
  
code_r0x05cdb74c:
  lVar17 = *(long *)(param_1 + 0x38);
  if (lVar17 != 0) {
    if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x24 + 0x4a0)) goto LAB_05cdc664;
    lVar17 = *(long *)(lVar17 + (long)(int)*(uint *)(unaff_x24 + 0x4a0) * (long)unaff_w20 + 0x38);
    if ((lVar17 == 0) && (lVar17 = *(long *)(unaff_x27 + 0x20), lVar17 == 0)) goto LAB_05cdc5cc;
    iVar9 = FUN_05f85034(lVar17,0);
    if (0 < iVar9) {
      uVar27 = *(undefined8 *)(unaff_x24 + 0x100);
      uVar29 = *(undefined8 *)(unaff_x24 + 0x118);
      if (*(int *)(*(long *)
                    Method_PlayFab_PlayFabProgressionInstanceAPI_UnlinkLeaderboardFromStatistic__ +
                  0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar27 = FUN_05d27104(uVar27,uVar29,iVar9,0);
      *(undefined8 *)(unaff_x24 + 0x118) = uVar27;
      thunk_FUN_02dc1ef0(unaff_x24 + 0x118,uVar27);
      lVar17 = *unaff_x25;
      uVar27 = *(undefined8 *)(unaff_x24 + 0x118);
      uVar29 = *(undefined8 *)(unaff_x24 + 0x100);
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar17 = *unaff_x25;
      }
      unaff_w20 = 0x178;
      uVar10 = FUN_05ccd970(uVar27,uVar29,*(long *)(lVar17 + 0xb8),
                            *(undefined8 *)(*(long *)(lVar17 + 0xb8) + 8));
      *(undefined4 *)(unaff_x24 + 0x120) = uVar10;
      uStack000000000000003c = 1;
    }
    if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar13 = FUN_04f72380(unaff_w28,0);
    if (((uVar13 & 1) == 0) && (unaff_w28 != 0x200b)) {
      lVar17 = *unaff_x25;
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar17 = *unaff_x25;
      }
      lVar18 = **(long **)(lVar17 + 0xb8);
      if (lVar18 == 0) goto LAB_05cdc5cc;
      uVar11 = *(uint *)(unaff_x24 + 0x120);
      if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_05cdc664;
      if (*(int *)(lVar18 + (long)(int)uVar11 * 0x38 + 0x54) < 0x3fff) {
        if (*(int *)(lVar17 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          plVar19 = *(long **)(*unaff_x25 + 0xb8);
          goto LAB_05cdba64;
        }
LAB_05cdba6c:
        uVar11 = *(uint *)(unaff_x24 + 0x120);
        uVar23 = *(uint *)(lVar18 + 0x18);
      }
      else {
        if (uStack000000000000003c != 0) {
          if (*(long *)(unaff_x24 + 0x7b8) != 0) {
            uVar13 = FUN_047c90ec(*(long *)(unaff_x24 + 0x7b8),(long)(int)uVar11,
                                  (long)&stack0x00000140 + 4,*(undefined8 *)PTR_DAT_066495e8);
            puVar5 = Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
            if ((uVar13 & 1) == 0) {
LAB_05cdb910:
              uVar29 = *(undefined8 *)(unaff_x24 + 0x118);
              uVar27 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0664ed78);
              FUN_05eb4804(uVar27,uVar29,0);
              puVar5 = Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
              uVar29 = *(undefined8 *)(unaff_x24 + 0x100);
              lVar17 = *(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
              if (*(int *)(lVar17 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
                lVar17 = *(long *)puVar5;
              }
              uVar11 = FUN_05ccd970(uVar27,uVar29,*(long *)(lVar17 + 0xb8),
                                    *(undefined8 *)(*(long *)(lVar17 + 0xb8) + 8));
              if (*(long *)(unaff_x24 + 0x7b8) == 0) goto LAB_05cdc5cc;
              FUN_047c776c(*(long *)(unaff_x24 + 0x7b8),*(undefined4 *)(unaff_x24 + 0x120),uVar11,
                           *(undefined8 *)PTR_DAT_06649600);
              lVar17 = *(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
            }
            else {
              lVar17 = *(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
              if (*(int *)(lVar17 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
                lVar17 = *(long *)puVar5;
              }
              lVar18 = **(long **)(lVar17 + 0xb8);
              if (lVar18 == 0) goto LAB_05cdc5cc;
              if (*(uint *)(lVar18 + 0x18) <= in_stack_00000140._4_4_) goto LAB_05cdc664;
              uVar11 = in_stack_00000140._4_4_;
              if (0x3ffe < *(int *)(lVar18 + (long)(int)in_stack_00000140._4_4_ * 0x38 + 0x54))
              goto LAB_05cdb910;
            }
            *(uint *)(unaff_x24 + 0x120) = uVar11;
            if (*(int *)(lVar17 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
              lVar17 = *(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
            }
            plVar19 = *(long **)(lVar17 + 0xb8);
            unaff_x25 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
LAB_05cdba64:
            lVar18 = *plVar19;
            if (lVar18 != 0) goto LAB_05cdba6c;
          }
          goto LAB_05cdc5cc;
        }
        uVar29 = *(undefined8 *)(unaff_x24 + 0x118);
        uVar27 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0664ed78);
        FUN_05eb4804(uVar27,uVar29,0);
        lVar17 = *unaff_x25;
        uVar29 = *(undefined8 *)(unaff_x24 + 0x100);
        if (*(int *)(lVar17 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar17 = *unaff_x25;
        }
        uVar11 = FUN_05ccd970(uVar27,uVar29,*(long *)(lVar17 + 0xb8),
                              *(undefined8 *)(*(long *)(lVar17 + 0xb8) + 8));
        lVar17 = *unaff_x25;
        *(uint *)(unaff_x24 + 0x120) = uVar11;
        lVar18 = **(long **)(lVar17 + 0xb8);
        if (lVar18 == 0) goto LAB_05cdc5cc;
        uVar23 = *(uint *)(lVar18 + 0x18);
      }
      if (uVar23 <= uVar11) goto LAB_05cdc664;
      lVar18 = lVar18 + (long)(int)uVar11 * 0x38;
      *(int *)(lVar18 + 0x54) = *(int *)(lVar18 + 0x54) + 1;
    }
    if ((*unaff_x29 != 0) && (lVar17 = *(long *)(*unaff_x29 + 0x38), lVar17 != 0)) {
      if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x24 + 0x4a0)) goto LAB_05cdc664;
      *(undefined8 *)(lVar17 + (long)(int)*(uint *)(unaff_x24 + 0x4a0) * (long)unaff_w20 + 0x48) =
           *(undefined8 *)(unaff_x24 + 0x118);
      thunk_FUN_02dc1ef0();
      if ((*unaff_x29 != 0) && (lVar17 = *(long *)(*unaff_x29 + 0x38), lVar17 != 0)) {
        if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x24 + 0x4a0)) goto LAB_05cdc664;
        *(undefined4 *)(lVar17 + (long)(int)*(uint *)(unaff_x24 + 0x4a0) * (long)unaff_w20 + 0x50) =
             *(undefined4 *)(unaff_x24 + 0x120);
        lVar17 = *unaff_x25;
        if (*(int *)(lVar17 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar17 = *unaff_x25;
        }
        lVar18 = **(long **)(lVar17 + 0xb8);
        if (lVar18 == 0) goto LAB_05cdc5cc;
        if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x24 + 0x120)) goto LAB_05cdc664;
        *(char *)(lVar18 + (long)(int)*(uint *)(unaff_x24 + 0x120) * 0x38 + 0x41) =
             (char)uStack000000000000003c;
        if (uStack000000000000003c != 0) {
          if (*(int *)(lVar17 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            lVar18 = **(long **)(*unaff_x25 + 0xb8);
            if (lVar18 == 0) goto LAB_05cdc5cc;
          }
          if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x24 + 0x120)) goto LAB_05cdc664;
          puVar14 = (undefined8 *)(lVar18 + (long)(int)*(uint *)(unaff_x24 + 0x120) * 0x38 + 0x48);
          *puVar14 = in_stack_00000020;
          thunk_FUN_02dc1ef0(puVar14,in_stack_00000020);
          *(undefined8 *)(unaff_x24 + 0x100) = in_stack_00000018;
          thunk_FUN_02dc1ef0(unaff_x24 + 0x100);
          *(undefined8 *)(unaff_x24 + 0x118) = in_stack_00000020;
          thunk_FUN_02dc1ef0(unaff_x24 + 0x118,in_stack_00000020);
          *(undefined4 *)(unaff_x24 + 0x120) = uStack0000000000000038;
        }
        uVar11 = *(uint *)(unaff_x24 + 0x4a0);
LAB_05cdbba4:
        *(uint *)(unaff_x24 + 0x4a0) = uVar11 + 1;
        uVar11 = unaff_w19;
        do {
          uVar7 = *(uint *)(unaff_x21 + 0x18);
          uVar23 = uVar11 + 1;
          if ((int)uVar7 <= (int)uVar23) {
LAB_05cdbc70:
            if (*(char *)(unaff_x24 + 0x42d) != '\0') {
              *(undefined1 *)(unaff_x24 + 0x42d) = 0;
              goto LAB_05cdbc7c;
            }
            lVar17 = *unaff_x29;
            if (lVar17 == 0) goto LAB_05cdc5cc;
            lVar18 = *unaff_x25;
            *(int *)(lVar17 + 0x1c) = in_stack_00000028._4_4_;
            if (*(int *)(lVar18 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
              lVar18 = *unaff_x25;
            }
            lVar18 = *(long *)(*(long *)(lVar18 + 0xb8) + 8);
            if (lVar18 == 0) goto LAB_05cdc5cc;
            uVar11 = FUN_047c741c(lVar18,*(undefined8 *)
                                          Method_PlayFab_PlayFabProgressionAPI_UnlinkLeaderboardFromStatistic__
                                 );
            *(uint *)(lVar17 + 0x34) = uVar11;
            if (*unaff_x29 == 0) goto LAB_05cdc5cc;
            plVar19 = (long *)(*unaff_x29 + 0x60);
            lVar17 = *plVar19;
            if (lVar17 == 0) goto LAB_05cdc5cc;
            uVar13 = (ulong)uVar11;
            if (*(int *)(lVar17 + 0x18) < (int)uVar11) {
              if (*(int *)(*(long *)
                            Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListSecretSummaries__ +
                          0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              FUN_0338e09c(plVar19,uVar13,0,
                           *(undefined8 *)
                            Method_PlayFab_PlayFabProgressionInstanceAPI_UpdateLeaderboardEntries__)
              ;
            }
            if (*(long *)(unaff_x24 + 0x720) == 0) goto LAB_05cdc5cc;
            plVar19 = (long *)(unaff_x24 + 0x720);
            if (*(int *)(*(long *)(unaff_x24 + 0x720) + 0x18) < (int)uVar11) {
              uVar23 = uVar11 | (int)uVar11 >> 0x10;
              uVar23 = uVar23 | (int)uVar23 >> 8;
              uVar23 = uVar23 | (int)uVar23 >> 4;
              uVar23 = uVar23 | (int)uVar23 >> 2;
              if (*(int *)(*(long *)
                            Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListSecretSummaries__ +
                          0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              FUN_0338ddc0(plVar19,(uVar23 | (int)uVar23 >> 1) + 1,
                           *(undefined8 *)
                            Method_UnityEngine_InputSystem_PlayerInput_remove_onActionTriggered__);
            }
            if (*(char *)(unaff_x24 + 0x359) != '\0') {
              if (*unaff_x29 == 0) goto LAB_05cdc5cc;
              plVar25 = (long *)(*unaff_x29 + 0x38);
              lVar17 = *plVar25;
              if (lVar17 == 0) goto LAB_05cdc5cc;
              iVar9 = *(int *)(unaff_x24 + 0x4a0);
              if (0x100 < *(int *)(lVar17 + 0x18) - iVar9) {
                iVar12 = 0x100;
                if (0x100 < iVar9 + 1) {
                  iVar12 = iVar9 + 1;
                }
                if (*(int *)(*(long *)
                              Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListSecretSummaries__ +
                            0xe4) == 0) {
                  thunk_FUN_02dabd98();
                }
                FUN_0338dff0(plVar25,iVar12,1,
                             *(undefined8 *)
                              Method_PlayFab_PlayFabProgressionInstanceAPI_UpdateLeaderboardDefinition__
                            );
                unaff_x25 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
              }
            }
            fVar4 = DAT_01274fb8;
            if ((int)uVar11 < 1) goto LAB_05cdc510;
            lVar17 = 0;
            uVar26 = 0;
            lVar18 = 0x54;
            lVar30 = 0x20;
            goto LAB_05cdbe40;
          }
          if (uVar7 <= uVar23) goto LAB_05cdc664;
          puVar28 = (uint *)(in_stack_00000058 + (long)(int)uVar23 * 0x10 + 4);
          if (*puVar28 == 0) goto LAB_05cdbc70;
          if (*unaff_x29 == 0) goto LAB_05cdc5cc;
          plVar19 = (long *)(*unaff_x29 + 0x38);
          lVar17 = *plVar19;
          iVar9 = *(int *)(unaff_x24 + 0x4a0);
          if ((lVar17 == 0) || (*(int *)(lVar17 + 0x18) <= iVar9)) {
            if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListSecretSummaries__
                        + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            FUN_0338dff0(plVar19,iVar9 + 1,1,
                         *(undefined8 *)
                          Method_PlayFab_PlayFabProgressionInstanceAPI_UpdateLeaderboardDefinition__
                        );
            uVar7 = *(uint *)(unaff_x21 + 0x18);
          }
          if (uVar7 <= uVar23) goto LAB_05cdc664;
          uVar7 = *puVar28;
          uStack0000000000000038 = *(undefined4 *)(unaff_x24 + 0x120);
          if ((*(char *)(unaff_x24 + 0x33a) == '\0') || (uVar7 != 0x3c)) {
LAB_05cda8a8:
            in_stack_00000018 = *(undefined8 *)(unaff_x24 + 0x100);
            in_stack_00000020 = *(undefined8 *)(unaff_x24 + 0x118);
            uStack000000000000016c = 0;
            if (*(int *)(unaff_x24 + 0x65c) != 0) goto LAB_05cda970;
            uVar24 = *(uint *)(unaff_x24 + 0x284);
            if ((uVar24 >> 4 & 1) == 0) {
              if ((uVar24 >> 3 & 1) == 0) {
                if ((uVar24 >> 5 & 1) != 0) goto LAB_05cda8d0;
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
            uVar11 = uVar11 + 2;
            if ((int)uVar11 < (int)*(uint *)(unaff_x21 + 0x18)) {
              if (*(uint *)(unaff_x21 + 0x18) <= uVar11) goto LAB_05cdc664;
              uVar24 = *(uint *)(in_stack_00000058 + (long)(int)uVar11 * 0x10 + 4);
            }
            else {
              uVar24 = 0;
            }
            unaff_w28 = uVar7;
            if (*(char *)(unaff_x24 + 0x33b) == '\0') {
LAB_05cdaaf0:
              unaff_x27 = FUN_05d16cf8();
              if (unaff_x27 == 0) {
                if (*(uint *)(unaff_x21 + 0x18) <= uVar23) goto LAB_05cdc664;
                FUN_05d173a0();
                if (*(int *)(*(long *)
                              Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__ +
                            0xe4) == 0) {
                  thunk_FUN_02dabd98();
                }
                iVar9 = FUN_05d2c08c(0);
                bVar6 = *(uint *)(unaff_x21 + 0x18) <= uVar23;
                if (iVar9 == 0) {
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
                *puVar28 = uStack0000000000000014;
                uVar27 = *(undefined8 *)(unaff_x24 + 0x100);
                if (*(int *)(*(long *)
                              Method_PlayFab_PlayFabProgressionInstanceAPI_UnlinkAggregationSourceFromStatistic__
                            + 0xe4) == 0) {
                  thunk_FUN_02dabd98();
                }
                unaff_x27 = FUN_05cf3ef4(uStack0000000000000014,uVar27,1,0,400,
                                         (long)&stack0x00000168 + 4,0);
                if (unaff_x27 == 0) {
                  if (*(int *)(*(long *)
                                Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__ +
                              0xe4) == 0) {
                    thunk_FUN_02dabd98();
                  }
                  lVar17 = FUN_05d2c604(0);
                  if (lVar17 != 0) {
                    if (*(int *)(*(long *)
                                  Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__
                                + 0xe4) == 0) {
                      thunk_FUN_02dabd98();
                    }
                    lVar17 = FUN_05d2c604(0);
                    if (lVar17 == 0) goto LAB_05cdc5cc;
                    if (0 < *(int *)(lVar17 + 0x18)) {
                      uVar27 = *(undefined8 *)(unaff_x24 + 0x100);
                      if (*(int *)(*(long *)
                                    Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__
                                  + 0xe4) == 0) {
                        thunk_FUN_02dabd98();
                      }
                      uVar29 = FUN_05d2c604(0);
                      if (*(int *)(*(long *)
                                    Method_PlayFab_PlayFabProgressionInstanceAPI_UnlinkAggregationSourceFromStatistic__
                                  + 0xe4) == 0) {
                        thunk_FUN_02dabd98(*(long *)
                                            Method_PlayFab_PlayFabProgressionInstanceAPI_UnlinkAggregationSourceFromStatistic__
                                          );
                      }
                      unaff_x27 = FUN_05cf465c(uStack0000000000000014,uVar27,uVar29,1,0,400,
                                               (long)&stack0x00000168 + 4,0);
                      if (unaff_x27 != 0) goto LAB_05cdae50;
                    }
                  }
                  if (*(int *)(*(long *)
                                Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__ +
                              0xe4) == 0) {
                    thunk_FUN_02dabd98();
                  }
                  uVar27 = FUN_05d2c200(0);
                  if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
                    thunk_FUN_02dabd98(*(long *)PTR_DAT_066462d0);
                  }
                  uVar13 = FUN_05ee1474(uVar27,0,0);
                  if ((uVar13 & 1) != 0) {
                    if (*(int *)(*(long *)
                                  Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__
                                + 0xe4) == 0) {
                      thunk_FUN_02dabd98();
                    }
                    uVar27 = FUN_05d2c200(0);
                    if (*(int *)(*(long *)
                                  Method_PlayFab_PlayFabProgressionInstanceAPI_UnlinkAggregationSourceFromStatistic__
                                + 0xe4) == 0) {
                      thunk_FUN_02dabd98(*(long *)
                                          Method_PlayFab_PlayFabProgressionInstanceAPI_UnlinkAggregationSourceFromStatistic__
                                        );
                    }
                    unaff_x27 = FUN_05cf3ef4(uStack0000000000000014,uVar27,1,0,400,
                                             (long)&stack0x00000168 + 4,0);
                    if (unaff_x27 != 0) goto LAB_05cdae50;
                  }
                  if (*(uint *)(unaff_x21 + 0x18) <= uVar23) goto LAB_05cdc664;
                  *puVar28 = 0x20;
                  uVar27 = *(undefined8 *)(unaff_x24 + 0x100);
                  if (*(int *)(*(long *)
                                Method_PlayFab_PlayFabProgressionInstanceAPI_UnlinkAggregationSourceFromStatistic__
                              + 0xe4) == 0) {
                    thunk_FUN_02dabd98();
                  }
                  uStack0000000000000014 = 0x20;
                  unaff_x27 = FUN_05cf3ef4(0x20,uVar27,1,0,400,(long)&stack0x00000168 + 4,0);
                  if (unaff_x27 == 0) {
                    if (*(uint *)(unaff_x21 + 0x18) <= uVar23) goto LAB_05cdc664;
                    *puVar28 = 3;
                    uVar27 = *(undefined8 *)(unaff_x24 + 0x100);
                    if (*(int *)(*(long *)
                                  Method_PlayFab_PlayFabProgressionInstanceAPI_UnlinkAggregationSourceFromStatistic__
                                + 0xe4) == 0) {
                      thunk_FUN_02dabd98();
                    }
                    uStack0000000000000014 = 3;
                    unaff_x27 = FUN_05cf3ef4(3,uVar27,1,0,400,(long)&stack0x00000168 + 4,0);
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
                  plVar19 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,4);
                  if (uVar7 >> 0x10 == 0) {
                    in_stack_00000070 = CONCAT44(in_stack_00000070._4_4_,uVar7);
                    lVar17 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x50),
                                                &stack0x00000070);
                    if (plVar19 == (long *)0x0) goto LAB_05cdc5cc;
                    if ((lVar17 != 0) &&
                       (lVar18 = thunk_FUN_02d8a53c(lVar17,*(undefined8 *)(*plVar19 + 0x40)),
                       lVar18 == 0)) goto LAB_05cdc668;
                    if ((int)plVar19[3] == 0) goto LAB_05cdc664;
                    plVar19[4] = lVar17;
                    thunk_FUN_02dc1ef0(plVar19 + 4,lVar17);
                    if (*(long *)(unaff_x24 + 0xf8) == 0) goto LAB_05cdc5cc;
                    lVar17 = thunk_FUN_05ee6e70(*(long *)(unaff_x24 + 0xf8),0);
                    if ((lVar17 != 0) &&
                       (lVar18 = thunk_FUN_02d8a53c(lVar17,*(undefined8 *)(*plVar19 + 0x40)),
                       lVar18 == 0)) goto LAB_05cdc668;
                    if ((*(uint *)(plVar19 + 3) & 0xfffffffe) == 0) goto LAB_05cdc664;
                    plVar19[5] = lVar17;
                    thunk_FUN_02dc1ef0(plVar19 + 5,lVar17);
                    if (unaff_x27 == 0) goto LAB_05cdc5cc;
                    in_stack_00000100 = *(undefined4 *)(unaff_x27 + 0x14);
                    lVar17 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x50),
                                                &stack0x00000100);
                    if ((lVar17 != 0) &&
                       (lVar18 = thunk_FUN_02d8a53c(lVar17,*(undefined8 *)(*plVar19 + 0x40)),
                       lVar18 == 0)) goto LAB_05cdc668;
                    if (*(uint *)(plVar19 + 3) < 3) goto LAB_05cdc664;
                    plVar19[6] = lVar17;
                    thunk_FUN_02dc1ef0(plVar19 + 6,lVar17);
                    lVar17 = thunk_FUN_05ee6e70();
                    if ((lVar17 != 0) &&
                       (lVar18 = thunk_FUN_02d8a53c(lVar17,*(undefined8 *)(*plVar19 + 0x40)),
                       lVar18 == 0)) goto LAB_05cdc668;
                    if ((*(uint *)(plVar19 + 3) & 0xfffffffc) == 0) goto LAB_05cdc664;
                    plVar19[7] = lVar17;
                    thunk_FUN_02dc1ef0(plVar19 + 7,lVar17);
                    puVar14 = (undefined8 *)Method_PlayFabService_OnPlayFabError<bool>__;
                  }
                  else {
                    in_stack_00000070 = CONCAT44(in_stack_00000070._4_4_,uVar7);
                    lVar17 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x50),
                                                &stack0x00000070);
                    if (plVar19 == (long *)0x0) goto LAB_05cdc5cc;
                    if ((lVar17 != 0) &&
                       (lVar18 = thunk_FUN_02d8a53c(lVar17,*(undefined8 *)(*plVar19 + 0x40)),
                       lVar18 == 0)) goto LAB_05cdc668;
                    if ((int)plVar19[3] == 0) goto LAB_05cdc664;
                    plVar19[4] = lVar17;
                    thunk_FUN_02dc1ef0(plVar19 + 4,lVar17);
                    if (*(long *)(unaff_x24 + 0xf8) == 0) goto LAB_05cdc5cc;
                    lVar17 = thunk_FUN_05ee6e70(*(long *)(unaff_x24 + 0xf8),0);
                    if ((lVar17 != 0) &&
                       (lVar18 = thunk_FUN_02d8a53c(lVar17,*(undefined8 *)(*plVar19 + 0x40)),
                       lVar18 == 0)) goto LAB_05cdc668;
                    if ((*(uint *)(plVar19 + 3) & 0xfffffffe) == 0) goto LAB_05cdc664;
                    plVar19[5] = lVar17;
                    thunk_FUN_02dc1ef0(plVar19 + 5,lVar17);
                    if (unaff_x27 == 0) goto LAB_05cdc5cc;
                    in_stack_00000100 = *(undefined4 *)(unaff_x27 + 0x14);
                    lVar17 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x50),
                                                &stack0x00000100);
                    if ((lVar17 != 0) &&
                       (lVar18 = thunk_FUN_02d8a53c(lVar17,*(undefined8 *)(*plVar19 + 0x40)),
                       lVar18 == 0)) goto LAB_05cdc668;
                    if (*(uint *)(plVar19 + 3) < 3) goto LAB_05cdc664;
                    plVar19[6] = lVar17;
                    thunk_FUN_02dc1ef0(plVar19 + 6,lVar17);
                    lVar17 = thunk_FUN_05ee6e70();
                    if ((lVar17 != 0) &&
                       (lVar18 = thunk_FUN_02d8a53c(lVar17,*(undefined8 *)(*plVar19 + 0x40)),
                       lVar18 == 0)) goto LAB_05cdc668;
                    if ((*(uint *)(plVar19 + 3) & 0xfffffffc) == 0) goto LAB_05cdc664;
                    plVar19[7] = lVar17;
                    thunk_FUN_02dc1ef0(plVar19 + 7,lVar17);
                    puVar14 = (undefined8 *)
                              Method_PlayFab_PlayFabProgressionInstanceAPI_UpdateStatistics__;
                  }
                  uVar27 = FUN_04e81064(*puVar14,plVar19,0);
                  if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
                    thunk_FUN_02dabd98();
                  }
                  FUN_05ea2efc(uVar27);
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
              if (((uVar13 & 1) == 0) || (uVar24 == 0xfe0e)) {
                if (*(int *)(*(long *)
                              Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListServerBackfillTicketsForPlayer__
                            + 0xe4) == 0) {
                  thunk_FUN_02dabd98();
                }
                uVar13 = FUN_05d369ac(uVar7,0);
                if (((uVar13 & 1) == 0) || (uVar24 != 0xfe0f)) goto LAB_05cdaaf0;
              }
              if (*(int *)(*(long *)
                            Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__ +
                          0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              lVar17 = FUN_05d2ca14(0);
              if (lVar17 == 0) goto LAB_05cdaaf0;
              if (*(int *)(*(long *)
                            Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__ +
                          0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              lVar17 = FUN_05d2ca14(0);
              if (lVar17 == 0) goto LAB_05cdc5cc;
              if (*(int *)(lVar17 + 0x18) < 1) goto LAB_05cdaaf0;
              uVar27 = *(undefined8 *)(unaff_x24 + 0x100);
              if (*(int *)(*(long *)
                            Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__ +
                          0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              uVar29 = FUN_05d2ca14(0);
              uVar10 = *(undefined4 *)(unaff_x24 + 0x280);
              uVar1 = *(undefined4 *)(unaff_x24 + 0x238);
              if (*(int *)(*(long *)
                            Method_PlayFab_PlayFabProgressionInstanceAPI_UnlinkAggregationSourceFromStatistic__
                          + 0xe4) == 0) {
                thunk_FUN_02dabd98(*(long *)
                                    Method_PlayFab_PlayFabProgressionInstanceAPI_UnlinkAggregationSourceFromStatistic__
                                  );
              }
              unaff_x27 = FUN_05cf4878(uVar7,uVar27,uVar29,1,uVar10,uVar1,(long)&stack0x00000168 + 4
                                       ,0);
              unaff_x25 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
              unaff_x29 = in_stack_00000030;
              if (unaff_x27 == 0) goto LAB_05cdaaf0;
            }
            if ((*unaff_x29 == 0) || (lVar17 = *(long *)(*unaff_x29 + 0x38), lVar17 == 0))
            goto LAB_05cdc5cc;
            if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x24 + 0x4a0)) goto LAB_05cdc664;
            puVar14 = (undefined8 *)
                      (lVar17 + (long)(int)*(uint *)(unaff_x24 + 0x4a0) * 0x178 + 0x38);
            *puVar14 = 0;
            thunk_FUN_02dc1ef0(puVar14,0);
            if (unaff_x27 == 0) goto LAB_05cdc5cc;
            if (*(char *)(unaff_x27 + 0x10) != '\x01') {
              uStack000000000000003c = 0;
              unaff_w19 = uVar23;
              goto LAB_05cdb4b8;
            }
            if (*(long *)(unaff_x27 + 0x18) == 0) goto LAB_05cdc5cc;
            iVar9 = FUN_05cdf9e8(*(long *)(unaff_x27 + 0x18),0);
            if (*(long *)(unaff_x24 + 0x100) == 0) goto LAB_05cdc5cc;
            iVar12 = FUN_05cdf9e8(*(long *)(unaff_x24 + 0x100),0);
            uStack000000000000003c = (uint)(iVar9 != iVar12);
            if (iVar9 != iVar12) {
              plVar19 = *(long **)(unaff_x27 + 0x18);
              if (plVar19 == (long *)0x0) {
                plVar19 = (long *)0x0;
                *(undefined8 *)(unaff_x24 + 0x100) = 0;
              }
              else {
                lVar17 = *(long *)PTR_DAT_06649a88;
                bVar2 = *(byte *)(lVar17 + 0x130);
                if (*(byte *)(*plVar19 + 0x130) < bVar2) {
                  plVar25 = (long *)0x0;
                }
                else {
                  plVar25 = plVar19;
                  if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar2 * 8 + -8) != lVar17) {
                    plVar25 = (long *)0x0;
                  }
                }
                *(long **)(unaff_x24 + 0x100) = plVar25;
                if (*(byte *)(*plVar19 + 0x130) < bVar2) {
                  plVar19 = (long *)0x0;
                }
                else if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar2 * 8 + -8) != lVar17) {
                  plVar19 = (long *)0x0;
                }
              }
              thunk_FUN_02dc1ef0(unaff_x24 + 0x100,plVar19);
            }
            if ((uVar24 >> 4 == 0xfe0) || (uVar24 - 0xe0100 < 0xf0)) {
              if (*(long *)(unaff_x24 + 0x100) == 0) goto LAB_05cdc5cc;
              iVar9 = FUN_05ced2b8(*(long *)(unaff_x24 + 0x100),unaff_w28,uVar24,0);
              if (iVar9 != 0) {
                if (*(long *)(unaff_x24 + 0x100) == 0) goto LAB_05cdc5cc;
                uVar13 = FUN_05cef718(*(long *)(unaff_x24 + 0x100),iVar9,&stack0x00000150,0);
                if ((uVar13 & 1) != 0) {
                  if ((*unaff_x29 == 0) || (lVar17 = *(long *)(*unaff_x29 + 0x38), lVar17 == 0))
                  goto LAB_05cdc5cc;
                  if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x24 + 0x4a0)) goto LAB_05cdc664;
                  *(undefined8 *)(lVar17 + (long)(int)*(uint *)(unaff_x24 + 0x4a0) * 0x178 + 0x38) =
                       in_stack_00000150;
                  thunk_FUN_02dc1ef0();
                }
              }
              if (*(uint *)(unaff_x21 + 0x18) <= uVar11) goto LAB_05cdc664;
              *(undefined4 *)(in_stack_00000058 + (long)(int)uVar11 * 0x10 + 4) = 0x1a;
              uVar23 = uVar11;
            }
            unaff_w19 = uVar23;
            if ((in_stack_00000010 & 1) == 0) goto LAB_05cdb4b8;
            if (((*(long *)(unaff_x24 + 0x100) != 0) &&
                (lVar17 = *(long *)(*(long *)(unaff_x24 + 0x100) + 0x178), lVar17 != 0)) &&
               (lVar17 = *(long *)(lVar17 + 0x38), lVar17 != 0)) {
              uVar13 = FUN_048bf6ac(lVar17,*(undefined4 *)(unaff_x27 + 0x28),&stack0x00000158,
                                    *(undefined8 *)
                                     Method_PlayFab_PlayFabProgressionInstanceAPI_GetStatistics__);
              if ((uVar13 & 1) != 0) {
                if (in_stack_00000158 == 0) goto LAB_05cdbc70;
                iVar9 = 0;
LAB_05cdb378:
                unaff_x29 = in_stack_00000030;
                unaff_w19 = uVar23;
                if (iVar9 < *(int *)(in_stack_00000158 + 0x18)) {
                  auVar35 = FUN_0365de54(in_stack_00000158,iVar9,
                                         *(undefined8 *)
                                          Method_PlayFab_PlayFabProgressionInstanceAPI_ListStatisticDefinitions__
                                        );
                  lVar17 = auVar35._0_8_;
                  if (lVar17 != 0) {
                    uVar13 = 1;
                    iVar12 = (int)*(undefined8 *)(lVar17 + 0x18);
                    do {
                      uVar11 = unaff_w19 + 1;
                      puVar22 = (undefined4 *)(in_stack_00000060 + (long)(int)uVar11 * 0x10);
LAB_05cdb3d8:
                      if (auVar35._8_4_ == 0 || (long)iVar12 <= (long)uVar13) {
                        if ((auVar35._8_4_ != 0) && ((int)uVar13 == iVar12)) {
                          if (*(long *)(unaff_x24 + 0x100) == 0) break;
                          uVar13 = FUN_05cef718(*(long *)(unaff_x24 + 0x100),
                                                auVar35._8_8_ & 0xffffffff,&stack0x00000148,0);
                          if ((uVar13 & 1) == 0) goto LAB_05cdb488;
                          if ((*in_stack_00000030 == 0) ||
                             (lVar17 = *(long *)(*in_stack_00000030 + 0x38), lVar17 == 0)) break;
                          if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x24 + 0x4a0))
                          goto LAB_05cdc664;
                          *(undefined8 *)
                           (lVar17 + (long)(int)*(uint *)(unaff_x24 + 0x4a0) * 0x178 + 0x38) =
                               in_stack_00000148;
                          thunk_FUN_02dc1ef0();
                          unaff_x25 = (long *)
                                      Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__
                          ;
                          uVar7 = *(uint *)(in_stack_00000068 + 0x18) - uVar23;
                          if (*(uint *)(in_stack_00000068 + 0x18) < uVar23 || uVar7 == 0)
                          goto LAB_05cdc664;
                          uVar11 = uVar11 - uVar23;
                          *(uint *)(in_stack_00000058 + (long)(int)uVar23 * 0x10 + 0xc) = uVar11;
                          unaff_x21 = in_stack_00000068;
                          if ((int)uVar11 < 2) goto LAB_05cdb4b8;
                          uVar13 = 1;
                          goto LAB_05cdbc3c;
                        }
LAB_05cdb488:
                        iVar9 = iVar9 + 1;
                        unaff_x21 = in_stack_00000068;
                        unaff_x25 = (long *)
                                    Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
                        if (in_stack_00000158 != 0) goto LAB_05cdb378;
                        break;
                      }
                      if ((int)*(uint *)(in_stack_00000068 + 0x18) <= (int)uVar11)
                      goto LAB_05cdb488;
                      if (*(uint *)(in_stack_00000068 + 0x18) <= uVar11) goto LAB_05cdc664;
                      if (*(long *)(unaff_x24 + 0x100) == 0) break;
                      uVar10 = *puVar22;
                      iVar8 = FUN_05ced1dc(*(long *)(unaff_x24 + 0x100),uVar10,0);
                      if (*(uint *)(lVar17 + 0x18) <= uVar13) goto LAB_05cdc664;
                      if (iVar8 != *(int *)(lVar17 + uVar13 * 4 + 0x20)) goto code_r0x05cdb420;
                      uVar13 = uVar13 + 1;
                      unaff_w19 = uVar11;
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
          if (*(uint *)(unaff_x21 + 0x18) <= uVar23) goto LAB_05cdc664;
          iVar9 = *(int *)(in_stack_00000058 + (long)(int)uVar23 * 0x10 + 8);
          if ((*(byte *)(unaff_x24 + 0x284) & 1) != 0) {
            *(undefined1 *)(unaff_x24 + 0x292) = 1;
          }
          uVar11 = uStack0000000000000168;
        } while (*(int *)(unaff_x24 + 0x65c) != 1);
        lVar17 = *unaff_x25;
        if (*(int *)(lVar17 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar17 = *unaff_x25;
        }
        lVar17 = **(long **)(lVar17 + 0xb8);
        if (lVar17 != 0) {
          if (*(uint *)(unaff_x24 + 0x120) < *(uint *)(lVar17 + 0x18)) {
            lVar17 = lVar17 + (long)(int)*(uint *)(unaff_x24 + 0x120) * 0x38;
            *(int *)(lVar17 + 0x54) = *(int *)(lVar17 + 0x54) + 1;
            if ((*unaff_x29 != 0) && (lVar17 = *(long *)(*unaff_x29 + 0x38), lVar17 != 0)) {
              if (*(uint *)(unaff_x24 + 0x4a0) < *(uint *)(lVar17 + 0x18)) {
                lVar17 = lVar17 + (long)(int)*(uint *)(unaff_x24 + 0x4a0) * 0x178;
                sVar3 = *(short *)(unaff_x24 + 0x6bc);
                *(undefined8 *)(lVar17 + 0x40) = *(undefined8 *)(unaff_x24 + 0x100);
                *(short *)(lVar17 + 0x24) = sVar3 + -0x2000;
                thunk_FUN_02dc1ef0();
                if ((*(long *)(unaff_x24 + 0x3a0) != 0) &&
                   (lVar17 = *(long *)(*(long *)(unaff_x24 + 0x3a0) + 0x38), lVar17 != 0)) {
                  uVar11 = *(uint *)(unaff_x24 + 0x4a0);
                  if (uVar11 < *(uint *)(lVar17 + 0x18)) {
                    *(undefined4 *)(lVar17 + 0x20 + (long)(int)uVar11 * 0x178 + 0x30) =
                         *(undefined4 *)(unaff_x24 + 0x120);
                    if ((*(long *)(unaff_x24 + 0x6b0) != 0) &&
                       (lVar18 = FUN_05d30174(*(long *)(unaff_x24 + 0x6b0),0), lVar18 != 0)) {
                      uVar27 = FUN_036a5b38(lVar18,*(undefined4 *)(unaff_x24 + 0x6bc),
                                            *(undefined8 *)
                                             Method_PlayFab_PlayFabProgressionInstanceAPI_ListLeaderboardDefinitions__
                                           );
                      if (uVar11 < *(uint *)(lVar17 + 0x18)) {
                        *(undefined8 *)(lVar17 + 0x20 + (long)(int)uVar11 * 0x178 + 0x10) = uVar27;
                        thunk_FUN_02dc1ef0();
                        if ((*unaff_x29 != 0) &&
                           (lVar17 = *(long *)(*unaff_x29 + 0x38), lVar17 != 0)) {
                          uVar11 = *(uint *)(unaff_x24 + 0x4a0);
                          if (uVar11 < *(uint *)(lVar17 + 0x18)) {
                            puVar22 = (undefined4 *)(lVar17 + 0x20 + (long)(int)uVar11 * 0x178);
                            *puVar22 = *(undefined4 *)(unaff_x24 + 0x65c);
                            puVar22[2] = iVar9;
                            if (unaff_w19 < *(uint *)(in_stack_00000068 + 0x18)) {
                              *(int *)(lVar17 + 0x20 + (long)(int)uVar11 * 0x178 + 0xc) =
                                   (*(int *)(in_stack_00000058 + (long)(int)unaff_w19 * 0x10 + 8) -
                                   iVar9) + 1;
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
  }
  goto LAB_05cdc5cc;
  while( true ) {
    iVar9 = (int)uVar13;
    uVar13 = uVar13 + 1;
    *(undefined4 *)(in_stack_00000058 + (long)(int)(uVar23 + iVar9) * 0x10 + 4) = 0x1a;
    if (uVar11 <= uVar13) break;
LAB_05cdbc3c:
    if (uVar7 == uVar13) goto LAB_05cdc664;
  }
LAB_05cdb4b8:
  if ((*unaff_x29 == 0) || (lVar17 = *(long *)(*unaff_x29 + 0x38), lVar17 == 0)) goto LAB_05cdc5cc;
  if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x24 + 0x4a0)) goto LAB_05cdc664;
  lVar17 = lVar17 + (long)(int)*(uint *)(unaff_x24 + 0x4a0) * 0x178;
  plVar19 = (long *)(lVar17 + 0x30);
  *plVar19 = unaff_x27;
  *(undefined4 *)(lVar17 + 0x20) = 0;
  thunk_FUN_02dc1ef0(plVar19,unaff_x27);
  if ((*unaff_x29 == 0) || (lVar17 = *(long *)(*unaff_x29 + 0x38), lVar17 == 0)) goto LAB_05cdc5cc;
  uVar11 = *(uint *)(unaff_x24 + 0x4a0);
  if (*(uint *)(lVar17 + 0x18) <= uVar11) goto LAB_05cdc664;
  lVar18 = lVar17 + 0x20 + (long)(int)uVar11 * 0x178;
  *(undefined1 *)(lVar18 + 0x34) = uStack000000000000016c;
  *(short *)(lVar18 + 4) = (short)unaff_w28;
  if (*(uint *)(unaff_x21 + 0x18) <= unaff_w19) goto LAB_05cdc664;
  lVar17 = lVar17 + 0x20 + (long)(int)uVar11 * 0x178;
  uVar27 = *(undefined8 *)(in_stack_00000058 + (long)(int)unaff_w19 * 0x10 + 8);
  *(undefined8 *)(lVar17 + 0x20) = *(undefined8 *)(unaff_x24 + 0x100);
  *(undefined8 *)(lVar17 + 8) = uVar27;
  thunk_FUN_02dc1ef0();
  if (*(char *)(unaff_x27 + 0x10) != '\x02') goto LAB_05cdb64c;
  plVar19 = *(long **)(unaff_x27 + 0x18);
  if (plVar19 == (long *)0x0) goto LAB_05cdc5cc;
  bVar2 = *(byte *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListMatchmakingQueues__ +
                   0x130);
  if ((*(byte *)(*plVar19 + 0x130) < bVar2) ||
     (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar2 * 8 + -8) !=
      *(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListMatchmakingQueues__))
  goto LAB_05cdc5cc;
  lVar17 = *unaff_x25;
  lVar18 = plVar19[0x11];
  if (*(int *)(lVar17 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
    lVar17 = *unaff_x25;
  }
  uVar11 = FUN_05ccdbac(lVar18,plVar19,*(long *)(lVar17 + 0xb8),
                        *(undefined8 *)(*(long *)(lVar17 + 0xb8) + 8));
  lVar17 = *unaff_x25;
  *(uint *)(unaff_x24 + 0x120) = uVar11;
  lVar17 = **(long **)(lVar17 + 0xb8);
  if (lVar17 == 0) goto LAB_05cdc5cc;
  if (*(uint *)(lVar17 + 0x18) <= uVar11) goto LAB_05cdc664;
  lVar17 = lVar17 + (long)(int)uVar11 * 0x38;
  *(int *)(lVar17 + 0x54) = *(int *)(lVar17 + 0x54) + 1;
  if ((*unaff_x29 == 0) || (lVar17 = *(long *)(*unaff_x29 + 0x38), lVar17 == 0)) goto LAB_05cdc5cc;
  uVar11 = *(uint *)(unaff_x24 + 0x4a0);
  if (*(uint *)(lVar17 + 0x18) <= uVar11) goto LAB_05cdc664;
  lVar17 = lVar17 + (long)(int)uVar11 * 0x178;
  *(undefined4 *)(lVar17 + 0x20) = 1;
  *(undefined4 *)(lVar17 + 0x50) = *(undefined4 *)(unaff_x24 + 0x120);
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
  uVar26 = FUN_05d36978(uVar10,0);
  uVar11 = uVar11 + 1;
  puVar22 = puVar22 + 4;
  if ((uVar26 & 1) != 0) goto LAB_05cdb3d8;
  goto LAB_05cdb488;
LAB_05cdb64c:
  if (uStack000000000000003c != 0) {
    if (*(long *)(unaff_x24 + 0x100) == 0) goto LAB_05cdc5cc;
    iVar9 = FUN_05cdf9e8(*(long *)(unaff_x24 + 0x100),0);
    if (*(long *)(unaff_x24 + 0xf8) == 0) goto LAB_05cdc5cc;
    iVar12 = FUN_05cdf9e8(*(long *)(unaff_x24 + 0xf8),0);
    if (iVar9 != iVar12) {
      if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__ +
                  0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar13 = FUN_05d2c6c4(0);
      if ((uVar13 & 1) == 0) {
        if (*(long *)(unaff_x24 + 0x100) == 0) goto LAB_05cdc5cc;
        uVar27 = *(undefined8 *)(*(long *)(unaff_x24 + 0x100) + 0x88);
      }
      else {
        if (*(long *)(unaff_x24 + 0x100) == 0) goto LAB_05cdc5cc;
        uVar27 = *(undefined8 *)(unaff_x24 + 0x118);
        uVar29 = *(undefined8 *)(*(long *)(unaff_x24 + 0x100) + 0x88);
        if (*(int *)(*(long *)
                      Method_PlayFab_PlayFabProgressionInstanceAPI_UnlinkLeaderboardFromStatistic__
                    + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar27 = FUN_05d27688(uVar27,uVar29,0);
      }
      *(undefined8 *)(unaff_x24 + 0x118) = uVar27;
      thunk_FUN_02dc1ef0(unaff_x24 + 0x118);
      lVar17 = *unaff_x25;
      uVar27 = *(undefined8 *)(unaff_x24 + 0x118);
      uVar29 = *(undefined8 *)(unaff_x24 + 0x100);
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar17 = *unaff_x25;
      }
      uVar10 = FUN_05ccd970(uVar27,uVar29,*(long *)(lVar17 + 0xb8),
                            *(undefined8 *)(*(long *)(lVar17 + 0xb8) + 8));
      *(undefined4 *)(unaff_x24 + 0x120) = uVar10;
    }
  }
  unaff_w20 = 0x178;
  param_1 = *unaff_x29;
  if (param_1 == 0) goto LAB_05cdc5cc;
  goto code_r0x05cdb74c;
LAB_05cdbe40:
  do {
    fVar34 = (float)param_3;
    if (uVar26 != 0) {
      lVar20 = *plVar19;
      if (lVar20 == 0) goto LAB_05cdc5cc;
      if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_05cdc664;
      uVar27 = *(undefined8 *)(lVar20 + uVar26 * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar15 = FUN_05ee2f7c(uVar27,0,0);
      if ((uVar15 & 1) != 0) {
        lVar20 = *unaff_x25;
        plVar25 = (long *)*plVar19;
        if (*(int *)(lVar20 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar20 = *unaff_x25;
        }
        lVar20 = **(long **)(lVar20 + 0xb8);
        if (lVar20 == 0) goto LAB_05cdc5cc;
        if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_05cdc664;
        lVar20 = lVar20 + lVar18;
        in_stack_000000f0 = *(undefined8 *)(lVar20 + -4);
        in_stack_000000e8 = *(undefined8 *)(lVar20 + -0xc);
        in_stack_000000e0 = *(undefined8 *)(lVar20 + -0x14);
        in_stack_000000c8 = *(undefined8 *)(lVar20 + -0x2c);
        uVar27 = *(undefined8 *)(lVar20 + -0x34);
        in_stack_000000d8 = *(undefined8 *)(lVar20 + -0x1c);
        in_stack_000000d0 = *(undefined8 *)(lVar20 + -0x24);
        in_stack_000000c0 = uVar27;
        lVar20 = FUN_05d34370();
        fVar34 = (float)uVar27;
        if (plVar25 == (long *)0x0) goto LAB_05cdc5cc;
        if ((lVar20 != 0) &&
           (lVar16 = thunk_FUN_02d8a53c(lVar20,*(undefined8 *)(*plVar25 + 0x40)), lVar16 == 0)) {
LAB_05cdc668:
          uVar27 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
          FUN_02d4ddac(uVar27,0);
        }
        if (*(uint *)(plVar25 + 3) <= uVar26) goto LAB_05cdc664;
        plVar25[uVar26 + 4] = lVar20;
        thunk_FUN_02dc1ef0((long)plVar25 + lVar30,lVar20);
        unaff_x25 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
        if ((*unaff_x29 == 0) || (lVar20 = *(long *)(*unaff_x29 + 0x60), lVar20 == 0))
        goto LAB_05cdc5cc;
        if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_05cdc664;
        puVar14 = (undefined8 *)(lVar20 + lVar17 + 0x30);
        *puVar14 = 0;
        thunk_FUN_02dc1ef0(puVar14,0);
      }
      if (*(long *)(unaff_x24 + 0x3b8) == 0) goto LAB_05cdc5cc;
      fVar31 = (float)FUN_05eef4e4(*(long *)(unaff_x24 + 0x3b8),0);
      lVar20 = *plVar19;
      if (lVar20 == 0) goto LAB_05cdc5cc;
      if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_05cdc664;
      lVar20 = *(long *)(lVar20 + uVar26 * 8 + 0x20);
      if ((lVar20 == 0) || (fVar33 = fVar34, lVar20 = FUN_05fd8988(lVar20,0), lVar20 == 0))
      goto LAB_05cdc5cc;
      fVar32 = (float)FUN_05eef4e4(lVar20,0);
      fVar34 = (fVar34 - fVar33) * (fVar34 - fVar33);
      param_3 = (ulong)(uint)fVar34;
      if (fVar4 <= (fVar31 - fVar32) * (fVar31 - fVar32) + fVar34) {
        lVar20 = *plVar19;
        if (lVar20 == 0) goto LAB_05cdc5cc;
        if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_05cdc664;
        lVar20 = *(long *)(lVar20 + uVar26 * 8 + 0x20);
        if (lVar20 == 0) goto LAB_05cdc5cc;
        lVar20 = FUN_05fd8988(lVar20,0);
        if ((*(long *)(unaff_x24 + 0x3b8) == 0) ||
           (FUN_05eef4e4(*(long *)(unaff_x24 + 0x3b8),0), lVar20 == 0)) goto LAB_05cdc5cc;
        FUN_05eef5a8(lVar20,0);
      }
      lVar20 = *plVar19;
      if (lVar20 == 0) goto LAB_05cdc5cc;
      if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_05cdc664;
      lVar20 = *(long *)(lVar20 + uVar26 * 8 + 0x20);
      if (lVar20 == 0) goto LAB_05cdc5cc;
      uVar27 = *(undefined8 *)(lVar20 + 0xf0);
      if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar15 = FUN_05ee2f7c(uVar27,0,0);
      if ((uVar15 & 1) == 0) {
        lVar20 = *plVar19;
        if (lVar20 == 0) goto LAB_05cdc5cc;
        if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_05cdc664;
        lVar20 = *(long *)(lVar20 + uVar26 * 8 + 0x20);
        if ((lVar20 == 0) || (lVar20 = *(long *)(lVar20 + 0xf0), lVar20 == 0)) goto LAB_05cdc5cc;
        iVar9 = FUN_05ee6bc0(lVar20,0);
        lVar20 = *unaff_x25;
        if (*(int *)(lVar20 + 0xe4) == 0) {
          thunk_FUN_02dabd98(lVar20);
          lVar20 = *unaff_x25;
        }
        lVar20 = **(long **)(lVar20 + 0xb8);
        if (lVar20 == 0) goto LAB_05cdc5cc;
        if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_05cdc664;
        lVar20 = *(long *)(lVar20 + lVar18 + -0x1c);
        if (lVar20 == 0) goto LAB_05cdc5cc;
        iVar12 = FUN_05ee6bc0(lVar20,0);
        if (iVar9 != iVar12)
        goto 
        UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorLineVisual__get_snapThresholdDistance
        ;
      }
      else {

        UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorLineVisual__get_snapThresholdDistance
        :
        lVar20 = *plVar19;
        if (lVar20 == 0) goto LAB_05cdc5cc;
        if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_05cdc664;
        lVar16 = *unaff_x25;
        lVar20 = *(long *)(lVar20 + uVar26 * 8 + 0x20);
        if (*(int *)(lVar16 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar16 = *unaff_x25;
        }
        lVar16 = **(long **)(lVar16 + 0xb8);
        if (lVar16 == 0) goto LAB_05cdc5cc;
        if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_05cdc664;
        if (lVar20 == 0) goto LAB_05cdc5cc;
        thunk_FUN_05d33fd0(lVar20,*(undefined8 *)(lVar16 + lVar18 + -0x1c),0);
        lVar20 = *plVar19;
        if (lVar20 == 0) goto LAB_05cdc5cc;
        if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_05cdc664;
        lVar16 = **(long **)(*unaff_x25 + 0xb8);
        if (lVar16 == 0) goto LAB_05cdc5cc;
        if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_05cdc664;
        lVar20 = *(long *)(lVar20 + uVar26 * 8 + 0x20);
        if (lVar20 == 0) goto LAB_05cdc5cc;
        *(undefined8 *)(lVar20 + 0xd8) = *(undefined8 *)(lVar16 + lVar18 + -0x2c);
        thunk_FUN_02dc1ef0();
        lVar20 = *plVar19;
        if (lVar20 == 0) goto LAB_05cdc5cc;
        if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_05cdc664;
        lVar16 = **(long **)(*unaff_x25 + 0xb8);
        if (lVar16 == 0) goto LAB_05cdc5cc;
        if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_05cdc664;
        lVar20 = *(long *)(lVar20 + uVar26 * 8 + 0x20);
        if (lVar20 == 0) goto LAB_05cdc5cc;
        *(undefined8 *)(lVar20 + 0xe0) = *(undefined8 *)(lVar16 + lVar18 + -0x24);
        thunk_FUN_02dc1ef0();
      }
      lVar20 = *unaff_x25;
      if (*(int *)(lVar20 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar20 = *unaff_x25;
      }
      lVar16 = **(long **)(lVar20 + 0xb8);
      if (lVar16 == 0) goto LAB_05cdc5cc;
      if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_05cdc664;
      if (*(char *)(lVar16 + lVar18 + -0x13) != '\0') {
        lVar21 = *plVar19;
        if (lVar21 == 0) goto LAB_05cdc5cc;
        if (*(uint *)(lVar21 + 0x18) <= uVar26) goto LAB_05cdc664;
        lVar21 = *(long *)(lVar21 + uVar26 * 8 + 0x20);
        if (*(int *)(lVar20 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar16 = **(long **)(*unaff_x25 + 0xb8);
          if (lVar16 == 0) goto LAB_05cdc5cc;
        }
        if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_05cdc664;
        if (lVar21 == 0) goto LAB_05cdc5cc;
        FUN_05d3402c(lVar21,*(undefined8 *)(lVar16 + lVar18 + -0x1c),0);
        lVar20 = *plVar19;
        if (lVar20 == 0) goto LAB_05cdc5cc;
        if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_05cdc664;
        lVar16 = **(long **)(*unaff_x25 + 0xb8);
        if (lVar16 == 0) goto LAB_05cdc5cc;
        if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_05cdc664;
        lVar20 = *(long *)(lVar20 + uVar26 * 8 + 0x20);
        if (lVar20 == 0) goto LAB_05cdc5cc;
        *(undefined8 *)(lVar20 + 0x100) = *(undefined8 *)(lVar16 + lVar18 + -0xc);
        thunk_FUN_02dc1ef0(lVar20 + 0x100);
      }
    }
    lVar20 = *unaff_x25;
    if (*(int *)(lVar20 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar20 = *unaff_x25;
    }
    unaff_x25 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
    lVar20 = **(long **)(lVar20 + 0xb8);
    if (lVar20 == 0) goto LAB_05cdc5cc;
    if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_05cdc664;
    if ((*unaff_x29 == 0) || (lVar16 = *(long *)(*unaff_x29 + 0x60), lVar16 == 0))
    goto LAB_05cdc5cc;
    if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_05cdc664;
    lVar21 = lVar16 + lVar17;
    uVar23 = *(uint *)(lVar20 + lVar18);
    if (*(long *)(lVar21 + 0x30) == 0) {
      if (uVar26 == 0) {
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
        FUN_05d281bc(&stack0x00000070,*(undefined8 *)(unaff_x24 + 0x3d8),uVar23 + 1,0);
        if (*(int *)(lVar16 + 0x18) == 0) goto LAB_05cdc664;
      }
      else {
        lVar20 = *plVar19;
        if (lVar20 == 0) goto LAB_05cdc5cc;
        if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_05cdc664;
        lVar20 = *(long *)(lVar20 + uVar26 * 8 + 0x20);
        if (lVar20 == 0) goto LAB_05cdc5cc;
        uVar27 = FUN_05d34208(lVar20,0);
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
        FUN_05d281bc(&stack0x00000070,uVar27,uVar23 + 1,0);
        if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_05cdc664;
        lVar16 = lVar16 + lVar17;
      }
      memmove((void *)(lVar16 + 0x20),&stack0x00000070,0x50);
      thunk_FUN_02dc1ef0(lVar21 + 0x20,0);
      unaff_x25 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
    }
    else {
      iVar9 = *(int *)(*(long *)(lVar21 + 0x30) + 0x18);
      if (iVar9 < (int)(uVar23 * 4)) {
        if ((int)uVar23 < 0x401) {
          uVar23 = uVar23 | (int)uVar23 >> 0x10;
          uVar23 = uVar23 | (int)uVar23 >> 8;
          uVar23 = uVar23 | (int)uVar23 >> 4;
          uVar23 = uVar23 | (int)uVar23 >> 2;
          uVar23 = uVar23 | (int)uVar23 >> 1;

          UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorLineVisual__get_stopLineAtFirstRaycastHit
          :
          iVar9 = uVar23 + 1;
        }
        else {
LAB_05cdc33c:
          iVar9 = uVar23 + 0x100;
        }
        if (*(int *)(*(long *)PTR_DAT_06649d28 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider__OnHoverExited
                  (lVar21 + 0x20,iVar9,0);
      }
      else if ((*(char *)(unaff_x24 + 0x359) != '\0') && (0 < (int)uVar23)) {
        iVar12 = iVar9 + 3;
        if (-1 < iVar9) {
          iVar12 = iVar9;
        }
        if (0x100 < (int)((iVar12 >> 2) - uVar23)) {
          if (uVar23 < 0x401) {
            uVar23 = uVar23 >> 4 | uVar23 >> 8 | uVar23;
            uVar23 = uVar23 | uVar23 >> 2;
            uVar23 = uVar23 | uVar23 >> 1;
            goto 
            UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorLineVisual__get_stopLineAtFirstRaycastHit
            ;
          }
          goto LAB_05cdc33c;
        }
      }
    }
    if ((*in_stack_00000030 == 0) || (lVar20 = *(long *)(*in_stack_00000030 + 0x60), lVar20 == 0))
    goto LAB_05cdc5cc;
    lVar16 = *unaff_x25;
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar16 = *unaff_x25;
    }
    lVar16 = **(long **)(lVar16 + 0xb8);
    if (lVar16 == 0) goto LAB_05cdc5cc;
    if ((*(uint *)(lVar16 + 0x18) <= uVar26) || (*(uint *)(lVar20 + 0x18) <= uVar26))
    goto LAB_05cdc664;
    *(undefined8 *)(lVar20 + lVar17 + 0x68) = *(undefined8 *)(lVar16 + lVar18 + -0x1c);
    thunk_FUN_02dc1ef0();
    uVar26 = uVar26 + 1;
    lVar17 = lVar17 + 0x50;
    lVar18 = lVar18 + 0x38;
    lVar30 = lVar30 + 8;
    unaff_x29 = in_stack_00000030;
  } while (uVar13 != uVar26);
LAB_05cdc510:
  lVar17 = *plVar19;
  if (lVar17 != 0) {
    lVar18 = (long)(int)uVar11 + 4;
    do {
      uVar11 = (uint)*(undefined8 *)(lVar17 + 0x18);
      if ((long)(int)uVar11 <= lVar18 + -4) {
LAB_05cdbc7c:
        return *(undefined4 *)(unaff_x24 + 0x4a0);
      }
      uVar23 = (uint)uVar13;
      if (uVar11 <= uVar23) {
LAB_05cdc664:
                    /* WARNING: Subroutine does not return */
        FUN_02d4def0();
      }
      uVar27 = *(undefined8 *)(lVar17 + lVar18 * 8);
      if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar13 = FUN_05ee1474(uVar27,0,0);
      if ((uVar13 & 1) == 0) goto LAB_05cdbc7c;
      if ((*unaff_x29 == 0) || (lVar17 = *(long *)(*unaff_x29 + 0x60), lVar17 == 0)) break;
      if (lVar18 + -4 < (long)*(int *)(lVar17 + 0x18)) {
        lVar17 = *plVar19;
        if (lVar17 == 0) break;
        if (*(uint *)(lVar17 + 0x18) <= uVar23) goto LAB_05cdc664;
        lVar17 = *(long *)(lVar17 + lVar18 * 8);
        if ((lVar17 == 0) || (lVar17 = FUN_05fd9268(lVar17,0), lVar17 == 0)) break;
        FUN_061b2e18(lVar17,0,0);
      }
      lVar17 = *plVar19;
      lVar18 = lVar18 + 1;
      uVar13 = (ulong)(uVar23 + 1);
    } while (lVar17 != 0);
  }
LAB_05cdc5cc:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


