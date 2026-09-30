/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$get_ToggleColliders
ENTRY_POINT: 04c37a8c
PROGRAM: hellodot-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04c37f10) */
/* WARNING: Removing unreachable block (ram,0x04c37f20) */

void Meta_XR_MRUtilityKit_EffectMesh__get_ToggleColliders(undefined8 param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  int unaff_w28;
  undefined8 *unaff_x29;
  undefined1 auVar14 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  *(undefined8 *)(unaff_x19 + 0xc) = param_1;
  puVar2 = PTR_DAT_065e6540;
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar6 = *(long *)PTR_DAT_065e6540;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_02cd038c(lVar6);
    lVar6 = *(long *)puVar2;
  }
  lVar10 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
  if (lVar10 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02cd038c(lVar6);
      lVar6 = *(long *)puVar2;
    }
    uVar11 = **(undefined8 **)(lVar6 + 0xb8);
    lVar10 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e6618);
    FUN_04a5701c(lVar10,uVar11,*(undefined8 *)PTR_DAT_065e6628,0);
    *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar10;
  }
  FUN_033eb504(uVar8,lVar10,*(undefined8 *)PTR_DAT_065e6610);
  lVar6 = FUN_04c357b8();
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  _in_stack_00000040 = FUN_0404bcb8(lVar6,0,*(undefined8 *)PTR_DAT_065e65b0);
  uVar4 = FUN_044a8fc8(&stack0x00000040,*(undefined8 *)PTR_DAT_065e6590);
  if ((uVar4 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined1 (*) [16])(unaff_x19 + 0x14) = _in_stack_00000040;
    if (*(int *)(*(long *)PTR_DAT_065c84d8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_0335fb84(unaff_x19 + 2,&stack0x00000040);
  }
  else {
    uVar8 = FUN_044a9014(&stack0x00000040,*(undefined8 *)PTR_DAT_065e6588);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar6 = *(long *)(unaff_x19 + 0xc);
    uVar13 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar11 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065c8a78);
    FUN_05683c18(uVar11,uVar13,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar6 = FUN_054db930(lVar6,uVar11,uVar8,*(undefined8 *)(unaff_x19 + 10),0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    _in_stack_00000030 = FUN_0404bcb8(lVar6,0,*(undefined8 *)PTR_DAT_065e1788);
    uVar4 = FUN_044a8fc8(&stack0x00000030,*(undefined8 *)PTR_DAT_065e1780);
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined1 (*) [16])(unaff_x19 + 0x1a) = _in_stack_00000030;
      if (*(int *)(*(long *)PTR_DAT_065c84d8 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_0335fb84(unaff_x19 + 2,&stack0x00000030);
      return;
    }
    uVar8 = FUN_044a9014(&stack0x00000030,*(undefined8 *)PTR_DAT_065e1778);
    *(undefined8 *)(unaff_x19 + 0x18) = uVar8;
    if (unaff_w28 == 2) {
      _in_stack_00000020 = *(undefined1 (*) [16])(unaff_x19 + 0x1e);
      unaff_w28 = -1;
      *(undefined8 *)(unaff_x19 + 0x1e) = 0;
      *(undefined8 *)(unaff_x19 + 0x20) = 0;
      *unaff_x19 = 0xffffffff;
    }
    else {
      if (unaff_w28 == 3) {
        _in_stack_00000010 = *(undefined1 (*) [16])(unaff_x19 + 0x22);
        unaff_w28 = -1;
        *(undefined8 *)(unaff_x19 + 0x22) = 0;
        *(undefined8 *)(unaff_x19 + 0x24) = 0;
        *unaff_x19 = 0xffffffff;
        goto LAB_04c37d64;
      }
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar6 = FUN_04c349d0();
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      _in_stack_00000020 = FUN_04fa5130(lVar6,0,0);
      uVar4 = FUN_04e5bb90(&stack0x00000020,0);
      if ((uVar4 & 1) == 0) {
        *unaff_x19 = 2;
        *(undefined1 (*) [16])(unaff_x19 + 0x1e) = _in_stack_00000020;
        if (*(int *)(*(long *)PTR_DAT_065c84d8 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_03361344(unaff_x19 + 2,&stack0x00000020);
        return;
      }
    }
    FUN_04e5bbac(&stack0x00000020,0);
    if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar6 = *(long *)(*(long *)(unaff_x19 + 0x18) + 0x38);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar6 = FUN_054d80d0(lVar6,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar8 = FUN_054e9b24(lVar6,*(undefined8 *)PTR_DAT_065e64e8,0);
    lVar6 = FUN_033dbf6c(uVar8,*(undefined8 *)PTR_DAT_065e6298);
    puVar2 = PTR_DAT_065e6630;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    iVar3 = FUN_04dbd9f0(lVar6,*(undefined8 *)PTR_DAT_065e6630,4,0);
    if (*(long *)puVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar8 = FUN_04dbd134(lVar6,*(int *)(*(long *)puVar2 + 0x10) + iVar3,0);
    *(undefined8 *)(unaff_x19 + 0x10) = uVar8;
    if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar6 = *(long *)(*(long *)(unaff_x19 + 0x18) + 0x38);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar6 = FUN_054dcf98(lVar6,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    _in_stack_00000010 = FUN_0404bcb8(lVar6,0,*(undefined8 *)PTR_DAT_065e1700);
    uVar4 = FUN_044a8fc8(&stack0x00000010,*unaff_x29);
    if ((uVar4 & 1) != 0) {
LAB_04c37d64:
      uVar8 = FUN_044a9014(&stack0x00000010,*unaff_x26);
      *(undefined8 *)(unaff_x19 + 0xe) = uVar8;
      if ((unaff_w28 < 0) && (plVar9 = *(long **)(unaff_x19 + 0x18), plVar9 != (long *)0x0)) {
        lVar6 = *plVar9;
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar4 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_065c8a48) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_04c37ef8;
            }
            uVar4 = uVar4 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)PTR_DAT_065c8a48,0);
LAB_04c37ef8:
        (*(code *)*puVar5)(plVar9,puVar5[1]);
      }
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      unaff_x19[0x12] = 0;
      while( true ) {
        if (*(int *)(*(long *)PTR_DAT_065c89b8 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_04f94794(unaff_x19 + 10,0);
        puVar2 = PTR_DAT_065e1960;
        lVar6 = *(long *)(unaff_x19 + 0xe);
        uVar8 = FUN_04db00f0(*(undefined8 *)PTR_DAT_065e1960,*(undefined8 *)(unaff_x19 + 0x10),0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c(uVar8,uVar8);
        }
        iVar3 = FUN_04dbd9f0(lVar6,uVar8,4,0);
        if (iVar3 == -1) break;
        if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar6 = FUN_04dbd134(*(long *)(unaff_x19 + 0xe),
                             iVar3 + *(int *)(*(long *)(unaff_x19 + 0x10) + 0x10) + 2,0);
        *(long *)(unaff_x19 + 0xe) = lVar6;
        uVar8 = FUN_04db00f0(*(undefined8 *)puVar2,*(undefined8 *)(unaff_x19 + 0x10),0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c(uVar8,uVar8);
        }
        auVar14 = FUN_04dbd9f0(lVar6,uVar8,4,0);
        uVar4 = auVar14._0_8_ & 0xffffffff;
        unaff_x19[0x26] = auVar14._0_4_;
        if (auVar14._0_4_ == -1) break;
        if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c(0,auVar14._8_8_,uVar4);
        }
        FUN_04dbaed4(*(long *)(unaff_x19 + 0xe),0,uVar4,0);
        lVar6 = FUN_04c34aa0();
        *(long *)(unaff_x19 + 0x18) = lVar6;
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        uVar4 = FUN_054df770(lVar6,0);
        if ((uVar4 & 1) == 0) {
          if (unaff_w28 == 5) {
            unaff_w28 = -1;
            *(undefined8 *)(unaff_x19 + 0x28) = 0;
            *(undefined8 *)(unaff_x19 + 0x2a) = 0;
            *unaff_x19 = 0xffffffff;
          }
          else {
            if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c7c();
            }
            plVar9 = *(long **)(unaff_x20 + 0x20);
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c7c();
            }
            lVar6 = *plVar9;
            uVar8 = *(undefined8 *)(unaff_x19 + 0x18);
            uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar4 != 0) {
              piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *unaff_x27) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 0xd) * 0x10 + 0x138);
                  goto LAB_04c384bc;
                }
                uVar4 = uVar4 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar4 != 0);
            }
            puVar5 = (undefined8 *)FUN_02ce0a7c(plVar9,*unaff_x27,0xd);
LAB_04c384bc:
            lVar6 = (*(code *)*puVar5)(plVar9,uVar8,puVar5[1]);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c7c();
            }
            auVar14 = FUN_0404bcb8(lVar6,0,*(undefined8 *)PTR_DAT_065e1b60);
            uVar4 = FUN_044a8fc8();
            if ((uVar4 & 1) == 0) {
              *unaff_x19 = 5;
              *(undefined1 (*) [16])(unaff_x19 + 0x28) = auVar14;
              if (*(int *)(*(long *)PTR_DAT_065c84d8 + 0xe0) == 0) {
                thunk_FUN_02cd038c();
              }
              FUN_0335fb84(unaff_x19 + 2);
              return;
            }
          }
          uVar8 = FUN_044a9014();
          if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          plVar9 = *(long **)(unaff_x20 + 0x10);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar6 = *plVar9;
          uVar1 = unaff_x19[0x12];
          uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar4 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *unaff_x25) {
                puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_04c38578;
              }
              uVar4 = uVar4 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)FUN_02ce0a7c(plVar9,*unaff_x25,0);
