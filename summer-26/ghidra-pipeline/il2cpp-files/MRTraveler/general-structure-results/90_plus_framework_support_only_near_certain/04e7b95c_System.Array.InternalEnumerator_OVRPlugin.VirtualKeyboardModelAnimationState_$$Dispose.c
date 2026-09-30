/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$Dispose
ENTRY_POINT: 04e7b95c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_InternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__Dispose(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  long unaff_x20;
  int unaff_w23;
  uint uVar5;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000000;
  uint *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if ((int)(uint)unaff_x28 < 0) {
    if (unaff_x29 == 0) goto LAB_04e7bae0;
    uVar5 = *(uint *)(unaff_x20 + 0x24);
    unaff_x28 = (ulong)uVar5;
    if (uVar5 == *(uint *)(unaff_x29 + 0x18)) {
      FUN_04e79ff8();
      if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_04e7bae0;
      unaff_x28 = (ulong)*(uint *)(unaff_x20 + 0x24);
      unaff_x29 = *(long *)(unaff_x20 + 0x18);
      iVar1 = *(int *)(*(long *)(unaff_x20 + 0x10) + 0x18);
      *(uint *)(unaff_x20 + 0x24) = *(uint *)(unaff_x20 + 0x24) + 1;
      if (unaff_x29 == 0) goto LAB_04e7bae0;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = unaff_w23 / iVar1;
      }
      in_stack_00000000._4_4_ = unaff_w23 - iVar2 * iVar1;
    }
    else {
      *(uint *)(unaff_x20 + 0x24) = uVar5 + 1;
    }
  }
  else {
    if (unaff_x29 == 0) goto LAB_04e7bae0;
    if (*(uint *)(unaff_x29 + 0x18) <= (uint)unaff_x28) goto LAB_04e7baa0;
    *(undefined4 *)(unaff_x20 + 0x28) = *(undefined4 *)(unaff_x29 + unaff_x28 * 0x18 + 0x24);
  }
  uVar5 = (uint)unaff_x28;
  if (uVar5 < *(uint *)(unaff_x29 + 0x18)) {
    lVar3 = unaff_x29 + (long)(int)uVar5 * 0x18;
    *(int *)(lVar3 + 0x20) = unaff_w23;
    *(undefined8 *)(lVar3 + 0x28) = in_stack_00000010;
    *(undefined8 *)(lVar3 + 0x30) = in_stack_00000018;
    lVar3 = *(long *)(unaff_x20 + 0x10);
    if (lVar3 == 0) {
LAB_04e7bae0:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if ((in_stack_00000000._4_4_ < *(uint *)(lVar3 + 0x18)) && (uVar5 < *(uint *)(unaff_x29 + 0x18))
       ) {
      piVar4 = (int *)(lVar3 + (long)(int)in_stack_00000000._4_4_ * 4 + 0x20);
      *(int *)(unaff_x29 + (long)(int)uVar5 * 0x18 + 0x24) = *piVar4 + -1;
      *piVar4 = uVar5 + 1;
      *(int *)(unaff_x20 + 0x20) = *(int *)(unaff_x20 + 0x20) + 1;
      *(int *)(unaff_x20 + 0x38) = *(int *)(unaff_x20 + 0x38) + 1;
      *in_stack_00000008 = uVar5;
      return 1;
    }
  }
LAB_04e7baa0:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


