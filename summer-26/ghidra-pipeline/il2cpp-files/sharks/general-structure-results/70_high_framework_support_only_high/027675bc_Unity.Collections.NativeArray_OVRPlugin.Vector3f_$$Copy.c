/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 027675bc
PROGRAM: sharks-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy
               (undefined8 param_1,undefined8 param_2,int param_3,int param_4,long param_5,
               long param_6)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint in_w8;
  long in_x9;
  long unaff_x19;
  uint unaff_w24;
  int unaff_w25;
  uint uVar6;
  long unaff_x28;
  uint unaff_w29;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack0000000000000110;
  undefined8 uStack0000000000000118;
  undefined8 uStack0000000000000120;
  undefined8 uStack0000000000000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  
  uStack0000000000000118 = *(undefined8 *)(in_x9 + 0x28);
  uStack0000000000000110 = *(undefined8 *)(in_x9 + 0x20);
  uStack0000000000000128 = *(undefined8 *)(in_x9 + 0x38);
  uStack0000000000000120 = *(undefined8 *)(in_x9 + 0x30);
  iVar3 = param_3;
  if (param_3 < 0) {
    iVar3 = param_3 + 1;
  }
  if ((int)unaff_w24 <= iVar3 >> 1) {
    do {
      uVar6 = unaff_w24 * 2;
      if ((int)uVar6 < param_3) {
        uVar4 = uVar6 + param_4;
        if (*(uint *)(unaff_x19 + 0x18) <= uVar4 - 1) goto LAB_027677a0;
        lVar1 = unaff_x19 + (long)(int)(uVar4 - 1) * 0x20;
        uVar13 = *(undefined8 *)(lVar1 + 0x28);
        uVar11 = *(undefined8 *)(lVar1 + 0x20);
        uVar9 = *(undefined8 *)(lVar1 + 0x38);
        uVar7 = *(undefined8 *)(lVar1 + 0x30);
        if (*(uint *)(unaff_x19 + 0x18) <= uVar4) goto LAB_027677a0;
        lVar1 = unaff_x19 + (long)(int)uVar4 * 0x20;
        uVar14 = *(undefined8 *)(lVar1 + 0x28);
        uVar12 = *(undefined8 *)(lVar1 + 0x20);
        uVar10 = *(undefined8 *)(lVar1 + 0x38);
        uVar8 = *(undefined8 *)(lVar1 + 0x30);
        if (param_5 == 0) goto LAB_027677a4;
        if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
          FUN_0185daa4();
        }
        in_stack_00000130 = uVar12;
        in_stack_00000138 = uVar14;
        in_stack_00000140 = uVar8;
        in_stack_00000148 = uVar10;
        in_stack_00000150 = uVar11;
        in_stack_00000158 = uVar13;
        in_stack_00000160 = uVar7;
        in_stack_00000168 = uVar9;
        uVar4 = (**(code **)(param_5 + 0x18))
                          (*(undefined8 *)(param_5 + 0x40),&stack0x00000150,&stack0x00000130,
                           *(undefined8 *)(param_5 + 0x28));
        uVar6 = uVar6 | uVar4 >> 0x1f;
      }
      uVar13 = uStack0000000000000128;
      uVar11 = uStack0000000000000120;
      uVar9 = uStack0000000000000118;
      uVar7 = uStack0000000000000110;
      unaff_w29 = unaff_w25 + uVar6;
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) goto LAB_027677a0;
      unaff_x28 = (long)(int)unaff_w29;
      lVar1 = unaff_x19 + unaff_x28 * 0x20;
      uVar14 = *(undefined8 *)(lVar1 + 0x28);
      uVar12 = *(undefined8 *)(lVar1 + 0x20);
      uVar10 = *(undefined8 *)(lVar1 + 0x38);
      uVar8 = *(undefined8 *)(lVar1 + 0x30);
      if (param_5 == 0) {
LAB_027677a4:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      in_stack_00000158 = uVar9;
      in_stack_00000150 = uVar7;
      in_stack_00000168 = uVar13;
      in_stack_00000160 = uVar11;
      in_stack_00000130 = uVar12;
      in_stack_00000138 = uVar14;
      in_stack_00000140 = uVar8;
      in_stack_00000148 = uVar10;
      iVar5 = (**(code **)(param_5 + 0x18))
                        (*(undefined8 *)(param_5 + 0x40),&stack0x00000150,&stack0x00000130,
                         *(undefined8 *)(param_5 + 0x28));
      if (-1 < iVar5) {
        unaff_w29 = unaff_w25 + unaff_w24;
        unaff_x28 = (long)(int)unaff_w29;
        break;
      }
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) goto LAB_027677a0;
      uVar11 = *(undefined8 *)(lVar1 + 0x20);
      uVar9 = *(undefined8 *)(lVar1 + 0x38);
      uVar7 = *(undefined8 *)(lVar1 + 0x30);
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25 + unaff_w24) goto LAB_027677a0;
      lVar2 = unaff_x19 + (long)(int)(unaff_w25 + unaff_w24) * 0x20;
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
      *(undefined8 *)(lVar2 + 0x20) = uVar11;
      *(undefined8 *)(lVar2 + 0x38) = uVar9;
      *(undefined8 *)(lVar2 + 0x30) = uVar7;
      thunk_FUN_0188fd20(lVar2 + 0x20,0);
      unaff_w24 = uVar6;
    } while ((int)uVar6 <= iVar3 >> 1);
    in_w8 = *(uint *)(unaff_x19 + 0x18);
  }
  if (unaff_w29 < in_w8) {
    lVar1 = unaff_x19 + unaff_x28 * 0x20;
    *(undefined8 *)(lVar1 + 0x28) = uStack0000000000000118;
    *(undefined8 *)(lVar1 + 0x20) = uStack0000000000000110;
    *(undefined8 *)(lVar1 + 0x38) = uStack0000000000000128;
    *(undefined8 *)(lVar1 + 0x30) = uStack0000000000000120;
    thunk_FUN_0188fd20(lVar1 + 0x20,0);
    return;
  }
LAB_027677a0:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


