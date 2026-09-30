/*
FUNCTION_NAME: FUN_01c5b00c
ENTRY_POINT: 01c5b00c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_1;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x01c5ae74) */

void FUN_01c5b00c(undefined8 param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x20;
  long unaff_x21;
  int unaff_w22;
  undefined1 unaff_w23;
  long unaff_x24;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  uint unaff_w29;
  undefined8 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined1 *in_stack_00000030;
  undefined4 in_stack_00000048;
  undefined8 in_stack_00000050;
  char cStack000000000000005c;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000070;
  long *in_stack_00000078;
  
  plVar4 = (long *)FUN_00da4fb8(param_1,5);
  if (plVar4 == (long *)0x0) {
    in_stack_00000048 = in_stack_00000010;
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((*unaff_x28 != 0) &&
     (lVar5 = thunk_FUN_00d6225c(*unaff_x28,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
    in_stack_00000048 = in_stack_00000010;
    uVar8 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar8,0);
  }
  if ((int)plVar4[3] == 0) {
    in_stack_00000048 = in_stack_00000010;
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  plVar4[4] = *unaff_x28;
  in_stack_00000028 = (undefined8 *)CONCAT71(in_stack_00000028._1_7_,unaff_w23);
  in_stack_00000018 = *(undefined8 *)StringLiteral_4901;
  in_stack_00000020 = (undefined8 *)0xffffffffffffffff;
  lVar5 = FUN_017a7f78(&stack0x00000018,0);
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
    in_stack_00000048 = in_stack_00000010;
    uVar8 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar8,0);
  }
  uVar2 = *(uint *)(plVar4 + 3);
  if (uVar2 < 2) {
    in_stack_00000048 = in_stack_00000010;
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  plVar4[5] = lVar5;
  if (*unaff_x26 != 0) {
    lVar5 = thunk_FUN_00d6225c(*unaff_x26,*(undefined8 *)(*plVar4 + 0x40));
    if (lVar5 == 0) {
      in_stack_00000048 = in_stack_00000010;
      uVar8 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar8,0);
    }
    uVar2 = *(uint *)(plVar4 + 3);
  }
  plVar1 = in_stack_00000078;
  if (uVar2 < 3) {
    in_stack_00000048 = in_stack_00000010;
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  plVar4[6] = *unaff_x26;
  if (in_stack_00000078 == (long *)0x0) {
    in_stack_00000048 = in_stack_00000010;
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar5 = *in_stack_00000078;
  uVar9 = (ulong)*(ushort *)(lVar5 + 0x12a);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x20) {
        puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 5) * 0x10 + 0x138);
        goto LAB_01c5b118;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar7 = (undefined8 *)FUN_00d59724(in_stack_00000078,*unaff_x20,5);
LAB_01c5b118:
  lVar5 = (*(code *)*puVar7)(plVar1,puVar7[1]);
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
    in_stack_00000048 = in_stack_00000010;
    uVar8 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar8,0);
  }
  uVar2 = *(uint *)(plVar4 + 3);
  if (uVar2 < 4) {
    in_stack_00000048 = in_stack_00000010;
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  plVar4[7] = lVar5;
  if (*unaff_x27 != 0) {
    lVar5 = thunk_FUN_00d6225c(*unaff_x27,*(undefined8 *)(*plVar4 + 0x40));
    if (lVar5 == 0) {
      in_stack_00000048 = in_stack_00000010;
      uVar8 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar8,0);
    }
    uVar2 = *(uint *)(plVar4 + 3);
  }
  if (uVar2 < 5) {
    in_stack_00000048 = in_stack_00000010;
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  plVar4[8] = *unaff_x27;
  uVar8 = FUN_01600844(plVar4,0);
  if (unaff_x24 == 0) {
    in_stack_00000048 = in_stack_00000010;
                    /* WARNING: Subroutine does not return */
    FUN_00da518c(uVar8,uVar8);
  }
  FUN_01c25600();
LAB_01c5b19c:
  cStack000000000000005c = (char)unaff_w22;
LAB_01c5b1a0:
  plVar4 = in_stack_00000078;
  if (in_stack_00000078 == (long *)0x0) {
    in_stack_00000048 = in_stack_00000010;
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar5 = *in_stack_00000078;
  uVar9 = (ulong)*(ushort *)(lVar5 + 0x12a);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x20) {
        puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0x25) * 0x10 + 0x138);
        goto LAB_01c5b1f8;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar7 = (undefined8 *)FUN_00d59724(in_stack_00000078,*unaff_x20,0x25);
LAB_01c5b1f8:
  (*(code *)*puVar7)(plVar4,puVar7[1]);
  do {
    plVar4 = in_stack_00000078;
    if (in_stack_00000078 == (long *)0x0) {
      in_stack_00000048 = in_stack_00000010;
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar5 = *in_stack_00000078;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x20) {
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0x10) * 0x10 + 0x138);
          goto LAB_01c5acdc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(in_stack_00000078,*unaff_x20,0x10);
