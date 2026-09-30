/*
FUNCTION_NAME: Fusion.JsonUtilityExtensions.TypeSerializerDelegate$$BeginInvoke
ENTRY_POINT: 03270e30
PROGRAM: beastcraft-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Fusion_JsonUtilityExtensions_TypeSerializerDelegate__BeginInvoke
               (undefined1 param_1 [16],undefined1 param_2 [16])

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *in_x9;
  undefined4 *unaff_x19;
  long unaff_x20;
  int iVar6;
  long unaff_x21;
  long unaff_x22;
  long unaff_x26;
  long *unaff_x27;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long in_stack_00000008;
  int *in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  undefined8 in_stack_00000060;
  long in_stack_000003f8;
  
  uVar5 = *in_x9;
  *(long *)(unaff_x21 + 0x158) = param_2._8_8_;
  *(long *)(unaff_x21 + 0x150) = param_2._0_8_;
  *(long *)(unaff_x21 + 0x168) = param_2._8_8_;
  *(long *)(unaff_x21 + 0x160) = param_2._0_8_;
  FUN_04254384(&stack0x000002b0,&stack0x000003e0,uVar5);
  uVar5 = *(undefined8 *)(unaff_x21 + 0x150);
  uVar9 = *(undefined8 *)(unaff_x21 + 0x168);
  uVar8 = *(undefined8 *)(unaff_x21 + 0x160);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x21 + 0x158);
  *(undefined8 *)(unaff_x22 + 0x38) = uVar5;
  uVar7 = *(undefined8 *)(unaff_x19 + 0x1a);
  uVar5 = *(undefined8 *)(unaff_x19 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x19 + 0x1e);
  uVar10 = *(undefined8 *)(unaff_x19 + 0x1c);
  *(undefined8 *)(unaff_x22 + 0x50) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar10;
  thunk_FUN_02ee2be8(&stack0x00000368);
  thunk_FUN_02ee2be8(&stack0x00000370);
  thunk_FUN_02ee2be8(&stack0x00000378);
  thunk_FUN_02ee2be8(&stack0x00000380);
  thunk_FUN_02ee2be8(&stack0x00000388);
  thunk_FUN_02ee2be8(&stack0x00000398);
  thunk_FUN_02ee2be8(&stack0x000003a0);
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    FUN_032556a0(*(long *)(unaff_x19 + 0x50),0);
  }
  thunk_FUN_02ee2be8(&stack0x000003b8);
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    FUN_032556b8(*(long *)(unaff_x19 + 0x50),0);
    if (*(long *)(unaff_x19 + 0x50) != 0) {
      FUN_03255780(*(long *)(unaff_x19 + 0x50),0);
    }
  }
  thunk_FUN_02ee2be8(&stack0x000003c0);
  if (unaff_x20 == 0) {
    if (*(long *)(unaff_x26 + 0x28) == in_stack_000003f8) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    goto LAB_03271b1c;
  }
  memcpy(&stack0x00000068,&stack0x000002d0,0xf8);
  FUN_0321ac90();
  if (in_stack_00000058 == 0) {
    if (*(long *)(unaff_x26 + 0x28) == in_stack_000003f8) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    goto LAB_03271b1c;
  }
  if (*(long *)(in_stack_00000058 + 0x1d8) == 0) {
    if (*(long *)(unaff_x26 + 0x28) == in_stack_000003f8) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    goto LAB_03271b1c;
  }
  lVar2 = FUN_03219a54(*(long *)(in_stack_00000058 + 0x1d8),*(undefined8 *)(unaff_x19 + 0x54),0);
  if (lVar2 == 0) {
    if (*(long *)(unaff_x26 + 0x28) == in_stack_000003f8) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    goto LAB_03271b1c;
  }
  in_stack_00000050 = FUN_0567a378(lVar2,0);
  uVar3 = FUN_0552e0e0(&stack0x00000050,0);
  if ((uVar3 & 1) == 0) {
    in_stack_00000060._4_4_ = 2;
    *unaff_x19 = 2;
    *(undefined8 *)(unaff_x19 + 0x5e) = in_stack_00000050;
    thunk_FUN_02ee2be8(unaff_x19 + 0x5e,0);
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    FUN_0356e080(unaff_x19 + 2,&stack0x00000050);
LAB_032711f8:
    uVar5 = 0;
    iVar6 = 0x1e;
  }
  else {
    FUN_0552e1a8(&stack0x00000050,0);
    if (in_stack_00000058 == 0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_000003f8) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      goto LAB_03271b1c;
    }
    if (*(long *)(in_stack_00000058 + 0x1d0) == 0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_000003f8) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      goto LAB_03271b1c;
    }
    lVar2 = FUN_04476298(*(long *)(in_stack_00000058 + 0x1d0),*(undefined8 *)PTR_DAT_06a41628);
    if (lVar2 == 0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_000003f8) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      goto LAB_03271b1c;
    }
    in_stack_00000040 = FUN_046dd0d0(lVar2,*(undefined8 *)PTR_DAT_06a41688);
    uVar3 = FUN_046bbe8c(&stack0x00000040,*(undefined8 *)PTR_DAT_06a41680);
    if ((uVar3 & 1) == 0) {
      in_stack_00000060._4_4_ = 3;
      *unaff_x19 = 3;
      *(undefined8 *)(unaff_x19 + 0x62) = in_stack_00000040;
      thunk_FUN_02ee2be8(unaff_x19 + 0x62,0);
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      FUN_0355df28(unaff_x19 + 2,&stack0x00000040);
      goto LAB_032711f8;
    }
    FUN_046bbecc(&stack0x00000040,*(undefined8 *)PTR_DAT_06a41678);
    if (*(long *)(unaff_x19 + 0x42) != 0) {
      if (in_stack_00000058 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_000003f8) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        goto LAB_03271b1c;
      }
      if (*(long *)(in_stack_00000058 + 0x1b0) == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_000003f8) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        goto LAB_03271b1c;
      }
      FUN_0321fce4(*(long *)(in_stack_00000058 + 0x1b0),*(long *)(unaff_x19 + 0x42),0);
    }
    if (unaff_x19[0x5c] == 1) {
      plVar4 = *(long **)(unaff_x19 + 0x5a);
      if (plVar4 != (long *)0x0) {
        lVar2 = *(long *)PTR_DAT_06a2f4a0;
        if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) != lVar2)
           ) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_000003f8) {
                    /* WARNING: Subroutine does not return */
            FUN_02e3d044(plVar4,lVar2);
          }
          goto LAB_03271b1c;
        }
      }
      if (in_stack_00000058 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_000003f8) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        goto LAB_03271b1c;
      }
      lVar2 = FUN_0326c200(in_stack_00000058,plVar4,0);
      if (lVar2 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_000003f8) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        goto LAB_03271b1c;
      }
      in_stack_00000038 = FUN_046decbc(lVar2,*(undefined8 *)PTR_DAT_06a415d0);
      uVar3 = FUN_046bbfb4(&stack0x00000038,*(undefined8 *)PTR_DAT_06a415c0);
      if ((uVar3 & 1) == 0) {
        in_stack_00000060._4_4_ = 4;
        *unaff_x19 = 4;
        *(undefined8 *)(unaff_x19 + 100) = in_stack_00000038;
        thunk_FUN_02ee2be8(unaff_x19 + 100,0);
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        FUN_03566fc8(unaff_x19 + 2,&stack0x00000038);
        goto LAB_032711f8;
      }
      uVar5 = FUN_046bbff4(&stack0x00000038,*(undefined8 *)PTR_DAT_06a415b0);
      iVar6 = 0x32;
    }
    else {
      *(undefined8 *)(unaff_x19 + 0x5a) = 0;
      thunk_FUN_02ee2be8(unaff_x19 + 0x5a,0);
      uVar5 = 0;
      iVar6 = 0x33;
    }
  }
  if (*in_stack_00000010 < 0) {
    lVar2 = *in_stack_00000018;
    if (lVar2 == 0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_000003f8) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      goto LAB_03271b1c;
    }
    *(undefined8 *)(lVar2 + 0x1d0) = 0;
    thunk_FUN_02ee2be8(lVar2 + 0x1d0,0);
  }
  if (in_stack_00000008 != 0) {
    if (*(long *)(unaff_x26 + 0x28) == in_stack_000003f8) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccbc();
    }
    goto LAB_03271b1c;
  }
  if (iVar6 == 0x33) {
LAB_03271244:
    uVar5 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a41410);
    FUN_0326f7c4(uVar5,0,0,0);
Fusion_NetworkObjectBaker__GetSortKey:
    *unaff_x19 = 0xfffffffe;
    puVar1 = PTR_DAT_06a415a8;
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    FUN_04480718(unaff_x19 + 2,uVar5,*(undefined8 *)puVar1);
  }
  else {
    if (iVar6 == 0x32) goto Fusion_NetworkObjectBaker__GetSortKey;
    if (iVar6 == 0) goto LAB_03271244;
  }
  if (*(long *)(unaff_x26 + 0x28) == in_stack_000003f8) {
    return;
  }
LAB_03271b1c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


