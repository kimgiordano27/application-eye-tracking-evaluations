/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$op_Implicit
ENTRY_POINT: 04c42ba8
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


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__op_Implicit(long param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ushort in_w9;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  
  lVar3 = param_1;
  if ((in_w9 & 1) == 0) {
    param_1 = FUN_03775678(param_1);
    in_w9 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar3 = *(long *)(unaff_x19 + 0x20);
  }
  pcVar7 = (code *)**(undefined8 **)(*(long *)(param_1 + 0xc0) + 0xa8);
  if ((in_w9 & 1) == 0) {
    FUN_03775678(lVar3);
    lVar3 = *(long *)(unaff_x19 + 0x20);
    in_w9 = *(ushort *)(lVar3 + 0x135);
  }
  if ((in_w9 & 1) == 0) {
    FUN_03775678(lVar3);
  }
  (*pcVar7)();
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x38);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  **(undefined8 **)(lVar3 + 0xb8) = unaff_x20;
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x38);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  thunk_FUN_037aeb94(*(undefined8 *)(lVar3 + 0xb8));
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x98);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  lVar4 = *(long *)(unaff_x19 + 0x20);
  uVar5 = **(undefined8 **)(lVar3 + 0xb8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678(lVar4);
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x68) + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  uVar2 = thunk_FUN_037788cc();
  lVar4 = *(long *)(unaff_x19 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  lVar3 = lVar4;
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_03775678(lVar4);
    uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar3 = *(long *)(unaff_x19 + 0x20);
  }
  pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0xb8);
  lVar4 = lVar3;
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_03775678(lVar3);
    uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar4 = *(long *)(unaff_x19 + 0x20);
  }
  uVar6 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0xb0);
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_03775678(lVar4);
  }
  (*pcVar7)(uVar2,uVar5,uVar6,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0xb8));
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x38);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8) = uVar2;
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x38);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  thunk_FUN_037aeb94(*(long *)(lVar3 + 0xb8) + 8,uVar2);
  return;
}


