/*
FUNCTION_NAME: OVRPlugin$$get_rotation
ENTRY_POINT: 051b07d4
PROGRAM: hellodot-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__get_rotation(void)

{
  undefined *puVar1;
  ulong uVar2;
  uint in_w8;
  uint in_w9;
  long unaff_x20;
  uint uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_065c8c40;
  uVar3 = in_w9 & in_w8;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x150);
  if (*(int *)(*(long *)PTR_DAT_065c8c40 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar2 = FUN_05ef59b8(uVar4,0,0);
  if ((((uVar3 >> 1 & 1) != 0) && ((uVar2 & 1) != 0)) && (uVar2 = FUN_051b0988(), (uVar2 & 1) == 0))
  {
    uVar3 = uVar3 & 0xfffffffd;
  }
  uVar4 = *(undefined8 *)(unaff_x20 + 0x160);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar2 = FUN_05ef59b8(uVar4,0,0);
  if (((uVar3 & 1) != 0) && ((uVar2 & 1) != 0)) {
    uVar2 = FUN_051b0988();
    if ((uVar2 & 1) == 0) {
      uVar3 = uVar3 & 0xfffffffe;
    }
  }
  return uVar3;
}


