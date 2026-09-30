/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopyFrom
ENTRY_POINT: 03cb7b34
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


uint Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopyFrom(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  
  do {
    puVar1 = (undefined8 *)(param_1 + unaff_x22);
    uStack0000000000000008 = puVar1[1];
    uStack0000000000000000 = *puVar1;
    uStack0000000000000018 = puVar1[3];
    uStack0000000000000010 = puVar1[2];
    uStack0000000000000028 = puVar1[5];
    uStack0000000000000020 = puVar1[4];
    uStack0000000000000038 = puVar1[7];
    uStack0000000000000030 = puVar1[6];
    uStack0000000000000040 = uStack0000000000000000;
    uStack0000000000000048 = uStack0000000000000008;
    uStack0000000000000050 = uStack0000000000000010;
    uStack0000000000000058 = uStack0000000000000018;
    uStack0000000000000060 = uStack0000000000000020;
    uStack0000000000000068 = uStack0000000000000028;
    uStack0000000000000070 = uStack0000000000000030;
    uStack0000000000000078 = uStack0000000000000038;
    uVar2 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                       *(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar2 & 1) != 0) {
      return unaff_w19;
    }
    unaff_x23 = unaff_x23 + -1;
    unaff_x22 = unaff_x22 + 0x40;
    unaff_w19 = unaff_w19 + 1;
    if (unaff_x23 == 0) {
      return 0xffffffff;
    }
    param_1 = *(long *)(unaff_x21 + 0x10);
    if (param_1 == 0) break;
    if (*(uint *)(param_1 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
  } while (unaff_x20 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


