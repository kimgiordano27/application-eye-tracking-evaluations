/*
FUNCTION_NAME: UnityEngine.PhysicsScene$$Internal_SphereCastNonAlloc_Injected
ENTRY_POINT: 05c1af04
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 93
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x05c1b084) */
/* WARNING: Removing unreachable block (ram,0x05c1b094) */

void UnityEngine_PhysicsScene__Internal_SphereCastNonAlloc_Injected(void)

{
  ulong __n;
  long lVar1;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined1 *__s;
  int iVar2;
  ulong uVar3;
  long unaff_x24;
  long unaff_x29;
  
  if ((*(byte *)(unaff_x22 + 0xf1a) & 1) == 0) {
    FUN_02b3c81c(
                Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_9_0<OVRPlugin_Quatf>__
                );
    FUN_02b3c81c(PTR_DAT_0631ed30);
    FUN_02b3c81c(PTR_DAT_0631ed38);
    *(undefined1 *)(unaff_x22 + 0xf1a) = 1;
  }
  *(undefined8 *)(unaff_x29 + -0x18) = 0;
  *(undefined8 *)(unaff_x29 + -0x10) = 0;
  *(undefined1 *)(unaff_x29 + -0x1c) = 0;
  if ((unaff_x21 == 0) || (uVar3 = *(ulong *)(unaff_x21 + 0x18), uVar3 == 0)) {
    *(undefined8 *)(unaff_x29 + -0x18) = 0;
    *(undefined8 *)(unaff_x29 + -0x10) = 0;
  }
  else {
    __n = -(uVar3 >> 0x1f & 1) & 0xfffffff800000000 | (uVar3 & 0xffffffff) << 3;
    if ((uVar3 & 0xffffffff) == 0) {
      __s = (undefined1 *)0x0;
    }
    else {
      __s = &stack0x00000000 + -(__n + 0xf & 0xfffffffffffffff0);
    }
    memset(__s,0,__n);
    iVar2 = (int)uVar3;
    if (iVar2 < 0) {
      FUN_04d9bcc4(0);
      *(undefined1 **)(unaff_x29 + -0x18) = __s;
      *(int *)(unaff_x29 + -0x10) = iVar2;
      *(undefined4 *)(unaff_x29 + -0xc) = 0;
    }
    else {
      *(undefined1 **)(unaff_x29 + -0x18) = __s;
      *(int *)(unaff_x29 + -0x10) = iVar2;
      *(undefined4 *)(unaff_x29 + -0xc) = 0;
      if (iVar2 != 0) {
        FUN_05c149a8(uVar3 & 0xffffffff);
        FUN_05c0b09c();
      }
    }
  }
  lVar1 = *(long *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  *(long *)(unaff_x29 + -0x30) = unaff_x29 + -0x18;
  *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x1c;
  if (lVar1 == 0) {
    if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
  }
  else {
    FUN_05c16b30(*(undefined8 *)(lVar1 + 0x18));
    *(bool *)(unaff_x29 + -0x1c) = 0 < *(int *)(unaff_x29 + -0x10);
    if (0 < *(int *)(unaff_x29 + -0x10)) {
      if (DAT_066d5978 == (code *)0x0) {
        DAT_066d5978 = (code *)FUN_02b3c7e0("UnityEngine.AndroidJNI::PopLocalFrame(System.IntPtr)");
      }
      (*DAT_066d5978)(0);
    }
    if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


