/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.InspectedMember$$PopulateSupportedGizmos
ENTRY_POINT: 0635232c
PROGRAM: Waifu-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_InspectedMember__PopulateSupportedGizmos
               (undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x24;
  long unaff_x25;
  long unaff_x27;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  long in_stack_000002b8;
  
  _in_stack_00000150 = FUN_042b60dc(param_1,param_2,*(undefined8 *)(unaff_x27 + 0x4c8));
  auVar2._8_8_ = in_stack_00000168;
  auVar2._0_8_ = in_stack_00000160;
  auVar1._8_8_ = in_stack_00000168;
  auVar1._0_8_ = in_stack_00000160;
  uVar4 = in_stack_00000150;
  lVar6 = *(long *)(unaff_x19 + 0x28);
  if (lVar6 != 0) {
                    /* try { // try from 06352340 to 06452397 has its CatchHandler @ 06352774 */
    _in_stack_00000160 = auVar2;
    if (*(uint *)(lVar6 + 0x18) < 3) {
LAB_06352444:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    _in_stack_00000160 = auVar1;
    if ((in_stack_000002b8 != 0) && (_in_stack_00000160 = auVar2, *(long *)(lVar6 + 0x30) != 0)) {
      _in_stack_00000160 =
           FUN_0429eef4(*(long *)(lVar6 + 0x30),*(undefined4 *)(in_stack_000002b8 + 0x18),
                        *(undefined8 *)(unaff_x25 + 0x30));
      uVar5 = in_stack_00000160;
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if (lVar6 != 0) {
        if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_06352444;
        lVar6 = *(long *)(lVar6 + 0x30);
        if (lVar6 != 0) {
          FUN_0405de94(*(undefined8 *)(lVar6 + 0x10),*(undefined8 *)(lVar6 + 0x18),uVar4 >> 0x20);
          lVar6 = *(long *)(unaff_x19 + 0x28);
          if (lVar6 != 0) {
            if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_06352444;
            lVar6 = *(long *)(lVar6 + 0x30);
            if (lVar6 != 0) {
              FUN_0405d584(*(undefined8 *)(lVar6 + 0x10),*(undefined8 *)(lVar6 + 0x18),uVar5 >> 0x20
                           ,in_stack_000002b8,*(undefined8 *)(unaff_x24 + 0xd30));
              lVar6 = *(long *)(unaff_x19 + 0x30);
                    /* try { // try from 063523d8 to 064523ff has its CatchHandler @ 0635281c */
              memcpy(&stack0x00000010,&stack0x000000c0,0xb0);
              uVar3 = DAT_083ebda0;
              if (lVar6 != 0) {
                memcpy(&stack0x00000170,&stack0x00000010,0xb0);
                FUN_043932d8(lVar6,&stack0x00000170,uVar3);
                    /* try { // try from 06352434 to 0645245b has its CatchHandler @ 06352818 */
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


