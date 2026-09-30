/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor$$.ctor
ENTRY_POINT: 06de8a20
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


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor___ctor
               (undefined8 param_1,undefined8 param_2,int param_3,int param_4,long param_5,
               long param_6)

{
  int iVar1;
  bool in_CY;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint in_w9;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x19;
  uint unaff_w24;
  int unaff_w25;
  uint uVar9;
  uint unaff_w29;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  
  if (!in_CY) {
    lVar4 = unaff_x19 + (long)(int)unaff_w29 * 0x18;
    uVar7 = *(undefined8 *)(lVar4 + 0x30);
    uVar13 = *(undefined8 *)(lVar4 + 0x28);
    uVar10 = *(undefined8 *)(lVar4 + 0x20);
    iVar1 = param_3;
    if (param_3 < 0) {
      iVar1 = param_3 + 1;
    }
    if ((int)unaff_w24 <= iVar1 >> 1) {
      do {
        uVar9 = unaff_w24 * 2;
        if ((int)uVar9 < param_3) {
          uVar2 = uVar9 + param_4;
          if (*(uint *)(unaff_x19 + 0x18) <= uVar2 - 1) goto LAB_06de8c9c;
          lVar4 = unaff_x19 + (long)(int)(uVar2 - 1) * 0x18;
          uVar8 = *(undefined8 *)(lVar4 + 0x30);
          uVar14 = *(undefined8 *)(lVar4 + 0x28);
          uVar11 = *(undefined8 *)(lVar4 + 0x20);
          if (*(uint *)(unaff_x19 + 0x18) <= uVar2) goto LAB_06de8c9c;
          lVar4 = unaff_x19 + (long)(int)uVar2 * 0x18;
          uVar6 = *(undefined8 *)(lVar4 + 0x30);
          uVar15 = *(undefined8 *)(lVar4 + 0x28);
          uVar12 = *(undefined8 *)(lVar4 + 0x20);
          if (param_5 == 0) goto LAB_06de8ca0;
          if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
            FUN_03d8f26c();
          }
          in_stack_00000130 = uVar12;
          in_stack_00000138 = uVar15;
          in_stack_00000140 = uVar6;
          in_stack_00000150 = uVar11;
          in_stack_00000158 = uVar14;
          in_stack_00000160 = uVar8;
          uVar2 = (**(code **)(param_5 + 0x18))
                            (*(undefined8 *)(param_5 + 0x40),&stack0x00000150,&stack0x00000130,
                             *(undefined8 *)(param_5 + 0x28));
          uVar9 = uVar9 | uVar2 >> 0x1f;
        }
        unaff_w29 = unaff_w25 + uVar9;
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) goto LAB_06de8c9c;
        lVar4 = unaff_x19 + (long)(int)unaff_w29 * 0x18;
        uVar8 = *(undefined8 *)(lVar4 + 0x30);
        uVar14 = *(undefined8 *)(lVar4 + 0x28);
        uVar11 = *(undefined8 *)(lVar4 + 0x20);
        if (param_5 == 0) {
LAB_06de8ca0:
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
          FUN_03d8f26c();
        }
        in_stack_00000130 = uVar11;
        in_stack_00000138 = uVar14;
        in_stack_00000140 = uVar8;
        in_stack_00000150 = uVar10;
        in_stack_00000158 = uVar13;
        in_stack_00000160 = uVar7;
        iVar3 = (**(code **)(param_5 + 0x18))
                          (*(undefined8 *)(param_5 + 0x40),&stack0x00000150,&stack0x00000130,
                           *(undefined8 *)(param_5 + 0x28));
        if (-1 < iVar3) {
          unaff_w29 = unaff_w25 + unaff_w24;
          break;
        }
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) goto LAB_06de8c9c;
        uVar11 = *(undefined8 *)(lVar4 + 0x28);
        uVar8 = *(undefined8 *)(lVar4 + 0x20);
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25 + unaff_w24) goto LAB_06de8c9c;
        lVar5 = unaff_x19 + (long)(int)(unaff_w25 + unaff_w24) * 0x18;
        *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)(lVar4 + 0x30);
        *(undefined8 *)(lVar5 + 0x28) = uVar11;
        *(undefined8 *)(lVar5 + 0x20) = uVar8;
        thunk_FUN_03d1023c(lVar5 + 0x20,0);
        unaff_w24 = uVar9;
      } while ((int)uVar9 <= iVar1 >> 1);
      in_w9 = *(uint *)(unaff_x19 + 0x18);
    }
    if (unaff_w29 < in_w9) {
      lVar4 = unaff_x19 + (long)(int)unaff_w29 * 0x18;
      *(undefined8 *)(lVar4 + 0x30) = uVar7;
      *(undefined8 *)(lVar4 + 0x28) = uVar13;
      *(undefined8 *)(lVar4 + 0x20) = uVar10;
      thunk_FUN_03d1023c(lVar4 + 0x20,0);
      return;
    }
  }
LAB_06de8c9c:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


