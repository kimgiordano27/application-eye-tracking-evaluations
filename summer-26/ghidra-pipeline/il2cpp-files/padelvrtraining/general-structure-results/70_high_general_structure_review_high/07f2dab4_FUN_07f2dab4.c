/*
FUNCTION_NAME: FUN_07f2dab4
ENTRY_POINT: 07f2dab4
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
/* WARNING: Removing unreachable block (ram,0x07f2ea18) */
/* WARNING: Removing unreachable block (ram,0x07f2ea28) */
/* WARNING: Removing unreachable block (ram,0x07f2e9ec) */

undefined4 FUN_07f2dab4(long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  int *piVar23;
  undefined8 uVar24;
  long *plStack_78;
  long lStack_70;
  long lStack_68;
  
  if ((bRam000000000984e9b6 & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_0925fb50);
    FUN_03d2d2b0(PTR_DAT_0925fb58);
    FUN_03d2d2b0(PTR_StringLiteral_52275_0925ea90);
    FUN_03d2d2b0(PTR_DAT_0925f078);
    FUN_03d2d2b0(PTR_DAT_0925fa78);
    FUN_03d2d2b0(PTR_DAT_091adb18);
    FUN_03d2d2b0(PTR_DAT_091a14e0);
    FUN_03d2d2b0(PTR_DAT_091adc90);
    FUN_03d2d2b0(PTR_DAT_091a1508);
    FUN_03d2d2b0(PTR_DAT_091b4670);
    FUN_03d2d2b0(PTR_DAT_0925fa80);
    FUN_03d2d2b0(PTR_DAT_0925fa88);
    FUN_03d2d2b0(PTR_DAT_0925efa8);
    FUN_03d2d2b0(PTR_DAT_0925fb60);
    FUN_03d2d2b0(PTR_DAT_091b1b70);
    FUN_03d2d2b0(PTR_DAT_091a13f8);
    FUN_03d2d2b0(PTR_DAT_091a0be8);
    bRam000000000984e9b6 = 1;
  }
  if (param_2 == (long *)0x0) goto LAB_07f2ea00;
  lVar16 = *param_2;
  uVar21 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar21 != 0) {
    piVar23 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_0925fa80) {
        puVar11 = (undefined8 *)(lVar16 + (long)(*piVar23 + 1) * 0x10 + 0x138);
        goto LAB_07f2dc14;
      }
      uVar21 = uVar21 - 1;
      piVar23 = piVar23 + 4;
    } while (uVar21 != 0);
  }
  puVar11 = (undefined8 *)FUN_03d8f370(param_2,*(long *)PTR_DAT_0925fa80,1);
LAB_07f2dc14:
  puVar7 = PTR_DAT_091adc90;
  lVar16 = (*(code *)*puVar11)(param_2,puVar11[1]);
  lVar17 = *param_2;
  uVar21 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar21 != 0) {
    piVar23 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_0925fa80) {
        puVar11 = (undefined8 *)(lVar17 + (long)*piVar23 * 0x10 + 0x138);
        goto LAB_07f2dc80;
      }
      uVar21 = uVar21 - 1;
      piVar23 = piVar23 + 4;
    } while (uVar21 != 0);
  }
  puVar11 = (undefined8 *)FUN_03d8f370(param_2,*(long *)PTR_DAT_0925fa80,0);
LAB_07f2dc80:
  plVar12 = (long *)(*(code *)*puVar11)(param_2,puVar11[1]);
  plVar13 = (long *)thunk_FUN_03d2ee44(plVar12,*(undefined8 *)puVar7);
  if ((plVar13 == (long *)0x0) ||
     ((plVar12 != (long *)0x0 && (*plVar12 == *(long *)PTR_DAT_091a13f8)))) {
    return 0;
  }
  lVar17 = thunk_FUN_03d2ee44(plVar12,*(undefined8 *)PTR_DAT_091b4670);
  if (lVar16 == 0) {
    return 0;
  }
  if (lVar17 != 0) {
    return 0;
  }
  plVar14 = (long *)FUN_07f2ebe4(lVar16,0x7c,4);
  puVar8 = PTR_DAT_0925fa78;
  if (plVar14 == (long *)0x0) goto LAB_07f2ea00;
  lVar16 = *plVar14;
  uVar21 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar21 != 0) {
    piVar23 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_0925fa78) {
        puVar11 = (undefined8 *)(lVar16 + (long)*piVar23 * 0x10 + 0x138);
        goto LAB_07f2dd48;
      }
      uVar21 = uVar21 - 1;
      piVar23 = piVar23 + 4;
    } while (uVar21 != 0);
  }
  puVar11 = (undefined8 *)FUN_03d8f370(plVar14,*(long *)PTR_DAT_0925fa78,0);
