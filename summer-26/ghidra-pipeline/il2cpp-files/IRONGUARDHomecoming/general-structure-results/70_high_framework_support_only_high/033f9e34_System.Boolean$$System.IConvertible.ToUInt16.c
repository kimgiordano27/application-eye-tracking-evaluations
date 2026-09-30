/*
FUNCTION_NAME: System.Boolean$$System.IConvertible.ToUInt16
ENTRY_POINT: 033f9e34
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


int System_Boolean__System_IConvertible_ToUInt16(long param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  short sVar10;
  short sVar11;
  undefined2 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined4 uVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  byte *pbVar22;
  long lVar23;
  int iVar24;
  uint unaff_w19;
  int unaff_w20;
  int unaff_w21;
  int iVar25;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  byte *pbVar26;
  uint unaff_w25;
  int iVar27;
  ulong unaff_x26;
  uint unaff_w27;
  uint uVar28;
  int unaff_w28;
  byte *pbVar29;
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
  uint uStack00000000000000a8;
  int iStack00000000000000ac;
  uint uStack00000000000000b0;
  uint uStack00000000000000b4;
  long in_stack_000000b8;
  int iStack00000000000000c0;
  int iStack00000000000000c4;
  int iStack00000000000000c8;
  int iStack00000000000000cc;
  
code_r0x033f9e34:
  uVar12 = FUN_03409f80(param_1,param_2,0);
  cVar6 = FUN_033f7f6c(in_stack_00000088,uVar12);
  uVar16 = (uint)unaff_x24;
  param_1 = unaff_x22;
  param_2 = unaff_x24;
  if (cVar6 == '\x01') goto LAB_033f9e20;
LAB_033f9e58:
  iVar25 = unaff_w28;
  if (iStack0000000000000090 < unaff_w28) {
    if (unaff_x23 == 0) goto LAB_033fae50;
    do {
      uVar12 = FUN_03409f80(unaff_x23,unaff_w28,0);
      uVar20 = FUN_033f8b5c(in_stack_00000088,uVar12);
      iVar25 = unaff_w28;
      if ((uVar20 & 1) != 0) break;
      unaff_w28 = unaff_w28 + -1;
      iVar25 = iStack0000000000000090;
    } while (iStack0000000000000090 < unaff_w28);
  }
  uVar19 = (uint)unaff_x26;
  iVar17 = unaff_w20;
  uVar16 = unaff_w19;
  iVar1 = iStack0000000000000074;
  uVar2 = uStack0000000000000094;
  if ((int)unaff_w27 < (int)param_2) {
    do {
      uVar12 = FUN_03409f80(param_1,param_2 & 0xffffffff,0);
      uVar20 = FUN_033f8b5c(in_stack_00000088,uVar12);
      if ((uVar20 & 1) != 0) goto LAB_033f9ee0;
      uVar13 = (int)param_2 - 1;
      param_2 = (ulong)uVar13;
    } while ((int)unaff_w27 < (int)uVar13);
    unaff_x26 = (ulong)unaff_w27;
  }
  else {
LAB_033f9ee0:
    unaff_x26 = param_2 & 0xffffffff;
  }
joined_r0x033f9ef8:
  if (unaff_x23 != 0) {
    uVar12 = FUN_03409f80(unaff_x23,iVar25,0);
    uStack0000000000000070 = FUN_033f86cc(in_stack_00000088,uVar12,unaff_w25);
    uVar12 = FUN_03409f80(param_1,unaff_x26,0);
    uVar13 = FUN_033f86cc(in_stack_00000088,uVar12,unaff_w25);
    uVar14 = FUN_033f87b0(in_stack_00000088,uStack0000000000000070);
    in_stack_00000078 = CONCAT44(uVar14,(undefined4)in_stack_00000078);
    unaff_w27 = uVar19;
    iStack0000000000000074 = iVar1;
    unaff_w20 = iVar17;
    unaff_w19 = uVar16;
    iStack0000000000000090 = unaff_w21;
    uStack0000000000000094 = uVar2;
    if (uVar14 == 0) {
LAB_033f9f84:
      pbVar29 = (byte *)0x0;
    }
    else {
      if (-1 < *(int *)(in_stack_00000048 + 0x28)) {
        uStack0000000000000070 =
             FUN_033f88d0(in_stack_00000088,*(int *)(in_stack_00000048 + 0x28),uVar14,unaff_w25);
        goto LAB_033f9f84;
      }
      pbVar29 = *(byte **)(in_stack_00000048 + 0x30);
      if (pbVar29 == (byte *)0x0) {
        iVar25 = iVar25 + 1;
        goto LAB_033f9bcc;
      }
    }
    uVar15 = FUN_033f87b0(in_stack_00000088,uVar13);
    in_stack_00000078 = CONCAT44(uVar14,uVar15);
    iVar27 = (int)unaff_x26;
    unaff_x23 = in_stack_00000098;
    if (uVar15 == 0) {
System_Convert__ToInt64:
      pbVar26 = (byte *)0x0;
    }
    else {
      if (-1 < (int)uStack0000000000000068) {
        uVar13 = FUN_033f88d0(in_stack_00000088,uStack0000000000000068,uVar15,unaff_w25);
        goto System_Convert__ToInt64;
      }
      pbVar26 = in_stack_00000038;
      if (in_stack_00000038 == (byte *)0x0) {
        in_stack_00000038 = (byte *)0x0;
        unaff_x26 = (ulong)(iVar27 + 1);
        goto LAB_033f9bcc;
      }
    }
    bVar7 = FUN_033f7f6c(in_stack_00000088,uStack0000000000000070);
    bVar8 = FUN_033f7f6c(in_stack_00000088,uVar13);
    if (bVar7 == 6) {
      if (((unaff_w25 >> 0x1d & 1) == 0) && (uVar2 == 5)) {
        iStack000000000000006c = iVar25 - iStack0000000000000084;
        if (in_stack_000000b8 != 0) {
          iStack000000000000006c = iStack00000000000000c0 - iStack00000000000000c4;
        }
        uVar16 = FUN_033f8000(in_stack_00000088,uStack0000000000000070);
        if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__);
        }
        iVar17 = FUN_033f60b8(uStack0000000000000070);
        iStack000000000000005c = (uVar16 & 0xff) << (ulong)(iVar17 + 8U & 0x1f);
      }
      iVar25 = iVar25 + 1;
      *(uint *)(in_stack_00000048 + 0x28) = uStack0000000000000070;
      if (bVar8 == 6) goto LAB_033fa12c;
    }
    else {
      if (bVar8 != 6) {
        if (uVar14 == 0) {
          lVar21 = FUN_033f823c(in_stack_00000088,in_stack_00000098,iVar25,iVar17);
          if (pbVar29 == (byte *)0x0) {
            if (lVar21 == 0) goto LAB_033fa2f0;
            if (*(long *)(lVar21 + 0x18) == 0) goto LAB_033fae50;
            lVar23 = *(long *)(lVar21 + 0x28);
            iVar24 = *(int *)(*(long *)(lVar21 + 0x18) + 0x18);
            if (lVar23 == 0) {
              if (in_stack_000000b8 == 0) {
                in_stack_000000b8 = in_stack_00000098;
                thunk_FUN_01f51358(&stack0x000000b8,in_stack_00000098);
                iStack00000000000000c4 = iStack0000000000000084;
                if (*(long *)(lVar21 + 0x18) != 0) {
                  iStack00000000000000c0 = iVar25 + *(int *)(*(long *)(lVar21 + 0x18) + 0x18);
                  unaff_x23 = *(long *)(lVar21 + 0x20);
                  iStack00000000000000c8 = iVar17;
                  iStack00000000000000cc = unaff_w21;
                  if (unaff_x23 != 0) {
                    iStack0000000000000090 = 0;
                    in_stack_00000078 = (ulong)uVar15;
                    iStack0000000000000084 = 0;
                    unaff_w20 = *(int *)(unaff_x23 + 0x10);
                    iVar25 = 0;
                    goto LAB_033f9bcc;
                  }
                }
                goto LAB_033fae50;
              }
              bVar5 = false;
              pbVar29 = (byte *)0x0;
            }
            else {
              pbVar29 = *(byte **)(in_stack_00000048 + 0x18);
              uVar20 = 0;
              while ((long)uVar20 < (long)(int)*(uint *)(lVar23 + 0x18)) {
                if (*(uint *)(lVar23 + 0x18) <= uVar20) goto LAB_033fae54;
                pbVar29[uVar20] = *(byte *)(lVar23 + uVar20 + 0x20);
                lVar23 = *(long *)(lVar21 + 0x28);
                uVar20 = uVar20 + 1;
                if (lVar23 == 0) goto LAB_033fae50;
              }
              bVar5 = false;
              *(undefined4 *)(in_stack_00000048 + 0x28) = 0xffffffff;
              *(byte **)(in_stack_00000048 + 0x30) = pbVar29;
            }
          }
          else {
            bVar5 = false;
            iVar24 = 1;
          }
        }
        else {
          if (pbVar29 == (byte *)0x0) {
LAB_033fa2f0:
            pbVar29 = *(byte **)(in_stack_00000048 + 0x18);
            *pbVar29 = bVar7;
            bVar9 = FUN_033f8000(in_stack_00000088,uStack0000000000000070);
            pbVar29[1] = bVar9;
            if (1 < uVar2 && (in_stack_00000030 & 0x100000000) == 0) {
              bVar9 = FUN_033f8094(in_stack_00000088,uStack0000000000000070,uVar14);
              pbVar29[2] = bVar9;
            }
            if (uVar2 < 3) {
LAB_033fa37c:
              bVar5 = false;
            }
            else {
              if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ +
                          0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              bVar9 = FUN_033f60b8(uStack0000000000000070);
              pbVar29[3] = bVar9;
              if (uVar2 < 4) goto LAB_033fa37c;
              if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ +
                          0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              if ((uStack0000000000000070 & 0xffff) < 0x3041) {
LAB_033fa89c:
                bVar5 = false;
              }
              else if ((uStack0000000000000070 + 0x9a & 0xffff) < 0x38) {
                bVar5 = true;
              }
              else {
                uVar28 = uStack0000000000000070 >> 8 & 0xff;
                if (0x32 < uVar28) goto LAB_033fa89c;
                if ((uStack0000000000000070 & 0xffff) < 0x309d) {
                  bVar5 = (uStack0000000000000070 & 0xffff) < 0x3099;
                }
                else if (uVar28 < 0x31) {
                  bVar5 = (uStack0000000000000070 & 0xffff) != 0x30fb;
                }
                else {
                  bVar5 = (uStack0000000000000070 - 0x32d0 & 0xffff) < 0x2f;
                }
              }
            }
            if (1 < bVar7) {
              *(uint *)(in_stack_00000048 + 0x28) = uStack0000000000000070;
            }
          }
          else {
            bVar5 = false;
          }
          iVar24 = 1;
        }
        if (uVar15 == 0) {
          lVar21 = FUN_033f823c(in_stack_00000088,param_1,unaff_x26,uVar16);
          if (pbVar26 != (byte *)0x0) goto LAB_033fa454;
          if (lVar21 == 0) goto LAB_033fa3b0;
          if (*(long *)(lVar21 + 0x18) == 0) goto LAB_033fae50;
          lVar23 = *(long *)(lVar21 + 0x28);
          uVar28 = iVar27 + *(int *)(*(long *)(lVar21 + 0x18) + 0x18);
          if (lVar23 == 0) {
            if (in_stack_000000a0 == 0) {
              in_stack_000000a0 = param_1;
              thunk_FUN_01f51358(&stack0x000000a0,param_1);
              iStack00000000000000ac = iStack0000000000000080;
              if (*(long *)(lVar21 + 0x18) != 0) {
                uStack00000000000000a8 = iVar27 + *(int *)(*(long *)(lVar21 + 0x18) + 0x18);
                param_1 = *(long *)(lVar21 + 0x20);
                uStack00000000000000b0 = uVar16;
                uStack00000000000000b4 = uVar19;
                if (param_1 != 0) {
                  in_stack_00000078 = (ulong)uVar14 << 0x20;
                  iStack0000000000000080 = 0;
                  unaff_x26 = 0;
                  unaff_w19 = *(uint *)(param_1 + 0x10);
                  unaff_w27 = 0;
                  goto LAB_033f9bcc;
                }
              }
              goto LAB_033fae50;
            }
            bVar4 = false;
            pbVar26 = (byte *)0x0;
          }
          else {
            pbVar26 = *(byte **)(in_stack_00000048 + 0x20);
            uVar20 = 0;
            while ((long)uVar20 < (long)(int)*(uint *)(lVar23 + 0x18)) {
              if (*(uint *)(lVar23 + 0x18) <= uVar20) {
LAB_033fae54:
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              pbVar26[uVar20] = *(byte *)(lVar23 + uVar20 + 0x20);
              lVar23 = *(long *)(lVar21 + 0x28);
              uVar20 = uVar20 + 1;
              if (lVar23 == 0) goto LAB_033fae50;
            }
            uStack0000000000000068 = 0xffffffff;
            bVar4 = false;
            in_stack_00000038 = pbVar26;
          }
        }
        else if (pbVar26 == (byte *)0x0) {
LAB_033fa3b0:
          pbVar26 = *(byte **)(in_stack_00000048 + 0x20);
          *pbVar26 = bVar8;
          bVar7 = FUN_033f8000(in_stack_00000088,uVar13);
          pbVar26[1] = bVar7;
          if (1 < uVar2 && (in_stack_00000030 & 0x100000000) == 0) {
            bVar7 = FUN_033f8094(in_stack_00000088,uVar13,uVar15);
            pbVar26[2] = bVar7;
          }
          puVar3 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
          if (uVar2 < 3) {
LAB_033fa4a4:
            bVar4 = false;
          }
          else {
            if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ +
                        0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            bVar7 = FUN_033f60b8(uVar13);
            pbVar26[3] = bVar7;
            if (uVar2 < 4) goto LAB_033fa4a4;
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            if ((uVar13 & 0xffff) < 0x3041) {
LAB_033fa8a8:
              bVar4 = false;
            }
            else if ((uVar13 + 0x9a & 0xffff) < 0x38) {
              bVar4 = true;
            }
            else {
              uVar19 = uVar13 >> 8 & 0xff;
              if (0x32 < uVar19) goto LAB_033fa8a8;
              if ((uVar13 & 0xffff) < 0x309d) {
                bVar4 = (uVar13 & 0xffff) < 0x3099;
              }
              else if (uVar19 < 0x31) {
                bVar4 = (uVar13 & 0xffff) != 0x30fb;
              }
              else {
                bVar4 = (uVar13 - 0x32d0 & 0xffff) < 0x2f;
              }
            }
          }
          if (1 < bVar8) {
            uStack0000000000000068 = uVar13;
          }
          uVar28 = iVar27 + 1;
        }
        else {
LAB_033fa454:
          bVar4 = false;
          uVar28 = iVar27 + 1;
        }
        iVar25 = iVar24 + iVar25;
        uVar19 = uVar28;
        iVar27 = iVar25;
        if ((unaff_w25 >> 1 & 1) == 0) {
          for (; iVar27 < iVar17; iVar27 = iVar27 + 1) {
            uVar12 = FUN_03409f80(in_stack_00000098,iVar27,0);
            cVar6 = FUN_033f7f6c(in_stack_00000088,uVar12);
            iVar25 = iVar27;
            if (cVar6 != '\x01') break;
            bVar7 = pbVar29[2];
            if (bVar7 == 0) {
              bVar7 = 2;
              pbVar29[2] = 2;
            }
            uVar12 = FUN_03409f80(in_stack_00000098,iVar27,0);
            cVar6 = FUN_033f8094(in_stack_00000088,uVar12,0);
            pbVar29[2] = cVar6 + bVar7;
            iVar25 = iVar17;
          }
          if ((int)uVar28 < (int)uVar16) {
            do {
              uVar12 = FUN_03409f80(param_1,uVar28,0);
              cVar6 = FUN_033f7f6c(in_stack_00000088,uVar12);
              uVar19 = uVar28;
              if (cVar6 != '\x01') break;
              bVar7 = pbVar26[2];
              pbVar22 = (byte *)0x1;
              if (bVar7 == 0) {
                bVar7 = 2;
                pbVar26[2] = 2;
                pbVar22 = pbVar26;
              }
              uVar12 = FUN_03409f80(pbVar22,param_1,uVar28,0);
              cVar6 = FUN_033f8094(in_stack_00000088,uVar12,0);
              uVar28 = uVar28 + 1;
              pbVar26[2] = cVar6 + bVar7;
              uVar19 = uVar16;
            } while (uVar16 != uVar28);
          }
        }
        puVar3 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
        unaff_x26 = (ulong)uVar19;
        iVar17 = (uint)*pbVar29 - (uint)*pbVar26;
        if (iVar17 == 0) {
          iVar17 = (uint)pbVar29[1] - (uint)pbVar26[1];
        }
        if (iVar17 != 0) {
          return iVar17;
        }
        uStack0000000000000094 = 1;
        if (uVar2 != 1) {
          if (((unaff_w25 >> 1 & 1) == 0) &&
             (iStack0000000000000074 = (uint)pbVar29[2] - (uint)pbVar26[2],
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
            iStack0000000000000074 = iVar1;
            uStack0000000000000094 = 2;
            if (uVar2 != 2) {
              iVar17 = (uint)pbVar29[3] - (uint)pbVar26[3];
              if (iVar17 == 0) {
                uStack0000000000000094 = 3;
                if (uVar2 == 3) goto LAB_033f9bcc;
                if (bVar5 != bVar4) {
                  if ((in_stack_00000018 & 0x100000000) != 0) {
                    return -1;
                  }
                  iStack0000000000000074 = -1;
                  if (bVar5 != false) {
                    iStack0000000000000074 = 1;
                  }
                  uStack0000000000000094 = 3;
                  goto LAB_033f9bcc;
                }
                uStack0000000000000094 = uVar2;
                if (bVar5 == false) goto LAB_033f9bcc;
                if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ +
                            0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar16 = FUN_033f651c(uStack0000000000000070);
                uVar19 = FUN_033f651c(uVar13);
                iVar17 = 1;
                if ((uVar16 & 1) != 0) {
                  iVar17 = -1;
                }
                if (((uVar16 ^ uVar19) & 1) == 0) {
                  iVar17 = 0;
                }
                if (iVar17 == 0) {
                  if (*(int *)(*(long *)
                                Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                              + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  iVar17 = 4;
                  if (uVar14 == 3) {
                    iVar17 = 5;
                  }
                  iVar27 = 3;
                  if (in_stack_00000030._4_4_ == 0 && uVar14 != 0) {
                    iVar27 = iVar17;
                  }
                  iVar24 = -5;
                  if (uVar15 != 3) {
                    iVar24 = -4;
                  }
                  iVar17 = -3;
                  if (in_stack_00000030._4_4_ == 0 && uVar15 != 0) {
                    iVar17 = iVar24;
                  }
                  iVar17 = iVar17 + iVar27;
                }
                if (iVar17 == 0) {
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  bVar5 = (uStack0000000000000070 - 0x3041 & 0xffff) < 0x54;
                  iVar17 = -1;
                  if (bVar5) {
                    iVar17 = 1;
                  }
                  if (bVar5 == (uVar13 - 0x3041 & 0xffff) < 0x54) {
                    if (*(int *)(*(long *)
                                  Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                                + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    uVar16 = FUN_033f81c8(uStack0000000000000070 & 0xffff,unaff_w25);
                    uVar19 = FUN_033f81c8(uVar13 & 0xffff,unaff_w25);
                    iVar17 = 1;
                    if ((uVar16 & 1) != 0) {
                      iVar17 = -1;
                    }
                    if ((uVar16 & 1) == (uVar19 & 1)) goto LAB_033f9bcc;
                  }
                }
                uStack0000000000000094 = 3;
              }
              else {
                uStack0000000000000094 = 2;
              }
              iStack0000000000000074 = iVar17;
              if ((in_stack_00000018 & 0x100000000) != 0) {
                return -1;
              }
            }
          }
        }
        goto LAB_033f9bcc;
      }
LAB_033fa12c:
      puVar3 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
      if (((unaff_w25 >> 0x1d & 1) == 0) && (uVar2 == 5)) {
        iStack0000000000000058 = iVar27 - iStack0000000000000080;
        if (in_stack_000000a0 != 0) {
          iStack0000000000000058 = uStack00000000000000a8 - iStack00000000000000ac;
        }
        uVar16 = FUN_033f8000(in_stack_00000088,uVar13);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar3);
        }
        iVar17 = FUN_033f60b8(uVar13);
        in_stack_00000060 = (uVar16 & 0xff) << (ulong)(iVar17 + 8U & 0x1f);
      }
      unaff_x26 = (ulong)(iVar27 + 1);
      uStack0000000000000068 = uVar13;
    }
    iVar24 = iStack000000000000006c;
    iVar27 = in_stack_00000060;
    iVar1 = iStack000000000000005c;
    iVar17 = iStack0000000000000058;
    iStack0000000000000058 = iVar17;
    iStack000000000000005c = iVar1;
    in_stack_00000060 = iVar27;
    iStack000000000000006c = iVar24;
    if (uVar2 == 5) {
      iStack0000000000000058 = -1;
      bVar5 = iStack000000000000005c != in_stack_00000060;
      iStack000000000000005c = 0;
      in_stack_00000060 = 0;
      iStack000000000000006c = -1;
      if (bVar5) {
        iStack0000000000000058 = iVar17;
        iStack000000000000005c = iVar1;
        in_stack_00000060 = iVar27;
        iStack000000000000006c = iVar24;
        uStack0000000000000094 = 4;
      }
    }
LAB_033f9bcc:
    for (; iVar25 < unaff_w20; iVar25 = iVar25 + 1) {
      if (unaff_x23 == 0) goto LAB_033fae50;
      uVar12 = FUN_03409f80(unaff_x23,iVar25,0);
      if (*(int *)(*(long *)
                    Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)
                            Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                          );
      }
      uVar20 = FUN_033f8ae0(uVar12,unaff_w25);
      if ((uVar20 & 1) == 0) break;
    }
    if ((int)unaff_x26 < (int)unaff_w19) {
      if (param_1 == 0) goto LAB_033fae50;
      bVar5 = true;
      do {
        uVar12 = FUN_03409f80(param_1,unaff_x26,0);
        if (*(int *)(*(long *)
                      Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                    + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)
                              Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                            );
        }
        uVar20 = FUN_033f8ae0(uVar12,unaff_w25);
        iVar27 = (int)unaff_x26;
        if ((uVar20 & 1) == 0) {
          if (unaff_w20 <= iVar25) goto LAB_033f9d68;
          if (!bVar5) goto LAB_033f9ca0;
          iVar17 = unaff_w20;
          uVar16 = unaff_w19;
          uVar19 = unaff_w27;
          iVar1 = iStack0000000000000074;
          uVar2 = uStack0000000000000094;
          in_stack_00000098 = unaff_x23;
          unaff_w21 = iStack0000000000000090;
          if ((iVar25 <= iStack0000000000000090) || (iVar27 <= (int)unaff_w27))
          goto joined_r0x033f9ef8;
          unaff_w21 = iVar25;
          if ((int)unaff_w19 <= iVar27) goto LAB_033f9db8;
          if (unaff_x23 == 0) goto LAB_033fae50;
          iVar17 = 0;
          goto System_Boolean__System_IConvertible_ToSByte;
        }
        uVar16 = iVar27 + 1;
        unaff_x26 = (ulong)uVar16;
        bVar5 = (int)uVar16 < (int)unaff_w19;
      } while (unaff_w19 != uVar16);
      unaff_x26 = (ulong)unaff_w19;
    }
    if (iVar25 < unaff_w20) {
LAB_033f9ca0:
      unaff_w27 = uStack00000000000000b4;
      uVar16 = uStack00000000000000b0;
      lVar21 = in_stack_000000a0;
      if (in_stack_000000a0 != 0) {
        unaff_x26 = (ulong)uStack00000000000000a8;
        iStack0000000000000080 = iStack00000000000000ac;
        in_stack_000000a0 = 0;
        thunk_FUN_01f51358(&stack0x000000a0,0);
        param_1 = lVar21;
        unaff_w19 = uVar16;
        goto LAB_033f9bcc;
      }
    }
    else {
LAB_033f9d68:
      iVar1 = iStack00000000000000c8;
      iVar17 = iStack00000000000000c0;
      lVar21 = in_stack_000000b8;
      if (in_stack_000000b8 != 0) {
        in_stack_000000b8 = 0;
        iStack0000000000000084 = iStack00000000000000c4;
        iStack0000000000000090 = iStack00000000000000cc;
        thunk_FUN_01f51358(&stack0x000000b8,0);
        unaff_x23 = lVar21;
        unaff_w20 = iVar1;
        iVar25 = iVar17;
        goto LAB_033f9bcc;
      }
    }
    puVar3 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
    uVar16 = (uint)unaff_x26;
    if ((uStack0000000000000094 < 3) ||
       (iStack0000000000000074 == 0 || (in_stack_00000030 & 0x100000000) != 0)) goto LAB_033facd8;
    if (((int)unaff_w19 <= (int)uVar16) || (unaff_w20 <= iVar25)) goto LAB_033fadd4;
    if (unaff_x23 == 0) goto LAB_033fae50;
    goto LAB_033fabb8;
  }
  goto LAB_033fae50;
  while ((iVar17 = iVar17 + 1, (int)(uVar16 + 1) < (int)unaff_w19 && (unaff_w21 + 1 < unaff_w20))) {
System_Boolean__System_IConvertible_ToSByte:
    unaff_w21 = iVar25 + iVar17;
    uVar16 = iVar27 + iVar17;
    sVar10 = FUN_03409f80(unaff_x23,unaff_w21,0);
    sVar11 = FUN_03409f80(param_1,uVar16,0);
    if (sVar10 != sVar11) goto LAB_033f9db4;
  }
  unaff_w21 = iVar25 + iVar17;
  uVar16 = iVar27 + iVar17;
LAB_033f9db4:
  unaff_x26 = (ulong)uVar16;
LAB_033f9db8:
  uVar16 = (uint)unaff_x26;
  iVar25 = unaff_w21;
  if ((uVar16 != unaff_w19) && (unaff_w28 = unaff_w21, unaff_w21 != unaff_w20)) goto LAB_033f9ddc;
  goto LAB_033f9bcc;
  while( true ) {
    if (unaff_x23 == 0) goto LAB_033fae50;
    uVar12 = FUN_03409f80(unaff_x23,unaff_w28,0);
    cVar6 = FUN_033f7f6c(in_stack_00000088,uVar12);
    if (cVar6 != '\x01') break;
LAB_033f9ddc:
    unaff_w28 = unaff_w28 + -1;
    if (unaff_w28 <= iStack0000000000000090) break;
  }
LAB_033f9e20:
  param_2 = (ulong)(uVar16 - 1);
  unaff_x22 = param_1;
  unaff_x24 = param_2;
  if ((int)unaff_w27 < (int)(uVar16 - 1)) goto code_r0x033f9e34;
  goto LAB_033f9e58;
LAB_033facd8:
  uVar16 = (uint)unaff_x26;
  if ((uStack0000000000000094 == 1) && (iStack0000000000000074 != 0)) {
    if (iVar25 < unaff_w20) {
      iVar17 = iVar25;
      if (unaff_x23 == 0) goto LAB_033fae50;
      do {
        uVar12 = FUN_03409f80(unaff_x23,iVar17,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar3);
        }
        uVar20 = FUN_033f6274(uVar12);
        iVar25 = iVar17;
      } while (((uVar20 & 1) != 0) && (iVar17 = iVar17 + 1, iVar25 = unaff_w20, unaff_w20 != iVar17)
              );
    }
    if ((int)uVar16 < (int)unaff_w19) {
      if (param_1 == 0) {
LAB_033fae50:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        uVar12 = FUN_03409f80(param_1,unaff_x26,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar3);
        }
        uVar20 = FUN_033f6274(uVar12);
        uVar16 = (uint)unaff_x26;
      } while (((uVar20 & 1) != 0) &&
              (uVar19 = (uint)unaff_x26 + 1, unaff_x26 = (ulong)uVar19, uVar16 = unaff_w19,
              unaff_w19 != uVar19));
    }
  }
  if (iStack0000000000000074 != 0) goto LAB_033fadd4;
  goto LAB_033fad8c;
  while( true ) {
    iStack0000000000000074 = 0;
    in_stack_00000078 = 0;
    if (unaff_w20 <= iVar25) break;
LAB_033fabb8:
    uVar12 = FUN_03409f80(unaff_x23,iVar25,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar3);
    }
    uVar20 = FUN_033f6274(uVar12);
    if ((uVar20 & 1) == 0) goto LAB_033facd8;
    if (param_1 == 0) goto LAB_033fae50;
    uVar12 = FUN_03409f80(param_1,unaff_x26,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar3);
    }
    uVar20 = FUN_033f6274(uVar12);
    if ((uVar20 & 1) == 0) goto LAB_033facd8;
    uVar12 = FUN_03409f80(unaff_x23,iVar25,0);
    uVar18 = FUN_033f86cc(in_stack_00000088,uVar12,unaff_w25);
    uVar16 = FUN_033f8094(in_stack_00000088,uVar18,in_stack_00000078._4_4_);
    uVar12 = FUN_03409f80(param_1,unaff_x26,0);
    uVar18 = FUN_033f86cc(in_stack_00000088,uVar12,unaff_w25);
    uVar19 = FUN_033f8094(in_stack_00000088,uVar18,in_stack_00000078 & 0xffffffff);
    iStack0000000000000074 = (uVar16 & 0xff) - (uVar19 & 0xff);
    if (iStack0000000000000074 != 0) goto LAB_033facd8;
    uVar16 = (int)unaff_x26 + 1;
    unaff_x26 = (ulong)uVar16;
    iVar25 = iVar25 + 1;
    if ((int)unaff_w19 <= (int)uVar16) break;
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
        if (uVar16 == unaff_w19) {
          *in_stack_00000010 = 1;
        }
        if (iVar25 == unaff_w20) {
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
  if (iVar25 == unaff_w20) {
    if (uVar16 != unaff_w19) {
      iStack0000000000000074 = -1;
    }
  }
  else {
    iStack0000000000000074 = 1;
  }
  return iStack0000000000000074;
}


