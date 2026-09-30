/*
FUNCTION_NAME: OVRPlugin$$GetNodeAcceleration
ENTRY_POINT: 07c73c44
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetNodeAcceleration(long param_1)

{
  uint uVar1;
  ulong uVar2;
  void *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x25;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000044;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000054;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000064;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000074;
  undefined8 in_stack_00000090;
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
  undefined8 in_stack_000000f8;
  
  while( true ) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
      param_1 = param_1 + (int)uVar1 * unaff_x25;
      *(undefined8 *)(param_1 + 0x38) = in_stack_000000b8;
      *(undefined8 *)(param_1 + 0x30) = in_stack_000000b0;
      *(undefined8 *)(param_1 + 0x48) = in_stack_000000c8;
      *(undefined8 *)(param_1 + 0x40) = in_stack_000000c0;
      *(undefined8 *)(param_1 + 0x28) = in_stack_000000a8;
      *(undefined8 *)(param_1 + 0x20) = in_stack_000000a0;
      thunk_FUN_044bb4b4(param_1 + 0x40,0);
    }
    else {
      in_stack_000000d8 = in_stack_000000a8;
      in_stack_000000d0 = in_stack_000000a0;
      in_stack_000000e8 = in_stack_000000b8;
      in_stack_000000e0 = in_stack_000000b0;
      in_stack_000000f8 = in_stack_000000c8;
      in_stack_000000f0 = in_stack_000000c0;
      FUN_05d83d40();
    }
    uVar2 = FUN_0768d020(&stack0x00000080,*unaff_x23);
    if ((uVar2 & 1) == 0) break;
    FUN_07c73724(&stack0x000000d0,in_stack_00000090);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    in_stack_000000a8 = in_stack_000000d8;
    in_stack_000000a0 = in_stack_000000d0;
    in_stack_000000b8 = in_stack_000000e8;
    in_stack_000000b0 = in_stack_000000e0;
    in_stack_000000c8 = in_stack_000000f8;
    in_stack_000000c0 = in_stack_000000f0;
    param_1 = *(long *)(unaff_x21 + 0x10);
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
  }
  FUN_0768d01c(&stack0x00000080,*unaff_x22);
  uStack0000000000000074 = 0;
  uStack000000000000005c = 0;
  uStack0000000000000054 = 0;
  uStack000000000000006c = 0;
  uStack0000000000000064 = 0;
  uStack000000000000004c = 0;
  uStack0000000000000044 = 0;
  thunk_FUN_044bb4b4(&stack0x00000030);
  uStack0000000000000054 = (undefined4)*(undefined8 *)(unaff_x20 + 0xf8);
  uStack000000000000004c = (undefined4)*(undefined8 *)(unaff_x20 + 0xf0);
  uStack0000000000000044 = (undefined4)*(undefined8 *)(unaff_x20 + 0xe8);
  uStack000000000000006c = (undefined4)*(undefined8 *)(unaff_x20 + 0x110);
  uStack0000000000000064 = (undefined4)*(undefined8 *)(unaff_x20 + 0x108);
  uStack000000000000005c = (undefined4)*(undefined8 *)(unaff_x20 + 0x100);
  memcpy(unaff_x19,&stack0x00000030,0x48);
  return;
}


