/*
FUNCTION_NAME: OVRManager$$GetOpenVRControllerOffset
ENTRY_POINT: 05d665f8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__GetOpenVRControllerOffset(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long unaff_x19;
  int iVar6;
  long lVar7;
  long unaff_x23;
  undefined8 *puVar8;
  long unaff_x24;
  undefined8 *puVar9;
  long unaff_x25;
  undefined8 *puVar10;
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
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  ulong in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined4 uStack00000000000000e0;
  undefined4 uStack00000000000000e4;
  undefined4 uStack00000000000000e8;
  undefined4 uStack00000000000000ec;
  undefined4 uStack00000000000000f0;
  undefined4 uStack00000000000000f4;
  undefined8 in_stack_000000f8;
  
  puVar2 = PTR_DAT_072b11c8;
  puVar8 = *(undefined8 **)(unaff_x23 + 0x200);
  puVar9 = *(undefined8 **)(unaff_x24 + 0x1e0);
  puVar10 = *(undefined8 **)(unaff_x25 + 0x1e8);
  iVar6 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x18) <= iVar6) {
      return;
    }
    lVar7 = *(long *)(unaff_x19 + 0x38);
    FUN_042c8aec(&stack0x000000c0,param_1,iVar6,*puVar8);
    uVar3 = in_stack_000000c0;
    if (*(long *)(unaff_x19 + 0x28) == 0) break;
    FUN_042c8aec(&stack0x00000080,*(long *)(unaff_x19 + 0x28),iVar6,*puVar8);
    in_stack_000000c8 = CONCAT44(uStack000000000000008c,uStack0000000000000088);
    in_stack_000000d8 = CONCAT44(uStack000000000000009c,uStack0000000000000098);
    in_stack_000000d0 = CONCAT44(uStack0000000000000094,uStack0000000000000090);
    in_stack_000000c0 = in_stack_00000080;
    uStack00000000000000e8 = (undefined4)in_stack_000000a8;
    uStack00000000000000ec = (undefined4)((ulong)in_stack_000000a8 >> 0x20);
    uStack00000000000000e0 = uStack00000000000000a0;
    uStack00000000000000e4 = uStack00000000000000a4;
    in_stack_000000f8 = in_stack_000000b8;
    uStack00000000000000f0 = (undefined4)in_stack_000000b0;
    uStack00000000000000f4 = (undefined4)((ulong)in_stack_000000b0 >> 0x20);
    in_stack_00000060 = CONCAT44(uStack00000000000000e8,uStack00000000000000a4);
    uStack0000000000000074 = in_stack_000000b8;
    uStack0000000000000068 = uStack00000000000000ec;
    uStack000000000000006c = uStack00000000000000f0;
    uStack0000000000000070 = uStack00000000000000f4;
    if (lVar7 == 0) break;
    uStack0000000000000088 = uStack00000000000000ec;
    uStack0000000000000094 = (undefined4)in_stack_000000b8;
    uStack0000000000000098 = (undefined4)((ulong)in_stack_000000b8 >> 0x20);
                    /* try { // try from 05d6669c to 05e66703 has its CatchHandler @ 05d6669c
                       catch() { ... } // from try @ 05d6669c with catch @ 05d6669c
                       catch() { ... } // from try @ 05d66738 with catch @ 05d6669c
                       catch() { ... } // from try @ 05d66824 with catch @ 05d6669c
                       catch() { ... } // from try @ 05d668e0 with catch @ 05d6669c
                       catch() { ... } // from try @ 05d668ec with catch @ 05d6669c */
    uStack000000000000008c = uStack00000000000000f0;
    uStack0000000000000090 = uStack00000000000000f4;
    in_stack_00000080 = in_stack_00000060;
    FUN_05075fd4(lVar7,uVar3 & 0xffffffff,&stack0x00000080,*puVar9);
    if (*(long *)(unaff_x19 + 0x28) == 0) break;
    lVar7 = *(long *)(unaff_x19 + 0x30);
    FUN_042c8aec(&stack0x00000080,*(long *)(unaff_x19 + 0x28),iVar6,*puVar8);
    uVar3 = in_stack_00000080;
    if (*(long *)(unaff_x19 + 0x28) == 0) break;
    FUN_042c8aec(&stack0x00000020,*(long *)(unaff_x19 + 0x28),iVar6,*puVar8);
    uVar5 = uStack0000000000000038;
    uVar4 = uStack0000000000000034;
    uStack0000000000000088 = uStack0000000000000028;
    uStack000000000000008c = uStack000000000000002c;
    in_stack_00000080 = in_stack_00000020;
    uStack0000000000000098 = uStack0000000000000038;
    uStack000000000000009c = uStack000000000000003c;
    uStack0000000000000090 = uStack0000000000000030;
    uStack0000000000000094 = uStack0000000000000034;
    in_stack_000000a8 = in_stack_00000048;
    uStack00000000000000a0 = (undefined4)in_stack_00000040;
    uStack00000000000000a4 = (undefined4)((ulong)in_stack_00000040 >> 0x20);
    in_stack_000000b8 = in_stack_00000058;
    in_stack_000000b0 = in_stack_00000050;
    uVar1 = CONCAT44(uStack000000000000002c,uStack0000000000000028);
    if (lVar7 == 0) break;
                    /* try { // try from 05d66704 to 05e66707 has its CatchHandler @ 05d667ec */
                    /* try { // try from 05d66714 to 05e6671b has its CatchHandler @ 05d667f4 */
    uStack0000000000000028 = uStack0000000000000030;
    uStack0000000000000034 = uStack000000000000003c;
    uStack0000000000000038 = uStack00000000000000a0;
    uStack000000000000002c = uVar4;
    uStack0000000000000030 = uVar5;
    in_stack_00000020 = uVar1;
    FUN_05075fd4(lVar7,uVar3 & 0xffffffff,&stack0x00000020,*puVar9);
                    /* try { // try from 05d66730 to 05e66737 has its CatchHandler @ 05d667f0 */
    if ((*(long *)(unaff_x19 + 0x40) == 0) || (*(long *)(unaff_x19 + 0x28) == 0)) break;
                    /* try { // try from 05d66738 to 05e6680b has its CatchHandler @ 05d6669c */
    lVar7 = *(long *)(*(long *)(unaff_x19 + 0x40) + 0x10);
    FUN_042c8aec(&stack0x00000020,*(long *)(unaff_x19 + 0x28),iVar6,*puVar8);
    if (lVar7 == 0) break;
    FUN_03cdd958(lVar7,in_stack_00000020 & 0xffffffff,*puVar10);
    if ((*(long *)(unaff_x19 + 0x40) == 0) || (*(long *)(unaff_x19 + 0x28) == 0)) break;
    lVar7 = *(long *)(*(long *)(unaff_x19 + 0x40) + 0x18);
    FUN_042c8aec(&stack0x00000020,*(long *)(unaff_x19 + 0x28),iVar6,*puVar8);
    uVar3 = in_stack_00000020;
    if (*(long *)(unaff_x19 + 0x28) == 0) break;
    FUN_042c8aec(&stack0x00000020,*(long *)(unaff_x19 + 0x28),iVar6,*puVar8);
    if (lVar7 == 0) break;
    FUN_0506fc90(lVar7,uVar3 & 0xffffffff,in_stack_00000020._4_4_,*(undefined8 *)puVar2);
    param_1 = *(long *)(unaff_x19 + 0x28);
    iVar6 = iVar6 + 1;
    if (param_1 == 0) break;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


