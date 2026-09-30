/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 02161654
PROGRAM: gunraiders-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__Insert<OVRPlugin_SpaceQueryResult>(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0xc10) = 1;
  FUN_02080ba8();
  uVar1 = FUN_0230c12c();
  *(undefined8 *)(unaff_x19 + 0x70) = uVar1;
  lVar2 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 8);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x30) == 4) {
      *(float *)(unaff_x19 + 0xa0) = *(float *)(unaff_x19 + 0xa0) * DAT_00b9315c;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


