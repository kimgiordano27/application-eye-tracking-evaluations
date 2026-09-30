/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRPlugin.Vector4s>
ENTRY_POINT: 04d522a8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_Vector4s>
               (long param_1)

{
  long lVar1;
  long *plVar2;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000008;
  
  if (param_1 != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 4;
    lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x10);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_04481fb8();
    }
    lVar1 = FUN_04447c90(lVar1,in_stack_00000008._4_4_);
    *unaff_x20 = lVar1;
    thunk_FUN_044bb4b4();
    lVar1 = *unaff_x20;
    if ((lVar1 == 0) || (*(int *)(lVar1 + 0x18) == 0)) {
      lVar1 = 0;
    }
    else {
      lVar1 = lVar1 + 0x20;
    }
    plVar2 = (long *)*unaff_x19;
    if (plVar2 != (long *)0x0) {
      FUN_094b5338(lVar1,(long)(int)plVar2[1] + *plVar2,(long)(in_stack_00000008._4_4_ * 4),0);
      lVar1 = *unaff_x19;
      if (lVar1 != 0) {
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + in_stack_00000008._4_4_ * 4;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


