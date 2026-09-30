/*
FUNCTION_NAME: FUN_033f9a44
ENTRY_POINT: 033f9a44
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_14;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_7
*/


/* WARNING: Type propagation algorithm not settling */

int FUN_033f9a44(long param_1,long param_2,int param_3,int param_4,long param_5,int param_6,
                int param_7,undefined1 *param_8,undefined1 *param_9,byte param_10,byte param_11,
                uint *param_12)

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
  byte *pbVar26;
  long lVar27;
  int iVar28;
  int iVar29;
  byte *pbVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  byte *pbVar34;
  byte *local_f8;
  int local_d8;
  int local_d4;
  int local_d0;
  uint local_c8;
  int local_c4;
  uint local_c0;
  int local_bc;
  undefined8 local_b8;
  int local_b0;
  int local_ac;
  int local_a0;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if ((DAT_04832646 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                      );
    DAT_04832646 = 1;
  }
  uVar1 = *param_12;
  iVar29 = param_4 + param_3;
  iVar28 = param_7 + param_6;
  *param_8 = 0;
  *param_9 = 0;
  iVar32 = param_6;
  local_a0 = param_3;
  if ((param_10 & 1) != 0) {
    if (param_3 < iVar29) {
      iVar31 = param_3;
      if (param_2 == 0) goto LAB_033fae50;
      do {
        uVar10 = FUN_03409f80(param_2,iVar31,0);
        iVar13 = FUN_033f87b0(param_1,uVar10);
        local_a0 = iVar31;
        if (iVar13 == 0) break;
        param_4 = param_4 + -1;
        local_a0 = iVar29;
        iVar31 = iVar31 + 1;
      } while (param_4 != 0);
    }
    if (param_6 < iVar28) {
      iVar31 = param_6;
      if (param_5 == 0) goto LAB_033fae50;
      do {
        uVar10 = FUN_03409f80(param_5,iVar31,0);
        iVar13 = FUN_033f87b0(param_1,uVar10);
        iVar32 = iVar31;
        if (iVar13 == 0) break;
        param_7 = param_7 + -1;
        iVar31 = iVar31 + 1;
        iVar32 = iVar28;
      } while (param_7 != 0);
    }
  }
  local_d8 = -1;
  uVar20 = uVar1 >> 1 & 1;
  local_f8 = (byte *)0x0;
  local_b8 = 0;
  local_d4 = 0;
  local_d0 = 0;
  local_bc = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_88 = 0;
  local_80 = 0;
  local_90 = 0;
  local_c8 = 0xffffffff;
  local_c4 = -1;
  local_b0 = param_6;
  local_ac = param_3;
  iVar31 = iVar32;
  iVar13 = local_a0;
  uVar21 = 5;
