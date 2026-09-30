/*
FUNCTION_NAME: MetaXRAcousticNativeInterface.UnityNativeInterface$$SetEnabled
ENTRY_POINT: 076b0d50
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_21;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x076b1e1c) */
/* WARNING: Removing unreachable block (ram,0x076b0c7c) */
/* WARNING: Removing unreachable block (ram,0x076b2068) */
/* WARNING: Removing unreachable block (ram,0x076b0fc4) */
/* WARNING: Removing unreachable block (ram,0x076b0fb8) */

void MetaXRAcousticNativeInterface_UnityNativeInterface__SetEnabled(undefined8 param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  int *piVar19;
  long *unaff_x20;
  uint uVar20;
  long *unaff_x22;
  long *unaff_x24;
  long *unaff_x25;
  long lVar21;
  long unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined1 auVar22 [16];
  long in_stack_00000028;
  long in_stack_00000030;
  uint in_stack_00000038;
  undefined4 *in_stack_00000040;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_00000080;
  int in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  long in_stack_000000c0;
  char in_stack_000000c8;
  char in_stack_000000e0;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  if (param_2 == 1) {
    plVar13 = (long *)__cxa_begin_catch(param_1);
    lVar21 = *plVar13;
    __cxa_end_catch();
    iVar6 = 0;
code_r0x076b0924:
    if ((in_stack_00000028 < 0) && (unaff_x25 != (long *)0x0)) {
      lVar15 = *unaff_x25;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_09f1f008) {
            puVar10 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_076b0984;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_044822ac(unaff_x25,*(long *)PTR_DAT_09f1f008,0);
LAB_076b0984:
      (*(code *)*puVar10)(unaff_x25,puVar10[1]);
    }
    if (lVar21 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e3c(lVar21);
    }
    if ((iVar6 != 0x5c) && (iVar6 != 0)) {
      return;
    }
    plVar13 = (long *)(**(code **)(*unaff_x24 + 0x178))
                                (unaff_x24,*(undefined8 *)(*unaff_x24 + 0x180));
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar21 = *plVar13;
    uVar17 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_09f2d648) {
          puVar10 = (undefined8 *)(lVar21 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_076b0a14;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar10 = (undefined8 *)FUN_044822ac(plVar13,*(long *)PTR_DAT_09f2d648,0);
LAB_076b0a14:
    plVar13 = (long *)(*(code *)*puVar10)(plVar13,puVar10[1]);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    do {
      lVar21 = *plVar13;
      uVar17 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *unaff_x20) {
            puVar10 = (undefined8 *)(lVar21 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_076b0a74;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_044822ac(plVar13,*unaff_x20,0);
LAB_076b0a74:
      uVar17 = (*(code *)*puVar10)(plVar13,puVar10[1]);
      if ((uVar17 & 1) == 0) goto LAB_076b0bfc;
      lVar21 = *plVar13;
      uVar17 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *unaff_x28) {
            puVar10 = (undefined8 *)(lVar21 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_076b0ad0;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_044822ac(plVar13,*unaff_x28,0);
LAB_076b0ad0:
      plVar11 = (long *)(*(code *)*puVar10)(plVar13,puVar10[1]);
      plVar12 = (long *)(**(code **)(*unaff_x24 + 0x188))
                                  (unaff_x24,*(undefined8 *)(*unaff_x24 + 400));
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar15 = *plVar12;
      lVar21 = plVar11[2];
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *unaff_x29) {
            puVar10 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
            goto MetaXRAcousticNativeInterface___ctor;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_044822ac(plVar12,*unaff_x29,0);
MetaXRAcousticNativeInterface___ctor:
      lVar21 = (*(code *)*puVar10)(plVar12,(int)lVar21,puVar10[1]);
      if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar21 = (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180));
      if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      iVar6 = FUN_076bd41c(lVar21,0);
      if (iVar6 - 2U < 4) {
                    /* WARNING: Could not recover jumptable at 0x076b0b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(MetaXRAcousticNativeInterface_UnityNativeInterface__ovrAudio_SetAcousticModel +
          (ulong)*(byte *)(unaff_x27 + (ulong)(iVar6 - 2U)) * 4 + 4))();
        return;
      }
    } while( true );
  }
  if ((in_stack_00000028 < 0) && (unaff_x25 != (long *)0x0)) {
    lVar21 = *unaff_x25;
    uVar17 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_09f1f008) {
          puVar10 = (undefined8 *)(lVar21 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_076b0fa8;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar10 = (undefined8 *)FUN_044822ac();
LAB_076b0fa8:
    (*(code *)*puVar10)();
  }
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_0452a004(param_1);
  }
  puVar10 = (undefined8 *)__cxa_begin_catch(param_1);
  uVar14 = thunk_FUN_044adef4(PTR_DAT_09f1e5c0);
  uVar17 = thunk_FUN_044a9a40(uVar14,*(undefined8 *)*puVar10);
  if ((uVar17 & 1) != 0) {
    uVar14 = *puVar10;
    *(undefined8 *)(&stack0x000000a0 + (long)in_stack_000000a8 * 8) = uVar14;
    in_stack_000000a8 = in_stack_000000a8 + 1;
    __cxa_end_catch();
    *in_stack_00000040 = 0xfffffffe;
    *(undefined8 *)(in_stack_00000040 + 0xe) = 0;
    thunk_FUN_044bb4b4(in_stack_00000040 + 0xe,0);
    *(undefined8 *)(in_stack_00000040 + 0x10) = 0;
    thunk_FUN_044bb4b4(in_stack_00000040 + 0x10,0);
    lVar21 = thunk_FUN_044adef4(PTR_DAT_09f2cdd8);
    if (*(int *)(lVar21 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar8 = thunk_FUN_044adef4(PTR_DAT_09f2ce30);
    FUN_066e25a0(in_stack_00000040 + 2,uVar14,uVar8);
    return;
  }
  puVar9 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar9 = *puVar10;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar9,&PTR_PTR_0991e038,0);
LAB_076b0bfc:
  if ((in_stack_00000028 < 0) && (plVar13 != (long *)0x0)) {
    lVar21 = *plVar13;
    uVar17 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_09f1f008) {
          puVar10 = (undefined8 *)(lVar21 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_076b0c64;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar10 = (undefined8 *)FUN_044822ac(plVar13,*(long *)PTR_DAT_09f1f008,0);
LAB_076b0c64:
    (*(code *)*puVar10)(plVar13,puVar10[1]);
  }
  plVar13 = *(long **)(in_stack_00000040 + 8);
  in_stack_00000038 = in_stack_00000038 + 1;
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  plVar13 = (long *)(**(code **)(*plVar13 + 0x188))(plVar13,*(undefined8 *)(*plVar13 + 400));
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar21 = *plVar13;
  uVar17 = (ulong)*(ushort *)(lVar21 + 0x12e);
  if (uVar17 != 0) {
    piVar19 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_09f2d678) {
        puVar10 = (undefined8 *)(lVar21 + (long)*piVar19 * 0x10 + 0x138);
        goto LAB_076b0724;
      }
      uVar17 = uVar17 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar17 != 0);
  }
  puVar10 = (undefined8 *)FUN_044822ac(plVar13,*(long *)PTR_DAT_09f2d678,0);
LAB_076b0724:
  iVar6 = (*(code *)*puVar10)(plVar13,puVar10[1]);
  if ((int)in_stack_00000038 < iVar6) {
    plVar13 = *(long **)(in_stack_00000040 + 8);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    plVar13 = (long *)(**(code **)(*plVar13 + 0x188))(plVar13,*(undefined8 *)(*plVar13 + 400));
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar21 = *plVar13;
    uVar17 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_09f2d680) {
          puVar10 = (undefined8 *)(lVar21 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_076b07b0;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar10 = (undefined8 *)FUN_044822ac(plVar13,*(long *)PTR_DAT_09f2d680,0);
LAB_076b07b0:
    unaff_x24 = (long *)(*(code *)*puVar10)(plVar13,in_stack_00000038,puVar10[1]);
    if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    plVar13 = (long *)(**(code **)(*unaff_x24 + 0x188))(unaff_x24,*(undefined8 *)(*unaff_x24 + 400))
    ;
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar21 = *plVar13;
    uVar17 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_09f2d638) {
          puVar10 = (undefined8 *)(lVar21 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_076b0838;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar10 = (undefined8 *)FUN_044822ac(plVar13,*(long *)PTR_DAT_09f2d638,0);
LAB_076b0838:
    unaff_x25 = (long *)(*(code *)*puVar10)(plVar13,puVar10[1]);
    if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    do {
      lVar21 = *unaff_x25;
      uVar17 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *unaff_x20) {
            puVar10 = (undefined8 *)(lVar21 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_076b0898;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_044822ac(unaff_x25,*unaff_x20,0);
LAB_076b0898:
      uVar17 = (*(code *)*puVar10)(unaff_x25,puVar10[1]);
      if ((uVar17 & 1) == 0) goto LAB_076b091c;
      lVar21 = *unaff_x25;
      uVar17 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *unaff_x22) {
            puVar10 = (undefined8 *)(lVar21 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_076b08f4;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_044822ac(unaff_x25,*unaff_x22,0);
LAB_076b08f4:
      lVar21 = (*(code *)*puVar10)(unaff_x25,puVar10[1]);
      if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      FUN_076a6f40(in_stack_00000030,*(undefined4 *)(lVar21 + 0x10),0x200);
    } while( true );
  }
  plVar13 = *(long **)(in_stack_00000040 + 8);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  plVar13 = (long *)(**(code **)(*plVar13 + 0x178))(plVar13,*(undefined8 *)(*plVar13 + 0x180));
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar21 = *plVar13;
  uVar17 = (ulong)*(ushort *)(lVar21 + 0x12e);
  if (uVar17 == 0) goto LAB_076b0e04;
  piVar19 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
  goto LAB_076b0dec;
LAB_076b091c:
  lVar21 = 0;
  iVar6 = 0x5c;
  goto code_r0x076b0924;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar19 = piVar19 + 4;
    if (uVar17 == 0) break;
LAB_076b0dec:
    if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_09f2d010) {
      puVar10 = (undefined8 *)(lVar21 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_076b0e20;
    }
  }
LAB_076b0e04:
  puVar10 = (undefined8 *)FUN_044822ac(plVar13,*(long *)PTR_DAT_09f2d010,0);
LAB_076b0e20:
  uVar7 = (*(code *)*puVar10)(plVar13,puVar10[1]);
  uVar14 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f2d4e8,uVar7);
  if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  *(undefined8 *)(in_stack_00000030 + 0x68) = uVar14;
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
        uVar20 = 0;
        do {
          plVar13 = *(long **)(in_stack_00000040 + 8);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          plVar13 = (long *)(**(code **)(*plVar13 + 0x1f8))
                                      (plVar13,*(undefined8 *)(*plVar13 + 0x200));
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar21 = *plVar13;
          uVar17 = (ulong)*(ushort *)(lVar21 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_09f2d160) {
                puVar10 = (undefined8 *)(lVar21 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_076b1bec;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar10 = (undefined8 *)FUN_044822ac(plVar13,*(long *)PTR_DAT_09f2d160,0);
LAB_076b1bec:
          lVar21 = (*(code *)*puVar10)(plVar13,in_stack_00000038,puVar10[1]);
          lVar15 = *(long *)(in_stack_00000030 + 0x98);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          if (*(uint *)(lVar15 + 0x18) <= in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          lVar15 = *(long *)(lVar15 + (long)(int)in_stack_00000038 * 8 + 0x20);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar15 = FUN_074427bc(lVar15,*(undefined8 *)PTR_DAT_09f2d5a0);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          FUN_06b56d04(&stack0x00000070,lVar15,*(undefined8 *)PTR_DAT_09f2d718);
          in_stack_000000b8 = in_stack_00000078;
          in_stack_000000b0 = in_stack_00000070;
          in_stack_000000c0 = in_stack_00000080;
          while (uVar17 = System_Collections_Generic_EqualityComparer<ConstraintSource>__System_Collections_IEqualityComparer_GetHashCode
                                    (&stack0x000000b0,*(undefined8 *)PTR_DAT_09f2d600),
                lVar15 = in_stack_000000c0, (uVar17 & 1) != 0) {
            if (in_stack_000000c0 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if (*(int *)(in_stack_000000c0 + 0x18) < 1) {
              plVar13 = (long *)0x0;
            }
            else {
              iVar6 = 0;
              plVar13 = (long *)0x0;
              do {
                auVar22 = FUN_059f3e50(lVar15,iVar6,*(undefined8 *)puVar3);
                lVar18 = auVar22._8_8_;
                if (plVar13 == (long *)0x0) {
                  if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e44();
                  }
                  uVar7 = *(undefined4 *)(lVar15 + 0x18);
                  uVar14 = *(undefined8 *)(lVar21 + 0x10);
                  plVar13 = (long *)thunk_FUN_0448520c(*(undefined8 *)puVar4);
                  FUN_076c14ec(plVar13,in_stack_00000038,uVar20,uVar7,uVar14,0);
                }
                else {
                  lVar16 = *(long *)puVar4;
                  bVar1 = *(byte *)(lVar16 + 0x130);
                  if (*(byte *)(*plVar13 + 0x130) < bVar1) goto LAB_076b1e40;
                  if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) != lVar16) {
                    plVar13 = (long *)0x0;
                  }
                }
                if (plVar13 == (long *)0x0) {
LAB_076b1e40:
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                FUN_076c1680(plVar13,iVar6,auVar22._0_8_ & 0xffffffff,0);
                if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                if (*(long *)(lVar18 + 0x28) != 0) {
                  if (*(long *)(in_stack_00000040 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e44();
                  }
                  lVar16 = FUN_0744290c(*(long *)(in_stack_00000040 + 0xe),lVar18,
                                        *(undefined8 *)PTR_DAT_09f2d590);
                  plVar13[5] = lVar16;
                  thunk_FUN_044bb4b4();
                }
                FUN_076c1fc8(plVar13,iVar6,*(undefined4 *)(lVar18 + 0x1c),0);
                iVar6 = iVar6 + 1;
              } while (iVar6 < *(int *)(lVar15 + 0x18));
            }
            plVar11 = *(long **)(in_stack_00000030 + 0x88);
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if ((plVar13 != (long *)0x0) &&
               (lVar15 = thunk_FUN_04485110(plVar13,*(undefined8 *)(*plVar11 + 0x40)), lVar15 == 0))
            {
              uVar14 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
              FUN_04447d10(uVar14,0);
            }
            if (*(uint *)(plVar11 + 3) <= uVar20) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            plVar11[(long)(int)uVar20 + 4] = (long)plVar13;
            thunk_FUN_044bb4b4(plVar11 + (long)(int)uVar20 + 4,plVar13);
            uVar20 = uVar20 + 1;
          }
          if (in_stack_00000028 < 0) {
            FUN_05260da0(&stack0x000000b0,*(undefined8 *)PTR_DAT_09f2d5f0);
          }
          in_stack_00000038 = in_stack_00000038 + 1;
        } while ((int)in_stack_00000038 < (int)in_stack_00000040[0xc]);
      }
      if (*(long *)(in_stack_00000040 + 0x10) != 0) {
        uVar14 = FUN_05b1b2ac(*(long *)(in_stack_00000040 + 0x10),*(undefined8 *)PTR_DAT_09f2d6c8);
        FUN_05f9dd28(&stack0x000001e0,uVar14,4,*(undefined8 *)PTR_DAT_09f2d700);
        auVar22 = FUN_094b28ac(in_stack_000001e0,in_stack_000001e8,0);
        *(undefined1 (*) [16])(in_stack_00000030 + 0x78) = auVar22;
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
    plVar13 = *(long **)(in_stack_00000040 + 8);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    plVar13 = (long *)(**(code **)(*plVar13 + 0x178))(plVar13,*(undefined8 *)(*plVar13 + 0x180));
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar21 = *plVar13;
    uVar7 = in_stack_00000040[0x20];
    uVar17 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_09f2d018) {
          puVar10 = (undefined8 *)(lVar21 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_076b12bc;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar10 = (undefined8 *)FUN_044822ac(plVar13,*(long *)PTR_DAT_09f2d018,0);
LAB_076b12bc:
    lVar21 = (*(code *)*puVar10)(plVar13,uVar7,puVar10[1]);
    if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (-1 < *(int *)(lVar21 + 0x18)) {
      uVar5 = Meta_XR_BuildingBlocks_RoomMeshController_<Start>d__4__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                        (lVar21,0);
      switch(uVar5) {
      case 1:
        lVar21 = *(long *)(in_stack_00000030 + 0x70);
        if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (*(uint *)(lVar21 + 0x18) <= (uint)in_stack_00000040[0x20]) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        iVar6 = *(int *)(lVar21 + (long)(int)in_stack_00000040[0x20] * 4 + 0x20);
        if (iVar6 < 0x200) {
          if ((iVar6 == 2) || (iVar6 == 4)) {
            lVar21 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d240);
            System_Action<OVRPlugin_Qpl_Annotation_Builder_Entry>__Invoke
                      (lVar21,*(undefined8 *)PTR_DAT_09f2d4f0);
            if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            lVar15 = *(long *)(in_stack_00000030 + 0x70);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            uVar20 = in_stack_00000040[0x20];
            if (*(uint *)(lVar15 + 0x18) <= uVar20) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            FUN_076a76c4(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),(long)(int)uVar20,
                         lVar21 + 0x10,&stack0x00000158,lVar21 + 0x18,
                         *(int *)(lVar15 + (long)(int)uVar20 * 4 + 0x20) == 4);
            lVar15 = *(long *)(in_stack_00000040 + 0x10);
            auVar22 = FUN_0613d160(&stack0x00000158,*(undefined8 *)PTR_DAT_09f2aca0);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            lVar18 = *(long *)(lVar15 + 0x10);
            lVar16 = *(long *)PTR_DAT_09f2d6c0;
            *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            uVar20 = *(uint *)(lVar15 + 0x18);
            if (uVar20 < *(uint *)(lVar18 + 0x18)) {
              *(uint *)(lVar15 + 0x18) = uVar20 + 1;
              *(undefined1 (*) [16])(lVar18 + (long)(int)uVar20 * 0x10 + 0x20) = auVar22;
            }
            else {
              FUN_05b19770(lVar15,auVar22._0_8_,auVar22._8_8_,
                           *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
            }
            plVar13 = *(long **)(in_stack_00000030 + 0x68);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            uVar20 = in_stack_00000040[0x20];
            lVar15 = thunk_FUN_04485110(lVar21,*(undefined8 *)(*plVar13 + 0x40));
            if (lVar15 == 0) {
              uVar14 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
              FUN_04447d10(uVar14,0);
            }
            if (*(uint *)(plVar13 + 3) <= uVar20) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            plVar13[(long)(int)uVar20 + 4] = lVar21;
            thunk_FUN_044bb4b4(plVar13 + (long)(int)uVar20 + 4,lVar21);
          }
        }
        else if ((iVar6 == 0x200) || (iVar6 == 0x2000)) {
          lVar21 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d518);
          FUN_07399b20(lVar21,*(undefined8 *)PTR_DAT_09f2d500);
          FUN_076a89e0(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                       in_stack_00000040[0x20],&stack0x000000e0,&stack0x000000c8);
          if (in_stack_000000e0 != '\0') {
            auVar22 = FUN_0612f58c(&stack0x000000e0,*(undefined8 *)PTR_DAT_09f2d328);
            if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            *(undefined1 (*) [16])(lVar21 + 0x10) = auVar22;
          }
          if (in_stack_000000c8 != '\0') {
            lVar15 = *(long *)(in_stack_00000040 + 0x10);
            auVar22 = FUN_0613d160(&stack0x000000c8,*(undefined8 *)PTR_DAT_09f2aca0);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            lVar18 = *(long *)(lVar15 + 0x10);
            lVar16 = *(long *)PTR_DAT_09f2d6c0;
            *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            uVar20 = *(uint *)(lVar15 + 0x18);
            if (uVar20 < *(uint *)(lVar18 + 0x18)) {
              *(uint *)(lVar15 + 0x18) = uVar20 + 1;
              *(undefined1 (*) [16])(lVar18 + (long)(int)uVar20 * 0x10 + 0x20) = auVar22;
            }
            else {
              FUN_05b19770(lVar15,auVar22._0_8_,auVar22._8_8_,
                           *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
            }
          }
          plVar13 = *(long **)(in_stack_00000030 + 0x68);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          uVar20 = in_stack_00000040[0x20];
          if ((lVar21 != 0) &&
             (lVar15 = thunk_FUN_04485110(lVar21,*(undefined8 *)(*plVar13 + 0x40)), lVar15 == 0)) {
            uVar14 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
            FUN_04447d10(uVar14,0);
          }
          if (*(uint *)(plVar13 + 3) <= uVar20) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          plVar13[(long)(int)uVar20 + 4] = lVar21;
          thunk_FUN_044bb4b4(plVar13 + (long)(int)uVar20 + 4,lVar21);
        }
        break;
      case 3:
        lVar21 = *(long *)(in_stack_00000030 + 0x70);
        if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (*(uint *)(lVar21 + 0x18) <= (uint)in_stack_00000040[0x20]) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        uVar20 = *(uint *)(lVar21 + (long)(int)in_stack_00000040[0x20] * 4 + 0x20);
        if ((uVar20 >> 10 & 1) == 0) {
          if ((uVar20 >> 0xc & 1) != 0) {
            lVar21 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d350);
            FUN_07399b40(lVar21,*(undefined8 *)PTR_DAT_09f2d4f8);
            if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            FUN_076a80cc(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                         in_stack_00000040[0x20],lVar21 + 0x10,&stack0x000000f8,0);
            lVar15 = *(long *)(in_stack_00000040 + 0x10);
            auVar22 = FUN_0613d160(&stack0x000000f8,*(undefined8 *)PTR_DAT_09f2aca0);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            lVar18 = *(long *)(lVar15 + 0x10);
            lVar16 = *(long *)PTR_DAT_09f2d6c0;
            *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            uVar20 = *(uint *)(lVar15 + 0x18);
            if (uVar20 < *(uint *)(lVar18 + 0x18)) {
              *(uint *)(lVar15 + 0x18) = uVar20 + 1;
              *(undefined1 (*) [16])(lVar18 + (long)(int)uVar20 * 0x10 + 0x20) = auVar22;
            }
            else {
              FUN_05b19770(lVar15,auVar22._0_8_,auVar22._8_8_,
                           *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
            }
            plVar13 = *(long **)(in_stack_00000030 + 0x68);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            uVar20 = in_stack_00000040[0x20];
            lVar15 = thunk_FUN_04485110(lVar21,*(undefined8 *)(*plVar13 + 0x40));
            if (lVar15 == 0) {
              uVar14 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
              FUN_04447d10(uVar14,0);
            }
            if (*(uint *)(plVar13 + 3) <= uVar20) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            plVar13[(long)(int)uVar20 + 4] = lVar21;
            thunk_FUN_044bb4b4(plVar13 + (long)(int)uVar20 + 4,lVar21);
          }
        }
        else {
          lVar21 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d350);
          FUN_07399b40(lVar21,*(undefined8 *)PTR_DAT_09f2d4f8);
          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          FUN_076a80cc(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                       in_stack_00000040[0x20],lVar21 + 0x10,&stack0x00000128,1);
          lVar15 = *(long *)(in_stack_00000040 + 0x10);
          auVar22 = FUN_0613d160(&stack0x00000128,*(undefined8 *)PTR_DAT_09f2aca0);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar18 = *(long *)(lVar15 + 0x10);
          lVar16 = *(long *)PTR_DAT_09f2d6c0;
          *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          uVar20 = *(uint *)(lVar15 + 0x18);
          if (uVar20 < *(uint *)(lVar18 + 0x18)) {
            *(uint *)(lVar15 + 0x18) = uVar20 + 1;
            *(undefined1 (*) [16])(lVar18 + (long)(int)uVar20 * 0x10 + 0x20) = auVar22;
          }
          else {
            FUN_05b19770(lVar15,auVar22._0_8_,auVar22._8_8_,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          plVar13 = *(long **)(in_stack_00000030 + 0x68);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          uVar20 = in_stack_00000040[0x20];
          lVar15 = thunk_FUN_04485110(lVar21,*(undefined8 *)(*plVar13 + 0x40));
          if (lVar15 == 0) {
            uVar14 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
            FUN_04447d10(uVar14,0);
          }
          if (*(uint *)(plVar13 + 3) <= uVar20) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          plVar13[(long)(int)uVar20 + 4] = lVar21;
          thunk_FUN_044bb4b4(plVar13 + (long)(int)uVar20 + 4,lVar21);
        }
        break;
      case 4:
        lVar21 = *(long *)(in_stack_00000030 + 0x70);
        if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (*(uint *)(lVar21 + 0x18) <= (uint)in_stack_00000040[0x20]) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        if ((*(uint *)(lVar21 + (long)(int)in_stack_00000040[0x20] * 4 + 0x20) >> 0xb & 1) != 0) {
          lVar21 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d358);
          FUN_07399b00(lVar21,*(undefined8 *)PTR_DAT_09f2d510);
          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          FUN_076a850c(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                       in_stack_00000040[0x20],lVar21 + 0x10,&stack0x00000110);
          lVar15 = *(long *)(in_stack_00000040 + 0x10);
          auVar22 = FUN_0613d160(&stack0x00000110,*(undefined8 *)PTR_DAT_09f2aca0);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar18 = *(long *)(lVar15 + 0x10);
          lVar16 = *(long *)PTR_DAT_09f2d6c0;
          *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          uVar20 = *(uint *)(lVar15 + 0x18);
          if (uVar20 < *(uint *)(lVar18 + 0x18)) {
            *(uint *)(lVar15 + 0x18) = uVar20 + 1;
            *(undefined1 (*) [16])(lVar18 + (long)(int)uVar20 * 0x10 + 0x20) = auVar22;
          }
          else {
            FUN_05b19770(lVar15,auVar22._0_8_,auVar22._8_8_,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          plVar13 = *(long **)(in_stack_00000030 + 0x68);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          uVar20 = in_stack_00000040[0x20];
          lVar15 = thunk_FUN_04485110(lVar21,*(undefined8 *)(*plVar13 + 0x40));
          if (lVar15 == 0) {
            uVar14 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
            FUN_04447d10(uVar14,0);
          }
          if (*(uint *)(plVar13 + 3) <= uVar20) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          plVar13[(long)(int)uVar20 + 4] = lVar21;
          thunk_FUN_044bb4b4(plVar13 + (long)(int)uVar20 + 4,lVar21);
        }
        break;
      case 7:
        lVar21 = *(long *)(in_stack_00000030 + 0x70);
        if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (*(uint *)(lVar21 + 0x18) <= (uint)in_stack_00000040[0x20]) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        if (*(int *)(lVar21 + (long)(int)in_stack_00000040[0x20] * 4 + 0x20) == 0x100) {
          lVar21 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d398);
          FUN_07399ae0(lVar21,*(undefined8 *)PTR_DAT_09f2d508);
          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          FUN_076a7ce8(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                       in_stack_00000040[0x20],lVar21 + 0x10,&stack0x00000140);
          lVar15 = *(long *)(in_stack_00000040 + 0x10);
          auVar22 = FUN_0613d160(&stack0x00000140,*(undefined8 *)PTR_DAT_09f2aca0);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar18 = *(long *)(lVar15 + 0x10);
          lVar16 = *(long *)PTR_DAT_09f2d6c0;
          *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          uVar20 = *(uint *)(lVar15 + 0x18);
          if (uVar20 < *(uint *)(lVar18 + 0x18)) {
            *(uint *)(lVar15 + 0x18) = uVar20 + 1;
            *(undefined1 (*) [16])(lVar18 + (long)(int)uVar20 * 0x10 + 0x20) = auVar22;
          }
          else {
            FUN_05b19770(lVar15,auVar22._0_8_,auVar22._8_8_,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          plVar13 = *(long **)(in_stack_00000030 + 0x68);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          uVar20 = in_stack_00000040[0x20];
          lVar15 = thunk_FUN_04485110(lVar21,*(undefined8 *)(*plVar13 + 0x40));
          if (lVar15 == 0) {
            uVar14 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
            FUN_04447d10(uVar14,0);
          }
          if (*(uint *)(plVar13 + 3) <= uVar20) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          plVar13[(long)(int)uVar20 + 4] = lVar21;
          thunk_FUN_044bb4b4(plVar13 + (long)(int)uVar20 + 4,lVar21);
        }
      }
      plVar13 = *(long **)(in_stack_00000030 + 0x20);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar21 = *plVar13;
      uVar17 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_09f2ce28) {
            puVar10 = (undefined8 *)(lVar21 + (long)(*piVar19 + 2) * 0x10 + 0x138);
            goto LAB_076b1af0;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_044822ac(plVar13,*(long *)PTR_DAT_09f2ce28,2);
LAB_076b1af0:
      lVar21 = (*(code *)*puVar10)(plVar13,puVar10[1]);
      if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      in_stack_00000198 = FUN_07ab3bc0(lVar21,0);
      uVar17 = FUN_0795ad28(&stack0x00000198,0);
      if ((uVar17 & 1) == 0) {
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