LAB_01c5acdc:
    uVar2 = (*(code *)*puVar7)(plVar4,&stack0x00000070,puVar7[1]);
    if (((uVar2 & 0xff) < 0x10) && ((unaff_w22 << (ulong)(uVar2 & 0x1f) & unaff_w29) != 0)) {
      return;
    }
    in_stack_00000060 = 0;
    cStack000000000000005c = '\0';
    if ((uVar2 & 0xff) == 0) {
      uVar8 = thunk_FUN_00d93c64();
      if (*(int *)(*(long *)Method_System_Collections_Generic_List<Collider>_Clear__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_01c4b4e0(uVar8);
      uVar8 = FUN_01600424(*(undefined8 *)System_Text_RegularExpressions_RegexCharClass_TypeInfo,
                           uVar8,*(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Create__
                           ,0);
      in_stack_00000050 = uVar8;
      if (in_stack_00000078 == (long *)0x0) {
        in_stack_00000048 = in_stack_00000010;
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      plVar4 = (long *)thunk_FUN_00d93c64(in_stack_00000078,0);
      if (plVar4 == (long *)0x0) {
        in_stack_00000048 = in_stack_00000010;
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar3 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      uVar8 = FUN_0160073c(uVar8,*(undefined8 *)
                                  Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass23_0_<DOFloat>b__0__
                           ,uVar3,*(undefined8 *)PTR_DAT_033ead30,0);
      plVar4 = in_stack_00000078;
      in_stack_00000020 = &stack0x00000078;
      in_stack_00000018 = 0;
      in_stack_00000030 = &stack0x0000005c;
      in_stack_00000028 = &stack0x00000050;
      in_stack_00000050 = uVar8;
      if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar5 = *in_stack_00000078;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x20) {
            puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 10) * 0x10 + 0x138);
            goto LAB_01c5ae34;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_00d59724(in_stack_00000078,*unaff_x20,10);
LAB_01c5ae34:
      uVar3 = (*(code *)*puVar7)(plVar4,puVar7[1]);
      in_stack_00000050 = FUN_01600424(uVar8,*(undefined8 *)StringLiteral_13732,uVar3,0);
      FUN_00c3c4bc(&stack0x00000018);
      lVar5 = 0;
    }
    else {
      uVar9 = FUN_015ff8a0(in_stack_00000070,0);
      plVar4 = in_stack_00000078;
      if ((uVar9 & 1) != 0) {
        if (in_stack_00000078 == (long *)0x0) {
          in_stack_00000048 = in_stack_00000010;
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar5 = *in_stack_00000078;
        uVar9 = (ulong)*(ushort *)(lVar5 + 0x12a);
        if (uVar9 == 0) goto LAB_01c5aec0;
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        break;
      }
      if (unaff_x21 == 0) {
        in_stack_00000048 = in_stack_00000010;
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar9 = FUN_0129eff4();
      uVar8 = in_stack_00000060;
      if ((uVar9 & 1) == 0) goto LAB_01c5b19c;
      if (*(int *)(*(long *)Method_UnityEngine_InputSystem_UI_VirtualMouseInput_OnAfterInputUpdate__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar5 = FUN_01c5be40(uVar8);
      if (lVar5 == 0) goto LAB_01c5b19c;
    }
    uVar8 = in_stack_00000060;
    if (cStack000000000000005c != '\0') goto LAB_01c5b1a0;
    if (*(int *)(*(long *)System_Net_FileWebRequest_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar8 = FUN_01c258c8(uVar8,0);
    if (*(int *)(*(long *)Method_UnityEngine_XR_ARFoundation_ARAnchorManager_TryRemoveAnchor__ +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar4 = (long *)FUN_01c25a14(uVar8,0);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar8 = (**(code **)(*plVar4 + 0x178))
                      (plVar4,in_stack_00000078,*(undefined8 *)(*plVar4 + 0x180));
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    (**(code **)(lVar5 + 0x18))
              (*(undefined8 *)(lVar5 + 0x40),&stack0x00000068,uVar8,*(undefined8 *)(lVar5 + 0x28));
    in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
    if (in_stack_00000008._4_4_ == 0x3e9) {
      FUN_01c5b35c();
      return;
    }
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *unaff_x20) {
      puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 8) * 0x10 + 0x138);
      goto LAB_01c5afd8;
    }
  }
LAB_01c5aec0:
  puVar7 = (undefined8 *)FUN_00d59724(in_stack_00000078,*unaff_x20,8);
LAB_01c5afd8:
  lVar5 = (*(code *)*puVar7)(plVar4,puVar7[1]);
  if (lVar5 == 0) {
    in_stack_00000048 = in_stack_00000010;
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar5 = FUN_01c25128(lVar5,0);
  if (lVar5 != 0) {
    FUN_01c254c8(lVar5,0);
    FUN_01c69fac(PTR_DAT_033ea8a0);
    return;
  }
  in_stack_00000048 = in_stack_00000010;
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


