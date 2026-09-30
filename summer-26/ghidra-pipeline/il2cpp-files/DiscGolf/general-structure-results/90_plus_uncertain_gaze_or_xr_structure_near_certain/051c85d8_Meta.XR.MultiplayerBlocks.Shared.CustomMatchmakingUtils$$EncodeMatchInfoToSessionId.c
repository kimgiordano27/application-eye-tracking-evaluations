/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.CustomMatchmakingUtils$$EncodeMatchInfoToSessionId
ENTRY_POINT: 051c85d8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_CustomMatchmakingUtils__EncodeMatchInfoToSessionId(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 in_x9;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  uint unaff_w25;
  uint uVar6;
  uint unaff_w26;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int iStack0000000000000000;
  int iStack0000000000000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x051c85d8:
  uVar3 = unaff_w20 + unaff_w26;
  if ((uint)in_x9 <= uVar3) {
Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking__get_InviteMessage:
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
  uVar6 = unaff_w25;
  if (unaff_x23 == 0) {
LAB_051c86b8:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  do {
    unaff_w25 = unaff_w26;
    lVar9 = unaff_x19 + (long)(int)uVar3 * (long)unaff_w21;
    uVar8 = *(undefined8 *)(lVar9 + 0x20);
    uVar2 = *(undefined4 *)(lVar9 + 0x28);
    if ((*(ushort *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    iVar4 = (**(code **)(unaff_x23 + 0x18))
                      (*(undefined8 *)(unaff_x23 + 0x40),in_stack_00000010,in_stack_00000008,uVar8,
                       uVar2,*(undefined8 *)(unaff_x23 + 0x28));
    if (-1 < iVar4) {
      uVar3 = unaff_w20 + uVar6;
LAB_051c8670:
      if (uVar3 < *(uint *)(unaff_x19 + 0x18)) {
        lVar9 = unaff_x19 + (long)(int)uVar3 * 0xc;
        *(undefined8 *)(lVar9 + 0x20) = in_stack_00000010;
        *(int *)(lVar9 + 0x28) = (int)in_stack_00000008;
        return;
      }
      goto Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking__get_InviteMessage;
    }
    if ((*(uint *)(unaff_x19 + 0x18) <= uVar3) || (*(uint *)(unaff_x19 + 0x18) <= unaff_w20 + uVar6)
       ) goto Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking__get_InviteMessage;
    lVar5 = unaff_x19 + (long)(int)(unaff_w20 + uVar6) * (long)unaff_w21;
    uVar2 = *(undefined4 *)(lVar9 + 0x28);
    *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(lVar9 + 0x20);
    *(undefined4 *)(lVar5 + 0x28) = uVar2;
    if (iStack0000000000000004 < (int)unaff_w25) goto LAB_051c8670;
    unaff_w26 = unaff_w25 * 2;
    in_x9 = *(undefined8 *)(unaff_x19 + 0x18);
    if (in_stack_00000018._4_4_ <= (int)unaff_w26) goto code_r0x051c85d8;
    uVar3 = unaff_w26 + iStack0000000000000000;
    if (((uint)in_x9 <= uVar3 - 1) || ((uint)in_x9 <= uVar3))
    goto Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking__get_InviteMessage;
    if (unaff_x23 == 0) goto LAB_051c86b8;
    lVar5 = unaff_x19 + (long)(int)(uVar3 - 1) * (long)unaff_w21;
    lVar9 = unaff_x19 + (long)(int)uVar3 * (long)unaff_w21;
    uVar7 = *(undefined8 *)(lVar5 + 0x20);
    uVar2 = *(undefined4 *)(lVar5 + 0x28);
    uVar8 = *(undefined8 *)(lVar9 + 0x20);
    uVar1 = *(undefined4 *)(lVar9 + 0x28);
    if ((*(ushort *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    uVar3 = (**(code **)(unaff_x23 + 0x18))
                      (*(undefined8 *)(unaff_x23 + 0x40),uVar7,uVar2,uVar8,uVar1,
                       *(undefined8 *)(unaff_x23 + 0x28));
    unaff_w26 = unaff_w26 | uVar3 >> 0x1f;
    uVar3 = unaff_w20 + unaff_w26;
    uVar6 = unaff_w25;
    if (*(uint *)(unaff_x19 + 0x18) <= uVar3)
    goto Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking__get_InviteMessage;
  } while( true );
}


