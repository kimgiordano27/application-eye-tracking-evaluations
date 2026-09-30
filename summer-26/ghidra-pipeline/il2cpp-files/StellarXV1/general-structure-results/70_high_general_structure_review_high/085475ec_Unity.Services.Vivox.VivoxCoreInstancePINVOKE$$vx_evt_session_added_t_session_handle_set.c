/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_added_t_session_handle_set
ENTRY_POINT: 085475ec
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_6
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_added_t_session_handle_set(void)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 unaff_x21;
  long lVar13;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x25;
  long *unaff_x28;
  long unaff_x29;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000070;
  long *in_stack_00000078;
  
  lVar4 = FUN_08519a60();
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
    uVar11 = 0;
    uVar8 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
    do {
      if (uVar8 <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar5 = lVar4 + uVar11 * 0x10;
      in_stack_00000038 = *(undefined8 *)(lVar5 + 0x28);
      in_stack_00000030 = *(undefined8 *)(lVar5 + 0x20);
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      if (*(char *)(unaff_x29 + 0xe5a) == '\0') {
        FUN_04077588();
        *(undefined1 *)(unaff_x29 + 0xe5a) = 1;
      }
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      if (*(char *)(unaff_x22 + 0xe5b) == '\0') {
        FUN_04077588();
        *(undefined1 *)(unaff_x22 + 0xe5b) = 1;
      }
      uVar1 = (uint)in_stack_00000030._2_2_;
      if (in_stack_00000030._2_2_ != 0) {
        lVar5 = *unaff_x25;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar5 = *unaff_x25;
        }
        piVar9 = *(int **)(lVar5 + 0xb8);
        if (uVar1 << 0x10 != *piVar9) {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            piVar9 = *(int **)(*unaff_x25 + 0xb8);
          }
          if (uVar1 << 0x10 != piVar9[1]) goto LAB_0854772c;
        }
        plVar10 = in_stack_00000078;
        if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar5 = *in_stack_00000078;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x28) {
              puVar6 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
              goto Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_added_t_uri_set;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*unaff_x28,0);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_added_t_uri_set:
        (*(code *)*puVar6)(plVar10,&stack0x00000030,1,puVar6[1]);
      }
LAB_0854772c:
      uVar8 = (ulong)*(uint *)(lVar4 + 0x18);
      uVar11 = uVar11 + 1;
    } while ((long)uVar11 < (long)(int)*(uint *)(lVar4 + 0x18));
  }
  _in_stack_00000040 = FUN_08519aa8();
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*unaff_x23);
  }
  if (*(char *)(unaff_x29 + 0xe5a) == '\0') {
    FUN_04077588(PTR_DAT_092b9d10);
    *(undefined1 *)(unaff_x29 + 0xe5a) = 1;
  }
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if (*(char *)(unaff_x22 + 0xe5b) == '\0') {
    FUN_04077588(PTR_DAT_092b9d10);
    *(undefined1 *)(unaff_x22 + 0xe5b) = 1;
  }
  uVar1 = (uint)in_stack_00000040._2_2_;
  if (in_stack_00000040._2_2_ != 0) {
    lVar4 = *unaff_x25;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar4 = *unaff_x25;
    }
    piVar9 = *(int **)(lVar4 + 0xb8);
    if (uVar1 << 0x10 != *piVar9) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        piVar9 = *(int **)(*unaff_x25 + 0xb8);
      }
      if (uVar1 << 0x10 != piVar9[1]) goto LAB_08547864;
    }
    plVar10 = in_stack_00000078;
    if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar4 = *in_stack_00000078;
    uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar11 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x28) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_08547850;
        }
        uVar11 = uVar11 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*unaff_x28,0);
LAB_08547850:
    (*(code *)*puVar6)(plVar10,&stack0x00000040,1,puVar6[1]);
  }
