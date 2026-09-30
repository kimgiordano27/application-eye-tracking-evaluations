/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Equals
ENTRY_POINT: 03c6b77c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Equals(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x23;
  undefined8 uVar5;
  undefined8 uVar6;
  long in_stack_00000058;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0xc0) + 0x48);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02d9a2e0(lVar3);
  }
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if (*(long *)(*unaff_x20 + 0x40) != *(long *)(lVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60e88();
  }
  puVar2 = (undefined8 *)thunk_FUN_02d9d688();
  uVar4 = puVar2[2];
  uVar6 = puVar2[1];
  uVar5 = *puVar2;
  lVar3 = *(long *)(unaff_x19 + 0x10);
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  if (lVar3 != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      lVar3 = lVar3 + (long)(int)uVar1 * 0x18;
      *(undefined8 *)(lVar3 + 0x30) = uVar4;
      *(undefined8 *)(lVar3 + 0x28) = uVar6;
      *(undefined8 *)(lVar3 + 0x20) = uVar5;
    }
    else {
      FUN_03c6b678();
    }
    if (*(long *)(unaff_x23 + 0x28) == in_stack_00000058) {
      return *(int *)(unaff_x19 + 0x18) + -1;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


