/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.InspectedMember$$set_SupportedGizmos
ENTRY_POINT: 0635228c
PROGRAM: Waifu-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_InspectedMember__set_SupportedGizmos(long param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long unaff_x19;
  ulong unaff_x21;
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
  
                    /* try { // try from 06352290 to 0645229b has its CatchHandler @ 06352794 */
  if (*(uint *)(param_1 + 0x18) < 2) {
LAB_06352444:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d44();
  }
  lVar12 = *(long *)(param_1 + 0x28);
  if (lVar12 != 0) {
                    /* try { // try from 063522b0 to 064522bb has its CatchHandler @ 06352784 */
    FUN_0405de94(*(undefined8 *)(lVar12 + 0x10),*(undefined8 *)(lVar12 + 0x18),unaff_x21 >> 0x20);
    auVar3._8_8_ = in_stack_00000168;
    auVar3._0_8_ = in_stack_00000160;
    auVar1._8_8_ = in_stack_00000158;
    auVar1._0_8_ = in_stack_00000150;
    lVar12 = *(long *)(unaff_x19 + 0x28);
    if (lVar12 != 0) {
                    /* try { // try from 063522c8 to 064522cf has its CatchHandler @ 06352780 */
      _in_stack_00000150 = auVar1;
      _in_stack_00000160 = auVar3;
      if (*(uint *)(lVar12 + 0x18) < 2) goto LAB_06352444;
      lVar12 = *(long *)(lVar12 + 0x28);
      if (lVar12 == 0) goto LAB_06352440;
      FUN_0405d584(*(undefined8 *)(lVar12 + 0x10),*(undefined8 *)(lVar12 + 0x18),param_2 >> 0x20);
      auVar8._8_8_ = in_stack_00000168;
      auVar8._0_8_ = in_stack_00000160;
      auVar7._8_8_ = in_stack_00000158;
      auVar7._0_8_ = in_stack_00000150;
      if ((in_stack_000002b0 != 0) &&
         (_in_stack_00000150 = auVar7, _in_stack_00000160 = auVar8,
         *(long *)(in_stack_000002b0 + 0x18) != 0)) {
        FUN_06358b08(&stack0x00000140,in_stack_000002a8,0);
        auVar4._8_8_ = in_stack_00000168;
        auVar4._0_8_ = in_stack_00000160;
        auVar2._8_8_ = in_stack_00000158;
        auVar2._0_8_ = in_stack_00000150;
        lVar12 = *(long *)(unaff_x19 + 0x20);
        if (lVar12 == 0) goto LAB_06352440;
        _in_stack_00000150 = auVar2;
        _in_stack_00000160 = auVar4;
        if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_06352444;
        if (*(long *)(lVar12 + 0x30) == 0) goto LAB_06352440;
        _in_stack_00000150 =
             FUN_042b60dc(*(long *)(lVar12 + 0x30),*(undefined4 *)(in_stack_000002b0 + 0x18),
                          *(undefined8 *)(unaff_x27 + 0x4c8));
        auVar6._8_8_ = in_stack_00000168;
        auVar6._0_8_ = in_stack_00000160;
        auVar5._8_8_ = in_stack_00000168;
        auVar5._0_8_ = in_stack_00000160;
        uVar10 = in_stack_00000150;
        lVar12 = *(long *)(unaff_x19 + 0x28);
        if (lVar12 == 0) goto LAB_06352440;
        _in_stack_00000160 = auVar6;
        if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_06352444;
        _in_stack_00000160 = auVar5;
        if ((in_stack_000002b8 == 0) || (_in_stack_00000160 = auVar6, *(long *)(lVar12 + 0x30) == 0)
           ) goto LAB_06352440;
        _in_stack_00000160 =
             FUN_0429eef4(*(long *)(lVar12 + 0x30),*(undefined4 *)(in_stack_000002b8 + 0x18),
                          *(undefined8 *)(unaff_x25 + 0x30));
        uVar11 = in_stack_00000160;
        lVar12 = *(long *)(unaff_x19 + 0x20);
        if (lVar12 == 0) goto LAB_06352440;
        if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_06352444;
        lVar12 = *(long *)(lVar12 + 0x30);
        if (lVar12 == 0) goto LAB_06352440;
        FUN_0405de94(*(undefined8 *)(lVar12 + 0x10),*(undefined8 *)(lVar12 + 0x18),uVar10 >> 0x20,
                     in_stack_000002b0,*(undefined8 *)(unaff_x26 + 0xdd8));
        lVar12 = *(long *)(unaff_x19 + 0x28);
        if (lVar12 == 0) goto LAB_06352440;
        if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_06352444;
        lVar12 = *(long *)(lVar12 + 0x30);
        if (lVar12 == 0) goto LAB_06352440;
        FUN_0405d584(*(undefined8 *)(lVar12 + 0x10),*(undefined8 *)(lVar12 + 0x18),uVar11 >> 0x20,
                     in_stack_000002b8,*(undefined8 *)(unaff_x24 + 0xd30));
      }
      lVar12 = *(long *)(unaff_x19 + 0x30);
      memcpy(&stack0x00000010,&stack0x000000c0,0xb0);
      uVar9 = DAT_083ebda0;
      if (lVar12 != 0) {
        memcpy(&stack0x00000170,&stack0x00000010,0xb0);
        FUN_043932d8(lVar12,&stack0x00000170,uVar9);
        return;
      }
    }
  }
LAB_06352440:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


