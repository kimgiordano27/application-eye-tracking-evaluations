/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Member$$Setup
ENTRY_POINT: 06364e0c
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


void Meta_XR_ImmersiveDebugger_UserInterface_Member__Setup(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined4 unaff_w19;
  long unaff_x20;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  undefined4 unaff_w24;
  ulong unaff_x25;
  undefined8 *unaff_x26;
  int unaff_w29;
  
  uVar1 = *(undefined4 *)(param_1 + 0x40);
                    /* try { // try from 06364e10 to 06464e1b has its CatchHandler @ 06364e54 */
  if (-1 < (int)unaff_x25) {
    if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_063650b8;
    puVar10 = (undefined4 *)(*(long *)(*(long *)(unaff_x20 + 0x18) + 0x10) + unaff_x25 * 0x50);
    uVar2 = *puVar10;
                    /* try { // try from 06364e38 to 06464e3b has its CatchHandler @ 06364e60 */
    uVar3 = puVar10[4];
                    /* try { // try from 06364e40 to 06464e43 has its CatchHandler @ 06364e50 */
                    /* try { // try from 06364e44 to 06464e7f has its CatchHandler @ 0636459c */
    iVar8 = puVar10[1] + -1;
                    /* catch() { ... } // from try @ 06364db0 with catch @ 06364e48 */
                    /* catch() { ... } // from try @ 06364cec with catch @ 06364e4c */
                    /* catch() { ... } // from try @ 06364e40 with catch @ 06364e50 */
                    /* catch() { ... } // from try @ 06364e10 with catch @ 06364e54 */
                    /* catch() { ... } // from try @ 06364dd0 with catch @ 06364e58 */
    uVar7 = puVar10[8];
                    /* catch() { ... } // from try @ 06364ccc with catch @ 06364e5c */
                    /* catch() { ... } // from try @ 06364e38 with catch @ 06364e60 */
                    /* catch() { ... } // from try @ 06364ca8 with catch @ 06364e64 */
    if (iVar8 == 0) {
      if (*(long *)(unaff_x20 + 0x30) == 0) goto LAB_063650b8;
      uVar4 = puVar10[0xc];
      iVar8 = puVar10[0xe];
      uVar5 = puVar10[0x10];
      iVar6 = puVar10[0x12];
      FUN_042a1b6c(*(long *)(unaff_x20 + 0x30),uVar3,DAT_083eb0e8);
      if (*(long *)(unaff_x20 + 0x38) == 0) goto LAB_063650b8;
      FUN_042b3978(*(long *)(unaff_x20 + 0x38),uVar7,DAT_083eb438);
                    /* try { // try from 06364edc to 06464ee3 has its CatchHandler @ 06364f40 */
      if (*(long *)(unaff_x20 + 0x28) == 0) goto LAB_063650b8;
      FUN_042a48a0(*(long *)(unaff_x20 + 0x28),uVar3,DAT_083eb118);
      if (*(long *)(unaff_x20 + 0x48) == 0) goto LAB_063650b8;
                    /* try { // try from 06364efc to 06464eff has its CatchHandler @ 06364f38 */
                    /* try { // try from 06364f08 to 06464f0f has its CatchHandler @ 06364f3c */
      FUN_042a1b6c(*(long *)(unaff_x20 + 0x48),uVar3,DAT_083eb0e8);
                    /* try { // try from 06364f10 to 06464f17 has its CatchHandler @ 06364f2c */
      unaff_x26 = &DAT_083eb000;
      if (0 < iVar8) {
                    /* try { // try from 06364f1c to 06464f1f has its CatchHandler @ 06364f34 */
        if (*(long *)(unaff_x20 + 0x40) == 0) goto LAB_063650b8;
                    /* try { // try from 06364f24 to 06464f27 has its CatchHandler @ 06364f30 */
                    /* try { // try from 06364f28 to 06464f4f has its CatchHandler @ 0636459c */
        FUN_0429e43c(*(long *)(unaff_x20 + 0x40),uVar4,DAT_083eb000);
      }
                    /* catch() { ... } // from try @ 06364f10 with catch @ 06364f2c */
                    /* catch() { ... } // from try @ 06364f24 with catch @ 06364f30 */
                    /* catch() { ... } // from try @ 06364f1c with catch @ 06364f34 */
      if (0 < iVar6) {
                    /* catch() { ... } // from try @ 06364efc with catch @ 06364f38 */
                    /* catch() { ... } // from try @ 06364f08 with catch @ 06364f3c */
        if (*(long *)(unaff_x20 + 0x50) == 0) goto LAB_063650b8;
                    /* catch() { ... } // from try @ 06364edc with catch @ 06364f40 */
        FUN_0429e43c(*(long *)(unaff_x20 + 0x50),uVar5,DAT_083eb000);
      }
                    /* try { // try from 06364f50 to 06464f53 has its CatchHandler @ 06365054 */
      if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_063650b8;
                    /* try { // try from 06364f54 to 0646504b has its CatchHandler @ 0636459c */
      FUN_0438fb20(*(long *)(unaff_x20 + 0x18),unaff_x25 & 0xffffffff,DAT_083ebc38);
      if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_063650b8;
      FUN_05cad404(*(long *)(unaff_x20 + 0x20),uVar2,DAT_083e1ae8);
    }
    else {
                    /* catch() { ... } // from try @ 06364c9c with catch @ 06364e68 */
      puVar10[1] = iVar8;
                    /* catch() { ... } // from try @ 06364c7c with catch @ 06364e6c */
                    /* catch() { ... } // from try @ 06364c5c with catch @ 06364e70 */
      puVar10[7] = puVar10[7];
      *(undefined8 *)(puVar10 + 5) = *(undefined8 *)(puVar10 + 5);
                    /* try { // try from 06364e80 to 06464e83 has its CatchHandler @ 06365060 */
                    /* try { // try from 06364e84 to 06464edb has its CatchHandler @ 0636459c */
      puVar10[0xb] = puVar10[0xb];
      *(undefined8 *)(puVar10 + 9) = *(undefined8 *)(puVar10 + 9);
    }
  }
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    FUN_0429d670(*(long *)(unaff_x20 + 0x60),unaff_w24,DAT_083eafc0);
    if (*(long *)(unaff_x20 + 0x68) != 0) {
      FUN_0429c8a4(*(long *)(unaff_x20 + 0x68),unaff_w24,DAT_083eaf78);
      if (*(long *)(unaff_x20 + 0x70) != 0) {
        FUN_0429c8a4(*(long *)(unaff_x20 + 0x70),unaff_w24,DAT_083eaf78);
        if (*(long *)(unaff_x20 + 0x78) != 0) {
          FUN_0429c8a4(*(long *)(unaff_x20 + 0x78),unaff_w24,DAT_083eaf78);
          if (*(long *)(unaff_x20 + 0x80) != 0) {
            FUN_042a5698(*(long *)(unaff_x20 + 0x80),unaff_w24,DAT_083eb150);
            if (*(long *)(unaff_x20 + 0x88) != 0) {
              FUN_042a8130(*(long *)(unaff_x20 + 0x88),unaff_w24,DAT_083eb210);
              if (*(long *)(unaff_x20 + 0x90) != 0) {
                FUN_0429e43c(*(long *)(unaff_x20 + 0x90),unaff_w23,*unaff_x26);
                if (0 < unaff_w29) {
                  if (*(long *)(unaff_x20 + 0x98) == 0) goto LAB_063650b8;
                  FUN_042a5698(*(long *)(unaff_x20 + 0x98),unaff_w22,DAT_083eb150);
                  if (*(long *)(unaff_x20 + 0xa0) == 0) goto LAB_063650b8;
                  FUN_042a5698(*(long *)(unaff_x20 + 0xa0),unaff_w22,DAT_083eb150);
                    /* catch() { ... } // from try @ 0636495c with catch @ 06365048 */
                    /* try { // try from 0636504c to 0646505f has its CatchHandler @ 06365070 */
                  if (*(long *)(unaff_x20 + 0xa8) == 0) goto LAB_063650b8;
                    /* catch() { ... } // from try @ 06364f50 with catch @ 06365054 */
                  FUN_042a0da0(*(long *)(unaff_x20 + 0xa8),unaff_w22,DAT_083eb0b0);
                }
                    /* catch() { ... } // from try @ 06364e80 with catch @ 06365060
                       try { // try from 06365060 to 06465067 has its CatchHandler @ 0636459c */
                    /* try { // try from 06365068 to 0646506f has its CatchHandler @ 06365070 */
                    /* catch() { ... } // from try @ 0636504c with catch @ 06365070
                       catch() { ... } // from try @ 06365068 with catch @ 06365070 */
                if ((*(long *)(unaff_x20 + 0x10) != 0) &&
                   (lVar9 = FUN_063178b4(*(long *)(unaff_x20 + 0x10),0), lVar9 != 0)) {
                    /* try { // try from 06365074 to 0646511b has its CatchHandler @ 06365074
                       catch() { ... } // from try @ 06365074 with catch @ 06365074
                       catch() { ... } // from try @ 0636513c with catch @ 06365074
                       catch() { ... } // from try @ 0636515c with catch @ 06365074 */
                  FUN_0635a090(lVar9,uVar1,0xffffffff);
                  if (*(long *)(unaff_x20 + 0x58) != 0) {
                    FUN_043902c8(*(long *)(unaff_x20 + 0x58),unaff_w19,DAT_083ebc80);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_063650b8:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


