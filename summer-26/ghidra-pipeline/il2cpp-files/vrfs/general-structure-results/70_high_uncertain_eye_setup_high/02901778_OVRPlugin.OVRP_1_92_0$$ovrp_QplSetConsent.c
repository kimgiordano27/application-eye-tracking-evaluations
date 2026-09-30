/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_QplSetConsent
ENTRY_POINT: 02901778
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_92_0__ovrp_QplSetConsent(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  int *piVar17;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  undefined4 uVar18;
  ulong in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06df2be8);
    thunk_FUN_0159f088(PTR_DAT_06e0ce20);
    thunk_FUN_0159f088(PTR_DAT_06e18670);
    thunk_FUN_0159f088(PTR_DAT_06e56f18);
    thunk_FUN_0159f088(PTR_DAT_06d98c30);
    thunk_FUN_0159f088(PTR_DAT_06e01080);
    thunk_FUN_0159f088(PTR_DAT_06deb360);
    thunk_FUN_0159f088(PTR_DAT_06e467c0);
    thunk_FUN_0159f088(PTR_DAT_06e1faf8);
    thunk_FUN_0159f088(PTR_DAT_06e199e0);
    thunk_FUN_0159f088(PTR_DAT_06e5e6c8);
    thunk_FUN_0159f088(PTR_DAT_06e10ca0);
    thunk_FUN_0159f088(PTR_DAT_06dc2fe0);
    thunk_FUN_0159f088(PTR_DAT_06dd3570);
    thunk_FUN_0159f088(PTR_DAT_06e4c678);
    *(undefined1 *)(unaff_x20 + 0xc37) = 1;
  }
  puVar12 = PTR_DAT_06deb360;
  if (((unaff_x21 == 0) && (unaff_w22 < 0x13)) && ((1 << (ulong)(unaff_w22 & 0x1f) & 0x40003U) != 0)
     ) {
    unaff_x21 = 0;
    goto switchD_02901878_caseD_1;
  }
  plVar7 = (long *)thunk_FUN_015d0480();
  puVar4 = PTR_DAT_06e10ca0;
  puVar3 = PTR_DAT_06e01080;
  puVar2 = PTR_DAT_06df2be8;
  puVar1 = PTR_DAT_06d98c30;
  if (plVar7 == (long *)0x0) {
    thunk_FUN_0159f088(PTR_DAT_06e1d950);
    uVar10 = thunk_FUN_015d056c();
    FUN_011a9bc8();
    puVar12 = PTR_DAT_06e69c48;
    goto LAB_02901f60;
  }
  switch(unaff_w22) {
  case 0:
    thunk_FUN_0159f088(PTR_DAT_06e1d950);
    uVar10 = thunk_FUN_015d056c();
    FUN_011a9bc8();
    puVar12 = PTR_DAT_06e47aa0;
    goto LAB_02901f60;
  case 1:
    goto switchD_02901878_caseD_1;
  case 2:
    thunk_FUN_0159f088(PTR_DAT_06e1d950);
    uVar10 = thunk_FUN_015d056c();
    FUN_011a9bc8();
    puVar12 = PTR_DAT_06da7b98;
LAB_02901f60:
    uVar11 = thunk_FUN_0159f088(puVar12);
    FUN_032192a4(uVar10,uVar11,0);
LAB_02901f74:
    uVar11 = thunk_FUN_0159f088(PTR_DAT_06e08138);
                    /* WARNING: Subroutine does not return */
    FUN_0160ee7c(uVar10,uVar11);
  case 3:
    lVar13 = *plVar7;
    uVar16 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar12) {
          puVar8 = (undefined8 *)(lVar13 + (long)(*piVar17 + 1) * 0x10 + 0x138);
          goto LAB_02901ce0;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar8 = (undefined8 *)FUN_015c2a80(plVar7,*(long *)puVar12,1);
LAB_02901ce0:
    uVar5 = (*(code *)*puVar8)(plVar7);
    uVar10 = *(undefined8 *)puVar2;
    in_stack_00000008 = CONCAT71(in_stack_00000008._1_7_,uVar5) & 0xffffffffffffff01;
    break;
  case 4:
    lVar14 = *plVar7;
    lVar13 = *(long *)puVar12;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12a);
    puVar8 = (undefined8 *)PTR_DAT_06e18670;
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
LAB_02901b24:
      if (*(long *)(piVar17 + -2) != lVar13) goto code_r0x02901b30;
      iVar15 = *piVar17 + 2;
