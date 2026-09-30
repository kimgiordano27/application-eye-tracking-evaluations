/*
FUNCTION_NAME: Unity.Netcode.Components.NetworkTransform$$.cctor
ENTRY_POINT: 07f2e030
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07f2e790) */
/* WARNING: Removing unreachable block (ram,0x07f2e9ec) */
/* WARNING: Removing unreachable block (ram,0x07f2e9f4) */
/* WARNING: Removing unreachable block (ram,0x07f2ea18) */
/* WARNING: Removing unreachable block (ram,0x07f2ea28) */

undefined4 Unity_Netcode_Components_NetworkTransform___cctor(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x23;
  long *unaff_x25;
  long unaff_x27;
  long *unaff_x28;
  undefined8 uVar19;
  undefined4 uStack0000000000000004;
  long *plStack0000000000000008;
  
  puVar10 = (undefined8 *)FUN_03d8f370();
  lVar11 = (*(code *)*puVar10)();
  if ((lVar11 == 0) || (FUN_07f2b2b0(), unaff_x27 == 0)) goto LAB_07f2ea00;
  if (*(char *)(unaff_x27 + 0x50) == '\0') {
    uVar14 = *(undefined8 *)(unaff_x23 + 0x18);
    uVar19 = *(undefined8 *)(unaff_x27 + 0x10);
    uVar2 = *(undefined4 *)(unaff_x27 + 0x28);
    uVar1 = *(undefined4 *)(unaff_x27 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_0925f078 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar11 = FUN_07f1bd14(uVar14,uVar19,uVar2,uVar1,1,0);
    uVar14 = FUN_07f1bf98(*(undefined8 *)(unaff_x23 + 0x18),lVar11,*(undefined4 *)(unaff_x27 + 0x28)
                          ,0);
    if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x48), lVar11 == 0)) goto LAB_07f2ea00;
    lVar15 = *(long *)(lVar11 + 0x10);
    lVar16 = *(long *)PTR_DAT_0925fb60;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar15 == 0) goto LAB_07f2ea00;
    uVar5 = *(uint *)(lVar11 + 0x18);
    if (uVar5 < *(uint *)(lVar15 + 0x18)) {
      *(uint *)(lVar11 + 0x18) = uVar5 + 1;
      puVar10 = (undefined8 *)(lVar15 + (long)(int)uVar5 * 8 + 0x20);
      *puVar10 = uVar14;
      thunk_FUN_03d1023c(puVar10);
    }
    else {
      FUN_05a39734(lVar11,uVar14,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70))
      ;
    }
  }
  plVar12 = (long *)thunk_FUN_03d2ee44();
  if (plVar12 == (long *)0x0) {
    if (*(int *)(*(long *)PTR_StringLiteral_52275_0925ea90 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    plVar12 = (long *)FUN_067ac92c(*(undefined8 *)PTR_DAT_0925fb50);
    lVar11 = *unaff_x25;
    uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *unaff_x28) {
          puVar10 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
          goto Unity_Netcode_Components_NetworkTransform_NetworkTransformState__GetRotation;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar10 = (undefined8 *)FUN_03d8f370();
Unity_Netcode_Components_NetworkTransform_NetworkTransformState__GetRotation:
    plVar13 = (long *)(*(code *)*puVar10)();
    puVar7 = PTR_DAT_091b1b70;
    puVar8 = PTR_DAT_091a1508;
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    do {
      lVar15 = *plVar13;
      lVar11 = *(long *)puVar8;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar11) {
            puVar10 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_07f2e898;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_03d8f370(plVar13,lVar11,0);
LAB_07f2e898:
      uVar17 = (*(code *)*puVar10)(plVar13,puVar10[1]);
      puVar6 = PTR_DAT_091a14e0;
      if ((uVar17 & 1) == 0) {
        plVar13 = (long *)thunk_FUN_03d2ee44(plVar13,*(undefined8 *)PTR_DAT_091a14e0);
        plStack0000000000000008 = plVar12;
        if (plVar13 == (long *)0x0) goto LAB_07f2e174;
        lVar11 = *plVar13;
        uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar17 == 0) goto LAB_07f2e9b8;
        piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_07f2e9a0;
      }
      lVar15 = *plVar13;
      lVar11 = *(long *)puVar8;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar11) {
            puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
            goto LAB_07f2e8f8;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_03d8f370(plVar13,lVar11,1);
LAB_07f2e8f8:
      uVar14 = (*(code *)*puVar10)(plVar13,puVar10[1]);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar11 = plVar12[2];
      lVar15 = *(long *)puVar7;
      *(int *)((long)plVar12 + 0x1c) = *(int *)((long)plVar12 + 0x1c) + 1;
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      uVar5 = *(uint *)(plVar12 + 3);
      if (uVar5 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(plVar12 + 3) = uVar5 + 1;
        *(undefined8 *)(lVar11 + (long)(int)uVar5 * 8 + 0x20) = uVar14;
        thunk_FUN_03d1023c();
      }
      else {
        FUN_05a39734(plVar12,uVar14,
                     *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
      }
    } while( true );
  }
  plStack0000000000000008 = (long *)0x0;
  goto LAB_07f2e174;
LAB_07f2e704:
  plVar12 = (long *)thunk_FUN_03d2ee44(plVar13,*(undefined8 *)PTR_DAT_091a14e0);
  if (plVar12 != (long *)0x0) {
    lVar11 = *plVar12;
    uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
          puVar10 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
          goto 
          Unity_Netcode_Components_NetworkTransform_NetworkTransformState__get_LastSerializedSize;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar10 = (undefined8 *)FUN_03d8f370(plVar12,*(long *)puVar6,0);
Unity_Netcode_Components_NetworkTransform_NetworkTransformState__get_LastSerializedSize:
    (*(code *)*puVar10)(plVar12,puVar10[1]);
  }
  if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  uVar2 = uStack0000000000000004;
  if (cRam000000000984ea87 == '\0') {
    FUN_03d2d2b0(PTR_DAT_0925efa8);
    cRam000000000984ea87 = '\x01';
  }
  lVar11 = *(long *)puVar8;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar11 = *(long *)puVar8;
  }
  **(undefined4 **)(lVar11 + 0xb8) = uVar2;
  if (plStack0000000000000008 != (long *)0x0) {
    if (*(int *)(*(long *)PTR_StringLiteral_52275_0925ea90 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_067aca6c(plStack0000000000000008,*(undefined8 *)PTR_DAT_0925fb58);
  }
  return 1;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar18 = piVar18 + 4;
    if (uVar17 == 0) break;
LAB_07f2e9a0:
    if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
      puVar10 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_07f2e9d4;
    }
  }
LAB_07f2e9b8:
  puVar10 = (undefined8 *)FUN_03d8f370(plVar13,*(long *)puVar6,0);
LAB_07f2e9d4:
  (*(code *)*puVar10)(plVar13,puVar10[1]);
LAB_07f2e174:
  puVar8 = PTR_DAT_0925efa8;
  if (*(int *)(*(long *)PTR_DAT_0925efa8 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  if (cRam000000000984ea86 == '\0') {
    FUN_03d2d2b0(PTR_DAT_0925efa8);
    cRam000000000984ea86 = '\x01';
  }
  lVar11 = *(long *)puVar8;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar11 = *(long *)puVar8;
  }
  uVar2 = **(undefined4 **)(lVar11 + 0xb8);
  if (cRam000000000984ea87 == '\0') {
    FUN_03d2d2b0(puVar8);
    lVar11 = *(long *)puVar8;
    cRam000000000984ea87 = '\x01';
  }
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar11 = *(long *)puVar8;
  }
  **(undefined4 **)(lVar11 + 0xb8) = 0xffffffff;
  if (plVar12 != (long *)0x0) {
    lVar11 = *plVar12;
    uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *unaff_x28) {
          puVar10 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_07f2e2c0;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar10 = (undefined8 *)FUN_03d8f370(plVar12,*unaff_x28,0);
LAB_07f2e2c0:
    uStack0000000000000004 = uVar2;
    plVar13 = (long *)(*(code *)*puVar10)(plVar12,puVar10[1]);
    puVar7 = PTR_DAT_091a1508;
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    do {
      lVar15 = *plVar13;
      lVar11 = *(long *)puVar7;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar11) {
            puVar10 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_07f2e330;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_03d8f370(plVar13,lVar11,0);
LAB_07f2e330:
      uVar17 = (*(code *)*puVar10)(plVar13,puVar10[1]);
      puVar6 = PTR_DAT_091a14e0;
      if ((uVar17 & 1) == 0) goto LAB_07f2e704;
      lVar15 = *plVar13;
      lVar11 = *(long *)puVar7;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar11) {
            puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
            goto LAB_07f2e390;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_03d8f370(plVar13,lVar11,1);
LAB_07f2e390:
      (*(code *)*puVar10)(plVar13,puVar10[1]);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      if (cRam000000000984ea86 == '\0') {
        FUN_03d2d2b0(puVar8);
        cRam000000000984ea86 = '\x01';
      }
      lVar11 = *(long *)puVar8;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_03db619c(lVar11);
        lVar11 = *(long *)puVar8;
      }
      iVar3 = **(int **)(lVar11 + 0xb8);
      if (cRam000000000984ea87 == '\0') {
        FUN_03d2d2b0(puVar8);
        lVar11 = *(long *)puVar8;
        cRam000000000984ea87 = '\x01';
      }
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_03db619c(lVar11);
        lVar11 = *(long *)puVar8;
      }
      **(int **)(lVar11 + 0xb8) = iVar3 + 1;
      if (unaff_x20 != 0) {
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_03db619c(lVar11);
        }
        if (cRam000000000984ea86 == '\0') {
          FUN_03d2d2b0(puVar8);
          cRam000000000984ea86 = '\x01';
        }
        lVar11 = *(long *)puVar8;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_03db619c(lVar11);
          lVar11 = *(long *)puVar8;
        }
        if (**(int **)(lVar11 + 0xb8) != 0) {
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_03db619c(lVar11);
          }
          if (cRam000000000984ea86 == '\0') {
            FUN_03d2d2b0(puVar8);
            cRam000000000984ea86 = '\x01';
          }
          lVar11 = *(long *)puVar8;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_03db619c();
            lVar11 = *(long *)puVar8;
          }
          lVar15 = *plVar12;
          iVar3 = **(int **)(lVar11 + 0xb8);
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_091adb18) {
                puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_07f2e508;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar10 = (undefined8 *)FUN_03d8f370(plVar12,*(long *)PTR_DAT_091adb18,1);
LAB_07f2e508:
          iVar9 = (*(code *)*puVar10)(plVar12,puVar10[1]);
          if (iVar3 < iVar9 + -1) {
            lVar11 = *unaff_x19;
            uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar17 != 0) {
              piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0925fa80) {
                  puVar10 = (undefined8 *)(lVar11 + (long)(*piVar18 + 6) * 0x10 + 0x138);
                  goto LAB_07f2e63c;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            puVar10 = (undefined8 *)FUN_03d8f370();
LAB_07f2e63c:
            (*(code *)*puVar10)();
          }
          else {
            if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
              thunk_FUN_03db619c();
            }
            if (cRam000000000984ea86 == '\0') {
              FUN_03d2d2b0(puVar8);
              cRam000000000984ea86 = '\x01';
            }
            lVar11 = *(long *)puVar8;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_03db619c();
              lVar11 = *(long *)puVar8;
            }
            lVar15 = *unaff_x19;
            uVar4 = *(ushort *)(lVar15 + 0x12e);
            uVar17 = (ulong)uVar4;
            if (**(int **)(lVar11 + 0xb8) == 1) {
              if (uVar4 != 0) {
                piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0925fa80) {
                    puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 6) * 0x10 + 0x138);
                    goto LAB_07f2e660;
                  }
                  uVar17 = uVar17 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar17 != 0);
              }
              puVar10 = (undefined8 *)FUN_03d8f370();
LAB_07f2e660:
              (*(code *)*puVar10)();
            }
            else {
              if (uVar4 != 0) {
                piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0925fa80) {
                    puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 6) * 0x10 + 0x138);
                    goto LAB_07f2e684;
                  }
                  uVar17 = uVar17 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar17 != 0);
              }
              puVar10 = (undefined8 *)FUN_03d8f370();
LAB_07f2e684:
              (*(code *)*puVar10)();
            }
          }
        }
      }
      lVar11 = *unaff_x19;
      uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0925fa80) {
            puVar10 = (undefined8 *)(lVar11 + (long)(*piVar18 + 8) * 0x10 + 0x138);
            goto LAB_07f2e6ec;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_03d8f370();
LAB_07f2e6ec:
      (*(code *)*puVar10)();
    } while( true );
  }
LAB_07f2ea00:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


