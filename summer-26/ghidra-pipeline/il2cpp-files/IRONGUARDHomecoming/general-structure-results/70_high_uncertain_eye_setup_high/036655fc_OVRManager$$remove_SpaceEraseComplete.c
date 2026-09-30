/*
FUNCTION_NAME: OVRManager$$remove_SpaceEraseComplete
ENTRY_POINT: 036655fc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_SpaceEraseComplete(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar1 = FUN_036653b4();
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (unaff_x20 != 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
    if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0) ==
        0) {
      thunk_FUN_01ee6d7c();
    }
    uVar1 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                      (uVar3,0,0);
    if ((uVar1 & 1) == 0) {
      lVar2 = *(long *)(unaff_x19 + 0x58);
    }
    else {
      lVar2 = *(long *)(unaff_x19 + 0x60);
    }
    if (lVar2 != 0) {
      FUN_04083c08(lVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


