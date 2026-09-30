/*
FUNCTION_NAME: OVRPlugin.LogCallback2DelegateType$$BeginInvoke
ENTRY_POINT: 03163798
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_LogCallback2DelegateType__BeginInvoke(undefined1 param_1 [16])

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x19;
  undefined4 unaff_w20;
  long unaff_x22;
  undefined8 *unaff_x23;
  undefined4 unaff_w24;
  undefined8 uVar4;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  ulong unaff_d11;
  ulong unaff_d12;
  ulong unaff_d13;
  ulong unaff_d14;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 uStack0000000000000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined4 uStack00000000000000a8;
  uint uStack00000000000000ac;
  uint uStack00000000000000b0;
  uint uStack00000000000000b4;
  uint uStack00000000000000b8;
  uint uStack00000000000000bc;
  uint uStack00000000000000c0;
  uint uStack00000000000000c4;
  undefined4 in_stack_000000c8;
  
  uVar4 = param_1._8_8_;
  uStack0000000000000060 = param_1._0_8_;
  while( true ) {
    uStack0000000000000074 = *(undefined8 *)(unaff_x22 + 0x3c);
    uStack0000000000000068 = (undefined4)uVar4;
    uStack000000000000006c = (undefined4)*(undefined8 *)(unaff_x22 + 0x34);
    uStack0000000000000070 = (undefined4)((ulong)*(undefined8 *)(unaff_x22 + 0x34) >> 0x20);
    FUN_031638ac(unaff_d8,unaff_d9,unaff_d10);
    FUN_03163a20(unaff_d11,unaff_d12,unaff_d13,unaff_d14);
    FUN_03136ee0(&stack0x000000a8,*(undefined8 *)(unaff_x19 + 0x20),0,0);
    in_stack_00000020 = *(undefined8 *)(unaff_x22 + 0x28);
    uStack0000000000000034 = *(undefined8 *)(unaff_x22 + 0x3c);
    uStack0000000000000028 = (undefined4)*(undefined8 *)(unaff_x22 + 0x30);
    uStack000000000000002c = (undefined4)*(undefined8 *)(unaff_x22 + 0x34);
    uStack0000000000000030 = (undefined4)((ulong)*(undefined8 *)(unaff_x22 + 0x34) >> 0x20);
    FUN_031375bc(&stack0x000000a8,&stack0x00000060,&stack0x00000020,0);
    uStack0000000000000054 = *(undefined8 *)(unaff_x22 + 0x3c);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
    in_stack_00000040 = *(undefined8 *)(unaff_x22 + 0x28);
    uStack0000000000000050 = (undefined4)((ulong)*(undefined8 *)(unaff_x22 + 0x34) >> 0x20);
    uStack0000000000000048 = (undefined4)uVar4;
    uStack000000000000004c = (undefined4)((ulong)uVar4 >> 0x20);
    lVar2 = *(long *)(unaff_x19 + 0x30);
    if (lVar2 == 0) break;
    pcVar3 = *(code **)(lVar2 + 0x18);
    uVar1 = *(undefined8 *)(lVar2 + 0x40);
    uStack00000000000000ac = (uint)unaff_d8;
    uStack00000000000000b0 = (uint)unaff_d9;
    uStack00000000000000b4 = (uint)unaff_d10;
    uStack00000000000000b8 = (uint)unaff_d11;
    uStack00000000000000bc = (uint)unaff_d12;
    uStack00000000000000c0 = (uint)unaff_d13;
    uStack00000000000000c4 = (uint)unaff_d14;
    *(undefined8 *)(unaff_x22 + 0x14) = uStack0000000000000054;
    *(ulong *)(unaff_x22 + 0xc) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
    in_stack_00000080 = in_stack_00000040;
    in_stack_00000088 = uVar4;
    uStack00000000000000a8 = unaff_w24;
    in_stack_000000c8 = unaff_w20;
    (*pcVar3)(uVar1,&stack0x000000a8,&stack0x00000080,*(undefined8 *)(lVar2 + 0x28));
    lVar2 = *(long *)(unaff_x19 + 0x40);
    if (lVar2 == 0) break;
    if (*(int *)(lVar2 + 0x20) < 1) {
      return;
    }
    FUN_02d8cbb8(&stack0x000000a8,lVar2,*unaff_x23);
    unaff_w20 = in_stack_000000c8;
    unaff_w24 = uStack00000000000000a8;
    unaff_d8 = (ulong)uStack00000000000000ac;
    unaff_d9 = (ulong)uStack00000000000000b0;
    unaff_d10 = (ulong)uStack00000000000000b4;
    unaff_d11 = (ulong)uStack00000000000000b8;
    unaff_d12 = (ulong)uStack00000000000000bc;
    unaff_d13 = (ulong)uStack00000000000000c0;
    unaff_d14 = (ulong)uStack00000000000000c4;
    FUN_03136ee0(&stack0x000000a8,*(undefined8 *)(unaff_x19 + 0x20),0,0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
    uStack0000000000000060 = *(undefined8 *)(unaff_x22 + 0x28);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


