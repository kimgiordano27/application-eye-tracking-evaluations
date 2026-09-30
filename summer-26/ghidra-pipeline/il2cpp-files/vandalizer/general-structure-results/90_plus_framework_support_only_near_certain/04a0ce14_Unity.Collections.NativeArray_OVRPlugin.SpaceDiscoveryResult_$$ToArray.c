/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$ToArray
ENTRY_POINT: 04a0ce14
PROGRAM: vandalizer-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__ToArray
               (undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 uStack0000000000000120;
  undefined8 uStack0000000000000128;
  undefined8 uStack0000000000000130;
  undefined8 uStack0000000000000138;
  undefined8 uStack0000000000000140;
  undefined8 uStack0000000000000148;
  undefined8 uStack0000000000000150;
  undefined8 uStack0000000000000160;
  undefined8 uStack0000000000000170;
  undefined8 uStack0000000000000178;
  
  uStack0000000000000178 = in_stack_00000088;
  uStack0000000000000170 = in_stack_00000080;
  uStack0000000000000128 = in_stack_00000038;
  uStack0000000000000120 = in_stack_00000030;
  uStack0000000000000138 = in_stack_00000048;
  uStack0000000000000130 = in_stack_00000040;
  uStack0000000000000148 = in_stack_00000058;
  uStack0000000000000140 = in_stack_00000050;
  uStack0000000000000150 = param_1;
  uStack0000000000000160 = param_2;
  iVar1 = (**(code **)(unaff_x22 + 0x18))
                    (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000150,&stack0x00000120,
                     *(undefined8 *)(unaff_x22 + 0x28));
  if (iVar1 < 1) {
    return;
  }
  if (unaff_w21 < *(uint *)(unaff_x20 + 0x18)) {
    uVar8 = *(undefined8 *)(unaff_x23 + 0x38);
    uVar6 = *(undefined8 *)(unaff_x23 + 0x30);
    uVar4 = *(undefined8 *)(unaff_x23 + 0x48);
    uVar2 = *(undefined8 *)(unaff_x23 + 0x40);
    uVar11 = *(undefined8 *)(unaff_x23 + 0x28);
    uVar9 = *(undefined8 *)(unaff_x23 + 0x20);
    if (unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
      uVar7 = *(undefined8 *)(unaff_x24 + 0x30);
      uVar5 = *(undefined8 *)(unaff_x24 + 0x48);
      uVar3 = *(undefined8 *)(unaff_x24 + 0x40);
      uVar12 = *(undefined8 *)(unaff_x24 + 0x28);
      uVar10 = *(undefined8 *)(unaff_x24 + 0x20);
      *(undefined8 *)(unaff_x23 + 0x38) = *(undefined8 *)(unaff_x24 + 0x38);
      *(undefined8 *)(unaff_x23 + 0x30) = uVar7;
      *(undefined8 *)(unaff_x23 + 0x48) = uVar5;
      *(undefined8 *)(unaff_x23 + 0x40) = uVar3;
      *(undefined8 *)(unaff_x23 + 0x28) = uVar12;
      *(undefined8 *)(unaff_x23 + 0x20) = uVar10;
      if (unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined8 *)(unaff_x24 + 0x38) = uVar8;
        *(undefined8 *)(unaff_x24 + 0x30) = uVar6;
        *(undefined8 *)(unaff_x24 + 0x48) = uVar4;
        *(undefined8 *)(unaff_x24 + 0x40) = uVar2;
        *(undefined8 *)(unaff_x24 + 0x28) = uVar11;
        *(undefined8 *)(unaff_x24 + 0x20) = uVar9;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


