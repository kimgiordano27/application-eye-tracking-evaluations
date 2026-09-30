/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$CopySafe
ENTRY_POINT: 041b8b2c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopySafe
               (long param_1,uint param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(uint *)(param_1 + 0x18) <= param_2) {
    FUN_055097d4(0);
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (param_2 < *(uint *)(lVar1 + 0x18)) {
      uVar4 = *param_3;
      uVar3 = param_3[3];
      uVar2 = param_3[2];
      lVar1 = lVar1 + (long)(int)param_2 * 0x20;
      *(undefined8 *)(lVar1 + 0x28) = param_3[1];
      *(undefined8 *)(lVar1 + 0x20) = uVar4;
      *(undefined8 *)(lVar1 + 0x38) = uVar3;
      *(undefined8 *)(lVar1 + 0x30) = uVar2;
      LeanTween__value(lVar1 + 0x30,0);
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


