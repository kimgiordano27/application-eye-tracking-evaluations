/*
FUNCTION_NAME: OVRManager$$remove_HMDAcquired
ENTRY_POINT: 036635d4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_HMDAcquired(void)

{
  long lVar1;
  long unaff_x19;
  long *plVar2;
  
  if (*(char *)(unaff_x19 + 0xa0) == '\0') {
    return;
  }
  lVar1 = FUN_040703d4();
  if (lVar1 != 0) {
    lVar1 = FUN_023360e0(lVar1,*(undefined8 *)
                                Method_System_Collections_ObjectModel_ReadOnlyCollection<ElementInit>_get_Count__
                        );
    plVar2 = (long *)(unaff_x19 + 0x70);
    *plVar2 = lVar1;
    thunk_FUN_01f51358(plVar2,lVar1);
    if (*plVar2 != 0) {
      FUN_0403ba28(DAT_00c925a0,*plVar2,0);
      if (*plVar2 != 0) {
        FUN_0406f8a4(*plVar2,0,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


