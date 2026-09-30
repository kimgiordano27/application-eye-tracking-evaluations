/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.AppPerfFrameStats>$$Dispose
ENTRY_POINT: 06ad7d24
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_AppPerfFrameStats>__Dispose(void)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x21;
  undefined4 unaff_w22;
  
  uVar1 = FUN_06ad82a0();
  if ((int)uVar1 < 0) {
    return 0;
  }
  plVar2 = (long *)FUN_041d3b08(*(undefined8 *)
                                 (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x120));
  lVar4 = *(long *)(unaff_x21 + 0x18);
  if (lVar4 != 0) {
    if (*(uint *)(lVar4 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    if (plVar2 != (long *)0x0) {
      uVar3 = (**(code **)(*plVar2 + 0x1b8))
                        (plVar2,*(undefined4 *)(lVar4 + (ulong)uVar1 * 0x18 + 0x30),unaff_w22,
                         *(undefined8 *)(*plVar2 + 0x1c0));
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      FUN_06ad9038();
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


