/*
FUNCTION_NAME: System.Convert$$ToDouble
ENTRY_POINT: 033fa104
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

int System_Convert__ToDouble(byte param_1)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  undefined2 uVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  byte *pbVar18;
  long lVar19;
  int iVar20;
  int iVar21;
  int unaff_w19;
  int unaff_w20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  uint unaff_w25;
  int unaff_w26;
  byte unaff_w27;
  int iVar22;
  byte *unaff_x28;
  undefined1 *in_stack_00000010;
  ulong in_stack_00000018;
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
  
  lVar17 = unaff_x24;
code_r0x033fa104:
  iVar10 = unaff_w21 + 1;
  *(uint *)(in_stack_00000048 + 0x28) = uStack0000000000000070;
  if (param_1 != 6) {
    iVar12 = unaff_w20;
    iVar20 = unaff_w19;
    if (unaff_w27 != 6) goto LAB_033fa240;
    goto LAB_033fa1ec;
  }
LAB_033fa12c:
  puVar2 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
  if (((unaff_w25 >> 0x1d & 1) == 0) && (uStack0000000000000094 == 5)) {
    iStack0000000000000058 = unaff_w26 - iStack0000000000000080;
    if (in_stack_000000a0 != 0) {
      iStack0000000000000058 = iStack00000000000000a8 - iStack00000000000000ac;
    }
    uVar11 = FUN_033f8000(in_stack_00000088,in_stack_00000050._4_4_);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar2);
    }
    iVar12 = FUN_033f60b8(in_stack_00000050._4_4_);
    iStack0000000000000060 = (uVar11 & 0xff) << (ulong)(iVar12 + 8U & 0x1f);
  }
  unaff_w26 = unaff_w26 + 1;
  uStack0000000000000068 = in_stack_00000050._4_4_;
LAB_033fa1ec:
  iVar22 = iStack000000000000006c;
  iVar21 = iStack0000000000000060;
  iVar20 = iStack000000000000005c;
  iVar12 = iStack0000000000000058;
  unaff_w21 = iVar10;
  iStack0000000000000058 = iVar12;
  iStack000000000000005c = iVar20;
  iStack0000000000000060 = iVar21;
  iStack000000000000006c = iVar22;
  uVar11 = uStack0000000000000094;
  if (uStack0000000000000094 == 5) {
    iStack0000000000000058 = -1;
    bVar4 = iStack000000000000005c != iStack0000000000000060;
    iStack000000000000005c = 0;
    iStack0000000000000060 = 0;
    iStack000000000000006c = -1;
    if (bVar4) {
      iStack0000000000000058 = iVar12;
      iStack000000000000005c = iVar20;
      iStack0000000000000060 = iVar21;
      iStack000000000000006c = iVar22;
      uVar11 = 4;
    }
  }
LAB_033f9bcc:
  for (; uStack0000000000000094 = uVar11, uVar11 = uStack0000000000000094, unaff_w21 < unaff_w20;
      unaff_w21 = unaff_w21 + 1) {
    if (unaff_x23 == 0) goto LAB_033fae50;
    uVar7 = FUN_03409f80(unaff_x23,unaff_w21,0);
    if (*(int *)(*(long *)
                  Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)
                          Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                        );
    }
    uVar16 = FUN_033f8ae0(uVar7,unaff_w25);
    if ((uVar16 & 1) == 0) break;
  }
  iVar10 = unaff_w26;
  if (unaff_w26 < unaff_w19) {
    if (unaff_x22 == 0) goto LAB_033fae50;
    bVar4 = true;
    do {
      uVar7 = FUN_03409f80(unaff_x22,unaff_w26,0);
      if (*(int *)(*(long *)
                    Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)
                            Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                          );
      }
      uVar16 = FUN_033f8ae0(uVar7,unaff_w25);
      if ((uVar16 & 1) == 0) {
        if (unaff_w20 <= unaff_w21) goto LAB_033f9d68;
        iVar10 = unaff_w26;
        if (!bVar4) goto LAB_033f9ca0;
        iVar12 = iStack0000000000000064;
        if ((unaff_w21 <= iStack0000000000000090) || (unaff_w26 <= iStack0000000000000064))
        goto joined_r0x033f9da4;
        iVar20 = unaff_w21;
        if (unaff_w19 <= unaff_w26) goto LAB_033f9db8;
        if (unaff_x23 == 0) goto LAB_033fae50;
        iVar12 = 0;
        goto System_Boolean__System_IConvertible_ToSByte;
      }
      unaff_w26 = unaff_w26 + 1;
      bVar4 = unaff_w26 < unaff_w19;
      iVar10 = unaff_w19;
    } while (unaff_w19 != unaff_w26);
  }
  unaff_w26 = iVar10;
  if (unaff_w21 < unaff_w20) {
LAB_033f9ca0:
    iStack0000000000000064 = iStack00000000000000b4;
    iVar12 = iStack00000000000000b0;
    unaff_w26 = iStack00000000000000a8;
    lVar17 = in_stack_000000a0;
    if (in_stack_000000a0 != 0) {
      iStack0000000000000080 = iStack00000000000000ac;
      in_stack_000000a0 = 0;
      thunk_FUN_01f51358(&stack0x000000a0,0);
      unaff_x22 = lVar17;
      unaff_w19 = iVar12;
      goto LAB_033f9bcc;
    }
  }
  else {
LAB_033f9d68:
    iVar20 = iStack00000000000000c8;
    iVar12 = iStack00000000000000c0;
    lVar17 = in_stack_000000b8;
    iVar10 = unaff_w26;
    if (in_stack_000000b8 != 0) {
      in_stack_000000b8 = 0;
      iStack0000000000000084 = iStack00000000000000c4;
      iStack0000000000000090 = iStack00000000000000cc;
      thunk_FUN_01f51358(&stack0x000000b8,0);
      unaff_x23 = lVar17;
      unaff_w20 = iVar20;
      unaff_w21 = iVar12;
      goto LAB_033f9bcc;
    }
  }
  puVar2 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
  if ((uStack0000000000000094 < 3) ||
     (iStack0000000000000074 == 0 || (in_stack_00000030 & 0x100000000) != 0)) goto LAB_033facd8;
  if ((unaff_w19 <= iVar10) || (unaff_w20 <= unaff_w21)) goto LAB_033fadd4;
  if (unaff_x23 != 0) goto LAB_033fabb8;
  goto LAB_033fae50;
  while ((iVar12 = iVar12 + 1, iVar10 + 1 < unaff_w19 && (iVar20 + 1 < unaff_w20))) {
System_Boolean__System_IConvertible_ToSByte:
    iVar20 = unaff_w21 + iVar12;
    iVar10 = unaff_w26 + iVar12;
    sVar8 = FUN_03409f80(unaff_x23,iVar20,0);
    sVar9 = FUN_03409f80(unaff_x22,iVar10,0);
    if (sVar8 != sVar9) goto LAB_033f9db8;
  }
  iVar20 = unaff_w21 + iVar12;
  iVar10 = unaff_w26 + iVar12;
LAB_033f9db8:
  unaff_w26 = iVar10;
  unaff_w21 = iVar20;
  if ((unaff_w26 != unaff_w19) && (iVar12 = iVar20, iVar20 != unaff_w20)) {
    do {
      iVar12 = iVar12 + -1;
      iVar21 = unaff_w26;
      if (iVar12 <= iStack0000000000000090) break;
      if (unaff_x23 == 0) goto LAB_033fae50;
      uVar7 = FUN_03409f80(unaff_x23,iVar12,0);
      cVar5 = FUN_033f7f6c(in_stack_00000088,uVar7);
    } while (cVar5 == '\x01');
    do {
      iVar21 = iVar21 + -1;
      if (iVar21 <= iStack0000000000000064) break;
      uVar7 = FUN_03409f80(unaff_x22,iVar21,0);
      cVar5 = FUN_033f7f6c(in_stack_00000088,uVar7);
    } while (cVar5 == '\x01');
    iVar10 = iVar21;
    unaff_w21 = iVar12;
    if (iStack0000000000000090 < iVar12) {
      if (unaff_x23 == 0) goto LAB_033fae50;
      do {
        uVar7 = FUN_03409f80(unaff_x23,iVar12,0);
        uVar16 = FUN_033f8b5c(in_stack_00000088,uVar7);
        unaff_w21 = iVar12;
        if ((uVar16 & 1) != 0) break;
        iVar12 = iVar12 + -1;
        unaff_w21 = iStack0000000000000090;
      } while (iStack0000000000000090 < iVar12);
    }
    do {
      iVar12 = unaff_w26;
      iStack0000000000000090 = iVar20;
      if (iVar21 <= iStack0000000000000064) goto joined_r0x033f9da4;
      uVar7 = FUN_03409f80(unaff_x22,iVar21,0);
      uVar16 = FUN_033f8b5c(in_stack_00000088,uVar7);
      iVar12 = unaff_w26;
      iVar10 = iVar21;
      if ((uVar16 & 1) != 0) goto joined_r0x033f9da4;
      iVar21 = iVar21 + -1;
      iVar10 = iStack0000000000000064;
    } while( true );
  }
  goto LAB_033f9bcc;
joined_r0x033f9da4:
  unaff_w26 = iVar10;
  iStack0000000000000064 = iVar12;
  if (unaff_x23 == 0) goto LAB_033fae50;
  uVar7 = FUN_03409f80(unaff_x23,unaff_w21,0);
  uStack0000000000000070 = FUN_033f86cc(in_stack_00000088,uVar7,unaff_w25);
  uVar7 = FUN_03409f80(unaff_x22,unaff_w26,0);
  in_stack_00000050._4_4_ = FUN_033f86cc(in_stack_00000088,uVar7,unaff_w25);
  iVar10 = FUN_033f87b0(in_stack_00000088,uStack0000000000000070);
  _iStack0000000000000078 = CONCAT44(iVar10,iStack0000000000000078);
  if (iVar10 == 0) {
LAB_033f9f84:
    unaff_x28 = (byte *)0x0;
  }
  else {
    if (-1 < *(int *)(in_stack_00000048 + 0x28)) {
      uStack0000000000000070 =
           FUN_033f88d0(in_stack_00000088,*(int *)(in_stack_00000048 + 0x28),iVar10,unaff_w25);
      goto LAB_033f9f84;
    }
    unaff_x28 = *(byte **)(in_stack_00000048 + 0x30);
    if (unaff_x28 == (byte *)0x0) {
      unaff_w21 = unaff_w21 + 1;
      goto LAB_033f9bcc;
    }
  }
  iVar12 = FUN_033f87b0(in_stack_00000088,in_stack_00000050._4_4_);
  _iStack0000000000000078 = CONCAT44(iVar10,iVar12);
  if (iVar12 == 0) {
System_Convert__ToInt64:
    in_stack_00000040 = (byte *)0x0;
  }
  else {
    if (-1 < (int)uStack0000000000000068) {
      in_stack_00000050._4_4_ =
           FUN_033f88d0(in_stack_00000088,uStack0000000000000068,iVar12,unaff_w25);
      goto System_Convert__ToInt64;
    }
    in_stack_00000040 = in_stack_00000038;
    if (in_stack_00000038 == (byte *)0x0) {
      in_stack_00000038 = (byte *)0x0;
      unaff_w26 = unaff_w26 + 1;
      goto LAB_033f9bcc;
    }
  }
  unaff_w27 = FUN_033f7f6c(in_stack_00000088,uStack0000000000000070);
  param_1 = FUN_033f7f6c(in_stack_00000088,in_stack_00000050._4_4_);
  lVar17 = in_stack_00000088;
  in_stack_00000098 = unaff_x23;
  if (unaff_w27 == 6) {
    if (((unaff_w25 >> 0x1d & 1) == 0) && (uStack0000000000000094 == 5)) {
      iStack000000000000006c = unaff_w21 - iStack0000000000000084;
      if (in_stack_000000b8 != 0) {
        iStack000000000000006c = iStack00000000000000c0 - iStack00000000000000c4;
      }
      uVar11 = FUN_033f8000(in_stack_00000088,uStack0000000000000070);
      if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0) ==
          0) {
        thunk_FUN_01ee6d7c(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__);
      }
      iVar10 = FUN_033f60b8(uStack0000000000000070);
      iStack000000000000005c = (uVar11 & 0xff) << (ulong)(iVar10 + 8U & 0x1f);
    }
    goto code_r0x033fa104;
  }
  iVar12 = unaff_w20;
  iVar10 = unaff_w21;
  iVar20 = unaff_w19;
  if (param_1 == 6) goto LAB_033fa12c;
LAB_033fa240:
  unaff_w19 = iVar20;
  uVar11 = uStack0000000000000094;
  if (iStack000000000000007c == 0) {
    lVar17 = FUN_033f823c(lVar17,unaff_x23,iVar10,iVar12);
    if (unaff_x28 == (byte *)0x0) {
      if (lVar17 == 0) goto LAB_033fa2f0;
      if (*(long *)(lVar17 + 0x18) == 0) goto LAB_033fae50;
      lVar19 = *(long *)(lVar17 + 0x28);
      iVar21 = *(int *)(*(long *)(lVar17 + 0x18) + 0x18);
      if (lVar19 == 0) {
        if (in_stack_000000b8 == 0) {
          in_stack_000000b8 = unaff_x23;
          thunk_FUN_01f51358(&stack0x000000b8,unaff_x23);
          iStack00000000000000c4 = iStack0000000000000084;
          if (*(long *)(lVar17 + 0x18) == 0) goto LAB_033fae50;
          iStack00000000000000c0 = unaff_w21 + *(int *)(*(long *)(lVar17 + 0x18) + 0x18);
          iStack00000000000000cc = iStack0000000000000090;
          unaff_x23 = *(long *)(lVar17 + 0x20);
          iStack00000000000000c8 = iVar12;
          if (unaff_x23 == 0) goto LAB_033fae50;
          iStack0000000000000090 = 0;
          _iStack0000000000000078 = _iStack0000000000000078 & 0xffffffff;
          iStack0000000000000084 = 0;
          unaff_w20 = *(int *)(unaff_x23 + 0x10);
          unaff_w21 = 0;
          goto LAB_033f9bcc;
        }
        bVar4 = false;
        unaff_x28 = (byte *)0x0;
      }
      else {
        unaff_x28 = *(byte **)(in_stack_00000048 + 0x18);
        uVar16 = 0;
        while ((long)uVar16 < (long)(int)*(uint *)(lVar19 + 0x18)) {
          if (*(uint *)(lVar19 + 0x18) <= uVar16) goto LAB_033fae54;
          unaff_x28[uVar16] = *(byte *)(lVar19 + uVar16 + 0x20);
          lVar19 = *(long *)(lVar17 + 0x28);
          uVar16 = uVar16 + 1;
          if (lVar19 == 0) goto LAB_033fae50;
        }
        bVar4 = false;
        *(undefined4 *)(in_stack_00000048 + 0x28) = 0xffffffff;
        *(byte **)(in_stack_00000048 + 0x30) = unaff_x28;
      }
    }
    else {
      bVar4 = false;
      iVar21 = 1;
    }
  }
  else {
    if (unaff_x28 == (byte *)0x0) {
LAB_033fa2f0:
      unaff_x28 = *(byte **)(in_stack_00000048 + 0x18);
      *unaff_x28 = unaff_w27;
      bVar6 = FUN_033f8000(in_stack_00000088,uStack0000000000000070);
      unaff_x28[1] = bVar6;
      if (1 < uStack0000000000000094 && (in_stack_00000030 & 0x100000000) == 0) {
        bVar6 = FUN_033f8094(in_stack_00000088,uStack0000000000000070,iStack000000000000007c);
        unaff_x28[2] = bVar6;
      }
      if (uStack0000000000000094 < 3) {
LAB_033fa37c:
        bVar4 = false;
      }
      else {
        if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c();
        }
        bVar6 = FUN_033f60b8(uStack0000000000000070);
        unaff_x28[3] = bVar6;
        if (uStack0000000000000094 < 4) goto LAB_033fa37c;
        if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0)
            == 0) {
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
          uVar15 = uStack0000000000000070 >> 8 & 0xff;
          if (0x32 < uVar15) goto LAB_033fa89c;
          if ((uStack0000000000000070 & 0xffff) < 0x309d) {
            bVar4 = (uStack0000000000000070 & 0xffff) < 0x3099;
          }
          else if (uVar15 < 0x31) {
            bVar4 = (uStack0000000000000070 & 0xffff) != 0x30fb;
          }
          else {
            bVar4 = (uStack0000000000000070 - 0x32d0 & 0xffff) < 0x2f;
          }
        }
      }
      if (1 < unaff_w27) {
        *(uint *)(in_stack_00000048 + 0x28) = uStack0000000000000070;
      }
    }
    else {
      bVar4 = false;
    }
    iVar21 = 1;
  }
  unaff_w20 = iVar12;
  if (iStack0000000000000078 == 0) {
    lVar17 = FUN_033f823c(in_stack_00000088,unaff_x22,unaff_w26,iVar20);
    if (in_stack_00000040 == (byte *)0x0) {
      if (lVar17 != 0) {
        if (*(long *)(lVar17 + 0x18) == 0) goto LAB_033fae50;
        lVar19 = *(long *)(lVar17 + 0x28);
        iVar1 = iStack0000000000000064;
        iVar22 = unaff_w26 + *(int *)(*(long *)(lVar17 + 0x18) + 0x18);
        if (lVar19 == 0) {
          if (in_stack_000000a0 == 0) {
            in_stack_000000a0 = unaff_x22;
            thunk_FUN_01f51358(&stack0x000000a0,unaff_x22);
            iStack00000000000000ac = iStack0000000000000080;
            if (*(long *)(lVar17 + 0x18) == 0) goto LAB_033fae50;
            iStack00000000000000b4 = iStack0000000000000064;
            iStack00000000000000a8 = unaff_w26 + *(int *)(*(long *)(lVar17 + 0x18) + 0x18);
            unaff_x22 = *(long *)(lVar17 + 0x20);
            iStack00000000000000b0 = iVar20;
            if (unaff_x22 == 0) goto LAB_033fae50;
            iStack0000000000000064 = 0;
            _iStack0000000000000078 = _iStack0000000000000078 & 0xffffffff00000000;
            iStack0000000000000080 = 0;
            unaff_w26 = 0;
            unaff_w21 = iVar10;
            unaff_w19 = *(int *)(unaff_x22 + 0x10);
            iStack00000000000000b4 = iVar1;
            goto LAB_033f9bcc;
          }
          bVar3 = false;
          in_stack_00000040 = (byte *)0x0;
        }
        else {
          in_stack_00000040 = *(byte **)(in_stack_00000048 + 0x20);
          uVar16 = 0;
          while ((long)uVar16 < (long)(int)*(uint *)(lVar19 + 0x18)) {
            if (*(uint *)(lVar19 + 0x18) <= uVar16) {
LAB_033fae54:
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            in_stack_00000040[uVar16] = *(byte *)(lVar19 + uVar16 + 0x20);
            lVar19 = *(long *)(lVar17 + 0x28);
            uVar16 = uVar16 + 1;
            if (lVar19 == 0) goto LAB_033fae50;
          }
          uStack0000000000000068 = 0xffffffff;
          bVar3 = false;
          in_stack_00000038 = in_stack_00000040;
        }
        goto LAB_033fa4c8;
      }
      goto LAB_033fa3b0;
    }
  }
  else if (in_stack_00000040 == (byte *)0x0) {
LAB_033fa3b0:
    in_stack_00000040 = *(byte **)(in_stack_00000048 + 0x20);
    *in_stack_00000040 = param_1;
    bVar6 = FUN_033f8000(in_stack_00000088,in_stack_00000050._4_4_);
    in_stack_00000040[1] = bVar6;
    if (1 < uStack0000000000000094 && (in_stack_00000030 & 0x100000000) == 0) {
      bVar6 = FUN_033f8094(in_stack_00000088,in_stack_00000050._4_4_,iStack0000000000000078);
      in_stack_00000040[2] = bVar6;
    }
    puVar2 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
    if (uStack0000000000000094 < 3) {
LAB_033fa4a4:
      bVar3 = false;
    }
    else {
      if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0) ==
          0) {
        thunk_FUN_01ee6d7c();
      }
      bVar6 = FUN_033f60b8(in_stack_00000050._4_4_);
      in_stack_00000040[3] = bVar6;
      if (uStack0000000000000094 < 4) goto LAB_033fa4a4;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if ((in_stack_00000050._4_4_ & 0xffff) < 0x3041) {
LAB_033fa8a8:
        bVar3 = false;
      }
      else if ((in_stack_00000050._4_4_ + 0x9a & 0xffff) < 0x38) {
        bVar3 = true;
      }
      else {
        uVar11 = in_stack_00000050._4_4_ >> 8 & 0xff;
        if (0x32 < uVar11) goto LAB_033fa8a8;
        if ((in_stack_00000050._4_4_ & 0xffff) < 0x309d) {
          bVar3 = (in_stack_00000050._4_4_ & 0xffff) < 0x3099;
        }
        else if (uVar11 < 0x31) {
          bVar3 = (in_stack_00000050._4_4_ & 0xffff) != 0x30fb;
        }
        else {
          bVar3 = (in_stack_00000050._4_4_ - 0x32d0 & 0xffff) < 0x2f;
        }
      }
    }
    if (1 < param_1) {
      uStack0000000000000068 = in_stack_00000050._4_4_;
    }
    iVar22 = unaff_w26 + 1;
    goto LAB_033fa4c8;
  }
  bVar3 = false;
  iVar22 = unaff_w26 + 1;
LAB_033fa4c8:
  unaff_w21 = iVar21 + iVar10;
  unaff_w26 = iVar22;
  iVar10 = unaff_w21;
  if ((unaff_w25 >> 1 & 1) == 0) {
    for (; iVar10 < iVar12; iVar10 = iVar10 + 1) {
      uVar7 = FUN_03409f80(unaff_x23,iVar10,0);
      cVar5 = FUN_033f7f6c(in_stack_00000088,uVar7);
      unaff_w21 = iVar10;
      if (cVar5 != '\x01') break;
      bVar6 = unaff_x28[2];
      if (bVar6 == 0) {
        bVar6 = 2;
        unaff_x28[2] = 2;
      }
      uVar7 = FUN_03409f80(in_stack_00000098,iVar10,0);
      cVar5 = FUN_033f8094(in_stack_00000088,uVar7,0);
      unaff_x28[2] = cVar5 + bVar6;
      unaff_w21 = iVar12;
      unaff_x23 = in_stack_00000098;
    }
    if (iVar22 < iVar20) {
      do {
        uVar7 = FUN_03409f80(unaff_x22,iVar22,0);
        cVar5 = FUN_033f7f6c(in_stack_00000088,uVar7);
        unaff_w26 = iVar22;
        if (cVar5 != '\x01') break;
        bVar6 = in_stack_00000040[2];
        pbVar18 = (byte *)0x1;
        if (bVar6 == 0) {
          bVar6 = 2;
          in_stack_00000040[2] = 2;
          pbVar18 = in_stack_00000040;
        }
        uVar7 = FUN_03409f80(pbVar18,unaff_x22,iVar22,0);
        cVar5 = FUN_033f8094(in_stack_00000088,uVar7,0);
        iVar22 = iVar22 + 1;
        in_stack_00000040[2] = cVar5 + bVar6;
        unaff_x23 = in_stack_00000098;
        unaff_w26 = iVar20;
      } while (iVar20 != iVar22);
    }
  }
  puVar2 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
  iVar10 = (uint)*unaff_x28 - (uint)*in_stack_00000040;
  if (iVar10 == 0) {
    iVar10 = (uint)unaff_x28[1] - (uint)in_stack_00000040[1];
  }
  if (iVar10 != 0) {
    return iVar10;
  }
  uVar11 = 1;
  if (uStack0000000000000094 != 1) {
    if (((unaff_w25 >> 1 & 1) == 0) &&
       (iVar10 = (uint)unaff_x28[2] - (uint)in_stack_00000040[2], iVar10 != 0)) {
      if ((in_stack_00000018 & 0x100000000) == 0) {
        iStack0000000000000074 = iVar10;
        uVar11 = 1;
        if (*(char *)(in_stack_00000088 + 0x5c) != '\0') {
          uVar11 = 2;
        }
        goto LAB_033f9bcc;
      }
    }
    else {
      uVar11 = 2;
      if (uStack0000000000000094 == 2) goto LAB_033f9bcc;
      iVar10 = (uint)unaff_x28[3] - (uint)in_stack_00000040[3];
      if (iVar10 == 0) {
        uVar11 = 3;
        if (uStack0000000000000094 == 3) goto LAB_033f9bcc;
        if (bVar4 != bVar3) {
          if ((in_stack_00000018 & 0x100000000) != 0) {
            return -1;
          }
          iStack0000000000000074 = -1;
          if (bVar4 != false) {
            iStack0000000000000074 = 1;
          }
          uVar11 = 3;
          goto LAB_033f9bcc;
        }
        uVar11 = uStack0000000000000094;
        if (bVar4 == false) goto LAB_033f9bcc;
        if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar11 = FUN_033f651c(uStack0000000000000070);
        uVar15 = FUN_033f651c(in_stack_00000050._4_4_);
        iVar10 = 1;
        if ((uVar11 & 1) != 0) {
          iVar10 = -1;
        }
        if (((uVar11 ^ uVar15) & 1) == 0) {
          iVar10 = 0;
        }
        if (iVar10 == 0) {
          if (*(int *)(*(long *)
                        Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                      + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          iVar10 = 4;
          if (iStack000000000000007c == 3) {
            iVar10 = 5;
          }
          iVar12 = 3;
          if (in_stack_00000030._4_4_ == 0 && iStack000000000000007c != 0) {
            iVar12 = iVar10;
          }
          iVar20 = -5;
          if (iStack0000000000000078 != 3) {
            iVar20 = -4;
          }
          iVar10 = -3;
          if (in_stack_00000030._4_4_ == 0 && iStack0000000000000078 != 0) {
            iVar10 = iVar20;
          }
          iVar10 = iVar10 + iVar12;
        }
        if (iVar10 == 0) {
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          bVar4 = (uStack0000000000000070 - 0x3041 & 0xffff) < 0x54;
          iVar10 = -1;
          if (bVar4) {
            iVar10 = 1;
          }
          if (bVar4 == (in_stack_00000050._4_4_ - 0x3041 & 0xffff) < 0x54) {
            if (*(int *)(*(long *)
                          Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                        + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar15 = FUN_033f81c8(uStack0000000000000070 & 0xffff,unaff_w25);
            uVar13 = FUN_033f81c8(in_stack_00000050._4_4_ & 0xffff,unaff_w25);
            iVar10 = 1;
            if ((uVar15 & 1) != 0) {
              iVar10 = -1;
            }
            uVar11 = uStack0000000000000094;
            if ((uVar15 & 1) == (uVar13 & 1)) goto LAB_033f9bcc;
          }
        }
        uVar11 = 3;
      }
      else {
        uVar11 = 2;
      }
      iStack0000000000000074 = iVar10;
      if ((in_stack_00000018 & 0x100000000) == 0) goto LAB_033f9bcc;
    }
    return -1;
  }
  goto LAB_033f9bcc;
LAB_033facd8:
  if ((uStack0000000000000094 == 1) && (iStack0000000000000074 != 0)) {
    if (unaff_w21 < unaff_w20) {
      iVar12 = unaff_w21;
      if (unaff_x23 == 0) goto LAB_033fae50;
      do {
        uVar7 = FUN_03409f80(unaff_x23,iVar12,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar2);
        }
        uVar16 = FUN_033f6274(uVar7);
        unaff_w21 = iVar12;
      } while (((uVar16 & 1) != 0) &&
              (iVar12 = iVar12 + 1, unaff_w21 = unaff_w20, unaff_w20 != iVar12));
    }
    if (iVar10 < unaff_w19) {
      iVar12 = iVar10;
      if (unaff_x22 == 0) {
LAB_033fae50:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        uVar7 = FUN_03409f80(unaff_x22,iVar12,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar2);
        }
        uVar16 = FUN_033f6274(uVar7);
        iVar10 = iVar12;
      } while (((uVar16 & 1) != 0) && (iVar12 = iVar12 + 1, iVar10 = unaff_w19, unaff_w19 != iVar12)
              );
    }
  }
  if (iStack0000000000000074 != 0) goto LAB_033fadd4;
  goto LAB_033fad8c;
  while( true ) {
    iStack0000000000000074 = 0;
    _iStack0000000000000078 = 0;
    if (unaff_w20 <= unaff_w21) break;
LAB_033fabb8:
    uVar7 = FUN_03409f80(unaff_x23,unaff_w21,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar2);
    }
    uVar16 = FUN_033f6274(uVar7);
    if ((uVar16 & 1) == 0) goto LAB_033facd8;
    if (unaff_x22 == 0) goto LAB_033fae50;
    uVar7 = FUN_03409f80(unaff_x22,iVar10,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar2);
    }
    uVar16 = FUN_033f6274(uVar7);
    if ((uVar16 & 1) == 0) goto LAB_033facd8;
    uVar7 = FUN_03409f80(unaff_x23,unaff_w21,0);
    uVar14 = FUN_033f86cc(in_stack_00000088,uVar7,unaff_w25);
    uVar11 = FUN_033f8094(in_stack_00000088,uVar14,iStack000000000000007c);
    uVar7 = FUN_03409f80(unaff_x22,iVar10,0);
    uVar14 = FUN_033f86cc(in_stack_00000088,uVar7,unaff_w25);
    uVar15 = FUN_033f8094(in_stack_00000088,uVar14,_iStack0000000000000078 & 0xffffffff);
    iStack0000000000000074 = (uVar11 & 0xff) - (uVar15 & 0xff);
    if (iStack0000000000000074 != 0) goto LAB_033facd8;
    iVar10 = iVar10 + 1;
    unaff_w21 = unaff_w21 + 1;
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
    if (iVar10 != unaff_w19) {
      iStack0000000000000074 = -1;
    }
  }
  else {
    iStack0000000000000074 = 1;
  }
  return iStack0000000000000074;
}


