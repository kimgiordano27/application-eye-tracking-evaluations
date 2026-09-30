/*
FUNCTION_NAME: Unity.Netcode.Components.HalfVector4$$SerializeRead
ENTRY_POINT: 07e1dfbc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07e1dee4) */
/* WARNING: Removing unreachable block (ram,0x07e1e140) */
/* WARNING: Removing unreachable block (ram,0x07e1e148) */
/* WARNING: Removing unreachable block (ram,0x07e1e16c) */
/* WARNING: Removing unreachable block (ram,0x07e1e17c) */

undefined4
Unity_Netcode_Components_HalfVector4__SerializeRead(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong in_x9;
  int *piVar15;
  int *in_x10;
  long in_x11;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x28;
  undefined4 uStack0000000000000004;
  
  do {
    if (in_x11 == param_3) {
      puVar9 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_07e1dfec;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar9 = (undefined8 *)FUN_03cf1348();
LAB_07e1dfec:
                    /* try { // try from 07e1dff0 to 07f1dff7 has its CatchHandler @ 07e1e104 */
        uVar10 = (*(code *)*puVar9)();
        puVar6 = PTR_DAT_08e6a288;
        if ((uVar10 & 1) == 0) {
          plVar12 = (long *)thunk_FUN_03cf5138();
          if (plVar12 == (long *)0x0) goto LAB_07e1e134;
          lVar14 = *plVar12;
          uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar10 == 0) goto LAB_07e1e10c;
          piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          goto LAB_07e1e0f4;
        }
        lVar14 = *unaff_x25;
        uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar10 != 0) {
          piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
                    /* try { // try from 07e1e018 to 07f1e01f has its CatchHandler @ 07e1e0f8 */
            if (*(long *)(piVar15 + -2) == *unaff_x21) {
              puVar9 = (undefined8 *)(lVar14 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_07e1e04c;
            }
            uVar10 = uVar10 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar10 != 0);
        }
        puVar9 = (undefined8 *)FUN_03cf1348();
LAB_07e1e04c:
        uVar11 = (*(code *)*puVar9)();
        if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar14 = unaff_x24[2];
        *(int *)((long)unaff_x24 + 0x1c) = *(int *)((long)unaff_x24 + 0x1c) + 1;
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        uVar4 = *(uint *)(unaff_x24 + 3);
        if (uVar4 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(unaff_x24 + 3) = uVar4 + 1;
          *(undefined8 *)(lVar14 + (long)(int)uVar4 * 8 + 0x20) = uVar11;
          thunk_FUN_03d233cc();
        }
        else {
          FUN_05212cf4();
        }
        param_1 = *unaff_x25;
        param_3 = *unaff_x21;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
                    /* try { // try from 07e1dfb4 to 07f1dfeb has its CatchHandler @ 07e1e118 */
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar15 = piVar15 + 4;
    if (uVar10 == 0) break;
LAB_07e1e0f4:
    if (*(long *)(piVar15 + -2) == *(long *)puVar6) {
      puVar9 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_07e1e128;
    }
  }
LAB_07e1e10c:
  puVar9 = (undefined8 *)FUN_03cf1348(plVar12,*(long *)puVar6,0);
LAB_07e1e128:
  (*(code *)*puVar9)(plVar12,puVar9[1]);
LAB_07e1e134:
  puVar6 = PTR_DAT_08ef24f0;
  if (*(int *)(*(long *)PTR_DAT_08ef24f0 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  if (DAT_09427755 == '\0') {
    FUN_03c8f898(PTR_DAT_08ef24f0);
    DAT_09427755 = '\x01';
  }
  lVar14 = *(long *)puVar6;
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar14 = *(long *)puVar6;
  }
  uVar1 = **(undefined4 **)(lVar14 + 0xb8);
  if (DAT_09427756 == '\0') {
    FUN_03c8f898(puVar6);
    lVar14 = *(long *)puVar6;
    DAT_09427756 = '\x01';
  }
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar14 = *(long *)puVar6;
  }
  **(undefined4 **)(lVar14 + 0xb8) = 0xffffffff;
  if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar14 = *unaff_x24;
  uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar10 != 0) {
    piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *unaff_x28) {
        puVar9 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_07e1da14;
      }
      uVar10 = uVar10 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar10 != 0);
  }
  puVar9 = (undefined8 *)FUN_03cf1348();
LAB_07e1da14:
  uStack0000000000000004 = uVar1;
  plVar12 = (long *)(*(code *)*puVar9)();
  puVar7 = PTR_DAT_08e6a290;
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  do {
    lVar13 = *plVar12;
    lVar14 = *(long *)puVar7;
    uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar10 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar14) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_07e1da84;
        }
        uVar10 = uVar10 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar10 != 0);
    }
    puVar9 = (undefined8 *)FUN_03cf1348(plVar12,lVar14,0);
LAB_07e1da84:
    uVar10 = (*(code *)*puVar9)(plVar12,puVar9[1]);
    puVar5 = PTR_DAT_08e6a288;
    if ((uVar10 & 1) == 0) break;
    lVar13 = *plVar12;
    lVar14 = *(long *)puVar7;
    uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar10 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar14) {
          puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_07e1dae4;
        }
        uVar10 = uVar10 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar10 != 0);
    }
    puVar9 = (undefined8 *)FUN_03cf1348(plVar12,lVar14,1);