LAB_07f2dd48:
  iVar9 = (*(code *)*puVar11)(plVar14,puVar11[1]);
  puVar5 = PTR_DAT_0925fa88;
  if (iVar9 < 2) {
    return 0;
  }
  lVar16 = *plVar14;
  uVar21 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar21 != 0) {
    piVar23 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_0925fa88) {
        puVar11 = (undefined8 *)(lVar16 + (long)*piVar23 * 0x10 + 0x138);
        goto LAB_07f2ddd8;
      }
      uVar21 = uVar21 - 1;
      piVar23 = piVar23 + 4;
    } while (uVar21 != 0);
  }
  puVar11 = (undefined8 *)FUN_03d8f370(plVar14,*(long *)PTR_DAT_0925fa88,0);
LAB_07f2ddd8:
  lVar16 = (*(code *)*puVar11)(plVar14,0,puVar11[1]);
  lVar17 = *plVar14;
  uVar21 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar21 != 0) {
    piVar23 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar23 + -2) == *(long *)puVar8) {
        puVar11 = (undefined8 *)(lVar17 + (long)*piVar23 * 0x10 + 0x138);
        goto LAB_07f2de38;
      }
      uVar21 = uVar21 - 1;
      piVar23 = piVar23 + 4;
    } while (uVar21 != 0);
  }
  puVar11 = (undefined8 *)FUN_03d8f370(plVar14,*(long *)puVar8,0);
LAB_07f2de38:
  iVar9 = (*(code *)*puVar11)(plVar14,puVar11[1]);
  if (iVar9 < 2) {
    lVar17 = *(long *)PTR_DAT_091a0be8;
  }
  else {
    lVar17 = *plVar14;
    uVar21 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar21 != 0) {
      piVar23 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == *(long *)puVar5) {
          puVar11 = (undefined8 *)(lVar17 + (long)*piVar23 * 0x10 + 0x138);
          goto LAB_07f2dea8;
        }
        uVar21 = uVar21 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar21 != 0);
    }
    puVar11 = (undefined8 *)FUN_03d8f370(plVar14,*(long *)puVar5,0);
LAB_07f2dea8:
    lVar17 = (*(code *)*puVar11)(plVar14,1,puVar11[1]);
    if (lVar17 == 0) goto LAB_07f2ea00;
    lVar17 = FUN_07f2b2b0();
  }
  lVar18 = *plVar14;
  uVar21 = (ulong)*(ushort *)(lVar18 + 0x12e);
  if (uVar21 != 0) {
    piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    do {
      if (*(long *)(piVar23 + -2) == *(long *)puVar8) {
        puVar11 = (undefined8 *)(lVar18 + (long)*piVar23 * 0x10 + 0x138);
        goto LAB_07f2df10;
      }
      uVar21 = uVar21 - 1;
      piVar23 = piVar23 + 4;
    } while (uVar21 != 0);
  }
  puVar11 = (undefined8 *)FUN_03d8f370(plVar14,*(long *)puVar8,0);
LAB_07f2df10:
  iVar9 = (*(code *)*puVar11)(plVar14,puVar11[1]);
  lStack_68 = lVar17;
  if (2 < iVar9) {
    lVar18 = *plVar14;
    uVar21 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar21 != 0) {
      piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == *(long *)puVar5) {
          puVar11 = (undefined8 *)(lVar18 + (long)*piVar23 * 0x10 + 0x138);
          goto LAB_07f2df74;
        }
        uVar21 = uVar21 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar21 != 0);
    }
    puVar11 = (undefined8 *)FUN_03d8f370(plVar14,*(long *)puVar5,0);
