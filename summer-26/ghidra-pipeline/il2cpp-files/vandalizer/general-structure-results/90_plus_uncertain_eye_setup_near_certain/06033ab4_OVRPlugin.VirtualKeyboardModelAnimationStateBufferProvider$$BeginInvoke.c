/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelAnimationStateBufferProvider$$BeginInvoke
ENTRY_POINT: 06033ab4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider__BeginInvoke
               (ulong param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  long unaff_x21;
  
                    /* try { // try from 06033ab8 to 06133abf has its CatchHandler @ 06033ad4 */
  if ((param_1 & 1) == 0) {
                    /* try { // try from 06033ac0 to 06133acb has its CatchHandler @ 06033774 */
    FUN_031f20f4(PTR_DAT_075f2fc8);
                    /* try { // try from 06033acc to 06133ad3 has its CatchHandler @ 06033ad4 */
    *(undefined1 *)(unaff_x21 + 0xc0e) = 1;
  }
  plVar5 = *(long **)(param_2 + 0x28);
                    /* catch() { ... } // from try @ 06033a60 with catch @ 06033ad4
                       catch() { ... } // from try @ 06033ab8 with catch @ 06033ad4
                       catch() { ... } // from try @ 06033acc with catch @ 06033ad4 */
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
                    /* try { // try from 06033ad8 to 06133bdb has its CatchHandler @ 06033ad8
                       catch() { ... } // from try @ 06033ad8 with catch @ 06033ad8
                       catch() { ... } // from try @ 06033c6c with catch @ 06033ad8
                       catch() { ... } // from try @ 06033d34 with catch @ 06033ad8
                       catch() { ... } // from try @ 06033d70 with catch @ 06033ad8
                       catch() { ... } // from try @ 06033da0 with catch @ 06033ad8
                       catch() { ... } // from try @ 06033dd8 with catch @ 06033ad8
                       catch() { ... } // from try @ 06033df4 with catch @ 06033ad8
                       catch() { ... } // from try @ 06033e24 with catch @ 06033ad8 */
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_075f2fc8) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 0x12) * 0x10 + 0x138);
        goto OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider__EndInvoke;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_0322c1e8(plVar5,*(long *)PTR_DAT_075f2fc8,0x12);
OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider__EndInvoke:
                    /* WARNING: Could not recover jumptable at 0x06033b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5);
  return;
}


