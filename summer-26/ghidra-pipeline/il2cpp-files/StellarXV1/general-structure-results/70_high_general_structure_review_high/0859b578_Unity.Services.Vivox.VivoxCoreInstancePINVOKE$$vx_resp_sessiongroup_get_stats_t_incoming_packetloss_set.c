/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_sessiongroup_get_stats_t_incoming_packetloss_set
ENTRY_POINT: 0859b578
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0859ba84) */

undefined1  [16]
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_sessiongroup_get_stats_t_incoming_packetloss_set
          (void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  undefined8 *in_x9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long *unaff_x23;
  undefined1 auVar13 [16];
  undefined1 in_stack_00000000 [16];
  undefined8 uStack00000000000000d0;
  undefined8 uStack00000000000000d8;
  undefined8 uStack00000000000000e0;
  undefined8 uStack00000000000000e8;
  undefined8 uStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  undefined4 uStack0000000000000100;
  undefined2 in_stack_00000190;
  ushort uStack0000000000000192;
  undefined4 uStack0000000000000194;
  undefined8 in_stack_00000198;
  long in_stack_000001a8;
  long *in_stack_000001b8;
  
  uStack00000000000000d8 = in_x9[1];
  uStack00000000000000d0 = *in_x9;
  uStack00000000000000e8 = in_x9[3];
  uStack00000000000000e0 = in_x9[2];
  uStack00000000000000f8 = in_x9[5];
  uStack00000000000000f0 = in_x9[4];
  uStack0000000000000100 = *(undefined4 *)(in_x9 + 6);
  if (*(int *)(*(long *)PTR_DAT_0932c850 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  auVar13 = FUN_08577d94();
  plVar4 = in_stack_000001b8;
  uVar11 = auVar13._8_8_;
  in_stack_00000190 = auVar13._0_2_;
  uStack0000000000000192 = auVar13._2_2_;
  uStack0000000000000194 = auVar13._4_4_;
  in_stack_00000198 = uVar11;
  if (in_stack_000001b8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar7 = *in_stack_000001b8;
  uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar10 != 0) {
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09327ed0) {
        puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 4) * 0x10 + 0x138);
        goto 
        Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_sessiongroup_get_stats_t_incoming_out_of_time_set
        ;
      }
      uVar10 = uVar10 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_040b1e00(in_stack_000001b8,*(long *)PTR_DAT_09327ed0,4);

  Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_sessiongroup_get_stats_t_incoming_out_of_time_set
  :
  (*(code *)*puVar5)(plVar4,auVar13._0_8_,uVar11,2,puVar5[1]);
  if (*(int *)(*(long *)PTR_DAT_09324758 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_08488eb0(&stack0x00000190);
  plVar4 = in_stack_000001b8;
  if (in_stack_000001a8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  *(undefined8 *)(in_stack_000001a8 + 0x58) = in_stack_00000000._4_8_;
  if (in_stack_000001b8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar7 = *in_stack_000001b8;
  uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar10 != 0) {
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x23) {
        puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 0xb) * 0x10 + 0x138);
        goto LAB_0859b724;
      }
      uVar10 = uVar10 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_040b1e00(in_stack_000001b8,*unaff_x23,0xb);
LAB_0859b724:
  (*(code *)*puVar5)(plVar4,0,puVar5[1]);
  plVar4 = in_stack_000001b8;
  if (in_stack_000001b8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar7 = *in_stack_000001b8;
  uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar10 != 0) {
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x23) {
        puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 0xc) * 0x10 + 0x138);
        goto FUN_0859b78c;
      }
      uVar10 = uVar10 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_040b1e00(in_stack_000001b8,*unaff_x23,0xc);
FUN_0859b78c:
  (*(code *)*puVar5)(plVar4,1,puVar5[1]);
  if (DAT_0989ce5a == '\0') {
    FUN_04077588(PTR_DAT_092b9d10);
    DAT_0989ce5a = '\x01';
  }
  puVar3 = PTR_DAT_092b9d10;
  if (*(int *)(*(long *)PTR_DAT_092b9d10 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if (DAT_0989ce5b == '\0') {
    FUN_04077588(PTR_DAT_092b9d10);
    DAT_0989ce5b = '\x01';
  }
  uVar2 = (uint)uStack0000000000000192;
  if (uStack0000000000000192 != 0) {
    lVar7 = *(long *)puVar3;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar7 = *(long *)puVar3;
    }
    piVar8 = *(int **)(lVar7 + 0xb8);
    if (uVar2 << 0x10 != *piVar8) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        piVar8 = *(int **)(*(long *)puVar3 + 0xb8);
      }
      if (uVar2 << 0x10 != piVar8[1]) goto LAB_0859b8d4;
    }
    plVar4 = in_stack_000001b8;
    puVar3 = PTR_DAT_0932fb38;
    lVar7 = *(long *)PTR_DAT_0932fb38;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar7 = *(long *)puVar3;
    }
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    uVar1 = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0x18);
    if (uVar10 != 0) {
      piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x23) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar8 + 3) * 0x10 + 0x138);
          goto LAB_0859b8c0;
        }
        uVar10 = uVar10 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00(plVar4,*unaff_x23,3);
LAB_0859b8c0:
    (*(code *)*puVar5)(plVar4,&stack0x00000190,uVar1,puVar5[1]);
  }
LAB_0859b8d4:
  plVar4 = in_stack_000001b8;
  puVar3 = PTR_DAT_0932fb60;
  lVar7 = *(long *)PTR_DAT_0932fb60;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar7 = *(long *)puVar3;
  }
  puVar5 = *(undefined8 **)(lVar7 + 0xb8);
  lVar9 = puVar5[1];
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar5 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
    }
    uVar11 = *puVar5;
    lVar9 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932fb40);
    FUN_06ac88dc(lVar9,uVar11,*(undefined8 *)PTR_DAT_0932fb58,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    *plVar6 = lVar9;
    thunk_FUN_040ec700(plVar6,lVar9);
  }
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar7 = *plVar4;
  lVar12 = *(long *)PTR_DAT_0932fb48;
  uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar10 != 0) {
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)(lVar12 + 0x20)) {
        lVar7 = lVar7 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar12 + 0x50)) * 0x10 + 0x138;
        goto LAB_0859b9b8;
      }
      uVar10 = uVar10 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar10 != 0);
  }
  lVar7 = FUN_040b1e00(plVar4);
LAB_0859b9b8:
  lVar7 = thunk_FUN_04096bb4(*(undefined8 *)(lVar7 + 8),lVar12);
  (**(code **)(lVar7 + 8))(plVar4,lVar9,lVar7);
  plVar4 = in_stack_000001b8;
  auVar13._2_2_ = uStack0000000000000192;
  auVar13._0_2_ = in_stack_00000190;
  auVar13._4_4_ = uStack0000000000000194;
  auVar13._8_8_ = in_stack_00000198;
  if (in_stack_000001b8 != (long *)0x0) {
    lVar7 = *in_stack_000001b8;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_092860c0) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0859ba40;
        }
        uVar10 = uVar10 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00(in_stack_000001b8,*(long *)PTR_DAT_092860c0,0);
LAB_0859ba40:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  return auVar13;
}


