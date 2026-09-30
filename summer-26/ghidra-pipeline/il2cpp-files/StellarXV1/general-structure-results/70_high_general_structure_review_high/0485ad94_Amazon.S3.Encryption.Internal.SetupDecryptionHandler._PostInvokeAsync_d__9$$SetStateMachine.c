/*
FUNCTION_NAME: Amazon.S3.Encryption.Internal.SetupDecryptionHandler.<PostInvokeAsync>d__9$$SetStateMachine
ENTRY_POINT: 0485ad94
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0485bedc) */
/* WARNING: Removing unreachable block (ram,0x0485c014) */

void Amazon_S3_Encryption_Internal_SetupDecryptionHandler_<PostInvokeAsync>d__9__SetStateMachine
               (void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  undefined8 uVar11;
  int unaff_w24;
  long *unaff_x25;
  undefined8 uVar12;
  long *unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  long *in_stack_00000030;
  long in_stack_00000038;
  
  plVar3 = in_stack_00000030;
  if (in_stack_00000030 != (long *)0x0) {
    lVar7 = *in_stack_00000030;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_092860c0) {
                    /* try { // try from 0485ade8 to 0495adeb has its CatchHandler @ 0485af1c */
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0485adf4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(in_stack_00000030,*(long *)PTR_DAT_092860c0,0);
LAB_0485adf4:
    (*(code *)*puVar2)(plVar3,puVar2[1]);
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077828();
  }
  FUN_048aa744();
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*unaff_x21);
  }
  FUN_0485d408();
  uVar11 = *(undefined8 *)(unaff_x20 + 0x88);
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar9 = FUN_04793b60(uVar11,0,0);
  puVar1 = PTR_DAT_092af5c0;
  if ((uVar9 & 1) != 0) {
    uVar11 = *(undefined8 *)(unaff_x20 + 0x88);
    lVar7 = *(long *)PTR_DAT_092af5c0;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar7 = *(long *)puVar1;
    }
    uVar12 = **(undefined8 **)(lVar7 + 0xb8);
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*unaff_x22);
    }
    uVar9 = FUN_04793b60(uVar11,uVar12,0);
    if ((uVar9 & 1) != 0) {
      lVar7 = *unaff_x19;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_092a58b8) {
            puVar2 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_0485af04;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar2 = (undefined8 *)FUN_040b1e00();
LAB_0485af04:
      plVar3 = (long *)(*(code *)*puVar2)();
      uVar11 = *(undefined8 *)(unaff_x20 + 0x88);
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_040d65a8(*unaff_x22);
      }
      uVar11 = FUN_047933f4(uVar11,0);
      uVar11 = FUN_0492e308(uVar11,0);
      if (plVar3 == (long *)0x0) goto LAB_0485c008;
      lVar7 = *plVar3;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      uVar12 = *(undefined8 *)PTR_DAT_092af5c8;
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar7 + (long)(*piVar10 + 5) * 0x10 + 0x138);
            goto LAB_0485afa4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar2 = (undefined8 *)FUN_040b1e00(plVar3,*unaff_x25,5);
LAB_0485afa4:
      (*(code *)*puVar2)(plVar3,uVar12,uVar11,puVar2[1]);
    }
  }
  uVar9 = FUN_048aa50c();
  if ((uVar9 & 1) != 0) {
    lVar7 = *unaff_x19;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_092a58b8) {
          puVar2 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_0485b020;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00();
LAB_0485b020:
    plVar3 = (long *)(*(code *)*puVar2)();
    uVar11 = *(undefined8 *)(unaff_x20 + 0xb8);
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*unaff_x22);
    }
    uVar11 = FUN_047933f4(uVar11,0);
    if (plVar3 == (long *)0x0) goto LAB_0485c008;
    lVar7 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    uVar12 = *(undefined8 *)PTR_DAT_092af5e0;
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar7 + (long)(*piVar10 + 5) * 0x10 + 0x138);
          goto LAB_0485b0b8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(plVar3,*unaff_x25,5);
