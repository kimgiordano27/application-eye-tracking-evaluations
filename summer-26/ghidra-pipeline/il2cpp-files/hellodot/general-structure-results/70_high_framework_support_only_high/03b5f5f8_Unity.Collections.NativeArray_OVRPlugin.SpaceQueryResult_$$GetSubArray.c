/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$GetSubArray
ENTRY_POINT: 03b5f5f8
PROGRAM: hellodot-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__GetSubArray(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  uVar1 = thunk_FUN_02c7737c();
  uVar2 = thunk_FUN_02c72dcc(uVar1,*(undefined8 *)*unaff_x21);
  if ((uVar2 & 1) != 0) {
    __cxa_end_catch();
    uVar1 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x68);
    lVar3 = thunk_FUN_02c7737c(PTR_DAT_065c89e8);
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar1 = FUN_04f3fb68(uVar1,0);
    uVar5 = thunk_FUN_02c7737c(PTR_DAT_065c8a10,uVar1,0);
    uVar5 = FUN_02ce7ad4(uVar5,2);
    FUN_028be474();
    FUN_028c2238(uVar5);
    FUN_028c226c(uVar5,0);
    FUN_028be474(uVar5);
    FUN_028c2238(uVar5,uVar1);
    FUN_028c226c(uVar5,1,uVar1);
    uVar1 = thunk_FUN_02c7737c(PTR_DAT_065fb800);
    uVar1 = FUN_04f755f0(uVar1,uVar5,0);
    thunk_FUN_02c7737c(PTR_DAT_065c96d8);
    uVar5 = thunk_FUN_02cea894();
    uVar6 = thunk_FUN_02c7737c(PTR_DAT_065d00e0);
    FUN_04e97fd8(uVar5,uVar1,uVar6,0);
    uVar1 = thunk_FUN_02c7737c(PTR_DAT_065fb810);
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar5,uVar1);
  }
  puVar4 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar4 = *unaff_x21;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar4,&PTR_PTR_0620d888,0);
}


