/*
FUNCTION_NAME: System.Boolean$$System.IConvertible.ToType
ENTRY_POINT: 033fa250
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

int System_Boolean__System_IConvertible_ToType(uint param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  short sVar7;
  short sVar8;
  undefined2 uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  byte *pbVar19;
  int iVar20;
  byte *in_x11;
  int unaff_w19;
  int unaff_w20;
  int iVar21;
  long unaff_x22;
  long unaff_x23;
  uint unaff_w25;
  int unaff_w26;
  byte *unaff_x28;
  uint uStack000000000000000c;
  undefined1 *in_stack_00000010;
  ulong in_stack_00000018;
  int iStack0000000000000020;
  uint uStack0000000000000024;
  undefined1 *in_stack_00000028;
  ulong in_stack_00000030;
  byte *in_stack_00000038;
  byte *in_stack_00000040;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  int iStack0000000000000058;
  int iStack000000000000005c;
  int iStack0000000000000060;
  int iStack0000000000000064;
  uint uStack0000000000000068;
  int iStack000000000000006c;
  uint uStack0000000000000070;
  int iStack0000000000000074;
  uint uStack0000000000000078;
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
  
code_r0x033fa250:
  uStack000000000000000c = 0;
LAB_033fa3a0:
  iVar20 = 1;
  iVar10 = unaff_w19;
  uVar13 = uStack0000000000000078;
LAB_033fa3a8:
  if (uVar13 == 0) {
    lVar16 = FUN_033f823c(in_stack_00000088,unaff_x22,unaff_w26,iVar10);
    in_x11 = in_stack_00000040;
    param_3 = iStack0000000000000020;
    if (in_stack_00000040 != (byte *)0x0) goto LAB_033fa454;
    if (lVar16 == 0) goto LAB_033fa3b0;
    if (*(long *)(lVar16 + 0x18) == 0) goto LAB_033fae50;
    lVar18 = *(long *)(lVar16 + 0x28);
    iVar17 = iStack0000000000000064;
    iVar21 = unaff_w26 + *(int *)(*(long *)(lVar16 + 0x18) + 0x18);
    if (lVar18 == 0) {
      if (in_stack_000000a0 == 0) {
        in_stack_000000a0 = unaff_x22;
        thunk_FUN_01f51358(&stack0x000000a0,unaff_x22);
        iStack00000000000000ac = iStack0000000000000080;
        if (*(long *)(lVar16 + 0x18) != 0) {
          iStack00000000000000b4 = iStack0000000000000064;
          iStack00000000000000a8 = unaff_w26 + *(int *)(*(long *)(lVar16 + 0x18) + 0x18);
          unaff_x22 = *(long *)(lVar16 + 0x20);
          iStack00000000000000b0 = iVar10;
          if (unaff_x22 != 0) {
            iStack0000000000000064 = 0;
            _uStack0000000000000078 = _uStack0000000000000078 & 0xffffffff00000000;
            iStack0000000000000080 = 0;
            unaff_w26 = 0;
            iVar20 = unaff_w20;
            unaff_w19 = *(int *)(unaff_x22 + 0x10);
            iStack00000000000000b4 = iVar17;
            uVar14 = uStack0000000000000094;
            goto LAB_033f9bcc;
          }
        }
        goto LAB_033fae50;
      }
      uVar13 = 0;
      in_x11 = (byte *)0x0;
    }
    else {
      in_x11 = *(byte **)(in_stack_00000048 + 0x20);
      uVar15 = 0;
      while ((long)uVar15 < (long)(int)*(uint *)(lVar18 + 0x18)) {
        if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_033fae54;
        in_x11[uVar15] = *(byte *)(lVar18 + uVar15 + 0x20);
        lVar18 = *(long *)(lVar16 + 0x28);
        uVar15 = uVar15 + 1;
        if (lVar18 == 0) goto LAB_033fae50;
      }
      uStack0000000000000068 = 0xffffffff;
      uVar13 = 0;
      in_stack_00000038 = in_x11;
    }
  }
  else if (in_x11 == (byte *)0x0) {
LAB_033fa3b0:
    in_x11 = *(byte **)(in_stack_00000048 + 0x20);
    *in_x11 = (byte)param_1;
    bVar5 = FUN_033f8000(in_stack_00000088,in_stack_00000050._4_4_);
    in_x11[1] = bVar5;
    if (1 < uStack0000000000000094 && (in_stack_00000030 & 0x100000000) == 0) {
      bVar5 = FUN_033f8094(in_stack_00000088,in_stack_00000050._4_4_,uVar13);
      in_x11[2] = bVar5;
    }
    puVar2 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
    if (uStack0000000000000094 < 3) {
LAB_033fa4a4:
      uVar13 = 0;
    }
    else {
      if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0) ==
          0) {
        thunk_FUN_01ee6d7c();
      }
      bVar5 = FUN_033f60b8(in_stack_00000050._4_4_);
      in_x11[3] = bVar5;
      if (uStack0000000000000094 < 4) goto LAB_033fa4a4;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if ((in_stack_00000050._4_4_ & 0xffff) < 0x3041) {
LAB_033fa8a8:
        uVar13 = 0;
      }
      else if ((in_stack_00000050._4_4_ + 0x9a & 0xffff) < 0x38) {
        uVar13 = 1;
      }
      else {
        uVar13 = in_stack_00000050._4_4_ >> 8 & 0xff;
        if (0x32 < uVar13) goto LAB_033fa8a8;
        if ((in_stack_00000050._4_4_ & 0xffff) < 0x309d) {
          uVar13 = (uint)((in_stack_00000050._4_4_ & 0xffff) < 0x3099);
        }
        else if (uVar13 < 0x31) {
          uVar13 = (uint)((in_stack_00000050._4_4_ & 0xffff) != 0x30fb);
        }
        else {
          uVar13 = (uint)((in_stack_00000050._4_4_ - 0x32d0 & 0xffff) < 0x2f);
        }
      }
    }
    if (1 < (uStack0000000000000024 & 0xff)) {
      uStack0000000000000068 = in_stack_00000050._4_4_;
    }
    iVar21 = unaff_w26 + 1;
  }
  else {
LAB_033fa454:
    iStack0000000000000020 = param_3;
    uVar13 = 0;
    iVar21 = unaff_w26 + 1;
  }
  iStack0000000000000020 = iVar20 + iStack0000000000000020;
  unaff_w26 = iVar21;
  iVar20 = iStack0000000000000020;
  if ((unaff_w25 >> 1 & 1) == 0) {
    for (; iVar20 < unaff_w20; iVar20 = iVar20 + 1) {
      uVar9 = FUN_03409f80(unaff_x23,iVar20,0);
      cVar6 = FUN_033f7f6c(in_stack_00000088,uVar9);
      iStack0000000000000020 = iVar20;
      if (cVar6 != '\x01') break;
      bVar5 = unaff_x28[2];
      if (bVar5 == 0) {
        bVar5 = 2;
        unaff_x28[2] = 2;
      }
      uVar9 = FUN_03409f80(in_stack_00000098,iVar20,0);
      cVar6 = FUN_033f8094(in_stack_00000088,uVar9,0);
      unaff_x28[2] = cVar6 + bVar5;
      iStack0000000000000020 = unaff_w20;
      unaff_x23 = in_stack_00000098;
    }
    if (iVar21 < iVar10) {
      do {
        uVar9 = FUN_03409f80(unaff_x22,iVar21,0);
        cVar6 = FUN_033f7f6c(in_stack_00000088,uVar9);
        unaff_w26 = iVar21;
        if (cVar6 != '\x01') break;
        bVar5 = in_x11[2];
        pbVar19 = (byte *)0x1;
        if (bVar5 == 0) {
          bVar5 = 2;
          in_x11[2] = 2;
          pbVar19 = in_x11;
        }
        uVar9 = FUN_03409f80(pbVar19,unaff_x22,iVar21,0);
        cVar6 = FUN_033f8094(in_stack_00000088,uVar9,0);
        iVar21 = iVar21 + 1;
        in_x11[2] = cVar6 + bVar5;
        unaff_x23 = in_stack_00000098;
        unaff_w26 = iVar10;
      } while (iVar10 != iVar21);
    }
  }
  puVar2 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
  iVar20 = (uint)*unaff_x28 - (uint)*in_x11;
  if (iVar20 == 0) {
    iVar20 = (uint)unaff_x28[1] - (uint)in_x11[1];
  }
  if (iVar20 != 0) {
    return iVar20;
  }
  iVar20 = unaff_w20;
  unaff_w19 = iVar10;
  uVar14 = 1;
  if (uStack0000000000000094 == 1) goto LAB_033f9bcc;
  if (((unaff_w25 >> 1 & 1) == 0) && (iVar10 = (uint)unaff_x28[2] - (uint)in_x11[2], iVar10 != 0)) {
    if ((in_stack_00000018 & 0x100000000) == 0) {
      iStack0000000000000074 = iVar10;
      uVar14 = 1;
      if (*(char *)(in_stack_00000088 + 0x5c) != '\0') {
        uVar14 = 2;
      }
      goto LAB_033f9bcc;
    }
  }
  else {
    uVar14 = 2;
    if (uStack0000000000000094 == 2) goto LAB_033f9bcc;
    iVar10 = (uint)unaff_x28[3] - (uint)in_x11[3];
    if (iVar10 == 0) {
      uVar14 = 3;
      if (uStack0000000000000094 == 3) goto LAB_033f9bcc;
      if (uStack000000000000000c != uVar13) {
        if ((in_stack_00000018 & 0x100000000) != 0) {
          return -1;
        }
        iStack0000000000000074 = -1;
        if (uStack000000000000000c != 0) {
          iStack0000000000000074 = 1;
        }
        uVar14 = 3;
        goto LAB_033f9bcc;
      }
      uVar14 = uStack0000000000000094;
      if (uStack000000000000000c == 0) goto LAB_033f9bcc;
      if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0) ==
          0) {
        thunk_FUN_01ee6d7c();
      }
      uVar13 = FUN_033f651c(uStack0000000000000070);
      uVar14 = FUN_033f651c(in_stack_00000050._4_4_);
      iVar10 = 1;
      if ((uVar13 & 1) != 0) {
        iVar10 = -1;
      }
      if (((uVar13 ^ uVar14) & 1) == 0) {
        iVar10 = 0;
      }
      if (iVar10 == 0) {
        if (*(int *)(*(long *)
                      Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                    + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        iVar20 = 4;
        if (iStack000000000000007c == 3) {
          iVar20 = 5;
        }
        iVar21 = 3;
        if (in_stack_00000030._4_4_ == 0 && iStack000000000000007c != 0) {
          iVar21 = iVar20;
        }
        iVar20 = -5;
        if (uStack0000000000000078 != 3) {
          iVar20 = -4;
        }
        iVar10 = -3;
        if (in_stack_00000030._4_4_ == 0 && uStack0000000000000078 != 0) {
          iVar10 = iVar20;
        }
        iVar10 = iVar10 + iVar21;
      }
      if (iVar10 == 0) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        bVar3 = (uStack0000000000000070 - 0x3041 & 0xffff) < 0x54;
        iVar10 = -1;
        if (bVar3) {
          iVar10 = 1;
        }
        if (bVar3 == (in_stack_00000050._4_4_ - 0x3041 & 0xffff) < 0x54) {
          if (*(int *)(*(long *)
                        Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                      + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar13 = FUN_033f81c8(uStack0000000000000070 & 0xffff,unaff_w25);
          uVar11 = FUN_033f81c8(in_stack_00000050._4_4_ & 0xffff,unaff_w25);
          iVar10 = 1;
          if ((uVar13 & 1) != 0) {
            iVar10 = -1;
          }
          iVar20 = unaff_w20;
          uVar14 = uStack0000000000000094;
          if ((uVar13 & 1) == (uVar11 & 1)) goto LAB_033f9bcc;
        }
      }
      uVar14 = 3;
    }
    else {
      uVar14 = 2;
    }
    iVar20 = unaff_w20;
    iStack0000000000000074 = iVar10;
    if ((in_stack_00000018 & 0x100000000) == 0) {
LAB_033f9bcc:
      for (; uStack0000000000000094 = uVar14, unaff_w20 = iVar20, iVar20 = unaff_w20,
          uVar14 = uStack0000000000000094, iStack0000000000000020 < unaff_w20;
          iStack0000000000000020 = iStack0000000000000020 + 1) {
        if (unaff_x23 == 0) goto LAB_033fae50;
        uVar9 = FUN_03409f80(unaff_x23,iStack0000000000000020,0);
        if (*(int *)(*(long *)
                      Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                    + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)
                              Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                            );
        }
        uVar15 = FUN_033f8ae0(uVar9,unaff_w25);
        if ((uVar15 & 1) == 0) break;
      }
      iVar10 = unaff_w26;
      if (unaff_w26 < unaff_w19) {
        if (unaff_x22 == 0) goto LAB_033fae50;
        bVar3 = true;
        do {
          uVar9 = FUN_03409f80(unaff_x22,unaff_w26,0);
          if (*(int *)(*(long *)
                        Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                      + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(*(long *)
                                Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                              );
          }
          uVar15 = FUN_033f8ae0(uVar9,unaff_w25);
          if ((uVar15 & 1) == 0) {
            if (unaff_w20 <= iStack0000000000000020) goto LAB_033f9d68;
            iVar10 = unaff_w26;
            if (!bVar3) goto LAB_033f9ca0;
            iVar17 = iStack0000000000000064;
            iVar21 = iStack0000000000000090;
            if ((iStack0000000000000020 <= iStack0000000000000090) ||
               (unaff_w26 <= iStack0000000000000064)) goto joined_r0x033f9da4;
            iVar21 = iStack0000000000000020;
            if (unaff_w19 <= unaff_w26) goto LAB_033f9db8;
            if (unaff_x23 == 0) goto LAB_033fae50;
            iVar17 = 0;
            goto System_Boolean__System_IConvertible_ToSByte;
          }
          unaff_w26 = unaff_w26 + 1;
          bVar3 = unaff_w26 < unaff_w19;
          iVar10 = unaff_w19;
        } while (unaff_w19 != unaff_w26);
      }
      unaff_w26 = iVar10;
      if (iStack0000000000000020 < unaff_w20) {
LAB_033f9ca0:
        iStack0000000000000064 = iStack00000000000000b4;
        iVar21 = iStack00000000000000b0;
        unaff_w26 = iStack00000000000000a8;
        lVar16 = in_stack_000000a0;
        if (in_stack_000000a0 != 0) {
          iStack0000000000000080 = iStack00000000000000ac;
          in_stack_000000a0 = 0;
          thunk_FUN_01f51358(&stack0x000000a0,0);
          unaff_x22 = lVar16;
          unaff_w19 = iVar21;
          goto LAB_033f9bcc;
        }
      }
      else {
LAB_033f9d68:
        iVar20 = iStack00000000000000c8;
        iVar21 = iStack00000000000000c0;
        lVar16 = in_stack_000000b8;
        iVar10 = unaff_w26;
        if (in_stack_000000b8 != 0) {
          in_stack_000000b8 = 0;
          iStack0000000000000084 = iStack00000000000000c4;
          iStack0000000000000090 = iStack00000000000000cc;
          thunk_FUN_01f51358(&stack0x000000b8,0);
          unaff_x23 = lVar16;
          iStack0000000000000020 = iVar21;
          goto LAB_033f9bcc;
        }
      }
      puVar2 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
      if ((uStack0000000000000094 < 3) ||
         (iStack0000000000000074 == 0 || (in_stack_00000030 & 0x100000000) != 0)) goto LAB_033facd8;
      if ((unaff_w19 <= iVar10) || (unaff_w20 <= iStack0000000000000020)) goto LAB_033fadd4;
      if (unaff_x23 != 0) goto LAB_033fabb8;
      goto LAB_033fae50;
    }
  }
  return -1;
  while ((iVar17 = iVar17 + 1, iVar10 + 1 < unaff_w19 && (iVar21 + 1 < unaff_w20))) {
System_Boolean__System_IConvertible_ToSByte:
    iVar21 = iStack0000000000000020 + iVar17;
    iVar10 = unaff_w26 + iVar17;
    sVar7 = FUN_03409f80(unaff_x23,iVar21,0);
    sVar8 = FUN_03409f80(unaff_x22,iVar10,0);
    if (sVar7 != sVar8) goto LAB_033f9db8;
  }
  iVar21 = iStack0000000000000020 + iVar17;
  iVar10 = unaff_w26 + iVar17;
LAB_033f9db8:
  unaff_w26 = iVar10;
  iStack0000000000000020 = iVar21;
  if ((unaff_w26 != unaff_w19) && (iVar17 = iVar21, iVar21 != unaff_w20)) {
    do {
      iVar17 = iVar17 + -1;
      iVar1 = unaff_w26;
      if (iVar17 <= iStack0000000000000090) break;
      if (unaff_x23 == 0) goto LAB_033fae50;
      uVar9 = FUN_03409f80(unaff_x23,iVar17,0);
      cVar6 = FUN_033f7f6c(in_stack_00000088,uVar9);
    } while (cVar6 == '\x01');
    do {
      iVar1 = iVar1 + -1;
      if (iVar1 <= iStack0000000000000064) break;
      uVar9 = FUN_03409f80(unaff_x22,iVar1,0);
      cVar6 = FUN_033f7f6c(in_stack_00000088,uVar9);
    } while (cVar6 == '\x01');
    iVar10 = iVar1;
    iStack0000000000000020 = iVar17;
    if (iStack0000000000000090 < iVar17) {
      if (unaff_x23 == 0) goto LAB_033fae50;
      do {
        uVar9 = FUN_03409f80(unaff_x23,iVar17,0);
        uVar15 = FUN_033f8b5c(in_stack_00000088,uVar9);
        iStack0000000000000020 = iVar17;
        if ((uVar15 & 1) != 0) break;
        iVar17 = iVar17 + -1;
        iStack0000000000000020 = iStack0000000000000090;
      } while (iStack0000000000000090 < iVar17);
    }
    do {
      iVar17 = unaff_w26;
      if (iVar1 <= iStack0000000000000064) goto joined_r0x033f9da4;
      uVar9 = FUN_03409f80(unaff_x22,iVar1,0);
      uVar15 = FUN_033f8b5c(in_stack_00000088,uVar9);
      iVar17 = unaff_w26;
      iVar10 = iVar1;
      if ((uVar15 & 1) != 0) goto joined_r0x033f9da4;
      iVar1 = iVar1 + -1;
      iVar10 = iStack0000000000000064;
    } while( true );
  }
  goto LAB_033f9bcc;
joined_r0x033f9da4:
  unaff_w26 = iVar10;
  iStack0000000000000064 = iVar17;
  if (unaff_x23 == 0) goto LAB_033fae50;
  uVar9 = FUN_03409f80(unaff_x23,iStack0000000000000020,0);
  uStack0000000000000070 = FUN_033f86cc(in_stack_00000088,uVar9,unaff_w25);
  uVar9 = FUN_03409f80(unaff_x22,unaff_w26,0);
  in_stack_00000050._4_4_ = FUN_033f86cc(in_stack_00000088,uVar9,unaff_w25);
  iVar17 = FUN_033f87b0(in_stack_00000088,uStack0000000000000070);
  _uStack0000000000000078 = CONCAT44(iVar17,uStack0000000000000078);
  iStack0000000000000090 = iVar21;
  if (iVar17 == 0) {
LAB_033f9f84:
    unaff_x28 = (byte *)0x0;
  }
  else {
    if (-1 < *(int *)(in_stack_00000048 + 0x28)) {
      uStack0000000000000070 =
           FUN_033f88d0(in_stack_00000088,*(int *)(in_stack_00000048 + 0x28),iVar17,unaff_w25);
      goto LAB_033f9f84;
    }
    unaff_x28 = *(byte **)(in_stack_00000048 + 0x30);
    if (unaff_x28 == (byte *)0x0) {
      iStack0000000000000020 = iStack0000000000000020 + 1;
      goto LAB_033f9bcc;
    }
  }
  uVar13 = FUN_033f87b0(in_stack_00000088,in_stack_00000050._4_4_);
  _uStack0000000000000078 = CONCAT44(iVar17,uVar13);
  if (uVar13 == 0) {
System_Convert__ToInt64:
    in_x11 = (byte *)0x0;
  }
  else {
    if (-1 < (int)uStack0000000000000068) {
      in_stack_00000050._4_4_ =
           FUN_033f88d0(in_stack_00000088,uStack0000000000000068,uVar13,unaff_w25);
      goto System_Convert__ToInt64;
    }
    in_x11 = in_stack_00000038;
    if (in_stack_00000038 == (byte *)0x0) {
      in_stack_00000038 = (byte *)0x0;
      unaff_w26 = unaff_w26 + 1;
      goto LAB_033f9bcc;
    }
  }
  bVar5 = FUN_033f7f6c(in_stack_00000088,uStack0000000000000070);
  uStack0000000000000024 = FUN_033f7f6c(in_stack_00000088,in_stack_00000050._4_4_);
  if (bVar5 == 6) {
    if (((unaff_w25 >> 0x1d & 1) == 0) && (uStack0000000000000094 == 5)) {
      iStack000000000000006c = iStack0000000000000020 - iStack0000000000000084;
      if (in_stack_000000b8 != 0) {
        iStack000000000000006c = iStack00000000000000c0 - iStack00000000000000c4;
      }
      uVar13 = FUN_033f8000(in_stack_00000088,uStack0000000000000070);
      if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0) ==
          0) {
        thunk_FUN_01ee6d7c(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__);
      }
      iVar10 = FUN_033f60b8(uStack0000000000000070);
      iStack000000000000005c = (uVar13 & 0xff) << (ulong)(iVar10 + 8U & 0x1f);
    }
    iStack0000000000000020 = iStack0000000000000020 + 1;
    *(uint *)(in_stack_00000048 + 0x28) = uStack0000000000000070;
    if ((uStack0000000000000024 & 0xff) != 6) goto LAB_033fa1ec;
  }
  else if ((uStack0000000000000024 & 0xff) != 6) {
    in_stack_00000040 = in_x11;
    in_stack_00000098 = unaff_x23;
    param_3 = iStack0000000000000020;
    param_1 = uStack0000000000000024;
    if (iVar17 == 0) {
      lVar16 = FUN_033f823c(in_stack_00000088,unaff_x23,iStack0000000000000020,unaff_w20);
      iVar10 = unaff_w19;
      if (unaff_x28 != (byte *)0x0) {
        uStack000000000000000c = 0;
        iVar20 = 1;
        goto LAB_033fa3a8;
      }
      if (lVar16 == 0) goto LAB_033fa2f0;
      if (*(long *)(lVar16 + 0x18) == 0) goto LAB_033fae50;
      lVar18 = *(long *)(lVar16 + 0x28);
      iVar20 = *(int *)(*(long *)(lVar16 + 0x18) + 0x18);
      if (lVar18 != 0) {
        unaff_x28 = *(byte **)(in_stack_00000048 + 0x18);
        uVar15 = 0;
        goto LAB_033fa2c0;
      }
      if (in_stack_000000b8 == 0) {
        in_stack_000000b8 = unaff_x23;
        thunk_FUN_01f51358(&stack0x000000b8,unaff_x23);
        iStack00000000000000c4 = iStack0000000000000084;
        if (*(long *)(lVar16 + 0x18) == 0) goto LAB_033fae50;
        iStack00000000000000c0 = iStack0000000000000020 + *(int *)(*(long *)(lVar16 + 0x18) + 0x18);
        unaff_x23 = *(long *)(lVar16 + 0x20);
        iStack00000000000000c8 = unaff_w20;
        iStack00000000000000cc = iVar21;
        if (unaff_x23 == 0) goto LAB_033fae50;
        iStack0000000000000090 = 0;
        _uStack0000000000000078 = (ulong)uVar13;
        iStack0000000000000084 = 0;
        iVar20 = *(int *)(unaff_x23 + 0x10);
        iStack0000000000000020 = 0;
        goto LAB_033f9bcc;
      }
      uStack000000000000000c = 0;
      unaff_x28 = (byte *)0x0;
      goto LAB_033fa3a8;
    }
    if (unaff_x28 != (byte *)0x0) goto code_r0x033fa250;
LAB_033fa2f0:
    unaff_x28 = *(byte **)(in_stack_00000048 + 0x18);
    *unaff_x28 = bVar5;
    bVar4 = FUN_033f8000(in_stack_00000088,uStack0000000000000070);
    unaff_x28[1] = bVar4;
    if (1 < uStack0000000000000094 && (in_stack_00000030 & 0x100000000) == 0) {
      bVar4 = FUN_033f8094(in_stack_00000088,uStack0000000000000070,iVar17);
      unaff_x28[2] = bVar4;
    }
    if (2 < uStack0000000000000094) {
      if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0) ==
          0) {
        thunk_FUN_01ee6d7c();
      }
      bVar4 = FUN_033f60b8(uStack0000000000000070);
      unaff_x28[3] = bVar4;
      if (3 < uStack0000000000000094) {
        if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c();
        }
        if (0x3040 < (uStack0000000000000070 & 0xffff)) {
          if ((uStack0000000000000070 + 0x9a & 0xffff) < 0x38) {
            uStack000000000000000c = 1;
            goto LAB_033fa38c;
          }
          uVar13 = uStack0000000000000070 >> 8 & 0xff;
          if (uVar13 < 0x33) {
            if ((uStack0000000000000070 & 0xffff) < 0x309d) {
              uStack000000000000000c = (uint)((uStack0000000000000070 & 0xffff) < 0x3099);
            }
            else if (uVar13 < 0x31) {
              uStack000000000000000c = (uint)((uStack0000000000000070 & 0xffff) != 0x30fb);
            }
            else {
              uStack000000000000000c = (uint)((uStack0000000000000070 - 0x32d0 & 0xffff) < 0x2f);
            }
            goto LAB_033fa38c;
          }
        }
        uStack000000000000000c = 0;
        goto LAB_033fa38c;
      }
    }
    uStack000000000000000c = 0;
LAB_033fa38c:
    if (1 < bVar5) {
      *(uint *)(in_stack_00000048 + 0x28) = uStack0000000000000070;
    }
    goto LAB_033fa3a0;
  }
  puVar2 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
  if (((unaff_w25 >> 0x1d & 1) == 0) && (uStack0000000000000094 == 5)) {
    iStack0000000000000058 = unaff_w26 - iStack0000000000000080;
    if (in_stack_000000a0 != 0) {
      iStack0000000000000058 = iStack00000000000000a8 - iStack00000000000000ac;
    }
    uVar13 = FUN_033f8000(in_stack_00000088,in_stack_00000050._4_4_);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar2);
    }
    iVar10 = FUN_033f60b8(in_stack_00000050._4_4_);
    iStack0000000000000060 = (uVar13 & 0xff) << (ulong)(iVar10 + 8U & 0x1f);
  }
  unaff_w26 = unaff_w26 + 1;
  uStack0000000000000068 = in_stack_00000050._4_4_;
LAB_033fa1ec:
  iVar1 = iStack000000000000006c;
  iVar17 = iStack0000000000000060;
  iVar21 = iStack000000000000005c;
  iVar10 = iStack0000000000000058;
  iStack0000000000000058 = iVar10;
  iStack000000000000005c = iVar21;
  iStack0000000000000060 = iVar17;
  iStack000000000000006c = iVar1;
  if (uStack0000000000000094 == 5) {
    iStack0000000000000058 = -1;
    bVar3 = iStack000000000000005c != iStack0000000000000060;
    iStack000000000000005c = 0;
    iStack0000000000000060 = 0;
    iStack000000000000006c = -1;
    if (bVar3) {
      iStack0000000000000058 = iVar10;
      iStack000000000000005c = iVar21;
      iStack0000000000000060 = iVar17;
      iStack000000000000006c = iVar1;
      uVar14 = 4;
    }
  }
  goto LAB_033f9bcc;
LAB_033fa2c0:
  if ((long)(int)*(uint *)(lVar18 + 0x18) <= (long)uVar15) goto LAB_033fa870;
  if (*(uint *)(lVar18 + 0x18) <= uVar15) {
LAB_033fae54:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  unaff_x28[uVar15] = *(byte *)(lVar18 + uVar15 + 0x20);
  lVar18 = *(long *)(lVar16 + 0x28);
  uVar15 = uVar15 + 1;
  if (lVar18 == 0) goto LAB_033fae50;
  goto LAB_033fa2c0;
LAB_033fa870:
  uStack000000000000000c = 0;
  *(undefined4 *)(in_stack_00000048 + 0x28) = 0xffffffff;
  *(byte **)(in_stack_00000048 + 0x30) = unaff_x28;
  goto LAB_033fa3a8;
LAB_033facd8:
  if ((uStack0000000000000094 == 1) && (iStack0000000000000074 != 0)) {
    if (iStack0000000000000020 < unaff_w20) {
      iVar20 = iStack0000000000000020;
      if (unaff_x23 == 0) goto LAB_033fae50;
      do {
        uVar9 = FUN_03409f80(unaff_x23,iVar20,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar2);
        }
        uVar15 = FUN_033f6274(uVar9);
        iStack0000000000000020 = iVar20;
      } while (((uVar15 & 1) != 0) &&
              (iVar20 = iVar20 + 1, iStack0000000000000020 = unaff_w20, unaff_w20 != iVar20));
    }
    if (iVar10 < unaff_w19) {
      iVar20 = iVar10;
      if (unaff_x22 == 0) {
LAB_033fae50:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        uVar9 = FUN_03409f80(unaff_x22,iVar20,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar2);
        }
        uVar15 = FUN_033f6274(uVar9);
        iVar10 = iVar20;
      } while (((uVar15 & 1) != 0) && (iVar20 = iVar20 + 1, iVar10 = unaff_w19, unaff_w19 != iVar20)
              );
    }
  }
  if (iStack0000000000000074 != 0) goto LAB_033fadd4;
  goto LAB_033fad8c;
  while( true ) {
    iStack0000000000000074 = 0;
    _uStack0000000000000078 = 0;
    if (unaff_w20 <= iStack0000000000000020) break;
LAB_033fabb8:
    uVar9 = FUN_03409f80(unaff_x23,iStack0000000000000020,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar2);
    }
    uVar15 = FUN_033f6274(uVar9);
    if ((uVar15 & 1) == 0) goto LAB_033facd8;
    if (unaff_x22 == 0) goto LAB_033fae50;
    uVar9 = FUN_03409f80(unaff_x22,iVar10,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar2);
    }
    uVar15 = FUN_033f6274(uVar9);
    if ((uVar15 & 1) == 0) goto LAB_033facd8;
    uVar9 = FUN_03409f80(unaff_x23,iStack0000000000000020,0);
    uVar12 = FUN_033f86cc(in_stack_00000088,uVar9,unaff_w25);
    uVar13 = FUN_033f8094(in_stack_00000088,uVar12,iStack000000000000007c);
    uVar9 = FUN_03409f80(unaff_x22,iVar10,0);
    uVar12 = FUN_033f86cc(in_stack_00000088,uVar9,unaff_w25);
    uVar14 = FUN_033f8094(in_stack_00000088,uVar12,_uStack0000000000000078 & 0xffffffff);
    iStack0000000000000074 = (uVar13 & 0xff) - (uVar14 & 0xff);
    if (iStack0000000000000074 != 0) goto LAB_033facd8;
    iVar10 = iVar10 + 1;
    iStack0000000000000020 = iStack0000000000000020 + 1;
    if (unaff_w19 <= iVar10) break;
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
        if (iVar10 == unaff_w19) {
          *in_stack_00000010 = 1;
        }
        if (iStack0000000000000020 == unaff_w20) {
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
  if (iStack0000000000000020 == unaff_w20) {
    if (iVar10 != unaff_w19) {
      iStack0000000000000074 = -1;
    }
  }
  else {
    iStack0000000000000074 = 1;
  }
  return iStack0000000000000074;
}


