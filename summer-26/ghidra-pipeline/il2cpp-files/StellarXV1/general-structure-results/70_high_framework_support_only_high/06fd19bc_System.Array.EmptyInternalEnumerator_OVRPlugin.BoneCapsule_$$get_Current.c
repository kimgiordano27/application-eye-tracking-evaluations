/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BoneCapsule>$$get_Current
ENTRY_POINT: 06fd19bc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 84
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>__get_Current
                (long param_1,int param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  
  if ((DAT_0988efeb & 1) == 0) {
    FUN_04077588(PTR_DAT_092b9ef8);
    DAT_0988efeb = 1;
  }
  if (param_2 < 0) {
    FUN_0768b4c0(0xc,0);
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x18) + 0x18);
  }
  if ((int)uVar1 < param_2) {
    if (*(long *)(param_1 + 0x10) == 0) {
      uVar2 = FUN_06fd0394(param_1,param_2,
                           *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10));
      return uVar2;
    }
    if (*(int *)(*(long *)PTR_DAT_092b9ef8 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar1 = FUN_076103bc(param_2,0);
    FUN_06fd0d34(param_1,uVar1,0,
                 *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x1c0));
  }
  return (ulong)uVar1;
}


