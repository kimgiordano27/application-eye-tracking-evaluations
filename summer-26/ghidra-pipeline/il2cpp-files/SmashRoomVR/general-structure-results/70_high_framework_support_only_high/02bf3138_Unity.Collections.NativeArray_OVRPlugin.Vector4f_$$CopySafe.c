/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopySafe
ENTRY_POINT: 02bf3138
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopySafe
               (undefined8 param_1,undefined1 param_2 [16],undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  code *in_x9;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  
  uVar5 = param_2._8_8_;
  uVar4 = param_2._0_8_;
  while( true ) {
    uStack0000000000000020 = uVar4;
    uStack0000000000000028 = uVar5;
    uStack0000000000000030 = param_1;
    uVar2 = (*in_x9)(param_3,&stack0x00000020,*(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar2 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 + 1;
    unaff_x23 = unaff_x23 + -1;
    unaff_x22 = unaff_x22 + 0x18;
    if (unaff_x23 == 0) {
      return 0xffffffff;
    }
    lVar3 = *(long *)(unaff_x21 + 0x10);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    puVar1 = (undefined8 *)(lVar3 + unaff_x22);
    param_1 = puVar1[2];
    uVar5 = puVar1[1];
    uVar4 = *puVar1;
    if (unaff_x20 == 0) break;
    in_x9 = *(code **)(unaff_x20 + 0x18);
    param_3 = *(undefined8 *)(unaff_x20 + 0x40);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


