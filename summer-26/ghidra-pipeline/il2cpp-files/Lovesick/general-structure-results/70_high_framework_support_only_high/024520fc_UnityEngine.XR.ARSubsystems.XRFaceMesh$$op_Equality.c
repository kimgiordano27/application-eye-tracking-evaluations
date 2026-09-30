/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.XRFaceMesh$$op_Equality
ENTRY_POINT: 024520fc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined1  [16] UnityEngine_XR_ARSubsystems_XRFaceMesh__op_Equality(ulong param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined1 auVar2 [16];
  
  if ((param_1 & 1) == 0) {
                    /* try { // try from 02452100 to 02552107 has its CatchHandler @ 02452a80 */
    thunk_FUN_00d48444(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>_Dispose__);
    *(undefined1 *)(unaff_x19 + 0x4bd) = 1;
  }
  auVar2._0_8_ = FUN_0136b208(*unaff_x20);
  if (auVar2._0_8_ != 0) {
    *(long *)(auVar2._0_8_ + 0x10) = auVar2._0_8_;
    *(undefined8 *)(auVar2._0_8_ + 0x18) = 0;
    lVar1 = FUN_0136b208(*unaff_x20);
    if (lVar1 != 0) {
      *(long *)(lVar1 + 0x10) = auVar2._0_8_;
      *(long *)(lVar1 + 0x18) = lVar1;
      auVar2._8_8_ = lVar1;
      return auVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


