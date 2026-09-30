/*
FUNCTION_NAME: OVRManager$$SetColorScaleAndOffset_Internal
ENTRY_POINT: 05cfd0b0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetColorScaleAndOffset_Internal(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long in_x10;
  int *piVar4;
  long *unaff_x19;
  long unaff_x20;
  
  lVar2 = *unaff_x19;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
                    /* try { // try from 05cfd0c4 to 05dfd0cb has its CatchHandler @ 05cfd600 */
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
                    /* try { // try from 05cfd0d0 to 05dfd0d7 has its CatchHandler @ 05cfd604 */
      if (*(long *)(piVar4 + -2) == **(long **)(in_x10 + 0xb30)) {
                    /* try { // try from 05cfd0f4 to 05dfd0fb has its CatchHandler @ 05cfd5e4 */
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_05cfd100;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
                    /* try { // try from 05cfd0e8 to 05dfd0ef has its CatchHandler @ 05cfd5f0 */
  puVar1 = (undefined8 *)FUN_02feb5b8();
LAB_05cfd100:
  (*(code *)*puVar1)();
  if (unaff_x20 == 0) {
                    /* try { // try from 05cfd114 to 05dfd1c3 has its CatchHandler @ 05cfd5d8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fc8594();
}


