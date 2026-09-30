/*
FUNCTION_NAME: OVRPlugin$$set_rotation
ENTRY_POINT: 07a32bd4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 104
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__set_rotation(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  
  FUN_04077588(PTR_DAT_092f0400);
  *(undefined1 *)(unaff_x21 + 0x24e) = 1;
  lVar3 = *(long *)(unaff_x19 + 0x10);
  if (lVar3 != 0) {
    if (*(uint *)(lVar3 + 0x18) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    iVar1 = *(int *)(lVar3 + (long)(int)unaff_w20 * 4 + 0x20);
    if (iVar1 < 0) {
      return 0;
    }
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      uVar2 = FUN_05c26ab8(*(long *)(unaff_x19 + 0x18),iVar1,*(undefined8 *)PTR_DAT_092f0400);
      return uVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