LAB_033f9bcc:
  uVar24 = uVar21;
  uVar21 = uVar24;
  if (iVar13 < iVar29) {
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
  iVar17 = iVar31;
  if (iVar31 < iVar28) {
    if (param_5 == 0) goto LAB_033fae50;
    bVar5 = true;
    do {
      uVar10 = FUN_03409f80(param_5,iVar31,0);
      if (*(int *)(*(long *)
                    Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)
                            Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                          );
      }
      uVar22 = FUN_033f8ae0(uVar10,uVar1);
      if ((uVar22 & 1) == 0) {
        if (iVar29 <= iVar13) goto LAB_033f9d68;
        if (!bVar5) goto LAB_033f9ca0;
        iVar25 = iVar32;
        iVar17 = iVar31;
        iVar33 = iVar13;
        if ((iVar13 <= local_a0) || (iVar31 <= iVar32)) goto joined_r0x033f9da4;
        iVar33 = iVar31;
        iVar17 = iVar13;
        if (iVar28 <= iVar31) goto LAB_033f9db8;
        if (param_2 == 0) goto LAB_033fae50;
        iVar25 = 0;
        goto System_Boolean__System_IConvertible_ToSByte;
      }
      iVar31 = iVar31 + 1;
      bVar5 = iVar31 < iVar28;
      iVar17 = iVar28;
    } while (iVar28 != iVar31);
  }
  iVar31 = iVar17;
  if (iVar13 < iVar29) {
LAB_033f9ca0:
    lVar23 = local_90;
    if (local_90 != 0) {
      iVar31 = (int)local_88;
      iVar28 = (int)local_80;
      iVar32 = local_80._4_4_;
      local_b0 = local_88._4_4_;
      local_90 = 0;
      thunk_FUN_01f51358(&local_90,0);
      param_5 = lVar23;
      goto LAB_033f9bcc;
    }
  }
  else {
LAB_033f9d68:
    lVar23 = local_78;
    if (local_78 != 0) {
      iVar13 = (int)local_70;
      local_78 = 0;
      local_ac = local_70._4_4_;
      iVar29 = (int)local_68;
      local_a0 = local_68._4_4_;
      thunk_FUN_01f51358(&local_78,0);
      param_2 = lVar23;
      goto LAB_033f9bcc;
    }
  }
  puVar3 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
  if ((uVar24 < 3) || (local_bc == 0 || uVar20 != 0)) goto LAB_033facd8;
  if ((iVar28 <= iVar31) || (iVar29 <= iVar13)) goto LAB_033fadd4;
  if (param_2 != 0) goto LAB_033fabb8;
  goto LAB_033fae50;
  while ((iVar25 = iVar25 + 1, iVar33 + 1 < iVar28 && (iVar17 + 1 < iVar29))) {
System_Boolean__System_IConvertible_ToSByte:
    iVar17 = iVar13 + iVar25;
    iVar33 = iVar31 + iVar25;
    sVar11 = FUN_03409f80(param_2,iVar17,0);
    sVar12 = FUN_03409f80(param_5,iVar33,0);
    if (sVar11 != sVar12) goto LAB_033f9db8;
  }
  iVar33 = iVar31 + iVar25;
  iVar17 = iVar13 + iVar25;
LAB_033f9db8:
  iVar13 = iVar17;
  iVar31 = iVar33;
  if ((iVar31 != iVar28) && (iVar25 = iVar13, iVar13 != iVar29)) {
    do {
      iVar25 = iVar25 + -1;
      iVar2 = iVar31;
      if (iVar25 <= local_a0) break;
      if (param_2 == 0) goto LAB_033fae50;
      uVar10 = FUN_03409f80(param_2,iVar25,0);
      cVar6 = FUN_033f7f6c(param_1,uVar10);
    } while (cVar6 == '\x01');
    do {
      iVar2 = iVar2 + -1;
      if (iVar2 <= iVar32) break;
      uVar10 = FUN_03409f80(param_5,iVar2,0);
      cVar6 = FUN_033f7f6c(param_1,uVar10);
    } while (cVar6 == '\x01');
    iVar17 = iVar2;
    iVar33 = iVar25;
    if (local_a0 < iVar25) {
      if (param_2 == 0) goto LAB_033fae50;
      do {
        uVar10 = FUN_03409f80(param_2,iVar25,0);
        uVar22 = FUN_033f8b5c(param_1,uVar10);
        iVar33 = iVar25;
        if ((uVar22 & 1) != 0) break;
        iVar25 = iVar25 + -1;
        iVar33 = local_a0;
      } while (local_a0 < iVar25);
    }
    do {
      iVar25 = iVar31;
      local_a0 = iVar13;
      if (iVar2 <= iVar32) goto joined_r0x033f9da4;
      uVar10 = FUN_03409f80(param_5,iVar2,0);
      uVar22 = FUN_033f8b5c(param_1,uVar10);
      iVar17 = iVar2;
      if ((uVar22 & 1) != 0) goto joined_r0x033f9da4;
      iVar2 = iVar2 + -1;
      iVar17 = iVar32;
    } while( true );
  }
  goto LAB_033f9bcc;
