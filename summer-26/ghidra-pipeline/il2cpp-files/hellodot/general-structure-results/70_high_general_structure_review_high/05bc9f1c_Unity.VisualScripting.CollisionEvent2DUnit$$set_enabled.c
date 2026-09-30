/*
FUNCTION_NAME: Unity.VisualScripting.CollisionEvent2DUnit$$set_enabled
ENTRY_POINT: 05bc9f1c
PROGRAM: hellodot-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_21;ray_or_cast_sink_hits_5;ui_or_gameplay_sink_hits_2
*/


long * Unity_VisualScripting_CollisionEvent2DUnit__set_enabled
                 (long *param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  long *unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
code_r0x05bc9f1c:
  puVar11 = (undefined8 *)FUN_02ce0a7c(param_1,param_2,param_3);
  param_1 = unaff_x22;
  do {
    plVar12 = (long *)(*(code *)*puVar11)(param_1,unaff_w23,puVar11[1]);
    if (plVar12 == (long *)0x0) goto LAB_05bca7f4;
    bVar3 = *(byte *)(*unaff_x28 + 0x130);
    if ((*(byte *)(*plVar12 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar3 * 8 + -8) != *unaff_x28))
    goto LAB_05bca7f8;
    if (unaff_x21 == (long *)0x0) goto LAB_05bca7f4;
    iVar8 = *(int *)((long)plVar12 + 0x14);
    iVar7 = *(int *)((long)unaff_x21 + 0x14);
    iVar9 = (int)plVar12[5];
    if ((iVar8 < iVar7) || ((int)unaff_x21[5] < iVar9)) {
      if (iVar9 < iVar7) {
        bVar1 = true;
      }
      else {
        bVar1 = (int)unaff_x21[5] < iVar8;
      }
      if (iVar8 == iVar7) {
        bVar6 = iVar9 == (int)unaff_x21[5];
      }
      else {
        bVar6 = false;
      }
      if (!bVar6 && !bVar1) {
        uVar13 = thunk_FUN_02c7737c(PTR_DAT_065c8a10);
        uVar14 = FUN_02ce7ad4(uVar13,4);
        FUN_028be474();
        puVar4 = PTR_DAT_066403f8;
        uVar13 = thunk_FUN_02c7737c(PTR_DAT_066403f8);
        FUN_028c2238(uVar14,uVar13);
        uVar13 = thunk_FUN_02c7737c(puVar4);
        FUN_028c226c(uVar14,0,uVar13);
        FUN_028be474(uVar14);
        FUN_028c2238(uVar14,unaff_x21);
        FUN_028c226c(uVar14,1,unaff_x21);
        FUN_028be474(uVar14);
        puVar4 = PTR_DAT_06640400;
        uVar13 = thunk_FUN_02c7737c(PTR_DAT_06640400);
        FUN_028c2238(uVar14,uVar13);
        uVar13 = thunk_FUN_02c7737c(puVar4);
        FUN_028c226c(uVar14,2,uVar13);
        FUN_028be474(uVar14);
        FUN_028c2238(uVar14,plVar12);
        FUN_028c226c(uVar14,3,plVar12);
        goto LAB_05bca9c8;
      }
    }
    else {
      lVar15 = *unaff_x19;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *unaff_x26) {
            puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
            goto LAB_05bca02c;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_02ce0a7c();
LAB_05bca02c:
      (*(code *)*puVar11)();
    }
    unaff_w23 = unaff_w23 + 1;
LAB_05bc9e80:
    lVar15 = *param_1;
    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *unaff_x25) {
          puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
          goto LAB_05bc9ed0;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar11 = (undefined8 *)FUN_02ce0a7c(param_1,*unaff_x25,1);
LAB_05bc9ed0:
    iVar8 = (*(code *)*puVar11)(param_1,puVar11[1]);
    if (iVar8 <= unaff_w23) {
      do {
        do {
          unaff_w20 = unaff_w20 + 1;
          lVar15 = *unaff_x19;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *unaff_x25) {
                puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_05bc9b10;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_02ce0a7c();
LAB_05bc9b10:
          iVar8 = (*(code *)*puVar11)();
          if (iVar8 <= unaff_w20) {
            iVar8 = 0;
            goto LAB_05bca04c;
          }
          lVar15 = *unaff_x19;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *unaff_x26) {
                puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_05bc9b70;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_02ce0a7c();
LAB_05bc9b70:
          plVar12 = (long *)(*(code *)*puVar11)();
        } while (plVar12 == (long *)0x0);
        bVar3 = *(byte *)(*plVar12 + 0x130);
        bVar2 = *(byte *)(*unaff_x27 + 0x130);
        if ((bVar3 < bVar2) ||
           (lVar15 = *(long *)(*plVar12 + 200),
           *(long *)(lVar15 + (ulong)bVar2 * 8 + -8) != *unaff_x27)) goto LAB_05bca7f8;
        bVar2 = *(byte *)(*unaff_x28 + 0x130);
      } while ((bVar3 < bVar2) || (*(long *)(lVar15 + (ulong)bVar2 * 8 + -8) != *unaff_x28));
      lVar15 = *unaff_x19;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *unaff_x26) {
            puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_05bc9c24;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_02ce0a7c();
LAB_05bc9c24:
      unaff_x21 = (long *)(*(code *)*puVar11)();
      if (unaff_x21 != (long *)0x0) {
        bVar3 = *(byte *)(*unaff_x28 + 0x130);
        if ((*(byte *)(*unaff_x21 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar3 * 8 + -8) != *unaff_x28))
        goto LAB_05bcaa54;
      }
      uVar13 = *(undefined8 *)PTR_DAT_066403e8;
      if (*(int *)(*(long *)PTR_DAT_065c89e8 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_04f3fb68(uVar13,0);
      plVar12 = (long *)Unity_VisualScripting_OnTriggerExit2D__get_hookName();
      if (plVar12 != (long *)0x0) {
        iVar8 = 0;
        do {
          lVar15 = *plVar12;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *unaff_x25) {
                puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_05bc9d04;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_02ce0a7c(plVar12,*unaff_x25,1);
LAB_05bc9d04:
          iVar7 = (*(code *)*puVar11)(plVar12,puVar11[1]);
          if (iVar7 <= iVar8) goto LAB_05bc9e34;
          lVar15 = *plVar12;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *unaff_x26) {
                puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_05bc9d64;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_02ce0a7c(plVar12,*unaff_x26,0);
LAB_05bc9d64:
          plVar10 = (long *)(*(code *)*puVar11)(plVar12,iVar8,puVar11[1]);
          if (plVar10 == (long *)0x0) break;
          bVar3 = *(byte *)(*unaff_x29 + 0x130);
          if ((*(byte *)(*plVar10 + 0x130) < bVar3) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar3 * 8 + -8) != *unaff_x29))
          goto LAB_05bca7f8;
          if (unaff_x21 == (long *)0x0) break;
          if ((*(int *)((long)unaff_x21 + 0x14) <= *(int *)((long)plVar10 + 0x14)) &&
             (*(int *)((long)plVar10 + 0x14) <= (int)unaff_x21[5])) {
            lVar15 = *unaff_x19;
            uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar17 != 0) {
              piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *unaff_x26) {
                  puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                  goto LAB_05bc9e18;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            puVar11 = (undefined8 *)FUN_02ce0a7c();
LAB_05bc9e18:
            (*(code *)*puVar11)();
          }
          iVar8 = iVar8 + 1;
        } while( true );
      }
      goto LAB_05bca7f4;
    }
    lVar15 = *param_1;
    param_2 = *unaff_x26;
    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar17 == 0) goto Unity_VisualScripting_CollisionEvent2DUnit__get_enabled;
    piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    while (*(long *)(piVar18 + -2) != param_2) {
      uVar17 = uVar17 - 1;
      piVar18 = piVar18 + 4;
      if (uVar17 == 0) goto Unity_VisualScripting_CollisionEvent2DUnit__get_enabled;
    }
    puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
  } while( true );
