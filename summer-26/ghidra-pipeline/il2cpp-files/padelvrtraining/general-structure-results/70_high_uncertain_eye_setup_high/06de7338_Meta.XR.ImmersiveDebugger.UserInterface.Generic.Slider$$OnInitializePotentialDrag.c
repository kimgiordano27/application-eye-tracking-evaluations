/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$OnInitializePotentialDrag
ENTRY_POINT: 06de7338
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Slider__OnInitializePotentialDrag
               (long param_1,uint param_2,undefined8 param_3,int param_4,long param_5,long param_6)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  uint uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long in_stack_00000018;
  
  uVar12 = *(uint *)(param_1 + 0x18);
  iVar8 = param_4 + -1;
  uVar9 = iVar8 + param_2;
  if (uVar9 < uVar12) {
    lVar13 = (long)(int)uVar9;
    lVar1 = param_1 + lVar13 * 0x10;
    uVar4 = *(undefined8 *)(lVar1 + 0x20);
    uVar5 = *(undefined8 *)(lVar1 + 0x28);
    iVar3 = in_stack_00000018._4_4_;
    if (in_stack_00000018 < 0) {
      iVar3 = in_stack_00000018._4_4_ + 1;
    }
    if ((int)param_2 <= iVar3 >> 1) {
      do {
        uVar12 = param_2 * 2;
        if ((int)uVar12 < in_stack_00000018._4_4_) {
          uVar9 = uVar12 + param_4;
          if ((*(uint *)(param_1 + 0x18) <= uVar9 - 1) || (*(uint *)(param_1 + 0x18) <= uVar9))
          goto LAB_06de74f0;
          if (param_5 == 0) goto LAB_06de74f4;
          lVar1 = param_1 + (long)(int)(uVar9 - 1) * 0x10;
          lVar13 = param_1 + (long)(int)uVar9 * 0x10;
          uVar14 = *(undefined8 *)(lVar1 + 0x20);
          uVar6 = *(undefined8 *)(lVar1 + 0x28);
          uVar15 = *(undefined8 *)(lVar13 + 0x20);
          uVar7 = *(undefined8 *)(lVar13 + 0x28);
          if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
            FUN_03d8f26c();
          }
          uVar9 = (**(code **)(param_5 + 0x18))
                            (*(undefined8 *)(param_5 + 0x40),uVar14,uVar6,uVar15,uVar7,
                             *(undefined8 *)(param_5 + 0x28));
          uVar12 = uVar12 | uVar9 >> 0x1f;
        }
        uVar9 = iVar8 + uVar12;
        if (*(uint *)(param_1 + 0x18) <= uVar9) goto LAB_06de74f0;
        lVar13 = (long)(int)uVar9;
        lVar1 = param_1 + lVar13 * 0x10;
        uVar14 = *(undefined8 *)(lVar1 + 0x20);
        if (param_5 == 0) {
LAB_06de74f4:
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        uVar15 = *(undefined8 *)(lVar1 + 0x28);
        if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
          FUN_03d8f26c();
        }
        iVar10 = (**(code **)(param_5 + 0x18))
                           (*(undefined8 *)(param_5 + 0x40),uVar4,uVar5,uVar14,uVar15,
                            *(undefined8 *)(param_5 + 0x28));
        if (-1 < iVar10) {
          uVar9 = iVar8 + param_2;
          lVar13 = (long)(int)uVar9;
          break;
        }
        if ((*(uint *)(param_1 + 0x18) <= uVar9) || (*(uint *)(param_1 + 0x18) <= iVar8 + param_2))
        goto LAB_06de74f0;
        uVar14 = *(undefined8 *)(lVar1 + 0x20);
        lVar2 = param_1 + (long)(int)(iVar8 + param_2) * 0x10;
        puVar11 = (undefined8 *)(lVar2 + 0x20);
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
        *puVar11 = uVar14;
        thunk_FUN_03d1023c(puVar11,0);
        param_2 = uVar12;
      } while ((int)uVar12 <= iVar3 >> 1);
      uVar12 = *(uint *)(param_1 + 0x18);
    }
    if (uVar9 < uVar12) {
      param_1 = param_1 + lVar13 * 0x10;
      puVar11 = (undefined8 *)(param_1 + 0x20);
      *puVar11 = uVar4;
      *(undefined8 *)(param_1 + 0x28) = uVar5;
      thunk_FUN_03d1023c(puVar11,0);
      return;
    }
  }
LAB_06de74f0:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


