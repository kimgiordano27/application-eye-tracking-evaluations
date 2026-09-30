/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Utils$$.cctor
ENTRY_POINT: 06367660
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Utils___cctor(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar12;
  
                    /* try { // try from 06367660 to 06467667 has its CatchHandler @ 06367038 */
                    /* catch() { ... } // from try @ 06367624 with catch @ 06367664 */
                    /* try { // try from 06367668 to 0646766f has its CatchHandler @ 06367710 */
                    /* catch() { ... } // from try @ 063673d8 with catch @ 06367670
                       try { // try from 06367670 to 064676cb has its CatchHandler @ 06367038 */
  FUN_0335b6c8(&DAT_083e1ae8,1);
                    /* catch() { ... } // from try @ 063674bc with catch @ 06367674 */
  DataMemoryBarrier(2,3);
                    /* catch() { ... } // from try @ 0636744c with catch @ 06367678 */
                    /* catch() { ... } // from try @ 06367658 with catch @ 0636767c */
                    /* catch() { ... } // from try @ 06367338 with catch @ 06367680 */
                    /* catch() { ... } // from try @ 06367654 with catch @ 06367684 */
  FUN_0335b6c8(&DAT_083e2138,1);
                    /* catch() { ... } // from try @ 06367650 with catch @ 06367688 */
  DataMemoryBarrier(2,3);
                    /* catch() { ... } // from try @ 06367360 with catch @ 0636768c */
                    /* catch() { ... } // from try @ 0636764c with catch @ 06367690 */
                    /* catch() { ... } // from try @ 06367648 with catch @ 06367694 */
                    /* catch() { ... } // from try @ 06367644 with catch @ 06367698 */
  FUN_0335b6c8(&DAT_083eb198,1);
                    /* catch() { ... } // from try @ 06367640 with catch @ 0636769c */
  DataMemoryBarrier(2,3);
                    /* catch() { ... } // from try @ 0636763c with catch @ 063676a0 */
                    /* catch() { ... } // from try @ 06367638 with catch @ 063676a4 */
                    /* catch() { ... } // from try @ 063674e0 with catch @ 063676a8 */
                    /* catch() { ... } // from try @ 06367634 with catch @ 063676ac */
  FUN_0335b6c8(&DAT_083eaf38,1);
                    /* catch() { ... } // from try @ 06367318 with catch @ 063676b0 */
  DataMemoryBarrier(2,3);
                    /* catch() { ... } // from try @ 06367630 with catch @ 063676b4 */
                    /* catch() { ... } // from try @ 0636762c with catch @ 063676b8 */
                    /* catch() { ... } // from try @ 063672f0 with catch @ 063676bc */
  FUN_0335b6c8(&DAT_083eaff8,1);
  DataMemoryBarrier(2,3);
                    /* try { // try from 063676cc to 064676cf has its CatchHandler @ 06367700 */
                    /* try { // try from 063676d0 to 06467707 has its CatchHandler @ 06367038 */
  FUN_0335b6c8(&DAT_083eb150,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb0e8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eaf70,1);
                    /* catch() { ... } // from try @ 063676cc with catch @ 06367700 */
  DataMemoryBarrier(2,3);
                    /* try { // try from 06367708 to 0646770f has its CatchHandler @ 06367710 */
                    /* catch() { ... } // from try @ 06367668 with catch @ 06367710
                       catch() { ... } // from try @ 06367708 with catch @ 06367710 */
  FUN_0335b6c8(&DAT_083ebb70,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebbf8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebb78,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebb90,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebc10,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebc18,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x21 + 0x91a) = 1;
  if ((int)unaff_w19 < 0) {
    return;
  }
  if (*(long *)(unaff_x20 + 0x110) != 0) {
    uVar9 = FUN_0438e518(*(long *)(unaff_x20 + 0x110),unaff_w19,DAT_083ebb70);
    if ((uVar9 & 1) == 0) {
      return;
    }
    if (*(long *)(unaff_x20 + 0x110) != 0) {
      lVar10 = *(long *)(*(long *)(unaff_x20 + 0x110) + 0x10) + (ulong)unaff_w19 * 0x88;
      uVar2 = *(uint *)(lVar10 + 4);
      uVar3 = *(undefined4 *)(lVar10 + 0x60);
      uVar9 = *(ulong *)(lVar10 + 0x70);
      iVar4 = *(int *)(lVar10 + 0x78);
      if (-1 < (int)uVar2) {
        if (*(long *)(unaff_x20 + 0xd0) == 0) goto LAB_06367a00;
        puVar1 = (undefined4 *)(*(long *)(*(long *)(unaff_x20 + 0xd0) + 0x10) + (ulong)uVar2 * 0x40)
        ;
        uVar5 = *puVar1;
        uVar6 = puVar1[3];
        iVar8 = puVar1[1] + -1;
        if (iVar8 == 0) {
          if (*(long *)(unaff_x20 + 0xe0) == 0) goto LAB_06367a00;
          uVar12 = *(ulong *)(puVar1 + 7);
          iVar8 = puVar1[9];
          uVar11 = *(undefined8 *)(puVar1 + 0xb);
          iVar7 = puVar1[0xd];
          FUN_042a5698(*(long *)(unaff_x20 + 0xe0),uVar6,DAT_083eb150);
          if (*(long *)(unaff_x20 + 0xe8) == 0) goto LAB_06367a00;
          FUN_042a5698(*(long *)(unaff_x20 + 0xe8),uVar6,DAT_083eb150);
          if (*(long *)(unaff_x20 + 0xf0) == 0) goto LAB_06367a00;
          FUN_042a64a4(*(long *)(unaff_x20 + 0xf0),uVar6,DAT_083eb198);
          if (0 < iVar8) {
            if (*(long *)(unaff_x20 + 0xf8) == 0) goto LAB_06367a00;
            FUN_0429c8a4(*(long *)(unaff_x20 + 0xf8),uVar12 & 0xffffffff,
                         *(undefined8 *)(*(long *)(*(long *)(DAT_083eaf70 + 0x20) + 0xc0) + 0x60));
            if (*(long *)(unaff_x20 + 0x100) == 0) goto LAB_06367a00;
            FUN_0429e43c(*(long *)(unaff_x20 + 0x100),uVar12 & 0xffffffff,
                         *(undefined8 *)(*(long *)(*(long *)(DAT_083eaff8 + 0x20) + 0xc0) + 0x60));
          }
          if (0 < iVar7) {
            if (*(long *)(unaff_x20 + 0x108) == 0) goto LAB_06367a00;
            FUN_0429bad8(*(long *)(unaff_x20 + 0x108),uVar11,
                         *(undefined8 *)(*(long *)(*(long *)(DAT_083eaf38 + 0x20) + 0xc0) + 0x60));
          }
          if (*(long *)(unaff_x20 + 0xd0) == 0) goto LAB_06367a00;
          FUN_0438f394(*(long *)(unaff_x20 + 0xd0),uVar2,DAT_083ebbf8);
          if (*(long *)(unaff_x20 + 0xd8) == 0) goto LAB_06367a00;
          FUN_05cad404(*(long *)(unaff_x20 + 0xd8),uVar5,DAT_083e1ae8);
        }
        else {
          puVar1[1] = iVar8;
          puVar1[6] = puVar1[6];
          *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(puVar1 + 4);
        }
      }
      if (*(long *)(unaff_x20 + 0x120) != 0) {
        FUN_042a1b6c(*(long *)(unaff_x20 + 0x120),uVar3,DAT_083eb0e8);
        if (*(long *)(unaff_x20 + 0x128) != 0) {
          FUN_042a5698(*(long *)(unaff_x20 + 0x128),uVar3,DAT_083eb150);
          if (*(long *)(unaff_x20 + 0x130) != 0) {
            FUN_042a5698(*(long *)(unaff_x20 + 0x130),uVar3,DAT_083eb150);
            if (*(long *)(unaff_x20 + 0x138) != 0) {
              FUN_042a64a4(*(long *)(unaff_x20 + 0x138),uVar3,DAT_083eb198);
              if (0 < iVar4) {
                if (*(long *)(unaff_x20 + 0x140) == 0) goto LAB_06367a00;
                FUN_0429bad8(*(long *)(unaff_x20 + 0x140),uVar9 & 0xffffffff,
                             *(undefined8 *)
                              (*(long *)(*(long *)(DAT_083eaf38 + 0x20) + 0xc0) + 0x60));
              }
              if (*(long *)(unaff_x20 + 0x118) != 0) {
                FUN_05cb7290(*(long *)(unaff_x20 + 0x118),unaff_w19,DAT_083e2138);
                if (*(long *)(unaff_x20 + 0x110) != 0) {
                  FUN_0438e430(*(long *)(unaff_x20 + 0x110),unaff_w19,DAT_083ebb78);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_06367a00:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


