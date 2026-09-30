/*
FUNCTION_NAME: PlayFab.PlayFabEconomyAPI$$RedeemNintendoEShopInventoryItems
ENTRY_POINT: 051b6984
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_18;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3
*/


long PlayFab_PlayFabEconomyAPI__RedeemNintendoEShopInventoryItems(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  byte bVar10;
  long unaff_x19;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  int iStack0000000000000008;
  undefined1 uStack000000000000000c;
  
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    if (*(char *)(*(long *)(unaff_x19 + 0x10) + 0x26) != '\0') {
      lVar4 = FUN_051bb5a0();
      return lVar4;
    }
    if (*(long *)(unaff_x19 + 0xa0) == 0) {
      lVar4 = FUN_02d4dd2c(*(undefined8 *)PTR_DAT_06646288,0x29);
      puVar2 = UnityEngine_UIElements_StyleSheet_var;
      lVar7 = *(long *)UnityEngine_UIElements_StyleSheet_var;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02dabd98(lVar7);
        lVar7 = *(long *)puVar2;
      }
      if (lVar4 != 0) {
        if (*(int *)(lVar4 + 0x18) != 0) {
          lVar7 = **(long **)(lVar7 + 0xb8);
          *(undefined1 *)(lVar4 + 0x20) = 0xf3;
          if (*(int *)(lVar4 + 0x18) != 1) {
            *(undefined1 *)(lVar4 + 0x21) = 0;
            plVar6 = *(long **)(unaff_x19 + 0x18);
            if ((plVar6 == (long *)0x0) ||
               (lVar12 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400)),
               lVar12 == 0)) goto LAB_051b6df8;
            if ((*(int *)(lVar12 + 0x18) != 0) && (2 < *(uint *)(lVar4 + 0x18))) {
              *(undefined1 *)(lVar4 + 0x22) = *(undefined1 *)(lVar12 + 0x20);
              plVar6 = *(long **)(unaff_x19 + 0x18);
              if ((plVar6 == (long *)0x0) ||
                 (lVar12 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400)),
                 lVar12 == 0)) goto LAB_051b6df8;
              if (((*(uint *)(lVar12 + 0x18) & 0xfffffffe) != 0) &&
                 ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0)) {
                *(undefined1 *)(lVar4 + 0x23) = *(undefined1 *)(lVar12 + 0x21);
                if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_051b6df8;
                uVar3 = FUN_051be2fc(*(long *)(unaff_x19 + 0x10),0);
                uVar1 = *(uint *)(lVar4 + 0x18);
                if (4 < uVar1) {
                  *(undefined1 *)(lVar4 + 0x24) = uVar3;
                  if (lVar7 == 0) goto LAB_051b6df8;
                  if (((((*(int *)(lVar7 + 0x18) != 1) && (*(int *)(lVar7 + 0x18) != 0)) &&
                       (uVar1 != 5)) &&
                      ((*(byte *)(lVar4 + 0x25) =
                             *(byte *)(lVar7 + 0x21) | *(char *)(lVar7 + 0x20) << 4,
                       2 < *(uint *)(lVar7 + 0x18) && (6 < uVar1)))) &&
                     ((*(undefined1 *)(lVar4 + 0x26) = *(undefined1 *)(lVar7 + 0x22),
                      (*(uint *)(lVar7 + 0x18) & 0xfffffffc) != 0 &&
                      ((uVar1 != 7 &&
                       (*(undefined1 *)(lVar4 + 0x27) = *(undefined1 *)(lVar7 + 0x23), 8 < uVar1))))
                     )) {
                    *(undefined1 *)(lVar4 + 0x28) = 0;
                    plVar6 = (long *)(unaff_x19 + 0xb0);
                    uVar8 = FUN_04e7faf0(*plVar6,0);
                    if ((uVar8 & 1) != 0) {
                      *plVar6 = *(long *)
                                 PlayFab_MultiplayerModels_SubscribeToLobbyResourceResult_var;
                      thunk_FUN_02dc1ef0(plVar6);
                    }
                    uVar8 = 0;
                    do {
                      lVar7 = *plVar6;
                      if (lVar7 == 0) goto LAB_051b6df8;
                      if ((long)uVar8 < (long)*(int *)(lVar7 + 0x10)) {
                        uVar3 = FUN_04e7a3d8(lVar7,uVar8 & 0xffffffff,0);
                      }
                      else {
                        uVar3 = 0;
                      }
                      uVar1 = *(uint *)(lVar4 + 0x18);
                      if ((ulong)uVar1 <= uVar8 + 9) goto LAB_051b6dfc;
                      lVar7 = lVar4 + uVar8;
                      uVar8 = uVar8 + 1;
                      *(undefined1 *)(lVar7 + 0x29) = uVar3;
                    } while (uVar8 != 0x20);
                    if ((*(long *)(unaff_x19 + 0x28) == 0) ||
                       (*(char *)(*(long *)(unaff_x19 + 0x28) + 0x44) == '\0')) {
                      if (5 < uVar1) {
                        bVar10 = *(byte *)(lVar4 + 0x25) & 0x7f;
                        goto LAB_051b6de0;
                      }
                    }
                    else if (5 < uVar1) {
                      bVar10 = *(byte *)(lVar4 + 0x25) | 0x80;
LAB_051b6de0:
                      *(byte *)(lVar4 + 0x25) = bVar10;
                      return lVar4;
                    }
                  }
                }
              }
            }
          }
        }
