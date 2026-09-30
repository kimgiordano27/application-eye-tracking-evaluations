/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$set_Item
ENTRY_POINT: 050a3100
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__set_Item
               (code *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000090;
  
  uStack0000000000000068 = in_stack_00000008;
  uStack0000000000000060 = in_stack_00000000;
  uStack0000000000000078 = in_stack_00000018;
  uStack0000000000000070 = in_stack_00000010;
  uStack0000000000000080 = param_2;
  uStack0000000000000090 = param_3;
  iVar1 = (*param_1)();
  if (iVar1 < 1) {
    return;
  }
  if (unaff_w21 < *(uint *)(unaff_x20 + 0x18)) {
    uVar4 = *(undefined8 *)(unaff_x26 + 0x28);
    uVar2 = *(undefined8 *)(unaff_x26 + 0x20);
    uVar8 = *(undefined8 *)(unaff_x26 + 0x38);
    uVar6 = *(undefined8 *)(unaff_x26 + 0x30);
    if (unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
      uVar7 = *(undefined8 *)(unaff_x24 + 0x20);
      uVar5 = *(undefined8 *)(unaff_x24 + 0x38);
      uVar3 = *(undefined8 *)(unaff_x24 + 0x30);
      *(undefined8 *)(unaff_x26 + 0x28) = *(undefined8 *)(unaff_x24 + 0x28);
      *(undefined8 *)(unaff_x26 + 0x20) = uVar7;
      *(undefined8 *)(unaff_x26 + 0x38) = uVar5;
      *(undefined8 *)(unaff_x26 + 0x30) = uVar3;
      thunk_FUN_03afed3c(unaff_x20 + 0x20 + unaff_x25 * 0x20,0);
      if (unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined8 *)(unaff_x24 + 0x28) = uVar4;
        *(undefined8 *)(unaff_x24 + 0x20) = uVar2;
        *(undefined8 *)(unaff_x24 + 0x38) = uVar8;
        *(undefined8 *)(unaff_x24 + 0x30) = uVar6;
        thunk_FUN_03afed3c(unaff_x20 + 0x20 + unaff_x23 * 0x20,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


