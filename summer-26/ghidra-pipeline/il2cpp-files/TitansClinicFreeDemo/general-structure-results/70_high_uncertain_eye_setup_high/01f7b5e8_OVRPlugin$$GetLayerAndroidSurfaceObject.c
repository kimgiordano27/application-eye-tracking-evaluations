/*
FUNCTION_NAME: OVRPlugin$$GetLayerAndroidSurfaceObject
ENTRY_POINT: 01f7b5e8
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRPlugin__GetLayerAndroidSurfaceObject(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined2 uVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  int in_w8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x23;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long *unaff_x27;
  long lVar10;
  undefined8 unaff_x29;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  
  while( true ) {
    if (in_w8 == 0) {
      thunk_FUN_01220628();
    }
    lVar10 = *(long *)PTR_DAT_027c10d8;
    lVar6 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0122e748();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0122e748();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    lVar6 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0122e748();
    }
    lVar10 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x58);
    lVar6 = *(long *)(lVar10 + 0x20);
    in_stack_00000018 = unaff_x21;
    in_stack_00000020 = unaff_x29;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0122e748();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0122e748();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    lVar6 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0122e748();
    }
    uVar7 = FUN_01d22ef0(&stack0x00000018,unaff_x26,unaff_x25,
                         *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38));
    if ((uVar7 & 1) == 0) break;
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    lVar10 = *(long *)PTR_DAT_027c10d0;
    lVar6 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0122e748();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0122e748();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    lVar6 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0122e748();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0122e748();
    }
    unaff_x23 = FUN_01fb02a4(unaff_x23,**(undefined4 **)(lVar6 + 0xb8),0);
    uVar7 = FUN_01fb0298();
    uVar8 = FUN_01fb0298(unaff_x23,0);
    if (uVar7 < uVar8) break;
    puVar1 = (undefined8 *)(unaff_x20 + unaff_x23 * 2);
    puVar2 = (undefined8 *)(unaff_x19 + unaff_x23 * 2);
    unaff_x21 = *puVar1;
    unaff_x29 = puVar1[1];
    in_w8 = *(int *)(*unaff_x27 + 0xe0);
    unaff_x26 = *puVar2;
    unaff_x25 = puVar2[1];
  }
  uVar7 = FUN_01fb0298();
  uVar9 = FUN_01fb02a4(unaff_x23,4,0);
  uVar8 = FUN_01fb0298(uVar9,0);
  if (uVar8 <= uVar7) {
    do {
      uVar7 = FUN_01fbe600(*(undefined8 *)(unaff_x20 + unaff_x23 * 2),
                           *(undefined8 *)(unaff_x19 + unaff_x23 * 2),0);
      if ((uVar7 & 1) != 0) break;
      unaff_x23 = FUN_01fb02a4(unaff_x23,4,0);
      uVar7 = FUN_01fb0298();
      uVar9 = FUN_01fb02a4(unaff_x23,4,0);
      uVar8 = FUN_01fb0298(uVar9,0);
    } while (uVar8 <= uVar7);
  }
  uVar7 = FUN_01fb0298();
  uVar9 = FUN_01fb02a4(unaff_x23,2,0);
  uVar8 = FUN_01fb0298(uVar9,0);
  if ((uVar8 <= uVar7) &&
     (*(int *)(unaff_x20 + unaff_x23 * 2) == *(int *)(unaff_x19 + unaff_x23 * 2))) {
    unaff_x23 = FUN_01fb02a4(unaff_x23,2,0);
  }
  uVar7 = FUN_01fb0298(unaff_x23,0);
  uVar8 = FUN_01fb0298();
  puVar4 = PTR_DAT_027b3998;
  iVar5 = in_stack_00000010._4_4_;
  if (uVar7 < uVar8) {
    do {
      uVar3 = *(undefined2 *)(unaff_x19 + unaff_x23 * 2);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      iVar5 = FUN_01e82750(unaff_x20 + unaff_x23 * 2,uVar3,0);
      if (iVar5 != 0) break;
      unaff_x23 = FUN_01fb02a4(unaff_x23,1,0);
      uVar7 = FUN_01fb0298(unaff_x23,0);
      uVar8 = FUN_01fb0298();
      iVar5 = in_stack_00000010._4_4_;
    } while (uVar7 < uVar8);
  }
  if (*(long *)(in_stack_00000008 + 0x28) != in_stack_00000028) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
}


