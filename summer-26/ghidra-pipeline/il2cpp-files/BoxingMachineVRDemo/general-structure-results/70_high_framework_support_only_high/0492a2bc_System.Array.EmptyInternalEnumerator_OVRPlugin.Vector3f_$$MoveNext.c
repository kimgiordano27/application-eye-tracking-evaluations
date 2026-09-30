/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector3f>$$MoveNext
ENTRY_POINT: 0492a2bc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 84
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong System_Array_EmptyInternalEnumerator<OVRPlugin_Vector3f>__MoveNext(void)

{
  uint uVar1;
  ulong uVar2;
  undefined1 in_w8;
  long unaff_x19;
  int unaff_w21;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x744) = in_w8;
  if (unaff_w21 < 0) {
    FUN_050272e0(0xc,0);
  }
  if (*(long *)(unaff_x19 + 0x18) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(*(long *)(unaff_x19 + 0x18) + 0x18);
  }
  if ((int)uVar1 < unaff_w21) {
    if (*(long *)(unaff_x19 + 0x10) == 0) {
      uVar2 = FUN_04928c00();
      return uVar2;
    }
    if (*(int *)(*(long *)PTR_DAT_067696a8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar1 = FUN_04fa5fec(unaff_w21,0);
    FUN_049295b8();
  }
  return (ulong)uVar1;
}


