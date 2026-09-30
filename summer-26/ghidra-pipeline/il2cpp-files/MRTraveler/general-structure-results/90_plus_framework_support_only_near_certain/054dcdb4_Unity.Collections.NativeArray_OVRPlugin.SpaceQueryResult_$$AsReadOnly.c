/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$AsReadOnly
ENTRY_POINT: 054dcdb4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__AsReadOnly(undefined1 param_1 [16])

{
  uint uVar1;
  undefined1 in_CY;
  uint uVar2;
  int iVar3;
  uint in_w9;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w23;
  int unaff_w25;
  int unaff_w26;
  int unaff_w27;
  uint unaff_w28;
  uint unaff_w29;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000008;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  
  uStack0000000000000038 = param_1._8_8_;
  uStack0000000000000030 = param_1._0_8_;
  do {
    if ((bool)in_CY) {
LAB_054dce3c:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    lVar5 = unaff_x19 + (long)(int)in_w9 * (long)unaff_w26;
    *(undefined8 *)(lVar5 + 0x30) = in_stack_00000040;
    *(undefined8 *)(lVar5 + 0x28) = uStack0000000000000038;
    *(undefined8 *)(lVar5 + 0x20) = uStack0000000000000030;
    if (unaff_w27 < (int)unaff_w28) {
LAB_054dcde8:
      if (unaff_w29 < *(uint *)(unaff_x19 + 0x18)) {
        lVar5 = unaff_x19 + (long)(int)unaff_w29 * 0x18;
        *(undefined8 *)(lVar5 + 0x30) = in_stack_00000120;
        *(undefined8 *)(lVar5 + 0x28) = in_stack_00000118;
        *(undefined8 *)(lVar5 + 0x20) = in_stack_00000110;
        return;
      }
      goto LAB_054dce3c;
    }
    uVar1 = unaff_w28 * 2;
    if ((int)uVar1 < unaff_w23) {
      uVar2 = uVar1 + in_stack_00000008._4_4_;
      if (*(uint *)(unaff_x19 + 0x18) <= uVar2 - 1) goto LAB_054dce3c;
      lVar5 = unaff_x19 + (long)(int)(uVar2 - 1) * (long)unaff_w26;
      uVar6 = *(undefined8 *)(lVar5 + 0x30);
      uVar9 = *(undefined8 *)(lVar5 + 0x28);
      uVar7 = *(undefined8 *)(lVar5 + 0x20);
      if (*(uint *)(unaff_x19 + 0x18) <= uVar2) goto LAB_054dce3c;
      lVar5 = unaff_x19 + (long)(int)uVar2 * (long)unaff_w26;
      uVar4 = *(undefined8 *)(lVar5 + 0x30);
      uVar10 = *(undefined8 *)(lVar5 + 0x28);
      uVar8 = *(undefined8 *)(lVar5 + 0x20);
      if (unaff_x21 == 0) goto LAB_054dce40;
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_03cf1244();
      }
      in_stack_00000130 = uVar8;
      in_stack_00000138 = uVar10;
      in_stack_00000140 = uVar4;
      in_stack_00000150 = uVar7;
      in_stack_00000158 = uVar9;
      in_stack_00000160 = uVar6;
      uVar2 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000150,&stack0x00000130,
                         *(undefined8 *)(unaff_x21 + 0x28));
      uVar1 = uVar1 | uVar2 >> 0x1f;
    }
    unaff_w29 = unaff_w25 + uVar1;
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) goto LAB_054dce3c;
    lVar5 = unaff_x19 + (long)(int)unaff_w29 * (long)unaff_w26;
    uVar6 = *(undefined8 *)(lVar5 + 0x30);
    uVar9 = *(undefined8 *)(lVar5 + 0x28);
    uVar7 = *(undefined8 *)(lVar5 + 0x20);
    if (unaff_x21 == 0) {
LAB_054dce40:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_03cf1244();
    }
    in_stack_00000158 = in_stack_00000118;
    in_stack_00000150 = in_stack_00000110;
    in_stack_00000160 = in_stack_00000120;
    in_stack_00000130 = uVar7;
    in_stack_00000138 = uVar9;
    in_stack_00000140 = uVar6;
    iVar3 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000150,&stack0x00000130,
                       *(undefined8 *)(unaff_x21 + 0x28));
    if (-1 < iVar3) {
      unaff_w29 = unaff_w25 + unaff_w28;
      goto LAB_054dcde8;
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) goto LAB_054dce3c;
    in_stack_00000040 = *(undefined8 *)(lVar5 + 0x30);
    uStack0000000000000038 = *(undefined8 *)(lVar5 + 0x28);
    uStack0000000000000030 = *(undefined8 *)(lVar5 + 0x20);
    in_w9 = unaff_w25 + unaff_w28;
    in_CY = *(uint *)(unaff_x19 + 0x18) <= in_w9;
    unaff_w28 = uVar1;
  } while( true );
}


