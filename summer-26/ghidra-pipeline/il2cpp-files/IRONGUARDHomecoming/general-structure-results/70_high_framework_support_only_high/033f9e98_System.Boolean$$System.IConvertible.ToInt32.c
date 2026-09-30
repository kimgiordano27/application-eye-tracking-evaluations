/*
FUNCTION_NAME: System.Boolean$$System.IConvertible.ToInt32
ENTRY_POINT: 033f9e98
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

int System_Boolean__System_IConvertible_ToInt32(void)

{
  int iVar1;
  undefined *puVar2;
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
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  int iVar22;
  byte *pbVar23;
  long lVar24;
  int iVar25;
  int unaff_w19;
  int unaff_w20;
  int unaff_w21;
  int iVar26;
  int iVar27;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  byte *pbVar28;
  uint unaff_w25;
  int unaff_w26;
  int unaff_w27;
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
  
  iVar15 = unaff_w24;
  iVar27 = iStack0000000000000090;
joined_r0x033f9ea0:
  do {
    iVar22 = unaff_w20;
    iVar25 = unaff_w19;
    iVar1 = iStack0000000000000074;
    uVar19 = uStack0000000000000094;
    iVar26 = iVar15;
    if (unaff_w24 <= unaff_w27) {
joined_r0x033f9ef8:
      if (unaff_x23 != 0) {
        uVar11 = FUN_03409f80(unaff_x23,iVar27,0);
        uStack0000000000000070 = FUN_033f86cc(in_stack_00000088,uVar11,unaff_w25);
        uVar11 = FUN_03409f80(unaff_x22,iVar26,0);
        uVar12 = FUN_033f86cc(in_stack_00000088,uVar11,unaff_w25);
        uVar13 = FUN_033f87b0(in_stack_00000088,uStack0000000000000070);
        in_stack_00000078 = CONCAT44(uVar13,(undefined4)in_stack_00000078);
        unaff_w27 = unaff_w26;
        iStack0000000000000074 = iVar1;
        unaff_w20 = iVar22;
        unaff_w19 = iVar25;
        iStack0000000000000090 = unaff_w21;
        uStack0000000000000094 = uVar19;
        if (uVar13 == 0) {
LAB_033f9f84:
          pbVar30 = (byte *)0x0;
        }
        else {
          if (-1 < *(int *)(in_stack_00000048 + 0x28)) {
            uStack0000000000000070 =
                 FUN_033f88d0(in_stack_00000088,*(int *)(in_stack_00000048 + 0x28),uVar13,unaff_w25)
            ;
            goto LAB_033f9f84;
          }
          pbVar30 = *(byte **)(in_stack_00000048 + 0x30);
          if (pbVar30 == (byte *)0x0) {
            iVar27 = iVar27 + 1;
            goto LAB_033f9bcc;
          }
        }
        uVar14 = FUN_033f87b0(in_stack_00000088,uVar12);
        in_stack_00000078 = CONCAT44(uVar13,uVar14);
        unaff_x23 = in_stack_00000098;
        if (uVar14 == 0) {
System_Convert__ToInt64:
          pbVar28 = (byte *)0x0;
        }
        else {
          if (-1 < (int)uStack0000000000000068) {
            uVar12 = FUN_033f88d0(in_stack_00000088,uStack0000000000000068,uVar14,unaff_w25);
            goto System_Convert__ToInt64;
          }
          pbVar28 = in_stack_00000038;
          if (in_stack_00000038 == (byte *)0x0) {
            in_stack_00000038 = (byte *)0x0;
            iVar26 = iVar26 + 1;
            goto LAB_033f9bcc;
          }
        }
        bVar6 = FUN_033f7f6c(in_stack_00000088,uStack0000000000000070);
        bVar7 = FUN_033f7f6c(in_stack_00000088,uVar12);
        if (bVar6 == 6) {
          if (((unaff_w25 >> 0x1d & 1) == 0) && (uVar19 == 5)) {
            iStack000000000000006c = iVar27 - iStack0000000000000084;
            if (in_stack_000000b8 != 0) {
              iStack000000000000006c = iStack00000000000000c0 - iStack00000000000000c4;
            }
            uVar13 = FUN_033f8000(in_stack_00000088,uStack0000000000000070);
            if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ +
                        0xe0) == 0) {
              thunk_FUN_01ee6d7c(*(long *)
                                  Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__);
            }
            iVar15 = FUN_033f60b8(uStack0000000000000070);
            iStack000000000000005c = (uVar13 & 0xff) << (ulong)(iVar15 + 8U & 0x1f);
          }
          iVar27 = iVar27 + 1;
          *(uint *)(in_stack_00000048 + 0x28) = uStack0000000000000070;
          if (bVar7 == 6) goto LAB_033fa12c;
        }
        else {
          if (bVar7 != 6) {
            if (uVar13 == 0) {
              lVar21 = FUN_033f823c(in_stack_00000088,in_stack_00000098,iVar27,iVar22);
              if (pbVar30 == (byte *)0x0) {
                if (lVar21 == 0) goto LAB_033fa2f0;
                if (*(long *)(lVar21 + 0x18) == 0) goto LAB_033fae50;
                lVar24 = *(long *)(lVar21 + 0x28);
                iVar15 = *(int *)(*(long *)(lVar21 + 0x18) + 0x18);
                if (lVar24 == 0) {
                  if (in_stack_000000b8 == 0) {
                    in_stack_000000b8 = in_stack_00000098;
                    thunk_FUN_01f51358(&stack0x000000b8,in_stack_00000098);
                    iStack00000000000000c4 = iStack0000000000000084;
                    if (*(long *)(lVar21 + 0x18) != 0) {
                      iStack00000000000000c0 = iVar27 + *(int *)(*(long *)(lVar21 + 0x18) + 0x18);
                      unaff_x23 = *(long *)(lVar21 + 0x20);
                      iStack00000000000000c8 = iVar22;
                      iStack00000000000000cc = unaff_w21;
                      if (unaff_x23 != 0) {
                        iStack0000000000000090 = 0;
                        in_stack_00000078 = (ulong)uVar14;
                        iStack0000000000000084 = 0;
                        unaff_w20 = *(int *)(unaff_x23 + 0x10);
                        iVar27 = 0;
                        goto LAB_033f9bcc;
                      }
                    }
                    goto LAB_033fae50;
                  }
                  bVar4 = false;
                  pbVar30 = (byte *)0x0;
                }
                else {
                  pbVar30 = *(byte **)(in_stack_00000048 + 0x18);
                  uVar20 = 0;
                  while ((long)uVar20 < (long)(int)*(uint *)(lVar24 + 0x18)) {
                    if (*(uint *)(lVar24 + 0x18) <= uVar20) goto LAB_033fae54;
                    pbVar30[uVar20] = *(byte *)(lVar24 + uVar20 + 0x20);
                    lVar24 = *(long *)(lVar21 + 0x28);
                    uVar20 = uVar20 + 1;
                    if (lVar24 == 0) goto LAB_033fae50;
                  }
                  bVar4 = false;
                  *(undefined4 *)(in_stack_00000048 + 0x28) = 0xffffffff;
                  *(byte **)(in_stack_00000048 + 0x30) = pbVar30;
                }
              }
              else {
                bVar4 = false;
                iVar15 = 1;
              }
            }
            else {
              if (pbVar30 == (byte *)0x0) {
LAB_033fa2f0:
                pbVar30 = *(byte **)(in_stack_00000048 + 0x18);
                *pbVar30 = bVar6;
                bVar8 = FUN_033f8000(in_stack_00000088,uStack0000000000000070);
                pbVar30[1] = bVar8;
                if (1 < uVar19 && (in_stack_00000030 & 0x100000000) == 0) {
                  bVar8 = FUN_033f8094(in_stack_00000088,uStack0000000000000070,uVar13);
                  pbVar30[2] = bVar8;
                }
                if (uVar19 < 3) {
LAB_033fa37c:
                  bVar4 = false;
                }
                else {
                  if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__
                              + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  bVar8 = FUN_033f60b8(uStack0000000000000070);
                  pbVar30[3] = bVar8;
                  if (uVar19 < 4) goto LAB_033fa37c;
                  if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__
                              + 0xe0) == 0) {
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
              lVar21 = FUN_033f823c(in_stack_00000088,unaff_x22,iVar26,iVar25);
              if (pbVar28 != (byte *)0x0) goto LAB_033fa454;
              if (lVar21 == 0) goto LAB_033fa3b0;
              if (*(long *)(lVar21 + 0x18) == 0) goto LAB_033fae50;
              lVar24 = *(long *)(lVar21 + 0x28);
              iVar29 = iVar26 + *(int *)(*(long *)(lVar21 + 0x18) + 0x18);
              if (lVar24 == 0) {
                if (in_stack_000000a0 == 0) {
                  in_stack_000000a0 = unaff_x22;
                  thunk_FUN_01f51358(&stack0x000000a0,unaff_x22);
                  iStack00000000000000ac = iStack0000000000000080;
                  if (*(long *)(lVar21 + 0x18) != 0) {
                    iStack00000000000000a8 = iVar26 + *(int *)(*(long *)(lVar21 + 0x18) + 0x18);
                    unaff_x22 = *(long *)(lVar21 + 0x20);
                    iStack00000000000000b0 = iVar25;
                    iStack00000000000000b4 = unaff_w26;
                    if (unaff_x22 != 0) {
                      in_stack_00000078 = (ulong)uVar13 << 0x20;
                      iStack0000000000000080 = 0;
                      iVar26 = 0;
                      unaff_w19 = *(int *)(unaff_x22 + 0x10);
                      unaff_w27 = 0;
                      goto LAB_033f9bcc;
                    }
                  }
                  goto LAB_033fae50;
                }
                bVar3 = false;
                pbVar28 = (byte *)0x0;
              }
              else {
                pbVar28 = *(byte **)(in_stack_00000048 + 0x20);
                uVar20 = 0;
                while ((long)uVar20 < (long)(int)*(uint *)(lVar24 + 0x18)) {
                  if (*(uint *)(lVar24 + 0x18) <= uVar20) {
LAB_033fae54:
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a44();
                  }
                  pbVar28[uVar20] = *(byte *)(lVar24 + uVar20 + 0x20);
                  lVar24 = *(long *)(lVar21 + 0x28);
                  uVar20 = uVar20 + 1;
                  if (lVar24 == 0) goto LAB_033fae50;
                }
                uStack0000000000000068 = 0xffffffff;
                bVar3 = false;
                in_stack_00000038 = pbVar28;
              }
            }
            else if (pbVar28 == (byte *)0x0) {
LAB_033fa3b0:
              pbVar28 = *(byte **)(in_stack_00000048 + 0x20);
              *pbVar28 = bVar7;
              bVar6 = FUN_033f8000(in_stack_00000088,uVar12);
              pbVar28[1] = bVar6;
              if (1 < uVar19 && (in_stack_00000030 & 0x100000000) == 0) {
                bVar6 = FUN_033f8094(in_stack_00000088,uVar12,uVar14);
                pbVar28[2] = bVar6;
              }
              puVar2 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
              if (uVar19 < 3) {
LAB_033fa4a4:
                bVar3 = false;
              }
              else {
                if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ +
                            0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                bVar6 = FUN_033f60b8(uVar12);
                pbVar28[3] = bVar6;
                if (uVar19 < 4) goto LAB_033fa4a4;
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
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
                  uVar16 = uVar12 >> 8 & 0xff;
                  if (0x32 < uVar16) goto LAB_033fa8a8;
                  if ((uVar12 & 0xffff) < 0x309d) {
                    bVar3 = (uVar12 & 0xffff) < 0x3099;
                  }
                  else if (uVar16 < 0x31) {
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
              iVar29 = iVar26 + 1;
            }
            else {
LAB_033fa454:
              bVar3 = false;
              iVar29 = iVar26 + 1;
            }
            iVar27 = iVar15 + iVar27;
            iVar26 = iVar29;
            iVar15 = iVar27;
            if ((unaff_w25 >> 1 & 1) == 0) {
              for (; iVar15 < iVar22; iVar15 = iVar15 + 1) {
                uVar11 = FUN_03409f80(in_stack_00000098,iVar15,0);
                cVar5 = FUN_033f7f6c(in_stack_00000088,uVar11);
                iVar27 = iVar15;
                if (cVar5 != '\x01') break;
                bVar6 = pbVar30[2];
                if (bVar6 == 0) {
                  bVar6 = 2;
                  pbVar30[2] = 2;
                }
                uVar11 = FUN_03409f80(in_stack_00000098,iVar15,0);
                cVar5 = FUN_033f8094(in_stack_00000088,uVar11,0);
                pbVar30[2] = cVar5 + bVar6;
                iVar27 = iVar22;
              }
              if (iVar29 < iVar25) {
                do {
                  uVar11 = FUN_03409f80(unaff_x22,iVar29,0);
                  cVar5 = FUN_033f7f6c(in_stack_00000088,uVar11);
                  iVar26 = iVar29;
                  if (cVar5 != '\x01') break;
                  bVar6 = pbVar28[2];
                  pbVar23 = (byte *)0x1;
                  if (bVar6 == 0) {
                    bVar6 = 2;
                    pbVar28[2] = 2;
                    pbVar23 = pbVar28;
                  }
                  uVar11 = FUN_03409f80(pbVar23,unaff_x22,iVar29,0);
                  cVar5 = FUN_033f8094(in_stack_00000088,uVar11,0);
                  iVar29 = iVar29 + 1;
                  pbVar28[2] = cVar5 + bVar6;
                  iVar26 = iVar25;
                } while (iVar25 != iVar29);
              }
            }
            puVar2 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
            iVar15 = (uint)*pbVar30 - (uint)*pbVar28;
            if (iVar15 == 0) {
              iVar15 = (uint)pbVar30[1] - (uint)pbVar28[1];
            }
            if (iVar15 != 0) {
              return iVar15;
            }
            uStack0000000000000094 = 1;
            if (uVar19 != 1) {
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
                iStack0000000000000074 = iVar1;
                uStack0000000000000094 = 2;
                if (uVar19 != 2) {
                  iVar15 = (uint)pbVar30[3] - (uint)pbVar28[3];
                  if (iVar15 == 0) {
                    uStack0000000000000094 = 3;
                    if (uVar19 == 3) goto LAB_033f9bcc;
                    if (bVar4 != bVar3) {
                      if ((in_stack_00000018 & 0x100000000) != 0) {
                        return -1;
                      }
                      iStack0000000000000074 = -1;
                      if (bVar4 != false) {
                        iStack0000000000000074 = 1;
                      }
                      uStack0000000000000094 = 3;
                      goto LAB_033f9bcc;
                    }
                    uStack0000000000000094 = uVar19;
                    if (bVar4 == false) goto LAB_033f9bcc;
                    if (*(int *)(*(long *)
                                  Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ +
                                0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    uVar16 = FUN_033f651c(uStack0000000000000070);
                    uVar17 = FUN_033f651c(uVar12);
                    iVar15 = 1;
                    if ((uVar16 & 1) != 0) {
                      iVar15 = -1;
                    }
                    if (((uVar16 ^ uVar17) & 1) == 0) {
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
                      iVar22 = 3;
                      if (in_stack_00000030._4_4_ == 0 && uVar13 != 0) {
                        iVar22 = iVar15;
                      }
                      iVar25 = -5;
                      if (uVar14 != 3) {
                        iVar25 = -4;
                      }
                      iVar15 = -3;
                      if (in_stack_00000030._4_4_ == 0 && uVar14 != 0) {
                        iVar15 = iVar25;
                      }
                      iVar15 = iVar15 + iVar22;
                    }
                    if (iVar15 == 0) {
                      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
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
                        if ((uVar13 & 1) == (uVar12 & 1)) goto LAB_033f9bcc;
                      }
                    }
                    uStack0000000000000094 = 3;
                  }
                  else {
                    uStack0000000000000094 = 2;
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
          puVar2 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
          if (((unaff_w25 >> 0x1d & 1) == 0) && (uVar19 == 5)) {
            iStack0000000000000058 = iVar26 - iStack0000000000000080;
            if (in_stack_000000a0 != 0) {
              iStack0000000000000058 = iStack00000000000000a8 - iStack00000000000000ac;
            }
            uVar13 = FUN_033f8000(in_stack_00000088,uVar12);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(*(long *)puVar2);
            }
            iVar15 = FUN_033f60b8(uVar12);
            in_stack_00000060 = (uVar13 & 0xff) << (ulong)(iVar15 + 8U & 0x1f);
          }
          iVar26 = iVar26 + 1;
          uStack0000000000000068 = uVar12;
        }
        iVar1 = iStack000000000000006c;
        iVar25 = in_stack_00000060;
        iVar22 = iStack000000000000005c;
        iVar15 = iStack0000000000000058;
        iStack0000000000000058 = iVar15;
        iStack000000000000005c = iVar22;
        in_stack_00000060 = iVar25;
        iStack000000000000006c = iVar1;
        if (uVar19 == 5) {
          iStack0000000000000058 = -1;
          bVar4 = iStack000000000000005c != in_stack_00000060;
          iStack000000000000005c = 0;
          in_stack_00000060 = 0;
          iStack000000000000006c = -1;
          if (bVar4) {
            iStack0000000000000058 = iVar15;
            iStack000000000000005c = iVar22;
            in_stack_00000060 = iVar25;
            iStack000000000000006c = iVar1;
            uStack0000000000000094 = 4;
          }
        }
LAB_033f9bcc:
        for (; iVar27 < unaff_w20; iVar27 = iVar27 + 1) {
          if (unaff_x23 == 0) goto LAB_033fae50;
          uVar11 = FUN_03409f80(unaff_x23,iVar27,0);
          if (*(int *)(*(long *)
                        Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                      + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(*(long *)
                                Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                              );
          }
          uVar20 = FUN_033f8ae0(uVar11,unaff_w25);
          if ((uVar20 & 1) == 0) break;
        }
        iVar15 = iVar26;
        if (iVar26 < unaff_w19) {
          if (unaff_x22 == 0) goto LAB_033fae50;
          bVar4 = true;
          do {
            uVar11 = FUN_03409f80(unaff_x22,iVar26,0);
            if (*(int *)(*(long *)
                          Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                        + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(*(long *)
                                  Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                                );
            }
            uVar20 = FUN_033f8ae0(uVar11,unaff_w25);
            if ((uVar20 & 1) == 0) {
              if (unaff_w20 <= iVar27) goto LAB_033f9d68;
              iVar15 = iVar26;
              if (!bVar4) goto LAB_033f9ca0;
              iVar22 = unaff_w20;
              iVar25 = unaff_w19;
              iVar1 = iStack0000000000000074;
              uVar19 = uStack0000000000000094;
              in_stack_00000098 = unaff_x23;
              unaff_w21 = iStack0000000000000090;
              unaff_w26 = unaff_w27;
              if ((iVar27 <= iStack0000000000000090) || (iVar26 <= unaff_w27))
              goto joined_r0x033f9ef8;
              unaff_w21 = iVar27;
              if (unaff_w19 <= iVar26) goto LAB_033f9db8;
              if (unaff_x23 == 0) goto LAB_033fae50;
              iVar22 = 0;
              goto System_Boolean__System_IConvertible_ToSByte;
            }
            iVar26 = iVar26 + 1;
            bVar4 = iVar26 < unaff_w19;
            iVar15 = unaff_w19;
          } while (unaff_w19 != iVar26);
        }
        iVar26 = iVar15;
        if (iVar27 < unaff_w20) {
LAB_033f9ca0:
          unaff_w27 = iStack00000000000000b4;
          iVar22 = iStack00000000000000b0;
          iVar26 = iStack00000000000000a8;
          lVar21 = in_stack_000000a0;
          if (in_stack_000000a0 != 0) {
            iStack0000000000000080 = iStack00000000000000ac;
            in_stack_000000a0 = 0;
            thunk_FUN_01f51358(&stack0x000000a0,0);
            unaff_x22 = lVar21;
            unaff_w19 = iVar22;
            goto LAB_033f9bcc;
          }
        }
        else {
LAB_033f9d68:
          iVar25 = iStack00000000000000c8;
          iVar22 = iStack00000000000000c0;
          lVar21 = in_stack_000000b8;
          iVar15 = iVar26;
          if (in_stack_000000b8 != 0) {
            in_stack_000000b8 = 0;
            iStack0000000000000084 = iStack00000000000000c4;
            iStack0000000000000090 = iStack00000000000000cc;
            thunk_FUN_01f51358(&stack0x000000b8,0);
            unaff_x23 = lVar21;
            unaff_w20 = iVar25;
            iVar27 = iVar22;
            goto LAB_033f9bcc;
          }
        }
        puVar2 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
        if ((uStack0000000000000094 < 3) ||
           (iStack0000000000000074 == 0 || (in_stack_00000030 & 0x100000000) != 0))
        goto LAB_033facd8;
        if ((unaff_w19 <= iVar15) || (unaff_w20 <= iVar27)) goto LAB_033fadd4;
        if (unaff_x23 == 0) goto LAB_033fae50;
        goto LAB_033fabb8;
      }
      goto LAB_033fae50;
    }
    uVar11 = FUN_03409f80(unaff_x22,unaff_w24,0);
    uVar20 = FUN_033f8b5c(in_stack_00000088,uVar11);
    iVar26 = unaff_w24;
    if ((uVar20 & 1) != 0) goto joined_r0x033f9ef8;
    unaff_w24 = unaff_w24 + -1;
    iVar15 = unaff_w27;
  } while( true );
  while ((iVar22 = iVar22 + 1, iVar15 + 1 < unaff_w19 && (unaff_w21 + 1 < unaff_w20))) {
System_Boolean__System_IConvertible_ToSByte:
    unaff_w21 = iVar27 + iVar22;
    iVar15 = iVar26 + iVar22;
    sVar9 = FUN_03409f80(unaff_x23,unaff_w21,0);
    sVar10 = FUN_03409f80(unaff_x22,iVar15,0);
    if (sVar9 != sVar10) goto LAB_033f9db8;
  }
  unaff_w21 = iVar27 + iVar22;
  iVar15 = iVar26 + iVar22;
LAB_033f9db8:
  iVar26 = iVar15;
  iVar27 = unaff_w21;
  if ((iVar26 != unaff_w19) && (iVar22 = unaff_w21, unaff_w21 != unaff_w20)) goto LAB_033f9ddc;
  goto LAB_033f9bcc;
  while( true ) {
    if (unaff_x23 == 0) goto LAB_033fae50;
    uVar11 = FUN_03409f80(unaff_x23,iVar22,0);
    cVar5 = FUN_033f7f6c(in_stack_00000088,uVar11);
    if (cVar5 != '\x01') break;
LAB_033f9ddc:
    iVar22 = iVar22 + -1;
    unaff_w24 = iVar26;
    if (iVar22 <= iStack0000000000000090) break;
  }
  do {
    unaff_w24 = unaff_w24 + -1;
    if (unaff_w24 <= unaff_w27) break;
    uVar11 = FUN_03409f80(unaff_x22,unaff_w24,0);
    cVar5 = FUN_033f7f6c(in_stack_00000088,uVar11);
  } while (cVar5 == '\x01');
  iVar15 = unaff_w24;
  iVar27 = iVar22;
  unaff_w26 = iVar26;
  if (iStack0000000000000090 < iVar22) {
    if (unaff_x23 == 0) goto LAB_033fae50;
    do {
      uVar11 = FUN_03409f80(unaff_x23,iVar22,0);
      uVar20 = FUN_033f8b5c(in_stack_00000088,uVar11);
      iVar27 = iVar22;
      if ((uVar20 & 1) != 0) break;
      iVar22 = iVar22 + -1;
      iVar27 = iStack0000000000000090;
    } while (iStack0000000000000090 < iVar22);
  }
  goto joined_r0x033f9ea0;
LAB_033facd8:
  if ((uStack0000000000000094 == 1) && (iStack0000000000000074 != 0)) {
    if (iVar27 < unaff_w20) {
      iVar26 = iVar27;
      if (unaff_x23 == 0) goto LAB_033fae50;
      do {
        uVar11 = FUN_03409f80(unaff_x23,iVar26,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar2);
        }
        uVar20 = FUN_033f6274(uVar11);
        iVar27 = iVar26;
      } while (((uVar20 & 1) != 0) && (iVar26 = iVar26 + 1, iVar27 = unaff_w20, unaff_w20 != iVar26)
              );
    }
    if (iVar15 < unaff_w19) {
      iVar26 = iVar15;
      if (unaff_x22 == 0) {
LAB_033fae50:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        uVar11 = FUN_03409f80(unaff_x22,iVar26,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar2);
        }
        uVar20 = FUN_033f6274(uVar11);
        iVar15 = iVar26;
      } while (((uVar20 & 1) != 0) && (iVar26 = iVar26 + 1, iVar15 = unaff_w19, unaff_w19 != iVar26)
              );
    }
  }
  if (iStack0000000000000074 != 0) goto LAB_033fadd4;
  goto LAB_033fad8c;
  while( true ) {
    iStack0000000000000074 = 0;
    in_stack_00000078 = 0;
    if (unaff_w20 <= iVar27) break;
LAB_033fabb8:
    uVar11 = FUN_03409f80(unaff_x23,iVar27,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar2);
    }
    uVar20 = FUN_033f6274(uVar11);
    if ((uVar20 & 1) == 0) goto LAB_033facd8;
    if (unaff_x22 == 0) goto LAB_033fae50;
    uVar11 = FUN_03409f80(unaff_x22,iVar15,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar2);
    }
    uVar20 = FUN_033f6274(uVar11);
    if ((uVar20 & 1) == 0) goto LAB_033facd8;
    uVar11 = FUN_03409f80(unaff_x23,iVar27,0);
    uVar18 = FUN_033f86cc(in_stack_00000088,uVar11,unaff_w25);
    uVar19 = FUN_033f8094(in_stack_00000088,uVar18,in_stack_00000078._4_4_);
    uVar11 = FUN_03409f80(unaff_x22,iVar15,0);
    uVar18 = FUN_033f86cc(in_stack_00000088,uVar11,unaff_w25);
    uVar12 = FUN_033f8094(in_stack_00000088,uVar18,in_stack_00000078 & 0xffffffff);
    iStack0000000000000074 = (uVar19 & 0xff) - (uVar12 & 0xff);
    if (iStack0000000000000074 != 0) goto LAB_033facd8;
    iVar15 = iVar15 + 1;
    iVar27 = iVar27 + 1;
    if (unaff_w19 <= iVar15) break;
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
        if (iVar15 == unaff_w19) {
          *in_stack_00000010 = 1;
        }
        if (iVar27 == unaff_w20) {
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
  if (iVar27 == unaff_w20) {
    if (iVar15 != unaff_w19) {
      iStack0000000000000074 = -1;
    }
  }
  else {
    iStack0000000000000074 = 1;
  }
  return iStack0000000000000074;
}


