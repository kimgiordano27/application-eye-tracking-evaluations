/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$DeserializeClass
ENTRY_POINT: 072130c0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Meta_WitAi_Json_JsonConvert__DeserializeClass(int *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 extraout_x1;
  long lVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  int iVar16;
  undefined4 uVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  int *in_stack_00000038;
  long *in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000068;
  int iStack0000000000000074;
  undefined8 in_stack_00000078;
  int iStack0000000000000084;
  int *piStack0000000000000088;
  
  piStack0000000000000088 = param_1;
  if ((DAT_0988f474 & 1) == 0) {
    FUN_04077588(PTR_DAT_092bdf78);
    FUN_04077588(PTR_DAT_092899f8);
    FUN_04077588(PTR_DAT_09289990);
    FUN_04077588(PTR_DAT_092bdf80);
    FUN_04077588(PTR_DAT_092bdf88);
    FUN_04077588(PTR_DAT_092bdf90);
    FUN_04077588(PTR_DAT_092bdf98);
    FUN_04077588(PTR_DAT_092bc2c8);
    FUN_04077588(PTR_DAT_092860c0);
    FUN_04077588(PTR_DAT_092bdd68);
    FUN_04077588(PTR_DAT_092bdfa0);
    FUN_04077588(PTR_DAT_092bdfa8);
    FUN_04077588(PTR_DAT_092bddb8);
    FUN_04077588(PTR_DAT_092858e8);
    FUN_04077588(PTR_DAT_092bdd70);
    FUN_04077588(PTR_DAT_092bdd78);
    FUN_04077588(PTR_DAT_092bdd80);
    DAT_0988f474 = 1;
  }
  puVar8 = PTR_DAT_092bdf90;
  puVar7 = PTR_DAT_092bdd80;
  puVar6 = PTR_DAT_092bdd78;
  puVar5 = PTR_DAT_092bdd70;
  puVar4 = PTR_DAT_092bdd68;
  puVar3 = PTR_DAT_09289990;
  puVar2 = PTR_DAT_092860c0;
  iStack0000000000000084 = *param_1;
  lVar19 = *(long *)(param_1 + 8);
  in_stack_00000078 = 0;
  iStack0000000000000074 = 0;
  in_stack_00000068 = 0;
  if (iStack0000000000000084 == 0) {
LAB_07213290:
    in_stack_00000040 = (long *)&stack0x00000088;
    in_stack_00000038 = &stack0x00000084;
    in_stack_00000030 = 0;
    in_stack_00000078 = *(undefined8 *)(param_1 + 0x18);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    iStack0000000000000084 = -1;
    *param_1 = -1;
    do {
      plVar9 = (long *)FUN_065f1330(&stack0x00000078,*(undefined8 *)puVar5);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar12 = *plVar9;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
            puVar10 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0721331c;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)FUN_040b1e00(plVar9,*(long *)puVar4,0);
LAB_0721331c:
      uVar13 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if ((uVar13 & 1) == 0) {
        if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        plVar18 = *(long **)(lVar19 + 0x130);
        if (plVar18 == (long *)0x0) goto LAB_07213600;
        lVar12 = FUN_04077674(*(undefined8 *)PTR_DAT_092858e8,2);
        lVar20 = *plVar9;
        uVar13 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar13 == 0) goto LAB_0721351c;
        piVar15 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        goto LAB_07213504;
      }
      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar12 = *plVar9;
      lVar20 = *(long *)(lVar19 + 0x30);
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      uVar1 = piStack0000000000000088[0x14];
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
            puVar10 = (undefined8 *)(lVar12 + (long)(*piVar15 + 2) * 0x10 + 0x138);
            goto LAB_0721338c;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)FUN_040b1e00(plVar9,*(long *)puVar4,2);
LAB_0721338c:
      uVar11 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(uint *)(lVar20 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      *(undefined8 *)(lVar20 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
      thunk_FUN_040ec700();
      lVar12 = *plVar9;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
            puVar10 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_07213404;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)FUN_040b1e00(plVar9,*(long *)puVar2,0);
LAB_07213404:
      (*(code *)*puVar10)(plVar9,puVar10[1]);
      piStack0000000000000088[0x14] = 0;
      piStack0000000000000088[0x15] = 0;
      piStack0000000000000088[0x16] = 0;
      piStack0000000000000088[0x17] = 0;
LAB_07213418:
      uVar13 = FUN_05365070(piStack0000000000000088 + 10,*(undefined8 *)puVar8);
      if ((uVar13 & 1) == 0) {
        iVar16 = 0xe;
        goto LAB_07213604;
      }
      *(undefined8 *)(piStack0000000000000088 + 0x16) =
           *(undefined8 *)(piStack0000000000000088 + 0x10);
      *(undefined8 *)(piStack0000000000000088 + 0x14) =
           *(undefined8 *)(piStack0000000000000088 + 0xe);
      thunk_FUN_040ec700(piStack0000000000000088 + 0x16,0);
      if (*(long *)(piStack0000000000000088 + 0x16) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      in_stack_00000078 =
           FUN_06649f2c(*(long *)(piStack0000000000000088 + 0x16),*(undefined8 *)puVar7);
      uVar13 = FUN_065f12f0(&stack0x00000078,*(undefined8 *)puVar6);
    } while ((uVar13 & 1) != 0);
    iStack0000000000000084 = 0;
    *piStack0000000000000088 = 0;
    *(undefined8 *)(piStack0000000000000088 + 0x18) = in_stack_00000078;
    thunk_FUN_040ec700(piStack0000000000000088 + 0x18,0);
    piVar15 = piStack0000000000000088;
    lVar12 = *(long *)puVar3;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_040d65a8(lVar12,extraout_x1,piStack0000000000000088);
    }
    FUN_04993f10(piVar15 + 2,&stack0x00000078,piStack0000000000000088,
                 *(undefined8 *)PTR_DAT_092bdf78);
    iVar16 = 8;
    goto LAB_07213604;
  }
  if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (*(long *)(lVar19 + 0x50) != 0) {
    FUN_06e23718(&stack0x00000008,*(long *)(lVar19 + 0x50),*(undefined8 *)PTR_DAT_092bdf80);
    in_stack_00000038 = (int *)in_stack_00000010;
    in_stack_00000030 = in_stack_00000008;
    in_stack_00000048 = in_stack_00000020;
    in_stack_00000040 = (long *)in_stack_00000018;
    in_stack_00000050 = in_stack_00000028;
    *(undefined8 *)(piStack0000000000000088 + 0xc) = in_stack_00000010;
    *(undefined8 *)(piStack0000000000000088 + 10) = in_stack_00000008;
    *(undefined8 *)(piStack0000000000000088 + 0x10) = in_stack_00000020;
    *(undefined8 *)(piStack0000000000000088 + 0xe) = in_stack_00000018;
    *(undefined8 *)(piStack0000000000000088 + 0x12) = in_stack_00000028;
    thunk_FUN_040ec700(piStack0000000000000088 + 10,0);
    in_stack_00000038 = &stack0x00000084;
    in_stack_00000030 = 0;
    in_stack_00000040 = (long *)&stack0x00000088;
    param_1 = piStack0000000000000088;
    if (iStack0000000000000084 != 0) goto LAB_07213418;
    goto LAB_07213290;
  }
  goto LAB_07213660;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar15 = piVar15 + 4;
    if (uVar13 == 0) break;
