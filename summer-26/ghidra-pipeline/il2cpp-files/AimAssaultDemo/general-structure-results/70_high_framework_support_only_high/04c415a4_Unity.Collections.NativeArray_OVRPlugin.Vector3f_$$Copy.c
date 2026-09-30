/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 04c415a4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int in_w9;
  long *unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000008;
  
  do {
    *(int *)(unaff_x21 + 0x18) = in_w9;
    *(undefined8 *)(param_1 + 0x20) = param_2;
    thunk_FUN_037aeb94();
    while( true ) {
      iVar1 = in_stack_00000008._4_4_ + 1;
      in_stack_00000008._4_4_ = iVar1;
      iVar3 = (**(code **)(*unaff_x20 + 0x618))();
      if (iVar3 <= iVar1) {
        return;
      }
      FUN_06240534((long)&stack0x00000008 + 4,0);
      param_2 = FUN_0426da90();
      param_1 = *(long *)(unaff_x21 + 0x10);
      *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      uVar2 = *(uint *)(unaff_x21 + 0x18);
      if (uVar2 < *(uint *)(param_1 + 0x18)) break;
      FUN_049ceef4();
    }
    in_w9 = uVar2 + 1;
    param_1 = param_1 + (long)(int)uVar2 * 8;
  } while( true );
}


