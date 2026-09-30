/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetSortedTrackedDeviceIndicesOfClass$$BeginInvoke
ENTRY_POINT: 04316e54
PROGRAM: m3ar-libil2cpp.so
SCORE: 133
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetSortedTrackedDeviceIndicesOfClass__BeginInvoke
               (void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  long lVar3;
  
  puVar1 = PTR_DAT_08f68b90;
                    /* try { // try from 04316e54 to 04416e6f has its CatchHandler @ 04316f90 */
  if ((*(long *)(unaff_x19 + 0x58) != 0) && (*(long *)(unaff_x19 + 0x48) != 0)) {
                    /* try { // try from 04316e70 to 04416e7b has its CatchHandler @ 04316f8c */
    FUN_0432ed04(*(long *)(unaff_x19 + 0x48),*(undefined1 *)(*(long *)(unaff_x19 + 0x58) + 0x40),0);
    lVar3 = *(long *)(unaff_x19 + 0x20);
                    /* try { // try from 04316e88 to 04416e8f has its CatchHandler @ 04316f88 */
    uVar2 = thunk_FUN_0406deb8(*(undefined8 *)puVar1);
    FUN_051cfa40();
    if (lVar3 != 0) {
                    /* try { // try from 04316ea4 to 04416ec3 has its CatchHandler @ 04316fc4 */
      FUN_0432f968(lVar3,uVar2,0);
      lVar3 = *(long *)(unaff_x19 + 0x28);
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)puVar1);
                    /* try { // try from 04316ed0 to 04416edb has its CatchHandler @ 04316f84 */
      FUN_051cfa40();
                    /* try { // try from 04316edc to 04416f0b has its CatchHandler @ 04316974 */
      if (lVar3 != 0) {
        FUN_0432f968(lVar3,uVar2,0);
        lVar3 = *(long *)(unaff_x19 + 0x38);
        uVar2 = thunk_FUN_0406deb8(*(undefined8 *)puVar1);
                    /* try { // try from 04316f0c to 04416f0f has its CatchHandler @ 04316f98 */
                    /* try { // try from 04316f10 to 04416f13 has its CatchHandler @ 04316f94 */
                    /* try { // try from 04316f14 to 04416f17 has its CatchHandler @ 04316fc0 */
        FUN_051cfa40();
                    /* try { // try from 04316f18 to 04416f1b has its CatchHandler @ 04316f80 */
        if (lVar3 != 0) {
          FUN_0432f968(lVar3,uVar2,0);
          lVar3 = *(long *)(unaff_x19 + 0x30);
          uVar2 = thunk_FUN_0406deb8(*(undefined8 *)puVar1);
          FUN_051cfa40();
          if (lVar3 != 0) {
            FUN_0432f968(lVar3,uVar2,0);
            lVar3 = *(long *)(unaff_x19 + 0x40);
            uVar2 = thunk_FUN_0406deb8(*(undefined8 *)puVar1);
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
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


