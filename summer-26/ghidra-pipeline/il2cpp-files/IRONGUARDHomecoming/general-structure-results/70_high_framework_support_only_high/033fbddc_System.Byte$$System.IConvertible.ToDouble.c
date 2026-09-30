/*
FUNCTION_NAME: System.Byte$$System.IConvertible.ToDouble
ENTRY_POINT: 033fbddc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_6;validity_or_gating_hits_12;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


ulong System_Byte__System_IConvertible_ToDouble
                (ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,uint param_5
                )

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  char cVar6;
  undefined2 uVar7;
  int iVar8;
  undefined4 uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  uint *unaff_x23;
  int unaff_w26;
  undefined1 *unaff_x29;
  uint uStack0000000000000038;
  
  uStack0000000000000038 = param_5;
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                      );
    *(undefined1 *)(unaff_x19 + 0x648) = 1;
  }
  puVar2 = 
  Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
  ;
  if (unaff_x22 == 0) {
LAB_033fbf34:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar13 = *(int *)(unaff_x22 + 0x10);
  uVar1 = *unaff_x23;
  iVar8 = 0;
  if (0 < iVar13) {
    do {
      uVar7 = FUN_03409f80();
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar2);
      }
      uVar10 = FUN_033f8ae0(uVar7,uVar1);
      if ((uVar10 & 1) == 0) {
        iVar13 = *(int *)(unaff_x22 + 0x10);
        break;
      }
      iVar13 = *(int *)(unaff_x22 + 0x10);
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar13);
  }
  if (iVar13 != iVar8) {
    lVar11 = FUN_033f823c(param_2);
    uVar15 = uStack0000000000000038;
    if (lVar11 == 0) {
      if (unaff_x29 == (undefined1 *)0x0) {
        bVar3 = true;
      }
      else {
        uVar7 = FUN_03409f80();
        uVar9 = FUN_033f86cc(param_2,uVar7,uVar1);
        uVar4 = FUN_033f7f6c(param_2,uVar9);
        *unaff_x29 = uVar4;
        uVar4 = FUN_033f8000(param_2,uVar9);
        unaff_x29[1] = uVar4;
        if ((uVar1 >> 1 & 1) == 0) {
          uVar4 = FUN_033f8094(param_2,uVar9,0);
          unaff_x29[2] = uVar4;
        }
        if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar4 = FUN_033f60b8(uVar9);
        unaff_x29[3] = uVar4;
        bVar3 = true;
LAB_033fc250:
        iVar13 = *(int *)(unaff_x22 + 0x10);
        while (iVar8 = iVar8 + 1, uVar15 = uStack0000000000000038, iVar8 < iVar13) {
          uVar7 = FUN_03409f80();
          cVar5 = FUN_033f7f6c(param_2,uVar7);
          uVar15 = uStack0000000000000038;
          if (cVar5 != '\x01') break;
          cVar5 = unaff_x29[2];
          if (cVar5 == '\0') {
            cVar5 = '\x02';
            unaff_x29[2] = 2;
          }
          uVar7 = FUN_03409f80();
          cVar6 = FUN_033f8094(param_2,uVar7,0);
          unaff_x29[2] = cVar6 + cVar5;
          iVar13 = *(int *)(unaff_x22 + 0x10);
        }
      }
    }
    else {
      bVar3 = *(long *)(lVar11 + 0x20) == 0;
      if (!bVar3) {
        unaff_x29 = (undefined1 *)0x0;
      }
      if (unaff_x29 != (undefined1 *)0x0) {
        lVar14 = *(long *)(lVar11 + 0x28);
        if (lVar14 != 0) {
          uVar10 = 0;
          do {
            if ((long)(int)*(uint *)(lVar14 + 0x18) <= (long)uVar10) goto LAB_033fc250;
            if (*(uint *)(lVar14 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            unaff_x29[uVar10] = *(undefined1 *)(lVar14 + uVar10 + 0x20);
            lVar14 = *(long *)(lVar11 + 0x28);
            uVar10 = uVar10 + 1;
          } while (lVar14 != 0);
        }
        goto LAB_033fbf34;
      }
    }
    do {
      if (bVar3) {
        if ((int)uVar15 <= (int)(uVar15 - unaff_w26)) {
          return 0xffffffff;
        }
        uVar12 = FUN_033fc4a8(param_2);
        while (uVar10 = (ulong)uVar15, (uVar12 & 1) == 0) {
          if ((int)uVar15 <= (int)(uVar15 - unaff_w26)) {
            return 0xffffffff;
          }
          uVar12 = FUN_033fc4a8(param_2);
        }
      }
      else {
        uVar10 = FUN_033fbda4(param_2);
        uVar10 = uVar10 & 0xffffffff;
      }
      iVar8 = (int)uVar10;
      if (iVar8 < 0) {
        return 0xffffffff;
      }
      uVar12 = FUN_033faf50(param_2);
      puVar2 = 
      Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
      ;
      if ((uVar12 & 1) != 0) {
        if ((int)uStack0000000000000038 <= iVar8) {
          return uVar10;
        }
        if (unaff_x20 != 0) goto LAB_033fc1a0;
        goto LAB_033fbf34;
      }
      lVar11 = FUN_033f823c(param_2);
      if (lVar11 == 0) {
        uVar16 = iVar8 - 1;
        iVar13 = -1;
      }
      else {
        if (*(long *)(lVar11 + 0x18) == 0) goto LAB_033fbf34;
        iVar13 = *(int *)(*(long *)(lVar11 + 0x18) + 0x18);
        uVar16 = iVar8 - iVar13;
        iVar13 = -iVar13;
      }
      unaff_w26 = (iVar8 - uVar15) + unaff_w26 + iVar13;
      uVar15 = uVar16;
      if (unaff_w26 < 1) {
        return 0xffffffff;
      }
    } while( true );
  }
  iVar8 = FUN_033fbacc();
  if (-1 < iVar8) {
    uVar10 = FUN_033fc2d0();
    return uVar10;
  }
  goto LAB_033fc1e8;
LAB_033fc1a0:
  do {
    uVar7 = FUN_03409f80();
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar2);
    }
    uVar12 = FUN_033f8ae0(uVar7,uVar1);
    if ((uVar12 & 1) == 0) {
      return uVar10;
    }
    uVar15 = (int)uVar10 + 1;
    uVar10 = (ulong)uVar15;
  } while (uStack0000000000000038 != uVar15);
LAB_033fc1e8:
  return (ulong)uStack0000000000000038;
}


