/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.NGO.CustomMatchmakingNGO.<CreateRoom>d__8$$SetStateMachine
ENTRY_POINT: 051bea5c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_5;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_NGO_CustomMatchmakingNGO_<CreateRoom>d__8__SetStateMachine(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint in_w9;
  long unaff_x19;
  int unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  int unaff_w25;
  uint unaff_w26;
  uint uVar10;
  uint unaff_w28;
  undefined8 *unaff_x29;
  undefined8 uVar11;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  do {
    uVar10 = unaff_w26;
    uVar9 = unaff_w20 + unaff_w21;
    if (in_w9 <= uVar9) {

      Meta_XR_MultiplayerBlocks_NGO_CustomMatchmakingNGO_<HeartbeatLobbyCoroutine>d__4__System_IDisposable_Dispose
      :
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    lVar2 = unaff_x19 + (long)(int)uVar9 * 0x10;
    uVar11 = *unaff_x29;
    *(undefined8 *)(lVar2 + 0x28) = unaff_x29[1];
    *(undefined8 *)(lVar2 + 0x20) = uVar11;
    LeanTween__value(in_stack_00000010 + (long)(int)uVar9 * 0x10,0);
    if (in_stack_00000018._4_4_ < (int)uVar10) {
LAB_051bea9c:
      if (unaff_w28 < *(uint *)(unaff_x19 + 0x18)) {
        lVar2 = unaff_x19 + (long)(int)unaff_w28 * 0x10;
        puVar8 = (undefined8 *)(lVar2 + 0x20);
        *puVar8 = in_stack_00000020;
        *(undefined8 *)(lVar2 + 0x28) = in_stack_00000028;
        LeanTween__value(puVar8,0);
        return;
      }
      goto 
      Meta_XR_MultiplayerBlocks_NGO_CustomMatchmakingNGO_<HeartbeatLobbyCoroutine>d__4__System_IDisposable_Dispose
      ;
    }
    unaff_w26 = uVar10 * 2;
    uVar9 = (uint)*(undefined8 *)(unaff_x19 + 0x18);
    if ((int)unaff_w26 < unaff_w25) {
      uVar6 = unaff_w26 + in_stack_00000008._4_4_;
      if ((uVar9 <= uVar6 - 1) || (uVar9 <= uVar6))
      goto 
      Meta_XR_MultiplayerBlocks_NGO_CustomMatchmakingNGO_<HeartbeatLobbyCoroutine>d__4__System_IDisposable_Dispose
      ;
      if (unaff_x23 == 0)
      goto 
      Meta_XR_MultiplayerBlocks_NGO_CustomMatchmakingNGO_<HeartbeatLobbyCoroutine>d__4__MoveNext;
      lVar2 = unaff_x19 + (long)(int)(uVar6 - 1) * 0x10;
      lVar1 = unaff_x19 + (long)(int)uVar6 * 0x10;
      uVar11 = *(undefined8 *)(lVar2 + 0x20);
      uVar4 = *(undefined8 *)(lVar2 + 0x28);
      uVar3 = *(undefined8 *)(lVar1 + 0x20);
      uVar5 = *(undefined8 *)(lVar1 + 0x28);
      if ((*(ushort *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
        FUN_02dcfd18();
      }
      uVar6 = (**(code **)(unaff_x23 + 0x18))
                        (*(undefined8 *)(unaff_x23 + 0x40),uVar11,uVar4,uVar3,uVar5,
                         *(undefined8 *)(unaff_x23 + 0x28));
      uVar9 = (uint)*(undefined8 *)(unaff_x19 + 0x18);
      unaff_w26 = unaff_w26 | uVar6 >> 0x1f;
    }
    unaff_w28 = unaff_w20 + unaff_w26;
    if (uVar9 <= unaff_w28)
    goto 
    Meta_XR_MultiplayerBlocks_NGO_CustomMatchmakingNGO_<HeartbeatLobbyCoroutine>d__4__System_IDisposable_Dispose
    ;
    if (unaff_x23 == 0) {
Meta_XR_MultiplayerBlocks_NGO_CustomMatchmakingNGO_<HeartbeatLobbyCoroutine>d__4__MoveNext:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar2 = unaff_x19 + (long)(int)unaff_w28 * 0x10;
    unaff_x29 = (undefined8 *)(lVar2 + 0x20);
    uVar11 = *unaff_x29;
    uVar3 = *(undefined8 *)(lVar2 + 0x28);
    if ((*(ushort *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    iVar7 = (**(code **)(unaff_x23 + 0x18))
                      (*(undefined8 *)(unaff_x23 + 0x40),in_stack_00000020,in_stack_00000028,uVar11,
                       uVar3,*(undefined8 *)(unaff_x23 + 0x28));
    if (-1 < iVar7) {
      unaff_w28 = unaff_w20 + uVar10;
      goto LAB_051bea9c;
    }
    in_w9 = *(uint *)(unaff_x19 + 0x18);
    unaff_w21 = uVar10;
    if (in_w9 <= unaff_w28)
    goto 
    Meta_XR_MultiplayerBlocks_NGO_CustomMatchmakingNGO_<HeartbeatLobbyCoroutine>d__4__System_IDisposable_Dispose
    ;
  } while( true );
}


