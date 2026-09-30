/*
FUNCTION_NAME: OVRPlugin$$GetNodePositionTracked
ENTRY_POINT: 01f7c038
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetNodePositionTracked(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char in_NG;
  char in_OV;
  int iVar6;
  long lVar7;
  ushort *puVar8;
  ulong uVar9;
  uint unaff_w20;
  ulong unaff_x21;
  long lVar10;
  long lVar11;
  long *unaff_x27;
  long *unaff_x28;
  ushort *unaff_x29;
  undefined1 auVar12 [16];
  long in_stack_00000000;
  ushort *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
  if (in_NG == in_OV) {
    unaff_x21 = (ulong)((uint)unaff_x29 >> 1 & 7);
  }
LAB_01f7c040:
  while (iVar6 = (int)unaff_x21, 3 < iVar6) {
    puVar8 = unaff_x29 + -4;
    if ((uint)unaff_x29[-1] == (unaff_w20 & 0xffff)) {
      uVar9 = (long)puVar8 - (long)in_stack_00000008;
      if ((long)uVar9 < 0) {
        uVar9 = uVar9 + 1;
      }
      uVar9 = (ulong)((int)(uVar9 >> 1) + 3);
      goto LAB_01f7c470;
    }
    if ((uint)unaff_x29[-2] == (unaff_w20 & 0xffff)) {
      uVar9 = (long)puVar8 - (long)in_stack_00000008;
      if ((long)uVar9 < 0) {
        uVar9 = uVar9 + 1;
      }
      uVar9 = (ulong)((int)(uVar9 >> 1) + 2);
      goto LAB_01f7c470;
    }
    if ((uint)unaff_x29[-3] == (unaff_w20 & 0xffff)) {
      uVar9 = (long)puVar8 - (long)in_stack_00000008;
      if ((long)uVar9 < 0) {
        uVar9 = uVar9 + 1;
      }
      uVar9 = (ulong)((int)(uVar9 >> 1) + 1);
      goto LAB_01f7c470;
    }
    unaff_x21 = (ulong)(iVar6 - 4);
                    /* try { // try from 01f7c078 to 0207c087 has its CatchHandler @ 01f7c088 */
    unaff_x29 = puVar8;
    if ((uint)*puVar8 == (unaff_w20 & 0xffff)) {
LAB_01f7c3d4:
      uVar9 = (long)puVar8 - (long)in_stack_00000008;
      if ((long)uVar9 < 0) {
        uVar9 = uVar9 + 1;
      }
      uVar9 = uVar9 >> 1;
LAB_01f7c470:
      if (*(long *)(in_stack_00000000 + 0x28) == in_stack_00000038) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar9);
    }
  }
                    /* catch() { ... } // from try @ 01f7bff8 with catch @ 01f7c088
                       catch() { ... } // from try @ 01f7c078 with catch @ 01f7c088 */
  iVar6 = iVar6 + 1;
  puVar8 = unaff_x29;
                    /* try { // try from 01f7c08c to 0207c08f has its CatchHandler @ 01f7c098 */
                    /* try { // try from 01f7c090 to 0207c09b has its CatchHandler @ 01f7bfb0 */
  while (iVar6 = iVar6 + -1, 0 < iVar6) {
    puVar8 = puVar8 + -1;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01f7c08c with catch @ 01f7c098
                        */
    if ((uint)*puVar8 == (unaff_w20 & 0xffff)) goto LAB_01f7c3d4;
  }
  uVar9 = FUN_01ef817c(0);
  if (((uVar9 & 1) != 0) &&
     (uVar9 = (long)puVar8 - (long)in_stack_00000008, in_stack_00000008 <= puVar8 && uVar9 != 0)) {
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    lVar10 = *unaff_x28;
    lVar7 = *(long *)(lVar10 + 0x20);
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
    lVar7 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0122e748();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0122e748();
    }
    if ((long)uVar9 < 0) {
      uVar9 = uVar9 + 1;
    }
    iVar6 = **(int **)(lVar7 + 0xb8);
    FUN_01d1f8e8(&stack0x00000028,unaff_w20,*(undefined8 *)PTR_DAT_027c10f0);
    unaff_x29 = puVar8;
    for (uVar1 = -iVar6 & (uint)(uVar9 >> 1); 0 < (int)uVar1;
        uVar1 = uVar1 - **(int **)(lVar7 + 0xb8)) {
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      lVar10 = *unaff_x28;
      lVar7 = *(long *)(lVar10 + 0x20);
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
      lVar7 = *(long *)(lVar10 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0122e748();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0122e748();
      }
      uVar5 = in_stack_00000030;
      uVar4 = in_stack_00000028;
      lVar11 = *(long *)PTR_DAT_027c1100;
      lVar10 = *(long *)(lVar11 + 0x38);
      puVar8 = unaff_x29 + -(long)**(int **)(lVar7 + 0xb8);
      uVar2 = *(undefined8 *)puVar8;
      uVar3 = *(undefined8 *)(puVar8 + 4);
      if (lVar10 == 0) {
        FUN_0122e7a4(lVar11);
        lVar10 = *(long *)(lVar11 + 0x38);
      }
      lVar7 = *(long *)(lVar10 + 0x10);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0122e748();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      auVar12 = FUN_014803a8(uVar4,uVar5,uVar2,uVar3,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 8));
      lVar10 = *(long *)PTR_DAT_027c10f8;
      lVar7 = *(long *)(lVar10 + 0x20);
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
      lVar7 = *(long *)(lVar10 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0122e748();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0122e748();
      }
      in_stack_00000018 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10);
      in_stack_00000010 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
      uVar9 = FUN_01d22ef0(&stack0x00000010,auVar12._0_8_,auVar12._8_8_,
                           *(undefined8 *)PTR_DAT_027c10e8);
      if ((uVar9 & 1) == 0) {
        iVar6 = FUN_01f91a04(auVar12._0_8_,auVar12._8_8_,0);
        uVar9 = (long)puVar8 - (long)in_stack_00000008;
        if ((long)uVar9 < 0) {
          uVar9 = uVar9 + 1;
        }
        uVar9 = (ulong)(uint)(iVar6 + (int)(uVar9 >> 1));
        goto LAB_01f7c470;
      }
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      lVar10 = *unaff_x28;
      lVar7 = *(long *)(lVar10 + 0x20);
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
      lVar7 = *(long *)(lVar10 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0122e748();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0122e748();
      }
      lVar11 = *unaff_x28;
      lVar10 = *(long *)(lVar11 + 0x20);
      iVar6 = **(int **)(lVar7 + 0xb8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0122e748(lVar10);
      }
      lVar7 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0122e748();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      lVar7 = *(long *)(lVar11 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0122e748();
      }
      unaff_x29 = unaff_x29 + -(long)iVar6;
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0122e748();
      }
    }
    uVar9 = (long)unaff_x29 - (long)in_stack_00000008;
    if (in_stack_00000008 <= unaff_x29 && uVar9 != 0) {
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