LAB_07e1dae4:
    (*(code *)*puVar9)(plVar12,puVar9[1]);
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    if (DAT_09427755 == '\0') {
      FUN_03c8f898(puVar6);
      DAT_09427755 = '\x01';
    }
    lVar14 = *(long *)puVar6;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_03cd7500(lVar14);
      lVar14 = *(long *)puVar6;
    }
    iVar2 = **(int **)(lVar14 + 0xb8);
    if (DAT_09427756 == '\0') {
      FUN_03c8f898(puVar6);
      lVar14 = *(long *)puVar6;
      DAT_09427756 = '\x01';
    }
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_03cd7500(lVar14);
      lVar14 = *(long *)puVar6;
    }
    **(int **)(lVar14 + 0xb8) = iVar2 + 1;
    if (unaff_x20 != 0) {
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_03cd7500(lVar14);
      }
      if (DAT_09427755 == '\0') {
        FUN_03c8f898(puVar6);
        DAT_09427755 = '\x01';
      }
      lVar14 = *(long *)puVar6;
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_03cd7500(lVar14);
        lVar14 = *(long *)puVar6;
      }
      if (**(int **)(lVar14 + 0xb8) != 0) {
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_03cd7500(lVar14);
        }
        if (DAT_09427755 == '\0') {
          FUN_03c8f898(puVar6);
          DAT_09427755 = '\x01';
        }
        lVar14 = *(long *)puVar6;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
          lVar14 = *(long *)puVar6;
        }
        lVar13 = *unaff_x24;
        iVar2 = **(int **)(lVar14 + 0xb8);
        uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar10 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_08e80c38) {
              puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_07e1dc5c;
            }
            uVar10 = uVar10 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar10 != 0);
        }
        puVar9 = (undefined8 *)FUN_03cf1348();
LAB_07e1dc5c:
        iVar8 = (*(code *)*puVar9)();
        if (iVar2 < iVar8 + -1) {
          lVar14 = *unaff_x19;
          uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar10 != 0) {
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_08ef2fd0) {
                puVar9 = (undefined8 *)(lVar14 + (long)(*piVar15 + 6) * 0x10 + 0x138);
                goto LAB_07e1dd90;
              }
              uVar10 = uVar10 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar10 != 0);
          }
          puVar9 = (undefined8 *)FUN_03cf1348();
LAB_07e1dd90:
          (*(code *)*puVar9)();
        }
        else {
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          if (DAT_09427755 == '\0') {
            FUN_03c8f898(puVar6);
            DAT_09427755 = '\x01';
          }
          lVar14 = *(long *)puVar6;
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
            lVar14 = *(long *)puVar6;
          }
          lVar13 = *unaff_x19;
          uVar3 = *(ushort *)(lVar13 + 0x12e);
          uVar10 = (ulong)uVar3;
          if (**(int **)(lVar14 + 0xb8) == 1) {
            if (uVar3 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_08ef2fd0) {
                  puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 6) * 0x10 + 0x138);
                  goto LAB_07e1ddb4;
                }
                uVar10 = uVar10 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar10 != 0);
            }
            puVar9 = (undefined8 *)FUN_03cf1348();
LAB_07e1ddb4:
            (*(code *)*puVar9)();
          }
          else {
            if (uVar3 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_08ef2fd0) {
                  puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 6) * 0x10 + 0x138);
                  goto LAB_07e1ddd8;
                }
                uVar10 = uVar10 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar10 != 0);
            }
            puVar9 = (undefined8 *)FUN_03cf1348();
LAB_07e1ddd8:
            (*(code *)*puVar9)();
          }
        }
      }
    }
    lVar14 = *unaff_x19;
    uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar10 != 0) {
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_08ef2fd0) {
          puVar9 = (undefined8 *)(lVar14 + (long)(*piVar15 + 8) * 0x10 + 0x138);
          goto LAB_07e1de40;
        }
        uVar10 = uVar10 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar10 != 0);
    }
    puVar9 = (undefined8 *)FUN_03cf1348();
LAB_07e1de40:
    (*(code *)*puVar9)();
  } while( true );
  plVar12 = (long *)thunk_FUN_03cf5138(plVar12,*(undefined8 *)PTR_DAT_08e6a288);
  if (plVar12 != (long *)0x0) {
    lVar14 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar10 != 0) {
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
          puVar9 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_07e1dec8;
        }
        uVar10 = uVar10 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar10 != 0);
    }
    puVar9 = (undefined8 *)FUN_03cf1348(plVar12,*(long *)puVar5,0);
LAB_07e1dec8:
    (*(code *)*puVar9)(plVar12,puVar9[1]);
  }
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar1 = uStack0000000000000004;
  if (DAT_09427756 == '\0') {
    FUN_03c8f898(PTR_DAT_08ef24f0);
    DAT_09427756 = '\x01';
  }
  lVar14 = *(long *)puVar6;
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar14 = *(long *)puVar6;
  }
  **(undefined4 **)(lVar14 + 0xb8) = uVar1;
  if (unaff_x24 != (long *)0x0) {
    if (*(int *)(*(long *)PTR_DAT_08ef1fd0 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_0662a33c(unaff_x24,*(undefined8 *)PTR_DAT_08ef30a8);
  }
  return 1;
}


