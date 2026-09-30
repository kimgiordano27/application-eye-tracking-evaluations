/*
FUNCTION_NAME: OVRPlugin$$get_rotation
ENTRY_POINT: 02ca9248
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_rotation(void)

{
  byte in_w8;
  long unaff_x29;
  undefined8 uStack0000000000000000;
  byte bStack000000000000000d;
  byte bStack000000000000000e;
  byte bStack000000000000000f;
  
  bStack000000000000000f = in_w8 & 1;
  *(bool *)(*(long *)(unaff_x29 + -8) + 0x42) = bStack000000000000000f == 0;
  bStack000000000000000e = *(byte *)(*(long *)(unaff_x29 + -8) + 0x58) & 1;
  if (bStack000000000000000e != 0) {
    uStack0000000000000000 = 0;
    OVRLipSyncDebugConsole_Clear_m10890ABBC562F45B35035DD7B5A58BA009DFF433();
    OVRLipSyncDebugConsole_ClearTimeout_m87019EC4F6C00C72813563EE683157F637CE98D2
              (0x3fc00000,uStack0000000000000000);
    bStack000000000000000d = *(byte *)(*(long *)(unaff_x29 + -8) + 0x42) & 1;
    if (bStack000000000000000d == 0) {
      OVRLipSyncDebugConsole_Log_m2353FB6DB33D2796707D1890C28EB208F93CF1D5
                (*(undefined8 *)
                  Method_InitGame_<CargarEscena>d__137_System_Collections_IEnumerator_Reset__,0);
    }
    else {
      OVRLipSyncDebugConsole_Log_m2353FB6DB33D2796707D1890C28EB208F93CF1D5
                (*(undefined8 *)
                  Method_InitGame_<ActivarCamaraConDelay>d__114_System_Collections_IEnumerator_Reset__
                 ,0);
    }
  }
  return;
}


