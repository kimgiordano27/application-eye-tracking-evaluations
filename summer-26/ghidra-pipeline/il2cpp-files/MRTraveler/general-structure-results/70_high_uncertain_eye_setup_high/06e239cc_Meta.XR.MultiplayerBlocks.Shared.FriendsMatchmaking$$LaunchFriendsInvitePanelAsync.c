/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.FriendsMatchmaking$$LaunchFriendsInvitePanelAsync
ENTRY_POINT: 06e239cc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking__LaunchFriendsInvitePanelAsync
               (undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  undefined4 unaff_w22;
  undefined8 unaff_x23;
  long unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
code_r0x06e239cc:
  uStack0000000000000008 = unaff_w22;
  uVar3 = thunk_FUN_03cf4e64(*param_1,&stack0x00000008);
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    in_stack_00000000._4_4_ =
         FUN_0699d650(*(long *)(unaff_x19 + 0x30),unaff_w22,*(undefined8 *)PTR_DAT_08e7e288);
    uVar4 = thunk_FUN_03cf4e64(*unaff_x26,(long)&stack0x00000000 + 4);
    FUN_06f75284(*(undefined8 *)PTR_DAT_08e936a0,unaff_x23,uVar3,uVar4,0);
    while (unaff_x20 != 0) {
      FUN_06f84868();
      while( true ) {
        lVar6 = *(long *)(unaff_x19 + 0x28);
        unaff_x21 = unaff_x21 + 1;
        unaff_x25 = unaff_x25 + 0x10;
        if (lVar6 == 0)
        goto Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking__LaunchRosterPanelAsync;
        if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)unaff_x21) {
          FUN_06e23e14();
          if (unaff_x20 == 0)
          goto Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking__LaunchRosterPanelAsync;
          iVar1 = FUN_06f7cb5c();
          if (0 < iVar1) {
            plVar5 = (long *)thunk_FUN_03d12a58();
            if (plVar5 == (long *)0x0)
            goto Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking__LaunchRosterPanelAsync;
            uVar3 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
            uVar4 = FUN_06f6be0c(*(undefined8 *)PTR_DAT_08e93698);
            if (*(int *)(*(long *)PTR_DAT_08e7e268 + 0xe0) == 0) {
              thunk_FUN_03cd7500(*(long *)PTR_DAT_08e7e268);
            }
            FUN_06dfdedc(uVar3,uVar4,0,0);
          }
          return;
        }
        if (*(uint *)(lVar6 + 0x18) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        lVar7 = *(long *)(lVar6 + unaff_x25 + 0x28);
        if ((lVar7 == 0) || (*(long *)(lVar7 + 0x18) == 0)) break;
        if (*(long *)(unaff_x19 + 0x30) == 0)
        goto Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking__LaunchRosterPanelAsync;
        unaff_w22 = *(undefined4 *)(lVar6 + unaff_x25 + 0x20);
        uVar2 = FUN_0699d8d8(*(long *)(unaff_x19 + 0x30),unaff_w22,*unaff_x28);
        if ((uVar2 & 1) != 0) {
          uStack000000000000000c = (int)unaff_x21;
          unaff_x23 = thunk_FUN_03cf4e64(*unaff_x26,(long)&stack0x00000008 + 4);
          param_1 = (undefined8 *)PTR_DAT_08e7e248;
          goto code_r0x06e239cc;
        }
        if (*(long *)(unaff_x19 + 0x30) == 0)
        goto Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking__LaunchRosterPanelAsync;
        FUN_0699d6d8(*(long *)(unaff_x19 + 0x30),unaff_w22,unaff_x21 & 0xffffffff,*unaff_x29);
      }
      uStack000000000000000c = (int)unaff_x21;
      uVar3 = thunk_FUN_03cf4e64(*unaff_x26,(long)&stack0x00000008 + 4);
      FUN_06f6be0c(*unaff_x27,uVar3,0);
    }
  }
Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking__LaunchRosterPanelAsync:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


