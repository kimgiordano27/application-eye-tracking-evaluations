/*
FUNCTION_NAME: System.Convert$$ToByte
ENTRY_POINT: 033f9dc8
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

int System_Convert__ToByte(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  short sVar11;
  short sVar12;
  undefined2 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  ulong uVar20;
  long lVar21;
  int iVar22;
  byte *pbVar23;
  long lVar24;
  uint in_w9;
  int iVar25;
  int unaff_w19;
  int unaff_w20;
  int iVar26;
  int unaff_w21;
  int iVar27;
  long unaff_x22;
  long unaff_x23;
  byte *pbVar28;
  uint unaff_w25;
  int unaff_w26;
  int unaff_w27;
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
  int iStack00000000000000a8;
  int iStack00000000000000ac;
  int iStack00000000000000b0;
  int iStack00000000000000b4;
  long in_stack_000000b8;
  int iStack00000000000000c0;
  int iStack00000000000000c4;
  int iStack00000000000000c8;
  int iStack00000000000000cc;
  
code_r0x033f9dc8:
  iVar26 = unaff_w21;
  iVar22 = unaff_w21;
  if (unaff_w21 == unaff_w20) goto LAB_033f9bcc;
  do {
    iVar22 = iVar22 + -1;
    iVar27 = unaff_w26;
    if (iVar22 <= iStack0000000000000090) break;
    if (unaff_x23 == 0) goto LAB_033fae50;
    uVar13 = FUN_03409f80(unaff_x23,iVar22,0);
    cVar7 = FUN_033f7f6c(in_stack_00000088,uVar13);
  } while (cVar7 == '\x01');
  do {
    iVar27 = iVar27 + -1;
    if (iVar27 <= unaff_w27) break;
    uVar13 = FUN_03409f80(unaff_x22,iVar27,0);
    cVar7 = FUN_033f7f6c(in_stack_00000088,uVar13);
  } while (cVar7 == '\x01');
  iVar25 = iVar27;
  iVar26 = iVar22;
  if (iStack0000000000000090 < iVar22) {
    if (unaff_x23 == 0) goto LAB_033fae50;
    do {
      uVar13 = FUN_03409f80(unaff_x23,iVar22,0);
      uVar20 = FUN_033f8b5c(in_stack_00000088,uVar13);
      iVar26 = iVar22;
      if ((uVar20 & 1) != 0) break;
      iVar22 = iVar22 + -1;
      iVar26 = iStack0000000000000090;
    } while (iStack0000000000000090 < iVar22);
  }
  do {
    iVar22 = unaff_w20;
    iVar1 = unaff_w19;
    iVar2 = iStack0000000000000074;
    iVar3 = unaff_w26;
    if (iVar27 <= unaff_w27) break;
    uVar13 = FUN_03409f80(unaff_x22,iVar27,0);
    uVar20 = FUN_033f8b5c(in_stack_00000088,uVar13);
    iVar25 = iVar27;
    if ((uVar20 & 1) != 0) break;
    iVar27 = iVar27 + -1;
    iVar25 = unaff_w27;
  } while( true );
joined_r0x033f9ef8:
  unaff_w26 = iVar25;
  if (unaff_x23 != 0) {
    uVar13 = FUN_03409f80(unaff_x23,iVar26,0);
    uStack0000000000000070 = FUN_033f86cc(in_stack_00000088,uVar13,unaff_w25);
    uVar13 = FUN_03409f80(unaff_x22,unaff_w26,0);
    uVar14 = FUN_033f86cc(in_stack_00000088,uVar13,unaff_w25);
    uVar15 = FUN_033f87b0(in_stack_00000088,uStack0000000000000070);
    in_stack_00000078 = CONCAT44(uVar15,(undefined4)in_stack_00000078);
    unaff_w27 = iVar3;
    iStack0000000000000074 = iVar2;
    unaff_w20 = iVar22;
    unaff_w19 = iVar1;
    iStack0000000000000090 = unaff_w21;
    in_w9 = uStack0000000000000094;
    if (uVar15 == 0) {
LAB_033f9f84:
      pbVar29 = (byte *)0x0;
    }
    else {
      if (-1 < *(int *)(in_stack_00000048 + 0x28)) {
        uStack0000000000000070 =
             FUN_033f88d0(in_stack_00000088,*(int *)(in_stack_00000048 + 0x28),uVar15,unaff_w25);
        goto LAB_033f9f84;
      }
      pbVar29 = *(byte **)(in_stack_00000048 + 0x30);
      if (pbVar29 == (byte *)0x0) {
        iVar26 = iVar26 + 1;
        goto LAB_033f9bcc;
      }
    }
    uVar16 = FUN_033f87b0(in_stack_00000088,uVar14);
    in_stack_00000078 = CONCAT44(uVar15,uVar16);
    unaff_x23 = in_stack_00000098;
    if (uVar16 == 0) {
System_Convert__ToInt64:
      pbVar28 = (byte *)0x0;
    }
    else {
      if (-1 < (int)uStack0000000000000068) {
        uVar14 = FUN_033f88d0(in_stack_00000088,uStack0000000000000068,uVar16,unaff_w25);
        goto System_Convert__ToInt64;
      }
      pbVar28 = in_stack_00000038;
      if (in_stack_00000038 == (byte *)0x0) {
        in_stack_00000038 = (byte *)0x0;
        unaff_w26 = unaff_w26 + 1;
        goto LAB_033f9bcc;
      }
    }
    bVar8 = FUN_033f7f6c(in_stack_00000088,uStack0000000000000070);
    bVar9 = FUN_033f7f6c(in_stack_00000088,uVar14);
    if (bVar8 == 6) {
      if (((unaff_w25 >> 0x1d & 1) == 0) && (uStack0000000000000094 == 5)) {
        iStack000000000000006c = iVar26 - iStack0000000000000084;
        if (in_stack_000000b8 != 0) {
          iStack000000000000006c = iStack00000000000000c0 - iStack00000000000000c4;
        }
        uVar15 = FUN_033f8000(in_stack_00000088,uStack0000000000000070);
        if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__);
        }
        iVar22 = FUN_033f60b8(uStack0000000000000070);
        iStack000000000000005c = (uVar15 & 0xff) << (ulong)(iVar22 + 8U & 0x1f);
      }
      iVar26 = iVar26 + 1;
      *(uint *)(in_stack_00000048 + 0x28) = uStack0000000000000070;
      if (bVar9 == 6) goto LAB_033fa12c;
    }
    else {
      if (bVar9 != 6) {
        if (uVar15 == 0) {
          lVar21 = FUN_033f823c(in_stack_00000088,in_stack_00000098,iVar26,iVar22);
          if (pbVar29 == (byte *)0x0) {
            if (lVar21 == 0) goto LAB_033fa2f0;
            if (*(long *)(lVar21 + 0x18) == 0) goto LAB_033fae50;
            lVar24 = *(long *)(lVar21 + 0x28);
            iVar27 = *(int *)(*(long *)(lVar21 + 0x18) + 0x18);
            if (lVar24 == 0) {
              if (in_stack_000000b8 == 0) {
                in_stack_000000b8 = in_stack_00000098;
                thunk_FUN_01f51358(&stack0x000000b8,in_stack_00000098);
                iStack00000000000000c4 = iStack0000000000000084;
                if (*(long *)(lVar21 + 0x18) != 0) {
                  iStack00000000000000c0 = iVar26 + *(int *)(*(long *)(lVar21 + 0x18) + 0x18);
                  unaff_x23 = *(long *)(lVar21 + 0x20);
                  iStack00000000000000c8 = iVar22;
                  iStack00000000000000cc = unaff_w21;
                  if (unaff_x23 != 0) {
                    iStack0000000000000090 = 0;
                    in_stack_00000078 = (ulong)uVar16;
                    iStack0000000000000084 = 0;
                    unaff_w20 = *(int *)(unaff_x23 + 0x10);
                    iVar26 = 0;
                    goto LAB_033f9bcc;
                  }
                }
                goto LAB_033fae50;
              }
              bVar6 = false;
              pbVar29 = (byte *)0x0;
            }
            else {
              pbVar29 = *(byte **)(in_stack_00000048 + 0x18);
              uVar20 = 0;
              while ((long)uVar20 < (long)(int)*(uint *)(lVar24 + 0x18)) {
                if (*(uint *)(lVar24 + 0x18) <= uVar20) goto LAB_033fae54;
                pbVar29[uVar20] = *(byte *)(lVar24 + uVar20 + 0x20);
                lVar24 = *(long *)(lVar21 + 0x28);
                uVar20 = uVar20 + 1;
                if (lVar24 == 0) goto LAB_033fae50;
              }
              bVar6 = false;
              *(undefined4 *)(in_stack_00000048 + 0x28) = 0xffffffff;
              *(byte **)(in_stack_00000048 + 0x30) = pbVar29;
            }
          }
          else {
            bVar6 = false;
            iVar27 = 1;
          }
        }
        else {
          if (pbVar29 == (byte *)0x0) {
LAB_033fa2f0:
            pbVar29 = *(byte **)(in_stack_00000048 + 0x18);
            *pbVar29 = bVar8;
            bVar10 = FUN_033f8000(in_stack_00000088,uStack0000000000000070);
            pbVar29[1] = bVar10;
            if (1 < uStack0000000000000094 && (in_stack_00000030 & 0x100000000) == 0) {
              bVar10 = FUN_033f8094(in_stack_00000088,uStack0000000000000070,uVar15);
              pbVar29[2] = bVar10;
            }
            if (uStack0000000000000094 < 3) {
LAB_033fa37c:
              bVar6 = false;
            }
            else {
              if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ +
                          0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              bVar10 = FUN_033f60b8(uStack0000000000000070);
              pbVar29[3] = bVar10;
              if (uStack0000000000000094 < 4) goto LAB_033fa37c;
              if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ +
                          0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              if ((uStack0000000000000070 & 0xffff) < 0x3041) {
LAB_033fa89c:
                bVar6 = false;
              }
              else if ((uStack0000000000000070 + 0x9a & 0xffff) < 0x38) {
                bVar6 = true;
              }
              else {
                uVar17 = uStack0000000000000070 >> 8 & 0xff;
                if (0x32 < uVar17) goto LAB_033fa89c;
                if ((uStack0000000000000070 & 0xffff) < 0x309d) {
                  bVar6 = (uStack0000000000000070 & 0xffff) < 0x3099;
                }
                else if (uVar17 < 0x31) {
                  bVar6 = (uStack0000000000000070 & 0xffff) != 0x30fb;
                }
                else {
                  bVar6 = (uStack0000000000000070 - 0x32d0 & 0xffff) < 0x2f;
                }
              }
            }
            if (1 < bVar8) {
              *(uint *)(in_stack_00000048 + 0x28) = uStack0000000000000070;
            }
          }
          else {
            bVar6 = false;
          }
          iVar27 = 1;
        }
        if (uVar16 == 0) {
          lVar21 = FUN_033f823c(in_stack_00000088,unaff_x22,unaff_w26,iVar1);
          if (pbVar28 != (byte *)0x0) goto LAB_033fa454;
          if (lVar21 == 0) goto LAB_033fa3b0;
          if (*(long *)(lVar21 + 0x18) == 0) goto LAB_033fae50;
          lVar24 = *(long *)(lVar21 + 0x28);
          iVar25 = unaff_w26 + *(int *)(*(long *)(lVar21 + 0x18) + 0x18);
          if (lVar24 == 0) {
            if (in_stack_000000a0 == 0) {
              in_stack_000000a0 = unaff_x22;
              thunk_FUN_01f51358(&stack0x000000a0,unaff_x22);
              iStack00000000000000ac = iStack0000000000000080;
              if (*(long *)(lVar21 + 0x18) != 0) {
                iStack00000000000000a8 = unaff_w26 + *(int *)(*(long *)(lVar21 + 0x18) + 0x18);
                unaff_x22 = *(long *)(lVar21 + 0x20);
                iStack00000000000000b0 = iVar1;
                iStack00000000000000b4 = iVar3;
                if (unaff_x22 != 0) {
                  in_stack_00000078 = (ulong)uVar15 << 0x20;
                  iStack0000000000000080 = 0;
                  unaff_w26 = 0;
                  unaff_w19 = *(int *)(unaff_x22 + 0x10);
                  unaff_w27 = 0;
                  goto LAB_033f9bcc;
                }
              }
              goto LAB_033fae50;
            }
            bVar5 = false;
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
            bVar5 = false;
            in_stack_00000038 = pbVar28;
          }
        }
        else if (pbVar28 == (byte *)0x0) {
LAB_033fa3b0:
          pbVar28 = *(byte **)(in_stack_00000048 + 0x20);
          *pbVar28 = bVar9;
          bVar8 = FUN_033f8000(in_stack_00000088,uVar14);
          pbVar28[1] = bVar8;
          if (1 < uStack0000000000000094 && (in_stack_00000030 & 0x100000000) == 0) {
            bVar8 = FUN_033f8094(in_stack_00000088,uVar14,uVar16);
            pbVar28[2] = bVar8;
          }
          puVar4 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
          if (uStack0000000000000094 < 3) {
LAB_033fa4a4:
            bVar5 = false;
          }
          else {
            if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ +
                        0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            bVar8 = FUN_033f60b8(uVar14);
            pbVar28[3] = bVar8;
            if (uStack0000000000000094 < 4) goto LAB_033fa4a4;
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            if ((uVar14 & 0xffff) < 0x3041) {
LAB_033fa8a8:
              bVar5 = false;
            }
            else if ((uVar14 + 0x9a & 0xffff) < 0x38) {
              bVar5 = true;
            }
            else {
              uVar17 = uVar14 >> 8 & 0xff;
              if (0x32 < uVar17) goto LAB_033fa8a8;
              if ((uVar14 & 0xffff) < 0x309d) {
                bVar5 = (uVar14 & 0xffff) < 0x3099;
              }
              else if (uVar17 < 0x31) {
                bVar5 = (uVar14 & 0xffff) != 0x30fb;
              }
              else {
                bVar5 = (uVar14 - 0x32d0 & 0xffff) < 0x2f;
              }
            }
          }
          if (1 < bVar9) {
            uStack0000000000000068 = uVar14;
          }
          iVar25 = unaff_w26 + 1;
        }
        else {
LAB_033fa454:
          bVar5 = false;
          iVar25 = unaff_w26 + 1;
        }
        iVar26 = iVar27 + iVar26;
        unaff_w26 = iVar25;
        iVar27 = iVar26;
        if ((unaff_w25 >> 1 & 1) == 0) {
          for (; iVar27 < iVar22; iVar27 = iVar27 + 1) {
            uVar13 = FUN_03409f80(in_stack_00000098,iVar27,0);
            cVar7 = FUN_033f7f6c(in_stack_00000088,uVar13);
            iVar26 = iVar27;
            if (cVar7 != '\x01') break;
            bVar8 = pbVar29[2];
            if (bVar8 == 0) {
              bVar8 = 2;
              pbVar29[2] = 2;
            }
            uVar13 = FUN_03409f80(in_stack_00000098,iVar27,0);
            cVar7 = FUN_033f8094(in_stack_00000088,uVar13,0);
            pbVar29[2] = cVar7 + bVar8;
            iVar26 = iVar22;
          }
          if (iVar25 < iVar1) {
            do {
              uVar13 = FUN_03409f80(unaff_x22,iVar25,0);
              cVar7 = FUN_033f7f6c(in_stack_00000088,uVar13);
              unaff_w26 = iVar25;
              if (cVar7 != '\x01') break;
              bVar8 = pbVar28[2];
              pbVar23 = (byte *)0x1;
              if (bVar8 == 0) {
                bVar8 = 2;
                pbVar28[2] = 2;
                pbVar23 = pbVar28;
              }
              uVar13 = FUN_03409f80(pbVar23,unaff_x22,iVar25,0);
              cVar7 = FUN_033f8094(in_stack_00000088,uVar13,0);
              iVar25 = iVar25 + 1;
              pbVar28[2] = cVar7 + bVar8;
              unaff_w26 = iVar1;
            } while (iVar1 != iVar25);
          }
        }
        puVar4 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
        iVar22 = (uint)*pbVar29 - (uint)*pbVar28;
        if (iVar22 == 0) {
          iVar22 = (uint)pbVar29[1] - (uint)pbVar28[1];
        }
        if (iVar22 != 0) {
          return iVar22;
        }
        in_w9 = 1;
        if (uStack0000000000000094 != 1) {
          if (((unaff_w25 >> 1 & 1) == 0) &&
             (iStack0000000000000074 = (uint)pbVar29[2] - (uint)pbVar28[2],
             iStack0000000000000074 != 0)) {
            if ((in_stack_00000018 & 0x100000000) != 0) {
              return -1;
            }
            in_w9 = 1;
            if (*(char *)(in_stack_00000088 + 0x5c) != '\0') {
              in_w9 = 2;
            }
          }
          else {
            iStack0000000000000074 = iVar2;
            in_w9 = 2;
            if (uStack0000000000000094 != 2) {
              iVar22 = (uint)pbVar29[3] - (uint)pbVar28[3];
              if (iVar22 == 0) {
                in_w9 = 3;
                if (uStack0000000000000094 == 3) goto LAB_033f9bcc;
                if (bVar6 != bVar5) {
                  if ((in_stack_00000018 & 0x100000000) != 0) {
                    return -1;
                  }
                  iStack0000000000000074 = -1;
                  if (bVar6 != false) {
                    iStack0000000000000074 = 1;
                  }
                  in_w9 = 3;
                  goto LAB_033f9bcc;
                }
                in_w9 = uStack0000000000000094;
                if (bVar6 == false) goto LAB_033f9bcc;
                if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ +
                            0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar17 = FUN_033f651c(uStack0000000000000070);
                uVar18 = FUN_033f651c(uVar14);
                iVar22 = 1;
                if ((uVar17 & 1) != 0) {
                  iVar22 = -1;
                }
                if (((uVar17 ^ uVar18) & 1) == 0) {
                  iVar22 = 0;
                }
                if (iVar22 == 0) {
                  if (*(int *)(*(long *)
                                Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                              + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  iVar22 = 4;
                  if (uVar15 == 3) {
                    iVar22 = 5;
                  }
                  iVar27 = 3;
                  if (in_stack_00000030._4_4_ == 0 && uVar15 != 0) {
                    iVar27 = iVar22;
                  }
                  iVar25 = -5;
                  if (uVar16 != 3) {
                    iVar25 = -4;
                  }
                  iVar22 = -3;
                  if (in_stack_00000030._4_4_ == 0 && uVar16 != 0) {
                    iVar22 = iVar25;
                  }
                  iVar22 = iVar22 + iVar27;
                }
                if (iVar22 == 0) {
                  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  bVar6 = (uStack0000000000000070 - 0x3041 & 0xffff) < 0x54;
                  iVar22 = -1;
                  if (bVar6) {
                    iVar22 = 1;
                  }
                  if (bVar6 == (uVar14 - 0x3041 & 0xffff) < 0x54) {
                    if (*(int *)(*(long *)
                                  Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                                + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    uVar15 = FUN_033f81c8(uStack0000000000000070 & 0xffff,unaff_w25);
                    uVar14 = FUN_033f81c8(uVar14 & 0xffff,unaff_w25);
                    iVar22 = 1;
                    if ((uVar15 & 1) != 0) {
                      iVar22 = -1;
                    }
                    if ((uVar15 & 1) == (uVar14 & 1)) goto LAB_033f9bcc;
                  }
                }
                in_w9 = 3;
              }
              else {
                in_w9 = 2;
              }
              iStack0000000000000074 = iVar22;
              if ((in_stack_00000018 & 0x100000000) != 0) {
                return -1;
              }
            }
          }
        }
        goto LAB_033f9bcc;
      }
LAB_033fa12c:
      puVar4 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
      if (((unaff_w25 >> 0x1d & 1) == 0) && (uStack0000000000000094 == 5)) {
        iStack0000000000000058 = unaff_w26 - iStack0000000000000080;
        if (in_stack_000000a0 != 0) {
          iStack0000000000000058 = iStack00000000000000a8 - iStack00000000000000ac;
        }
        uVar15 = FUN_033f8000(in_stack_00000088,uVar14);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar4);
        }
        iVar22 = FUN_033f60b8(uVar14);
        in_stack_00000060 = (uVar15 & 0xff) << (ulong)(iVar22 + 8U & 0x1f);
      }
      unaff_w26 = unaff_w26 + 1;
      uStack0000000000000068 = uVar14;
    }
    iVar1 = iStack000000000000006c;
    iVar25 = in_stack_00000060;
    iVar27 = iStack000000000000005c;
    iVar22 = iStack0000000000000058;
    iStack0000000000000058 = iVar22;
    iStack000000000000005c = iVar27;
    in_stack_00000060 = iVar25;
    iStack000000000000006c = iVar1;
    if (uStack0000000000000094 == 5) {
      iStack0000000000000058 = -1;
      bVar6 = iStack000000000000005c != in_stack_00000060;
      iStack000000000000005c = 0;
      in_stack_00000060 = 0;
      iStack000000000000006c = -1;
      if (bVar6) {
        iStack0000000000000058 = iVar22;
        iStack000000000000005c = iVar27;
        in_stack_00000060 = iVar25;
        iStack000000000000006c = iVar1;
        in_w9 = 4;
      }
    }
LAB_033f9bcc:
    for (; iVar26 < unaff_w20; iVar26 = iVar26 + 1) {
      if (unaff_x23 == 0) goto LAB_033fae50;
      uVar13 = FUN_03409f80(unaff_x23,iVar26,0);
      if (*(int *)(*(long *)
                    Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)
                            Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                          );
      }
      uVar20 = FUN_033f8ae0(uVar13,unaff_w25);
      if ((uVar20 & 1) == 0) break;
    }
    iVar22 = unaff_w26;
    if (unaff_w26 < unaff_w19) {
      if (unaff_x22 == 0) goto LAB_033fae50;
      bVar6 = true;
      do {
        uVar13 = FUN_03409f80(unaff_x22,unaff_w26,0);
        if (*(int *)(*(long *)
                      Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                    + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)
                              Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                            );
        }
        uVar20 = FUN_033f8ae0(uVar13,unaff_w25);
        if ((uVar20 & 1) == 0) {
          if (unaff_w20 <= iVar26) goto LAB_033f9d68;
          iVar22 = unaff_w26;
          if (!bVar6) goto LAB_033f9ca0;
          iVar22 = unaff_w20;
          unaff_w21 = iStack0000000000000090;
          iVar1 = unaff_w19;
          iVar2 = iStack0000000000000074;
          uStack0000000000000094 = in_w9;
          in_stack_00000098 = unaff_x23;
          iVar25 = unaff_w26;
          iVar3 = unaff_w27;
          if ((iVar26 <= iStack0000000000000090) || (unaff_w26 <= unaff_w27))
          goto joined_r0x033f9ef8;
          unaff_w21 = iVar26;
          iVar22 = unaff_w26;
          if (unaff_w19 <= unaff_w26) goto LAB_033f9db8;
          if (unaff_x23 == 0) goto LAB_033fae50;
          iVar27 = 0;
          goto System_Boolean__System_IConvertible_ToSByte;
        }
        unaff_w26 = unaff_w26 + 1;
        bVar6 = unaff_w26 < unaff_w19;
        iVar22 = unaff_w19;
      } while (unaff_w19 != unaff_w26);
    }
    unaff_w26 = iVar22;
    if (iVar26 < unaff_w20) {
LAB_033f9ca0:
      unaff_w27 = iStack00000000000000b4;
      iVar27 = iStack00000000000000b0;
      unaff_w26 = iStack00000000000000a8;
      lVar21 = in_stack_000000a0;
      if (in_stack_000000a0 != 0) {
        iStack0000000000000080 = iStack00000000000000ac;
        in_stack_000000a0 = 0;
        thunk_FUN_01f51358(&stack0x000000a0,0);
        unaff_x22 = lVar21;
        unaff_w19 = iVar27;
        goto LAB_033f9bcc;
      }
    }
    else {
LAB_033f9d68:
      iVar25 = iStack00000000000000c8;
      iVar27 = iStack00000000000000c0;
      lVar21 = in_stack_000000b8;
      iVar22 = unaff_w26;
      if (in_stack_000000b8 != 0) {
        in_stack_000000b8 = 0;
        iStack0000000000000084 = iStack00000000000000c4;
        iStack0000000000000090 = iStack00000000000000cc;
        thunk_FUN_01f51358(&stack0x000000b8,0);
        unaff_x23 = lVar21;
        unaff_w20 = iVar25;
        iVar26 = iVar27;
        goto LAB_033f9bcc;
      }
    }
    puVar4 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
    if ((in_w9 < 3) || (iStack0000000000000074 == 0 || (in_stack_00000030 & 0x100000000) != 0))
    goto LAB_033facd8;
    if ((unaff_w19 <= iVar22) || (unaff_w20 <= iVar26)) goto LAB_033fadd4;
    if (unaff_x23 == 0) goto LAB_033fae50;
    goto LAB_033fabb8;
  }
  goto LAB_033fae50;
  while ((iVar27 = iVar27 + 1, iVar22 + 1 < unaff_w19 && (unaff_w21 + 1 < unaff_w20))) {
System_Boolean__System_IConvertible_ToSByte:
    unaff_w21 = iVar26 + iVar27;
    iVar22 = unaff_w26 + iVar27;
    sVar11 = FUN_03409f80(unaff_x23,unaff_w21,0);
    sVar12 = FUN_03409f80(unaff_x22,iVar22,0);
    if (sVar11 != sVar12) goto LAB_033f9db8;
  }
  unaff_w21 = iVar26 + iVar27;
  iVar22 = unaff_w26 + iVar27;
LAB_033f9db8:
  unaff_w26 = iVar22;
  iVar26 = unaff_w21;
  if (unaff_w26 != unaff_w19) goto code_r0x033f9dc8;
  goto LAB_033f9bcc;
LAB_033facd8:
  if ((in_w9 == 1) && (iStack0000000000000074 != 0)) {
    if (iVar26 < unaff_w20) {
      iVar27 = iVar26;
      if (unaff_x23 == 0) goto LAB_033fae50;
      do {
        uVar13 = FUN_03409f80(unaff_x23,iVar27,0);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar4);
        }
        uVar20 = FUN_033f6274(uVar13);
        iVar26 = iVar27;
      } while (((uVar20 & 1) != 0) && (iVar27 = iVar27 + 1, iVar26 = unaff_w20, unaff_w20 != iVar27)
              );
    }
    if (iVar22 < unaff_w19) {
      iVar27 = iVar22;
      if (unaff_x22 == 0) {
LAB_033fae50:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        uVar13 = FUN_03409f80(unaff_x22,iVar27,0);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar4);
        }
        uVar20 = FUN_033f6274(uVar13);
        iVar22 = iVar27;
      } while (((uVar20 & 1) != 0) && (iVar27 = iVar27 + 1, iVar22 = unaff_w19, unaff_w19 != iVar27)
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
    uVar13 = FUN_03409f80(unaff_x23,iVar26,0);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar4);
    }
    uVar20 = FUN_033f6274(uVar13);
    if ((uVar20 & 1) == 0) goto LAB_033facd8;
    if (unaff_x22 == 0) goto LAB_033fae50;
    uVar13 = FUN_03409f80(unaff_x22,iVar22,0);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar4);
    }
    uVar20 = FUN_033f6274(uVar13);
    if ((uVar20 & 1) == 0) goto LAB_033facd8;
    uVar13 = FUN_03409f80(unaff_x23,iVar26,0);
    uVar19 = FUN_033f86cc(in_stack_00000088,uVar13,unaff_w25);
    uVar14 = FUN_033f8094(in_stack_00000088,uVar19,in_stack_00000078._4_4_);
    uVar13 = FUN_03409f80(unaff_x22,iVar22,0);
    uVar19 = FUN_033f86cc(in_stack_00000088,uVar13,unaff_w25);
    uVar15 = FUN_033f8094(in_stack_00000088,uVar19,in_stack_00000078 & 0xffffffff);
    iStack0000000000000074 = (uVar14 & 0xff) - (uVar15 & 0xff);
    if (iStack0000000000000074 != 0) goto LAB_033facd8;
    iVar22 = iVar22 + 1;
    iVar26 = iVar26 + 1;
    if (unaff_w19 <= iVar22) break;
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
        if (iVar22 == unaff_w19) {
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
    if (iVar22 != unaff_w19) {
      iStack0000000000000074 = -1;
    }
  }
  else {
    iStack0000000000000074 = 1;
  }
  return iStack0000000000000074;
}


