/*
FUNCTION_NAME: System.Boolean$$GetTypeCode
ENTRY_POINT: 033f9c6c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_12;validity_or_gating_hits_21;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_6
*/


int System_Boolean__GetTypeCode(void)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined2 uVar9;
  short sVar10;
  short sVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  int iVar20;
  byte *pbVar21;
  long lVar22;
  int iVar23;
  int iVar24;
  int unaff_w19;
  int iVar25;
  int unaff_w20;
  int unaff_w21;
  int iVar26;
  long unaff_x22;
  long unaff_x23;
  undefined2 unaff_w24;
  byte *pbVar27;
  uint unaff_w25;
  int unaff_w26;
  int unaff_w27;
  byte unaff_w28;
  byte *pbVar28;
  undefined1 *in_stack_00000010;
  ulong in_stack_00000018;
  undefined1 *in_stack_00000028;
  ulong in_stack_00000030;
  byte *in_stack_00000038;
  long in_stack_00000048;
  int iStack0000000000000058;
  int iStack000000000000005c;
  int in_stack_00000060;
  uint uStack0000000000000068;
  int iStack000000000000006c;
  uint uStack0000000000000070;
  int iStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  int iStack0000000000000080;
  int iStack0000000000000084;
  long in_stack_00000088;
  int iStack0000000000000090;
  uint uStack0000000000000094;
  long in_stack_00000098;
  long in_stack_000000a0;
  int iStack00000000000000a8;
  int iStack00000000000000ac;
  int iStack00000000000000b0;
  int iStack00000000000000b4;
  long in_stack_000000b8;
  int iStack00000000000000c0;
  int iStack00000000000000c4;
  int iStack00000000000000c8;
  int iStack00000000000000cc;
  
  do {
    uVar18 = FUN_033f8ae0(unaff_w24,unaff_w25);
    iVar25 = unaff_w20;
    iVar24 = unaff_w19;
    if ((uVar18 & 1) == 0) {
      iVar26 = unaff_w21;
      if (unaff_w20 <= unaff_w21) goto LAB_033f9d68;
      lVar19 = unaff_x22;
      iVar20 = unaff_w26;
      if ((unaff_w28 & 1) == 0) goto LAB_033f9ca0;
      iVar23 = unaff_w21;
      iVar26 = unaff_w26;
      iVar20 = unaff_w27;
      uVar16 = uStack0000000000000094;
      if ((iStack0000000000000090 < unaff_w21) && (unaff_w27 < unaff_w26)) {
        iVar20 = unaff_w21;
        if (unaff_w26 < unaff_w19) {
          if (unaff_x23 == 0) goto LAB_033fae50;
          iVar23 = 0;
          do {
            iVar20 = unaff_w21 + iVar23;
            iVar26 = unaff_w26 + iVar23;
            sVar10 = FUN_03409f80(in_stack_00000098,iVar20,0);
            sVar11 = FUN_03409f80(unaff_x22,iVar26,0);
            unaff_x23 = in_stack_00000098;
            if (sVar10 != sVar11) goto LAB_033f9db8;
            iVar23 = iVar23 + 1;
          } while ((iVar26 + 1 < unaff_w19) && (iVar20 + 1 < unaff_w20));
          iVar20 = unaff_w21 + iVar23;
          iVar26 = unaff_w26 + iVar23;
        }
LAB_033f9db8:
        unaff_w26 = iVar26;
        unaff_w21 = iVar20;
        if ((unaff_w26 != unaff_w19) && (iVar20 = unaff_w21, unaff_w21 != unaff_w20)) {
          do {
            iVar20 = iVar20 + -1;
            iVar1 = unaff_w26;
            if (iVar20 <= iStack0000000000000090) break;
            if (unaff_x23 == 0) goto LAB_033fae50;
            uVar9 = FUN_03409f80(unaff_x23,iVar20,0);
            cVar5 = FUN_033f7f6c(in_stack_00000088,uVar9);
          } while (cVar5 == '\x01');
          do {
            iVar1 = iVar1 + -1;
            if (iVar1 <= unaff_w27) break;
            uVar9 = FUN_03409f80(unaff_x22,iVar1,0);
            cVar5 = FUN_033f7f6c(in_stack_00000088,uVar9);
          } while (cVar5 == '\x01');
          iVar26 = iVar1;
          iVar23 = iVar20;
          if (iStack0000000000000090 < iVar20) {
            if (unaff_x23 == 0) goto LAB_033fae50;
            do {
              uVar9 = FUN_03409f80(unaff_x23,iVar20,0);
              uVar18 = FUN_033f8b5c(in_stack_00000088,uVar9);
              iVar23 = iVar20;
              if ((uVar18 & 1) != 0) break;
              iVar20 = iVar20 + -1;
              iVar23 = iStack0000000000000090;
            } while (iStack0000000000000090 < iVar20);
          }
          do {
            iVar20 = unaff_w26;
            iStack0000000000000090 = unaff_w21;
            if (iVar1 <= unaff_w27) goto joined_r0x033f9da4;
            uVar9 = FUN_03409f80(unaff_x22,iVar1,0);
            uVar18 = FUN_033f8b5c(in_stack_00000088,uVar9);
            iVar26 = iVar1;
            if ((uVar18 & 1) != 0) goto joined_r0x033f9da4;
            iVar1 = iVar1 + -1;
            iVar26 = unaff_w27;
          } while( true );
        }
      }
      else {
joined_r0x033f9da4:
        unaff_w26 = iVar26;
        unaff_w21 = iVar23;
        if (unaff_x23 == 0) goto LAB_033fae50;
        uVar9 = FUN_03409f80(unaff_x23,unaff_w21,0);
        uStack0000000000000070 = FUN_033f86cc(in_stack_00000088,uVar9,unaff_w25);
        uVar9 = FUN_03409f80(unaff_x22,unaff_w26,0);
        uVar17 = FUN_033f86cc(in_stack_00000088,uVar9,unaff_w25);
        uVar12 = FUN_033f87b0(in_stack_00000088,uStack0000000000000070);
        _uStack0000000000000078 = CONCAT44(uVar12,uStack0000000000000078);
        unaff_w27 = iVar20;
        if (uVar12 == 0) {
LAB_033f9f84:
          pbVar28 = (byte *)0x0;
        }
        else {
          if (-1 < *(int *)(in_stack_00000048 + 0x28)) {
            uStack0000000000000070 =
                 FUN_033f88d0(in_stack_00000088,*(int *)(in_stack_00000048 + 0x28),uVar12,unaff_w25)
            ;
            goto LAB_033f9f84;
          }
          pbVar28 = *(byte **)(in_stack_00000048 + 0x30);
          if (pbVar28 == (byte *)0x0) {
            unaff_w21 = unaff_w21 + 1;
            goto LAB_033f9bcc;
          }
        }
        uVar13 = FUN_033f87b0(in_stack_00000088,uVar17);
        _uStack0000000000000078 = CONCAT44(uVar12,uVar13);
        if (uVar13 == 0) {
System_Convert__ToInt64:
          pbVar27 = (byte *)0x0;
        }
        else {
          if (-1 < (int)uStack0000000000000068) {
            uVar17 = FUN_033f88d0(in_stack_00000088,uStack0000000000000068,uVar13,unaff_w25);
            goto System_Convert__ToInt64;
          }
          pbVar27 = in_stack_00000038;
          if (in_stack_00000038 == (byte *)0x0) {
            in_stack_00000038 = (byte *)0x0;
            unaff_w26 = unaff_w26 + 1;
            unaff_x23 = in_stack_00000098;
            goto LAB_033f9bcc;
          }
        }
        bVar6 = FUN_033f7f6c(in_stack_00000088,uStack0000000000000070);
        bVar7 = FUN_033f7f6c(in_stack_00000088,uVar17);
        if (bVar6 == 6) {
          if (((unaff_w25 >> 0x1d & 1) == 0) && (uStack0000000000000094 == 5)) {
            iStack000000000000006c = unaff_w21 - iStack0000000000000084;
            if (in_stack_000000b8 != 0) {
              iStack000000000000006c = iStack00000000000000c0 - iStack00000000000000c4;
            }
            uVar12 = FUN_033f8000(in_stack_00000088,uStack0000000000000070);
            if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ +
                        0xe0) == 0) {
              thunk_FUN_01ee6d7c(*(long *)
                                  Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__);
            }
            iVar20 = FUN_033f60b8(uStack0000000000000070);
            iStack000000000000005c = (uVar12 & 0xff) << (ulong)(iVar20 + 8U & 0x1f);
          }
          unaff_w21 = unaff_w21 + 1;
          *(uint *)(in_stack_00000048 + 0x28) = uStack0000000000000070;
          if (bVar7 == 6) {
LAB_033fa12c:
            puVar2 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
            if (((unaff_w25 >> 0x1d & 1) == 0) && (uStack0000000000000094 == 5)) {
              iStack0000000000000058 = unaff_w26 - iStack0000000000000080;
              if (in_stack_000000a0 != 0) {
                iStack0000000000000058 = iStack00000000000000a8 - iStack00000000000000ac;
              }
              uVar12 = FUN_033f8000(in_stack_00000088,uVar17);
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c(*(long *)puVar2);
              }
              iVar20 = FUN_033f60b8(uVar17);
              in_stack_00000060 = (uVar12 & 0xff) << (ulong)(iVar20 + 8U & 0x1f);
            }
            unaff_w26 = unaff_w26 + 1;
            uStack0000000000000068 = uVar17;
          }
          iVar1 = iStack000000000000006c;
          iVar23 = in_stack_00000060;
          iVar26 = iStack000000000000005c;
          iVar20 = iStack0000000000000058;
          unaff_x23 = in_stack_00000098;
          iStack0000000000000058 = iVar20;
          iStack000000000000005c = iVar26;
          in_stack_00000060 = iVar23;
          iStack000000000000006c = iVar1;
          if (uStack0000000000000094 == 5) {
            iStack0000000000000058 = -1;
            bVar4 = iStack000000000000005c != in_stack_00000060;
            iStack000000000000005c = 0;
            in_stack_00000060 = 0;
            iStack000000000000006c = -1;
            if (bVar4) {
              iStack0000000000000058 = iVar20;
              iStack000000000000005c = iVar26;
              in_stack_00000060 = iVar23;
              iStack000000000000006c = iVar1;
              uVar16 = 4;
            }
          }
        }
        else {
          if (bVar7 == 6) goto LAB_033fa12c;
          if (uVar12 == 0) {
            lVar19 = FUN_033f823c(in_stack_00000088,in_stack_00000098,unaff_w21,unaff_w20);
            if (pbVar28 == (byte *)0x0) {
              if (lVar19 == 0) goto LAB_033fa2f0;
              if (*(long *)(lVar19 + 0x18) == 0) goto LAB_033fae50;
              lVar22 = *(long *)(lVar19 + 0x28);
              iVar26 = *(int *)(*(long *)(lVar19 + 0x18) + 0x18);
              if (lVar22 == 0) {
                if (in_stack_000000b8 == 0) {
                  in_stack_000000b8 = in_stack_00000098;
                  thunk_FUN_01f51358(&stack0x000000b8,in_stack_00000098);
                  iStack00000000000000c4 = iStack0000000000000084;
                  if (*(long *)(lVar19 + 0x18) != 0) {
                    iStack00000000000000c0 = unaff_w21 + *(int *)(*(long *)(lVar19 + 0x18) + 0x18);
                    unaff_x23 = *(long *)(lVar19 + 0x20);
                    iStack00000000000000c8 = unaff_w20;
                    iStack00000000000000cc = iStack0000000000000090;
                    if (unaff_x23 != 0) {
                      iStack0000000000000090 = 0;
                      _uStack0000000000000078 = (ulong)uVar13;
                      iStack0000000000000084 = 0;
                      unaff_w21 = 0;
                      iVar25 = *(int *)(unaff_x23 + 0x10);
                      goto LAB_033f9bcc;
                    }
                  }
                  goto LAB_033fae50;
                }
                bVar4 = false;
                pbVar28 = (byte *)0x0;
              }
              else {
                pbVar28 = *(byte **)(in_stack_00000048 + 0x18);
                uVar18 = 0;
                while ((long)uVar18 < (long)(int)*(uint *)(lVar22 + 0x18)) {
                  if (*(uint *)(lVar22 + 0x18) <= uVar18) goto LAB_033fae54;
                  pbVar28[uVar18] = *(byte *)(lVar22 + uVar18 + 0x20);
                  lVar22 = *(long *)(lVar19 + 0x28);
                  uVar18 = uVar18 + 1;
                  if (lVar22 == 0) goto LAB_033fae50;
                }
                bVar4 = false;
                *(undefined4 *)(in_stack_00000048 + 0x28) = 0xffffffff;
                *(byte **)(in_stack_00000048 + 0x30) = pbVar28;
              }
            }
            else {
              bVar4 = false;
              iVar26 = 1;
            }
          }
          else {
            if (pbVar28 == (byte *)0x0) {
LAB_033fa2f0:
              pbVar28 = *(byte **)(in_stack_00000048 + 0x18);
              *pbVar28 = bVar6;
              bVar8 = FUN_033f8000(in_stack_00000088,uStack0000000000000070);
              pbVar28[1] = bVar8;
              if (1 < uStack0000000000000094 && (in_stack_00000030 & 0x100000000) == 0) {
                bVar8 = FUN_033f8094(in_stack_00000088,uStack0000000000000070,uVar12);
                pbVar28[2] = bVar8;
              }
              if (uStack0000000000000094 < 3) {
LAB_033fa37c:
                bVar4 = false;
              }
              else {
                if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ +
                            0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                bVar8 = FUN_033f60b8(uStack0000000000000070);
                pbVar28[3] = bVar8;
                if (uStack0000000000000094 < 4) goto LAB_033fa37c;
                if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ +
                            0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                if ((uStack0000000000000070 & 0xffff) < 0x3041) {
LAB_033fa89c:
                  bVar4 = false;
                }
                else if ((uStack0000000000000070 + 0x9a & 0xffff) < 0x38) {
                  bVar4 = true;
                }
                else {
                  uVar14 = uStack0000000000000070 >> 8 & 0xff;
                  if (0x32 < uVar14) goto LAB_033fa89c;
                  if ((uStack0000000000000070 & 0xffff) < 0x309d) {
                    bVar4 = (uStack0000000000000070 & 0xffff) < 0x3099;
                  }
                  else if (uVar14 < 0x31) {
                    bVar4 = (uStack0000000000000070 & 0xffff) != 0x30fb;
                  }
                  else {
                    bVar4 = (uStack0000000000000070 - 0x32d0 & 0xffff) < 0x2f;
                  }
                }
              }
              if (1 < bVar6) {
                *(uint *)(in_stack_00000048 + 0x28) = uStack0000000000000070;
              }
            }
            else {
              bVar4 = false;
            }
            iVar26 = 1;
          }
          if (uVar13 == 0) {
            lVar19 = FUN_033f823c(in_stack_00000088,unaff_x22,unaff_w26,unaff_w19);
            if (pbVar27 != (byte *)0x0) goto LAB_033fa454;
            if (lVar19 == 0) goto LAB_033fa3b0;
            if (*(long *)(lVar19 + 0x18) == 0) goto LAB_033fae50;
            lVar22 = *(long *)(lVar19 + 0x28);
            iVar23 = unaff_w26 + *(int *)(*(long *)(lVar19 + 0x18) + 0x18);
            if (lVar22 == 0) {
              if (in_stack_000000a0 == 0) {
                in_stack_000000a0 = unaff_x22;
                thunk_FUN_01f51358(&stack0x000000a0,unaff_x22);
                iStack00000000000000ac = iStack0000000000000080;
                if (*(long *)(lVar19 + 0x18) != 0) {
                  iStack00000000000000a8 = unaff_w26 + *(int *)(*(long *)(lVar19 + 0x18) + 0x18);
                  unaff_x22 = *(long *)(lVar19 + 0x20);
                  iStack00000000000000b0 = unaff_w19;
                  iStack00000000000000b4 = iVar20;
                  if (unaff_x22 != 0) {
                    _uStack0000000000000078 = (ulong)uVar12 << 0x20;
                    iStack0000000000000080 = 0;
                    unaff_w26 = 0;
                    unaff_x23 = in_stack_00000098;
                    iVar24 = *(int *)(unaff_x22 + 0x10);
                    unaff_w27 = 0;
                    goto LAB_033f9bcc;
                  }
                }
                goto LAB_033fae50;
              }
              bVar3 = false;
              pbVar27 = (byte *)0x0;
            }
            else {
              pbVar27 = *(byte **)(in_stack_00000048 + 0x20);
              uVar18 = 0;
              while ((long)uVar18 < (long)(int)*(uint *)(lVar22 + 0x18)) {
                if (*(uint *)(lVar22 + 0x18) <= uVar18) {
LAB_033fae54:
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                pbVar27[uVar18] = *(byte *)(lVar22 + uVar18 + 0x20);
                lVar22 = *(long *)(lVar19 + 0x28);
                uVar18 = uVar18 + 1;
                if (lVar22 == 0) goto LAB_033fae50;
              }
              uStack0000000000000068 = 0xffffffff;
              bVar3 = false;
              in_stack_00000038 = pbVar27;
            }
          }
          else if (pbVar27 == (byte *)0x0) {
LAB_033fa3b0:
            pbVar27 = *(byte **)(in_stack_00000048 + 0x20);
            *pbVar27 = bVar7;
            bVar6 = FUN_033f8000(in_stack_00000088,uVar17);
            pbVar27[1] = bVar6;
            if (1 < uStack0000000000000094 && (in_stack_00000030 & 0x100000000) == 0) {
              bVar6 = FUN_033f8094(in_stack_00000088,uVar17,uVar13);
              pbVar27[2] = bVar6;
            }
            puVar2 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
            if (uStack0000000000000094 < 3) {
LAB_033fa4a4:
              bVar3 = false;
            }
            else {
              if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ +
                          0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              bVar6 = FUN_033f60b8(uVar17);
              pbVar27[3] = bVar6;
              if (uStack0000000000000094 < 4) goto LAB_033fa4a4;
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              if ((uVar17 & 0xffff) < 0x3041) {
LAB_033fa8a8:
                bVar3 = false;
              }
              else if ((uVar17 + 0x9a & 0xffff) < 0x38) {
                bVar3 = true;
              }
              else {
                uVar16 = uVar17 >> 8 & 0xff;
                if (0x32 < uVar16) goto LAB_033fa8a8;
                if ((uVar17 & 0xffff) < 0x309d) {
                  bVar3 = (uVar17 & 0xffff) < 0x3099;
                }
                else if (uVar16 < 0x31) {
                  bVar3 = (uVar17 & 0xffff) != 0x30fb;
                }
                else {
                  bVar3 = (uVar17 - 0x32d0 & 0xffff) < 0x2f;
                }
              }
            }
            if (1 < bVar7) {
              uStack0000000000000068 = uVar17;
            }
            iVar23 = unaff_w26 + 1;
          }
          else {
LAB_033fa454:
            bVar3 = false;
            iVar23 = unaff_w26 + 1;
          }
          unaff_w21 = iVar26 + unaff_w21;
          unaff_w26 = iVar23;
          iVar20 = unaff_w21;
          if ((unaff_w25 >> 1 & 1) == 0) {
            for (; iVar20 < unaff_w20; iVar20 = iVar20 + 1) {
              uVar9 = FUN_03409f80(in_stack_00000098,iVar20,0);
              cVar5 = FUN_033f7f6c(in_stack_00000088,uVar9);
              unaff_w21 = iVar20;
              if (cVar5 != '\x01') break;
              bVar6 = pbVar28[2];
              if (bVar6 == 0) {
                bVar6 = 2;
                pbVar28[2] = 2;
              }
              uVar9 = FUN_03409f80(in_stack_00000098,iVar20,0);
              cVar5 = FUN_033f8094(in_stack_00000088,uVar9,0);
              pbVar28[2] = cVar5 + bVar6;
              unaff_w21 = unaff_w20;
            }
            if (iVar23 < unaff_w19) {
              do {
                uVar9 = FUN_03409f80(unaff_x22,iVar23,0);
                cVar5 = FUN_033f7f6c(in_stack_00000088,uVar9);
                unaff_w26 = iVar23;
                if (cVar5 != '\x01') break;
                bVar6 = pbVar27[2];
                pbVar21 = (byte *)0x1;
                if (bVar6 == 0) {
                  bVar6 = 2;
                  pbVar27[2] = 2;
                  pbVar21 = pbVar27;
                }
                uVar9 = FUN_03409f80(pbVar21,unaff_x22,iVar23,0);
                cVar5 = FUN_033f8094(in_stack_00000088,uVar9,0);
                iVar23 = iVar23 + 1;
                pbVar27[2] = cVar5 + bVar6;
                unaff_w26 = unaff_w19;
              } while (unaff_w19 != iVar23);
            }
          }
          puVar2 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
          iVar20 = (uint)*pbVar28 - (uint)*pbVar27;
          if (iVar20 == 0) {
            iVar20 = (uint)pbVar28[1] - (uint)pbVar27[1];
          }
          if (iVar20 != 0) {
            return iVar20;
          }
          unaff_x23 = in_stack_00000098;
          uVar16 = 1;
          if (uStack0000000000000094 != 1) {
            if (((unaff_w25 >> 1 & 1) == 0) &&
               (iVar20 = (uint)pbVar28[2] - (uint)pbVar27[2], iVar20 != 0)) {
              if ((in_stack_00000018 & 0x100000000) != 0) {
                return -1;
              }
              iStack0000000000000074 = iVar20;
              uVar16 = 1;
              if (*(char *)(in_stack_00000088 + 0x5c) != '\0') {
                uVar16 = 2;
              }
            }
            else {
              uVar16 = 2;
              if (uStack0000000000000094 != 2) {
                iVar20 = (uint)pbVar28[3] - (uint)pbVar27[3];
                if (iVar20 == 0) {
                  uVar16 = 3;
                  if (uStack0000000000000094 != 3) {
                    if (bVar4 == bVar3) {
                      uVar16 = uStack0000000000000094;
                      if (bVar4 != false) {
                        if (*(int *)(*(long *)
                                      Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ +
                                    0xe0) == 0) {
                          thunk_FUN_01ee6d7c();
                        }
                        uVar16 = FUN_033f651c(uStack0000000000000070);
                        uVar14 = FUN_033f651c(uVar17);
                        iVar20 = 1;
                        if ((uVar16 & 1) != 0) {
                          iVar20 = -1;
                        }
                        if (((uVar16 ^ uVar14) & 1) == 0) {
                          iVar20 = 0;
                        }
                        if (iVar20 == 0) {
                          if (*(int *)(*(long *)
                                        Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                                      + 0xe0) == 0) {
                            thunk_FUN_01ee6d7c();
                          }
                          iVar20 = 4;
                          if (uVar12 == 3) {
                            iVar20 = 5;
                          }
                          iVar26 = 3;
                          if (in_stack_00000030._4_4_ == 0 && uVar12 != 0) {
                            iVar26 = iVar20;
                          }
                          iVar23 = -5;
                          if (uVar13 != 3) {
                            iVar23 = -4;
                          }
                          iVar20 = -3;
                          if (in_stack_00000030._4_4_ == 0 && uVar13 != 0) {
                            iVar20 = iVar23;
                          }
                          iVar20 = iVar20 + iVar26;
                        }
                        if (iVar20 == 0) {
                          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                            thunk_FUN_01ee6d7c();
                          }
                          bVar4 = (uStack0000000000000070 - 0x3041 & 0xffff) < 0x54;
                          iVar20 = -1;
                          if (bVar4) {
                            iVar20 = 1;
                          }
                          if (bVar4 == (uVar17 - 0x3041 & 0xffff) < 0x54) {
                            if (*(int *)(*(long *)
                                          Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                                        + 0xe0) == 0) {
                              thunk_FUN_01ee6d7c();
                            }
                            uVar12 = FUN_033f81c8(uStack0000000000000070 & 0xffff,unaff_w25);
                            uVar17 = FUN_033f81c8(uVar17 & 0xffff,unaff_w25);
                            iVar20 = 1;
                            if ((uVar12 & 1) != 0) {
                              iVar20 = -1;
                            }
                            uVar16 = uStack0000000000000094;
                            if ((uVar12 & 1) == (uVar17 & 1)) goto LAB_033f9bcc;
                          }
                        }
                        uVar16 = 3;
                        goto LAB_033fa724;
                      }
                    }
                    else {
                      if ((in_stack_00000018 & 0x100000000) != 0) {
                        return -1;
                      }
                      iStack0000000000000074 = -1;
                      if (bVar4 != false) {
                        iStack0000000000000074 = 1;
                      }
                      uVar16 = 3;
                    }
                  }
                }
                else {
                  uVar16 = 2;
LAB_033fa724:
                  iStack0000000000000074 = iVar20;
                  if ((in_stack_00000018 & 0x100000000) != 0) {
                    return -1;
                  }
                }
              }
            }
          }
        }
      }
