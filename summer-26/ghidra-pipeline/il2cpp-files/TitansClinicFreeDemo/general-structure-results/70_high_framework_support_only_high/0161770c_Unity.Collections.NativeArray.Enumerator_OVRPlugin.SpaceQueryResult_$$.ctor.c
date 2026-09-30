/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 0161770c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
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
Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>___ctor
          (long param_1,undefined4 param_2,long param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  long *plVar5;
  long unaff_x23;
  
  plVar5 = *(long **)(unaff_x22 + 0xd20);
  if ((*(byte *)(unaff_x23 + 0xc12) & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b4d20);
    thunk_FUN_01279b34(PTR_DAT_027b1ca8);
    *(undefined1 *)(unaff_x23 + 0xc12) = 1;
  }
  puVar1 = PTR_DAT_027b1ca8;
  if (*(int *)(*plVar5 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar2 = FUN_01f4a864(param_2,0);
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  uVar3 = FUN_01230af8(*(undefined8 *)puVar1,uVar2);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  thunk_FUN_01286abc();
  lVar4 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x148);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0122e748();
  }
  uVar3 = FUN_01230af8(lVar4,uVar2);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  thunk_FUN_01286abc((undefined8 *)(param_1 + 0x18),uVar3);
  return uVar2;
}


