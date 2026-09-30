/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 06032d90
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 84
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong System_Array_EmptyInternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__System_Collections_IEnumerator_Reset
                (long param_1)

{
  uint uVar1;
  ulong uVar2;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  
  if ((*(byte *)(unaff_x22 + 0xb9b) & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08493f90);
    *(undefined1 *)(unaff_x22 + 0xb9b) = 1;
  }
  if (unaff_w21 < 0) {
    FUN_067715f8(0xc,0);
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x18) + 0x18);
  }
  if ((int)uVar1 < unaff_w21) {
    if (*(long *)(param_1 + 0x10) == 0) {
      uVar2 = FUN_060316b0(param_1,unaff_w21,
                           *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10));
      return uVar2;
    }
    if (*(int *)(*(long *)PTR_DAT_08493f90 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar1 = FUN_066ebb10(unaff_w21,0);
    FUN_06032070(param_1,uVar1,0,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x1c8));
  }
  return (ulong)uVar1;
}


