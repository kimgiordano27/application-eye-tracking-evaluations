/*
FUNCTION_NAME: FUN_050caa88
ENTRY_POINT: 050caa88
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x050cb034) */
/* WARNING: Removing unreachable block (ram,0x050cb0ac) */

long FUN_050caa88(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  int *piVar15;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
  
  if (*(long *)(param_4 + 0x38) == 0) {
    FUN_04447ba8(PTR_DAT_09f21a78);
    FUN_04447ba8(PTR_DAT_09f1f008);
    FUN_04447ba8(PTR_DAT_09f21c40);
    FUN_04447ba8(PTR_DAT_09f1f018);
    FUN_04447ba8(PTR_DAT_09f21a80);
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_04482014(param_4);
    }
  }
  plVar7 = (long *)thunk_FUN_04485110(param_2,*(undefined8 *)PTR_DAT_09f21a80);
  puVar3 = PTR_DAT_09f21a78;
  if (plVar7 != (long *)0x0) {
    lVar11 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_09f21a78) {
          puVar8 = (undefined8 *)(lVar11 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_050cac0c;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_044822ac(plVar7,*(long *)PTR_DAT_09f21a78,1);
LAB_050cac0c:
    uVar5 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    lVar11 = **(long **)(param_4 + 0x38);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_04481fb8(lVar11);
    }
    lVar11 = FUN_04447c90(lVar11,uVar5);
    puVar2 = PTR_DAT_09f1e5b8;
    uVar13 = 0;
    do {
      lVar12 = *plVar7;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar12 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_050caca4;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)FUN_044822ac(plVar7,*(long *)puVar3,1);
LAB_050caca4:
      iVar6 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if ((long)iVar6 <= (long)uVar13) {
        return lVar11;
      }
      lVar12 = *plVar7;
      plVar17 = *(long **)(param_1 + 0x28);
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_09f21a80) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_050cad10;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)FUN_044822ac(plVar7,*(long *)PTR_DAT_09f21a80,0);
LAB_050cad10:
      uVar9 = (*(code *)*puVar8)(plVar7,uVar13 & 0xffffffff,puVar8[1]);
      uVar18 = *(undefined8 *)(*(long *)(param_4 + 0x38) + 8);
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)(puVar2 + 0xe0));
      }
      uVar18 = FUN_07a4ce38(uVar18,0);
      if ((plVar17 == (long *)0x0) ||
         (plVar17 = (long *)(**(code **)(*plVar17 + 0x508))
                                      (plVar17,uVar9,uVar18,param_3,
                                       *(undefined8 *)(*plVar17 + 0x510)), lVar11 == 0))
      goto LAB_050cb084;
      lVar12 = *(long *)(*(long *)(param_4 + 0x38) + 0x10);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_04481fb8(lVar12);
      }
      if (plVar17 == (long *)0x0) goto LAB_050cb084;
      if (*(long *)(*plVar17 + 0x40) != *(long *)(lVar12 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_044481e4(plVar17);
      }
      puVar10 = (undefined4 *)thunk_FUN_04485360();
      if (*(uint *)(lVar11 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      lVar12 = uVar13 * 4;
      uVar13 = uVar13 + 1;
      *(undefined4 *)(lVar11 + lVar12 + 0x20) = *puVar10;
    } while( true );
  }
  if ((*(byte *)(*(long *)(*(long *)(param_4 + 0x38) + 0x18) + 0x135) & 1) == 0) {
    FUN_04481fb8();
  }
  lVar11 = thunk_FUN_0448520c();
  FUN_05c66fe0(lVar11,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20));
  puVar3 = PTR_DAT_09f21c40;
  lVar12 = thunk_FUN_04485110(param_2,*(undefined8 *)PTR_DAT_09f21c40);
  if (lVar12 != 0) {
    lVar16 = *(long *)puVar3;
    plVar7 = (long *)thunk_FUN_04485110(param_2,lVar16);
    lVar12 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar16) {
          puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_050cade0;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_044822ac(plVar7,lVar16,0);
LAB_050cade0:
    plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
    puVar2 = PTR_DAT_09f1f018;
    puVar3 = PTR_DAT_09f1e5b8;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    do {
      lVar16 = *plVar7;
      lVar12 = *(long *)puVar2;
      uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar12) {
            puVar8 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
            goto 
            System_Collections_Generic_List_Enumerator<ResourceManager_DeferredCallbackRegisterRequest>__Dispose
            ;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_044822ac(plVar7,lVar12,0);
System_Collections_Generic_List_Enumerator<ResourceManager_DeferredCallbackRegisterRequest>__Dispose
      :
      uVar13 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      puVar4 = PTR_DAT_09f1f008;
      if ((uVar13 & 1) == 0) {
        plVar7 = (long *)thunk_FUN_04485110(plVar7,*(undefined8 *)PTR_DAT_09f1f008);
        if (plVar7 == (long *)0x0) goto LAB_050cb028;
        lVar12 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 == 0) goto LAB_050cb000;
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        goto LAB_050cafe8;
      }
      lVar16 = *plVar7;
      lVar12 = *(long *)puVar2;
      uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar12) {
            puVar8 = (undefined8 *)(lVar16 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_050caeb0;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_044822ac(plVar7,lVar12,1);
LAB_050caeb0:
      uVar9 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      plVar17 = *(long **)(param_1 + 0x28);
      uVar18 = *(undefined8 *)(*(long *)(param_4 + 0x38) + 8);
      if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar18 = FUN_07a4ce38(uVar18,0);
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      plVar17 = (long *)(**(code **)(*plVar17 + 0x508))
                                  (plVar17,uVar9,uVar18,param_3,*(undefined8 *)(*plVar17 + 0x510));
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar12 = *(long *)(*(long *)(param_4 + 0x38) + 0x10);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_04481fb8(lVar12);
      }
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      if (*(long *)(*plVar17 + 0x40) != *(long *)(lVar12 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_044481e4(plVar17);
      }
      puVar10 = (undefined4 *)thunk_FUN_04485360(plVar17);
      uVar5 = *puVar10;
      lVar12 = *(long *)(lVar11 + 0x10);
      lVar16 = *(long *)(*(long *)(param_4 + 0x38) + 0x28);
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar1 = *(uint *)(lVar11 + 0x18);
      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar12 + (long)(int)uVar1 * 4 + 0x20) = uVar5;
      }
      else {
        FUN_05c6783c(lVar11,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
      }
    } while( true );
  }
  goto LAB_050cb084;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar15 = piVar15 + 4;
    if (uVar13 == 0) break;
LAB_050cafe8:
    if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
      puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_050cb01c;
    }
  }
LAB_050cb000:
  puVar8 = (undefined8 *)FUN_044822ac(plVar7,*(long *)puVar4,0);
LAB_050cb01c:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_050cb028:
  if (lVar11 != 0) {
    lVar11 = FUN_05c69314(lVar11,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x30));
    return lVar11;
  }
LAB_050cb084:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


