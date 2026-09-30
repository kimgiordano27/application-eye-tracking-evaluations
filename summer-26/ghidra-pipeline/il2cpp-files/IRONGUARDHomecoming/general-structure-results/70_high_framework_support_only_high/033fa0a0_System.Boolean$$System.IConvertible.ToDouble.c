/*
FUNCTION_NAME: System.Boolean$$System.IConvertible.ToDouble
ENTRY_POINT: 033fa0a0
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

int System_Boolean__System_IConvertible_ToDouble(void)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  undefined2 uVar11;
  short sVar12;
  short sVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  int iVar22;
  byte *pbVar23;
  long lVar24;
  int in_w12;
  int unaff_w19;
  int unaff_w20;
  int unaff_w21;
  int iVar25;
  long unaff_x22;
  byte *pbVar26;
  uint unaff_w25;
  int unaff_w26;
  int iVar27;
  int unaff_w28;
  byte *pbVar28;
  undefined1 *in_stack_00000010;
  ulong in_stack_00000018;
  undefined1 *in_stack_00000028;
  ulong in_stack_00000030;
  byte *in_stack_00000038;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  int in_stack_00000058;
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
  
LAB_033fa12c:
  puVar2 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
  if (((unaff_w25 >> 0x1d & 1) == 0) && (uStack0000000000000094 == 5)) {
    in_stack_00000058 = unaff_w26 - iStack0000000000000080;
    if (in_stack_000000a0 != 0) {
      in_stack_00000058 = iStack00000000000000a8 - iStack00000000000000ac;
    }
    uVar15 = FUN_033f8000(in_stack_00000088,in_stack_00000050._4_4_);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar2);
    }
    iVar16 = FUN_033f60b8(in_stack_00000050._4_4_);
    iStack0000000000000060 = (uVar15 & 0xff) << (ulong)(iVar16 + 8U & 0x1f);
  }
  unaff_w26 = unaff_w26 + 1;
  uStack0000000000000068 = in_stack_00000050._4_4_;
  iStack000000000000005c = unaff_w28;
  iStack000000000000006c = in_w12;
LAB_033fa1ec:
  iVar1 = iStack000000000000006c;
  iVar22 = iStack0000000000000060;
  iVar25 = iStack000000000000005c;
  iVar16 = in_stack_00000058;
  iVar3 = unaff_w20;
  iVar4 = unaff_w19;
  iVar27 = iStack0000000000000064;
  in_stack_00000058 = iVar16;
  iStack000000000000005c = iVar25;
  iStack0000000000000060 = iVar22;
  iStack000000000000006c = iVar1;
  uVar15 = uStack0000000000000094;
  if (uStack0000000000000094 == 5) {
    in_stack_00000058 = -1;
    bVar6 = iStack000000000000005c != iStack0000000000000060;
    iStack000000000000005c = 0;
    iStack0000000000000060 = 0;
    iStack000000000000006c = -1;
    if (bVar6) {
      in_stack_00000058 = iVar16;
      iStack000000000000005c = iVar25;
      iStack0000000000000060 = iVar22;
      iStack000000000000006c = iVar1;
      uVar15 = 4;
    }
  }
LAB_033f9bcc:
  for (; uStack0000000000000094 = uVar15, unaff_w19 = iVar4, unaff_w20 = iVar3, iVar4 = unaff_w19,
      iVar3 = unaff_w20, uVar15 = uStack0000000000000094, unaff_w21 < unaff_w20;
      unaff_w21 = unaff_w21 + 1) {
    if (in_stack_00000098 == 0) goto LAB_033fae50;
    uVar11 = FUN_03409f80(in_stack_00000098,unaff_w21,0);
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
  iVar16 = unaff_w26;
  if (unaff_w26 < unaff_w19) {
    if (unaff_x22 == 0) goto LAB_033fae50;
    bVar6 = true;
    do {
      uVar11 = FUN_03409f80(unaff_x22,unaff_w26,0);
      if (*(int *)(*(long *)
                    Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)
                            Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                          );
      }
      uVar20 = FUN_033f8ae0(uVar11,unaff_w25);
      if ((uVar20 & 1) == 0) {
        if (unaff_w20 <= unaff_w21) goto LAB_033f9d68;
        iVar16 = unaff_w26;
        if (!bVar6) goto LAB_033f9ca0;
        iStack0000000000000064 = iVar27;
        iVar16 = iStack0000000000000090;
        iVar25 = unaff_w26;
        if ((unaff_w21 <= iStack0000000000000090) || (unaff_w26 <= iVar27)) goto joined_r0x033f9da4;
        iVar16 = unaff_w21;
        if (unaff_w19 <= unaff_w26) goto LAB_033f9db8;
        if (in_stack_00000098 == 0) goto LAB_033fae50;
        iVar22 = 0;
        goto System_Boolean__System_IConvertible_ToSByte;
      }
      unaff_w26 = unaff_w26 + 1;
      bVar6 = unaff_w26 < unaff_w19;
      iVar16 = unaff_w19;
    } while (unaff_w19 != unaff_w26);
  }
  unaff_w26 = iVar16;
  if (unaff_w21 < unaff_w20) {
LAB_033f9ca0:
    iVar27 = iStack00000000000000b4;
    iVar4 = iStack00000000000000b0;
    unaff_w26 = iStack00000000000000a8;
    lVar21 = in_stack_000000a0;
    if (in_stack_000000a0 != 0) {
      iStack0000000000000080 = iStack00000000000000ac;
      in_stack_000000a0 = 0;
      thunk_FUN_01f51358(&stack0x000000a0,0);
      unaff_x22 = lVar21;
      goto LAB_033f9bcc;
    }
  }
  else {
LAB_033f9d68:
    iVar3 = iStack00000000000000c8;
    iVar25 = iStack00000000000000c0;
    lVar21 = in_stack_000000b8;
    iVar16 = unaff_w26;
    if (in_stack_000000b8 != 0) {
      in_stack_000000b8 = 0;
      iStack0000000000000084 = iStack00000000000000c4;
      iStack0000000000000090 = iStack00000000000000cc;
      thunk_FUN_01f51358(&stack0x000000b8,0);
      in_stack_00000098 = lVar21;
      unaff_w21 = iVar25;
      goto LAB_033f9bcc;
    }
  }
  puVar2 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
  if ((uStack0000000000000094 < 3) ||
     (iStack0000000000000074 == 0 || (in_stack_00000030 & 0x100000000) != 0)) goto LAB_033facd8;
  if ((unaff_w19 <= iVar16) || (unaff_w20 <= unaff_w21)) goto LAB_033fadd4;
  if (in_stack_00000098 != 0) goto LAB_033fabb8;
  goto LAB_033fae50;
  while ((iVar22 = iVar22 + 1, iVar25 + 1 < unaff_w19 && (iVar16 + 1 < unaff_w20))) {
System_Boolean__System_IConvertible_ToSByte:
    iVar16 = unaff_w21 + iVar22;
    iVar25 = unaff_w26 + iVar22;
    sVar12 = FUN_03409f80(in_stack_00000098,iVar16,0);
    sVar13 = FUN_03409f80(unaff_x22,iVar25,0);
    if (sVar12 != sVar13) goto LAB_033f9db8;
  }
  iVar16 = unaff_w21 + iVar22;
  iVar25 = unaff_w26 + iVar22;
LAB_033f9db8:
  unaff_w26 = iVar25;
  unaff_w21 = iVar16;
  if ((unaff_w26 != unaff_w19) && (iVar22 = iVar16, iVar16 != unaff_w20)) {
    do {
      iVar22 = iVar22 + -1;
      iVar1 = unaff_w26;
      if (iVar22 <= iStack0000000000000090) break;
      if (in_stack_00000098 == 0) goto LAB_033fae50;
      uVar11 = FUN_03409f80(in_stack_00000098,iVar22,0);
      cVar7 = FUN_033f7f6c(in_stack_00000088,uVar11);
    } while (cVar7 == '\x01');
    do {
      iVar1 = iVar1 + -1;
      if (iVar1 <= iVar27) break;
      uVar11 = FUN_03409f80(unaff_x22,iVar1,0);
      cVar7 = FUN_033f7f6c(in_stack_00000088,uVar11);
    } while (cVar7 == '\x01');
    iVar25 = iVar1;
    unaff_w21 = iVar22;
    if (iStack0000000000000090 < iVar22) {
      if (in_stack_00000098 == 0) goto LAB_033fae50;
      do {
        uVar11 = FUN_03409f80(in_stack_00000098,iVar22,0);
        uVar20 = FUN_033f8b5c(in_stack_00000088,uVar11);
        unaff_w21 = iVar22;
        if ((uVar20 & 1) != 0) break;
        iVar22 = iVar22 + -1;
        unaff_w21 = iStack0000000000000090;
      } while (iStack0000000000000090 < iVar22);
    }
    do {
      iStack0000000000000064 = unaff_w26;
      if (iVar1 <= iVar27) goto joined_r0x033f9da4;
      uVar11 = FUN_03409f80(unaff_x22,iVar1,0);
      uVar20 = FUN_033f8b5c(in_stack_00000088,uVar11);
      iVar25 = iVar1;
      if ((uVar20 & 1) != 0) goto joined_r0x033f9da4;
      iVar1 = iVar1 + -1;
      iVar25 = iVar27;
    } while( true );
  }
  goto LAB_033f9bcc;
joined_r0x033f9da4:
  unaff_w26 = iVar25;
  if (in_stack_00000098 == 0) goto LAB_033fae50;
  uVar11 = FUN_03409f80(in_stack_00000098,unaff_w21,0);
  uStack0000000000000070 = FUN_033f86cc(in_stack_00000088,uVar11,unaff_w25);
  uVar11 = FUN_03409f80(unaff_x22,unaff_w26,0);
  in_stack_00000050._4_4_ = FUN_033f86cc(in_stack_00000088,uVar11,unaff_w25);
  uVar19 = FUN_033f87b0(in_stack_00000088,uStack0000000000000070);
  _uStack0000000000000078 = CONCAT44(uVar19,uStack0000000000000078);
  iVar27 = iStack0000000000000064;
  iStack0000000000000090 = iVar16;
  if (uVar19 == 0) {
LAB_033f9f84:
    pbVar28 = (byte *)0x0;
  }
  else {
    if (-1 < *(int *)(in_stack_00000048 + 0x28)) {
      uStack0000000000000070 =
           FUN_033f88d0(in_stack_00000088,*(int *)(in_stack_00000048 + 0x28),uVar19,unaff_w25);
      goto LAB_033f9f84;
    }
    pbVar28 = *(byte **)(in_stack_00000048 + 0x30);
    if (pbVar28 == (byte *)0x0) {
      unaff_w21 = unaff_w21 + 1;
      goto LAB_033f9bcc;
    }
  }
  uVar14 = FUN_033f87b0(in_stack_00000088,in_stack_00000050._4_4_);
  _uStack0000000000000078 = CONCAT44(uVar19,uVar14);
  if (uVar14 == 0) {
System_Convert__ToInt64:
    pbVar26 = (byte *)0x0;
  }
  else {
    if (-1 < (int)uStack0000000000000068) {
      in_stack_00000050._4_4_ =
           FUN_033f88d0(in_stack_00000088,uStack0000000000000068,uVar14,unaff_w25);
      goto System_Convert__ToInt64;
    }
    pbVar26 = in_stack_00000038;
    if (in_stack_00000038 == (byte *)0x0) {
      in_stack_00000038 = (byte *)0x0;
      unaff_w26 = unaff_w26 + 1;
      goto LAB_033f9bcc;
    }
  }
  bVar8 = FUN_033f7f6c(in_stack_00000088,uStack0000000000000070);
  bVar9 = FUN_033f7f6c(in_stack_00000088,in_stack_00000050._4_4_);
  if (bVar8 == 6) goto code_r0x033f9ff0;
  in_w12 = iStack000000000000006c;
  unaff_w28 = iStack000000000000005c;
  if (bVar9 == 6) goto LAB_033fa12c;
  if (uVar19 == 0) {
    lVar21 = FUN_033f823c(in_stack_00000088,in_stack_00000098,unaff_w21,unaff_w20);
    if (pbVar28 == (byte *)0x0) {
      if (lVar21 == 0) goto LAB_033fa2f0;
      if (*(long *)(lVar21 + 0x18) == 0) goto LAB_033fae50;
      lVar24 = *(long *)(lVar21 + 0x28);
      iVar25 = *(int *)(*(long *)(lVar21 + 0x18) + 0x18);
      if (lVar24 == 0) {
        if (in_stack_000000b8 == 0) {
          in_stack_000000b8 = in_stack_00000098;
          thunk_FUN_01f51358(&stack0x000000b8,in_stack_00000098);
          iStack00000000000000c4 = iStack0000000000000084;
          if (*(long *)(lVar21 + 0x18) == 0) goto LAB_033fae50;
          iStack00000000000000c0 = unaff_w21 + *(int *)(*(long *)(lVar21 + 0x18) + 0x18);
          in_stack_00000098 = *(long *)(lVar21 + 0x20);
          iStack00000000000000c8 = unaff_w20;
          iStack00000000000000cc = iVar16;
          if (in_stack_00000098 == 0) goto LAB_033fae50;
          iStack0000000000000090 = 0;
          _uStack0000000000000078 = (ulong)uVar14;
          iStack0000000000000084 = 0;
          iVar3 = *(int *)(in_stack_00000098 + 0x10);
          unaff_w21 = 0;
          goto LAB_033f9bcc;
        }
        bVar6 = false;
        pbVar28 = (byte *)0x0;
      }
      else {
        pbVar28 = *(byte **)(in_stack_00000048 + 0x18);
        uVar20 = 0;
        while ((long)uVar20 < (long)(int)*(uint *)(lVar24 + 0x18)) {
          if (*(uint *)(lVar24 + 0x18) <= uVar20) goto LAB_033fae54;
          pbVar28[uVar20] = *(byte *)(lVar24 + uVar20 + 0x20);
          lVar24 = *(long *)(lVar21 + 0x28);
          uVar20 = uVar20 + 1;
          if (lVar24 == 0) goto LAB_033fae50;
        }
        bVar6 = false;
        *(undefined4 *)(in_stack_00000048 + 0x28) = 0xffffffff;
        *(byte **)(in_stack_00000048 + 0x30) = pbVar28;
      }
    }
    else {
      bVar6 = false;
      iVar25 = 1;
    }
  }
  else {
    if (pbVar28 == (byte *)0x0) {
LAB_033fa2f0:
      pbVar28 = *(byte **)(in_stack_00000048 + 0x18);
      *pbVar28 = bVar8;
      bVar10 = FUN_033f8000(in_stack_00000088,uStack0000000000000070);
      pbVar28[1] = bVar10;
      if (1 < uStack0000000000000094 && (in_stack_00000030 & 0x100000000) == 0) {
        bVar10 = FUN_033f8094(in_stack_00000088,uStack0000000000000070,uVar19);
        pbVar28[2] = bVar10;
      }
      if (uStack0000000000000094 < 3) {
LAB_033fa37c:
        bVar6 = false;
      }
      else {
        if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c();
        }
        bVar10 = FUN_033f60b8(uStack0000000000000070);
        pbVar28[3] = bVar10;
        if (uStack0000000000000094 < 4) goto LAB_033fa37c;
        if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0)
            == 0) {
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
    iVar25 = 1;
  }
  if (uVar14 == 0) {
    lVar21 = FUN_033f823c(in_stack_00000088,unaff_x22,unaff_w26,unaff_w19);
    if (pbVar26 == (byte *)0x0) {
      if (lVar21 != 0) {
        if (*(long *)(lVar21 + 0x18) == 0) goto LAB_033fae50;
        lVar24 = *(long *)(lVar21 + 0x28);
        iVar16 = unaff_w26 + *(int *)(*(long *)(lVar21 + 0x18) + 0x18);
        if (lVar24 == 0) {
          if (in_stack_000000a0 == 0) {
            in_stack_000000a0 = unaff_x22;
            thunk_FUN_01f51358(&stack0x000000a0,unaff_x22);
            iStack00000000000000ac = iStack0000000000000080;
            if (*(long *)(lVar21 + 0x18) == 0) goto LAB_033fae50;
            iStack00000000000000a8 = unaff_w26 + *(int *)(*(long *)(lVar21 + 0x18) + 0x18);
            unaff_x22 = *(long *)(lVar21 + 0x20);
            iStack00000000000000b0 = unaff_w19;
            iStack00000000000000b4 = iStack0000000000000064;
            if (unaff_x22 == 0) goto LAB_033fae50;
            _uStack0000000000000078 = (ulong)uVar19 << 0x20;
            iStack0000000000000080 = 0;
            unaff_w26 = 0;
            iVar4 = *(int *)(unaff_x22 + 0x10);
            iVar27 = 0;
            goto LAB_033f9bcc;
          }
          bVar5 = false;
          pbVar26 = (byte *)0x0;
        }
        else {
          pbVar26 = *(byte **)(in_stack_00000048 + 0x20);
          uVar20 = 0;
          while ((long)uVar20 < (long)(int)*(uint *)(lVar24 + 0x18)) {
            if (*(uint *)(lVar24 + 0x18) <= uVar20) {
LAB_033fae54:
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            pbVar26[uVar20] = *(byte *)(lVar24 + uVar20 + 0x20);
            lVar24 = *(long *)(lVar21 + 0x28);
            uVar20 = uVar20 + 1;
            if (lVar24 == 0) goto LAB_033fae50;
          }
          uStack0000000000000068 = 0xffffffff;
          bVar5 = false;
          in_stack_00000038 = pbVar26;
        }
        goto LAB_033fa4c8;
      }
      goto LAB_033fa3b0;
    }
  }
  else if (pbVar26 == (byte *)0x0) {
LAB_033fa3b0:
    pbVar26 = *(byte **)(in_stack_00000048 + 0x20);
    *pbVar26 = bVar9;
    bVar8 = FUN_033f8000(in_stack_00000088,in_stack_00000050._4_4_);
    pbVar26[1] = bVar8;
    if (1 < uStack0000000000000094 && (in_stack_00000030 & 0x100000000) == 0) {
      bVar8 = FUN_033f8094(in_stack_00000088,in_stack_00000050._4_4_,uVar14);
      pbVar26[2] = bVar8;
    }
    puVar2 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
    if (uStack0000000000000094 < 3) {
LAB_033fa4a4:
      bVar5 = false;
    }
    else {
      if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0) ==
          0) {
        thunk_FUN_01ee6d7c();
      }
      bVar8 = FUN_033f60b8(in_stack_00000050._4_4_);
      pbVar26[3] = bVar8;
      if (uStack0000000000000094 < 4) goto LAB_033fa4a4;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if ((in_stack_00000050._4_4_ & 0xffff) < 0x3041) {
LAB_033fa8a8:
        bVar5 = false;
      }
      else if ((in_stack_00000050._4_4_ + 0x9a & 0xffff) < 0x38) {
        bVar5 = true;
      }
      else {
        uVar15 = in_stack_00000050._4_4_ >> 8 & 0xff;
        if (0x32 < uVar15) goto LAB_033fa8a8;
        if ((in_stack_00000050._4_4_ & 0xffff) < 0x309d) {
          bVar5 = (in_stack_00000050._4_4_ & 0xffff) < 0x3099;
        }
        else if (uVar15 < 0x31) {
          bVar5 = (in_stack_00000050._4_4_ & 0xffff) != 0x30fb;
        }
        else {
          bVar5 = (in_stack_00000050._4_4_ - 0x32d0 & 0xffff) < 0x2f;
        }
      }
    }
    if (1 < bVar9) {
      uStack0000000000000068 = in_stack_00000050._4_4_;
    }
    iVar16 = unaff_w26 + 1;
    goto LAB_033fa4c8;
  }
  bVar5 = false;
  iVar16 = unaff_w26 + 1;
LAB_033fa4c8:
  unaff_w21 = iVar25 + unaff_w21;
  unaff_w26 = iVar16;
  iVar25 = unaff_w21;
  if ((unaff_w25 >> 1 & 1) == 0) {
    for (; iVar25 < unaff_w20; iVar25 = iVar25 + 1) {
      uVar11 = FUN_03409f80(in_stack_00000098,iVar25,0);
      cVar7 = FUN_033f7f6c(in_stack_00000088,uVar11);
      unaff_w21 = iVar25;
      if (cVar7 != '\x01') break;
      bVar8 = pbVar28[2];
      if (bVar8 == 0) {
        bVar8 = 2;
        pbVar28[2] = 2;
      }
      uVar11 = FUN_03409f80(in_stack_00000098,iVar25,0);
      cVar7 = FUN_033f8094(in_stack_00000088,uVar11,0);
      pbVar28[2] = cVar7 + bVar8;
      unaff_w21 = unaff_w20;
    }
    if (iVar16 < unaff_w19) {
      do {
        uVar11 = FUN_03409f80(unaff_x22,iVar16,0);
        cVar7 = FUN_033f7f6c(in_stack_00000088,uVar11);
        unaff_w26 = iVar16;
        if (cVar7 != '\x01') break;
        bVar8 = pbVar26[2];
        pbVar23 = (byte *)0x1;
        if (bVar8 == 0) {
          bVar8 = 2;
          pbVar26[2] = 2;
          pbVar23 = pbVar26;
        }
        uVar11 = FUN_03409f80(pbVar23,unaff_x22,iVar16,0);
        cVar7 = FUN_033f8094(in_stack_00000088,uVar11,0);
        iVar16 = iVar16 + 1;
        pbVar26[2] = cVar7 + bVar8;
        unaff_w26 = unaff_w19;
      } while (unaff_w19 != iVar16);
    }
  }
  puVar2 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
  iVar16 = (uint)*pbVar28 - (uint)*pbVar26;
  if (iVar16 == 0) {
    iVar16 = (uint)pbVar28[1] - (uint)pbVar26[1];
  }
  if (iVar16 != 0) {
    return iVar16;
  }
  uVar15 = 1;
  if (uStack0000000000000094 != 1) {
    if (((unaff_w25 >> 1 & 1) == 0) && (iVar16 = (uint)pbVar28[2] - (uint)pbVar26[2], iVar16 != 0))
    {
      if ((in_stack_00000018 & 0x100000000) == 0) {
        iStack0000000000000074 = iVar16;
        uVar15 = 1;
        if (*(char *)(in_stack_00000088 + 0x5c) != '\0') {
          uVar15 = 2;
        }
        goto LAB_033f9bcc;
      }
    }
    else {
      uVar15 = 2;
      if (uStack0000000000000094 == 2) goto LAB_033f9bcc;
      iVar16 = (uint)pbVar28[3] - (uint)pbVar26[3];
      if (iVar16 == 0) {
        uVar15 = 3;
        if (uStack0000000000000094 == 3) goto LAB_033f9bcc;
        if (bVar6 != bVar5) {
          if ((in_stack_00000018 & 0x100000000) != 0) {
            return -1;
          }
          iStack0000000000000074 = -1;
          if (bVar6 != false) {
            iStack0000000000000074 = 1;
          }
          uVar15 = 3;
          goto LAB_033f9bcc;
        }
        uVar15 = uStack0000000000000094;
        if (bVar6 == false) goto LAB_033f9bcc;
        if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar15 = FUN_033f651c(uStack0000000000000070);
        uVar17 = FUN_033f651c(in_stack_00000050._4_4_);
        iVar16 = 1;
        if ((uVar15 & 1) != 0) {
          iVar16 = -1;
        }
        if (((uVar15 ^ uVar17) & 1) == 0) {
          iVar16 = 0;
        }
        if (iVar16 == 0) {
          if (*(int *)(*(long *)
                        Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                      + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          iVar16 = 4;
          if (uVar19 == 3) {
            iVar16 = 5;
          }
          iVar25 = 3;
          if (in_stack_00000030._4_4_ == 0 && uVar19 != 0) {
            iVar25 = iVar16;
          }
          iVar22 = -5;
          if (uVar14 != 3) {
            iVar22 = -4;
          }
          iVar16 = -3;
          if (in_stack_00000030._4_4_ == 0 && uVar14 != 0) {
            iVar16 = iVar22;
          }
          iVar16 = iVar16 + iVar25;
        }
        if (iVar16 == 0) {
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          bVar6 = (uStack0000000000000070 - 0x3041 & 0xffff) < 0x54;
          iVar16 = -1;
          if (bVar6) {
            iVar16 = 1;
          }
          if (bVar6 == (in_stack_00000050._4_4_ - 0x3041 & 0xffff) < 0x54) {
            if (*(int *)(*(long *)
                          Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                        + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar19 = FUN_033f81c8(uStack0000000000000070 & 0xffff,unaff_w25);
            uVar14 = FUN_033f81c8(in_stack_00000050._4_4_ & 0xffff,unaff_w25);
            iVar16 = 1;
            if ((uVar19 & 1) != 0) {
              iVar16 = -1;
            }
            uVar15 = uStack0000000000000094;
            if ((uVar19 & 1) == (uVar14 & 1)) goto LAB_033f9bcc;
          }
        }
        uVar15 = 3;
      }
      else {
        uVar15 = 2;
      }
      iStack0000000000000074 = iVar16;
      if ((in_stack_00000018 & 0x100000000) == 0) goto LAB_033f9bcc;
    }
    return -1;
  }
  goto LAB_033f9bcc;
code_r0x033f9ff0:
  if (((unaff_w25 >> 0x1d & 1) == 0) && (uStack0000000000000094 == 5)) {
    iStack000000000000006c = unaff_w21 - iStack0000000000000084;
    if (in_stack_000000b8 != 0) {
      iStack000000000000006c = iStack00000000000000c0 - iStack00000000000000c4;
    }
    uVar15 = FUN_033f8000(in_stack_00000088,uStack0000000000000070);
    if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0) == 0)
    {
      thunk_FUN_01ee6d7c(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__);
    }
    iVar16 = FUN_033f60b8(uStack0000000000000070);
    iStack000000000000005c = (uVar15 & 0xff) << (ulong)(iVar16 + 8U & 0x1f);
  }
  unaff_w21 = unaff_w21 + 1;
  *(uint *)(in_stack_00000048 + 0x28) = uStack0000000000000070;
  in_w12 = iStack000000000000006c;
  unaff_w28 = iStack000000000000005c;
  if (bVar9 == 6) goto LAB_033fa12c;
  goto LAB_033fa1ec;
LAB_033facd8:
  if ((uStack0000000000000094 == 1) && (iStack0000000000000074 != 0)) {
    if (unaff_w21 < unaff_w20) {
      iVar25 = unaff_w21;
      if (in_stack_00000098 == 0) goto LAB_033fae50;
      do {
        uVar11 = FUN_03409f80(in_stack_00000098,iVar25,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar2);
        }
        uVar20 = FUN_033f6274(uVar11);
        unaff_w21 = iVar25;
      } while (((uVar20 & 1) != 0) &&
              (iVar25 = iVar25 + 1, unaff_w21 = unaff_w20, unaff_w20 != iVar25));
    }
    if (iVar16 < unaff_w19) {
      iVar25 = iVar16;
      if (unaff_x22 == 0) {
LAB_033fae50:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        uVar11 = FUN_03409f80(unaff_x22,iVar25,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar2);
        }
        uVar20 = FUN_033f6274(uVar11);
        iVar16 = iVar25;
      } while (((uVar20 & 1) != 0) && (iVar25 = iVar25 + 1, iVar16 = unaff_w19, unaff_w19 != iVar25)
              );
    }
  }
  if (iStack0000000000000074 != 0) goto LAB_033fadd4;
  goto LAB_033fad8c;
  while( true ) {
    iStack0000000000000074 = 0;
    _uStack0000000000000078 = 0;
    if (unaff_w20 <= unaff_w21) break;
LAB_033fabb8:
    uVar11 = FUN_03409f80(in_stack_00000098,unaff_w21,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar2);
    }
    uVar20 = FUN_033f6274(uVar11);
    if ((uVar20 & 1) == 0) goto LAB_033facd8;
    if (unaff_x22 == 0) goto LAB_033fae50;
    uVar11 = FUN_03409f80(unaff_x22,iVar16,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar2);
    }
    uVar20 = FUN_033f6274(uVar11);
    if ((uVar20 & 1) == 0) goto LAB_033facd8;
    uVar11 = FUN_03409f80(in_stack_00000098,unaff_w21,0);
    uVar18 = FUN_033f86cc(in_stack_00000088,uVar11,unaff_w25);
    uVar15 = FUN_033f8094(in_stack_00000088,uVar18,uStack000000000000007c);
    uVar11 = FUN_03409f80(unaff_x22,iVar16,0);
    uVar18 = FUN_033f86cc(in_stack_00000088,uVar11,unaff_w25);
    uVar19 = FUN_033f8094(in_stack_00000088,uVar18,_uStack0000000000000078 & 0xffffffff);
    iStack0000000000000074 = (uVar15 & 0xff) - (uVar19 & 0xff);
    if (iStack0000000000000074 != 0) goto LAB_033facd8;
    iVar16 = iVar16 + 1;
    unaff_w21 = unaff_w21 + 1;
    if (unaff_w19 <= iVar16) break;
  }
LAB_033fad8c:
  if ((in_stack_00000058 < 0) || (-1 < iStack000000000000006c)) {
    if ((in_stack_00000058 < 0) && (-1 < iStack000000000000006c)) {
      iStack0000000000000074 = 1;
    }
    else {
      iStack0000000000000074 = iStack000000000000006c - in_stack_00000058;
      if ((iStack0000000000000074 == 0) &&
         (iStack0000000000000074 = iStack000000000000005c - iStack0000000000000060,
         iStack0000000000000074 == 0)) {
        if (iVar16 == unaff_w19) {
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
    if (iVar16 != unaff_w19) {
      iStack0000000000000074 = -1;
    }
  }
  else {
    iStack0000000000000074 = 1;
  }
  return iStack0000000000000074;
}


