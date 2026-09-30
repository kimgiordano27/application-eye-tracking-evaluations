/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$GetSubArray
ENTRY_POINT: 03b63344
PROGRAM: hellodot-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__GetSubArray
               (undefined1 *param_1,undefined1 *param_2,size_t param_3)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  int unaff_w22;
  ulong unaff_x23;
  long unaff_x24;
  code *unaff_x25;
  
  while( true ) {
    memcpy(param_1,param_2,param_3);
    (*unaff_x25)(unaff_x21,&stack0x000000b0,*(undefined8 *)(unaff_x19 + 0x28));
    unaff_x23 = unaff_x23 + 1;
    unaff_x24 = unaff_x24 + 0xb0;
    if (((long)*(int *)(unaff_x20 + 0x18) <= (long)unaff_x23) ||
       (unaff_w22 != *(int *)(unaff_x20 + 0x1c))) {
      if (unaff_w22 != *(int *)(unaff_x20 + 0x1c)) {
        FUN_04f520c0(0);
      }
      return;
    }
    lVar1 = *(long *)(unaff_x20 + 0x10);
    if (lVar1 == 0) break;
    if (*(uint *)(lVar1 + 0x18) <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    memcpy(&stack0x00000000,(void *)(lVar1 + unaff_x24),0xb0);
    if (unaff_x19 == 0) break;
    unaff_x25 = *(code **)(unaff_x19 + 0x18);
    unaff_x21 = *(undefined8 *)(unaff_x19 + 0x40);
    param_1 = &stack0x000000b0;
    param_3 = 0xb0;
    param_2 = (undefined1 *)register0x00000008;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


