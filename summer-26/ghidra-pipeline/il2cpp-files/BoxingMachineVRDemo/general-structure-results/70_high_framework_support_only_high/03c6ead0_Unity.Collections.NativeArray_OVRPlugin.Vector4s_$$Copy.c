/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Copy
ENTRY_POINT: 03c6ead0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03c6eb74) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Copy(ulong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  undefined8 in_stack_00000008;
  
  while( true ) {
    if ((param_1 & 1) != 0) {
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      (**(code **)(*unaff_x22 + 0x158))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x160));
      FUN_04fb6e20();
    }
    if (*(int *)(unaff_x19 + 0x18) < 1) break;
    unaff_w23 = unaff_w23 + -1;
    if (unaff_w23 < 1) {
      if (*(uint *)(unaff_x19 + 0x1c) < 0xffffc567) {
        *(uint *)(unaff_x19 + 0x1c) = *(uint *)(unaff_x19 + 0x1c) + 15000;
      }
      break;
    }
    lVar3 = *(long *)(unaff_x19 + 0x10);
    uVar1 = *(int *)(unaff_x19 + 0x18) - 1;
    *(uint *)(unaff_x19 + 0x18) = uVar1;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    puVar2 = (undefined8 *)(lVar3 + (ulong)uVar1 * 8 + 0x20);
    unaff_x22 = (long *)*puVar2;
    *puVar2 = 0;
    thunk_FUN_02dd37b4(puVar2,0);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    param_1 = FUN_04fa51f0();
  }
  if (in_stack_00000008._4_1_ != '\0') {
    thunk_FUN_02d6ec70();
  }
  return;
}