LAB_05bca04c:
  lVar15 = *unaff_x19;
  uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar17 != 0) {
    piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == *unaff_x25) {
        puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
        goto LAB_05bca09c;
      }
      uVar17 = uVar17 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar17 != 0);
  }
  puVar11 = (undefined8 *)FUN_02ce0a7c();
LAB_05bca09c:
  iVar7 = (*(code *)*puVar11)();
  if (iVar7 <= iVar8) {
    plVar12 = (long *)thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065f3510);
    FUN_04f0a288(plVar12,0);
    puVar5 = PTR_DAT_065db6d8;
    puVar4 = PTR_DAT_065c8a08;
    iVar8 = 0;
    do {
      lVar15 = *unaff_x19;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *unaff_x25) {
            puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
            goto LAB_05bca62c;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_02ce0a7c();
LAB_05bca62c:
      iVar7 = (*(code *)*puVar11)();
      if (iVar7 <= iVar8) {
        return plVar12;
      }
      lVar15 = *unaff_x19;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *unaff_x26) {
            puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_05bca68c;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_02ce0a7c();
LAB_05bca68c:
      plVar10 = (long *)(*(code *)*puVar11)();
      if (plVar10 != (long *)0x0) {
        bVar3 = *(byte *)(*unaff_x27 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar3 * 8 + -8) != *unaff_x27)) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce8018(plVar10);
        }
        uStack000000000000000c = *(undefined4 *)((long)plVar10 + 0x14);
        uVar13 = thunk_FUN_02cea4e8(*(undefined8 *)puVar4,(long)&stack0x00000008 + 4);
        if (plVar12 == (long *)0x0) {
LAB_05bca7f4:
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar16 = *plVar12;
        lVar15 = *(long *)puVar5;
        uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == lVar15) {
              puVar11 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_05bca738;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_02ce0a7c(plVar12,lVar15,0);
LAB_05bca738:
        lVar15 = (*(code *)*puVar11)(plVar12,uVar13,puVar11[1]);
        if (lVar15 != 0) {
          thunk_FUN_02c7737c(PTR_DAT_065c8580);
          uVar13 = thunk_FUN_02cea894();
          uVar14 = thunk_FUN_02c7737c(PTR_DAT_06640420);
          FUN_04f68668(uVar13,uVar14,0);
          uVar14 = thunk_FUN_02c7737c(PTR_DAT_06640418);
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar13,uVar14);
        }
        uStack0000000000000008 = *(undefined4 *)((long)plVar10 + 0x14);
        uVar13 = thunk_FUN_02cea4e8(*(undefined8 *)puVar4,&stack0x00000008);
        lVar16 = *plVar12;
        lVar15 = *(long *)puVar5;
        uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == lVar15) {
              puVar11 = (undefined8 *)(lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
              goto LAB_05bca7b4;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_02ce0a7c(plVar12,lVar15,1);
LAB_05bca7b4:
        (*(code *)*puVar11)(plVar12,uVar13,plVar10,puVar11[1]);
      }
      iVar8 = iVar8 + 1;
    } while( true );
  }
  lVar15 = *unaff_x19;
  uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar17 != 0) {
    piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == *unaff_x26) {
        puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
        goto LAB_05bca0fc;
      }
      uVar17 = uVar17 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar17 != 0);
  }
  puVar11 = (undefined8 *)FUN_02ce0a7c();
