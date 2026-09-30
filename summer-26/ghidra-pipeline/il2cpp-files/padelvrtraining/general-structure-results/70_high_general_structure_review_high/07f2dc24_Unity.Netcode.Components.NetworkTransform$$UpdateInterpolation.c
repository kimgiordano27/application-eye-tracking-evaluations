/*
FUNCTION_NAME: Unity.Netcode.Components.NetworkTransform$$UpdateInterpolation
ENTRY_POINT: 07f2dc24
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
/* WARNING: Removing unreachable block (ram,0x07f2ea18) */
/* WARNING: Removing unreachable block (ram,0x07f2ea28) */
/* WARNING: Removing unreachable block (ram,0x07f2e9ec) */

undefined4 Unity_Netcode_Components_NetworkTransform__UpdateInterpolation(code *param_1)

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
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  int *piVar20;
  long *unaff_x19;
  long unaff_x23;
  long *unaff_x28;
  undefined8 uVar21;
  undefined4 uStack0000000000000004;
  long *plStack0000000000000008;
  
  lVar10 = (*param_1)();
  lVar16 = *unaff_x19;
  uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar18 != 0) {
    piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0925fa80) {
        puVar11 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
        goto LAB_07f2dc80;
      }
      uVar18 = uVar18 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar18 != 0);
  }
  puVar11 = (undefined8 *)FUN_03d8f370();
LAB_07f2dc80:
  plVar12 = (long *)(*(code *)*puVar11)();
  plVar13 = (long *)thunk_FUN_03d2ee44(plVar12,*unaff_x28);
  if ((plVar13 == (long *)0x0) ||
     ((plVar12 != (long *)0x0 && (*plVar12 == *(long *)PTR_DAT_091a13f8)))) {
    return 0;
  }
  lVar16 = thunk_FUN_03d2ee44(plVar12,*(undefined8 *)PTR_DAT_091b4670);
  if (lVar10 == 0) {
    return 0;
  }
  if (lVar16 != 0) {
    return 0;
  }
  plVar14 = (long *)FUN_07f2ebe4(lVar10,0x7c,4);
  puVar7 = PTR_DAT_0925fa78;
  if (plVar14 == (long *)0x0) goto LAB_07f2ea00;
  lVar10 = *plVar14;
  uVar18 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar18 != 0) {
    piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0925fa78) {
        puVar11 = (undefined8 *)(lVar10 + (long)*piVar20 * 0x10 + 0x138);
        goto LAB_07f2dd48;
      }
      uVar18 = uVar18 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar18 != 0);
  }
  puVar11 = (undefined8 *)FUN_03d8f370(plVar14,*(long *)PTR_DAT_0925fa78,0);
LAB_07f2dd48:
  iVar8 = (*(code *)*puVar11)(plVar14,puVar11[1]);
  puVar6 = PTR_DAT_0925fa88;
  if (iVar8 < 2) {
    return 0;
  }
  lVar10 = *plVar14;
  uVar18 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar18 != 0) {
    piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0925fa88) {
        puVar11 = (undefined8 *)(lVar10 + (long)*piVar20 * 0x10 + 0x138);
        goto LAB_07f2ddd8;
      }
      uVar18 = uVar18 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar18 != 0);
  }
  puVar11 = (undefined8 *)FUN_03d8f370(plVar14,*(long *)PTR_DAT_0925fa88,0);
LAB_07f2ddd8:
  lVar10 = (*(code *)*puVar11)(plVar14,0,puVar11[1]);
  lVar16 = *plVar14;
  uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar18 != 0) {
    piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *(long *)puVar7) {
        puVar11 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
        goto LAB_07f2de38;
      }
      uVar18 = uVar18 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar18 != 0);
  }
  puVar11 = (undefined8 *)FUN_03d8f370(plVar14,*(long *)puVar7,0);
