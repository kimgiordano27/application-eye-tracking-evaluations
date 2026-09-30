/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 01999010
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__System_Collections_IEnumerable_GetEnumerator
               (long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  int unaff_w22;
  ulong unaff_x23;
  long unaff_x24;
  code *pcVar2;
  
  while (memcpy(&stack0x00000000,(void *)(param_1 + unaff_x24),0x6c), unaff_x19 != 0) {
    pcVar2 = *(code **)(unaff_x19 + 0x18);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x40);
    memcpy(&stack0x00000070,&stack0x00000000,0x6c);
    (*pcVar2)(uVar1,&stack0x00000070,*(undefined8 *)(unaff_x19 + 0x28));
    unaff_x23 = unaff_x23 + 1;
    unaff_x24 = unaff_x24 + 0x6c;
    if (((long)*(int *)(unaff_x20 + 0x18) <= (long)unaff_x23) ||
       (unaff_w22 != *(int *)(unaff_x20 + 0x1c))) {
      if (unaff_w22 != *(int *)(unaff_x20 + 0x1c)) {
        FUN_01f88158(0);
      }
      return;
    }
    param_1 = *(long *)(unaff_x20 + 0x10);
    if (param_1 == 0) break;
    if (*(uint *)(param_1 + 0x18) <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


