/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$GetSubArray
ENTRY_POINT: 0417980c
PROGRAM: Untangled-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector2f>__GetSubArray
               (undefined1 param_1 [16],undefined1 param_2 [16])

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  
  uVar5 = param_2._8_8_;
  uVar4 = param_2._0_8_;
  uVar7 = param_1._8_8_;
  uVar6 = param_1._0_8_;
  do {
    uStack0000000000000020 = uVar6;
    uStack0000000000000028 = uVar7;
    uStack0000000000000030 = uVar4;
    uStack0000000000000038 = uVar5;
    uVar2 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000020,
                       *(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar2 & 1) != 0) {
                    /* try { // try from 0417984c to 04279893 has its CatchHandler @ 0417984c
                       catch() { ... } // from try @ 0417984c with catch @ 0417984c
                       catch() { ... } // from try @ 041798f8 with catch @ 0417984c
                       catch() { ... } // from try @ 04179928 with catch @ 0417984c
                       catch() { ... } // from try @ 041799a4 with catch @ 0417984c */
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 + 1;
    unaff_x23 = unaff_x23 + -1;
    unaff_x22 = unaff_x22 + 0x20;
    if (unaff_x23 == 0) {
      return 0xffffffff;
    }
    lVar3 = *(long *)(unaff_x21 + 0x10);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    puVar1 = (undefined8 *)(lVar3 + unaff_x22);
    uVar7 = puVar1[1];
    uVar6 = *puVar1;
    uVar5 = puVar1[3];
    uVar4 = puVar1[2];
  } while (unaff_x20 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


