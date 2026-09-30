/*
FUNCTION_NAME: OVRPlugin$$ResetBodyTrackingCalibration
ENTRY_POINT: 07c86f30
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__ResetBodyTrackingCalibration
               (undefined1 param_1 [16],undefined1 param_2 [16],long param_3,ulong param_4,
               undefined1 *param_5,undefined8 param_6)

{
  long unaff_x19;
  int unaff_w20;
  long lVar1;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  ulong *unaff_x27;
  ulong *unaff_x28;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  ulong in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  ulong in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  ulong uStack0000000000000080;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined4 uStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  ulong in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  
  uVar2 = param_2._8_8_;
  uVar4 = param_2._0_8_;
  uVar5 = param_1._8_8_;
  uVar3 = param_1._0_8_;
  while( true ) {
    uStack0000000000000088 = (undefined4)uVar5;
    uStack0000000000000094 = (undefined4)uVar2;
    uStack0000000000000098 = (undefined4)((ulong)uVar2 >> 0x20);
    uStack000000000000008c = (undefined4)uVar4;
    uStack0000000000000090 = (undefined4)((ulong)uVar4 >> 0x20);
    uStack0000000000000080 = uVar3;
                    /* try { // try from 07c86f38 to 07d86f63 has its CatchHandler @ 07c86f98 */
    FUN_0737a2c8(param_3,param_4,param_5,param_6);
    if (*(long *)(unaff_x19 + 0x28) == 0) break;
    lVar1 = *(long *)(unaff_x19 + 0x30);
    FUN_05d47f0c(&stack0x00000080,*(long *)(unaff_x19 + 0x28),unaff_w20,*unaff_x23);
    uVar3 = uStack0000000000000080;
    if (*(long *)(unaff_x19 + 0x28) == 0) break;
                    /* try { // try from 07c86f64 to 07d86f6f has its CatchHandler @ 07c86f84 */
                    /* try { // try from 07c86f70 to 07d86f7b has its CatchHandler @ 07c86f80 */
    FUN_05d47f0c(&stack0x00000020,*(long *)(unaff_x19 + 0x28),unaff_w20,*unaff_x23);
    uStack0000000000000088 = uStack0000000000000028;
    uStack000000000000008c = uStack000000000000002c;
                    /* try { // try from 07c86f7c to 07d8703b has its CatchHandler @ 07c86704 */
    uStack0000000000000080 = in_stack_00000020;
    uStack0000000000000098 = uStack0000000000000038;
    uStack000000000000009c = uStack000000000000003c;
    uStack0000000000000090 = uStack0000000000000030;
    uStack0000000000000094 = uStack0000000000000034;
                    /* catch() { ... } // from try @ 07c86f70 with catch @ 07c86f80 */
    in_stack_000000a8 = in_stack_00000048;
    in_stack_000000a0 = in_stack_00000040;
    in_stack_000000b8 = in_stack_00000058;
    in_stack_000000b0 = in_stack_00000050;
                    /* catch() { ... } // from try @ 07c86f64 with catch @ 07c86f84 */
                    /* catch() { ... } // from try @ 07c86e14 with catch @ 07c86f88 */
                    /* catch() { ... } // from try @ 07c86dfc with catch @ 07c86f8c */
    uStack0000000000000010 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x28 + 0xc) >> 0x20);
                    /* catch() { ... } // from try @ 07c86ebc with catch @ 07c86f90 */
    uStack000000000000000c = (undefined4)(unaff_x28[1] >> 0x20);
                    /* catch() { ... } // from try @ 07c86eb0 with catch @ 07c86f94 */
    if (lVar1 == 0) break;
                    /* catch() { ... } // from try @ 07c86f38 with catch @ 07c86f98 */
                    /* catch() { ... } // from try @ 07c86efc with catch @ 07c86f9c */
                    /* catch() { ... } // from try @ 07c86dd8 with catch @ 07c86fa0 */
                    /* catch() { ... } // from try @ 07c86edc with catch @ 07c86fa4 */
                    /* catch() { ... } // from try @ 07c86ed4 with catch @ 07c86fa8 */
                    /* catch() { ... } // from try @ 07c86e84 with catch @ 07c86fac */
                    /* catch() { ... } // from try @ 07c86e5c with catch @ 07c86fb0 */
    uStack0000000000000028 = (undefined4)unaff_x28[1];
    uStack0000000000000034 = (undefined4)*(undefined8 *)((long)unaff_x28 + 0x14);
    uStack0000000000000038 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x28 + 0x14) >> 0x20);
                    /* catch() { ... } // from try @ 07c86acc with catch @ 07c86fb4 */
    uStack000000000000002c = uStack000000000000000c;
    uStack0000000000000030 = uStack0000000000000010;
    in_stack_00000020 = *unaff_x28;
                    /* catch() { ... } // from try @ 07c86da0 with catch @ 07c86fb8
                       catch() { ... } // from try @ 07c86e70 with catch @ 07c86fb8 */
    FUN_0737a2c8(lVar1,uVar3 & 0xffffffff,&stack0x00000020,*unaff_x24);
                    /* catch() { ... } // from try @ 07c86e54 with catch @ 07c86fbc */
                    /* catch() { ... } // from try @ 07c86d90 with catch @ 07c86fc0 */
                    /* catch() { ... } // from try @ 07c86ac0 with catch @ 07c86fc4 */
                    /* catch() { ... } // from try @ 07c86cb4 with catch @ 07c86fc8 */
    if ((*(long *)(unaff_x19 + 0x40) == 0) || (*(long *)(unaff_x19 + 0x28) == 0)) break;
                    /* catch() { ... } // from try @ 07c86ae0 with catch @ 07c86fcc */
                    /* catch() { ... } // from try @ 07c86e50 with catch @ 07c86fd0 */
    lVar1 = *(long *)(*(long *)(unaff_x19 + 0x40) + 0x10);
                    /* catch() { ... } // from try @ 07c86b18 with catch @ 07c86fd4 */
                    /* catch() { ... } // from try @ 07c86d74 with catch @ 07c86fd8 */
                    /* catch() { ... } // from try @ 07c86bf0 with catch @ 07c86fdc */
    FUN_05d47f0c(&stack0x00000020,*(long *)(unaff_x19 + 0x28),unaff_w20,*unaff_x23);
                    /* catch() { ... } // from try @ 07c86d6c with catch @ 07c86fe0 */
    if (lVar1 == 0) break;
                    /* catch() { ... } // from try @ 07c86b74 with catch @ 07c86fe4 */
                    /* catch() { ... } // from try @ 07c86b48 with catch @ 07c86fe8 */
                    /* catch() { ... } // from try @ 07c86d68 with catch @ 07c86fec */
    FUN_0564f150(lVar1,in_stack_00000020 & 0xffffffff,*unaff_x25);
    if ((*(long *)(unaff_x19 + 0x40) == 0) || (*(long *)(unaff_x19 + 0x28) == 0)) break;
    lVar1 = *(long *)(*(long *)(unaff_x19 + 0x40) + 0x18);
    FUN_05d47f0c(&stack0x00000020,*(long *)(unaff_x19 + 0x28),unaff_w20,*unaff_x23);
    uVar3 = in_stack_00000020;
    if (*(long *)(unaff_x19 + 0x28) == 0) break;
    FUN_05d47f0c(&stack0x00000020,*(long *)(unaff_x19 + 0x28),unaff_w20,*unaff_x23);
    if (lVar1 == 0) break;
    FUN_0736f850(lVar1,uVar3 & 0xffffffff,in_stack_00000020._4_4_,*unaff_x26);
    lVar1 = *(long *)(unaff_x19 + 0x28);
    unaff_w20 = unaff_w20 + 1;
    if (lVar1 == 0) break;
    if (*(int *)(lVar1 + 0x18) <= unaff_w20) {
      return;
    }
    param_3 = *(long *)(unaff_x19 + 0x38);
    FUN_05d47f0c(&stack0x000000c0,lVar1,unaff_w20,*unaff_x23);
    param_4 = in_stack_000000c0;
    if (*(long *)(unaff_x19 + 0x28) == 0) break;
    FUN_05d47f0c(&stack0x00000080,*(long *)(unaff_x19 + 0x28),unaff_w20,*unaff_x23);
    in_stack_000000c8 = CONCAT44(uStack000000000000008c,uStack0000000000000088);
    in_stack_000000d8 = CONCAT44(uStack000000000000009c,uStack0000000000000098);
    in_stack_000000d0 = CONCAT44(uStack0000000000000094,uStack0000000000000090);
    in_stack_000000c0 = uStack0000000000000080;
    in_stack_000000e8 = in_stack_000000a8;
    in_stack_000000e0 = in_stack_000000a0;
    in_stack_000000f8 = in_stack_000000b8;
    in_stack_000000f0 = in_stack_000000b0;
    uVar2 = *(undefined8 *)((long)unaff_x27 + 0x14);
    uVar5 = unaff_x27[1];
    uVar3 = *unaff_x27;
    uStack0000000000000070 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x27 + 0xc) >> 0x20);
    uStack0000000000000068 = (undefined4)uVar5;
    uStack000000000000006c = (undefined4)(uVar5 >> 0x20);
    in_stack_00000060 = uVar3;
    uStack0000000000000074 = uVar2;
    if (param_3 == 0) break;
    uVar4 = CONCAT44(uStack0000000000000070,uStack000000000000006c);
    param_6 = *unaff_x24;
    param_5 = (undefined1 *)&stack0x00000080;
    param_4 = param_4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


