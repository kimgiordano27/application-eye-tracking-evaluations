/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 02f9ba7c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16]
System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_SpaceDiscoveryResult>(long param_1)

{
  ios_base *this;
  undefined8 uVar1;
  long in_x9;
  long *unaff_x19;
  
  *(uint *)(in_x9 + 0x20) = *(uint *)(in_x9 + 0x20) | 1;
  if ((*(byte *)((long)unaff_x19 + *(long *)(param_1 + -0x18) + 0x24) & 1) == 0) {
    __cxa_end_catch();
    this = (ios_base *)((long)unaff_x19 + *(long *)(*unaff_x19 + -0x18));
    std::__ndk1::ios_base::clear(this,*(uint *)(this + 0x20) | 1);
    return ZEXT816(0xffffffffffffffff) << 0x40;
  }
  uVar1 = __cxa_rethrow();
  __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
  FUN_02ff761c(uVar1);
}