LAB_02901dd0:
      puVar9 = (undefined8 *)(lVar14 + (long)iVar15 * 0x10 + 0x138);
      goto LAB_02901dd8;
    }
LAB_02901b3c:
    uVar10 = 2;
    goto LAB_02901b80;
  case 5:
    lVar14 = *plVar7;
    lVar13 = *(long *)puVar12;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12a);
    puVar8 = (undefined8 *)PTR_DAT_06e5e6c8;
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
LAB_02901a9c:
      if (*(long *)(piVar17 + -2) != lVar13) goto code_r0x02901aa8;
      iVar15 = *piVar17 + 3;
LAB_02901d8c:
      puVar9 = (undefined8 *)(lVar14 + (long)iVar15 * 0x10 + 0x138);
      goto LAB_02901d94;
    }
LAB_02901ab4:
    uVar10 = 3;
    goto LAB_02901ab8;
  case 6:
    lVar14 = *plVar7;
    lVar13 = *(long *)puVar12;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12a);
    puVar8 = (undefined8 *)PTR_DAT_06e0ce20;
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar13) {
          iVar15 = *piVar17 + 4;
          goto LAB_02901d8c;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    uVar10 = 4;
LAB_02901ab8:
    puVar9 = (undefined8 *)FUN_015c2a80(plVar7,lVar13,uVar10);
LAB_02901d94:
    uVar5 = (*(code *)*puVar9)(plVar7);
    uVar10 = *puVar8;
    in_stack_00000008 = CONCAT71(in_stack_00000008._1_7_,uVar5);
    break;
  case 7:
    lVar14 = *plVar7;
    lVar13 = *(long *)puVar12;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12a);
    puVar8 = (undefined8 *)PTR_DAT_06e467c0;
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar13) {
          iVar15 = *piVar17 + 5;
          goto LAB_02901dd0;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    uVar10 = 5;
    goto LAB_02901b80;
  case 8:
    lVar14 = *plVar7;
    lVar13 = *(long *)puVar12;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12a);
    puVar8 = (undefined8 *)PTR_DAT_06dc2fe0;
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar13) {
          iVar15 = *piVar17 + 6;
          goto LAB_02901dd0;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    uVar10 = 6;
LAB_02901b80:
    puVar9 = (undefined8 *)FUN_015c2a80(plVar7,lVar13,uVar10);
LAB_02901dd8:
    uVar6 = (*(code *)*puVar9)(plVar7);
    uVar10 = *puVar8;
    in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,uVar6);
    break;
  case 9:
    lVar14 = *plVar7;
    lVar13 = *(long *)puVar12;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12a);
    puVar8 = (undefined8 *)PTR_DAT_06e1faf8;
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
LAB_02901bac:
      if (*(long *)(piVar17 + -2) != lVar13) goto code_r0x02901bb8;
      iVar15 = *piVar17 + 7;
LAB_02901dfc:
      puVar9 = (undefined8 *)(lVar14 + (long)iVar15 * 0x10 + 0x138);
      goto LAB_02901e04;
    }
LAB_02901bc4:
    uVar10 = 7;
    goto LAB_02901bc8;
  case 10:
    lVar14 = *plVar7;
    lVar13 = *(long *)puVar12;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12a);
    puVar8 = (undefined8 *)PTR_DAT_06dd3570;
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar13) {
          iVar15 = *piVar17 + 8;
          goto LAB_02901dfc;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    uVar10 = 8;
LAB_02901bc8:
    puVar9 = (undefined8 *)FUN_015c2a80(plVar7,lVar13,uVar10);
LAB_02901e04:
    uVar18 = (*(code *)*puVar9)(plVar7);
    uVar10 = *puVar8;
    in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar18);
    break;
  case 0xb:
    lVar14 = *plVar7;
    lVar13 = *(long *)puVar12;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12a);
    puVar8 = (undefined8 *)PTR_DAT_06e199e0;
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
LAB_02901bf4:
      if (*(long *)(piVar17 + -2) != lVar13) goto code_r0x02901c00;
      iVar15 = *piVar17 + 9;
LAB_02901e64:
      puVar9 = (undefined8 *)(lVar14 + (long)iVar15 * 0x10 + 0x138);
      goto LAB_02901e6c;
    }
