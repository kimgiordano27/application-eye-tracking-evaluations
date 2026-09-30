/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 0558ccd4
PROGRAM: Hyper-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Add<OVRPlugin_SpaceDiscoveryResult>
               (undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int in_stack_00000048;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_04a6935c(param_1);
  }
  puVar1 = (undefined8 *)__cxa_begin_catch(param_1);
  uVar2 = thunk_FUN_049ae08c(&DAT_0ae937d8);
  uVar3 = thunk_FUN_049a9d1c(uVar2,*(undefined8 *)*puVar1);
  if ((uVar3 & 1) != 0) {
    uVar2 = *puVar1;
    *(undefined8 *)(&stack0x00000040 + (long)in_stack_00000048 * 8) = uVar2;
    in_stack_00000048 = in_stack_00000048 + 1;
    __cxa_end_catch();
    FUN_08c8187c(uVar2,0,0);
    return;
  }
  puVar4 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar4 = *puVar1;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar4,&PTR_PTR_0a568bf8,0);
}


