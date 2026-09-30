/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_UpdateInsightPassthroughGeometryTransform
ENTRY_POINT: 076e70a0
PROGRAM: m3ar-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_63_0__ovrp_UpdateInsightPassthroughGeometryTransform(void)

{
  byte bVar1;
  long *plVar2;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_0403162c();
  *(undefined1 *)(unaff_x21 + 0x2d5) = 1;
  if (unaff_x19 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_08f65598 + 0x130);
    if (bVar1 <= *(byte *)(*unaff_x19 + 0x130)) {
      plVar2 = unaff_x19;
      if (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)PTR_DAT_08f65598) {
        plVar2 = (long *)0x0;
      }
      goto LAB_076e70ec;
    }
  }
  plVar2 = (long *)0x0;
LAB_076e70ec:
  *(long **)(unaff_x20 + 0x40) = plVar2;
  *(long **)(unaff_x20 + 0x48) = unaff_x19;
                    /* try { // try from 076e70f0 to 077e70f3 has its CatchHandler @ 076e8184 */
                    /* try { // try from 076e70f4 to 077e7207 has its CatchHandler @ 076e699c */
  return;
}


