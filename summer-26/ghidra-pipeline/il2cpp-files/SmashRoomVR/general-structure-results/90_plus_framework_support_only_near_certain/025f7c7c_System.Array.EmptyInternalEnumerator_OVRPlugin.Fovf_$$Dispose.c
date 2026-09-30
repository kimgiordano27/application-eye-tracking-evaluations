/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Fovf>$$Dispose
ENTRY_POINT: 025f7c7c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Fovf>__Dispose(void)

{
  long lVar1;
  undefined4 unaff_w19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined1 unaff_w23;
  uint unaff_w24;
  long unaff_x25;
  long lVar2;
  
  lVar2 = (long)(int)unaff_w24;
  *(undefined8 *)(unaff_x25 + lVar2 * 8 + 0x20) = unaff_x20;
  thunk_FUN_01b4f09c();
  lVar1 = *(long *)(unaff_x22 + 8);
  if (lVar1 != 0) {
    if (*(uint *)(lVar1 + 0x18) <= unaff_w24) {
LAB_025f7d48:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    *(undefined4 *)(lVar1 + lVar2 * 4 + 0x20) = unaff_w19;
    lVar1 = *(long *)(unaff_x22 + 0x10);
    if (lVar1 != 0) {
      if (*(uint *)(lVar1 + 0x18) <= unaff_w24) goto LAB_025f7d48;
      *(undefined1 *)(lVar1 + lVar2 + 0x20) = unaff_w23;
      lVar1 = *(long *)(unaff_x22 + 0x18);
      if (lVar1 != 0) {
        if (*(uint *)(lVar1 + 0x18) <= unaff_w24) goto LAB_025f7d48;
        *(undefined8 *)(lVar1 + lVar2 * 8 + 0x20) = unaff_x21;
        thunk_FUN_01b4f09c();
        lVar1 = *(long *)(unaff_x22 + 0x28);
        FUN_03ad7678();
        if (lVar1 != 0) {
          FUN_026a7f84(lVar1,0,0,unaff_w24,*(undefined8 *)StringLiteral_3514);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


