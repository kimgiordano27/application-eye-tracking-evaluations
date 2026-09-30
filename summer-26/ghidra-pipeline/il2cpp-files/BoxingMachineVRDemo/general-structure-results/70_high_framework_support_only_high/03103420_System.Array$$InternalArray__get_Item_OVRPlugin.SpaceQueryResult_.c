/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 03103420
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__get_Item<OVRPlugin_SpaceQueryResult>
          (long *param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000008 = 0;
  uVar1 = FUN_0501f6a4(param_1,0);
  if (param_2 < uVar1) {
    memcpy(&stack0x00000008,
           (void *)((long)param_1 + (ulong)*(uint *)(*param_1 + 0x104) * (long)(int)param_2 + 0x20),
           (ulong)*(uint *)(*param_1 + 0x104));
    return uStack0000000000000008;
  }
  thunk_FUN_02dc61f4(PTR_DAT_06764080);
  uVar2 = thunk_FUN_02d9d534();
  uVar3 = thunk_FUN_02dc61f4(PTR_DAT_0675e7b8);
  FUN_04f7ef3c(uVar2,uVar3,0);
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar2,param_3);
}