LAB_04c38578:
          plVar9 = (long *)(*(code *)*puVar5)(plVar9,uVar1,puVar5[1]);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          (**(code **)(*plVar9 + 0x178))
                    (plVar9,0,uVar8,unaff_x19[0x12],*(undefined8 *)(unaff_x19 + 0x18),
                     *(undefined8 *)(*plVar9 + 0x180));
        }
        else {
          if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar6 = *(long *)(*(long *)(unaff_x19 + 0x18) + 0x38);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar6 = FUN_054dcf98(lVar6,0);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          auVar14 = FUN_0404bcb8(lVar6,0,*(undefined8 *)PTR_DAT_065e1700);
          _in_stack_00000010 = auVar14;
          uVar4 = FUN_044a8fc8(&stack0x00000010,*unaff_x29);
          if ((uVar4 & 1) == 0) {
            *unaff_x19 = 4;
            *(undefined1 (*) [16])(unaff_x19 + 0x22) = _in_stack_00000010;
            if (*(int *)(*(long *)PTR_DAT_065c84d8 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
            }
            FUN_0335fb84(unaff_x19 + 2,&stack0x00000010);
            return;
          }
          uVar8 = FUN_044a9014(&stack0x00000010,*unaff_x26);
          if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          plVar9 = *(long **)(unaff_x20 + 0x20);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar6 = *plVar9;
          uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar4 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *unaff_x27) {
                puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 10) * 0x10 + 0x138);
                goto LAB_04c3829c;
              }
              uVar4 = uVar4 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)FUN_02ce0a7c(plVar9,*unaff_x27,10);
