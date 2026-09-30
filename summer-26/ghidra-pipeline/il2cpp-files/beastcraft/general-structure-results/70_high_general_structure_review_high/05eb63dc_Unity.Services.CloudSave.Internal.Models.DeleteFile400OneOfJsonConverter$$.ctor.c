/*
FUNCTION_NAME: Unity.Services.CloudSave.Internal.Models.DeleteFile400OneOfJsonConverter$$.ctor
ENTRY_POINT: 05eb63dc
PROGRAM: beastcraft-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Unity_Services_CloudSave_Internal_Models_DeleteFile400OneOfJsonConverter___ctor(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 *puVar16;
  long unaff_x19;
  int iVar17;
  long unaff_x20;
  int iVar18;
  undefined8 uVar19;
  long lVar20;
  long in_stack_00000010;
  long in_stack_00000018;
  long *in_stack_00000020;
  long *in_stack_00000028;
  long *in_stack_00000030;
  long *in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined1 uStack000000000000004c;
  long *in_stack_00000050;
  long *in_stack_00000058;
  long *in_stack_00000060;
  long *in_stack_00000068;
  int iStack0000000000000070;
  
  FUN_02e3ca1c();
  FUN_02e3ca1c(PTR_DAT_06ab62d0);
  FUN_02e3ca1c(PTR_DAT_06ab62d8);
  FUN_02e3ca1c(PTR_DAT_06ab60f0);
  FUN_02e3ca1c(PTR_DAT_06ab5fd0);
  FUN_02e3ca1c(PTR_DAT_06ab62e0);
  FUN_02e3ca1c(PTR_DAT_06ab5fd8);
  FUN_02e3ca1c(PTR_DAT_06ab5fe0);
  FUN_02e3ca1c(PTR_DAT_06ab62e8);
  FUN_02e3ca1c(PTR_DAT_06ab62f0);
  FUN_02e3ca1c(PTR_DAT_06ab62f8);
  FUN_02e3ca1c(PTR_DAT_06ab6300);
  FUN_02e3ca1c(PTR_DAT_06ab1908);
  FUN_02e3ca1c(MessagePipe_AttributeFilterProvider<AsyncMessageHandlerFilterAttribute>_var);
  FUN_02e3ca1c(PTR_DAT_06a2ed80);
  FUN_02e3ca1c(MessagePipe_AttributeFilterProvider<AsyncRequestHandlerFilterAttribute>_var);
  FUN_02e3ca1c(MessagePipe_AttributeFilterProvider<MessageHandlerFilterAttribute>_var);
  *(undefined1 *)(unaff_x20 + 0x222) = 1;
  puVar5 = PTR_DAT_06ab5fe0;
  uStack000000000000004c = 0;
  _uStack0000000000000040 = 0;
  in_stack_00000038 = (long *)0x0;
  in_stack_00000030 = (long *)0x0;
  in_stack_00000028 = (long *)0x0;
  in_stack_00000020 = (long *)0x0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  FUN_05dc67fc(&stack0x0000004c,*(undefined8 *)(unaff_x19 + 0x48),0);
  puVar2 = PTR_DAT_06a2ed80;
  if (0 < *(int *)(unaff_x19 + 0x30)) {
    iVar17 = 0;
    do {
      if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      lVar11 = FUN_03f2b33c(*(long *)(unaff_x19 + 0x10),iVar17,*(undefined8 *)puVar5);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      uVar19 = *(undefined8 *)(lVar11 + 0x28);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02e9a04c(*(long *)puVar2);
      }
      uVar12 = FUN_062696b0(uVar19,0,0);
      if ((uVar12 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        lVar11 = FUN_03f2b33c(*(long *)(unaff_x19 + 0x10),iVar17,*(undefined8 *)puVar5);
        uVar19 = FUN_05eb0914();
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        *(undefined8 *)(lVar11 + 0x28) = uVar19;
        thunk_FUN_02ee2be8((undefined8 *)(lVar11 + 0x28));
      }
      puVar7 = MessagePipe_AttributeFilterProvider<AsyncMessageHandlerFilterAttribute>_var;
      puVar6 = PTR_DAT_06ab60f0;
      puVar4 = PTR_DAT_06ab5fd8;
      puVar3 = PTR_DAT_06ab5fd0;
      iVar17 = iVar17 + 1;
    } while (iVar17 < *(int *)(unaff_x19 + 0x30));
    if (0 < *(int *)(unaff_x19 + 0x30)) {
      iVar17 = 0;
      do {
        lVar11 = *(long *)(unaff_x19 + 0x60);
        _uStack0000000000000040 = 0;
        in_stack_00000028 = (long *)0x0;
        in_stack_00000020 = (long *)0x0;
        in_stack_00000038 = (long *)0x0;
        in_stack_00000030 = (long *)0x0;
        if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        in_stack_00000020 =
             (long *)FUN_03f2b33c(*(long *)(unaff_x19 + 0x10),iVar17,*(undefined8 *)puVar5);
        thunk_FUN_02ee2be8(&stack0x00000020);
        if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        in_stack_00000028 =
             (long *)FUN_03f2b33c(*(long *)(unaff_x19 + 0x18),iVar17,*(undefined8 *)puVar4);
        thunk_FUN_02ee2be8((ulong)&stack0x00000020 | 8);
        if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        in_stack_00000030 =
             (long *)FUN_03f2b33c(*(long *)(unaff_x19 + 0x20),iVar17,*(undefined8 *)puVar6);
        thunk_FUN_02ee2be8(&stack0x00000030);
        if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        in_stack_00000038 =
             (long *)FUN_03f2b33c(*(long *)(unaff_x19 + 0x28),iVar17,*(undefined8 *)puVar3);
        thunk_FUN_02ee2be8(&stack0x00000038);
        _uStack0000000000000040 = CONCAT44(uStack0000000000000044,iVar17);
        if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        lVar13 = FUN_03f2b33c(*(long *)(unaff_x19 + 0x10),iVar17,*(undefined8 *)puVar5);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        _uStack0000000000000040 = CONCAT14(*(int *)(lVar13 + 0x10) != 0,uStack0000000000000040);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        _iStack0000000000000070 = _uStack0000000000000040;
        in_stack_00000058 = in_stack_00000028;
        in_stack_00000050 = in_stack_00000020;
        in_stack_00000068 = in_stack_00000038;
        in_stack_00000060 = in_stack_00000030;
        MemoryPack_MemoryPackFormatter<Vector3>___ctor
                  (lVar11,iVar17,&stack0x00000050,*(undefined8 *)puVar7);
        iVar17 = iVar17 + 1;
      } while (iVar17 < *(int *)(unaff_x19 + 0x30));
    }
  }
  puVar2 = MessagePipe_AttributeFilterProvider<MessageHandlerFilterAttribute>_var;
  lVar13 = *(long *)(unaff_x19 + 0x60);
  lVar11 = *(long *)MessagePipe_AttributeFilterProvider<MessageHandlerFilterAttribute>_var;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar11 = *(long *)puVar2;
  }
  puVar16 = *(undefined8 **)(lVar11 + 0xb8);
  lVar20 = puVar16[1];
  if (lVar20 == 0) {
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      puVar16 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar19 = *puVar16;
    lVar20 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06ab6298);
    FUN_04c5c198(lVar20,uVar19,
                 *(undefined8 *)
                  MessagePipe_AttributeFilterProvider<AsyncRequestHandlerFilterAttribute>_var,0);
    plVar14 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar14 = lVar20;
    thunk_FUN_02ee2be8(plVar14,lVar20);
  }
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  FUN_0402acf4(lVar13,lVar20,*(undefined8 *)PTR_DAT_06ab62d8);
  puVar2 = PTR_DAT_06ab62e0;
  if (0 < *(int *)(unaff_x19 + 0x30)) {
    iVar17 = 0;
    do {
      if (*(long *)(unaff_x19 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      FUN_04028c84(&stack0x00000050,*(long *)(unaff_x19 + 0x60),iVar17,*(undefined8 *)puVar2);
      if (iVar17 != iStack0000000000000070) {
LAB_05eb67c4:
        if (*(long *)(unaff_x19 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        FUN_04de5844(*(long *)(unaff_x19 + 0x58),*(undefined8 *)PTR_DAT_06ab62a0);
        puVar3 = PTR_DAT_06ab1908;
        if (0 < *(int *)(unaff_x19 + 0x30)) {
          iVar17 = 0;
          iVar18 = 0;
          do {
            if (*(long *)(unaff_x19 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3ccc4();
            }
            FUN_04028c84(&stack0x00000050,*(long *)(unaff_x19 + 0x60),iVar18,*(undefined8 *)puVar2);
            uVar12 = _iStack0000000000000070;
            plVar10 = in_stack_00000068;
            plVar9 = in_stack_00000060;
            plVar8 = in_stack_00000058;
            plVar14 = in_stack_00000050;
            if (*(long *)(unaff_x19 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3ccc4();
            }
            FUN_04028c84(&stack0x00000050,*(long *)(unaff_x19 + 0x60),iVar18,*(undefined8 *)puVar2);
            if ((_iStack0000000000000070 & 0x100000000) == 0) {
              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
              in_stack_00000018 = plVar14[4];
              in_stack_00000010 = plVar14[3];
              FUN_06213484(&stack0x00000010,0);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
              in_stack_00000018 = plVar8[4];
              in_stack_00000010 = plVar8[3];
              FUN_06213484(&stack0x00000010,0);
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
              in_stack_00000018 = plVar9[4];
              in_stack_00000010 = plVar9[3];
              FUN_06213484(&stack0x00000010,0);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
              in_stack_00000018 = plVar10[4];
              in_stack_00000010 = plVar10[3];
              FUN_06213484(&stack0x00000010,0);
              (**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
              (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
              (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
              (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
              uVar19 = extraout_x1;
            }
            else {
              if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
              FUN_03f2b390(*(long *)(unaff_x19 + 0x10),iVar18,plVar14,
                           *(undefined8 *)PTR_DAT_06ab62f0);
              if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
              FUN_03f2b390(*(long *)(unaff_x19 + 0x18),iVar18,plVar8,*(undefined8 *)PTR_DAT_06ab6300
                          );
              if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
              FUN_03f2b390(*(long *)(unaff_x19 + 0x20),iVar18,plVar9,*(undefined8 *)PTR_DAT_06ab62f8
                          );
              if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
              FUN_03f2b390(*(long *)(unaff_x19 + 0x28),iVar18,plVar10,
                           *(undefined8 *)PTR_DAT_06ab62e8);
              if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
              lVar13 = *(long *)(unaff_x19 + 0x58);
              lVar11 = FUN_03f2b33c(*(long *)(unaff_x19 + 0x10),iVar18,*(undefined8 *)puVar5);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
              uVar15 = FUN_04de58b0(lVar13,*(undefined8 *)(lVar11 + 0x28),
                                    *(undefined8 *)PTR_DAT_06ab62a8);
              if ((uVar15 & 1) == 0) {
                if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02e3ccc4();
                }
                lVar13 = *(long *)(unaff_x19 + 0x58);
                lVar11 = FUN_03f2b33c(*(long *)(unaff_x19 + 0x10),iVar18,*(undefined8 *)puVar5);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02e3ccc4();
                }
                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02e3ccc4();
                }
                FUN_04de56bc(lVar13,*(undefined8 *)(lVar11 + 0x28),iVar18,
                             *(undefined8 *)PTR_DAT_06ab6240);
              }
              if (*(long *)(unaff_x19 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
              FUN_03ed86ec(*(long *)(unaff_x19 + 0x68),uVar12 & 0xffffffff,iVar18,
                           *(undefined8 *)puVar3);
              iVar17 = iVar17 + 1;
              uVar19 = extraout_x1_00;
            }
            iVar1 = *(int *)(unaff_x19 + 0x30);
            iVar18 = iVar18 + 1;
          } while (iVar18 < iVar1);
          iVar18 = iVar1 - iVar17;
          if (iVar18 != 0 && iVar17 <= iVar1) {
            if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3ccc4(0,uVar19,iVar18);
            }
            FUN_03f2cd60(*(long *)(unaff_x19 + 0x10),iVar17,iVar18,*(undefined8 *)PTR_DAT_06ab62d0);
            if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3ccc4();
            }
            FUN_03f2cd60(*(long *)(unaff_x19 + 0x18),iVar17,*(int *)(unaff_x19 + 0x30) - iVar17,
                         *(undefined8 *)PTR_DAT_06ab62b0);
            if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3ccc4();
            }
            FUN_03f2cd60(*(long *)(unaff_x19 + 0x20),iVar17,*(int *)(unaff_x19 + 0x30) - iVar17,
                         *(undefined8 *)PTR_DAT_06ab62b8);
            if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3ccc4();
            }
            FUN_03f2cd60(*(long *)(unaff_x19 + 0x28),iVar17,*(int *)(unaff_x19 + 0x30) - iVar17,
                         *(undefined8 *)PTR_DAT_06ab62c0);
            if (*(long *)(unaff_x19 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3ccc4();
            }
            FUN_0402aa9c(*(long *)(unaff_x19 + 0x60),iVar17,*(int *)(unaff_x19 + 0x30) - iVar17,
                         *(undefined8 *)PTR_DAT_06ab62c8);
            *(int *)(unaff_x19 + 0x30) = iVar17;
          }
        }
        if (*(long *)(unaff_x19 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        FUN_05eb498c(*(long *)(unaff_x19 + 0x50),*(undefined8 *)(unaff_x19 + 0x68));
        break;
      }
      if (*(long *)(unaff_x19 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      FUN_04028c84(&stack0x00000050,*(long *)(unaff_x19 + 0x60),iVar17,*(undefined8 *)puVar2);
      if ((_iStack0000000000000070 & 0x100000000) == 0) goto LAB_05eb67c4;
      iVar17 = iVar17 + 1;
    } while (iVar17 < *(int *)(unaff_x19 + 0x30));
  }
  FUN_05dc6808(&stack0x0000004c,0);
  return;
}


