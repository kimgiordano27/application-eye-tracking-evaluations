/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Dispose
ENTRY_POINT: 03b618f0
PROGRAM: hellodot-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Dispose
               (undefined1 *param_1,undefined1 *param_2,size_t param_3)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  code *unaff_x24;
  
  while( true ) {
    memcpy(param_1,param_2,param_3);
    uVar1 = (*unaff_x24)(unaff_x21,&stack0x00000160,*(undefined8 *)(unaff_x19 + 0x28));
    if ((uVar1 & 1) == 0) break;
    unaff_x22 = unaff_x22 + 1;
    unaff_x23 = unaff_x23 + 0x160;
    if ((long)*(int *)(unaff_x20 + 0x18) <= (long)unaff_x22) break;
    lVar2 = *(long *)(unaff_x20 + 0x10);
    if (lVar2 == 0) {
LAB_03b61940:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if (*(uint *)(lVar2 + 0x18) <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    memcpy(&stack0x00000000,(void *)(lVar2 + unaff_x23),0x160);
    if (unaff_x19 == 0) goto LAB_03b61940;
    unaff_x24 = *(code **)(unaff_x19 + 0x18);
    unaff_x21 = *(undefined8 *)(unaff_x19 + 0x40);
    param_1 = &stack0x00000160;
    param_3 = 0x160;
    param_2 = (undefined1 *)register0x00000008;
  }
  return uVar1 & 1;
}


