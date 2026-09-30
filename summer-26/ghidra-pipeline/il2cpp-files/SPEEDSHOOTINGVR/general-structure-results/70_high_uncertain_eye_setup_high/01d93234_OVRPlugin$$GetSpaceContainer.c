/*
FUNCTION_NAME: OVRPlugin$$GetSpaceContainer
ENTRY_POINT: 01d93234
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01d94010) */
/* WARNING: Removing unreachable block (ram,0x01d94110) */
/* WARNING: Removing unreachable block (ram,0x01d93ed0) */
/* WARNING: Removing unreachable block (ram,0x01d936dc) */
/* WARNING: Removing unreachable block (ram,0x01d93924) */
/* WARNING: Removing unreachable block (ram,0x01d94118) */

undefined8 OVRPlugin__GetSpaceContainer(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  int *piVar19;
  long *unaff_x19;
  byte unaff_w20;
  long *unaff_x21;
  long *unaff_x23;
  int iVar20;
  long *unaff_x24;
  long unaff_x27;
  long lVar21;
  long in_stack_00000008;
  
  if (*(int *)(*param_1 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  uVar8 = FUN_01d611c4();
  if ((uVar8 & 1) == 0) {
    bVar6 = 0;
  }
  else {
    if (unaff_x19 == (long *)0x0) goto LAB_01d9400c;
    bVar6 = FUN_01d62314();
    bVar6 = bVar6 & 1;
  }
  if ((bVar6 & unaff_w20) != 0) {
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    lVar9 = FUN_01d92954();
    if (lVar9 == 0) goto LAB_01d9400c;
    unaff_w20 = unaff_w20 & *(char *)(lVar9 + 0x15) != '\0';
  }
  puVar2 = PTR_DAT_0234be70;
  if (unaff_x21 != (long *)0x0) {
    lVar9 = *unaff_x21;
    uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar8 != 0) {
      piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *unaff_x23) {
          puVar10 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_01d93300;
        }
        uVar8 = uVar8 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)FUN_0103c348();
LAB_01d93300:
    uVar7 = (*(code *)*puVar10)();
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01022c14(*(long *)puVar2);
    }
    uVar7 = FUN_01d4b018(uVar7,0x10,0);
    if ((unaff_w20 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_0234bc58 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      uVar8 = FUN_01d603ec();
      if ((uVar8 & 1) == 0) {
        lVar9 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_023599b0);
        FUN_017d2874(lVar9,uVar7,*(undefined8 *)PTR_DAT_023599a8);
        lVar11 = *unaff_x21;
        uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar8 != 0) {
          piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_02359980) {
              puVar10 = (undefined8 *)(lVar11 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_01d93b90;
            }
            uVar8 = uVar8 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar8 != 0);
        }
        puVar10 = (undefined8 *)FUN_0103c348();
LAB_01d93b90:
        plVar12 = (long *)(*(code *)*puVar10)();
        puVar5 = PTR_DAT_02359998;
        puVar4 = PTR_DAT_02359988;
        puVar2 = PTR_DAT_0234bef8;
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        do {
          lVar11 = *plVar12;
          uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar8 != 0) {
            piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)puVar2) {
                puVar10 = (undefined8 *)(lVar11 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_01d93c08;
              }
              uVar8 = uVar8 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)FUN_0103c348(plVar12,*(long *)puVar2,0);
LAB_01d93c08:
          uVar8 = (*(code *)*puVar10)(plVar12,puVar10[1]);
          if ((uVar8 & 1) == 0) {
            if (plVar12 == (long *)0x0) goto joined_r0x01d93fcc;
            lVar11 = *plVar12;
            uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar8 == 0) goto LAB_01d93d48;
            piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            goto LAB_01d93d30;
          }
          lVar11 = *plVar12;
          uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar8 != 0) {
            piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)puVar4) {
                puVar10 = (undefined8 *)(lVar11 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_01d93c64;
              }
              uVar8 = uVar8 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)FUN_0103c348(plVar12,*(long *)puVar4,0);
LAB_01d93c64:
          lVar11 = (*(code *)*puVar10)(plVar12,puVar10[1]);
          if (lVar11 == 0) {
            thunk_FUN_010303a8(PTR_DAT_02359920);
            uVar13 = thunk_FUN_010400dc();
            uVar15 = thunk_FUN_010303a8(PTR_DAT_023599b8);
            FUN_01cc6734(uVar13,uVar15,0);
            uVar15 = thunk_FUN_010303a8(PTR_DAT_023599c0);
                    /* WARNING: Subroutine does not return */
            FUN_00fdc400(uVar13,uVar15);
          }
          uVar13 = FUN_01cd0fe8(lVar11,0);
          if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fdc534(uVar13,uVar13);
          }
          uVar8 = (**(code **)(*unaff_x19 + 0x288))();
          if ((uVar8 & 1) != 0) {
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fdc534();
            }
            lVar16 = *(long *)(lVar9 + 0x10);
            lVar21 = *(long *)puVar5;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fdc534();
            }
            uVar1 = *(uint *)(lVar9 + 0x18);
            if (uVar1 < *(uint *)(lVar16 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar1 + 1;
              plVar14 = (long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
              *plVar14 = lVar11;
              thunk_FUN_0106e12c(plVar14,lVar11);
            }
            else {
              FUN_017d3030(lVar9,lVar11,
                           *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
            }
          }
        } while( true );
      }
      lVar9 = *unaff_x21;
      uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar8 != 0) {
        piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_02359980) {
            puVar10 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_01d93a0c;
          }
          uVar8 = uVar8 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)FUN_0103c348();
