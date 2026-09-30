/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$SetTransform
ENTRY_POINT: 052ee7bc
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__SetTransform
               (undefined1 param_1 [16],float param_2,float param_3)

{
  long lVar1;
  undefined4 *puVar2;
  long unaff_x19;
  float unaff_s8;
  float unaff_s10;
  float fVar3;
  
  lVar1 = FUN_066c67b0();
                    /* try { // try from 052ee7c0 to 053ee7c3 has its CatchHandler @ 052ee7d8 */
  if (lVar1 != 0) {
    FUN_066d3ed0(lVar1,0);
    fVar3 = *(float *)(unaff_x19 + 0x34);
                    /* catch() { ... } // from try @ 052ee7c0 with catch @ 052ee7d8 */
    lVar1 = FUN_066c67b0();
    if (lVar1 != 0) {
      FUN_066d3ed0(lVar1,0);
      if (((unaff_s8 * unaff_s10 <= *(float *)(unaff_x19 + 0x44)) &&
          (param_2 * fVar3 <= *(float *)(unaff_x19 + 0x48))) &&
         (param_3 * *(float *)(unaff_x19 + 0x38) <= *(float *)(unaff_x19 + 0x4c))) {
        return;
      }
      lVar1 = FUN_066c67b0();
      if (lVar1 != 0) {
        FUN_066d3f5c(*(undefined4 *)(unaff_x19 + 0x44),*(undefined4 *)(unaff_x19 + 0x48),
                     *(undefined4 *)(unaff_x19 + 0x4c),lVar1,0);
        lVar1 = *(long *)(unaff_x19 + 0x68);
        if (DAT_071babf5 == '\0') {
          FUN_02f07e70(PTR_DAT_06d02c10);
          DAT_071babf5 = '\x01';
        }
        if (lVar1 != 0) {
          puVar2 = *(undefined4 **)(*(long *)PTR_DAT_06d02c10 + 0xb8);
          FUN_06741454(*puVar2,puVar2[1],puVar2[2],lVar1,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


