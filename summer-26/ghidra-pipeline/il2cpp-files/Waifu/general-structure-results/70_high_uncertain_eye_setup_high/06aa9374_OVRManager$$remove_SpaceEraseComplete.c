/*
FUNCTION_NAME: OVRManager$$remove_SpaceEraseComplete
ENTRY_POINT: 06aa9374
PROGRAM: Waifu-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_SpaceEraseComplete(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  long unaff_x19;
  long unaff_x22;
  long unaff_x23;
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
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  undefined4 uStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  undefined4 uStack00000000000000c0;
  undefined4 uStack00000000000000c4;
  undefined4 in_stack_000000c8;
  
  while( true ) {
    uVar5 = in_stack_000000c8;
    uVar4 = uStack00000000000000c0;
    uVar3 = uStack00000000000000b8;
    uVar2 = uStack00000000000000b0;
    uVar1 = uStack00000000000000a8;
    FUN_06a5e4b0(&stack0x000000a8,*(undefined8 *)(unaff_x19 + 0x20),0,0);
    in_stack_00000060 = *(undefined8 *)(unaff_x22 + 0x28);
    uStack0000000000000074 = *(undefined8 *)(unaff_x22 + 0x3c);
    uStack0000000000000068 = (undefined4)*(undefined8 *)(unaff_x22 + 0x30);
    uStack000000000000006c = (undefined4)*(undefined8 *)(unaff_x22 + 0x34);
    uStack0000000000000070 = (undefined4)((ulong)*(undefined8 *)(unaff_x22 + 0x34) >> 0x20);
    FUN_06aa94a8(uStack00000000000000ac,uVar2,uStack00000000000000b4);
    FUN_06aa9640(uVar3,uStack00000000000000bc,uVar4,uStack00000000000000c4);
    FUN_06a5e4b0(&stack0x000000a8,*(undefined8 *)(unaff_x19 + 0x20),0,0);
    in_stack_00000020 = *(undefined8 *)(unaff_x22 + 0x28);
    uStack0000000000000034 = *(undefined8 *)(unaff_x22 + 0x3c);
    uStack0000000000000028 = (undefined4)*(undefined8 *)(unaff_x22 + 0x30);
    uStack000000000000002c = (undefined4)*(undefined8 *)(unaff_x22 + 0x34);
    uStack0000000000000030 = (undefined4)((ulong)*(undefined8 *)(unaff_x22 + 0x34) >> 0x20);
    FUN_06a7083c(&stack0x00000040,&stack0x00000060,&stack0x00000020,0);
    lVar7 = *(long *)(unaff_x19 + 0x30);
    if (lVar7 == 0) break;
    in_stack_00000088 = CONCAT44(uStack000000000000004c,uStack0000000000000048);
    pcVar8 = *(code **)(lVar7 + 0x18);
    uVar6 = *(undefined8 *)(lVar7 + 0x40);
    in_stack_00000080 = in_stack_00000040;
    *(undefined8 *)(unaff_x22 + 0x14) = uStack0000000000000054;
    *(ulong *)(unaff_x22 + 0xc) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
    uStack00000000000000a8 = uVar1;
    uStack00000000000000b0 = uVar2;
    uStack00000000000000b8 = uVar3;
    uStack00000000000000c0 = uVar4;
    in_stack_000000c8 = uVar5;
    (*pcVar8)(uVar6,&stack0x000000a8,&stack0x00000080,*(undefined8 *)(lVar7 + 0x28));
    lVar7 = *(long *)(unaff_x19 + 0x40);
    if (lVar7 == 0) break;
    if (*(int *)(lVar7 + 0x20) < 1) {
      return;
    }
    FUN_050ceb84(&stack0x000000a8,lVar7,*(undefined8 *)(unaff_x23 + 0xcc8));
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


