/*
FUNCTION_NAME: System.Char$$IsWhiteSpace
ENTRY_POINT: 033f9bb4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 101
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_12;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Type propagation algorithm not settling */

int System_Char__IsWhiteSpace(void)

{
  int iVar1;
  int iVar2;
  int unaff_10000304;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  undefined2 uVar10;
  short sVar11;
  short sVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  uint in_w8;
  uint uVar23;
  int iVar24;
  byte *pbVar25;
  long lVar26;
  int in_w9;
  uint in_w10;
  int iVar27;
  int unaff_w19;
  long unaff_x22;
  int unaff_w23;
  byte *pbVar28;
  uint unaff_w25;
  int unaff_w27;
  int iVar29;
  long unaff_x28;
  byte *pbVar30;
  int unaff_w29;
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
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  int iStack0000000000000080;
  int iStack0000000000000084;
  long in_stack_00000088;
  int iStack0000000000000090;
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
  
  iVar29 = unaff_w27;
  uStack0000000000000068 = in_w10;
  iStack000000000000006c = in_w9;
  iStack0000000000000090 = unaff_w29;
LAB_033f9bcc:
  uVar23 = in_w8;
  iVar14 = unaff_w19;
  iVar15 = unaff_w23;
  unaff_w19 = iVar14;
  unaff_w23 = iVar15;
  in_w8 = uVar23;
  if (unaff_w29 < iVar15) {
    if (unaff_x28 == 0) goto LAB_033fae50;
    uVar10 = FUN_03409f80(unaff_x28,unaff_w29,0);
    if (*(int *)(*(long *)
                  Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)
                          Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                        );
    }
    uVar21 = FUN_033f8ae0(uVar10,unaff_w25);
    if ((uVar21 & 1) != 0) {
      unaff_w29 = unaff_w29 + 1;
      goto LAB_033f9bcc;
    }
  }
  iVar27 = unaff_w27;
  if (unaff_w27 < iVar14) {
    if (unaff_x22 == 0) goto LAB_033fae50;
    bVar5 = true;
    do {
      uVar10 = FUN_03409f80(unaff_x22,unaff_w27,0);
      if (*(int *)(*(long *)
                    Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)
                            Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                          );
      }
      uVar21 = FUN_033f8ae0(uVar10,unaff_w25);
      if ((uVar21 & 1) == 0) {
        if (iVar15 <= unaff_w29) goto LAB_033f9d68;
        iVar27 = unaff_w27;
        if (!bVar5) goto LAB_033f9ca0;
        iVar24 = iVar29;
        iVar1 = unaff_w27;
        iVar27 = iStack0000000000000090;
        if ((unaff_w29 <= iStack0000000000000090) || (unaff_w27 <= iVar29)) goto joined_r0x033f9da4;
        iVar27 = unaff_w29;
        if (iVar14 <= unaff_w27) goto LAB_033f9db8;
        if (unaff_x28 == 0) goto LAB_033fae50;
        iVar24 = 0;
        goto System_Boolean__System_IConvertible_ToSByte;
      }
      unaff_w27 = unaff_w27 + 1;
      bVar5 = unaff_w27 < iVar14;
      iVar27 = iVar14;
    } while (iVar14 != unaff_w27);
  }
  unaff_w27 = iVar27;
  if (unaff_w29 < iVar15) {
LAB_033f9ca0:
    iVar29 = iStack00000000000000b4;
    unaff_w19 = iStack00000000000000b0;
    unaff_w27 = iStack00000000000000a8;
    lVar22 = in_stack_000000a0;
    if (in_stack_000000a0 != 0) {
      iStack0000000000000080 = iStack00000000000000ac;
      in_stack_000000a0 = 0;
      thunk_FUN_01f51358(&stack0x000000a0,0);
      unaff_x22 = lVar22;
      unaff_10000304 = iVar29;
      goto LAB_033f9bcc;
    }
  }
  else {
LAB_033f9d68:
    unaff_w23 = iStack00000000000000c8;
    iVar1 = iStack00000000000000c0;
    lVar22 = in_stack_000000b8;
    iVar27 = unaff_w27;
    if (in_stack_000000b8 != 0) {
      in_stack_000000b8 = 0;
      iStack0000000000000084 = iStack00000000000000c4;
      iStack0000000000000090 = iStack00000000000000cc;
      thunk_FUN_01f51358(&stack0x000000b8,0);
      unaff_x28 = lVar22;
      unaff_w29 = iVar1;
      goto LAB_033f9bcc;
    }
  }
  puVar3 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
  if ((uVar23 < 3) || (iStack0000000000000074 == 0 || (in_stack_00000030 & 0x100000000) != 0))
  goto LAB_033facd8;
  if ((iVar14 <= iVar27) || (iVar15 <= unaff_w29)) goto LAB_033fadd4;
  if (unaff_x28 != 0) goto LAB_033fabb8;
  goto LAB_033fae50;
  while ((iVar24 = iVar24 + 1, iVar1 + 1 < iVar14 && (iVar27 + 1 < iVar15))) {
System_Boolean__System_IConvertible_ToSByte:
    iVar27 = unaff_w29 + iVar24;
    iVar1 = unaff_w27 + iVar24;
    sVar11 = FUN_03409f80(unaff_x28,iVar27,0);
    sVar12 = FUN_03409f80(unaff_x22,iVar1,0);
    if (sVar11 != sVar12) goto LAB_033f9db8;
  }
  iVar27 = unaff_w29 + iVar24;
  iVar1 = unaff_w27 + iVar24;
