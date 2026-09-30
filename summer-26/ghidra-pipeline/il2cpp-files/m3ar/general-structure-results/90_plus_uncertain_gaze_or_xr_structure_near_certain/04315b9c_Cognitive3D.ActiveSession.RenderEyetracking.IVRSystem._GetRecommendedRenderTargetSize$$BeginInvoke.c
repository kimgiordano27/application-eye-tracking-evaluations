/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetRecommendedRenderTargetSize$$BeginInvoke
ENTRY_POINT: 04315b9c
PROGRAM: m3ar-libil2cpp.so
SCORE: 115
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetRecommendedRenderTargetSize__BeginInvoke
               (void)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  undefined8 *unaff_x24;
  
  lVar4 = *(long *)(unaff_x20 + 0x40);
  do {
    lVar2 = FUN_0752a63c(lVar4);
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      uVar5 = *unaff_x24;
      lVar3 = thunk_FUN_0406ddbc(lVar2,uVar5);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04031c0c(lVar2,uVar5);
      }
    }
    lVar2 = FUN_0406a6bc((long *)(unaff_x20 + 0x40),lVar3,lVar4);
    bVar1 = lVar2 != lVar4;
    lVar4 = lVar2;
  } while (bVar1);
  return;
}


