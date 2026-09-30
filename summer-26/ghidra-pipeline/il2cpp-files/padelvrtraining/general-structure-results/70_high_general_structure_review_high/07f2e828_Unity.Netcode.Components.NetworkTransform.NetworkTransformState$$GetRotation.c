/*
FUNCTION_NAME: Unity.Netcode.Components.NetworkTransform.NetworkTransformState$$GetRotation
ENTRY_POINT: 07f2e828
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07f2e790) */
/* WARNING: Removing unreachable block (ram,0x07f2e9ec) */
/* WARNING: Removing unreachable block (ram,0x07f2e9f4) */
/* WARNING: Removing unreachable block (ram,0x07f2ea18) */
/* WARNING: Removing unreachable block (ram,0x07f2ea28) */

undefined4
Unity_Netcode_Components_NetworkTransform_NetworkTransformState__GetRotation(undefined8 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x24;
  long *unaff_x28;
  undefined4 uStack0000000000000004;
  
  plVar9 = (long *)(*(code *)*param_1)();
  puVar7 = PTR_DAT_091a1508;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  do {
    lVar13 = *plVar9;
    lVar12 = *(long *)puVar7;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar12) {
          puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_07f2e898;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar10 = (undefined8 *)FUN_03d8f370(plVar9,lVar12,0);
LAB_07f2e898:
    uVar14 = (*(code *)*puVar10)(plVar9,puVar10[1]);
    puVar6 = PTR_DAT_091a14e0;
    if ((uVar14 & 1) == 0) {
      plVar9 = (long *)thunk_FUN_03d2ee44(plVar9,*(undefined8 *)PTR_DAT_091a14e0);
      if (plVar9 == (long *)0x0) goto LAB_07f2e9e0;
      lVar12 = *plVar9;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 == 0) goto LAB_07f2e9b8;
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      break;
    }
    lVar13 = *plVar9;
    lVar12 = *(long *)puVar7;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar12) {
          puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_07f2e8f8;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar10 = (undefined8 *)FUN_03d8f370(plVar9,lVar12,1);
LAB_07f2e8f8:
    uVar11 = (*(code *)*puVar10)(plVar9,puVar10[1]);
    if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar12 = unaff_x24[2];
    *(int *)((long)unaff_x24 + 0x1c) = *(int *)((long)unaff_x24 + 0x1c) + 1;
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar4 = *(uint *)(unaff_x24 + 3);
    if (uVar4 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(unaff_x24 + 3) = uVar4 + 1;
      *(undefined8 *)(lVar12 + (long)(int)uVar4 * 8 + 0x20) = uVar11;
      thunk_FUN_03d1023c();
    }
    else {
      FUN_05a39734();
    }
  } while( true );
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
    if (*(long *)(piVar15 + -2) == *(long *)puVar6) {
      puVar10 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_07f2e9d4;
    }
  }
LAB_07f2e9b8:
  puVar10 = (undefined8 *)FUN_03d8f370(plVar9,*(long *)puVar6,0);
