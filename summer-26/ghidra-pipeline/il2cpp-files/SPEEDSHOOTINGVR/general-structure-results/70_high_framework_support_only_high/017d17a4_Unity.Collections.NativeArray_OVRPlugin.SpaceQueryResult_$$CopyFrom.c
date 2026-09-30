/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopyFrom
ENTRY_POINT: 017d17a4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopyFrom(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  uVar1 = thunk_FUN_010303a8(PTR_DAT_0234c890);
  uVar2 = thunk_FUN_0102bfdc(uVar1,*(undefined8 *)*param_1);
  if ((uVar2 & 1) != 0) {
    __cxa_end_catch();
    uVar1 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x68);
    lVar3 = thunk_FUN_010303a8(PTR_DAT_0234bc58);
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar1 = FUN_01d5e86c(uVar1,0);
    uVar5 = thunk_FUN_010303a8(PTR_DAT_0234bd08,uVar1,0);
    uVar5 = FUN_00fdc388(uVar5,2);
    FUN_00e5db80();
    FUN_00e5e2a8(uVar5);
    FUN_00e5e2dc(uVar5,0);
    FUN_00e5db80(uVar5);
    FUN_00e5e2a8(uVar5,uVar1);
    FUN_00e5e2dc(uVar5,1,uVar1);
    uVar1 = thunk_FUN_010303a8(PTR_DAT_02358688);
    uVar1 = FUN_01d7c4d8(uVar1,uVar5,0);
    thunk_FUN_010303a8(PTR_DAT_0234bcd0);
    uVar5 = thunk_FUN_010400dc();
    uVar6 = thunk_FUN_010303a8(PTR_DAT_0234d278);
    FUN_01c5e198(uVar5,uVar1,uVar6,0);
    uVar1 = thunk_FUN_010303a8(PTR_DAT_02358698);
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar5,uVar1);
  }
  puVar4 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar4 = *param_1;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar4,&PTR_PTR_0220e3b8,0);
}


