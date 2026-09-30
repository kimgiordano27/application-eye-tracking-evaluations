/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 06ad85c8
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
System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerator_get_Current
          (void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  long *unaff_x22;
  
  puVar1 = PTR_DAT_08e6baa0;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar2 = FUN_070cc3bc(unaff_w21,0);
  *(undefined4 *)(unaff_x19 + 0x24) = 0xffffffff;
  uVar3 = FUN_03c8f97c(*(undefined8 *)puVar1,uVar2);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar3;
  thunk_FUN_03d233cc();
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x1b0);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03cf1244();
  }
  uVar3 = FUN_03c8f97c(lVar4,uVar2);
  *(undefined8 *)(unaff_x19 + 0x18) = uVar3;
  thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x18),uVar3);
  return uVar2;
}


