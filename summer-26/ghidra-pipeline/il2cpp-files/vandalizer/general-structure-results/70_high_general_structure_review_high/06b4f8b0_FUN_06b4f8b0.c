/*
FUNCTION_NAME: FUN_06b4f8b0
ENTRY_POINT: 06b4f8b0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_10;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_06b4f8b0(long param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  
  if ((*(long *)(param_1 + 0x128) == 0) ||
     (lVar4 = FUN_06b59de8(*(long *)(param_1 + 0x128),0), lVar4 == 0))
  goto UnityEngine_XR_Hands_ProviderImplementation_XRHandSubsystemProvider__TryGetPinchPose;
  lVar4 = *(long *)(lVar4 + 0x38);
  iVar5 = *(int *)(param_1 + 0x22c);
  iVar2 = FUN_06b4b3cc(param_1);
  if (lVar4 == 0)
  goto UnityEngine_XR_Hands_ProviderImplementation_XRHandSubsystemProvider__TryGetPinchPose;
  uVar1 = iVar2 + iVar5;
  if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_06b4fa9c;
  if ((param_3 & 1) == 0) {
    if (*(long *)(param_1 + 0x128) == 0)
    goto UnityEngine_XR_Hands_ProviderImplementation_XRHandSubsystemProvider__TryGetPinchPose;
    uVar1 = *(uint *)(lVar4 + (long)(int)uVar1 * 0x178 + 0x5c);
    lVar4 = FUN_06b59de8(*(long *)(param_1 + 0x128),0);
    if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x50), lVar4 == 0))
    goto UnityEngine_XR_Hands_ProviderImplementation_XRHandSubsystemProvider__TryGetPinchPose;
    if (*(uint *)(lVar4 + 0x18) <= uVar1) {
LAB_06b4fa9c:
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    iVar5 = *(int *)(lVar4 + (long)(int)uVar1 * 0x60 + 0x38);
    uVar1 = iVar5 - 1;
    if (iVar5 < 1) goto LAB_06b4f9c8;
    if (((*(long *)(param_1 + 0x128) == 0) ||
        (lVar4 = FUN_06b59de8(*(long *)(param_1 + 0x128),0), lVar4 == 0)) ||
       (lVar4 = *(long *)(lVar4 + 0x38), lVar4 == 0))
    goto UnityEngine_XR_Hands_ProviderImplementation_XRHandSubsystemProvider__TryGetPinchPose;
    if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_06b4fa9c;
    if (*(long *)(param_1 + 0x128) == 0)
    goto UnityEngine_XR_Hands_ProviderImplementation_XRHandSubsystemProvider__TryGetPinchPose;
    iVar2 = *(int *)(lVar4 + (long)(int)uVar1 * 0x178 + 0x28);
    lVar4 = FUN_06b59de8(*(long *)(param_1 + 0x128),0);
    if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x38), lVar4 == 0))
    goto UnityEngine_XR_Hands_ProviderImplementation_XRHandSubsystemProvider__TryGetPinchPose;
    if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_06b4fa9c;
    iVar2 = *(int *)(lVar4 + (long)(int)uVar1 * 0x178 + 0x2c) + iVar2;
  }
  else {
    iVar5 = 0;
LAB_06b4f9c8:
    iVar2 = 0;
  }
  if ((param_2 & 1) != 0) {
    *(int *)(param_1 + 0x228) = iVar2;
    if (iVar2 < 1) {
      iVar3 = 0;
    }
    else {
      if (*(long *)(param_1 + 0x210) == 0)
      goto UnityEngine_XR_Hands_ProviderImplementation_XRHandSubsystemProvider__TryGetPinchPose;
      iVar3 = *(int *)(*(long *)(param_1 + 0x210) + 0x10);
      if (iVar2 <= iVar3) goto LAB_06b4fa74;
    }
    *(int *)(param_1 + 0x228) = iVar3;
    goto LAB_06b4fa74;
  }
  *(int *)(param_1 + 0x224) = iVar2;
  if (iVar2 < 1) {
    iVar3 = 0;
LAB_06b4fa24:
    iVar2 = iVar3;
    *(int *)(param_1 + 0x224) = iVar2;
  }
  else {
    if (*(long *)(param_1 + 0x210) == 0)
    goto UnityEngine_XR_Hands_ProviderImplementation_XRHandSubsystemProvider__TryGetPinchPose;
    iVar3 = *(int *)(*(long *)(param_1 + 0x210) + 0x10);
    if (iVar3 < iVar2) goto LAB_06b4fa24;
  }
  iVar3 = FUN_06b4b3cc(param_1);
  iVar3 = iVar3 + iVar2;
  *(int *)(param_1 + 0x228) = iVar3;
  if (iVar3 < 1) {
    iVar2 = 0;
LAB_06b4fa60:
    *(int *)(param_1 + 0x228) = iVar2;
  }
  else {
    if (*(long *)(param_1 + 0x210) == 0) {
UnityEngine_XR_Hands_ProviderImplementation_XRHandSubsystemProvider__TryGetPinchPose:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    iVar2 = *(int *)(*(long *)(param_1 + 0x210) + 0x10);
    if (iVar2 < iVar3) goto LAB_06b4fa60;
  }
  *(int *)(param_1 + 0x22c) = iVar5;
  FUN_06b4d998(param_1,param_1 + 0x22c);
LAB_06b4fa74:
  *(int *)(param_1 + 0x230) = iVar5;
  FUN_06b4d998(param_1,param_1 + 0x230);
  UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateLocalTransformPose_00000097_PostfixBurstDelegate___ctor
            (param_1);
  return;
}


