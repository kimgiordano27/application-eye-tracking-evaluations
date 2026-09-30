/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetSortedTrackedDeviceIndicesOfClass$$EndInvoke
ENTRY_POINT: 04316f1c
PROGRAM: m3ar-libil2cpp.so
SCORE: 130
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetSortedTrackedDeviceIndicesOfClass__EndInvoke
               (void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  long lVar3;
  undefined8 *unaff_x22;
  
                    /* try { // try from 04316f1c to 04416f1f has its CatchHandler @ 04316fbc */
                    /* try { // try from 04316f20 to 04416f23 has its CatchHandler @ 04316f7c */
                    /* try { // try from 04316f24 to 04416f27 has its CatchHandler @ 04316f78 */
                    /* try { // try from 04316f28 to 04416f2b has its CatchHandler @ 04316fb8 */
                    /* try { // try from 04316f2c to 04416f2f has its CatchHandler @ 04316fb4 */
                    /* try { // try from 04316f30 to 04416f33 has its CatchHandler @ 04316f68 */
  FUN_0432f968();
                    /* try { // try from 04316f34 to 04416f37 has its CatchHandler @ 04316f64 */
                    /* try { // try from 04316f38 to 04416f3b has its CatchHandler @ 04316f60 */
  lVar3 = *(long *)(unaff_x19 + 0x30);
                    /* try { // try from 04316f3c to 04416f3f has its CatchHandler @ 04316fa4 */
  uVar2 = thunk_FUN_0406deb8(*unaff_x22);
                    /* catch() { ... } // from try @ 04316c14 with catch @ 04316f40
                       try { // try from 04316f40 to 04416fdb has its CatchHandler @ 04316974 */
  FUN_051cfa40();
  if (lVar3 != 0) {
    FUN_0432f968(lVar3,uVar2,0);
    lVar3 = *(long *)(unaff_x19 + 0x40);
    uVar2 = thunk_FUN_0406deb8(*unaff_x22);
    FUN_051cfa40();
    puVar1 = PTR_DAT_08f68a30;
    if (lVar3 != 0) {
      FUN_0432f968(lVar3,uVar2,0);
      lVar3 = *(long *)(unaff_x19 + 0x48);
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)puVar1);
      FUN_05329868();
      if (lVar3 != 0) {
        FUN_0432ea14(lVar3,uVar2,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


