/*
FUNCTION_NAME: OVRPlugin$$GetDesiredEyeTextureFormat
ENTRY_POINT: 03683a14
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetDesiredEyeTextureFormat(undefined4 *param_1)

{
  int iVar1;
  long lVar2;
  undefined4 *in_x9;
  undefined4 *in_x10;
  long unaff_x19;
  long *unaff_x20;
  
  if (unaff_x20 != (long *)0x0) {
    (**(code **)(*unaff_x20 + 0x2a8))(*param_1,*in_x9,*in_x10,*(undefined4 *)(unaff_x19 + 0x5c));
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      lVar2 = FUN_040703d4(*(long *)(unaff_x19 + 0x20),0);
      if ((*(long *)(unaff_x19 + 0x20) != 0) &&
         (iVar1 = FUN_0407eaa0(*(long *)(unaff_x19 + 0x20),0), lVar2 != 0)) {
        FUN_04073314(lVar2,0 < iVar1,0);
        if ((*(long *)(unaff_x19 + 0x28) != 0) &&
           (lVar2 = FUN_040703d4(*(long *)(unaff_x19 + 0x28),0), lVar2 != 0)) {
          FUN_04073314(lVar2,*(char *)(unaff_x19 + 0x68) == '\0',0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


