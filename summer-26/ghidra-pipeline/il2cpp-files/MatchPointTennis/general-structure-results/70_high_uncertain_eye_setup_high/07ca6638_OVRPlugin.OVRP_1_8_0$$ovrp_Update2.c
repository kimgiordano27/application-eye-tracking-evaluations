/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_Update2
ENTRY_POINT: 07ca6638
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_8_0__ovrp_Update2(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack0000000000000014;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined4 uStack000000000000008c;
  undefined4 in_stack_00000090;
  undefined8 uStack0000000000000094;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined8 uStack00000000000000b4;
  
  uVar1 = FUN_07ca6734(param_1,param_2,*(undefined8 *)(param_1 + 0x48));
  if ((uVar1 & 1) != 0) {
    FUN_07ca64b4(&stack0x000000a0,param_1,param_2 & 0xffffffff);
    in_stack_00000048 = *(undefined8 *)(param_1 + 0x58);
    in_stack_00000040 = *(undefined8 *)(param_1 + 0x50);
    in_stack_00000058 = *(undefined8 *)(param_1 + 0x68);
    in_stack_00000050 = *(undefined8 *)(param_1 + 0x60);
    in_stack_00000068 = *(undefined8 *)(param_1 + 0x78);
    in_stack_00000060 = *(undefined8 *)(param_1 + 0x70);
    in_stack_00000078 = *(undefined8 *)(param_1 + 0x88);
    in_stack_00000070 = *(undefined8 *)(param_1 + 0x80);
    uStack00000000000000a0 =
         FUN_09513430(uStack00000000000000a0,uStack00000000000000a4,uStack00000000000000a8,0,
                      &stack0x00000040,0);
    in_stack_00000080 = *(undefined8 *)(param_1 + 0xac);
    uStack0000000000000094 = *(undefined8 *)(param_1 + 0xc0);
    in_stack_00000088 = (undefined4)*(undefined8 *)(param_1 + 0xb4);
    uStack000000000000008c = (undefined4)*(undefined8 *)(param_1 + 0xb8);
    in_stack_00000090 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0xb8) >> 0x20);
    uVar2 = FUN_07c0b9a4(&stack0x000000a0,&stack0x00000080,0);
    lVar3 = *(long *)(param_1 + 0x30);
    uStack0000000000000034 = uStack00000000000000b4;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uStack0000000000000014 = uStack00000000000000b4;
    if (*(uint *)(lVar3 + 0x18) <= (uint)param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    lVar3 = lVar3 + (long)(int)(uint)param_2 * 0x1c;
    *(undefined8 *)(lVar3 + 0x34) = uStack00000000000000b4;
    *(ulong *)(lVar3 + 0x2c) = CONCAT44(uStack00000000000000b0,uStack00000000000000ac);
    *(ulong *)(lVar3 + 0x28) = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
    *(ulong *)(lVar3 + 0x20) = CONCAT44(uStack00000000000000a4,uStack00000000000000a0);
    FUN_07ca6778(uVar2,param_2 & 0xffffffff,*(undefined8 *)(param_1 + 0x48));
  }
  return;
}


