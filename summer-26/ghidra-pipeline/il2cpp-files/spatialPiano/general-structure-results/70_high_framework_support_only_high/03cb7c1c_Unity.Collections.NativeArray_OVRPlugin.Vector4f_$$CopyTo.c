/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopyTo
ENTRY_POINT: 03cb7c1c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopyTo
               (code *param_1,undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16],undefined1 param_5 [16],undefined8 param_6,
               undefined8 *param_7,undefined8 param_8)

{
  ulong uVar1;
  long lVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  
  uStack0000000000000078 = param_5._8_8_;
  uStack0000000000000070 = param_5._0_8_;
  uStack0000000000000068 = param_4._8_8_;
  uStack0000000000000060 = param_4._0_8_;
  while( true ) {
    uVar1 = (*param_1)(param_6,param_7,param_8);
    unaff_x23 = unaff_x23 - 1;
    if ((uVar1 & 1) != 0) break;
    unaff_w22 = unaff_w22 - 1;
    if ((int)unaff_w22 < 0) {
      unaff_x19[1] = 0;
      *unaff_x19 = 0;
      unaff_x19[3] = 0;
      unaff_x19[2] = 0;
      unaff_x19[5] = 0;
      unaff_x19[4] = 0;
      unaff_x19[7] = 0;
      unaff_x19[6] = 0;
      return;
    }
    lVar2 = *(long *)(unaff_x20 + 0x10);
    if (lVar2 == 0) goto LAB_03cb7c7c;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w22) goto LAB_03cb7c80;
    if (unaff_x21 == 0) goto LAB_03cb7c7c;
    unaff_x24 = unaff_x23 & 0xffffffff;
    param_6 = *(undefined8 *)(unaff_x21 + 0x40);
    param_8 = *(undefined8 *)(unaff_x21 + 0x28);
    lVar2 = lVar2 + unaff_x24 * 0x40;
    param_7 = &stack0x00000040;
    in_stack_00000048 = *(undefined8 *)(lVar2 + 0x28);
    in_stack_00000040 = *(undefined8 *)(lVar2 + 0x20);
    in_stack_00000058 = *(undefined8 *)(lVar2 + 0x38);
    in_stack_00000050 = *(undefined8 *)(lVar2 + 0x30);
    uStack0000000000000068 = *(undefined8 *)(lVar2 + 0x48);
    uStack0000000000000060 = *(undefined8 *)(lVar2 + 0x40);
    uStack0000000000000078 = *(undefined8 *)(lVar2 + 0x58);
    uStack0000000000000070 = *(undefined8 *)(lVar2 + 0x50);
    param_1 = *(code **)(unaff_x21 + 0x18);
  }
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (lVar2 != 0) {
    if (unaff_w22 < *(uint *)(lVar2 + 0x18)) {
      lVar2 = lVar2 + unaff_x24 * 0x40;
      uVar3 = *(undefined8 *)(lVar2 + 0x20);
      uVar5 = *(undefined8 *)(lVar2 + 0x38);
      uVar4 = *(undefined8 *)(lVar2 + 0x30);
      unaff_x19[1] = *(undefined8 *)(lVar2 + 0x28);
      *unaff_x19 = uVar3;
      unaff_x19[3] = uVar5;
      unaff_x19[2] = uVar4;
      uVar3 = *(undefined8 *)(lVar2 + 0x40);
      uVar5 = *(undefined8 *)(lVar2 + 0x58);
      uVar4 = *(undefined8 *)(lVar2 + 0x50);
      unaff_x19[5] = *(undefined8 *)(lVar2 + 0x48);
      unaff_x19[4] = uVar3;
      unaff_x19[7] = uVar5;
      unaff_x19[6] = uVar4;
      return;
    }
LAB_03cb7c80:
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
LAB_03cb7c7c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


