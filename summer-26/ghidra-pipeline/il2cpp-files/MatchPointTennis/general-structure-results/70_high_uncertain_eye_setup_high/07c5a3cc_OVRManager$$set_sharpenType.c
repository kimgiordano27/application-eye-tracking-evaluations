/*
FUNCTION_NAME: OVRManager$$set_sharpenType
ENTRY_POINT: 07c5a3cc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_sharpenType(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  long unaff_x19;
  undefined8 *unaff_x23;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined4 uStack0000000000000090;
  undefined8 uStack0000000000000094;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  undefined4 uStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  undefined4 uStack00000000000000c0;
  undefined4 uStack00000000000000c4;
  undefined4 in_stack_000000c8;
  
  do {
    if (*(int *)(param_1 + 0x20) < 1) {
      return;
    }
    FUN_0638d9f4(&stack0x000000a8,param_1,*unaff_x23);
    uVar7 = in_stack_000000c8;
    uVar6 = uStack00000000000000c0;
    uVar5 = uStack00000000000000bc;
    uVar4 = uStack00000000000000b8;
    uVar3 = uStack00000000000000b0;
    uVar2 = uStack00000000000000ac;
    uVar1 = uStack00000000000000a8;
    FUN_07c09014(&stack0x000000a8,*(undefined8 *)(unaff_x19 + 0x20),0,0);
                    /* try { // try from 07c5a414 to 07d5a5af has its CatchHandler @ 07c5a414
                       catch() { ... } // from try @ 07c5a414 with catch @ 07c5a414
                       catch() { ... } // from try @ 07c5a6b4 with catch @ 07c5a414
                       catch() { ... } // from try @ 07c5a744 with catch @ 07c5a414
                       catch() { ... } // from try @ 07c5a804 with catch @ 07c5a414
                       catch() { ... } // from try @ 07c5a8a8 with catch @ 07c5a414 */
    in_stack_00000060 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
    uStack0000000000000074 = CONCAT44(uStack00000000000000c0,uStack00000000000000bc);
    in_stack_00000068 = uStack00000000000000b0;
    uStack0000000000000070 = uStack00000000000000b8;
    FUN_07c5a52c(uVar2,uVar3,uStack00000000000000b4);
    FUN_07c5a6a0(uVar4,uVar5,uVar6,uStack00000000000000c4);
    FUN_07c09014(&stack0x000000a8,*(undefined8 *)(unaff_x19 + 0x20),0,0);
    in_stack_00000020 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
    uStack0000000000000034 = CONCAT44(uStack00000000000000c0,uStack00000000000000bc);
    in_stack_00000028 = uStack00000000000000b0;
    uStack0000000000000030 = uStack00000000000000b8;
    OVRAnchor_TrackerConfiguration__Equals(&stack0x000000a8,&stack0x00000060,&stack0x00000020,0);
    uStack0000000000000054 = CONCAT44(uStack00000000000000c0,uStack00000000000000bc);
    in_stack_00000040 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
    uStack0000000000000050 = uStack00000000000000b8;
    in_stack_00000048 = uStack00000000000000b0;
    lVar8 = *(long *)(unaff_x19 + 0x30);
    if (lVar8 == 0) break;
    in_stack_00000088 = uStack00000000000000b0;
    uStack0000000000000090 = uStack00000000000000b8;
    in_stack_00000080 = in_stack_00000040;
    uStack0000000000000094 = uStack0000000000000054;
    uStack00000000000000a8 = uVar1;
    uStack00000000000000ac = uVar2;
    uStack00000000000000b0 = uVar3;
    uStack00000000000000b8 = uVar4;
    uStack00000000000000bc = uVar5;
    uStack00000000000000c0 = uVar6;
    in_stack_000000c8 = uVar7;
    (**(code **)(lVar8 + 0x18))
              (*(undefined8 *)(lVar8 + 0x40),&stack0x000000a8,&stack0x00000080,
               *(undefined8 *)(lVar8 + 0x28));
    param_1 = *(long *)(unaff_x19 + 0x40);
  } while (param_1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


