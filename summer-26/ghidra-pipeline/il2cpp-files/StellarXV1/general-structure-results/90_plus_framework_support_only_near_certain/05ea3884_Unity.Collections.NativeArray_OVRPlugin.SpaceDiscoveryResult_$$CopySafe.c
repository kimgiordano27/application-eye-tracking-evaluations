/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopySafe
ENTRY_POINT: 05ea3884
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 109
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopySafe(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  ulong unaff_x23;
  long unaff_x24;
  
  do {
    if (param_1 == 0) {
LAB_05ea38f0:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_064c46a4(param_1,*(undefined8 *)(unaff_x24 + unaff_x23 * 8),(long)*(int *)(unaff_x19 + 0x18)
                 ,unaff_w22,*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48));
    unaff_x23 = unaff_x23 + 1;
    if ((long)(int)*(uint *)(unaff_x21 + 0x18) <= (long)unaff_x23) {
      lVar1 = *(long *)(unaff_x19 + 0x10) + (long)unaff_w22;
      *(long *)(unaff_x19 + 0x10) = lVar1;
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        uVar2 = FUN_064c4400(*(long *)(unaff_x19 + 0x20),lVar1,
                             *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x38));
        *(undefined4 *)(unaff_x19 + 0x18) = uVar2;
        return;
      }
      goto LAB_05ea38f0;
    }
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    param_1 = *(long *)(unaff_x19 + 0x20);
  } while( true );
}


