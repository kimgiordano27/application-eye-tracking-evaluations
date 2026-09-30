/*
FUNCTION_NAME: Niantic.Platform.Analytics.Telemetry.PreLoginTelemetrySettingsDownloader.SettingsUpdatedDelegate$$EndInvoke
ENTRY_POINT: 04fcf2e0
PROGRAM: hellodot-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


void Niantic_Platform_Analytics_Telemetry_PreLoginTelemetrySettingsDownloader_SettingsUpdatedDelegate__EndInvoke
               (void)

{
  uint uVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  undefined2 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar17;
  undefined1 auVar18 [16];
  undefined2 uStack0000000000000008;
  byte bStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065fea48);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065fea50);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065fea58);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065fe738);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dc528);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c97b0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9808);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e1bd0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e1bd8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e1be0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cd840);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dc0d8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ce280);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cc870);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e1be8);
  *(undefined1 *)(unaff_x20 + 0xd68) = 1;
  puVar6 = PTR_DAT_065fe738;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  auVar18 = ZEXT816(0);
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  auVar4 = ZEXT816(0);
  auVar3 = ZEXT816(0);
  plVar17 = *(long **)(unaff_x19 + 8);
  switch(*unaff_x19) {
  case 0:
    _in_stack_00000020 = *(undefined1 (*) [16])(unaff_x19 + 0xc);
    *(undefined8 *)(unaff_x19 + 0xc) = 0;
    *(undefined8 *)(unaff_x19 + 0xe) = 0;
    *unaff_x19 = 0xffffffff;
    goto LAB_04fcf3e8;
  case 1:
    _in_stack_00000020 = *(undefined1 (*) [16])(unaff_x19 + 0xc);
    *(undefined8 *)(unaff_x19 + 0xc) = 0;
    *(undefined8 *)(unaff_x19 + 0xe) = 0;
    *unaff_x19 = 0xffffffff;
    goto LAB_04fcf868;
  case 2:
    _in_stack_00000010 = *(undefined1 (*) [16])(unaff_x19 + 0x16);
    *(undefined8 *)(unaff_x19 + 0x16) = 0;
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    *unaff_x19 = 0xffffffff;
    _in_stack_00000020 = ZEXT816(0);
LAB_04fcf430:
    FUN_04e5bbac(&stack0x00000010,0);
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar11 = FUN_05016e14(plVar17 + 0x16,0);
    uVar8 = FUN_04fbee2c(plVar17,uVar11,0);
    goto LAB_04fcfc3c;
  case 3:
    _in_stack_00000010 = *(undefined1 (*) [16])(unaff_x19 + 0x16);
    *(undefined8 *)(unaff_x19 + 0x16) = 0;
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    *unaff_x19 = 0xffffffff;
LAB_04fcf478:
    _in_stack_00000020 = auVar18;
    FUN_04e5bbac(&stack0x00000010,0);
    break;
  case 4:
    _in_stack_00000010 = *(undefined1 (*) [16])(unaff_x19 + 0x16);
    *(undefined8 *)(unaff_x19 + 0x16) = 0;
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    *unaff_x19 = 0xffffffff;
    _in_stack_00000020 = ZEXT816(0);
LAB_04fcf994:
    FUN_04e5bbac(&stack0x00000010,0);
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    plVar14 = (long *)(**(code **)(*plVar17 + 0x248))(plVar17,*(undefined8 *)(*plVar17 + 0x250));
    puVar5 = PTR_DAT_065dc528;
    if ((plVar14 == (long *)0x0) || (*plVar14 != *(long *)PTR_DAT_065dc528)) {
      uVar11 = (**(code **)(*plVar17 + 0x248))(plVar17,*(undefined8 *)(*plVar17 + 0x250));
      if (*(int *)(*(long *)PTR_DAT_065dc0d8 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar12 = FUN_04ef45ec(0);
      if (*(int *)(*(long *)PTR_DAT_065cd840 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      bVar7 = FUN_04ea8a54(uVar11,uVar12,0);
    }
    else {
      puVar15 = (undefined8 *)thunk_FUN_02cea9e8();
      uVar11 = *puVar15;
      *(undefined8 *)(unaff_x19 + 0x12) = puVar15[1];
      *(undefined8 *)(unaff_x19 + 0x10) = uVar11;
      uVar11 = *(undefined8 *)(unaff_x19 + 0x10);
      uVar12 = *(undefined8 *)(unaff_x19 + 0x12);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      bVar7 = FUN_054f6208(uVar11,uVar12,0,0);
    }
    bStack000000000000000c = bVar7 & 1;
    uVar11 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065c97b0,(long)&stack0x00000008 + 4);
    FUN_04fbd6c8(plVar17,10,uVar11,0,0);
    _uStack0000000000000008 = _uStack0000000000000008 & 0xffff0000;
    FUN_03c80878(&stack0x00000008,bVar7 & 1,*(undefined8 *)PTR_DAT_065cc870);
    goto LAB_04fcfc38;
  case 5:
    _in_stack_00000020 = *(undefined1 (*) [16])(unaff_x19 + 0xc);
    *(undefined8 *)(unaff_x19 + 0xc) = 0;
    *(undefined8 *)(unaff_x19 + 0xe) = 0;
    *unaff_x19 = 0xffffffff;
LAB_04fcfbd0:
    _in_stack_00000010 = auVar3;
    uVar10 = FUN_044a8b84(&stack0x00000020,*(undefined8 *)PTR_DAT_065e1bd8);
    if ((uVar10 & 1) == 0) {
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar9 = plVar17[0x10];
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      if (*(uint *)((long)plVar17 + 0x8c) < *(uint *)(lVar9 + 0x18)) {
        uVar11 = FUN_04fcba00(plVar17,*(undefined2 *)
                                       (lVar9 + (long)(int)*(uint *)((long)plVar17 + 0x8c) * 2 +
                                       0x20),0);
        uVar12 = thunk_FUN_02c7737c(PTR_DAT_065fea60);
                    /* WARNING: Subroutine does not return */
        FUN_02ce7b54(uVar11,uVar12);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    bStack000000000000000c = *(byte *)(unaff_x19 + 0x14);
    uVar11 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065c97b0,(long)&stack0x00000008 + 4);
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    FUN_04fc0224(plVar17,10,uVar11,0);
    _uStack0000000000000008 = _uStack0000000000000008 & 0xffff0000;
    FUN_03c80878(&stack0x00000008,*(undefined1 *)(unaff_x19 + 0x14),*(undefined8 *)PTR_DAT_065cc870)
    ;
