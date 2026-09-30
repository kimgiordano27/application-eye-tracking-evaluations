/*
FUNCTION_NAME: System.Convert$$ToInt64
ENTRY_POINT: 033f9fbc
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


int System_Convert__ToInt64(void)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined2 uVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  int iVar19;
  byte *pbVar20;
  long lVar21;
  int unaff_w19;
  int unaff_w21;
  long unaff_x22;
  int unaff_w23;
  long unaff_x24;
  byte *pbVar22;
  uint unaff_w25;
  int unaff_w26;
  int iVar23;
  byte *unaff_x28;
  uint unaff_w29;
  uint uStack000000000000000c;
  undefined1 *in_stack_00000010;
  ulong in_stack_00000018;
  undefined1 *in_stack_00000028;
  ulong in_stack_00000030;
  byte *in_stack_00000038;
  uint uStack0000000000000040;
  undefined4 uStack0000000000000044;
  long in_stack_00000048;
  int iStack0000000000000058;
  int iStack000000000000005c;
  int iStack0000000000000060;
  int iStack0000000000000064;
  uint uStack0000000000000068;
  int iStack000000000000006c;
  uint uStack0000000000000070;
  int iStack0000000000000074;
  int iStack0000000000000078;
  int iStack000000000000007c;
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
  
code_r0x033f9fbc:
  pbVar22 = (byte *)0x0;
  iVar13 = unaff_w19;
  iVar11 = unaff_w23;
LAB_033f9fc0:
  _uStack0000000000000040 = pbVar22;
  bVar5 = FUN_033f7f6c(unaff_x24,uStack0000000000000070);
  bVar6 = FUN_033f7f6c(unaff_x24,unaff_w29);
  unaff_w23 = iVar11;
  unaff_w19 = iVar13;
  uVar16 = uStack0000000000000094;
  if (bVar5 == 6) {
    if (((unaff_w25 >> 0x1d & 1) == 0) && (uStack0000000000000094 == 5)) {
      iStack000000000000006c = unaff_w21 - iStack0000000000000084;
      if (in_stack_000000b8 != 0) {
        iStack000000000000006c = iStack00000000000000c0 - iStack00000000000000c4;
      }
      uVar12 = FUN_033f8000(unaff_x24,uStack0000000000000070);
      if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0) ==
          0) {
        thunk_FUN_01ee6d7c(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__);
      }
      iVar13 = FUN_033f60b8(uStack0000000000000070);
      iStack000000000000005c = (uVar12 & 0xff) << (ulong)(iVar13 + 8U & 0x1f);
    }
    unaff_w21 = unaff_w21 + 1;
    *(uint *)(in_stack_00000048 + 0x28) = uStack0000000000000070;
    if (bVar6 == 6) goto LAB_033fa12c;
  }
  else {
    if (bVar6 != 6) {
      if (iStack000000000000007c == 0) {
        lVar18 = FUN_033f823c(unaff_x24,in_stack_00000098,unaff_w21,iVar11);
        if (unaff_x28 == (byte *)0x0) {
          if (lVar18 == 0) goto LAB_033fa2f0;
          if (*(long *)(lVar18 + 0x18) == 0) goto LAB_033fae50;
          lVar21 = *(long *)(lVar18 + 0x28);
          iVar19 = *(int *)(*(long *)(lVar18 + 0x18) + 0x18);
          if (lVar21 == 0) {
            if (in_stack_000000b8 == 0) {
              in_stack_000000b8 = in_stack_00000098;
              thunk_FUN_01f51358(&stack0x000000b8,in_stack_00000098);
              iStack00000000000000c4 = iStack0000000000000084;
              if (*(long *)(lVar18 + 0x18) != 0) {
                iStack00000000000000c0 = unaff_w21 + *(int *)(*(long *)(lVar18 + 0x18) + 0x18);
                iStack00000000000000cc = iStack0000000000000090;
                in_stack_00000098 = *(long *)(lVar18 + 0x20);
                iStack00000000000000c8 = iVar11;
                if (in_stack_00000098 != 0) {
                  iStack0000000000000090 = 0;
                  _iStack0000000000000078 = _iStack0000000000000078 & 0xffffffff;
                  iStack0000000000000084 = 0;
                  unaff_w23 = *(int *)(in_stack_00000098 + 0x10);
                  unaff_w21 = 0;
                  iVar23 = unaff_w26;
                  goto LAB_033f9bcc;
                }
              }
              goto LAB_033fae50;
            }
            uStack000000000000000c = 0;
            unaff_x28 = (byte *)0x0;
          }
          else {
            unaff_x28 = *(byte **)(in_stack_00000048 + 0x18);
            uVar17 = 0;
            while ((long)uVar17 < (long)(int)*(uint *)(lVar21 + 0x18)) {
              if (*(uint *)(lVar21 + 0x18) <= uVar17) goto LAB_033fae54;
              unaff_x28[uVar17] = *(byte *)(lVar21 + uVar17 + 0x20);
              lVar21 = *(long *)(lVar18 + 0x28);
              uVar17 = uVar17 + 1;
              if (lVar21 == 0) goto LAB_033fae50;
            }
            uStack000000000000000c = 0;
            *(undefined4 *)(in_stack_00000048 + 0x28) = 0xffffffff;
            *(byte **)(in_stack_00000048 + 0x30) = unaff_x28;
          }
        }
        else {
          uStack000000000000000c = 0;
          iVar19 = 1;
        }
      }
      else {
        if (unaff_x28 == (byte *)0x0) {
LAB_033fa2f0:
          unaff_x28 = *(byte **)(in_stack_00000048 + 0x18);
          *unaff_x28 = bVar5;
          bVar7 = FUN_033f8000(in_stack_00000088,uStack0000000000000070);
          unaff_x28[1] = bVar7;
          if (1 < uStack0000000000000094 && (in_stack_00000030 & 0x100000000) == 0) {
            bVar7 = FUN_033f8094(in_stack_00000088,uStack0000000000000070,iStack000000000000007c);
            unaff_x28[2] = bVar7;
          }
          if (uStack0000000000000094 < 3) {
LAB_033fa37c:
            uStack000000000000000c = 0;
          }
          else {
            if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ +
                        0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            bVar7 = FUN_033f60b8(uStack0000000000000070);
            unaff_x28[3] = bVar7;
            if (uStack0000000000000094 < 4) goto LAB_033fa37c;
            if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ +
                        0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            if ((uStack0000000000000070 & 0xffff) < 0x3041) {
LAB_033fa89c:
              uStack000000000000000c = 0;
            }
            else if ((uStack0000000000000070 + 0x9a & 0xffff) < 0x38) {
              uStack000000000000000c = 1;
            }
            else {
              uVar12 = uStack0000000000000070 >> 8 & 0xff;
              if (0x32 < uVar12) goto LAB_033fa89c;
              if ((uStack0000000000000070 & 0xffff) < 0x309d) {
                uStack000000000000000c = (uint)((uStack0000000000000070 & 0xffff) < 0x3099);
              }
              else if (uVar12 < 0x31) {
                uStack000000000000000c = (uint)((uStack0000000000000070 & 0xffff) != 0x30fb);
              }
              else {
                uStack000000000000000c = (uint)((uStack0000000000000070 - 0x32d0 & 0xffff) < 0x2f);
              }
            }
          }
          if (1 < bVar5) {
            *(uint *)(in_stack_00000048 + 0x28) = uStack0000000000000070;
          }
        }
        else {
          uStack000000000000000c = 0;
        }
        iVar19 = 1;
      }
      if (iStack0000000000000078 == 0) {
        lVar18 = FUN_033f823c(in_stack_00000088,unaff_x22,unaff_w26,iVar13);
        if (_uStack0000000000000040 != (byte *)0x0) goto LAB_033fa454;
        if (lVar18 == 0) goto LAB_033fa3b0;
        if (*(long *)(lVar18 + 0x18) == 0) goto LAB_033fae50;
        lVar21 = *(long *)(lVar18 + 0x28);
        iVar1 = iStack0000000000000064;
        iVar23 = unaff_w26 + *(int *)(*(long *)(lVar18 + 0x18) + 0x18);
        if (lVar21 == 0) {
          if (in_stack_000000a0 == 0) {
            in_stack_000000a0 = unaff_x22;
            thunk_FUN_01f51358(&stack0x000000a0,unaff_x22);
            iStack00000000000000ac = iStack0000000000000080;
            if (*(long *)(lVar18 + 0x18) != 0) {
              iStack00000000000000b4 = iStack0000000000000064;
              iStack00000000000000a8 = unaff_w26 + *(int *)(*(long *)(lVar18 + 0x18) + 0x18);
              unaff_x22 = *(long *)(lVar18 + 0x20);
              iStack00000000000000b0 = iVar13;
              if (unaff_x22 != 0) {
                iStack0000000000000064 = 0;
                _iStack0000000000000078 = _iStack0000000000000078 & 0xffffffff00000000;
                iStack0000000000000080 = 0;
                unaff_w19 = *(int *)(unaff_x22 + 0x10);
                iStack00000000000000b4 = iVar1;
                iVar23 = 0;
                goto LAB_033f9bcc;
              }
            }
            goto LAB_033fae50;
          }
          uVar12 = 0;
          pbVar22 = (byte *)0x0;
        }
        else {
          pbVar22 = *(byte **)(in_stack_00000048 + 0x20);
          uVar17 = 0;
          while ((long)uVar17 < (long)(int)*(uint *)(lVar21 + 0x18)) {
            if (*(uint *)(lVar21 + 0x18) <= uVar17) {
LAB_033fae54:
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            pbVar22[uVar17] = *(byte *)(lVar21 + uVar17 + 0x20);
            lVar21 = *(long *)(lVar18 + 0x28);
            uVar17 = uVar17 + 1;
            if (lVar21 == 0) goto LAB_033fae50;
          }
          uStack0000000000000068 = 0xffffffff;
          uVar12 = 0;
          in_stack_00000038 = pbVar22;
        }
      }
      else if (_uStack0000000000000040 == (byte *)0x0) {
LAB_033fa3b0:
        pbVar22 = *(byte **)(in_stack_00000048 + 0x20);
        *pbVar22 = bVar6;
        bVar5 = FUN_033f8000(in_stack_00000088,unaff_w29);
        pbVar22[1] = bVar5;
        if (1 < uStack0000000000000094 && (in_stack_00000030 & 0x100000000) == 0) {
          bVar5 = FUN_033f8094(in_stack_00000088,unaff_w29,iStack0000000000000078);
          pbVar22[2] = bVar5;
        }
        puVar2 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
        if (uStack0000000000000094 < 3) {
LAB_033fa4a4:
          uVar12 = 0;
        }
        else {
          if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0)
              == 0) {
            thunk_FUN_01ee6d7c();
          }
          bVar5 = FUN_033f60b8(unaff_w29);
          pbVar22[3] = bVar5;
          if (uStack0000000000000094 < 4) goto LAB_033fa4a4;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if ((unaff_w29 & 0xffff) < 0x3041) {
LAB_033fa8a8:
            uVar12 = 0;
          }
          else if ((unaff_w29 + 0x9a & 0xffff) < 0x38) {
            uVar12 = 1;
          }
          else {
            uVar16 = unaff_w29 >> 8 & 0xff;
            if (0x32 < uVar16) goto LAB_033fa8a8;
            if ((unaff_w29 & 0xffff) < 0x309d) {
              uVar12 = (uint)((unaff_w29 & 0xffff) < 0x3099);
            }
            else if (uVar16 < 0x31) {
              uVar12 = (uint)((unaff_w29 & 0xffff) != 0x30fb);
            }
            else {
              uVar12 = (uint)((unaff_w29 - 0x32d0 & 0xffff) < 0x2f);
            }
          }
        }
        if (1 < bVar6) {
          uStack0000000000000068 = unaff_w29;
        }
        iVar23 = unaff_w26 + 1;
      }
      else {
LAB_033fa454:
        uVar12 = 0;
        iVar23 = unaff_w26 + 1;
        pbVar22 = _uStack0000000000000040;
      }
      unaff_w21 = iVar19 + unaff_w21;
      if ((unaff_w25 >> 1 & 1) == 0) {
        _uStack0000000000000040 = (byte *)CONCAT44(uStack0000000000000044,uVar12);
        if (unaff_w21 < iVar11) {
          do {
            uVar8 = FUN_03409f80(in_stack_00000098,unaff_w21,0);
            cVar4 = FUN_033f7f6c(in_stack_00000088,uVar8);
            iVar19 = unaff_w21;
            if (cVar4 != '\x01') break;
            bVar5 = unaff_x28[2];
            if (bVar5 == 0) {
              bVar5 = 2;
              unaff_x28[2] = 2;
            }
            uVar8 = FUN_03409f80(in_stack_00000098,unaff_w21,0);
            cVar4 = FUN_033f8094(in_stack_00000088,uVar8,0);
            unaff_w21 = unaff_w21 + 1;
            unaff_x28[2] = cVar4 + bVar5;
            iVar19 = iVar11;
          } while (unaff_w21 < iVar11);
          unaff_w21 = iVar19;
          uVar12 = uStack0000000000000040;
        }
        if (iVar23 < iVar13) {
          do {
            uVar8 = FUN_03409f80(unaff_x22,iVar23,0);
            cVar4 = FUN_033f7f6c(in_stack_00000088,uVar8);
            iVar11 = iVar23;
            if (cVar4 != '\x01') break;
            bVar5 = pbVar22[2];
            pbVar20 = (byte *)0x1;
            if (bVar5 == 0) {
              bVar5 = 2;
              pbVar22[2] = 2;
              pbVar20 = pbVar22;
            }
            uVar8 = FUN_03409f80(pbVar20,unaff_x22,iVar23,0);
            cVar4 = FUN_033f8094(in_stack_00000088,uVar8,0);
            iVar23 = iVar23 + 1;
            pbVar22[2] = cVar4 + bVar5;
            iVar11 = iVar13;
          } while (iVar13 != iVar23);
          uVar12 = uStack0000000000000040;
          iVar23 = iVar11;
        }
      }
      puVar2 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
      iVar13 = (uint)*unaff_x28 - (uint)*pbVar22;
      if (iVar13 == 0) {
        iVar13 = (uint)unaff_x28[1] - (uint)pbVar22[1];
      }
      if (iVar13 != 0) {
        return iVar13;
      }
      uVar16 = 1;
      if (uStack0000000000000094 != 1) {
        if (((unaff_w25 >> 1 & 1) == 0) &&
           (iVar13 = (uint)unaff_x28[2] - (uint)pbVar22[2], iVar13 != 0)) {
          if ((in_stack_00000018 & 0x100000000) != 0) {
            return -1;
          }
          iStack0000000000000074 = iVar13;
          uVar16 = 1;
          if (*(char *)(in_stack_00000088 + 0x5c) != '\0') {
            uVar16 = 2;
          }
        }
        else {
          uVar16 = 2;
          if (uStack0000000000000094 != 2) {
            iVar13 = (uint)unaff_x28[3] - (uint)pbVar22[3];
            if (iVar13 == 0) {
              uVar16 = 3;
              if (uStack0000000000000094 == 3) goto LAB_033f9bcc;
              if (uStack000000000000000c != uVar12) {
                if ((in_stack_00000018 & 0x100000000) != 0) {
                  return -1;
                }
                iStack0000000000000074 = -1;
                if (uStack000000000000000c != 0) {
                  iStack0000000000000074 = 1;
                }
                uVar16 = 3;
                goto LAB_033f9bcc;
              }
              uVar16 = uStack0000000000000094;
              if (uStack000000000000000c == 0) goto LAB_033f9bcc;
              if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ +
                          0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar16 = FUN_033f651c(uStack0000000000000070);
              uVar12 = FUN_033f651c(unaff_w29);
              iVar13 = 1;
              if ((uVar16 & 1) != 0) {
                iVar13 = -1;
              }
              if (((uVar16 ^ uVar12) & 1) == 0) {
                iVar13 = 0;
              }
              if (iVar13 == 0) {
                if (*(int *)(*(long *)
                              Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                            + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                iVar13 = 4;
                if (iStack000000000000007c == 3) {
                  iVar13 = 5;
                }
                iVar11 = 3;
                if (in_stack_00000030._4_4_ == 0 && iStack000000000000007c != 0) {
                  iVar11 = iVar13;
                }
                iVar19 = -5;
                if (iStack0000000000000078 != 3) {
                  iVar19 = -4;
                }
                iVar13 = -3;
                if (in_stack_00000030._4_4_ == 0 && iStack0000000000000078 != 0) {
                  iVar13 = iVar19;
                }
                iVar13 = iVar13 + iVar11;
              }
              if (iVar13 == 0) {
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                bVar3 = (uStack0000000000000070 - 0x3041 & 0xffff) < 0x54;
                iVar13 = -1;
                if (bVar3) {
                  iVar13 = 1;
                }
                if (bVar3 == (unaff_w29 - 0x3041 & 0xffff) < 0x54) {
                  if (*(int *)(*(long *)
                                Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                              + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  uVar12 = FUN_033f81c8(uStack0000000000000070 & 0xffff,unaff_w25);
                  uVar14 = FUN_033f81c8(unaff_w29 & 0xffff,unaff_w25);
                  iVar13 = 1;
                  if ((uVar12 & 1) != 0) {
                    iVar13 = -1;
                  }
                  uVar16 = uStack0000000000000094;
                  if ((uVar12 & 1) == (uVar14 & 1)) goto LAB_033f9bcc;
                }
              }
              uVar16 = 3;
            }
            else {
              uVar16 = 2;
            }
            iStack0000000000000074 = iVar13;
            if ((in_stack_00000018 & 0x100000000) != 0) {
              return -1;
            }
          }
        }
      }
      goto LAB_033f9bcc;
    }
LAB_033fa12c:
    puVar2 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
    if (((unaff_w25 >> 0x1d & 1) == 0) && (uStack0000000000000094 == 5)) {
      iStack0000000000000058 = unaff_w26 - iStack0000000000000080;
      if (in_stack_000000a0 != 0) {
        iStack0000000000000058 = iStack00000000000000a8 - iStack00000000000000ac;
      }
      uVar12 = FUN_033f8000(in_stack_00000088,unaff_w29);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar2);
      }
      iVar13 = FUN_033f60b8(unaff_w29);
      iStack0000000000000060 = (uVar12 & 0xff) << (ulong)(iVar13 + 8U & 0x1f);
    }
    unaff_w26 = unaff_w26 + 1;
    uStack0000000000000068 = unaff_w29;
  }
  iVar1 = iStack000000000000006c;
  iVar19 = iStack0000000000000060;
  iVar11 = iStack000000000000005c;
  iVar13 = iStack0000000000000058;
  iStack0000000000000058 = iVar13;
  iStack000000000000005c = iVar11;
  iStack0000000000000060 = iVar19;
  iStack000000000000006c = iVar1;
  iVar23 = unaff_w26;
  if (uStack0000000000000094 == 5) {
    iStack0000000000000058 = -1;
    bVar3 = iStack000000000000005c != iStack0000000000000060;
    iStack000000000000005c = 0;
    iStack0000000000000060 = 0;
    iStack000000000000006c = -1;
    if (bVar3) {
      iStack0000000000000058 = iVar13;
      iStack000000000000005c = iVar11;
      iStack0000000000000060 = iVar19;
      iStack000000000000006c = iVar1;
      uVar16 = 4;
    }
  }
LAB_033f9bcc:
  for (; uStack0000000000000094 = uVar16, uVar16 = uStack0000000000000094, unaff_w21 < unaff_w23;
      unaff_w21 = unaff_w21 + 1) {
    if (in_stack_00000098 == 0) goto LAB_033fae50;
    uVar8 = FUN_03409f80(in_stack_00000098,unaff_w21,0);
    if (*(int *)(*(long *)
                  Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)
                          Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                        );
    }
    uVar17 = FUN_033f8ae0(uVar8,unaff_w25);
    if ((uVar17 & 1) == 0) break;
  }
  iVar13 = iVar23;
  if (iVar23 < unaff_w19) {
    if (unaff_x22 == 0) goto LAB_033fae50;
    bVar3 = true;
    do {
      uVar8 = FUN_03409f80(unaff_x22,iVar23,0);
      if (*(int *)(*(long *)
                    Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)
                            Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                          );
      }
      uVar17 = FUN_033f8ae0(uVar8,unaff_w25);
      if ((uVar17 & 1) == 0) {
        if (unaff_w23 <= unaff_w21) goto LAB_033f9d68;
        if (!bVar3) goto LAB_033f9ca0;
        iVar13 = iStack0000000000000064;
        unaff_w26 = iVar23;
        if ((unaff_w21 <= iStack0000000000000090) || (iVar23 <= iStack0000000000000064))
        goto joined_r0x033f9da4;
        iVar11 = unaff_w21;
        iVar13 = iVar23;
        if (unaff_w19 <= iVar23) goto LAB_033f9db8;
        if (in_stack_00000098 == 0) goto LAB_033fae50;
        iVar19 = 0;
        goto System_Boolean__System_IConvertible_ToSByte;
      }
      iVar23 = iVar23 + 1;
      bVar3 = iVar23 < unaff_w19;
      iVar13 = unaff_w19;
    } while (unaff_w19 != iVar23);
  }
  iVar23 = iVar13;
  if (unaff_w21 < unaff_w23) {
LAB_033f9ca0:
    iStack0000000000000064 = iStack00000000000000b4;
    iVar11 = iStack00000000000000b0;
    iVar13 = iStack00000000000000a8;
    lVar18 = in_stack_000000a0;
    if (in_stack_000000a0 != 0) {
      iStack0000000000000080 = iStack00000000000000ac;
      in_stack_000000a0 = 0;
      thunk_FUN_01f51358(&stack0x000000a0,0);
      unaff_x22 = lVar18;
      unaff_w19 = iVar11;
      iVar23 = iVar13;
      goto LAB_033f9bcc;
    }
  }
  else {
LAB_033f9d68:
    iVar11 = iStack00000000000000c8;
    iVar13 = iStack00000000000000c0;
    lVar18 = in_stack_000000b8;
    if (in_stack_000000b8 != 0) {
      in_stack_000000b8 = 0;
      iStack0000000000000084 = iStack00000000000000c4;
      iStack0000000000000090 = iStack00000000000000cc;
      thunk_FUN_01f51358(&stack0x000000b8,0);
      in_stack_00000098 = lVar18;
      unaff_w23 = iVar11;
      unaff_w21 = iVar13;
      goto LAB_033f9bcc;
    }
  }
  puVar2 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
  if ((uStack0000000000000094 < 3) ||
     (iStack0000000000000074 == 0 || (in_stack_00000030 & 0x100000000) != 0)) goto LAB_033facd8;
  if ((unaff_w19 <= iVar23) || (unaff_w23 <= unaff_w21)) goto LAB_033fadd4;
  if (in_stack_00000098 == 0) goto LAB_033fae50;
  goto LAB_033fabb8;
  while ((iVar19 = iVar19 + 1, iVar13 + 1 < unaff_w19 && (iVar11 + 1 < unaff_w23))) {
System_Boolean__System_IConvertible_ToSByte:
    iVar11 = unaff_w21 + iVar19;
    iVar13 = iVar23 + iVar19;
    sVar9 = FUN_03409f80(in_stack_00000098,iVar11,0);
    sVar10 = FUN_03409f80(unaff_x22,iVar13,0);
    if (sVar9 != sVar10) goto LAB_033f9db8;
  }
  iVar11 = unaff_w21 + iVar19;
  iVar13 = iVar23 + iVar19;
LAB_033f9db8:
  unaff_w21 = iVar11;
  iVar23 = iVar13;
  if ((iVar13 != unaff_w19) && (iVar19 = iVar11, iVar11 != unaff_w23)) {
    do {
      iVar19 = iVar19 + -1;
      if (iVar19 <= iStack0000000000000090) break;
      if (in_stack_00000098 == 0) goto LAB_033fae50;
      uVar8 = FUN_03409f80(in_stack_00000098,iVar19,0);
      cVar4 = FUN_033f7f6c(in_stack_00000088,uVar8);
    } while (cVar4 == '\x01');
    do {
      iVar23 = iVar23 + -1;
      if (iVar23 <= iStack0000000000000064) break;
      uVar8 = FUN_03409f80(unaff_x22,iVar23,0);
      cVar4 = FUN_033f7f6c(in_stack_00000088,uVar8);
    } while (cVar4 == '\x01');
    unaff_w26 = iVar23;
    unaff_w21 = iVar19;
    if (iStack0000000000000090 < iVar19) {
      if (in_stack_00000098 == 0) goto LAB_033fae50;
      do {
        uVar8 = FUN_03409f80(in_stack_00000098,iVar19,0);
        uVar17 = FUN_033f8b5c(in_stack_00000088,uVar8);
        unaff_w21 = iVar19;
        if ((uVar17 & 1) != 0) break;
        iVar19 = iVar19 + -1;
        unaff_w21 = iStack0000000000000090;
      } while (iStack0000000000000090 < iVar19);
    }
    do {
      iStack0000000000000090 = iVar11;
      if (iVar23 <= iStack0000000000000064) goto joined_r0x033f9da4;
      uVar8 = FUN_03409f80(unaff_x22,iVar23,0);
      uVar17 = FUN_033f8b5c(in_stack_00000088,uVar8);
      unaff_w26 = iVar23;
      if ((uVar17 & 1) != 0) goto joined_r0x033f9da4;
      iVar23 = iVar23 + -1;
      unaff_w26 = iStack0000000000000064;
    } while( true );
  }
  goto LAB_033f9bcc;
joined_r0x033f9da4:
  iStack0000000000000064 = iVar13;
  if (in_stack_00000098 == 0) goto LAB_033fae50;
  uVar8 = FUN_03409f80(in_stack_00000098,unaff_w21,0);
  uStack0000000000000070 = FUN_033f86cc(in_stack_00000088,uVar8,unaff_w25);
  uVar8 = FUN_03409f80(unaff_x22,unaff_w26,0);
  unaff_w29 = FUN_033f86cc(in_stack_00000088,uVar8,unaff_w25);
  iVar13 = FUN_033f87b0(in_stack_00000088,uStack0000000000000070);
  _iStack0000000000000078 = CONCAT44(iVar13,iStack0000000000000078);
  if (iVar13 != 0) {
    if (*(int *)(in_stack_00000048 + 0x28) < 0) {
      unaff_x28 = *(byte **)(in_stack_00000048 + 0x30);
      if (unaff_x28 == (byte *)0x0) {
        unaff_w21 = unaff_w21 + 1;
        iVar23 = unaff_w26;
        goto LAB_033f9bcc;
      }
      goto LAB_033f9f88;
    }
    uStack0000000000000070 =
         FUN_033f88d0(in_stack_00000088,*(int *)(in_stack_00000048 + 0x28),iVar13,unaff_w25);
  }
  unaff_x28 = (byte *)0x0;
LAB_033f9f88:
  iVar11 = FUN_033f87b0(in_stack_00000088,unaff_w29);
  _iStack0000000000000078 = CONCAT44(iVar13,iVar11);
  unaff_x24 = in_stack_00000088;
  if (iVar11 == 0) goto code_r0x033f9fbc;
  if (-1 < (int)uStack0000000000000068) {
    unaff_w29 = FUN_033f88d0(in_stack_00000088,uStack0000000000000068,iVar11,unaff_w25);
    goto code_r0x033f9fbc;
  }
  pbVar22 = in_stack_00000038;
  iVar13 = unaff_w19;
  iVar11 = unaff_w23;
  if (in_stack_00000038 == (byte *)0x0) {
    in_stack_00000038 = (byte *)0x0;
    iVar23 = unaff_w26 + 1;
    goto LAB_033f9bcc;
  }
  goto LAB_033f9fc0;
LAB_033facd8:
  if ((uStack0000000000000094 == 1) && (iStack0000000000000074 != 0)) {
    if (unaff_w21 < unaff_w23) {
      iVar13 = unaff_w21;
      if (in_stack_00000098 == 0) goto LAB_033fae50;
      do {
        uVar8 = FUN_03409f80(in_stack_00000098,iVar13,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar2);
        }
        uVar17 = FUN_033f6274(uVar8);
        unaff_w21 = iVar13;
      } while (((uVar17 & 1) != 0) &&
              (iVar13 = iVar13 + 1, unaff_w21 = unaff_w23, unaff_w23 != iVar13));
    }
    if (iVar23 < unaff_w19) {
      iVar13 = iVar23;
      if (unaff_x22 == 0) {
LAB_033fae50:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        uVar8 = FUN_03409f80(unaff_x22,iVar13,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar2);
        }
        uVar17 = FUN_033f6274(uVar8);
        iVar23 = iVar13;
      } while (((uVar17 & 1) != 0) && (iVar13 = iVar13 + 1, iVar23 = unaff_w19, unaff_w19 != iVar13)
              );
    }
  }
  if (iStack0000000000000074 != 0) goto LAB_033fadd4;
  goto LAB_033fad8c;
  while( true ) {
    iStack0000000000000074 = 0;
    _iStack0000000000000078 = 0;
    if (unaff_w23 <= unaff_w21) break;
LAB_033fabb8:
    uVar8 = FUN_03409f80(in_stack_00000098,unaff_w21,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar2);
    }
    uVar17 = FUN_033f6274(uVar8);
    if ((uVar17 & 1) == 0) goto LAB_033facd8;
    if (unaff_x22 == 0) goto LAB_033fae50;
    uVar8 = FUN_03409f80(unaff_x22,iVar23,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar2);
    }
    uVar17 = FUN_033f6274(uVar8);
    if ((uVar17 & 1) == 0) goto LAB_033facd8;
    uVar8 = FUN_03409f80(in_stack_00000098,unaff_w21,0);
    uVar15 = FUN_033f86cc(in_stack_00000088,uVar8,unaff_w25);
    uVar16 = FUN_033f8094(in_stack_00000088,uVar15,iStack000000000000007c);
    uVar8 = FUN_03409f80(unaff_x22,iVar23,0);
    uVar15 = FUN_033f86cc(in_stack_00000088,uVar8,unaff_w25);
    uVar12 = FUN_033f8094(in_stack_00000088,uVar15,_iStack0000000000000078 & 0xffffffff);
    iStack0000000000000074 = (uVar16 & 0xff) - (uVar12 & 0xff);
    if (iStack0000000000000074 != 0) goto LAB_033facd8;
    iVar23 = iVar23 + 1;
    unaff_w21 = unaff_w21 + 1;
    if (unaff_w19 <= iVar23) break;
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
        if (iVar23 == unaff_w19) {
          *in_stack_00000010 = 1;
        }
        if (unaff_w21 == unaff_w23) {
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
  if (unaff_w21 == unaff_w23) {
    if (iVar23 != unaff_w19) {
      iStack0000000000000074 = -1;
    }
  }
  else {
    iStack0000000000000074 = 1;
  }
  return iStack0000000000000074;
}


