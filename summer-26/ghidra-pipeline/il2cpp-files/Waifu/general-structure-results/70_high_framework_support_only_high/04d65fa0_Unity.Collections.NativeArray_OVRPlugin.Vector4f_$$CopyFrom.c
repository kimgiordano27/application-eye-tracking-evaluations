/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopyFrom
ENTRY_POINT: 04d65fa0
PROGRAM: Waifu-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopyFrom(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x22;
  long unaff_x23;
  undefined1 unaff_w24;
  undefined8 uVar1;
  undefined8 uVar2;
  
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x23 + 0xb8c) = unaff_w24;
  if ((*(byte *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
    FUN_0338f618();
  }
  FUN_04d667dc();
  if (*(char *)(unaff_x19 + 0x20) != '\0') {
    if (*(long *)(unaff_x19 + 0x40) == 0) {
      uVar2 = *(undefined8 *)(unaff_x19 + 0x30);
      uVar1 = *(undefined8 *)(unaff_x19 + 0x28);
      unaff_x20[2] = *(undefined8 *)(unaff_x19 + 0x38);
      unaff_x20[1] = uVar2;
      *unaff_x20 = uVar1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_067318bc(*(long *)(unaff_x19 + 0x40),0);
  }
  if (*(int *)(DAT_083ce7a0 + 0xe0) == 0) {
    FUN_033b9870();
  }
                    /* WARNING: Subroutine does not return */
  FUN_068befc0(0);
}


