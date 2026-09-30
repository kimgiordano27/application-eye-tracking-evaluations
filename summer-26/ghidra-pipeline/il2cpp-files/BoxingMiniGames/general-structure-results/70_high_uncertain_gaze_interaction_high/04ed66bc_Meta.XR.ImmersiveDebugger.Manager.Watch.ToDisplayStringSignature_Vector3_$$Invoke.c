/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector3>$$Invoke
ENTRY_POINT: 04ed66bc
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


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector3>__Invoke
               (undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  
  FUN_0367c9fc(param_1);
  FUN_0414d3cc();
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  if ((*(ushort *)(*(long *)(*(long *)(lVar1 + 0xc0) + 0x10) + 0x135) & 1) == 0) {
    FUN_0367c9fc();
  }
  uVar2 = thunk_FUN_0367fe20();
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_0367c9fc(*(long *)(unaff_x19 + 0x20));
  }
  FUN_04fbea50(uVar2);
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x18);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  lVar3 = *(long *)(unaff_x19 + 0x20);
  **(undefined8 **)(lVar1 + 0xb8) = uVar2;
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0367c9fc();
  }
  lVar1 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x18);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  thunk_FUN_036b7ad0(*(undefined8 *)(lVar1 + 0xb8),uVar2);
  return;
}