LAB_01d93a0c:
      plVar12 = (long *)(*(code *)*puVar10)();
      puVar4 = PTR_DAT_02359988;
      puVar2 = PTR_DAT_0234bef8;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      do {
        lVar9 = *plVar12;
        uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar8 != 0) {
          piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_01d93a7c;
            }
            uVar8 = uVar8 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar8 != 0);
        }
        puVar10 = (undefined8 *)FUN_0103c348(plVar12,*(long *)puVar2,0);
LAB_01d93a7c:
        uVar8 = (*(code *)*puVar10)(plVar12,puVar10[1]);
        if ((uVar8 & 1) == 0) {
          if (plVar12 == (long *)0x0) goto LAB_01d93ec4;
          lVar9 = *plVar12;
          uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar8 == 0) goto LAB_01d93b74;
          piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_01d93b5c;
        }
        lVar9 = *plVar12;
        uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar8 != 0) {
          piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)puVar4) {
              puVar10 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_01d93ad8;
            }
            uVar8 = uVar8 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar8 != 0);
        }
        puVar10 = (undefined8 *)FUN_0103c348(plVar12,*(long *)puVar4,0);
LAB_01d93ad8:
        lVar9 = (*(code *)*puVar10)(plVar12,puVar10[1]);
        if (lVar9 == 0) {
          thunk_FUN_010303a8(PTR_DAT_02359920);
          uVar13 = thunk_FUN_010400dc();
          uVar15 = thunk_FUN_010303a8(PTR_DAT_023599b8);
          FUN_01cc6734(uVar13,uVar15,0);
          uVar15 = thunk_FUN_010303a8(PTR_DAT_023599c0);
                    /* WARNING: Subroutine does not return */
          FUN_00fdc400(uVar13,uVar15);
        }
      } while( true );
    }
    lVar11 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_023598f8);
    FUN_01468810(lVar11,uVar7,*(undefined8 *)PTR_DAT_023598f0);
    lVar9 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_023599b0);
    FUN_017d2874(lVar9,uVar7,*(undefined8 *)PTR_DAT_023599a8);
    puVar5 = PTR_DAT_02359988;
    puVar4 = PTR_DAT_023598e8;
    puVar2 = PTR_DAT_0234bef8;
    iVar20 = 0;
    do {
      lVar16 = *unaff_x21;
      uVar8 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar8 != 0) {
        piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_02359980) {
            puVar10 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_01d93400;
          }
          uVar8 = uVar8 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)FUN_0103c348(unaff_x21,*(long *)PTR_DAT_02359980,0);
LAB_01d93400:
      plVar12 = (long *)(*(code *)*puVar10)(unaff_x21,puVar10[1]);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
LAB_01d93414:
      lVar16 = *plVar12;
      uVar8 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar8 != 0) {
        piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar2) {
            puVar10 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_01d93460;
          }
          uVar8 = uVar8 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)FUN_0103c348(plVar12,*(long *)puVar2,0);
LAB_01d93460:
      uVar8 = (*(code *)*puVar10)(plVar12,puVar10[1]);
      if ((uVar8 & 1) != 0) {
        lVar16 = *plVar12;
        uVar8 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar8 != 0) {
          piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)puVar5) {
              puVar10 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_01d934bc;
            }
            uVar8 = uVar8 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar8 != 0);
        }
        puVar10 = (undefined8 *)FUN_0103c348(plVar12,*(long *)puVar5,0);
LAB_01d934bc:
        lVar16 = (*(code *)*puVar10)(plVar12,puVar10[1]);
        if (lVar16 == 0) {
          thunk_FUN_010303a8(PTR_DAT_02359920);
          uVar13 = thunk_FUN_010400dc();
          uVar15 = thunk_FUN_010303a8(PTR_DAT_023599b8);
          FUN_01cc6734(uVar13,uVar15,0);
          uVar15 = thunk_FUN_010303a8(PTR_DAT_023599c0);
                    /* WARNING: Subroutine does not return */
          FUN_00fdc400(uVar13,uVar15);
        }
        uVar13 = FUN_01cd0fe8(lVar16,0);
        if (*(int *)(*(long *)PTR_DAT_0234bc58 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        uVar8 = FUN_01d611c4();
        if ((uVar8 & 1) != 0) goto code_r0x01d9350c;
        goto LAB_01d9352c;
      }
      if (plVar12 != (long *)0x0) {
        lVar16 = *plVar12;
        uVar8 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar8 != 0) {
          piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0234bef0) {
              puVar10 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_01d936c4;
            }
            uVar8 = uVar8 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar8 != 0);
        }
        puVar10 = (undefined8 *)FUN_0103c348(plVar12,*(long *)PTR_DAT_0234bef0,0);
