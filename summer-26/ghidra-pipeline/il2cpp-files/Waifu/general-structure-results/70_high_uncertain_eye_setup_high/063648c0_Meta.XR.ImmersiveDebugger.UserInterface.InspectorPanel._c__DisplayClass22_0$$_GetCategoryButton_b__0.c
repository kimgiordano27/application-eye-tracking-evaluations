/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel.<>c__DisplayClass22_0$$<GetCategoryButton>b__0
ENTRY_POINT: 063648c0
PROGRAM: Waifu-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel_<>c__DisplayClass22_0__<GetCategoryButton>b__0
               (short param_1)

{
  long lVar1;
  ulong uVar2;
  int unaff_w19;
  long unaff_x20;
  int unaff_w22;
  int unaff_w23;
  ulong unaff_x25;
  ulong unaff_x26;
  
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    if (0 < unaff_w23) {
                    /* try { // try from 063648d4 to 064648db has its CatchHandler @ 06364948 */
      lVar1 = *(long *)(*(long *)(unaff_x20 + 0x60) + 0x10);
      uVar2 = unaff_x25 >> 0x20;
      do {
        *(short *)(lVar1 + (long)(int)uVar2 * 2) = param_1 + 1;
        unaff_w23 = unaff_w23 + -1;
        uVar2 = (ulong)((int)uVar2 + 1);
      } while (unaff_w23 != 0);
    }
    if (0 < unaff_w19) {
      if (*(long *)(unaff_x20 + 0xa8) == 0) goto LAB_0636493c;
      if (0 < unaff_w22) {
        lVar1 = *(long *)(*(long *)(unaff_x20 + 0xa8) + 0x10);
        uVar2 = unaff_x26 >> 0x20;
        do {
          *(short *)(lVar1 + (long)(int)uVar2 * 2) = param_1 + 1;
          unaff_w22 = unaff_w22 + -1;
          uVar2 = (ulong)((int)uVar2 + 1);
        } while (unaff_w22 != 0);
      }
    }
    return;
  }
LAB_0636493c:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


