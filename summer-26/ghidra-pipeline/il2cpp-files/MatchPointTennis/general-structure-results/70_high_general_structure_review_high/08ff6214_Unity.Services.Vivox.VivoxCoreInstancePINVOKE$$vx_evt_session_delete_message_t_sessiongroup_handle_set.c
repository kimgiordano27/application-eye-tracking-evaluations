/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_delete_message_t_sessiongroup_handle_set
ENTRY_POINT: 08ff6214
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_delete_message_t_sessiongroup_handle_set
               (void)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x22;
  long unaff_x25;
  undefined8 *puVar7;
  long unaff_x26;
  undefined8 *puVar8;
  long unaff_x28;
  undefined8 *puVar9;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  
  puVar9 = *(undefined8 **)(unaff_x28 + 0x510);
  puVar8 = *(undefined8 **)(unaff_x26 + 0xc58);
  puVar7 = *(undefined8 **)(unaff_x25 + 0xc50);
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000030 = 0;
  if ((unaff_x22 & 1) == 0) {
    uVar4 = FUN_0984b768();
    lVar6 = FUN_078a7764(uVar4,*puVar9,0);
    puVar2 = PTR_DAT_09f21060;
    if (unaff_x20 != 0) {
      FUN_05bae95c(&stack0x00000008);
      uStack0000000000000028 = in_stack_00000010;
      uStack0000000000000020 = in_stack_00000008;
      uStack0000000000000030 = in_stack_00000018;
      while (uVar3 = FUN_0768d020(&stack0x00000020,*puVar8), (uVar3 & 1) != 0) {
        uVar4 = FUN_0984b768(uStack0000000000000030,0);
        lVar6 = FUN_078b4f58(lVar6,uVar4,*(undefined8 *)puVar2,0);
      }
      FUN_0768d01c(&stack0x00000020,*puVar7);
      if ((lVar6 != 0) &&
         (uVar4 = FUN_078b6bdc(lVar6,*(int *)(lVar6 + 0x10) + -1,0), unaff_x19 != 0)) {
        lVar6 = *(long *)(unaff_x19 + 0x10);
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        if (lVar6 != 0) {
          uVar1 = *(uint *)(unaff_x19 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
            thunk_FUN_044bb4b4();
            return;
          }
          FUN_05bade44();
          return;
        }
      }
    }
  }
  else if (unaff_x20 != 0) {
    FUN_05bae95c(&stack0x00000008);
    uStack0000000000000028 = in_stack_00000010;
    uStack0000000000000020 = in_stack_00000008;
    uStack0000000000000030 = in_stack_00000018;
    while( true ) {
      uVar3 = FUN_0768d020(&stack0x00000020,*puVar8);
      if ((uVar3 & 1) == 0) {
        FUN_0768d01c(&stack0x00000020,*puVar7);
        return;
      }
      uVar4 = FUN_0984b768(uStack0000000000000030,0);
      uVar5 = FUN_0984b768();
      uVar4 = FUN_078b4f58(uVar5,*puVar9,uVar4,0);
      if (unaff_x19 == 0) break;
      lVar6 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
        thunk_FUN_044bb4b4();
      }
      else {
        FUN_05bade44();
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


