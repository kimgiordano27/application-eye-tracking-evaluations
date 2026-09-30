/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector2>$$Invoke
ENTRY_POINT: 05836a30
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 84
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_gaze_interaction_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector2>__Invoke(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  undefined8 *unaff_x21;
  
  lVar1 = FUN_03ac4090();
  thunk_FUN_03afed3c(*(long *)(lVar1 + 0xb8) + 0x10);
  uVar2 = thunk_FUN_03ac74bc(*unaff_x21);
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090(lVar1);
  }
  FUN_066b5934(uVar2,0,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0xd0),0);
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090();
  }
  lVar3 = *(long *)(unaff_x19 + 0x20);
  *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x18) = uVar2;
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03ac4090();
  }
  lVar1 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090();
  }
  thunk_FUN_03afed3c(*(long *)(lVar1 + 0xb8) + 0x18,uVar2);
  return;
}


