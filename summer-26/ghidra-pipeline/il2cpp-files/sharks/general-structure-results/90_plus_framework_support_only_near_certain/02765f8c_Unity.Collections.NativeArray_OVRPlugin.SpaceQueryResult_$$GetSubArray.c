/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$GetSubArray
ENTRY_POINT: 02765f8c
PROGRAM: sharks-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__GetSubArray
               (code *param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 in_x10;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar6;
  int unaff_w23;
  uint unaff_w24;
  int unaff_w25;
  int iVar7;
  long unaff_x26;
  int unaff_w27;
  uint unaff_w28;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 uStack0000000000000130;
  undefined8 uStack0000000000000138;
  undefined8 uStack0000000000000140;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  
  uVar11 = param_3._8_8_;
  uVar3 = param_3._0_8_;
  do {
    uStack0000000000000130 = uVar3;
    uStack0000000000000138 = uVar11;
    uStack0000000000000140 = in_x10;
    uVar1 = (*param_1)(param_4,&stack0x00000150,&stack0x00000130,*(undefined8 *)(unaff_x21 + 0x28));
    unaff_w28 = unaff_w28 | uVar1 >> 0x1f;
    uVar1 = unaff_w24;
    do {
      unaff_w24 = unaff_w28;
      uVar8 = unaff_w25 + unaff_w24;
      if (*(uint *)(unaff_x19 + 0x18) <= uVar8) goto LAB_02766118;
      iVar7 = (int)unaff_x26;
      lVar6 = unaff_x19 + (long)(int)uVar8 * (long)iVar7;
      uVar3 = *(undefined8 *)(lVar6 + 0x30);
      uVar5 = *(undefined8 *)(lVar6 + 0x28);
      uVar11 = *(undefined8 *)(lVar6 + 0x20);
      if (unaff_x21 == 0) goto LAB_0276611c;
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      in_stack_00000158 = in_stack_00000118;
      in_stack_00000150 = in_stack_00000110;
      in_stack_00000160 = in_stack_00000120;
      uStack0000000000000130 = uVar11;
      uStack0000000000000138 = uVar5;
      uStack0000000000000140 = uVar3;
      iVar2 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000150,&stack0x00000130,
                         *(undefined8 *)(unaff_x21 + 0x28));
      if (-1 < iVar2) {
        uVar8 = unaff_w25 + uVar1;
LAB_027660b4:
        if (uVar8 < *(uint *)(unaff_x19 + 0x18)) {
          lVar6 = unaff_x19 + (long)(int)uVar8 * 0x18;
          *(undefined8 *)(lVar6 + 0x30) = in_stack_00000120;
          *(undefined8 *)(lVar6 + 0x28) = in_stack_00000118;
          *(undefined8 *)(lVar6 + 0x20) = in_stack_00000110;
          thunk_FUN_0188fd20(lVar6 + 0x20,0);
          return;
        }
        goto LAB_02766118;
      }
      if (*(uint *)(unaff_x19 + 0x18) <= uVar8) goto LAB_02766118;
      uVar11 = *(undefined8 *)(lVar6 + 0x28);
      uVar3 = *(undefined8 *)(lVar6 + 0x20);
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25 + uVar1) goto LAB_02766118;
      lVar4 = unaff_x19 + (int)(unaff_w25 + uVar1) * unaff_x26;
      *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(lVar6 + 0x30);
      *(undefined8 *)(lVar4 + 0x28) = uVar11;
      *(undefined8 *)(lVar4 + 0x20) = uVar3;
      thunk_FUN_0188fd20(lVar4 + 0x20,0);
      if (unaff_w27 < (int)unaff_w24) goto LAB_027660b4;
      unaff_w28 = unaff_w24 * 2;
      uVar1 = unaff_w24;
    } while (unaff_w23 <= (int)unaff_w28);
    uVar1 = unaff_w28 + in_stack_00000008._4_4_;
    if (*(uint *)(unaff_x19 + 0x18) <= uVar1 - 1) {
LAB_02766118:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    lVar6 = unaff_x19 + (long)(int)(uVar1 - 1) * (long)iVar7;
    uVar5 = *(undefined8 *)(lVar6 + 0x30);
    uVar10 = *(undefined8 *)(lVar6 + 0x28);
    uVar9 = *(undefined8 *)(lVar6 + 0x20);
    if (*(uint *)(unaff_x19 + 0x18) <= uVar1) goto LAB_02766118;
    lVar6 = unaff_x19 + (long)(int)uVar1 * (long)iVar7;
    in_x10 = *(undefined8 *)(lVar6 + 0x30);
    uVar11 = *(undefined8 *)(lVar6 + 0x28);
    uVar3 = *(undefined8 *)(lVar6 + 0x20);
    if (unaff_x21 == 0) {
LAB_0276611c:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    param_1 = *(code **)(unaff_x21 + 0x18);
    param_4 = *(undefined8 *)(unaff_x21 + 0x40);
    in_stack_00000150 = uVar9;
    in_stack_00000158 = uVar10;
    in_stack_00000160 = uVar5;
  } while( true );
}


