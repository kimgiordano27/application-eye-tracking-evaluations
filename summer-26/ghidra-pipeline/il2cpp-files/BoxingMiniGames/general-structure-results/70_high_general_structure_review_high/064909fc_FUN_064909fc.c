/*
FUNCTION_NAME: FUN_064909fc
ENTRY_POINT: 064909fc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_21;telemetry_or_network_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x064911dc) */
/* WARNING: Removing unreachable block (ram,0x064914d8) */
/* WARNING: Removing unreachable block (ram,0x06491474) */
/* WARNING: Removing unreachable block (ram,0x064914e4) */

void FUN_064909fc(long param_1,long param_2,long *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  int *piVar17;
  long lVar18;
  long *local_68;
  
  if ((DAT_07ee5bfc & 1) == 0) {
    FUN_03642964(PTR_DAT_07a10010);
    FUN_03642964(PTR_DAT_07a1fe88);
    FUN_03642964(PTR_DAT_07a1fe70);
    FUN_03642964(PTR_DAT_07a0d2e0);
    FUN_03642964(PTR_DAT_079f4598);
    FUN_03642964(PTR_DAT_079f49a8);
    FUN_03642964(PTR_DAT_07a201b0);
    FUN_03642964(PTR_DAT_07a201e8);
    FUN_03642964(PTR_DAT_07a3a850);
    FUN_03642964(PTR_DAT_07a028c8);
    DAT_07ee5bfc = 1;
  }
  local_68 = (long *)0x0;
  if (param_2 != 0) {
    if (*(char *)(param_1 + 0x59) != '\0') {
      if (param_3 == (long *)0x0) goto LAB_064914bc;
      lVar18 = *(long *)(param_2 + 0x10);
      uVar9 = (**(code **)(*param_3 + 0x378))(param_3,*(undefined8 *)(*param_3 + 0x380));
      if (lVar18 == 0) goto LAB_064914bc;
      FUN_06415de0(lVar18,uVar9,0);
    }
    plVar10 = (long *)thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a0d2e0);
    FUN_05dbe58c(plVar10,0);
    thunk_FUN_06450d0c(param_2,0);
    puVar5 = PTR_DAT_07a3a850;
    puVar3 = PTR_DAT_07a028c8;
    if (param_3 != (long *)0x0) {
      plVar11 = (long *)(**(code **)(*param_3 + 600))(param_3,*(undefined8 *)(*param_3 + 0x260));
      local_68 = plVar11;
      lVar18 = FUN_064900a8(plVar11,param_2);
      if (lVar18 != 0) {
        if (plVar10 == (long *)0x0) goto LAB_064914bc;
        (**(code **)(*plVar10 + 0x318))(plVar10,lVar18,lVar18,*(undefined8 *)(*plVar10 + 800));
        uVar9 = FUN_0648fc94(param_1,plVar11);
        uVar12 = FUN_0647f6cc(param_3,*(undefined8 *)puVar5,*(undefined8 *)puVar3,0,0);
        if (((uVar12 & 1) == 0) ||
           (uVar12 = FUN_05c97640(uVar9,0), puVar4 = PTR_DAT_07a10010, (uVar12 & 1) == 0)) {
          FUN_06491914(uVar12,param_2,lVar18,uVar9);
        }
        else {
          lVar13 = *(long *)PTR_DAT_07a10010;
          if (*(int *)(lVar13 + 0xe4) == 0) {
            thunk_FUN_036a1978();
            lVar13 = *(long *)puVar4;
          }
          FUN_064508bc(param_2,lVar18,**(undefined8 **)(lVar13 + 0xb8),0);
        }
      }
      puVar2 = PTR_DAT_07a201e8;
      puVar4 = PTR_DAT_07a1fe88;
      if (plVar11 != (long *)0x0) {
joined_r0x06490c08:
        if (plVar11 == param_3)
        goto 
        System_Runtime_Serialization_XmlObjectSerializerReadContext__InitializeExtensionDataNode;
        iVar7 = (**(code **)(*plVar11 + 0x1e8))(plVar11,*(undefined8 *)(*plVar11 + 0x1f0));
        if (iVar7 == 1) {
          bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
          if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
            FUN_03643084(plVar11);
          }
          lVar18 = *(long *)(param_1 + 0x18);
          uVar8 = FUN_06490254(param_1,plVar11);
          if (lVar18 == 0) goto LAB_064914bc;
          plVar14 = (long *)FUN_0649090c(lVar18,plVar11,uVar8 & 1);
          if (plVar14 == (long *)0x0) {
LAB_06490e50:
            local_68 = (long *)(**(code **)(*plVar11 + 600))
                                         (plVar11,*(undefined8 *)(*plVar11 + 0x260));
            plVar15 = local_68;
            plVar6 = local_68;
            if (local_68 != (long *)0x0) goto LAB_06490ee8;
          }
          else {
            bVar1 = *(byte *)(*(long *)PTR_DAT_07a1fe70 + 0x130);
            if (((bVar1 <= *(byte *)(*plVar14 + 0x130)) &&
                (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) ==
                 *(long *)PTR_DAT_07a1fe70)) &&
               (uVar12 = FUN_0649016c(param_1,plVar11), (uVar12 & 1) != 0)) {
              lVar18 = *(long *)(param_1 + 0x18);
              uVar8 = FUN_06490254(param_1,plVar11);
              if (lVar18 == 0) goto LAB_064914bc;
              plVar14 = (long *)FUN_06490334(lVar18,plVar11,uVar8 & 1);
              if (plVar14 == (long *)0x0) goto LAB_06490e50;
            }
            lVar18 = *(long *)puVar4;
            bVar1 = *(byte *)(lVar18 + 0x130);
            if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != lVar18))
            goto LAB_06490e78;
            plVar15 = (long *)(**(code **)(*plVar11 + 600))
                                        (plVar11,*(undefined8 *)(*plVar11 + 0x260));
            lVar13 = *(long *)puVar4;
            lVar18 = *plVar14;
            bVar1 = *(byte *)(lVar13 + 0x130);
            plVar6 = plVar15;
            if (((bVar1 <= *(byte *)(lVar18 + 0x130)) &&
                ((*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar1 * 8 + -8) == lVar13 &&
                 (plVar14[0xf] == *(long *)(param_2 + 0x10))))) &&
               (local_68 = plVar15,
               iVar7 = (**(code **)(lVar18 + 0x1f8))(plVar14,*(undefined8 *)(lVar18 + 0x200)),
               plVar6 = local_68, iVar7 != 2)) {
              if (plVar10 != (long *)0x0) {
                lVar18 = (**(code **)(*plVar10 + 0x308))
                                   (plVar10,plVar14,*(undefined8 *)(*plVar10 + 0x310));
                plVar6 = local_68;
                if (lVar18 == 0) {
                  (**(code **)(*plVar10 + 0x318))
                            (plVar10,plVar14,plVar14,*(undefined8 *)(*plVar10 + 800));
                  uVar9 = FUN_0648fc94(param_1,plVar15);
                  uVar12 = FUN_0647f6cc(plVar11,*(undefined8 *)puVar5,*(undefined8 *)puVar3,0,0);
                  if (((uVar12 & 1) == 0) || (uVar12 = FUN_05c97640(uVar9,0), (uVar12 & 1) == 0)) {
                    FUN_06491914(uVar12,param_2,plVar14,uVar9);
                    plVar6 = local_68;
                  }
                  else {
                    lVar18 = *(long *)PTR_DAT_07a10010;
                    if (*(int *)(lVar18 + 0xe4) == 0) {
                      thunk_FUN_036a1978();
                      lVar18 = *(long *)PTR_DAT_07a10010;
                    }
                    FUN_064508bc(param_2,plVar14,**(undefined8 **)(lVar18 + 0xb8),0);
                    plVar6 = local_68;
                  }
                }
                goto joined_r0x06490e48;
              }
              goto LAB_064914bc;
            }
          }
