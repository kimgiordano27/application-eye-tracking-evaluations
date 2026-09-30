/*
FUNCTION_NAME: OVRPlugin$$GetNodeOrientationValid
ENTRY_POINT: 01f7bf38
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


void OVRPlugin__GetNodeOrientationValid(long param_1,ushort *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ushort *puVar11;
  long unaff_x19;
  long lVar12;
  uint unaff_w20;
  ulong unaff_x21;
  long lVar13;
  ushort *puVar14;
  undefined1 auVar15 [16];
  long in_stack_00000000;
  ushort *puStack0000000000000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long lStack0000000000000038;
  
  puStack0000000000000008 = param_2;
  lStack0000000000000038 = param_1;
  if ((*(byte *)(unaff_x19 + 0xdee) & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027c10e8);
    thunk_FUN_01279b34(PTR_DAT_027c10f0);
    thunk_FUN_01279b34(PTR_DAT_027c10d0);
    thunk_FUN_01279b34(PTR_DAT_027c10f8);
    thunk_FUN_01279b34(PTR_DAT_027c10e0);
    thunk_FUN_01279b34(PTR_DAT_027c1100);
    *(undefined1 *)(unaff_x19 + 0xdee) = 1;
  }
  puVar5 = PTR_DAT_027c10e0;
  puVar4 = PTR_DAT_027c10d0;
                    /* catch() { ... } // from try @ 01f7bfd4 with catch @ 01f7bfb0
                       catch() { ... } // from try @ 01f7c010 with catch @ 01f7bfb0
                       catch() { ... } // from try @ 01f7c090 with catch @ 01f7bfb0 */
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  puVar14 = puStack0000000000000008 + (int)unaff_x21;
  uVar9 = FUN_01ef817c(0);
  if ((uVar9 & 1) != 0) {
                    /* try { // try from 01f7bfcc to 0207bfd3 has its CatchHandler @ 01f7bfe0 */
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
                    /* try { // try from 01f7bfd4 to 0207bff7 has its CatchHandler @ 01f7bfb0 */
    lVar12 = *(long *)puVar4;
    lVar10 = *(long *)(lVar12 + 0x20);
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f7bfcc with catch @ 01f7bfe0
                        */
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0122e748();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                    /* try { // try from 01f7bff8 to 0207c00f has its CatchHandler @ 01f7c088 */
      lVar10 = FUN_0122e748();
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    lVar10 = *(long *)(lVar12 + 0x20);
                    /* try { // try from 01f7c010 to 0207c077 has its CatchHandler @ 01f7bfb0 */
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0122e748();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0122e748();
    }
    if (**(int **)(lVar10 + 0xb8) * 2 <= (int)unaff_x21) {
      unaff_x21 = (ulong)((uint)puVar14 >> 1 & 7);
    }
  }