LAB_08547864:
  FUN_08546918(unaff_x21);
  if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar12 = *(undefined8 *)(in_stack_00000070 + 0x40);
  if (*(int *)(*(long *)PTR_DAT_0932c870 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar5 = FUN_085057d4(uVar12,0);
  plVar10 = in_stack_00000078;
  lVar4 = in_stack_00000070;
  if (lVar5 == 0) {
    if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar5 = *in_stack_00000078;
    uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar11 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x28) {
          puVar6 = (undefined8 *)(lVar5 + (long)(*piVar9 + 9) * 0x10 + 0x138);
          goto LAB_08547938;
        }
        uVar11 = uVar11 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*unaff_x28,9);
LAB_08547938:
    (*(code *)*puVar6)(plVar10,lVar4 + 0x2c,puVar6[1]);
  }
  else {
    if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(in_stack_00000070 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_084f23a4(*(long *)(in_stack_00000070 + 0x38),in_stack_00000078,0);
  }
  plVar10 = in_stack_00000078;
  if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar4 = *in_stack_00000078;
  uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar11 != 0) {
    piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x28) {
        puVar6 = (undefined8 *)(lVar4 + (long)(*piVar9 + 0xb) * 0x10 + 0x138);
        goto LAB_085479a0;
      }
      uVar11 = uVar11 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar11 != 0);
  }
  puVar6 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*unaff_x28,0xb);
LAB_085479a0:
  (*(code *)*puVar6)(plVar10,0,puVar6[1]);
  plVar10 = in_stack_00000078;
  if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar4 = *in_stack_00000078;
  uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar11 != 0) {
    piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x28) {
        puVar6 = (undefined8 *)(lVar4 + (long)(*piVar9 + 0xc) * 0x10 + 0x138);
        goto LAB_08547a08;
      }
      uVar11 = uVar11 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar11 != 0);
  }
  puVar6 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*unaff_x28,0xc);
LAB_08547a08:
  (*(code *)*puVar6)(plVar10,1,puVar6[1]);
  if (*(long *)(in_stack_00000018 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar11 = FUN_083e3844(*(long *)(in_stack_00000018 + 0x1a0),0);
  plVar10 = in_stack_00000078;
  if ((uVar11 & 1) != 0) {
    if (*(long *)(in_stack_00000018 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar11 = FUN_083e7714(*(long *)(in_stack_00000018 + 0x1a0),0);
    if ((uVar11 & 1) == 0) {
      bVar3 = false;
    }
    else {
      lVar4 = FUN_08515ce4(in_stack_00000018,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      bVar3 = *(char *)(lVar4 + 0x737) != '\0';
    }
    if (plVar10 == (long *)0x0) goto LAB_08547c78;
    lVar4 = *plVar10;
    uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar11 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x28) {
          puVar6 = (undefined8 *)(lVar4 + (long)(*piVar9 + 0xd) * 0x10 + 0x138);
          goto LAB_08547ac4;
        }
        uVar11 = uVar11 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar10,*unaff_x28,0xd);
LAB_08547ac4:
    (*(code *)*puVar6)(plVar10,bVar3,puVar6[1]);
  }
  plVar10 = in_stack_00000078;
  puVar2 = PTR_DAT_0932e288;
  lVar4 = *(long *)PTR_DAT_0932e288;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar4 = *(long *)puVar2;
  }
  puVar6 = *(undefined8 **)(lVar4 + 0xb8);
  lVar5 = puVar6[1];
  if (lVar5 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar12 = *puVar6;
    lVar5 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932e268);
    FUN_06ac88dc(lVar5,uVar12,*(undefined8 *)PTR_DAT_0932e280,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar7 = lVar5;
    thunk_FUN_040ec700(plVar7,lVar5);
  }
  if (plVar10 != (long *)0x0) {
    lVar4 = *plVar10;
    lVar13 = *(long *)PTR_DAT_0932e270;
    uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar11 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)(lVar13 + 0x20)) {
          lVar4 = lVar4 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar13 + 0x50)) * 0x10 + 0x138;
          goto LAB_08547bb8;
        }
        uVar11 = uVar11 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar11 != 0);
    }
    lVar4 = FUN_040b1e00(plVar10);
LAB_08547bb8:
    lVar4 = thunk_FUN_04096bb4(*(undefined8 *)(lVar4 + 8),lVar13);
    (**(code **)(lVar4 + 8))(plVar10,lVar5,lVar4);
    plVar10 = (long *)*in_stack_00000028;
    if (plVar10 != (long *)0x0) {
      lVar4 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar11 != 0) {
        piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_092860c0) {
            puVar6 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_08547c38;
          }
          uVar11 = uVar11 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_040b1e00(plVar10,*(long *)PTR_DAT_092860c0,0);
LAB_08547c38:
      (*(code *)*puVar6)(plVar10,puVar6[1]);
    }
    if (in_stack_00000020 == 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077828();
  }
LAB_08547c78:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


