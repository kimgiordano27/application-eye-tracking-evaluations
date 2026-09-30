/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.InspectedMember$$get_MemberInfo
ENTRY_POINT: 063522d8
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_InspectedMember__get_MemberInfo
               (undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long unaff_x19;
  ulong unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_000002a8;
  long in_stack_000002b0;
  long in_stack_000002b8;
  
                    /* try { // try from 063522dc to 064522e7 has its CatchHandler @ 06352770 */
  FUN_0405d584(param_1,param_2,unaff_x23 >> 0x20);
  auVar6._8_8_ = in_stack_00000168;
  auVar6._0_8_ = in_stack_00000160;
  auVar5._8_8_ = in_stack_00000158;
  auVar5._0_8_ = in_stack_00000150;
  if ((in_stack_000002b0 != 0) &&
     (_in_stack_00000150 = auVar5, _in_stack_00000160 = auVar6,
     *(long *)(in_stack_000002b0 + 0x18) != 0)) {
    FUN_06358b08(&stack0x00000140,in_stack_000002a8,0);
    auVar2._8_8_ = in_stack_00000168;
    auVar2._0_8_ = in_stack_00000160;
    auVar1._8_8_ = in_stack_00000158;
    auVar1._0_8_ = in_stack_00000150;
    lVar10 = *(long *)(unaff_x19 + 0x20);
    if (lVar10 == 0) goto LAB_06352440;
    _in_stack_00000150 = auVar1;
    _in_stack_00000160 = auVar2;
    if (*(uint *)(lVar10 + 0x18) < 3) {
LAB_06352444:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    if (*(long *)(lVar10 + 0x30) == 0) goto LAB_06352440;
    _in_stack_00000150 =
         FUN_042b60dc(*(long *)(lVar10 + 0x30),*(undefined4 *)(in_stack_000002b0 + 0x18),
                      *(undefined8 *)(unaff_x27 + 0x4c8));
    auVar4._8_8_ = in_stack_00000168;
    auVar4._0_8_ = in_stack_00000160;
    auVar3._8_8_ = in_stack_00000168;
    auVar3._0_8_ = in_stack_00000160;
    uVar8 = in_stack_00000150;
    lVar10 = *(long *)(unaff_x19 + 0x28);
    if (lVar10 == 0) goto LAB_06352440;
    _in_stack_00000160 = auVar4;
    if (*(uint *)(lVar10 + 0x18) < 3) goto LAB_06352444;
    _in_stack_00000160 = auVar3;
    if ((in_stack_000002b8 == 0) || (_in_stack_00000160 = auVar4, *(long *)(lVar10 + 0x30) == 0))
    goto LAB_06352440;
    _in_stack_00000160 =
         FUN_0429eef4(*(long *)(lVar10 + 0x30),*(undefined4 *)(in_stack_000002b8 + 0x18),
                      *(undefined8 *)(unaff_x25 + 0x30));
    uVar9 = in_stack_00000160;
    lVar10 = *(long *)(unaff_x19 + 0x20);
    if (lVar10 == 0) goto LAB_06352440;
    if (*(uint *)(lVar10 + 0x18) < 3) goto LAB_06352444;
    lVar10 = *(long *)(lVar10 + 0x30);
    if (lVar10 == 0) goto LAB_06352440;
    FUN_0405de94(*(undefined8 *)(lVar10 + 0x10),*(undefined8 *)(lVar10 + 0x18),uVar8 >> 0x20,
                 in_stack_000002b0,*(undefined8 *)(unaff_x26 + 0xdd8));
    lVar10 = *(long *)(unaff_x19 + 0x28);
    if (lVar10 == 0) goto LAB_06352440;
    if (*(uint *)(lVar10 + 0x18) < 3) goto LAB_06352444;
    lVar10 = *(long *)(lVar10 + 0x30);
    if (lVar10 == 0) goto LAB_06352440;
    FUN_0405d584(*(undefined8 *)(lVar10 + 0x10),*(undefined8 *)(lVar10 + 0x18),uVar9 >> 0x20,
                 in_stack_000002b8,*(undefined8 *)(unaff_x24 + 0xd30));
  }
  lVar10 = *(long *)(unaff_x19 + 0x30);
  memcpy(&stack0x00000010,&stack0x000000c0,0xb0);
  uVar7 = DAT_083ebda0;
  if (lVar10 != 0) {
    memcpy(&stack0x00000170,&stack0x00000010,0xb0);
    FUN_043932d8(lVar10,&stack0x00000170,uVar7);
    return;
  }
LAB_06352440:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


