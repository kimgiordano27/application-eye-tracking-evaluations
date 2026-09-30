/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$ToArray
ENTRY_POINT: 03b5dce8
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__ToArray(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  __cxa_end_catch();
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x68);
  lVar1 = thunk_FUN_02c7737c(PTR_DAT_065c89e8);
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar4 = FUN_04f3fb68(uVar4,0);
  uVar2 = thunk_FUN_02c7737c(PTR_DAT_065c8a10,uVar4,0);
  uVar2 = FUN_02ce7ad4(uVar2,2);
  FUN_028be474();
  FUN_028c2238(uVar2);
  FUN_028c226c(uVar2,0);
  FUN_028be474(uVar2);
  FUN_028c2238(uVar2,uVar4);
  FUN_028c226c(uVar2,1,uVar4);
  uVar4 = thunk_FUN_02c7737c(PTR_DAT_065fb800);
  uVar4 = FUN_04f755f0(uVar4,uVar2,0);
  thunk_FUN_02c7737c(PTR_DAT_065c96d8);
  uVar2 = thunk_FUN_02cea894();
  uVar3 = thunk_FUN_02c7737c(PTR_DAT_065d00e0);
  FUN_04e97fd8(uVar2,uVar4,uVar3,0);
  uVar4 = thunk_FUN_02c7737c(PTR_DAT_065fb810);
                    /* WARNING: Subroutine does not return */
  FUN_02ce7b54(uVar2,uVar4);
}