LAB_05bca0fc:
  plVar12 = (long *)(*(code *)*puVar11)();
  if (plVar12 != (long *)0x0) {
    bVar3 = *(byte *)(*plVar12 + 0x130);
    bVar2 = *(byte *)(*unaff_x27 + 0x130);
    if ((bVar3 < bVar2) ||
       (lVar15 = *(long *)(*plVar12 + 200), *(long *)(lVar15 + (ulong)bVar2 * 8 + -8) != *unaff_x27)
       ) {
LAB_05bca7f8:
                    /* WARNING: Subroutine does not return */
      FUN_02ce8018();
    }
    bVar2 = *(byte *)(*unaff_x29 + 0x130);
    if ((bVar2 <= bVar3) && (*(long *)(lVar15 + (ulong)bVar2 * 8 + -8) == *unaff_x29)) {
      lVar15 = *unaff_x19;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *unaff_x26) {
            puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_05bca1b0;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_02ce0a7c();
LAB_05bca1b0:
      unaff_x21 = (long *)(*(code *)*puVar11)();
      if (unaff_x21 != (long *)0x0) {
        bVar3 = *(byte *)(*unaff_x29 + 0x130);
        if ((*(byte *)(*unaff_x21 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar3 * 8 + -8) != *unaff_x29)) {
LAB_05bcaa54:
                    /* WARNING: Subroutine does not return */
          FUN_02ce8018(unaff_x21);
        }
      }
      uVar13 = *(undefined8 *)PTR_DAT_066403e8;
      if (*(int *)(*(long *)PTR_DAT_065c89e8 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_04f3fb68(uVar13,0);
      plVar12 = (long *)Unity_VisualScripting_OnTriggerExit2D__get_hookName();
      if (plVar12 != (long *)0x0) {
        iVar7 = 0;
        do {
          lVar15 = *plVar12;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *unaff_x25) {
                puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_05bca290;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_02ce0a7c(plVar12,*unaff_x25,1);
LAB_05bca290:
          iVar9 = (*(code *)*puVar11)(plVar12,puVar11[1]);
          if (iVar9 <= iVar7) goto LAB_05bca3c8;
          lVar15 = *plVar12;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *unaff_x26) {
                puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_05bca2f0;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_02ce0a7c(plVar12,*unaff_x26,0);
LAB_05bca2f0:
          plVar10 = (long *)(*(code *)*puVar11)(plVar12,iVar7,puVar11[1]);
          if (plVar10 == (long *)0x0) break;
          bVar3 = *(byte *)(*unaff_x29 + 0x130);
          if ((*(byte *)(*plVar10 + 0x130) < bVar3) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar3 * 8 + -8) != *unaff_x29))
          goto LAB_05bca7fc;
          if (unaff_x21 == (long *)0x0) break;
          if (*(int *)((long)plVar10 + 0x14) == *(int *)((long)unaff_x21 + 0x14)) {
            lVar15 = FUN_05bcacb8(plVar10,unaff_x21[3],plVar10[3]);
            unaff_x21[3] = lVar15;
            lVar15 = *unaff_x19;
            uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar17 != 0) {
              piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *unaff_x26) {
                  puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                  goto LAB_05bca3ac;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            puVar11 = (undefined8 *)FUN_02ce0a7c();
LAB_05bca3ac:
            (*(code *)*puVar11)();
          }
          iVar7 = iVar7 + 1;
        } while( true );
      }
      goto LAB_05bca7f4;
    }
  }
