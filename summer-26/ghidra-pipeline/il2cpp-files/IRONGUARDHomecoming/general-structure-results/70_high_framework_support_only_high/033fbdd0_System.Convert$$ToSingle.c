/*
FUNCTION_NAME: System.Convert$$ToSingle
ENTRY_POINT: 033fbdd0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_6;validity_or_gating_hits_14;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


ulong System_Convert__ToSingle
                (ulong param_1,ulong param_2,long param_3,long param_4,uint param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  char cVar7;
  undefined2 uVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  long unaff_x19;
  uint *unaff_x23;
  byte bVar19;
  undefined1 *unaff_x29;
  undefined1 *puVar20;
  long lStack0000000000000020;
  uint uStack0000000000000038;
  uint uStack000000000000003c;
  
  uVar10 = param_2;
  uStack0000000000000038 = param_5;
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__);
    uVar10 = thunk_FUN_01efb3a4(
                               Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                               );
    *(undefined1 *)(unaff_x19 + 0x648) = 1;
  }
  puVar3 = 
  Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
  ;
  if (param_4 == 0) {
LAB_033fbf34:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar14 = *(int *)(param_4 + 0x10);
  uVar1 = *unaff_x23;
  iVar18 = 0;
  if (0 < iVar14) {
    do {
      uVar8 = FUN_03409f80(param_4,iVar18,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar3);
      }
      uVar10 = FUN_033f8ae0(uVar8,uVar1);
      if ((uVar10 & 1) == 0) {
        iVar14 = *(int *)(param_4 + 0x10);
        break;
      }
      iVar14 = *(int *)(param_4 + 0x10);
      iVar18 = iVar18 + 1;
    } while (iVar18 < iVar14);
  }
  if (iVar14 - iVar18 == 0) {
    uVar11 = FUN_033fbacc(uVar10,param_4,0,0,iVar18);
    if (-1 < (int)uVar11) {
      uVar10 = FUN_033fc2d0(uVar11,param_3,param_4,uStack0000000000000038,param_6);
      return uVar10;
    }
    goto LAB_033fc1e8;
  }
  lVar12 = FUN_033f823c(param_2,param_4,iVar18,iVar14 - iVar18);
  puVar20 = unaff_x29;
  uVar16 = uStack0000000000000038;
  if (lVar12 == 0) {
    if (unaff_x29 == (undefined1 *)0x0) {
      lStack0000000000000020 = 0;
      uVar9 = 0xffffffff;
      bVar19 = 1;
      bVar4 = true;
    }
    else {
      uVar8 = FUN_03409f80(param_4,iVar18,0);
      uVar9 = FUN_033f86cc(param_2,uVar8,uVar1);
      uVar5 = FUN_033f7f6c(param_2,uVar9);
      *unaff_x29 = uVar5;
      uVar5 = FUN_033f8000(param_2,uVar9);
      unaff_x29[1] = uVar5;
      if ((uVar1 >> 1 & 1) == 0) {
        uVar5 = FUN_033f8094(param_2,uVar9,0);
        unaff_x29[2] = uVar5;
      }
      if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0) ==
          0) {
        thunk_FUN_01ee6d7c();
      }
      uVar5 = FUN_033f60b8(uVar9);
      unaff_x29[3] = uVar5;
      if ((uVar9 & 0xffff) < 0x3041) {
LAB_033fc02c:
        bVar4 = false;
      }
      else if ((uVar9 + 0x9a & 0xffff) < 0x38) {
        bVar4 = true;
      }
      else {
        uVar16 = uVar9 >> 8 & 0xff;
        if (0x32 < uVar16) goto LAB_033fc02c;
        if ((uVar9 & 0xffff) < 0x309d) {
          bVar4 = (uVar9 & 0xffff) < 0x3099;
        }
        else if (uVar16 < 0x31) {
          bVar4 = (uVar9 & 0xffff) != 0x30fb;
        }
        else {
          bVar4 = (uVar9 - 0x32d0 & 0xffff) < 0x2f;
        }
      }
      bVar19 = bVar4 ^ 1;
      lStack0000000000000020 = 0;
      bVar4 = true;
LAB_033fc250:
      iVar14 = *(int *)(param_4 + 0x10);
      while (iVar18 = iVar18 + 1, uVar16 = uStack0000000000000038, iVar18 < iVar14) {
        uVar8 = FUN_03409f80(param_4,iVar18,0);
        cVar6 = FUN_033f7f6c(param_2,uVar8);
        uVar16 = uStack0000000000000038;
        if (cVar6 != '\x01') break;
        cVar6 = puVar20[2];
        if (cVar6 == '\0') {
          cVar6 = '\x02';
          puVar20[2] = 2;
        }
        uVar8 = FUN_03409f80(param_4,iVar18,0);
        cVar7 = FUN_033f8094(param_2,uVar8,0);
        puVar20[2] = cVar7 + cVar6;
        iVar14 = *(int *)(param_4 + 0x10);
      }
    }
  }
  else {
    lStack0000000000000020 = *(long *)(lVar12 + 0x20);
    bVar4 = lStack0000000000000020 == 0;
    if (!bVar4) {
      puVar20 = (undefined1 *)0x0;
    }
    if (puVar20 != (undefined1 *)0x0) {
      lVar15 = *(long *)(lVar12 + 0x28);
      if (lVar15 != 0) {
        uVar10 = 0;
        do {
          if ((long)(int)*(uint *)(lVar15 + 0x18) <= (long)uVar10) {
            uVar9 = 0xffffffff;
            bVar19 = 1;
            goto LAB_033fc250;
          }
          if (*(uint *)(lVar15 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          puVar20[uVar10] = *(undefined1 *)(lVar15 + uVar10 + 0x20);
          lVar15 = *(long *)(lVar12 + 0x28);
          uVar10 = uVar10 + 1;
        } while (lVar15 != 0);
      }
      goto LAB_033fbf34;
    }
    uVar9 = 0xffffffff;
    bVar19 = 1;
  }
LAB_033fc050:
  if (bVar4) {
    iVar18 = uVar16 - param_6;
    if ((int)uVar16 <= iVar18) {
      return 0xffffffff;
    }
    uStack000000000000003c = uVar16;
    uVar13 = FUN_033fc4a8(param_2,param_3,(long)&stack0x00000038 + 4,iVar18,uStack0000000000000038,
                          uVar9,puVar20,bVar19);
    uVar17 = uVar16;
    while (uVar2 = uStack000000000000003c, uVar10 = (ulong)uVar17, uStack000000000000003c = uVar2,
          (uVar13 & 1) == 0) {
      if ((int)uVar2 <= iVar18) {
        return 0xffffffff;
      }
      uVar13 = FUN_033fc4a8(param_2,param_3,(long)&stack0x00000038 + 4,iVar18,uStack0000000000000038
                            ,uVar9,puVar20,bVar19);
      uVar17 = uVar2;
    }
  }
  else {
    uVar10 = FUN_033fbda4(param_2,param_3,lStack0000000000000020,uVar16,param_6,unaff_x29);
    uVar10 = uVar10 & 0xffffffff;
  }
  iVar18 = (int)uVar10;
  if (iVar18 < 0) {
    return 0xffffffff;
  }
  iVar14 = (uStack0000000000000038 - iVar18) + 1;
  uVar13 = FUN_033faf50(param_2,param_3,param_4,uVar10,iVar14,0);
  puVar3 = 
  Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
  ;
  if ((uVar13 & 1) == 0) {
    lVar12 = FUN_033f823c(param_2,param_3,uVar10,iVar14);
    if (lVar12 == 0) {
      uVar17 = iVar18 - 1;
      iVar14 = -1;
    }
    else {
      if (*(long *)(lVar12 + 0x18) == 0) goto LAB_033fbf34;
      iVar14 = *(int *)(*(long *)(lVar12 + 0x18) + 0x18);
      uVar17 = iVar18 - iVar14;
      iVar14 = -iVar14;
    }
    param_6 = (iVar18 - uVar16) + param_6 + iVar14;
    uVar16 = uVar17;
    if (param_6 < 1) {
      return 0xffffffff;
    }
    goto LAB_033fc050;
  }
  if ((int)uStack0000000000000038 <= iVar18) {
    return uVar10;
  }
  if (param_3 == 0) goto LAB_033fbf34;
  do {
    uVar8 = FUN_03409f80(param_3,uVar10,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar3);
    }
    uVar13 = FUN_033f8ae0(uVar8,uVar1);
    if ((uVar13 & 1) == 0) {
      return uVar10;
    }
    uVar16 = (int)uVar10 + 1;
    uVar10 = (ulong)uVar16;
  } while (uStack0000000000000038 != uVar16);
LAB_033fc1e8:
  return (ulong)uStack0000000000000038;
}


