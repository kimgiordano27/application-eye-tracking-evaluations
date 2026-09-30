/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4f>$$Dispose
ENTRY_POINT: 02b5814c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>__Dispose(void)

{
  undefined4 uVar1;
  long lVar2;
  long unaff_x19;
  undefined4 unaff_w24;
  undefined4 *unaff_x25;
  long unaff_x26;
  long unaff_x28;
  uint unaff_w29;
  
  lVar2 = *(long *)(unaff_x19 + 0x18);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (unaff_w29 < *(uint *)(lVar2 + 0x18)) {
    *(undefined4 *)(lVar2 + (ulong)unaff_w29 * 0x28 + 0x24) =
         *(undefined4 *)(unaff_x26 + unaff_x28 * 0x28 + 0x24);
    *unaff_x25 = 0xffffffff;
    uVar1 = *(undefined4 *)(unaff_x19 + 0x24);
    lVar2 = unaff_x26 + unaff_x28 * 0x28;
    *(undefined8 *)(lVar2 + 0x28) = 0;
    *(undefined4 *)(lVar2 + 0x24) = uVar1;
    *(undefined4 *)(unaff_x19 + 0x24) = unaff_w24;
    *(ulong *)(unaff_x19 + 0x28) =
         CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                  (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


