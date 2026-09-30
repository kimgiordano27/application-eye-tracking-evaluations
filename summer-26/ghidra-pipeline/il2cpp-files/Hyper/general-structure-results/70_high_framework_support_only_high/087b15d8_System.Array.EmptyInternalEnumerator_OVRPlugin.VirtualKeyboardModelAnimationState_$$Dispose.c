/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$Dispose
ENTRY_POINT: 087b15d8
PROGRAM: Hyper-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array_EmptyInternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__Dispose
               (ulong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x23;
  int unaff_w24;
  int unaff_w25;
  long unaff_x26;
  uint unaff_w27;
  int unaff_w28;
  uint unaff_w29;
  
  do {
    if ((param_1 & 1) != 0) {
      return unaff_w27;
    }
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    do {
      if (uVar1 <= unaff_w27) {
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      unaff_w27 = *(uint *)(unaff_x26 + (long)(int)unaff_w29 * (long)unaff_w28 + 4);
      if ((int)uVar1 <= unaff_w25) {
        FUN_08d9d998(0);
      }
      uVar1 = *(uint *)(unaff_x23 + 0x18);
      unaff_w25 = unaff_w25 + 1;
      if (uVar1 <= unaff_w27) {
        return unaff_w27;
      }
      unaff_w29 = unaff_w27;
    } while (*(int *)(unaff_x26 + (long)(int)unaff_w27 * (long)unaff_w28) != unaff_w24);
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04980b34(lVar3);
    }
    lVar4 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_087b15c4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_04980e68();
LAB_087b15c4:
    param_1 = (*(code *)*puVar2)();
  } while( true );
}


