/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$set_Item
ENTRY_POINT: 04a0cad0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__set_Item(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)__cxa_begin_catch();
  uVar2 = thunk_FUN_03257e30(PTR_DAT_0759e3d8);
  uVar3 = thunk_FUN_0325397c(uVar2,*(undefined8 *)*puVar1);
  if ((uVar3 & 1) != 0) {
    __cxa_end_catch();
    thunk_FUN_03257e30(PTR_DAT_075eae00,0);
    uVar2 = FUN_05c697a8();
    thunk_FUN_03257e30(PTR_DAT_0759c0b8);
    uVar5 = thunk_FUN_0322f148();
    FUN_05d75da4(uVar5,uVar2,0);
    uVar2 = thunk_FUN_03257e30(PTR_DAT_075eae08);
                    /* WARNING: Subroutine does not return */
    FUN_031f225c(uVar5,uVar2);
  }
  uVar2 = thunk_FUN_03257e30(PTR_DAT_075d8bd0);
  uVar3 = thunk_FUN_0325397c(uVar2,*(undefined8 *)*puVar1);
  if ((uVar3 & 1) != 0) {
    uVar2 = *puVar1;
    __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
    FUN_031f2388(uVar2);
  }
  uVar2 = thunk_FUN_03257e30(PTR_DAT_0759b3f0);
  uVar3 = thunk_FUN_0325397c(uVar2,*(undefined8 *)*puVar1);
  if ((uVar3 & 1) != 0) {
    uVar6 = *puVar1;
    __cxa_end_catch();
    thunk_FUN_03257e30(PTR_DAT_0759bb58);
    uVar2 = thunk_FUN_0322f148();
    uVar5 = thunk_FUN_03257e30(PTR_DAT_075d8bd8);
    FUN_05e0159c(uVar2,uVar5,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_031f225c(uVar2);
  }
  puVar4 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar4 = *puVar1;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar4,&PTR_PTR_0718d318,0);
}


