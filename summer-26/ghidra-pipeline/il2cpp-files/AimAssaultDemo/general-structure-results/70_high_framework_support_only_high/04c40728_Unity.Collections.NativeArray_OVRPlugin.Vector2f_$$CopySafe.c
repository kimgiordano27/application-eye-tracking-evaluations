/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$CopySafe
ENTRY_POINT: 04c40728
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_5;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__CopySafe
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 in_CY;
  int iVar2;
  long in_x10;
  long *unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000008;
  
  while( true ) {
    if ((bool)in_CY) {
      FUN_049ceef4();
    }
    else {
      *(int *)(unaff_x21 + 0x18) = (int)in_x10 + 1;
      *(undefined8 *)(param_1 + in_x10 * 8 + 0x20) = param_3;
      thunk_FUN_037aeb94();
    }
    iVar1 = in_stack_00000008._4_4_ + 1;
    in_stack_00000008._4_4_ = iVar1;
    iVar2 = (**(code **)(*unaff_x20 + 0x618))();
    if (iVar2 <= iVar1) break;
    FUN_06240534((long)&stack0x00000008 + 4,0);
    param_3 = Newtonsoft_Json_Linq_Extensions_<Convert>d__14<object,_object>__System_IDisposable_Dispose
                        ();
    param_1 = *(long *)(unaff_x21 + 0x10);
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    in_x10 = (long)(int)*(uint *)(unaff_x21 + 0x18);
    in_CY = *(uint *)(param_1 + 0x18) <= *(uint *)(unaff_x21 + 0x18);
  }
  return;
}


