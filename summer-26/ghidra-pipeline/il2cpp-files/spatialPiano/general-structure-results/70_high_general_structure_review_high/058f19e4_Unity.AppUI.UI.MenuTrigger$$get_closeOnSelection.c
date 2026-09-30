/*
FUNCTION_NAME: Unity.AppUI.UI.MenuTrigger$$get_closeOnSelection
ENTRY_POINT: 058f19e4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;data_collection
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x058f1ff0) */
/* WARNING: Removing unreachable block (ram,0x058f1ff4) */
/* WARNING: Removing unreachable block (ram,0x058f2328) */

long * Unity_AppUI_UI_MenuTrigger__get_closeOnSelection
                 (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  long *unaff_x22;
  long *unaff_x23;
  int iVar15;
  uint uVar16;
  long *unaff_x25;
  long *plVar17;
  uint uVar18;
  undefined8 *unaff_x26;
  ulong uVar19;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 *in_stack_00000030;
  long *in_stack_00000040;
  long *in_stack_00000048;
  
  uVar12 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar12 != 0) {
    piVar14 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == param_3) {
        puVar5 = (undefined8 *)(param_1 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_058f1a34;
      }
      uVar12 = uVar12 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar12 != 0);
  }
  puVar5 = (undefined8 *)FUN_02f421d0();
