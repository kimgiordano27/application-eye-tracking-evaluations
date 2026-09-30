/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.ProxyCameraRig$$SearchForCamera
ENTRY_POINT: 06366dc0
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


int Meta_XR_ImmersiveDebugger_UserInterface_ProxyCameraRig__SearchForCamera(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 extraout_var;
  undefined4 extraout_w1;
  long unaff_x19;
  undefined4 uVar3;
  long unaff_x20;
  undefined4 unaff_w21;
  long lVar4;
  ulong unaff_x22;
  ulong uVar5;
  int unaff_w23;
  undefined4 unaff_w24;
  ulong unaff_x25;
  undefined4 unaff_w26;
  undefined4 unaff_w27;
  undefined4 unaff_w28;
  undefined4 uVar6;
  long unaff_x29;
  undefined4 in_stack_000000b8;
  undefined4 uStack00000000000000c0;
  undefined4 uStack00000000000000c4;
  undefined8 in_stack_00000148;
  
  FUN_042a5368();
  if (*(long *)(unaff_x19 + 0x130) != 0) {
    FUN_042a5368(*(long *)(unaff_x19 + 0x130),unaff_w21,*(undefined8 *)(unaff_x20 + 0x138));
    if (*(long *)(unaff_x19 + 0x138) != 0) {
      FUN_042a6174(*(long *)(unaff_x19 + 0x138),unaff_w21,*(undefined8 *)(unaff_x29 + 0x188));
      if ((unaff_x22 & 1) == 0) {
        uVar3 = 0;
        uVar6 = 0;
      }
      else {
        if (*(long *)(unaff_x19 + 0x140) == 0) goto LAB_06366fa8;
        FUN_0429b7c4(*(long *)(unaff_x19 + 0x140),unaff_w27,DAT_083eaf28);
        uVar6 = extraout_var;
        uVar3 = extraout_w1;
      }
      if (DAT_086d7cc9 == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        DAT_086d7cc9 = '\x01';
      }
      if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
        FUN_033b9870();
      }
      lVar4 = *(long *)(unaff_x19 + 0x110);
      memcpy(&stack0x00000010,&stack0x00000060,0x50);
      uVar1 = DAT_083ebb60;
      if (lVar4 != 0) {
        in_stack_000000b8 = in_stack_00000148._4_4_;
        uStack00000000000000c4 = 0;
        uStack00000000000000c0 = unaff_w28;
                    /* try { // try from 06366ec8 to 06466ecf has its CatchHandler @ 06366f08 */
        memcpy(&stack0x000000c8,&stack0x00000010,0x50);
                    /* try { // try from 06366ee8 to 06466eef has its CatchHandler @ 06366efc */
        iVar2 = FUN_0438e27c(lVar4,&stack0x000000b8,uVar1);
                    /* try { // try from 06366ef4 to 06466ef7 has its CatchHandler @ 06366f04 */
                    /* try { // try from 06366ef8 to 06466efb has its CatchHandler @ 06366f00 */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06366ee8 with catch @ 06366efc
                       try { // try from 06366efc to 06466f17 has its CatchHandler @ 06366d74 */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06366ef8 with catch @ 06366f00
                        */
        lVar4 = FUN_03398a84(DAT_083d8ee0);
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06366ef4 with catch @ 06366f04
                        */
        if (lVar4 != 0) {
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06366ec8 with catch @ 06366f08
                        */
          uVar5 = unaff_x25 >> 0x20;
          *(int *)(lVar4 + 0x20) = unaff_w23;
          *(undefined4 *)(lVar4 + 0x24) = uVar6;
                    /* try { // try from 06366f18 to 06466f1b has its CatchHandler @ 06366f58 */
                    /* try { // try from 06366f1c to 06466f5f has its CatchHandler @ 06366d74 */
          *(undefined4 *)(lVar4 + 0x18) = unaff_w26;
          *(int *)(lVar4 + 0x1c) = (int)(unaff_x25 >> 0x20);
          *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) & 0xfffffffe;
          *(undefined4 *)(lVar4 + 0x14) = unaff_w24;
          *(undefined4 *)(lVar4 + 0x28) = uVar3;
          if (*(long *)(unaff_x19 + 0x118) != 0) {
            FUN_05cb6720(*(long *)(unaff_x19 + 0x118),iVar2,lVar4,2,
                         *(undefined8 *)(*(long *)(*(long *)(DAT_083e2128 + 0x20) + 0xc0) + 0x110));
                    /* catch() { ... } // from try @ 06366f18 with catch @ 06366f58 */
            if (*(long *)(unaff_x19 + 0x120) != 0) {
                    /* try { // try from 06366f60 to 06466f67 has its CatchHandler @ 06366f68 */
              if (0 < unaff_w23) {
                lVar4 = *(long *)(*(long *)(unaff_x19 + 0x120) + 0x10);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06366f60 with catch @ 06366f68
                        */
                do {
                  *(int *)(lVar4 + (long)(int)uVar5 * 4) = iVar2 + 1;
                  unaff_w23 = unaff_w23 + -1;
                  uVar5 = (ulong)((int)uVar5 + 1);
                } while (unaff_w23 != 0);
              }
              return iVar2;
            }
          }
        }
      }
    }
  }
LAB_06366fa8:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


