/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector4s>$$get_Length
ENTRY_POINT: 03f3b378
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4s>__get_Length(ulong param_1)

{
  long *unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  long lVar1;
  undefined8 uVar2;
  
  if ((param_1 & 1) == 0) {
    return;
  }
  lVar1 = unaff_x19[2];
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0xf8);
    memcpy(&stack0x00000070,&stack0x00000000,0x70);
    FUN_04883298(lVar1,unaff_w21,&stack0x00000070,uVar2);
    (**(code **)(*unaff_x19 + 0x278))();
    if (unaff_x19[2] != 0) {
      lVar1 = unaff_x19[0xb];
      FUN_048831e4(&stack0x00000070,unaff_x19[2],unaff_w21,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x128));
      memcpy((void *)(unaff_x19[7] + (long)(int)lVar1 * 0x70),&stack0x00000070,0x70);
      if (unaff_x20 != 0) {
        *(undefined4 *)(unaff_x19[9] + (long)(int)unaff_x19[0xb] * 4) =
             *(undefined4 *)(unaff_x20 + 0x38);
        *(int *)(unaff_x19 + 0xb) = (int)unaff_x19[0xb] + 1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