joined_r0x06490e48:
          local_68 = plVar11;
          if (plVar15 == (long *)0x0) goto LAB_06490e78;
          goto joined_r0x06490e80;
        }
LAB_06490e78:
        plVar15 = plVar11;
        plVar6 = local_68;
joined_r0x06490e80:
        while( true ) {
          local_68 = plVar6;
          if (plVar15 == param_3)
          goto 
          System_Runtime_Serialization_XmlObjectSerializerReadContext__InitializeExtensionDataNode;
          if (plVar15 == (long *)0x0) goto LAB_064914bc;
          lVar18 = (**(code **)(*plVar15 + 0x228))(plVar15,*(undefined8 *)(*plVar15 + 0x230));
          if (lVar18 != 0) break;
          plVar15 = (long *)(**(code **)(*plVar15 + 0x1f8))
                                      (plVar15,*(undefined8 *)(*plVar15 + 0x200));
          plVar6 = plVar15;
        }
        if (plVar15 == param_3)
        goto 
        System_Runtime_Serialization_XmlObjectSerializerReadContext__InitializeExtensionDataNode;
        local_68 = (long *)(**(code **)(*plVar15 + 0x228))
                                     (plVar15,*(undefined8 *)(*plVar15 + 0x230));
LAB_06490ee8:
        plVar11 = local_68;
        if (local_68 == (long *)0x0)
        goto 
        System_Runtime_Serialization_XmlObjectSerializerReadContext__InitializeExtensionDataNode;
        goto joined_r0x06490c08;
      }
