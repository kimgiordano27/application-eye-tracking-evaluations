/*
FUNCTION_NAME: OVRPlugin$$set_rotation
ENTRY_POINT: 05d11984
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 104
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_rotation
               (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  long in_x9;
  long lVar2;
  long *unaff_x19;
  long unaff_x20;
  long lVar3;
  undefined4 uVar4;
  
  if (in_x9 != 0) {
    FUN_05cc3684(param_1 + 0x20,in_x9 + 0x20,0);
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if (((lVar2 != 0) && (lVar1 = *(long *)(lVar2 + 0x10), lVar1 != 0)) &&
       (lVar2 = *(long *)(lVar2 + 0x18), lVar2 != 0)) {
      lVar3 = *unaff_x19;
      if (*(int *)(*(long *)PTR_DAT_06fb63e8 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar4 = FUN_05d11f6c(lVar1 + 0x3c,lVar2 + 0x3c);
      if (lVar3 != 0) {
        *(undefined4 *)(lVar3 + 0x3c) = uVar4;
        *(undefined4 *)(lVar3 + 0x40) = param_3;
        *(undefined4 *)(lVar3 + 0x44) = param_4;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


