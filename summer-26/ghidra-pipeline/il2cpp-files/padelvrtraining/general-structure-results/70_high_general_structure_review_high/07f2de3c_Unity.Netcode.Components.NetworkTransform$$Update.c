/*
FUNCTION_NAME: Unity.Netcode.Components.NetworkTransform$$Update
ENTRY_POINT: 07f2de3c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x07f2e790) */
/* WARNING: Removing unreachable block (ram,0x07f2e9ec) */
/* WARNING: Removing unreachable block (ram,0x07f2e9f4) */
/* WARNING: Removing unreachable block (ram,0x07f2ea18) */
/* WARNING: Removing unreachable block (ram,0x07f2ea28) */

undefined4 Unity_Netcode_Components_NetworkTransform__Update(code *param_1)

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
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  int *piVar19;
  long *unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  undefined8 uVar20;
  undefined4 uStack0000000000000004;
  long *plStack0000000000000008;
  
  iVar8 = (*param_1)();
  if (iVar8 < 2) {
    lVar14 = *(long *)PTR_DAT_091a0be8;
  }
  else {
    lVar14 = *unaff_x26;
    uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *unaff_x21) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_07f2dea8;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar10 = (undefined8 *)FUN_03d8f370();
LAB_07f2dea8:
    lVar14 = (*(code *)*puVar10)();
    if (lVar14 == 0) goto LAB_07f2ea00;
    lVar14 = FUN_07f2b2b0();
  }
  lVar15 = *unaff_x26;
  uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar17 != 0) {
    piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *unaff_x22) {
        puVar10 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
        goto LAB_07f2df10;
      }
      uVar17 = uVar17 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar17 != 0);
  }
  puVar10 = (undefined8 *)FUN_03d8f370();
LAB_07f2df10:
  iVar8 = (*(code *)*puVar10)();
  if (2 < iVar8) {
    lVar15 = *unaff_x26;
    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *unaff_x21) {
          puVar10 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_07f2df74;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar10 = (undefined8 *)FUN_03d8f370();
LAB_07f2df74:
    lVar15 = (*(code *)*puVar10)();
    if (lVar15 == 0) goto LAB_07f2ea00;
    FUN_07f2b2b0();
  }
  lVar15 = *unaff_x26;
  uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar17 != 0) {
    piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *unaff_x22) {
        puVar10 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
        goto LAB_07f2dfdc;
      }
      uVar17 = uVar17 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar17 != 0);
  }
  puVar10 = (undefined8 *)FUN_03d8f370();