LAB_07f2df74:
    lVar18 = (*(code *)*puVar11)(plVar14,2,puVar11[1]);
    if (lVar18 == 0) goto LAB_07f2ea00;
    lStack_68 = FUN_07f2b2b0();
  }
  lVar18 = *plVar14;
  uVar21 = (ulong)*(ushort *)(lVar18 + 0x12e);
  if (uVar21 != 0) {
    piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    do {
      if (*(long *)(piVar23 + -2) == *(long *)puVar8) {
        puVar11 = (undefined8 *)(lVar18 + (long)*piVar23 * 0x10 + 0x138);
        goto LAB_07f2dfdc;
      }
      uVar21 = uVar21 - 1;
      piVar23 = piVar23 + 4;
    } while (uVar21 != 0);
  }
  puVar11 = (undefined8 *)FUN_03d8f370(plVar14,*(long *)puVar8,0);
LAB_07f2dfdc:
  iVar9 = (*(code *)*puVar11)(plVar14,puVar11[1]);
  lStack_70 = lStack_68;
  if (3 < iVar9) {
    lVar18 = *plVar14;
    uVar21 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar21 != 0) {
      piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == *(long *)puVar5) {
          puVar11 = (undefined8 *)(lVar18 + (long)*piVar23 * 0x10 + 0x138);
          goto LAB_07f2e044;
        }
        uVar21 = uVar21 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar21 != 0);
    }
    puVar11 = (undefined8 *)FUN_03d8f370(plVar14,*(long *)puVar5,0);
LAB_07f2e044:
    lVar18 = (*(code *)*puVar11)(plVar14,3,puVar11[1]);
    if (lVar18 == 0) goto LAB_07f2ea00;
    lStack_70 = FUN_07f2b2b0();
  }
  if (lVar16 == 0) goto LAB_07f2ea00;
  if (*(char *)(lVar16 + 0x50) == '\0') {
    uVar15 = *(undefined8 *)(param_1 + 0x18);
    uVar24 = *(undefined8 *)(lVar16 + 0x10);
    uVar2 = *(undefined4 *)(lVar16 + 0x28);
    uVar1 = *(undefined4 *)(lVar16 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_0925f078 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar18 = FUN_07f1bd14(uVar15,uVar24,uVar2,uVar1,1,0);
    uVar15 = FUN_07f1bf98(*(undefined8 *)(param_1 + 0x18),lVar18,*(undefined4 *)(lVar16 + 0x28),0,
                          lVar16,*(undefined4 *)(lVar16 + 0x18),0);
    if ((lVar18 == 0) || (lVar19 = *(long *)(lVar18 + 0x48), lVar19 == 0)) goto LAB_07f2ea00;
    lVar20 = *(long *)(lVar19 + 0x10);
    lVar22 = *(long *)PTR_DAT_0925fb60;
    *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
    if (lVar20 == 0) goto LAB_07f2ea00;
    uVar4 = *(uint *)(lVar19 + 0x18);
    lVar16 = lVar18;
    if (uVar4 < *(uint *)(lVar20 + 0x18)) {
      *(uint *)(lVar19 + 0x18) = uVar4 + 1;
      puVar11 = (undefined8 *)(lVar20 + (long)(int)uVar4 * 8 + 0x20);
      *puVar11 = uVar15;
      thunk_FUN_03d1023c(puVar11);
    }
    else {
      FUN_05a39734(lVar19,uVar15,*(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70))
      ;
    }
  }
  plVar12 = (long *)thunk_FUN_03d2ee44(plVar12,*(undefined8 *)PTR_DAT_091adb18);
  if (plVar12 == (long *)0x0) {
    if (*(int *)(*(long *)PTR_StringLiteral_52275_0925ea90 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    plVar12 = (long *)FUN_067ac92c(*(undefined8 *)PTR_DAT_0925fb50);
    lVar18 = *plVar13;
    uVar21 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar21 != 0) {
      piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == *(long *)puVar7) {
          puVar11 = (undefined8 *)(lVar18 + (long)*piVar23 * 0x10 + 0x138);
          goto Unity_Netcode_Components_NetworkTransform_NetworkTransformState__GetRotation;
        }
        uVar21 = uVar21 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar21 != 0);
    }
    puVar11 = (undefined8 *)FUN_03d8f370(plVar13,*(long *)puVar7,0);
Unity_Netcode_Components_NetworkTransform_NetworkTransformState__GetRotation:
    plVar13 = (long *)(*(code *)*puVar11)(plVar13,puVar11[1]);
    puVar5 = PTR_DAT_091b1b70;
    puVar8 = PTR_DAT_091a1508;
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    do {
      lVar19 = *plVar13;
      lVar18 = *(long *)puVar8;
      uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar21 != 0) {
        piVar23 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == lVar18) {
            puVar11 = (undefined8 *)(lVar19 + (long)*piVar23 * 0x10 + 0x138);
            goto LAB_07f2e898;
          }
          uVar21 = uVar21 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar21 != 0);
      }
      puVar11 = (undefined8 *)FUN_03d8f370(plVar13,lVar18,0);
