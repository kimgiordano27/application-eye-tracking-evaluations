/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.SpaceQueryResult>$$.cctor
ENTRY_POINT: 06f610f0
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


void System_EmptyArray<OVRPlugin_SpaceQueryResult>___cctor(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int in_stack_00000058;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_041676cc(param_1);
  }
  puVar1 = (undefined8 *)__cxa_begin_catch(param_1);
  uVar2 = thunk_FUN_040dedf8(PTR_DAT_092b8dd8);
  uVar3 = thunk_FUN_040daa88(uVar2,*(undefined8 *)*puVar1);
  if ((uVar3 & 1) != 0) {
    *(undefined8 *)(&stack0x00000050 + (long)in_stack_00000058 * 8) = *puVar1;
    in_stack_00000058 = in_stack_00000058 + 1;
    __cxa_end_catch();
    FUN_0769b160(0);
    return;
  }
  puVar4 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar4 = *puVar1;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar4,&PTR_PTR_08d635d8,0);
}