LAB_04fcfc38:
    uVar8 = uStack0000000000000008;
    goto LAB_04fcfc3c;
  case 6:
    _in_stack_00000010 = *(undefined1 (*) [16])(unaff_x19 + 0x16);
    *(undefined8 *)(unaff_x19 + 0x16) = 0;
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    *unaff_x19 = 0xffffffff;
    _in_stack_00000020 = ZEXT816(0);
    goto LAB_04fcf928;
  case 7:
    _in_stack_00000010 = *(undefined1 (*) [16])(unaff_x19 + 0x16);
    *(undefined8 *)(unaff_x19 + 0x16) = 0;
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    *unaff_x19 = 0xffffffff;
    _in_stack_00000020 = ZEXT816(0);
    goto LAB_04fcf8e0;
  case 8:
    _in_stack_00000010 = *(undefined1 (*) [16])(unaff_x19 + 0x16);
    *(undefined8 *)(unaff_x19 + 0x16) = 0;
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    *unaff_x19 = 0xffffffff;
LAB_04fcf4fc:
    FUN_04e5bbac(&stack0x00000010,0);
    break;
  default:
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    FUN_04fc64fc(plVar17,0);
    uVar1 = *(uint *)((long)plVar17 + 0x24);
    if (0xc < uVar1) {
LAB_04fcf650:
      lVar9 = thunk_FUN_02c7737c(PTR_DAT_065dc0d8);
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar11 = FUN_04ef45ec(0);
      _uStack0000000000000008 = *(undefined4 *)((long)plVar17 + 0x24);
      uVar12 = thunk_FUN_02c7737c(PTR_DAT_065fe608);
      uVar12 = thunk_FUN_02cea4e8(uVar12,&stack0x00000008);
      uVar13 = thunk_FUN_02c7737c(PTR_DAT_065fe610);
      uVar11 = FUN_05017038(uVar13,uVar11,uVar12,0);
      uVar11 = FUN_04fbd0d4(plVar17,uVar11,0);
      uVar12 = thunk_FUN_02c7737c(PTR_DAT_065fea60);
                    /* WARNING: Subroutine does not return */
      FUN_02ce7b54(uVar11,uVar12);
    }
    if ((1 << (ulong)(uVar1 & 0x1f) & 0x665U) != 0) goto LAB_04fcf738;
    if (uVar1 != 8) {
      if (uVar1 != 0xc) goto LAB_04fcf650;
      lVar9 = FUN_04fc8294(plVar17,*(undefined8 *)(unaff_x19 + 10),0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      _in_stack_00000010 = FUN_04fa5130(lVar9,0,0);
      uVar10 = FUN_04e5bb90(&stack0x00000010,0);
      if ((uVar10 & 1) == 0) {
        *unaff_x19 = 8;
        *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000010;
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_03098570(unaff_x19 + 2,&stack0x00000010);
        return;
      }
      goto LAB_04fcf4fc;
    }
    lVar9 = FUN_04fc673c(plVar17,1,*(undefined8 *)(unaff_x19 + 10),0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    _in_stack_00000020 = FUN_04046650(lVar9,0,*(undefined8 *)PTR_DAT_065e1be8);
    uVar10 = FUN_044a8b38(&stack0x00000020,*(undefined8 *)PTR_DAT_065e1be0);
    if ((uVar10 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined1 (*) [16])(unaff_x19 + 0xc) = _in_stack_00000020;
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_0309835c(unaff_x19 + 2,&stack0x00000020);
      return;
    }
LAB_04fcf3e8:
    uVar10 = FUN_044a8b84(&stack0x00000020,*(undefined8 *)PTR_DAT_065e1bd8);
    if ((uVar10 & 1) == 0) {
LAB_04fcf738:
      do {
        puVar5 = PTR_DAT_065c9808;
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar9 = plVar17[0x10];
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        uVar1 = *(uint *)((long)plVar17 + 0x8c);
        if (*(uint *)(lVar9 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        uVar2 = *(ushort *)(lVar9 + (long)(int)uVar1 * 2 + 0x20);
        if (uVar2 < 0x3a) {
          switch(uVar2) {
          case 9:
          case 0x20:
            *(uint *)((long)plVar17 + 0x8c) = uVar1 + 1;
            break;
          case 10:
            FUN_04fcbb18(plVar17,0);
            break;
          case 0xb:
          case 0xc:
          case 0xe:
          case 0xf:
          case 0x10:
          case 0x11:
          case 0x12:
          case 0x13:
          case 0x14:
          case 0x15:
          case 0x16:
          case 0x17:
          case 0x18:
          case 0x19:
          case 0x1a:
          case 0x1b:
          case 0x1c:
          case 0x1d:
          case 0x1e:
          case 0x1f:
          case 0x21:
          case 0x23:
          case 0x24:
          case 0x25:
          case 0x26:
          case 0x28:
          case 0x29:
          case 0x2a:
          case 0x2b:
            goto switchD_04fcf784_caseD_b;
          case 0xd:
            lVar9 = FUN_04fc6c60(plVar17,0,*(undefined8 *)(unaff_x19 + 10),0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c7c();
            }
            auVar18 = FUN_04fa5130(lVar9,0,0);
            _in_stack_00000010 = auVar18;
            uVar10 = FUN_04e5bb90(&stack0x00000010,0);
            if ((uVar10 & 1) == 0) {
              *unaff_x19 = 7;
              *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000010;
              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                thunk_FUN_02cd038c();
              }
              FUN_03098570(unaff_x19 + 2,&stack0x00000010);
              return;
            }
LAB_04fcf8e0:
            FUN_04e5bbac(&stack0x00000010,0);
            break;
          case 0x22:
          case 0x27:
            lVar9 = FUN_04fc7320(plVar17,uVar2,0,*(undefined8 *)(unaff_x19 + 10),0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c7c();
            }
            auVar18 = FUN_04fa5130(lVar9,0,0);
            _in_stack_00000010 = auVar18;
            uVar10 = FUN_04e5bb90(&stack0x00000010,0);
            if ((uVar10 & 1) == 0) {
              *unaff_x19 = 2;
              *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000010;
              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                thunk_FUN_02cd038c();
              }
              FUN_03098570(unaff_x19 + 2,&stack0x00000010);
              return;
            }
            goto LAB_04fcf430;
          case 0x2c:
            FUN_04fcb994(plVar17,0);
            break;
          case 0x2d:
          case 0x2e:
          case 0x30:
          case 0x31:
          case 0x32:
          case 0x33:
          case 0x34:
          case 0x35:
          case 0x36:
          case 0x37:
          case 0x38:
          case 0x39:
            lVar9 = FUN_04fc7cd0(plVar17,0,*(undefined8 *)(unaff_x19 + 10),0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c7c();
            }
            auVar18 = FUN_04fa5130(lVar9,0,0);
            _in_stack_00000010 = auVar18;
            uVar10 = FUN_04e5bb90(&stack0x00000010,0);
            if ((uVar10 & 1) == 0) {
              *unaff_x19 = 4;
              *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000010;
              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                thunk_FUN_02cd038c();
              }
              FUN_03098570(unaff_x19 + 2,&stack0x00000010);
              return;
            }
            goto LAB_04fcf994;
          case 0x2f:
            lVar9 = FUN_04fc7168(plVar17,0,*(undefined8 *)(unaff_x19 + 10),0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c7c();
            }
            auVar18 = FUN_04fa5130(lVar9,0,0);
            _in_stack_00000010 = auVar18;
            uVar10 = FUN_04e5bb90(&stack0x00000010,0);
            if ((uVar10 & 1) == 0) {
              *unaff_x19 = 6;
              *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000010;
              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                thunk_FUN_02cd038c();
              }
              FUN_03098570(unaff_x19 + 2,&stack0x00000010);
              return;
            }
LAB_04fcf928:
            FUN_04e5bbac(&stack0x00000010,0);
            break;
          default:
            if (uVar2 != 0) goto switchD_04fcf784_caseD_b;
            lVar9 = FUN_04fc80c8(plVar17,*(undefined8 *)(unaff_x19 + 10),0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c7c();
            }
            auVar18 = FUN_04046650(lVar9,0,*(undefined8 *)PTR_DAT_065e1be8);
            _in_stack_00000020 = auVar18;
            uVar10 = FUN_044a8b38(&stack0x00000020,*(undefined8 *)PTR_DAT_065e1be0);
            auVar4 = _in_stack_00000010;
            if ((uVar10 & 1) == 0) {
              *unaff_x19 = 1;
              *(undefined1 (*) [16])(unaff_x19 + 0xc) = _in_stack_00000020;
              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                thunk_FUN_02cd038c();
              }
              FUN_0309835c(unaff_x19 + 2,&stack0x00000020);
              return;
            }
LAB_04fcf868:
            _in_stack_00000010 = auVar4;
            uVar10 = FUN_044a8b84(&stack0x00000020,*(undefined8 *)PTR_DAT_065e1bd8);
            if ((uVar10 & 1) != 0) {
              if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02ce7c7c();
              }
              FUN_04fbd6c8(plVar17,0,0,0,0);
              uVar8 = 0;
              goto LAB_04fcfc3c;
            }
          }
        }
        else {
          if (uVar2 < 0x67) {
            if (uVar2 == 0x5d) {
              *(uint *)((long)plVar17 + 0x8c) = uVar1 + 1;
              if ((1 < *(int *)((long)plVar17 + 0x24) - 5U) && (*(int *)((long)plVar17 + 0x24) != 8)
                 ) {
                uVar11 = FUN_04fcba00(plVar17,0x5d,0);
                uVar12 = thunk_FUN_02c7737c(PTR_DAT_065fea60);
                    /* WARNING: Subroutine does not return */
                FUN_02ce7b54(uVar11,uVar12);
              }
              FUN_04fbe3f8(plVar17,0xe,0);
              break;
            }
            if (uVar2 == 0x66) {
LAB_04fcfa3c:
              *(bool *)(unaff_x19 + 0x14) = uVar2 == 0x74;
              puVar5 = PTR_DAT_065ce280;
              lVar9 = *(long *)PTR_DAT_065ce280;
              if (uVar2 == 0x74) {
                if (*(int *)(lVar9 + 0xe0) == 0) {
                  thunk_FUN_02cd038c();
                  lVar9 = *(long *)puVar5;
                }
                lVar16 = 8;
              }
              else {
                if (*(int *)(lVar9 + 0xe0) == 0) {
                  thunk_FUN_02cd038c();
                  lVar9 = *(long *)puVar5;
                }
                lVar16 = 0x10;
              }
              lVar9 = FUN_04fc7514(plVar17,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + lVar16),
                                   *(undefined8 *)(unaff_x19 + 10),0);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02ce7c7c();
              }
              auVar18 = FUN_04046650(lVar9,0,*(undefined8 *)PTR_DAT_065e1be8);
              _in_stack_00000020 = auVar18;
              uVar10 = FUN_044a8b38(&stack0x00000020,*(undefined8 *)PTR_DAT_065e1be0);
              auVar3 = _in_stack_00000010;
              if ((uVar10 & 1) == 0) {
                *unaff_x19 = 5;
                *(undefined1 (*) [16])(unaff_x19 + 0xc) = _in_stack_00000020;
                if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                  thunk_FUN_02cd038c();
                }
                FUN_0309835c(unaff_x19 + 2,&stack0x00000020);
                return;
              }
              goto LAB_04fcfbd0;
            }
          }
          else {
            if (uVar2 == 0x6e) {
              lVar9 = FUN_04fc81c0(plVar17,*(undefined8 *)(unaff_x19 + 10),0);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02ce7c7c();
              }
              auVar18 = FUN_04fa5130(lVar9,0,0);
              _in_stack_00000010 = auVar18;
              uVar10 = FUN_04e5bb90(&stack0x00000010,0);
              auVar18 = _in_stack_00000020;
              if ((uVar10 & 1) == 0) {
                *unaff_x19 = 3;
                *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000010;
                if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                  thunk_FUN_02cd038c();
                }
                FUN_03098570(unaff_x19 + 2,&stack0x00000010);
                return;
              }
              goto LAB_04fcf478;
            }
            if (uVar2 == 0x74) goto LAB_04fcfa3c;
          }
switchD_04fcf784_caseD_b:
          *(uint *)((long)plVar17 + 0x8c) = uVar1 + 1;
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          uVar10 = System_Threading_LockQueue__get_IsEmpty(uVar2,0);
          if ((uVar10 & 1) == 0) {
            uVar11 = FUN_04fcba00(plVar17,uVar2,0);
            uVar12 = thunk_FUN_02c7737c(PTR_DAT_065fea60);
                    /* WARNING: Subroutine does not return */
            FUN_02ce7b54(uVar11,uVar12);
          }
        }
        *(undefined8 *)(unaff_x19 + 0x10) = 0;
        *(undefined8 *)(unaff_x19 + 0x12) = 0;
      } while( true );
    }
  }
  uVar8 = 0;
LAB_04fcfc3c:
  *unaff_x19 = 0xfffffffe;
  puVar5 = PTR_DAT_065fea58;
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_0410f9f0(unaff_x19 + 2,uVar8,*(undefined8 *)puVar5);
  return;
}


