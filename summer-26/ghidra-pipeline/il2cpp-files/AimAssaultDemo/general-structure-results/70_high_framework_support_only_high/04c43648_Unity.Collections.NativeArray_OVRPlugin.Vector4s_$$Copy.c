/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Copy
ENTRY_POINT: 04c43648
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


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Copy(ulong param_1,long param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *unaff_x19;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_03775678();
  }
  lVar3 = *unaff_x19;
  uVar5 = **(undefined8 **)(param_2 + 0xb8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678(lVar3);
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x88) + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  uVar2 = thunk_FUN_037788cc();
  lVar4 = *unaff_x19;
  uVar1 = *(ushort *)(lVar4 + 0x135);
  lVar3 = lVar4;
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_03775678(lVar4);
    uVar1 = *(ushort *)(*unaff_x19 + 0x135);
    lVar3 = *unaff_x19;
  }
  pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0xe8);
  lVar4 = lVar3;
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_03775678(lVar3);
    uVar1 = *(ushort *)(*unaff_x19 + 0x135);
    lVar4 = *unaff_x19;
  }
  uVar6 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0xe0);
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_03775678(lVar4);
  }
  (*pcVar7)(uVar2,uVar5,uVar6,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0xe8));
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x40);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10) = uVar2;
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x40);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  thunk_FUN_037aeb94(*(long *)(lVar3 + 0xb8) + 0x10,uVar2);
  return;
}


