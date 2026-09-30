/*
FUNCTION_NAME: Unity.Netcode.Components.NetworkTransform$$RegisterForTickSynchronization
ENTRY_POINT: 07f2df68
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

undefined4 Unity_Netcode_Components_NetworkTransform__RegisterForTickSynchronization(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  int *in_x10;
  int *piVar18;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  undefined8 uVar19;
  undefined4 uStack0000000000000004;
  long *plStack0000000000000008;
  
  lVar10 = (**(code **)(param_1 + (long)*in_x10 * 0x10 + 0x138))();
  if (lVar10 == 0) goto LAB_07f2ea00;
  FUN_07f2b2b0();
  lVar10 = *unaff_x26;
  uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar16 != 0) {
    piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == *unaff_x22) {
        puVar11 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
        goto LAB_07f2dfdc;
      }
      uVar16 = uVar16 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar16 != 0);
  }
  puVar11 = (undefined8 *)FUN_03d8f370();
LAB_07f2dfdc:
  iVar8 = (*(code *)*puVar11)();
  if (3 < iVar8) {
    lVar10 = *unaff_x26;
    uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar16 != 0) {
      piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *unaff_x21) {
          puVar11 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_07f2e044;
        }
        uVar16 = uVar16 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar16 != 0);
    }
    puVar11 = (undefined8 *)FUN_03d8f370();
LAB_07f2e044:
    lVar10 = (*(code *)*puVar11)();
    if (lVar10 == 0) goto LAB_07f2ea00;
    FUN_07f2b2b0();
  }
  if (unaff_x27 == 0) goto LAB_07f2ea00;
  if (*(char *)(unaff_x27 + 0x50) == '\0') {
    uVar14 = *(undefined8 *)(unaff_x23 + 0x18);
    uVar19 = *(undefined8 *)(unaff_x27 + 0x10);
    uVar2 = *(undefined4 *)(unaff_x27 + 0x28);
    uVar1 = *(undefined4 *)(unaff_x27 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_0925f078 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar10 = FUN_07f1bd14(uVar14,uVar19,uVar2,uVar1,1,0);
    uVar14 = FUN_07f1bf98(*(undefined8 *)(unaff_x23 + 0x18),lVar10,*(undefined4 *)(unaff_x27 + 0x28)
                          ,0);
    if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x48), lVar10 == 0)) goto LAB_07f2ea00;
    lVar15 = *(long *)(lVar10 + 0x10);
    lVar17 = *(long *)PTR_DAT_0925fb60;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar15 == 0) goto LAB_07f2ea00;
    uVar4 = *(uint *)(lVar10 + 0x18);
    if (uVar4 < *(uint *)(lVar15 + 0x18)) {
      *(uint *)(lVar10 + 0x18) = uVar4 + 1;
      puVar11 = (undefined8 *)(lVar15 + (long)(int)uVar4 * 8 + 0x20);
      *puVar11 = uVar14;
      thunk_FUN_03d1023c(puVar11);
    }
    else {
      FUN_05a39734(lVar10,uVar14,*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70))
      ;
    }
  }
  plVar12 = (long *)thunk_FUN_03d2ee44();
  if (plVar12 == (long *)0x0) {
    if (*(int *)(*(long *)PTR_StringLiteral_52275_0925ea90 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    plVar12 = (long *)FUN_067ac92c(*(undefined8 *)PTR_DAT_0925fb50);
    lVar10 = *unaff_x25;
    uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar16 != 0) {
      piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *unaff_x28) {
          puVar11 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
          goto Unity_Netcode_Components_NetworkTransform_NetworkTransformState__GetRotation;
        }
        uVar16 = uVar16 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar16 != 0);
    }
    puVar11 = (undefined8 *)FUN_03d8f370();
Unity_Netcode_Components_NetworkTransform_NetworkTransformState__GetRotation:
    plVar13 = (long *)(*(code *)*puVar11)();
    puVar6 = PTR_DAT_091b1b70;
    puVar7 = PTR_DAT_091a1508;
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    do {
      lVar15 = *plVar13;
      lVar10 = *(long *)puVar7;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar10) {
            puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_07f2e898;
          }
          uVar16 = uVar16 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar16 != 0);
      }
      puVar11 = (undefined8 *)FUN_03d8f370(plVar13,lVar10,0);
LAB_07f2e898:
      uVar16 = (*(code *)*puVar11)(plVar13,puVar11[1]);
      puVar5 = PTR_DAT_091a14e0;
      if ((uVar16 & 1) == 0) {
        plVar13 = (long *)thunk_FUN_03d2ee44(plVar13,*(undefined8 *)PTR_DAT_091a14e0);
        plStack0000000000000008 = plVar12;
        if (plVar13 == (long *)0x0) goto LAB_07f2e174;
        lVar10 = *plVar13;
        uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar16 == 0) goto LAB_07f2e9b8;
        piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_07f2e9a0;
      }
      lVar15 = *plVar13;
      lVar10 = *(long *)puVar7;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar10) {
            puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
            goto LAB_07f2e8f8;
          }
          uVar16 = uVar16 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar16 != 0);
      }
      puVar11 = (undefined8 *)FUN_03d8f370(plVar13,lVar10,1);
LAB_07f2e8f8:
      uVar14 = (*(code *)*puVar11)(plVar13,puVar11[1]);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar10 = plVar12[2];
      lVar15 = *(long *)puVar6;
      *(int *)((long)plVar12 + 0x1c) = *(int *)((long)plVar12 + 0x1c) + 1;
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      uVar4 = *(uint *)(plVar12 + 3);
      if (uVar4 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(plVar12 + 3) = uVar4 + 1;
        *(undefined8 *)(lVar10 + (long)(int)uVar4 * 8 + 0x20) = uVar14;
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
    lVar10 = *plVar12;
    uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar16 != 0) {
      piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)puVar5) {
          puVar11 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
          goto 
          Unity_Netcode_Components_NetworkTransform_NetworkTransformState__get_LastSerializedSize;
        }
        uVar16 = uVar16 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar16 != 0);
    }
    puVar11 = (undefined8 *)FUN_03d8f370(plVar12,*(long *)puVar5,0);
Unity_Netcode_Components_NetworkTransform_NetworkTransformState__get_LastSerializedSize:
    (*(code *)*puVar11)(plVar12,puVar11[1]);
  }
  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  uVar2 = uStack0000000000000004;
  if (cRam000000000984ea87 == '\0') {
    FUN_03d2d2b0(PTR_DAT_0925efa8);
    cRam000000000984ea87 = '\x01';
  }
  lVar10 = *(long *)puVar7;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar10 = *(long *)puVar7;
  }
  **(undefined4 **)(lVar10 + 0xb8) = uVar2;
  if (plStack0000000000000008 != (long *)0x0) {
    if (*(int *)(*(long *)PTR_StringLiteral_52275_0925ea90 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_067aca6c(plStack0000000000000008,*(undefined8 *)PTR_DAT_0925fb58);
  }
  return 1;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar18 = piVar18 + 4;
    if (uVar16 == 0) break;
LAB_07f2e9a0:
    if (*(long *)(piVar18 + -2) == *(long *)puVar5) {
      puVar11 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_07f2e9d4;
    }
  }
LAB_07f2e9b8:
  puVar11 = (undefined8 *)FUN_03d8f370(plVar13,*(long *)puVar5,0);
LAB_07f2e9d4:
  (*(code *)*puVar11)(plVar13,puVar11[1]);
LAB_07f2e174:
  puVar7 = PTR_DAT_0925efa8;
  if (*(int *)(*(long *)PTR_DAT_0925efa8 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  if (cRam000000000984ea86 == '\0') {
    FUN_03d2d2b0(PTR_DAT_0925efa8);
    cRam000000000984ea86 = '\x01';
  }
  lVar10 = *(long *)puVar7;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar10 = *(long *)puVar7;
  }
  uVar2 = **(undefined4 **)(lVar10 + 0xb8);
  if (cRam000000000984ea87 == '\0') {
    FUN_03d2d2b0(puVar7);
    lVar10 = *(long *)puVar7;
    cRam000000000984ea87 = '\x01';
  }
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar10 = *(long *)puVar7;
  }
  **(undefined4 **)(lVar10 + 0xb8) = 0xffffffff;
  if (plVar12 != (long *)0x0) {
    lVar10 = *plVar12;
    uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar16 != 0) {
      piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *unaff_x28) {
          puVar11 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_07f2e2c0;
        }
        uVar16 = uVar16 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar16 != 0);
    }
    puVar11 = (undefined8 *)FUN_03d8f370(plVar12,*unaff_x28,0);
LAB_07f2e2c0:
    uStack0000000000000004 = uVar2;
    plVar13 = (long *)(*(code *)*puVar11)(plVar12,puVar11[1]);
    puVar6 = PTR_DAT_091a1508;
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    do {
      lVar15 = *plVar13;
      lVar10 = *(long *)puVar6;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar10) {
            puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_07f2e330;
          }
          uVar16 = uVar16 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar16 != 0);
      }
      puVar11 = (undefined8 *)FUN_03d8f370(plVar13,lVar10,0);
LAB_07f2e330:
      uVar16 = (*(code *)*puVar11)(plVar13,puVar11[1]);
      puVar5 = PTR_DAT_091a14e0;
      if ((uVar16 & 1) == 0) goto LAB_07f2e704;
      lVar15 = *plVar13;
      lVar10 = *(long *)puVar6;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar10) {
            puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
            goto LAB_07f2e390;
          }
          uVar16 = uVar16 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar16 != 0);
      }
      puVar11 = (undefined8 *)FUN_03d8f370(plVar13,lVar10,1);
LAB_07f2e390:
      (*(code *)*puVar11)(plVar13,puVar11[1]);
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      if (cRam000000000984ea86 == '\0') {
        FUN_03d2d2b0(puVar7);
        cRam000000000984ea86 = '\x01';
      }
      lVar10 = *(long *)puVar7;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_03db619c(lVar10);
        lVar10 = *(long *)puVar7;
      }
      iVar8 = **(int **)(lVar10 + 0xb8);
      if (cRam000000000984ea87 == '\0') {
        FUN_03d2d2b0(puVar7);
        lVar10 = *(long *)puVar7;
        cRam000000000984ea87 = '\x01';
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_03db619c(lVar10);
        lVar10 = *(long *)puVar7;
      }
      **(int **)(lVar10 + 0xb8) = iVar8 + 1;
      if (unaff_x20 != 0) {
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_03db619c(lVar10);
        }
        if (cRam000000000984ea86 == '\0') {
          FUN_03d2d2b0(puVar7);
          cRam000000000984ea86 = '\x01';
        }
        lVar10 = *(long *)puVar7;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_03db619c(lVar10);
          lVar10 = *(long *)puVar7;
        }
        if (**(int **)(lVar10 + 0xb8) != 0) {
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_03db619c(lVar10);
          }
          if (cRam000000000984ea86 == '\0') {
            FUN_03d2d2b0(puVar7);
            cRam000000000984ea86 = '\x01';
          }
          lVar10 = *(long *)puVar7;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_03db619c();
            lVar10 = *(long *)puVar7;
          }
          lVar15 = *plVar12;
          iVar8 = **(int **)(lVar10 + 0xb8);
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar16 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_091adb18) {
                puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_07f2e508;
              }
              uVar16 = uVar16 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar16 != 0);
          }
          puVar11 = (undefined8 *)FUN_03d8f370(plVar12,*(long *)PTR_DAT_091adb18,1);
LAB_07f2e508:
          iVar9 = (*(code *)*puVar11)(plVar12,puVar11[1]);
          if (iVar8 < iVar9 + -1) {
            lVar10 = *unaff_x19;
            uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar16 != 0) {
              piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0925fa80) {
                  puVar11 = (undefined8 *)(lVar10 + (long)(*piVar18 + 6) * 0x10 + 0x138);
                  goto LAB_07f2e63c;
                }
                uVar16 = uVar16 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar16 != 0);
            }
            puVar11 = (undefined8 *)FUN_03d8f370();
LAB_07f2e63c:
            (*(code *)*puVar11)();
          }
          else {
            if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
              thunk_FUN_03db619c();
            }
            if (cRam000000000984ea86 == '\0') {
              FUN_03d2d2b0(puVar7);
              cRam000000000984ea86 = '\x01';
            }
            lVar10 = *(long *)puVar7;
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_03db619c();
              lVar10 = *(long *)puVar7;
            }
            lVar15 = *unaff_x19;
            uVar3 = *(ushort *)(lVar15 + 0x12e);
            uVar16 = (ulong)uVar3;
            if (**(int **)(lVar10 + 0xb8) == 1) {
              if (uVar3 != 0) {
                piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0925fa80) {
                    puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 6) * 0x10 + 0x138);
                    goto LAB_07f2e660;
                  }
                  uVar16 = uVar16 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar16 != 0);
              }
              puVar11 = (undefined8 *)FUN_03d8f370();
LAB_07f2e660:
              (*(code *)*puVar11)();
            }
            else {
              if (uVar3 != 0) {
                piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0925fa80) {
                    puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 6) * 0x10 + 0x138);
                    goto LAB_07f2e684;
                  }
                  uVar16 = uVar16 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar16 != 0);
              }
              puVar11 = (undefined8 *)FUN_03d8f370();
LAB_07f2e684:
              (*(code *)*puVar11)();
            }
          }
        }
      }
      lVar10 = *unaff_x19;
      uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar16 != 0) {
        piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0925fa80) {
            puVar11 = (undefined8 *)(lVar10 + (long)(*piVar18 + 8) * 0x10 + 0x138);
            goto LAB_07f2e6ec;
          }
          uVar16 = uVar16 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar16 != 0);
      }
      puVar11 = (undefined8 *)FUN_03d8f370();
LAB_07f2e6ec:
      (*(code *)*puVar11)();
    } while( true );
  }
LAB_07f2ea00:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


