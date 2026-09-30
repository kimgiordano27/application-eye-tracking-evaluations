/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector4s>$$GetEnumerator
ENTRY_POINT: 02c95f40
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4s>__GetEnumerator(void)

{
  uint uVar1;
  int iVar2;
  long unaff_x19;
  uint unaff_w20;
  void *unaff_x21;
  void *unaff_x22;
  uint unaff_w23;
  long unaff_x24;
  long unaff_x25;
  undefined8 uVar3;
  long unaff_x26;
  long unaff_x27;
  code *pcVar4;
  
  memcpy(&stack0x000000c0,&stack0x00000180,0x60);
  memcpy(&stack0x00000060,&stack0x00000120,0x60);
  if ((*(byte *)(*(long *)(unaff_x25 + 0x20) + 0x135) & 1) == 0) {
    FUN_01ae9e74();
  }
  pcVar4 = *(code **)(unaff_x24 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x24 + 0x40);
  memcpy(&stack0x00000240,&stack0x000000c0,0x60);
  memcpy(&stack0x000001e0,&stack0x00000060,0x60);
  iVar2 = (*pcVar4)(uVar3,&stack0x00000240,&stack0x000001e0,*(undefined8 *)(unaff_x24 + 0x28));
  if (iVar2 < 1) {
    return;
  }
  uVar1 = *(uint *)(unaff_x19 + 0x18);
  if ((unaff_w23 < uVar1) && (memcpy(&stack0x00000240,unaff_x22,0x60), unaff_w20 < uVar1)) {
    memmove(unaff_x22,unaff_x21,0x60);
    thunk_FUN_01b4f09c(unaff_x19 + unaff_x27 * 0x60 + 0x20,0);
    memcpy(&stack0x00000000,&stack0x00000240,0x60);
    if (unaff_w20 < *(uint *)(unaff_x19 + 0x18)) {
      memcpy(unaff_x21,&stack0x00000000,0x60);
      thunk_FUN_01b4f09c(unaff_x19 + unaff_x26 * 0x60 + 0x20,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