LAB_07f2de38:
  iVar8 = (*(code *)*puVar11)(plVar14,puVar11[1]);
  if (iVar8 < 2) {
    lVar16 = *(long *)PTR_DAT_091a0be8;
  }
  else {
    lVar16 = *plVar14;
    uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar18 != 0) {
      piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar6) {
          puVar11 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_07f2dea8;
        }
        uVar18 = uVar18 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar18 != 0);
    }
    puVar11 = (undefined8 *)FUN_03d8f370(plVar14,*(long *)puVar6,0);
LAB_07f2dea8:
    lVar16 = (*(code *)*puVar11)(plVar14,1,puVar11[1]);
    if (lVar16 == 0) goto LAB_07f2ea00;
    lVar16 = FUN_07f2b2b0();
  }
  lVar17 = *plVar14;
  uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar18 != 0) {
    piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *(long *)puVar7) {
        puVar11 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
        goto LAB_07f2df10;
      }
      uVar18 = uVar18 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar18 != 0);
  }
  puVar11 = (undefined8 *)FUN_03d8f370(plVar14,*(long *)puVar7,0);
LAB_07f2df10:
  iVar8 = (*(code *)*puVar11)(plVar14,puVar11[1]);
  if (2 < iVar8) {
    lVar17 = *plVar14;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar18 != 0) {
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar6) {
          puVar11 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_07f2df74;
        }
        uVar18 = uVar18 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar18 != 0);
    }
    puVar11 = (undefined8 *)FUN_03d8f370(plVar14,*(long *)puVar6,0);
LAB_07f2df74:
    lVar17 = (*(code *)*puVar11)(plVar14,2,puVar11[1]);
    if (lVar17 == 0) goto LAB_07f2ea00;
    FUN_07f2b2b0();
  }
  lVar17 = *plVar14;
  uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar18 != 0) {
    piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *(long *)puVar7) {
        puVar11 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
        goto LAB_07f2dfdc;
      }
      uVar18 = uVar18 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar18 != 0);
  }
  puVar11 = (undefined8 *)FUN_03d8f370(plVar14,*(long *)puVar7,0);
LAB_07f2dfdc:
  iVar8 = (*(code *)*puVar11)(plVar14,puVar11[1]);
  if (3 < iVar8) {
    lVar17 = *plVar14;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar18 != 0) {
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar6) {
          puVar11 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_07f2e044;
        }
        uVar18 = uVar18 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar18 != 0);
    }
    puVar11 = (undefined8 *)FUN_03d8f370(plVar14,*(long *)puVar6,0);
LAB_07f2e044:
    lVar17 = (*(code *)*puVar11)(plVar14,3,puVar11[1]);
    if (lVar17 == 0) goto LAB_07f2ea00;
    FUN_07f2b2b0();
  }
  if (lVar10 == 0) goto LAB_07f2ea00;
  if (*(char *)(lVar10 + 0x50) == '\0') {
    uVar15 = *(undefined8 *)(unaff_x23 + 0x18);
    uVar21 = *(undefined8 *)(lVar10 + 0x10);
    uVar2 = *(undefined4 *)(lVar10 + 0x28);
    uVar1 = *(undefined4 *)(lVar10 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_0925f078 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar17 = FUN_07f1bd14(uVar15,uVar21,uVar2,uVar1,1,0);
    uVar15 = FUN_07f1bf98(*(undefined8 *)(unaff_x23 + 0x18),lVar17,*(undefined4 *)(lVar10 + 0x28),0,
                          lVar10,*(undefined4 *)(lVar10 + 0x18),0);
    if ((lVar17 == 0) || (lVar10 = *(long *)(lVar17 + 0x48), lVar10 == 0)) goto LAB_07f2ea00;
    lVar17 = *(long *)(lVar10 + 0x10);
    lVar19 = *(long *)PTR_DAT_0925fb60;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar17 == 0) goto LAB_07f2ea00;
    uVar4 = *(uint *)(lVar10 + 0x18);
    if (uVar4 < *(uint *)(lVar17 + 0x18)) {
      *(uint *)(lVar10 + 0x18) = uVar4 + 1;
      puVar11 = (undefined8 *)(lVar17 + (long)(int)uVar4 * 8 + 0x20);
      *puVar11 = uVar15;
      thunk_FUN_03d1023c(puVar11);
    }
    else {
      FUN_05a39734(lVar10,uVar15,*(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70))
      ;
    }
  }
  plVar12 = (long *)thunk_FUN_03d2ee44(plVar12,*(undefined8 *)PTR_DAT_091adb18);
  if (plVar12 == (long *)0x0) {
    if (*(int *)(*(long *)PTR_StringLiteral_52275_0925ea90 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    plVar12 = (long *)FUN_067ac92c(*(undefined8 *)PTR_DAT_0925fb50);
    lVar10 = *plVar13;
    uVar18 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar18 != 0) {
      piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *unaff_x28) {
          puVar11 = (undefined8 *)(lVar10 + (long)*piVar20 * 0x10 + 0x138);
          goto Unity_Netcode_Components_NetworkTransform_NetworkTransformState__GetRotation;
        }
        uVar18 = uVar18 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar18 != 0);
    }
    puVar11 = (undefined8 *)FUN_03d8f370(plVar13,*unaff_x28,0);
