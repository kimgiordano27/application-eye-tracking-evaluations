/*
FUNCTION_NAME: System.Boolean$$System.IConvertible.ToSByte
ENTRY_POINT: 033f9d08
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


/* WARNING: Type propagation algorithm not settling */

int System_Boolean__System_IConvertible_ToSByte(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  short sVar12;
  short sVar13;
  undefined2 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined4 uVar20;
  uint uVar21;
  ulong uVar22;
  long lVar23;
  int iVar24;
  byte *pbVar25;
  long lVar26;
  int iVar27;
  int unaff_w19;
  int unaff_w20;
  int unaff_w21;
  int iVar28;
  long unaff_x22;
  int unaff_w23;
  byte *pbVar29;
  uint unaff_w25;
  int unaff_w26;
  int unaff_w27;
  byte *pbVar30;
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
  ulong in_stack_00000078;
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
  
code_r0x033f9d08:
  do {
    iVar28 = unaff_w21 + unaff_w23;
    iVar24 = unaff_w26 + unaff_w23;
    sVar12 = FUN_03409f80(in_stack_00000098,iVar28,0);
    sVar13 = FUN_03409f80(unaff_x22,iVar24,0);
    if (sVar12 != sVar13) goto LAB_033f9db8;
    unaff_w23 = unaff_w23 + 1;
  } while ((iVar24 + 1 < unaff_w19) && (iVar28 + 1 < unaff_w20));
  iVar28 = unaff_w21 + unaff_w23;
  iVar24 = unaff_w26 + unaff_w23;
LAB_033f9db8:
  unaff_w26 = iVar24;
  unaff_w21 = iVar28;
  if (unaff_w26 == unaff_w19) goto LAB_033f9bcc;
  iVar24 = iVar28;
  if (iVar28 == unaff_w20) goto LAB_033f9bcc;
  do {
    iVar24 = iVar24 + -1;
    iVar27 = unaff_w26;
    if (iVar24 <= iStack0000000000000090) break;
    if (in_stack_00000098 == 0) goto LAB_033fae50;
    uVar14 = FUN_03409f80(in_stack_00000098,iVar24,0);
    cVar8 = FUN_033f7f6c(in_stack_00000088,uVar14);
  } while (cVar8 == '\x01');
  do {
    iVar27 = iVar27 + -1;
    if (iVar27 <= unaff_w27) break;
    uVar14 = FUN_03409f80(unaff_x22,iVar27,0);
    cVar8 = FUN_033f7f6c(in_stack_00000088,uVar14);
  } while (cVar8 == '\x01');
  iVar1 = iVar27;
  unaff_w21 = iVar24;
  if (iStack0000000000000090 < iVar24) {
    if (in_stack_00000098 == 0) goto LAB_033fae50;
    do {
      uVar14 = FUN_03409f80(in_stack_00000098,iVar24,0);
      uVar22 = FUN_033f8b5c(in_stack_00000088,uVar14);
      unaff_w21 = iVar24;
      if ((uVar22 & 1) != 0) break;
      iVar24 = iVar24 + -1;
      unaff_w21 = iStack0000000000000090;
    } while (iStack0000000000000090 < iVar24);
  }
  do {
    iVar24 = unaff_w20;
    iVar2 = unaff_w19;
    iVar3 = unaff_w26;
    iVar4 = iStack0000000000000074;
    uVar21 = uStack0000000000000094;
    if (iVar27 <= unaff_w27) break;
    uVar14 = FUN_03409f80(unaff_x22,iVar27,0);
    uVar22 = FUN_033f8b5c(in_stack_00000088,uVar14);
    iVar1 = iVar27;
    if ((uVar22 & 1) != 0) break;
    iVar27 = iVar27 + -1;
    iVar1 = unaff_w27;
  } while( true );
joined_r0x033f9ef8:
  unaff_w26 = iVar1;
  if (in_stack_00000098 != 0) {
    uVar14 = FUN_03409f80(in_stack_00000098,unaff_w21,0);
    uStack0000000000000070 = FUN_033f86cc(in_stack_00000088,uVar14,unaff_w25);
    uVar14 = FUN_03409f80(unaff_x22,unaff_w26,0);
    uVar15 = FUN_033f86cc(in_stack_00000088,uVar14,unaff_w25);
    uVar16 = FUN_033f87b0(in_stack_00000088,uStack0000000000000070);
    in_stack_00000078 = CONCAT44(uVar16,(undefined4)in_stack_00000078);
    unaff_w27 = iVar3;
    iStack0000000000000074 = iVar4;
    unaff_w20 = iVar24;
    unaff_w19 = iVar2;
    iStack0000000000000090 = iVar28;
    uStack0000000000000094 = uVar21;
    if (uVar16 == 0) {
LAB_033f9f84:
      pbVar30 = (byte *)0x0;
    }
    else {
      if (-1 < *(int *)(in_stack_00000048 + 0x28)) {
        uStack0000000000000070 =
             FUN_033f88d0(in_stack_00000088,*(int *)(in_stack_00000048 + 0x28),uVar16,unaff_w25);
        goto LAB_033f9f84;
      }
      pbVar30 = *(byte **)(in_stack_00000048 + 0x30);
      if (pbVar30 == (byte *)0x0) {
        unaff_w21 = unaff_w21 + 1;
        goto LAB_033f9bcc;
      }
    }
    uVar17 = FUN_033f87b0(in_stack_00000088,uVar15);
    in_stack_00000078 = CONCAT44(uVar16,uVar17);
    if (uVar17 == 0) {
System_Convert__ToInt64:
      pbVar29 = (byte *)0x0;
    }
    else {
      if (-1 < (int)uStack0000000000000068) {
        uVar15 = FUN_033f88d0(in_stack_00000088,uStack0000000000000068,uVar17,unaff_w25);
        goto System_Convert__ToInt64;
      }
      pbVar29 = in_stack_00000038;
      if (in_stack_00000038 == (byte *)0x0) {
        in_stack_00000038 = (byte *)0x0;
        unaff_w26 = unaff_w26 + 1;
        goto LAB_033f9bcc;
      }
    }
    bVar9 = FUN_033f7f6c(in_stack_00000088,uStack0000000000000070);
    bVar10 = FUN_033f7f6c(in_stack_00000088,uVar15);
    if (bVar9 == 6) {
      if (((unaff_w25 >> 0x1d & 1) == 0) && (uVar21 == 5)) {
        iStack000000000000006c = unaff_w21 - iStack0000000000000084;
        if (in_stack_000000b8 != 0) {
          iStack000000000000006c = iStack00000000000000c0 - iStack00000000000000c4;
        }
        uVar16 = FUN_033f8000(in_stack_00000088,uStack0000000000000070);
        if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__);
        }
        iVar24 = FUN_033f60b8(uStack0000000000000070);
        iStack000000000000005c = (uVar16 & 0xff) << (ulong)(iVar24 + 8U & 0x1f);
      }
      unaff_w21 = unaff_w21 + 1;
      *(uint *)(in_stack_00000048 + 0x28) = uStack0000000000000070;
      if (bVar10 == 6) goto LAB_033fa12c;
    }
    else {
      if (bVar10 != 6) {
        if (uVar16 == 0) {
          lVar23 = FUN_033f823c(in_stack_00000088,in_stack_00000098,unaff_w21,iVar24);
          if (pbVar30 == (byte *)0x0) {
            if (lVar23 == 0) goto LAB_033fa2f0;
            if (*(long *)(lVar23 + 0x18) == 0) goto LAB_033fae50;
            lVar26 = *(long *)(lVar23 + 0x28);
            iVar27 = *(int *)(*(long *)(lVar23 + 0x18) + 0x18);
            if (lVar26 == 0) {
              if (in_stack_000000b8 == 0) {
                in_stack_000000b8 = in_stack_00000098;
                thunk_FUN_01f51358(&stack0x000000b8,in_stack_00000098);
                iStack00000000000000c4 = iStack0000000000000084;
                if (*(long *)(lVar23 + 0x18) != 0) {
                  iStack00000000000000c0 = unaff_w21 + *(int *)(*(long *)(lVar23 + 0x18) + 0x18);
                  in_stack_00000098 = *(long *)(lVar23 + 0x20);
                  iStack00000000000000c8 = iVar24;
                  iStack00000000000000cc = iVar28;
                  if (in_stack_00000098 != 0) {
                    iStack0000000000000090 = 0;
                    in_stack_00000078 = (ulong)uVar17;
                    iStack0000000000000084 = 0;
                    unaff_w20 = *(int *)(in_stack_00000098 + 0x10);
                    unaff_w21 = 0;
                    goto LAB_033f9bcc;
                  }
                }
                goto LAB_033fae50;
              }
              bVar7 = false;
              pbVar30 = (byte *)0x0;
            }
            else {
              pbVar30 = *(byte **)(in_stack_00000048 + 0x18);
              uVar22 = 0;
              while ((long)uVar22 < (long)(int)*(uint *)(lVar26 + 0x18)) {
                if (*(uint *)(lVar26 + 0x18) <= uVar22) goto LAB_033fae54;
                pbVar30[uVar22] = *(byte *)(lVar26 + uVar22 + 0x20);
                lVar26 = *(long *)(lVar23 + 0x28);
                uVar22 = uVar22 + 1;
                if (lVar26 == 0) goto LAB_033fae50;
              }
              bVar7 = false;
              *(undefined4 *)(in_stack_00000048 + 0x28) = 0xffffffff;
              *(byte **)(in_stack_00000048 + 0x30) = pbVar30;
            }
          }
          else {
            bVar7 = false;
            iVar27 = 1;
          }
        }
        else {
          if (pbVar30 == (byte *)0x0) {
LAB_033fa2f0:
            pbVar30 = *(byte **)(in_stack_00000048 + 0x18);
            *pbVar30 = bVar9;
            bVar11 = FUN_033f8000(in_stack_00000088,uStack0000000000000070);
            pbVar30[1] = bVar11;
            if (1 < uVar21 && (in_stack_00000030 & 0x100000000) == 0) {
              bVar11 = FUN_033f8094(in_stack_00000088,uStack0000000000000070,uVar16);
              pbVar30[2] = bVar11;
            }
            if (uVar21 < 3) {
LAB_033fa37c:
              bVar7 = false;
            }
            else {
              if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ +
                          0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              bVar11 = FUN_033f60b8(uStack0000000000000070);
              pbVar30[3] = bVar11;
              if (uVar21 < 4) goto LAB_033fa37c;
              if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ +
                          0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              if ((uStack0000000000000070 & 0xffff) < 0x3041) {
LAB_033fa89c:
                bVar7 = false;
              }
              else if ((uStack0000000000000070 + 0x9a & 0xffff) < 0x38) {
                bVar7 = true;
              }
              else {
                uVar18 = uStack0000000000000070 >> 8 & 0xff;
                if (0x32 < uVar18) goto LAB_033fa89c;
                if ((uStack0000000000000070 & 0xffff) < 0x309d) {
                  bVar7 = (uStack0000000000000070 & 0xffff) < 0x3099;
                }
                else if (uVar18 < 0x31) {
                  bVar7 = (uStack0000000000000070 & 0xffff) != 0x30fb;
                }
                else {
                  bVar7 = (uStack0000000000000070 - 0x32d0 & 0xffff) < 0x2f;
                }
              }
            }
            if (1 < bVar9) {
              *(uint *)(in_stack_00000048 + 0x28) = uStack0000000000000070;
            }
          }
          else {
            bVar7 = false;
          }
          iVar27 = 1;
        }
        if (uVar17 == 0) {
          lVar23 = FUN_033f823c(in_stack_00000088,unaff_x22,unaff_w26,iVar2);
          if (pbVar29 != (byte *)0x0) goto LAB_033fa454;
          if (lVar23 == 0) goto LAB_033fa3b0;
          if (*(long *)(lVar23 + 0x18) == 0) goto LAB_033fae50;
          lVar26 = *(long *)(lVar23 + 0x28);
          iVar28 = unaff_w26 + *(int *)(*(long *)(lVar23 + 0x18) + 0x18);
          if (lVar26 == 0) {
            if (in_stack_000000a0 == 0) {
              in_stack_000000a0 = unaff_x22;
              thunk_FUN_01f51358(&stack0x000000a0,unaff_x22);
              iStack00000000000000ac = iStack0000000000000080;
              if (*(long *)(lVar23 + 0x18) != 0) {
                iStack00000000000000a8 = unaff_w26 + *(int *)(*(long *)(lVar23 + 0x18) + 0x18);
                unaff_x22 = *(long *)(lVar23 + 0x20);
                iStack00000000000000b0 = iVar2;
                iStack00000000000000b4 = iVar3;
                if (unaff_x22 != 0) {
                  in_stack_00000078 = (ulong)uVar16 << 0x20;
                  iStack0000000000000080 = 0;
                  unaff_w26 = 0;
                  unaff_w19 = *(int *)(unaff_x22 + 0x10);
                  unaff_w27 = 0;
                  goto LAB_033f9bcc;
                }
              }
              goto LAB_033fae50;
            }
            bVar6 = false;
            pbVar29 = (byte *)0x0;
          }
          else {
            pbVar29 = *(byte **)(in_stack_00000048 + 0x20);
            uVar22 = 0;
            while ((long)uVar22 < (long)(int)*(uint *)(lVar26 + 0x18)) {
              if (*(uint *)(lVar26 + 0x18) <= uVar22) {
LAB_033fae54:
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              pbVar29[uVar22] = *(byte *)(lVar26 + uVar22 + 0x20);
              lVar26 = *(long *)(lVar23 + 0x28);
              uVar22 = uVar22 + 1;
              if (lVar26 == 0) goto LAB_033fae50;
            }
            uStack0000000000000068 = 0xffffffff;
            bVar6 = false;
            in_stack_00000038 = pbVar29;
          }
        }
        else if (pbVar29 == (byte *)0x0) {
LAB_033fa3b0:
          pbVar29 = *(byte **)(in_stack_00000048 + 0x20);
          *pbVar29 = bVar10;
          bVar9 = FUN_033f8000(in_stack_00000088,uVar15);
          pbVar29[1] = bVar9;
          if (1 < uVar21 && (in_stack_00000030 & 0x100000000) == 0) {
            bVar9 = FUN_033f8094(in_stack_00000088,uVar15,uVar17);
            pbVar29[2] = bVar9;
          }
          puVar5 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
          if (uVar21 < 3) {
LAB_033fa4a4:
            bVar6 = false;
          }
          else {
            if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ +
                        0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            bVar9 = FUN_033f60b8(uVar15);
            pbVar29[3] = bVar9;
            if (uVar21 < 4) goto LAB_033fa4a4;
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            if ((uVar15 & 0xffff) < 0x3041) {
LAB_033fa8a8:
              bVar6 = false;
            }
            else if ((uVar15 + 0x9a & 0xffff) < 0x38) {
              bVar6 = true;
            }
            else {
              uVar18 = uVar15 >> 8 & 0xff;
              if (0x32 < uVar18) goto LAB_033fa8a8;
              if ((uVar15 & 0xffff) < 0x309d) {
                bVar6 = (uVar15 & 0xffff) < 0x3099;
              }
              else if (uVar18 < 0x31) {
                bVar6 = (uVar15 & 0xffff) != 0x30fb;
              }
              else {
                bVar6 = (uVar15 - 0x32d0 & 0xffff) < 0x2f;
              }
            }
          }
          if (1 < bVar10) {
            uStack0000000000000068 = uVar15;
          }
          iVar28 = unaff_w26 + 1;
        }
        else {
LAB_033fa454:
          bVar6 = false;
          iVar28 = unaff_w26 + 1;
        }
        unaff_w21 = iVar27 + unaff_w21;
        unaff_w26 = iVar28;
        iVar27 = unaff_w21;
        if ((unaff_w25 >> 1 & 1) == 0) {
          for (; iVar27 < iVar24; iVar27 = iVar27 + 1) {
            uVar14 = FUN_03409f80(in_stack_00000098,iVar27,0);
            cVar8 = FUN_033f7f6c(in_stack_00000088,uVar14);
            unaff_w21 = iVar27;
            if (cVar8 != '\x01') break;
            bVar9 = pbVar30[2];
            if (bVar9 == 0) {
              bVar9 = 2;
              pbVar30[2] = 2;
            }
            uVar14 = FUN_03409f80(in_stack_00000098,iVar27,0);
            cVar8 = FUN_033f8094(in_stack_00000088,uVar14,0);
            pbVar30[2] = cVar8 + bVar9;
            unaff_w21 = iVar24;
          }
          if (iVar28 < iVar2) {
            do {
              uVar14 = FUN_03409f80(unaff_x22,iVar28,0);
              cVar8 = FUN_033f7f6c(in_stack_00000088,uVar14);
              unaff_w26 = iVar28;
              if (cVar8 != '\x01') break;
              bVar9 = pbVar29[2];
              pbVar25 = (byte *)0x1;
              if (bVar9 == 0) {
                bVar9 = 2;
                pbVar29[2] = 2;
                pbVar25 = pbVar29;
              }
              uVar14 = FUN_03409f80(pbVar25,unaff_x22,iVar28,0);
              cVar8 = FUN_033f8094(in_stack_00000088,uVar14,0);
              iVar28 = iVar28 + 1;
              pbVar29[2] = cVar8 + bVar9;
              unaff_w26 = iVar2;
            } while (iVar2 != iVar28);
          }
        }
        puVar5 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
        iVar24 = (uint)*pbVar30 - (uint)*pbVar29;
        if (iVar24 == 0) {
          iVar24 = (uint)pbVar30[1] - (uint)pbVar29[1];
        }
        if (iVar24 != 0) {
          return iVar24;
        }
        uStack0000000000000094 = 1;
        if (uVar21 != 1) {
          if (((unaff_w25 >> 1 & 1) == 0) &&
             (iStack0000000000000074 = (uint)pbVar30[2] - (uint)pbVar29[2],
             iStack0000000000000074 != 0)) {
            if ((in_stack_00000018 & 0x100000000) != 0) {
              return -1;
            }
            uStack0000000000000094 = 1;
            if (*(char *)(in_stack_00000088 + 0x5c) != '\0') {
              uStack0000000000000094 = 2;
            }
          }
          else {
            iStack0000000000000074 = iVar4;
            uStack0000000000000094 = 2;
            if (uVar21 != 2) {
              iVar24 = (uint)pbVar30[3] - (uint)pbVar29[3];
              if (iVar24 == 0) {
                uStack0000000000000094 = 3;
                if (uVar21 == 3) goto LAB_033f9bcc;
                if (bVar7 != bVar6) {
                  if ((in_stack_00000018 & 0x100000000) != 0) {
                    return -1;
                  }
                  iStack0000000000000074 = -1;
                  if (bVar7 != false) {
                    iStack0000000000000074 = 1;
                  }
                  uStack0000000000000094 = 3;
                  goto LAB_033f9bcc;
                }
                uStack0000000000000094 = uVar21;
                if (bVar7 == false) goto LAB_033f9bcc;
                if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ +
                            0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar18 = FUN_033f651c(uStack0000000000000070);
                uVar19 = FUN_033f651c(uVar15);
                iVar24 = 1;
                if ((uVar18 & 1) != 0) {
                  iVar24 = -1;
                }
                if (((uVar18 ^ uVar19) & 1) == 0) {
                  iVar24 = 0;
                }
                if (iVar24 == 0) {
                  if (*(int *)(*(long *)
                                Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                              + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  iVar24 = 4;
                  if (uVar16 == 3) {
                    iVar24 = 5;
                  }
                  iVar28 = 3;
                  if (in_stack_00000030._4_4_ == 0 && uVar16 != 0) {
                    iVar28 = iVar24;
                  }
                  iVar27 = -5;
                  if (uVar17 != 3) {
                    iVar27 = -4;
                  }
                  iVar24 = -3;
                  if (in_stack_00000030._4_4_ == 0 && uVar17 != 0) {
                    iVar24 = iVar27;
                  }
                  iVar24 = iVar24 + iVar28;
                }
                if (iVar24 == 0) {
                  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  bVar7 = (uStack0000000000000070 - 0x3041 & 0xffff) < 0x54;
                  iVar24 = -1;
                  if (bVar7) {
                    iVar24 = 1;
                  }
                  if (bVar7 == (uVar15 - 0x3041 & 0xffff) < 0x54) {
                    if (*(int *)(*(long *)
                                  Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                                + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    uVar16 = FUN_033f81c8(uStack0000000000000070 & 0xffff,unaff_w25);
                    uVar15 = FUN_033f81c8(uVar15 & 0xffff,unaff_w25);
                    iVar24 = 1;
                    if ((uVar16 & 1) != 0) {
                      iVar24 = -1;
                    }
                    if ((uVar16 & 1) == (uVar15 & 1)) goto LAB_033f9bcc;
                  }
                }
                uStack0000000000000094 = 3;
              }
              else {
                uStack0000000000000094 = 2;
              }
              iStack0000000000000074 = iVar24;
              if ((in_stack_00000018 & 0x100000000) != 0) {
                return -1;
              }
            }
          }
        }
        goto LAB_033f9bcc;
      }
LAB_033fa12c:
      puVar5 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
      if (((unaff_w25 >> 0x1d & 1) == 0) && (uVar21 == 5)) {
        iStack0000000000000058 = unaff_w26 - iStack0000000000000080;
        if (in_stack_000000a0 != 0) {
          iStack0000000000000058 = iStack00000000000000a8 - iStack00000000000000ac;
        }
        uVar16 = FUN_033f8000(in_stack_00000088,uVar15);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar5);
        }
        iVar24 = FUN_033f60b8(uVar15);
        in_stack_00000060 = (uVar16 & 0xff) << (ulong)(iVar24 + 8U & 0x1f);
      }
      unaff_w26 = unaff_w26 + 1;
      uStack0000000000000068 = uVar15;
    }
    iVar1 = iStack000000000000006c;
    iVar27 = in_stack_00000060;
    iVar28 = iStack000000000000005c;
    iVar24 = iStack0000000000000058;
    iStack0000000000000058 = iVar24;
    iStack000000000000005c = iVar28;
    in_stack_00000060 = iVar27;
    iStack000000000000006c = iVar1;
    if (uVar21 == 5) {
      iStack0000000000000058 = -1;
      bVar7 = iStack000000000000005c != in_stack_00000060;
      iStack000000000000005c = 0;
      in_stack_00000060 = 0;
      iStack000000000000006c = -1;
      if (bVar7) {
        iStack0000000000000058 = iVar24;
        iStack000000000000005c = iVar28;
        in_stack_00000060 = iVar27;
        iStack000000000000006c = iVar1;
        uStack0000000000000094 = 4;
      }
    }
LAB_033f9bcc:
    for (; unaff_w21 < unaff_w20; unaff_w21 = unaff_w21 + 1) {
      if (in_stack_00000098 == 0) goto LAB_033fae50;
      uVar14 = FUN_03409f80(in_stack_00000098,unaff_w21,0);
      if (*(int *)(*(long *)
                    Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)
                            Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                          );
      }
      uVar22 = FUN_033f8ae0(uVar14,unaff_w25);
      if ((uVar22 & 1) == 0) break;
    }
    iVar24 = unaff_w26;
    if (unaff_w26 < unaff_w19) {
      if (unaff_x22 == 0) goto LAB_033fae50;
      bVar7 = true;
      do {
        uVar14 = FUN_03409f80(unaff_x22,unaff_w26,0);
        if (*(int *)(*(long *)
                      Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                    + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)
                              Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                            );
        }
        uVar22 = FUN_033f8ae0(uVar14,unaff_w25);
        if ((uVar22 & 1) == 0) {
          if (unaff_w20 <= unaff_w21) goto LAB_033f9d68;
          iVar24 = unaff_w26;
          if (!bVar7) goto LAB_033f9ca0;
          iVar24 = unaff_w20;
          iVar28 = iStack0000000000000090;
          iVar2 = unaff_w19;
          iVar1 = unaff_w26;
          iVar3 = unaff_w27;
          iVar4 = iStack0000000000000074;
          uVar21 = uStack0000000000000094;
          if ((unaff_w21 <= iStack0000000000000090) || (unaff_w26 <= unaff_w27))
          goto joined_r0x033f9ef8;
          iVar28 = unaff_w21;
          iVar24 = unaff_w26;
          if (unaff_w19 <= unaff_w26) goto LAB_033f9db8;
          if (in_stack_00000098 == 0) goto LAB_033fae50;
          unaff_w23 = 0;
          goto code_r0x033f9d08;
        }
        unaff_w26 = unaff_w26 + 1;
        bVar7 = unaff_w26 < unaff_w19;
        iVar24 = unaff_w19;
      } while (unaff_w19 != unaff_w26);
    }
    unaff_w26 = iVar24;
    if (unaff_w21 < unaff_w20) {
LAB_033f9ca0:
      unaff_w27 = iStack00000000000000b4;
      iVar28 = iStack00000000000000b0;
      unaff_w26 = iStack00000000000000a8;
      lVar23 = in_stack_000000a0;
      if (in_stack_000000a0 != 0) {
        iStack0000000000000080 = iStack00000000000000ac;
        in_stack_000000a0 = 0;
        thunk_FUN_01f51358(&stack0x000000a0,0);
        unaff_x22 = lVar23;
        unaff_w19 = iVar28;
        goto LAB_033f9bcc;
      }
    }
    else {
LAB_033f9d68:
      iVar27 = iStack00000000000000c8;
      iVar28 = iStack00000000000000c0;
      lVar23 = in_stack_000000b8;
      iVar24 = unaff_w26;
      if (in_stack_000000b8 != 0) {
        in_stack_000000b8 = 0;
        iStack0000000000000084 = iStack00000000000000c4;
        iStack0000000000000090 = iStack00000000000000cc;
        thunk_FUN_01f51358(&stack0x000000b8,0);
        in_stack_00000098 = lVar23;
        unaff_w20 = iVar27;
        unaff_w21 = iVar28;
        goto LAB_033f9bcc;
      }
    }
    puVar5 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
    if ((uStack0000000000000094 < 3) ||
       (iStack0000000000000074 == 0 || (in_stack_00000030 & 0x100000000) != 0)) goto LAB_033facd8;
    if ((unaff_w19 <= iVar24) || (unaff_w20 <= unaff_w21)) goto LAB_033fadd4;
    if (in_stack_00000098 == 0) goto LAB_033fae50;
    goto LAB_033fabb8;
  }
  goto LAB_033fae50;
