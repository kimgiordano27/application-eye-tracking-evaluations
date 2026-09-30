/*
FUNCTION_NAME: FUN_0636cdcc
ENTRY_POINT: 0636cdcc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0636d788) */
/* WARNING: Removing unreachable block (ram,0x0636d7f8) */

void FUN_0636cdcc(long *param_1,long *param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  int iVar18;
  int local_58;
  int local_54;
  
  if ((DAT_0825c4a2 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07db58f0);
    FUN_0373b518(PTR_DAT_07db58f8);
                    /* try { // try from 0636ce14 to 0646ce4f has its CatchHandler @ 0636d578 */
    FUN_0373b518(PTR_DAT_07db5900);
    FUN_0373b518(PTR_DAT_07d896f8);
    FUN_0373b518(PTR_DAT_07d96390);
    FUN_0373b518(PTR_DAT_07d89700);
    FUN_0373b518(PTR_DAT_07db5908);
    FUN_0373b518(PTR_DAT_07d96690);
    DAT_0825c4a2 = 1;
  }
  puVar2 = PTR_DAT_07d96390;
  puVar3 = PTR_DAT_07d896f8;
  if (param_3 == 0) {
switchD_0636ce98_caseD_0:
                    /* try { // try from 0636ce9c to 0646cea7 has its CatchHandler @ 0636d56c */
    if (param_2 != (long *)0x0) {
      lVar13 = *param_2;
      uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
                    /* try { // try from 0636cebc to 0646cecb has its CatchHandler @ 0636d54c */
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_07d96390) {
            puVar7 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_0636ceec;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar7 = (undefined8 *)FUN_0377596c(param_2,*(long *)PTR_DAT_07d96390,0);
                    /* try { // try from 0636cedc to 0646cee7 has its CatchHandler @ 0636d61c */
LAB_0636ceec:
      plVar8 = (long *)(*(code *)*puVar7)(param_2,puVar7[1]);
      puVar2 = PTR_DAT_07d89700;
                    /* try { // try from 0636cefc to 0646cf17 has its CatchHandler @ 0636d62c */
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      do {
        lVar14 = *plVar8;
        lVar13 = *(long *)puVar2;
        uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
                    /* try { // try from 0636cf28 to 0646cf2f has its CatchHandler @ 0636d614 */
            if (*(long *)(piVar17 + -2) == lVar13) {
              puVar7 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0636cf54;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar7 = (undefined8 *)FUN_0377596c(plVar8,lVar13,0);
LAB_0636cf54:
        uVar16 = (*(code *)*puVar7)(plVar8,puVar7[1]);
        if ((uVar16 & 1) == 0) {
          plVar8 = (long *)thunk_FUN_037787d0(plVar8,*(undefined8 *)puVar3);
          if (plVar8 == (long *)0x0) {
            return;
          }
          lVar13 = *plVar8;
          uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar16 == 0) goto LAB_0636d030;
          piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          goto LAB_0636d018;
        }
        lVar14 = *plVar8;
                    /* try { // try from 0636cf68 to 0646cfab has its CatchHandler @ 0636d654 */
        lVar13 = *(long *)puVar2;
        uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar13) {
              puVar7 = (undefined8 *)(lVar14 + (long)(*piVar17 + 1) * 0x10 + 0x138);
              goto LAB_0636cfb4;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar7 = (undefined8 *)FUN_0377596c(plVar8,lVar13,1);
LAB_0636cfb4:
        (*(code *)*puVar7)(plVar8,puVar7[1]);
        uVar10 = FUN_06372d34();
        if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4(uVar10,uVar10);
        }
        (**(code **)(*param_1 + 0x6e8))(param_1,uVar10,*(undefined8 *)(*param_1 + 0x6f0));
      } while( true );
    }
  }
  else {
                    /* try { // try from 0636ce7c to 0646ce7f has its CatchHandler @ 0636d558 */
                    /* try { // try from 0636ce80 to 0646ce87 has its CatchHandler @ 0636d564 */
    switch(*(undefined4 *)(param_3 + 0x10)) {
    case 0:
      goto switchD_0636ce98_caseD_0;
    case 1:
      if (*(int *)(*(long *)PTR_DAT_07d96690 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar10 = FUN_06374108();
      lVar13 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db5900);
      FUN_045b8fc0(lVar13,param_1,uVar10,*(undefined8 *)PTR_DAT_07db58f8);
      if (param_2 != (long *)0x0) {
        lVar15 = *param_2;
        lVar14 = *(long *)puVar2;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar7 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0636d100;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar7 = (undefined8 *)FUN_0377596c(param_2,lVar14,0);
LAB_0636d100:
        plVar8 = (long *)(*(code *)*puVar7)(param_2,puVar7[1]);
        puVar4 = PTR_DAT_07db58f0;
        puVar2 = PTR_DAT_07d89700;
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        do {
          lVar15 = *plVar8;
          lVar14 = *(long *)puVar2;
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == lVar14) {
                puVar7 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_0636d170;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar7 = (undefined8 *)FUN_0377596c(plVar8,lVar14,0);
LAB_0636d170:
          uVar16 = (*(code *)*puVar7)(plVar8,puVar7[1]);
          if ((uVar16 & 1) == 0) {
            plVar8 = (long *)thunk_FUN_037787d0(plVar8,*(undefined8 *)puVar3);
            if (plVar8 == (long *)0x0) {
              return;
            }
            lVar13 = *plVar8;
            uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar16 == 0) goto LAB_0636d268;
            piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            goto LAB_0636d250;
          }
          lVar15 = *plVar8;
          lVar14 = *(long *)puVar2;
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == lVar14) {
                puVar7 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                goto LAB_0636d1d0;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar7 = (undefined8 *)FUN_0377596c(plVar8,lVar14,1);
LAB_0636d1d0:
          (*(code *)*puVar7)(plVar8,puVar7[1]);
          uVar10 = FUN_06372d34();
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar16 = FUN_045ba050(lVar13,uVar10,*(undefined8 *)puVar4);
          if ((uVar16 & 1) != 0) {
            if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            (**(code **)(*param_1 + 0x6e8))(param_1,uVar10,*(undefined8 *)(*param_1 + 0x6f0));
          }
        } while( true );
      }
      break;
    case 2:
      if (param_1 == param_2) {
        return;
      }
      if ((param_1 != (long *)0x0) &&
         ((**(code **)(*param_1 + 0x698))(param_1,*(undefined8 *)(*param_1 + 0x6a0)),
         param_2 != (long *)0x0)) {
        lVar14 = *param_2;
        lVar13 = *(long *)puVar2;
        uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar13) {
              puVar7 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0636d308;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar7 = (undefined8 *)FUN_0377596c(param_2,lVar13,0);
LAB_0636d308:
        plVar8 = (long *)(*(code *)*puVar7)(param_2,puVar7[1]);
        puVar2 = PTR_DAT_07d89700;
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        do {
          lVar14 = *plVar8;
          lVar13 = *(long *)puVar2;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == lVar13) {
                puVar7 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_0636d370;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar7 = (undefined8 *)FUN_0377596c(plVar8,lVar13,0);
LAB_0636d370:
          uVar16 = (*(code *)*puVar7)(plVar8,puVar7[1]);
          if ((uVar16 & 1) == 0) goto LAB_0636d3fc;
          lVar14 = *plVar8;
          lVar13 = *(long *)puVar2;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == lVar13) {
                puVar7 = (undefined8 *)(lVar14 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                goto LAB_0636d3d0;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar7 = (undefined8 *)FUN_0377596c(plVar8,lVar13,1);
LAB_0636d3d0:
          (*(code *)*puVar7)(plVar8,puVar7[1]);
          uVar10 = FUN_06372d34();
          (**(code **)(*param_1 + 0x6e8))(param_1,uVar10,*(undefined8 *)(*param_1 + 0x6f0));
        } while( true );
      }
      break;
    case 3:
      if (param_2 != (long *)0x0) {
        lVar13 = *param_2;
        uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_07d96390) {
              puVar7 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0636d4c8;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar7 = (undefined8 *)FUN_0377596c(param_2,*(long *)PTR_DAT_07d96390,0);
LAB_0636d4c8:
        plVar8 = (long *)(*(code *)*puVar7)(param_2,puVar7[1]);
        puVar5 = PTR_DAT_07db5908;
        puVar4 = PTR_DAT_07d89700;
        puVar2 = PTR_DAT_07d86548;
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        iVar18 = 0;
        do {
          lVar14 = *plVar8;
          lVar13 = *(long *)puVar4;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == lVar13) {
                puVar7 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_0636d544;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar7 = (undefined8 *)FUN_0377596c(plVar8,lVar13,0);
LAB_0636d544:
          uVar16 = (*(code *)*puVar7)(plVar8,puVar7[1]);
          if ((uVar16 & 1) == 0) {
            plVar8 = (long *)thunk_FUN_037787d0(plVar8,*(undefined8 *)puVar3);
            if (plVar8 == (long *)0x0) {
              return;
            }
            lVar13 = *plVar8;
            uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar16 == 0) goto LAB_0636d724;
            piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            goto LAB_0636d70c;
          }
          lVar14 = *plVar8;
          lVar13 = *(long *)puVar4;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == lVar13) {
                puVar7 = (undefined8 *)(lVar14 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                goto LAB_0636d5a4;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar7 = (undefined8 *)FUN_0377596c(plVar8,lVar13,1);
LAB_0636d5a4:
          lVar13 = (*(code *)*puVar7)(plVar8,puVar7[1]);
          if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          iVar6 = FUN_063728dc(param_1);
          if (iVar18 < iVar6) {
            local_54 = iVar18;
            uVar10 = thunk_FUN_037784fc(*(undefined8 *)(puVar2 + 0x48),&local_54);
            plVar9 = (long *)(**(code **)(*param_1 + 0x248))
                                       (param_1,uVar10,*(undefined8 *)(*param_1 + 0x250));
            if (plVar9 != (long *)0x0) {
              bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
              if ((bVar1 <= *(byte *)(*plVar9 + 0x130)) &&
                 (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar5)) {
                if (lVar13 != 0) {
                  FUN_06372ec8(plVar9,lVar13);
                  (**(code **)(*plVar9 + 0x6f8))
                            (plVar9,lVar13,param_3,*(undefined8 *)(*plVar9 + 0x700));
                }
                goto LAB_0636d6a4;
              }
            }
            if (lVar13 != 0) {
              plVar9 = (long *)FUN_06372d34(lVar13);
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              iVar6 = (**(code **)(*plVar9 + 0x228))(plVar9,*(undefined8 *)(*plVar9 + 0x230));
              if (iVar6 != 10) {
                local_58 = iVar18;
                uVar10 = thunk_FUN_037784fc(*(undefined8 *)(puVar2 + 0x48),&local_58);
                (**(code **)(*param_1 + 600))
                          (param_1,uVar10,plVar9,*(undefined8 *)(*param_1 + 0x260));
              }
            }
          }
          else {
            uVar10 = FUN_06372d34(lVar13);
            (**(code **)(*param_1 + 0x6e8))(param_1,uVar10,*(undefined8 *)(*param_1 + 0x6f0));
          }
LAB_0636d6a4:
          iVar18 = iVar18 + 1;
        } while( true );
      }
      break;
    default:
      thunk_FUN_037a15ac(PTR_DAT_07d8eed0);
      uVar10 = thunk_FUN_037788cc();
      uVar11 = thunk_FUN_037a15ac(PTR_DAT_07db5910);
      uVar12 = thunk_FUN_037a15ac(PTR_DAT_07db5918);
      FUN_061a5334(uVar10,uVar11,uVar12,0);
      uVar11 = thunk_FUN_037a15ac(PTR_DAT_07db5920);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar10,uVar11);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_0636d70c:
    if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
      puVar7 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_0636d740;
    }
  }
LAB_0636d724:
  puVar7 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar3,0);
LAB_0636d740:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
  return;
LAB_0636d3fc:
  plVar8 = (long *)thunk_FUN_037787d0(plVar8,*(undefined8 *)puVar3);
  if (plVar8 == (long *)0x0) {
    return;
  }
  lVar13 = *plVar8;
  uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
        puVar7 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
        goto LAB_0636d464;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar7 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar3,0);
LAB_0636d464:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
  return;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_0636d250:
    if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
      puVar7 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
      goto OVRManager__InitPermissionRequest;
    }
  }
LAB_0636d268:
  puVar7 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar3,0);
OVRManager__InitPermissionRequest:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
  return;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_0636d018:
    if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
      puVar7 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_0636d04c;
    }
  }
LAB_0636d030:
  puVar7 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar3,0);
LAB_0636d04c:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
  return;
}


