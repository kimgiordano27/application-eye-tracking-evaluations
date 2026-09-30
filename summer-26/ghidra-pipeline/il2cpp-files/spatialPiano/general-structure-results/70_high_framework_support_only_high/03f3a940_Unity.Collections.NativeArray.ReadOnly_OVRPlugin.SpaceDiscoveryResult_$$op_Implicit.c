/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$op_Implicit
ENTRY_POINT: 03f3a940
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


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__op_Implicit
               (long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  
  if ((*(ushort *)(*(long *)(*(long *)(param_1 + 0xc0) + 0x18) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  uVar1 = thunk_FUN_02f45270();
  FUN_048549c8(uVar1,*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20));
  uVar2 = *unaff_x23;
  *(undefined8 *)(unaff_x19 + 0x28) = uVar1;
  uVar1 = thunk_FUN_02f45270(uVar2);
  FUN_04885e70(uVar1,*unaff_x22);
  *(undefined8 *)(unaff_x19 + 0x30) = uVar1;
  FUN_05116b38();
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  lVar3 = *(long *)(lVar4 + 0x28);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02f41e9c();
    lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  }
  **(long **)(lVar3 + 0xb8) = unaff_x19;
  if ((*(ushort *)(*(long *)(lVar4 + 0x28) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
    return;
  }
  return;
}


