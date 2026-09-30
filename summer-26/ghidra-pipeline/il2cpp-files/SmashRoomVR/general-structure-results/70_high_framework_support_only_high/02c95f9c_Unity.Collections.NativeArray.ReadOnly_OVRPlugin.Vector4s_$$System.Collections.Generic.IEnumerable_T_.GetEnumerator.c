/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector4s>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 02c95f9c
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


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4s>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (void)

{
  uint uVar1;
  int iVar2;
  long unaff_x19;
  uint unaff_w20;
  void *unaff_x21;
  void *unaff_x22;
  uint unaff_w23;
  long unaff_x26;
  long unaff_x27;
  code *unaff_x28;
  
  iVar2 = (*unaff_x28)();
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


