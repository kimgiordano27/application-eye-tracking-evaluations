/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$CopyFrom
ENTRY_POINT: 05cd269c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05cd2770) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__CopyFrom(void)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong uVar8;
  undefined8 in_stack_00000008;
  
  if (0 < (int)*(ulong *)(unaff_x21 + 0x18)) {
    uVar8 = 0;
    uVar4 = *(ulong *)(unaff_x21 + 0x18) & 0xffffffff;
    do {
      if (uVar4 <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d550();
      }
      lVar2 = *(long *)(unaff_x22 + 0x110);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      uVar3 = *(undefined8 *)(unaff_x21 + 0x20 + uVar8 * 8);
      lVar5 = *(long *)(lVar2 + 0x10);
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x38);
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar2 + 0x18) = uVar1 + 1;
        puVar6 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
        *puVar6 = uVar3;
        thunk_FUN_03d1023c(puVar6);
      }
      else {
        FUN_05a39734(lVar2,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      uVar4 = (ulong)*(uint *)(unaff_x21 + 0x18);
      uVar8 = uVar8 + 1;
    } while ((long)uVar8 < (long)(int)*(uint *)(unaff_x21 + 0x18));
  }
  if (in_stack_00000008._4_1_ != '\0') {
    thunk_FUN_03d180a8();
  }
  return;
}


