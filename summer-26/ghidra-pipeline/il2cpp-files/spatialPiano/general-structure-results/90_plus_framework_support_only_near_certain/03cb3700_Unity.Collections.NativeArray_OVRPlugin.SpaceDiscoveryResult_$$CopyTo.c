/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopyTo
ENTRY_POINT: 03cb3700
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopyTo
               (long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  ulong uVar3;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_050e6f14(8);
  }
  if (*(int *)(param_1 + 0x18) < 1) {
    uVar1 = 1;
  }
  else {
    uVar3 = 0;
    do {
      lVar2 = *(long *)(param_1 + 0x10);
      if (lVar2 == 0) {
LAB_03cb377c:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(uint *)(lVar2 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      if (unaff_x19 == 0) goto LAB_03cb377c;
      uVar1 = (**(code **)(unaff_x19 + 0x18))
                        (*(undefined8 *)(unaff_x19 + 0x40),*(undefined8 *)(lVar2 + uVar3 * 8 + 0x20)
                         ,*(undefined8 *)(unaff_x19 + 0x28));
    } while (((uVar1 & 1) != 0) && (uVar3 = uVar3 + 1, (long)uVar3 < (long)*(int *)(param_1 + 0x18))
            );
  }
  return uVar1 & 1;
}


