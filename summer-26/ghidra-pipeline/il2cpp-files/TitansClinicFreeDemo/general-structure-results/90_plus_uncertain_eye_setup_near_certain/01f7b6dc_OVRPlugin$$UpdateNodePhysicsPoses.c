/*
FUNCTION_NAME: OVRPlugin$$UpdateNodePhysicsPoses
ENTRY_POINT: 01f7b6dc
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRPlugin__UpdateNodePhysicsPoses(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined2 uVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long *unaff_x26;
  long lVar13;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  
  while( true ) {
    if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
      param_1 = FUN_0122e748();
    }
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    lVar9 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    unaff_x23 = FUN_01fb02a4(unaff_x23,**(undefined4 **)(lVar9 + 0xb8),0);
    uVar10 = FUN_01fb0298();
    uVar11 = FUN_01fb0298(unaff_x23,0);
    if (uVar10 < uVar11) break;
    puVar1 = (undefined8 *)(unaff_x20 + unaff_x23 * 2);
    puVar2 = (undefined8 *)(unaff_x19 + unaff_x23 * 2);
    uVar12 = *puVar1;
    uVar4 = puVar1[1];
    uVar3 = *puVar2;
    uVar5 = puVar2[1];
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    lVar13 = *(long *)PTR_DAT_027c10d8;
    lVar9 = *(long *)(lVar13 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    lVar9 = *(long *)(lVar13 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    lVar13 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x58);
    lVar9 = *(long *)(lVar13 + 0x20);
    in_stack_00000018 = uVar12;
    in_stack_00000020 = uVar4;
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    lVar9 = *(long *)(lVar13 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    uVar10 = FUN_01d22ef0(&stack0x00000018,uVar3,uVar5,
                          *(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x38));
    if ((uVar10 & 1) == 0) break;
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    unaff_x21 = *(long *)PTR_DAT_027c10d0;
    lVar9 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    param_1 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
  }
  uVar10 = FUN_01fb0298();
  uVar12 = FUN_01fb02a4(unaff_x23,4,0);
  uVar11 = FUN_01fb0298(uVar12,0);
  if (uVar11 <= uVar10) {
    do {
      uVar10 = FUN_01fbe600(*(undefined8 *)(unaff_x20 + unaff_x23 * 2),
                            *(undefined8 *)(unaff_x19 + unaff_x23 * 2),0);
      if ((uVar10 & 1) != 0) break;
      unaff_x23 = FUN_01fb02a4(unaff_x23,4,0);
      uVar10 = FUN_01fb0298();
      uVar12 = FUN_01fb02a4(unaff_x23,4,0);
      uVar11 = FUN_01fb0298(uVar12,0);
    } while (uVar11 <= uVar10);
  }
  uVar10 = FUN_01fb0298();
  uVar12 = FUN_01fb02a4(unaff_x23,2,0);
  uVar11 = FUN_01fb0298(uVar12,0);
  if ((uVar11 <= uVar10) &&
     (*(int *)(unaff_x20 + unaff_x23 * 2) == *(int *)(unaff_x19 + unaff_x23 * 2))) {
    unaff_x23 = FUN_01fb02a4(unaff_x23,2,0);
  }
  uVar10 = FUN_01fb0298(unaff_x23,0);
  uVar11 = FUN_01fb0298();
  puVar7 = PTR_DAT_027b3998;
  iVar8 = in_stack_00000010._4_4_;
  if (uVar10 < uVar11) {
    do {
      uVar6 = *(undefined2 *)(unaff_x19 + unaff_x23 * 2);
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      iVar8 = FUN_01e82750(unaff_x20 + unaff_x23 * 2,uVar6,0);
      if (iVar8 != 0) break;
      unaff_x23 = FUN_01fb02a4(unaff_x23,1,0);
      uVar10 = FUN_01fb0298(unaff_x23,0);
      uVar11 = FUN_01fb0298();
      iVar8 = in_stack_00000010._4_4_;
    } while (uVar10 < uVar11);
  }
  if (*(long *)(in_stack_00000008 + 0x28) != in_stack_00000028) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar8;
}