LAB_033f9db8:
  unaff_w27 = iVar1;
  unaff_w29 = iVar27;
  if ((unaff_w27 != iVar14) && (iVar24 = iVar27, iVar27 != iVar15)) {
    do {
      iVar24 = iVar24 + -1;
      iVar2 = unaff_w27;
      if (iVar24 <= iStack0000000000000090) break;
      if (unaff_x28 == 0) goto LAB_033fae50;
      uVar10 = FUN_03409f80(unaff_x28,iVar24,0);
      cVar6 = FUN_033f7f6c(in_stack_00000088,uVar10);
    } while (cVar6 == '\x01');
    do {
      iVar2 = iVar2 + -1;
      if (iVar2 <= iVar29) break;
      uVar10 = FUN_03409f80(unaff_x22,iVar2,0);
      cVar6 = FUN_033f7f6c(in_stack_00000088,uVar10);
    } while (cVar6 == '\x01');
    iVar1 = iVar2;
    unaff_w29 = iVar24;
    if (iStack0000000000000090 < iVar24) {
      if (unaff_x28 == 0) goto LAB_033fae50;
      do {
        uVar10 = FUN_03409f80(unaff_x28,iVar24,0);
        uVar21 = FUN_033f8b5c(in_stack_00000088,uVar10);
        unaff_w29 = iVar24;
        if ((uVar21 & 1) != 0) break;
        iVar24 = iVar24 + -1;
        unaff_w29 = iStack0000000000000090;
      } while (iStack0000000000000090 < iVar24);
    }
    do {
      iVar24 = unaff_w27;
      if (iVar2 <= iVar29) goto joined_r0x033f9da4;
      uVar10 = FUN_03409f80(unaff_x22,iVar2,0);
      uVar21 = FUN_033f8b5c(in_stack_00000088,uVar10);
      iVar1 = iVar2;
      if ((uVar21 & 1) != 0) goto joined_r0x033f9da4;
      iVar2 = iVar2 + -1;
      iVar1 = unaff_10000304;
    } while( true );
  }
  goto LAB_033f9bcc;
