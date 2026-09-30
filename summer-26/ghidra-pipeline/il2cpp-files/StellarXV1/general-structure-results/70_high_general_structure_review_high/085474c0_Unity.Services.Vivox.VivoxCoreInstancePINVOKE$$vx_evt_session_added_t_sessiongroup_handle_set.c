/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_added_t_sessiongroup_handle_set
ENTRY_POINT: 085474c0
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_added_t_sessiongroup_handle_set
               (undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  int *piVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
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
  undefined8 in_stack_00000050;
  long in_stack_00000070;
  long *in_stack_00000078;
  
  (*(code *)*param_1)();
                    /* catch() { ... } // from try @ 085474b8 with catch @ 085474d4 */
                    /* try { // try from 085474d8 to 086474df has its CatchHandler @ 085474e8 */
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                    /* try { // try from 085474e0 to 086474eb has its CatchHandler @ 0854731c */
    thunk_FUN_040d65a8();
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 085474d8 with catch @ 085474e8
                        */
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
  if (in_stack_00000050._2_2_ != 0) {
    lVar4 = *unaff_x25;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar4 = *unaff_x25;
    }
    piVar8 = *(int **)(lVar4 + 0xb8);
    if ((uint)in_stack_00000050._2_2_ << 0x10 != *piVar8) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        piVar8 = *(int **)(*unaff_x25 + 0xb8);
      }
      if ((uint)in_stack_00000050._2_2_ << 0x10 != piVar8[1]) goto LAB_085475e4;
    }
    plVar11 = in_stack_00000078;
    if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar4 = *in_stack_00000078;
    uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar10 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x28) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_085475d0;
        }
        uVar10 = uVar10 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*unaff_x28,0);
LAB_085475d0:
    (*(code *)*puVar5)(plVar11,&stack0x00000050,1,puVar5[1]);
  }
LAB_085475e4:
  lVar4 = FUN_08519a60();
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
    uVar10 = 0;
    uVar9 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
    do {
      if (uVar9 <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar6 = lVar4 + uVar10 * 0x10;
      in_stack_00000038 = *(undefined8 *)(lVar6 + 0x28);
      in_stack_00000030 = *(undefined8 *)(lVar6 + 0x20);
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
        lVar6 = *unaff_x25;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar6 = *unaff_x25;
        }
        piVar8 = *(int **)(lVar6 + 0xb8);
        if (uVar1 << 0x10 != *piVar8) {
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            piVar8 = *(int **)(*unaff_x25 + 0xb8);
          }
          if (uVar1 << 0x10 != piVar8[1]) goto LAB_0854772c;
        }
        plVar11 = in_stack_00000078;
        if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar6 = *in_stack_00000078;
        uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar9 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x28) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_added_t_uri_set;
            }
            uVar9 = uVar9 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*unaff_x28,0);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_added_t_uri_set:
        (*(code *)*puVar5)(plVar11,&stack0x00000030,1,puVar5[1]);
      }
LAB_0854772c:
      uVar9 = (ulong)*(uint *)(lVar4 + 0x18);
      uVar10 = uVar10 + 1;
    } while ((long)uVar10 < (long)(int)*(uint *)(lVar4 + 0x18));
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
    piVar8 = *(int **)(lVar4 + 0xb8);
    if (uVar1 << 0x10 != *piVar8) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        piVar8 = *(int **)(*unaff_x25 + 0xb8);
      }
      if (uVar1 << 0x10 != piVar8[1]) goto LAB_08547864;
    }
    plVar11 = in_stack_00000078;
    if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar4 = *in_stack_00000078;
    uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar10 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x28) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_08547850;
        }
        uVar10 = uVar10 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*unaff_x28,0);
LAB_08547850:
    (*(code *)*puVar5)(plVar11,&stack0x00000040,1,puVar5[1]);
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
  lVar6 = FUN_085057d4(uVar12,0);
  plVar11 = in_stack_00000078;
  lVar4 = in_stack_00000070;
  if (lVar6 == 0) {
    if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar6 = *in_stack_00000078;
    uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar10 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x28) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 9) * 0x10 + 0x138);
          goto LAB_08547938;
        }
        uVar10 = uVar10 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*unaff_x28,9);
