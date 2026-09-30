/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 03cb42f0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>___ctor(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = thunk_FUN_02f6ef30(&DAT_068ee840);
  uVar2 = thunk_FUN_02f6abc0(uVar1,*(undefined8 *)*param_1);
  if ((uVar2 & 1) != 0) {
    __cxa_end_catch();
    uVar1 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x68);
    if (*(int *)(DAT_06bce7f8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar1 = FUN_050e4454(uVar1,0);
    uVar4 = thunk_FUN_02f6ef30(PTR_DAT_067c9648,uVar1,0);
    uVar4 = FUN_02f0880c(uVar4,2);
    FUN_02a7da48();
    FUN_02a81aa0(uVar4);
    FUN_02a81ad4(uVar4,0);
    FUN_02a81aa0(uVar4,uVar1);
    FUN_02a81ad4(uVar4,1,uVar1);
    uVar1 = thunk_FUN_02f6ef30(OVRRoomLayout_var);
    uVar1 = FUN_051187b0(uVar1,uVar4,0);
    thunk_FUN_02f6ef30(PTR_DAT_067c99e8);
    uVar4 = thunk_FUN_02f45270();
    uVar5 = thunk_FUN_02f6ef30(PTR_DAT_067ca188);
    FUN_0504ee88(uVar4,uVar1,uVar5,0);
    uVar1 = thunk_FUN_02f6ef30(OVRSharable_var);
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar4,uVar1);
  }
  puVar3 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar3 = *param_1;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar3,&PTR_PTR_06402238,0);
}


