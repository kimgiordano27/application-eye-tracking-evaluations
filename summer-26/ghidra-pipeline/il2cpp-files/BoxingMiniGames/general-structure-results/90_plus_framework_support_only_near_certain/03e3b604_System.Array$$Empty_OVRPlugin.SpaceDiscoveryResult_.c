/*
FUNCTION_NAME: System.Array$$Empty<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 03e3b604
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03e3c064) */
/* WARNING: Removing unreachable block (ram,0x03e3bd90) */
/* WARNING: Removing unreachable block (ram,0x03e3c0ec) */

void System_Array__Empty<OVRPlugin_SpaceDiscoveryResult>
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  char cStack0000000000000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  char cStack00000000000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  int iStack0000000000000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  long *in_stack_00000178;
  
                    /* try { // try from 03e3b604 to 03f3b62b has its CatchHandler @ 03e3b524 */
  if (*(long *)(param_4 + 0x38) == 0) {
    FUN_03642964(&DAT_07b68d08);
                    /* try { // try from 03e3b62c to 03f3b63b has its CatchHandler @ 03e3b6a8 */
    FUN_03642964(&DAT_07b902c8);
                    /* try { // try from 03e3b63c to 03f3b6cb has its CatchHandler @ 03e3b524 */
    FUN_03642964(&DAT_07b902c0);
    FUN_03642964(&DAT_07b902d0);
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_0367ca58(param_4);
    }
  }
  in_stack_00000178 = (long *)0x0;
  _cStack00000000000000a0 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000b0 = 0;
  in_stack_00000158 = 0;
  _iStack0000000000000150 = 0;
  in_stack_00000168 = 0;
  in_stack_00000160 = 0;
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  _cStack0000000000000070 = 0;
  in_stack_00000078 = 0;
  in_stack_00000080 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  memcpy(&stack0x000000c0,(void *)(param_1 + 0x18),0x90);
  iVar2 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar2 + 1;
  FUN_0725384c(&stack0x000000c0,iVar2,0);
  in_stack_00000158 = in_stack_00000008;
  _iStack0000000000000150 = in_stack_00000000;
  uVar6 = _iStack0000000000000150;
  in_stack_00000168 = in_stack_00000018;
  in_stack_00000160 = in_stack_00000010;
  iStack0000000000000150 = (int)in_stack_00000000;
  _iStack0000000000000150 = uVar6;
  if (iStack0000000000000150 == 2) {
    lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x78);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_0367c9fc(lVar11);
    }
    plVar5 = (long *)thunk_FUN_0367fd24(param_2,lVar11);
    if (plVar5 != (long *)0x0) {
      uVar6 = FUN_07253408(&stack0x00000150,0);
      lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x78);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0367c9fc(lVar11);
      }
      lVar12 = *plVar5;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03e3b8f0;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)FUN_0367cd30(plVar5,lVar11,0);
LAB_03e3b8f0:
      uVar13 = (*(code *)*puVar7)(plVar5,param_3,uVar6,&stack0x00000178,puVar7[1]);
      plVar5 = in_stack_00000178;
      if ((uVar13 & 1) != 0) {
        uVar6 = *(undefined8 *)(param_1 + 0xa8);
        lVar12 = thunk_FUN_0367fd24(in_stack_00000178,DAT_07b68d08);
        lVar11 = DAT_07b68d08;
        if (lVar12 != 0) {
          plVar5 = (long *)thunk_FUN_0367fd24(plVar5,DAT_07b68d08);
          uVar6 = thunk_FUN_0367fd24(uVar6,DAT_07b68d08);
          lVar12 = *plVar5;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar7 = (undefined8 *)(lVar12 + (long)(*piVar14 + 4) * 0x10 + 0x138);
                goto LAB_03e3bbe8;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar7 = (undefined8 *)FUN_0367cd30(plVar5,lVar11,4);
LAB_03e3bbe8:
          _in_stack_00000060 = (*(code *)*puVar7)(plVar5,uVar6,puVar7[1]);
          plVar5 = in_stack_00000178;
          if (in_stack_00000178 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x28);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_0367c9fc(lVar11);
          }
          lVar12 = *plVar5;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_03e3bc98;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar7 = (undefined8 *)FUN_0367cd30(plVar5,lVar11,0);
LAB_03e3bc98:
          (*(code *)*puVar7)(plVar5,param_1,param_3,puVar7[1]);
          FUN_07253298(&stack0x00000060,0);
          return;
        }
LAB_03e3c0e8:
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
    }
  }
  else if (iStack0000000000000150 == 1) {
    lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x38);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_0367c9fc(lVar11);
    }
    plVar5 = (long *)thunk_FUN_0367fd24(param_2,lVar11);
    if (plVar5 != (long *)0x0) {
      lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x40);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0367c9fc(lVar11);
      }
      plVar8 = (long *)thunk_FUN_0367fd24(param_2,lVar11);
      if (plVar8 != (long *)0x0) {
        iVar2 = FUN_072533bc(&stack0x00000150,0);
        lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x40);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_0367c9fc(lVar11);
        }
        lVar12 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar11) {
              puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_03e3ba28;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)FUN_0367cd30(plVar8,lVar11,0);
LAB_03e3ba28:
        iVar3 = (*(code *)*puVar7)(plVar8,param_3,puVar7[1]);
        if (iVar2 < iVar3) {
          lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x40);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_0367c9fc(lVar11);
          }
          lVar12 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar7 = (undefined8 *)(lVar12 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                goto LAB_03e3bda4;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar7 = (undefined8 *)FUN_0367cd30(plVar8,lVar11,2);
LAB_03e3bda4:
          uVar6 = (*(code *)*puVar7)(plVar8,puVar7[1]);
          uVar4 = FUN_072533bc(&stack0x00000150,0);
          lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x40);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_0367c9fc(lVar11);
          }
          lVar12 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar7 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
                goto LAB_03e3be30;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar7 = (undefined8 *)FUN_0367cd30(plVar8,lVar11,3);
