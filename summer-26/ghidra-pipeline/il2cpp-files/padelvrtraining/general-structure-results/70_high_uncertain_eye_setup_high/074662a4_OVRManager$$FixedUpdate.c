/*
FUNCTION_NAME: OVRManager$$FixedUpdate
ENTRY_POINT: 074662a4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__FixedUpdate(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long in_x9;
  ulong uVar3;
  long *in_x10;
  int *piVar4;
  long *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long *plVar5;
  
  plVar5 = *(long **)(unaff_x22 + 0xbb0);
  if (in_x9 != 0) {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
                    /* try { // try from 074662c0 to 075662cf has its CatchHandler @ 07466390 */
      if (*(long *)(piVar4 + -2) == *in_x10) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_074662ec;
      }
      in_x9 = in_x9 + -1;
      piVar4 = piVar4 + 4;
    } while (in_x9 != 0);
  }
  puVar1 = (undefined8 *)FUN_03d8f370();
LAB_074662ec:
  (*(code *)*puVar1)();
  lVar2 = *unaff_x19;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *plVar5) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_07466348;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_03d8f370();
LAB_07466348:
  (*(code *)*puVar1)();
  if (unaff_x21 != 0) {
    FUN_07462744();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


