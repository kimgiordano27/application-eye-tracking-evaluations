/*
FUNCTION_NAME: OVRPlugin$$GetNodePoseStateRaw
ENTRY_POINT: 01f7c19c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetNodePoseStateRaw(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint unaff_w19;
  uint unaff_w20;
  long unaff_x21;
  long lVar9;
  long *unaff_x27;
  long *unaff_x28;
  ushort *puVar10;
  ushort *unaff_x29;
  undefined1 auVar11 [16];
  long in_stack_00000000;
  ushort *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
  while( true ) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    lVar6 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0122e748();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0122e748();
    }
    uVar4 = in_stack_00000030;
    uVar3 = in_stack_00000028;
    lVar9 = *(long *)PTR_DAT_027c1100;
    lVar8 = *(long *)(lVar9 + 0x38);
    puVar10 = unaff_x29 + -(long)**(int **)(lVar6 + 0xb8);
    uVar1 = *(undefined8 *)puVar10;
    uVar2 = *(undefined8 *)(puVar10 + 4);
    if (lVar8 == 0) {
      FUN_0122e7a4(lVar9);
      lVar8 = *(long *)(lVar9 + 0x38);
    }
    lVar6 = *(long *)(lVar8 + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0122e748();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    auVar11 = FUN_014803a8(uVar3,uVar4,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar9 + 0x38) + 8));
    lVar8 = *(long *)PTR_DAT_027c10f8;
    lVar6 = *(long *)(lVar8 + 0x20);
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
    lVar6 = *(long *)(lVar8 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0122e748();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0122e748();
    }
    in_stack_00000018 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10);
    in_stack_00000010 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 8);
    uVar7 = FUN_01d22ef0(&stack0x00000010,auVar11._0_8_,auVar11._8_8_,
                         *(undefined8 *)PTR_DAT_027c10e8);
    if ((uVar7 & 1) == 0) break;
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    lVar8 = *unaff_x28;
    lVar6 = *(long *)(lVar8 + 0x20);
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
    lVar6 = *(long *)(lVar8 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0122e748();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0122e748();
    }
    lVar9 = *unaff_x28;
    lVar8 = *(long *)(lVar9 + 0x20);
    iVar5 = **(int **)(lVar6 + 0xb8);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0122e748(lVar8);
    }
    lVar6 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0122e748();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    lVar6 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0122e748();
    }
    unaff_x29 = unaff_x29 + -(long)iVar5;
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0122e748();
    }
    unaff_w19 = unaff_w19 - **(int **)(lVar6 + 0xb8);
    while ((int)unaff_w19 < 1) {
      uVar7 = (long)unaff_x29 - (long)in_stack_00000008;
      if (unaff_x29 < in_stack_00000008 || uVar7 == 0) {
LAB_01f7c418:
        uVar7 = 0xffffffff;
        goto LAB_01f7c470;
      }
      if ((long)uVar7 < 0) {
        uVar7 = uVar7 + 1;
      }
      uVar7 = uVar7 >> 1;
      puVar10 = unaff_x29;
      while (iVar5 = (int)uVar7, 3 < iVar5) {
        unaff_x29 = puVar10 + -4;
        if ((uint)puVar10[-1] == (unaff_w20 & 0xffff)) {
          uVar7 = (long)unaff_x29 - (long)in_stack_00000008;
          if ((long)uVar7 < 0) {
            uVar7 = uVar7 + 1;
          }
          uVar7 = (ulong)((int)(uVar7 >> 1) + 3);
          goto LAB_01f7c470;
        }
        if ((uint)puVar10[-2] == (unaff_w20 & 0xffff)) {
          uVar7 = (long)unaff_x29 - (long)in_stack_00000008;
          if ((long)uVar7 < 0) {
            uVar7 = uVar7 + 1;
          }
          uVar7 = (ulong)((int)(uVar7 >> 1) + 2);
          goto LAB_01f7c470;
        }
        if ((uint)puVar10[-3] == (unaff_w20 & 0xffff)) {
          uVar7 = (long)unaff_x29 - (long)in_stack_00000008;
          if ((long)uVar7 < 0) {
            uVar7 = uVar7 + 1;
          }
          uVar7 = (ulong)((int)(uVar7 >> 1) + 1);
          goto LAB_01f7c470;
        }
        uVar7 = (ulong)(iVar5 - 4);
        puVar10 = unaff_x29;
        if ((uint)*unaff_x29 == (unaff_w20 & 0xffff)) goto LAB_01f7c3d4;
      }
      iVar5 = iVar5 + 1;
      unaff_x29 = puVar10;
      while (iVar5 = iVar5 + -1, 0 < iVar5) {
        unaff_x29 = unaff_x29 + -1;
        if ((uint)*unaff_x29 == (unaff_w20 & 0xffff)) goto LAB_01f7c3d4;
      }
      uVar7 = FUN_01ef817c(0);
      if (((uVar7 & 1) == 0) ||
         (uVar7 = (long)unaff_x29 - (long)in_stack_00000008,
         unaff_x29 < in_stack_00000008 || uVar7 == 0)) goto LAB_01f7c418;
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      lVar8 = *unaff_x28;
      lVar6 = *(long *)(lVar8 + 0x20);
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
      lVar6 = *(long *)(lVar8 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0122e748();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0122e748();
      }
      if ((long)uVar7 < 0) {
        uVar7 = uVar7 + 1;
      }
      iVar5 = **(int **)(lVar6 + 0xb8);
      FUN_01d1f8e8(&stack0x00000028,unaff_w20,*(undefined8 *)PTR_DAT_027c10f0);
      unaff_w19 = -iVar5 & (uint)(uVar7 >> 1);
    }
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    unaff_x21 = *unaff_x28;
    lVar6 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0122e748();
    }
    param_1 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
      param_1 = FUN_0122e748();
    }
  }
  iVar5 = FUN_01f91a04(auVar11._0_8_,auVar11._8_8_,0);
  uVar7 = (long)puVar10 - (long)in_stack_00000008;
  if ((long)uVar7 < 0) {
    uVar7 = uVar7 + 1;
  }
  uVar7 = (ulong)(uint)(iVar5 + (int)(uVar7 >> 1));
LAB_01f7c470:
  if (*(long *)(in_stack_00000000 + 0x28) == in_stack_00000038) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
LAB_01f7c3d4:
  uVar7 = (long)unaff_x29 - (long)in_stack_00000008;
  if ((long)uVar7 < 0) {
    uVar7 = uVar7 + 1;
  }
  uVar7 = uVar7 >> 1;
  goto LAB_01f7c470;
}


