/*
FUNCTION_NAME: OVRPlugin.OVRP_1_74_0$$ovrp_GetRenderModelProperties2
ENTRY_POINT: 07cadb04
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_74_0__ovrp_GetRenderModelProperties2
               (float param_1,float param_2,float param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  int iVar8;
  undefined8 *unaff_x22;
  ulong uVar9;
  float fVar10;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  puVar1 = PTR_DAT_09f305e8;
  iVar8 = -0x80000000;
  if (param_1 * param_2 != param_3) {
    iVar8 = (int)(param_1 * param_2);
  }
  if (0 < iVar8) {
    do {
      param_4 = FUN_078a7764(param_4,*(undefined8 *)puVar1,0);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  uVar5 = FUN_078a7764(param_4,*(undefined8 *)PTR_DAT_09f226c8,0);
  puVar4 = PTR_DAT_09f51240;
  puVar3 = PTR_DAT_09f305e8;
  puVar2 = PTR_DAT_09f226c8;
  puVar1 = PTR_DAT_09f215a0;
  if (*(char *)(unaff_x19 + 0x48) == '\0') {
LAB_07cadc60:
    FUN_07cab054();
    uVar9 = FUN_078b33f8(uVar5,*unaff_x22,0);
    if ((uVar9 & 1) != 0) {
      FUN_07cab50c(uVar5);
    }
    return;
  }
  lVar7 = *(long *)(unaff_x19 + 0x30);
  if (lVar7 != 0) {
    uVar9 = 0;
    while (*(long *)(lVar7 + 0x18) != 0) {
      unaff_x22 = (undefined8 *)PTR_DAT_09f1e7e8;
      if ((long)*(int *)(*(long *)(lVar7 + 0x18) + 0x18) <= (long)uVar9) goto LAB_07cadc60;
      in_stack_00000008 = *(undefined8 *)puVar4;
      in_stack_00000018 = (undefined4)uVar9;
      in_stack_00000010 = 0xffffffffffffffff;
      uVar6 = FUN_07a742b0(&stack0x00000008,0);
      uVar5 = FUN_078a7764(uVar5,uVar6,0);
      uVar5 = FUN_078a7764(uVar5,*(undefined8 *)puVar1,0);
      if ((*(long *)(unaff_x19 + 0x30) == 0) ||
         (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x18), lVar7 == 0)) break;
      if (*(uint *)(lVar7 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      fVar10 = *(float *)(lVar7 + uVar9 * 4 + 0x20) * 50.0;
      iVar8 = -0x80000000;
      if (fVar10 != INFINITY) {
        iVar8 = (int)fVar10;
      }
      if (0 < iVar8) {
        do {
          uVar5 = FUN_078a7764(uVar5,*(undefined8 *)puVar3,0);
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      uVar5 = FUN_078a7764(uVar5,*(undefined8 *)puVar2,0);
      lVar7 = *(long *)(unaff_x19 + 0x30);
      uVar9 = uVar9 + 1;
      if (lVar7 == 0) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


