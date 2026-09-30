/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector2>$$.ctor
ENTRY_POINT: 05836990
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector2>___ctor
               (undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ushort *in_x9;
  long unaff_x19;
  undefined8 unaff_x20;
  
  if ((*in_x9 & 1) == 0) {
    FUN_03ac4090(param_1);
  }
  FUN_05d8cff0();
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03ac4090();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03ac4090();
  }
  lVar3 = *(long *)(unaff_x19 + 0x20);
  *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x10) = unaff_x20;
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03ac4090();
  }
  puVar1 = PTR_DAT_08488640;
  lVar2 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03ac4090();
  }
  thunk_FUN_03afed3c(*(long *)(lVar2 + 0xb8) + 0x10);
  uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03ac4090(lVar2);
  }
  FUN_066b5934(uVar4,0,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0xd0),0);
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03ac4090();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03ac4090();
  }
  lVar3 = *(long *)(unaff_x19 + 0x20);
  *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x18) = uVar4;
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03ac4090();
  }
  lVar2 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03ac4090();
  }
  thunk_FUN_03afed3c(*(long *)(lVar2 + 0xb8) + 0x18,uVar4);
  return;
}


