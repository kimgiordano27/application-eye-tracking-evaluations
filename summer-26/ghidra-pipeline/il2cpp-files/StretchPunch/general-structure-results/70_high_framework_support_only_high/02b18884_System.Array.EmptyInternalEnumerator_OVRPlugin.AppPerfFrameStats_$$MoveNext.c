/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.AppPerfFrameStats>$$MoveNext
ENTRY_POINT: 02b18884
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_AppPerfFrameStats>__MoveNext(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  int unaff_w23;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  undefined4 unaff_w29;
  undefined8 in_stack_00000008;
  
  while (uVar4 = (**(code **)(param_1 + 0x1b8))(), (uVar4 & 1) == 0) {
    uVar4 = (ulong)*(uint *)(unaff_x26 + 0x18);
    do {
      if ((uint)uVar4 <= (uint)unaff_x19) goto LAB_02b18a50;
      uVar6 = *(uint *)(unaff_x26 + unaff_x19 * unaff_x25 + 0x24);
      if ((int)(uint)uVar4 <= unaff_w23) {
        FUN_033b37f8(0);
      }
      uVar4 = *(ulong *)(unaff_x26 + 0x18);
      unaff_w23 = unaff_w23 + 1;
      if ((uint)uVar4 <= uVar6) {
        if (*(int *)(unaff_x21 + 0x28) < 1) {
          uVar6 = *(uint *)(unaff_x21 + 0x20);
          if (uVar6 == (uint)uVar4) {
            FUN_02b18e14();
            lVar5 = *(long *)(unaff_x21 + 0x10);
            *(uint *)(unaff_x21 + 0x20) = uVar6 + 1;
            if (lVar5 == 0) goto LAB_02b18a54;
            uVar1 = *(uint *)(lVar5 + 0x18);
            iVar2 = 0;
            if (uVar1 != 0) {
              iVar2 = unaff_w27 / (int)uVar1;
            }
            uVar3 = unaff_w27 - iVar2 * uVar1;
            if (uVar1 <= uVar3) goto LAB_02b18a50;
            unaff_x26 = *(long *)(unaff_x21 + 0x18);
            unaff_x28 = (int *)(lVar5 + (ulong)uVar3 * 4 + 0x20);
          }
          else {
            unaff_x26 = *(long *)(unaff_x21 + 0x18);
            *(uint *)(unaff_x21 + 0x20) = uVar6 + 1;
          }
          if (unaff_x26 == 0) goto LAB_02b18a54;
          if (*(uint *)(unaff_x26 + 0x18) <= uVar6) goto LAB_02b18a50;
          lVar5 = (long)(int)uVar6;
        }
        else {
          *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x21 + 0x28) + -1;
          uVar6 = *(uint *)(unaff_x21 + 0x24);
          if (*(uint *)(unaff_x26 + 0x18) <= uVar6) goto LAB_02b18a50;
          lVar5 = (long)(int)uVar6;
          *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(unaff_x26 + lVar5 * 0x18 + 0x24);
        }
        lVar5 = unaff_x26 + lVar5 * 0x18;
        *(int *)(lVar5 + 0x20) = unaff_w27;
        iVar2 = *unaff_x28;
        *(undefined8 *)(lVar5 + 0x28) = unaff_x20;
        *(int *)(lVar5 + 0x24) = iVar2 + -1;
        thunk_FUN_01e10808((undefined8 *)(lVar5 + 0x28));
        *(undefined4 *)(lVar5 + 0x30) = unaff_w29;
        *unaff_x28 = uVar6 + 1;
        return 1;
      }
      unaff_x19 = (long)(int)uVar6;
    } while (*(int *)(unaff_x26 + (long)(int)uVar6 * (long)(int)unaff_x25 + 0x20) != unaff_w27);
    if (unaff_x24 == (long *)0x0) {
LAB_02b18a54:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    param_1 = *unaff_x24;
  }
  if (in_stack_00000008._4_1_ == '\x02') {
    FUN_033b36f4();
  }
  else if (in_stack_00000008._4_1_ == '\x01') {
    if ((uint)unaff_x19 < *(uint *)(unaff_x26 + 0x18)) {
      *(undefined4 *)(unaff_x26 + unaff_x19 * 0x18 + 0x30) = unaff_w29;
      return 1;
    }
LAB_02b18a50:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db78();
  }
  return 0;
}


