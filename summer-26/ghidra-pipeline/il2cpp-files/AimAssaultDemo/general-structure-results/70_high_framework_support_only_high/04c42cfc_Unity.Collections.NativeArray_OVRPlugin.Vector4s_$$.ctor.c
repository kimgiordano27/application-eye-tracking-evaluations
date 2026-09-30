/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$.ctor
ENTRY_POINT: 04c42cfc
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


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>___ctor(long param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  code *pcVar3;
  
  uVar1 = *(ushort *)(param_1 + 0x135);
  pcVar3 = (code *)**(undefined8 **)(*(long *)(param_2 + 0xc0) + 0xb8);
  if ((uVar1 & 1) == 0) {
    FUN_03775678(param_1);
    param_1 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(param_1 + 0x135);
  }
  if ((uVar1 & 1) == 0) {
    FUN_03775678(param_1);
  }
  (*pcVar3)();
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03775678();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x38);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03775678();
  }
  *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8) = unaff_x20;
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03775678();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x38);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03775678();
  }
  thunk_FUN_037aeb94(*(long *)(lVar2 + 0xb8) + 8);
  return;
}