LAB_07f2e9d4:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_07f2e9e0:
  puVar7 = PTR_DAT_0925efa8;
  if (*(int *)(*(long *)PTR_DAT_0925efa8 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  if (cRam000000000984ea86 == '\0') {
    FUN_03d2d2b0(PTR_DAT_0925efa8);
    cRam000000000984ea86 = '\x01';
  }
  lVar12 = *(long *)puVar7;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar12 = *(long *)puVar7;
  }
  uVar1 = **(undefined4 **)(lVar12 + 0xb8);
  if (cRam000000000984ea87 == '\0') {
    FUN_03d2d2b0(puVar7);
    lVar12 = *(long *)puVar7;
    cRam000000000984ea87 = '\x01';
  }
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar12 = *(long *)puVar7;
  }
  **(undefined4 **)(lVar12 + 0xb8) = 0xffffffff;
  if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar12 = *unaff_x24;
  uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *unaff_x28) {
        puVar10 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_07f2e2c0;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar10 = (undefined8 *)FUN_03d8f370();
LAB_07f2e2c0:
  uStack0000000000000004 = uVar1;
  plVar9 = (long *)(*(code *)*puVar10)();
  puVar6 = PTR_DAT_091a1508;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  do {
    lVar13 = *plVar9;
    lVar12 = *(long *)puVar6;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar12) {
          puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_07f2e330;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar10 = (undefined8 *)FUN_03d8f370(plVar9,lVar12,0);
LAB_07f2e330:
    uVar14 = (*(code *)*puVar10)(plVar9,puVar10[1]);
    puVar5 = PTR_DAT_091a14e0;
    if ((uVar14 & 1) == 0) break;
    lVar13 = *plVar9;
    lVar12 = *(long *)puVar6;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar12) {
          puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_07f2e390;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar10 = (undefined8 *)FUN_03d8f370(plVar9,lVar12,1);
LAB_07f2e390:
    (*(code *)*puVar10)(plVar9,puVar10[1]);
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    if (cRam000000000984ea86 == '\0') {
      FUN_03d2d2b0(puVar7);
      cRam000000000984ea86 = '\x01';
    }
    lVar12 = *(long *)puVar7;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_03db619c(lVar12);
      lVar12 = *(long *)puVar7;
    }
    iVar2 = **(int **)(lVar12 + 0xb8);
    if (cRam000000000984ea87 == '\0') {
      FUN_03d2d2b0(puVar7);
      lVar12 = *(long *)puVar7;
      cRam000000000984ea87 = '\x01';
    }
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_03db619c(lVar12);
      lVar12 = *(long *)puVar7;
    }
    **(int **)(lVar12 + 0xb8) = iVar2 + 1;
    if (unaff_x20 != 0) {
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_03db619c(lVar12);
      }
      if (cRam000000000984ea86 == '\0') {
        FUN_03d2d2b0(puVar7);
        cRam000000000984ea86 = '\x01';
      }
      lVar12 = *(long *)puVar7;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_03db619c(lVar12);
        lVar12 = *(long *)puVar7;
      }
      if (**(int **)(lVar12 + 0xb8) != 0) {
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_03db619c(lVar12);
        }
        if (cRam000000000984ea86 == '\0') {
          FUN_03d2d2b0(puVar7);
          cRam000000000984ea86 = '\x01';
        }
        lVar12 = *(long *)puVar7;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_03db619c();
          lVar12 = *(long *)puVar7;
        }
        lVar13 = *unaff_x24;
        iVar2 = **(int **)(lVar12 + 0xb8);
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_091adb18) {
              puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_07f2e508;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar10 = (undefined8 *)FUN_03d8f370();
LAB_07f2e508:
        iVar8 = (*(code *)*puVar10)();
        if (iVar2 < iVar8 + -1) {
          lVar12 = *unaff_x19;
          uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0925fa80) {
                puVar10 = (undefined8 *)(lVar12 + (long)(*piVar15 + 6) * 0x10 + 0x138);
                goto LAB_07f2e63c;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
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
          lVar12 = *(long *)puVar7;
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_03db619c();
            lVar12 = *(long *)puVar7;
          }
          lVar13 = *unaff_x19;
          uVar3 = *(ushort *)(lVar13 + 0x12e);
          uVar14 = (ulong)uVar3;
          if (**(int **)(lVar12 + 0xb8) == 1) {
            if (uVar3 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0925fa80) {
                  puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 6) * 0x10 + 0x138);
                  goto LAB_07f2e660;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            puVar10 = (undefined8 *)FUN_03d8f370();
LAB_07f2e660:
            (*(code *)*puVar10)();
          }
          else {
            if (uVar3 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0925fa80) {
                  puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 6) * 0x10 + 0x138);
                  goto LAB_07f2e684;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            puVar10 = (undefined8 *)FUN_03d8f370();
LAB_07f2e684:
            (*(code *)*puVar10)();
          }
        }
      }
    }
    lVar12 = *unaff_x19;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0925fa80) {
          puVar10 = (undefined8 *)(lVar12 + (long)(*piVar15 + 8) * 0x10 + 0x138);
          goto LAB_07f2e6ec;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar10 = (undefined8 *)FUN_03d8f370();
LAB_07f2e6ec:
    (*(code *)*puVar10)();
  } while( true );
  plVar9 = (long *)thunk_FUN_03d2ee44(plVar9,*(undefined8 *)PTR_DAT_091a14e0);
  if (plVar9 != (long *)0x0) {
    lVar12 = *plVar9;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto 
          Unity_Netcode_Components_NetworkTransform_NetworkTransformState__get_LastSerializedSize;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar10 = (undefined8 *)FUN_03d8f370(plVar9,*(long *)puVar5,0);
Unity_Netcode_Components_NetworkTransform_NetworkTransformState__get_LastSerializedSize:
    (*(code *)*puVar10)(plVar9,puVar10[1]);
  }
  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  uVar1 = uStack0000000000000004;
  if (cRam000000000984ea87 == '\0') {
    FUN_03d2d2b0(PTR_DAT_0925efa8);
    cRam000000000984ea87 = '\x01';
  }
  lVar12 = *(long *)puVar7;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar12 = *(long *)puVar7;
  }
  **(undefined4 **)(lVar12 + 0xb8) = uVar1;
  if (unaff_x24 != (long *)0x0) {
    if (*(int *)(*(long *)PTR_StringLiteral_52275_0925ea90 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_067aca6c(unaff_x24,*(undefined8 *)PTR_DAT_0925fb58);
  }
  return 1;
}


