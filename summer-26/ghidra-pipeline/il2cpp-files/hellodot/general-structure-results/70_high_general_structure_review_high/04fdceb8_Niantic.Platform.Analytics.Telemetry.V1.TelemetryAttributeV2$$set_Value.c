/*
FUNCTION_NAME: Niantic.Platform.Analytics.Telemetry.V1.TelemetryAttributeV2$$set_Value
ENTRY_POINT: 04fdceb8
PROGRAM: hellodot-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_9
*/


void Niantic_Platform_Analytics_Telemetry_V1_TelemetryAttributeV2__set_Value
               (undefined8 param_1,undefined8 param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined4 *unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  undefined1 auVar10 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = param_1;
  do {
    _uStack0000000000000030 = auVar10;
    uVar7 = FUN_044a8b38(&stack0x00000030,*(undefined8 *)PTR_DAT_065e1be0);
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined1 (*) [16])(unaff_x19 + 0xe) = _uStack0000000000000030;
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_030ab330(unaff_x19 + 2,&stack0x00000030);
      return;
    }
    uVar7 = FUN_044a8b84(&stack0x00000030,*(undefined8 *)PTR_DAT_065e1bd8);
    if ((uVar7 & 1) != 0) {
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      FUN_04fbd6c8();
      uVar5 = 0;
LAB_04fdcf98:
      *unaff_x19 = 0xfffffffe;
      puVar3 = PTR_DAT_065fec10;
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_04266690(unaff_x19 + 2,uVar5,*(undefined8 *)puVar3);
      return;
    }
LAB_04fdcca0:
    *(undefined8 *)(unaff_x19 + 0x12) = 0;
    puVar4 = PTR_DAT_065ce280;
    puVar3 = PTR_DAT_065c9808;
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar9 = unaff_x20[0x10];
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar2 = *(uint *)((long)unaff_x20 + 0x8c);
    if (*(uint *)(lVar9 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    uVar1 = *(ushort *)(lVar9 + (long)(int)uVar2 * 2 + 0x20);
    if (0x49 < uVar1) {
      if (0x5d < uVar1) {
        if (uVar1 != 0x66) {
          if (uVar1 == 0x6e) {
            lVar9 = FUN_04fc81c0();
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c7c();
            }
            auVar10 = FUN_04fa5130(lVar9,0,0);
            _in_stack_00000020 = auVar10;
            uVar7 = FUN_04e5bb90(&stack0x00000020,0);
            if ((uVar7 & 1) == 0) {
              *unaff_x19 = 9;
              *(undefined1 (*) [16])(unaff_x19 + 0x14) = _in_stack_00000020;
              if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                thunk_FUN_02cd038c();
              }
              FUN_030c4074(unaff_x19 + 2,&stack0x00000020);
              return;
            }
            FUN_04e5bbac(&stack0x00000020,0);
            uVar5 = 0;
            goto LAB_04fdcf98;
          }
          if (uVar1 != 0x74) goto switchD_04fdcd5c_caseD_21;
        }
        if (unaff_x19[0xc] != 4) {
          *(uint *)((long)unaff_x20 + 0x8c) = uVar2 + 1;
          uVar5 = FUN_04fcba00();
          uVar6 = thunk_FUN_02c7737c(PTR_DAT_065fedc0);
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar5,uVar6);
        }
        lVar9 = *(long *)PTR_DAT_065ce280;
        if (uVar1 == 0x74) {
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
            lVar9 = *(long *)puVar4;
          }
          lVar8 = 8;
        }
        else {
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
            lVar9 = *(long *)puVar4;
          }
          lVar8 = 0x10;
        }
        *(undefined8 *)(unaff_x19 + 0x12) = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + lVar8);
        lVar9 = FUN_04fc7514();
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        auVar10 = FUN_04046650(lVar9,0,*(undefined8 *)PTR_DAT_065e1be8);
        _uStack0000000000000030 = auVar10;
        uVar7 = FUN_044a8b38(&stack0x00000030,*(undefined8 *)PTR_DAT_065e1be0);
        if ((uVar7 & 1) == 0) {
          *unaff_x19 = 6;
          *(undefined1 (*) [16])(unaff_x19 + 0xe) = _uStack0000000000000030;
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          FUN_030ab330(unaff_x19 + 2,&stack0x00000030);
          return;
        }
        uVar7 = FUN_044a8b84(&stack0x00000030,*(undefined8 *)PTR_DAT_065e1bd8);
        if ((uVar7 & 1) == 0) {
          if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          if (unaff_x20[0x10] != 0) {
            if (*(uint *)(unaff_x20[0x10] + 0x18) <= *(uint *)((long)unaff_x20 + 0x8c)) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c84();
            }
            uVar5 = FUN_04fcba00();
            uVar6 = thunk_FUN_02c7737c(PTR_DAT_065fedc0);
                    /* WARNING: Subroutine does not return */
            FUN_02ce7b54(uVar5,uVar6);
          }
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        FUN_04fc0224();
        uVar5 = *(undefined8 *)(unaff_x19 + 0x12);
        goto LAB_04fdcf98;
      }
      if (uVar1 == 0x4e) {
        lVar9 = FUN_04fc79ac();
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        _in_stack_00000010 = FUN_0404bcb8(lVar9,0,*(undefined8 *)PTR_DAT_065feac0);
        uVar7 = FUN_044a8fc8(&stack0x00000010,*(undefined8 *)PTR_DAT_065feab8);
        if ((uVar7 & 1) == 0) {
          *unaff_x19 = 8;
          *(undefined1 (*) [16])(unaff_x19 + 0x18) = _in_stack_00000010;
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          FUN_030b4f4c(unaff_x19 + 2,&stack0x00000010);
          return;
        }
        uVar5 = FUN_044a9014(&stack0x00000010,*(undefined8 *)PTR_DAT_065feab0);
        goto LAB_04fdcf98;
      }
      if (uVar1 == 0x5d) {
        *(uint *)((long)unaff_x20 + 0x8c) = uVar2 + 1;
        if ((1 < *(int *)((long)unaff_x20 + 0x24) - 5U) && (*(int *)((long)unaff_x20 + 0x24) != 8))
        {
          uVar5 = FUN_04fcba00();
          uVar6 = thunk_FUN_02c7737c(PTR_DAT_065fedc0);
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar5,uVar6);
        }
        FUN_04fbe3f8();
        uVar5 = 0;
        goto LAB_04fdcf98;
      }