LAB_051b6dfc:
                    /* WARNING: Subroutine does not return */
        FUN_02d4def0();
      }
    }
    else {
      lVar4 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_06648668);
      FUN_0483b4a8(lVar4,*(undefined8 *)PTR_DAT_06648670);
      puVar2 = PTR_DAT_06648678;
      if (lVar4 != 0) {
        FUN_0483c210(lVar4,*(undefined8 *)UnityEngine_UIElements_Experimental_StyleValues_var,0,
                     *(undefined8 *)PTR_DAT_06648678);
        FUN_0483c210(lVar4,*(undefined8 *)
                            PlayFab_MultiplayerModels_SubscribeToLobbyResourceRequest_var,
                     *(undefined8 *)(unaff_x19 + 0xb0),*(undefined8 *)puVar2);
        if (*(long *)(unaff_x19 + 0x10) != 0) {
          uVar5 = FUN_051be308(*(long *)(unaff_x19 + 0x10),0);
          FUN_0483c210(lVar4,*(undefined8 *)
                              PlayFab_MultiplayerModels_SubscribeToMatchResourceRequest_var,uVar5,
                       *(undefined8 *)puVar2);
          plVar6 = *(long **)(unaff_x19 + 0x18);
          if (plVar6 != (long *)0x0) {
            uVar5 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
            FUN_0483c210(lVar4,*(undefined8 *)PlayFab_EconomyModels_SubmitItemReviewVoteRequest_var,
                         uVar5,*(undefined8 *)puVar2);
            if (*(long *)(unaff_x19 + 0x10) != 0) {
              uStack000000000000000c = FUN_051be2fc(*(long *)(unaff_x19 + 0x10),0);
              uVar5 = FUN_04f73bf4((long)&stack0x00000008 + 4,0);
              lVar7 = FUN_0483c210(lVar4,*(undefined8 *)UnityEngine_UIElements_StyleVariable_var,
                                   uVar5,*(undefined8 *)puVar2);
              if (*(long *)(unaff_x19 + 0xa0) == 0) {
                iVar13 = 0;
                lVar12 = 0;
              }
              else {
                if ((*(long *)(unaff_x19 + 0x18) == 0) || (lVar7 = FUN_051b8e58(), lVar7 == 0))
                goto LAB_051b6df8;
                iVar13 = *(int *)(lVar7 + 0x18);
                lVar12 = lVar7;
              }
              uVar5 = FUN_051bb374(lVar7,lVar4);
              if ((*(long *)(unaff_x19 + 0x28) != 0) &&
                 (*(char *)(*(long *)(unaff_x19 + 0x28) + 0x44) != '\0')) {
                uVar5 = FUN_04e723e0(uVar5,*(undefined8 *)
                                            UnityEngine_InputSystem_UI_SubmitCancelModel_var,0);
              }
              uVar11 = *(undefined8 *)(unaff_x19 + 0x30);
              iStack0000000000000008 = iVar13;
              uVar9 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x48),&stack0x00000008);
              lVar4 = FUN_04e81020(*(undefined8 *)
                                    PlayFab_EconomyModels_SubmitItemReviewVoteResponse_var,uVar5,
                                   uVar11,uVar9,0);
              if (lVar4 != 0) {
                lVar7 = FUN_02d4dd2c(*(undefined8 *)PTR_DAT_06646288,*(int *)(lVar4 + 0x10) + iVar13
                                    );
                if (lVar12 != 0) {
                  FUN_0502fc24(lVar12,0,lVar7,*(undefined4 *)(lVar4 + 0x10),
                               *(undefined4 *)(lVar12 + 0x18),0);
                }
                plVar6 = (long *)FUN_04e99054(0);
                if (plVar6 != (long *)0x0) {
                  uVar5 = (**(code **)(*plVar6 + 600))
                                    (plVar6,lVar4,*(undefined8 *)(*plVar6 + 0x260));
                  FUN_0502fc24(uVar5,0,lVar7,0,*(undefined4 *)(lVar4 + 0x10),0);
                  return lVar7;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_051b6df8:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


