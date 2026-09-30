/*
FUNCTION_NAME: OVRManager$$GetOpenVRControllerOffset
ENTRY_POINT: 06aacc18
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__GetOpenVRControllerOffset(undefined1 param_1 [16],float param_2,float param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar7;
  undefined1 unaff_w22;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x21 + 0x13d) = unaff_w22;
  FUN_06aac274(&stack0x00000040);
  plVar7 = *(long **)(unaff_x20 + 0x138);
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_083ccf20) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_06aacc88;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0338f71c(plVar7,DAT_083ccf20,1);
LAB_06aacc88:
                    /* try { // try from 06aacc94 to 06bacd7b has its CatchHandler @ 06aacc94
                       catch() { ... } // from try @ 06aacc94 with catch @ 06aacc94
                       catch() { ... } // from try @ 06aacdac with catch @ 06aacc94
                       catch() { ... } // from try @ 06aace54 with catch @ 06aacc94
                       catch() { ... } // from try @ 06aacec8 with catch @ 06aacc94
                       catch() { ... } // from try @ 06aacedc with catch @ 06aacc94 */
    fVar8 = (float)(*(code *)*puVar3)(plVar7,0,puVar3[1]);
    plVar7 = *(long **)(unaff_x20 + 0x138);
    if (plVar7 != (long *)0x0) {
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      fVar10 = param_2;
      fVar11 = param_3;
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_083ccf20) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_06aaccf8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_0338f71c(plVar7,DAT_083ccf20,0);
LAB_06aaccf8:
      iVar1 = (*(code *)*puVar3)(plVar7,puVar3[1]);
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_083ccf20) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_06aacd58;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_0338f71c(plVar7,DAT_083ccf20,1);
LAB_06aacd58:
      fVar9 = (float)(*(code *)*puVar3)(plVar7,iVar1 + -1,puVar3[1]);
      if (unaff_x19 != 0) {
                    /* try { // try from 06aacd7c to 06bacd83 has its CatchHandler @ 06aace9c */
                    /* try { // try from 06aacd9c to 06bacdab has its CatchHandler @ 06aace94 */
                    /* try { // try from 06aacdac to 06bacdfb has its CatchHandler @ 06aacc94 */
        uStack0000000000000014 = uStack0000000000000054;
        uVar5 = FUN_06aab78c((param_3 - fVar11) * (param_3 - fVar11) +
                             (fVar8 - fVar9) * (fVar8 - fVar9) +
                             (param_2 - fVar10) * (param_2 - fVar10));
        if ((uVar5 & 1) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = FUN_0467e1b4();
        }
        return uVar2 & 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


