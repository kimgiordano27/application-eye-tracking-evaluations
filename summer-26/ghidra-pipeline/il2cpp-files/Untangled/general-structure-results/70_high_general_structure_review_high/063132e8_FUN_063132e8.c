/*
FUNCTION_NAME: FUN_063132e8
ENTRY_POINT: 063132e8
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_15;telemetry_or_network_hits_11;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_063132e8(long *param_1,void *param_2,long param_3,undefined4 param_4,long param_5,
                 ulong *param_6)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  int iVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined1 auStack_6c8 [696];
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined8 uStack_dc;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if ((bRam00000000071cd089 & 1) == 0) {
    FUN_02f07e70(PlayFab_ClientModels_GetPlayFabIDsFromFacebookInstantGamesIdsRequest_var);
    FUN_02f07e70(PlayFab_ClientModels_GetPlayFabIDsFromFacebookIDsResult_var);
    FUN_02f07e70(PlayFab_EconomyModels_GetItemModerationStateRequest_var);
    FUN_02f07e70(PlayFab_ClientModels_GetLeaderboardAroundPlayerRequest_var);
    FUN_02f07e70(PlayFab_ClientModels_GetPlayFabIDsFromFacebookInstantGamesIdsResult_var);
    FUN_02f07e70(PlayFab_ClientModels_GetPlayFabIDsFromFacebookIDsRequest_var);
    bRam00000000071cd089 = 1;
  }
  uStack_98 = 0;
  uStack_a0 = 0;
  if (param_1 != (long *)0x0) {
    lVar8 = *param_1;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)PlayFab_ClientModels_GetPlayFabIDsFromFacebookIDsResult_var) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_063133e4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_02eea86c(param_1,*(long *)
                                   PlayFab_ClientModels_GetPlayFabIDsFromFacebookIDsResult_var,0);
LAB_063133e4:
    lVar8 = (*(code *)*puVar5)(param_1,puVar5[1]);
    if ((lVar8 != 0) && (plVar12 = *(long **)(lVar8 + 0x158), plVar12 != (long *)0x0)) {
      lVar8 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)PlayFab_ClientModels_GetPlayFabIDsFromFacebookInstantGamesIdsRequest_var) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_06313450;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_02eea86c(plVar12,*(long *)
                                     PlayFab_ClientModels_GetPlayFabIDsFromFacebookInstantGamesIdsRequest_var
                            ,0);
LAB_06313450:
      lVar8 = (*(code *)*puVar5)(plVar12,puVar5[1]);
      puVar4 = PlayFab_ClientModels_GetPlayFabIDsFromFacebookInstantGamesIdsResult_var;
      if (lVar8 != 0) {
        if (0 < *(int *)(lVar8 + 0x18)) {
          iVar13 = 0;
          do {
            lVar6 = FUN_03fd09cc(lVar8,iVar13,*(undefined8 *)puVar4);
            if (lVar6 == 0) goto LAB_06313834;
            FUN_0630c4cc();
            iVar13 = iVar13 + 1;
          } while (iVar13 < *(int *)(lVar8 + 0x18));
        }
        FUN_063215f4(0);
        lVar8 = *param_1;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) ==
                *(long *)PlayFab_ClientModels_GetPlayFabIDsFromFacebookIDsResult_var) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_06313500;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_02eea86c(param_1,*(long *)
                                       PlayFab_ClientModels_GetPlayFabIDsFromFacebookIDsResult_var,0
                             );
LAB_06313500:
        lVar8 = (*(code *)*puVar5)(param_1,puVar5[1]);
        uVar3 = _UNK_0144fbd8;
        uVar2 = _DAT_0144fbd0;
        if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x58), lVar8 != 0)) {
          if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
            uVar10 = 0;
            uVar9 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
            do {
              uVar1 = 1 << (ulong)((uint)uVar10 & 0x1f);
              if ((*(uint *)(param_5 + 0x18) & uVar1) != 0) {
                if (uVar9 <= uVar10) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f080c8();
                }
                if (param_3 == 0) goto LAB_06313834;
                uVar14 = *(undefined8 *)(lVar8 + uVar10 * 0x20 + 0x20);
                FUN_066e49ac(param_3,uVar14,0);
                if (*(int *)(*(long *)PlayFab_EconomyModels_GetItemModerationStateRequest_var + 0xe0
                            ) == 0) {
                  thunk_FUN_02f12b58();
                }
                uVar9 = FUN_0630fa44(param_4,uVar10 & 0xffffffff,&uStack_a0);
                if ((uVar9 & 1) == 0) {
                  uVar15 = 0;
                  uVar16 = 0x3f800000;
                  uVar17 = 0;
                  uVar18 = 0;
                  uStack_98 = uVar3;
                  uStack_a0 = uVar2;
                }
                else {
                  uVar15 = (undefined4)uStack_98;
                  uVar16 = uStack_98._4_4_;
                  uVar17 = uStack_a0._4_4_;
                  uVar18 = (undefined4)uStack_a0;
                }
                uVar1 = *(uint *)(param_5 + 0x1c) & uVar1;
                uStack_108 = *param_6 ^
                             (*param_6 ^ 0x400000004) &
                             CONCAT44((int)((uint)(uVar1 == 0) << 0x1f) >> 0x1f,
                                      (int)((uint)(uVar1 == 0) << 0x1f) >> 0x1f);
                uStack_dc = *(undefined8 *)((long)param_6 + 0x2c);
                uStack_f8 = param_6[2];
                uStack_100 = param_6[1];
                uStack_f0 = param_6[3];
                uStack_e0 = (undefined4)((ulong)*(undefined8 *)((long)param_6 + 0x24) >> 0x20);
                uStack_e8 = (undefined4)param_6[4];
                uStack_e4 = (undefined4)(param_6[4] >> 0x20);
                FUN_0631383c(&uStack_3e8,param_5,param_3,&uStack_108,uVar10 & 0xffffffff);
                uStack_b0 = uStack_3c8;
                uStack_b8 = uStack_3d0;
                uStack_c0 = uStack_3d8;
                uStack_c8 = uStack_3e0;
                uStack_d0 = uStack_3e8;
                uStack_128 = uStack_3e0;
                uStack_130 = uStack_3e8;
                uStack_118 = uStack_3d0;
                uStack_120 = uStack_3d8;
                uStack_110 = uStack_3c8;
                FUN_066e4f9c(param_3,&uStack_130,2,0,2,3,0);
                FUN_066e3e10(uVar18,uVar17,uVar15,uVar16,param_3,0,1,0);
                if (uVar1 != 0) {
                  memcpy(&uStack_3e8,param_2,0x2b8);
                  uStack_3f0 = uStack_b0;
                  uStack_408 = uStack_c8;
                  uStack_410 = uStack_d0;
                  uStack_3f8 = uStack_b8;
                  uStack_400 = uStack_c0;
                  lVar6 = *param_1;
                  uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
                  if (uVar9 != 0) {
                    piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar11 + -2) ==
                          *(long *)PlayFab_ClientModels_GetPlayFabIDsFromFacebookIDsResult_var) {
                        puVar5 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
                        goto LAB_06313710;
                      }
                      uVar9 = uVar9 - 1;
                      piVar11 = piVar11 + 4;
                    } while (uVar9 != 0);
                  }
                  puVar5 = (undefined8 *)
                           FUN_02eea86c(param_1,*(long *)
                                                 PlayFab_ClientModels_GetPlayFabIDsFromFacebookIDsResult_var
                                        ,0);
LAB_06313710:
                  lVar6 = (*(code *)*puVar5)(param_1,puVar5[1]);
                  if ((lVar6 == 0) || (plVar12 = *(long **)(lVar6 + 0x158), plVar12 == (long *)0x0))
                  goto LAB_06313834;
                  lVar6 = *plVar12;
                  uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
                  if (uVar9 != 0) {
                    piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar11 + -2) ==
                          *(long *)
                           PlayFab_ClientModels_GetPlayFabIDsFromFacebookInstantGamesIdsRequest_var)
                      {
                        puVar5 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
                        goto LAB_0631377c;
                      }
                      uVar9 = uVar9 - 1;
                      piVar11 = piVar11 + 4;
                    } while (uVar9 != 0);
                  }
                  puVar5 = (undefined8 *)
                           FUN_02eea86c(plVar12,*(long *)
                                                 PlayFab_ClientModels_GetPlayFabIDsFromFacebookInstantGamesIdsRequest_var
                                        ,0);
LAB_0631377c:
                  uVar7 = (*(code *)*puVar5)(plVar12,puVar5[1]);
                  if (*(int *)(*(long *)PlayFab_ClientModels_GetPlayFabIDsFromFacebookIDsRequest_var
                              + 0xe0) == 0) {
                    thunk_FUN_02f12b58(*(long *)
                                        PlayFab_ClientModels_GetPlayFabIDsFromFacebookIDsRequest_var
                                      );
                  }
                  memcpy(auStack_6c8,&uStack_3e8,0x2b8);
                  uStack_6e8 = uStack_408;
                  uStack_6f0 = uStack_410;
                  uStack_6d8 = uStack_3f8;
                  uStack_6e0 = uStack_400;
                  uStack_6d0 = uStack_3f0;
                  FUN_06317818(param_1,auStack_6c8,uVar10 & 0xffffffff,param_3,param_4,&uStack_6f0,
                               uVar7);
                }
                FUN_066e49f0(param_3,uVar14,0);
              }
              uVar9 = (ulong)*(uint *)(lVar8 + 0x18);
              uVar10 = uVar10 + 1;
            } while ((long)uVar10 < (long)(int)*(uint *)(lVar8 + 0x18));
          }
          return;
        }
      }
    }
  }
LAB_06313834:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


