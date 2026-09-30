/*
FUNCTION_NAME: OVRPlugin.Posef$$.cctor
ENTRY_POINT: 06aeccdc
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] OVRPlugin_Posef___cctor(void)

{
  float fVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *plVar6;
  undefined1 unaff_w21;
  float fVar7;
  undefined1 auVar8 [16];
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000010;
  float fStack0000000000000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0x484) = unaff_w21;
  plVar6 = *(long **)(unaff_x19 + 0x48);
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_083ccff0) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_06aecd88;
        }
        uVar4 = uVar4 - 1;
                    /* try { // try from 06aecd18 to 06bececf has its CatchHandler @ 06aecd18
                       catch() { ... } // from try @ 06aecd18 with catch @ 06aecd18
                       catch() { ... } // from try @ 06aecf6c with catch @ 06aecd18
                       catch() { ... } // from try @ 06aecfa4 with catch @ 06aecd18 */
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0338f71c(plVar6,DAT_083ccff0,0);
LAB_06aecd88:
    auVar8 = (*(code *)*puVar2)(plVar6,puVar2[1]);
    return auVar8;
  }
  plVar6 = *(long **)(unaff_x19 + 0x28);
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_083cc7b0) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_06aecdb0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0338f71c(plVar6,DAT_083cc7b0,0);
LAB_06aecdb0:
    (*(code *)*puVar2)(&stack0x00000020,plVar6,puVar2[1]);
    plVar6 = *(long **)(unaff_x19 + 0x28);
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      fVar1 = fStack0000000000000020;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_083cc7b0) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_06aece1c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_0338f71c(plVar6,DAT_083cc7b0,0);
LAB_06aece1c:
      (*(code *)*puVar2)(plVar6,puVar2[1]);
      in_stack_00000028 = in_stack_00000008;
      _fStack0000000000000020 = in_stack_00000000;
      in_stack_00000030 = in_stack_00000010;
      if (*(int *)(DAT_083cffc8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar7 = (float)FUN_07a17308(&stack0x00000020,0);
      return ZEXT416((uint)(fVar1 + fVar7 * *(float *)(unaff_x19 + 0x54)));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


