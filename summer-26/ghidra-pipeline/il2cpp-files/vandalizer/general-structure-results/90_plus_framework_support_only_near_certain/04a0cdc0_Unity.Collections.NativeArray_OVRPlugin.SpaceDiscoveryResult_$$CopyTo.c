/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopyTo
ENTRY_POINT: 04a0cdc0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopyTo
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
               undefined8 param_4,long param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  bool in_ZR;
  bool in_CY;
  int iVar1;
  int in_w9;
  uint unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x23;
  long lVar2;
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
  undefined8 uVar13;
  undefined8 uStack00000000000000c0;
  undefined8 uStack00000000000000d0;
  undefined8 uStack00000000000000e0;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  
  uVar10 = param_3._0_8_;
  uVar7 = param_2._0_8_;
  uVar4 = param_1._0_8_;
  uStack00000000000000c0 = uVar10;
  uStack00000000000000d0 = uVar7;
  uStack00000000000000e0 = uVar4;
  if (in_CY && !in_ZR) {
    lVar2 = unaff_x20 + (long)(int)unaff_w19 * (long)in_w9;
    uVar5 = *(undefined8 *)(lVar2 + 0x38);
    uVar9 = *(undefined8 *)(lVar2 + 0x30);
    uVar6 = *(undefined8 *)(lVar2 + 0x48);
    uVar3 = *(undefined8 *)(lVar2 + 0x40);
    uVar11 = *(undefined8 *)(lVar2 + 0x28);
    uVar8 = *(undefined8 *)(lVar2 + 0x20);
    if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if ((*(byte *)(*(long *)(param_8 + 0x20) + 0x135) & 1) == 0) {
      FUN_0322bef4();
    }
    in_stack_00000120 = uVar8;
    in_stack_00000128 = uVar11;
    in_stack_00000130 = uVar9;
    in_stack_00000138 = uVar5;
    in_stack_00000140 = uVar3;
    in_stack_00000148 = uVar6;
    in_stack_00000150 = uVar10;
    in_stack_00000158 = param_3._8_8_;
    in_stack_00000160 = uVar7;
    in_stack_00000168 = param_2._8_8_;
    in_stack_00000170 = uVar4;
    in_stack_00000178 = param_1._8_8_;
    iVar1 = (**(code **)(param_5 + 0x18))
                      (*(undefined8 *)(param_5 + 0x40),&stack0x00000150,&stack0x00000120,
                       *(undefined8 *)(param_5 + 0x28));
    if (iVar1 < 1) {
      return;
    }
    if (unaff_w21 < *(uint *)(unaff_x20 + 0x18)) {
      uVar3 = *(undefined8 *)(unaff_x23 + 0x38);
      uVar10 = *(undefined8 *)(unaff_x23 + 0x30);
      uVar7 = *(undefined8 *)(unaff_x23 + 0x48);
      uVar4 = *(undefined8 *)(unaff_x23 + 0x40);
      uVar9 = *(undefined8 *)(unaff_x23 + 0x28);
      uVar6 = *(undefined8 *)(unaff_x23 + 0x20);
      if (unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
        uVar11 = *(undefined8 *)(lVar2 + 0x30);
        uVar8 = *(undefined8 *)(lVar2 + 0x48);
        uVar5 = *(undefined8 *)(lVar2 + 0x40);
        uVar13 = *(undefined8 *)(lVar2 + 0x28);
        uVar12 = *(undefined8 *)(lVar2 + 0x20);
        *(undefined8 *)(unaff_x23 + 0x38) = *(undefined8 *)(lVar2 + 0x38);
        *(undefined8 *)(unaff_x23 + 0x30) = uVar11;
        *(undefined8 *)(unaff_x23 + 0x48) = uVar8;
        *(undefined8 *)(unaff_x23 + 0x40) = uVar5;
        *(undefined8 *)(unaff_x23 + 0x28) = uVar13;
        *(undefined8 *)(unaff_x23 + 0x20) = uVar12;
        if (unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x38) = uVar3;
          *(undefined8 *)(lVar2 + 0x30) = uVar10;
          *(undefined8 *)(lVar2 + 0x48) = uVar7;
          *(undefined8 *)(lVar2 + 0x40) = uVar4;
          *(undefined8 *)(lVar2 + 0x28) = uVar9;
          *(undefined8 *)(lVar2 + 0x20) = uVar6;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


