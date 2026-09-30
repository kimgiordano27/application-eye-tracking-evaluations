/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$.ctor
ENTRY_POINT: 041798cc
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>___ctor
               (undefined1 param_1 [16],undefined1 param_2 [16])

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  ulong unaff_x22;
  long unaff_x23;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  
  uVar4 = param_2._8_8_;
  uVar3 = param_2._0_8_;
  uVar6 = param_1._8_8_;
  uVar5 = param_1._0_8_;
  do {
    uStack0000000000000020 = uVar5;
    uStack0000000000000028 = uVar6;
    uStack0000000000000030 = uVar3;
    uStack0000000000000038 = uVar4;
    (**(code **)(unaff_x19 + 0x18))
              (*(undefined8 *)(unaff_x19 + 0x40),&stack0x00000020,*(undefined8 *)(unaff_x19 + 0x28))
    ;
    unaff_x22 = unaff_x22 + 1;
    unaff_x23 = unaff_x23 + 0x20;
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 04179894 with catch @ 041798f8
                       try { // try from 041798f8 to 0427990f has its CatchHandler @ 0417984c */
    if (((long)*(int *)(unaff_x20 + 0x18) <= (long)unaff_x22) ||
       (unaff_w21 != *(int *)(unaff_x20 + 0x1c))) {
      if (unaff_w21 != *(int *)(unaff_x20 + 0x1c)) {
        FUN_0562330c(0);
      }
                    /* try { // try from 04179910 to 04279927 has its CatchHandler @ 0417999c */
      return;
    }
    lVar2 = *(long *)(unaff_x20 + 0x10);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    puVar1 = (undefined8 *)(lVar2 + unaff_x23);
    uVar6 = puVar1[1];
    uVar5 = *puVar1;
    uVar4 = puVar1[3];
    uVar3 = puVar1[2];
  } while (unaff_x19 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


