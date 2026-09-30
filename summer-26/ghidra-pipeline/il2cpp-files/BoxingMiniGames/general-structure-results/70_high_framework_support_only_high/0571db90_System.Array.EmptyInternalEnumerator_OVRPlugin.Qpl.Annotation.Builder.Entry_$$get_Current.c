/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Qpl.Annotation.Builder.Entry>$$get_Current
ENTRY_POINT: 0571db90
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__get_Current
               (long param_1)

{
  long lVar1;
  uint in_w8;
  long unaff_x19;
  undefined4 unaff_w21;
  ulong uVar2;
  long *unaff_x26;
  
  if (0 < (int)in_w8) {
    uVar2 = 0;
    do {
      if (in_w8 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      FUN_0571d37c();
      in_w8 = *(uint *)(param_1 + 0x18);
      uVar2 = uVar2 + 1;
    } while ((long)uVar2 < (long)(int)in_w8);
  }
  lVar1 = *unaff_x26;
  *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar1 = FUN_05db21b8(0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  FUN_054a8104();
  return;
}


