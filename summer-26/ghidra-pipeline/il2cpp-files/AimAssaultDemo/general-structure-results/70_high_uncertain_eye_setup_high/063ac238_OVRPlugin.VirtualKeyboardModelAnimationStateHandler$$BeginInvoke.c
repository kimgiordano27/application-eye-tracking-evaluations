/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelAnimationStateHandler$$BeginInvoke
ENTRY_POINT: 063ac238
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_VirtualKeyboardModelAnimationStateHandler__BeginInvoke
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long lVar2;
  long in_x9;
  ulong uVar3;
  int *in_x10;
  int *piVar4;
  long *unaff_x19;
  
                    /* catch() { ... } // from try @ 063abd98 with catch @ 063ac238
                       catch() { ... } // from try @ 063abf6c with catch @ 063ac238 */
                    /* catch() { ... } // from try @ 063abe94 with catch @ 063ac23c
                       catch() { ... } // from try @ 063ac138 with catch @ 063ac23c */
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)(in_x10[4] + 7) * 0x10 + 0x138);
      goto LAB_063ac2bc;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
                    /* catch() { ... } // from try @ 063abdfc with catch @ 063ac240 */
                    /* catch() { ... } // from try @ 063abe30 with catch @ 063ac244
                       catch() { ... } // from try @ 063ac134 with catch @ 063ac244
                       catch() { ... } // from try @ 063ac154 with catch @ 063ac244 */
                    /* catch() { ... } // from try @ 063abdcc with catch @ 063ac248
                       catch() { ... } // from try @ 063ac124 with catch @ 063ac248
                       catch() { ... } // from try @ 063ac148 with catch @ 063ac248 */
  puVar1 = (undefined8 *)FUN_0377596c();
LAB_063ac2bc:
                    /* try { // try from 063ac2c0 to 064ac2f7 has its CatchHandler @ 063ac384 */
  (*(code *)*puVar1)();
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar2 = *unaff_x19;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_07db6c00) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 7) * 0x10 + 0x138);
        goto LAB_063ac39c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_0377596c();
LAB_063ac39c:
                    /* WARNING: Could not recover jumptable at 0x063ac3c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)();
  return;
}


