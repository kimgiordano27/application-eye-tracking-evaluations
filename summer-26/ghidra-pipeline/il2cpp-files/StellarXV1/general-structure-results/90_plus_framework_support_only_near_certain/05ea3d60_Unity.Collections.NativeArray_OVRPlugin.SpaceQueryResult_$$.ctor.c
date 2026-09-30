/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 05ea3d60
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 106
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>___ctor(long param_1)

{
  undefined4 uVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  ulong unaff_x23;
  long unaff_x24;
  
  do {
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48))
              (param_1,*(undefined8 *)(unaff_x24 + unaff_x23 * 8),(long)*(int *)(unaff_x19 + 0x18),
               unaff_w22);
    unaff_x23 = unaff_x23 + 1;
    if ((long)(int)*(uint *)(unaff_x21 + 0x18) <= (long)unaff_x23) {
      *(long *)(unaff_x19 + 0x10) = *(long *)(unaff_x19 + 0x10) + (long)unaff_w22;
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        uVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x38))()
        ;
        *(undefined4 *)(unaff_x19 + 0x18) = uVar1;
        return;
      }
      break;
    }
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    param_1 = *(long *)(unaff_x19 + 0x20);
  } while (param_1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


