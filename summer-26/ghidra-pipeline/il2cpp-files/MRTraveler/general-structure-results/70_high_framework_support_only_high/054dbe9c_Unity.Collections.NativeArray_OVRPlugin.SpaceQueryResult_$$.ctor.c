/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 054dbe9c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>___ctor(undefined8 param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x21;
  
  uVar1 = thunk_FUN_03ce0d60(param_1,*(undefined8 *)*unaff_x21);
  if ((uVar1 & 1) != 0) {
    __cxa_end_catch();
    thunk_FUN_03ce5214(PTR_DAT_08ea4f40,0);
    uVar3 = FUN_06f559f0();
    thunk_FUN_03ce5214(PTR_DAT_08e76350);
    uVar4 = thunk_FUN_03cf5234();
    FUN_07064ba8(uVar4,uVar3,0);
    uVar3 = thunk_FUN_03ce5214(PTR_DAT_08ea4f48);
                    /* WARNING: Subroutine does not return */
    FUN_03c8f9fc(uVar4,uVar3);
  }
  uVar3 = thunk_FUN_03ce5214(PTR_DAT_08e849f8);
  uVar1 = thunk_FUN_03ce0d60(uVar3,*(undefined8 *)*unaff_x21);
  if ((uVar1 & 1) != 0) {
    uVar3 = *unaff_x21;
    __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb28(uVar3);
  }
  uVar3 = thunk_FUN_03ce5214(PTR_DAT_08e695a0);
  uVar1 = thunk_FUN_03ce0d60(uVar3,*(undefined8 *)*unaff_x21);
  if ((uVar1 & 1) != 0) {
    uVar5 = *unaff_x21;
    __cxa_end_catch();
    thunk_FUN_03ce5214(PTR_DAT_08e71970);
    uVar3 = thunk_FUN_03cf5234();
    uVar4 = thunk_FUN_03ce5214(PTR_DAT_08e84a00);
    FUN_07100554(uVar3,uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_03c8f9fc(uVar3);
  }
  puVar2 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar2 = *unaff_x21;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar2,&PTR_PTR_088de0a8,0);
}


