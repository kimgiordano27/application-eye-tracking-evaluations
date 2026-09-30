/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetSortedTrackedDeviceIndicesOfClass$$Invoke
ENTRY_POINT: 04316e40
PROGRAM: m3ar-libil2cpp.so
SCORE: 133
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetSortedTrackedDeviceIndicesOfClass__Invoke
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  long lVar3;
  
  if (param_2 != 0) {
    FUN_0432fb34(param_2,*(undefined1 *)(param_1 + 0x35),0,0);
    puVar1 = PTR_DAT_08f68b90;
    if ((*(long *)(unaff_x19 + 0x58) != 0) && (*(long *)(unaff_x19 + 0x48) != 0)) {
      FUN_0432ed04(*(long *)(unaff_x19 + 0x48),*(undefined1 *)(*(long *)(unaff_x19 + 0x58) + 0x40),0
                  );
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
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


