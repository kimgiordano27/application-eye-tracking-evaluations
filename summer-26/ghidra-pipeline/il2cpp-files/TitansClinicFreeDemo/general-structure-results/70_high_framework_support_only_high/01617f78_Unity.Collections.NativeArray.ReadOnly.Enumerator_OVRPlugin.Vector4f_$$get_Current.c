/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector4f>$$get_Current
ENTRY_POINT: 01617f78
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector4f>__get_Current
               (long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined4 unaff_w21;
  ulong uVar2;
  long *unaff_x26;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230f60();
  }
  if (0 < *(int *)(param_1 + 0x18)) {
    uVar2 = 0;
    do {
      if (*(uint *)(param_1 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
      FUN_016177d8();
      uVar2 = uVar2 + 1;
    } while ((long)uVar2 < (long)*(int *)(param_1 + 0x18));
  }
  *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  lVar1 = FUN_01f4aa70(0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  FUN_015dac94();
  return;
}


