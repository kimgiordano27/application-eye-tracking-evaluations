/*
FUNCTION_NAME: System.Boolean$$System.IConvertible.ToUInt32
ENTRY_POINT: 033f9efc
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

int System_Boolean__System_IConvertible_ToUInt32(void)

{
  undefined *puVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  short sVar9;
  short sVar10;
  undefined2 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  int iVar21;
  byte *pbVar22;
  long lVar23;
  int iVar24;
  int iVar25;
  int unaff_w19;
  int iVar26;
  int unaff_w20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  byte *pbVar27;
  uint unaff_w25;
  int unaff_w26;
  int unaff_w28;
  byte *pbVar28;
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
  
code_r0x033f9efc:
  uVar11 = FUN_03409f80(unaff_x23,unaff_w21,0);
  uStack0000000000000070 = FUN_033f86cc(unaff_x24,uVar11,unaff_w25);
  uVar11 = FUN_03409f80(unaff_x22,unaff_w26,0);
  uVar12 = FUN_033f86cc(unaff_x24,uVar11,unaff_w25);
  uVar13 = FUN_033f87b0(unaff_x24,uStack0000000000000070);
  _uStack0000000000000078 = CONCAT44(uVar13,uStack0000000000000078);
  iVar26 = unaff_w20;
  iVar25 = unaff_w19;
  iStack0000000000000090 = unaff_w28;
  uVar18 = uStack0000000000000094;
  if (uVar13 == 0) {
LAB_033f9f84:
    pbVar28 = (byte *)0x0;
  }
  else {
    if (-1 < *(int *)(in_stack_00000048 + 0x28)) {
      uStack0000000000000070 =
           FUN_033f88d0(unaff_x24,*(int *)(in_stack_00000048 + 0x28),uVar13,unaff_w25);
      goto LAB_033f9f84;
    }
    pbVar28 = *(byte **)(in_stack_00000048 + 0x30);
    if (pbVar28 == (byte *)0x0) {
      unaff_w21 = unaff_w21 + 1;
      goto LAB_033f9bcc;
    }
  }
  uVar14 = FUN_033f87b0(unaff_x24,uVar12);
  _uStack0000000000000078 = CONCAT44(uVar13,uVar14);
  unaff_x23 = in_stack_00000098;
  if (uVar14 == 0) {
System_Convert__ToInt64:
    pbVar27 = (byte *)0x0;
  }
  else {
    if (-1 < (int)uStack0000000000000068) {
      uVar12 = FUN_033f88d0(unaff_x24,uStack0000000000000068,uVar14,unaff_w25);
      goto System_Convert__ToInt64;
    }
    pbVar27 = in_stack_00000038;
    if (in_stack_00000038 == (byte *)0x0) {
      in_stack_00000038 = (byte *)0x0;
      unaff_w26 = unaff_w26 + 1;
      goto LAB_033f9bcc;
    }
  }
  bVar6 = FUN_033f7f6c(unaff_x24,uStack0000000000000070);
  bVar7 = FUN_033f7f6c(unaff_x24,uVar12);
  if (bVar6 == 6) {
    if (((unaff_w25 >> 0x1d & 1) == 0) && (uStack0000000000000094 == 5)) {
      iStack000000000000006c = unaff_w21 - iStack0000000000000084;
      if (in_stack_000000b8 != 0) {
        iStack000000000000006c = iStack00000000000000c0 - iStack00000000000000c4;
      }
      uVar13 = FUN_033f8000(unaff_x24,uStack0000000000000070);
      if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0) ==
          0) {
        thunk_FUN_01ee6d7c(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__);
      }
      iVar15 = FUN_033f60b8(uStack0000000000000070);
      iStack000000000000005c = (uVar13 & 0xff) << (ulong)(iVar15 + 8U & 0x1f);
    }
    unaff_w21 = unaff_w21 + 1;
    *(uint *)(in_stack_00000048 + 0x28) = uStack0000000000000070;
    if (bVar7 == 6) goto LAB_033fa12c;
  }
  else {
    if (bVar7 != 6) {
      if (uVar13 == 0) {
        lVar20 = FUN_033f823c(unaff_x24,in_stack_00000098,unaff_w21,unaff_w20);
        if (pbVar28 == (byte *)0x0) {
          if (lVar20 == 0) goto LAB_033fa2f0;
          if (*(long *)(lVar20 + 0x18) == 0) goto LAB_033fae50;
          lVar23 = *(long *)(lVar20 + 0x28);
          iVar15 = *(int *)(*(long *)(lVar20 + 0x18) + 0x18);
          if (lVar23 == 0) {
            if (in_stack_000000b8 == 0) {
              in_stack_000000b8 = in_stack_00000098;
              thunk_FUN_01f51358(&stack0x000000b8,in_stack_00000098);
              iStack00000000000000c4 = iStack0000000000000084;
              if (*(long *)(lVar20 + 0x18) != 0) {
                iStack00000000000000c0 = unaff_w21 + *(int *)(*(long *)(lVar20 + 0x18) + 0x18);
                unaff_x23 = *(long *)(lVar20 + 0x20);
                iStack00000000000000c8 = unaff_w20;
                iStack00000000000000cc = unaff_w28;
                if (unaff_x23 != 0) {
                  iStack0000000000000090 = 0;
                  _uStack0000000000000078 = (ulong)uVar14;
                  iStack0000000000000084 = 0;
                  iVar26 = *(int *)(unaff_x23 + 0x10);
                  unaff_w21 = 0;
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
            uVar19 = 0;
            while ((long)uVar19 < (long)(int)*(uint *)(lVar23 + 0x18)) {
              if (*(uint *)(lVar23 + 0x18) <= uVar19) goto LAB_033fae54;
              pbVar28[uVar19] = *(byte *)(lVar23 + uVar19 + 0x20);
              lVar23 = *(long *)(lVar20 + 0x28);
              uVar19 = uVar19 + 1;
              if (lVar23 == 0) goto LAB_033fae50;
            }
            bVar4 = false;
            *(undefined4 *)(in_stack_00000048 + 0x28) = 0xffffffff;
            *(byte **)(in_stack_00000048 + 0x30) = pbVar28;
          }
        }
        else {
          bVar4 = false;
          iVar15 = 1;
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
            bVar8 = FUN_033f8094(in_stack_00000088,uStack0000000000000070,uVar13);
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
              uVar16 = uStack0000000000000070 >> 8 & 0xff;
              if (0x32 < uVar16) goto LAB_033fa89c;
              if ((uStack0000000000000070 & 0xffff) < 0x309d) {
                bVar4 = (uStack0000000000000070 & 0xffff) < 0x3099;
              }
              else if (uVar16 < 0x31) {
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
        iVar15 = 1;
      }
      if (uVar14 == 0) {
        lVar20 = FUN_033f823c(in_stack_00000088,unaff_x22,unaff_w26,unaff_w19);
        if (pbVar27 != (byte *)0x0) goto LAB_033fa454;
        if (lVar20 == 0) goto LAB_033fa3b0;
        if (*(long *)(lVar20 + 0x18) == 0) goto LAB_033fae50;
        lVar23 = *(long *)(lVar20 + 0x28);
        iVar24 = iStack0000000000000064;
        iVar21 = unaff_w26 + *(int *)(*(long *)(lVar20 + 0x18) + 0x18);
        if (lVar23 == 0) {
          if (in_stack_000000a0 == 0) {
            in_stack_000000a0 = unaff_x22;
            thunk_FUN_01f51358(&stack0x000000a0,unaff_x22);
            iStack00000000000000ac = iStack0000000000000080;
            if (*(long *)(lVar20 + 0x18) != 0) {
              iStack00000000000000b4 = iStack0000000000000064;
              iStack00000000000000a8 = unaff_w26 + *(int *)(*(long *)(lVar20 + 0x18) + 0x18);
              unaff_x22 = *(long *)(lVar20 + 0x20);
              iStack00000000000000b0 = unaff_w19;
              if (unaff_x22 != 0) {
                iStack0000000000000064 = 0;
                _uStack0000000000000078 = (ulong)uVar13 << 0x20;
                iStack0000000000000080 = 0;
                unaff_w26 = 0;
                iVar25 = *(int *)(unaff_x22 + 0x10);
                iStack00000000000000b4 = iVar24;
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
          uVar19 = 0;
          while ((long)uVar19 < (long)(int)*(uint *)(lVar23 + 0x18)) {
            if (*(uint *)(lVar23 + 0x18) <= uVar19) {
LAB_033fae54:
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            pbVar27[uVar19] = *(byte *)(lVar23 + uVar19 + 0x20);
            lVar23 = *(long *)(lVar20 + 0x28);
            uVar19 = uVar19 + 1;
            if (lVar23 == 0) goto LAB_033fae50;
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
        bVar6 = FUN_033f8000(in_stack_00000088,uVar12);
        pbVar27[1] = bVar6;
        if (1 < uStack0000000000000094 && (in_stack_00000030 & 0x100000000) == 0) {
          bVar6 = FUN_033f8094(in_stack_00000088,uVar12,uVar14);
          pbVar27[2] = bVar6;
        }
        puVar1 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
        if (uStack0000000000000094 < 3) {
LAB_033fa4a4:
          bVar3 = false;
        }
        else {
          if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0)
              == 0) {
            thunk_FUN_01ee6d7c();
          }
          bVar6 = FUN_033f60b8(uVar12);
          pbVar27[3] = bVar6;
          if (uStack0000000000000094 < 4) goto LAB_033fa4a4;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if ((uVar12 & 0xffff) < 0x3041) {
LAB_033fa8a8:
            bVar3 = false;
          }
          else if ((uVar12 + 0x9a & 0xffff) < 0x38) {
            bVar3 = true;
          }
          else {
            uVar18 = uVar12 >> 8 & 0xff;
            if (0x32 < uVar18) goto LAB_033fa8a8;
            if ((uVar12 & 0xffff) < 0x309d) {
              bVar3 = (uVar12 & 0xffff) < 0x3099;
            }
            else if (uVar18 < 0x31) {
              bVar3 = (uVar12 & 0xffff) != 0x30fb;
            }
            else {
              bVar3 = (uVar12 - 0x32d0 & 0xffff) < 0x2f;
            }
          }
        }
        if (1 < bVar7) {
          uStack0000000000000068 = uVar12;
        }
        iVar21 = unaff_w26 + 1;
      }
      else {
LAB_033fa454:
        bVar3 = false;
        iVar21 = unaff_w26 + 1;
      }
      unaff_w21 = iVar15 + unaff_w21;
      unaff_w26 = iVar21;
      iVar15 = unaff_w21;
      if ((unaff_w25 >> 1 & 1) == 0) {
        for (; iVar15 < unaff_w20; iVar15 = iVar15 + 1) {
          uVar11 = FUN_03409f80(in_stack_00000098,iVar15,0);
          cVar5 = FUN_033f7f6c(in_stack_00000088,uVar11);
          unaff_w21 = iVar15;
          if (cVar5 != '\x01') break;
          bVar6 = pbVar28[2];
          if (bVar6 == 0) {
            bVar6 = 2;
            pbVar28[2] = 2;
          }
          uVar11 = FUN_03409f80(in_stack_00000098,iVar15,0);
          cVar5 = FUN_033f8094(in_stack_00000088,uVar11,0);
          pbVar28[2] = cVar5 + bVar6;
          unaff_w21 = unaff_w20;
        }
        if (iVar21 < unaff_w19) {
          do {
            uVar11 = FUN_03409f80(unaff_x22,iVar21,0);
            cVar5 = FUN_033f7f6c(in_stack_00000088,uVar11);
            unaff_w26 = iVar21;
            if (cVar5 != '\x01') break;
            bVar6 = pbVar27[2];
            pbVar22 = (byte *)0x1;
            if (bVar6 == 0) {
              bVar6 = 2;
              pbVar27[2] = 2;
              pbVar22 = pbVar27;
            }
            uVar11 = FUN_03409f80(pbVar22,unaff_x22,iVar21,0);
            cVar5 = FUN_033f8094(in_stack_00000088,uVar11,0);
            iVar21 = iVar21 + 1;
            pbVar27[2] = cVar5 + bVar6;
            unaff_w26 = unaff_w19;
          } while (unaff_w19 != iVar21);
        }
      }
      puVar1 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
      iVar15 = (uint)*pbVar28 - (uint)*pbVar27;
      if (iVar15 == 0) {
        iVar15 = (uint)pbVar28[1] - (uint)pbVar27[1];
      }
      if (iVar15 != 0) {
        return iVar15;
      }
      uVar18 = 1;
      if (uStack0000000000000094 != 1) {
        if (((unaff_w25 >> 1 & 1) == 0) &&
           (iVar15 = (uint)pbVar28[2] - (uint)pbVar27[2], iVar15 != 0)) {
          if ((in_stack_00000018 & 0x100000000) != 0) {
            return -1;
          }
          iStack0000000000000074 = iVar15;
          uVar18 = 1;
          if (*(char *)(in_stack_00000088 + 0x5c) != '\0') {
            uVar18 = 2;
          }
        }
        else {
          uVar18 = 2;
          if (uStack0000000000000094 != 2) {
            iVar15 = (uint)pbVar28[3] - (uint)pbVar27[3];
            if (iVar15 == 0) {
              uVar18 = 3;
              if (uStack0000000000000094 == 3) goto LAB_033f9bcc;
              if (bVar4 != bVar3) {
                if ((in_stack_00000018 & 0x100000000) != 0) {
                  return -1;
                }
                iStack0000000000000074 = -1;
                if (bVar4 != false) {
                  iStack0000000000000074 = 1;
                }
                uVar18 = 3;
                goto LAB_033f9bcc;
              }
              uVar18 = uStack0000000000000094;
              if (bVar4 == false) goto LAB_033f9bcc;
              if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ +
                          0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar18 = FUN_033f651c(uStack0000000000000070);
              uVar16 = FUN_033f651c(uVar12);
              iVar15 = 1;
              if ((uVar18 & 1) != 0) {
                iVar15 = -1;
              }
              if (((uVar18 ^ uVar16) & 1) == 0) {
                iVar15 = 0;
              }
              if (iVar15 == 0) {
                if (*(int *)(*(long *)
                              Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                            + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                iVar15 = 4;
                if (uVar13 == 3) {
                  iVar15 = 5;
                }
                iVar21 = 3;
                if (in_stack_00000030._4_4_ == 0 && uVar13 != 0) {
                  iVar21 = iVar15;
                }
                iVar24 = -5;
                if (uVar14 != 3) {
                  iVar24 = -4;
                }
                iVar15 = -3;
                if (in_stack_00000030._4_4_ == 0 && uVar14 != 0) {
                  iVar15 = iVar24;
                }
                iVar15 = iVar15 + iVar21;
              }
              if (iVar15 == 0) {
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                bVar4 = (uStack0000000000000070 - 0x3041 & 0xffff) < 0x54;
                iVar15 = -1;
                if (bVar4) {
                  iVar15 = 1;
                }
                if (bVar4 == (uVar12 - 0x3041 & 0xffff) < 0x54) {
                  if (*(int *)(*(long *)
                                Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                              + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  uVar13 = FUN_033f81c8(uStack0000000000000070 & 0xffff,unaff_w25);
                  uVar12 = FUN_033f81c8(uVar12 & 0xffff,unaff_w25);
                  iVar15 = 1;
                  if ((uVar13 & 1) != 0) {
                    iVar15 = -1;
                  }
                  uVar18 = uStack0000000000000094;
                  if ((uVar13 & 1) == (uVar12 & 1)) goto LAB_033f9bcc;
                }
              }
              uVar18 = 3;
            }
            else {
              uVar18 = 2;
            }
            iStack0000000000000074 = iVar15;
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
      iStack0000000000000058 = unaff_w26 - iStack0000000000000080;
      if (in_stack_000000a0 != 0) {
        iStack0000000000000058 = iStack00000000000000a8 - iStack00000000000000ac;
      }
      uVar13 = FUN_033f8000(in_stack_00000088,uVar12);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar1);
      }
      iVar15 = FUN_033f60b8(uVar12);
      iStack0000000000000060 = (uVar13 & 0xff) << (ulong)(iVar15 + 8U & 0x1f);
    }
    unaff_w26 = unaff_w26 + 1;
    uStack0000000000000068 = uVar12;
  }
  iVar2 = iStack000000000000006c;
  iVar24 = iStack0000000000000060;
  iVar21 = iStack000000000000005c;
  iVar15 = iStack0000000000000058;
  iStack0000000000000058 = iVar15;
  iStack000000000000005c = iVar21;
  iStack0000000000000060 = iVar24;
  iStack000000000000006c = iVar2;
  if (uStack0000000000000094 == 5) {
    iStack0000000000000058 = -1;
    bVar4 = iStack000000000000005c != iStack0000000000000060;
    iStack000000000000005c = 0;
    iStack0000000000000060 = 0;
    iStack000000000000006c = -1;
    if (bVar4) {
      iStack0000000000000058 = iVar15;
      iStack000000000000005c = iVar21;
      iStack0000000000000060 = iVar24;
      iStack000000000000006c = iVar2;
      uVar18 = 4;
    }
  }
LAB_033f9bcc:
  uStack0000000000000094 = uVar18;
  uVar18 = uStack0000000000000094;
  if (unaff_w21 < iVar26) {
    if (unaff_x23 == 0) goto LAB_033fae50;
    uVar11 = FUN_03409f80(unaff_x23,unaff_w21,0);
    if (*(int *)(*(long *)
                  Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)
                          Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                        );
    }
    uVar19 = FUN_033f8ae0(uVar11,unaff_w25);
    if ((uVar19 & 1) != 0) {
      unaff_w21 = unaff_w21 + 1;
      goto LAB_033f9bcc;
    }
  }
  iVar15 = unaff_w26;
  if (unaff_w26 < iVar25) {
    if (unaff_x22 == 0) goto LAB_033fae50;
    bVar4 = true;
    do {
      uVar11 = FUN_03409f80(unaff_x22,unaff_w26,0);
      if (*(int *)(*(long *)
                    Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)
                            Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                          );
      }
      uVar19 = FUN_033f8ae0(uVar11,unaff_w25);
      if ((uVar19 & 1) == 0) {
        if (iVar26 <= unaff_w21) goto LAB_033f9d68;
        iVar15 = unaff_w26;
        if (!bVar4) goto LAB_033f9ca0;
        iVar21 = iStack0000000000000064;
        unaff_w28 = iStack0000000000000090;
        if ((unaff_w21 <= iStack0000000000000090) || (unaff_w26 <= iStack0000000000000064))
        goto joined_r0x033f9da4;
        unaff_w28 = unaff_w21;
        if (iVar25 <= unaff_w26) goto LAB_033f9db8;
        if (unaff_x23 == 0) goto LAB_033fae50;
        iVar21 = 0;
        goto System_Boolean__System_IConvertible_ToSByte;
      }
      unaff_w26 = unaff_w26 + 1;
      bVar4 = unaff_w26 < iVar25;
      iVar15 = iVar25;
    } while (iVar25 != unaff_w26);
  }
  unaff_w26 = iVar15;
  if (unaff_w21 < iVar26) {
LAB_033f9ca0:
    iStack0000000000000064 = iStack00000000000000b4;
    iVar21 = iStack00000000000000b0;
    unaff_w26 = iStack00000000000000a8;
    lVar20 = in_stack_000000a0;
    if (in_stack_000000a0 != 0) {
      iStack0000000000000080 = iStack00000000000000ac;
      in_stack_000000a0 = 0;
      thunk_FUN_01f51358(&stack0x000000a0,0);
      unaff_x22 = lVar20;
      iVar25 = iVar21;
      goto LAB_033f9bcc;
    }
  }
  else {
LAB_033f9d68:
    iVar24 = iStack00000000000000c8;
    iVar21 = iStack00000000000000c0;
    lVar20 = in_stack_000000b8;
    iVar15 = unaff_w26;
    if (in_stack_000000b8 != 0) {
      in_stack_000000b8 = 0;
      iStack0000000000000084 = iStack00000000000000c4;
      iStack0000000000000090 = iStack00000000000000cc;
      thunk_FUN_01f51358(&stack0x000000b8,0);
      unaff_x23 = lVar20;
      iVar26 = iVar24;
      unaff_w21 = iVar21;
      goto LAB_033f9bcc;
    }
  }
  puVar1 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
  if ((uStack0000000000000094 < 3) ||
     (iStack0000000000000074 == 0 || (in_stack_00000030 & 0x100000000) != 0)) goto LAB_033facd8;
  if ((iVar25 <= iVar15) || (iVar26 <= unaff_w21)) goto LAB_033fadd4;
  if (unaff_x23 != 0) goto LAB_033fabb8;
  goto LAB_033fae50;
  while ((iVar21 = iVar21 + 1, iVar15 + 1 < iVar25 && (unaff_w28 + 1 < iVar26))) {
System_Boolean__System_IConvertible_ToSByte:
    unaff_w28 = unaff_w21 + iVar21;
    iVar15 = unaff_w26 + iVar21;
    sVar9 = FUN_03409f80(unaff_x23,unaff_w28,0);
    sVar10 = FUN_03409f80(unaff_x22,iVar15,0);
    if (sVar9 != sVar10) goto LAB_033f9db8;
  }
  unaff_w28 = unaff_w21 + iVar21;
  iVar15 = unaff_w26 + iVar21;
LAB_033f9db8:
  unaff_w26 = iVar15;
  unaff_w21 = unaff_w28;
  if ((unaff_w26 == iVar25) || (iVar21 = unaff_w28, unaff_w28 == iVar26)) goto LAB_033f9bcc;
  goto LAB_033f9ddc;
  while( true ) {
    if (unaff_x23 == 0) goto LAB_033fae50;
    uVar11 = FUN_03409f80(unaff_x23,iVar21,0);
    cVar5 = FUN_033f7f6c(in_stack_00000088,uVar11);
    if (cVar5 != '\x01') break;
LAB_033f9ddc:
    iVar21 = iVar21 + -1;
    iVar24 = unaff_w26;
    if (iVar21 <= iStack0000000000000090) break;
  }
  do {
    iVar24 = iVar24 + -1;
    if (iVar24 <= iStack0000000000000064) break;
    uVar11 = FUN_03409f80(unaff_x22,iVar24,0);
    cVar5 = FUN_033f7f6c(in_stack_00000088,uVar11);
  } while (cVar5 == '\x01');
  iVar15 = iVar24;
  unaff_w21 = iVar21;
  if (iStack0000000000000090 < iVar21) {
    if (unaff_x23 == 0) goto LAB_033fae50;
    do {
      uVar11 = FUN_03409f80(unaff_x23,iVar21,0);
      uVar19 = FUN_033f8b5c(in_stack_00000088,uVar11);
      unaff_w21 = iVar21;
      if ((uVar19 & 1) != 0) break;
      iVar21 = iVar21 + -1;
      unaff_w21 = iStack0000000000000090;
    } while (iStack0000000000000090 < iVar21);
  }
  do {
    iVar21 = unaff_w26;
    if (iVar24 <= iStack0000000000000064) break;
    uVar11 = FUN_03409f80(unaff_x22,iVar24,0);
    uVar19 = FUN_033f8b5c(in_stack_00000088,uVar11);
    iVar21 = unaff_w26;
    iVar15 = iVar24;
    if ((uVar19 & 1) != 0) break;
    iVar24 = iVar24 + -1;
    iVar15 = iStack0000000000000064;
  } while( true );
joined_r0x033f9da4:
  unaff_w26 = iVar15;
  iStack0000000000000064 = iVar21;
  unaff_x24 = in_stack_00000088;
  unaff_w20 = iVar26;
  unaff_w19 = iVar25;
  in_stack_00000098 = unaff_x23;
  if (unaff_x23 == 0) goto LAB_033fae50;
  goto code_r0x033f9efc;
LAB_033facd8:
  if ((uStack0000000000000094 == 1) && (iStack0000000000000074 != 0)) {
    if (unaff_w21 < iVar26) {
      iVar21 = unaff_w21;
      if (unaff_x23 == 0) goto LAB_033fae50;
      do {
        uVar11 = FUN_03409f80(unaff_x23,iVar21,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar1);
        }
        uVar19 = FUN_033f6274(uVar11);
        unaff_w21 = iVar21;
      } while (((uVar19 & 1) != 0) && (iVar21 = iVar21 + 1, unaff_w21 = iVar26, iVar26 != iVar21));
    }
    if (iVar15 < iVar25) {
      iVar21 = iVar15;
      if (unaff_x22 == 0) {
LAB_033fae50:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        uVar11 = FUN_03409f80(unaff_x22,iVar21,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar1);
        }
        uVar19 = FUN_033f6274(uVar11);
        iVar15 = iVar21;
      } while (((uVar19 & 1) != 0) && (iVar21 = iVar21 + 1, iVar15 = iVar25, iVar25 != iVar21));
    }
  }
  if (iStack0000000000000074 != 0) goto LAB_033fadd4;
  goto LAB_033fad8c;
  while( true ) {
    iStack0000000000000074 = 0;
    _uStack0000000000000078 = 0;
    if (iVar26 <= unaff_w21) break;
LAB_033fabb8:
    uVar11 = FUN_03409f80(unaff_x23,unaff_w21,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar1);
    }
    uVar19 = FUN_033f6274(uVar11);
    if ((uVar19 & 1) == 0) goto LAB_033facd8;
    if (unaff_x22 == 0) goto LAB_033fae50;
    uVar11 = FUN_03409f80(unaff_x22,iVar15,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar1);
    }
    uVar19 = FUN_033f6274(uVar11);
    if ((uVar19 & 1) == 0) goto LAB_033facd8;
    uVar11 = FUN_03409f80(unaff_x23,unaff_w21,0);
    uVar17 = FUN_033f86cc(in_stack_00000088,uVar11,unaff_w25);
    uVar18 = FUN_033f8094(in_stack_00000088,uVar17,uStack000000000000007c);
    uVar11 = FUN_03409f80(unaff_x22,iVar15,0);
    uVar17 = FUN_033f86cc(in_stack_00000088,uVar11,unaff_w25);
    uVar12 = FUN_033f8094(in_stack_00000088,uVar17,_uStack0000000000000078 & 0xffffffff);
    iStack0000000000000074 = (uVar18 & 0xff) - (uVar12 & 0xff);
    if (iStack0000000000000074 != 0) goto LAB_033facd8;
    iVar15 = iVar15 + 1;
    unaff_w21 = unaff_w21 + 1;
    if (iVar25 <= iVar15) break;
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
        if (iVar15 == iVar25) {
          *in_stack_00000010 = 1;
        }
        if (unaff_w21 == iVar26) {
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
  if (unaff_w21 == iVar26) {
    if (iVar15 != iVar25) {
      iStack0000000000000074 = -1;
    }
  }
  else {
    iStack0000000000000074 = 1;
  }
  return iStack0000000000000074;
}


