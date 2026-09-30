/*
FUNCTION_NAME: Oculus.Platform.WindowsPlatform.UnityLogDelegate$$BeginInvoke
ENTRY_POINT: 050a3e94
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Oculus_Platform_WindowsPlatform_UnityLogDelegate__BeginInvoke(void)

{
  ushort uVar1;
  uint uVar2;
  undefined *puVar3;
  byte bVar4;
  undefined2 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined4 *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined1 auVar12 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined2 uStack0000000000000038;
  byte bStack000000000000003c;
  
  uStack0000000000000028 = *(undefined8 *)(unaff_x19 + 0xe);
  uStack0000000000000020 = *(undefined8 *)(unaff_x19 + 0xc);
  *(undefined8 *)(unaff_x19 + 0xc) = 0;
  *(undefined8 *)(unaff_x19 + 0xe) = 0;
  *unaff_x19 = 0xffffffff;
  uVar6 = FUN_046f3940(&stack0x00000020,*unaff_x22);
  if ((uVar6 & 1) != 0) {
LAB_050a3df0:
    uVar5 = 0;
LAB_050a4738:
    *unaff_x19 = 0xfffffffe;
    puVar3 = PTR_DAT_0665e3f0;
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_03ec717c(unaff_x19 + 2,uVar5,*(undefined8 *)puVar3);
    return;
  }
LAB_050a4294:
  puVar3 = PTR_DAT_0664b130;
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  lVar11 = unaff_x20[0x10];
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  uVar2 = *(uint *)((long)unaff_x20 + 0x8c);
  if (*(uint *)(lVar11 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4def0();
  }
  uVar1 = *(ushort *)(lVar11 + (long)(int)uVar2 * 2 + 0x20);
  uVar6 = (ulong)uVar1;
  if (uVar1 < 0x3a) {
    if (uVar1 == 0) {
      lVar11 = Oculus_Platform_Cowatching__ResignFromPresenting();
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      auVar12 = FUN_03dad3a8(lVar11,0,*unaff_x26);
      _uStack0000000000000020 = auVar12;
      uVar6 = FUN_046f38f8(&stack0x00000020,*unaff_x25);
      if ((uVar6 & 1) == 0) {
        *unaff_x19 = 1;
        *(undefined1 (*) [16])(unaff_x19 + 0xc) = _uStack0000000000000020;
        thunk_FUN_02dc1ef0(unaff_x19 + 0xc,0);
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        FUN_02f1a010(unaff_x19 + 2,&stack0x00000020);
        return;
      }
      uVar6 = FUN_046f3940(&stack0x00000020,*unaff_x22);
      if ((uVar6 & 1) != 0) {
        if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        Oculus_Platform_MessageWithNetSyncSetSessionPropertyResult__GetNetSyncSetSessionPropertyResult
                  ();
        uVar5 = 0;
        goto LAB_050a4738;
      }
      goto LAB_050a43ec;
    }
    if (uVar1 < 0x20) {
      if (uVar1 == 9) {
LAB_050a44e0:
        *(uint *)((long)unaff_x20 + 0x8c) = uVar2 + 1;
      }
      else if (uVar1 == 10) {
        FUN_050a0458();
      }
      else {
        if (uVar1 != 0xd) goto LAB_050a43c4;
        lVar11 = FUN_0509b07c();
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        auVar12 = FUN_050766e4(lVar11,0,0);
        _in_stack_00000010 = auVar12;
        uVar6 = FUN_04f309c8(&stack0x00000010,0);
        if ((uVar6 & 1) == 0) {
          *unaff_x19 = 7;
          *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000010;
          thunk_FUN_02dc1ef0(unaff_x19 + 0x16,0);
          if (*(int *)(*unaff_x23 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          FUN_02f1a258(unaff_x19 + 2,&stack0x00000010);
          return;
        }
LAB_050a44c8:
        FUN_04f309e0(&stack0x00000010,0);
      }
      goto LAB_050a43ec;
    }
    if (uVar1 < 0x2c) {
      if (uVar1 == 0x20) goto LAB_050a44e0;
      if ((uVar1 == 0x22) || (uVar1 == 0x27)) {
        lVar11 = FUN_0509b7f0();
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        auVar12 = FUN_050766e4(lVar11,0,0);
        _in_stack_00000010 = auVar12;
        uVar6 = FUN_04f309c8(&stack0x00000010,0);
        if ((uVar6 & 1) == 0) {
          *unaff_x19 = 2;
          *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000010;
          thunk_FUN_02dc1ef0(unaff_x19 + 0x16,0);
          if (*(int *)(*unaff_x23 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          FUN_02f1a258(unaff_x19 + 2,&stack0x00000010);
          return;
        }
        FUN_04f309e0(&stack0x00000010,0);
        if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        FUN_050ec160(unaff_x20 + 0x16,0);
        uVar5 = FUN_05092dd0();
        goto LAB_050a4738;
      }
    }
    else {
      if (0x39 < uVar1) goto LAB_050a43c4;
      if (uVar6 == 0x2c) {
        FUN_050a02f0();
        goto LAB_050a43ec;
      }
      if (uVar6 == 0x2f) {
        lVar11 = FUN_0509b5f0();
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        auVar12 = FUN_050766e4(lVar11,0,0);
        _in_stack_00000010 = auVar12;
        uVar6 = FUN_04f309c8(&stack0x00000010,0);
        if ((uVar6 & 1) == 0) {
          *unaff_x19 = 6;
          *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000010;
          thunk_FUN_02dc1ef0(unaff_x19 + 0x16,0);
          if (*(int *)(*unaff_x23 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          FUN_02f1a258(unaff_x19 + 2,&stack0x00000010);
          return;
        }
        goto LAB_050a44c8;
      }
      if ((1L << (uVar6 & 0x3f) & 0x3ff600000000000U) != 0) {
        lVar11 = FUN_0509c2e4();
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        auVar12 = FUN_050766e4(lVar11,0,0);
        _in_stack_00000010 = auVar12;
        uVar6 = FUN_04f309c8(&stack0x00000010,0);
        if ((uVar6 & 1) == 0) {
          *unaff_x19 = 4;
          *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000010;
          thunk_FUN_02dc1ef0(unaff_x19 + 0x16,0);
          if (*(int *)(*unaff_x23 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          FUN_02f1a258(unaff_x19 + 2,&stack0x00000010);
          return;
        }
        FUN_04f309e0(&stack0x00000010,0);
        if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        plVar7 = (long *)(**(code **)(*unaff_x20 + 0x248))();
        puVar3 = PTR_DAT_0664a388;
        if ((plVar7 == (long *)0x0) || (*plVar7 != *(long *)PTR_DAT_0664a388)) {
          uVar8 = (**(code **)(*unaff_x20 + 0x248))();
          if (*(int *)(*(long *)PTR_DAT_06649f98 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar9 = FUN_04f9d780(0);
          if (*(int *)(*(long *)PTR_DAT_06649fa0 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          bVar4 = FUN_04f77e0c(uVar8,uVar9,0);
        }
        else {
          puVar10 = (undefined8 *)thunk_FUN_02d8a780();
          uVar8 = *puVar10;
          *(undefined8 *)(unaff_x19 + 0x12) = puVar10[1];
          *(undefined8 *)(unaff_x19 + 0x10) = uVar8;
          thunk_FUN_02dc1ef0(unaff_x19 + 0x12,0);
          uVar8 = *(undefined8 *)(unaff_x19 + 0x10);
          uVar9 = *(undefined8 *)(unaff_x19 + 0x12);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          bVar4 = FUN_0552aa00(uVar8,uVar9,0,0);
        }
        bStack000000000000003c = bVar4 & 1;
        thunk_FUN_02d8a270(*(undefined8 *)(unaff_x24 + 0x28),(long)&stack0x00000038 + 4);
        Oculus_Platform_MessageWithNetSyncSetSessionPropertyResult__GetNetSyncSetSessionPropertyResult
                  ();
        uStack0000000000000038 = 0;
        FUN_0393f2a4(&stack0x00000038,bVar4 & 1,*(undefined8 *)PTR_DAT_06648178);
        uVar5 = uStack0000000000000038;
        goto LAB_050a4738;
      }
    }
  }
  else if (uVar1 < 0x67) {
    if (uVar1 == 0x5d) {
      *(uint *)((long)unaff_x20 + 0x8c) = uVar2 + 1;
      if ((1 < *(int *)((long)unaff_x20 + 0x24) - 5U) && (*(int *)((long)unaff_x20 + 0x24) != 8)) {
        uVar8 = FUN_050a0354();
        uVar9 = thunk_FUN_02db45e8(PTR_DAT_0665e3f8);
                    /* WARNING: Subroutine does not return */
        FUN_02d4ddac(uVar8,uVar9);
      }
      FUN_0509240c();
      goto LAB_050a3df0;
    }
    if (uVar1 == 0x66) {
      *(undefined1 *)(unaff_x19 + 0x14) = 0;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
Oculus_Platform_Models_AppDownloadResult___ctor:
      lVar11 = FUN_0509ba3c();
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      auVar12 = FUN_03dad3a8(lVar11,0,*unaff_x26);
      _uStack0000000000000020 = auVar12;
      uVar6 = FUN_046f38f8(&stack0x00000020,*unaff_x25);
      if ((uVar6 & 1) == 0) {
        *unaff_x19 = 5;
        *(undefined1 (*) [16])(unaff_x19 + 0xc) = _uStack0000000000000020;
        thunk_FUN_02dc1ef0(unaff_x19 + 0xc,0);
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        FUN_02f1a010(unaff_x19 + 2,&stack0x00000020);
        return;
      }
      uVar6 = FUN_046f3940(&stack0x00000020,*unaff_x22);
      if ((uVar6 & 1) == 0) {
        if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        if (unaff_x20[0x10] != 0) {
          if (*(uint *)(unaff_x20[0x10] + 0x18) <= *(uint *)((long)unaff_x20 + 0x8c)) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4def0();
          }
          uVar8 = FUN_050a0354();
          uVar9 = thunk_FUN_02db45e8(PTR_DAT_0665e3f8);
                    /* WARNING: Subroutine does not return */
          FUN_02d4ddac(uVar8,uVar9);
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      bStack000000000000003c = *(byte *)(unaff_x19 + 0x14);
      thunk_FUN_02d8a270(*(undefined8 *)(unaff_x24 + 0x28),(long)&stack0x00000038 + 4);
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      FUN_05094190();
      uStack0000000000000038 = 0;
      FUN_0393f2a4(&stack0x00000038,*(undefined1 *)(unaff_x19 + 0x14),
                   *(undefined8 *)PTR_DAT_06648178);
      uVar5 = uStack0000000000000038;
      goto LAB_050a4738;
    }
  }
  else {
    if (uVar1 == 0x6e) {
      lVar11 = FUN_0509c888();
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      auVar12 = FUN_050766e4(lVar11,0,0);
      _in_stack_00000010 = auVar12;
      uVar6 = FUN_04f309c8(&stack0x00000010,0);
      if ((uVar6 & 1) == 0) {
        *unaff_x19 = 3;
        *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000010;
        thunk_FUN_02dc1ef0(unaff_x19 + 0x16,0);
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        FUN_02f1a258(unaff_x19 + 2,&stack0x00000010);
        return;
      }
      FUN_04f309e0(&stack0x00000010,0);
      goto LAB_050a3df0;
    }
    if (uVar1 == 0x74) {
      *(undefined1 *)(unaff_x19 + 0x14) = 1;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      goto Oculus_Platform_Models_AppDownloadResult___ctor;
    }
  }
LAB_050a43c4:
  *(uint *)((long)unaff_x20 + 0x8c) = uVar2 + 1;
  if (*(int *)(*(long *)(unaff_x24 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar6 = FUN_04f72380(uVar1,0);
  if ((uVar6 & 1) == 0) {
    uVar8 = FUN_050a0354();
    uVar9 = thunk_FUN_02db45e8(PTR_DAT_0665e3f8);
                    /* WARNING: Subroutine does not return */
    FUN_02d4ddac(uVar8,uVar9);
  }
LAB_050a43ec:
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  *(undefined8 *)(unaff_x19 + 0x12) = 0;
  goto LAB_050a4294;
}


