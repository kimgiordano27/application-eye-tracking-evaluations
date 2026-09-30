/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<KeyValuePair<OVRSpace,-OVRPlugin.SpaceQueryResult>>$$get_Current
ENTRY_POINT: 028b719c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
System_Array_EmptyInternalEnumerator<KeyValuePair<OVRSpace,_OVRPlugin_SpaceQueryResult>>__get_Current
          (ulong param_1,long param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x22;
  long unaff_x23;
  
  if ((param_1 & 1) == 0) {
    FUN_01c5d288(System_Threading_Tasks_Parallel_TypeInfo);
    FUN_01c5d288(PTR_DAT_04232bd8);
    *(undefined1 *)(unaff_x23 + 0xda0) = 1;
  }
  puVar1 = PTR_DAT_04232bd8;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar2 = FUN_0329f478(param_3,0);
  *(undefined4 *)(param_2 + 0x24) = 0xffffffff;
  uVar3 = FUN_01c5d2fc(*(undefined8 *)puVar1,uVar2);
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  lVar4 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x1a8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  uVar3 = FUN_01c5d2fc(lVar4,uVar2);
  *(undefined8 *)(param_2 + 0x18) = uVar3;
  return uVar2;
}


