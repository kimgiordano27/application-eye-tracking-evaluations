/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.InspectedMember$$get_SupportedGizmos
ENTRY_POINT: 06352284
PROGRAM: Waifu-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_InspectedMember__get_SupportedGizmos(ulong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
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
  
  auVar4._8_8_ = in_stack_00000168;
  auVar4._0_8_ = in_stack_00000160;
  auVar1._8_8_ = in_stack_00000158;
  auVar1._0_8_ = in_stack_00000150;
  lVar14 = *(long *)(unaff_x19 + 0x20);
  if (lVar14 == 0) goto LAB_06352440;
  _in_stack_00000150 = auVar1;
  _in_stack_00000160 = auVar4;
  if (*(uint *)(lVar14 + 0x18) < 2) {
LAB_06352444:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d44();
  }
  lVar14 = *(long *)(lVar14 + 0x28);
  if (lVar14 != 0) {
    FUN_0405de94(*(undefined8 *)(lVar14 + 0x10),*(undefined8 *)(lVar14 + 0x18),unaff_x21 >> 0x20);
    auVar5._8_8_ = in_stack_00000168;
    auVar5._0_8_ = in_stack_00000160;
    auVar2._8_8_ = in_stack_00000158;
    auVar2._0_8_ = in_stack_00000150;
    lVar14 = *(long *)(unaff_x19 + 0x28);
    if (lVar14 != 0) {
      _in_stack_00000150 = auVar2;
      _in_stack_00000160 = auVar5;
      if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_06352444;
      lVar14 = *(long *)(lVar14 + 0x28);
      if (lVar14 == 0) goto LAB_06352440;
      FUN_0405d584(*(undefined8 *)(lVar14 + 0x10),*(undefined8 *)(lVar14 + 0x18),param_1 >> 0x20);
      auVar10._8_8_ = in_stack_00000168;
      auVar10._0_8_ = in_stack_00000160;
      auVar9._8_8_ = in_stack_00000158;
      auVar9._0_8_ = in_stack_00000150;
      if ((in_stack_000002b0 != 0) &&
         (_in_stack_00000150 = auVar9, _in_stack_00000160 = auVar10,
         *(long *)(in_stack_000002b0 + 0x18) != 0)) {
        FUN_06358b08(&stack0x00000140,in_stack_000002a8,0);
        auVar6._8_8_ = in_stack_00000168;
        auVar6._0_8_ = in_stack_00000160;
        auVar3._8_8_ = in_stack_00000158;
        auVar3._0_8_ = in_stack_00000150;
        lVar14 = *(long *)(unaff_x19 + 0x20);
        if (lVar14 == 0) goto LAB_06352440;
        _in_stack_00000150 = auVar3;
        _in_stack_00000160 = auVar6;
        if (*(uint *)(lVar14 + 0x18) < 3) goto LAB_06352444;
        if (*(long *)(lVar14 + 0x30) == 0) goto LAB_06352440;
        _in_stack_00000150 =
             FUN_042b60dc(*(long *)(lVar14 + 0x30),*(undefined4 *)(in_stack_000002b0 + 0x18),
                          *(undefined8 *)(unaff_x27 + 0x4c8));
        auVar8._8_8_ = in_stack_00000168;
        auVar8._0_8_ = in_stack_00000160;
        auVar7._8_8_ = in_stack_00000168;
        auVar7._0_8_ = in_stack_00000160;
        uVar12 = in_stack_00000150;
        lVar14 = *(long *)(unaff_x19 + 0x28);
        if (lVar14 == 0) goto LAB_06352440;
        _in_stack_00000160 = auVar8;
        if (*(uint *)(lVar14 + 0x18) < 3) goto LAB_06352444;
        _in_stack_00000160 = auVar7;
        if ((in_stack_000002b8 == 0) || (_in_stack_00000160 = auVar8, *(long *)(lVar14 + 0x30) == 0)
           ) goto LAB_06352440;
        _in_stack_00000160 =
             FUN_0429eef4(*(long *)(lVar14 + 0x30),*(undefined4 *)(in_stack_000002b8 + 0x18),
                          *(undefined8 *)(unaff_x25 + 0x30));
        uVar13 = in_stack_00000160;
        lVar14 = *(long *)(unaff_x19 + 0x20);
        if (lVar14 == 0) goto LAB_06352440;
        if (*(uint *)(lVar14 + 0x18) < 3) goto LAB_06352444;
        lVar14 = *(long *)(lVar14 + 0x30);
        if (lVar14 == 0) goto LAB_06352440;
        FUN_0405de94(*(undefined8 *)(lVar14 + 0x10),*(undefined8 *)(lVar14 + 0x18),uVar12 >> 0x20,
                     in_stack_000002b0,*(undefined8 *)(unaff_x26 + 0xdd8));
        lVar14 = *(long *)(unaff_x19 + 0x28);
        if (lVar14 == 0) goto LAB_06352440;
        if (*(uint *)(lVar14 + 0x18) < 3) goto LAB_06352444;
        lVar14 = *(long *)(lVar14 + 0x30);
        if (lVar14 == 0) goto LAB_06352440;
        FUN_0405d584(*(undefined8 *)(lVar14 + 0x10),*(undefined8 *)(lVar14 + 0x18),uVar13 >> 0x20,
                     in_stack_000002b8,*(undefined8 *)(unaff_x24 + 0xd30));
      }
      lVar14 = *(long *)(unaff_x19 + 0x30);
      memcpy(&stack0x00000010,&stack0x000000c0,0xb0);
      uVar11 = DAT_083ebda0;
      if (lVar14 != 0) {
        memcpy(&stack0x00000170,&stack0x00000010,0xb0);
        FUN_043932d8(lVar14,&stack0x00000170,uVar11);
        return;
      }
    }
  }
LAB_06352440:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


