/*
FUNCTION_NAME: OVRPlugin$$set_ipd
ENTRY_POINT: 0314f834
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_ipd(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  
  thunk_FUN_01ad9084();
  thunk_FUN_01ad9084(PTR_DAT_03d801b0);
  thunk_FUN_01ad9084(PTR_DAT_03d801b8);
  thunk_FUN_01ad9084(PTR_DAT_03d801c0);
  thunk_FUN_01ad9084(PTR_DAT_03d801c8);
  thunk_FUN_01ad9084(PTR_DAT_03d801d0);
  thunk_FUN_01ad9084(PTR_DAT_03d801d8);
  *(undefined1 *)(unaff_x22 + 0xfcc) = 1;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  if ((*(long *)(unaff_x21 + 0x10) != 0) &&
     (lVar4 = FUN_0255ab50(*(long *)(unaff_x21 + 0x10),*(undefined8 *)PTR_DAT_03d801a8),
     puVar3 = PTR_DAT_03d801c8, puVar2 = PTR_DAT_03d801b8, puVar1 = PTR_DAT_03d801b0, lVar4 != 0)) {
    FUN_02241144(&stack0x00000008,lVar4,*(undefined8 *)PTR_DAT_03d801d8);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while( true ) {
      uVar5 = FUN_0276ac1c(&stack0x00000020,*(undefined8 *)puVar2);
      if ((uVar5 & 1) == 0) {
        FUN_0276ac18(&stack0x00000020,*(undefined8 *)puVar1);
        return;
      }
      if (in_stack_00000030 == 0) break;
      lVar4 = *(long *)(in_stack_00000030 + 0x18);
      if ((unaff_x19 & 1) == 0) {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        *(undefined4 *)(lVar4 + 0x10) = unaff_w20;
        FUN_0289ec60(lVar4,*(undefined8 *)puVar3);
      }
      else {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        *(undefined4 *)(lVar4 + 0x10) = unaff_w20;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