LAB_02901c0c:
    uVar10 = 9;
    goto LAB_02901c98;
  case 0xc:
    lVar14 = *plVar7;
    lVar13 = *(long *)puVar12;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12a);
    puVar8 = (undefined8 *)PTR_DAT_06e4c678;
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar13) {
          iVar15 = *piVar17 + 10;
          goto LAB_02901e64;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    uVar10 = 10;
    goto LAB_02901c98;
  case 0xd:
    lVar13 = *plVar7;
    uVar16 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar12) {
          puVar8 = (undefined8 *)(lVar13 + (long)(*piVar17 + 0xb) * 0x10 + 0x138);
          goto LAB_02901e3c;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar8 = (undefined8 *)FUN_015c2a80(plVar7,*(long *)puVar12,0xb);
LAB_02901e3c:
    uVar18 = (*(code *)*puVar8)(plVar7);
    uVar10 = *(undefined8 *)puVar4;
    in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar18);
    break;
  case 0xe:
    lVar13 = *plVar7;
    uVar16 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar12) {
          puVar8 = (undefined8 *)(lVar13 + (long)(*piVar17 + 0xc) * 0x10 + 0x138);
          goto LAB_02901cb4;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar8 = (undefined8 *)FUN_015c2a80(plVar7,*(long *)puVar12,0xc);
LAB_02901cb4:
    uVar10 = (*(code *)*puVar8)(plVar7);
    in_stack_00000008 = uVar10;
    uVar10 = *(undefined8 *)puVar3;
    break;
  case 0xf:
    lVar13 = *plVar7;
    uVar16 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar12) {
          puVar8 = (undefined8 *)(lVar13 + (long)(*piVar17 + 0xd) * 0x10 + 0x138);
          goto LAB_02901d34;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar8 = (undefined8 *)FUN_015c2a80(plVar7,*(long *)puVar12,0xd);
LAB_02901d34:
    _in_stack_00000008 = (*(code *)*puVar8)(plVar7);
    uVar10 = *(undefined8 *)puVar1;
    break;
  case 0x10:
    lVar14 = *plVar7;
    lVar13 = *(long *)puVar12;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12a);
    puVar8 = (undefined8 *)PTR_DAT_06e56f18;
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar13) {
          iVar15 = *piVar17 + 0xe;
          goto LAB_02901e64;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    uVar10 = 0xe;
LAB_02901c98:
    puVar9 = (undefined8 *)FUN_015c2a80(plVar7,lVar13,uVar10);
LAB_02901e6c:
    uVar10 = (*(code *)*puVar9)(plVar7);
    in_stack_00000008 = uVar10;
    uVar10 = *puVar8;
    break;
  default:
    thunk_FUN_0159f088(PTR_DAT_06dde728);
    uVar10 = thunk_FUN_015d056c();
    FUN_011a9bc8();
    uVar11 = thunk_FUN_0159f088(PTR_DAT_06ddb5e0);
    FUN_028f9010(uVar10,uVar11);
    goto LAB_02901f74;
  case 0x12:
    lVar13 = *plVar7;
    uVar16 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar12) {
          puVar8 = (undefined8 *)(lVar13 + (long)(*piVar17 + 0xf) * 0x10 + 0x138);
          goto LAB_02901d60;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar8 = (undefined8 *)FUN_015c2a80(plVar7,*(long *)puVar12,0xf);
LAB_02901d60:
    lVar13 = (*(code *)*puVar8)(plVar7);
    if (*(long *)(unaff_x23 + 0x28) == in_stack_00000018) {
      return lVar13;
    }
    goto LAB_02901ef4;
  }
  unaff_x21 = thunk_FUN_015d01b0(uVar10,&stack0x00000008);
switchD_02901878_caseD_1:
  if (*(long *)(unaff_x23 + 0x28) == in_stack_00000018) {
    return unaff_x21;
  }
LAB_02901ef4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x02901c00:
  uVar16 = uVar16 - 1;
  piVar17 = piVar17 + 4;
  if (uVar16 == 0) goto LAB_02901c0c;
  goto LAB_02901bf4;
code_r0x02901bb8:
  uVar16 = uVar16 - 1;
  piVar17 = piVar17 + 4;
  if (uVar16 == 0) goto LAB_02901bc4;
  goto LAB_02901bac;
code_r0x02901aa8:
  uVar16 = uVar16 - 1;
  piVar17 = piVar17 + 4;
  if (uVar16 == 0) goto LAB_02901ab4;
  goto LAB_02901a9c;
code_r0x02901b30:
  uVar16 = uVar16 - 1;
  piVar17 = piVar17 + 4;
  if (uVar16 == 0) goto LAB_02901b3c;
  goto LAB_02901b24;
}


