/*
FUNCTION_NAME: Unity.Netcode.Components.HalfVector3$$SerializeRead
ENTRY_POINT: 07e1da10
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07e1dee4) */
/* WARNING: Removing unreachable block (ram,0x07e1e16c) */

undefined4 Unity_Netcode_Components_HalfVector3__SerializeRead(long param_1)

{
  int iVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  long *unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  undefined4 uStack0000000000000004;
  long in_stack_00000008;
  
  uStack0000000000000004 = unaff_w21;
  plVar6 = (long *)(**(code **)(param_1 + 0x138))();
  puVar4 = PTR_DAT_08e6a290;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  do {
    lVar9 = *plVar6;
    lVar8 = *(long *)puVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_07e1da84;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_03cf1348(plVar6,lVar8,0);
LAB_07e1da84:
    uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    puVar3 = PTR_DAT_08e6a288;
    if ((uVar10 & 1) == 0) break;
    lVar9 = *plVar6;
    lVar8 = *(long *)puVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_07e1dae4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_03cf1348(plVar6,lVar8,1);
LAB_07e1dae4:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    if (*(char *)(unaff_x25 + 0x755) == '\0') {
      FUN_03c8f898();
      *(undefined1 *)(unaff_x25 + 0x755) = 1;
    }
    lVar8 = *unaff_x26;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_03cd7500(lVar8);
      lVar8 = *unaff_x26;
    }
    iVar1 = **(int **)(lVar8 + 0xb8);
    if (DAT_09427756 == '\0') {
      FUN_03c8f898();
      lVar8 = *unaff_x26;
      DAT_09427756 = '\x01';
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_03cd7500(lVar8);
      lVar8 = *unaff_x26;
    }
    **(int **)(lVar8 + 0xb8) = iVar1 + 1;
    if (unaff_x20 != 0) {
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_03cd7500(lVar8);
      }
      if (*(char *)(unaff_x25 + 0x755) == '\0') {
        FUN_03c8f898();
        *(undefined1 *)(unaff_x25 + 0x755) = 1;
      }
      lVar8 = *unaff_x26;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_03cd7500(lVar8);
        lVar8 = *unaff_x26;
      }
      if (**(int **)(lVar8 + 0xb8) != 0) {
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_03cd7500(lVar8);
        }
        if (*(char *)(unaff_x25 + 0x755) == '\0') {
          FUN_03c8f898();
          *(undefined1 *)(unaff_x25 + 0x755) = 1;
        }
        lVar8 = *unaff_x26;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
          lVar8 = *unaff_x26;
        }
        lVar9 = *unaff_x24;
        iVar1 = **(int **)(lVar8 + 0xb8);
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08e80c38) {
              puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_07e1dc5c;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)FUN_03cf1348();
LAB_07e1dc5c:
        iVar5 = (*(code *)*puVar7)();
        if (iVar1 < iVar5 + -1) {
          lVar8 = *unaff_x19;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08ef2fd0) {
                puVar7 = (undefined8 *)(lVar8 + (long)(*piVar11 + 6) * 0x10 + 0x138);
                goto LAB_07e1dd90;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
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
          lVar8 = *unaff_x26;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
            lVar8 = *unaff_x26;
          }
          lVar9 = *unaff_x19;
          uVar2 = *(ushort *)(lVar9 + 0x12e);
          uVar10 = (ulong)uVar2;
          if (**(int **)(lVar8 + 0xb8) == 1) {
            if (uVar2 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08ef2fd0) {
                  puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 6) * 0x10 + 0x138);
                  goto LAB_07e1ddb4;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar7 = (undefined8 *)FUN_03cf1348();
LAB_07e1ddb4:
            (*(code *)*puVar7)();
          }
          else {
            if (uVar2 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08ef2fd0) {
                  puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 6) * 0x10 + 0x138);
                  goto LAB_07e1ddd8;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar7 = (undefined8 *)FUN_03cf1348();
LAB_07e1ddd8:
            (*(code *)*puVar7)();
          }
        }
      }
    }
    lVar8 = *unaff_x19;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08ef2fd0) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar11 + 8) * 0x10 + 0x138);
          goto LAB_07e1de40;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_03cf1348();
LAB_07e1de40:
    (*(code *)*puVar7)();
  } while( true );
  plVar6 = (long *)thunk_FUN_03cf5138(plVar6,*(undefined8 *)PTR_DAT_08e6a288);
  if (plVar6 != (long *)0x0) {
    lVar8 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_07e1dec8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar3,0);
LAB_07e1dec8:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  if (DAT_09427756 == '\0') {
    FUN_03c8f898(PTR_DAT_08ef24f0);
    DAT_09427756 = '\x01';
  }
  lVar8 = *unaff_x26;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar8 = *unaff_x26;
  }
  **(undefined4 **)(lVar8 + 0xb8) = uStack0000000000000004;
  if (in_stack_00000008 != 0) {
    if (*(int *)(*(long *)PTR_DAT_08ef1fd0 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_0662a33c(in_stack_00000008,*(undefined8 *)PTR_DAT_08ef30a8);
  }
  return 1;
}