LAB_0485b0b8:
    (*(code *)*puVar2)(plVar3,uVar12,uVar11,puVar2[1]);
  }
  uVar9 = FUN_048aa4dc();
  if ((uVar9 & 1) != 0) {
    lVar7 = *unaff_x19;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_092a58b8) {
          puVar2 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_0485b134;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00();
LAB_0485b134:
    plVar3 = (long *)(*(code *)*puVar2)();
    if (plVar3 == (long *)0x0) goto LAB_0485c008;
    lVar7 = *plVar3;
    uVar11 = *(undefined8 *)(unaff_x20 + 0x98);
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    uVar12 = *(undefined8 *)PTR_DAT_092af5f0;
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar7 + (long)(*piVar10 + 5) * 0x10 + 0x138);
          goto LAB_0485b1a8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(plVar3,*unaff_x25,5);
LAB_0485b1a8:
    (*(code *)*puVar2)(plVar3,uVar12,uVar11,puVar2[1]);
  }
  uVar9 = FUN_048aa5e8();
  puVar1 = PTR_DAT_092af5b8;
  if ((uVar9 & 1) != 0) {
    uVar11 = *(undefined8 *)(unaff_x20 + 0x90);
    lVar7 = *(long *)PTR_DAT_092af5b8;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar7 = *(long *)puVar1;
    }
    uVar12 = **(undefined8 **)(lVar7 + 0xb8);
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*unaff_x22);
    }
    uVar9 = FUN_04793488(uVar11,uVar12,0);
    if ((uVar9 & 1) != 0) {
      lVar7 = *unaff_x19;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_092a58b8) {
            puVar2 = (undefined8 *)(lVar7 + (long)(*piVar10 + 4) * 0x10 + 0x138);
            goto LAB_0485b274;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar2 = (undefined8 *)FUN_040b1e00();
LAB_0485b274:
      plVar3 = (long *)(*(code *)*puVar2)();
      lVar7 = *(long *)puVar1;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_040d65a8(lVar7);
        lVar7 = *(long *)puVar1;
      }
      if ((**(long **)(lVar7 + 0xb8) == 0) || (plVar3 == (long *)0x0)) goto LAB_0485c008;
      lVar8 = *plVar3;
      uVar11 = *(undefined8 *)(**(long **)(lVar7 + 0xb8) + 0x10);
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      uVar12 = *(undefined8 *)PTR_DAT_092af5d0;
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar8 + (long)(*piVar10 + 5) * 0x10 + 0x138);
            goto LAB_0485b30c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar2 = (undefined8 *)FUN_040b1e00(plVar3,*unaff_x25,5);