LAB_033f9bcc:
      for (; uStack0000000000000094 = uVar16, unaff_w21 < iVar25; unaff_w21 = unaff_w21 + 1) {
        if (unaff_x23 == 0) goto LAB_033fae50;
        uVar9 = FUN_03409f80(unaff_x23,unaff_w21,0);
        if (*(int *)(*(long *)
                      Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                    + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)
                              Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                            );
        }
        uVar18 = FUN_033f8ae0(uVar9,unaff_w25);
        if ((uVar18 & 1) == 0) break;
        uVar16 = uStack0000000000000094;
      }
      unaff_w20 = iVar25;
      unaff_w19 = iVar24;
      iVar20 = unaff_w26;
      in_stack_00000098 = unaff_x23;
      if (iVar24 <= unaff_w26) {
LAB_033f9c98:
        lVar19 = unaff_x22;
        iVar26 = unaff_w21;
        iVar24 = unaff_w19;
        unaff_w26 = iVar20;
        if (unaff_w21 < unaff_w20) {
LAB_033f9ca0:
          unaff_w27 = iStack00000000000000b4;
          iVar23 = iStack00000000000000b0;
          unaff_w26 = iStack00000000000000a8;
          unaff_x22 = in_stack_000000a0;
          iVar26 = unaff_w21;
          iVar24 = unaff_w19;
          if (in_stack_000000a0 != 0) {
            iStack0000000000000080 = iStack00000000000000ac;
            in_stack_000000a0 = 0;
            thunk_FUN_01f51358(&stack0x000000a0,0);
            unaff_x23 = in_stack_00000098;
            iVar25 = unaff_w20;
            iVar24 = iVar23;
            uVar16 = uStack0000000000000094;
            goto LAB_033f9bcc;
          }
        }
        else {
LAB_033f9d68:
          iVar25 = iStack00000000000000c8;
          unaff_w21 = iStack00000000000000c0;
          unaff_x23 = in_stack_000000b8;
          lVar19 = unaff_x22;
          iVar20 = unaff_w26;
          if (in_stack_000000b8 != 0) {
            in_stack_000000b8 = 0;
            iStack0000000000000084 = iStack00000000000000c4;
            iStack0000000000000090 = iStack00000000000000cc;
            thunk_FUN_01f51358(&stack0x000000b8,0);
            uVar16 = uStack0000000000000094;
            goto LAB_033f9bcc;
          }
        }
        puVar2 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
        if ((uStack0000000000000094 < 3) ||
           (iStack0000000000000074 == 0 || (in_stack_00000030 & 0x100000000) != 0)) break;
        if ((iVar24 <= iVar20) || (unaff_w20 <= iVar26)) goto LAB_033fadd4;
        if (in_stack_00000098 == 0) goto LAB_033fae50;
        goto LAB_033fabb8;
      }
      if (unaff_x22 == 0) goto LAB_033fae50;
      unaff_w28 = true;
    }
    else {
      unaff_w26 = unaff_w26 + 1;
      unaff_w28 = unaff_w26 < unaff_w19;
      iVar20 = unaff_w19;
      if (unaff_w19 == unaff_w26) goto LAB_033f9c98;
    }
    unaff_w24 = FUN_03409f80(unaff_x22,unaff_w26,0);
    unaff_w20 = iVar25;
    unaff_w19 = iVar24;
    if (*(int *)(*(long *)
                  Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)
                          Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                        );
    }
  } while( true );