LAB_04c3829c:
          plVar9 = (long *)(*(code *)*puVar5)(plVar9,puVar5[1]);
          plVar12 = *(long **)(unaff_x20 + 0x10);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar6 = *plVar12;
          uVar1 = unaff_x19[0x12];
          uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar4 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *unaff_x25) {
                puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_04c38304;
              }
              uVar4 = uVar4 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)FUN_02ce0a7c(plVar12,*unaff_x25,0);
LAB_04c38304:
          lVar6 = (*(code *)*puVar5)(plVar12,uVar1,puVar5[1]);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar10 = *plVar9;
          uVar11 = *(undefined8 *)(lVar6 + 0x18);
          uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar4 != 0) {
            piVar7 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_065e1720) {
                puVar5 = (undefined8 *)(lVar10 + (long)(*piVar7 + 4) * 0x10 + 0x138);
                goto LAB_04c38378;
              }
              uVar4 = uVar4 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)PTR_DAT_065e1720,4);
LAB_04c38378:
          uVar8 = (*(code *)*puVar5)(plVar9,uVar8,uVar11,puVar5[1]);
          if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          plVar9 = *(long **)(unaff_x20 + 0x10);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar6 = *plVar9;
          uVar1 = unaff_x19[0x12];
          uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar4 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *unaff_x25) {
                puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_04c383f0;
              }
              uVar4 = uVar4 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)FUN_02ce0a7c(plVar9,*unaff_x25,0);
LAB_04c383f0:
          plVar9 = (long *)(*(code *)*puVar5)(plVar9,uVar1,puVar5[1]);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          (**(code **)(*plVar9 + 0x178))
                    (plVar9,uVar8,0,unaff_x19[0x12],*(undefined8 *)(unaff_x19 + 0x18),
                     *(undefined8 *)(*plVar9 + 0x180));
        }
        unaff_x19[0x12] = unaff_x19[0x12] + 1;
        if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        uVar8 = FUN_04dbd134(*(long *)(unaff_x19 + 0xe),unaff_x19[0x26],0);
        *(undefined8 *)(unaff_x19 + 0xe) = uVar8;
        *(undefined8 *)(unaff_x19 + 0x18) = 0;
      }
      *(undefined8 *)(unaff_x19 + 0xe) = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      *(undefined8 *)(unaff_x19 + 0xc) = 0;
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(*(long *)PTR_DAT_065c84d8 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_04e5a1e4(unaff_x19 + 2,0);
      return;
    }
    *unaff_x19 = 3;
    *(undefined1 (*) [16])(unaff_x19 + 0x22) = _in_stack_00000010;
    if (*(int *)(*(long *)PTR_DAT_065c84d8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_0335fb84(unaff_x19 + 2,&stack0x00000010);
  }
  return;
}


