/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRPlugin.Qpl.Annotation>
ENTRY_POINT: 03f938c4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03f9390c) */
/* WARNING: Removing unreachable block (ram,0x03f93940) */

void Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_Qpl_Annotation>
               (long param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  long unaff_x19;
  undefined4 unaff_w20;
  long unaff_x22;
  undefined8 *unaff_x23;
  long in_stack_00000030;
  long in_stack_00000058;
  
  while( true ) {
    uVar1 = FUN_045b9578(param_1,param_2,param_3);
    if ((uVar1 & 1) != 0) {
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      (**(code **)(unaff_x22 + 0x18))
                (*(undefined8 *)(unaff_x22 + 0x40),unaff_w20,*(undefined8 *)(unaff_x22 + 0x28));
    }
    uVar1 = FUN_05d6471c(&stack0x00000020,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x58));
    if ((uVar1 & 1) == 0) break;
    if (in_stack_00000058 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    param_3 = *unaff_x23;
    param_1 = in_stack_00000058;
    param_2 = in_stack_00000030;
    unaff_x22 = in_stack_00000030;
  }
  FUN_05d64718(&stack0x00000020,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x60));
  FUN_042a62f4();
  return;
}