switchD_04fdcd5c_caseD_21:
      *(uint *)((long)unaff_x20 + 0x8c) = uVar2 + 1;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar7 = System_Threading_LockQueue__get_IsEmpty(uVar1,0);
      if ((uVar7 & 1) == 0) {
        uVar5 = FUN_04fcba00();
        uVar6 = thunk_FUN_02c7737c(PTR_DAT_065fedc0);
                    /* WARNING: Subroutine does not return */
        FUN_02ce7b54(uVar5,uVar6);
      }
      goto LAB_04fdcca0;
    }
    if (0xd < uVar1) {
      switch(uVar1) {
      case 0x20:
switchD_04fdcd5c_caseD_20:
        *(uint *)((long)unaff_x20 + 0x8c) = uVar2 + 1;
        break;
      default:
        goto switchD_04fdcd5c_caseD_21;
      case 0x22:
      case 0x27:
        lVar9 = FUN_04fc7320();
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        auVar10 = FUN_04fa5130(lVar9,0,0);
        _in_stack_00000020 = auVar10;
        uVar7 = FUN_04e5bb90(&stack0x00000020,0);
        if ((uVar7 & 1) == 0) {
          *unaff_x19 = 2;
          *(undefined1 (*) [16])(unaff_x19 + 0x14) = _in_stack_00000020;
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          FUN_030c4074(unaff_x19 + 2,&stack0x00000020);
          return;
        }
        FUN_04e5bbac(&stack0x00000020,0);
        if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        uVar5 = FUN_04fcbc80();
        goto LAB_04fdcf98;
      case 0x2c:
        FUN_04fcb994();
        break;
      case 0x2d:
        lVar9 = FUN_04fc6d60();
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        auVar10 = FUN_04046650(lVar9,0,*(undefined8 *)PTR_DAT_065e1be8);
        _uStack0000000000000030 = auVar10;
        uVar7 = FUN_044a8b38(&stack0x00000030,*(undefined8 *)PTR_DAT_065e1be0);
        if ((uVar7 & 1) == 0) {
          *unaff_x19 = 3;
          *(undefined1 (*) [16])(unaff_x19 + 0xe) = _uStack0000000000000030;
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          FUN_030ab330(unaff_x19 + 2,&stack0x00000030);
          return;
        }
        uVar7 = FUN_044a8b84(&stack0x00000030,*(undefined8 *)PTR_DAT_065e1bd8);
        if ((uVar7 & 1) == 0) {
          if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
        }
        else {
          if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar9 = unaff_x20[0x10];
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          uVar2 = *(int *)((long)unaff_x20 + 0x8c) + 1;
          if (*(uint *)(lVar9 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c84();
          }
          if (*(short *)(lVar9 + (long)(int)uVar2 * 2 + 0x20) == 0x49) {
            uVar5 = Niantic_Platform_Analytics_Telemetry_PreLoginRpcManager_<ExecRequestAsync>d__12__MoveNext
                              ();
            goto LAB_04fdcf98;
          }
        }
        lVar9 = FUN_04fc7cd0();
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        auVar10 = FUN_04fa5130(lVar9,0,0);
        _in_stack_00000020 = auVar10;
        uVar7 = FUN_04e5bb90(&stack0x00000020,0);
        if ((uVar7 & 1) == 0) {
          *unaff_x19 = 4;
          *(undefined1 (*) [16])(unaff_x19 + 0x14) = _in_stack_00000020;
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          FUN_030c4074(unaff_x19 + 2,&stack0x00000020);
          return;
        }
        FUN_04e5bbac(&stack0x00000020,0);
        if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        uVar5 = (**(code **)(*unaff_x20 + 0x248))();
        goto LAB_04fdcf98;
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
        if (unaff_x19[0xc] != 4) {
          *(uint *)((long)unaff_x20 + 0x8c) = uVar2 + 1;
          uVar5 = FUN_04fcba00();
          uVar6 = thunk_FUN_02c7737c(PTR_DAT_065fedc0);
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar5,uVar6);
        }
        lVar9 = FUN_04fc7cd0();
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        auVar10 = FUN_04fa5130(lVar9,0,0);
        _in_stack_00000020 = auVar10;
        uVar7 = FUN_04e5bb90(&stack0x00000020,0);
        if ((uVar7 & 1) == 0) {
          *unaff_x19 = 5;
          *(undefined1 (*) [16])(unaff_x19 + 0x14) = _in_stack_00000020;
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          FUN_030c4074(unaff_x19 + 2,&stack0x00000020);
          return;
        }
        FUN_04e5bbac(&stack0x00000020,0);
        if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        uVar5 = (**(code **)(*unaff_x20 + 0x248))();
        goto LAB_04fdcf98;
      case 0x2f:
        lVar9 = FUN_04fc7168();
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        auVar10 = FUN_04fa5130(lVar9,0,0);
        _in_stack_00000020 = auVar10;
        uVar7 = FUN_04e5bb90(&stack0x00000020,0);
        if ((uVar7 & 1) == 0) {
          *unaff_x19 = 10;
          *(undefined1 (*) [16])(unaff_x19 + 0x14) = _in_stack_00000020;
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          FUN_030c4074(unaff_x19 + 2,&stack0x00000020);
          return;
        }
        FUN_04e5bbac(&stack0x00000020,0);
        break;
      case 0x49:
        lVar9 = FUN_04fc7ab8();
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        _in_stack_00000010 = FUN_0404bcb8(lVar9,0,*(undefined8 *)PTR_DAT_065feac0);
        uVar7 = FUN_044a8fc8(&stack0x00000010,*(undefined8 *)PTR_DAT_065feab8);
        if ((uVar7 & 1) == 0) {
          *unaff_x19 = 7;
          *(undefined1 (*) [16])(unaff_x19 + 0x18) = _in_stack_00000010;
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          FUN_030b4f4c(unaff_x19 + 2,&stack0x00000010);
          return;
        }
        uVar5 = FUN_044a9014(&stack0x00000010,*(undefined8 *)PTR_DAT_065feab0);
        goto LAB_04fdcf98;
      }
      goto LAB_04fdcca0;
    }
    if (9 < uVar1) {
      if (uVar1 == 10) {
        FUN_04fcbb18();
        goto LAB_04fdcca0;
      }
      if (uVar1 == 0xd) {
        lVar9 = FUN_04fc6c60();
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        auVar10 = FUN_04fa5130(lVar9,0,0);
        _in_stack_00000020 = auVar10;
        uVar7 = FUN_04e5bb90(&stack0x00000020,0);
        if ((uVar7 & 1) == 0) {
          *unaff_x19 = 0xb;
          *(undefined1 (*) [16])(unaff_x19 + 0x14) = _in_stack_00000020;
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          FUN_030c4074(unaff_x19 + 2,&stack0x00000020);
          return;
        }
        FUN_04e5bbac(&stack0x00000020,0);
        goto LAB_04fdcca0;
      }
      goto switchD_04fdcd5c_caseD_21;
    }
    if (uVar1 != 0) {
      if (uVar1 == 9) goto switchD_04fdcd5c_caseD_20;
      goto switchD_04fdcd5c_caseD_21;
    }
    lVar9 = FUN_04fc80c8();
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    auVar10 = FUN_04046650(lVar9,0,*(undefined8 *)PTR_DAT_065e1be8);
  } while( true );
}


