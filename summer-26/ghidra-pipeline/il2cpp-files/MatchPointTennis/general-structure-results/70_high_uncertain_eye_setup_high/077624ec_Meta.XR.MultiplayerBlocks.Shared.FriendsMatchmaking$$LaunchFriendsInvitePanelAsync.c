/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.FriendsMatchmaking$$LaunchFriendsInvitePanelAsync
ENTRY_POINT: 077624ec
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_20;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking__LaunchFriendsInvitePanelAsync
               (undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long unaff_x20;
  uint unaff_w21;
  int unaff_w22;
  int unaff_w23;
  long unaff_x24;
  long *plVar11;
  undefined4 unaff_w26;
  int unaff_w27;
  undefined4 unaff_w28;
  long unaff_x29;
  undefined8 uVar12;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000018;
  
code_r0x077624ec:
  lVar10 = thunk_FUN_0448520c(param_1);
  FUN_07a80df4(lVar10,0);
  *(int *)(lVar10 + 0x10) = unaff_w22 + unaff_w23;
  *(undefined4 *)(lVar10 + 0x14) = unaff_w26;
  *(int *)(lVar10 + 0x18) = unaff_w27 - unaff_w22;
  *(undefined4 *)(lVar10 + 0x1c) = unaff_w28;
  if (unaff_x24 != 0) {
    do {
      *(long *)(unaff_x24 + 0x20) = lVar10;
      thunk_FUN_044bb4b4((long *)(unaff_x24 + 0x20),lVar10);
      puVar7 = PTR_DAT_09f32bf8;
      lVar10 = *(long *)(unaff_x20 + 0x18);
      if (lVar10 == 0) break;
      if (*(uint *)(lVar10 + 0x18) <= in_stack_00000000._4_4_) goto LAB_07762678;
      lVar10 = lVar10 + in_stack_00000008 * 8;
      while( true ) {
        unaff_x20 = *(long *)(lVar10 + 0x20);
        if (unaff_x20 == 0) goto LAB_0776262c;
        if ((DAT_0a5232ce & 1) == 0) {
          FUN_04447ba8(puVar7);
          FUN_04447ba8(PTR_DAT_09f32c00);
          DAT_0a5232ce = 1;
        }
        uVar8 = FUN_07765ad8(unaff_x20);
        if ((uVar8 & 1) != 0) break;
        lVar10 = *(long *)(unaff_x20 + 0x18);
        if (lVar10 == 0) goto LAB_0776262c;
        if (*(uint *)(lVar10 + 0x18) <= in_stack_00000000._4_4_) goto LAB_07762678;
        lVar10 = *(long *)(lVar10 + in_stack_00000008 * 8 + 0x20);
        if (lVar10 == 0) goto LAB_0776262c;
        lVar10 = FUN_077622bc(lVar10,in_stack_00000018,unaff_w21);
        if (lVar10 != 0) {
          return lVar10;
        }
        lVar10 = *(long *)(unaff_x20 + 0x18);
        if (lVar10 == 0) goto LAB_0776262c;
        if (*(uint *)(lVar10 + 0x18) <= unaff_w21) goto LAB_07762678;
        lVar10 = lVar10 + unaff_x29 * 8;
      }
      if (*(long *)(unaff_x20 + 0x28) != 0) {
        return 0;
      }
      lVar10 = *(long *)(unaff_x20 + 0x20);
      if ((lVar10 == 0) || (in_stack_00000018 == 0)) break;
      if (*(int *)(lVar10 + 0x18) < *(int *)(in_stack_00000018 + 0x14)) {
        return 0;
      }
      if (*(int *)(lVar10 + 0x1c) < *(int *)(in_stack_00000018 + 0x18)) {
        return 0;
      }
      if ((*(int *)(lVar10 + 0x18) == *(int *)(in_stack_00000018 + 0x14)) &&
         (*(int *)(lVar10 + 0x1c) == *(int *)(in_stack_00000018 + 0x18))) {
        *(long *)(unaff_x20 + 0x28) = in_stack_00000018;
        thunk_FUN_044bb4b4((long *)(unaff_x20 + 0x28),in_stack_00000018);
        return unaff_x20;
      }
      plVar11 = *(long **)(unaff_x20 + 0x18);
      lVar10 = thunk_FUN_0448520c(*(undefined8 *)puVar7);
      FUN_07762244(lVar10,2);
      if (plVar11 == (long *)0x0) break;
      if ((lVar10 != 0) &&
         (lVar9 = thunk_FUN_04485110(lVar10,*(undefined8 *)(*plVar11 + 0x40)), lVar9 == 0)) {
Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking__LaunchRosterPanelAsync:
        uVar12 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
        FUN_04447d10(uVar12,0);
      }
      if (*(uint *)(plVar11 + 3) <= in_stack_00000000._4_4_) goto LAB_07762678;
      plVar11[in_stack_00000008 + 4] = lVar10;
      thunk_FUN_044bb4b4(plVar11 + in_stack_00000008 + 4,lVar10);
      plVar11 = *(long **)(unaff_x20 + 0x18);
      lVar10 = thunk_FUN_0448520c(*(undefined8 *)puVar7);
      FUN_07762244(lVar10,2);
      if (plVar11 == (long *)0x0) break;
      if ((lVar10 != 0) &&
         (lVar9 = thunk_FUN_04485110(lVar10,*(undefined8 *)(*plVar11 + 0x40)), lVar9 == 0))
      goto Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking__LaunchRosterPanelAsync;
      if (*(uint *)(plVar11 + 3) <= unaff_w21) goto LAB_07762678;
      plVar11[unaff_x29 + 4] = lVar10;
      thunk_FUN_044bb4b4(plVar11 + unaff_x29 + 4,lVar10);
      lVar10 = *(long *)(unaff_x20 + 0x20);
      if ((lVar10 == 0) || (lVar9 = *(long *)(unaff_x20 + 0x18), lVar9 == 0)) break;
      if (*(uint *)(lVar9 + 0x18) <= in_stack_00000000._4_4_) goto LAB_07762678;
      iVar1 = *(int *)(lVar10 + 0x18);
      iVar5 = *(int *)(lVar10 + 0x1c);
      uVar12 = *(undefined8 *)(lVar10 + 0x10);
      iVar2 = *(int *)(in_stack_00000018 + 0x14);
      iVar6 = *(int *)(in_stack_00000018 + 0x18);
      lVar9 = *(long *)(lVar9 + in_stack_00000008 * 8 + 0x20);
      lVar10 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c00);
      FUN_07a80df4(lVar10,0);
      *(undefined8 *)(lVar10 + 0x10) = uVar12;
      if (iVar5 - iVar6 < iVar1 - iVar2) goto code_r0x0776248c;
      *(int *)(lVar10 + 0x18) = iVar1;
      *(int *)(lVar10 + 0x1c) = iVar6;
      if (lVar9 == 0) break;
      *(long *)(lVar9 + 0x20) = lVar10;
      thunk_FUN_044bb4b4((long *)(lVar9 + 0x20),lVar10);
      lVar10 = *(long *)(unaff_x20 + 0x18);
      if (lVar10 == 0) break;
      if (*(uint *)(lVar10 + 0x18) <= unaff_w21) goto LAB_07762678;
      lVar9 = *(long *)(unaff_x20 + 0x20);
      if (lVar9 == 0) break;
      unaff_x24 = *(long *)(lVar10 + unaff_x29 * 8 + 0x20);
      uVar3 = *(undefined4 *)(lVar9 + 0x10);
      iVar1 = *(int *)(lVar9 + 0x14);
      iVar5 = *(int *)(in_stack_00000018 + 0x18);
      uVar4 = *(undefined4 *)(lVar9 + 0x18);
      iVar2 = *(int *)(lVar9 + 0x1c);
      lVar10 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c00);
      FUN_07a80df4(lVar10,0);
      *(undefined4 *)(lVar10 + 0x10) = uVar3;
      *(int *)(lVar10 + 0x14) = iVar5 + iVar1;
      *(undefined4 *)(lVar10 + 0x18) = uVar4;
      *(int *)(lVar10 + 0x1c) = iVar2 - iVar5;
      if (unaff_x24 == 0) break;
    } while( true );
  }
