/*
FUNCTION_NAME: OVRManager$$ReturnToLauncher
ENTRY_POINT: 06930b68
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__ReturnToLauncher(void)

{
  int iVar1;
  long lVar2;
  long *unaff_x20;
  
  FUN_061c1960(&stack0x00000018);
  if ((*unaff_x20 != 0) && (lVar2 = *(long *)(*unaff_x20 + 0x60), lVar2 != 0)) {
    iVar1 = *(int *)(lVar2 + 0x18);
    *(undefined4 *)(lVar2 + 0x18) = 0;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (0 < iVar1) {
      Newtonsoft_Json_Schema_ValidationEventArgs__get_Path(*(undefined8 *)(lVar2 + 0x10),0,iVar1,0);
    }
    FUN_0692f7b4();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


