/*
FUNCTION_NAME: System.Convert$$ToUInt32
ENTRY_POINT: 033f9f58
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

int System_Convert__ToUInt32(uint param_1)

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
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  int iVar19;
  byte *pbVar20;
  long lVar21;
  int iVar22;
  int iVar23;
  int unaff_w19;
  int iVar24;
  int unaff_w20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  byte *pbVar25;
  uint unaff_w25;
  int unaff_w26;
  byte *pbVar26;
  uint unaff_w29;
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
  
code_r0x033f9f58:
  _uStack0000000000000078 = CONCAT44(param_1,uStack0000000000000078);
  iVar24 = unaff_w20;
  iVar23 = unaff_w19;
  uVar16 = uStack0000000000000094;
  if (param_1 == 0) {
LAB_033f9f84:
    pbVar26 = (byte *)0x0;
  }
  else {
    if (-1 < *(int *)(in_stack_00000048 + 0x28)) {
      uStack0000000000000070 =
           FUN_033f88d0(unaff_x24,*(int *)(in_stack_00000048 + 0x28),param_1,unaff_w25);
      goto LAB_033f9f84;
    }
    pbVar26 = *(byte **)(in_stack_00000048 + 0x30);
    if (pbVar26 == (byte *)0x0) {
      unaff_w21 = unaff_w21 + 1;
      goto LAB_033f9bcc;
    }
  }
  uVar12 = FUN_033f87b0(unaff_x24,unaff_w29);
  _uStack0000000000000078 = CONCAT44(param_1,uVar12);
  unaff_x23 = in_stack_00000098;
  if (uVar12 == 0) {
System_Convert__ToInt64:
    pbVar25 = (byte *)0x0;
  }
  else {
    if (-1 < (int)uStack0000000000000068) {
      unaff_w29 = FUN_033f88d0(unaff_x24,uStack0000000000000068,uVar12,unaff_w25);
      goto System_Convert__ToInt64;
    }
    pbVar25 = in_stack_00000038;
    if (in_stack_00000038 == (byte *)0x0) {
      in_stack_00000038 = (byte *)0x0;
      unaff_w26 = unaff_w26 + 1;
      goto LAB_033f9bcc;
    }
  }
  bVar6 = FUN_033f7f6c(unaff_x24,uStack0000000000000070);
  bVar7 = FUN_033f7f6c(unaff_x24,unaff_w29);
  if (bVar6 == 6) {
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
    if (bVar7 == 6) goto LAB_033fa12c;
  }
  else {
    if (bVar7 != 6) {
      if (param_1 == 0) {
        lVar18 = FUN_033f823c(unaff_x24,in_stack_00000098,unaff_w21,unaff_w20);
        if (pbVar26 == (byte *)0x0) {
          if (lVar18 == 0) goto LAB_033fa2f0;
          if (*(long *)(lVar18 + 0x18) == 0) goto LAB_033fae50;
          lVar21 = *(long *)(lVar18 + 0x28);
          iVar13 = *(int *)(*(long *)(lVar18 + 0x18) + 0x18);
          if (lVar21 == 0) {
            if (in_stack_000000b8 == 0) {
              in_stack_000000b8 = in_stack_00000098;
              thunk_FUN_01f51358(&stack0x000000b8,in_stack_00000098);
              iStack00000000000000c4 = iStack0000000000000084;
              if (*(long *)(lVar18 + 0x18) != 0) {
                iStack00000000000000c0 = unaff_w21 + *(int *)(*(long *)(lVar18 + 0x18) + 0x18);
                iStack00000000000000cc = iStack0000000000000090;
                unaff_x23 = *(long *)(lVar18 + 0x20);
                iStack00000000000000c8 = unaff_w20;
                if (unaff_x23 != 0) {
                  iStack0000000000000090 = 0;
                  _uStack0000000000000078 = (ulong)uVar12;
                  iStack0000000000000084 = 0;
                  iVar24 = *(int *)(unaff_x23 + 0x10);
                  unaff_w21 = 0;
                  goto LAB_033f9bcc;
                }
              }
              goto LAB_033fae50;
            }
            bVar4 = false;
            pbVar26 = (byte *)0x0;
          }
          else {
            pbVar26 = *(byte **)(in_stack_00000048 + 0x18);
            uVar17 = 0;
            while ((long)uVar17 < (long)(int)*(uint *)(lVar21 + 0x18)) {
              if (*(uint *)(lVar21 + 0x18) <= uVar17) goto LAB_033fae54;
              pbVar26[uVar17] = *(byte *)(lVar21 + uVar17 + 0x20);
              lVar21 = *(long *)(lVar18 + 0x28);
              uVar17 = uVar17 + 1;
              if (lVar21 == 0) goto LAB_033fae50;
            }
            bVar4 = false;
            *(undefined4 *)(in_stack_00000048 + 0x28) = 0xffffffff;
            *(byte **)(in_stack_00000048 + 0x30) = pbVar26;
          }
        }
        else {
          bVar4 = false;
          iVar13 = 1;
        }
      }
      else {
        if (pbVar26 == (byte *)0x0) {
LAB_033fa2f0:
          pbVar26 = *(byte **)(in_stack_00000048 + 0x18);
          *pbVar26 = bVar6;
          bVar8 = FUN_033f8000(in_stack_00000088,uStack0000000000000070);
          pbVar26[1] = bVar8;
          if (1 < uStack0000000000000094 && (in_stack_00000030 & 0x100000000) == 0) {
            bVar8 = FUN_033f8094(in_stack_00000088,uStack0000000000000070,param_1);
            pbVar26[2] = bVar8;
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
            pbVar26[3] = bVar8;
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
        iVar13 = 1;
      }
      if (uVar12 == 0) {
        lVar18 = FUN_033f823c(in_stack_00000088,unaff_x22,unaff_w26,unaff_w19);
        if (pbVar25 != (byte *)0x0) goto LAB_033fa454;
        if (lVar18 == 0) goto LAB_033fa3b0;
        if (*(long *)(lVar18 + 0x18) == 0) goto LAB_033fae50;
        lVar21 = *(long *)(lVar18 + 0x28);
        iVar22 = iStack0000000000000064;
        iVar19 = unaff_w26 + *(int *)(*(long *)(lVar18 + 0x18) + 0x18);
        if (lVar21 == 0) {
          if (in_stack_000000a0 == 0) {
            in_stack_000000a0 = unaff_x22;
            thunk_FUN_01f51358(&stack0x000000a0,unaff_x22);
            iStack00000000000000ac = iStack0000000000000080;
            if (*(long *)(lVar18 + 0x18) != 0) {
              iStack00000000000000b4 = iStack0000000000000064;
              iStack00000000000000a8 = unaff_w26 + *(int *)(*(long *)(lVar18 + 0x18) + 0x18);
              unaff_x22 = *(long *)(lVar18 + 0x20);
              iStack00000000000000b0 = unaff_w19;
              if (unaff_x22 != 0) {
                iStack0000000000000064 = 0;
                _uStack0000000000000078 = (ulong)param_1 << 0x20;
                iStack0000000000000080 = 0;
                unaff_w26 = 0;
                iVar23 = *(int *)(unaff_x22 + 0x10);
                iStack00000000000000b4 = iVar22;
                goto LAB_033f9bcc;
              }
            }
            goto LAB_033fae50;
          }
          bVar3 = false;
          pbVar25 = (byte *)0x0;
        }
        else {
          pbVar25 = *(byte **)(in_stack_00000048 + 0x20);
          uVar17 = 0;
          while ((long)uVar17 < (long)(int)*(uint *)(lVar21 + 0x18)) {
            if (*(uint *)(lVar21 + 0x18) <= uVar17) {
LAB_033fae54:
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            pbVar25[uVar17] = *(byte *)(lVar21 + uVar17 + 0x20);
            lVar21 = *(long *)(lVar18 + 0x28);
            uVar17 = uVar17 + 1;
            if (lVar21 == 0) goto LAB_033fae50;
          }
          uStack0000000000000068 = 0xffffffff;
          bVar3 = false;
          in_stack_00000038 = pbVar25;
        }
      }
      else if (pbVar25 == (byte *)0x0) {
LAB_033fa3b0:
        pbVar25 = *(byte **)(in_stack_00000048 + 0x20);
        *pbVar25 = bVar7;
        bVar6 = FUN_033f8000(in_stack_00000088,unaff_w29);
        pbVar25[1] = bVar6;
        if (1 < uStack0000000000000094 && (in_stack_00000030 & 0x100000000) == 0) {
          bVar6 = FUN_033f8094(in_stack_00000088,unaff_w29,uVar12);
          pbVar25[2] = bVar6;
        }
        puVar2 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
        if (uStack0000000000000094 < 3) {
LAB_033fa4a4:
          bVar3 = false;
        }
        else {
          if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0)
              == 0) {
            thunk_FUN_01ee6d7c();
          }
          bVar6 = FUN_033f60b8(unaff_w29);
          pbVar25[3] = bVar6;
          if (uStack0000000000000094 < 4) goto LAB_033fa4a4;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if ((unaff_w29 & 0xffff) < 0x3041) {
LAB_033fa8a8:
            bVar3 = false;
          }
          else if ((unaff_w29 + 0x9a & 0xffff) < 0x38) {
            bVar3 = true;
          }
          else {
            uVar16 = unaff_w29 >> 8 & 0xff;
            if (0x32 < uVar16) goto LAB_033fa8a8;
            if ((unaff_w29 & 0xffff) < 0x309d) {
              bVar3 = (unaff_w29 & 0xffff) < 0x3099;
            }
            else if (uVar16 < 0x31) {
              bVar3 = (unaff_w29 & 0xffff) != 0x30fb;
            }
            else {
              bVar3 = (unaff_w29 - 0x32d0 & 0xffff) < 0x2f;
            }
          }
        }
        if (1 < bVar7) {
          uStack0000000000000068 = unaff_w29;
        }
        iVar19 = unaff_w26 + 1;
      }
      else {
LAB_033fa454:
        bVar3 = false;
        iVar19 = unaff_w26 + 1;
      }
      unaff_w21 = iVar13 + unaff_w21;
      unaff_w26 = iVar19;
      iVar13 = unaff_w21;
      if ((unaff_w25 >> 1 & 1) == 0) {
        for (; iVar13 < unaff_w20; iVar13 = iVar13 + 1) {
          uVar9 = FUN_03409f80(in_stack_00000098,iVar13,0);
          cVar5 = FUN_033f7f6c(in_stack_00000088,uVar9);
          unaff_w21 = iVar13;
          if (cVar5 != '\x01') break;
          bVar6 = pbVar26[2];
          if (bVar6 == 0) {
            bVar6 = 2;
            pbVar26[2] = 2;
          }
          uVar9 = FUN_03409f80(in_stack_00000098,iVar13,0);
          cVar5 = FUN_033f8094(in_stack_00000088,uVar9,0);
          pbVar26[2] = cVar5 + bVar6;
          unaff_w21 = unaff_w20;
        }
        if (iVar19 < unaff_w19) {
          do {
            uVar9 = FUN_03409f80(unaff_x22,iVar19,0);
            cVar5 = FUN_033f7f6c(in_stack_00000088,uVar9);
            unaff_w26 = iVar19;
            if (cVar5 != '\x01') break;
            bVar6 = pbVar25[2];
            pbVar20 = (byte *)0x1;
            if (bVar6 == 0) {
              bVar6 = 2;
              pbVar25[2] = 2;
              pbVar20 = pbVar25;
            }
            uVar9 = FUN_03409f80(pbVar20,unaff_x22,iVar19,0);
            cVar5 = FUN_033f8094(in_stack_00000088,uVar9,0);
            iVar19 = iVar19 + 1;
            pbVar25[2] = cVar5 + bVar6;
            unaff_w26 = unaff_w19;
          } while (unaff_w19 != iVar19);
        }
      }
      puVar2 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
      iVar13 = (uint)*pbVar26 - (uint)*pbVar25;
      if (iVar13 == 0) {
        iVar13 = (uint)pbVar26[1] - (uint)pbVar25[1];
      }
      if (iVar13 != 0) {
        return iVar13;
      }
      uVar16 = 1;
      if (uStack0000000000000094 != 1) {
        if (((unaff_w25 >> 1 & 1) == 0) &&
           (iVar13 = (uint)pbVar26[2] - (uint)pbVar25[2], iVar13 != 0)) {
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
            iVar13 = (uint)pbVar26[3] - (uint)pbVar25[3];
            if (iVar13 == 0) {
              uVar16 = 3;
              if (uStack0000000000000094 == 3) goto LAB_033f9bcc;
              if (bVar4 != bVar3) {
                if ((in_stack_00000018 & 0x100000000) != 0) {
                  return -1;
                }
                iStack0000000000000074 = -1;
                if (bVar4 != false) {
                  iStack0000000000000074 = 1;
                }
                uVar16 = 3;
                goto LAB_033f9bcc;
              }
              uVar16 = uStack0000000000000094;
              if (bVar4 == false) goto LAB_033f9bcc;
              if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ +
                          0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar16 = FUN_033f651c(uStack0000000000000070);
              uVar14 = FUN_033f651c(unaff_w29);
              iVar13 = 1;
              if ((uVar16 & 1) != 0) {
                iVar13 = -1;
              }
              if (((uVar16 ^ uVar14) & 1) == 0) {
                iVar13 = 0;
              }
              if (iVar13 == 0) {
                if (*(int *)(*(long *)
                              Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                            + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                iVar13 = 4;
                if (param_1 == 3) {
                  iVar13 = 5;
                }
                iVar19 = 3;
                if (in_stack_00000030._4_4_ == 0 && param_1 != 0) {
                  iVar19 = iVar13;
                }
                iVar22 = -5;
                if (uVar12 != 3) {
                  iVar22 = -4;
                }
                iVar13 = -3;
                if (in_stack_00000030._4_4_ == 0 && uVar12 != 0) {
                  iVar13 = iVar22;
                }
                iVar13 = iVar13 + iVar19;
              }
              if (iVar13 == 0) {
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                bVar4 = (uStack0000000000000070 - 0x3041 & 0xffff) < 0x54;
                iVar13 = -1;
                if (bVar4) {
                  iVar13 = 1;
                }
                if (bVar4 == (unaff_w29 - 0x3041 & 0xffff) < 0x54) {
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
  iVar22 = iStack0000000000000060;
  iVar19 = iStack000000000000005c;
  iVar13 = iStack0000000000000058;
  iStack0000000000000058 = iVar13;
  iStack000000000000005c = iVar19;
  iStack0000000000000060 = iVar22;
  iStack000000000000006c = iVar1;
  if (uStack0000000000000094 == 5) {
    iStack0000000000000058 = -1;
    bVar4 = iStack000000000000005c != iStack0000000000000060;
    iStack000000000000005c = 0;
    iStack0000000000000060 = 0;
    iStack000000000000006c = -1;
    if (bVar4) {
      iStack0000000000000058 = iVar13;
      iStack000000000000005c = iVar19;
      iStack0000000000000060 = iVar22;
      iStack000000000000006c = iVar1;
      uVar16 = 4;
    }
  }
LAB_033f9bcc:
  uStack0000000000000094 = uVar16;
  uVar16 = uStack0000000000000094;
  if (unaff_w21 < iVar24) {
    if (unaff_x23 == 0) goto LAB_033fae50;
    uVar9 = FUN_03409f80(unaff_x23,unaff_w21,0);
    if (*(int *)(*(long *)
                  Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)
                          Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                        );
    }
    uVar17 = FUN_033f8ae0(uVar9,unaff_w25);
    if ((uVar17 & 1) != 0) {
      unaff_w21 = unaff_w21 + 1;
      goto LAB_033f9bcc;
    }
  }
  iVar13 = unaff_w26;
  if (unaff_w26 < iVar23) {
    if (unaff_x22 == 0) goto LAB_033fae50;
    bVar4 = true;
    do {
      uVar9 = FUN_03409f80(unaff_x22,unaff_w26,0);
      if (*(int *)(*(long *)
                    Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)
                            Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                          );
      }
      uVar17 = FUN_033f8ae0(uVar9,unaff_w25);
      if ((uVar17 & 1) == 0) {
        if (iVar24 <= unaff_w21) goto LAB_033f9d68;
        iVar13 = unaff_w26;
        if (!bVar4) goto LAB_033f9ca0;
        iVar19 = iStack0000000000000064;
        if ((unaff_w21 <= iStack0000000000000090) || (unaff_w26 <= iStack0000000000000064))
        goto joined_r0x033f9da4;
        iVar22 = unaff_w21;
        if (iVar23 <= unaff_w26) goto LAB_033f9db8;
        if (unaff_x23 == 0) goto LAB_033fae50;
        iVar19 = 0;
        goto System_Boolean__System_IConvertible_ToSByte;
      }
      unaff_w26 = unaff_w26 + 1;
      bVar4 = unaff_w26 < iVar23;
      iVar13 = iVar23;
    } while (iVar23 != unaff_w26);
  }
  unaff_w26 = iVar13;
  if (unaff_w21 < iVar24) {
LAB_033f9ca0:
    iStack0000000000000064 = iStack00000000000000b4;
    iVar19 = iStack00000000000000b0;
    unaff_w26 = iStack00000000000000a8;
    lVar18 = in_stack_000000a0;
    if (in_stack_000000a0 != 0) {
      iStack0000000000000080 = iStack00000000000000ac;
      in_stack_000000a0 = 0;
      thunk_FUN_01f51358(&stack0x000000a0,0);
      unaff_x22 = lVar18;
      iVar23 = iVar19;
      goto LAB_033f9bcc;
    }
  }
  else {
LAB_033f9d68:
    iVar22 = iStack00000000000000c8;
    iVar19 = iStack00000000000000c0;
    lVar18 = in_stack_000000b8;
    iVar13 = unaff_w26;
    if (in_stack_000000b8 != 0) {
      in_stack_000000b8 = 0;
      iStack0000000000000084 = iStack00000000000000c4;
      iStack0000000000000090 = iStack00000000000000cc;
      thunk_FUN_01f51358(&stack0x000000b8,0);
      unaff_x23 = lVar18;
      iVar24 = iVar22;
      unaff_w21 = iVar19;
      goto LAB_033f9bcc;
    }
  }
  puVar2 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
  if ((uStack0000000000000094 < 3) ||
     (iStack0000000000000074 == 0 || (in_stack_00000030 & 0x100000000) != 0)) goto LAB_033facd8;
  if ((iVar23 <= iVar13) || (iVar24 <= unaff_w21)) goto LAB_033fadd4;
  if (unaff_x23 != 0) goto LAB_033fabb8;
  goto LAB_033fae50;
  while ((iVar19 = iVar19 + 1, iVar13 + 1 < iVar23 && (iVar22 + 1 < iVar24))) {
System_Boolean__System_IConvertible_ToSByte:
    iVar22 = unaff_w21 + iVar19;
    iVar13 = unaff_w26 + iVar19;
    sVar10 = FUN_03409f80(unaff_x23,iVar22,0);
    sVar11 = FUN_03409f80(unaff_x22,iVar13,0);
    if (sVar10 != sVar11) goto LAB_033f9db8;
  }
  iVar22 = unaff_w21 + iVar19;
  iVar13 = unaff_w26 + iVar19;
LAB_033f9db8:
  unaff_w26 = iVar13;
  unaff_w21 = iVar22;
  if ((unaff_w26 == iVar23) || (iVar19 = iVar22, iVar22 == iVar24)) goto LAB_033f9bcc;
  goto LAB_033f9ddc;
  while( true ) {
    if (unaff_x23 == 0) goto LAB_033fae50;
    uVar9 = FUN_03409f80(unaff_x23,iVar19,0);
    cVar5 = FUN_033f7f6c(in_stack_00000088,uVar9);
    if (cVar5 != '\x01') break;
LAB_033f9ddc:
    iVar19 = iVar19 + -1;
    iVar1 = unaff_w26;
    if (iVar19 <= iStack0000000000000090) break;
  }
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 <= iStack0000000000000064) break;
    uVar9 = FUN_03409f80(unaff_x22,iVar1,0);
    cVar5 = FUN_033f7f6c(in_stack_00000088,uVar9);
  } while (cVar5 == '\x01');
  iVar13 = iVar1;
  unaff_w21 = iVar19;
  if (iStack0000000000000090 < iVar19) {
    if (unaff_x23 == 0) goto LAB_033fae50;
    do {
      uVar9 = FUN_03409f80(unaff_x23,iVar19,0);
      uVar17 = FUN_033f8b5c(in_stack_00000088,uVar9);
      unaff_w21 = iVar19;
      if ((uVar17 & 1) != 0) break;
      iVar19 = iVar19 + -1;
      unaff_w21 = iStack0000000000000090;
    } while (iStack0000000000000090 < iVar19);
  }
  do {
    iVar19 = unaff_w26;
    iStack0000000000000090 = iVar22;
    if (iVar1 <= iStack0000000000000064) break;
    uVar9 = FUN_03409f80(unaff_x22,iVar1,0);
    uVar17 = FUN_033f8b5c(in_stack_00000088,uVar9);
    iVar19 = unaff_w26;
    iVar13 = iVar1;
    if ((uVar17 & 1) != 0) break;
    iVar1 = iVar1 + -1;
    iVar13 = iStack0000000000000064;
  } while( true );
joined_r0x033f9da4:
  unaff_w26 = iVar13;
  iStack0000000000000064 = iVar19;
  if (unaff_x23 == 0) goto LAB_033fae50;
  uVar9 = FUN_03409f80(unaff_x23,unaff_w21,0);
  uStack0000000000000070 = FUN_033f86cc(in_stack_00000088,uVar9,unaff_w25);
  uVar9 = FUN_03409f80(unaff_x22,unaff_w26,0);
  unaff_w29 = FUN_033f86cc(in_stack_00000088,uVar9,unaff_w25);
  param_1 = FUN_033f87b0(in_stack_00000088,uStack0000000000000070);
  unaff_x24 = in_stack_00000088;
  unaff_w20 = iVar24;
  unaff_w19 = iVar23;
  in_stack_00000098 = unaff_x23;
  goto code_r0x033f9f58;
LAB_033facd8:
  if ((uStack0000000000000094 == 1) && (iStack0000000000000074 != 0)) {
    if (unaff_w21 < iVar24) {
      iVar19 = unaff_w21;
      if (unaff_x23 == 0) goto LAB_033fae50;
      do {
        uVar9 = FUN_03409f80(unaff_x23,iVar19,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar2);
        }
        uVar17 = FUN_033f6274(uVar9);
        unaff_w21 = iVar19;
      } while (((uVar17 & 1) != 0) && (iVar19 = iVar19 + 1, unaff_w21 = iVar24, iVar24 != iVar19));
    }
    if (iVar13 < iVar23) {
      iVar19 = iVar13;
      if (unaff_x22 == 0) {
LAB_033fae50:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        uVar9 = FUN_03409f80(unaff_x22,iVar19,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar2);
        }
        uVar17 = FUN_033f6274(uVar9);
        iVar13 = iVar19;
      } while (((uVar17 & 1) != 0) && (iVar19 = iVar19 + 1, iVar13 = iVar23, iVar23 != iVar19));
    }
  }
  if (iStack0000000000000074 != 0) goto LAB_033fadd4;
  goto LAB_033fad8c;
  while( true ) {
    iStack0000000000000074 = 0;
    _uStack0000000000000078 = 0;
    if (iVar24 <= unaff_w21) break;
LAB_033fabb8:
    uVar9 = FUN_03409f80(unaff_x23,unaff_w21,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar2);
    }
    uVar17 = FUN_033f6274(uVar9);
    if ((uVar17 & 1) == 0) goto LAB_033facd8;
    if (unaff_x22 == 0) goto LAB_033fae50;
    uVar9 = FUN_03409f80(unaff_x22,iVar13,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar2);
    }
    uVar17 = FUN_033f6274(uVar9);
    if ((uVar17 & 1) == 0) goto LAB_033facd8;
    uVar9 = FUN_03409f80(unaff_x23,unaff_w21,0);
    uVar15 = FUN_033f86cc(in_stack_00000088,uVar9,unaff_w25);
    uVar16 = FUN_033f8094(in_stack_00000088,uVar15,uStack000000000000007c);
    uVar9 = FUN_03409f80(unaff_x22,iVar13,0);
    uVar15 = FUN_033f86cc(in_stack_00000088,uVar9,unaff_w25);
    uVar12 = FUN_033f8094(in_stack_00000088,uVar15,_uStack0000000000000078 & 0xffffffff);
    iStack0000000000000074 = (uVar16 & 0xff) - (uVar12 & 0xff);
    if (iStack0000000000000074 != 0) goto LAB_033facd8;
    iVar13 = iVar13 + 1;
    unaff_w21 = unaff_w21 + 1;
    if (iVar23 <= iVar13) break;
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
        if (iVar13 == iVar23) {
          *in_stack_00000010 = 1;
        }
        if (unaff_w21 == iVar24) {
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
  if (unaff_w21 == iVar24) {
    if (iVar13 != iVar23) {
      iStack0000000000000074 = -1;
    }
  }
  else {
    iStack0000000000000074 = 1;
  }
  return iStack0000000000000074;
}


