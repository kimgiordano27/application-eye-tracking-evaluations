/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Equals
ENTRY_POINT: 03cb8f84
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Equals
               (code *param_1,undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16],undefined1 param_5 [16],undefined8 param_6,
               undefined1 *param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  
  uStack0000000000000078 = param_5._8_8_;
  uStack0000000000000070 = param_5._0_8_;
  uStack0000000000000068 = param_4._8_8_;
  uStack0000000000000060 = param_4._0_8_;
  uStack0000000000000058 = param_3._8_8_;
  uStack0000000000000050 = param_3._0_8_;
  uStack0000000000000048 = param_2._8_8_;
  uStack0000000000000040 = param_2._0_8_;
  while (uVar2 = (*param_1)(param_6,param_7,param_8), (uVar2 & 1) != 0) {
    unaff_x21 = unaff_x21 + 1;
    unaff_x22 = unaff_x22 + 0x40;
    if ((long)*(int *)(unaff_x20 + 0x18) <= (long)unaff_x21) break;
    lVar3 = *(long *)(unaff_x20 + 0x10);
    if (lVar3 == 0) {
LAB_03cb8fc8:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*(uint *)(lVar3 + 0x18) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    if (unaff_x19 == 0) goto LAB_03cb8fc8;
    puVar1 = (undefined8 *)(lVar3 + unaff_x22);
    param_6 = *(undefined8 *)(unaff_x19 + 0x40);
    param_8 = *(undefined8 *)(unaff_x19 + 0x28);
    uStack0000000000000048 = puVar1[1];
    uStack0000000000000040 = *puVar1;
    uStack0000000000000058 = puVar1[3];
    uStack0000000000000050 = puVar1[2];
    param_7 = (undefined1 *)&stack0x00000040;
    uStack0000000000000068 = puVar1[5];
    uStack0000000000000060 = puVar1[4];
    uStack0000000000000078 = puVar1[7];
    uStack0000000000000070 = puVar1[6];
    param_1 = *(code **)(unaff_x19 + 0x18);
  }
  return uVar2 & 1;
}


