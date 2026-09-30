/*
FUNCTION_NAME: FUN_033f92d4
ENTRY_POINT: 033f92d4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_6;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_033f92d4(undefined8 param_1,uint param_2,int param_3,long param_4,uint param_5)

{
  undefined4 uVar1;
  undefined *puVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  undefined4 uVar14;
  
  if ((DAT_04832645 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_IO_CStreamReader_Read__);
    thunk_FUN_01efb3a4(Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                      );
    DAT_04832645 = 1;
  }
  uVar7 = param_2 - 0x3400;
  if (uVar7 >> 1 < 0xcdb) {
    if (param_4 != 0) {
      uVar13 = (uVar7 >> 1 & 0x7fff) / 0x7f;
      FUN_033f97b0(param_4,uVar13 + 0x10,uVar7 + uVar13 * -0xfe + 2);
      return;
    }
    goto LAB_033f9668;
  }
  if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar11 = FUN_034fdb84(param_2,0);
  if ((int)uVar11 == 0x10) {
    FUN_033f9844(uVar11,param_2,param_4);
    return;
  }
  if ((int)uVar11 == 0x11) {
    if (param_4 == 0) goto LAB_033f9668;
    iVar8 = (int)(param_2 - 0xe000) / 0xfe + -0x1b;
    iVar9 = (int)(param_2 - 0xe000) % 0xfe + 2;
    uVar4 = 0;
LAB_033f93c0:
    uVar10 = 0;
  }
  else {
    uVar4 = FUN_033f8094(param_1,param_2,param_3);
    puVar2 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
    if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0) == 0)
    {
      thunk_FUN_01ee6d7c(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__);
    }
    if (0x3040 < (param_2 & 0xffff)) {
      if ((param_2 + 0x9a & 0xffff) < 0x38) goto System_Boolean__CompareTo;
      uVar7 = param_2 >> 8 & 0xff;
      if (uVar7 < 0x33) {
        if ((param_2 & 0xffff) < 0x309d) {
          if ((param_2 & 0xffff) < 0x3099) goto System_Boolean__CompareTo;
        }
        else if (uVar7 < 0x31) {
          if ((param_2 & 0xffff) != 0x30fb) goto System_Boolean__CompareTo;
        }
        else if ((param_2 - 0x32d0 & 0xffff) < 0x2f) {
System_Boolean__CompareTo:
          uVar10 = FUN_033f8000(param_1,param_2);
          uVar5 = FUN_033f7f6c(param_1,param_2);
          lVar12 = *(long *)puVar2;
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(lVar12);
          }
          uVar6 = FUN_033f60b8(param_2);
          uVar7 = FUN_033f651c(param_2);
          if (*(int *)(*(long *)
                        Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                      + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(*(long *)
                                Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                              );
          }
          bVar3 = FUN_033f81c8(param_2 & 0xffff,param_5);
          if (param_4 == 0) goto LAB_033f9668;
          uVar14 = 4;
          if (param_3 == 3) {
            uVar14 = 5;
          }
          uVar1 = 3;
          if (param_3 != 0 && (param_5 & 2) == 0) {
            uVar1 = uVar14;
          }
          FUN_033f98fc(param_4,uVar5,uVar10,uVar4,uVar6,uVar7 & 1,uVar1,
                       0x53 < (param_2 - 0x3041 & 0xffff),bVar3 & 1);
          if ((param_3 != 2) || ((param_5 & 2) != 0)) {
            return;
          }
          iVar8 = 1;
          iVar9 = 1;
          uVar4 = 1;
          goto LAB_033f93c0;
        }
      }
    }
    iVar8 = FUN_033f7f6c(param_1,param_2);
    iVar9 = FUN_033f8000(param_1,param_2);
    lVar12 = *(long *)puVar2;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar12);
    }
    uVar10 = FUN_033f60b8(param_2);
    if (param_4 == 0) {
LAB_033f9668:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  }
  FUN_033f966c(param_4,iVar8,iVar9,uVar4,uVar10);
  return;
}


