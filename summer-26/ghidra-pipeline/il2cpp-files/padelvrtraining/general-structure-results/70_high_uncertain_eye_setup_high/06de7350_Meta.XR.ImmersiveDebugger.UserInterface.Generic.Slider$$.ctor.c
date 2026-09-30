/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$.ctor
ENTRY_POINT: 06de7350
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Slider___ctor(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool in_CY;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  int in_w3;
  long in_x4;
  long in_x5;
  uint in_w8;
  long unaff_x19;
  int unaff_w20;
  uint unaff_w21;
  long lVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint unaff_w29;
  long in_stack_00000018;
  
  if (!in_CY) {
    lVar11 = (long)(int)unaff_w29;
    lVar1 = unaff_x19 + lVar11 * 0x10;
    uVar4 = *(undefined8 *)(lVar1 + 0x20);
    uVar5 = *(undefined8 *)(lVar1 + 0x28);
    iVar3 = in_stack_00000018._4_4_;
    if (in_stack_00000018 < 0) {
      iVar3 = in_stack_00000018._4_4_ + 1;
    }
    if ((int)unaff_w21 <= iVar3 >> 1) {
      do {
        uVar12 = unaff_w21 * 2;
        if ((int)uVar12 < in_stack_00000018._4_4_) {
          uVar8 = uVar12 + in_w3;
          if ((*(uint *)(unaff_x19 + 0x18) <= uVar8 - 1) || (*(uint *)(unaff_x19 + 0x18) <= uVar8))
          goto LAB_06de74f0;
          if (in_x4 == 0) goto LAB_06de74f4;
          lVar1 = unaff_x19 + (long)(int)(uVar8 - 1) * 0x10;
          lVar11 = unaff_x19 + (long)(int)uVar8 * 0x10;
          uVar13 = *(undefined8 *)(lVar1 + 0x20);
          uVar6 = *(undefined8 *)(lVar1 + 0x28);
          uVar14 = *(undefined8 *)(lVar11 + 0x20);
          uVar7 = *(undefined8 *)(lVar11 + 0x28);
          if ((*(byte *)(*(long *)(in_x5 + 0x20) + 0x135) & 1) == 0) {
            FUN_03d8f26c();
          }
          uVar8 = (**(code **)(in_x4 + 0x18))
                            (*(undefined8 *)(in_x4 + 0x40),uVar13,uVar6,uVar14,uVar7,
                             *(undefined8 *)(in_x4 + 0x28));
          uVar12 = uVar12 | uVar8 >> 0x1f;
        }
        unaff_w29 = unaff_w20 + uVar12;
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) goto LAB_06de74f0;
        lVar11 = (long)(int)unaff_w29;
        lVar1 = unaff_x19 + lVar11 * 0x10;
        uVar13 = *(undefined8 *)(lVar1 + 0x20);
        if (in_x4 == 0) {
LAB_06de74f4:
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        uVar14 = *(undefined8 *)(lVar1 + 0x28);
        if ((*(byte *)(*(long *)(in_x5 + 0x20) + 0x135) & 1) == 0) {
          FUN_03d8f26c();
        }
        iVar9 = (**(code **)(in_x4 + 0x18))
                          (*(undefined8 *)(in_x4 + 0x40),uVar4,uVar5,uVar13,uVar14,
                           *(undefined8 *)(in_x4 + 0x28));
        if (-1 < iVar9) {
          unaff_w29 = unaff_w20 + unaff_w21;
          lVar11 = (long)(int)unaff_w29;
          break;
        }
        if ((*(uint *)(unaff_x19 + 0x18) <= unaff_w29) ||
           (*(uint *)(unaff_x19 + 0x18) <= unaff_w20 + unaff_w21)) goto LAB_06de74f0;
        uVar13 = *(undefined8 *)(lVar1 + 0x20);
        lVar2 = unaff_x19 + (long)(int)(unaff_w20 + unaff_w21) * 0x10;
        puVar10 = (undefined8 *)(lVar2 + 0x20);
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
        *puVar10 = uVar13;
        thunk_FUN_03d1023c(puVar10,0);
        unaff_w21 = uVar12;
      } while ((int)uVar12 <= iVar3 >> 1);
      in_w8 = *(uint *)(unaff_x19 + 0x18);
    }
    if (unaff_w29 < in_w8) {
      lVar1 = unaff_x19 + lVar11 * 0x10;
      puVar10 = (undefined8 *)(lVar1 + 0x20);
      *puVar10 = uVar4;
      *(undefined8 *)(lVar1 + 0x28) = uVar5;
      thunk_FUN_03d1023c(puVar10,0);
      return;
    }
  }
LAB_06de74f0:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


