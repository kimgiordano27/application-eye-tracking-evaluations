/*
FUNCTION_NAME: UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider$$get_canSurfaceCommonPoseData
ENTRY_POINT: 06b4f968
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_XR_Hands_ProviderImplementation_XRHandSubsystemProvider__get_canSurfaceCommonPoseData
               (long param_1)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  ulong unaff_x20;
  undefined4 unaff_w21;
  uint unaff_w22;
  int iVar3;
  
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 == 0)
  goto UnityEngine_XR_Hands_ProviderImplementation_XRHandSubsystemProvider__TryGetPinchPose;
  if (*(uint *)(lVar2 + 0x18) <= unaff_w22) {
LAB_06b4fa9c:
                    /* WARNING: Subroutine does not return */
    FUN_031f2398();
  }
  if (*(long *)(unaff_x19 + 0x128) == 0)
  goto UnityEngine_XR_Hands_ProviderImplementation_XRHandSubsystemProvider__TryGetPinchPose;
  iVar3 = *(int *)(lVar2 + (long)(int)unaff_w22 * 0x178 + 0x28);
  lVar2 = FUN_06b59de8(*(long *)(unaff_x19 + 0x128),0);
  if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x38), lVar2 == 0))
  goto UnityEngine_XR_Hands_ProviderImplementation_XRHandSubsystemProvider__TryGetPinchPose;
  if (*(uint *)(lVar2 + 0x18) <= unaff_w22) goto LAB_06b4fa9c;
  iVar3 = *(int *)(lVar2 + (long)(int)unaff_w22 * 0x178 + 0x2c) + iVar3;
  if ((unaff_x20 & 1) != 0) {
    *(int *)(unaff_x19 + 0x228) = iVar3;
    if (iVar3 < 1) {
      iVar1 = 0;
    }
    else {
      if (*(long *)(unaff_x19 + 0x210) == 0)
      goto UnityEngine_XR_Hands_ProviderImplementation_XRHandSubsystemProvider__TryGetPinchPose;
      iVar1 = *(int *)(*(long *)(unaff_x19 + 0x210) + 0x10);
      if (iVar3 <= iVar1) goto LAB_06b4fa74;
    }
    *(int *)(unaff_x19 + 0x228) = iVar1;
    goto LAB_06b4fa74;
  }
  *(int *)(unaff_x19 + 0x224) = iVar3;
  if (iVar3 < 1) {
    iVar1 = 0;
LAB_06b4fa24:
    iVar3 = iVar1;
    *(int *)(unaff_x19 + 0x224) = iVar3;
  }
  else {
    if (*(long *)(unaff_x19 + 0x210) == 0)
    goto UnityEngine_XR_Hands_ProviderImplementation_XRHandSubsystemProvider__TryGetPinchPose;
    iVar1 = *(int *)(*(long *)(unaff_x19 + 0x210) + 0x10);
    if (iVar1 < iVar3) goto LAB_06b4fa24;
  }
  iVar1 = FUN_06b4b3cc();
  iVar1 = iVar1 + iVar3;
  *(int *)(unaff_x19 + 0x228) = iVar1;
  if (iVar1 < 1) {
    iVar3 = 0;
LAB_06b4fa60:
    *(int *)(unaff_x19 + 0x228) = iVar3;
  }
  else {
    if (*(long *)(unaff_x19 + 0x210) == 0) {
UnityEngine_XR_Hands_ProviderImplementation_XRHandSubsystemProvider__TryGetPinchPose:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    iVar3 = *(int *)(*(long *)(unaff_x19 + 0x210) + 0x10);
    if (iVar3 < iVar1) goto LAB_06b4fa60;
  }
  *(undefined4 *)(unaff_x19 + 0x22c) = unaff_w21;
  FUN_06b4d998();
LAB_06b4fa74:
  *(undefined4 *)(unaff_x19 + 0x230) = unaff_w21;
  FUN_06b4d998();
  UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateLocalTransformPose_00000097_PostfixBurstDelegate___ctor
            ();
  return;
}


