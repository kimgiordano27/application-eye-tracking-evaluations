/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.GizmoManagerForAddon$$get_TelemetryAnnotation
ENTRY_POINT: 028f0354
PROGRAM: sharks-libil2cpp.so
SCORE: 82
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_GizmoManagerForAddon__get_TelemetryAnnotation(void)

{
  long lVar1;
  long *unaff_x19;
  undefined8 unaff_x20;
  
  lVar1 = FUN_0185daa4();
                    /* try { // try from 028f035c to 029f036b has its CatchHandler @ 028f036c */
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
                    /* catch() { ... } // from try @ 028f02dc with catch @ 028f036c
                       catch() { ... } // from try @ 028f035c with catch @ 028f036c */
                    /* try { // try from 028f0370 to 029f0373 has its CatchHandler @ 028f037c */
  *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x70) = unaff_x20;
                    /* try { // try from 028f0374 to 029f037f has its CatchHandler @ 028f020c */
  lVar1 = *unaff_x19;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 028f0370 with catch @ 028f037c
                        */
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  thunk_FUN_0188fd20(*(long *)(lVar1 + 0xb8) + 0x70);
  lVar1 = *unaff_x19;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  FUN_01b7ebb0(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0xa0));
  return;
}


