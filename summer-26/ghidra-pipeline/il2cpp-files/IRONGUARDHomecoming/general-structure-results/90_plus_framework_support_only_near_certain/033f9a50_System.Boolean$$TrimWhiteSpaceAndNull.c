/*
FUNCTION_NAME: System.Boolean$$TrimWhiteSpaceAndNull
ENTRY_POINT: 033f9a50
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 101
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_14;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_7
*/


/* WARNING: Type propagation algorithm not settling */

int System_Boolean__TrimWhiteSpaceAndNull
              (long param_1,long param_2,int param_3,int param_4,long param_5,int param_6,
              int param_7,undefined1 *param_8)

{
  uint uVar1;
  int iVar2;
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
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  long lVar23;
  uint uVar24;
  int iVar25;
  long lVar26;
  byte *pbVar27;
  long lVar28;
  int iVar29;
  int iVar30;
  byte *pbVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  byte *pbVar35;
  undefined1 *puStack0000000000000028;
  byte *pbStack0000000000000038;
  int iStack0000000000000058;
  int iStack000000000000005c;
  int iStack0000000000000060;
  uint uStack0000000000000068;
  int iStack000000000000006c;
  uint uStack0000000000000070;
  int iStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  int iStack0000000000000080;
  int iStack0000000000000084;
  long lStack0000000000000088;
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
  undefined1 *in_stack_00000130;
  byte in_stack_00000138;
  byte in_stack_00000140;
  uint *in_stack_00000148;
  
  puStack0000000000000028 = in_stack_00000130;
  iStack0000000000000084 = param_3;
  lStack0000000000000088 = param_1;
  if ((DAT_04832646 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                      );
    DAT_04832646 = 1;
  }
  uVar1 = *in_stack_00000148;
  iVar30 = param_4 + iStack0000000000000084;
  iVar29 = param_7 + param_6;
  *param_8 = 0;
  *puStack0000000000000028 = 0;
  iVar33 = param_6;
  iStack0000000000000090 = iStack0000000000000084;
  if ((in_stack_00000138 & 1) != 0) {
    if (iStack0000000000000084 < iVar30) {
      iVar32 = iStack0000000000000084;
      if (param_2 == 0) goto LAB_033fae50;
      do {
        uVar10 = FUN_03409f80(param_2,iVar32,0);
        iVar13 = FUN_033f87b0(lStack0000000000000088,uVar10);
        iStack0000000000000090 = iVar32;
        if (iVar13 == 0) break;
        param_4 = param_4 + -1;
        iStack0000000000000090 = iVar30;
        iVar32 = iVar32 + 1;
      } while (param_4 != 0);
    }
    lVar28 = lStack0000000000000088;
    if (param_6 < iVar29) {
      iVar32 = param_6;
      if (param_5 == 0) goto LAB_033fae50;
      do {
        uVar10 = FUN_03409f80(param_5,iVar32,0);
        iVar13 = FUN_033f87b0(lVar28,uVar10);
        iVar33 = iVar32;
        if (iVar13 == 0) break;
        param_7 = param_7 + -1;
        iVar32 = iVar32 + 1;
        iVar33 = iVar29;
      } while (param_7 != 0);
    }
  }
  iStack0000000000000058 = -1;
  uVar20 = uVar1 >> 1 & 1;
  pbStack0000000000000038 = (byte *)0x0;
  _uStack0000000000000078 = 0;
  iStack000000000000005c = 0;
  iStack0000000000000060 = 0;
  iStack0000000000000074 = 0;
  in_stack_000000b8 = 0;
  _iStack00000000000000c0 = 0;
  _iStack00000000000000c8 = 0;
  _iStack00000000000000a8 = 0;
  _iStack00000000000000b0 = 0;
  in_stack_000000a0 = 0;
  uStack0000000000000068 = 0xffffffff;
  iStack000000000000006c = -1;
  iStack0000000000000080 = param_6;
  iVar32 = iVar33;
  iVar13 = iStack0000000000000090;
  uVar21 = 5;
LAB_033f9bcc:
  uVar24 = uVar21;
  uVar21 = uVar24;
  if (iVar13 < iVar30) {
    if (param_2 == 0) goto LAB_033fae50;
    uVar10 = FUN_03409f80(param_2,iVar13,0);
    if (*(int *)(*(long *)
                  Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)
                          Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                        );
    }
    uVar22 = FUN_033f8ae0(uVar10,uVar1);
    if ((uVar22 & 1) != 0) {
      iVar13 = iVar13 + 1;
      goto LAB_033f9bcc;
    }
  }
  iVar17 = iVar32;
  if (iVar32 < iVar29) {
    if (param_5 == 0) goto LAB_033fae50;
    bVar5 = true;
    do {
      uVar10 = FUN_03409f80(param_5,iVar32,0);
      if (*(int *)(*(long *)
                    Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)
                            Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                          );
      }
      uVar22 = FUN_033f8ae0(uVar10,uVar1);
      if ((uVar22 & 1) == 0) {
        if (iVar30 <= iVar13) goto LAB_033f9d68;
        if (!bVar5) goto LAB_033f9ca0;
        iVar25 = iVar33;
        lVar28 = lStack0000000000000088;
        iVar17 = iVar32;
        iVar34 = iVar13;
        if ((iVar13 <= iStack0000000000000090) || (iVar32 <= iVar33)) goto joined_r0x033f9da4;
        iVar34 = iVar32;
        iVar17 = iVar13;
        if (iVar29 <= iVar32) goto LAB_033f9db8;
        if (param_2 == 0) goto LAB_033fae50;
        iVar25 = 0;
        goto System_Boolean__System_IConvertible_ToSByte;
      }
      iVar32 = iVar32 + 1;
      bVar5 = iVar32 < iVar29;
      iVar17 = iVar29;
    } while (iVar29 != iVar32);
  }
  iVar32 = iVar17;
  if (iVar13 < iVar30) {
LAB_033f9ca0:
    lVar28 = in_stack_000000a0;
    if (in_stack_000000a0 != 0) {
      iVar32 = iStack00000000000000a8;
      iVar29 = iStack00000000000000b0;
      iVar33 = iStack00000000000000b4;
      iStack0000000000000080 = iStack00000000000000ac;
      in_stack_000000a0 = 0;
      thunk_FUN_01f51358(&stack0x000000a0,0);
      param_5 = lVar28;
      goto LAB_033f9bcc;
    }
  }
  else {
LAB_033f9d68:
    lVar28 = in_stack_000000b8;
    if (in_stack_000000b8 != 0) {
      iVar13 = iStack00000000000000c0;
      in_stack_000000b8 = 0;
      iStack0000000000000084 = iStack00000000000000c4;
      iVar30 = iStack00000000000000c8;
      iStack0000000000000090 = iStack00000000000000cc;
      thunk_FUN_01f51358(&stack0x000000b8,0);
      param_2 = lVar28;
      goto LAB_033f9bcc;
    }
  }
  puVar3 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
  if ((uVar24 < 3) || (iStack0000000000000074 == 0 || uVar20 != 0)) goto LAB_033facd8;
  if ((iVar29 <= iVar32) || (iVar30 <= iVar13)) goto LAB_033fadd4;
  if (param_2 != 0) goto LAB_033fabb8;
  goto LAB_033fae50;
  while ((iVar25 = iVar25 + 1, iVar34 + 1 < iVar29 && (iVar17 + 1 < iVar30))) {
System_Boolean__System_IConvertible_ToSByte:
    iVar17 = iVar13 + iVar25;
    iVar34 = iVar32 + iVar25;
    sVar11 = FUN_03409f80(param_2,iVar17,0);
    sVar12 = FUN_03409f80(param_5,iVar34,0);
    if (sVar11 != sVar12) goto LAB_033f9db8;
  }
  iVar34 = iVar32 + iVar25;
  iVar17 = iVar13 + iVar25;
