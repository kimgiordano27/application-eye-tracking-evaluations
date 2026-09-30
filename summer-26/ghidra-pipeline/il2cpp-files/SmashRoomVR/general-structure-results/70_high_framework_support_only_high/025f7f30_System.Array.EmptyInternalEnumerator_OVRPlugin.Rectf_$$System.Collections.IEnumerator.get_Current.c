/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Rectf>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 025f7f30
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Rectf>__System_Collections_IEnumerator_get_Current
               (void)

{
  undefined8 *puVar1;
  long lVar2;
  long *unaff_x19;
  long lVar3;
  uint unaff_w24;
  
  FUN_026a7f70();
  lVar2 = *unaff_x19;
  if (lVar2 != 0) {
    if (unaff_w24 < *(uint *)(lVar2 + 0x18)) {
      lVar3 = (long)(int)unaff_w24;
      puVar1 = (undefined8 *)(lVar2 + lVar3 * 8 + 0x20);
      *puVar1 = 0;
      thunk_FUN_01b4f09c(puVar1,0);
      lVar2 = unaff_x19[1];
      if (lVar2 == 0) goto LAB_025f7fd8;
      if (unaff_w24 < *(uint *)(lVar2 + 0x18)) {
        *(undefined4 *)(lVar2 + lVar3 * 4 + 0x20) = 0;
        lVar2 = unaff_x19[2];
        if (lVar2 == 0) goto LAB_025f7fd8;
        if (unaff_w24 < *(uint *)(lVar2 + 0x18)) {
          *(undefined1 *)(lVar2 + lVar3 + 0x20) = 0;
          lVar2 = unaff_x19[3];
          if (lVar2 == 0) goto LAB_025f7fd8;
          if (unaff_w24 < *(uint *)(lVar2 + 0x18)) {
            puVar1 = (undefined8 *)(lVar2 + lVar3 * 8 + 0x20);
            *puVar1 = 0;
            thunk_FUN_01b4f09c(puVar1,0);
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b48180();
  }
LAB_025f7fd8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


