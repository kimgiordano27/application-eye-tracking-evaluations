/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetRawZeroPoseToStandingAbsoluteTrackingPose$$Invoke
ENTRY_POINT: 04316d4c
PROGRAM: m3ar-libil2cpp.so
SCORE: 194
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose__Invoke
               (void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  
                    /* try { // try from 04316d50 to 04416dab has its CatchHandler @ 04316fb0 */
  FUN_0403162c(PTR_DAT_08f73820);
  FUN_0403162c(PTR_DAT_08f73828);
  FUN_0403162c(PTR_DAT_08f73830);
  FUN_0403162c(PTR_DAT_08f73838);
  FUN_0403162c(PTR_DAT_08f73840);
  FUN_0403162c(PTR_DAT_08f73848);
  *(undefined1 *)(unaff_x20 + 0xe01) = 1;
  if ((*(long *)(unaff_x19 + 0x50) != 0) && (*(long *)(unaff_x19 + 0x20) != 0)) {
    FUN_0432fb34(*(long *)(unaff_x19 + 0x20),*(char *)(*(long *)(unaff_x19 + 0x50) + 0x59) == '\0',0
                 ,0);
    if ((*(long *)(unaff_x19 + 0x50) != 0) && (*(long *)(unaff_x19 + 0x28) != 0)) {
      FUN_0432fb34(*(long *)(unaff_x19 + 0x28),*(char *)(*(long *)(unaff_x19 + 0x50) + 0x58) == '\0'
                   ,0,0);
      if ((*(long *)(unaff_x19 + 0x58) != 0) && (*(long *)(unaff_x19 + 0x30) != 0)) {
        FUN_0432fb34(*(long *)(unaff_x19 + 0x30),*(undefined1 *)(*(long *)(unaff_x19 + 0x58) + 0x3d)
                     ,0,0);
        if ((*(long *)(unaff_x19 + 0x58) != 0) && (*(long *)(unaff_x19 + 0x38) != 0)) {
          FUN_0432fb34(*(long *)(unaff_x19 + 0x38),*(int *)(*(long *)(unaff_x19 + 0x58) + 0x38) != 2
                       ,0,0);
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


