/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._ApplyTransform$$Invoke
ENTRY_POINT: 04317108
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


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__ApplyTransform__Invoke(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  undefined8 *unaff_x22;
  
  FUN_051cfa40();
  if (unaff_x20 != 0) {
    FUN_0432fa18();
    lVar3 = *(long *)(unaff_x19 + 0x38);
    uVar2 = thunk_FUN_0406deb8(*unaff_x22);
    FUN_051cfa40();
    puVar1 = PTR_DAT_08f68a30;
    if (lVar3 != 0) {
      FUN_0432fa18(lVar3,uVar2,0);
      lVar3 = *(long *)(unaff_x19 + 0x48);
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)puVar1);
      FUN_05329868();
      if (lVar3 != 0) {
        FUN_0432eac4(lVar3,uVar2,0);
        *(undefined8 *)(unaff_x19 + 0x50) = 0;
        *(undefined8 *)(unaff_x19 + 0x58) = 0;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


