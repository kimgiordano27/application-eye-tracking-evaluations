/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._ReleaseInputFocus$$BeginInvoke
ENTRY_POINT: 04319168
PROGRAM: m3ar-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__ReleaseInputFocus__BeginInvoke(void)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x19;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 *unaff_x22;
  long *unaff_x23;
  
  if (unaff_x20 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04031884();
  }
  lVar1 = *unaff_x23;
  lVar3 = *(long *)(unaff_x19 + 0x28);
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_0408f364();
    lVar1 = *unaff_x23;
  }
  puVar2 = *(undefined8 **)(lVar1 + 0xb8);
  lVar4 = puVar2[1];
  if (lVar4 == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      puVar2 = *(undefined8 **)(*unaff_x23 + 0xb8);
    }
    uVar5 = *puVar2;
    lVar4 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f73900);
    FUN_0532c238(lVar4,uVar5,*(undefined8 *)PTR_DAT_08f73940,0);
    *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8) = lVar4;
  }
  if (lVar3 != 0) {
    FUN_057d5d8c(lVar3,lVar4,*unaff_x22);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


