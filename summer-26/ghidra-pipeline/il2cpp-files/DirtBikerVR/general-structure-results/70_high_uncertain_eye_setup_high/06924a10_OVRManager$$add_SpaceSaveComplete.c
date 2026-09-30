/*
FUNCTION_NAME: OVRManager$$add_SpaceSaveComplete
ENTRY_POINT: 06924a10
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


void OVRManager__add_SpaceSaveComplete(void)

{
  int iVar1;
  undefined4 uVar2;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar3;
  
  if (*(char *)(unaff_x21 + 0x18) == '\0') {
    iVar1 = FUN_06924588();
    if (iVar1 == 0) {
      return;
    }
    if ((*(byte *)(unaff_x21 + 0x19) & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_06924af8;
      FUN_069237f8(*(long *)(unaff_x20 + 0x10),*(undefined4 *)(unaff_x21 + 0x1c));
    }
    uVar3 = *(undefined8 *)(unaff_x21 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_084b3940 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar2 = FUN_06922948(uVar3);
    if (*(long *)(unaff_x20 + 0x10) == 0) {
LAB_06924af8:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_069237f8(*(long *)(unaff_x20 + 0x10),uVar2);
  }
  FUN_06924588();
  FUN_06924e28();
  return;
}


