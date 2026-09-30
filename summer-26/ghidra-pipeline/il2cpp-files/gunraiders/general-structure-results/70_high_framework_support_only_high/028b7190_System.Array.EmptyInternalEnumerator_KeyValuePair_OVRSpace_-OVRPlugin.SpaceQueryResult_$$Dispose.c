/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<KeyValuePair<OVRSpace,-OVRPlugin.SpaceQueryResult>>$$Dispose
ENTRY_POINT: 028b7190
PROGRAM: gunraiders-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
System_Array_EmptyInternalEnumerator<KeyValuePair<OVRSpace,_OVRPlugin_SpaceQueryResult>>__Dispose
          (long param_1,undefined4 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x23;
  
  puVar2 = System_Threading_Tasks_Parallel_TypeInfo;
  if ((*(byte *)(unaff_x23 + 0xda0) & 1) == 0) {
    FUN_01c5d288(System_Threading_Tasks_Parallel_TypeInfo);
    FUN_01c5d288(PTR_DAT_04232bd8);
    *(undefined1 *)(unaff_x23 + 0xda0) = 1;
  }
  puVar1 = PTR_DAT_04232bd8;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar3 = FUN_0329f478(param_2,0);
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  uVar4 = FUN_01c5d2fc(*(undefined8 *)puVar1,uVar3);
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x1a8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01c72394();
  }
  uVar4 = FUN_01c5d2fc(lVar5,uVar3);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  return uVar3;
}


