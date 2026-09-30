/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$get_Current
ENTRY_POINT: 04e7b9b0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_InternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__get_Current(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  long unaff_x20;
  int unaff_w23;
  long lVar7;
  uint *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  FUN_04e79ff8();
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    uVar1 = *(uint *)(unaff_x20 + 0x24);
    lVar7 = *(long *)(unaff_x20 + 0x18);
    iVar2 = *(int *)(*(long *)(unaff_x20 + 0x10) + 0x18);
    *(uint *)(unaff_x20 + 0x24) = uVar1 + 1;
    if (lVar7 != 0) {
      iVar4 = 0;
      if (iVar2 != 0) {
        iVar4 = unaff_w23 / iVar2;
      }
      uVar3 = unaff_w23 - iVar4 * iVar2;
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        lVar5 = lVar7 + (long)(int)uVar1 * 0x18;
        *(int *)(lVar5 + 0x20) = unaff_w23;
        *(undefined8 *)(lVar5 + 0x28) = in_stack_00000010;
        *(undefined8 *)(lVar5 + 0x30) = in_stack_00000018;
        lVar5 = *(long *)(unaff_x20 + 0x10);
        if (lVar5 == 0) goto LAB_04e7bae0;
        if ((uVar3 < *(uint *)(lVar5 + 0x18)) && (uVar1 < *(uint *)(lVar7 + 0x18))) {
          piVar6 = (int *)(lVar5 + (long)(int)uVar3 * 4 + 0x20);
          *(int *)(lVar7 + (long)(int)uVar1 * 0x18 + 0x24) = *piVar6 + -1;
          *piVar6 = uVar1 + 1;
          *(int *)(unaff_x20 + 0x20) = *(int *)(unaff_x20 + 0x20) + 1;
          *(int *)(unaff_x20 + 0x38) = *(int *)(unaff_x20 + 0x38) + 1;
          *in_stack_00000008 = uVar1;
          return 1;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
  }
LAB_04e7bae0:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


