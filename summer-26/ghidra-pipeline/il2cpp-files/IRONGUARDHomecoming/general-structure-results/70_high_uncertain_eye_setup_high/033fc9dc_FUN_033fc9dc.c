/*
FUNCTION_NAME: FUN_033fc9dc
ENTRY_POINT: 033fc9dc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_6;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_3
*/


uint FUN_033fc9dc(undefined8 param_1,uint param_2,char *param_3,uint param_4,int param_5,
                 char *param_6,uint param_7,uint param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  
  if ((DAT_0483264a & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                      );
    DAT_0483264a = 1;
  }
  puVar1 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
  if ((((*param_3 == *param_6) && (param_3[1] == param_6[1])) &&
      (((param_2 >> 1 & 1) != 0 || (param_3[2] == param_6[2])))) && (param_3[3] == param_6[3])) {
    if ((param_8 & 1) != 0) {
      if (-1 < (int)param_4) {
        if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c();
        }
        if (0x3040 < (param_4 & 0xffff)) {
          if ((param_4 + 0x9a & 0xffff) < 0x38) {
            return 0;
          }
          uVar3 = param_4 >> 8 & 0xff;
          if (uVar3 < 0x33) {
            if (0x309c < (param_4 & 0xffff)) {
              if (uVar3 < 0x31) {
                if ((param_4 & 0xffff) != 0x30fb) {
                  return 0;
                }
                return 1;
              }
              if ((param_4 - 0x32d0 & 0xffff) < 0x2f) {
                return 0;
              }
              return 1;
            }
            if ((param_4 & 0xffff) < 0x3099) {
              return 0;
            }
          }
        }
      }
      return 1;
    }
    if (((param_2 >> 1 & 1) != 0) || (param_5 != 3)) {
      if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0) ==
          0) {
        thunk_FUN_01ee6d7c();
      }
      uVar3 = FUN_033f651c(param_4);
      uVar4 = FUN_033f651c(param_7);
      puVar2 = 
      Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
      ;
      if (((uVar3 ^ uVar4) & 1) == 0) {
        if (*(int *)(*(long *)
                      Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                    + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if (((param_2 >> 1 & 1) != 0) || (param_5 == 0)) {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (0x53 < (param_4 - 0x3041 & 0xffff) != (param_7 - 0x3041 & 0xffff) < 0x54) {
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar3 = FUN_033f81c8(param_4 & 0xffff,param_2);
            uVar4 = FUN_033f81c8(param_7 & 0xffff,param_2);
            return (uVar3 ^ uVar4 ^ 0xffffffff) & 1;
          }
        }
      }
    }
  }
  return 0;
}