LAB_07f2e898:
      uVar21 = (*(code *)*puVar11)(plVar13,puVar11[1]);
      puVar6 = PTR_DAT_091a14e0;
      if ((uVar21 & 1) == 0) {
        plVar13 = (long *)thunk_FUN_03d2ee44(plVar13,*(undefined8 *)PTR_DAT_091a14e0);
        plStack_78 = plVar12;
        if (plVar13 == (long *)0x0) goto LAB_07f2e174;
        lVar18 = *plVar13;
        uVar21 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar21 == 0) goto LAB_07f2e9b8;
        piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        goto LAB_07f2e9a0;
      }
      lVar19 = *plVar13;
      lVar18 = *(long *)puVar8;
      uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar21 != 0) {
        piVar23 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == lVar18) {
            puVar11 = (undefined8 *)(lVar19 + (long)(*piVar23 + 1) * 0x10 + 0x138);
            goto LAB_07f2e8f8;
          }
          uVar21 = uVar21 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar21 != 0);
      }
      puVar11 = (undefined8 *)FUN_03d8f370(plVar13,lVar18,1);
LAB_07f2e8f8:
      uVar15 = (*(code *)*puVar11)(plVar13,puVar11[1]);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar18 = plVar12[2];
      lVar19 = *(long *)puVar5;
      *(int *)((long)plVar12 + 0x1c) = *(int *)((long)plVar12 + 0x1c) + 1;
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      uVar4 = *(uint *)(plVar12 + 3);
      if (uVar4 < *(uint *)(lVar18 + 0x18)) {
        *(uint *)(plVar12 + 3) = uVar4 + 1;
        *(undefined8 *)(lVar18 + (long)(int)uVar4 * 8 + 0x20) = uVar15;
        thunk_FUN_03d1023c();
      }
      else {
        FUN_05a39734(plVar12,uVar15,
                     *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
      }
    } while( true );
  }
  plStack_78 = (long *)0x0;
  goto LAB_07f2e174;
LAB_07f2e704:
  plVar12 = (long *)thunk_FUN_03d2ee44(plVar13,*(undefined8 *)PTR_DAT_091a14e0);
  if (plVar12 != (long *)0x0) {
    lVar16 = *plVar12;
    uVar21 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar21 != 0) {
      piVar23 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == *(long *)puVar5) {
          puVar11 = (undefined8 *)(lVar16 + (long)*piVar23 * 0x10 + 0x138);
          goto 
          Unity_Netcode_Components_NetworkTransform_NetworkTransformState__get_LastSerializedSize;
        }
        uVar21 = uVar21 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar21 != 0);
    }
    puVar11 = (undefined8 *)FUN_03d8f370(plVar12,*(long *)puVar5,0);
