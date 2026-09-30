/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 02767614
PROGRAM: sharks-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy(void)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint in_w8;
  uint in_w9;
  long in_x10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w23;
  uint unaff_w24;
  int unaff_w25;
  int unaff_w26;
  uint unaff_w27;
  long lVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 in_stack_00000008;
  undefined8 uStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  undefined8 uStack0000000000000100;
  undefined8 uStack0000000000000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
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
  
  while( true ) {
    uVar13 = *(undefined8 *)(in_x10 + 0x28);
    uVar11 = *(undefined8 *)(in_x10 + 0x20);
    uVar9 = *(undefined8 *)(in_x10 + 0x38);
    uVar7 = *(undefined8 *)(in_x10 + 0x30);
    uStack00000000000000f0 = uVar11;
    uStack00000000000000f8 = uVar13;
    uStack0000000000000100 = uVar7;
    uStack0000000000000108 = uVar9;
    if (in_w9 <= in_w8) break;
    lVar1 = unaff_x19 + (long)(int)in_w8 * 0x20;
    uVar14 = *(undefined8 *)(lVar1 + 0x28);
    uVar12 = *(undefined8 *)(lVar1 + 0x20);
    uVar10 = *(undefined8 *)(lVar1 + 0x38);
    uVar8 = *(undefined8 *)(lVar1 + 0x30);
    if (unaff_x21 == 0) {
LAB_027677a4:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
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
    uVar3 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000150,&stack0x00000130,
                       *(undefined8 *)(unaff_x21 + 0x28));
    unaff_w27 = unaff_w27 | uVar3 >> 0x1f;
    uVar3 = unaff_w24;
    do {
      unaff_w24 = unaff_w27;
      uVar6 = unaff_w25 + unaff_w24;
      uStack00000000000000f8 = in_stack_00000118;
      uStack00000000000000f0 = in_stack_00000110;
      uStack0000000000000108 = in_stack_00000128;
      uStack0000000000000100 = in_stack_00000120;
      if (*(uint *)(unaff_x19 + 0x18) <= uVar6) goto LAB_027677a0;
      lVar5 = (long)(int)uVar6;
      lVar1 = unaff_x19 + lVar5 * 0x20;
      uVar13 = *(undefined8 *)(lVar1 + 0x28);
      uVar11 = *(undefined8 *)(lVar1 + 0x20);
      uVar9 = *(undefined8 *)(lVar1 + 0x38);
      uVar7 = *(undefined8 *)(lVar1 + 0x30);
      if (unaff_x21 == 0) goto LAB_027677a4;
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      in_stack_00000158 = in_stack_00000118;
      in_stack_00000150 = in_stack_00000110;
      in_stack_00000168 = in_stack_00000128;
      in_stack_00000160 = in_stack_00000120;
      in_stack_00000130 = uVar11;
      in_stack_00000138 = uVar13;
      in_stack_00000140 = uVar7;
      in_stack_00000148 = uVar9;
      iVar4 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000150,&stack0x00000130,
                         *(undefined8 *)(unaff_x21 + 0x28));
      if (-1 < iVar4) {
        uVar6 = unaff_w25 + uVar3;
        lVar5 = (long)(int)uVar6;
FUN_02767754:
        if (uVar6 < *(uint *)(unaff_x19 + 0x18)) {
          lVar1 = unaff_x19 + lVar5 * 0x20;
          *(undefined8 *)(lVar1 + 0x28) = in_stack_00000118;
          *(undefined8 *)(lVar1 + 0x20) = in_stack_00000110;
          *(undefined8 *)(lVar1 + 0x38) = in_stack_00000128;
          *(undefined8 *)(lVar1 + 0x30) = in_stack_00000120;
          thunk_FUN_0188fd20(lVar1 + 0x20,0);
          return;
        }
        goto LAB_027677a0;
      }
      if (*(uint *)(unaff_x19 + 0x18) <= uVar6) goto LAB_027677a0;
      uVar11 = *(undefined8 *)(lVar1 + 0x20);
      uVar9 = *(undefined8 *)(lVar1 + 0x38);
      uVar7 = *(undefined8 *)(lVar1 + 0x30);
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25 + uVar3) goto LAB_027677a0;
      lVar2 = unaff_x19 + (long)(int)(unaff_w25 + uVar3) * 0x20;
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
      *(undefined8 *)(lVar2 + 0x20) = uVar11;
      *(undefined8 *)(lVar2 + 0x38) = uVar9;
      *(undefined8 *)(lVar2 + 0x30) = uVar7;
      thunk_FUN_0188fd20(lVar2 + 0x20,0);
      if (unaff_w26 < (int)unaff_w24) goto FUN_02767754;
      unaff_w27 = unaff_w24 * 2;
      uVar3 = unaff_w24;
    } while (unaff_w23 <= (int)unaff_w27);
    in_w9 = *(uint *)(unaff_x19 + 0x18);
    in_w8 = unaff_w27 + in_stack_00000008._4_4_;
    if (in_w9 <= in_w8 - 1) break;
    in_x10 = unaff_x19 + (long)(int)(in_w8 - 1) * 0x20;
  }
LAB_027677a0:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


