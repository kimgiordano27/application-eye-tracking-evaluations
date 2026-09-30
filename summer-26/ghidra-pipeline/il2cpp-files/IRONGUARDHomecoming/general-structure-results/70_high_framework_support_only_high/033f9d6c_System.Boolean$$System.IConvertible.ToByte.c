/*
FUNCTION_NAME: System.Boolean$$System.IConvertible.ToByte
ENTRY_POINT: 033f9d6c
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

int System_Boolean__System_IConvertible_ToByte(void)

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
  uint uVar20;
  ulong uVar21;
  long lVar22;
  int iVar23;
  byte *pbVar24;
  long lVar25;
  int iVar26;
  int unaff_w19;
  int unaff_w20;
  int iVar27;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long lVar28;
  byte *pbVar29;
  uint unaff_w25;
  int unaff_w26;
  int unaff_w27;
  uint unaff_w28;
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
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  int in_stack_00000080;
  int iStack0000000000000084;
  long in_stack_00000088;
  int iStack0000000000000090;
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
  
code_r0x033f9d6c:
  lVar28 = unaff_x23;
  iVar3 = iStack00000000000000c8;
  iVar27 = iStack00000000000000c0;
  iVar16 = unaff_w26;
  if (lVar28 != 0) {
    in_stack_000000b8 = 0;
    iStack0000000000000084 = iStack00000000000000c4;
    iStack0000000000000090 = iStack00000000000000cc;
    thunk_FUN_01f51358(&stack0x000000b8,0);
    iVar4 = unaff_w19;
    uVar19 = unaff_w28;
LAB_033f9bcc:
    do {
      for (; unaff_w28 = uVar19, unaff_w19 = iVar4, unaff_w20 = iVar3, iVar4 = unaff_w19,
          iVar3 = unaff_w20, uVar19 = unaff_w28, iVar27 < unaff_w20; iVar27 = iVar27 + 1) {
        if (lVar28 == 0) goto LAB_033fae50;
        uVar11 = FUN_03409f80(lVar28,iVar27,0);
        if (*(int *)(*(long *)
                      Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                    + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)
                              Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                            );
        }
        uVar21 = FUN_033f8ae0(uVar11,unaff_w25);
        if ((uVar21 & 1) == 0) break;
      }
      iVar16 = unaff_w26;
      unaff_w21 = iVar27;
      in_stack_00000098 = lVar28;
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
          uVar21 = FUN_033f8ae0(uVar11,unaff_w25);
          if ((uVar21 & 1) == 0) {
            unaff_x23 = in_stack_000000b8;
            if (unaff_w20 <= iVar27) goto code_r0x033f9d6c;
            iVar16 = unaff_w26;
            if (!bVar6) goto LAB_033f9ca0;
            iVar26 = iVar27;
            iVar23 = unaff_w27;
            if ((iVar27 <= iStack0000000000000090) || (unaff_w26 <= unaff_w27))
            goto joined_r0x033f9da4;
            iVar16 = iVar27;
            iVar23 = unaff_w26;
            if (unaff_w19 <= unaff_w26) goto LAB_033f9db8;
            if (lVar28 == 0) goto LAB_033fae50;
            iVar26 = 0;
            goto System_Boolean__System_IConvertible_ToSByte;
          }
          unaff_w26 = unaff_w26 + 1;
          bVar6 = unaff_w26 < unaff_w19;
          iVar16 = unaff_w19;
        } while (unaff_w19 != unaff_w26);
      }
      unaff_x23 = in_stack_000000b8;
      unaff_w26 = iVar16;
      if (unaff_w20 <= iVar27) goto code_r0x033f9d6c;
LAB_033f9ca0:
      unaff_w27 = iStack00000000000000b4;
      iVar4 = iStack00000000000000b0;
      unaff_w26 = iStack00000000000000a8;
      lVar22 = in_stack_000000a0;
      if (in_stack_000000a0 == 0) break;
      in_stack_00000080 = iStack00000000000000ac;
      in_stack_000000a0 = 0;
      thunk_FUN_01f51358(&stack0x000000a0,0);
      unaff_x22 = lVar22;
    } while( true );
  }
  puVar2 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
  if ((unaff_w28 < 3) || (iStack0000000000000074 == 0 || (in_stack_00000030 & 0x100000000) != 0)) {
LAB_033facd8:
    if ((unaff_w28 == 1) && (iStack0000000000000074 != 0)) {
      if (unaff_w21 < unaff_w20) {
        iVar27 = unaff_w21;
        if (in_stack_00000098 == 0) goto LAB_033fae50;
        do {
          uVar11 = FUN_03409f80(in_stack_00000098,iVar27,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(*(long *)puVar2);
          }
          uVar21 = FUN_033f6274(uVar11);
          unaff_w21 = iVar27;
        } while (((uVar21 & 1) != 0) &&
                (iVar27 = iVar27 + 1, unaff_w21 = unaff_w20, unaff_w20 != iVar27));
      }
      if (iVar16 < unaff_w19) {
        iVar27 = iVar16;
        if (unaff_x22 == 0) goto LAB_033fae50;
        do {
          uVar11 = FUN_03409f80(unaff_x22,iVar27,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(*(long *)puVar2);
          }
          uVar21 = FUN_033f6274(uVar11);
          iVar16 = iVar27;
        } while (((uVar21 & 1) != 0) &&
                (iVar27 = iVar27 + 1, iVar16 = unaff_w19, unaff_w19 != iVar27));
      }
    }
    if (iStack0000000000000074 != 0) goto LAB_033fadd4;
  }
  else {
    if ((unaff_w19 <= iVar16) || (unaff_w20 <= unaff_w21)) goto LAB_033fadd4;
    if (in_stack_00000098 == 0) {
LAB_033fae50:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      uVar11 = FUN_03409f80(in_stack_00000098,unaff_w21,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar2);
      }
      uVar21 = FUN_033f6274(uVar11);
      if ((uVar21 & 1) == 0) goto LAB_033facd8;
      if (unaff_x22 == 0) goto LAB_033fae50;
      uVar11 = FUN_03409f80(unaff_x22,iVar16,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar2);
      }
      uVar21 = FUN_033f6274(uVar11);
      if ((uVar21 & 1) == 0) goto LAB_033facd8;
      uVar11 = FUN_03409f80(in_stack_00000098,unaff_w21,0);
      uVar18 = FUN_033f86cc(in_stack_00000088,uVar11,unaff_w25);
      uVar19 = FUN_033f8094(in_stack_00000088,uVar18,uStack000000000000007c);
      uVar11 = FUN_03409f80(unaff_x22,iVar16,0);
      uVar18 = FUN_033f86cc(in_stack_00000088,uVar11,unaff_w25);
      uVar20 = FUN_033f8094(in_stack_00000088,uVar18,_uStack0000000000000078 & 0xffffffff);
      iStack0000000000000074 = (uVar19 & 0xff) - (uVar20 & 0xff);
      if (iStack0000000000000074 != 0) goto LAB_033facd8;
      iVar16 = iVar16 + 1;
      unaff_w21 = unaff_w21 + 1;
      if (unaff_w19 <= iVar16) break;
      iStack0000000000000074 = 0;
      _uStack0000000000000078 = 0;
    } while (unaff_w21 < unaff_w20);
  }
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
  while ((iVar26 = iVar26 + 1, iVar23 + 1 < unaff_w19 && (iVar16 + 1 < unaff_w20))) {
System_Boolean__System_IConvertible_ToSByte:
    iVar16 = iVar27 + iVar26;
    iVar23 = unaff_w26 + iVar26;
    sVar12 = FUN_03409f80(lVar28,iVar16,0);
    sVar13 = FUN_03409f80(unaff_x22,iVar23,0);
    if (sVar12 != sVar13) goto LAB_033f9db8;
  }
  iVar16 = iVar27 + iVar26;
  iVar23 = unaff_w26 + iVar26;
LAB_033f9db8:
  unaff_w26 = iVar23;
  iVar27 = iVar16;
  if ((unaff_w26 != unaff_w19) && (iVar23 = iVar27, iVar27 != unaff_w20)) {
    do {
      iVar23 = iVar23 + -1;
      iVar1 = unaff_w26;
      if (iVar23 <= iStack0000000000000090) break;
      if (lVar28 == 0) goto LAB_033fae50;
      uVar11 = FUN_03409f80(lVar28,iVar23,0);
      cVar7 = FUN_033f7f6c(in_stack_00000088,uVar11);
    } while (cVar7 == '\x01');
    do {
      iVar1 = iVar1 + -1;
      if (iVar1 <= unaff_w27) break;
      uVar11 = FUN_03409f80(unaff_x22,iVar1,0);
      cVar7 = FUN_033f7f6c(in_stack_00000088,uVar11);
    } while (cVar7 == '\x01');
    iVar16 = iVar1;
    iVar26 = iVar23;
    if (iStack0000000000000090 < iVar23) {
      if (lVar28 == 0) goto LAB_033fae50;
      do {
        uVar11 = FUN_03409f80(lVar28,iVar23,0);
        uVar21 = FUN_033f8b5c(in_stack_00000088,uVar11);
        iVar26 = iVar23;
        if ((uVar21 & 1) != 0) break;
        iVar23 = iVar23 + -1;
        iVar26 = iStack0000000000000090;
      } while (iStack0000000000000090 < iVar23);
    }
    do {
      iVar23 = unaff_w26;
      iStack0000000000000090 = iVar27;
      if (iVar1 <= unaff_w27) goto joined_r0x033f9da4;
      uVar11 = FUN_03409f80(unaff_x22,iVar1,0);
      uVar21 = FUN_033f8b5c(in_stack_00000088,uVar11);
      iVar16 = iVar1;
      if ((uVar21 & 1) != 0) goto joined_r0x033f9da4;
      iVar1 = iVar1 + -1;
      iVar16 = unaff_w27;
    } while( true );
  }
  goto LAB_033f9bcc;
joined_r0x033f9da4:
  unaff_w26 = iVar16;
  iVar27 = iVar26;
  if (lVar28 == 0) goto LAB_033fae50;
  uVar11 = FUN_03409f80(lVar28,iVar27,0);
  uStack0000000000000070 = FUN_033f86cc(in_stack_00000088,uVar11,unaff_w25);
  uVar11 = FUN_03409f80(unaff_x22,unaff_w26,0);
  uVar20 = FUN_033f86cc(in_stack_00000088,uVar11,unaff_w25);
  uVar14 = FUN_033f87b0(in_stack_00000088,uStack0000000000000070);
  _uStack0000000000000078 = CONCAT44(uVar14,uStack0000000000000078);
  unaff_w27 = iVar23;
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
      iVar27 = iVar27 + 1;
      goto LAB_033f9bcc;
    }
  }
  uVar15 = FUN_033f87b0(in_stack_00000088,uVar20);
  _uStack0000000000000078 = CONCAT44(uVar14,uVar15);
  if (uVar15 == 0) {
System_Convert__ToInt64:
    pbVar29 = (byte *)0x0;
  }
  else {
    if (-1 < (int)uStack0000000000000068) {
      uVar20 = FUN_033f88d0(in_stack_00000088,uStack0000000000000068,uVar15,unaff_w25);
      goto System_Convert__ToInt64;
    }
    pbVar29 = in_stack_00000038;
    if (in_stack_00000038 == (byte *)0x0) {
      in_stack_00000038 = (byte *)0x0;
      unaff_w26 = unaff_w26 + 1;
      goto LAB_033f9bcc;
    }
  }
  bVar8 = FUN_033f7f6c(in_stack_00000088,uStack0000000000000070);
  bVar9 = FUN_033f7f6c(in_stack_00000088,uVar20);
  if (bVar8 == 6) {
    if (((unaff_w25 >> 0x1d & 1) == 0) && (unaff_w28 == 5)) {
      iStack000000000000006c = iVar27 - iStack0000000000000084;
      if (in_stack_000000b8 != 0) {
        iStack000000000000006c = iStack00000000000000c0 - iStack00000000000000c4;
      }
      uVar14 = FUN_033f8000(in_stack_00000088,uStack0000000000000070);
      if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0) ==
          0) {
        thunk_FUN_01ee6d7c(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__);
      }
      iVar16 = FUN_033f60b8(uStack0000000000000070);
      iStack000000000000005c = (uVar14 & 0xff) << (ulong)(iVar16 + 8U & 0x1f);
    }
    iVar27 = iVar27 + 1;
    *(uint *)(in_stack_00000048 + 0x28) = uStack0000000000000070;
    if (bVar9 != 6) goto LAB_033fa1ec;
  }
  else if (bVar9 != 6) {
    if (uVar14 == 0) {
      lVar22 = FUN_033f823c(in_stack_00000088,lVar28,iVar27,unaff_w20);
      if (pbVar30 == (byte *)0x0) {
        if (lVar22 == 0) goto LAB_033fa2f0;
        if (*(long *)(lVar22 + 0x18) == 0) goto LAB_033fae50;
        lVar25 = *(long *)(lVar22 + 0x28);
        iVar16 = *(int *)(*(long *)(lVar22 + 0x18) + 0x18);
        if (lVar25 == 0) {
          if (in_stack_000000b8 == 0) {
            in_stack_000000b8 = lVar28;
            thunk_FUN_01f51358(&stack0x000000b8,lVar28);
            iStack00000000000000c4 = iStack0000000000000084;
            if (*(long *)(lVar22 + 0x18) == 0) goto LAB_033fae50;
            iStack00000000000000c0 = iVar27 + *(int *)(*(long *)(lVar22 + 0x18) + 0x18);
            lVar28 = *(long *)(lVar22 + 0x20);
            iStack00000000000000c8 = unaff_w20;
            iStack00000000000000cc = iStack0000000000000090;
            if (lVar28 == 0) goto LAB_033fae50;
            iStack0000000000000090 = 0;
            _uStack0000000000000078 = (ulong)uVar15;
            iStack0000000000000084 = 0;
            iVar27 = 0;
            iVar3 = *(int *)(lVar28 + 0x10);
            goto LAB_033f9bcc;
          }
          bVar6 = false;
          pbVar30 = (byte *)0x0;
        }
        else {
          pbVar30 = *(byte **)(in_stack_00000048 + 0x18);
          uVar21 = 0;
          while ((long)uVar21 < (long)(int)*(uint *)(lVar25 + 0x18)) {
            if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_033fae54;
            pbVar30[uVar21] = *(byte *)(lVar25 + uVar21 + 0x20);
            lVar25 = *(long *)(lVar22 + 0x28);
            uVar21 = uVar21 + 1;
            if (lVar25 == 0) goto LAB_033fae50;
          }
          bVar6 = false;
          *(undefined4 *)(in_stack_00000048 + 0x28) = 0xffffffff;
          *(byte **)(in_stack_00000048 + 0x30) = pbVar30;
        }
      }
      else {
        bVar6 = false;
        iVar16 = 1;
      }
    }
    else {
      if (pbVar30 == (byte *)0x0) {
LAB_033fa2f0:
        pbVar30 = *(byte **)(in_stack_00000048 + 0x18);
        *pbVar30 = bVar8;
        bVar10 = FUN_033f8000(in_stack_00000088,uStack0000000000000070);
        pbVar30[1] = bVar10;
        if (1 < unaff_w28 && (in_stack_00000030 & 0x100000000) == 0) {
          bVar10 = FUN_033f8094(in_stack_00000088,uStack0000000000000070,uVar14);
          pbVar30[2] = bVar10;
        }
        if (unaff_w28 < 3) {
LAB_033fa37c:
          bVar6 = false;
        }
        else {
          if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0)
              == 0) {
            thunk_FUN_01ee6d7c();
          }
          bVar10 = FUN_033f60b8(uStack0000000000000070);
          pbVar30[3] = bVar10;
          if (unaff_w28 < 4) goto LAB_033fa37c;
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
      iVar16 = 1;
    }
    if (uVar15 == 0) {
      lVar22 = FUN_033f823c(in_stack_00000088,unaff_x22,unaff_w26,unaff_w19);
      if (pbVar29 == (byte *)0x0) {
        if (lVar22 != 0) {
          if (*(long *)(lVar22 + 0x18) == 0) goto LAB_033fae50;
          lVar25 = *(long *)(lVar22 + 0x28);
          iVar26 = unaff_w26 + *(int *)(*(long *)(lVar22 + 0x18) + 0x18);
          if (lVar25 == 0) {
            if (in_stack_000000a0 == 0) {
              in_stack_000000a0 = unaff_x22;
              thunk_FUN_01f51358(&stack0x000000a0,unaff_x22);
              iStack00000000000000ac = in_stack_00000080;
              if (*(long *)(lVar22 + 0x18) == 0) goto LAB_033fae50;
              iStack00000000000000a8 = unaff_w26 + *(int *)(*(long *)(lVar22 + 0x18) + 0x18);
              unaff_x22 = *(long *)(lVar22 + 0x20);
              iStack00000000000000b0 = unaff_w19;
              iStack00000000000000b4 = iVar23;
              if (unaff_x22 == 0) goto LAB_033fae50;
              _uStack0000000000000078 = (ulong)uVar14 << 0x20;
              in_stack_00000080 = 0;
              unaff_w26 = 0;
              iVar4 = *(int *)(unaff_x22 + 0x10);
              unaff_w27 = 0;
              goto LAB_033f9bcc;
            }
            bVar5 = false;
            pbVar29 = (byte *)0x0;
          }
          else {
            pbVar29 = *(byte **)(in_stack_00000048 + 0x20);
            uVar21 = 0;
            while ((long)uVar21 < (long)(int)*(uint *)(lVar25 + 0x18)) {
              if (*(uint *)(lVar25 + 0x18) <= uVar21) {
LAB_033fae54:
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              pbVar29[uVar21] = *(byte *)(lVar25 + uVar21 + 0x20);
              lVar25 = *(long *)(lVar22 + 0x28);
              uVar21 = uVar21 + 1;
              if (lVar25 == 0) goto LAB_033fae50;
            }
            uStack0000000000000068 = 0xffffffff;
            bVar5 = false;
            in_stack_00000038 = pbVar29;
          }
          goto LAB_033fa4c8;
        }
        goto LAB_033fa3b0;
      }
    }
    else if (pbVar29 == (byte *)0x0) {
LAB_033fa3b0:
      pbVar29 = *(byte **)(in_stack_00000048 + 0x20);
      *pbVar29 = bVar9;
      bVar8 = FUN_033f8000(in_stack_00000088,uVar20);
      pbVar29[1] = bVar8;
      if (1 < unaff_w28 && (in_stack_00000030 & 0x100000000) == 0) {
        bVar8 = FUN_033f8094(in_stack_00000088,uVar20,uVar15);
        pbVar29[2] = bVar8;
      }
      puVar2 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
      if (unaff_w28 < 3) {
LAB_033fa4a4:
        bVar5 = false;
      }
      else {
        if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c();
        }
        bVar8 = FUN_033f60b8(uVar20);
        pbVar29[3] = bVar8;
        if (unaff_w28 < 4) goto LAB_033fa4a4;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if ((uVar20 & 0xffff) < 0x3041) {
LAB_033fa8a8:
          bVar5 = false;
        }
        else if ((uVar20 + 0x9a & 0xffff) < 0x38) {
          bVar5 = true;
        }
        else {
          uVar19 = uVar20 >> 8 & 0xff;
          if (0x32 < uVar19) goto LAB_033fa8a8;
          if ((uVar20 & 0xffff) < 0x309d) {
            bVar5 = (uVar20 & 0xffff) < 0x3099;
          }
          else if (uVar19 < 0x31) {
            bVar5 = (uVar20 & 0xffff) != 0x30fb;
          }
          else {
            bVar5 = (uVar20 - 0x32d0 & 0xffff) < 0x2f;
          }
        }
      }
      if (1 < bVar9) {
        uStack0000000000000068 = uVar20;
      }
      iVar26 = unaff_w26 + 1;
      goto LAB_033fa4c8;
    }
    bVar5 = false;
    iVar26 = unaff_w26 + 1;
LAB_033fa4c8:
    iVar27 = iVar16 + iVar27;
    unaff_w26 = iVar26;
    iVar16 = iVar27;
    if ((unaff_w25 >> 1 & 1) == 0) {
      for (; iVar16 < unaff_w20; iVar16 = iVar16 + 1) {
        uVar11 = FUN_03409f80(lVar28,iVar16,0);
        cVar7 = FUN_033f7f6c(in_stack_00000088,uVar11);
        iVar27 = iVar16;
        if (cVar7 != '\x01') break;
        bVar8 = pbVar30[2];
        if (bVar8 == 0) {
          bVar8 = 2;
          pbVar30[2] = 2;
        }
        uVar11 = FUN_03409f80(lVar28,iVar16,0);
        cVar7 = FUN_033f8094(in_stack_00000088,uVar11,0);
        pbVar30[2] = cVar7 + bVar8;
        iVar27 = unaff_w20;
      }
      if (iVar26 < unaff_w19) {
        do {
          uVar11 = FUN_03409f80(unaff_x22,iVar26,0);
          cVar7 = FUN_033f7f6c(in_stack_00000088,uVar11);
          unaff_w26 = iVar26;
          if (cVar7 != '\x01') break;
          bVar8 = pbVar29[2];
          pbVar24 = (byte *)0x1;
          if (bVar8 == 0) {
            bVar8 = 2;
            pbVar29[2] = 2;
            pbVar24 = pbVar29;
          }
          uVar11 = FUN_03409f80(pbVar24,unaff_x22,iVar26,0);
          cVar7 = FUN_033f8094(in_stack_00000088,uVar11,0);
          iVar26 = iVar26 + 1;
          pbVar29[2] = cVar7 + bVar8;
          unaff_w26 = unaff_w19;
        } while (unaff_w19 != iVar26);
      }
    }
    puVar2 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
    iVar16 = (uint)*pbVar30 - (uint)*pbVar29;
    if (iVar16 == 0) {
      iVar16 = (uint)pbVar30[1] - (uint)pbVar29[1];
    }
    if (iVar16 != 0) {
      return iVar16;
    }
    uVar19 = 1;
    if (unaff_w28 != 1) {
      if (((unaff_w25 >> 1 & 1) == 0) && (iVar16 = (uint)pbVar30[2] - (uint)pbVar29[2], iVar16 != 0)
         ) {
        if ((in_stack_00000018 & 0x100000000) == 0) {
          iStack0000000000000074 = iVar16;
          uVar19 = 1;
          if (*(char *)(in_stack_00000088 + 0x5c) != '\0') {
            uVar19 = 2;
          }
          goto LAB_033f9bcc;
        }
      }
      else {
        uVar19 = 2;
        if (unaff_w28 == 2) goto LAB_033f9bcc;
        iVar16 = (uint)pbVar30[3] - (uint)pbVar29[3];
        if (iVar16 == 0) {
          uVar19 = 3;
          if (unaff_w28 == 3) goto LAB_033f9bcc;
          if (bVar6 != bVar5) {
            if ((in_stack_00000018 & 0x100000000) != 0) {
              return -1;
            }
            iStack0000000000000074 = -1;
            if (bVar6 != false) {
              iStack0000000000000074 = 1;
            }
            uVar19 = 3;
            goto LAB_033f9bcc;
          }
          uVar19 = unaff_w28;
          if (bVar6 == false) goto LAB_033f9bcc;
          if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0)
              == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar19 = FUN_033f651c(uStack0000000000000070);
          uVar17 = FUN_033f651c(uVar20);
          iVar16 = 1;
          if ((uVar19 & 1) != 0) {
            iVar16 = -1;
          }
          if (((uVar19 ^ uVar17) & 1) == 0) {
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
            iVar23 = 3;
            if (in_stack_00000030._4_4_ == 0 && uVar14 != 0) {
              iVar23 = iVar16;
            }
            iVar26 = -5;
            if (uVar15 != 3) {
              iVar26 = -4;
            }
            iVar16 = -3;
            if (in_stack_00000030._4_4_ == 0 && uVar15 != 0) {
              iVar16 = iVar26;
            }
            iVar16 = iVar16 + iVar23;
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
            if (bVar6 == (uVar20 - 0x3041 & 0xffff) < 0x54) {
              if (*(int *)(*(long *)
                            Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                          + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar14 = FUN_033f81c8(uStack0000000000000070 & 0xffff,unaff_w25);
              uVar20 = FUN_033f81c8(uVar20 & 0xffff,unaff_w25);
              iVar16 = 1;
              if ((uVar14 & 1) != 0) {
                iVar16 = -1;
              }
              uVar19 = unaff_w28;
              if ((uVar14 & 1) == (uVar20 & 1)) goto LAB_033f9bcc;
            }
          }
          uVar19 = 3;
        }
        else {
          uVar19 = 2;
        }
        iStack0000000000000074 = iVar16;
        if ((in_stack_00000018 & 0x100000000) == 0) goto LAB_033f9bcc;
      }
      return -1;
    }
    goto LAB_033f9bcc;
  }
  puVar2 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
  if (((unaff_w25 >> 0x1d & 1) == 0) && (unaff_w28 == 5)) {
    iStack0000000000000058 = unaff_w26 - in_stack_00000080;
    if (in_stack_000000a0 != 0) {
      iStack0000000000000058 = iStack00000000000000a8 - iStack00000000000000ac;
    }
    uVar14 = FUN_033f8000(in_stack_00000088,uVar20);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar2);
    }
    iVar16 = FUN_033f60b8(uVar20);
    in_stack_00000060 = (uVar14 & 0xff) << (ulong)(iVar16 + 8U & 0x1f);
  }
  unaff_w26 = unaff_w26 + 1;
  uStack0000000000000068 = uVar20;
LAB_033fa1ec:
  iVar1 = iStack000000000000006c;
  iVar26 = in_stack_00000060;
  iVar23 = iStack000000000000005c;
  iVar16 = iStack0000000000000058;
  iStack0000000000000058 = iVar16;
  iStack000000000000005c = iVar23;
  in_stack_00000060 = iVar26;
  iStack000000000000006c = iVar1;
  if (unaff_w28 == 5) {
    iStack0000000000000058 = -1;
    bVar6 = iStack000000000000005c != in_stack_00000060;
    iStack000000000000005c = 0;
    in_stack_00000060 = 0;
    iStack000000000000006c = -1;
    if (bVar6) {
      iStack0000000000000058 = iVar16;
      iStack000000000000005c = iVar23;
      in_stack_00000060 = iVar26;
      iStack000000000000006c = iVar1;
      uVar19 = 4;
    }
  }
  goto LAB_033f9bcc;
}