LAB_01d936c4:
        (*(code *)*puVar10)(plVar12,puVar10[1]);
      }
      puVar3 = PTR_DAT_02354070;
      if (*(int *)(*(long *)PTR_DAT_02354070 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      unaff_x27 = FUN_01d92590(unaff_x27);
      if (unaff_x27 == 0) goto joined_r0x01d93fcc;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      iVar20 = iVar20 + 1;
      unaff_x21 = (long *)FUN_01d92da8(unaff_x27);
    } while (unaff_x21 != (long *)0x0);
  }
  goto LAB_01d9400c;
code_r0x01d9350c:
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  uVar8 = (**(code **)(*unaff_x19 + 0x288))();
  if ((uVar8 & 1) == 0) goto LAB_01d93414;
LAB_01d9352c:
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  uVar8 = FUN_0146ab1c(lVar11,uVar13,&stack0x00000008,*(undefined8 *)puVar4);
  if ((uVar8 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_02354070 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    lVar21 = FUN_01d92954(uVar13);
    if (iVar20 != 0) goto LAB_01d93558;
LAB_01d93590:
    if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
  }
  else {
    if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    lVar21 = *(long *)(in_stack_00000008 + 0x10);
    if (iVar20 == 0) goto LAB_01d93590;
LAB_01d93558:
    if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    if (*(char *)(lVar21 + 0x15) == '\0') goto LAB_01d93618;
  }
  if (((*(char *)(lVar21 + 0x14) != '\0') || (in_stack_00000008 == 0)) ||
     (*(int *)(in_stack_00000008 + 0x18) == iVar20)) {
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    lVar17 = *(long *)(lVar9 + 0x10);
    lVar18 = *(long *)PTR_DAT_02359998;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar1 = *(uint *)(lVar9 + 0x18);
    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
      plVar14 = (long *)(lVar17 + (long)(int)uVar1 * 8 + 0x20);
      *plVar14 = lVar16;
      thunk_FUN_0106e12c(plVar14,lVar16);
    }
    else {
      FUN_017d3030(lVar9,lVar16,*(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
    }
  }
LAB_01d93618:
  if (in_stack_00000008 == 0) {
    lVar16 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_023598d8);
    *(long *)(lVar16 + 0x10) = lVar21;
    thunk_FUN_0106e12c((long *)(lVar16 + 0x10),lVar21);
    *(int *)(lVar16 + 0x18) = iVar20;
    FUN_01468fe8(lVar11,uVar13,lVar16,*(undefined8 *)PTR_DAT_023598e0);
  }
  goto LAB_01d93414;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar19 = piVar19 + 4;
    if (uVar8 == 0) break;
LAB_01d93b5c:
    if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0234bef0) {
      puVar10 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_01d93eb8;
    }
  }
LAB_01d93b74:
  puVar10 = (undefined8 *)FUN_0103c348(plVar12,*(long *)PTR_DAT_0234bef0,0);
LAB_01d93eb8:
  (*(code *)*puVar10)(plVar12,puVar10[1]);
LAB_01d93ec4:
  lVar9 = *unaff_x21;
  uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar8 != 0) {
    piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *unaff_x23) {
        puVar10 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
        goto LAB_01d93f20;
      }
      uVar8 = uVar8 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar8 != 0);
  }
  puVar10 = (undefined8 *)FUN_0103c348();
LAB_01d93f20:
  uVar7 = (*(code *)*puVar10)();
  uVar13 = FUN_00fdc388(*(undefined8 *)PTR_DAT_02353960,uVar7);
  lVar9 = *unaff_x21;
  uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar8 != 0) {
    piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *unaff_x23) {
        puVar10 = (undefined8 *)(lVar9 + (long)(*piVar19 + 5) * 0x10 + 0x138);
        goto LAB_01d93f98;
      }
      uVar8 = uVar8 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar8 != 0);
  }
  puVar10 = (undefined8 *)FUN_0103c348();
LAB_01d93f98:
  (*(code *)*puVar10)();
  return uVar13;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar19 = piVar19 + 4;
    if (uVar8 == 0) break;
LAB_01d93d30:
    if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0234bef0) {
      puVar10 = (undefined8 *)(lVar11 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_01d93fbc;
    }
  }
LAB_01d93d48:
  puVar10 = (undefined8 *)FUN_0103c348(plVar12,*(long *)PTR_DAT_0234bef0,0);
LAB_01d93fbc:
  (*(code *)*puVar10)(plVar12,puVar10[1]);
joined_r0x01d93fcc:
  if (lVar9 != 0) {
    uVar13 = FUN_017d49bc(lVar9,*(undefined8 *)PTR_DAT_023599a0);
    return uVar13;
  }
LAB_01d9400c:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


