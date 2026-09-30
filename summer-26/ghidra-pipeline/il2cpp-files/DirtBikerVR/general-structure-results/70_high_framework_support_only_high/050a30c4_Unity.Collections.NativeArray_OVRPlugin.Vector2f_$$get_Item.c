/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$get_Item
ENTRY_POINT: 050a30c4
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


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__get_Item(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x25;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  
  lVar1 = unaff_x20 + unaff_x25 * 0x20;
  lVar2 = unaff_x20 + unaff_x23 * 0x20;
  uStack0000000000000028 = *(undefined8 *)(lVar1 + 0x28);
  uStack0000000000000020 = *(undefined8 *)(lVar1 + 0x20);
  uStack0000000000000038 = *(undefined8 *)(lVar1 + 0x38);
  uStack0000000000000030 = *(undefined8 *)(lVar1 + 0x30);
  uStack0000000000000008 = *(undefined8 *)(lVar2 + 0x28);
  uStack0000000000000000 = *(undefined8 *)(lVar2 + 0x20);
  uStack0000000000000018 = *(undefined8 *)(lVar2 + 0x38);
  uStack0000000000000010 = *(undefined8 *)(lVar2 + 0x30);
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    FUN_03ac4090();
  }
  in_stack_00000088 = uStack0000000000000028;
  in_stack_00000080 = uStack0000000000000020;
  in_stack_00000098 = uStack0000000000000038;
  in_stack_00000090 = uStack0000000000000030;
  in_stack_00000068 = uStack0000000000000008;
  in_stack_00000060 = uStack0000000000000000;
  in_stack_00000078 = uStack0000000000000018;
  in_stack_00000070 = uStack0000000000000010;
  iVar3 = (**(code **)(unaff_x22 + 0x18))
                    (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000080,&stack0x00000060,
                     *(undefined8 *)(unaff_x22 + 0x28));
  if (iVar3 < 1) {
    return;
  }
  if (unaff_w21 < *(uint *)(unaff_x20 + 0x18)) {
    uVar6 = *(undefined8 *)(lVar1 + 0x28);
    uVar4 = *(undefined8 *)(lVar1 + 0x20);
    uVar10 = *(undefined8 *)(lVar1 + 0x38);
    uVar8 = *(undefined8 *)(lVar1 + 0x30);
    if (unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
      uVar9 = *(undefined8 *)(lVar2 + 0x20);
      uVar7 = *(undefined8 *)(lVar2 + 0x38);
      uVar5 = *(undefined8 *)(lVar2 + 0x30);
      *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
      *(undefined8 *)(lVar1 + 0x20) = uVar9;
      *(undefined8 *)(lVar1 + 0x38) = uVar7;
      *(undefined8 *)(lVar1 + 0x30) = uVar5;
      thunk_FUN_03afed3c(unaff_x20 + 0x20 + unaff_x25 * 0x20,0);
      if (unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = uVar6;
        *(undefined8 *)(lVar2 + 0x20) = uVar4;
        *(undefined8 *)(lVar2 + 0x38) = uVar10;
        *(undefined8 *)(lVar2 + 0x30) = uVar8;
        thunk_FUN_03afed3c(unaff_x20 + 0x20 + unaff_x23 * 0x20,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


