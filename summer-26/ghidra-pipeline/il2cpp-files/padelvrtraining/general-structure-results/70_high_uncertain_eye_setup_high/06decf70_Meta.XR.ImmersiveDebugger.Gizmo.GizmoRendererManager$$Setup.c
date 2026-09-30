/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRendererManager$$Setup
ENTRY_POINT: 06decf70
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoRendererManager__Setup(void)

{
  uint uVar1;
  int iVar2;
  uint in_w8;
  undefined8 uVar3;
  undefined8 *in_x9;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
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
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
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
    uStack0000000000000040 = in_x9[2];
    uStack0000000000000038 = in_x9[1];
    uStack0000000000000030 = *in_x9;
    if (in_w8 <= unaff_w25 + unaff_w24) {
LAB_06ded00c:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    lVar4 = unaff_x19 + (long)(int)(unaff_w25 + unaff_w24) * (long)unaff_w26;
    *(undefined8 *)(lVar4 + 0x30) = uStack0000000000000040;
    *(undefined8 *)(lVar4 + 0x28) = uStack0000000000000038;
    *(undefined8 *)(lVar4 + 0x20) = uStack0000000000000030;
    if (unaff_w27 < (int)uVar6) {
LAB_06decfb8:
      if (unaff_w29 < *(uint *)(unaff_x19 + 0x18)) {
        lVar4 = unaff_x19 + (long)(int)unaff_w29 * 0x18;
        *(undefined8 *)(lVar4 + 0x30) = in_stack_00000120;
        *(undefined8 *)(lVar4 + 0x28) = in_stack_00000118;
        *(undefined8 *)(lVar4 + 0x20) = in_stack_00000110;
        return;
      }
      goto LAB_06ded00c;
    }
    unaff_w28 = uVar6 * 2;
    if ((int)unaff_w28 < unaff_w23) {
      uVar1 = unaff_w28 + in_stack_00000008._4_4_;
      if (*(uint *)(unaff_x19 + 0x18) <= uVar1 - 1) goto LAB_06ded00c;
      lVar4 = unaff_x19 + (long)(int)(uVar1 - 1) * (long)unaff_w26;
      uVar5 = *(undefined8 *)(lVar4 + 0x30);
      uVar9 = *(undefined8 *)(lVar4 + 0x28);
      uVar7 = *(undefined8 *)(lVar4 + 0x20);
      if (*(uint *)(unaff_x19 + 0x18) <= uVar1) goto LAB_06ded00c;
      lVar4 = unaff_x19 + (long)(int)uVar1 * (long)unaff_w26;
      uVar3 = *(undefined8 *)(lVar4 + 0x30);
      uVar10 = *(undefined8 *)(lVar4 + 0x28);
      uVar8 = *(undefined8 *)(lVar4 + 0x20);
      if (unaff_x21 == 0) goto LAB_06ded010;
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_03d8f26c();
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
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) goto LAB_06ded00c;
    lVar4 = unaff_x19 + (long)(int)unaff_w29 * (long)unaff_w26;
    uVar5 = *(undefined8 *)(lVar4 + 0x30);
    uVar9 = *(undefined8 *)(lVar4 + 0x28);
    uVar7 = *(undefined8 *)(lVar4 + 0x20);
    if (unaff_x21 == 0) {
LAB_06ded010:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    in_stack_00000158 = in_stack_00000118;
    in_stack_00000150 = in_stack_00000110;
    in_stack_00000160 = in_stack_00000120;
    in_stack_00000130 = uVar7;
    in_stack_00000138 = uVar9;
    in_stack_00000140 = uVar5;
    iVar2 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000150,&stack0x00000130,
                       *(undefined8 *)(unaff_x21 + 0x28));
    if (-1 < iVar2) {
      unaff_w29 = unaff_w25 + uVar6;
      goto LAB_06decfb8;
    }
    in_w8 = *(uint *)(unaff_x19 + 0x18);
    if (in_w8 <= unaff_w29) goto LAB_06ded00c;
    in_x9 = (undefined8 *)(lVar4 + 0x20);
    unaff_w24 = uVar6;
  } while( true );
}


