/*
FUNCTION_NAME: System.Array$$Empty<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 03e3b668
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03e3c064) */
/* WARNING: Removing unreachable block (ram,0x03e3bd90) */
/* WARNING: Removing unreachable block (ram,0x03e3c0ec) */

void System_Array__Empty<OVRPlugin_SpaceQueryResult>(undefined8 param_1,void *param_2)

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
  undefined8 uStack0000000000000078;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  char cStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  int iStack0000000000000150;
  undefined8 uStack0000000000000158;
  undefined8 uStack0000000000000160;
  undefined8 uStack0000000000000168;
  long *plStack0000000000000178;
  
  plStack0000000000000178 = (long *)0x0;
  _cStack00000000000000a0 = 0;
  uStack00000000000000a8 = 0;
  uStack00000000000000b0 = 0;
  uStack0000000000000090 = 0;
  uStack0000000000000098 = 0;
  _cStack0000000000000070 = 0;
  uStack0000000000000078 = 0;
  uStack0000000000000080 = 0;
  uStack0000000000000060 = 0;
  uStack0000000000000068 = 0;
  uStack0000000000000040 = 0;
  uStack0000000000000048 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000030 = 0;
  _iStack0000000000000150 = param_1;
  uStack0000000000000160 = param_1;
  memcpy(param_2,(void *)(unaff_x19 + 0x18),0x90);
  iVar2 = *(int *)(unaff_x19 + 0x10);
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 03e3b62c with catch @ 03e3b6a8
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 03e3b5f4 with catch @ 03e3b6ac
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 03e3b5d0 with catch @ 03e3b6b0
                        */
  *(int *)(unaff_x19 + 0x10) = iVar2 + 1;
  FUN_0725384c(&stack0x000000c0,iVar2,0);
  uStack0000000000000158 = in_stack_00000008;
  _iStack0000000000000150 = in_stack_00000000;
  uVar8 = _iStack0000000000000150;
  uStack0000000000000168 = in_stack_00000018;
  uStack0000000000000160 = in_stack_00000010;
  iStack0000000000000150 = (int)in_stack_00000000;
  _iStack0000000000000150 = uVar8;
  if (iStack0000000000000150 == 2) {
    lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x78);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      FUN_0367c9fc(lVar11);
    }
    plVar5 = (long *)thunk_FUN_0367fd24();
    if (plVar5 != (long *)0x0) {
      FUN_07253408(&stack0x00000150,0);
      lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x78);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0367c9fc(lVar11);
      }
      lVar12 = *plVar5;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03e3b8f0;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar6 = (undefined8 *)FUN_0367cd30(plVar5,lVar11,0);
LAB_03e3b8f0:
      uVar13 = (*(code *)*puVar6)(plVar5);
      plVar5 = plStack0000000000000178;
      if ((uVar13 & 1) != 0) {
        uVar8 = *(undefined8 *)(unaff_x19 + 0xa8);
        lVar12 = thunk_FUN_0367fd24(plStack0000000000000178,DAT_07b68d08);
        lVar11 = DAT_07b68d08;
        if (lVar12 != 0) {
          plVar5 = (long *)thunk_FUN_0367fd24(plVar5,DAT_07b68d08);
          uVar8 = thunk_FUN_0367fd24(uVar8,DAT_07b68d08);
          lVar12 = *plVar5;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 4) * 0x10 + 0x138);
                goto LAB_03e3bbe8;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar6 = (undefined8 *)FUN_0367cd30(plVar5,lVar11,4);
LAB_03e3bbe8:
          _uStack0000000000000060 = (*(code *)*puVar6)(plVar5,uVar8,puVar6[1]);
          plVar5 = plStack0000000000000178;
          if (plStack0000000000000178 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x28);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_0367c9fc(lVar11);
          }
          lVar12 = *plVar5;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_03e3bc98;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar6 = (undefined8 *)FUN_0367cd30(plVar5,lVar11,0);
LAB_03e3bc98:
          (*(code *)*puVar6)(plVar5);
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
    lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      FUN_0367c9fc(lVar11);
    }
    plVar5 = (long *)thunk_FUN_0367fd24();
    if (plVar5 != (long *)0x0) {
      lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        FUN_0367c9fc(lVar11);
      }
      plVar7 = (long *)thunk_FUN_0367fd24();
      if (plVar7 != (long *)0x0) {
        iVar2 = FUN_072533bc(&stack0x00000150,0);
        lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_0367c9fc(lVar11);
        }
        lVar12 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar11) {
              puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_03e3ba28;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar6 = (undefined8 *)FUN_0367cd30(plVar7,lVar11,0);
LAB_03e3ba28:
        iVar3 = (*(code *)*puVar6)(plVar7);
        if (iVar2 < iVar3) {
          lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_0367c9fc(lVar11);
          }
          lVar12 = *plVar7;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                goto LAB_03e3bda4;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar6 = (undefined8 *)FUN_0367cd30(plVar7,lVar11,2);
LAB_03e3bda4:
          uVar8 = (*(code *)*puVar6)(plVar7,puVar6[1]);
          uVar4 = FUN_072533bc(&stack0x00000150,0);
          lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_0367c9fc(lVar11);
          }
          lVar12 = *plVar7;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
                goto LAB_03e3be30;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar6 = (undefined8 *)FUN_0367cd30(plVar7,lVar11,3);
