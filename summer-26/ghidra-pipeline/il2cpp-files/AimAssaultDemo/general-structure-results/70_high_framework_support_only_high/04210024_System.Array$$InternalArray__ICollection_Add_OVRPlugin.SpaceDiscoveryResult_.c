/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 04210024
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__ICollection_Add<OVRPlugin_SpaceDiscoveryResult>
          (undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long in_x9;
  
  uVar1 = thunk_FUN_0379d0fc(*(undefined8 *)(in_x9 + 0x10),*param_1);
  if ((uVar1 & 1) != 0) {
    __cxa_end_catch();
    return 0;
  }
  puVar2 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar2 = *param_2;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar2,&PTR_PTR_078dda18,0);
}