joined_r0x033f9da4:
  unaff_w27 = iVar1;
  unaff_10000304 = iVar24;
  if (unaff_x28 == 0) goto LAB_033fae50;
  uVar10 = FUN_03409f80(unaff_x28,unaff_w29,0);
  uStack0000000000000070 = FUN_033f86cc(in_stack_00000088,uVar10,unaff_w25);
  uVar10 = FUN_03409f80(unaff_x22,unaff_w27,0);
  uVar19 = FUN_033f86cc(in_stack_00000088,uVar10,unaff_w25);
  uVar20 = FUN_033f87b0(in_stack_00000088,uStack0000000000000070);
  _uStack0000000000000078 = CONCAT44(uVar20,uStack0000000000000078);
  iStack0000000000000090 = iVar27;
  iVar29 = unaff_10000304;
  if (uVar20 == 0) {
LAB_033f9f84:
    pbVar30 = (byte *)0x0;
  }
  else {
    if (-1 < *(int *)(in_stack_00000048 + 0x28)) {
      uStack0000000000000070 =
           FUN_033f88d0(in_stack_00000088,*(int *)(in_stack_00000048 + 0x28),uVar20,unaff_w25);
      goto LAB_033f9f84;
    }
    pbVar30 = *(byte **)(in_stack_00000048 + 0x30);
    if (pbVar30 == (byte *)0x0) {
      unaff_w29 = unaff_w29 + 1;
      goto LAB_033f9bcc;
    }
  }
  uVar13 = FUN_033f87b0(in_stack_00000088,uVar19);
  _uStack0000000000000078 = CONCAT44(uVar20,uVar13);
  if (uVar13 == 0) {
System_Convert__ToInt64:
    pbVar28 = (byte *)0x0;
  }
  else {
    if (-1 < (int)uStack0000000000000068) {
      uVar19 = FUN_033f88d0(in_stack_00000088,uStack0000000000000068,uVar13,unaff_w25);
      goto System_Convert__ToInt64;
    }
    pbVar28 = in_stack_00000038;
    if (in_stack_00000038 == (byte *)0x0) {
      in_stack_00000038 = (byte *)0x0;
      unaff_w27 = unaff_w27 + 1;
      goto LAB_033f9bcc;
    }
  }
  bVar7 = FUN_033f7f6c(in_stack_00000088,uStack0000000000000070);
  bVar8 = FUN_033f7f6c(in_stack_00000088,uVar19);
  if (bVar7 == 6) {
    if (((unaff_w25 >> 0x1d & 1) == 0) && (uVar23 == 5)) {
      iStack000000000000006c = unaff_w29 - iStack0000000000000084;
      if (in_stack_000000b8 != 0) {
        iStack000000000000006c = iStack00000000000000c0 - iStack00000000000000c4;
      }
      uVar20 = FUN_033f8000(in_stack_00000088,uStack0000000000000070);
      if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0) ==
          0) {
        thunk_FUN_01ee6d7c(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__);
      }
      iVar14 = FUN_033f60b8(uStack0000000000000070);
      iStack000000000000005c = (uVar20 & 0xff) << (ulong)(iVar14 + 8U & 0x1f);
    }
    unaff_w29 = unaff_w29 + 1;
    *(uint *)(in_stack_00000048 + 0x28) = uStack0000000000000070;
    if (bVar8 != 6) goto LAB_033fa1ec;
  }
  else if (bVar8 != 6) {
    if (uVar20 == 0) {
      lVar22 = FUN_033f823c(in_stack_00000088,unaff_x28,unaff_w29,iVar15);
      if (pbVar30 == (byte *)0x0) {
        if (lVar22 == 0) goto LAB_033fa2f0;
        if (*(long *)(lVar22 + 0x18) == 0) goto LAB_033fae50;
        lVar26 = *(long *)(lVar22 + 0x28);
        iVar27 = *(int *)(*(long *)(lVar22 + 0x18) + 0x18);
        if (lVar26 == 0) {
          if (in_stack_000000b8 == 0) {
            in_stack_000000b8 = unaff_x28;
            thunk_FUN_01f51358(&stack0x000000b8,unaff_x28);
            iStack00000000000000c4 = iStack0000000000000084;
            if (*(long *)(lVar22 + 0x18) == 0) goto LAB_033fae50;
            iStack00000000000000c0 = unaff_w29 + *(int *)(*(long *)(lVar22 + 0x18) + 0x18);
            iStack00000000000000cc = iStack0000000000000090;
            unaff_x28 = *(long *)(lVar22 + 0x20);
            iStack00000000000000c8 = iVar15;
            if (unaff_x28 == 0) goto LAB_033fae50;
            iStack0000000000000090 = 0;
            _uStack0000000000000078 = (ulong)uVar13;
            iStack0000000000000084 = 0;
            unaff_w23 = *(int *)(unaff_x28 + 0x10);
            unaff_w29 = 0;
            goto LAB_033f9bcc;
          }
          bVar5 = false;
          pbVar30 = (byte *)0x0;
        }
        else {
          pbVar30 = *(byte **)(in_stack_00000048 + 0x18);
          uVar21 = 0;
          while ((long)uVar21 < (long)(int)*(uint *)(lVar26 + 0x18)) {
            if (*(uint *)(lVar26 + 0x18) <= uVar21) goto LAB_033fae54;
            pbVar30[uVar21] = *(byte *)(lVar26 + uVar21 + 0x20);
            lVar26 = *(long *)(lVar22 + 0x28);
            uVar21 = uVar21 + 1;
            if (lVar26 == 0) goto LAB_033fae50;
          }
          bVar5 = false;
          *(undefined4 *)(in_stack_00000048 + 0x28) = 0xffffffff;
          *(byte **)(in_stack_00000048 + 0x30) = pbVar30;
        }
      }
      else {
        bVar5 = false;
        iVar27 = 1;
      }
    }
    else {
      if (pbVar30 == (byte *)0x0) {
LAB_033fa2f0:
        pbVar30 = *(byte **)(in_stack_00000048 + 0x18);
        *pbVar30 = bVar7;
        bVar9 = FUN_033f8000(in_stack_00000088,uStack0000000000000070);
        pbVar30[1] = bVar9;
        if (1 < uVar23 && (in_stack_00000030 & 0x100000000) == 0) {
          bVar9 = FUN_033f8094(in_stack_00000088,uStack0000000000000070,uVar20);
          pbVar30[2] = bVar9;
        }
        if (uVar23 < 3) {
LAB_033fa37c:
          bVar5 = false;
        }
        else {
          if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0)
              == 0) {
            thunk_FUN_01ee6d7c();
          }
          bVar9 = FUN_033f60b8(uStack0000000000000070);
          pbVar30[3] = bVar9;
          if (uVar23 < 4) goto LAB_033fa37c;
          if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0)
              == 0) {
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
            uVar16 = uStack0000000000000070 >> 8 & 0xff;
            if (0x32 < uVar16) goto LAB_033fa89c;
            if ((uStack0000000000000070 & 0xffff) < 0x309d) {
              bVar5 = (uStack0000000000000070 & 0xffff) < 0x3099;
            }
            else if (uVar16 < 0x31) {
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
      iVar27 = 1;
    }
    if (uVar13 == 0) {
      lVar22 = FUN_033f823c(in_stack_00000088,unaff_x22,unaff_w27,iVar14);
      if (pbVar28 == (byte *)0x0) {
        if (lVar22 != 0) {
          if (*(long *)(lVar22 + 0x18) == 0) goto LAB_033fae50;
          lVar26 = *(long *)(lVar22 + 0x28);
          iVar1 = unaff_w27 + *(int *)(*(long *)(lVar22 + 0x18) + 0x18);
          if (lVar26 == 0) {
            if (in_stack_000000a0 == 0) {
              in_stack_000000a0 = unaff_x22;
              thunk_FUN_01f51358(&stack0x000000a0,unaff_x22);
              iStack00000000000000ac = iStack0000000000000080;
              if (*(long *)(lVar22 + 0x18) == 0) goto LAB_033fae50;
              iStack00000000000000a8 = unaff_w27 + *(int *)(*(long *)(lVar22 + 0x18) + 0x18);
              unaff_x22 = *(long *)(lVar22 + 0x20);
              iStack00000000000000b0 = iVar14;
              iStack00000000000000b4 = unaff_10000304;
              if (unaff_x22 == 0) goto LAB_033fae50;
              _uStack0000000000000078 = (ulong)uVar20 << 0x20;
              iStack0000000000000080 = 0;
              unaff_w27 = 0;
              iVar29 = 0;
              unaff_w19 = *(int *)(unaff_x22 + 0x10);
              unaff_10000304 = 0;
              goto LAB_033f9bcc;
            }
            bVar4 = false;
            pbVar28 = (byte *)0x0;
            unaff_w27 = iVar1;
          }
          else {
            pbVar28 = *(byte **)(in_stack_00000048 + 0x20);
            uVar21 = 0;
            while ((long)uVar21 < (long)(int)*(uint *)(lVar26 + 0x18)) {
              if (*(uint *)(lVar26 + 0x18) <= uVar21) {
LAB_033fae54:
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              pbVar28[uVar21] = *(byte *)(lVar26 + uVar21 + 0x20);
              lVar26 = *(long *)(lVar22 + 0x28);
              uVar21 = uVar21 + 1;
              if (lVar26 == 0) goto LAB_033fae50;
            }
            uStack0000000000000068 = 0xffffffff;
            bVar4 = false;
            unaff_w27 = iVar1;
            in_stack_00000038 = pbVar28;
          }
          goto LAB_033fa4c8;
        }
        goto LAB_033fa3b0;
      }
    }
    else if (pbVar28 == (byte *)0x0) {
LAB_033fa3b0:
      pbVar28 = *(byte **)(in_stack_00000048 + 0x20);
      *pbVar28 = bVar8;
      bVar7 = FUN_033f8000(in_stack_00000088,uVar19);
      pbVar28[1] = bVar7;
      if (1 < uVar23 && (in_stack_00000030 & 0x100000000) == 0) {
        bVar7 = FUN_033f8094(in_stack_00000088,uVar19,uVar13);
        pbVar28[2] = bVar7;
      }
      puVar3 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
      if (uVar23 < 3) {
LAB_033fa4a4:
        bVar4 = false;
      }
      else {
        if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c();
        }
        bVar7 = FUN_033f60b8(uVar19);
        pbVar28[3] = bVar7;
        if (uVar23 < 4) goto LAB_033fa4a4;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if ((uVar19 & 0xffff) < 0x3041) {
LAB_033fa8a8:
          bVar4 = false;
        }
        else if ((uVar19 + 0x9a & 0xffff) < 0x38) {
          bVar4 = true;
        }
        else {
          uVar16 = uVar19 >> 8 & 0xff;
          if (0x32 < uVar16) goto LAB_033fa8a8;
          if ((uVar19 & 0xffff) < 0x309d) {
            bVar4 = (uVar19 & 0xffff) < 0x3099;
          }
          else if (uVar16 < 0x31) {
            bVar4 = (uVar19 & 0xffff) != 0x30fb;
          }
          else {
            bVar4 = (uVar19 - 0x32d0 & 0xffff) < 0x2f;
          }
        }
      }
      if (1 < bVar8) {
        uStack0000000000000068 = uVar19;
      }
      unaff_w27 = unaff_w27 + 1;
      goto LAB_033fa4c8;
    }
    bVar4 = false;
    unaff_w27 = unaff_w27 + 1;
LAB_033fa4c8:
    unaff_w29 = iVar27 + unaff_w29;
    iVar27 = unaff_w29;
    if ((unaff_w25 >> 1 & 1) == 0) {
      for (; iVar27 < iVar15; iVar27 = iVar27 + 1) {
        uVar10 = FUN_03409f80(unaff_x28,iVar27,0);
        cVar6 = FUN_033f7f6c(in_stack_00000088,uVar10);
        unaff_w29 = iVar27;
        if (cVar6 != '\x01') break;
        bVar7 = pbVar30[2];
        if (bVar7 == 0) {
          bVar7 = 2;
          pbVar30[2] = 2;
        }
        uVar10 = FUN_03409f80(unaff_x28,iVar27,0);
        cVar6 = FUN_033f8094(in_stack_00000088,uVar10,0);
        pbVar30[2] = cVar6 + bVar7;
        unaff_w29 = iVar15;
      }
      iVar15 = unaff_w27;
      if (unaff_w27 < iVar14) {
        do {
          uVar10 = FUN_03409f80(unaff_x22,iVar15,0);
          cVar6 = FUN_033f7f6c(in_stack_00000088,uVar10);
          unaff_w27 = iVar15;
          if (cVar6 != '\x01') break;
          bVar7 = pbVar28[2];
          pbVar25 = (byte *)0x1;
          if (bVar7 == 0) {
            bVar7 = 2;
            pbVar28[2] = 2;
            pbVar25 = pbVar28;
          }
          uVar10 = FUN_03409f80(pbVar25,unaff_x22,iVar15,0);
          cVar6 = FUN_033f8094(in_stack_00000088,uVar10,0);
          iVar15 = iVar15 + 1;
          pbVar28[2] = cVar6 + bVar7;
          unaff_w27 = iVar14;
        } while (iVar14 != iVar15);
      }
    }
    puVar3 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
    iVar14 = (uint)*pbVar30 - (uint)*pbVar28;
    if (iVar14 == 0) {
      iVar14 = (uint)pbVar30[1] - (uint)pbVar28[1];
    }
    if (iVar14 != 0) {
      return iVar14;
    }
    in_w8 = 1;
    if (uVar23 != 1) {
      if (((unaff_w25 >> 1 & 1) == 0) && (iVar14 = (uint)pbVar30[2] - (uint)pbVar28[2], iVar14 != 0)
         ) {
        if ((in_stack_00000018 & 0x100000000) != 0) {
          return -1;
        }
        iStack0000000000000074 = iVar14;
        in_w8 = 1;
        if (*(char *)(in_stack_00000088 + 0x5c) != '\0') {
          in_w8 = 2;
        }
        goto LAB_033f9bcc;
      }
      in_w8 = 2;
      if (uVar23 == 2) goto LAB_033f9bcc;
      iVar14 = (uint)pbVar30[3] - (uint)pbVar28[3];
      if (iVar14 == 0) {
        in_w8 = 3;
        if (uVar23 == 3) goto LAB_033f9bcc;
        if (bVar5 != bVar4) {
          if ((in_stack_00000018 & 0x100000000) != 0) {
            return -1;
          }
          iStack0000000000000074 = -1;
          if (bVar5 != false) {
            iStack0000000000000074 = 1;
          }
          in_w8 = 3;
          goto LAB_033f9bcc;
        }
        in_w8 = uVar23;
        if (bVar5 == false) goto LAB_033f9bcc;
        if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar16 = FUN_033f651c(uStack0000000000000070);
        uVar17 = FUN_033f651c(uVar19);
        iVar14 = 1;
        if ((uVar16 & 1) != 0) {
          iVar14 = -1;
        }
        if (((uVar16 ^ uVar17) & 1) == 0) {
          iVar14 = 0;
        }
        if (iVar14 == 0) {
          if (*(int *)(*(long *)
                        Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                      + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          iVar14 = 4;
          if (uVar20 == 3) {
            iVar14 = 5;
          }
          iVar15 = 3;
          if (in_stack_00000030._4_4_ == 0 && uVar20 != 0) {
            iVar15 = iVar14;
          }
          iVar27 = -5;
          if (uVar13 != 3) {
            iVar27 = -4;
          }
          iVar14 = -3;
          if (in_stack_00000030._4_4_ == 0 && uVar13 != 0) {
            iVar14 = iVar27;
          }
          iVar14 = iVar14 + iVar15;
        }
        if (iVar14 == 0) {
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          bVar5 = (uStack0000000000000070 - 0x3041 & 0xffff) < 0x54;
          iVar14 = -1;
          if (bVar5) {
            iVar14 = 1;
          }
          if (bVar5 == (uVar19 - 0x3041 & 0xffff) < 0x54) {
            if (*(int *)(*(long *)
                          Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                        + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar20 = FUN_033f81c8(uStack0000000000000070 & 0xffff,unaff_w25);
            uVar19 = FUN_033f81c8(uVar19 & 0xffff,unaff_w25);
            iVar14 = 1;
            if ((uVar20 & 1) != 0) {
              iVar14 = -1;
            }
            if ((uVar20 & 1) == (uVar19 & 1)) goto LAB_033f9bcc;
          }
        }
        in_w8 = 3;
      }
      else {
        in_w8 = 2;
      }
      iStack0000000000000074 = iVar14;
      if ((in_stack_00000018 & 0x100000000) != 0) {
        return -1;
      }
    }
    goto LAB_033f9bcc;
  }
  iVar14 = iStack000000000000006c;
  puVar3 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
  if (((unaff_w25 >> 0x1d & 1) == 0) && (uVar23 == 5)) {
    iStack0000000000000058 = unaff_w27 - iStack0000000000000080;
    if (in_stack_000000a0 != 0) {
      iStack0000000000000058 = iStack00000000000000a8 - iStack00000000000000ac;
    }
    uVar20 = FUN_033f8000(in_stack_00000088,uVar19);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar3);
    }
    iVar15 = FUN_033f60b8(uVar19);
    in_stack_00000060 = (uVar20 & 0xff) << (ulong)(iVar15 + 8U & 0x1f);
  }
  unaff_w27 = unaff_w27 + 1;
  uStack0000000000000068 = uVar19;
  iStack000000000000006c = iVar14;
LAB_033fa1ec:
  iVar1 = iStack000000000000006c;
  iVar27 = in_stack_00000060;
  iVar15 = iStack000000000000005c;
  iVar14 = iStack0000000000000058;
  iStack0000000000000058 = iVar14;
  iStack000000000000005c = iVar15;
  in_stack_00000060 = iVar27;
  iStack000000000000006c = iVar1;
  if (uVar23 == 5) {
    iStack0000000000000058 = -1;
    bVar5 = iStack000000000000005c != in_stack_00000060;
    iStack000000000000005c = 0;
    in_stack_00000060 = 0;
    iStack000000000000006c = -1;
    if (bVar5) {
      iStack0000000000000058 = iVar14;
      iStack000000000000005c = iVar15;
      in_stack_00000060 = iVar27;
      iStack000000000000006c = iVar1;
      in_w8 = 4;
    }
  }
  goto LAB_033f9bcc;
LAB_033facd8:
  if ((uVar23 == 1) && (iStack0000000000000074 != 0)) {
    if (unaff_w29 < iVar15) {
      iVar29 = unaff_w29;
      if (unaff_x28 == 0) goto LAB_033fae50;
      do {
        uVar10 = FUN_03409f80(unaff_x28,iVar29,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar3);
        }
        uVar21 = FUN_033f6274(uVar10);
        unaff_w29 = iVar29;
      } while (((uVar21 & 1) != 0) && (iVar29 = iVar29 + 1, unaff_w29 = iVar15, iVar15 != iVar29));
    }
    if (iVar27 < iVar14) {
      iVar29 = iVar27;
      if (unaff_x22 == 0) {
LAB_033fae50:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        uVar10 = FUN_03409f80(unaff_x22,iVar29,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar3);
        }
        uVar21 = FUN_033f6274(uVar10);
        iVar27 = iVar29;
      } while (((uVar21 & 1) != 0) && (iVar29 = iVar29 + 1, iVar27 = iVar14, iVar14 != iVar29));
    }
  }
  if (iStack0000000000000074 != 0) goto LAB_033fadd4;
  goto LAB_033fad8c;
  while( true ) {
    iStack0000000000000074 = 0;
    _uStack0000000000000078 = 0;
    if (iVar15 <= unaff_w29) break;
LAB_033fabb8:
    uVar10 = FUN_03409f80(unaff_x28,unaff_w29,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar3);
    }
    uVar21 = FUN_033f6274(uVar10);
    if ((uVar21 & 1) == 0) goto LAB_033facd8;
    if (unaff_x22 == 0) goto LAB_033fae50;
    uVar10 = FUN_03409f80(unaff_x22,iVar27,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar3);
    }
    uVar21 = FUN_033f6274(uVar10);
    if ((uVar21 & 1) == 0) goto LAB_033facd8;
    uVar10 = FUN_03409f80(unaff_x28,unaff_w29,0);
    uVar18 = FUN_033f86cc(in_stack_00000088,uVar10,unaff_w25);
    uVar19 = FUN_033f8094(in_stack_00000088,uVar18,uStack000000000000007c);
    uVar10 = FUN_03409f80(unaff_x22,iVar27,0);
    uVar18 = FUN_033f86cc(in_stack_00000088,uVar10,unaff_w25);
    uVar20 = FUN_033f8094(in_stack_00000088,uVar18,_uStack0000000000000078 & 0xffffffff);
    iStack0000000000000074 = (uVar19 & 0xff) - (uVar20 & 0xff);
    if (iStack0000000000000074 != 0) goto LAB_033facd8;
    iVar27 = iVar27 + 1;
    unaff_w29 = unaff_w29 + 1;
    if (iVar14 <= iVar27) break;
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
        if (iVar27 == iVar14) {
          *in_stack_00000010 = 1;
        }
        if (unaff_w29 == iVar15) {
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
  if (unaff_w29 == iVar15) {
    if (iVar27 != iVar14) {
      iStack0000000000000074 = -1;
    }
  }
  else {
    iStack0000000000000074 = 1;
  }
  return iStack0000000000000074;
}


