/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector2f>$$get_Current
ENTRY_POINT: 0291a740
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void System_Array_InternalEnumerator<OVRPlugin_Vector2f>__get_Current(void)

{
  long lVar1;
  byte in_w8;
  long unaff_x19;
  int unaff_w21;
  int unaff_w22;
  int unaff_w24;
  int unaff_w25;
  
  while( true ) {
    if ((in_w8 & 1) == 0) {
      FUN_01ae9e74();
    }
    System_Array_InternalEnumerator<OVRPlugin_Vector2f>__System_Collections_IEnumerator_get_Current
              ();
    if (unaff_w25 + -1 == 0 || unaff_w25 < 1) break;
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x48);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    in_w8 = *(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    unaff_w25 = unaff_w25 + -1;
  }
  if (1 < unaff_w24) {
    do {
      lVar1 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01ae9e74();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x48);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01ae9e74();
      }
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_01ae9e74();
      }
      FUN_0291a014();
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_01ae9e74();
      }
      System_Array_InternalEnumerator<OVRPlugin_Vector2f>__System_Collections_IEnumerator_get_Current
                ();
      unaff_w21 = unaff_w21 + -1;
    } while (2 < (unaff_w21 - unaff_w22) + 2);
  }
  return;
}


