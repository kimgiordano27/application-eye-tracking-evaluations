/*
FUNCTION_NAME: FUN_024520e4
ENTRY_POINT: 024520e4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] FUN_024520e4(void)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  puVar1 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>_Dispose__;
  if ((DAT_037824bd & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>_Dispose__);
    DAT_037824bd = 1;
  }
  auVar3._0_8_ = FUN_0136b208(*(undefined8 *)puVar1);
  if (auVar3._0_8_ != 0) {
    *(long *)(auVar3._0_8_ + 0x10) = auVar3._0_8_;
    *(undefined8 *)(auVar3._0_8_ + 0x18) = 0;
    lVar2 = FUN_0136b208(*(undefined8 *)puVar1);
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x10) = auVar3._0_8_;
      *(long *)(lVar2 + 0x18) = lVar2;
      auVar3._8_8_ = lVar2;
      return auVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