System_Runtime_Serialization_XmlObjectSerializerReadContext__InitializeExtensionDataNode:
      plVar11 = (long *)(**(code **)(*param_3 + 0x238))(param_3,*(undefined8 *)(*param_3 + 0x240));
      if (plVar11 != (long *)0x0) {
        plVar11 = (long *)(**(code **)(*plVar11 + 0x1c8))(plVar11,*(undefined8 *)(*plVar11 + 0x1d0))
        ;
        puVar4 = PTR_DAT_07a201b0;
        puVar5 = PTR_DAT_07a1fe88;
        puVar3 = PTR_DAT_079f49a8;
        do {
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar13 = *plVar11;
          lVar18 = *(long *)puVar3;
          uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar12 != 0) {
            piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == lVar18) {
                puVar16 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_06490fb8;
              }
              uVar12 = uVar12 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar12 != 0);
          }
          puVar16 = (undefined8 *)FUN_0367cd30(plVar11,lVar18,0);
LAB_06490fb8:
          uVar12 = (*(code *)*puVar16)(plVar11,puVar16[1]);
          puVar2 = PTR_DAT_079f4598;
          if ((uVar12 & 1) == 0) {
            plVar11 = (long *)thunk_FUN_0367fd24(plVar11,*(undefined8 *)PTR_DAT_079f4598);
            if (plVar11 == (long *)0x0) goto LAB_064911d0;
            lVar18 = *plVar11;
            uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar12 == 0) goto LAB_064911a8;
            piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            goto LAB_06491190;
          }
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar13 = *plVar11;
          lVar18 = *(long *)puVar3;
          uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar12 != 0) {
            piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == lVar18) {
                puVar16 = (undefined8 *)(lVar13 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                goto LAB_06491020;
              }
              uVar12 = uVar12 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar12 != 0);
          }
          puVar16 = (undefined8 *)FUN_0367cd30(plVar11,lVar18,1);
LAB_06491020:
          plVar14 = (long *)(*(code *)*puVar16)(plVar11,puVar16[1]);
          if (plVar14 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
            if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
              FUN_03643084(plVar14);
            }
          }
          lVar18 = *(long *)(param_1 + 0x18);
          uVar8 = FUN_06490254(param_1,plVar14);
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          plVar15 = (long *)FUN_06490334(lVar18,plVar14,uVar8 & 1);
          if (plVar15 != (long *)0x0) {
            lVar18 = *plVar15;
            bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
            if (((bVar1 <= *(byte *)(lVar18 + 0x130)) &&
                (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar5)) &&
               (iVar7 = (**(code **)(lVar18 + 0x1f8))(plVar15,*(undefined8 *)(lVar18 + 0x200)),
               iVar7 == 2)) {
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar18 = (**(code **)(*plVar10 + 0x308))
                                 (plVar10,plVar15,*(undefined8 *)(*plVar10 + 0x310));
              if (lVar18 == 0) {
                (**(code **)(*plVar10 + 0x318))
                          (plVar10,plVar15,plVar15,*(undefined8 *)(*plVar10 + 800));
                if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                local_68 = (long *)(**(code **)(*plVar14 + 600))
                                             (plVar14,*(undefined8 *)(*plVar14 + 0x260));
                uVar9 = FUN_0648feac(local_68,&local_68);
                FUN_06491914(uVar9,param_2,plVar15,uVar9);
              }
            }
          }
        } while( true );
      }
    }
  }
  goto LAB_064914bc;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar17 = piVar17 + 4;
    if (uVar12 == 0) break;