LAB_033f9db8:
  iVar13 = iVar17;
  iVar32 = iVar34;
  lVar28 = lStack0000000000000088;
  if ((iVar32 != iVar29) && (iVar25 = iVar13, iVar13 != iVar30)) {
    do {
      iVar25 = iVar25 + -1;
      iVar2 = iVar32;
      if (iVar25 <= iStack0000000000000090) break;
      if (param_2 == 0) goto LAB_033fae50;
      uVar10 = FUN_03409f80(param_2,iVar25,0);
      cVar6 = FUN_033f7f6c(lVar28,uVar10);
    } while (cVar6 == '\x01');
    do {
      iVar2 = iVar2 + -1;
      if (iVar2 <= iVar33) break;
      uVar10 = FUN_03409f80(param_5,iVar2,0);
      cVar6 = FUN_033f7f6c(lStack0000000000000088,uVar10);
    } while (cVar6 == '\x01');
    iVar17 = iVar2;
    iVar34 = iVar25;
    if (iStack0000000000000090 < iVar25) {
      if (param_2 == 0) goto LAB_033fae50;
      do {
        uVar10 = FUN_03409f80(param_2,iVar25,0);
        uVar22 = FUN_033f8b5c(lStack0000000000000088,uVar10);
        iVar34 = iVar25;
        if ((uVar22 & 1) != 0) break;
        iVar25 = iVar25 + -1;
        iVar34 = iStack0000000000000090;
      } while (iStack0000000000000090 < iVar25);
    }
    do {
      iVar25 = iVar32;
      lVar28 = lStack0000000000000088;
      iStack0000000000000090 = iVar13;
      if (iVar2 <= iVar33) goto joined_r0x033f9da4;
      uVar10 = FUN_03409f80(param_5,iVar2,0);
      uVar22 = FUN_033f8b5c(lStack0000000000000088,uVar10);
      lVar28 = lStack0000000000000088;
      iVar17 = iVar2;
      if ((uVar22 & 1) != 0) goto joined_r0x033f9da4;
      iVar2 = iVar2 + -1;
      iVar17 = iVar33;
    } while( true );
  }
  goto LAB_033f9bcc;
