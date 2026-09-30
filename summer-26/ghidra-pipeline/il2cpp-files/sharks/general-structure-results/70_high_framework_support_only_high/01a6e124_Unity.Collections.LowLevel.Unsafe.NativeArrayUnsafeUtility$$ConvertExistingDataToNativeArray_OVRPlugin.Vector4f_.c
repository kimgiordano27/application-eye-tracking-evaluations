/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRPlugin.Vector4f>
ENTRY_POINT: 01a6e124
PROGRAM: sharks-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_Vector4f>
               (undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint unaff_w22;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 in_stack_00000018;
  
  uStack0000000000000008 = 0;
  uStack0000000000000010 = 0;
  uVar1 = FUN_02be7118(param_2,0);
  if (unaff_w22 < uVar1) {
    memcpy(&stack0x00000008,
           (void *)((long)param_2 + (ulong)*(uint *)(*param_2 + 0x104) * (long)(int)unaff_w22 + 0x20
                   ),(ulong)*(uint *)(*param_2 + 0x104));
    param_1[1] = uStack0000000000000010;
    *param_1 = uStack0000000000000008;
    param_1[2] = in_stack_00000018;
    return;
  }
  thunk_FUN_01851c08(PTR_DAT_037f86c0);
  uVar2 = thunk_FUN_01861bbc();
  uVar3 = thunk_FUN_01851c08(PTR_DAT_037f8970);
  FUN_02b44e38(uVar2,uVar3,0);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar2,param_4);
}