LAB_033facd8:
  if ((uStack0000000000000094 == 1) && (iStack0000000000000074 != 0)) {
    if (unaff_w21 < unaff_w20) {
      iVar28 = unaff_w21;
      if (in_stack_00000098 == 0) goto LAB_033fae50;
      do {
        uVar14 = FUN_03409f80(in_stack_00000098,iVar28,0);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar5);
        }
        uVar22 = FUN_033f6274(uVar14);
        unaff_w21 = iVar28;
      } while (((uVar22 & 1) != 0) &&
              (iVar28 = iVar28 + 1, unaff_w21 = unaff_w20, unaff_w20 != iVar28));
    }
    if (iVar24 < unaff_w19) {
      iVar28 = iVar24;
      if (unaff_x22 == 0) {
LAB_033fae50:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        uVar14 = FUN_03409f80(unaff_x22,iVar28,0);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar5);
        }
        uVar22 = FUN_033f6274(uVar14);
        iVar24 = iVar28;
      } while (((uVar22 & 1) != 0) && (iVar28 = iVar28 + 1, iVar24 = unaff_w19, unaff_w19 != iVar28)
              );
    }
  }
  if (iStack0000000000000074 != 0) goto LAB_033fadd4;
  goto LAB_033fad8c;
  while( true ) {
    iStack0000000000000074 = 0;
    in_stack_00000078 = 0;
    if (unaff_w20 <= unaff_w21) break;
LAB_033fabb8:
    uVar14 = FUN_03409f80(in_stack_00000098,unaff_w21,0);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar5);
    }
    uVar22 = FUN_033f6274(uVar14);
    if ((uVar22 & 1) == 0) goto LAB_033facd8;
    if (unaff_x22 == 0) goto LAB_033fae50;
    uVar14 = FUN_03409f80(unaff_x22,iVar24,0);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar5);
    }
    uVar22 = FUN_033f6274(uVar14);
    if ((uVar22 & 1) == 0) goto LAB_033facd8;
    uVar14 = FUN_03409f80(in_stack_00000098,unaff_w21,0);
    uVar20 = FUN_033f86cc(in_stack_00000088,uVar14,unaff_w25);
    uVar21 = FUN_033f8094(in_stack_00000088,uVar20,in_stack_00000078._4_4_);
    uVar14 = FUN_03409f80(unaff_x22,iVar24,0);
    uVar20 = FUN_033f86cc(in_stack_00000088,uVar14,unaff_w25);
    uVar15 = FUN_033f8094(in_stack_00000088,uVar20,in_stack_00000078 & 0xffffffff);
    iStack0000000000000074 = (uVar21 & 0xff) - (uVar15 & 0xff);
    if (iStack0000000000000074 != 0) goto LAB_033facd8;
    iVar24 = iVar24 + 1;
    unaff_w21 = unaff_w21 + 1;
    if (unaff_w19 <= iVar24) break;
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
        if (iVar24 == unaff_w19) {
          *in_stack_00000010 = 1;
        }
        if (unaff_w21 == unaff_w20) {
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
  if (unaff_w21 == unaff_w20) {
    if (iVar24 != unaff_w19) {
      iStack0000000000000074 = -1;
    }
  }
  else {
    iStack0000000000000074 = 1;
  }
  return iStack0000000000000074;
}


