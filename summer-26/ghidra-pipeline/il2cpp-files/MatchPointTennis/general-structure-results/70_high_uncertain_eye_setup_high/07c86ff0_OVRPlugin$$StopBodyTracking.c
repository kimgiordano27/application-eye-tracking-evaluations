/*
FUNCTION_NAME: OVRPlugin$$StopBodyTracking
ENTRY_POINT: 07c86ff0
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


void OVRPlugin__StopBodyTracking(long param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  long unaff_x19;
  int unaff_w20;
  long lVar2;
  long lVar3;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  ulong *unaff_x27;
  ulong *unaff_x28;
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
  ulong in_stack_00000080;
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
  
  while( true ) {
                    /* catch() { ... } // from try @ 07c86bdc with catch @ 07c86ff0 */
    FUN_0564f150(param_1,param_2,param_3);
                    /* catch() { ... } // from try @ 07c86d64 with catch @ 07c86ff4 */
                    /* catch() { ... } // from try @ 07c86c0c with catch @ 07c86ff8 */
                    /* catch() { ... } // from try @ 07c86c28 with catch @ 07c86ffc */
                    /* catch() { ... } // from try @ 07c86c48 with catch @ 07c87000 */
    if ((*(long *)(unaff_x19 + 0x40) == 0) || (*(long *)(unaff_x19 + 0x28) == 0)) break;
                    /* catch() { ... } // from try @ 07c86d60 with catch @ 07c87004 */
                    /* catch() { ... } // from try @ 07c86c54 with catch @ 07c87008 */
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x40) + 0x18);
                    /* catch() { ... } // from try @ 07c86bb4 with catch @ 07c8700c */
                    /* catch() { ... } // from try @ 07c86d5c with catch @ 07c87010 */
                    /* catch() { ... } // from try @ 07c86d58 with catch @ 07c87014 */
    FUN_05d47f0c(&stack0x00000020,*(long *)(unaff_x19 + 0x28),unaff_w20,*unaff_x23);
    uVar1 = in_stack_00000020;
                    /* catch() { ... } // from try @ 07c86a54 with catch @ 07c87018 */
                    /* catch() { ... } // from try @ 07c86d54 with catch @ 07c8701c */
    if (*(long *)(unaff_x19 + 0x28) == 0) break;
                    /* catch() { ... } // from try @ 07c869a4 with catch @ 07c87020 */
                    /* catch() { ... } // from try @ 07c86930 with catch @ 07c87024 */
                    /* catch() { ... } // from try @ 07c86aa8 with catch @ 07c87028
                       catch() { ... } // from try @ 07c86bac with catch @ 07c87028
                       catch() { ... } // from try @ 07c86c08 with catch @ 07c87028
                       catch() { ... } // from try @ 07c86d04 with catch @ 07c87028
                       catch() { ... } // from try @ 07c86d70 with catch @ 07c87028
                       catch() { ... } // from try @ 07c86d78 with catch @ 07c87028
                       catch() { ... } // from try @ 07c86dc4 with catch @ 07c87028
                       catch() { ... } // from try @ 07c86dec with catch @ 07c87028
                       catch() { ... } // from try @ 07c86e4c with catch @ 07c87028 */
    FUN_05d47f0c(&stack0x00000020,*(long *)(unaff_x19 + 0x28),unaff_w20,*unaff_x23);
    if (lVar3 == 0) break;
                    /* try { // try from 07c8703c to 07d8703f has its CatchHandler @ 07c87058 */
                    /* try { // try from 07c87040 to 07d87077 has its CatchHandler @ 07c86704 */
    FUN_0736f850(lVar3,uVar1 & 0xffffffff,in_stack_00000020._4_4_,*unaff_x26);
    lVar3 = *(long *)(unaff_x19 + 0x28);
    unaff_w20 = unaff_w20 + 1;
    if (lVar3 == 0) break;
    if (*(int *)(lVar3 + 0x18) <= unaff_w20) {
                    /* try { // try from 07c87078 to 07d87083 has its CatchHandler @ 07c87084 */
      return;
    }
    lVar2 = *(long *)(unaff_x19 + 0x38);
    FUN_05d47f0c(&stack0x000000c0,lVar3,unaff_w20,*unaff_x23);
    uVar1 = in_stack_000000c0;
    if (*(long *)(unaff_x19 + 0x28) == 0) break;
    FUN_05d47f0c(&stack0x00000080,*(long *)(unaff_x19 + 0x28),unaff_w20,*unaff_x23);
    in_stack_000000c8 = CONCAT44(uStack000000000000008c,uStack0000000000000088);
    in_stack_000000d8 = CONCAT44(uStack000000000000009c,uStack0000000000000098);
    in_stack_000000d0 = CONCAT44(uStack0000000000000094,uStack0000000000000090);
    in_stack_000000c0 = in_stack_00000080;
    in_stack_000000e8 = in_stack_000000a8;
    in_stack_000000e0 = in_stack_000000a0;
    in_stack_000000f8 = in_stack_000000b8;
    in_stack_000000f0 = in_stack_000000b0;
    uStack0000000000000074 = *(undefined8 *)((long)unaff_x27 + 0x14);
    in_stack_00000060 = *unaff_x27;
    uStack0000000000000070 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x27 + 0xc) >> 0x20);
    uStack0000000000000068 = (undefined4)unaff_x27[1];
    uStack000000000000006c = (undefined4)(unaff_x27[1] >> 0x20);
    if (lVar2 == 0) break;
    uStack0000000000000094 = (undefined4)uStack0000000000000074;
    uStack0000000000000098 = (undefined4)((ulong)uStack0000000000000074 >> 0x20);
    uStack000000000000008c = uStack000000000000006c;
    uStack0000000000000090 = uStack0000000000000070;
    in_stack_00000080 = in_stack_00000060;
    uStack0000000000000088 = uStack0000000000000068;
    FUN_0737a2c8(lVar2,uVar1 & 0xffffffff,&stack0x00000080,*unaff_x24);
    if (*(long *)(unaff_x19 + 0x28) == 0) break;
    lVar3 = *(long *)(unaff_x19 + 0x30);
    FUN_05d47f0c(&stack0x00000080,*(long *)(unaff_x19 + 0x28),unaff_w20,*unaff_x23);
    uVar1 = in_stack_00000080;
    if (*(long *)(unaff_x19 + 0x28) == 0) break;
    FUN_05d47f0c(&stack0x00000020,*(long *)(unaff_x19 + 0x28),unaff_w20,*unaff_x23);
    uStack0000000000000088 = uStack0000000000000028;
    uStack000000000000008c = uStack000000000000002c;
    in_stack_00000080 = in_stack_00000020;
    uStack0000000000000098 = uStack0000000000000038;
    uStack000000000000009c = uStack000000000000003c;
    uStack0000000000000090 = uStack0000000000000030;
    uStack0000000000000094 = uStack0000000000000034;
    in_stack_000000a8 = in_stack_00000048;
    in_stack_000000a0 = in_stack_00000040;
    in_stack_000000b8 = in_stack_00000058;
    in_stack_000000b0 = in_stack_00000050;
    uStack0000000000000010 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x28 + 0xc) >> 0x20);
    uStack000000000000000c = (undefined4)(unaff_x28[1] >> 0x20);
    if (lVar3 == 0) break;
    uStack0000000000000028 = (undefined4)unaff_x28[1];
    uStack0000000000000034 = (undefined4)*(undefined8 *)((long)unaff_x28 + 0x14);
    uStack0000000000000038 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x28 + 0x14) >> 0x20);
    uStack000000000000002c = uStack000000000000000c;
    uStack0000000000000030 = uStack0000000000000010;
    in_stack_00000020 = *unaff_x28;
    FUN_0737a2c8(lVar3,uVar1 & 0xffffffff,&stack0x00000020,*unaff_x24);
    if ((*(long *)(unaff_x19 + 0x40) == 0) || (*(long *)(unaff_x19 + 0x28) == 0)) break;
    param_1 = *(long *)(*(long *)(unaff_x19 + 0x40) + 0x10);
    FUN_05d47f0c(&stack0x00000020,*(long *)(unaff_x19 + 0x28),unaff_w20,*unaff_x23);
    if (param_1 == 0) break;
    param_2 = in_stack_00000020 & 0xffffffff;
    param_3 = *unaff_x25;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 07c8703c with catch @ 07c87058 */
  FUN_04447e44();
}