Unity_Netcode_Components_NetworkTransform_NetworkTransformState__GetRotation:
    plVar13 = (long *)(*(code *)*puVar11)(plVar13,puVar11[1]);
    puVar6 = PTR_DAT_091b1b70;
    puVar7 = PTR_DAT_091a1508;
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    do {
      lVar17 = *plVar13;
      lVar10 = *(long *)puVar7;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar18 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == lVar10) {
            puVar11 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_07f2e898;
          }
          uVar18 = uVar18 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar18 != 0);
      }
      puVar11 = (undefined8 *)FUN_03d8f370(plVar13,lVar10,0);
LAB_07f2e898:
      uVar18 = (*(code *)*puVar11)(plVar13,puVar11[1]);
      puVar5 = PTR_DAT_091a14e0;
      if ((uVar18 & 1) == 0) {
        plVar13 = (long *)thunk_FUN_03d2ee44(plVar13,*(undefined8 *)PTR_DAT_091a14e0);
        plStack0000000000000008 = plVar12;
        if (plVar13 == (long *)0x0) goto LAB_07f2e174;
        lVar10 = *plVar13;
        uVar18 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar18 == 0) goto LAB_07f2e9b8;
        piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_07f2e9a0;
      }
      lVar17 = *plVar13;
      lVar10 = *(long *)puVar7;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar18 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == lVar10) {
            puVar11 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_07f2e8f8;
          }
          uVar18 = uVar18 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar18 != 0);
      }
      puVar11 = (undefined8 *)FUN_03d8f370(plVar13,lVar10,1);
LAB_07f2e8f8:
      uVar15 = (*(code *)*puVar11)(plVar13,puVar11[1]);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar10 = plVar12[2];
      lVar17 = *(long *)puVar6;
      *(int *)((long)plVar12 + 0x1c) = *(int *)((long)plVar12 + 0x1c) + 1;
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      uVar4 = *(uint *)(plVar12 + 3);
      if (uVar4 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(plVar12 + 3) = uVar4 + 1;
        *(undefined8 *)(lVar10 + (long)(int)uVar4 * 8 + 0x20) = uVar15;
        thunk_FUN_03d1023c();
      }
      else {
        FUN_05a39734(plVar12,uVar15,
                     *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
      }
    } while( true );
  }
  plStack0000000000000008 = (long *)0x0;
  goto LAB_07f2e174;
LAB_07f2e704:
  plVar12 = (long *)thunk_FUN_03d2ee44(plVar13,*(undefined8 *)PTR_DAT_091a14e0);
  if (plVar12 != (long *)0x0) {
    lVar10 = *plVar12;
    uVar18 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar18 != 0) {
      piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar5) {
          puVar11 = (undefined8 *)(lVar10 + (long)*piVar20 * 0x10 + 0x138);
          goto 
          Unity_Netcode_Components_NetworkTransform_NetworkTransformState__get_LastSerializedSize;
        }
        uVar18 = uVar18 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar18 != 0);
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
    uVar18 = uVar18 - 1;
    piVar20 = piVar20 + 4;
    if (uVar18 == 0) break;
