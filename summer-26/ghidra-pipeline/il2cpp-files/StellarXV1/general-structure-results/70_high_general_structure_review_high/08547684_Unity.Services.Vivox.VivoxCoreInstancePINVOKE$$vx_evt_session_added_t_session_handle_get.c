/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_added_t_session_handle_get
ENTRY_POINT: 08547684
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_added_t_session_handle_get
               (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  undefined1 unaff_w19;
  long *plVar10;
  ulong unaff_x20;
  undefined8 uVar11;
  long lVar12;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x25;
  long unaff_x26;
  int unaff_w27;
  long *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000070;
  long *in_stack_00000078;
  
  do {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      param_1 = *unaff_x25;
    }
    piVar7 = *(int **)(param_1 + 0xb8);
    if (unaff_w27 == *piVar7) {
LAB_085476c4:
      plVar10 = in_stack_00000078;
      if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar8 = *in_stack_00000078;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x28) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
            goto Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_added_t_uri_set;
          }
          uVar9 = uVar9 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*unaff_x28,0);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_added_t_uri_set:
      (*(code *)*puVar4)(plVar10,&stack0x00000030,1,puVar4[1]);
    }
    else {
      if (*(int *)(param_1 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        piVar7 = *(int **)(*unaff_x25 + 0xb8);
      }
      if (unaff_w27 == piVar7[1]) goto LAB_085476c4;
    }
    do {
      unaff_x20 = unaff_x20 + 1;
      if ((long)(int)*(uint *)(unaff_x26 + 0x18) <= (long)unaff_x20) {
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
        if (in_stack_00000040._2_2_ == 0) goto LAB_08547864;
        lVar8 = *unaff_x25;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar8 = *unaff_x25;
        }
        piVar7 = *(int **)(lVar8 + 0xb8);
        if (uVar1 << 0x10 != *piVar7) {
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            piVar7 = *(int **)(*unaff_x25 + 0xb8);
          }
          if (uVar1 << 0x10 != piVar7[1]) goto LAB_08547864;
        }
        plVar10 = in_stack_00000078;
        if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar8 = *in_stack_00000078;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 == 0) goto LAB_08547834;
        piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_0854781c;
      }
      if (*(uint *)(unaff_x26 + 0x18) <= unaff_x20) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar8 = unaff_x26 + unaff_x20 * 0x10;
      in_stack_00000038 = *(undefined8 *)(lVar8 + 0x28);
      in_stack_00000030 = *(undefined8 *)(lVar8 + 0x20);
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      if (*(char *)(unaff_x29 + 0xe5a) == '\0') {
        FUN_04077588();
        *(undefined1 *)(unaff_x29 + 0xe5a) = unaff_w19;
      }
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      if (*(char *)(unaff_x22 + 0xe5b) == '\0') {
        FUN_04077588();
        *(undefined1 *)(unaff_x22 + 0xe5b) = unaff_w19;
      }
      unaff_w27 = (uint)in_stack_00000030._2_2_ << 0x10;
    } while (in_stack_00000030._2_2_ == 0);
    param_1 = *unaff_x25;
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar7 = piVar7 + 4;
    if (uVar9 == 0) break;
LAB_0854781c:
    if (*(long *)(piVar7 + -2) == *unaff_x28) {
      puVar4 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_08547850;
    }
  }
LAB_08547834:
  puVar4 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*unaff_x28,0);
LAB_08547850:
  (*(code *)*puVar4)(plVar10,&stack0x00000040,1,puVar4[1]);
LAB_08547864:
  FUN_08546918(in_stack_00000000);
  if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar11 = *(undefined8 *)(in_stack_00000070 + 0x40);
  if (*(int *)(*(long *)PTR_DAT_0932c870 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar5 = FUN_085057d4(uVar11,0);
  plVar10 = in_stack_00000078;
  lVar8 = in_stack_00000070;
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
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x28) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 9) * 0x10 + 0x138);
          goto LAB_08547938;
        }
        uVar9 = uVar9 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*unaff_x28,9);
LAB_08547938:
    (*(code *)*puVar4)(plVar10,lVar8 + 0x2c,puVar4[1]);
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
  lVar8 = *in_stack_00000078;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x28) {
        puVar4 = (undefined8 *)(lVar8 + (long)(*piVar7 + 0xb) * 0x10 + 0x138);
        goto LAB_085479a0;
      }
      uVar9 = uVar9 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*unaff_x28,0xb);
LAB_085479a0:
  (*(code *)*puVar4)(plVar10,0,puVar4[1]);
  plVar10 = in_stack_00000078;
  if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar8 = *in_stack_00000078;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x28) {
        puVar4 = (undefined8 *)(lVar8 + (long)(*piVar7 + 0xc) * 0x10 + 0x138);
        goto LAB_08547a08;
      }
      uVar9 = uVar9 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*unaff_x28,0xc);
LAB_08547a08:
  (*(code *)*puVar4)(plVar10,1,puVar4[1]);
  if (*(long *)(in_stack_00000018 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar9 = FUN_083e3844(*(long *)(in_stack_00000018 + 0x1a0),0);
  plVar10 = in_stack_00000078;
  if ((uVar9 & 1) != 0) {
    if (*(long *)(in_stack_00000018 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar9 = FUN_083e7714(*(long *)(in_stack_00000018 + 0x1a0),0);
    if ((uVar9 & 1) == 0) {
      bVar3 = false;
    }
    else {
      lVar8 = FUN_08515ce4(in_stack_00000018,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      bVar3 = *(char *)(lVar8 + 0x737) != '\0';
    }
    if (plVar10 == (long *)0x0) goto LAB_08547c78;
    lVar8 = *plVar10;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x28) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar7 + 0xd) * 0x10 + 0x138);
          goto LAB_08547ac4;
        }
        uVar9 = uVar9 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00(plVar10,*unaff_x28,0xd);
LAB_08547ac4:
    (*(code *)*puVar4)(plVar10,bVar3,puVar4[1]);
  }
  plVar10 = in_stack_00000078;
  puVar2 = PTR_DAT_0932e288;
  lVar8 = *(long *)PTR_DAT_0932e288;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar8 = *(long *)puVar2;
  }
  puVar4 = *(undefined8 **)(lVar8 + 0xb8);
  lVar5 = puVar4[1];
  if (lVar5 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar4 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar11 = *puVar4;
    lVar5 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932e268);
    FUN_06ac88dc(lVar5,uVar11,*(undefined8 *)PTR_DAT_0932e280,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar6 = lVar5;
    thunk_FUN_040ec700(plVar6,lVar5);
  }
  if (plVar10 != (long *)0x0) {
    lVar8 = *plVar10;
    lVar12 = *(long *)PTR_DAT_0932e270;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)(lVar12 + 0x20)) {
          lVar8 = lVar8 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar12 + 0x50)) * 0x10 + 0x138;
          goto LAB_08547bb8;
        }
        uVar9 = uVar9 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar9 != 0);
    }
    lVar8 = FUN_040b1e00(plVar10);
LAB_08547bb8:
    lVar8 = thunk_FUN_04096bb4(*(undefined8 *)(lVar8 + 8),lVar12);
    (**(code **)(lVar8 + 8))(plVar10,lVar5,lVar8);
    plVar10 = (long *)*in_stack_00000028;
    if (plVar10 != (long *)0x0) {
      lVar8 = *plVar10;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_092860c0) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_08547c38;
          }
          uVar9 = uVar9 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00(plVar10,*(long *)PTR_DAT_092860c0,0);
LAB_08547c38:
      (*(code *)*puVar4)(plVar10,puVar4[1]);
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


