/*
FUNCTION_NAME: OVRPlugin.OVRP_1_74_0$$ovrp_GetVirtualKeyboardScale
ENTRY_POINT: 07cada88
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_74_0__ovrp_GetVirtualKeyboardScale(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  int iVar7;
  long unaff_x20;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  float fVar11;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  FUN_04447ba8(PTR_DAT_09f1e7e8);
  FUN_04447ba8(PTR_DAT_09f305e8);
  FUN_04447ba8(PTR_DAT_09f51248);
  *(undefined1 *)(unaff_x20 + 0xab5) = 1;
  puVar10 = (undefined8 *)PTR_DAT_09f1e7e8;
  if (*(char *)(unaff_x19 + 0x58) != '\0') {
    uVar8 = *(undefined8 *)PTR_DAT_09f1e7e8;
    if (*(char *)(unaff_x19 + 0x60) != '\0') {
      uVar8 = FUN_078a7764(uVar8,*(undefined8 *)PTR_DAT_09f51248,0);
      puVar1 = PTR_DAT_09f305e8;
      if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_07cadc54;
      fVar11 = *(float *)(*(long *)(unaff_x19 + 0x30) + 0x20) * 50.0;
      iVar7 = -0x80000000;
      if (fVar11 != INFINITY) {
        iVar7 = (int)fVar11;
      }
      if (0 < iVar7) {
        do {
          uVar8 = FUN_078a7764(uVar8,*(undefined8 *)puVar1,0);
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      uVar8 = FUN_078a7764(uVar8,*(undefined8 *)PTR_DAT_09f226c8,0);
    }
    puVar4 = PTR_DAT_09f51240;
    puVar3 = PTR_DAT_09f305e8;
    puVar2 = PTR_DAT_09f226c8;
    puVar1 = PTR_DAT_09f215a0;
    if (*(char *)(unaff_x19 + 0x48) != '\0') {
      lVar6 = *(long *)(unaff_x19 + 0x30);
      if (lVar6 != 0) {
        uVar9 = 0;
        while (*(long *)(lVar6 + 0x18) != 0) {
          puVar10 = (undefined8 *)PTR_DAT_09f1e7e8;
          if ((long)*(int *)(*(long *)(lVar6 + 0x18) + 0x18) <= (long)uVar9) goto LAB_07cadc60;
          in_stack_00000008 = *(undefined8 *)puVar4;
          in_stack_00000018 = (undefined4)uVar9;
          in_stack_00000010 = 0xffffffffffffffff;
          uVar5 = FUN_07a742b0(&stack0x00000008,0);
          uVar8 = FUN_078a7764(uVar8,uVar5,0);
          uVar8 = FUN_078a7764(uVar8,*(undefined8 *)puVar1,0);
          if ((*(long *)(unaff_x19 + 0x30) == 0) ||
             (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x18), lVar6 == 0)) break;
          if (*(uint *)(lVar6 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          fVar11 = *(float *)(lVar6 + uVar9 * 4 + 0x20) * 50.0;
          iVar7 = -0x80000000;
          if (fVar11 != INFINITY) {
            iVar7 = (int)fVar11;
          }
          if (0 < iVar7) {
            do {
              uVar8 = FUN_078a7764(uVar8,*(undefined8 *)puVar3,0);
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          uVar8 = FUN_078a7764(uVar8,*(undefined8 *)puVar2,0);
          lVar6 = *(long *)(unaff_x19 + 0x30);
          uVar9 = uVar9 + 1;
          if (lVar6 == 0) break;
        }
      }
LAB_07cadc54:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
LAB_07cadc60:
    FUN_07cab054();
    uVar9 = FUN_078b33f8(uVar8,*puVar10,0);
    if ((uVar9 & 1) != 0) {
      FUN_07cab50c(uVar8);
    }
  }
  return;
}