LAB_0485b30c:
      (*(code *)*puVar2)(plVar3,uVar12,uVar11,puVar2[1]);
    }
  }
  lVar7 = *unaff_x19;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_092a58b8) {
        puVar2 = (undefined8 *)(lVar7 + (long)(*piVar10 + 4) * 0x10 + 0x138);
        goto LAB_0485b378;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar2 = (undefined8 *)FUN_040b1e00();
LAB_0485b378:
  plVar3 = (long *)(*(code *)*puVar2)();
  plVar4 = (long *)thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09285ee8);
  FUN_074f4a88(plVar4,*(undefined8 *)PTR_DAT_09287f68,0);
  uVar9 = FUN_074e5d94(*(undefined8 *)(unaff_x20 + 0x50),0);
  if ((uVar9 & 1) == 0) {
    uVar11 = FUN_0492e308(*(undefined8 *)(unaff_x20 + 0x50),0);
    if (plVar4 == (long *)0x0) goto LAB_0485c008;
    FUN_074ee2d4(plVar4,uVar11,0);
  }
  if (*(int *)(*(long *)PTR_DAT_092a0a28 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  in_stack_00000038 = FUN_0485d8a0(in_stack_00000008);
  if (unaff_w24 - 1U < 2) {
    if (0x93a80 < in_stack_00000038) {
      thunk_FUN_040dedf8(PTR_DAT_0928de30);
      FUN_03b08ec8();
      uVar11 = FUN_076060c0(0);
      in_stack_00000018 = 0x93a80;
      uVar12 = thunk_FUN_040b4b34(*(undefined8 *)(PTR_DAT_09285980 + 0x68),&stack0x00000018);
      uVar5 = thunk_FUN_040dedf8(PTR_DAT_092af610);
      uVar11 = FUN_074e75d4(uVar11,uVar5,uVar12,0);
      thunk_FUN_040dedf8(PTR_DAT_09287028);
      uVar12 = thunk_FUN_040b4efc();
      FUN_075d4b88(uVar12,uVar11,0);
      uVar11 = thunk_FUN_040dedf8(PTR_DAT_092af618);
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar12,uVar11);
    }
LAB_0485b54c:
    if (*(int *)(*(long *)PTR_DAT_0928de30 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar11 = FUN_076060c0(0);
    uVar11 = FUN_07678018(&stack0x00000038,uVar11,0);
    if (plVar3 == (long *)0x0) goto LAB_0485c008;
    lVar7 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    uVar12 = *(undefined8 *)PTR_DAT_092af5e8;
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar7 + (long)(*piVar10 + 5) * 0x10 + 0x138);
          goto LAB_0485b5e0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(plVar3,*unaff_x25,5);
LAB_0485b5e0:
    (*(code *)*puVar2)(plVar3,uVar12,uVar11,puVar2[1]);
    uVar9 = FUN_074e5d94(in_stack_00000010,0);
    if ((uVar9 & 1) == 0) {
      lVar8 = *plVar3;
      lVar7 = *unaff_x25;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      uVar11 = *(undefined8 *)PTR_DAT_092af608;
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar7) goto LAB_0485b73c;
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
LAB_0485b72c:
      puVar2 = (undefined8 *)FUN_040b1e00(plVar3,lVar7,5);
      goto LAB_0485b74c;
    }
  }
  else {
    if (unaff_w24 != 0) goto LAB_0485b54c;
    if (*(int *)(*(long *)PTR_DAT_0928de30 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar11 = FUN_076060c0(0);
    uVar11 = FUN_07678018(&stack0x00000038,uVar11,0);
    if (plVar3 == (long *)0x0) goto LAB_0485c008;
    lVar7 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    uVar12 = *(undefined8 *)PTR_DAT_092a92c0;
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar7 + (long)(*piVar10 + 5) * 0x10 + 0x138);
          goto LAB_0485b658;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(plVar3,*unaff_x25,5);
LAB_0485b658:
    (*(code *)*puVar2)(plVar3,uVar12,uVar11,puVar2[1]);
    lVar7 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    uVar11 = *(undefined8 *)PTR_DAT_092ad130;
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar7 + (long)(*piVar10 + 5) * 0x10 + 0x138);
          goto LAB_0485b6c8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(plVar3,*unaff_x25,5);
LAB_0485b6c8:
    (*(code *)*puVar2)(plVar3,uVar11,in_stack_00000000,puVar2[1]);
    uVar9 = FUN_074e5d94(in_stack_00000010,0);
    if ((uVar9 & 1) == 0) {
      lVar8 = *plVar3;
      lVar7 = *unaff_x25;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      uVar11 = *(undefined8 *)PTR_DAT_092ab7d0;
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar7) goto LAB_0485b73c;
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      goto LAB_0485b72c;
    }
  }
