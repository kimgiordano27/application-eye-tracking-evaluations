/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 04a69c24
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerator_get_Current
               (ushort *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  
  if ((*param_1 & 1) == 0) {
    FUN_02f41e9c();
  }
  uVar1 = thunk_FUN_02f45270();
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c(*(long *)(unaff_x19 + 0x20));
  }
  FUN_05116b38(uVar1,0);
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02f41e9c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02f41e9c();
  }
  lVar3 = *(long *)(unaff_x19 + 0x20);
  **(undefined8 **)(lVar2 + 0xb8) = uVar1;
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02f41e9c();
  }
  if ((*(ushort *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
    return;
  }
  return;
}


