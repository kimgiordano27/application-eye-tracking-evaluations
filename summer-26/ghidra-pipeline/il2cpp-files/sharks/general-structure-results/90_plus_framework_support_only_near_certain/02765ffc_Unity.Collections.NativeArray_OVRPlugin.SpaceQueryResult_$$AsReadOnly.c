/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$AsReadOnly
ENTRY_POINT: 02765ffc
PROGRAM: sharks-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__AsReadOnly(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 in_x9;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  uint unaff_w24;
  int unaff_w25;
  long unaff_x26;
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
  undefined8 uStack0000000000000060;
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
    uStack0000000000000060 = in_x9;
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    in_stack_00000158 = in_stack_00000078;
    in_stack_00000150 = in_stack_00000070;
    in_stack_00000160 = in_stack_00000080;
    in_stack_00000138 = in_stack_00000058;
    in_stack_00000130 = in_stack_00000050;
    in_stack_00000140 = uStack0000000000000060;
    iVar2 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000150,&stack0x00000130,
                       *(undefined8 *)(unaff_x21 + 0x28));
    if (-1 < iVar2) {
      unaff_w29 = unaff_w25 + unaff_w24;
LAB_027660b4:
      if (unaff_w29 < *(uint *)(unaff_x19 + 0x18)) {
        lVar3 = unaff_x19 + (long)(int)unaff_w29 * 0x18;
        *(undefined8 *)(lVar3 + 0x30) = in_stack_00000120;
        *(undefined8 *)(lVar3 + 0x28) = in_stack_00000118;
        *(undefined8 *)(lVar3 + 0x20) = in_stack_00000110;
        thunk_FUN_0188fd20(lVar3 + 0x20,0);
        return;
      }
LAB_02766118:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) goto LAB_02766118;
    uVar7 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25 + unaff_w24) goto LAB_02766118;
    lVar3 = unaff_x19 + (int)(unaff_w25 + unaff_w24) * unaff_x26;
    *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(unaff_x22 + 0x30);
    *(undefined8 *)(lVar3 + 0x28) = uVar7;
    *(undefined8 *)(lVar3 + 0x20) = uVar5;
    thunk_FUN_0188fd20(lVar3 + 0x20,0);
    if (unaff_w27 < (int)uVar6) goto LAB_027660b4;
    unaff_w28 = uVar6 * 2;
    iVar2 = (int)unaff_x26;
    if ((int)unaff_w28 < unaff_w23) {
      uVar1 = unaff_w28 + in_stack_00000008._4_4_;
      if (*(uint *)(unaff_x19 + 0x18) <= uVar1 - 1) goto LAB_02766118;
      lVar3 = unaff_x19 + (long)(int)(uVar1 - 1) * (long)iVar2;
      uVar5 = *(undefined8 *)(lVar3 + 0x30);
      uVar9 = *(undefined8 *)(lVar3 + 0x28);
      uVar7 = *(undefined8 *)(lVar3 + 0x20);
      if (*(uint *)(unaff_x19 + 0x18) <= uVar1) goto LAB_02766118;
      lVar3 = unaff_x19 + (long)(int)uVar1 * (long)iVar2;
      uVar4 = *(undefined8 *)(lVar3 + 0x30);
      uVar10 = *(undefined8 *)(lVar3 + 0x28);
      uVar8 = *(undefined8 *)(lVar3 + 0x20);
      if (unaff_x21 == 0) {
LAB_0276611c:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      in_stack_00000130 = uVar8;
      in_stack_00000138 = uVar10;
      in_stack_00000140 = uVar4;
      in_stack_00000150 = uVar7;
      in_stack_00000158 = uVar9;
      in_stack_00000160 = uVar5;
      uVar1 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000150,&stack0x00000130,
                         *(undefined8 *)(unaff_x21 + 0x28));
      unaff_w28 = unaff_w28 | uVar1 >> 0x1f;
    }
    unaff_w29 = unaff_w25 + unaff_w28;
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) goto LAB_02766118;
    unaff_x22 = unaff_x19 + (long)(int)unaff_w29 * (long)iVar2;
    in_x9 = *(undefined8 *)(unaff_x22 + 0x30);
    in_stack_00000058 = *(undefined8 *)(unaff_x22 + 0x28);
    in_stack_00000050 = *(undefined8 *)(unaff_x22 + 0x20);
    if (unaff_x21 == 0) goto LAB_0276611c;
    in_stack_00000080 = in_stack_00000120;
    in_stack_00000078 = in_stack_00000118;
    in_stack_00000070 = in_stack_00000110;
    unaff_w24 = uVar6;
  } while( true );
}