LAB_07f2dfdc:
  iVar8 = (*(code *)*puVar10)();
  if (3 < iVar8) {
    lVar15 = *unaff_x26;
    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *unaff_x21) {
          puVar10 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_07f2e044;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar10 = (undefined8 *)FUN_03d8f370();
LAB_07f2e044:
    lVar15 = (*(code *)*puVar10)();
    if (lVar15 == 0) goto LAB_07f2ea00;
    FUN_07f2b2b0();
  }
  if (unaff_x27 == 0) goto LAB_07f2ea00;
  if (*(char *)(unaff_x27 + 0x50) == '\0') {
    uVar13 = *(undefined8 *)(unaff_x23 + 0x18);
    uVar20 = *(undefined8 *)(unaff_x27 + 0x10);
    uVar2 = *(undefined4 *)(unaff_x27 + 0x28);
    uVar1 = *(undefined4 *)(unaff_x27 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_0925f078 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar15 = FUN_07f1bd14(uVar13,uVar20,uVar2,uVar1,1,0);
    uVar13 = FUN_07f1bf98(*(undefined8 *)(unaff_x23 + 0x18),lVar15,*(undefined4 *)(unaff_x27 + 0x28)
                          ,0);
    if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x48), lVar15 == 0)) goto LAB_07f2ea00;
    lVar16 = *(long *)(lVar15 + 0x10);
    lVar18 = *(long *)PTR_DAT_0925fb60;
    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
    if (lVar16 == 0) goto LAB_07f2ea00;
    uVar4 = *(uint *)(lVar15 + 0x18);
    if (uVar4 < *(uint *)(lVar16 + 0x18)) {
      *(uint *)(lVar15 + 0x18) = uVar4 + 1;
      puVar10 = (undefined8 *)(lVar16 + (long)(int)uVar4 * 8 + 0x20);
      *puVar10 = uVar13;
      thunk_FUN_03d1023c(puVar10);
    }
    else {
      FUN_05a39734(lVar15,uVar13,*(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70))
      ;
    }
  }
  plVar11 = (long *)thunk_FUN_03d2ee44();
  if (plVar11 == (long *)0x0) {
    if (*(int *)(*(long *)PTR_StringLiteral_52275_0925ea90 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    plVar11 = (long *)FUN_067ac92c(*(undefined8 *)PTR_DAT_0925fb50);
    lVar15 = *unaff_x25;
    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *unaff_x28) {
          puVar10 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
          goto Unity_Netcode_Components_NetworkTransform_NetworkTransformState__GetRotation;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar10 = (undefined8 *)FUN_03d8f370();
Unity_Netcode_Components_NetworkTransform_NetworkTransformState__GetRotation:
    plVar12 = (long *)(*(code *)*puVar10)();
    puVar6 = PTR_DAT_091b1b70;
    puVar7 = PTR_DAT_091a1508;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    do {
      lVar16 = *plVar12;
      lVar15 = *(long *)puVar7;
      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar15) {
            puVar10 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_07f2e898;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_03d8f370(plVar12,lVar15,0);
LAB_07f2e898:
      uVar17 = (*(code *)*puVar10)(plVar12,puVar10[1]);
      puVar5 = PTR_DAT_091a14e0;
      if ((uVar17 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_03d2ee44(plVar12,*(undefined8 *)PTR_DAT_091a14e0);
        plStack0000000000000008 = plVar11;
        if (plVar12 == (long *)0x0) goto LAB_07f2e174;
        lVar15 = *plVar12;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 == 0) goto LAB_07f2e9b8;
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        goto LAB_07f2e9a0;
      }
      lVar16 = *plVar12;
      lVar15 = *(long *)puVar7;
      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar15) {
            puVar10 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto LAB_07f2e8f8;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_03d8f370(plVar12,lVar15,1);
LAB_07f2e8f8:
      uVar13 = (*(code *)*puVar10)(plVar12,puVar10[1]);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar15 = plVar11[2];
      lVar16 = *(long *)puVar6;
      *(int *)((long)plVar11 + 0x1c) = *(int *)((long)plVar11 + 0x1c) + 1;
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      uVar4 = *(uint *)(plVar11 + 3);
      if (uVar4 < *(uint *)(lVar15 + 0x18)) {
        *(uint *)(plVar11 + 3) = uVar4 + 1;
        *(undefined8 *)(lVar15 + (long)(int)uVar4 * 8 + 0x20) = uVar13;
        thunk_FUN_03d1023c();
      }
      else {
        FUN_05a39734(plVar11,uVar13,
                     *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
      }
    } while( true );
  }
  plStack0000000000000008 = (long *)0x0;
  goto LAB_07f2e174;
LAB_07f2e704:
  plVar11 = (long *)thunk_FUN_03d2ee44(plVar12,*(undefined8 *)PTR_DAT_091a14e0);
  if (plVar11 != (long *)0x0) {
    lVar14 = *plVar11;
    uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)puVar5) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
          goto 
          Unity_Netcode_Components_NetworkTransform_NetworkTransformState__get_LastSerializedSize;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar10 = (undefined8 *)FUN_03d8f370(plVar11,*(long *)puVar5,0);
Unity_Netcode_Components_NetworkTransform_NetworkTransformState__get_LastSerializedSize:
    (*(code *)*puVar10)(plVar11,puVar10[1]);
  }
  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  uVar2 = uStack0000000000000004;
  if (cRam000000000984ea87 == '\0') {
    FUN_03d2d2b0(PTR_DAT_0925efa8);
    cRam000000000984ea87 = '\x01';
  }
  lVar14 = *(long *)puVar7;
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar14 = *(long *)puVar7;
  }
  **(undefined4 **)(lVar14 + 0xb8) = uVar2;
  if (plStack0000000000000008 != (long *)0x0) {
    if (*(int *)(*(long *)PTR_StringLiteral_52275_0925ea90 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_067aca6c(plStack0000000000000008,*(undefined8 *)PTR_DAT_0925fb58);
  }
  return 1;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar19 = piVar19 + 4;
    if (uVar17 == 0) break;
LAB_07f2e9a0:
    if (*(long *)(piVar19 + -2) == *(long *)puVar5) {
      puVar10 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_07f2e9d4;
    }
  }
LAB_07f2e9b8:
  puVar10 = (undefined8 *)FUN_03d8f370(plVar12,*(long *)puVar5,0);
LAB_07f2e9d4:
  (*(code *)*puVar10)(plVar12,puVar10[1]);
LAB_07f2e174:
  puVar7 = PTR_DAT_0925efa8;
  if (*(int *)(*(long *)PTR_DAT_0925efa8 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  if (cRam000000000984ea86 == '\0') {
    FUN_03d2d2b0(PTR_DAT_0925efa8);
    cRam000000000984ea86 = '\x01';
  }
  lVar15 = *(long *)puVar7;
  if (*(int *)(lVar15 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar15 = *(long *)puVar7;
  }
  uVar2 = **(undefined4 **)(lVar15 + 0xb8);
  if (cRam000000000984ea87 == '\0') {
    FUN_03d2d2b0(puVar7);
    lVar15 = *(long *)puVar7;
    cRam000000000984ea87 = '\x01';
  }
  if (*(int *)(lVar15 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar15 = *(long *)puVar7;
  }
  **(undefined4 **)(lVar15 + 0xb8) = 0xffffffff;
  if (plVar11 != (long *)0x0) {
    lVar15 = *plVar11;
    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *unaff_x28) {
          puVar10 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_07f2e2c0;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar10 = (undefined8 *)FUN_03d8f370(plVar11,*unaff_x28,0);
LAB_07f2e2c0:
    uStack0000000000000004 = uVar2;
    plVar12 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
    puVar6 = PTR_DAT_091a1508;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    do {
      lVar16 = *plVar12;
      lVar15 = *(long *)puVar6;
      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar15) {
            puVar10 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_07f2e330;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_03d8f370(plVar12,lVar15,0);
LAB_07f2e330:
      uVar17 = (*(code *)*puVar10)(plVar12,puVar10[1]);
      puVar5 = PTR_DAT_091a14e0;
      if ((uVar17 & 1) == 0) goto LAB_07f2e704;
      lVar16 = *plVar12;
      lVar15 = *(long *)puVar6;
      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar15) {
            puVar10 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto LAB_07f2e390;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_03d8f370(plVar12,lVar15,1);
LAB_07f2e390:
      (*(code *)*puVar10)(plVar12,puVar10[1]);
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      if (cRam000000000984ea86 == '\0') {
        FUN_03d2d2b0(puVar7);
        cRam000000000984ea86 = '\x01';
      }
      lVar15 = *(long *)puVar7;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_03db619c(lVar15);
        lVar15 = *(long *)puVar7;
      }
      iVar8 = **(int **)(lVar15 + 0xb8);
      if (cRam000000000984ea87 == '\0') {
        FUN_03d2d2b0(puVar7);
        lVar15 = *(long *)puVar7;
        cRam000000000984ea87 = '\x01';
      }
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_03db619c(lVar15);
        lVar15 = *(long *)puVar7;
      }
      **(int **)(lVar15 + 0xb8) = iVar8 + 1;
      if (lVar14 != 0) {
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_03db619c(lVar15);
        }
        if (cRam000000000984ea86 == '\0') {
          FUN_03d2d2b0(puVar7);
          cRam000000000984ea86 = '\x01';
        }
        lVar15 = *(long *)puVar7;
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_03db619c(lVar15);
          lVar15 = *(long *)puVar7;
        }
        if (**(int **)(lVar15 + 0xb8) != 0) {
          if (*(int *)(lVar15 + 0xe0) == 0) {
            thunk_FUN_03db619c(lVar15);
          }
          if (cRam000000000984ea86 == '\0') {
            FUN_03d2d2b0(puVar7);
            cRam000000000984ea86 = '\x01';
          }
          lVar15 = *(long *)puVar7;
          if (*(int *)(lVar15 + 0xe0) == 0) {
            thunk_FUN_03db619c();
            lVar15 = *(long *)puVar7;
          }
          lVar16 = *plVar11;
          iVar8 = **(int **)(lVar15 + 0xb8);
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_091adb18) {
                puVar10 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                goto LAB_07f2e508;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar10 = (undefined8 *)FUN_03d8f370(plVar11,*(long *)PTR_DAT_091adb18,1);
LAB_07f2e508:
          iVar9 = (*(code *)*puVar10)(plVar11,puVar10[1]);
          if (iVar8 < iVar9 + -1) {
            lVar15 = *unaff_x19;
            uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar17 != 0) {
              piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0925fa80) {
                  puVar10 = (undefined8 *)(lVar15 + (long)(*piVar19 + 6) * 0x10 + 0x138);
                  goto LAB_07f2e63c;
                }
                uVar17 = uVar17 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar17 != 0);
            }
            puVar10 = (undefined8 *)FUN_03d8f370();
LAB_07f2e63c:
            (*(code *)*puVar10)();
          }
          else {
            if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
              thunk_FUN_03db619c();
            }
            if (cRam000000000984ea86 == '\0') {
              FUN_03d2d2b0(puVar7);
              cRam000000000984ea86 = '\x01';
            }
            lVar15 = *(long *)puVar7;
            if (*(int *)(lVar15 + 0xe0) == 0) {
              thunk_FUN_03db619c();
              lVar15 = *(long *)puVar7;
            }
            lVar16 = *unaff_x19;
            uVar3 = *(ushort *)(lVar16 + 0x12e);
            uVar17 = (ulong)uVar3;
            if (**(int **)(lVar15 + 0xb8) == 1) {
              if (uVar3 != 0) {
                piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0925fa80) {
                    puVar10 = (undefined8 *)(lVar16 + (long)(*piVar19 + 6) * 0x10 + 0x138);
                    goto LAB_07f2e660;
                  }
                  uVar17 = uVar17 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar17 != 0);
              }
              puVar10 = (undefined8 *)FUN_03d8f370();
LAB_07f2e660:
              (*(code *)*puVar10)();
            }
            else {
              if (uVar3 != 0) {
                piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0925fa80) {
                    puVar10 = (undefined8 *)(lVar16 + (long)(*piVar19 + 6) * 0x10 + 0x138);
                    goto LAB_07f2e684;
                  }
                  uVar17 = uVar17 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar17 != 0);
              }
              puVar10 = (undefined8 *)FUN_03d8f370();
LAB_07f2e684:
              (*(code *)*puVar10)();
            }
          }
        }
      }
      lVar15 = *unaff_x19;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0925fa80) {
            puVar10 = (undefined8 *)(lVar15 + (long)(*piVar19 + 8) * 0x10 + 0x138);
            goto LAB_07f2e6ec;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
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


