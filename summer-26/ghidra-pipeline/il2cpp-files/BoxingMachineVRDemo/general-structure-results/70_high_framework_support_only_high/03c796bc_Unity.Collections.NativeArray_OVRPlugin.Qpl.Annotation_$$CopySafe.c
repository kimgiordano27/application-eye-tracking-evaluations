/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$CopySafe
ENTRY_POINT: 03c796bc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopySafe(long param_1)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  long *unaff_x25;
  
  lVar2 = *(long *)(param_1 + 0x30);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02d9a2e0();
  }
  lVar4 = *(long *)(unaff_x20 + 0x20);
  uVar5 = **(undefined8 **)(lVar2 + 0xb8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02d9a2e0(lVar4);
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x40) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  uVar3 = thunk_FUN_02d9d534();
  lVar4 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  lVar2 = lVar4;
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_02d9a2e0(lVar4);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar2 = *(long *)(unaff_x20 + 0x20);
  }
  uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x48);
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_02d9a2e0(lVar2);
  }
  FUN_04692bc0(uVar3,uVar5,uVar6,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x50));
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02d9a2e0();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x30);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02d9a2e0();
  }
  *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x10) = uVar3;
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02d9a2e0();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x30);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02d9a2e0();
  }
  thunk_FUN_02dd37b4(*(long *)(lVar2 + 0xb8) + 0x10,uVar3);
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  FUN_033c4fe0();
  return;
}