joined_r0x033f9da4:
  iVar13 = iVar34;
  iVar32 = iVar17;
  iVar33 = iVar25;
  lStack0000000000000088 = lVar28;
  if (param_2 == 0) goto LAB_033fae50;
  uVar10 = FUN_03409f80(param_2,iVar13,0);
  uStack0000000000000070 = FUN_033f86cc(lVar28,uVar10,uVar1);
  uVar10 = FUN_03409f80(param_5,iVar32,0);
  uVar14 = FUN_033f86cc(lVar28,uVar10,uVar1);
  uVar15 = FUN_033f87b0(lVar28,uStack0000000000000070);
  _uStack0000000000000078 = CONCAT44(uVar15,uStack0000000000000078);
  if (uVar15 == 0) {
LAB_033f9f84:
    pbVar35 = (byte *)0x0;
  }
  else {
    if (-1 < (int)in_stack_00000148[10]) {
      uStack0000000000000070 = FUN_033f88d0(lVar28,in_stack_00000148[10],uVar15,uVar1);
      goto LAB_033f9f84;
    }
    pbVar35 = *(byte **)(in_stack_00000148 + 0xc);
    if (pbVar35 == (byte *)0x0) {
      iVar13 = iVar13 + 1;
      goto LAB_033f9bcc;
    }
  }
  uVar16 = FUN_033f87b0(lVar28,uVar14);
  _uStack0000000000000078 = CONCAT44(uVar15,uVar16);
  if (uVar16 == 0) {
System_Convert__ToInt64:
    pbVar31 = (byte *)0x0;
  }
  else {
    if (-1 < (int)uStack0000000000000068) {
      uVar14 = FUN_033f88d0(lVar28,uStack0000000000000068,uVar16,uVar1);
      goto System_Convert__ToInt64;
    }
    pbVar31 = pbStack0000000000000038;
    if (pbStack0000000000000038 == (byte *)0x0) {
      pbStack0000000000000038 = (byte *)0x0;
      iVar32 = iVar32 + 1;
      goto LAB_033f9bcc;
    }
  }
  bVar7 = FUN_033f7f6c(lVar28,uStack0000000000000070);
  bVar8 = FUN_033f7f6c(lVar28,uVar14);
  if (bVar7 == 6) {
    if (((uVar1 >> 0x1d & 1) == 0) && (uVar24 == 5)) {
      iStack000000000000006c = iVar13 - iStack0000000000000084;
      if (in_stack_000000b8 != 0) {
        iStack000000000000006c = iStack00000000000000c0 - iStack00000000000000c4;
      }
      uVar15 = FUN_033f8000(lVar28,uStack0000000000000070);
      if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0) ==
          0) {
        thunk_FUN_01ee6d7c(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__);
      }
      iVar17 = FUN_033f60b8(uStack0000000000000070);
      iStack000000000000005c = (uVar15 & 0xff) << (ulong)(iVar17 + 8U & 0x1f);
    }
    iVar13 = iVar13 + 1;
    in_stack_00000148[10] = uStack0000000000000070;
    if (bVar8 != 6) goto LAB_033fa1ec;
  }
  else if (bVar8 != 6) {
    if (uVar15 == 0) {
      lVar23 = FUN_033f823c(lVar28,param_2,iVar13,iVar30);
      lVar28 = lStack0000000000000088;
      if (pbVar35 == (byte *)0x0) {
        if (lVar23 == 0) goto LAB_033fa2f0;
        if (*(long *)(lVar23 + 0x18) == 0) goto LAB_033fae50;
        lVar26 = *(long *)(lVar23 + 0x28);
        iVar17 = *(int *)(*(long *)(lVar23 + 0x18) + 0x18);
        if (lVar26 == 0) {
          if (in_stack_000000b8 == 0) {
            in_stack_000000b8 = param_2;
            thunk_FUN_01f51358(&stack0x000000b8,param_2);
            _iStack00000000000000c0 = CONCAT44(iStack0000000000000084,iStack00000000000000c0);
            if (*(long *)(lVar23 + 0x18) == 0) goto LAB_033fae50;
            _iStack00000000000000c0 =
                 CONCAT44(iStack0000000000000084,iVar13 + *(int *)(*(long *)(lVar23 + 0x18) + 0x18))
            ;
            _iStack00000000000000c8 = CONCAT44(iStack0000000000000090,iVar30);
            param_2 = *(long *)(lVar23 + 0x20);
            if (param_2 == 0) goto LAB_033fae50;
            iVar30 = *(int *)(param_2 + 0x10);
            iStack0000000000000090 = 0;
            _uStack0000000000000078 = (ulong)uVar16;
            iStack0000000000000084 = 0;
            iVar13 = 0;
            goto LAB_033f9bcc;
          }
          bVar5 = false;
          pbVar35 = (byte *)0x0;
        }
        else {
          pbVar35 = *(byte **)(in_stack_00000148 + 6);
          uVar22 = 0;
          while ((long)uVar22 < (long)(int)*(uint *)(lVar26 + 0x18)) {
            if (*(uint *)(lVar26 + 0x18) <= uVar22) goto LAB_033fae54;
            pbVar35[uVar22] = *(byte *)(lVar26 + uVar22 + 0x20);
            lVar26 = *(long *)(lVar23 + 0x28);
            uVar22 = uVar22 + 1;
            if (lVar26 == 0) goto LAB_033fae50;
          }
          bVar5 = false;
          in_stack_00000148[10] = 0xffffffff;
          *(byte **)(in_stack_00000148 + 0xc) = pbVar35;
        }
      }
      else {
        bVar5 = false;
        iVar17 = 1;
      }
    }
    else {
      if (pbVar35 == (byte *)0x0) {
LAB_033fa2f0:
        lVar28 = lStack0000000000000088;
        pbVar35 = *(byte **)(in_stack_00000148 + 6);
        *pbVar35 = bVar7;
        bVar9 = FUN_033f8000(lStack0000000000000088,uStack0000000000000070);
        pbVar35[1] = bVar9;
        if (1 < uVar24 && uVar20 == 0) {
          bVar9 = FUN_033f8094(lVar28,uStack0000000000000070,uVar15);
          pbVar35[2] = bVar9;
        }
        if (uVar24 < 3) {
LAB_033fa37c:
          bVar5 = false;
        }
        else {
          if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0)
              == 0) {
            thunk_FUN_01ee6d7c();
          }
          bVar9 = FUN_033f60b8(uStack0000000000000070);
          pbVar35[3] = bVar9;
          if (uVar24 < 4) goto LAB_033fa37c;
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
            uVar18 = uStack0000000000000070 >> 8 & 0xff;
            if (0x32 < uVar18) goto LAB_033fa89c;
            if ((uStack0000000000000070 & 0xffff) < 0x309d) {
              bVar5 = (uStack0000000000000070 & 0xffff) < 0x3099;
            }
            else if (uVar18 < 0x31) {
              bVar5 = (uStack0000000000000070 & 0xffff) != 0x30fb;
            }
            else {
              bVar5 = (uStack0000000000000070 - 0x32d0 & 0xffff) < 0x2f;
            }
          }
        }
        if (1 < bVar7) {
          in_stack_00000148[10] = uStack0000000000000070;
        }
      }
      else {
        bVar5 = false;
        lVar28 = lStack0000000000000088;
      }
      iVar17 = 1;
    }
    if (uVar16 == 0) {
      lVar23 = FUN_033f823c(lVar28,param_5,iVar32,iVar29);
      if (pbVar31 == (byte *)0x0) {
        if (lVar23 != 0) {
          if (*(long *)(lVar23 + 0x18) == 0) goto LAB_033fae50;
          lVar28 = *(long *)(lVar23 + 0x28);
          iVar34 = iVar32 + *(int *)(*(long *)(lVar23 + 0x18) + 0x18);
          if (lVar28 == 0) {
            if (in_stack_000000a0 == 0) {
              in_stack_000000a0 = param_5;
              thunk_FUN_01f51358(&stack0x000000a0,param_5);
              _iStack00000000000000a8 = CONCAT44(iStack0000000000000080,iStack00000000000000a8);
              if (*(long *)(lVar23 + 0x18) == 0) goto LAB_033fae50;
              _iStack00000000000000b0 = CONCAT44(iVar33,iVar29);
              _iStack00000000000000a8 =
                   CONCAT44(iStack0000000000000080,
                            iVar32 + *(int *)(*(long *)(lVar23 + 0x18) + 0x18));
              param_5 = *(long *)(lVar23 + 0x20);
              if (param_5 == 0) goto LAB_033fae50;
              iVar29 = *(int *)(param_5 + 0x10);
              iVar33 = 0;
              _uStack0000000000000078 = (ulong)uVar15 << 0x20;
              iStack0000000000000080 = 0;
              iVar32 = 0;
              goto LAB_033f9bcc;
            }
            bVar4 = false;
            pbVar31 = (byte *)0x0;
          }
          else {
            pbVar31 = *(byte **)(in_stack_00000148 + 8);
            uVar22 = 0;
            while ((long)uVar22 < (long)(int)*(uint *)(lVar28 + 0x18)) {
              if (*(uint *)(lVar28 + 0x18) <= uVar22) {
LAB_033fae54:
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              pbVar31[uVar22] = *(byte *)(lVar28 + uVar22 + 0x20);
              lVar28 = *(long *)(lVar23 + 0x28);
              uVar22 = uVar22 + 1;
              if (lVar28 == 0) goto LAB_033fae50;
            }
            uStack0000000000000068 = 0xffffffff;
            bVar4 = false;
            pbStack0000000000000038 = pbVar31;
          }
          goto LAB_033fa4c8;
        }
        goto LAB_033fa3b0;
      }
    }
    else if (pbVar31 == (byte *)0x0) {
LAB_033fa3b0:
      pbVar31 = *(byte **)(in_stack_00000148 + 8);
      *pbVar31 = bVar8;
      bVar7 = FUN_033f8000(lVar28,uVar14);
      pbVar31[1] = bVar7;
      if (1 < uVar24 && uVar20 == 0) {
        bVar7 = FUN_033f8094(lVar28,uVar14,uVar16);
        pbVar31[2] = bVar7;
      }
      puVar3 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
      if (uVar24 < 3) {
LAB_033fa4a4:
        bVar4 = false;
      }
      else {
        if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c();
        }
        bVar7 = FUN_033f60b8(uVar14);
        pbVar31[3] = bVar7;
        if (uVar24 < 4) goto LAB_033fa4a4;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if ((uVar14 & 0xffff) < 0x3041) {
LAB_033fa8a8:
          bVar4 = false;
        }
        else if ((uVar14 + 0x9a & 0xffff) < 0x38) {
          bVar4 = true;
        }
        else {
          uVar21 = uVar14 >> 8 & 0xff;
          if (0x32 < uVar21) goto LAB_033fa8a8;
          if ((uVar14 & 0xffff) < 0x309d) {
            bVar4 = (uVar14 & 0xffff) < 0x3099;
          }
          else if (uVar21 < 0x31) {
            bVar4 = (uVar14 & 0xffff) != 0x30fb;
          }
          else {
            bVar4 = (uVar14 - 0x32d0 & 0xffff) < 0x2f;
          }
        }
      }
      if (1 < bVar8) {
        uStack0000000000000068 = uVar14;
      }
      iVar34 = iVar32 + 1;
      goto LAB_033fa4c8;
    }
    bVar4 = false;
    iVar34 = iVar32 + 1;