LAB_0485b760:
  uVar9 = FUN_048aa38c();
  if ((uVar9 & 1) != 0) {
    FUN_0492e308(*(undefined8 *)(unaff_x20 + 0x70),0);
    lVar7 = *unaff_x19;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_092a58b8) {
          puVar2 = (undefined8 *)(lVar7 + (long)(*piVar10 + 8) * 0x10 + 0x138);
          goto LAB_0485b7e4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00();
LAB_0485b7e4:
    (*(code *)*puVar2)();
  }
  uVar9 = FUN_048aa3bc();
  if ((uVar9 & 1) != 0) {
    FUN_0492e308(*(undefined8 *)(unaff_x20 + 0x78),0);
    lVar7 = *unaff_x19;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_092a58b8) {
          puVar2 = (undefined8 *)(lVar7 + (long)(*piVar10 + 8) * 0x10 + 0x138);
          goto LAB_0485b87c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00();
LAB_0485b87c:
    (*(code *)*puVar2)();
  }
  uVar9 = FUN_048aa480();
  if ((uVar9 & 1) != 0) {
    uVar11 = FUN_048aa3dc();
    FUN_049318b0(uVar11,0);
    lVar7 = *unaff_x19;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_092a58b8) {
          puVar2 = (undefined8 *)(lVar7 + (long)(*piVar10 + 8) * 0x10 + 0x138);
          goto LAB_0485b91c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00();
LAB_0485b91c:
    (*(code *)*puVar2)();
  }
  lVar7 = FUN_048aa658();
  if (lVar7 != 0) {
    uVar9 = FUN_074e5d94(*(undefined8 *)(lVar7 + 0x28),0);
    if ((uVar9 & 1) == 0) {
      if (plVar3 == (long *)0x0) goto LAB_0485c008;
      lVar8 = *plVar3;
      uVar11 = *(undefined8 *)(lVar7 + 0x28);
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      uVar12 = *(undefined8 *)PTR_DAT_092ad198;
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar8 + (long)(*piVar10 + 5) * 0x10 + 0x138);
            goto LAB_0485b9b8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar2 = (undefined8 *)FUN_040b1e00(plVar3,*unaff_x25,5);
LAB_0485b9b8:
      (*(code *)*puVar2)(plVar3,uVar12,uVar11,puVar2[1]);
    }
    uVar9 = FUN_074e5d94(*(undefined8 *)(lVar7 + 0x10),0);
    if ((uVar9 & 1) == 0) {
      if (plVar3 == (long *)0x0) goto LAB_0485c008;
      lVar8 = *plVar3;
      uVar11 = *(undefined8 *)(lVar7 + 0x10);
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      uVar12 = *(undefined8 *)PTR_DAT_092ad190;
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar8 + (long)(*piVar10 + 5) * 0x10 + 0x138);
            goto LAB_0485ba40;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar2 = (undefined8 *)FUN_040b1e00(plVar3,*unaff_x25,5);
LAB_0485ba40:
      (*(code *)*puVar2)(plVar3,uVar12,uVar11,puVar2[1]);
    }
    uVar9 = FUN_074e5d94(*(undefined8 *)(lVar7 + 0x18),0);
    if ((uVar9 & 1) == 0) {
      if (plVar3 == (long *)0x0) goto LAB_0485c008;
      lVar8 = *plVar3;
      uVar11 = *(undefined8 *)(lVar7 + 0x18);
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      uVar12 = *(undefined8 *)PTR_DAT_092ad1b8;
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar8 + (long)(*piVar10 + 5) * 0x10 + 0x138);
            goto LAB_0485bac8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar2 = (undefined8 *)FUN_040b1e00(plVar3,*unaff_x25,5);
LAB_0485bac8:
      (*(code *)*puVar2)(plVar3,uVar12,uVar11,puVar2[1]);
    }
    uVar9 = FUN_074e5d94(*(undefined8 *)(lVar7 + 0x20),0);
    if ((uVar9 & 1) == 0) {
      if (plVar3 == (long *)0x0) goto LAB_0485c008;
      lVar8 = *plVar3;
      uVar11 = *(undefined8 *)(lVar7 + 0x20);
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      uVar12 = *(undefined8 *)PTR_DAT_092ad1a8;
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar8 + (long)(*piVar10 + 5) * 0x10 + 0x138);
            goto LAB_0485bb50;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar2 = (undefined8 *)FUN_040b1e00(plVar3,*unaff_x25,5);
LAB_0485bb50:
      (*(code *)*puVar2)(plVar3,uVar12,uVar11,puVar2[1]);
    }
    uVar9 = FUN_074e5d94(*(undefined8 *)(lVar7 + 0x30),0);
    if ((uVar9 & 1) == 0) {
      if (plVar3 == (long *)0x0) goto LAB_0485c008;
      lVar8 = *plVar3;
      uVar11 = *(undefined8 *)(lVar7 + 0x30);
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      uVar12 = *(undefined8 *)PTR_DAT_092ad1a0;
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar8 + (long)(*piVar10 + 5) * 0x10 + 0x138);
            goto Amazon_S3_Encryption_Internal_UserAgentHandler__PreInvoke;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar2 = (undefined8 *)FUN_040b1e00(plVar3,*unaff_x25,5);
