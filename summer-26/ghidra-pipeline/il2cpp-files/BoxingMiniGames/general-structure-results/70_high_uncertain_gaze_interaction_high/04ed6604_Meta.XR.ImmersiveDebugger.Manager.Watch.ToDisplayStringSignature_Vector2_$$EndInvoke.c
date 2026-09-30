/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector2>$$EndInvoke
ENTRY_POINT: 04ed6604
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;functionality_gaze_interaction_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector2>__EndInvoke(void)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar2 = FUN_0367c9fc();
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0367c9fc();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x58);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0367c9fc();
  }
  lVar4 = *(long *)(unaff_x19 + 0x20);
  uVar5 = **(undefined8 **)(lVar2 + 0xb8);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0367c9fc(lVar4);
  }
  if ((*(ushort *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x68) + 0x135) & 1) == 0) {
    FUN_0367c9fc();
  }
  uVar3 = thunk_FUN_0367fe20();
  lVar4 = *(long *)(unaff_x19 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  lVar2 = lVar4;
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_0367c9fc(lVar4);
    uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar2 = *(long *)(unaff_x19 + 0x20);
  }
  uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x60);
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_0367c9fc(lVar2);
  }
  FUN_0414d3cc(uVar3,uVar5,uVar6,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x70));
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0367c9fc();
  }
  if ((*(ushort *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x10) + 0x135) & 1) == 0) {
    FUN_0367c9fc();
  }
  uVar5 = thunk_FUN_0367fe20();
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0367c9fc(lVar2);
  }
  FUN_04fbea50(uVar5,uVar3,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x78));
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0367c9fc();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0367c9fc();
  }
  lVar4 = *(long *)(unaff_x19 + 0x20);
  **(undefined8 **)(lVar2 + 0xb8) = uVar5;
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0367c9fc();
  }
  lVar2 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x18);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0367c9fc();
  }
  thunk_FUN_036b7ad0(*(undefined8 *)(lVar2 + 0xb8),uVar5);
  return;
}


