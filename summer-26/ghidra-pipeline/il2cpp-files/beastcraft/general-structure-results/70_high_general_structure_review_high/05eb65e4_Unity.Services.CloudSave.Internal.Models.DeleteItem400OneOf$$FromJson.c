/*
FUNCTION_NAME: Unity.Services.CloudSave.Internal.Models.DeleteItem400OneOf$$FromJson
ENTRY_POINT: 05eb65e4
PROGRAM: beastcraft-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_1
*/


void Unity_Services_CloudSave_Internal_Models_DeleteItem400OneOf__FromJson(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 *puVar11;
  long unaff_x19;
  int unaff_w20;
  int iVar12;
  long lVar13;
  int iVar14;
  long unaff_x21;
  long lVar15;
  undefined8 *unaff_x22;
  undefined8 uVar16;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  ulong unaff_x26;
  undefined8 *unaff_x27;
  long in_stack_00000010;
  long in_stack_00000018;
  long *in_stack_00000020;
  long *in_stack_00000028;
  long *in_stack_00000030;
  long *in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  long *in_stack_00000050;
  long *in_stack_00000058;
  long *in_stack_00000060;
  long *in_stack_00000068;
  int iStack0000000000000070;
  
  while( true ) {
                    /* try { // try from 05eb65e8 to 05fb65eb has its CatchHandler @ 05eb6a3c */
    if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
                    /* try { // try from 05eb65ec to 05fb69f3 has its CatchHandler @ 05eb5d78 */
    in_stack_00000028 = (long *)FUN_03f2b33c(*(long *)(unaff_x19 + 0x18),unaff_w20,*unaff_x22);
    thunk_FUN_02ee2be8(unaff_x26 | 8);
    if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    in_stack_00000030 = (long *)FUN_03f2b33c(*(long *)(unaff_x19 + 0x20),unaff_w20,*unaff_x23);
    thunk_FUN_02ee2be8(unaff_x26 + 0x10);
    if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    in_stack_00000038 = (long *)FUN_03f2b33c(*(long *)(unaff_x19 + 0x28),unaff_w20,*unaff_x24);
    thunk_FUN_02ee2be8(unaff_x26 + 0x18);
    _uStack0000000000000040 = CONCAT44(uStack0000000000000044,unaff_w20);
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    lVar8 = FUN_03f2b33c(*(long *)(unaff_x19 + 0x10),unaff_w20,*unaff_x27);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    _uStack0000000000000040 = CONCAT14(*(int *)(lVar8 + 0x10) != 0,uStack0000000000000040);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    _iStack0000000000000070 = _uStack0000000000000040;
    in_stack_00000058 = in_stack_00000028;
    in_stack_00000050 = in_stack_00000020;
    in_stack_00000068 = in_stack_00000038;
    in_stack_00000060 = in_stack_00000030;
    MemoryPack_MemoryPackFormatter<Vector3>___ctor(unaff_x21,unaff_w20,&stack0x00000050,*unaff_x25);
    puVar3 = MessagePipe_AttributeFilterProvider<MessageHandlerFilterAttribute>_var;
    unaff_w20 = unaff_w20 + 1;
    if (*(int *)(unaff_x19 + 0x30) <= unaff_w20) break;
    unaff_x21 = *(long *)(unaff_x19 + 0x60);
    _uStack0000000000000040 = 0;
    in_stack_00000028 = (long *)0x0;
    in_stack_00000020 = (long *)0x0;
    in_stack_00000038 = (long *)0x0;
    in_stack_00000030 = (long *)0x0;
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    in_stack_00000020 = (long *)FUN_03f2b33c(*(long *)(unaff_x19 + 0x10),unaff_w20,*unaff_x27);
    thunk_FUN_02ee2be8(&stack0x00000020);
  }
  lVar13 = *(long *)(unaff_x19 + 0x60);
  lVar8 = *(long *)MessagePipe_AttributeFilterProvider<MessageHandlerFilterAttribute>_var;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar8 = *(long *)puVar3;
  }
  puVar11 = *(undefined8 **)(lVar8 + 0xb8);
  lVar15 = puVar11[1];
  if (lVar15 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      puVar11 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
    }
    uVar16 = *puVar11;
    lVar15 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06ab6298);
    FUN_04c5c198(lVar15,uVar16,
                 *(undefined8 *)
                  MessagePipe_AttributeFilterProvider<AsyncRequestHandlerFilterAttribute>_var,0);
    plVar9 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    *plVar9 = lVar15;
    thunk_FUN_02ee2be8(plVar9,lVar15);
  }
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  FUN_0402acf4(lVar13,lVar15,*(undefined8 *)PTR_DAT_06ab62d8);
  puVar3 = PTR_DAT_06ab62e0;
  if (0 < *(int *)(unaff_x19 + 0x30)) {
    iVar12 = 0;
    do {
      if (*(long *)(unaff_x19 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      FUN_04028c84(&stack0x00000050,*(long *)(unaff_x19 + 0x60),iVar12,*(undefined8 *)puVar3);
      if (iVar12 != iStack0000000000000070) {
LAB_05eb67c4:
        if (*(long *)(unaff_x19 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        FUN_04de5844(*(long *)(unaff_x19 + 0x58),*(undefined8 *)PTR_DAT_06ab62a0);
        puVar2 = PTR_DAT_06ab1908;
        if (0 < *(int *)(unaff_x19 + 0x30)) {
          iVar12 = 0;
          iVar14 = 0;
          do {
            if (*(long *)(unaff_x19 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3ccc4();
            }
            FUN_04028c84(&stack0x00000050,*(long *)(unaff_x19 + 0x60),iVar14,*(undefined8 *)puVar3);
            uVar7 = _iStack0000000000000070;
            plVar6 = in_stack_00000068;
            plVar5 = in_stack_00000060;
            plVar4 = in_stack_00000058;
            plVar9 = in_stack_00000050;
            if (*(long *)(unaff_x19 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3ccc4();
            }
            FUN_04028c84(&stack0x00000050,*(long *)(unaff_x19 + 0x60),iVar14,*(undefined8 *)puVar3);
            if ((_iStack0000000000000070 & 0x100000000) == 0) {
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
              in_stack_00000018 = plVar9[4];
              in_stack_00000010 = plVar9[3];
              FUN_06213484(&stack0x00000010,0);
              if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
              in_stack_00000018 = plVar4[4];
              in_stack_00000010 = plVar4[3];
              FUN_06213484(&stack0x00000010,0);
              if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
              in_stack_00000018 = plVar5[4];
              in_stack_00000010 = plVar5[3];
              FUN_06213484(&stack0x00000010,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
              in_stack_00000018 = plVar6[4];
              in_stack_00000010 = plVar6[3];
              FUN_06213484(&stack0x00000010,0);
              (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
              (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
              (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
              (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
              uVar16 = extraout_x1;
            }
            else {
              if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
              FUN_03f2b390(*(long *)(unaff_x19 + 0x10),iVar14,plVar9,*(undefined8 *)PTR_DAT_06ab62f0
                          );
              if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
              FUN_03f2b390(*(long *)(unaff_x19 + 0x18),iVar14,plVar4,*(undefined8 *)PTR_DAT_06ab6300
                          );
              if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
              FUN_03f2b390(*(long *)(unaff_x19 + 0x20),iVar14,plVar5,*(undefined8 *)PTR_DAT_06ab62f8
                          );
              if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
              FUN_03f2b390(*(long *)(unaff_x19 + 0x28),iVar14,plVar6,*(undefined8 *)PTR_DAT_06ab62e8
                          );
              if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
              lVar13 = *(long *)(unaff_x19 + 0x58);
              lVar8 = FUN_03f2b33c(*(long *)(unaff_x19 + 0x10),iVar14,*unaff_x27);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
              uVar10 = FUN_04de58b0(lVar13,*(undefined8 *)(lVar8 + 0x28),
                                    *(undefined8 *)PTR_DAT_06ab62a8);
              if ((uVar10 & 1) == 0) {
                if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02e3ccc4();
                }
                lVar13 = *(long *)(unaff_x19 + 0x58);
                lVar8 = FUN_03f2b33c(*(long *)(unaff_x19 + 0x10),iVar14,*unaff_x27);
                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02e3ccc4();
                }
                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02e3ccc4();
                }
                FUN_04de56bc(lVar13,*(undefined8 *)(lVar8 + 0x28),iVar14,
                             *(undefined8 *)PTR_DAT_06ab6240);
              }
              if (*(long *)(unaff_x19 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
              FUN_03ed86ec(*(long *)(unaff_x19 + 0x68),uVar7 & 0xffffffff,iVar14,
                           *(undefined8 *)puVar2);
              iVar12 = iVar12 + 1;
              uVar16 = extraout_x1_00;
            }
            iVar1 = *(int *)(unaff_x19 + 0x30);
            iVar14 = iVar14 + 1;
          } while (iVar14 < iVar1);
          iVar14 = iVar1 - iVar12;
          if (iVar14 != 0 && iVar12 <= iVar1) {
            if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3ccc4(0,uVar16,iVar14);
            }
            FUN_03f2cd60(*(long *)(unaff_x19 + 0x10),iVar12,iVar14,*(undefined8 *)PTR_DAT_06ab62d0);
            if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3ccc4();
            }
            FUN_03f2cd60(*(long *)(unaff_x19 + 0x18),iVar12,*(int *)(unaff_x19 + 0x30) - iVar12,
                         *(undefined8 *)PTR_DAT_06ab62b0);
            if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3ccc4();
            }
            FUN_03f2cd60(*(long *)(unaff_x19 + 0x20),iVar12,*(int *)(unaff_x19 + 0x30) - iVar12,
                         *(undefined8 *)PTR_DAT_06ab62b8);
            if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3ccc4();
            }
            FUN_03f2cd60(*(long *)(unaff_x19 + 0x28),iVar12,*(int *)(unaff_x19 + 0x30) - iVar12,
                         *(undefined8 *)PTR_DAT_06ab62c0);
            if (*(long *)(unaff_x19 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3ccc4();
            }
            FUN_0402aa9c(*(long *)(unaff_x19 + 0x60),iVar12,*(int *)(unaff_x19 + 0x30) - iVar12,
                         *(undefined8 *)PTR_DAT_06ab62c8);
            *(int *)(unaff_x19 + 0x30) = iVar12;
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
      FUN_04028c84(&stack0x00000050,*(long *)(unaff_x19 + 0x60),iVar12,*(undefined8 *)puVar3);
      if ((_iStack0000000000000070 & 0x100000000) == 0) goto LAB_05eb67c4;
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(int *)(unaff_x19 + 0x30));
  }
  FUN_05dc6808(&stack0x0000004c,0);
  return;
}