LAB_0776262c:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
code_r0x0776248c:
  *(int *)(lVar10 + 0x18) = iVar2;
  *(int *)(lVar10 + 0x1c) = iVar5;
  if (lVar9 == 0) goto LAB_0776262c;
  *(long *)(lVar9 + 0x20) = lVar10;
  thunk_FUN_044bb4b4((long *)(lVar9 + 0x20),lVar10);
  lVar10 = *(long *)(unaff_x20 + 0x18);
  if (lVar10 == 0) goto LAB_0776262c;
  if (*(uint *)(lVar10 + 0x18) <= unaff_w21) {
LAB_07762678:
                    /* WARNING: Subroutine does not return */
    FUN_04447e4c();
  }
  lVar9 = *(long *)(unaff_x20 + 0x20);
  if (lVar9 == 0) goto LAB_0776262c;
  unaff_x24 = *(long *)(lVar10 + unaff_x29 * 8 + 0x20);
  unaff_w22 = *(int *)(in_stack_00000018 + 0x14);
  unaff_w23 = *(int *)(lVar9 + 0x10);
  unaff_w26 = *(undefined4 *)(lVar9 + 0x14);
  unaff_w27 = *(int *)(lVar9 + 0x18);
  unaff_w28 = *(undefined4 *)(lVar9 + 0x1c);
  param_1 = *(undefined8 *)PTR_DAT_09f32c00;
  goto code_r0x077624ec;
}


