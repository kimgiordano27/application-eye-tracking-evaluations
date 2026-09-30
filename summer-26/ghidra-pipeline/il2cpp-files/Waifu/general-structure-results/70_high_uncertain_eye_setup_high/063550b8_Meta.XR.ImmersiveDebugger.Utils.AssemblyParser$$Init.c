/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser$$Init
ENTRY_POINT: 063550b8
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__Init(long param_1)

{
  undefined8 uVar1;
  undefined2 uVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x19;
  undefined4 unaff_w22;
  int unaff_w23;
  ulong unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  long unaff_x27;
  undefined1 auVar5 [16];
  
  if (param_1 != 0) {
    auVar5 = FUN_042a5368(param_1,unaff_w22,DAT_083eb138);
    *(undefined1 (*) [16])(unaff_x27 + 0x4c) = auVar5;
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if (lVar3 != 0) {
      FUN_0405df64(*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x18),unaff_x25 >> 0x20);
      lVar3 = *(long *)(unaff_x19 + 0x30);
      if (lVar3 != 0) {
        FUN_0405d584(*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x18),unaff_x26 >> 0x20);
        lVar3 = *(long *)(unaff_x19 + 0x40);
                    /* try { // try from 0635511c to 06455127 has its CatchHandler @ 0635525c */
        memcpy(&stack0x00000000,&stack0x00000060,0x5c);
        uVar1 = DAT_083ebe60;
        if (lVar3 != 0) {
                    /* try { // try from 06355134 to 06455137 has its CatchHandler @ 06355254 */
          memcpy(&stack0x000000c0,&stack0x00000000,0x5c);
          uVar2 = FUN_04394998(lVar3,&stack0x000000c0,uVar1);
          if (*(long *)(unaff_x19 + 0x28) != 0) {
            if (0 < unaff_w23) {
              lVar3 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x10);
              uVar4 = unaff_x24 >> 0x20;
              do {
                *(undefined2 *)(lVar3 + (long)(int)uVar4 * 2) = uVar2;
                unaff_w23 = unaff_w23 + -1;
                uVar4 = (ulong)((int)uVar4 + 1);
              } while (unaff_w23 != 0);
            }
                    /* try { // try from 06355184 to 0645518b has its CatchHandler @ 06355248 */
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


