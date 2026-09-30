/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetSortedTrackedDeviceIndicesOfClass$$.ctor
ENTRY_POINT: 04316db4
PROGRAM: m3ar-libil2cpp.so
SCORE: 119
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetSortedTrackedDeviceIndicesOfClass___ctor
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  int in_w8;
  long unaff_x19;
  long lVar3;
  
  FUN_0432fb34(param_1,in_w8 == 0,param_3,0);
  if ((*(long *)(unaff_x19 + 0x50) != 0) && (*(long *)(unaff_x19 + 0x28) != 0)) {
                    /* try { // try from 04316dd4 to 04416de3 has its CatchHandler @ 04316f4c */
    FUN_0432fb34(*(long *)(unaff_x19 + 0x28),*(char *)(*(long *)(unaff_x19 + 0x50) + 0x58) == '\0',0
                 ,0);
    if ((*(long *)(unaff_x19 + 0x58) != 0) && (*(long *)(unaff_x19 + 0x30) != 0)) {
                    /* try { // try from 04316e00 to 04416e0b has its CatchHandler @ 04316fb0 */
      FUN_0432fb34(*(long *)(unaff_x19 + 0x30),*(undefined1 *)(*(long *)(unaff_x19 + 0x58) + 0x3d),0
                   ,0);
      if ((*(long *)(unaff_x19 + 0x58) != 0) && (*(long *)(unaff_x19 + 0x38) != 0)) {
                    /* try { // try from 04316e28 to 04416e2b has its CatchHandler @ 04316f48 */
                    /* try { // try from 04316e2c to 04416e33 has its CatchHandler @ 04316fa0 */
        FUN_0432fb34(*(long *)(unaff_x19 + 0x38),*(int *)(*(long *)(unaff_x19 + 0x58) + 0x38) != 2,0
                     ,0);
                    /* try { // try from 04316e34 to 04416e3f has its CatchHandler @ 04316f9c */
        if ((*(long *)(unaff_x19 + 0x58) != 0) && (*(long *)(unaff_x19 + 0x40) != 0)) {
          FUN_0432fb34(*(long *)(unaff_x19 + 0x40),
                       *(undefined1 *)(*(long *)(unaff_x19 + 0x58) + 0x35),0,0);
          puVar1 = PTR_DAT_08f68b90;
          if ((*(long *)(unaff_x19 + 0x58) != 0) && (*(long *)(unaff_x19 + 0x48) != 0)) {
            FUN_0432ed04(*(long *)(unaff_x19 + 0x48),
                         *(undefined1 *)(*(long *)(unaff_x19 + 0x58) + 0x40),0);
            lVar3 = *(long *)(unaff_x19 + 0x20);
            uVar2 = thunk_FUN_0406deb8(*(undefined8 *)puVar1);
            FUN_051cfa40();
            if (lVar3 != 0) {
              FUN_0432f968(lVar3,uVar2,0);
              lVar3 = *(long *)(unaff_x19 + 0x28);
              uVar2 = thunk_FUN_0406deb8(*(undefined8 *)puVar1);
              FUN_051cfa40();
              if (lVar3 != 0) {
                FUN_0432f968(lVar3,uVar2,0);
                lVar3 = *(long *)(unaff_x19 + 0x38);
                uVar2 = thunk_FUN_0406deb8(*(undefined8 *)puVar1);
                FUN_051cfa40();
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
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


