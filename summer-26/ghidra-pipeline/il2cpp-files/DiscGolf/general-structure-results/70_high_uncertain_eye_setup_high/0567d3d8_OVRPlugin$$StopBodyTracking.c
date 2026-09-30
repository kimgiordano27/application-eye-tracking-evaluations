/*
FUNCTION_NAME: OVRPlugin$$StopBodyTracking
ENTRY_POINT: 0567d3d8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__StopBodyTracking(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *unaff_x19;
  long *unaff_x23;
  
  if (*(long *)(param_1 + 8) != 0) {
    if ((*(int *)(*(long *)(param_1 + 8) + 0x24) == 1) &&
       (uVar1 = FUN_056a09f4(0), (uVar1 & 1) == 0)) {
                    /* try { // try from 0567d4dc to 0577d4df has its CatchHandler @ 0567d8c0 */
                    /* try { // try from 0567d4e0 to 0577d4ef has its CatchHandler @ 0567d8f0 */
      return;
    }
    lVar2 = *(long *)(*unaff_x23 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18();
    }
                    /* try { // try from 0567d42c to 0577d42f has its CatchHandler @ 0567d8c8 */
                    /* try { // try from 0567d430 to 0577d43f has its CatchHandler @ 0567d8f8 */
    if (*(long *)(*(long *)(lVar2 + 0xb8) + 8) != 0) {
      FUN_0567d4e8();
      lVar2 = *(long *)(*unaff_x23 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02dcfd18();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
                    /* try { // try from 0567d458 to 0577d45b has its CatchHandler @ 0567d8e4 */
                    /* try { // try from 0567d45c to 0577d467 has its CatchHandler @ 0567d920 */
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02dcfd18();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
                    /* try { // try from 0567d470 to 0577d473 has its CatchHandler @ 0567d8c4 */
      if (lVar2 != 0) {
                    /* try { // try from 0567d474 to 0577d483 has its CatchHandler @ 0567d8f4 */
        if (*(long *)(lVar2 + 0x1b0) == 0) {
          return;
        }
        lVar2 = *(long *)(*unaff_x23 + 0x20);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_02dcfd18();
        }
                    /* try { // try from 0567d494 to 0577d497 has its CatchHandler @ 0567d8e0 */
                    /* try { // try from 0567d498 to 0577d4a3 has its CatchHandler @ 0567d91c */
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_02dcfd18();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
        if (lVar2 != 0) {
                    /* try { // try from 0567d4c0 to 0577d4c3 has its CatchHandler @ 0567d8d8 */
                    /* try { // try from 0567d4c4 to 0577d4d3 has its CatchHandler @ 0567d918 */
          *unaff_x19 = *(undefined8 *)(lVar2 + 0x1b0);
          LeanTween__value();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


