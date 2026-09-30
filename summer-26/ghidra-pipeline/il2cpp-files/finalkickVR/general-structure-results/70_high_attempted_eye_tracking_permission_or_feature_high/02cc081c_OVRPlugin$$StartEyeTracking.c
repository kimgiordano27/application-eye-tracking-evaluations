/*
FUNCTION_NAME: OVRPlugin$$StartEyeTracking
ENTRY_POINT: 02cc081c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 85
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


undefined8 OVRPlugin__StartEyeTracking(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 uStack0000000000000020;
  undefined4 uStack000000000000002c;
  undefined8 uStack0000000000000030;
  
  uStack000000000000002c = *(undefined4 *)(unaff_x29 + -0xc);
  uStack0000000000000020 = *(undefined8 *)(unaff_x29 + -0x18);
  uStack0000000000000030 = param_1;
  uVar1 = CAPI_ovr_Leaderboard_GetEntriesAfterRank_Native_m1F11A371CC6FB8B304C5A64D10D387BBD280B228
                    (param_1,uStack000000000000002c,uStack0000000000000020);
  *(undefined8 *)(unaff_x29 + -0x28) = uVar1;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_UIElements_MouseEventBase<MouseUpEvent>_get_localMousePosition__);
  Marshal_FreeCoTaskMem_mBCD7084667AE44C50938947CF5C22345A118C944
            (uStack0000000000000030,in_stack_00000008);
  return *(undefined8 *)(unaff_x29 + -0x28);
}


