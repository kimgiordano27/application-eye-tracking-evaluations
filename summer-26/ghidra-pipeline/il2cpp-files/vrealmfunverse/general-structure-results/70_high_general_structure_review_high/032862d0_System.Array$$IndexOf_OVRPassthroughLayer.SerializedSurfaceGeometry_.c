/*
FUNCTION_NAME: System.Array$$IndexOf<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 032862d0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03286ca8) */
/* WARNING: Removing unreachable block (ram,0x032869d4) */
/* WARNING: Removing unreachable block (ram,0x03286d30) */

void System_Array__IndexOf<OVRPassthroughLayer_SerializedSurfaceGeometry>
               (void *param_1,void *param_2,size_t param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  long unaff_x21;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
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
  
  uStack0000000000000060 = 0;
  uStack0000000000000068 = 0;
  uStack0000000000000040 = 0;
  uStack0000000000000048 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000030 = 0;
  memcpy(param_1,param_2,param_3);
  iVar2 = *(int *)(unaff_x19 + 0x10);
  *(int *)(unaff_x19 + 0x10) = iVar2 + 1;
  FUN_05d1fa70(&stack0x000000c0,iVar2,0);
  in_stack_00000158 = in_stack_00000008;
  _iStack0000000000000150 = in_stack_00000000;
  uVar8 = _iStack0000000000000150;
  in_stack_00000168 = in_stack_00000018;
  in_stack_00000160 = in_stack_00000010;
  iStack0000000000000150 = (int)in_stack_00000000;
  _iStack0000000000000150 = uVar8;
  if (iStack0000000000000150 == 2) {
    lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x78);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      FUN_02b76218(lVar11);
    }
    plVar5 = (long *)thunk_FUN_02b79548();
    if (plVar5 != (long *)0x0) {
      FUN_05d1f62c(&stack0x00000150,0);
      lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x78);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218(lVar11);
      }
      lVar12 = *plVar5;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03286534;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar6 = (undefined8 *)FUN_02b7654c(plVar5,lVar11,0);
LAB_03286534:
      uVar13 = (*(code *)*puVar6)(plVar5);
      plVar5 = in_stack_00000178;
      if ((uVar13 & 1) != 0) {
        uVar8 = *(undefined8 *)(unaff_x19 + 0xa8);
        lVar12 = thunk_FUN_02b79548(in_stack_00000178,DAT_06447c88);
        lVar11 = DAT_06447c88;
        if (lVar12 != 0) {
          plVar5 = (long *)thunk_FUN_02b79548(plVar5,DAT_06447c88);
          uVar8 = thunk_FUN_02b79548(uVar8,DAT_06447c88);
          lVar12 = *plVar5;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 4) * 0x10 + 0x138);
                goto LAB_0328682c;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar6 = (undefined8 *)FUN_02b7654c(plVar5,lVar11,4);
LAB_0328682c:
          _uStack0000000000000060 = (*(code *)*puVar6)(plVar5,uVar8,puVar6[1]);
          plVar5 = in_stack_00000178;
          if (in_stack_00000178 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x28);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02b76218(lVar11);
          }
          lVar12 = *plVar5;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_032868dc;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar6 = (undefined8 *)FUN_02b7654c(plVar5,lVar11,0);
LAB_032868dc:
          (*(code *)*puVar6)(plVar5);
          FUN_05d1f4bc(&stack0x00000060,0);
          return;
        }
LAB_03286d2c:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
    }
  }
  else if (iStack0000000000000150 == 1) {
    lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      FUN_02b76218(lVar11);
    }
    plVar5 = (long *)thunk_FUN_02b79548();
    if (plVar5 != (long *)0x0) {
      lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        FUN_02b76218(lVar11);
      }
      plVar7 = (long *)thunk_FUN_02b79548();
      if (plVar7 != (long *)0x0) {
        iVar2 = FUN_05d1f5e0(&stack0x00000150,0);
        lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218(lVar11);
        }
        lVar12 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar11) {
              puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0328666c;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar6 = (undefined8 *)FUN_02b7654c(plVar7,lVar11,0);
LAB_0328666c:
        iVar3 = (*(code *)*puVar6)(plVar7);
        if (iVar2 < iVar3) {
          lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02b76218(lVar11);
          }
          lVar12 = *plVar7;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                goto LAB_032869e8;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar6 = (undefined8 *)FUN_02b7654c(plVar7,lVar11,2);
LAB_032869e8:
          uVar8 = (*(code *)*puVar6)(plVar7,puVar6[1]);
          uVar4 = FUN_05d1f5e0(&stack0x00000150,0);
          lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02b76218(lVar11);
          }
          lVar12 = *plVar7;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
                goto LAB_03286a74;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar6 = (undefined8 *)FUN_02b7654c(plVar7,lVar11,3);
