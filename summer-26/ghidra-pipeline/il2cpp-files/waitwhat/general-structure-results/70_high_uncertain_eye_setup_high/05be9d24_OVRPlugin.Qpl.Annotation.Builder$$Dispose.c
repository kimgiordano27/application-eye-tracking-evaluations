/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Dispose
ENTRY_POINT: 05be9d24
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin_Qpl_Annotation_Builder__Dispose(ulong param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  undefined4 *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_03188a78(PTR_DAT_07113448);
    *(undefined1 *)(unaff_x22 + 0xd45) = 1;
  }
  uVar1 = *unaff_x20;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar2 = FUN_05be97b0(uVar1);
  lVar3 = *(long *)(param_2 + 0x158);
  if (lVar3 != 0) {
    if (uVar2 < *(uint *)(lVar3 + 0x18)) {
      return *(undefined4 *)(lVar3 + (long)(int)uVar2 * 4 + 0x20);
    }
                    /* WARNING: Subroutine does not return */
    FUN_03188ce0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


