/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$.ctor
ENTRY_POINT: 044f1704
PROGRAM: waitwhat-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector4s>___ctor
               (undefined8 param_1,undefined1 param_2 [16],undefined8 param_3,undefined1 *param_4,
               undefined8 param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  code *in_x9;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  
  uStack0000000000000008 = param_2._8_8_;
  uStack0000000000000000 = param_2._0_8_;
  while (uStack0000000000000010 = param_1, uStack0000000000000020 = uStack0000000000000000,
        uStack0000000000000028 = uStack0000000000000008, uStack0000000000000030 = param_1,
        uVar2 = (*in_x9)(param_3,param_4,param_5), (uVar2 & 1) != 0) {
    unaff_x21 = unaff_x21 + 1;
    unaff_x22 = unaff_x22 + 0x18;
    if ((long)*(int *)(unaff_x20 + 0x18) <= (long)unaff_x21) break;
    lVar3 = *(long *)(unaff_x20 + 0x10);
    if (lVar3 == 0) {
LAB_044f1750:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if (*(uint *)(lVar3 + 0x18) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    if (unaff_x19 == 0) goto LAB_044f1750;
    puVar1 = (undefined8 *)(lVar3 + unaff_x22);
    in_x9 = *(code **)(unaff_x19 + 0x18);
    param_3 = *(undefined8 *)(unaff_x19 + 0x40);
    uStack0000000000000008 = puVar1[1];
    uStack0000000000000000 = *puVar1;
    param_1 = puVar1[2];
    param_4 = (undefined1 *)&stack0x00000020;
    param_5 = *(undefined8 *)(unaff_x19 + 0x28);
  }
  return uVar2 & 1;
}


