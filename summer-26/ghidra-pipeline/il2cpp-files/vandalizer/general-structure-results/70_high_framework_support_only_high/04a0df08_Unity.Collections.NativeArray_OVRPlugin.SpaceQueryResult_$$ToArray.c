/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$ToArray
ENTRY_POINT: 04a0df08
PROGRAM: vandalizer-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ToArray(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x21;
  
  uVar1 = thunk_FUN_03257e30(*(undefined8 *)(param_1 + 0x3d8));
  uVar2 = thunk_FUN_0325397c(uVar1,*(undefined8 *)*unaff_x21);
  if ((uVar2 & 1) != 0) {
    __cxa_end_catch();
    thunk_FUN_03257e30(PTR_DAT_075eae00,0);
    uVar1 = FUN_05c697a8();
    thunk_FUN_03257e30(PTR_DAT_0759c0b8);
    uVar4 = thunk_FUN_0322f148();
    FUN_05d75da4(uVar4,uVar1,0);
    uVar1 = thunk_FUN_03257e30(PTR_DAT_075eae08);
                    /* WARNING: Subroutine does not return */
    FUN_031f225c(uVar4,uVar1);
  }
  uVar1 = thunk_FUN_03257e30(PTR_DAT_075d8bd0);
  uVar2 = thunk_FUN_0325397c(uVar1,*(undefined8 *)*unaff_x21);
  if ((uVar2 & 1) != 0) {
    uVar1 = *unaff_x21;
    __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
    FUN_031f2388(uVar1);
  }
  uVar1 = thunk_FUN_03257e30(PTR_DAT_0759b3f0);
  uVar2 = thunk_FUN_0325397c(uVar1,*(undefined8 *)*unaff_x21);
  if ((uVar2 & 1) != 0) {
    uVar5 = *unaff_x21;
    __cxa_end_catch();
    thunk_FUN_03257e30(PTR_DAT_0759bb58);
    uVar1 = thunk_FUN_0322f148();
    uVar4 = thunk_FUN_03257e30(PTR_DAT_075d8bd8);
    FUN_05e0159c(uVar1,uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_031f225c(uVar1);
  }
  puVar3 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar3 = *unaff_x21;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar3,&PTR_PTR_0718d318,0);
}


