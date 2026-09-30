/*
FUNCTION_NAME: FUN_05ea26e0
ENTRY_POINT: 05ea26e0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 FUN_05ea26e0(long param_1,undefined4 param_2,long param_3)

{
  if ((DAT_0988ba1c & 1) == 0) {
    FUN_04077588(PTR_DAT_092ba5c0);
    DAT_0988ba1c = 1;
  }
  if ((*(ushort *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__get_Item(param_1,param_2);
  if (*(char *)(param_1 + 0x20) == '\0') {
    if (*(int *)(*(long *)PTR_DAT_092ba5c0 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_07700efc(0);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_0758fee0(*(long *)(param_1 + 0x30),0);
  }
  return *(undefined8 *)(param_1 + 0x28);
}


