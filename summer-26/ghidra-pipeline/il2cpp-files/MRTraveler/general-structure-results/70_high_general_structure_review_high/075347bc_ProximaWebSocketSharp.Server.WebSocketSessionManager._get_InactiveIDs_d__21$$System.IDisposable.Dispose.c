/*
FUNCTION_NAME: ProximaWebSocketSharp.Server.WebSocketSessionManager.<get_InactiveIDs>d__21$$System.IDisposable.Dispose
ENTRY_POINT: 075347bc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
ProximaWebSocketSharp_Server_WebSocketSessionManager_<get_InactiveIDs>d__21__System_IDisposable_Dispose
          (void)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  FUN_0512ad6c();
  in_stack_00000028 = in_stack_00000008;
  in_stack_00000020 = in_stack_00000000;
  in_stack_00000038 = in_stack_00000018;
  in_stack_00000030 = in_stack_00000010;
  do {
    uVar2 = FUN_06c0a930(&stack0x00000020,*unaff_x27);
    uVar3 = in_stack_00000038;
    if ((uVar2 & 1) == 0) {
      FUN_06c0a92c(&stack0x00000020,*unaff_x26);
      uVar3 = FUN_04767238(*unaff_x25);
      lVar5 = *unaff_x22;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_03cd7500(lVar5);
        lVar5 = *unaff_x22;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
      FUN_05fde0f4();
      if (lVar5 != 0) {
        lVar6 = *(long *)(lVar5 + 0x10);
        lVar7 = *unaff_x23;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar6 != 0) {
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            lVar6 = lVar6 + (long)(int)uVar1 * 0x10;
            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
            puVar4 = (undefined8 *)(lVar6 + 0x20);
            *puVar4 = 0;
            *(undefined8 *)(lVar6 + 0x28) = 0;
            thunk_FUN_03d233cc(puVar4,0);
            return uVar3;
          }
          FUN_0512a2f8(lVar5,0,0,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          return uVar3;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar2 = FUN_07534950();
  } while ((uVar2 & 1) == 0);
  FUN_06c0a92c(&stack0x00000020,*unaff_x26);
  return uVar3;
}


