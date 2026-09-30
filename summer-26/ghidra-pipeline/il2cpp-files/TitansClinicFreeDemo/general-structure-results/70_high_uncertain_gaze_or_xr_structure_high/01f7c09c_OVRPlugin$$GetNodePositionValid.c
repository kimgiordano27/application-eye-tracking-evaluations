/*
FUNCTION_NAME: OVRPlugin$$GetNodePositionValid
ENTRY_POINT: 01f7c09c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetNodePositionValid(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  int in_w8;
  ulong uVar8;
  uint in_w9;
  uint unaff_w20;
  long lVar9;
  long lVar10;
  ushort *puVar11;
  long *unaff_x27;
  long *unaff_x28;
  ushort *puVar12;
  ushort *unaff_x29;
  undefined1 auVar13 [16];
  long in_stack_00000000;
  ushort *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
  do {
    puVar12 = unaff_x29;
    if (in_w9 == (unaff_w20 & 0xffff)) {
LAB_01f7c3d4:
      uVar8 = (long)unaff_x29 - (long)in_stack_00000008;
      if ((long)uVar8 < 0) {
        uVar8 = uVar8 + 1;
      }
      uVar8 = uVar8 >> 1;
LAB_01f7c470:
      if (*(long *)(in_stack_00000000 + 0x28) == in_stack_00000038) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar8);
    }
    while (in_w8 = in_w8 + -1, in_w8 < 1) {
      uVar8 = FUN_01ef817c(0);
      if (((uVar8 & 1) == 0) ||
         (uVar8 = (long)puVar12 - (long)in_stack_00000008, puVar12 < in_stack_00000008 || uVar8 == 0
         )) {
LAB_01f7c418:
        uVar8 = 0xffffffff;
        goto LAB_01f7c470;
      }
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      lVar9 = *unaff_x28;
      lVar7 = *(long *)(lVar9 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0122e748();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0122e748();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      lVar7 = *(long *)(lVar9 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0122e748();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0122e748();
      }
      if ((long)uVar8 < 0) {
        uVar8 = uVar8 + 1;
      }
      iVar6 = **(int **)(lVar7 + 0xb8);
      FUN_01d1f8e8(&stack0x00000028,unaff_w20,*(undefined8 *)PTR_DAT_027c10f0);
      for (uVar1 = -iVar6 & (uint)(uVar8 >> 1); 0 < (int)uVar1;
          uVar1 = uVar1 - **(int **)(lVar7 + 0xb8)) {
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        lVar9 = *unaff_x28;
        lVar7 = *(long *)(lVar9 + 0x20);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0122e748();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0122e748();
        }
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        lVar7 = *(long *)(lVar9 + 0x20);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0122e748();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0122e748();
        }
        uVar5 = in_stack_00000030;
        uVar4 = in_stack_00000028;
        lVar10 = *(long *)PTR_DAT_027c1100;
        lVar9 = *(long *)(lVar10 + 0x38);
        puVar11 = puVar12 + -(long)**(int **)(lVar7 + 0xb8);
        uVar2 = *(undefined8 *)puVar11;
        uVar3 = *(undefined8 *)(puVar11 + 4);
        if (lVar9 == 0) {
          FUN_0122e7a4(lVar10);
          lVar9 = *(long *)(lVar10 + 0x38);
        }
        lVar7 = *(long *)(lVar9 + 0x10);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0122e748();
        }
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        auVar13 = FUN_014803a8(uVar4,uVar5,uVar2,uVar3,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 8)
                              );
        lVar9 = *(long *)PTR_DAT_027c10f8;
        lVar7 = *(long *)(lVar9 + 0x20);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0122e748();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0122e748();
        }
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        lVar7 = *(long *)(lVar9 + 0x20);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0122e748();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0122e748();
        }
        in_stack_00000018 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10);
        in_stack_00000010 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
        uVar8 = FUN_01d22ef0(&stack0x00000010,auVar13._0_8_,auVar13._8_8_,
                             *(undefined8 *)PTR_DAT_027c10e8);
        if ((uVar8 & 1) == 0) {
          iVar6 = FUN_01f91a04(auVar13._0_8_,auVar13._8_8_,0);
          uVar8 = (long)puVar11 - (long)in_stack_00000008;
          if ((long)uVar8 < 0) {
            uVar8 = uVar8 + 1;
          }
          uVar8 = (ulong)(uint)(iVar6 + (int)(uVar8 >> 1));
          goto LAB_01f7c470;
        }
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        lVar9 = *unaff_x28;
        lVar7 = *(long *)(lVar9 + 0x20);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0122e748();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0122e748();
        }
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        lVar7 = *(long *)(lVar9 + 0x20);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0122e748();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0122e748();
        }
        lVar10 = *unaff_x28;
        lVar9 = *(long *)(lVar10 + 0x20);
        iVar6 = **(int **)(lVar7 + 0xb8);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_0122e748(lVar9);
        }
        lVar7 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0122e748();
        }
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        lVar7 = *(long *)(lVar10 + 0x20);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0122e748();
        }
        puVar12 = puVar12 + -(long)iVar6;
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0122e748();
        }
      }
      uVar8 = (long)puVar12 - (long)in_stack_00000008;
      if (puVar12 < in_stack_00000008 || uVar8 == 0) goto LAB_01f7c418;
      if ((long)uVar8 < 0) {
        uVar8 = uVar8 + 1;
      }
      uVar8 = uVar8 >> 1;
      while (iVar6 = (int)uVar8, 3 < iVar6) {
        unaff_x29 = puVar12 + -4;
        if ((uint)puVar12[-1] == (unaff_w20 & 0xffff)) {
          uVar8 = (long)unaff_x29 - (long)in_stack_00000008;
          if ((long)uVar8 < 0) {
            uVar8 = uVar8 + 1;
          }
          uVar8 = (ulong)((int)(uVar8 >> 1) + 3);
          goto LAB_01f7c470;
        }
        if ((uint)puVar12[-2] == (unaff_w20 & 0xffff)) {
          uVar8 = (long)unaff_x29 - (long)in_stack_00000008;
          if ((long)uVar8 < 0) {
            uVar8 = uVar8 + 1;
          }
          uVar8 = (ulong)((int)(uVar8 >> 1) + 2);
          goto LAB_01f7c470;
        }
        if ((uint)puVar12[-3] == (unaff_w20 & 0xffff)) {
          uVar8 = (long)unaff_x29 - (long)in_stack_00000008;
          if ((long)uVar8 < 0) {
            uVar8 = uVar8 + 1;
          }
          uVar8 = (ulong)((int)(uVar8 >> 1) + 1);
          goto LAB_01f7c470;
        }
        uVar8 = (ulong)(iVar6 - 4);
        puVar12 = unaff_x29;
        if ((uint)*unaff_x29 == (unaff_w20 & 0xffff)) goto LAB_01f7c3d4;
      }
      in_w8 = iVar6 + 1;
    }
    unaff_x29 = puVar12 + -1;
    in_w9 = (uint)*unaff_x29;
  } while( true );
}