LAB_05bca15c:
  iVar8 = iVar8 + 1;
  goto LAB_05bca04c;
LAB_05bca3c8:
  uVar13 = *(undefined8 *)PTR_DAT_066403f0;
  if (*(int *)(*(long *)PTR_DAT_065c89e8 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_04f3fb68(uVar13,0);
  plVar12 = (long *)Unity_VisualScripting_OnTriggerExit2D__get_hookName();
  if (plVar12 != (long *)0x0) {
    iVar7 = 0;
    do {
      lVar15 = *plVar12;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *unaff_x25) {
            puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
            goto LAB_05bca464;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_02ce0a7c(plVar12,*unaff_x25,1);
LAB_05bca464:
      iVar9 = (*(code *)*puVar11)(plVar12,puVar11[1]);
      if (iVar9 <= iVar7) goto LAB_05bca15c;
      lVar15 = *plVar12;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *unaff_x26) {
            puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_05bca4c4;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_02ce0a7c(plVar12,*unaff_x26,0);
LAB_05bca4c4:
      plVar10 = (long *)(*(code *)*puVar11)(plVar12,iVar7,puVar11[1]);
      if (plVar10 == (long *)0x0) break;
      bVar3 = *(byte *)(*unaff_x28 + 0x130);
      if ((*(byte *)(*plVar10 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar3 * 8 + -8) != *unaff_x28)) {
LAB_05bca7fc:
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(plVar10);
      }
      if (unaff_x21 == (long *)0x0) break;
      iVar9 = *(int *)((long)unaff_x21 + 0x14);
      if (iVar9 == *(int *)((long)plVar10 + 0x14)) {
        lVar15 = FUN_05bcacb8(plVar10,unaff_x21[3],plVar10[3]);
        plVar10[3] = lVar15;
        lVar15 = *unaff_x19;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *unaff_x26) {
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
              goto LAB_05bca590;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_02ce0a7c();
LAB_05bca590:
        (*(code *)*puVar11)();
      }
      else if ((*(int *)((long)plVar10 + 0x14) <= iVar9) && (iVar9 <= (int)plVar10[5])) {
        uVar13 = thunk_FUN_02c7737c(PTR_DAT_065c8a10);
        uVar14 = FUN_02ce7ad4(uVar13,4);
        FUN_028be474();
        puVar4 = PTR_DAT_06640408;
        uVar13 = thunk_FUN_02c7737c(PTR_DAT_06640408);
        FUN_028c2238(uVar14,uVar13);
        uVar13 = thunk_FUN_02c7737c(puVar4);
        FUN_028c226c(uVar14,0,uVar13);
        FUN_028be474(uVar14);
        FUN_028c2238(uVar14,unaff_x21);
        FUN_028c226c(uVar14,1,unaff_x21);
        FUN_028be474(uVar14);
        puVar4 = PTR_DAT_06640410;
        uVar13 = thunk_FUN_02c7737c(PTR_DAT_06640410);
        FUN_028c2238(uVar14,uVar13);
        uVar13 = thunk_FUN_02c7737c(puVar4);
        FUN_028c226c(uVar14,2,uVar13);
        FUN_028be474(uVar14);
        FUN_028c2238(uVar14,plVar10);
        FUN_028c226c(uVar14,3,plVar10);
LAB_05bca9c8:
        uVar13 = System_IO_Stream__BeginRead(uVar14,0);
        thunk_FUN_02c7737c(PTR_DAT_065cb038);
        uVar14 = thunk_FUN_02cea894();
        FUN_04e9ff98(uVar14,uVar13,0);
        uVar13 = thunk_FUN_02c7737c(PTR_DAT_06640418);
                    /* WARNING: Subroutine does not return */
        FUN_02ce7b54(uVar14,uVar13);
      }
      iVar7 = iVar7 + 1;
    } while( true );
  }
  goto LAB_05bca7f4;
LAB_05bc9e34:
  uVar13 = *(undefined8 *)PTR_DAT_066403f0;
  if (*(int *)(*(long *)PTR_DAT_065c89e8 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_04f3fb68(uVar13,0);
  param_1 = (long *)Unity_VisualScripting_OnTriggerExit2D__get_hookName();
  if (param_1 == (long *)0x0) goto LAB_05bca7f4;
  unaff_w23 = 0;
  goto LAB_05bc9e80;
Unity_VisualScripting_CollisionEvent2DUnit__get_enabled:
  param_3 = 0;
  unaff_x22 = param_1;
  goto code_r0x05bc9f1c;
}


