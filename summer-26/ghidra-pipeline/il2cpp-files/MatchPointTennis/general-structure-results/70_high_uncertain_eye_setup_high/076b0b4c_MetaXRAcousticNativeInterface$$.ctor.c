/*
FUNCTION_NAME: MetaXRAcousticNativeInterface$$.ctor
ENTRY_POINT: 076b0b4c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x076b1e1c) */
/* WARNING: Removing unreachable block (ram,0x076b099c) */
/* WARNING: Removing unreachable block (ram,0x076b0c7c) */
/* WARNING: Removing unreachable block (ram,0x076b2068) */
/* WARNING: Removing unreachable block (ram,0x076b0f94) */
/* WARNING: Removing unreachable block (ram,0x076b0fc4) */

void MetaXRAcousticNativeInterface___ctor(undefined8 *param_1)

{
  byte bVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  long *unaff_x20;
  long *plVar17;
  long *unaff_x21;
  uint uVar18;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined4 unaff_w26;
  long unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined1 auVar19 [16];
  long in_stack_00000028;
  long in_stack_00000030;
  uint in_stack_00000038;
  undefined4 *in_stack_00000040;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_00000080;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  long in_stack_000000c0;
  char in_stack_000000c8;
  char in_stack_000000e0;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
code_r0x076b0b4c:
  do {
    lVar9 = (*(code *)*param_1)(unaff_x23,unaff_w26,param_1[1]);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar9 = (**(code **)(*unaff_x21 + 0x178))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x180));
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    iVar6 = FUN_076bd41c(lVar9,0);
    if (iVar6 - 2U < 4) {
                    /* WARNING: Could not recover jumptable at 0x076b0b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(MetaXRAcousticNativeInterface_UnityNativeInterface__ovrAudio_SetAcousticModel +
        (ulong)*(byte *)(unaff_x27 + (ulong)(iVar6 - 2U)) * 4 + 4))();
      return;
    }
switchD_076b0b98_default:
    lVar9 = *unaff_x25;
    uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x20) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_076b0a74;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_044822ac(unaff_x25,*unaff_x20,0);
LAB_076b0a74:
    uVar14 = (*(code *)*puVar8)(unaff_x25,puVar8[1]);
    if ((uVar14 & 1) == 0) {
      if ((in_stack_00000028 < 0) && (unaff_x25 != (long *)0x0)) {
        lVar9 = *unaff_x25;
        uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar14 != 0) {
          piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_09f1f008) {
              puVar8 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_076b0c64;
            }
            uVar14 = uVar14 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)FUN_044822ac(unaff_x25,*(long *)PTR_DAT_09f1f008,0);
LAB_076b0c64:
        (*(code *)*puVar8)(unaff_x25,puVar8[1]);
      }
      plVar10 = *(long **)(in_stack_00000040 + 8);
      in_stack_00000038 = in_stack_00000038 + 1;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      plVar10 = (long *)(**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar9 = *plVar10;
      uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_09f2d678) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_076b0724;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)FUN_044822ac(plVar10,*(long *)PTR_DAT_09f2d678,0);
LAB_076b0724:
      iVar6 = (*(code *)*puVar8)(plVar10,puVar8[1]);
      if ((int)in_stack_00000038 < iVar6) {
        plVar10 = *(long **)(in_stack_00000040 + 8);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        plVar10 = (long *)(**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        lVar9 = *plVar10;
        uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar14 != 0) {
          piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_09f2d680) {
              puVar8 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_076b07b0;
            }
            uVar14 = uVar14 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)FUN_044822ac(plVar10,*(long *)PTR_DAT_09f2d680,0);
LAB_076b07b0:
        unaff_x24 = (long *)(*(code *)*puVar8)(plVar10,in_stack_00000038,puVar8[1]);
        if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        plVar10 = (long *)(**(code **)(*unaff_x24 + 0x188))
                                    (unaff_x24,*(undefined8 *)(*unaff_x24 + 400));
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        lVar9 = *plVar10;
        uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar14 != 0) {
          piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_09f2d638) {
              puVar8 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_076b0838;
            }
            uVar14 = uVar14 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)FUN_044822ac(plVar10,*(long *)PTR_DAT_09f2d638,0);
LAB_076b0838:
        plVar10 = (long *)(*(code *)*puVar8)(plVar10,puVar8[1]);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        do {
          lVar9 = *plVar10;
          uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar14 != 0) {
            piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *unaff_x20) {
                puVar8 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_076b0898;
              }
              uVar14 = uVar14 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar14 != 0);
          }
          puVar8 = (undefined8 *)FUN_044822ac(plVar10,*unaff_x20,0);
LAB_076b0898:
          uVar14 = (*(code *)*puVar8)(plVar10,puVar8[1]);
          if ((uVar14 & 1) == 0) goto LAB_076b091c;
          lVar9 = *plVar10;
          uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar14 != 0) {
            piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *unaff_x22) {
                puVar8 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_076b08f4;
              }
              uVar14 = uVar14 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar14 != 0);
          }
          puVar8 = (undefined8 *)FUN_044822ac(plVar10,*unaff_x22,0);
LAB_076b08f4:
          lVar9 = (*(code *)*puVar8)(plVar10,puVar8[1]);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          FUN_076a6f40(in_stack_00000030,*(undefined4 *)(lVar9 + 0x10),0x200);
        } while( true );
      }
      plVar10 = *(long **)(in_stack_00000040 + 8);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      plVar10 = (long *)(**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar9 = *plVar10;
      uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar14 == 0) goto LAB_076b0e04;
      piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      goto LAB_076b0dec;
    }
    lVar9 = *unaff_x25;
    uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x28) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_076b0ad0;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_044822ac(unaff_x25,*unaff_x28,0);
LAB_076b0ad0:
    unaff_x21 = (long *)(*(code *)*puVar8)(unaff_x25,puVar8[1]);
    unaff_x23 = (long *)(**(code **)(*unaff_x24 + 0x188))
                                  (unaff_x24,*(undefined8 *)(*unaff_x24 + 400));
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar9 = *unaff_x23;
    unaff_w26 = (undefined4)unaff_x21[2];
    uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x29) {
          param_1 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
          goto code_r0x076b0b4c;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    param_1 = (undefined8 *)FUN_044822ac(unaff_x23,*unaff_x29,0);
  } while( true );
LAB_076b091c:
  if ((in_stack_00000028 < 0) && (plVar10 != (long *)0x0)) {
    lVar9 = *plVar10;
    uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_09f1f008) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_076b0984;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_044822ac(plVar10,*(long *)PTR_DAT_09f1f008,0);
LAB_076b0984:
    (*(code *)*puVar8)(plVar10,puVar8[1]);
  }
  plVar10 = (long *)(**(code **)(*unaff_x24 + 0x178))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x180))
  ;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar9 = *plVar10;
  uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar14 != 0) {
    piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_09f2d648) {
        puVar8 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_076b0a14;
      }
      uVar14 = uVar14 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar14 != 0);
  }
  puVar8 = (undefined8 *)FUN_044822ac(plVar10,*(long *)PTR_DAT_09f2d648,0);
LAB_076b0a14:
  unaff_x25 = (long *)(*(code *)*puVar8)(plVar10,puVar8[1]);
  if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  goto switchD_076b0b98_default;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar16 = piVar16 + 4;
    if (uVar14 == 0) break;
LAB_076b0dec:
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_09f2d010) {
      puVar8 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_076b0e20;
    }
  }
LAB_076b0e04:
  puVar8 = (undefined8 *)FUN_044822ac(plVar10,*(long *)PTR_DAT_09f2d010,0);
LAB_076b0e20:
  uVar7 = (*(code *)*puVar8)(plVar10,puVar8[1]);
  uVar11 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f2d4e8,uVar7);
  if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  *(undefined8 *)(in_stack_00000030 + 0x68) = uVar11;
  thunk_FUN_044bb4b4();
  iVar6 = 0;
  in_stack_00000040[0x20] = 0;
  do {
    puVar4 = PTR_DAT_09f2d410;
    puVar3 = PTR_DAT_09f2d408;
    if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(long *)(in_stack_00000030 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(int *)(*(long *)(in_stack_00000030 + 0x68) + 0x18) <= iVar6) {
      if (0 < (int)in_stack_00000040[0xc]) {
        in_stack_00000038 = 0;
        uVar18 = 0;
        do {
          plVar10 = *(long **)(in_stack_00000040 + 8);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          plVar10 = (long *)(**(code **)(*plVar10 + 0x1f8))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x200));
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar9 = *plVar10;
          uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar14 != 0) {
            piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_09f2d160) {
                puVar8 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_076b1bec;
              }
              uVar14 = uVar14 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar14 != 0);
          }
          puVar8 = (undefined8 *)FUN_044822ac(plVar10,*(long *)PTR_DAT_09f2d160,0);
LAB_076b1bec:
          lVar9 = (*(code *)*puVar8)(plVar10,in_stack_00000038,puVar8[1]);
          lVar12 = *(long *)(in_stack_00000030 + 0x98);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          if (*(uint *)(lVar12 + 0x18) <= in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          lVar12 = *(long *)(lVar12 + (long)(int)in_stack_00000038 * 8 + 0x20);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar12 = FUN_074427bc(lVar12,*(undefined8 *)PTR_DAT_09f2d5a0);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          FUN_06b56d04(&stack0x00000070,lVar12,*(undefined8 *)PTR_DAT_09f2d718);
          in_stack_000000b8 = in_stack_00000078;
          in_stack_000000b0 = in_stack_00000070;
          in_stack_000000c0 = in_stack_00000080;
          while (uVar14 = System_Collections_Generic_EqualityComparer<ConstraintSource>__System_Collections_IEqualityComparer_GetHashCode
                                    (&stack0x000000b0,*(undefined8 *)PTR_DAT_09f2d600),
                lVar12 = in_stack_000000c0, (uVar14 & 1) != 0) {
            if (in_stack_000000c0 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if (*(int *)(in_stack_000000c0 + 0x18) < 1) {
              plVar10 = (long *)0x0;
            }
            else {
              iVar6 = 0;
              plVar10 = (long *)0x0;
              do {
                auVar19 = FUN_059f3e50(lVar12,iVar6,*(undefined8 *)puVar3);
                lVar15 = auVar19._8_8_;
                if (plVar10 == (long *)0x0) {
                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e44();
                  }
                  uVar7 = *(undefined4 *)(lVar12 + 0x18);
                  uVar11 = *(undefined8 *)(lVar9 + 0x10);
                  plVar10 = (long *)thunk_FUN_0448520c(*(undefined8 *)puVar4);
                  FUN_076c14ec(plVar10,in_stack_00000038,uVar18,uVar7,uVar11,0);
                }
                else {
                  lVar13 = *(long *)puVar4;
                  bVar1 = *(byte *)(lVar13 + 0x130);
                  if (*(byte *)(*plVar10 + 0x130) < bVar1) goto LAB_076b1e40;
                  if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != lVar13) {
                    plVar10 = (long *)0x0;
                  }
                }
                if (plVar10 == (long *)0x0) {
LAB_076b1e40:
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                FUN_076c1680(plVar10,iVar6,auVar19._0_8_ & 0xffffffff,0);
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                if (*(long *)(lVar15 + 0x28) != 0) {
                  if (*(long *)(in_stack_00000040 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e44();
                  }
                  lVar13 = FUN_0744290c(*(long *)(in_stack_00000040 + 0xe),lVar15,
                                        *(undefined8 *)PTR_DAT_09f2d590);
                  plVar10[5] = lVar13;
                  thunk_FUN_044bb4b4();
                }
                FUN_076c1fc8(plVar10,iVar6,*(undefined4 *)(lVar15 + 0x1c),0);
                iVar6 = iVar6 + 1;
              } while (iVar6 < *(int *)(lVar12 + 0x18));
            }
            plVar17 = *(long **)(in_stack_00000030 + 0x88);
            if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if ((plVar10 != (long *)0x0) &&
               (lVar12 = thunk_FUN_04485110(plVar10,*(undefined8 *)(*plVar17 + 0x40)), lVar12 == 0))
            {
              uVar11 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
              FUN_04447d10(uVar11,0);
            }
            if (*(uint *)(plVar17 + 3) <= uVar18) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            plVar17[(long)(int)uVar18 + 4] = (long)plVar10;
            thunk_FUN_044bb4b4(plVar17 + (long)(int)uVar18 + 4,plVar10);
            uVar18 = uVar18 + 1;
          }
          if (in_stack_00000028 < 0) {
            FUN_05260da0(&stack0x000000b0,*(undefined8 *)PTR_DAT_09f2d5f0);
          }
          in_stack_00000038 = in_stack_00000038 + 1;
        } while ((int)in_stack_00000038 < (int)in_stack_00000040[0xc]);
      }
      if (*(long *)(in_stack_00000040 + 0x10) != 0) {
        uVar11 = FUN_05b1b2ac(*(long *)(in_stack_00000040 + 0x10),*(undefined8 *)PTR_DAT_09f2d6c8);
        FUN_05f9dd28(&stack0x000001e0,uVar11,4,*(undefined8 *)PTR_DAT_09f2d700);
        auVar19 = FUN_094b28ac(in_stack_000001e0,in_stack_000001e8,0);
        *(undefined1 (*) [16])(in_stack_00000030 + 0x78) = auVar19;
        FUN_05f9df64(&stack0x000001e0,*(undefined8 *)PTR_DAT_09f2ac78);
        FUN_094b2800(0);
        cVar2 = *(char *)(in_stack_00000040 + 0x12);
        *in_stack_00000040 = 0xfffffffe;
        *(undefined8 *)(in_stack_00000040 + 0xe) = 0;
        thunk_FUN_044bb4b4(in_stack_00000040 + 0xe,0);
        *(undefined8 *)(in_stack_00000040 + 0x10) = 0;
        thunk_FUN_044bb4b4(in_stack_00000040 + 0x10,0);
        if (*(int *)(*(long *)PTR_DAT_09f2cdd8 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_066e2370(in_stack_00000040 + 2,cVar2 != '\0',*(undefined8 *)PTR_DAT_09f2ce18);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    plVar10 = *(long **)(in_stack_00000040 + 8);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    plVar10 = (long *)(**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar9 = *plVar10;
    uVar7 = in_stack_00000040[0x20];
    uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_09f2d018) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_076b12bc;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_044822ac(plVar10,*(long *)PTR_DAT_09f2d018,0);
LAB_076b12bc:
    lVar9 = (*(code *)*puVar8)(plVar10,uVar7,puVar8[1]);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (-1 < *(int *)(lVar9 + 0x18)) {
      uVar5 = Meta_XR_BuildingBlocks_RoomMeshController_<Start>d__4__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                        (lVar9,0);
      switch(uVar5) {
      case 1:
        lVar9 = *(long *)(in_stack_00000030 + 0x70);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (*(uint *)(lVar9 + 0x18) <= (uint)in_stack_00000040[0x20]) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        iVar6 = *(int *)(lVar9 + (long)(int)in_stack_00000040[0x20] * 4 + 0x20);
        if (iVar6 < 0x200) {
          if ((iVar6 == 2) || (iVar6 == 4)) {
            lVar9 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d240);
            System_Action<OVRPlugin_Qpl_Annotation_Builder_Entry>__Invoke
                      (lVar9,*(undefined8 *)PTR_DAT_09f2d4f0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            lVar12 = *(long *)(in_stack_00000030 + 0x70);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            uVar18 = in_stack_00000040[0x20];
            if (*(uint *)(lVar12 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            FUN_076a76c4(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),(long)(int)uVar18,
                         lVar9 + 0x10,&stack0x00000158,lVar9 + 0x18,
                         *(int *)(lVar12 + (long)(int)uVar18 * 4 + 0x20) == 4);
            lVar12 = *(long *)(in_stack_00000040 + 0x10);
            auVar19 = FUN_0613d160(&stack0x00000158,*(undefined8 *)PTR_DAT_09f2aca0);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            lVar15 = *(long *)(lVar12 + 0x10);
            lVar13 = *(long *)PTR_DAT_09f2d6c0;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            uVar18 = *(uint *)(lVar12 + 0x18);
            if (uVar18 < *(uint *)(lVar15 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar18 + 1;
              *(undefined1 (*) [16])(lVar15 + (long)(int)uVar18 * 0x10 + 0x20) = auVar19;
            }
            else {
              FUN_05b19770(lVar12,auVar19._0_8_,auVar19._8_8_,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
            plVar10 = *(long **)(in_stack_00000030 + 0x68);
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            uVar18 = in_stack_00000040[0x20];
            lVar12 = thunk_FUN_04485110(lVar9,*(undefined8 *)(*plVar10 + 0x40));
            if (lVar12 == 0) {
              uVar11 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
              FUN_04447d10(uVar11,0);
            }
            if (*(uint *)(plVar10 + 3) <= uVar18) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            plVar10[(long)(int)uVar18 + 4] = lVar9;
            thunk_FUN_044bb4b4(plVar10 + (long)(int)uVar18 + 4,lVar9);
          }
        }
        else if ((iVar6 == 0x200) || (iVar6 == 0x2000)) {
          lVar9 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d518);
          FUN_07399b20(lVar9,*(undefined8 *)PTR_DAT_09f2d500);
          FUN_076a89e0(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                       in_stack_00000040[0x20],&stack0x000000e0,&stack0x000000c8);
          if (in_stack_000000e0 != '\0') {
            auVar19 = FUN_0612f58c(&stack0x000000e0,*(undefined8 *)PTR_DAT_09f2d328);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            *(undefined1 (*) [16])(lVar9 + 0x10) = auVar19;
          }
          if (in_stack_000000c8 != '\0') {
            lVar12 = *(long *)(in_stack_00000040 + 0x10);
            auVar19 = FUN_0613d160(&stack0x000000c8,*(undefined8 *)PTR_DAT_09f2aca0);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            lVar15 = *(long *)(lVar12 + 0x10);
            lVar13 = *(long *)PTR_DAT_09f2d6c0;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            uVar18 = *(uint *)(lVar12 + 0x18);
            if (uVar18 < *(uint *)(lVar15 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar18 + 1;
              *(undefined1 (*) [16])(lVar15 + (long)(int)uVar18 * 0x10 + 0x20) = auVar19;
            }
            else {
              FUN_05b19770(lVar12,auVar19._0_8_,auVar19._8_8_,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
          }
          plVar10 = *(long **)(in_stack_00000030 + 0x68);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          uVar18 = in_stack_00000040[0x20];
          if ((lVar9 != 0) &&
             (lVar12 = thunk_FUN_04485110(lVar9,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0)) {
            uVar11 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
            FUN_04447d10(uVar11,0);
          }
          if (*(uint *)(plVar10 + 3) <= uVar18) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          plVar10[(long)(int)uVar18 + 4] = lVar9;
          thunk_FUN_044bb4b4(plVar10 + (long)(int)uVar18 + 4,lVar9);
        }
        break;
      case 3:
        lVar9 = *(long *)(in_stack_00000030 + 0x70);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (*(uint *)(lVar9 + 0x18) <= (uint)in_stack_00000040[0x20]) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        uVar18 = *(uint *)(lVar9 + (long)(int)in_stack_00000040[0x20] * 4 + 0x20);
        if ((uVar18 >> 10 & 1) == 0) {
          if ((uVar18 >> 0xc & 1) != 0) {
            lVar9 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d350);
            FUN_07399b40(lVar9,*(undefined8 *)PTR_DAT_09f2d4f8);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            FUN_076a80cc(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                         in_stack_00000040[0x20],lVar9 + 0x10,&stack0x000000f8,0);
            lVar12 = *(long *)(in_stack_00000040 + 0x10);
            auVar19 = FUN_0613d160(&stack0x000000f8,*(undefined8 *)PTR_DAT_09f2aca0);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            lVar15 = *(long *)(lVar12 + 0x10);
            lVar13 = *(long *)PTR_DAT_09f2d6c0;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            uVar18 = *(uint *)(lVar12 + 0x18);
            if (uVar18 < *(uint *)(lVar15 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar18 + 1;
              *(undefined1 (*) [16])(lVar15 + (long)(int)uVar18 * 0x10 + 0x20) = auVar19;
            }
            else {
              FUN_05b19770(lVar12,auVar19._0_8_,auVar19._8_8_,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
            plVar10 = *(long **)(in_stack_00000030 + 0x68);
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            uVar18 = in_stack_00000040[0x20];
            lVar12 = thunk_FUN_04485110(lVar9,*(undefined8 *)(*plVar10 + 0x40));
            if (lVar12 == 0) {
              uVar11 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
              FUN_04447d10(uVar11,0);
            }
            if (*(uint *)(plVar10 + 3) <= uVar18) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            plVar10[(long)(int)uVar18 + 4] = lVar9;
            thunk_FUN_044bb4b4(plVar10 + (long)(int)uVar18 + 4,lVar9);
          }
        }
        else {
          lVar9 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d350);
          FUN_07399b40(lVar9,*(undefined8 *)PTR_DAT_09f2d4f8);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          FUN_076a80cc(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                       in_stack_00000040[0x20],lVar9 + 0x10,&stack0x00000128,1);
          lVar12 = *(long *)(in_stack_00000040 + 0x10);
          auVar19 = FUN_0613d160(&stack0x00000128,*(undefined8 *)PTR_DAT_09f2aca0);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar15 = *(long *)(lVar12 + 0x10);
          lVar13 = *(long *)PTR_DAT_09f2d6c0;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          uVar18 = *(uint *)(lVar12 + 0x18);
          if (uVar18 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar12 + 0x18) = uVar18 + 1;
            *(undefined1 (*) [16])(lVar15 + (long)(int)uVar18 * 0x10 + 0x20) = auVar19;
          }
          else {
            FUN_05b19770(lVar12,auVar19._0_8_,auVar19._8_8_,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          plVar10 = *(long **)(in_stack_00000030 + 0x68);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          uVar18 = in_stack_00000040[0x20];
          lVar12 = thunk_FUN_04485110(lVar9,*(undefined8 *)(*plVar10 + 0x40));
          if (lVar12 == 0) {
            uVar11 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
            FUN_04447d10(uVar11,0);
          }
          if (*(uint *)(plVar10 + 3) <= uVar18) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          plVar10[(long)(int)uVar18 + 4] = lVar9;
          thunk_FUN_044bb4b4(plVar10 + (long)(int)uVar18 + 4,lVar9);
        }
        break;
      case 4:
        lVar9 = *(long *)(in_stack_00000030 + 0x70);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (*(uint *)(lVar9 + 0x18) <= (uint)in_stack_00000040[0x20]) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        if ((*(uint *)(lVar9 + (long)(int)in_stack_00000040[0x20] * 4 + 0x20) >> 0xb & 1) != 0) {
          lVar9 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d358);
          FUN_07399b00(lVar9,*(undefined8 *)PTR_DAT_09f2d510);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          FUN_076a850c(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                       in_stack_00000040[0x20],lVar9 + 0x10,&stack0x00000110);
          lVar12 = *(long *)(in_stack_00000040 + 0x10);
          auVar19 = FUN_0613d160(&stack0x00000110,*(undefined8 *)PTR_DAT_09f2aca0);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar15 = *(long *)(lVar12 + 0x10);
          lVar13 = *(long *)PTR_DAT_09f2d6c0;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          uVar18 = *(uint *)(lVar12 + 0x18);
          if (uVar18 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar12 + 0x18) = uVar18 + 1;
            *(undefined1 (*) [16])(lVar15 + (long)(int)uVar18 * 0x10 + 0x20) = auVar19;
          }
          else {
            FUN_05b19770(lVar12,auVar19._0_8_,auVar19._8_8_,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          plVar10 = *(long **)(in_stack_00000030 + 0x68);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          uVar18 = in_stack_00000040[0x20];
          lVar12 = thunk_FUN_04485110(lVar9,*(undefined8 *)(*plVar10 + 0x40));
          if (lVar12 == 0) {
            uVar11 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
            FUN_04447d10(uVar11,0);
          }
          if (*(uint *)(plVar10 + 3) <= uVar18) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          plVar10[(long)(int)uVar18 + 4] = lVar9;
          thunk_FUN_044bb4b4(plVar10 + (long)(int)uVar18 + 4,lVar9);
        }
        break;
      case 7:
        lVar9 = *(long *)(in_stack_00000030 + 0x70);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (*(uint *)(lVar9 + 0x18) <= (uint)in_stack_00000040[0x20]) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        if (*(int *)(lVar9 + (long)(int)in_stack_00000040[0x20] * 4 + 0x20) == 0x100) {
          lVar9 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d398);
          FUN_07399ae0(lVar9,*(undefined8 *)PTR_DAT_09f2d508);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          FUN_076a7ce8(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                       in_stack_00000040[0x20],lVar9 + 0x10,&stack0x00000140);
          lVar12 = *(long *)(in_stack_00000040 + 0x10);
          auVar19 = FUN_0613d160(&stack0x00000140,*(undefined8 *)PTR_DAT_09f2aca0);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar15 = *(long *)(lVar12 + 0x10);
          lVar13 = *(long *)PTR_DAT_09f2d6c0;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          uVar18 = *(uint *)(lVar12 + 0x18);
          if (uVar18 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar12 + 0x18) = uVar18 + 1;
            *(undefined1 (*) [16])(lVar15 + (long)(int)uVar18 * 0x10 + 0x20) = auVar19;
          }
          else {
            FUN_05b19770(lVar12,auVar19._0_8_,auVar19._8_8_,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          plVar10 = *(long **)(in_stack_00000030 + 0x68);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          uVar18 = in_stack_00000040[0x20];
          lVar12 = thunk_FUN_04485110(lVar9,*(undefined8 *)(*plVar10 + 0x40));
          if (lVar12 == 0) {
            uVar11 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
            FUN_04447d10(uVar11,0);
          }
          if (*(uint *)(plVar10 + 3) <= uVar18) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          plVar10[(long)(int)uVar18 + 4] = lVar9;
          thunk_FUN_044bb4b4(plVar10 + (long)(int)uVar18 + 4,lVar9);
        }
      }
      plVar10 = *(long **)(in_stack_00000030 + 0x20);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar9 = *plVar10;
      uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_09f2ce28) {
            puVar8 = (undefined8 *)(lVar9 + (long)(*piVar16 + 2) * 0x10 + 0x138);
            goto LAB_076b1af0;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)FUN_044822ac(plVar10,*(long *)PTR_DAT_09f2ce28,2);
LAB_076b1af0:
      lVar9 = (*(code *)*puVar8)(plVar10,puVar8[1]);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      in_stack_00000198 = FUN_07ab3bc0(lVar9,0);
      uVar14 = FUN_0795ad28(&stack0x00000198,0);
      if ((uVar14 & 1) == 0) {
        *in_stack_00000040 = 1;
        *(undefined8 *)(in_stack_00000040 + 0x1e) = in_stack_00000198;
        thunk_FUN_044bb4b4(in_stack_00000040 + 0x1e,0);
        if (*(int *)(*(long *)PTR_DAT_09f2cdd8 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_04639174(in_stack_00000040 + 2,&stack0x00000198,in_stack_00000040,
                     *(undefined8 *)PTR_DAT_09f2d528);
        return;
      }
      FUN_0795adf4(&stack0x00000198,0);
    }
    iVar6 = in_stack_00000040[0x20] + 1;
    in_stack_00000040[0x20] = iVar6;
  } while( true );
}


