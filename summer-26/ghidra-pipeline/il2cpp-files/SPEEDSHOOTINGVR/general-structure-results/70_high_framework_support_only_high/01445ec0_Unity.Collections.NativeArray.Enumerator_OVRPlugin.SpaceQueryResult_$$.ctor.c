/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 01445ec0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>___ctor(ulong param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  ulong uVar2;
  undefined4 *puVar3;
  undefined8 in_stack_00000008;
  
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  uVar2 = 0;
  puVar3 = (undefined4 *)(unaff_x22 + 0x2c);
  while (uVar2 < *(uint *)(unaff_x22 + 0x18)) {
    if (-1 < (int)puVar3[-3]) {
      in_stack_00000008 = 0;
      FUN_01714050(&stack0x00000008,puVar3[-1],*puVar3,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x130));
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_w21) break;
      lVar1 = (long)(int)unaff_w21;
      unaff_w21 = unaff_w21 + 1;
      *(undefined8 *)(unaff_x20 + lVar1 * 8 + 0x20) = in_stack_00000008;
    }
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 4;
    if ((param_1 & 0xffffffff) == uVar2) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc53c();
}