LAB_08547938:
    (*(code *)*puVar5)(plVar11,lVar4 + 0x2c,puVar5[1]);
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
  plVar11 = in_stack_00000078;
  if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar4 = *in_stack_00000078;
  uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar10 != 0) {
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x28) {
        puVar5 = (undefined8 *)(lVar4 + (long)(*piVar8 + 0xb) * 0x10 + 0x138);
        goto LAB_085479a0;
      }
      uVar10 = uVar10 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*unaff_x28,0xb);
LAB_085479a0:
  (*(code *)*puVar5)(plVar11,0,puVar5[1]);
  plVar11 = in_stack_00000078;
  if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar4 = *in_stack_00000078;
  uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar10 != 0) {
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x28) {
        puVar5 = (undefined8 *)(lVar4 + (long)(*piVar8 + 0xc) * 0x10 + 0x138);
        goto LAB_08547a08;
      }
      uVar10 = uVar10 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_040b1e00(in_stack_00000078,*unaff_x28,0xc);
LAB_08547a08:
  (*(code *)*puVar5)(plVar11,1,puVar5[1]);
  if (*(long *)(in_stack_00000018 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar10 = FUN_083e3844(*(long *)(in_stack_00000018 + 0x1a0),0);
  plVar11 = in_stack_00000078;
  if ((uVar10 & 1) != 0) {
    if (*(long *)(in_stack_00000018 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar10 = FUN_083e7714(*(long *)(in_stack_00000018 + 0x1a0),0);
    if ((uVar10 & 1) == 0) {
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
    if (plVar11 == (long *)0x0) goto LAB_08547c78;
    lVar4 = *plVar11;
    uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar10 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x28) {
          puVar5 = (undefined8 *)(lVar4 + (long)(*piVar8 + 0xd) * 0x10 + 0x138);
          goto LAB_08547ac4;
        }
        uVar10 = uVar10 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00(plVar11,*unaff_x28,0xd);
LAB_08547ac4:
    (*(code *)*puVar5)(plVar11,bVar3,puVar5[1]);
  }
  plVar11 = in_stack_00000078;
  puVar2 = PTR_DAT_0932e288;
  lVar4 = *(long *)PTR_DAT_0932e288;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar4 = *(long *)puVar2;
  }
  puVar5 = *(undefined8 **)(lVar4 + 0xb8);
  lVar6 = puVar5[1];
  if (lVar6 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar12 = *puVar5;
    lVar6 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932e268);
    FUN_06ac88dc(lVar6,uVar12,*(undefined8 *)PTR_DAT_0932e280,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar7 = lVar6;
    thunk_FUN_040ec700(plVar7,lVar6);
  }
  if (plVar11 != (long *)0x0) {
    lVar4 = *plVar11;
    lVar13 = *(long *)PTR_DAT_0932e270;
    uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar10 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)(lVar13 + 0x20)) {
          lVar4 = lVar4 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar13 + 0x50)) * 0x10 + 0x138;
          goto LAB_08547bb8;
        }
        uVar10 = uVar10 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar10 != 0);
    }
    lVar4 = FUN_040b1e00(plVar11);
LAB_08547bb8:
    lVar4 = thunk_FUN_04096bb4(*(undefined8 *)(lVar4 + 8),lVar13);
    (**(code **)(lVar4 + 8))(plVar11,lVar6,lVar4);
    plVar11 = (long *)*in_stack_00000028;
    if (plVar11 != (long *)0x0) {
      lVar4 = *plVar11;
      uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar10 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_092860c0) {
            puVar5 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_08547c38;
          }
          uVar10 = uVar10 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_040b1e00(plVar11,*(long *)PTR_DAT_092860c0,0);
LAB_08547c38:
      (*(code *)*puVar5)(plVar11,puVar5[1]);
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


