/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Quatf>$$get_Current
ENTRY_POINT: 04fd6ca4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__get_Current(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long unaff_x20;
  int *unaff_x22;
  uint unaff_w24;
  long unaff_x26;
  int unaff_w27;
  undefined8 unaff_x28;
  undefined8 in_stack_00000028;
  
  if (*(int *)(unaff_x20 + 0x28) < 1) {
    uVar6 = *(uint *)(unaff_x20 + 0x20);
    if (uVar6 == unaff_w24) {
      FUN_04fd7204();
      lVar5 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x20) = unaff_w24 + 1;
      if (lVar5 == 0) goto LAB_04fd6e68;
      uVar1 = *(uint *)(lVar5 + 0x18);
      iVar3 = 0;
      if (uVar1 != 0) {
        iVar3 = unaff_w27 / (int)uVar1;
      }
      uVar2 = unaff_w27 - iVar3 * uVar1;
      if (uVar1 <= uVar2) goto LAB_04fd6e64;
      lVar4 = *(long *)(unaff_x20 + 0x18);
      unaff_x22 = (int *)(lVar5 + (ulong)uVar2 * 4 + 0x20);
    }
    else {
      lVar4 = *(long *)(unaff_x20 + 0x18);
      *(uint *)(unaff_x20 + 0x20) = uVar6 + 1;
    }
    if (lVar4 == 0) {
LAB_04fd6e68:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_04fd6e64;
    lVar4 = lVar4 + (long)(int)uVar6 * 0x18;
  }
  else {
    uVar6 = *(uint *)(unaff_x20 + 0x24);
    *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
    if (unaff_w24 <= uVar6) {
LAB_04fd6e64:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    lVar4 = unaff_x26 + (long)(int)uVar6 * 0x18;
    *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(lVar4 + 0x24);
  }
  *(int *)(lVar4 + 0x20) = unaff_w27;
  *(int *)(lVar4 + 0x24) = *unaff_x22 + -1;
  *(undefined4 *)(lVar4 + 0x28) = in_stack_00000028._4_4_;
  *(undefined8 *)(lVar4 + 0x30) = unaff_x28;
  LeanTween__value();
  *unaff_x22 = uVar6 + 1;
  return 1;
}