LAB_01f7c040:
  while (iVar8 = (int)unaff_x21, 3 < iVar8) {
    puVar11 = puVar14 + -4;
    if ((uint)puVar14[-1] == (unaff_w20 & 0xffff)) {
      uVar9 = (long)puVar11 - (long)puStack0000000000000008;
      if ((long)uVar9 < 0) {
        uVar9 = uVar9 + 1;
      }
      uVar9 = (ulong)((int)(uVar9 >> 1) + 3);
      goto LAB_01f7c470;
    }
    if ((uint)puVar14[-2] == (unaff_w20 & 0xffff)) {
      uVar9 = (long)puVar11 - (long)puStack0000000000000008;
      if ((long)uVar9 < 0) {
        uVar9 = uVar9 + 1;
      }
      uVar9 = (ulong)((int)(uVar9 >> 1) + 2);
      goto LAB_01f7c470;
    }
    if ((uint)puVar14[-3] == (unaff_w20 & 0xffff)) {
      uVar9 = (long)puVar11 - (long)puStack0000000000000008;
      if ((long)uVar9 < 0) {
        uVar9 = uVar9 + 1;
      }
      uVar9 = (ulong)((int)(uVar9 >> 1) + 1);
      goto LAB_01f7c470;
    }
    unaff_x21 = (ulong)(iVar8 - 4);
    puVar14 = puVar11;
    if ((uint)*puVar11 == (unaff_w20 & 0xffff)) {
LAB_01f7c3d4:
      uVar9 = (long)puVar11 - (long)puStack0000000000000008;
      if ((long)uVar9 < 0) {
        uVar9 = uVar9 + 1;
      }
      uVar9 = uVar9 >> 1;
LAB_01f7c470:
      if (*(long *)(in_stack_00000000 + 0x28) == lStack0000000000000038) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar9);
    }
  }
  iVar8 = iVar8 + 1;
  puVar11 = puVar14;
  while (iVar8 = iVar8 + -1, 0 < iVar8) {
    puVar11 = puVar11 + -1;
    if ((uint)*puVar11 == (unaff_w20 & 0xffff)) goto LAB_01f7c3d4;
  }
  uVar9 = FUN_01ef817c(0);
  if (((uVar9 & 1) != 0) &&
     (uVar9 = (long)puVar11 - (long)puStack0000000000000008,
     puStack0000000000000008 <= puVar11 && uVar9 != 0)) {
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    lVar12 = *(long *)puVar4;
    lVar10 = *(long *)(lVar12 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0122e748();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0122e748();
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    lVar10 = *(long *)(lVar12 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0122e748();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0122e748();
    }
    if ((long)uVar9 < 0) {
      uVar9 = uVar9 + 1;
    }
    iVar8 = **(int **)(lVar10 + 0xb8);
    FUN_01d1f8e8(&stack0x00000028,unaff_w20,*(undefined8 *)PTR_DAT_027c10f0);
    puVar14 = puVar11;
    for (uVar1 = -iVar8 & (uint)(uVar9 >> 1); 0 < (int)uVar1;
        uVar1 = uVar1 - **(int **)(lVar10 + 0xb8)) {
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      lVar12 = *(long *)puVar4;
      lVar10 = *(long *)(lVar12 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0122e748();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0122e748();
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      lVar10 = *(long *)(lVar12 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0122e748();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0122e748();
      }
      uVar7 = in_stack_00000030;
      uVar6 = in_stack_00000028;
      lVar13 = *(long *)PTR_DAT_027c1100;
      lVar12 = *(long *)(lVar13 + 0x38);
      puVar11 = puVar14 + -(long)**(int **)(lVar10 + 0xb8);
      uVar2 = *(undefined8 *)puVar11;
      uVar3 = *(undefined8 *)(puVar11 + 4);
      if (lVar12 == 0) {
        FUN_0122e7a4(lVar13);
        lVar12 = *(long *)(lVar13 + 0x38);
      }
      lVar10 = *(long *)(lVar12 + 0x10);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0122e748();
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      auVar15 = FUN_014803a8(uVar6,uVar7,uVar2,uVar3,*(undefined8 *)(*(long *)(lVar13 + 0x38) + 8));
      lVar12 = *(long *)PTR_DAT_027c10f8;
      lVar10 = *(long *)(lVar12 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0122e748();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0122e748();
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      lVar10 = *(long *)(lVar12 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0122e748();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0122e748();
      }
      in_stack_00000018 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x10);
      in_stack_00000010 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 8);
      uVar9 = FUN_01d22ef0(&stack0x00000010,auVar15._0_8_,auVar15._8_8_,
                           *(undefined8 *)PTR_DAT_027c10e8);
      if ((uVar9 & 1) == 0) {
        iVar8 = FUN_01f91a04(auVar15._0_8_,auVar15._8_8_,0);
        uVar9 = (long)puVar11 - (long)puStack0000000000000008;
        if ((long)uVar9 < 0) {
          uVar9 = uVar9 + 1;
        }
        uVar9 = (ulong)(uint)(iVar8 + (int)(uVar9 >> 1));
        goto LAB_01f7c470;
      }
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      lVar12 = *(long *)puVar4;
      lVar10 = *(long *)(lVar12 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0122e748();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0122e748();
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      lVar10 = *(long *)(lVar12 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0122e748();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0122e748();
      }
      lVar13 = *(long *)puVar4;
      lVar12 = *(long *)(lVar13 + 0x20);
      iVar8 = **(int **)(lVar10 + 0xb8);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_0122e748(lVar12);
      }
      lVar10 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0122e748();
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      lVar10 = *(long *)(lVar13 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0122e748();
      }
      puVar14 = puVar14 + -(long)iVar8;
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0122e748();
      }
    }
    uVar9 = (long)puVar14 - (long)puStack0000000000000008;
    if (puStack0000000000000008 <= puVar14 && uVar9 != 0) {
      if ((long)uVar9 < 0) {
        uVar9 = uVar9 + 1;
      }
      unaff_x21 = uVar9 >> 1;
      goto LAB_01f7c040;
    }
  }
  uVar9 = 0xffffffff;
  goto LAB_01f7c470;
}