LAB_03e3be30:
          (*(code *)*puVar7)(plVar8,uVar4,puVar7[1]);
          lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x40);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_0367c9fc(lVar11);
          }
          lVar12 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar7 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                goto LAB_03e3beac;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar7 = (undefined8 *)FUN_0367cd30(plVar8,lVar11,1);
LAB_03e3beac:
          plVar5 = (long *)(*(code *)*puVar7)(plVar8,puVar7[1]);
          puVar1 = PTR_DAT_079fead0;
          plVar9 = (long *)thunk_FUN_0367fd24(plVar5,*(undefined8 *)PTR_DAT_079fead0);
          if (plVar9 != (long *)0x0) {
            lVar12 = *(long *)puVar1;
            uVar10 = thunk_FUN_0367fd24(*(undefined8 *)(param_1 + 0xa8),lVar12);
            lVar11 = *plVar9;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar12) {
                  puVar7 = (undefined8 *)(lVar11 + (long)(*piVar14 + 4) * 0x10 + 0x138);
                  goto LAB_03e3bf44;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar7 = (undefined8 *)FUN_0367cd30(plVar9,lVar12,4);
LAB_03e3bf44:
            (*(code *)*puVar7)(plVar9,uVar10,puVar7[1]);
            FUN_04930ea8();
          }
          in_stack_000000b0 = 0;
          in_stack_000000a8 = 0;
          _cStack00000000000000a0 = 0;
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x28);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_0367c9fc(lVar11);
          }
          lVar12 = *plVar5;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_03e3c01c;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar7 = (undefined8 *)FUN_0367cd30(plVar5,lVar11,0);
LAB_03e3c01c:
          (*(code *)*puVar7)(plVar5,param_1,param_3,puVar7[1]);
          if (cStack00000000000000a0 != '\0') {
            in_stack_00000098 = in_stack_000000b0;
            in_stack_00000090 = in_stack_000000a8;
            FUN_07253298(&stack0x00000090,0);
          }
          lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x40);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_0367c9fc(lVar11);
          }
          lVar12 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar7 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
                goto LAB_03e3c0d4;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar7 = (undefined8 *)FUN_0367cd30(plVar8,lVar11,3);
LAB_03e3c0d4:
          (*(code *)*puVar7)(plVar8,uVar6,puVar7[1]);
          return;
        }
      }
      uVar4 = FUN_072533bc(&stack0x00000150,0);
      lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x38);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0367c9fc(lVar11);
      }
      lVar12 = *plVar5;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03e3bb14;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)FUN_0367cd30(plVar5,lVar11,0);
LAB_03e3bb14:
      uVar13 = (*(code *)*puVar7)(plVar5,param_3,uVar4,&stack0x00000178,puVar7[1]);
      if ((uVar13 & 1) != 0) {
        lVar12 = thunk_FUN_0367fd24(in_stack_00000178,DAT_07b68d08);
        lVar11 = DAT_07b68d08;
        if (lVar12 != 0) {
          uVar6 = thunk_FUN_0367fd24(*(undefined8 *)(param_1 + 0xa8),DAT_07b68d08);
          FUN_0315f2c4(4,lVar11,lVar12,uVar6);
          FUN_04930ea8();
        }
        plVar5 = in_stack_00000178;
        in_stack_00000080 = 0;
        in_stack_00000078 = 0;
        _cStack0000000000000070 = 0;
        if (in_stack_00000178 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x28);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_0367c9fc(lVar11);
        }
        lVar12 = *plVar5;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar11) {
              puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_03e3bd54;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)FUN_0367cd30(plVar5,lVar11,0);
LAB_03e3bd54:
        (*(code *)*puVar7)(plVar5,param_1,param_3,puVar7[1]);
        if (cStack0000000000000070 == '\0') {
          return;
        }
        in_stack_00000098 = in_stack_00000080;
        in_stack_00000090 = in_stack_00000078;
        FUN_07253298(&stack0x00000090,0);
        return;
      }
    }
  }
  else if (iStack0000000000000150 == 0) {
    lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 8);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_0367c9fc(lVar11);
    }
    plVar5 = (long *)thunk_FUN_0367fd24(param_2,lVar11);
    if (plVar5 != (long *)0x0) {
      uVar6 = FUN_07253374(&stack0x00000150,0);
      lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 8);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0367c9fc(lVar11);
      }
      lVar12 = *plVar5;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03e3b99c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)FUN_0367cd30(plVar5,lVar11,0);
LAB_03e3b99c:
      uVar13 = (*(code *)*puVar7)(plVar5,param_3,uVar6,&stack0x00000178,puVar7[1]);
      plVar5 = in_stack_00000178;
      if ((uVar13 & 1) != 0) {
        if (in_stack_00000178 != (long *)0x0) {
          lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x28);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_0367c9fc(lVar11);
          }
          lVar12 = *plVar5;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_03e3bc74;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar7 = (undefined8 *)FUN_0367cd30(plVar5,lVar11,0);
LAB_03e3bc74:
          (*(code *)*puVar7)(plVar5,param_1,param_3,puVar7[1]);
          return;
        }
        goto LAB_03e3c0e8;
      }
    }
  }
  *(undefined4 *)(param_1 + 0xb4) = 4;
  return;
}


