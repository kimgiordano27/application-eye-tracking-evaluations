/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$op_Implicit
ENTRY_POINT: 04c42b74
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__op_Implicit(undefined8 param_1)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  undefined8 uVar6;
  code *pcVar7;
  
  lVar2 = FUN_03775678(param_1);
  if ((*(byte *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  uVar3 = thunk_FUN_037788cc();
  lVar5 = *(long *)(unaff_x19 + 0x20);
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar2 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
    uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar2 = *(long *)(unaff_x19 + 0x20);
  }
  pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0xa8);
  if ((uVar1 & 1) == 0) {
    FUN_03775678(lVar2);
    lVar2 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(lVar2 + 0x135);
  }
  if ((uVar1 & 1) == 0) {
    FUN_03775678(lVar2);
  }
  (*pcVar7)(uVar3);
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03775678();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x38);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03775678();
  }
  **(undefined8 **)(lVar2 + 0xb8) = uVar3;
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03775678();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x38);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03775678();
  }
  thunk_FUN_037aeb94(*(undefined8 *)(lVar2 + 0xb8),uVar3);
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03775678();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x98);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03775678();
  }
  lVar5 = *(long *)(unaff_x19 + 0x20);
  uVar3 = **(undefined8 **)(lVar2 + 0xb8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x68) + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  uVar4 = thunk_FUN_037788cc();
  lVar5 = *(long *)(unaff_x19 + 0x20);
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar2 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
    uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar2 = *(long *)(unaff_x19 + 0x20);
  }
  pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0xb8);
  lVar5 = lVar2;
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_03775678(lVar2);
    uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar5 = *(long *)(unaff_x19 + 0x20);
  }
  uVar6 = *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0xb0);
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
  }
  (*pcVar7)(uVar4,uVar3,uVar6,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0xb8));
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03775678();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x38);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03775678();
  }
  *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8) = uVar4;
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03775678();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x38);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03775678();
  }
  thunk_FUN_037aeb94(*(long *)(lVar2 + 0xb8) + 8,uVar4);
  return;
}