Unity_Netcode_Components_NetworkTransform_NetworkTransformState__get_LastSerializedSize:
    (*(code *)*puVar11)(plVar12,puVar11[1]);
  }
  if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  if (cRam000000000984ea87 == '\0') {
    FUN_03d2d2b0(PTR_DAT_0925efa8);
    cRam000000000984ea87 = '\x01';
  }
  lVar16 = *(long *)puVar8;
  if (*(int *)(lVar16 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar16 = *(long *)puVar8;
  }
  **(undefined4 **)(lVar16 + 0xb8) = uVar2;
  if (plStack_78 != (long *)0x0) {
    if (*(int *)(*(long *)PTR_StringLiteral_52275_0925ea90 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_067aca6c(plStack_78,*(undefined8 *)PTR_DAT_0925fb58);
  }
  return 1;
  while( true ) {
    uVar21 = uVar21 - 1;
    piVar23 = piVar23 + 4;
    if (uVar21 == 0) break;
LAB_07f2e9a0:
    if (*(long *)(piVar23 + -2) == *(long *)puVar6) {
      puVar11 = (undefined8 *)(lVar18 + (long)*piVar23 * 0x10 + 0x138);
      goto LAB_07f2e9d4;
    }
  }
LAB_07f2e9b8:
  puVar11 = (undefined8 *)FUN_03d8f370(plVar13,*(long *)puVar6,0);
LAB_07f2e9d4:
  (*(code *)*puVar11)(plVar13,puVar11[1]);
LAB_07f2e174:
  puVar8 = PTR_DAT_0925efa8;
  if (*(int *)(*(long *)PTR_DAT_0925efa8 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  if (cRam000000000984ea86 == '\0') {
    FUN_03d2d2b0(PTR_DAT_0925efa8);
    cRam000000000984ea86 = '\x01';
  }
  lVar18 = *(long *)puVar8;
  if (*(int *)(lVar18 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar18 = *(long *)puVar8;
  }
  uVar2 = **(undefined4 **)(lVar18 + 0xb8);
  if (cRam000000000984ea87 == '\0') {
    FUN_03d2d2b0(puVar8);
    lVar18 = *(long *)puVar8;
    cRam000000000984ea87 = '\x01';
  }
  if (*(int *)(lVar18 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar18 = *(long *)puVar8;
  }
  **(undefined4 **)(lVar18 + 0xb8) = 0xffffffff;
  if (plVar12 != (long *)0x0) {
    lVar18 = *plVar12;
    uVar21 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar21 != 0) {
      piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == *(long *)puVar7) {
          puVar11 = (undefined8 *)(lVar18 + (long)*piVar23 * 0x10 + 0x138);
          goto LAB_07f2e2c0;
        }
        uVar21 = uVar21 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar21 != 0);
    }
    puVar11 = (undefined8 *)FUN_03d8f370(plVar12,*(long *)puVar7,0);
LAB_07f2e2c0:
    plVar13 = (long *)(*(code *)*puVar11)(plVar12,puVar11[1]);
    puVar7 = PTR_DAT_091a1508;
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    do {
      lVar19 = *plVar13;
      lVar18 = *(long *)puVar7;
      uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar21 != 0) {
        piVar23 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == lVar18) {
            puVar11 = (undefined8 *)(lVar19 + (long)*piVar23 * 0x10 + 0x138);
            goto LAB_07f2e330;
          }
          uVar21 = uVar21 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar21 != 0);
      }
      puVar11 = (undefined8 *)FUN_03d8f370(plVar13,lVar18,0);
LAB_07f2e330:
      uVar21 = (*(code *)*puVar11)(plVar13,puVar11[1]);
      puVar5 = PTR_DAT_091a14e0;
      if ((uVar21 & 1) == 0) goto LAB_07f2e704;
      lVar19 = *plVar13;
      lVar18 = *(long *)puVar7;
      uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar21 != 0) {
        piVar23 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == lVar18) {
            puVar11 = (undefined8 *)(lVar19 + (long)(*piVar23 + 1) * 0x10 + 0x138);
            goto LAB_07f2e390;
          }
          uVar21 = uVar21 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar21 != 0);
      }
      puVar11 = (undefined8 *)FUN_03d8f370(plVar13,lVar18,1);
LAB_07f2e390:
      uVar15 = (*(code *)*puVar11)(plVar13,puVar11[1]);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      if (cRam000000000984ea86 == '\0') {
        FUN_03d2d2b0(puVar8);
        cRam000000000984ea86 = '\x01';
      }
      lVar18 = *(long *)puVar8;
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_03db619c(lVar18);
        lVar18 = *(long *)puVar8;
      }
      iVar9 = **(int **)(lVar18 + 0xb8);
      if (cRam000000000984ea87 == '\0') {
        FUN_03d2d2b0(puVar8);
        lVar18 = *(long *)puVar8;
        cRam000000000984ea87 = '\x01';
      }
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_03db619c(lVar18);
        lVar18 = *(long *)puVar8;
      }
      **(int **)(lVar18 + 0xb8) = iVar9 + 1;
      if (lVar17 != 0) {
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_03db619c(lVar18);
        }
        if (cRam000000000984ea86 == '\0') {
          FUN_03d2d2b0(puVar8);
          cRam000000000984ea86 = '\x01';
        }
        lVar18 = *(long *)puVar8;
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_03db619c(lVar18);
          lVar18 = *(long *)puVar8;
        }
        if (**(int **)(lVar18 + 0xb8) != 0) {
          if (*(int *)(lVar18 + 0xe0) == 0) {
            thunk_FUN_03db619c(lVar18);
          }
          if (cRam000000000984ea86 == '\0') {
            FUN_03d2d2b0(puVar8);
            cRam000000000984ea86 = '\x01';
          }
          lVar18 = *(long *)puVar8;
          if (*(int *)(lVar18 + 0xe0) == 0) {
            thunk_FUN_03db619c();
            lVar18 = *(long *)puVar8;
          }
          lVar19 = *plVar12;
          iVar9 = **(int **)(lVar18 + 0xb8);
          uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar21 != 0) {
            piVar23 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_091adb18) {
                puVar11 = (undefined8 *)(lVar19 + (long)(*piVar23 + 1) * 0x10 + 0x138);
                goto LAB_07f2e508;
              }
              uVar21 = uVar21 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar21 != 0);
          }
          puVar11 = (undefined8 *)FUN_03d8f370(plVar12,*(long *)PTR_DAT_091adb18,1);
