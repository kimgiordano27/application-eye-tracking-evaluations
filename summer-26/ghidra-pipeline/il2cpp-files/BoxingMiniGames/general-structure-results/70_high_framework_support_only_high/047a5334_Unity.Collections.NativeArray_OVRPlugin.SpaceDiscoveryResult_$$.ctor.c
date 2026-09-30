/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 047a5334
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>___ctor(ulong param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x21;
  
  if ((param_1 & 1) != 0) {
    __cxa_end_catch();
    thunk_FUN_036aa1c8(PTR_DAT_07a13830,0);
    uVar3 = FUN_05c78e74();
    thunk_FUN_036aa1c8(PTR_DAT_079f85e8);
    uVar4 = thunk_FUN_0367fe20();
    FUN_05d84c94(uVar4,uVar3,0);
    uVar3 = thunk_FUN_036aa1c8(PTR_DAT_07a13838);
                    /* WARNING: Subroutine does not return */
    FUN_03642acc(uVar4,uVar3);
  }
  uVar3 = thunk_FUN_036aa1c8(&DAT_07b6eef8);
  uVar1 = thunk_FUN_036a5e58(uVar3,*(undefined8 *)*unaff_x21);
  if ((uVar1 & 1) != 0) {
    uVar3 = *unaff_x21;
    __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
    FUN_03642c00(uVar3);
  }
  uVar3 = thunk_FUN_036aa1c8(&DAT_07b67ca0);
  uVar1 = thunk_FUN_036a5e58(uVar3,*(undefined8 *)*unaff_x21);
  if ((uVar1 & 1) != 0) {
    uVar5 = *unaff_x21;
    __cxa_end_catch();
    thunk_FUN_036aa1c8(&DAT_07b6a470);
    uVar3 = thunk_FUN_0367fe20();
    uVar4 = thunk_FUN_036aa1c8(&DAT_07bd1d08);
    FUN_05e177ec(uVar3,uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_03642acc(uVar3);
  }
  puVar2 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar2 = *unaff_x21;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar2,&PTR_PTR_07542bc8,0);
}


