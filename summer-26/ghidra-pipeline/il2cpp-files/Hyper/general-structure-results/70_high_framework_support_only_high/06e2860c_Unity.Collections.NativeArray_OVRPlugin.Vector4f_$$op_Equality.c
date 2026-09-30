/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$op_Equality
ENTRY_POINT: 06e2860c
PROGRAM: Hyper-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector4f>__op_Equality
               (code *param_1,undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16],undefined1 param_5 [16],undefined8 param_6,
               undefined1 *param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
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
  
  uStack0000000000000038 = param_5._8_8_;
  uStack0000000000000030 = param_5._0_8_;
  uStack0000000000000028 = param_4._8_8_;
  uStack0000000000000020 = param_4._0_8_;
  uStack0000000000000018 = param_3._8_8_;
  uStack0000000000000010 = param_3._0_8_;
  uStack0000000000000008 = param_2._8_8_;
  uStack0000000000000000 = param_2._0_8_;
  while( true ) {
    uStack0000000000000040 = uStack0000000000000000;
    uStack0000000000000048 = uStack0000000000000008;
    uStack0000000000000050 = uStack0000000000000010;
    uStack0000000000000058 = uStack0000000000000018;
    uStack0000000000000060 = uStack0000000000000020;
    uStack0000000000000068 = uStack0000000000000028;
    uStack0000000000000070 = uStack0000000000000030;
    uStack0000000000000078 = uStack0000000000000038;
    uVar2 = (*param_1)(param_6,param_7,param_8);
    if ((uVar2 & 1) != 0) {
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 06e28520 with catch @ 06e28638
                       try { // try from 06e28638 to 06f2865b has its CatchHandler @ 06e284ec */
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 06e28540 with catch @ 06e28644
                        */
      return unaff_w19;
    }
    unaff_x23 = unaff_x23 + -1;
    unaff_x22 = unaff_x22 + 0x40;
    unaff_w19 = unaff_w19 + 1;
    if (unaff_x23 == 0) {
      return 0xffffffff;
    }
    lVar3 = *(long *)(unaff_x21 + 0x10);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    if (unaff_x20 == 0) break;
    puVar1 = (undefined8 *)(lVar3 + unaff_x22);
    param_6 = *(undefined8 *)(unaff_x20 + 0x40);
    param_8 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack0000000000000008 = puVar1[1];
    uStack0000000000000000 = *puVar1;
    uStack0000000000000018 = puVar1[3];
    uStack0000000000000010 = puVar1[2];
    param_7 = (undefined1 *)&stack0x00000040;
    uStack0000000000000028 = puVar1[5];
    uStack0000000000000020 = puVar1[4];
    uStack0000000000000038 = puVar1[7];
    uStack0000000000000030 = puVar1[6];
    param_1 = *(code **)(unaff_x20 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