LAB_07f2e508:
          iVar10 = (*(code *)*puVar11)(plVar12,puVar11[1]);
          if (iVar9 < iVar10 + -1) {
            lVar18 = *param_2;
            uVar21 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar21 != 0) {
              piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_0925fa80) {
                  puVar11 = (undefined8 *)(lVar18 + (long)(*piVar23 + 6) * 0x10 + 0x138);
                  goto LAB_07f2e63c;
                }
                uVar21 = uVar21 - 1;
                piVar23 = piVar23 + 4;
              } while (uVar21 != 0);
            }
            puVar11 = (undefined8 *)FUN_03d8f370(param_2,*(long *)PTR_DAT_0925fa80,6);
LAB_07f2e63c:
            (*(code *)*puVar11)(param_2,lVar17,puVar11[1]);
          }
          else {
            if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
              thunk_FUN_03db619c();
            }
            if (cRam000000000984ea86 == '\0') {
              FUN_03d2d2b0(puVar8);
              cRam000000000984ea86 = '\x01';
            }
            lVar18 = *(long *)puVar8;
            if (*(int *)(lVar18 + 0xe0) == 0) {
              thunk_FUN_03db619c();
              lVar18 = *(long *)puVar8;
            }
            lVar20 = *param_2;
            lVar19 = *(long *)PTR_DAT_0925fa80;
            uVar3 = *(ushort *)(lVar20 + 0x12e);
            uVar21 = (ulong)uVar3;
            if (**(int **)(lVar18 + 0xb8) == 1) {
              if (uVar3 != 0) {
                piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar23 + -2) == lVar19) {
                    puVar11 = (undefined8 *)(lVar20 + (long)(*piVar23 + 6) * 0x10 + 0x138);
                    goto LAB_07f2e660;
                  }
                  uVar21 = uVar21 - 1;
                  piVar23 = piVar23 + 4;
                } while (uVar21 != 0);
              }
              puVar11 = (undefined8 *)FUN_03d8f370(param_2,lVar19,6);
LAB_07f2e660:
              (*(code *)*puVar11)(param_2,lStack_70,puVar11[1]);
            }
            else {
              if (uVar3 != 0) {
                piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar23 + -2) == lVar19) {
                    puVar11 = (undefined8 *)(lVar20 + (long)(*piVar23 + 6) * 0x10 + 0x138);
                    goto LAB_07f2e684;
                  }
                  uVar21 = uVar21 - 1;
                  piVar23 = piVar23 + 4;
                } while (uVar21 != 0);
              }
              puVar11 = (undefined8 *)FUN_03d8f370(param_2,lVar19,6);
LAB_07f2e684:
              (*(code *)*puVar11)(param_2,lStack_68,puVar11[1]);
            }
          }
        }
      }
      lVar18 = *param_2;
      uVar21 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar21 != 0) {
        piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_0925fa80) {
            puVar11 = (undefined8 *)(lVar18 + (long)(*piVar23 + 8) * 0x10 + 0x138);
            goto LAB_07f2e6ec;
          }
          uVar21 = uVar21 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar21 != 0);
      }
      puVar11 = (undefined8 *)FUN_03d8f370(param_2,*(long *)PTR_DAT_0925fa80,8);
LAB_07f2e6ec:
      (*(code *)*puVar11)(param_2,lVar16,uVar15,puVar11[1]);
    } while( true );
  }
LAB_07f2ea00:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


