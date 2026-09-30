/*
FUNCTION_NAME: FUN_033fcc04
ENTRY_POINT: 033fcc04
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong FUN_033fcc04(undefined8 param_1,long param_2,int *param_3,undefined4 param_4,int param_5,
                  undefined4 param_6,char *param_7,uint param_8,int param_9,long *param_10,
                  uint *param_11)

{
  bool bVar1;
  undefined *puVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  char *pcVar14;
  int iVar15;
  
  if ((DAT_0483264b & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                      );
    DAT_0483264b = 1;
  }
  puVar2 = 
  Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
  ;
  uVar9 = *param_11;
  pcVar14 = *(char **)(param_11 + 6);
  iVar13 = *param_3;
  if (param_9 != 0) {
    if (iVar13 < 0) {
      return 0;
    }
    if (param_2 != 0) {
      cVar4 = '\0';
      iVar15 = iVar13;
      do {
        uVar6 = FUN_03409f80(param_2,iVar15,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar2);
        }
        uVar10 = FUN_033f8ae0(uVar6,uVar9);
        if ((uVar10 & 1) == 0) {
          uVar6 = FUN_03409f80(param_2,iVar15,0);
          uVar7 = FUN_033f86cc(param_1,uVar6,uVar9);
          cVar3 = FUN_033f7f6c(param_1,uVar7);
          if (cVar3 != '\x01') {
            uVar8 = FUN_033f88d0(param_1,uVar7,param_9,uVar9);
            *pcVar14 = cVar3;
            cVar3 = FUN_033f8000(param_1,uVar8);
            pcVar14[1] = cVar3;
            if ((uVar9 >> 1 & 1) == 0) {
              cVar3 = FUN_033f8094(param_1,uVar8,param_9);
              pcVar14[2] = cVar3;
            }
            if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ +
                        0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar11 = FUN_033f60b8(uVar8);
            pcVar14[3] = (char)uVar11;
            if ((param_9 != 3) && (cVar4 != '\0')) {
              cVar3 = cVar4 + '\x02';
              if (pcVar14[2] != '\0') {
                cVar3 = cVar4;
              }
              pcVar14[2] = cVar3;
            }
            *param_3 = *param_3 + -1;
            lVar12 = *param_10;
            if (lVar12 == 0) goto LAB_033fd028;
            goto LAB_033fcee0;
          }
          cVar4 = FUN_033f8094(param_1,uVar7,0);
        }
        bVar1 = iVar15 < 1;
        iVar15 = iVar15 + -1;
        if (bVar1) {
          return 0;
        }
      } while( true );
    }
    goto LAB_033fd0a0;
  }
  lVar12 = FUN_033f8424(param_1,param_2,iVar13,param_4);
  *param_10 = lVar12;
  uVar11 = thunk_FUN_01f51358(param_10,lVar12);
  lVar12 = *param_10;
  if (lVar12 == 0) {
    if (param_2 == 0) goto LAB_033fd0a0;
    uVar6 = FUN_03409f80(param_2,*param_3,0);
    uVar8 = FUN_033f86cc(param_1,uVar6,uVar9);
    *param_3 = *param_3 + -1;
    cVar3 = FUN_033f7f6c(param_1,uVar8);
    *pcVar14 = cVar3;
    cVar4 = *param_7;
    if (cVar4 == cVar3) {
      cVar5 = FUN_033f8000(param_1,uVar8);
      pcVar14[1] = cVar5;
    }
    if ((uVar9 >> 1 & 1) == 0) {
      if (pcVar14[1] != param_7[1]) {
        return 0;
      }
      cVar5 = FUN_033f8094(param_1,uVar8,0);
      pcVar14[2] = cVar5;
      if (cVar4 != cVar3) {
        return 0;
      }
    }
    else {
      if ((uVar9 >> 1 & 1) == 0) {
        return 0;
      }
      if (cVar4 != cVar3) {
        return 0;
      }
    }
    if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0) == 0)
    {
      thunk_FUN_01ee6d7c();
    }
    uVar11 = FUN_033f60b8(uVar8);
    pcVar14[3] = (char)uVar11;
    if (*pcVar14 != '\x01') {
      param_11[10] = uVar8;
    }
  }
  else {
    uVar8 = 0xffffffff;
LAB_033fcee0:
    if (*(long *)(lVar12 + 0x18) == 0) goto LAB_033fd0a0;
    *param_3 = *param_3 - *(int *)(*(long *)(lVar12 + 0x18) + 0x18);
    if ((param_8 & 1) == 0) {
      return 0;
    }
    if (*(long *)(lVar12 + 0x28) == 0) {
      lVar12 = *(long *)(lVar12 + 0x20);
      if (lVar12 != 0) {
        iVar13 = *(int *)(lVar12 + 0x10) + -1;
        uVar9 = FUN_033fc404(param_1,lVar12,iVar13,iVar13,*(int *)(lVar12 + 0x10),param_7,param_6,1,
                             param_11);
        return (ulong)(~uVar9 >> 0x1f);
      }
      goto LAB_033fd0a0;
    }
    lVar12 = 0;
    do {
      pcVar14[lVar12] = param_7[lVar12];
      lVar12 = lVar12 + 1;
    } while (lVar12 != 4);
    param_11[10] = 0xffffffff;
    *(char **)(param_11 + 0xc) = pcVar14;
    if (param_9 != 0) goto LAB_033fd028;
  }
  iVar13 = iVar13 + 1;
  if (iVar13 < param_5) {
    if (param_2 == 0) {
LAB_033fd0a0:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      uVar6 = FUN_03409f80(param_2,iVar13,0);
      uVar11 = FUN_033f7f6c(param_1,uVar6);
      if (((uint)uVar11 & 0xff) != 1) break;
      if ((uVar9 >> 1 & 1) == 0) {
        cVar4 = pcVar14[2];
        if (cVar4 == '\0') {
          cVar4 = '\x02';
          pcVar14[2] = '\x02';
        }
        uVar6 = FUN_03409f80(param_2,iVar13,0);
        uVar11 = FUN_033f8094(param_1,uVar6,0);
        pcVar14[2] = (char)uVar11 + cVar4;
      }
      iVar13 = iVar13 + 1;
    } while (param_5 != iVar13);
  }
LAB_033fd028:
  uVar10 = FUN_033fc9dc(uVar11,uVar9,pcVar14,uVar8,param_9,param_7,param_6,param_8 & 1);
  return uVar10;
}