joined_r0x033f9da4:
  iVar13 = iVar33;
  iVar31 = iVar17;
  iVar32 = iVar25;
  if (param_2 == 0) goto LAB_033fae50;
  uVar10 = FUN_03409f80(param_2,iVar13,0);
  local_c0 = FUN_033f86cc(param_1,uVar10,uVar1);
  uVar10 = FUN_03409f80(param_5,iVar31,0);
  uVar14 = FUN_033f86cc(param_1,uVar10,uVar1);
  uVar15 = FUN_033f87b0(param_1,local_c0);
  local_b8 = CONCAT44(uVar15,(undefined4)local_b8);
  if (uVar15 == 0) {
LAB_033f9f84:
    pbVar34 = (byte *)0x0;
  }
  else {
    if (-1 < (int)param_12[10]) {
      local_c0 = FUN_033f88d0(param_1,param_12[10],uVar15,uVar1);
      goto LAB_033f9f84;
    }
    pbVar34 = *(byte **)(param_12 + 0xc);
    if (pbVar34 == (byte *)0x0) {
      iVar13 = iVar13 + 1;
      goto LAB_033f9bcc;
    }
  }
  uVar16 = FUN_033f87b0(param_1,uVar14);
  local_b8 = CONCAT44(uVar15,uVar16);
  if (uVar16 == 0) {
System_Convert__ToInt64:
    pbVar30 = (byte *)0x0;
  }
  else {
    if (-1 < (int)local_c8) {
      uVar14 = FUN_033f88d0(param_1,local_c8,uVar16,uVar1);
      goto System_Convert__ToInt64;
    }
    pbVar30 = local_f8;
    if (local_f8 == (byte *)0x0) {
      local_f8 = (byte *)0x0;
      iVar31 = iVar31 + 1;
      goto LAB_033f9bcc;
    }
  }
  bVar7 = FUN_033f7f6c(param_1,local_c0);
  bVar8 = FUN_033f7f6c(param_1,uVar14);
  if (bVar7 == 6) {
    if (((uVar1 >> 0x1d & 1) == 0) && (uVar24 == 5)) {
      local_c4 = iVar13 - local_ac;
      if (local_78 != 0) {
        local_c4 = (int)local_70 - local_70._4_4_;
      }
      uVar15 = FUN_033f8000(param_1,local_c0);
      if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0) ==
          0) {
        thunk_FUN_01ee6d7c(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__);
      }
      iVar17 = FUN_033f60b8(local_c0);
      local_d4 = (uVar15 & 0xff) << (ulong)(iVar17 + 8U & 0x1f);
    }
    iVar13 = iVar13 + 1;
    param_12[10] = local_c0;
    if (bVar8 != 6) goto LAB_033fa1ec;
  }
  else if (bVar8 != 6) {
    if (uVar15 == 0) {
      lVar23 = FUN_033f823c(param_1,param_2,iVar13,iVar29);
      if (pbVar34 == (byte *)0x0) {
        if (lVar23 == 0) goto LAB_033fa2f0;
        if (*(long *)(lVar23 + 0x18) == 0) goto LAB_033fae50;
        lVar27 = *(long *)(lVar23 + 0x28);
        iVar17 = *(int *)(*(long *)(lVar23 + 0x18) + 0x18);
        if (lVar27 == 0) {
          if (local_78 == 0) {
            local_78 = param_2;
            thunk_FUN_01f51358(&local_78,param_2);
            local_70 = CONCAT44(local_ac,(int)local_70);
            if (*(long *)(lVar23 + 0x18) == 0) goto LAB_033fae50;
            local_70 = CONCAT44(local_ac,iVar13 + *(int *)(*(long *)(lVar23 + 0x18) + 0x18));
            local_68 = CONCAT44(local_a0,iVar29);
            param_2 = *(long *)(lVar23 + 0x20);
            if (param_2 == 0) goto LAB_033fae50;
            iVar29 = *(int *)(param_2 + 0x10);
            local_a0 = 0;
            local_b8 = (ulong)uVar16;
            local_ac = 0;
            iVar13 = 0;
            goto LAB_033f9bcc;
          }
          bVar5 = false;
          pbVar34 = (byte *)0x0;
        }
        else {
          pbVar34 = *(byte **)(param_12 + 6);
          uVar22 = 0;
          while ((long)uVar22 < (long)(int)*(uint *)(lVar27 + 0x18)) {
            if (*(uint *)(lVar27 + 0x18) <= uVar22) goto LAB_033fae54;
            pbVar34[uVar22] = *(byte *)(lVar27 + uVar22 + 0x20);
            lVar27 = *(long *)(lVar23 + 0x28);
            uVar22 = uVar22 + 1;
            if (lVar27 == 0) goto LAB_033fae50;
          }
          bVar5 = false;
          param_12[10] = 0xffffffff;
          *(byte **)(param_12 + 0xc) = pbVar34;
        }
      }
      else {
        bVar5 = false;
        iVar17 = 1;
      }
    }
    else {
      if (pbVar34 == (byte *)0x0) {
LAB_033fa2f0:
        pbVar34 = *(byte **)(param_12 + 6);
        *pbVar34 = bVar7;
        bVar9 = FUN_033f8000(param_1,local_c0);
        pbVar34[1] = bVar9;
        if (1 < uVar24 && uVar20 == 0) {
          bVar9 = FUN_033f8094(param_1,local_c0,uVar15);
          pbVar34[2] = bVar9;
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
          bVar9 = FUN_033f60b8(local_c0);
          pbVar34[3] = bVar9;
          if (uVar24 < 4) goto LAB_033fa37c;
          if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0)
              == 0) {
            thunk_FUN_01ee6d7c();
          }
          if ((local_c0 & 0xffff) < 0x3041) {
LAB_033fa89c:
            bVar5 = false;
          }
          else if ((local_c0 + 0x9a & 0xffff) < 0x38) {
            bVar5 = true;
          }
          else {
            uVar18 = local_c0 >> 8 & 0xff;
            if (0x32 < uVar18) goto LAB_033fa89c;
            if ((local_c0 & 0xffff) < 0x309d) {
              bVar5 = (local_c0 & 0xffff) < 0x3099;
            }
            else if (uVar18 < 0x31) {
              bVar5 = (local_c0 & 0xffff) != 0x30fb;
            }
            else {
              bVar5 = (local_c0 - 0x32d0 & 0xffff) < 0x2f;
            }
          }
        }
        if (1 < bVar7) {
          param_12[10] = local_c0;
        }
      }
      else {
        bVar5 = false;
      }
      iVar17 = 1;
    }
    if (uVar16 == 0) {
      lVar23 = FUN_033f823c(param_1,param_5,iVar31,iVar28);
      if (pbVar30 == (byte *)0x0) {
        if (lVar23 != 0) {
          if (*(long *)(lVar23 + 0x18) == 0) goto LAB_033fae50;
          lVar27 = *(long *)(lVar23 + 0x28);
          iVar33 = iVar31 + *(int *)(*(long *)(lVar23 + 0x18) + 0x18);
          if (lVar27 == 0) {
            if (local_90 == 0) {
              local_90 = param_5;
              thunk_FUN_01f51358(&local_90,param_5);
              local_88 = CONCAT44(local_b0,(int)local_88);
              if (*(long *)(lVar23 + 0x18) == 0) goto LAB_033fae50;
              local_80 = CONCAT44(iVar32,iVar28);
              local_88 = CONCAT44(local_b0,iVar31 + *(int *)(*(long *)(lVar23 + 0x18) + 0x18));
              param_5 = *(long *)(lVar23 + 0x20);
              if (param_5 == 0) goto LAB_033fae50;
              iVar28 = *(int *)(param_5 + 0x10);
              iVar32 = 0;
              local_b8 = (ulong)uVar15 << 0x20;
              local_b0 = 0;
              iVar31 = 0;
              goto LAB_033f9bcc;
            }
            bVar4 = false;
            pbVar30 = (byte *)0x0;
          }
          else {
            pbVar30 = *(byte **)(param_12 + 8);
            uVar22 = 0;
            while ((long)uVar22 < (long)(int)*(uint *)(lVar27 + 0x18)) {
              if (*(uint *)(lVar27 + 0x18) <= uVar22) {
LAB_033fae54:
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              pbVar30[uVar22] = *(byte *)(lVar27 + uVar22 + 0x20);
              lVar27 = *(long *)(lVar23 + 0x28);
              uVar22 = uVar22 + 1;
              if (lVar27 == 0) goto LAB_033fae50;
            }
            local_c8 = 0xffffffff;
            bVar4 = false;
            local_f8 = pbVar30;
          }
          goto LAB_033fa4c8;
        }
        goto LAB_033fa3b0;
      }
    }
    else if (pbVar30 == (byte *)0x0) {
LAB_033fa3b0:
      pbVar30 = *(byte **)(param_12 + 8);
      *pbVar30 = bVar8;
      bVar7 = FUN_033f8000(param_1,uVar14);
      pbVar30[1] = bVar7;
      if (1 < uVar24 && uVar20 == 0) {
        bVar7 = FUN_033f8094(param_1,uVar14,uVar16);
        pbVar30[2] = bVar7;
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
        pbVar30[3] = bVar7;
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
        local_c8 = uVar14;
      }
      iVar33 = iVar31 + 1;
      goto LAB_033fa4c8;
    }
    bVar4 = false;
    iVar33 = iVar31 + 1;
LAB_033fa4c8:
    iVar13 = iVar17 + iVar13;
    iVar31 = iVar33;
    iVar17 = iVar13;
    if ((uVar1 >> 1 & 1) == 0) {
      for (; iVar17 < iVar29; iVar17 = iVar17 + 1) {
        uVar10 = FUN_03409f80(param_2,iVar17,0);
        cVar6 = FUN_033f7f6c(param_1,uVar10);
        iVar13 = iVar17;
        if (cVar6 != '\x01') break;
        bVar7 = pbVar34[2];
        if (bVar7 == 0) {
          bVar7 = 2;
          pbVar34[2] = 2;
        }
        uVar10 = FUN_03409f80(param_2,iVar17,0);
        cVar6 = FUN_033f8094(param_1,uVar10,0);
        pbVar34[2] = cVar6 + bVar7;
        iVar13 = iVar29;
      }
      if (iVar33 < iVar28) {
        do {
          uVar10 = FUN_03409f80(param_5,iVar33,0);
          cVar6 = FUN_033f7f6c(param_1,uVar10);
          iVar31 = iVar33;
          if (cVar6 != '\x01') break;
          bVar7 = pbVar30[2];
          pbVar26 = (byte *)0x1;
          if (bVar7 == 0) {
            bVar7 = 2;
            pbVar30[2] = 2;
            pbVar26 = pbVar30;
          }
          uVar10 = FUN_03409f80(pbVar26,param_5,iVar33,0);
          cVar6 = FUN_033f8094(param_1,uVar10,0);
          iVar33 = iVar33 + 1;
          pbVar30[2] = cVar6 + bVar7;
          iVar31 = iVar28;
        } while (iVar28 != iVar33);
      }
    }
    puVar3 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
    iVar17 = (uint)*pbVar34 - (uint)*pbVar30;
    if (iVar17 == 0) {
      iVar17 = (uint)pbVar34[1] - (uint)pbVar30[1];
    }
    if (iVar17 != 0) {
      return iVar17;
    }
    uVar21 = 1;
    if (uVar24 != 1) {
      if (((uVar1 >> 1 & 1) == 0) && (iVar17 = (uint)pbVar34[2] - (uint)pbVar30[2], iVar17 != 0)) {
        if ((param_11 & 1) != 0) {
          return -1;
        }
        local_bc = iVar17;
        uVar21 = 1;
        if (*(char *)(param_1 + 0x5c) != '\0') {
          uVar21 = 2;
        }
        goto LAB_033f9bcc;
      }
      uVar21 = 2;
      if (uVar24 == 2) goto LAB_033f9bcc;
      iVar17 = (uint)pbVar34[3] - (uint)pbVar30[3];
      if (iVar17 == 0) {
        uVar21 = 3;
        if (uVar24 == 3) goto LAB_033f9bcc;
        if (bVar5 != bVar4) {
          if ((param_11 & 1) != 0) {
            return -1;
          }
          local_bc = -1;
          if (bVar5 != false) {
            local_bc = 1;
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
        uVar21 = FUN_033f651c(local_c0);
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
          iVar33 = 3;
          if (uVar20 == 0 && uVar15 != 0) {
            iVar33 = iVar17;
          }
          iVar25 = -5;
          if (uVar16 != 3) {
            iVar25 = -4;
          }
          iVar17 = -3;
          if (uVar20 == 0 && uVar16 != 0) {
            iVar17 = iVar25;
          }
          iVar17 = iVar17 + iVar33;
        }
        if (iVar17 == 0) {
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          bVar5 = (local_c0 - 0x3041 & 0xffff) < 0x54;
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
            uVar15 = FUN_033f81c8(local_c0 & 0xffff,uVar1);
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
      local_bc = iVar17;
      if ((param_11 & 1) != 0) {
        return -1;
      }
    }
    goto LAB_033f9bcc;
  }
  puVar3 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
  if (((uVar1 >> 0x1d & 1) == 0) && (uVar24 == 5)) {
    local_d8 = iVar31 - local_b0;
    if (local_90 != 0) {
      local_d8 = (int)local_88 - local_88._4_4_;
    }
    uVar15 = FUN_033f8000(param_1,uVar14);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar3);
    }
    iVar17 = FUN_033f60b8(uVar14);
    local_d0 = (uVar15 & 0xff) << (ulong)(iVar17 + 8U & 0x1f);
  }
  iVar31 = iVar31 + 1;
  local_c8 = uVar14;
LAB_033fa1ec:
  iVar2 = local_c4;
  iVar25 = local_d0;
  iVar33 = local_d4;
  iVar17 = local_d8;
  local_d8 = iVar17;
  local_d4 = iVar33;
  local_d0 = iVar25;
  local_c4 = iVar2;
  if (uVar24 == 5) {
    local_d8 = -1;
    bVar5 = local_d4 != local_d0;
    local_d4 = 0;
    local_d0 = 0;
    local_c4 = -1;
    if (bVar5) {
      local_d8 = iVar17;
      local_d4 = iVar33;
      local_d0 = iVar25;
      local_c4 = iVar2;
      uVar21 = 4;
    }
  }
  goto LAB_033f9bcc;
LAB_033facd8:
  if ((uVar24 == 1) && (local_bc != 0)) {
    if (iVar13 < iVar29) {
      iVar32 = iVar13;
      if (param_2 == 0) goto LAB_033fae50;
      do {
        uVar10 = FUN_03409f80(param_2,iVar32,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar3);
        }
        uVar22 = FUN_033f6274(uVar10);
        iVar13 = iVar32;
      } while (((uVar22 & 1) != 0) && (iVar32 = iVar32 + 1, iVar13 = iVar29, iVar29 != iVar32));
    }
    if (iVar31 < iVar28) {
      iVar32 = iVar31;
      if (param_5 == 0) {
LAB_033fae50:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        uVar10 = FUN_03409f80(param_5,iVar32,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar3);
        }
        uVar22 = FUN_033f6274(uVar10);
        iVar31 = iVar32;
      } while (((uVar22 & 1) != 0) && (iVar32 = iVar32 + 1, iVar31 = iVar28, iVar28 != iVar32));
    }
  }
  if (local_bc != 0) goto LAB_033fadd4;
  goto LAB_033fad8c;
  while( true ) {
    local_bc = 0;
    local_b8 = 0;
    if (iVar29 <= iVar13) break;
LAB_033fabb8:
    uVar10 = FUN_03409f80(param_2,iVar13,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar3);
    }
    uVar22 = FUN_033f6274(uVar10);
    if ((uVar22 & 1) == 0) goto LAB_033facd8;
    if (param_5 == 0) goto LAB_033fae50;
    uVar10 = FUN_03409f80(param_5,iVar31,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar3);
    }
    uVar22 = FUN_033f6274(uVar10);
    if ((uVar22 & 1) == 0) goto LAB_033facd8;
    uVar10 = FUN_03409f80(param_2,iVar13,0);
    uVar19 = FUN_033f86cc(param_1,uVar10,uVar1);
    uVar20 = FUN_033f8094(param_1,uVar19,local_b8._4_4_);
    uVar10 = FUN_03409f80(param_5,iVar31,0);
    uVar19 = FUN_033f86cc(param_1,uVar10,uVar1);
    uVar21 = FUN_033f8094(param_1,uVar19,local_b8 & 0xffffffff);
    local_bc = (uVar20 & 0xff) - (uVar21 & 0xff);
    if (local_bc != 0) goto LAB_033facd8;
    iVar31 = iVar31 + 1;
    iVar13 = iVar13 + 1;
    if (iVar28 <= iVar31) break;
  }
LAB_033fad8c:
  if ((local_d8 < 0) || (-1 < local_c4)) {
    if ((local_d8 < 0) && (-1 < local_c4)) {
      local_bc = 1;
    }
    else {
      local_bc = local_c4 - local_d8;
      if ((local_bc == 0) && (local_bc = local_d4 - local_d0, local_bc == 0)) {
        if (iVar31 == iVar28) {
          *param_8 = 1;
        }
        if (iVar13 == iVar29) {
          local_bc = 0;
          *param_9 = 1;
        }
        else {
          local_bc = 0;
        }
      }
    }
  }
  else {
    local_bc = -1;
  }
LAB_033fadd4:
  if (iVar13 == iVar29) {
    if (iVar31 != iVar28) {
      local_bc = -1;
    }
  }
  else {
    local_bc = 1;
  }
  return local_bc;
}


