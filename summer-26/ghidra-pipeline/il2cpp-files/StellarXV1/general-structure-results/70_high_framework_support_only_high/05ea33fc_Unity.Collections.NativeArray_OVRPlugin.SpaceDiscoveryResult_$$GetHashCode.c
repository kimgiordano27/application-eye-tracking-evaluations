/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$GetHashCode
ENTRY_POINT: 05ea33fc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__GetHashCode(long param_1)

{
  long lVar1;
  undefined8 *unaff_x19;
  long *unaff_x20;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  thunk_FUN_040ec700(*(long *)(lVar1 + 0xb8) + 0x18);
  FUN_05217a68(*unaff_x19,unaff_x19[1],*(undefined8 *)PTR_DAT_092ba5e8);
                    /* WARNING: Could not recover jumptable at 0x05ea3454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x20 + 0x188))();
  return;
}


