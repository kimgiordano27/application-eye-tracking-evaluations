/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$GetSubArray
ENTRY_POINT: 054dcd44
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__GetSubArray(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  uint unaff_w24;
  int unaff_w25;
  int unaff_w26;
  int unaff_w27;
  uint unaff_w28;
  uint uVar6;
  uint unaff_w29;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  
  do {
    uVar6 = unaff_w28;
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_03cf1244();
    }
    in_stack_00000158 = in_stack_00000078;
    in_stack_00000150 = in_stack_00000070;
    in_stack_00000160 = in_stack_00000080;
    in_stack_00000138 = in_stack_00000058;
    in_stack_00000130 = in_stack_00000050;
    in_stack_00000140 = in_stack_00000060;
    iVar2 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000150,&stack0x00000130,
                       *(undefined8 *)(unaff_x21 + 0x28));
    if (-1 < iVar2) {
      unaff_w29 = unaff_w25 + unaff_w24;
LAB_054dcde8:
      if (unaff_w29 < *(uint *)(unaff_x19 + 0x18)) {
        lVar4 = unaff_x19 + (long)(int)unaff_w29 * 0x18;
        *(undefined8 *)(lVar4 + 0x30) = in_stack_00000120;
        *(undefined8 *)(lVar4 + 0x28) = in_stack_00000118;
        *(undefined8 *)(lVar4 + 0x20) = in_stack_00000110;
        return;
      }
LAB_054dce3c:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) goto LAB_054dce3c;
    uVar7 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25 + unaff_w24) goto LAB_054dce3c;
    lVar4 = unaff_x19 + (long)(int)(unaff_w25 + unaff_w24) * (long)unaff_w26;
    *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(unaff_x22 + 0x30);
    *(undefined8 *)(lVar4 + 0x28) = uVar7;
    *(undefined8 *)(lVar4 + 0x20) = uVar5;
    if (unaff_w27 < (int)uVar6) goto LAB_054dcde8;
    unaff_w28 = uVar6 * 2;
    if ((int)unaff_w28 < unaff_w23) {
      uVar1 = unaff_w28 + in_stack_00000008._4_4_;
      if (*(uint *)(unaff_x19 + 0x18) <= uVar1 - 1) goto LAB_054dce3c;
      lVar4 = unaff_x19 + (long)(int)(uVar1 - 1) * (long)unaff_w26;
      uVar5 = *(undefined8 *)(lVar4 + 0x30);
      uVar9 = *(undefined8 *)(lVar4 + 0x28);
      uVar7 = *(undefined8 *)(lVar4 + 0x20);
      if (*(uint *)(unaff_x19 + 0x18) <= uVar1) goto LAB_054dce3c;
      lVar4 = unaff_x19 + (long)(int)uVar1 * (long)unaff_w26;
      uVar3 = *(undefined8 *)(lVar4 + 0x30);
      uVar10 = *(undefined8 *)(lVar4 + 0x28);
      uVar8 = *(undefined8 *)(lVar4 + 0x20);
      if (unaff_x21 == 0) {
LAB_054dce40:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_03cf1244();
      }
      in_stack_00000130 = uVar8;
      in_stack_00000138 = uVar10;
      in_stack_00000140 = uVar3;
      in_stack_00000150 = uVar7;
      in_stack_00000158 = uVar9;
      in_stack_00000160 = uVar5;
      uVar1 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000150,&stack0x00000130,
                         *(undefined8 *)(unaff_x21 + 0x28));
      unaff_w28 = unaff_w28 | uVar1 >> 0x1f;
    }
    unaff_w29 = unaff_w25 + unaff_w28;
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) goto LAB_054dce3c;
    unaff_x22 = unaff_x19 + (long)(int)unaff_w29 * (long)unaff_w26;
    in_stack_00000060 = *(undefined8 *)(unaff_x22 + 0x30);
    in_stack_00000058 = *(undefined8 *)(unaff_x22 + 0x28);
    in_stack_00000050 = *(undefined8 *)(unaff_x22 + 0x20);
    if (unaff_x21 == 0) goto LAB_054dce40;
    in_stack_00000080 = in_stack_00000120;
    in_stack_00000078 = in_stack_00000118;
    in_stack_00000070 = in_stack_00000110;
    unaff_w24 = uVar6;
  } while( true );
}


