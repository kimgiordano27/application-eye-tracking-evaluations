/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_AddInsightPassthroughSurfaceGeometry
ENTRY_POINT: 076e6f78
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry(ulong param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint unaff_w19;
  long *unaff_x21;
  long unaff_x22;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  
  if ((param_1 & 1) == 0) {
                    /* try { // try from 076e6f80 to 077e6f8f has its CatchHandler @ 076e81c4 */
    FUN_0403162c(PTR_DAT_08fae458);
    *(undefined1 *)(unaff_x22 + 0x2d7) = 1;
  }
  lVar2 = *unaff_x21;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0408f364();
    lVar2 = *unaff_x21;
  }
  lVar2 = **(long **)(lVar2 + 0xb8);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  uVar1 = **(uint **)(lVar2 + 0x10);
  if (param_2 < uVar1) {
    lVar3 = *(long *)(*(uint **)(lVar2 + 0x10) + 4);
                    /* try { // try from 076e6fc8 to 077e6fef has its CatchHandler @ 076e81bc */
    if (((int)lVar3 != 0) && (unaff_w19 < uVar1)) {
      fVar4 = *(float *)(lVar2 + lVar3 * (int)param_2 * 4 + 0x20);
      fVar6 = *(float *)(lVar2 + lVar3 * (int)unaff_w19 * 4 + 0x20);
      if (fVar4 == fVar6) {
        fVar4 = 0.0;
      }
      else {
                    /* try { // try from 076e7008 to 077e701f has its CatchHandler @ 076e8128 */
        fVar5 = (unaff_s8 - fVar4) / (fVar6 - fVar4);
        fVar6 = 1.0;
        if (fVar5 <= 1.0) {
          fVar6 = fVar5;
        }
        fVar4 = 0.0;
        if (0.0 <= fVar5) {
          fVar4 = fVar6;
        }
      }
      if ((int)lVar3 != 1) {
        fVar6 = *(float *)(lVar2 + 0x20 + lVar3 * (int)param_2 * 4 + 4);
        return fVar6 + fVar4 * (*(float *)(lVar2 + 0x20 + lVar3 * (int)unaff_w19 * 4 + 4) - fVar6);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04031894();
}