LAB_03286a74:
          (*(code *)*puVar6)(plVar7,uVar4,puVar6[1]);
          lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02b76218(lVar11);
          }
          lVar12 = *plVar7;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                goto LAB_03286af0;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar6 = (undefined8 *)FUN_02b7654c(plVar7,lVar11,1);
LAB_03286af0:
          plVar5 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
          puVar1 = PTR_DAT_0631fcd0;
          plVar9 = (long *)thunk_FUN_02b79548(plVar5,*(undefined8 *)PTR_DAT_0631fcd0);
          if (plVar9 != (long *)0x0) {
            lVar12 = *(long *)puVar1;
            uVar10 = thunk_FUN_02b79548(*(undefined8 *)(unaff_x19 + 0xa8),lVar12);
            lVar11 = *plVar9;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar12) {
                  puVar6 = (undefined8 *)(lVar11 + (long)(*piVar14 + 4) * 0x10 + 0x138);
                  goto LAB_03286b88;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar6 = (undefined8 *)FUN_02b7654c(plVar9,lVar12,4);
LAB_03286b88:
            (*(code *)*puVar6)(plVar9,uVar10,puVar6[1]);
            FUN_03acfdd8();
          }
          uStack0000000000000050 = 0;
          uStack0000000000000048 = 0;
          uStack0000000000000040 = 0;
          in_stack_000000b0 = 0;
          in_stack_000000a8 = 0;
          _cStack00000000000000a0 = 0;
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x28);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02b76218(lVar11);
          }
          lVar12 = *plVar5;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_03286c60;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar6 = (undefined8 *)FUN_02b7654c(plVar5,lVar11,0);
LAB_03286c60:
          (*(code *)*puVar6)(plVar5);
          if (cStack00000000000000a0 != '\0') {
            in_stack_00000098 = in_stack_000000b0;
            in_stack_00000090 = in_stack_000000a8;
            FUN_05d1f4bc(&stack0x00000090,0);
          }
          lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02b76218(lVar11);
          }
          lVar12 = *plVar7;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
                goto LAB_03286d18;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar6 = (undefined8 *)FUN_02b7654c(plVar7,lVar11,3);
LAB_03286d18:
          (*(code *)*puVar6)(plVar7,uVar8,puVar6[1]);
          return;
        }
      }
      FUN_05d1f5e0(&stack0x00000150,0);
      lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218(lVar11);
      }
      lVar12 = *plVar5;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03286758;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar6 = (undefined8 *)FUN_02b7654c(plVar5,lVar11,0);
LAB_03286758:
      uVar13 = (*(code *)*puVar6)(plVar5);
      if ((uVar13 & 1) != 0) {
        lVar12 = thunk_FUN_02b79548(in_stack_00000178,DAT_06447c88);
        lVar11 = DAT_06447c88;
        if (lVar12 != 0) {
          uVar8 = thunk_FUN_02b79548(*(undefined8 *)(unaff_x19 + 0xa8),DAT_06447c88);
          FUN_0275e8e0(4,lVar11,lVar12,uVar8);
          FUN_03acfdd8();
        }
        plVar5 = in_stack_00000178;
        uStack0000000000000030 = 0;
        uStack0000000000000028 = 0;
        uStack0000000000000020 = 0;
        in_stack_00000080 = 0;
        in_stack_00000078 = 0;
        _cStack0000000000000070 = 0;
        if (in_stack_00000178 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x28);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02b76218(lVar11);
        }
        lVar12 = *plVar5;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar11) {
              puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_03286998;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar6 = (undefined8 *)FUN_02b7654c(plVar5,lVar11,0);
LAB_03286998:
        (*(code *)*puVar6)(plVar5);
        if (cStack0000000000000070 == '\0') {
          return;
        }
        in_stack_00000098 = in_stack_00000080;
        in_stack_00000090 = in_stack_00000078;
        FUN_05d1f4bc(&stack0x00000090,0);
        return;
      }
    }
  }
  else if (iStack0000000000000150 == 0) {
    lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 8);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      FUN_02b76218(lVar11);
    }
    plVar5 = (long *)thunk_FUN_02b79548();
    if (plVar5 != (long *)0x0) {
      FUN_05d1f598(&stack0x00000150,0);
      lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 8);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218(lVar11);
      }
      lVar12 = *plVar5;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_032865e0;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar6 = (undefined8 *)FUN_02b7654c(plVar5,lVar11,0);
LAB_032865e0:
      uVar13 = (*(code *)*puVar6)(plVar5);
      plVar5 = in_stack_00000178;
      if ((uVar13 & 1) != 0) {
        if (in_stack_00000178 != (long *)0x0) {
          lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x28);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02b76218(lVar11);
          }
          lVar12 = *plVar5;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_032868b8;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar6 = (undefined8 *)FUN_02b7654c(plVar5,lVar11,0);
LAB_032868b8:
          (*(code *)*puVar6)(plVar5);
          return;
        }
        goto LAB_03286d2c;
      }
    }
  }
  *(undefined4 *)(unaff_x19 + 0xb4) = 4;
  return;
}


