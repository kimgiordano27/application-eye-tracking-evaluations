/*
FUNCTION_NAME: Unity.Netcode.Components.HalfVector3$$SerializeWrite
ENTRY_POINT: 07e1d914
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07e1dee4) */
/* WARNING: Removing unreachable block (ram,0x07e1e16c) */

undefined4 Unity_Netcode_Components_HalfVector3__SerializeWrite(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  long *unaff_x28;
  undefined4 uStack0000000000000004;
  long in_stack_00000008;
  
  uVar1 = **(undefined4 **)(param_1 + 0xb8);
  if (DAT_09427756 == '\0') {
    FUN_03c8f898();
    param_1 = *unaff_x26;
    DAT_09427756 = '\x01';
  }
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    param_1 = *unaff_x26;
  }
  **(undefined4 **)(param_1 + 0xb8) = 0xffffffff;
  if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar9 = *unaff_x24;
  uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *unaff_x28) {
        puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_07e1da14;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_03cf1348();
LAB_07e1da14:
  uStack0000000000000004 = uVar1;
  plVar8 = (long *)(*(code *)*puVar7)();
  puVar5 = PTR_DAT_08e6a290;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  do {
    lVar10 = *plVar8;
    lVar9 = *(long *)puVar5;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_07e1da84;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_03cf1348(plVar8,lVar9,0);
LAB_07e1da84:
    uVar11 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    puVar4 = PTR_DAT_08e6a288;
    if ((uVar11 & 1) == 0) break;
    lVar10 = *plVar8;
    lVar9 = *(long *)puVar5;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_07e1dae4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_03cf1348(plVar8,lVar9,1);
LAB_07e1dae4:
    (*(code *)*puVar7)(plVar8,puVar7[1]);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    if (*(char *)(unaff_x25 + 0x755) == '\0') {
      FUN_03c8f898();
      *(undefined1 *)(unaff_x25 + 0x755) = 1;
    }
    lVar9 = *unaff_x26;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_03cd7500(lVar9);
      lVar9 = *unaff_x26;
    }
    iVar2 = **(int **)(lVar9 + 0xb8);
    if (DAT_09427756 == '\0') {
      FUN_03c8f898();
      lVar9 = *unaff_x26;
      DAT_09427756 = '\x01';
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_03cd7500(lVar9);
      lVar9 = *unaff_x26;
    }
    **(int **)(lVar9 + 0xb8) = iVar2 + 1;
    if (unaff_x20 != 0) {
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_03cd7500(lVar9);
      }
      if (*(char *)(unaff_x25 + 0x755) == '\0') {
        FUN_03c8f898();
        *(undefined1 *)(unaff_x25 + 0x755) = 1;
      }
      lVar9 = *unaff_x26;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_03cd7500(lVar9);
        lVar9 = *unaff_x26;
      }
      if (**(int **)(lVar9 + 0xb8) != 0) {
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_03cd7500(lVar9);
        }
        if (*(char *)(unaff_x25 + 0x755) == '\0') {
          FUN_03c8f898();
          *(undefined1 *)(unaff_x25 + 0x755) = 1;
        }
        lVar9 = *unaff_x26;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
          lVar9 = *unaff_x26;
        }
        lVar10 = *unaff_x24;
        iVar2 = **(int **)(lVar9 + 0xb8);
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08e80c38) {
              puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_07e1dc5c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_03cf1348();
LAB_07e1dc5c:
        iVar6 = (*(code *)*puVar7)();
        if (iVar2 < iVar6 + -1) {
          lVar9 = *unaff_x19;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08ef2fd0) {
                puVar7 = (undefined8 *)(lVar9 + (long)(*piVar12 + 6) * 0x10 + 0x138);
                goto LAB_07e1dd90;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)FUN_03cf1348();
LAB_07e1dd90:
          (*(code *)*puVar7)();
        }
        else {
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          if (*(char *)(unaff_x25 + 0x755) == '\0') {
            FUN_03c8f898();
            *(undefined1 *)(unaff_x25 + 0x755) = 1;
          }
          lVar9 = *unaff_x26;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
            lVar9 = *unaff_x26;
          }
          lVar10 = *unaff_x19;
          uVar3 = *(ushort *)(lVar10 + 0x12e);
          uVar11 = (ulong)uVar3;
          if (**(int **)(lVar9 + 0xb8) == 1) {
            if (uVar3 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08ef2fd0) {
                  puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 6) * 0x10 + 0x138);
                  goto LAB_07e1ddb4;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar7 = (undefined8 *)FUN_03cf1348();
LAB_07e1ddb4:
            (*(code *)*puVar7)();
          }
          else {
            if (uVar3 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08ef2fd0) {
                  puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 6) * 0x10 + 0x138);
                  goto LAB_07e1ddd8;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar7 = (undefined8 *)FUN_03cf1348();
LAB_07e1ddd8:
            (*(code *)*puVar7)();
          }
        }
      }
    }
    lVar9 = *unaff_x19;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08ef2fd0) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar12 + 8) * 0x10 + 0x138);
          goto LAB_07e1de40;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_03cf1348();
LAB_07e1de40:
    (*(code *)*puVar7)();
  } while( true );
  plVar8 = (long *)thunk_FUN_03cf5138(plVar8,*(undefined8 *)PTR_DAT_08e6a288);
  if (plVar8 != (long *)0x0) {
    lVar9 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_07e1dec8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_03cf1348(plVar8,*(long *)puVar4,0);
LAB_07e1dec8:
    (*(code *)*puVar7)(plVar8,puVar7[1]);
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar1 = uStack0000000000000004;
  if (DAT_09427756 == '\0') {
    FUN_03c8f898(PTR_DAT_08ef24f0);
    DAT_09427756 = '\x01';
  }
  lVar9 = *unaff_x26;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar9 = *unaff_x26;
  }
  **(undefined4 **)(lVar9 + 0xb8) = uVar1;
  if (in_stack_00000008 != 0) {
    if (*(int *)(*(long *)PTR_DAT_08ef1fd0 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_0662a33c(in_stack_00000008,*(undefined8 *)PTR_DAT_08ef30a8);
  }
  return 1;
}


