/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$get_Current
ENTRY_POINT: 06ad8580
PROGRAM: MRTraveler-libil2cpp.so
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
System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__get_Current
          (long param_1,undefined4 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_08e83f48;
  if ((DAT_09418d5a & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e83f48);
    FUN_03c8f898(PTR_DAT_08e6baa0);
    DAT_09418d5a = 1;
  }
  puVar1 = PTR_DAT_08e6baa0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar3 = FUN_070cc3bc(param_2,0);
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  uVar4 = FUN_03c8f97c(*(undefined8 *)puVar1,uVar3);
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  thunk_FUN_03d233cc();
  lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x1b0);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244();
  }
  uVar4 = FUN_03c8f97c(lVar5,uVar3);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  thunk_FUN_03d233cc((undefined8 *)(param_1 + 0x18),uVar4);
  return uVar3;
}


