/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Panel$$Setup
ENTRY_POINT: 0636a704
PROGRAM: Waifu-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Panel__Setup
               (undefined1 param_1 [16],ulong param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  long unaff_x19;
  long lVar8;
  undefined1 unaff_w20;
  uint uVar9;
  long unaff_x21;
  long lVar10;
  long unaff_x23;
  ulong uVar11;
  uint unaff_w25;
  int iVar12;
  undefined8 unaff_x26;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long in_stack_00000000;
  long in_stack_00000008;
  ulong in_stack_00000018;
  
                    /* catch() { ... } // from try @ 0636a694 with catch @ 0636a704
                       catch() { ... } // from try @ 0636a6a4 with catch @ 0636a704 */
  FUN_0335b6c8();
                    /* catch() { ... } // from try @ 0636a66c with catch @ 0636a708
                       catch() { ... } // from try @ 0636a6b4 with catch @ 0636a708 */
  DataMemoryBarrier(2,3);
                    /* catch() { ... } // from try @ 0636a684 with catch @ 0636a70c */
                    /* catch() { ... } // from try @ 0636a674 with catch @ 0636a710 */
  FUN_0335b6c8(&DAT_083d4540,1);
  DataMemoryBarrier(2,3);
                    /* try { // try from 0636a720 to 0646a723 has its CatchHandler @ 0636a7f4 */
  *(undefined1 *)(unaff_x19 + 0x93a) = unaff_w20;
  if (0 < (int)unaff_w25) {
    uVar11 = 0;
    do {
      if (*(long *)(unaff_x23 + 0x18) == 0) goto LAB_0636aa40;
      iVar12 = (int)((ulong)unaff_x26 >> 0x20) + (int)uVar11;
      lVar8 = (long)iVar12;
      uVar1 = *(uint *)(*(long *)(*(long *)(unaff_x23 + 0x18) + 0x10) + (long)iVar12 * 4);
      uVar9 = uVar1 & 0xfffffffe | in_stack_00000018._4_4_ & 1;
      if ((in_stack_00000018 & 0x100000000) == 0) {
        if ((uVar1 >> 0x12 & 1) != 0) {
          if (*(long *)(unaff_x23 + 0x98) == 0) goto LAB_0636aa40;
          iVar2 = *(int *)(*(long *)(*(long *)(unaff_x23 + 0x98) + 0x10) + lVar8 * 4);
          if (-1 < iVar2) {
                    /* try { // try from 0636a8a4 to 0646a8ab has its CatchHandler @ 0636af58 */
            if ((*(long *)(unaff_x23 + 0x10) == 0) ||
               (lVar6 = FUN_063178b4(*(long *)(unaff_x23 + 0x10),0), lVar6 == 0)) goto LAB_0636aa40;
            FUN_063599f0(lVar6,iVar2);
                    /* try { // try from 0636a8b8 to 0646a8bb has its CatchHandler @ 0636af2c */
            if (*(long *)(unaff_x23 + 0x98) == 0) goto LAB_0636aa40;
            *(undefined4 *)(*(long *)(*(long *)(unaff_x23 + 0x98) + 0x10) + lVar8 * 4) = 0xffffffff;
          }
        }
        if ((uVar1 & 0x7000) != 0) {
          if (*(long *)(unaff_x23 + 0xa0) == 0) goto LAB_0636aa40;
          iVar2 = *(int *)(*(long *)(*(long *)(unaff_x23 + 0xa0) + 0x10) + lVar8 * 4);
          if (-1 < iVar2) {
            if ((uVar1 >> 0x13 & 1) != 0) {
              if ((*(long *)(unaff_x23 + 0x10) == 0) ||
                 (lVar6 = FUN_063178b4(*(long *)(unaff_x23 + 0x10),0), lVar6 == 0))
              goto LAB_0636aa40;
              Meta_XR_ImmersiveDebugger_UserInterface_CategoryButton__set_Counter(lVar6,iVar2,0);
            }
            if ((uVar1 & 0x20000) == 0) {
              iVar12 = -1;
            }
            if ((*(long *)(unaff_x23 + 0x10) == 0) ||
               (lVar6 = FUN_063178b4(*(long *)(unaff_x23 + 0x10),0), lVar6 == 0)) goto LAB_0636aa40;
            FUN_0635a090(lVar6,iVar2,iVar12);
            if (*(long *)(unaff_x23 + 0xa0) == 0) goto LAB_0636aa40;
            *(undefined4 *)(*(long *)(*(long *)(unaff_x23 + 0xa0) + 0x10) + lVar8 * 4) = 0xffffffff;
          }
        }
      }
      else {
        uVar9 = uVar9 | 0x2000000;
        if (unaff_x21 != 0) {
          uVar4 = (**(code **)(unaff_x21 + 0x18))
                            (*(undefined8 *)(unaff_x21 + 0x40),uVar11 & 0xffffffff,
                             *(undefined8 *)(unaff_x21 + 0x28));
          if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
            FUN_033b9870(DAT_083cf7d8);
          }
          uVar5 = FUN_07a0d2c4(uVar4,0,0);
          if ((uVar5 & 1) != 0) {
            if ((uVar1 & 0x7000) != 0) {
              if (*(long *)(unaff_x23 + 0xa0) == 0) goto LAB_0636aa40;
                    /* try { // try from 0636a7c4 to 0646a7cb has its CatchHandler @ 0636a800 */
                    /* try { // try from 0636a7d0 to 0646a7d3 has its CatchHandler @ 0636a810 */
              if (*(int *)(*(long *)(*(long *)(unaff_x23 + 0xa0) + 0x10) + lVar8 * 4) == -1) {
                    /* try { // try from 0636a7d4 to 0646a7d7 has its CatchHandler @ 0636a80c */
                    /* try { // try from 0636a7d8 to 0646a7db has its CatchHandler @ 0636a808 */
                    /* try { // try from 0636a7dc to 0646a7df has its CatchHandler @ 0636a804 */
                if ((uVar1 & 0x20000) == 0) {
                  iVar12 = -1;
                }
                    /* try { // try from 0636a7e0 to 0646a7e7 has its CatchHandler @ 0636a81c */
                    /* try { // try from 0636a7e8 to 0646a7ef has its CatchHandler @ 0636a7f0 */
                if ((*(long *)(unaff_x23 + 0x10) == 0) ||
                   (lVar6 = FUN_063178b4(*(long *)(unaff_x23 + 0x10),0), lVar6 == 0))
                goto LAB_0636aa40;
                    /* catch() { ... } // from try @ 0636a7e8 with catch @ 0636a7f0 */
                    /* catch() { ... } // from try @ 0636a720 with catch @ 0636a7f4 */
                    /* try { // try from 0636a7f8 to 0646a7ff has its CatchHandler @ 0636aff8 */
                uVar3 = FUN_06359b00(lVar6,uVar4,iVar12,uVar1 >> 0x14 & 1);
                    /* catch() { ... } // from try @ 0636a7c4 with catch @ 0636a800
                       try { // try from 0636a800 to 0646a82f has its CatchHandler @ 06369dec */
                    /* catch() { ... } // from try @ 0636a7dc with catch @ 0636a804 */
                if (*(long *)(unaff_x23 + 0xa0) == 0) goto LAB_0636aa40;
                    /* catch() { ... } // from try @ 0636a7d8 with catch @ 0636a808 */
                    /* catch() { ... } // from try @ 0636a7d4 with catch @ 0636a80c */
                    /* catch() { ... } // from try @ 0636a7d0 with catch @ 0636a810 */
                *(undefined4 *)(*(long *)(*(long *)(unaff_x23 + 0xa0) + 0x10) + lVar8 * 4) = uVar3;
                    /* catch() { ... } // from try @ 0636a284 with catch @ 0636a814 */
                if ((uVar1 >> 0x13 & 1) != 0) {
                    /* catch() { ... } // from try @ 0636a1e0 with catch @ 0636a818 */
                    /* catch() { ... } // from try @ 0636a7e0 with catch @ 0636a81c */
                    /* catch() { ... } // from try @ 0636a1f8 with catch @ 0636a820 */
                  if ((*(long *)(unaff_x23 + 0x10) == 0) ||
                     (lVar6 = FUN_063178b4(*(long *)(unaff_x23 + 0x10),0), lVar6 == 0))
                  goto LAB_0636aa40;
                    /* try { // try from 0636a830 to 0646a833 has its CatchHandler @ 0636aecc */
                    /* try { // try from 0636a834 to 0646a8a3 has its CatchHandler @ 06369dec */
                  Meta_XR_ImmersiveDebugger_UserInterface_CategoryButton__set_Counter(lVar6,uVar3,1)
                  ;
                }
              }
            }
            if ((uVar1 >> 0x12 & 1) != 0) {
              if (*(long *)(unaff_x23 + 0x98) == 0) goto LAB_0636aa40;
              if (*(int *)(*(long *)(*(long *)(unaff_x23 + 0x98) + 0x10) + lVar8 * 4) == -1) {
                if (in_stack_00000008 == 0) {
                  uVar13 = 0;
                  uVar5 = param_2;
                  uVar15 = param_3;
                  param_2 = 0;
                  param_3 = 0;
                }
                else {
                  uVar13 = (**(code **)(in_stack_00000008 + 0x18))
                                     (*(undefined8 *)(in_stack_00000008 + 0x40),uVar11 & 0xffffffff,
                                      *(undefined8 *)(in_stack_00000008 + 0x28));
                  uVar5 = param_2;
                  uVar15 = param_3;
                }
                if (in_stack_00000000 == 0) {
                  puVar7 = *(uint **)(DAT_083d4540 + 0xb8);
                  uVar5 = (ulong)puVar7[1];
                  uVar15 = (ulong)puVar7[2];
                  uVar16 = (ulong)puVar7[3];
                  uVar14 = (ulong)*puVar7;
                }
                else {
                  uVar14 = (**(code **)(in_stack_00000000 + 0x18))
                                     (*(undefined8 *)(in_stack_00000000 + 0x40),uVar11 & 0xffffffff,
                                      *(undefined8 *)(in_stack_00000000 + 0x28));
                  uVar16 = param_4;
                }
                param_4 = uVar14;
                if (*(long *)(unaff_x23 + 0x10) == 0) goto LAB_0636aa40;
                lVar10 = *(long *)(unaff_x23 + 0x98);
                lVar6 = FUN_063178b4(*(long *)(unaff_x23 + 0x10),0);
                if (((*(long *)(unaff_x23 + 0xa0) == 0) || (lVar6 == 0)) ||
                   (uVar3 = FUN_06359898(uVar13,param_2,param_3,param_4,uVar5,uVar15,uVar16,lVar6,
                                         uVar4,*(undefined4 *)
                                                (*(long *)(*(long *)(unaff_x23 + 0xa0) + 0x10) +
                                                lVar8 * 4)), lVar10 == 0)) goto LAB_0636aa40;
                *(undefined4 *)(*(long *)(lVar10 + 0x10) + lVar8 * 4) = uVar3;
              }
            }
          }
        }
      }
      if (*(long *)(unaff_x23 + 0x18) == 0) {
LAB_0636aa40:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      uVar11 = uVar11 + 1;
      *(uint *)(*(long *)(*(long *)(unaff_x23 + 0x18) + 0x10) + lVar8 * 4) = uVar9;
    } while (unaff_w25 != uVar11);
  }
  return;
}


