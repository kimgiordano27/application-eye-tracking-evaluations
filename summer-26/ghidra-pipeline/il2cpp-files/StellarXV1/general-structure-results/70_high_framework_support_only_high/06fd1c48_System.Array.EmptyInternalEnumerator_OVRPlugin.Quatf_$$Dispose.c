/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Quatf>$$Dispose
ENTRY_POINT: 06fd1c48
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__Dispose(void)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_05215944();
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc(lVar1);
  }
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (*(long *)(*unaff_x19 + 0x40) != *(long *)(lVar1 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_04077bb0();
  }
  thunk_FUN_040b5044();
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x78);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    FUN_040b1acc(lVar1);
  }
  if ((unaff_x21 != 0) && (lVar1 = thunk_FUN_040b4e00(), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_04077bb0();
  }
  FUN_06fd0474();
  return;
}