LAB_06491428:
    if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
      puVar16 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_0649145c;
    }
  }
LAB_06491440:
  puVar16 = (undefined8 *)FUN_0367cd30(plVar10,*(long *)puVar2,0);
LAB_0649145c:
  (*(code *)*puVar16)(plVar10,puVar16[1]);
LAB_06491468:
  FUN_06450e88(param_2,0);
  return;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar17 = piVar17 + 4;
    if (uVar12 == 0) break;
LAB_06491190:
    if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
      puVar16 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_064911c4;
    }
  }
LAB_064911a8:
  puVar16 = (undefined8 *)FUN_0367cd30(plVar11,*(long *)puVar2,0);
LAB_064911c4:
  (*(code *)*puVar16)(plVar11,puVar16[1]);
LAB_064911d0:
  if ((*(long *)(param_2 + 0x10) != 0) &&
     (plVar11 = *(long **)(*(long *)(param_2 + 0x10) + 0x40), plVar11 != (long *)0x0)) {
    plVar11 = (long *)(**(code **)(*plVar11 + 0x1e8))(plVar11,*(undefined8 *)(*plVar11 + 0x1f0));
    puVar4 = PTR_DAT_07a1fe88;
    puVar5 = PTR_DAT_07a10010;
    puVar3 = PTR_DAT_079f49a8;
    do {
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar13 = *plVar11;
      lVar18 = *(long *)puVar3;
      uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar12 != 0) {
        piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar18) {
            puVar16 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_0649127c;
          }
          uVar12 = uVar12 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar12 != 0);
      }
      puVar16 = (undefined8 *)FUN_0367cd30(plVar11,lVar18,0);
LAB_0649127c:
      uVar12 = (*(code *)*puVar16)(plVar11,puVar16[1]);
      if ((uVar12 & 1) == 0) {
        plVar10 = (long *)thunk_FUN_0367fd24(plVar11,*(undefined8 *)puVar2);
        if (plVar10 == (long *)0x0) goto LAB_06491468;
        lVar18 = *plVar10;
        uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar12 == 0) goto LAB_06491440;
        piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        goto LAB_06491428;
      }
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar13 = *plVar11;
      lVar18 = *(long *)puVar3;
      uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar12 != 0) {
        piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar18) {
            puVar16 = (undefined8 *)(lVar13 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_064912e4;
          }
          uVar12 = uVar12 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar12 != 0);
      }
      puVar16 = (undefined8 *)FUN_0367cd30(plVar11,lVar18,1);
LAB_064912e4:
      plVar14 = (long *)(*(code *)*puVar16)(plVar11,puVar16[1]);
      if (plVar14 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_03643084(plVar14);
        }
      }
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar18 = (**(code **)(*plVar10 + 0x308))(plVar10,plVar14,*(undefined8 *)(*plVar10 + 0x310));
      if (lVar18 == 0) {
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        iVar7 = (**(code **)(*plVar14 + 0x1f8))(plVar14,*(undefined8 *)(*plVar14 + 0x200));
        if (iVar7 != 4) {
          uVar12 = FUN_064242bc(plVar14,0);
          if ((uVar12 & 1) == 0) {
            if ((char)plVar14[4] == '\0') {
              uVar9 = FUN_06425fc4(plVar14,0);
              FUN_064508bc(param_2,plVar14,uVar9,0);
            }
            else {
              lVar18 = *(long *)puVar5;
              if (*(int *)(lVar18 + 0xe4) == 0) {
                thunk_FUN_036a1978();
                lVar18 = *(long *)puVar5;
              }
              FUN_064508bc(param_2,plVar14,**(undefined8 **)(lVar18 + 0xb8),0);
            }
          }
          else {
            FUN_06429294(plVar14,*(undefined4 *)(param_2 + 0x28),0);
          }
        }
      }
    } while( true );
  }
LAB_064914bc:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