LAB_033fa4c8:
    iVar13 = iVar17 + iVar13;
    iVar32 = iVar34;
    iVar17 = iVar13;
    lVar28 = lStack0000000000000088;
    if ((uVar1 >> 1 & 1) == 0) {
      for (; iVar17 < iVar30; iVar17 = iVar17 + 1) {
        uVar10 = FUN_03409f80(param_2,iVar17,0);
        cVar6 = FUN_033f7f6c(lVar28,uVar10);
        iVar13 = iVar17;
        if (cVar6 != '\x01') break;
        bVar7 = pbVar35[2];
        if (bVar7 == 0) {
          bVar7 = 2;
          pbVar35[2] = 2;
        }
        uVar10 = FUN_03409f80(param_2,iVar17,0);
        lVar28 = lStack0000000000000088;
        cVar6 = FUN_033f8094(lStack0000000000000088,uVar10,0);
        pbVar35[2] = cVar6 + bVar7;
        iVar13 = iVar30;
      }
      lVar28 = lStack0000000000000088;
      if (iVar34 < iVar29) {
        do {
          uVar10 = FUN_03409f80(param_5,iVar34,0);
          cVar6 = FUN_033f7f6c(lVar28,uVar10);
          iVar32 = iVar34;
          if (cVar6 != '\x01') break;
          bVar7 = pbVar31[2];
          pbVar27 = (byte *)0x1;
          if (bVar7 == 0) {
            bVar7 = 2;
            pbVar31[2] = 2;
            pbVar27 = pbVar31;
          }
          uVar10 = FUN_03409f80(pbVar27,param_5,iVar34,0);
          lVar28 = lStack0000000000000088;
          cVar6 = FUN_033f8094(lStack0000000000000088,uVar10,0);
          iVar34 = iVar34 + 1;
          pbVar31[2] = cVar6 + bVar7;
          iVar32 = iVar29;
        } while (iVar29 != iVar34);
      }
    }
    puVar3 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
    iVar17 = (uint)*pbVar35 - (uint)*pbVar31;
    if (iVar17 == 0) {
      iVar17 = (uint)pbVar35[1] - (uint)pbVar31[1];
    }
    if (iVar17 != 0) {
      return iVar17;
    }
    uVar21 = 1;
    if (uVar24 != 1) {
      if (((uVar1 >> 1 & 1) == 0) && (iVar17 = (uint)pbVar35[2] - (uint)pbVar31[2], iVar17 != 0)) {
        if ((in_stack_00000140 & 1) != 0) {
          return -1;
        }
        iStack0000000000000074 = iVar17;
        uVar21 = 1;
        if (*(char *)(lStack0000000000000088 + 0x5c) != '\0') {
          uVar21 = 2;
        }
        goto LAB_033f9bcc;
      }
      uVar21 = 2;
      if (uVar24 == 2) goto LAB_033f9bcc;
      iVar17 = (uint)pbVar35[3] - (uint)pbVar31[3];
      if (iVar17 == 0) {
        uVar21 = 3;
        if (uVar24 == 3) goto LAB_033f9bcc;
        if (bVar5 != bVar4) {
          if ((in_stack_00000140 & 1) != 0) {
            return -1;
          }
          iStack0000000000000074 = -1;
          if (bVar5 != false) {
            iStack0000000000000074 = 1;
          }
          uVar21 = 3;
          goto LAB_033f9bcc;
        }
        uVar21 = uVar24;
        if (bVar5 == false) goto LAB_033f9bcc;
        if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar21 = FUN_033f651c(uStack0000000000000070);
        uVar18 = FUN_033f651c(uVar14);
        iVar17 = 1;
        if ((uVar21 & 1) != 0) {
          iVar17 = -1;
        }
        if (((uVar21 ^ uVar18) & 1) == 0) {
          iVar17 = 0;
        }
        if (iVar17 == 0) {
          if (*(int *)(*(long *)
                        Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                      + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          iVar17 = 4;
          if (uVar15 == 3) {
            iVar17 = 5;
          }
          iVar34 = 3;
          if (uVar20 == 0 && uVar15 != 0) {
            iVar34 = iVar17;
          }
          iVar25 = -5;
          if (uVar16 != 3) {
            iVar25 = -4;
          }
          iVar17 = -3;
          if (uVar20 == 0 && uVar16 != 0) {
            iVar17 = iVar25;
          }
          iVar17 = iVar17 + iVar34;
        }
        if (iVar17 == 0) {
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          bVar5 = (uStack0000000000000070 - 0x3041 & 0xffff) < 0x54;
          iVar17 = -1;
          if (bVar5) {
            iVar17 = 1;
          }
          if (bVar5 == (uVar14 - 0x3041 & 0xffff) < 0x54) {
            if (*(int *)(*(long *)
                          Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                        + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar15 = FUN_033f81c8(uStack0000000000000070 & 0xffff,uVar1);
            uVar14 = FUN_033f81c8(uVar14 & 0xffff,uVar1);
            iVar17 = 1;
            if ((uVar15 & 1) != 0) {
              iVar17 = -1;
            }
            uVar21 = uVar24;
            if ((uVar15 & 1) == (uVar14 & 1)) goto LAB_033f9bcc;
          }
        }
        uVar21 = 3;
      }
      else {
        uVar21 = 2;
      }
      iStack0000000000000074 = iVar17;
      if ((in_stack_00000140 & 1) != 0) {
        return -1;
      }
    }
    goto LAB_033f9bcc;
  }
  puVar3 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
  if (((uVar1 >> 0x1d & 1) == 0) && (uVar24 == 5)) {
    iStack0000000000000058 = iVar32 - iStack0000000000000080;
    if (in_stack_000000a0 != 0) {
      iStack0000000000000058 = iStack00000000000000a8 - iStack00000000000000ac;
    }
    uVar15 = FUN_033f8000(lStack0000000000000088,uVar14);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar3);
    }
    iVar17 = FUN_033f60b8(uVar14);
    iStack0000000000000060 = (uVar15 & 0xff) << (ulong)(iVar17 + 8U & 0x1f);
  }
  iVar32 = iVar32 + 1;
  uStack0000000000000068 = uVar14;
LAB_033fa1ec:
  iVar2 = iStack000000000000006c;
  iVar25 = iStack0000000000000060;
  iVar34 = iStack000000000000005c;
  iVar17 = iStack0000000000000058;
  iStack0000000000000058 = iVar17;
  iStack000000000000005c = iVar34;
  iStack0000000000000060 = iVar25;
  iStack000000000000006c = iVar2;
  if (uVar24 == 5) {
    iStack0000000000000058 = -1;
    bVar5 = iStack000000000000005c != iStack0000000000000060;
    iStack000000000000005c = 0;
    iStack0000000000000060 = 0;
    iStack000000000000006c = -1;
    if (bVar5) {
      iStack0000000000000058 = iVar17;
      iStack000000000000005c = iVar34;
      iStack0000000000000060 = iVar25;
      iStack000000000000006c = iVar2;
      uVar21 = 4;
    }
  }
  goto LAB_033f9bcc;
LAB_033facd8:
  if ((uVar24 == 1) && (iStack0000000000000074 != 0)) {
    if (iVar13 < iVar30) {
      iVar33 = iVar13;
      if (param_2 == 0) goto LAB_033fae50;
      do {
        uVar10 = FUN_03409f80(param_2,iVar33,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar3);
        }
        uVar22 = FUN_033f6274(uVar10);
        iVar13 = iVar33;
      } while (((uVar22 & 1) != 0) && (iVar33 = iVar33 + 1, iVar13 = iVar30, iVar30 != iVar33));
    }
    if (iVar32 < iVar29) {
      iVar33 = iVar32;
      if (param_5 == 0) {
LAB_033fae50:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        uVar10 = FUN_03409f80(param_5,iVar33,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar3);
        }
        uVar22 = FUN_033f6274(uVar10);
        iVar32 = iVar33;
      } while (((uVar22 & 1) != 0) && (iVar33 = iVar33 + 1, iVar32 = iVar29, iVar29 != iVar33));
    }
  }
  if (iStack0000000000000074 != 0) goto LAB_033fadd4;
  goto LAB_033fad8c;
  while( true ) {
    iStack0000000000000074 = 0;
    _uStack0000000000000078 = 0;
    if (iVar30 <= iVar13) break;
LAB_033fabb8:
    uVar10 = FUN_03409f80(param_2,iVar13,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar3);
    }
    uVar22 = FUN_033f6274(uVar10);
    if ((uVar22 & 1) == 0) goto LAB_033facd8;
    if (param_5 == 0) goto LAB_033fae50;
    uVar10 = FUN_03409f80(param_5,iVar32,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar3);
    }
    uVar22 = FUN_033f6274(uVar10);
    if ((uVar22 & 1) == 0) goto LAB_033facd8;
    uVar10 = FUN_03409f80(param_2,iVar13,0);
    lVar28 = lStack0000000000000088;
    uVar19 = FUN_033f86cc(lStack0000000000000088,uVar10,uVar1);
    uVar20 = FUN_033f8094(lVar28,uVar19,uStack000000000000007c);
    uVar10 = FUN_03409f80(param_5,iVar32,0);
    uVar19 = FUN_033f86cc(lVar28,uVar10,uVar1);
    uVar21 = FUN_033f8094(lVar28,uVar19,_uStack0000000000000078 & 0xffffffff);
    iStack0000000000000074 = (uVar20 & 0xff) - (uVar21 & 0xff);
    if (iStack0000000000000074 != 0) goto LAB_033facd8;
    iVar32 = iVar32 + 1;
    iVar13 = iVar13 + 1;
    if (iVar29 <= iVar32) break;
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
        if (iVar32 == iVar29) {
          *param_8 = 1;
        }
        if (iVar13 == iVar30) {
          iStack0000000000000074 = 0;
          *puStack0000000000000028 = 1;
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
  if (iVar13 == iVar30) {
    if (iVar32 != iVar29) {
      iStack0000000000000074 = -1;
    }
  }
  else {
    iStack0000000000000074 = 1;
  }
  return iStack0000000000000074;
}


