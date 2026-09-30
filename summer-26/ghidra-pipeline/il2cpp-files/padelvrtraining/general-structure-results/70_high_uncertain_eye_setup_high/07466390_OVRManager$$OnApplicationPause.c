/*
FUNCTION_NAME: OVRManager$$OnApplicationPause
ENTRY_POINT: 07466390
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OnApplicationPause(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x20;
  long *plVar5;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  
                    /* catch() { ... } // from try @ 074662c0 with catch @ 07466390 */
                    /* catch() { ... } // from try @ 07466040 with catch @ 07466394 */
                    /* catch() { ... } // from try @ 07466360 with catch @ 07466398 */
  if ((*(byte *)(unaff_x20 + 0x853) & 1) == 0) {
                    /* catch() { ... } // from try @ 07466018 with catch @ 074663a8 */
    FUN_03d2d2b0(PTR_DAT_092208d8);
                    /* catch() { ... } // from try @ 07466354 with catch @ 074663ac */
                    /* catch() { ... } // from try @ 0746628c with catch @ 074663b0 */
    *(undefined1 *)(unaff_x20 + 0x853) = 1;
  }
  plVar5 = *(long **)(param_2 + 0x198);
  if (plVar5 == (long *)0x0) {
    FUN_074605f0(param_2);
  }
  else {
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
                    /* try { // try from 074663cc to 075663cf has its CatchHandler @ 07466458 */
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_092208d8) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_07466420;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_03d8f370(plVar5,*(long *)PTR_DAT_092208d8,0);
LAB_07466420:
    (*(code *)*puVar1)(plVar5,puVar1[1]);
  }
  *(undefined8 *)((long)param_1 + 0x14) = uStack0000000000000014;
  *(ulong *)((long)param_1 + 0xc) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
  param_1[1] = in_stack_00000008;
  *param_1 = in_stack_00000000;
  return;
}