LAB_03e3be30:
          (*(code *)*puVar6)(plVar7,uVar4,puVar6[1]);
          lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_0367c9fc(lVar11);
          }
          lVar12 = *plVar7;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                goto LAB_03e3beac;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar6 = (undefined8 *)FUN_0367cd30(plVar7,lVar11,1);
LAB_03e3beac:
          plVar5 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
          puVar1 = PTR_DAT_079fead0;
          plVar9 = (long *)thunk_FUN_0367fd24(plVar5,*(undefined8 *)PTR_DAT_079fead0);
          if (plVar9 != (long *)0x0) {
            lVar12 = *(long *)puVar1;
            uVar10 = thunk_FUN_0367fd24(*(undefined8 *)(unaff_x19 + 0xa8),lVar12);
            lVar11 = *plVar9;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar12) {
                  puVar6 = (undefined8 *)(lVar11 + (long)(*piVar14 + 4) * 0x10 + 0x138);
                  goto LAB_03e3bf44;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar6 = (undefined8 *)FUN_0367cd30(plVar9,lVar12,4);
LAB_03e3bf44:
            (*(code *)*puVar6)(plVar9,uVar10,puVar6[1]);
            FUN_04930ea8();
          }
          uStack0000000000000050 = 0;
          uStack0000000000000048 = 0;
          uStack0000000000000040 = 0;
          uStack00000000000000b0 = 0;
          uStack00000000000000a8 = 0;
          _cStack00000000000000a0 = 0;
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x28);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_0367c9fc(lVar11);
          }
          lVar12 = *plVar5;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_03e3c01c;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar6 = (undefined8 *)FUN_0367cd30(plVar5,lVar11,0);
LAB_03e3c01c:
          (*(code *)*puVar6)(plVar5);
          if (cStack00000000000000a0 != '\0') {
            uStack0000000000000098 = uStack00000000000000b0;
            uStack0000000000000090 = uStack00000000000000a8;
            FUN_07253298(&stack0x00000090,0);
          }
          lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_0367c9fc(lVar11);
          }
          lVar12 = *plVar7;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
                goto LAB_03e3c0d4;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar6 = (undefined8 *)FUN_0367cd30(plVar7,lVar11,3);
LAB_03e3c0d4:
          (*(code *)*puVar6)(plVar7,uVar8,puVar6[1]);
          return;
        }
      }
      FUN_072533bc(&stack0x00000150,0);
      lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0367c9fc(lVar11);
      }
      lVar12 = *plVar5;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03e3bb14;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar6 = (undefined8 *)FUN_0367cd30(plVar5,lVar11,0);
LAB_03e3bb14:
      uVar13 = (*(code *)*puVar6)(plVar5);
      if ((uVar13 & 1) != 0) {
        lVar12 = thunk_FUN_0367fd24(plStack0000000000000178,DAT_07b68d08);
        lVar11 = DAT_07b68d08;
        if (lVar12 != 0) {
          uVar8 = thunk_FUN_0367fd24(*(undefined8 *)(unaff_x19 + 0xa8),DAT_07b68d08);
          FUN_0315f2c4(4,lVar11,lVar12,uVar8);
          FUN_04930ea8();
        }
        plVar5 = plStack0000000000000178;
        uStack0000000000000030 = 0;
        uStack0000000000000028 = 0;
        uStack0000000000000020 = 0;
        uStack0000000000000080 = 0;
        uStack0000000000000078 = 0;
        _cStack0000000000000070 = 0;
        if (plStack0000000000000178 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x28);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_0367c9fc(lVar11);
        }
        lVar12 = *plVar5;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar11) {
              puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_03e3bd54;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar6 = (undefined8 *)FUN_0367cd30(plVar5,lVar11,0);
LAB_03e3bd54:
        (*(code *)*puVar6)(plVar5);
        if (cStack0000000000000070 == '\0') {
          return;
        }
        uStack0000000000000098 = uStack0000000000000080;
        uStack0000000000000090 = uStack0000000000000078;
        FUN_07253298(&stack0x00000090,0);
        return;
      }
    }
  }
  else if (iStack0000000000000150 == 0) {
    lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 8);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      FUN_0367c9fc(lVar11);
    }
    plVar5 = (long *)thunk_FUN_0367fd24();
    if (plVar5 != (long *)0x0) {
      FUN_07253374(&stack0x00000150,0);
      lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 8);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0367c9fc(lVar11);
      }
      lVar12 = *plVar5;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03e3b99c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar6 = (undefined8 *)FUN_0367cd30(plVar5,lVar11,0);
LAB_03e3b99c:
      uVar13 = (*(code *)*puVar6)(plVar5);
      plVar5 = plStack0000000000000178;
      if ((uVar13 & 1) != 0) {
        if (plStack0000000000000178 != (long *)0x0) {
          lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x28);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_0367c9fc(lVar11);
          }
          lVar12 = *plVar5;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_03e3bc74;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar6 = (undefined8 *)FUN_0367cd30(plVar5,lVar11,0);
LAB_03e3bc74:
          (*(code *)*puVar6)(plVar5);
          return;
        }
        goto LAB_03e3c0e8;
      }
    }
  }
  *(undefined4 *)(unaff_x19 + 0xb4) = 4;
  return;
}


