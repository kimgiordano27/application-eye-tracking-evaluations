/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$op_Implicit
ENTRY_POINT: 04a12bb0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__op_Implicit(void)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
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
    uVar3 = unaff_w27 + in_stack_00000008._4_4_;
    if (*(uint *)(unaff_x19 + 0x18) <= uVar3 - 1) break;
    lVar1 = unaff_x19 + (long)(int)(uVar3 - 1) * 0x20;
    uVar13 = *(undefined8 *)(lVar1 + 0x28);
    uVar11 = *(undefined8 *)(lVar1 + 0x20);
    uVar9 = *(undefined8 *)(lVar1 + 0x38);
    uVar7 = *(undefined8 *)(lVar1 + 0x30);
    if (*(uint *)(unaff_x19 + 0x18) <= uVar3) break;
    lVar1 = unaff_x19 + (long)(int)uVar3 * 0x20;
    uVar14 = *(undefined8 *)(lVar1 + 0x28);
    uVar12 = *(undefined8 *)(lVar1 + 0x20);
    uVar10 = *(undefined8 *)(lVar1 + 0x38);
    uVar8 = *(undefined8 *)(lVar1 + 0x30);
    if (unaff_x21 == 0) {
LAB_04a12d60:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_0322bef4();
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
      if (*(uint *)(unaff_x19 + 0x18) <= uVar6) goto LAB_04a12d5c;
      lVar5 = (long)(int)uVar6;
      lVar1 = unaff_x19 + lVar5 * 0x20;
      uVar13 = *(undefined8 *)(lVar1 + 0x28);
      uVar11 = *(undefined8 *)(lVar1 + 0x20);
      uVar9 = *(undefined8 *)(lVar1 + 0x38);
      uVar7 = *(undefined8 *)(lVar1 + 0x30);
      if (unaff_x21 == 0) goto LAB_04a12d60;
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_0322bef4();
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
LAB_04a12d10:
        if (uVar6 < *(uint *)(unaff_x19 + 0x18)) {
          lVar1 = unaff_x19 + lVar5 * 0x20;
          *(undefined8 *)(lVar1 + 0x28) = in_stack_00000118;
          *(undefined8 *)(lVar1 + 0x20) = in_stack_00000110;
          *(undefined8 *)(lVar1 + 0x38) = in_stack_00000128;
          *(undefined8 *)(lVar1 + 0x30) = in_stack_00000120;
          thunk_FUN_0329bf60(lVar1 + 0x30,0);
          return;
        }
        goto LAB_04a12d5c;
      }
      if (*(uint *)(unaff_x19 + 0x18) <= uVar6) goto LAB_04a12d5c;
      uVar11 = *(undefined8 *)(lVar1 + 0x20);
      uVar9 = *(undefined8 *)(lVar1 + 0x38);
      uVar7 = *(undefined8 *)(lVar1 + 0x30);
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25 + uVar3) goto LAB_04a12d5c;
      lVar2 = unaff_x19 + (long)(int)(unaff_w25 + uVar3) * 0x20;
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
      *(undefined8 *)(lVar2 + 0x20) = uVar11;
      *(undefined8 *)(lVar2 + 0x38) = uVar9;
      *(undefined8 *)(lVar2 + 0x30) = uVar7;
      thunk_FUN_0329bf60(lVar2 + 0x30,0);
      if (unaff_w26 < (int)unaff_w24) goto LAB_04a12d10;
      unaff_w27 = unaff_w24 * 2;
      uVar3 = unaff_w24;
    } while (unaff_w23 <= (int)unaff_w27);
  }
LAB_04a12d5c:
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


