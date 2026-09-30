/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRPlugin.Vector2f>
ENTRY_POINT: 03f93630
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03f93568) */
/* WARNING: Removing unreachable block (ram,0x03f9359c) */

void Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_Vector2f>
               (void)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  long lVar4;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  
  plVar3 = (long *)__cxa_begin_catch();
  lVar4 = *plVar3;
  __cxa_end_catch();
  FUN_05d64718(&stack0x00000040,*(undefined8 *)PTR_DAT_07d96528);
  if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7ac(lVar4);
  }
  if (unaff_x21 != 0) {
    FUN_045b99ec(&stack0x00000060);
    puVar1 = PTR_DAT_07d96540;
    in_stack_00000028 = in_stack_00000068;
    in_stack_00000020 = in_stack_00000060;
    in_stack_00000030 = in_stack_00000070;
    while (uVar2 = FUN_05d6471c(&stack0x00000020,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x58)
                               ), lVar4 = in_stack_00000030, (uVar2 & 1) != 0) {
      if (in_stack_00000058 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      uVar2 = FUN_045b9578(in_stack_00000058,in_stack_00000030,*(undefined8 *)puVar1);
      if ((uVar2 & 1) != 0) {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        (**(code **)(lVar4 + 0x18))
                  (*(undefined8 *)(lVar4 + 0x40),unaff_w20,*(undefined8 *)(lVar4 + 0x28));
      }
    }
    FUN_05d64718(&stack0x00000020,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x60));
    FUN_042a62f4();
  }
  return;
}


