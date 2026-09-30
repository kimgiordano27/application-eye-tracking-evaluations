/*
FUNCTION_NAME: System.Convert$$ToUInt16
ENTRY_POINT: 033f9e90
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

int System_Convert__ToUInt16(void)

{
  int iVar1;
  int iVar2;
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
  int iVar16;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  int in_w8;
  byte *pbVar23;
  long lVar24;
  int iVar25;
  int unaff_w19;
  int unaff_w20;
  int unaff_w21;
  int iVar26;
  long unaff_x22;
  int iVar27;
  long unaff_x23;
  int unaff_w24;
  byte *pbVar28;
  uint unaff_w25;
  int unaff_w26;
  int unaff_w27;
  int iVar29;
  int unaff_w28;
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
  
code_r0x033f9e90:
  iVar16 = unaff_w24;
  iVar26 = iStack0000000000000090;
  iVar27 = unaff_w26;
  if (in_w8 < unaff_w28) goto LAB_033f9e68;
joined_r0x033f9ea0:
  iVar25 = unaff_w20;
  iVar1 = unaff_w19;
  iVar2 = iStack0000000000000074;
  uVar20 = uStack0000000000000094;
  unaff_w26 = iVar16;
  if (unaff_w27 < unaff_w24) {
    uVar12 = FUN_03409f80(unaff_x22,unaff_w24,0);
    uVar21 = FUN_033f8b5c(in_stack_00000088,uVar12);
    unaff_w26 = unaff_w24;
    if ((uVar21 & 1) == 0) {
      unaff_w24 = unaff_w24 + -1;
      iVar16 = unaff_w27;
      goto joined_r0x033f9ea0;
    }
  }
joined_r0x033f9ef8:
  if (unaff_x23 != 0) {
    uVar12 = FUN_03409f80(unaff_x23,iVar26,0);
    uStack0000000000000070 = FUN_033f86cc(in_stack_00000088,uVar12,unaff_w25);
    uVar12 = FUN_03409f80(unaff_x22,unaff_w26,0);
    uVar13 = FUN_033f86cc(in_stack_00000088,uVar12,unaff_w25);
    uVar14 = FUN_033f87b0(in_stack_00000088,uStack0000000000000070);
    in_stack_00000078 = CONCAT44(uVar14,(undefined4)in_stack_00000078);
    unaff_w27 = iVar27;
    iStack0000000000000074 = iVar2;
    unaff_w20 = iVar25;
    unaff_w19 = iVar1;
    iStack0000000000000090 = unaff_w21;
    uStack0000000000000094 = uVar20;
    if (uVar14 == 0) {
LAB_033f9f84:
      pbVar30 = (byte *)0x0;
    }
    else {
      if (-1 < *(int *)(in_stack_00000048 + 0x28)) {
        uStack0000000000000070 =
             FUN_033f88d0(in_stack_00000088,*(int *)(in_stack_00000048 + 0x28),uVar14,unaff_w25);
        goto LAB_033f9f84;
      }
      pbVar30 = *(byte **)(in_stack_00000048 + 0x30);
      if (pbVar30 == (byte *)0x0) {
        iVar26 = iVar26 + 1;
        goto LAB_033f9bcc;
      }
    }
    uVar15 = FUN_033f87b0(in_stack_00000088,uVar13);
    in_stack_00000078 = CONCAT44(uVar14,uVar15);
    unaff_x23 = in_stack_00000098;
    if (uVar15 == 0) {
System_Convert__ToInt64:
      pbVar28 = (byte *)0x0;
    }
    else {
      if (-1 < (int)uStack0000000000000068) {
        uVar13 = FUN_033f88d0(in_stack_00000088,uStack0000000000000068,uVar15,unaff_w25);
        goto System_Convert__ToInt64;
      }
      pbVar28 = in_stack_00000038;
      if (in_stack_00000038 == (byte *)0x0) {
        in_stack_00000038 = (byte *)0x0;
        unaff_w26 = unaff_w26 + 1;
        goto LAB_033f9bcc;
      }
    }
    bVar7 = FUN_033f7f6c(in_stack_00000088,uStack0000000000000070);
    bVar8 = FUN_033f7f6c(in_stack_00000088,uVar13);
    if (bVar7 == 6) {
      if (((unaff_w25 >> 0x1d & 1) == 0) && (uVar20 == 5)) {
        iStack000000000000006c = iVar26 - iStack0000000000000084;
        if (in_stack_000000b8 != 0) {
          iStack000000000000006c = iStack00000000000000c0 - iStack00000000000000c4;
        }
        uVar14 = FUN_033f8000(in_stack_00000088,uStack0000000000000070);
        if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__);
        }
        iVar16 = FUN_033f60b8(uStack0000000000000070);
        iStack000000000000005c = (uVar14 & 0xff) << (ulong)(iVar16 + 8U & 0x1f);
      }
      iVar26 = iVar26 + 1;
      *(uint *)(in_stack_00000048 + 0x28) = uStack0000000000000070;
      if (bVar8 == 6) goto LAB_033fa12c;
    }
    else {
      if (bVar8 != 6) {
        if (uVar14 == 0) {
          lVar22 = FUN_033f823c(in_stack_00000088,in_stack_00000098,iVar26,iVar25);
          if (pbVar30 == (byte *)0x0) {
            if (lVar22 == 0) goto LAB_033fa2f0;
            if (*(long *)(lVar22 + 0x18) == 0) goto LAB_033fae50;
            lVar24 = *(long *)(lVar22 + 0x28);
            iVar16 = *(int *)(*(long *)(lVar22 + 0x18) + 0x18);
            if (lVar24 == 0) {
              if (in_stack_000000b8 == 0) {
                in_stack_000000b8 = in_stack_00000098;
                thunk_FUN_01f51358(&stack0x000000b8,in_stack_00000098);
                iStack00000000000000c4 = iStack0000000000000084;
                if (*(long *)(lVar22 + 0x18) != 0) {
                  iStack00000000000000c0 = iVar26 + *(int *)(*(long *)(lVar22 + 0x18) + 0x18);
                  unaff_x23 = *(long *)(lVar22 + 0x20);
                  iStack00000000000000c8 = iVar25;
                  iStack00000000000000cc = unaff_w21;
                  if (unaff_x23 != 0) {
                    iStack0000000000000090 = 0;
                    in_stack_00000078 = (ulong)uVar15;
                    iStack0000000000000084 = 0;
                    unaff_w20 = *(int *)(unaff_x23 + 0x10);
                    iVar26 = 0;
                    goto LAB_033f9bcc;
                  }
                }
                goto LAB_033fae50;
              }
              bVar5 = false;
              pbVar30 = (byte *)0x0;
            }
            else {
              pbVar30 = *(byte **)(in_stack_00000048 + 0x18);
              uVar21 = 0;
              while ((long)uVar21 < (long)(int)*(uint *)(lVar24 + 0x18)) {
                if (*(uint *)(lVar24 + 0x18) <= uVar21) goto LAB_033fae54;
                pbVar30[uVar21] = *(byte *)(lVar24 + uVar21 + 0x20);
                lVar24 = *(long *)(lVar22 + 0x28);
                uVar21 = uVar21 + 1;
                if (lVar24 == 0) goto LAB_033fae50;
              }
              bVar5 = false;
              *(undefined4 *)(in_stack_00000048 + 0x28) = 0xffffffff;
              *(byte **)(in_stack_00000048 + 0x30) = pbVar30;
            }
          }
          else {
            bVar5 = false;
            iVar16 = 1;
          }
        }
        else {
          if (pbVar30 == (byte *)0x0) {
LAB_033fa2f0:
            pbVar30 = *(byte **)(in_stack_00000048 + 0x18);
            *pbVar30 = bVar7;
            bVar9 = FUN_033f8000(in_stack_00000088,uStack0000000000000070);
            pbVar30[1] = bVar9;
            if (1 < uVar20 && (in_stack_00000030 & 0x100000000) == 0) {
              bVar9 = FUN_033f8094(in_stack_00000088,uStack0000000000000070,uVar14);
              pbVar30[2] = bVar9;
            }
            if (uVar20 < 3) {
LAB_033fa37c:
              bVar5 = false;
            }
            else {
              if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ +
                          0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              bVar9 = FUN_033f60b8(uStack0000000000000070);
              pbVar30[3] = bVar9;
              if (uVar20 < 4) goto LAB_033fa37c;
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
                uVar17 = uStack0000000000000070 >> 8 & 0xff;
                if (0x32 < uVar17) goto LAB_033fa89c;
                if ((uStack0000000000000070 & 0xffff) < 0x309d) {
                  bVar5 = (uStack0000000000000070 & 0xffff) < 0x3099;
                }
                else if (uVar17 < 0x31) {
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
          iVar16 = 1;
        }
        if (uVar15 == 0) {
          lVar22 = FUN_033f823c(in_stack_00000088,unaff_x22,unaff_w26,iVar1);
          if (pbVar28 != (byte *)0x0) goto LAB_033fa454;
          if (lVar22 == 0) goto LAB_033fa3b0;
          if (*(long *)(lVar22 + 0x18) == 0) goto LAB_033fae50;
          lVar24 = *(long *)(lVar22 + 0x28);
          iVar29 = unaff_w26 + *(int *)(*(long *)(lVar22 + 0x18) + 0x18);
          if (lVar24 == 0) {
            if (in_stack_000000a0 == 0) {
              in_stack_000000a0 = unaff_x22;
              thunk_FUN_01f51358(&stack0x000000a0,unaff_x22);
              iStack00000000000000ac = iStack0000000000000080;
              if (*(long *)(lVar22 + 0x18) != 0) {
                iStack00000000000000a8 = unaff_w26 + *(int *)(*(long *)(lVar22 + 0x18) + 0x18);
                unaff_x22 = *(long *)(lVar22 + 0x20);
                iStack00000000000000b0 = iVar1;
                iStack00000000000000b4 = iVar27;
                if (unaff_x22 != 0) {
                  in_stack_00000078 = (ulong)uVar14 << 0x20;
                  iStack0000000000000080 = 0;
                  unaff_w26 = 0;
                  unaff_w19 = *(int *)(unaff_x22 + 0x10);
                  unaff_w27 = 0;
                  goto LAB_033f9bcc;
                }
              }
              goto LAB_033fae50;
            }
            bVar4 = false;
            pbVar28 = (byte *)0x0;
          }
          else {
            pbVar28 = *(byte **)(in_stack_00000048 + 0x20);
            uVar21 = 0;
            while ((long)uVar21 < (long)(int)*(uint *)(lVar24 + 0x18)) {
              if (*(uint *)(lVar24 + 0x18) <= uVar21) {
LAB_033fae54:
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              pbVar28[uVar21] = *(byte *)(lVar24 + uVar21 + 0x20);
              lVar24 = *(long *)(lVar22 + 0x28);
              uVar21 = uVar21 + 1;
              if (lVar24 == 0) goto LAB_033fae50;
            }
            uStack0000000000000068 = 0xffffffff;
            bVar4 = false;
            in_stack_00000038 = pbVar28;
          }
        }
        else if (pbVar28 == (byte *)0x0) {
LAB_033fa3b0:
          pbVar28 = *(byte **)(in_stack_00000048 + 0x20);
          *pbVar28 = bVar8;
          bVar7 = FUN_033f8000(in_stack_00000088,uVar13);
          pbVar28[1] = bVar7;
          if (1 < uVar20 && (in_stack_00000030 & 0x100000000) == 0) {
            bVar7 = FUN_033f8094(in_stack_00000088,uVar13,uVar15);
            pbVar28[2] = bVar7;
          }
          puVar3 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
          if (uVar20 < 3) {
LAB_033fa4a4:
            bVar4 = false;
          }
          else {
            if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ +
                        0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            bVar7 = FUN_033f60b8(uVar13);
            pbVar28[3] = bVar7;
            if (uVar20 < 4) goto LAB_033fa4a4;
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
              uVar17 = uVar13 >> 8 & 0xff;
              if (0x32 < uVar17) goto LAB_033fa8a8;
              if ((uVar13 & 0xffff) < 0x309d) {
                bVar4 = (uVar13 & 0xffff) < 0x3099;
              }
              else if (uVar17 < 0x31) {
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
          iVar29 = unaff_w26 + 1;
        }
        else {
LAB_033fa454:
          bVar4 = false;
          iVar29 = unaff_w26 + 1;
        }
        iVar26 = iVar16 + iVar26;
        unaff_w26 = iVar29;
        iVar16 = iVar26;
        if ((unaff_w25 >> 1 & 1) == 0) {
          for (; iVar16 < iVar25; iVar16 = iVar16 + 1) {
            uVar12 = FUN_03409f80(in_stack_00000098,iVar16,0);
            cVar6 = FUN_033f7f6c(in_stack_00000088,uVar12);
            iVar26 = iVar16;
            if (cVar6 != '\x01') break;
            bVar7 = pbVar30[2];
            if (bVar7 == 0) {
              bVar7 = 2;
              pbVar30[2] = 2;
            }
            uVar12 = FUN_03409f80(in_stack_00000098,iVar16,0);
            cVar6 = FUN_033f8094(in_stack_00000088,uVar12,0);
            pbVar30[2] = cVar6 + bVar7;
            iVar26 = iVar25;
          }
          if (iVar29 < iVar1) {
            do {
              uVar12 = FUN_03409f80(unaff_x22,iVar29,0);
              cVar6 = FUN_033f7f6c(in_stack_00000088,uVar12);
              unaff_w26 = iVar29;
              if (cVar6 != '\x01') break;
              bVar7 = pbVar28[2];
              pbVar23 = (byte *)0x1;
              if (bVar7 == 0) {
                bVar7 = 2;
                pbVar28[2] = 2;
                pbVar23 = pbVar28;
              }
              uVar12 = FUN_03409f80(pbVar23,unaff_x22,iVar29,0);
              cVar6 = FUN_033f8094(in_stack_00000088,uVar12,0);
              iVar29 = iVar29 + 1;
              pbVar28[2] = cVar6 + bVar7;
              unaff_w26 = iVar1;
            } while (iVar1 != iVar29);
          }
        }
        puVar3 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
        iVar16 = (uint)*pbVar30 - (uint)*pbVar28;
        if (iVar16 == 0) {
          iVar16 = (uint)pbVar30[1] - (uint)pbVar28[1];
        }
        if (iVar16 != 0) {
          return iVar16;
        }
        uStack0000000000000094 = 1;
        if (uVar20 != 1) {
          if (((unaff_w25 >> 1 & 1) == 0) &&
             (iStack0000000000000074 = (uint)pbVar30[2] - (uint)pbVar28[2],
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
            iStack0000000000000074 = iVar2;
            uStack0000000000000094 = 2;
            if (uVar20 != 2) {
              iVar16 = (uint)pbVar30[3] - (uint)pbVar28[3];
              if (iVar16 == 0) {
                uStack0000000000000094 = 3;
                if (uVar20 == 3) goto LAB_033f9bcc;
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
                uStack0000000000000094 = uVar20;
                if (bVar5 == false) goto LAB_033f9bcc;
                if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ +
                            0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar17 = FUN_033f651c(uStack0000000000000070);
                uVar18 = FUN_033f651c(uVar13);
                iVar16 = 1;
                if ((uVar17 & 1) != 0) {
                  iVar16 = -1;
                }
                if (((uVar17 ^ uVar18) & 1) == 0) {
                  iVar16 = 0;
                }
                if (iVar16 == 0) {
                  if (*(int *)(*(long *)
                                Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                              + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  iVar16 = 4;
                  if (uVar14 == 3) {
                    iVar16 = 5;
                  }
                  iVar27 = 3;
                  if (in_stack_00000030._4_4_ == 0 && uVar14 != 0) {
                    iVar27 = iVar16;
                  }
                  iVar25 = -5;
                  if (uVar15 != 3) {
                    iVar25 = -4;
                  }
                  iVar16 = -3;
                  if (in_stack_00000030._4_4_ == 0 && uVar15 != 0) {
                    iVar16 = iVar25;
                  }
                  iVar16 = iVar16 + iVar27;
                }
                if (iVar16 == 0) {
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  bVar5 = (uStack0000000000000070 - 0x3041 & 0xffff) < 0x54;
                  iVar16 = -1;
                  if (bVar5) {
                    iVar16 = 1;
                  }
                  if (bVar5 == (uVar13 - 0x3041 & 0xffff) < 0x54) {
                    if (*(int *)(*(long *)
                                  Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                                + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    uVar14 = FUN_033f81c8(uStack0000000000000070 & 0xffff,unaff_w25);
                    uVar13 = FUN_033f81c8(uVar13 & 0xffff,unaff_w25);
                    iVar16 = 1;
                    if ((uVar14 & 1) != 0) {
                      iVar16 = -1;
                    }
                    if ((uVar14 & 1) == (uVar13 & 1)) goto LAB_033f9bcc;
                  }
                }
                uStack0000000000000094 = 3;
              }
              else {
                uStack0000000000000094 = 2;
              }
              iStack0000000000000074 = iVar16;
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
      if (((unaff_w25 >> 0x1d & 1) == 0) && (uVar20 == 5)) {
        iStack0000000000000058 = unaff_w26 - iStack0000000000000080;
        if (in_stack_000000a0 != 0) {
          iStack0000000000000058 = iStack00000000000000a8 - iStack00000000000000ac;
        }
        uVar14 = FUN_033f8000(in_stack_00000088,uVar13);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar3);
        }
        iVar16 = FUN_033f60b8(uVar13);
        in_stack_00000060 = (uVar14 & 0xff) << (ulong)(iVar16 + 8U & 0x1f);
      }
      unaff_w26 = unaff_w26 + 1;
      uStack0000000000000068 = uVar13;
    }
    iVar1 = iStack000000000000006c;
    iVar25 = in_stack_00000060;
    iVar27 = iStack000000000000005c;
    iVar16 = iStack0000000000000058;
    iStack0000000000000058 = iVar16;
    iStack000000000000005c = iVar27;
    in_stack_00000060 = iVar25;
    iStack000000000000006c = iVar1;
    if (uVar20 == 5) {
      iStack0000000000000058 = -1;
      bVar5 = iStack000000000000005c != in_stack_00000060;
      iStack000000000000005c = 0;
      in_stack_00000060 = 0;
      iStack000000000000006c = -1;
      if (bVar5) {
        iStack0000000000000058 = iVar16;
        iStack000000000000005c = iVar27;
        in_stack_00000060 = iVar25;
        iStack000000000000006c = iVar1;
        uStack0000000000000094 = 4;
      }
    }
LAB_033f9bcc:
    for (; iVar26 < unaff_w20; iVar26 = iVar26 + 1) {
      if (unaff_x23 == 0) goto LAB_033fae50;
      uVar12 = FUN_03409f80(unaff_x23,iVar26,0);
      if (*(int *)(*(long *)
                    Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)
                            Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                          );
      }
      uVar21 = FUN_033f8ae0(uVar12,unaff_w25);
      if ((uVar21 & 1) == 0) break;
    }
    iVar16 = unaff_w26;
    if (unaff_w26 < unaff_w19) {
      if (unaff_x22 == 0) goto LAB_033fae50;
      bVar5 = true;
      do {
        uVar12 = FUN_03409f80(unaff_x22,unaff_w26,0);
        if (*(int *)(*(long *)
                      Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                    + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)
                              Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                            );
        }
        uVar21 = FUN_033f8ae0(uVar12,unaff_w25);
        if ((uVar21 & 1) == 0) {
          if (unaff_w20 <= iVar26) goto LAB_033f9d68;
          iVar16 = unaff_w26;
          if (!bVar5) goto LAB_033f9ca0;
          iVar25 = unaff_w20;
          iVar1 = unaff_w19;
          iVar2 = iStack0000000000000074;
          uVar20 = uStack0000000000000094;
          in_stack_00000098 = unaff_x23;
          unaff_w21 = iStack0000000000000090;
          iVar27 = unaff_w27;
          if ((iVar26 <= iStack0000000000000090) || (unaff_w26 <= unaff_w27))
          goto joined_r0x033f9ef8;
          unaff_w21 = iVar26;
          if (unaff_w19 <= unaff_w26) goto LAB_033f9db8;
          if (unaff_x23 == 0) goto LAB_033fae50;
          iVar27 = 0;
          goto System_Boolean__System_IConvertible_ToSByte;
        }
        unaff_w26 = unaff_w26 + 1;
        bVar5 = unaff_w26 < unaff_w19;
        iVar16 = unaff_w19;
      } while (unaff_w19 != unaff_w26);
    }
    unaff_w26 = iVar16;
    if (iVar26 < unaff_w20) {
LAB_033f9ca0:
      unaff_w27 = iStack00000000000000b4;
      iVar27 = iStack00000000000000b0;
      unaff_w26 = iStack00000000000000a8;
      lVar22 = in_stack_000000a0;
      if (in_stack_000000a0 != 0) {
        iStack0000000000000080 = iStack00000000000000ac;
        in_stack_000000a0 = 0;
        thunk_FUN_01f51358(&stack0x000000a0,0);
        unaff_x22 = lVar22;
        unaff_w19 = iVar27;
        goto LAB_033f9bcc;
      }
    }
    else {
LAB_033f9d68:
      iVar25 = iStack00000000000000c8;
      iVar27 = iStack00000000000000c0;
      lVar22 = in_stack_000000b8;
      iVar16 = unaff_w26;
      if (in_stack_000000b8 != 0) {
        in_stack_000000b8 = 0;
        iStack0000000000000084 = iStack00000000000000c4;
        iStack0000000000000090 = iStack00000000000000cc;
        thunk_FUN_01f51358(&stack0x000000b8,0);
        unaff_x23 = lVar22;
        unaff_w20 = iVar25;
        iVar26 = iVar27;
        goto LAB_033f9bcc;
      }
    }
    puVar3 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
    if ((uStack0000000000000094 < 3) ||
       (iStack0000000000000074 == 0 || (in_stack_00000030 & 0x100000000) != 0)) goto LAB_033facd8;
    if ((unaff_w19 <= iVar16) || (unaff_w20 <= iVar26)) goto LAB_033fadd4;
    if (unaff_x23 == 0) goto LAB_033fae50;
    goto LAB_033fabb8;
  }
  goto LAB_033fae50;
  while ((iVar27 = iVar27 + 1, iVar16 + 1 < unaff_w19 && (unaff_w21 + 1 < unaff_w20))) {
System_Boolean__System_IConvertible_ToSByte:
    unaff_w21 = iVar26 + iVar27;
    iVar16 = unaff_w26 + iVar27;
    sVar10 = FUN_03409f80(unaff_x23,unaff_w21,0);
    sVar11 = FUN_03409f80(unaff_x22,iVar16,0);
    if (sVar10 != sVar11) goto LAB_033f9db8;
  }
  unaff_w21 = iVar26 + iVar27;
  iVar16 = unaff_w26 + iVar27;
LAB_033f9db8:
  unaff_w26 = iVar16;
  iVar26 = unaff_w21;
  if ((unaff_w26 != unaff_w19) && (unaff_w28 = unaff_w21, unaff_w21 != unaff_w20))
  goto LAB_033f9ddc;
  goto LAB_033f9bcc;
  while( true ) {
    if (unaff_x23 == 0) goto LAB_033fae50;
    uVar12 = FUN_03409f80(unaff_x23,unaff_w28,0);
    cVar6 = FUN_033f7f6c(in_stack_00000088,uVar12);
    if (cVar6 != '\x01') break;
LAB_033f9ddc:
    unaff_w28 = unaff_w28 + -1;
    unaff_w24 = unaff_w26;
    if (unaff_w28 <= iStack0000000000000090) break;
  }
  do {
    unaff_w24 = unaff_w24 + -1;
    if (unaff_w24 <= unaff_w27) break;
    uVar12 = FUN_03409f80(unaff_x22,unaff_w24,0);
    cVar6 = FUN_033f7f6c(in_stack_00000088,uVar12);
  } while (cVar6 == '\x01');
  iVar16 = unaff_w24;
  iVar26 = unaff_w28;
  iVar27 = unaff_w26;
  if (unaff_w28 <= iStack0000000000000090) goto joined_r0x033f9ea0;
  if (unaff_x23 == 0) goto LAB_033fae50;
LAB_033f9e68:
  uVar12 = FUN_03409f80(unaff_x23,unaff_w28,0);
  uVar21 = FUN_033f8b5c(in_stack_00000088,uVar12);
  iVar16 = unaff_w24;
  iVar26 = unaff_w28;
  iVar27 = unaff_w26;
  if ((uVar21 & 1) == 0) goto code_r0x033f9e88;
  goto joined_r0x033f9ea0;
code_r0x033f9e88:
  unaff_w28 = unaff_w28 + -1;
  in_w8 = iStack0000000000000090;
  goto code_r0x033f9e90;
LAB_033facd8:
  if ((uStack0000000000000094 == 1) && (iStack0000000000000074 != 0)) {
    if (iVar26 < unaff_w20) {
      iVar27 = iVar26;
      if (unaff_x23 == 0) goto LAB_033fae50;
      do {
        uVar12 = FUN_03409f80(unaff_x23,iVar27,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar3);
        }
        uVar21 = FUN_033f6274(uVar12);
        iVar26 = iVar27;
      } while (((uVar21 & 1) != 0) && (iVar27 = iVar27 + 1, iVar26 = unaff_w20, unaff_w20 != iVar27)
              );
    }
    if (iVar16 < unaff_w19) {
      iVar27 = iVar16;
      if (unaff_x22 == 0) {
LAB_033fae50:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        uVar12 = FUN_03409f80(unaff_x22,iVar27,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar3);
        }
        uVar21 = FUN_033f6274(uVar12);
        iVar16 = iVar27;
      } while (((uVar21 & 1) != 0) && (iVar27 = iVar27 + 1, iVar16 = unaff_w19, unaff_w19 != iVar27)
              );
    }
  }
  if (iStack0000000000000074 != 0) goto LAB_033fadd4;
  goto LAB_033fad8c;
  while( true ) {
    iStack0000000000000074 = 0;
    in_stack_00000078 = 0;
    if (unaff_w20 <= iVar26) break;
LAB_033fabb8:
    uVar12 = FUN_03409f80(unaff_x23,iVar26,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar3);
    }
    uVar21 = FUN_033f6274(uVar12);
    if ((uVar21 & 1) == 0) goto LAB_033facd8;
    if (unaff_x22 == 0) goto LAB_033fae50;
    uVar12 = FUN_03409f80(unaff_x22,iVar16,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar3);
    }
    uVar21 = FUN_033f6274(uVar12);
    if ((uVar21 & 1) == 0) goto LAB_033facd8;
    uVar12 = FUN_03409f80(unaff_x23,iVar26,0);
    uVar19 = FUN_033f86cc(in_stack_00000088,uVar12,unaff_w25);
    uVar20 = FUN_033f8094(in_stack_00000088,uVar19,in_stack_00000078._4_4_);
    uVar12 = FUN_03409f80(unaff_x22,iVar16,0);
    uVar19 = FUN_033f86cc(in_stack_00000088,uVar12,unaff_w25);
    uVar13 = FUN_033f8094(in_stack_00000088,uVar19,in_stack_00000078 & 0xffffffff);
    iStack0000000000000074 = (uVar20 & 0xff) - (uVar13 & 0xff);
    if (iStack0000000000000074 != 0) goto LAB_033facd8;
    iVar16 = iVar16 + 1;
    iVar26 = iVar26 + 1;
    if (unaff_w19 <= iVar16) break;
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
        if (iVar16 == unaff_w19) {
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
    if (iVar16 != unaff_w19) {
      iStack0000000000000074 = -1;
    }
  }
  else {
    iStack0000000000000074 = 1;
  }
  return iStack0000000000000074;
}


