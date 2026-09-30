/*
FUNCTION_NAME: FUN_033f88d0
ENTRY_POINT: 033f88d0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint FUN_033f88d0(undefined8 param_1,uint param_2,int param_3,undefined4 param_4)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  if ((DAT_04832641 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                      );
    DAT_04832641 = 1;
  }
  puVar1 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
  if (param_3 != 3) {
    return param_2;
  }
  if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (0x3040 < (param_2 & 0xffff)) {
    if (0x37 < (param_2 + 0x9a & 0xffff)) {
      uVar3 = param_2 >> 8 & 0xff;
      if (0x32 < uVar3) {
        return param_2;
      }
      if ((param_2 & 0xffff) < 0x309d) {
        if (0x3098 < (param_2 & 0xffff)) {
          return param_2;
        }
      }
      else if (uVar3 < 0x31) {
        if ((param_2 & 0xffff) == 0x30fb) {
          return param_2;
        }
      }
      else if (0x2e < (param_2 - 0x32d0 & 0xffff)) {
        return param_2;
      }
    }
    if (*(int *)(*(long *)
                  Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar4 = FUN_033f81c8(param_2 & 0xffff,param_4);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar1);
    }
    uVar3 = FUN_033f8000(param_1,param_2);
    if (4 < (uVar3 & 7) - 2) {
      return param_2;
    }
    param_2 = param_2 - 0x3041;
    switch(uVar3 & 7) {
    case 2:
      if ((uVar4 & 1) != 0) {
        return 0xff71;
      }
      if ((param_2 & 0xffff) < 0x54) {
        return 0x3042;
      }
      return 0x30a2;
    case 3:
      uVar3 = 0x3044;
      if (0x53 < (param_2 & 0xffff)) {
        uVar3 = 0x30a4;
      }
      if ((uVar4 & 1) != 0) {
        return 0xff72;
      }
      return uVar3;
    case 4:
      uVar3 = 0x3046;
      if (0x53 < (param_2 & 0xffff)) {
        uVar3 = 0x30a6;
      }
      bVar2 = (uVar4 & 1) == 0;
      uVar5 = 0xff73;
      break;
    case 5:
      uVar3 = 0x3048;
      if (0x53 < (param_2 & 0xffff)) {
        uVar3 = 0x30a8;
      }
      bVar2 = (uVar4 & 1) == 0;
      uVar5 = 0xff74;
      break;
    case 6:
      uVar3 = 0x304a;
      if (0x53 < (param_2 & 0xffff)) {
        uVar3 = 0x30aa;
      }
      bVar2 = (uVar4 & 1) == 0;
      uVar5 = 0xff75;
    }
    if (bVar2) {
      uVar5 = uVar3;
    }
    return uVar5;
  }
  return param_2;
}


