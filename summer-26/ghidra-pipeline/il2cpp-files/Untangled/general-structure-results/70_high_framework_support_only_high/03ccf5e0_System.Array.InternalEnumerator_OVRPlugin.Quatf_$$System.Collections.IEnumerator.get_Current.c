/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Quatf>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 03ccf5e0
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_InternalEnumerator<OVRPlugin_Quatf>__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  uint uVar1;
  uint in_w9;
  long lVar2;
  int *piVar3;
  uint in_w11;
  undefined4 unaff_w20;
  undefined8 unaff_x23;
  undefined8 unaff_x25;
  long unaff_x26;
  long unaff_x27;
  
  uVar1 = (uint)param_1;
                    /* try { // try from 03ccf5e0 to 03dcf5e3 has its CatchHandler @ 03ccf7c0 */
                    /* try { // try from 03ccf5e4 to 03dcf5ef has its CatchHandler @ 03ccf7c4 */
  if ((uVar1 < in_w9) &&
     (*(undefined4 *)(unaff_x26 + 0x28) = *(undefined4 *)(unaff_x27 + param_1 * 0x18 + 0x24),
     uVar1 < *(uint *)(unaff_x27 + 0x18))) {
    lVar2 = unaff_x27 + (long)(int)uVar1 * 0x18;
    *(undefined4 *)(lVar2 + 0x20) = unaff_w20;
    *(undefined8 *)(lVar2 + 0x28) = unaff_x25;
    *(undefined8 *)(lVar2 + 0x30) = unaff_x23;
    lVar2 = *(long *)(unaff_x26 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if ((in_w11 < *(uint *)(lVar2 + 0x18)) && (uVar1 < *(uint *)(unaff_x27 + 0x18))) {
      piVar3 = (int *)(lVar2 + (long)(int)in_w11 * 4 + 0x20);
      *(int *)(unaff_x27 + (long)(int)uVar1 * 0x18 + 0x24) = *piVar3 + -1;
      *piVar3 = uVar1 + 1;
      *(int *)(unaff_x26 + 0x20) = *(int *)(unaff_x26 + 0x20) + 1;
      *(int *)(unaff_x26 + 0x38) = *(int *)(unaff_x26 + 0x38) + 1;
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c8();
}