LAB_033facd8:
  if ((uStack0000000000000094 == 1) && (iStack0000000000000074 != 0)) {
    if (iVar26 < unaff_w20) {
      iVar25 = iVar26;
      if (in_stack_00000098 == 0) goto LAB_033fae50;
      do {
        uVar9 = FUN_03409f80(in_stack_00000098,iVar25,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar2);
        }
        uVar18 = FUN_033f6274(uVar9);
        iVar26 = iVar25;
      } while (((uVar18 & 1) != 0) && (iVar25 = iVar25 + 1, iVar26 = unaff_w20, unaff_w20 != iVar25)
              );
    }
    if (iVar20 < iVar24) {
      iVar25 = iVar20;
      if (lVar19 == 0) {
LAB_033fae50:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        uVar9 = FUN_03409f80(lVar19,iVar25,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar2);
        }
        uVar18 = FUN_033f6274(uVar9);
        iVar20 = iVar25;
      } while (((uVar18 & 1) != 0) && (iVar25 = iVar25 + 1, iVar20 = iVar24, iVar24 != iVar25));
    }
  }
  if (iStack0000000000000074 != 0) goto LAB_033fadd4;
  goto LAB_033fad8c;
  while( true ) {
    iStack0000000000000074 = 0;
    _uStack0000000000000078 = 0;
    if (unaff_w20 <= iVar26) break;
LAB_033fabb8:
    uVar9 = FUN_03409f80(in_stack_00000098,iVar26,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar2);
    }
    uVar18 = FUN_033f6274(uVar9);
    if ((uVar18 & 1) == 0) goto LAB_033facd8;
    if (lVar19 == 0) goto LAB_033fae50;
    uVar9 = FUN_03409f80(lVar19,iVar20,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar2);
    }
    uVar18 = FUN_033f6274(uVar9);
    if ((uVar18 & 1) == 0) goto LAB_033facd8;
    uVar9 = FUN_03409f80(in_stack_00000098,iVar26,0);
    uVar15 = FUN_033f86cc(in_stack_00000088,uVar9,unaff_w25);
    uVar16 = FUN_033f8094(in_stack_00000088,uVar15,uStack000000000000007c);
    uVar9 = FUN_03409f80(lVar19,iVar20,0);
    uVar15 = FUN_033f86cc(in_stack_00000088,uVar9,unaff_w25);
    uVar17 = FUN_033f8094(in_stack_00000088,uVar15,_uStack0000000000000078 & 0xffffffff);
    iStack0000000000000074 = (uVar16 & 0xff) - (uVar17 & 0xff);
    if (iStack0000000000000074 != 0) goto LAB_033facd8;
    iVar20 = iVar20 + 1;
    iVar26 = iVar26 + 1;
    if (iVar24 <= iVar20) break;
  }
LAB_033fad8c:
  if ((iStack0000000000000058 < 0) || (-1 < iStack000000000000006c)) {
    if ((iStack0000000000000058 < 0) && (-1 < iStack000000000000006c)) {
      iStack0000000000000074 = 1;
    }
    else {
      iStack0000000000000074 = iStack000000000000006c - iStack0000000000000058;
      if ((iStack0000000000000074 == 0) &&
         (iStack0000000000000074 = iStack000000000000005c - in_stack_00000060,
         iStack0000000000000074 == 0)) {
        if (iVar20 == iVar24) {
          *in_stack_00000010 = 1;
        }
        if (iVar26 == unaff_w20) {
          iStack0000000000000074 = 0;
          *in_stack_00000028 = 1;
        }
        else {
          iStack0000000000000074 = 0;
        }
      }
    }
  }
  else {
    iStack0000000000000074 = -1;
  }
LAB_033fadd4:
  if (iVar26 == unaff_w20) {
    if (iVar20 != iVar24) {
      iStack0000000000000074 = -1;
    }
  }
  else {
    iStack0000000000000074 = 1;
  }
  return iStack0000000000000074;
}


