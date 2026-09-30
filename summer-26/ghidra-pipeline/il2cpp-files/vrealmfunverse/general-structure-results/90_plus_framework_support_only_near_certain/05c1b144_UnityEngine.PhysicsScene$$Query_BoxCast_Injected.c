/*
FUNCTION_NAME: UnityEngine.PhysicsScene$$Query_BoxCast_Injected
ENTRY_POINT: 05c1b144
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 90
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x05c1b2f4) */
/* WARNING: Removing unreachable block (ram,0x05c1b304) */

void UnityEngine_PhysicsScene__Query_BoxCast_Injected(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong __n;
  undefined1 *__s;
  ulong uVar2;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  undefined1 **ppuStack_30;
  undefined1 *puStack_28;
  undefined1 auStack_1c [4];
  undefined1 *puStack_18;
  ulong uStack_10;
  long lStack_8;
  
  lVar1 = tpidr_el0;
  lStack_8 = *(long *)(lVar1 + 0x28);
  if ((DAT_066d5f1b & 1) == 0) {
    FUN_02b3c81c(
                Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_9_0<OVRPlugin_Vector3f>__
                );
    FUN_02b3c81c(PTR_DAT_0631ed30);
    FUN_02b3c81c(PTR_DAT_0631ed38);
    DAT_066d5f1b = 1;
  }
  puStack_18 = (undefined1 *)0x0;
  uStack_10 = 0;
  auStack_1c[0] = 0;
  if ((param_3 == 0) || (uVar2 = *(ulong *)(param_3 + 0x18), uVar2 == 0)) {
    __s = (undefined1 *)0x0;
    puStack_18 = (undefined1 *)0x0;
    uStack_10 = 0;
  }
  else {
    __n = -(uVar2 >> 0x1f & 1) & 0xfffffff800000000 | (uVar2 & 0xffffffff) << 3;
    if ((uVar2 & 0xffffffff) == 0) {
      __s = (undefined1 *)0x0;
    }
    else {
      __s = auStack_40 + -(__n + 0xf & 0xfffffffffffffff0);
    }
    memset(__s,0,__n);
    if ((int)uVar2 < 0) {
      FUN_04d9bcc4(0);
      uStack_10 = uVar2 & 0xffffffff;
      puStack_18 = __s;
    }
    else {
      uStack_10 = uVar2 & 0xffffffff;
      puStack_18 = __s;
      if ((int)uVar2 != 0) {
        FUN_05c149a8(uVar2 & 0xffffffff);
        FUN_05c0b09c(param_3,__s,uStack_10);
      }
    }
  }
  ppuStack_30 = &puStack_18;
  uStack_38 = 0;
  puStack_28 = auStack_1c;
  if (*(long *)(param_1 + 0x18) == 0) {
    if (*(long *)(lVar1 + 0x28) == lStack_8) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
  }
  else {
    FUN_05c15808(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18),param_2,__s,uStack_10);
    auStack_1c[0] = 0 < (int)uStack_10;
    if (0 < (int)uStack_10) {
      if (DAT_066d5978 == (code *)0x0) {
        DAT_066d5978 = (code *)FUN_02b3c7e0("UnityEngine.AndroidJNI::PopLocalFrame(System.IntPtr)");
      }
      (*DAT_066d5978)(0);
    }
    if (*(long *)(lVar1 + 0x28) == lStack_8) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


