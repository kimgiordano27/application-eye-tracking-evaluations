/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 02f9bad8
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


basic_istream *
System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_SpaceQueryResult>
          (basic_istream *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  long extraout_x1;
  undefined8 in_stack_00000008;
  
  uVar1 = *(uint *)((ios_base *)(param_1 + *(long *)(*(long *)param_1 + -0x18)) + 0x20) & 0xfffffffd
  ;
  std::__ndk1::ios_base::clear((ios_base *)(param_1 + *(long *)(*(long *)param_1 + -0x18)),uVar1);
  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::sentry::sentry
            ((sentry *)((long)&stack0x00000008 + 4),param_1,true);
  if (in_stack_00000008._4_1_ != '\0') {
    (**(code **)(**(long **)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28) + 0x28))
              (*(long **)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28),param_2,param_3,8);
    uVar2 = uVar1 | 4;
    if (extraout_x1 != -1) {
      uVar2 = uVar1;
    }
    std::__ndk1::ios_base::clear
              ((ios_base *)(param_1 + *(long *)(*(long *)param_1 + -0x18)),
               *(uint *)((ios_base *)(param_1 + *(long *)(*(long *)param_1 + -0x18)) + 0x20) | uVar2
              );
  }
  return param_1;
}


