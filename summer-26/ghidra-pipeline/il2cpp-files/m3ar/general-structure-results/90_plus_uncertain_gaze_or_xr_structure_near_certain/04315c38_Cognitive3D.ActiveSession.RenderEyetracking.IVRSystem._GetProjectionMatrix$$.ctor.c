/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetProjectionMatrix$$.ctor
ENTRY_POINT: 04315c38
PROGRAM: m3ar-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetProjectionMatrix___ctor(void)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x21;
  long lVar5;
  undefined8 uVar6;
  
  FUN_0403162c();
  *(undefined1 *)(unaff_x21 + 0xdee) = 1;
  puVar1 = PTR_DAT_08f73740;
  lVar5 = *(long *)(unaff_x20 + 0x40);
  do {
    lVar3 = FUN_0752a828(lVar5);
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      uVar6 = *(undefined8 *)puVar1;
      lVar4 = thunk_FUN_0406ddbc(lVar3,uVar6);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04031c0c(lVar3,uVar6);
      }
    }
    lVar3 = FUN_0406a6bc((long *)(unaff_x20 + 0x40),lVar4,lVar5);
    bVar2 = lVar3 != lVar5;
    lVar5 = lVar3;
  } while (bVar2);
  return;
}


