/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 05ccdbec
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerable_GetEnumerator
               (long param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong in_x10;
  long unaff_x19;
  
  if ((in_x10 & 1) == 0) {
    param_1 = FUN_03d8f26c(param_1);
  }
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0xc0) + 0xe0) + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  uVar2 = thunk_FUN_03d2ef40();
  lVar4 = *(long *)(unaff_x19 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  if ((uVar1 & 1) == 0) {
    FUN_03d8f26c(lVar4);
    lVar4 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(lVar4 + 0x135);
  }
  if ((uVar1 & 1) == 0) {
    FUN_03d8f26c(lVar4);
  }
  FUN_054adcfc(uVar2);
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03d8f26c();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0xb0) + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  uVar3 = thunk_FUN_03d2ef40();
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_03d8f26c(*(long *)(unaff_x19 + 0x20));
  }
  FUN_05fef800(uVar3,uVar2,0,0,0,0,10,10000);
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03d8f26c();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0xb8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03d8f26c();
  }
  **(undefined8 **)(lVar4 + 0xb8) = uVar3;
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03d8f26c();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0xb8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03d8f26c();
  }
  thunk_FUN_03d1023c(*(undefined8 *)(lVar4 + 0xb8),uVar3);
  return;
}


