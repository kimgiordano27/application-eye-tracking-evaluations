/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.SpaceQueryResult>$$Dispose
ENTRY_POINT: 01617728
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
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
Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>__Dispose(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  long *unaff_x22;
  long unaff_x23;
  
  thunk_FUN_01279b34(*(undefined8 *)(param_1 + 0xd20));
  thunk_FUN_01279b34(PTR_DAT_027b1ca8);
  *(undefined1 *)(unaff_x23 + 0xc12) = 1;
  puVar1 = PTR_DAT_027b1ca8;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar2 = FUN_01f4a864(unaff_w21,0);
  *(undefined4 *)(unaff_x19 + 0x24) = 0xffffffff;
  uVar3 = FUN_01230af8(*(undefined8 *)puVar1,uVar2);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar3;
  thunk_FUN_01286abc();
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x148);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0122e748();
  }
  uVar3 = FUN_01230af8(lVar4,uVar2);
  *(undefined8 *)(unaff_x19 + 0x18) = uVar3;
  thunk_FUN_01286abc((undefined8 *)(unaff_x19 + 0x18),uVar3);
  return uVar2;
}


