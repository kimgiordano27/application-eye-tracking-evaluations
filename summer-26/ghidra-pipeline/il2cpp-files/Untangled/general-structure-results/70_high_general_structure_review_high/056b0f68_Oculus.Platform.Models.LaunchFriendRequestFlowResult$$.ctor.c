/*
FUNCTION_NAME: Oculus.Platform.Models.LaunchFriendRequestFlowResult$$.ctor
ENTRY_POINT: 056b0f68
PROGRAM: Untangled-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void Oculus_Platform_Models_LaunchFriendRequestFlowResult___ctor(void)

{
  ushort uVar1;
  short sVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 *unaff_x19;
  long unaff_x20;
  uint uVar9;
  undefined8 uVar11;
  long *unaff_x22;
  long *unaff_x23;
  ushort *unaff_x24;
  undefined1 auVar12 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  uint uVar10;
  
code_r0x056b0f68:
  FUN_056a4c94();
  do {
    lVar8 = *(long *)(unaff_x20 + 0x80);
    if (lVar8 == 0) {
LAB_056b1bfc:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    while( true ) {
      uVar5 = *(uint *)(unaff_x20 + 0x8c);
      if (*(uint *)(lVar8 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      uVar1 = *(ushort *)(lVar8 + (long)(int)uVar5 * 2 + 0x20);
      uVar9 = (uint)uVar1;
      uVar10 = (uint)uVar1;
      if (0x4e < uVar1) {
        if (uVar1 < 0x67) {
          if (uVar9 == 0x5b) {
            *(uint *)(unaff_x20 + 0x8c) = uVar5 + 1;
            FUN_05697004();
            goto LAB_056b142c;
          }
          if (uVar9 == 0x5d) {
            *(uint *)(unaff_x20 + 0x8c) = uVar5 + 1;
            FUN_05697004();
            goto LAB_056b142c;
          }
          if (uVar9 == 0x66) {
            lVar8 = FUN_056a0608();
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            auVar12 = Oculus_Platform_CAPI__ovr_Achievements_GetDefinitionsByName(lVar8,0,0);
            _in_stack_00000020 = auVar12;
            uVar6 = FUN_0551f17c(&stack0x00000020,0);
            if ((uVar6 & 1) == 0) {
              *unaff_x19 = 3;
              *(undefined1 (*) [16])(unaff_x19 + 0x10) = _in_stack_00000020;
              thunk_FUN_02f411dc(unaff_x19 + 0x10,0);
              if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              FUN_034f2ba8(unaff_x19 + 2,&stack0x00000020);
              return;
            }
            FUN_0551f198(&stack0x00000020,0);
            goto LAB_056b142c;
          }
        }
        else if (uVar9 < 0x75) {
          if (uVar9 == 0x6e) {
            lVar8 = FUN_0569f9ec();
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            _in_stack_00000010 = FUN_04697d3c(lVar8,0,*(undefined8 *)PTR_DAT_06d3b5f8);
            uVar6 = FUN_04a8bd80(&stack0x00000010,*(undefined8 *)PTR_DAT_06d3b5f0);
            if ((uVar6 & 1) == 0) {
              *unaff_x19 = 4;
              *(undefined1 (*) [16])(unaff_x19 + 0x14) = _in_stack_00000010;
              thunk_FUN_02f411dc(unaff_x19 + 0x14,0);
              if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              FUN_034f048c(unaff_x19 + 2,&stack0x00000010);
              return;
            }
            uVar6 = FUN_04a8bdcc(&stack0x00000010,*(undefined8 *)PTR_DAT_06d3b5e8);
            if ((uVar6 & 1) == 0) {
              if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              *(int *)(unaff_x20 + 0x8c) = *(int *)(unaff_x20 + 0x8c) + 1;
              uVar11 = FUN_056989c8();
              uVar7 = thunk_FUN_02f239f0(PTR_DAT_06d55ef8);
                    /* WARNING: Subroutine does not return */
              FUN_02f07f94(uVar11,uVar7);
            }
            if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            lVar8 = *(long *)(unaff_x20 + 0x80);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            uVar5 = *(uint *)(unaff_x20 + 0x8c) + 1;
            if (*(uint *)(lVar8 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c8();
            }
            sVar2 = *(short *)(lVar8 + (long)(int)uVar5 * 2 + 0x20);
            if (sVar2 == 0x65) {
              lVar8 = FUN_056a0724();
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              auVar12 = Oculus_Platform_CAPI__ovr_Achievements_GetDefinitionsByName(lVar8,0,0);
              _in_stack_00000020 = auVar12;
              uVar6 = FUN_0551f17c(&stack0x00000020,0);
              if ((uVar6 & 1) == 0) {
                *unaff_x19 = 6;
                *(undefined1 (*) [16])(unaff_x19 + 0x10) = _in_stack_00000020;
                thunk_FUN_02f411dc(unaff_x19 + 0x10,0);
                if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                  thunk_FUN_02f12b58();
                }
                FUN_034f2ba8(unaff_x19 + 2,&stack0x00000020);
                return;
              }
              FUN_0551f198(&stack0x00000020,0);
            }
            else {
              if (sVar2 != 0x75) {
                if (*(uint *)(unaff_x20 + 0x8c) < *(uint *)(lVar8 + 0x18)) {
                  uVar11 = FUN_056a4b7c();
                  uVar7 = thunk_FUN_02f239f0(PTR_DAT_06d55ef8);
                    /* WARNING: Subroutine does not return */
                  FUN_02f07f94(uVar11,uVar7);
                }
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              lVar8 = FUN_056a06ac();
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              auVar12 = Oculus_Platform_CAPI__ovr_Achievements_GetDefinitionsByName(lVar8,0,0);
              _in_stack_00000020 = auVar12;
              uVar6 = FUN_0551f17c(&stack0x00000020,0);
              if ((uVar6 & 1) == 0) {
                *unaff_x19 = 5;
                *(undefined1 (*) [16])(unaff_x19 + 0x10) = _in_stack_00000020;
                thunk_FUN_02f411dc(unaff_x19 + 0x10,0);
                if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                  thunk_FUN_02f12b58();
                }
                FUN_034f2ba8(unaff_x19 + 2,&stack0x00000020);
                return;
              }
              FUN_0551f198(&stack0x00000020,0);
            }
            goto LAB_056b142c;
          }
          if (uVar9 == 0x74) {
            lVar8 = FUN_056a0560();
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            auVar12 = Oculus_Platform_CAPI__ovr_Achievements_GetDefinitionsByName(lVar8,0,0);
            _in_stack_00000020 = auVar12;
            uVar6 = FUN_0551f17c(&stack0x00000020,0);
            if ((uVar6 & 1) == 0) {
              *unaff_x19 = 2;
              *(undefined1 (*) [16])(unaff_x19 + 0x10) = _in_stack_00000020;
              thunk_FUN_02f411dc(unaff_x19 + 0x10,0);
              if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              FUN_034f2ba8(unaff_x19 + 2,&stack0x00000020);
              return;
            }
            FUN_0551f198(&stack0x00000020,0);
            goto LAB_056b142c;
          }
        }
        else {
          if (uVar9 == 0x75) {
            lVar8 = FUN_056a0ccc();
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            auVar12 = Oculus_Platform_CAPI__ovr_Achievements_GetDefinitionsByName(lVar8,0,0);
            _in_stack_00000020 = auVar12;
            uVar6 = FUN_0551f17c(&stack0x00000020,0);
            if ((uVar6 & 1) == 0) {
              *unaff_x19 = 0xd;
              *(undefined1 (*) [16])(unaff_x19 + 0x10) = _in_stack_00000020;
              thunk_FUN_02f411dc(unaff_x19 + 0x10,0);
              if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              FUN_034f2ba8(unaff_x19 + 2,&stack0x00000020);
              return;
            }
            FUN_0551f198(&stack0x00000020,0);
            goto LAB_056b142c;
          }
          if (uVar9 == 0x7b) {
            uVar11 = 1;
            *(uint *)(unaff_x20 + 0x8c) = uVar5 + 1;
            FUN_05697004();
            goto LAB_056b1430;
          }
        }
        goto switchD_056b0ed8_caseD_23;
      }
      if (0x20 < uVar9) break;
      if (uVar1 < 10) {
        if (uVar10 != 0) {
          if (uVar9 == 9) goto LAB_056b0f44;
          goto switchD_056b0ed8_caseD_23;
        }
        if (*(uint *)(unaff_x20 + 0x88) != uVar5) goto LAB_056b0f44;
        lVar8 = FUN_0569f688();
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        auVar12 = Unity_Collections_LowLevel_Unsafe_UnsafeList<SelfCollisionConstraint_GridInfo>__CheckNull
                            (lVar8,0,*(undefined8 *)PTR_DAT_06d4daa8);
        _in_stack_00000030 = auVar12;
        uVar6 = FUN_04a8bfb4(&stack0x00000030,*(undefined8 *)PTR_DAT_06d4da88);
        if ((uVar6 & 1) == 0) {
          *unaff_x19 = 0;
          *(undefined1 (*) [16])(unaff_x19 + 0xc) = _in_stack_00000030;
          thunk_FUN_02f411dc(unaff_x19 + 0xc,0);
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          FUN_034f0ef0(unaff_x19 + 2,&stack0x00000030);
          return;
        }
        iVar4 = FUN_04a8c000(&stack0x00000030,*(undefined8 *)PTR_DAT_06d4da80);
        if (iVar4 == 0) {
          uVar11 = 0;
          goto LAB_056b1430;
        }
      }
      else {
        if (uVar9 == 10) goto code_r0x056b0f68;
        if (uVar10 == 0x20) goto LAB_056b0f44;
        if (uVar10 != 0xd) goto switchD_056b0ed8_caseD_23;
        lVar8 = FUN_0569f8ec();
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        auVar12 = Oculus_Platform_CAPI__ovr_Achievements_GetDefinitionsByName(lVar8,0,0);
        _in_stack_00000020 = auVar12;
        uVar6 = FUN_0551f17c(&stack0x00000020,0);
        if ((uVar6 & 1) == 0) {
          *unaff_x19 = 0xe;
          *(undefined1 (*) [16])(unaff_x19 + 0x10) = _in_stack_00000020;
          thunk_FUN_02f411dc(unaff_x19 + 0x10,0);
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          FUN_034f2ba8(unaff_x19 + 2,&stack0x00000020);
          return;
        }
        FUN_0551f198(&stack0x00000020,0);
      }
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar8 = *(long *)(unaff_x20 + 0x80);
      if (lVar8 == 0) goto LAB_056b1bfc;
      unaff_x24 = &switchD_056b0ed8::switchdataD_0150c0ac;
      unaff_x23 = (long *)PTR_DAT_06d02598;
    }
    if (uVar9 < 0x30) {
      if (uVar9 - 0x22 < 0xe) {
                    /* WARNING: Could not recover jumptable at 0x056b0ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)unaff_x24[uVar9 - 0x22] * 4 + 0x56b0f1c))();
        return;
      }
    }
    else {
      if (uVar9 == 0x49) {
        lVar8 = FUN_056a0958();
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        auVar12 = FUN_0469dad0(lVar8,0,*(undefined8 *)PTR_DAT_06d55cd0);
        uVar6 = FUN_04a8c370();
        if ((uVar6 & 1) == 0) {
          *unaff_x19 = 8;
          *(undefined1 (*) [16])(unaff_x19 + 0x18) = auVar12;
          thunk_FUN_02f411dc(unaff_x19 + 0x18,0);
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          FUN_034f152c(unaff_x19 + 2);
          return;
        }
        FUN_04a8c3bc();
        goto LAB_056b142c;
      }
      if (uVar9 == 0x4e) {
        lVar8 = FUN_056a0824();
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        auVar12 = FUN_0469dad0(lVar8,0,*(undefined8 *)PTR_DAT_06d55cd0);
        uVar6 = FUN_04a8c370();
        if ((uVar6 & 1) == 0) {
          *unaff_x19 = 7;
          *(undefined1 (*) [16])(unaff_x19 + 0x18) = auVar12;
          thunk_FUN_02f411dc(unaff_x19 + 0x18,0);
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          FUN_034f152c(unaff_x19 + 2);
          return;
        }
        FUN_04a8c3bc();
        goto LAB_056b142c;
      }
    }
switchD_056b0ed8_caseD_23:
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar6 = FUN_05561fe8(uVar1,0);
    if ((uVar6 & 1) == 0) {
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar5 = FUN_05565b78(uVar1,0);
      if (1 < uVar10 - 0x2d && (uVar5 & 1) == 0) {
        uVar11 = FUN_056a4b7c();
        uVar7 = thunk_FUN_02f239f0(PTR_DAT_06d55ef8);
                    /* WARNING: Subroutine does not return */
        FUN_02f07f94(uVar11,uVar7);
      }
      lVar8 = FUN_056a0bc0();
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      auVar12 = Oculus_Platform_CAPI__ovr_Achievements_GetDefinitionsByName(lVar8,0,0);
      _in_stack_00000020 = auVar12;
      uVar6 = FUN_0551f17c(&stack0x00000020,0);
      if ((uVar6 & 1) == 0) {
        *unaff_x19 = 0xf;
        *(undefined1 (*) [16])(unaff_x19 + 0x10) = _in_stack_00000020;
        thunk_FUN_02f411dc(unaff_x19 + 0x10,0);
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        FUN_034f2ba8(unaff_x19 + 2,&stack0x00000020);
      }
      else {
        FUN_0551f198(&stack0x00000020,0);
LAB_056b142c:
        uVar11 = 1;
LAB_056b1430:
        *unaff_x19 = 0xfffffffe;
        puVar3 = PTR_DAT_06d17518;
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        FUN_043aabc8(unaff_x19 + 2,uVar11,*(undefined8 *)puVar3);
      }
      return;
    }
    uVar5 = *(uint *)(unaff_x20 + 0x8c);
LAB_056b0f44:
    *(uint *)(unaff_x20 + 0x8c) = uVar5 + 1;
  } while( true );
}