Amazon_S3_Encryption_Internal_UserAgentHandler__PreInvoke:
      (*(code *)*puVar2)(plVar3,uVar12,uVar11,puVar2[1]);
    }
    uVar9 = FUN_074e5d94(*(undefined8 *)(lVar7 + 0x38),0);
    if ((uVar9 & 1) == 0) {
      if (plVar3 == (long *)0x0) goto LAB_0485c008;
      lVar8 = *plVar3;
      uVar11 = *(undefined8 *)(lVar7 + 0x38);
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      uVar12 = *(undefined8 *)PTR_DAT_092ad1b0;
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar8 + (long)(*piVar10 + 5) * 0x10 + 0x138);
            goto LAB_0485bc60;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar2 = (undefined8 *)FUN_040b1e00(plVar3,*unaff_x25,5);
LAB_0485bc60:
      (*(code *)*puVar2)(plVar3,uVar12,uVar11,puVar2[1]);
    }
    lVar7 = FUN_048aa7bc();
    if ((lVar7 != 0) && (plVar6 = (long *)FUN_048b5564(lVar7,0), plVar6 != (long *)0x0)) {
      lVar7 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0928a908) {
            puVar2 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0485bce8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar2 = (undefined8 *)FUN_040b1e00(plVar6,*(long *)PTR_DAT_0928a908,0);
LAB_0485bce8:
      in_stack_00000030 = (long *)(*(code *)*puVar2)(plVar6,puVar2[1]);
      in_stack_00000020 = &stack0x00000030;
      in_stack_00000018 = 0;
      do {
        plVar6 = in_stack_00000030;
        if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar7 = *in_stack_00000030;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x29) {
              puVar2 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0485bd54;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar2 = (undefined8 *)FUN_040b1e00(in_stack_00000030,*unaff_x29,0);
LAB_0485bd54:
        uVar9 = (*(code *)*puVar2)(plVar6,puVar2[1]);
        plVar6 = in_stack_00000030;
        if ((uVar9 & 1) == 0) {
          if (in_stack_00000030 == (long *)0x0) goto LAB_0485bed0;
          lVar7 = *in_stack_00000030;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 == 0) goto LAB_0485bea8;
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_0485be90;
        }
        if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar7 = *in_stack_00000030;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0928a910) {
              puVar2 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0485bdc0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar2 = (undefined8 *)FUN_040b1e00(in_stack_00000030,*(long *)PTR_DAT_0928a910,0);
LAB_0485bdc0:
        uVar11 = (*(code *)*puVar2)(plVar6,puVar2[1]);
        lVar7 = FUN_048aa7bc();
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        uVar12 = FUN_048b52b0(lVar7,uVar11,0);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar7 = *plVar3;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x25) {
              puVar2 = (undefined8 *)(lVar7 + (long)(*piVar10 + 5) * 0x10 + 0x138);
              goto LAB_0485be44;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar2 = (undefined8 *)FUN_040b1e00(plVar3,*unaff_x25,5);
LAB_0485be44:
        (*(code *)*puVar2)(plVar3,uVar11,uVar12,puVar2[1]);
      } while( true );
    }
  }
LAB_0485c008:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
LAB_0485b73c:
  puVar2 = (undefined8 *)(lVar8 + (long)(*piVar10 + 5) * 0x10 + 0x138);
LAB_0485b74c:
  (*(code *)*puVar2)(plVar3,uVar11,in_stack_00000010,puVar2[1]);
  goto LAB_0485b760;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_0485be90:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_092860c0) {
      puVar2 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_0485bec4;
    }
  }
LAB_0485bea8:
  puVar2 = (undefined8 *)FUN_040b1e00(in_stack_00000030,*(long *)PTR_DAT_092860c0,0);
LAB_0485bec4:
  (*(code *)*puVar2)(plVar6,puVar2[1]);
LAB_0485bed0:
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    lVar7 = *unaff_x19;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_092a58b8) {
          puVar2 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
          goto LAB_0485bf50;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00();
LAB_0485bf50:
    (*(code *)*puVar2)();
    lVar7 = *unaff_x19;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_092a58b8) {
          puVar2 = (undefined8 *)(lVar7 + (long)(*piVar10 + 3) * 0x10 + 0x138);
          goto LAB_0485bfb8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00();
LAB_0485bfb8:
    (*(code *)*puVar2)();
    return;
  }
  goto LAB_0485c008;
}


