/*
FUNCTION_NAME: OVRPlugin$$get_unpremultipliedAlphaLayersSupported
ENTRY_POINT: 0909a5f8
PROGRAM: Hyper-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_unpremultipliedAlphaLayersSupported(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x20;
  undefined8 in_stack_00000008;
  
  FUN_0909de30();
  if (in_stack_00000008._4_4_ == 0) {
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar2 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0ac75968) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 7) * 0x10 + 0x138);
          goto LAB_0909a664;
        }
        uVar3 = uVar3 - 1;
                    /* try { // try from 0909a63c to 0919a63f has its CatchHandler @ 0909a664 */
        piVar4 = piVar4 + 4;
                    /* try { // try from 0909a640 to 0919a68f has its CatchHandler @ 0909a34c */
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_04980e68();
LAB_0909a664:
    (*(code *)*puVar1)();
  }
  return;
}


