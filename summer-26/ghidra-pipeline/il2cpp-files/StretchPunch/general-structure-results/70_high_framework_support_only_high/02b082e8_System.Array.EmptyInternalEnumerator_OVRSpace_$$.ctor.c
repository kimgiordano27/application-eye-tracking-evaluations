/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRSpace>$$.ctor
ENTRY_POINT: 02b082e8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Array_EmptyInternalEnumerator<OVRSpace>___ctor(long param_1,long param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  uint in_w9;
  uint unaff_w21;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  if (in_w9 < param_3) {
    OVRManager_PassthroughCapabilities___ctor(0);
    in_w9 = *(uint *)(param_2 + 0x18);
  }
  uVar2 = *(uint *)(param_1 + 0x20);
  if ((int)(in_w9 - unaff_w21) < (int)(uVar2 - *(int *)(param_1 + 0x28))) {
    FUN_033b2d60(5,0);
    uVar2 = *(uint *)(param_1 + 0x20);
  }
  if (0 < (int)uVar2) {
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar4 = 0;
    lVar5 = lVar3 + 0x30;
    do {
      if (*(uint *)(lVar3 + 0x18) <= uVar4) {
LAB_02b083c0:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      if (-1 < *(int *)(lVar5 + -0x10)) {
        FUN_0306e238();
        if (*(uint *)(param_2 + 0x18) <= unaff_w21) goto LAB_02b083c0;
        lVar1 = param_2 + (long)(int)unaff_w21 * 0x10;
        unaff_w21 = unaff_w21 + 1;
        *(undefined8 *)(lVar1 + 0x28) = 0;
        *(undefined8 *)(lVar1 + 0x20) = 0;
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x18;
    } while (uVar2 != uVar4);
  }
  return;
}


