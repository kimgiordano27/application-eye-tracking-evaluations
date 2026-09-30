/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$GetHashCode
ENTRY_POINT: 0276ae20
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


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__GetHashCode
               (long param_1,undefined1 param_2 [16])

{
  bool in_ZR;
  bool in_CY;
  long in_x9;
  undefined8 in_x11;
  long unaff_x19;
  uint unaff_w20;
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  
  uStack0000000000000028 = param_2._8_8_;
  uStack0000000000000020 = param_2._0_8_;
  if (in_CY && !in_ZR) {
    puVar1 = (undefined8 *)(unaff_x19 + 0x20 + (long)(int)unaff_w20 * 0x18);
    uVar3 = puVar1[1];
    uVar2 = *puVar1;
    *(undefined8 *)(in_x9 + 0x30) = puVar1[2];
    *(undefined8 *)(in_x9 + 0x28) = uVar3;
    *(undefined8 *)(in_x9 + 0x20) = uVar2;
    uStack0000000000000030 = in_x11;
    thunk_FUN_0188fd20(unaff_x19 + 0x20 + param_1 * 0x18,0);
    if (unaff_w20 < *(uint *)(unaff_x19 + 0x18)) {
      puVar1[2] = uStack0000000000000030;
      puVar1[1] = uStack0000000000000028;
      *puVar1 = uStack0000000000000020;
      thunk_FUN_0188fd20(unaff_x19 + (long)(int)unaff_w20 * 0x18 + 0x20,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


