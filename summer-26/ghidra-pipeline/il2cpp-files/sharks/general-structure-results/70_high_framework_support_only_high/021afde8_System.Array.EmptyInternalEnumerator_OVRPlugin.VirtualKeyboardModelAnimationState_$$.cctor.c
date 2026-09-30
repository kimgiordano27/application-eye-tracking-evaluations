/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$.cctor
ENTRY_POINT: 021afde8
PROGRAM: sharks-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>___cctor(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint in_w8;
  long lVar4;
  uint uVar5;
  long unaff_x20;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  
  if (*(int *)(unaff_x20 + 0x28) < 1) {
    uVar5 = *(uint *)(unaff_x20 + 0x20);
    if (uVar5 == in_w8) {
      FUN_021b03e4();
      lVar4 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x20) = uVar5 + 1;
      if (lVar4 == 0) goto System_Array_EmptyInternalEnumerator<OVRSceneManager_Metrics>___cctor;
      uVar1 = *(uint *)(lVar4 + 0x18);
      iVar3 = 0;
      if (uVar1 != 0) {
        iVar3 = unaff_w27 / (int)uVar1;
      }
      uVar2 = unaff_w27 - iVar3 * uVar1;
      if (uVar1 <= uVar2) goto LAB_021b0044;
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      unaff_x28 = (int *)(lVar4 + (ulong)uVar2 * 4 + 0x20);
    }
    else {
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      *(uint *)(unaff_x20 + 0x20) = uVar5 + 1;
    }
    if (unaff_x26 == 0) {
System_Array_EmptyInternalEnumerator<OVRSceneManager_Metrics>___cctor:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    if (*(uint *)(unaff_x26 + 0x18) <= uVar5) goto LAB_021b0044;
    lVar4 = (long)(int)uVar5;
  }
  else {
    *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
    uVar5 = *(uint *)(unaff_x20 + 0x24);
    if (*(uint *)(unaff_x26 + 0x18) <= uVar5) {
LAB_021b0044:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    lVar4 = (long)(int)uVar5;
    *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(unaff_x26 + lVar4 * 0x18 + 0x24);
  }
  lVar4 = unaff_x26 + lVar4 * 0x18;
  *(int *)(lVar4 + 0x20) = unaff_w27;
  *(int *)(lVar4 + 0x24) = *unaff_x28 + -1;
  *(undefined8 *)(lVar4 + 0x30) = in_stack_00000008;
  *(undefined4 *)(lVar4 + 0x28) = in_stack_00000018._4_4_;
  thunk_FUN_0188fd20((undefined8 *)(lVar4 + 0x30),in_stack_00000008);
  *unaff_x28 = uVar5 + 1;
  return 1;
}