LAB_058f1a34:
  uVar6 = (*(code *)*puVar5)();
  plVar7 = (long *)thunk_FUN_02f45174(uVar6,*unaff_x26);
  puVar2 = Method_System_Collections_Generic_List<IDebugManager>_Add__;
  bVar4 = plVar7 == (long *)0x0;
  if (unaff_x22 == (long *)0x0) {
    if (unaff_x25 != (long *)0x0) {
      lVar10 = *unaff_x25;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_067cb558) {
            puVar5 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_058f1d88;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar5 = (undefined8 *)FUN_02f421d0();
LAB_058f1d88:
      in_stack_00000048 = (long *)(*(code *)*puVar5)();
      puVar3 = Method_System_Collections_Generic_List<IDebugManager>_Add__;
      puVar2 = PTR_DAT_067c91b8;
      in_stack_00000028 = &stack0x00000048;
      in_stack_00000020 = 0;
      in_stack_00000030 = &stack0x00000040;
      if (in_stack_00000048 != (long *)0x0) {
        iVar15 = 0;
        uVar19 = 0;
        uVar12 = 0;
        uVar16 = 0;
        do {
          plVar17 = in_stack_00000048;
          lVar11 = *in_stack_00000048;
          lVar10 = *(long *)puVar2;
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar10) {
                puVar5 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_058f1e1c;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar5 = (undefined8 *)FUN_02f421d0(in_stack_00000048,lVar10,0);
LAB_058f1e1c:
          uVar13 = (*(code *)*puVar5)(plVar17,puVar5[1]);
          plVar17 = in_stack_00000048;
          puVar1 = PTR_DAT_067c91b0;
          if ((uVar13 & 1) == 0) {
            plVar17 = (long *)thunk_FUN_02f45174(in_stack_00000048,*(undefined8 *)PTR_DAT_067c91b0);
            in_stack_00000040 = plVar17;
            if (plVar17 == (long *)0x0) goto LAB_058f1bc0;
            lVar10 = *plVar17;
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 == 0) goto LAB_058f1fbc;
            piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            goto LAB_058f1fa4;
          }
          if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar11 = *in_stack_00000048;
          lVar10 = *(long *)puVar2;
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar10) {
                puVar5 = (undefined8 *)(lVar11 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                goto LAB_058f1e84;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar5 = (undefined8 *)FUN_02f421d0(in_stack_00000048,lVar10,1);
LAB_058f1e84:
          uVar6 = (*(code *)*puVar5)(plVar17,puVar5[1]);
          plVar17 = (long *)thunk_FUN_02f45174(uVar6,*(undefined8 *)puVar3);
          if (plVar17 != (long *)0x0) {
            lVar11 = *plVar17;
            lVar10 = *(long *)puVar3;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar10) {
                  puVar5 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_058f1eec;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar5 = (undefined8 *)FUN_02f421d0(plVar17,lVar10,0);
LAB_058f1eec:
            uVar13 = (*(code *)*puVar5)(plVar17);
            if ((uVar13 & 1) != 0) {
              iVar15 = iVar15 + 1;
              uVar13 = 0;
              if ((int)uVar12 < 0x40) {
                uVar13 = 1L << (uVar12 & 0x3f);
              }
              uVar19 = uVar13 | uVar19;
              if (!bVar4) {
                if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                if ((int)uVar16 < (int)*(uint *)(plVar7 + 3)) {
                  if (*(uint *)(plVar7 + 3) <= uVar16) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f089d0();
                  }
                  lVar10 = (long)(int)uVar16;
                  uVar16 = uVar16 + 1;
                  bVar4 = plVar17 != (long *)plVar7[lVar10 + 4];
                  goto LAB_058f1f4c;
                }
              }
              bVar4 = true;
            }
          }
LAB_058f1f4c:
          uVar12 = (ulong)((int)uVar12 + 1);
        } while (in_stack_00000048 != (long *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
  }
  else {
    uVar16 = *(uint *)(unaff_x22 + 3);
    if (0 < (int)uVar16) {
      iVar15 = 0;
      uVar19 = 0;
      uVar12 = 0;
      uVar18 = 0;
      do {
        if (uVar16 <= uVar12) goto LAB_058f22fc;
        plVar17 = (long *)unaff_x22[uVar12 + 4];
        if (plVar17 == (long *)0x0) goto LAB_058f2300;
        lVar10 = *plVar17;
        uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_058f1ae4;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar5 = (undefined8 *)FUN_02f421d0(plVar17,*(long *)puVar2,0);
LAB_058f1ae4:
        uVar13 = (*(code *)*puVar5)(plVar17);
        if ((uVar13 & 1) != 0) {
          iVar15 = iVar15 + 1;
          uVar13 = 0;
          if (uVar12 < 0x40) {
            uVar13 = 1L << (uVar12 & 0x3f);
          }
          uVar19 = uVar13 | uVar19;
          if (!bVar4) {
            if (plVar7 == (long *)0x0) goto LAB_058f2300;
            if ((int)uVar18 < (int)*(uint *)(plVar7 + 3)) {
              if ((uVar12 < *(uint *)(unaff_x22 + 3)) && (uVar18 < *(uint *)(plVar7 + 3))) {
                lVar10 = (long)(int)uVar18;
                uVar18 = uVar18 + 1;
                bVar4 = unaff_x22[uVar12 + 4] != plVar7[lVar10 + 4];
                goto LAB_058f1b58;
              }
              goto LAB_058f22fc;
            }
          }
          bVar4 = true;
        }
LAB_058f1b58:
        uVar16 = *(uint *)(unaff_x22 + 3);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (int)uVar16);
      goto LAB_058f1bc0;
    }
  }
  uVar19 = 0;
  iVar15 = 0;
  goto LAB_058f1bc0;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar14 = piVar14 + 4;
    if (uVar12 == 0) break;
LAB_058f1fa4:
    if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
      puVar5 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_058f1fd8;
    }
  }
LAB_058f1fbc:
  puVar5 = (undefined8 *)FUN_02f421d0(plVar17,*(long *)puVar1,0);
LAB_058f1fd8:
  (*(code *)*puVar5)(plVar17,puVar5[1]);
LAB_058f1bc0:
  if (plVar7 == (long *)0x0) {
    if (!bVar4) {
      return (long *)0x0;
    }
  }
  else if (iVar15 == (int)plVar7[3] && !bVar4) {
    return plVar7;
  }
  if ((unaff_x22 == (long *)0x0) || (plVar7 = unaff_x22, iVar15 != (int)unaff_x22[3])) {
    plVar7 = (long *)FUN_02f0880c(*(undefined8 *)
                                   Method_System_Collections_Generic_List<IRaycaster>_GetEnumerator__
                                  ,iVar15);
    puVar2 = Method_System_Collections_Generic_List<IDebugManager>_Add__;
    if ((unaff_x22 == (long *)0x0) || (iVar15 < 1)) {
      if (0 < iVar15) {
        if (unaff_x25 != (long *)0x0) {
          lVar10 = *unaff_x25;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_067cb558) {
                puVar5 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_058f2004;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar5 = (undefined8 *)FUN_02f421d0(unaff_x25,*(long *)PTR_DAT_067cb558,0);
LAB_058f2004:
          plVar17 = (long *)(*(code *)*puVar5)(unaff_x25,puVar5[1]);
          puVar3 = Method_System_Collections_Generic_List<IDebugManager>_Add__;
          puVar2 = PTR_DAT_067c91b8;
          if (plVar17 != (long *)0x0) {
            uVar12 = 0;
            uVar16 = 0;
            do {
              lVar11 = *plVar17;
              lVar10 = *(long *)puVar2;
              uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == lVar10) {
                    puVar5 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                    goto LAB_058f207c;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar5 = (undefined8 *)FUN_02f421d0(plVar17,lVar10,0);
LAB_058f207c:
              uVar13 = (*(code *)*puVar5)(plVar17,puVar5[1]);
              if ((uVar13 & 1) == 0) goto LAB_058f21a4;
              lVar11 = *plVar17;
              lVar10 = *(long *)puVar2;
              uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == lVar10) {
                    puVar5 = (undefined8 *)(lVar11 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                    goto LAB_058f20dc;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar5 = (undefined8 *)FUN_02f421d0(plVar17,lVar10,1);
LAB_058f20dc:
              uVar6 = (*(code *)*puVar5)(plVar17,puVar5[1]);
              plVar9 = (long *)thunk_FUN_02f45174(uVar6,*(undefined8 *)puVar3);
              if (plVar9 != (long *)0x0) {
                if ((int)uVar12 < 0x40) {
                  uVar13 = uVar19 >> (uVar12 & 0x3f);
                }
                else {
                  lVar11 = *plVar9;
                  lVar10 = *(long *)puVar3;
                  uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
                  if (uVar13 != 0) {
                    piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == lVar10) {
                        puVar5 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                        goto LAB_058f2158;
                      }
                      uVar13 = uVar13 - 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar13 != 0);
                  }
                  puVar5 = (undefined8 *)FUN_02f421d0(plVar9,lVar10,0);
LAB_058f2158:
                  uVar13 = (*(code *)*puVar5)(plVar9);
                }
                if ((uVar13 & 1) != 0) {
                  if (plVar7 == (long *)0x0) break;
                  lVar10 = thunk_FUN_02f45174(plVar9,*(undefined8 *)(*plVar7 + 0x40));
                  if (lVar10 == 0) goto LAB_058f2308;
                  if (*(uint *)(plVar7 + 3) <= uVar16) goto LAB_058f22fc;
                  lVar10 = (long)(int)uVar16;
                  uVar16 = uVar16 + 1;
                  plVar7[lVar10 + 4] = (long)plVar9;
                }
              }
              uVar12 = (ulong)((int)uVar12 + 1);
            } while( true );
          }
        }
LAB_058f2300:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
    }
    else if (0 < (int)unaff_x22[3]) {
      uVar12 = 0;
      uVar16 = 0;
      uVar13 = unaff_x22[3] & 0xffffffff;
      do {
        if (uVar12 < 0x40) {
          uVar8 = uVar19 >> (uVar12 & 0x3f);
        }
        else {
          if (uVar13 <= uVar12) {
LAB_058f22fc:
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          plVar17 = (long *)unaff_x22[uVar12 + 4];
          if (plVar17 == (long *)0x0) goto LAB_058f2300;
          lVar10 = *plVar17;
          uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                puVar5 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_058f1cb4;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar5 = (undefined8 *)FUN_02f421d0(plVar17,*(long *)puVar2,0);
LAB_058f1cb4:
          uVar8 = (*(code *)*puVar5)(plVar17);
          uVar13 = (ulong)*(uint *)(unaff_x22 + 3);
        }
        if ((uVar8 & 1) != 0) {
          if (uVar13 <= uVar12) goto LAB_058f22fc;
          if (plVar7 == (long *)0x0) goto LAB_058f2300;
          lVar10 = unaff_x22[uVar12 + 4];
          if ((lVar10 != 0) &&
             (lVar11 = thunk_FUN_02f45174(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar11 == 0)) {
LAB_058f2308:
            uVar6 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
            FUN_02f0888c(uVar6,0);
          }
          if (*(uint *)(plVar7 + 3) <= uVar16) goto LAB_058f22fc;
          lVar11 = (long)(int)uVar16;
          uVar16 = uVar16 + 1;
          plVar7[lVar11 + 4] = lVar10;
          uVar13 = (ulong)*(uint *)(unaff_x22 + 3);
        }
        uVar12 = uVar12 + 1;
      } while ((long)uVar12 < (long)(int)uVar13);
    }
  }
LAB_058f21a4:
  puVar1 = Method_System_Collections_Generic_List<GraphicsBuffer>_get_Item__;
  puVar3 = PTR_DAT_067caae8;
  puVar2 = PTR_DAT_067caa20;
  if (unaff_x23 != (long *)0x0) {
    lVar10 = *(long *)Method_System_Collections_Generic_List<GraphicsBuffer>_get_Item__;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar10 = *(long *)puVar1;
    }
    in_stack_00000028 = *(undefined8 **)(*(long *)(lVar10 + 0xb8) + 0x58);
    in_stack_00000020 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x50);
    uVar6 = thunk_FUN_02f44ec4(*(undefined8 *)puVar2,&stack0x00000020);
    lVar11 = *unaff_x23;
    lVar10 = *(long *)puVar3;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar10) {
          puVar5 = (undefined8 *)(lVar11 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_058f2244;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_02f421d0(unaff_x23,lVar10,1);
LAB_058f2244:
    (*(code *)*puVar5)(unaff_x23,uVar6,plVar7,puVar5[1]);
    lVar10 = *(long *)(*(long *)puVar1 + 0xb8);
    in_stack_00000018 = *(undefined8 *)(lVar10 + 0x68);
    in_stack_00000010 = *(undefined8 *)(lVar10 + 0x60);
    uVar6 = thunk_FUN_02f44ec4(*(undefined8 *)puVar2,&stack0x00000010);
    lVar11 = *unaff_x23;
    lVar10 = *(long *)puVar3;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar10) {
          puVar5 = (undefined8 *)(lVar11 + (long)(*piVar14 + 10) * 0x10 + 0x138);
          goto LAB_058f22c8;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_02f421d0(unaff_x23,lVar10,10);
LAB_058f22c8:
    (*(code *)*puVar5)(unaff_x23,uVar6,puVar5[1]);
  }
  return plVar7;
}


