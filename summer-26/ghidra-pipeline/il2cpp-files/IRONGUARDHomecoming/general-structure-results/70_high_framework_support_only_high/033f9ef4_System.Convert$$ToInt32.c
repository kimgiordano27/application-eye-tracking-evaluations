/*
FUNCTION_NAME: System.Convert$$ToInt32
ENTRY_POINT: 033f9ef4
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

int System_Convert__ToInt32(void)

{
  undefined *puVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  short sVar8;
  short sVar9;
  undefined2 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  ulong uVar18;
  long lVar19;
  int iVar20;
  int in_w8;
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
  int iVar27;
  long unaff_x23;
  long unaff_x24;
  byte *pbVar28;
  uint unaff_w25;
  int unaff_w26;
  int iVar29;
  byte *pbVar30;
  undefined1 *in_stack_00000010;
  ulong in_stack_00000018;
  undefined1 *in_stack_00000028;
  ulong in_stack_00000030;
  byte *in_stack_00000038;
  long in_stack_00000048;
  int iStack0000000000000058;
  int iStack000000000000005c;
  int iStack0000000000000060;
  int iStack0000000000000064;
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
  
  iVar14 = iStack0000000000000074;
joined_r0x033f9ef8:
  iVar26 = unaff_w26;
  if (unaff_x23 != 0) {
    uVar10 = FUN_03409f80(unaff_x23,unaff_w21,0);
    uStack0000000000000070 = FUN_033f86cc(unaff_x24,uVar10,unaff_w25);
    uVar10 = FUN_03409f80(unaff_x22,iVar26,0);
    uVar11 = FUN_033f86cc(unaff_x24,uVar10,unaff_w25);
    uVar12 = FUN_033f87b0(unaff_x24,uStack0000000000000070);
    in_stack_00000078 = CONCAT44(uVar12,(undefined4)in_stack_00000078);
    iVar29 = iStack0000000000000064;
    iStack0000000000000074 = iVar14;
    iVar25 = unaff_w20;
    iVar24 = unaff_w19;
    iStack0000000000000090 = in_w8;
    uVar15 = uStack0000000000000094;
    if (uVar12 == 0) {
LAB_033f9f84:
      pbVar30 = (byte *)0x0;
    }
    else {
      if (-1 < *(int *)(in_stack_00000048 + 0x28)) {
        uStack0000000000000070 =
             FUN_033f88d0(unaff_x24,*(int *)(in_stack_00000048 + 0x28),uVar12,unaff_w25);
        goto LAB_033f9f84;
      }
      pbVar30 = *(byte **)(in_stack_00000048 + 0x30);
      if (pbVar30 == (byte *)0x0) {
        unaff_w21 = unaff_w21 + 1;
        goto LAB_033f9bcc;
      }
    }
    uVar13 = FUN_033f87b0(unaff_x24,uVar11);
    in_stack_00000078 = CONCAT44(uVar12,uVar13);
    unaff_x23 = in_stack_00000098;
    if (uVar13 == 0) {
System_Convert__ToInt64:
      pbVar28 = (byte *)0x0;
    }
    else {
      if (-1 < (int)uStack0000000000000068) {
        uVar11 = FUN_033f88d0(unaff_x24,uStack0000000000000068,uVar13,unaff_w25);
        goto System_Convert__ToInt64;
      }
      pbVar28 = in_stack_00000038;
      if (in_stack_00000038 == (byte *)0x0) {
        in_stack_00000038 = (byte *)0x0;
        iVar26 = iVar26 + 1;
        goto LAB_033f9bcc;
      }
    }
    bVar5 = FUN_033f7f6c(unaff_x24,uStack0000000000000070);
    bVar6 = FUN_033f7f6c(unaff_x24,uVar11);
    if (bVar5 == 6) {
      if (((unaff_w25 >> 0x1d & 1) == 0) && (uStack0000000000000094 == 5)) {
        iStack000000000000006c = unaff_w21 - iStack0000000000000084;
        if (in_stack_000000b8 != 0) {
          iStack000000000000006c = iStack00000000000000c0 - iStack00000000000000c4;
        }
        uVar12 = FUN_033f8000(unaff_x24,uStack0000000000000070);
        if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__);
        }
        iVar14 = FUN_033f60b8(uStack0000000000000070);
        iStack000000000000005c = (uVar12 & 0xff) << (ulong)(iVar14 + 8U & 0x1f);
      }
      unaff_w21 = unaff_w21 + 1;
      *(uint *)(in_stack_00000048 + 0x28) = uStack0000000000000070;
      if (bVar6 == 6) goto LAB_033fa12c;
    }
    else {
      if (bVar6 != 6) {
        if (uVar12 == 0) {
          lVar19 = FUN_033f823c(unaff_x24,in_stack_00000098,unaff_w21,unaff_w20);
          if (pbVar30 == (byte *)0x0) {
            if (lVar19 == 0) goto LAB_033fa2f0;
            if (*(long *)(lVar19 + 0x18) == 0) goto LAB_033fae50;
            lVar22 = *(long *)(lVar19 + 0x28);
            iVar20 = *(int *)(*(long *)(lVar19 + 0x18) + 0x18);
            if (lVar22 == 0) {
              if (in_stack_000000b8 == 0) {
                in_stack_000000b8 = in_stack_00000098;
                thunk_FUN_01f51358(&stack0x000000b8,in_stack_00000098);
                iStack00000000000000c4 = iStack0000000000000084;
                if (*(long *)(lVar19 + 0x18) != 0) {
                  iStack00000000000000c0 = unaff_w21 + *(int *)(*(long *)(lVar19 + 0x18) + 0x18);
                  unaff_x23 = *(long *)(lVar19 + 0x20);
                  iStack00000000000000c8 = unaff_w20;
                  iStack00000000000000cc = in_w8;
                  if (unaff_x23 != 0) {
                    iStack0000000000000090 = 0;
                    in_stack_00000078 = (ulong)uVar13;
                    iStack0000000000000084 = 0;
                    iVar25 = *(int *)(unaff_x23 + 0x10);
                    unaff_w21 = 0;
                    goto LAB_033f9bcc;
                  }
                }
                goto LAB_033fae50;
              }
              bVar3 = false;
              pbVar30 = (byte *)0x0;
            }
            else {
              pbVar30 = *(byte **)(in_stack_00000048 + 0x18);
              uVar18 = 0;
              while ((long)uVar18 < (long)(int)*(uint *)(lVar22 + 0x18)) {
                if (*(uint *)(lVar22 + 0x18) <= uVar18) goto LAB_033fae54;
                pbVar30[uVar18] = *(byte *)(lVar22 + uVar18 + 0x20);
                lVar22 = *(long *)(lVar19 + 0x28);
                uVar18 = uVar18 + 1;
                if (lVar22 == 0) goto LAB_033fae50;
              }
              bVar3 = false;
              *(undefined4 *)(in_stack_00000048 + 0x28) = 0xffffffff;
              *(byte **)(in_stack_00000048 + 0x30) = pbVar30;
            }
          }
          else {
            bVar3 = false;
            iVar20 = 1;
          }
        }
        else {
          if (pbVar30 == (byte *)0x0) {
LAB_033fa2f0:
            pbVar30 = *(byte **)(in_stack_00000048 + 0x18);
            *pbVar30 = bVar5;
            bVar7 = FUN_033f8000(in_stack_00000088,uStack0000000000000070);
            pbVar30[1] = bVar7;
            if (1 < uStack0000000000000094 && (in_stack_00000030 & 0x100000000) == 0) {
              bVar7 = FUN_033f8094(in_stack_00000088,uStack0000000000000070,uVar12);
              pbVar30[2] = bVar7;
            }
            if (uStack0000000000000094 < 3) {
LAB_033fa37c:
              bVar3 = false;
            }
            else {
              if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ +
                          0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              bVar7 = FUN_033f60b8(uStack0000000000000070);
              pbVar30[3] = bVar7;
              if (uStack0000000000000094 < 4) goto LAB_033fa37c;
              if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ +
                          0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              if ((uStack0000000000000070 & 0xffff) < 0x3041) {
LAB_033fa89c:
                bVar3 = false;
              }
              else if ((uStack0000000000000070 + 0x9a & 0xffff) < 0x38) {
                bVar3 = true;
              }
              else {
                uVar16 = uStack0000000000000070 >> 8 & 0xff;
                if (0x32 < uVar16) goto LAB_033fa89c;
                if ((uStack0000000000000070 & 0xffff) < 0x309d) {
                  bVar3 = (uStack0000000000000070 & 0xffff) < 0x3099;
                }
                else if (uVar16 < 0x31) {
                  bVar3 = (uStack0000000000000070 & 0xffff) != 0x30fb;
                }
                else {
                  bVar3 = (uStack0000000000000070 - 0x32d0 & 0xffff) < 0x2f;
                }
              }
            }
            if (1 < bVar5) {
              *(uint *)(in_stack_00000048 + 0x28) = uStack0000000000000070;
            }
          }
          else {
            bVar3 = false;
          }
          iVar20 = 1;
        }
        if (uVar13 == 0) {
          lVar19 = FUN_033f823c(in_stack_00000088,unaff_x22,iVar26,unaff_w19);
          if (pbVar28 != (byte *)0x0) goto LAB_033fa454;
          if (lVar19 == 0) goto LAB_033fa3b0;
          if (*(long *)(lVar19 + 0x18) == 0) goto LAB_033fae50;
          lVar22 = *(long *)(lVar19 + 0x28);
          iVar27 = iVar26 + *(int *)(*(long *)(lVar19 + 0x18) + 0x18);
          if (lVar22 == 0) {
            if (in_stack_000000a0 == 0) {
              in_stack_000000a0 = unaff_x22;
              thunk_FUN_01f51358(&stack0x000000a0,unaff_x22);
              iStack00000000000000ac = iStack0000000000000080;
              if (*(long *)(lVar19 + 0x18) != 0) {
                iStack00000000000000a8 = iVar26 + *(int *)(*(long *)(lVar19 + 0x18) + 0x18);
                unaff_x22 = *(long *)(lVar19 + 0x20);
                iStack00000000000000b0 = unaff_w19;
                iStack00000000000000b4 = iStack0000000000000064;
                if (unaff_x22 != 0) {
                  in_stack_00000078 = (ulong)uVar12 << 0x20;
                  iStack0000000000000080 = 0;
                  iVar26 = 0;
                  iVar24 = *(int *)(unaff_x22 + 0x10);
                  iVar29 = 0;
                  goto LAB_033f9bcc;
                }
              }
              goto LAB_033fae50;
            }
            bVar2 = false;
            pbVar28 = (byte *)0x0;
          }
          else {
            pbVar28 = *(byte **)(in_stack_00000048 + 0x20);
            uVar18 = 0;
            while ((long)uVar18 < (long)(int)*(uint *)(lVar22 + 0x18)) {
              if (*(uint *)(lVar22 + 0x18) <= uVar18) {
LAB_033fae54:
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              pbVar28[uVar18] = *(byte *)(lVar22 + uVar18 + 0x20);
              lVar22 = *(long *)(lVar19 + 0x28);
              uVar18 = uVar18 + 1;
              if (lVar22 == 0) goto LAB_033fae50;
            }
            uStack0000000000000068 = 0xffffffff;
            bVar2 = false;
            in_stack_00000038 = pbVar28;
          }
        }
        else if (pbVar28 == (byte *)0x0) {
LAB_033fa3b0:
          pbVar28 = *(byte **)(in_stack_00000048 + 0x20);
          *pbVar28 = bVar6;
          bVar5 = FUN_033f8000(in_stack_00000088,uVar11);
          pbVar28[1] = bVar5;
          if (1 < uStack0000000000000094 && (in_stack_00000030 & 0x100000000) == 0) {
            bVar5 = FUN_033f8094(in_stack_00000088,uVar11,uVar13);
            pbVar28[2] = bVar5;
          }
          puVar1 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
          if (uStack0000000000000094 < 3) {
LAB_033fa4a4:
            bVar2 = false;
          }
          else {
            if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ +
                        0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            bVar5 = FUN_033f60b8(uVar11);
            pbVar28[3] = bVar5;
            if (uStack0000000000000094 < 4) goto LAB_033fa4a4;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            if ((uVar11 & 0xffff) < 0x3041) {
LAB_033fa8a8:
              bVar2 = false;
            }
            else if ((uVar11 + 0x9a & 0xffff) < 0x38) {
              bVar2 = true;
            }
            else {
              uVar15 = uVar11 >> 8 & 0xff;
              if (0x32 < uVar15) goto LAB_033fa8a8;
              if ((uVar11 & 0xffff) < 0x309d) {
                bVar2 = (uVar11 & 0xffff) < 0x3099;
              }
              else if (uVar15 < 0x31) {
                bVar2 = (uVar11 & 0xffff) != 0x30fb;
              }
              else {
                bVar2 = (uVar11 - 0x32d0 & 0xffff) < 0x2f;
              }
            }
          }
          if (1 < bVar6) {
            uStack0000000000000068 = uVar11;
          }
          iVar27 = iVar26 + 1;
        }
        else {
LAB_033fa454:
          bVar2 = false;
          iVar27 = iVar26 + 1;
        }
        unaff_w21 = iVar20 + unaff_w21;
        iVar26 = iVar27;
        iVar20 = unaff_w21;
        if ((unaff_w25 >> 1 & 1) == 0) {
          for (; iVar20 < unaff_w20; iVar20 = iVar20 + 1) {
            uVar10 = FUN_03409f80(in_stack_00000098,iVar20,0);
            cVar4 = FUN_033f7f6c(in_stack_00000088,uVar10);
            unaff_w21 = iVar20;
            if (cVar4 != '\x01') break;
            bVar5 = pbVar30[2];
            if (bVar5 == 0) {
              bVar5 = 2;
              pbVar30[2] = 2;
            }
            uVar10 = FUN_03409f80(in_stack_00000098,iVar20,0);
            cVar4 = FUN_033f8094(in_stack_00000088,uVar10,0);
            pbVar30[2] = cVar4 + bVar5;
            unaff_w21 = unaff_w20;
          }
          if (iVar27 < unaff_w19) {
            do {
              uVar10 = FUN_03409f80(unaff_x22,iVar27,0);
              cVar4 = FUN_033f7f6c(in_stack_00000088,uVar10);
              iVar26 = iVar27;
              if (cVar4 != '\x01') break;
              bVar5 = pbVar28[2];
              pbVar21 = (byte *)0x1;
              if (bVar5 == 0) {
                bVar5 = 2;
                pbVar28[2] = 2;
                pbVar21 = pbVar28;
              }
              uVar10 = FUN_03409f80(pbVar21,unaff_x22,iVar27,0);
              cVar4 = FUN_033f8094(in_stack_00000088,uVar10,0);
              iVar27 = iVar27 + 1;
              pbVar28[2] = cVar4 + bVar5;
              iVar26 = unaff_w19;
            } while (unaff_w19 != iVar27);
          }
        }
        puVar1 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
        iVar20 = (uint)*pbVar30 - (uint)*pbVar28;
        if (iVar20 == 0) {
          iVar20 = (uint)pbVar30[1] - (uint)pbVar28[1];
        }
        if (iVar20 != 0) {
          return iVar20;
        }
        uVar15 = 1;
        if (uStack0000000000000094 != 1) {
          if (((unaff_w25 >> 1 & 1) == 0) &&
             (iStack0000000000000074 = (uint)pbVar30[2] - (uint)pbVar28[2],
             iStack0000000000000074 != 0)) {
            if ((in_stack_00000018 & 0x100000000) != 0) {
              return -1;
            }
            uVar15 = 1;
            if (*(char *)(in_stack_00000088 + 0x5c) != '\0') {
              uVar15 = 2;
            }
          }
          else {
            iStack0000000000000074 = iVar14;
            uVar15 = 2;
            if (uStack0000000000000094 != 2) {
              iVar20 = (uint)pbVar30[3] - (uint)pbVar28[3];
              if (iVar20 == 0) {
                uVar15 = 3;
                if (uStack0000000000000094 == 3) goto LAB_033f9bcc;
                if (bVar3 != bVar2) {
                  if ((in_stack_00000018 & 0x100000000) != 0) {
                    return -1;
                  }
                  iStack0000000000000074 = -1;
                  if (bVar3 != false) {
                    iStack0000000000000074 = 1;
                  }
                  uVar15 = 3;
                  goto LAB_033f9bcc;
                }
                uVar15 = uStack0000000000000094;
                if (bVar3 == false) goto LAB_033f9bcc;
                if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ +
                            0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar15 = FUN_033f651c(uStack0000000000000070);
                uVar16 = FUN_033f651c(uVar11);
                iVar20 = 1;
                if ((uVar15 & 1) != 0) {
                  iVar20 = -1;
                }
                if (((uVar15 ^ uVar16) & 1) == 0) {
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
                  iVar27 = 3;
                  if (in_stack_00000030._4_4_ == 0 && uVar12 != 0) {
                    iVar27 = iVar20;
                  }
                  iVar23 = -5;
                  if (uVar13 != 3) {
                    iVar23 = -4;
                  }
                  iVar20 = -3;
                  if (in_stack_00000030._4_4_ == 0 && uVar13 != 0) {
                    iVar20 = iVar23;
                  }
                  iVar20 = iVar20 + iVar27;
                }
                if (iVar20 == 0) {
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  bVar3 = (uStack0000000000000070 - 0x3041 & 0xffff) < 0x54;
                  iVar20 = -1;
                  if (bVar3) {
                    iVar20 = 1;
                  }
                  if (bVar3 == (uVar11 - 0x3041 & 0xffff) < 0x54) {
                    if (*(int *)(*(long *)
                                  Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                                + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    uVar12 = FUN_033f81c8(uStack0000000000000070 & 0xffff,unaff_w25);
                    uVar11 = FUN_033f81c8(uVar11 & 0xffff,unaff_w25);
                    iVar20 = 1;
                    if ((uVar12 & 1) != 0) {
                      iVar20 = -1;
                    }
                    uVar15 = uStack0000000000000094;
                    if ((uVar12 & 1) == (uVar11 & 1)) goto LAB_033f9bcc;
                  }
                }
                uVar15 = 3;
              }
              else {
                uVar15 = 2;
              }
              iStack0000000000000074 = iVar20;
              if ((in_stack_00000018 & 0x100000000) != 0) {
                return -1;
              }
            }
          }
        }
        goto LAB_033f9bcc;
      }
LAB_033fa12c:
      puVar1 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
      if (((unaff_w25 >> 0x1d & 1) == 0) && (uStack0000000000000094 == 5)) {
        iStack0000000000000058 = iVar26 - iStack0000000000000080;
        if (in_stack_000000a0 != 0) {
          iStack0000000000000058 = iStack00000000000000a8 - iStack00000000000000ac;
        }
        uVar12 = FUN_033f8000(in_stack_00000088,uVar11);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar1);
        }
        iVar14 = FUN_033f60b8(uVar11);
        iStack0000000000000060 = (uVar12 & 0xff) << (ulong)(iVar14 + 8U & 0x1f);
      }
      iVar26 = iVar26 + 1;
      uStack0000000000000068 = uVar11;
    }
    iVar23 = iStack000000000000006c;
    iVar27 = iStack0000000000000060;
    iVar20 = iStack000000000000005c;
    iVar14 = iStack0000000000000058;
    iStack0000000000000058 = iVar14;
    iStack000000000000005c = iVar20;
    iStack0000000000000060 = iVar27;
    iStack000000000000006c = iVar23;
    if (uStack0000000000000094 == 5) {
      iStack0000000000000058 = -1;
      bVar3 = iStack000000000000005c != iStack0000000000000060;
      iStack000000000000005c = 0;
      iStack0000000000000060 = 0;
      iStack000000000000006c = -1;
      if (bVar3) {
        iStack0000000000000058 = iVar14;
        iStack000000000000005c = iVar20;
        iStack0000000000000060 = iVar27;
        iStack000000000000006c = iVar23;
        uVar15 = 4;
      }
    }
LAB_033f9bcc:
    if (unaff_w21 < iVar25) {
      if (unaff_x23 == 0) goto LAB_033fae50;
      uVar10 = FUN_03409f80(unaff_x23,unaff_w21,0);
      if (*(int *)(*(long *)
                    Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)
                            Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                          );
      }
      uVar18 = FUN_033f8ae0(uVar10,unaff_w25);
      if ((uVar18 & 1) != 0) {
        unaff_w21 = unaff_w21 + 1;
        goto LAB_033f9bcc;
      }
    }
    iVar14 = iVar26;
    if (iVar26 < iVar24) {
      if (unaff_x22 == 0) goto LAB_033fae50;
      bVar3 = true;
      do {
        uVar10 = FUN_03409f80(unaff_x22,iVar26,0);
        if (*(int *)(*(long *)
                      Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                    + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)
                              Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                            );
        }
        uVar18 = FUN_033f8ae0(uVar10,unaff_w25);
        if ((uVar18 & 1) == 0) {
          if (iVar25 <= unaff_w21) goto LAB_033f9d68;
          iVar14 = iVar26;
          if (!bVar3) goto LAB_033f9ca0;
          unaff_x24 = in_stack_00000088;
          unaff_w20 = iVar25;
          unaff_w19 = iVar24;
          iStack0000000000000064 = iVar29;
          iVar14 = iStack0000000000000074;
          uStack0000000000000094 = uVar15;
          in_stack_00000098 = unaff_x23;
          in_w8 = iStack0000000000000090;
          unaff_w26 = iVar26;
          if ((unaff_w21 <= iStack0000000000000090) || (iVar26 <= iVar29)) goto joined_r0x033f9ef8;
          in_w8 = unaff_w21;
          iVar20 = iVar26;
          if (iVar24 <= iVar26) goto LAB_033f9db8;
          if (unaff_x23 == 0) goto LAB_033fae50;
          iVar27 = 0;
          goto System_Boolean__System_IConvertible_ToSByte;
        }
        iVar26 = iVar26 + 1;
        bVar3 = iVar26 < iVar24;
        iVar14 = iVar24;
      } while (iVar24 != iVar26);
    }
    iVar26 = iVar14;
    if (unaff_w21 < iVar25) {
LAB_033f9ca0:
      iVar29 = iStack00000000000000b4;
      iVar20 = iStack00000000000000b0;
      iVar26 = iStack00000000000000a8;
      lVar19 = in_stack_000000a0;
      if (in_stack_000000a0 != 0) {
        iStack0000000000000080 = iStack00000000000000ac;
        in_stack_000000a0 = 0;
        thunk_FUN_01f51358(&stack0x000000a0,0);
        unaff_x22 = lVar19;
        iVar24 = iVar20;
        goto LAB_033f9bcc;
      }
    }
    else {
LAB_033f9d68:
      iVar27 = iStack00000000000000c8;
      iVar20 = iStack00000000000000c0;
      lVar19 = in_stack_000000b8;
      iVar14 = iVar26;
      if (in_stack_000000b8 != 0) {
        in_stack_000000b8 = 0;
        iStack0000000000000084 = iStack00000000000000c4;
        iStack0000000000000090 = iStack00000000000000cc;
        thunk_FUN_01f51358(&stack0x000000b8,0);
        unaff_x23 = lVar19;
        iVar25 = iVar27;
        unaff_w21 = iVar20;
        goto LAB_033f9bcc;
      }
    }
    puVar1 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
    if ((uVar15 < 3) || (iStack0000000000000074 == 0 || (in_stack_00000030 & 0x100000000) != 0))
    goto LAB_033facd8;
    if ((iVar24 <= iVar14) || (iVar25 <= unaff_w21)) goto LAB_033fadd4;
    if (unaff_x23 == 0) goto LAB_033fae50;
    goto LAB_033fabb8;
  }
  goto LAB_033fae50;
  while ((iVar27 = iVar27 + 1, iVar20 + 1 < iVar24 && (in_w8 + 1 < iVar25))) {
System_Boolean__System_IConvertible_ToSByte:
    in_w8 = unaff_w21 + iVar27;
    iVar20 = iVar26 + iVar27;
    sVar8 = FUN_03409f80(unaff_x23,in_w8,0);
    sVar9 = FUN_03409f80(unaff_x22,iVar20,0);
    if (sVar8 != sVar9) goto LAB_033f9db8;
  }
  in_w8 = unaff_w21 + iVar27;
  iVar20 = iVar26 + iVar27;
LAB_033f9db8:
  iVar26 = iVar20;
  unaff_w21 = in_w8;
  if ((iVar26 == iVar24) || (iVar20 = in_w8, in_w8 == iVar25)) goto LAB_033f9bcc;
  goto LAB_033f9ddc;
  while( true ) {
    if (unaff_x23 == 0) goto LAB_033fae50;
    uVar10 = FUN_03409f80(unaff_x23,iVar20,0);
    cVar4 = FUN_033f7f6c(in_stack_00000088,uVar10);
    if (cVar4 != '\x01') break;
LAB_033f9ddc:
    iVar20 = iVar20 + -1;
    iVar25 = iVar26;
    if (iVar20 <= iStack0000000000000090) break;
  }
  do {
    iVar25 = iVar25 + -1;
    if (iVar25 <= iVar29) break;
    uVar10 = FUN_03409f80(unaff_x22,iVar25,0);
    cVar4 = FUN_033f7f6c(in_stack_00000088,uVar10);
  } while (cVar4 == '\x01');
  unaff_w26 = iVar25;
  unaff_w21 = iVar20;
  if (iStack0000000000000090 < iVar20) {
    if (unaff_x23 == 0) goto LAB_033fae50;
    do {
      uVar10 = FUN_03409f80(unaff_x23,iVar20,0);
      uVar18 = FUN_033f8b5c(in_stack_00000088,uVar10);
      unaff_w21 = iVar20;
      if ((uVar18 & 1) != 0) break;
      iVar20 = iVar20 + -1;
      unaff_w21 = iStack0000000000000090;
    } while (iStack0000000000000090 < iVar20);
  }
  do {
    iStack0000000000000064 = iVar26;
    if (iVar25 <= iVar29) goto joined_r0x033f9ef8;
    uVar10 = FUN_03409f80(unaff_x22,iVar25,0);
    uVar18 = FUN_033f8b5c(in_stack_00000088,uVar10);
    unaff_w26 = iVar25;
    if ((uVar18 & 1) != 0) goto joined_r0x033f9ef8;
    iVar25 = iVar25 + -1;
    unaff_w26 = iVar29;
  } while( true );
LAB_033facd8:
  if ((uVar15 == 1) && (iStack0000000000000074 != 0)) {
    if (unaff_w21 < iVar25) {
      iVar26 = unaff_w21;
      if (unaff_x23 == 0) goto LAB_033fae50;
      do {
        uVar10 = FUN_03409f80(unaff_x23,iVar26,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar1);
        }
        uVar18 = FUN_033f6274(uVar10);
        unaff_w21 = iVar26;
      } while (((uVar18 & 1) != 0) && (iVar26 = iVar26 + 1, unaff_w21 = iVar25, iVar25 != iVar26));
    }
    if (iVar14 < iVar24) {
      iVar26 = iVar14;
      if (unaff_x22 == 0) {
LAB_033fae50:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        uVar10 = FUN_03409f80(unaff_x22,iVar26,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar1);
        }
        uVar18 = FUN_033f6274(uVar10);
        iVar14 = iVar26;
      } while (((uVar18 & 1) != 0) && (iVar26 = iVar26 + 1, iVar14 = iVar24, iVar24 != iVar26));
    }
  }
  if (iStack0000000000000074 != 0) goto LAB_033fadd4;
  goto LAB_033fad8c;
  while( true ) {
    iStack0000000000000074 = 0;
    in_stack_00000078 = 0;
    if (iVar25 <= unaff_w21) break;
LAB_033fabb8:
    uVar10 = FUN_03409f80(unaff_x23,unaff_w21,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar1);
    }
    uVar18 = FUN_033f6274(uVar10);
    if ((uVar18 & 1) == 0) goto LAB_033facd8;
    if (unaff_x22 == 0) goto LAB_033fae50;
    uVar10 = FUN_03409f80(unaff_x22,iVar14,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar1);
    }
    uVar18 = FUN_033f6274(uVar10);
    if ((uVar18 & 1) == 0) goto LAB_033facd8;
    uVar10 = FUN_03409f80(unaff_x23,unaff_w21,0);
    uVar17 = FUN_033f86cc(in_stack_00000088,uVar10,unaff_w25);
    uVar11 = FUN_033f8094(in_stack_00000088,uVar17,in_stack_00000078._4_4_);
    uVar10 = FUN_03409f80(unaff_x22,iVar14,0);
    uVar17 = FUN_033f86cc(in_stack_00000088,uVar10,unaff_w25);
    uVar12 = FUN_033f8094(in_stack_00000088,uVar17,in_stack_00000078 & 0xffffffff);
    iStack0000000000000074 = (uVar11 & 0xff) - (uVar12 & 0xff);
    if (iStack0000000000000074 != 0) goto LAB_033facd8;
    iVar14 = iVar14 + 1;
    unaff_w21 = unaff_w21 + 1;
    if (iVar24 <= iVar14) break;
  }
LAB_033fad8c:
  if ((iStack0000000000000058 < 0) || (-1 < iStack000000000000006c)) {
    if ((iStack0000000000000058 < 0) && (-1 < iStack000000000000006c)) {
      iStack0000000000000074 = 1;
    }
    else {
      iStack0000000000000074 = iStack000000000000006c - iStack0000000000000058;
      if ((iStack0000000000000074 == 0) &&
         (iStack0000000000000074 = iStack000000000000005c - iStack0000000000000060,
         iStack0000000000000074 == 0)) {
        if (iVar14 == iVar24) {
          *in_stack_00000010 = 1;
        }
        if (unaff_w21 == iVar25) {
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
  if (unaff_w21 == iVar25) {
    if (iVar14 != iVar24) {
      iStack0000000000000074 = -1;
    }
  }
  else {
    iStack0000000000000074 = 1;
  }
  return iStack0000000000000074;
}


