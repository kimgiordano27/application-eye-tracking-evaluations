/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector2f>$$Dispose
ENTRY_POINT: 0474abb4
PROGRAM: hellodot-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector2f>__Dispose(void)

{
  long lVar1;
  long unaff_x19;
  int unaff_w20;
  
  if (0 < unaff_w20) {
    lVar1 = *(long *)(unaff_x19 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    FUN_04f53aa4(lVar1,0,*(undefined4 *)(lVar1 + 0x18),0);
    *(undefined8 *)(unaff_x19 + 0x20) = 0xffffffff00000000;
    *(undefined4 *)(unaff_x19 + 0x28) = 0;
    FUN_04f53aa4(*(undefined8 *)(unaff_x19 + 0x18),0,unaff_w20,0);
  }
  *(int *)(unaff_x19 + 0x2c) = *(int *)(unaff_x19 + 0x2c) + 1;
  return;
}


