/*
FUNCTION_NAME: OVRPlugin.OVRP_1_79_0$$ovrp_QplMarkerStart
ENTRY_POINT: 0316989c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_OVRP_1_79_0__ovrp_QplMarkerStart(void)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0x97) = 1;
  if (unaff_x19 == (long *)0x0) {
    *(undefined8 *)(unaff_x20 + 0x118) = 0;
    plVar2 = (long *)0x0;
  }
  else {
                    /* try { // try from 031698a8 to 032698b3 has its CatchHandler @ 03169b00 */
                    /* try { // try from 031698b4 to 032698b7 has its CatchHandler @ 03169b34 */
    lVar3 = *(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
                    /* try { // try from 031698b8 to 032698bb has its CatchHandler @ 03169be0 */
                    /* try { // try from 031698bc to 032698bf has its CatchHandler @ 03169b18 */
    bVar1 = *(byte *)(lVar3 + 0x130);
                    /* try { // try from 031698c0 to 032698c3 has its CatchHandler @ 03169b2c */
                    /* try { // try from 031698c4 to 032698c7 has its CatchHandler @ 03169b0c */
    if (*(byte *)(*unaff_x19 + 0x130) < bVar1) {
                    /* try { // try from 031698c8 to 032698df has its CatchHandler @ 03169b10 */
      plVar2 = (long *)0x0;
    }
    else {
                    /* try { // try from 031698e0 to 032698e7 has its CatchHandler @ 03169afc */
                    /* try { // try from 031698ec to 032698ff has its CatchHandler @ 03169af8 */
      plVar2 = unaff_x19;
      if (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != lVar3) {
        plVar2 = (long *)0x0;
      }
    }
    *(long **)(unaff_x20 + 0x118) = plVar2;
                    /* try { // try from 03169904 to 03269957 has its CatchHandler @ 03169af4 */
    if (*(byte *)(*unaff_x19 + 0x130) < bVar1) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = unaff_x19;
      if (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != lVar3) {
        plVar2 = (long *)0x0;
      }
    }
  }
  thunk_FUN_01b4f09c(unaff_x20 + 0x118,plVar2);
  *(long **)(unaff_x20 + 0x120) = unaff_x19;
  thunk_FUN_01b4f09c(unaff_x20 + 0x120);
  return;
}