LAB_07f2e9a0:
    if (*(long *)(piVar20 + -2) == *(long *)puVar5) {
      puVar11 = (undefined8 *)(lVar10 + (long)*piVar20 * 0x10 + 0x138);
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
    uVar18 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar18 != 0) {
      piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *unaff_x28) {
          puVar11 = (undefined8 *)(lVar10 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_07f2e2c0;
        }
        uVar18 = uVar18 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar18 != 0);
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
      lVar17 = *plVar13;
      lVar10 = *(long *)puVar6;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar18 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == lVar10) {
            puVar11 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_07f2e330;
          }
          uVar18 = uVar18 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar18 != 0);
      }
      puVar11 = (undefined8 *)FUN_03d8f370(plVar13,lVar10,0);
LAB_07f2e330:
      uVar18 = (*(code *)*puVar11)(plVar13,puVar11[1]);
      puVar5 = PTR_DAT_091a14e0;
      if ((uVar18 & 1) == 0) goto LAB_07f2e704;
      lVar17 = *plVar13;
      lVar10 = *(long *)puVar6;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar18 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == lVar10) {
            puVar11 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_07f2e390;
          }
          uVar18 = uVar18 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar18 != 0);
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
      if (lVar16 != 0) {
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
          lVar17 = *plVar12;
          iVar8 = **(int **)(lVar10 + 0xb8);
          uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar18 != 0) {
            piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_091adb18) {
                puVar11 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                goto LAB_07f2e508;
              }
              uVar18 = uVar18 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar18 != 0);
          }
          puVar11 = (undefined8 *)FUN_03d8f370(plVar12,*(long *)PTR_DAT_091adb18,1);
LAB_07f2e508:
          iVar9 = (*(code *)*puVar11)(plVar12,puVar11[1]);
          if (iVar8 < iVar9 + -1) {
            lVar10 = *unaff_x19;
            uVar18 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar18 != 0) {
              piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0925fa80) {
                  puVar11 = (undefined8 *)(lVar10 + (long)(*piVar20 + 6) * 0x10 + 0x138);
                  goto LAB_07f2e63c;
                }
                uVar18 = uVar18 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar18 != 0);
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
            lVar17 = *unaff_x19;
            uVar3 = *(ushort *)(lVar17 + 0x12e);
            uVar18 = (ulong)uVar3;
            if (**(int **)(lVar10 + 0xb8) == 1) {
              if (uVar3 != 0) {
                piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0925fa80) {
                    puVar11 = (undefined8 *)(lVar17 + (long)(*piVar20 + 6) * 0x10 + 0x138);
                    goto LAB_07f2e660;
                  }
                  uVar18 = uVar18 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar18 != 0);
              }
              puVar11 = (undefined8 *)FUN_03d8f370();
LAB_07f2e660:
              (*(code *)*puVar11)();
            }
            else {
              if (uVar3 != 0) {
                piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0925fa80) {
                    puVar11 = (undefined8 *)(lVar17 + (long)(*piVar20 + 6) * 0x10 + 0x138);
                    goto LAB_07f2e684;
                  }
                  uVar18 = uVar18 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar18 != 0);
              }
              puVar11 = (undefined8 *)FUN_03d8f370();
LAB_07f2e684:
              (*(code *)*puVar11)();
            }
          }
        }
      }
      lVar10 = *unaff_x19;
      uVar18 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar18 != 0) {
        piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0925fa80) {
            puVar11 = (undefined8 *)(lVar10 + (long)(*piVar20 + 8) * 0x10 + 0x138);
            goto LAB_07f2e6ec;
          }
          uVar18 = uVar18 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar18 != 0);
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