LAB_07213504:
    if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
      puVar10 = (undefined8 *)(lVar20 + (long)(*piVar15 + 1) * 0x10 + 0x138);
      goto LAB_0721353c;
    }
  }
LAB_0721351c:
  puVar10 = (undefined8 *)FUN_040b1e00(plVar9,*(long *)puVar4,1);
LAB_0721353c:
  uVar11 = (*(code *)*puVar10)(plVar9,puVar10[1]);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (*(int *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
  *(undefined8 *)(lVar12 + 0x20) = uVar11;
  thunk_FUN_040ec700();
  iStack0000000000000074 = piStack0000000000000088[0x14];
  uVar11 = FUN_07676bc4(&stack0x00000074,0);
  if ((*(uint *)(lVar12 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
  *(undefined8 *)(lVar12 + 0x28) = uVar11;
  thunk_FUN_040ec700();
  lVar20 = *plVar18;
  uVar13 = (ulong)*(ushort *)(lVar20 + 0x12e);
  if (uVar13 != 0) {
    piVar15 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_092bc2c8) {
        puVar10 = (undefined8 *)(lVar20 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_072135ec;
      }
      uVar13 = uVar13 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar13 != 0);
  }
  puVar10 = (undefined8 *)FUN_040b1e00(plVar18,*(long *)PTR_DAT_092bc2c8,0);
LAB_072135ec:
  (*(code *)*puVar10)(plVar18,8,lVar12,puVar10[1]);
LAB_07213600:
  iVar16 = 0xd;
LAB_07213604:
  if (*in_stack_00000038 < 0) {
    FUN_05365194(*in_stack_00000040 + 0x28,*(undefined8 *)PTR_DAT_092bdf88);
  }
  if (in_stack_00000030 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077828();
  }
  if (iVar16 != 0xe) {
    if (iVar16 == 0xd) {
      uVar17 = 0;
      goto LAB_072136ec;
    }
    if (iVar16 != 0) {
      return;
    }
  }
  piStack0000000000000088[0x12] = 0;
  piStack0000000000000088[0x13] = 0;
  piStack0000000000000088[0xc] = 0;
  piStack0000000000000088[0xd] = 0;
  piStack0000000000000088[10] = 0;
  piStack0000000000000088[0xb] = 0;
  piStack0000000000000088[0x10] = 0;
  piStack0000000000000088[0x11] = 0;
  piStack0000000000000088[0xe] = 0;
  piStack0000000000000088[0xf] = 0;
  if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
LAB_07213660:
  lVar12 = *(long *)(lVar19 + 0x30);
  if (lVar12 != 0) {
    lVar20 = 4;
    while( true ) {
      uVar13 = lVar20 - 4;
      if ((long)(int)*(uint *)(lVar12 + 0x18) <= (long)uVar13) break;
      if ((lVar20 != 4) || (*(char *)(lVar19 + 200) == '\0')) {
        if (*(uint *)(lVar12 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        lVar14 = *(long *)(lVar12 + lVar20 * 8);
        if (lVar14 != 0) {
          lVar12 = *(long *)(lVar19 + 0x48);
          in_stack_00000030 = 0;
          FUN_071f77e0(&stack0x00000030,0,*(undefined4 *)(lVar14 + 0x18),0);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if (*(uint *)(lVar12 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          *(long *)(lVar12 + lVar20 * 8) = in_stack_00000030;
          lVar12 = *(long *)(lVar19 + 0x30);
        }
      }
      lVar20 = lVar20 + 1;
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
    }
  }
  uVar17 = 1;
LAB_072136ec:
  piVar15 = piStack0000000000000088 + 2;
  *piStack0000000000000088 = -2;
  puVar2 = PTR_DAT_092899f8;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_065d0838(piVar15,uVar17,*(undefined8 *)puVar2);
  return;
}


