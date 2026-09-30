/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMapGPU$$ApplyMaterial
ENTRY_POINT: 08a6eaac
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x08a6ec10) */

void Meta_XR_MRUtilityKit_SpaceMapGPU__ApplyMaterial(undefined **param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  int *piVar10;
  long unaff_x19;
  undefined8 *unaff_x20;
  int unaff_w22;
  undefined8 uVar11;
  long *plVar12;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000050;
  int in_stack_00000068;
  
  do {
    lVar6 = FUN_06b7fba4(param_2,unaff_w22,*(undefined8 *)param_1[0x29]);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar7 = FUN_089c1ca8(lVar6,in_stack_00000010._4_4_ & 1,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    FUN_06b8097c(&stack0x00000018,lVar7,*(undefined8 *)PTR_DAT_0ac21230);
    in_stack_00000050 = in_stack_00000028;
    in_stack_00000048 = in_stack_00000020;
    in_stack_00000040 = in_stack_00000018;
    in_stack_00000018 = 0;
    in_stack_00000020 = &stack0x00000040;
    while (uVar8 = FUN_05fefd38(&stack0x00000040,*unaff_x20), uVar5 = in_stack_00000050,
          (uVar8 & 1) != 0) {
      plVar12 = *(long **)(unaff_x19 + 0xb8);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar7 = *plVar12;
      uVar11 = *(undefined8 *)(unaff_x19 + 0xc0);
      uVar1 = *(undefined8 *)(lVar6 + 0x18);
      uVar3 = *(undefined8 *)(lVar6 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      uVar2 = *(undefined8 *)(lVar6 + 0x28);
      uVar4 = *(undefined8 *)(lVar6 + 0x30);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac524b0) {
            puVar9 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0x17) * 0x10 + 0x138);
            goto LAB_08a6eb8c;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar12,*(long *)PTR_DAT_0ac524b0,0x17);
LAB_08a6eb8c:
      (*(code *)*puVar9)(plVar12,uVar11,uVar1,uVar3,uVar2,uVar4,uVar5,0);
    }
    FUN_05fefd34(&stack0x00000040,*(undefined8 *)PTR_DAT_0ac21200);
    do {
      param_2 = *(long *)(unaff_x19 + 0xf0);
      unaff_w22 = unaff_w22 + 1;
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      if (*(int *)(param_2 + 0x18) <= unaff_w22) {
        return;
      }
    } while ((in_stack_00000068 != -1) && (unaff_w22 != in_stack_00000068));
    param_1 = &PTR_DAT_0ac54000;
  } while( true );
}


