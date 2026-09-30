/*
FUNCTION_NAME: OVRPlugin$$SaveSpaces
ENTRY_POINT: 03230520
PROGRAM: vrfs-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin__SaveSpaces(void)

{
  undefined *puVar1;
  int iVar2;
  long unaff_x19;
  
  FUN_0386f860();
  if (*(long *)(unaff_x19 + 0xd0) != 0) {
    FUN_0386f860(*(long *)(unaff_x19 + 0xd0),*(undefined8 *)(unaff_x19 + 200));
    OVRPlugin__EraseSpaces();
    if (*(long *)(unaff_x19 + 0x168) != 0) {
      iVar2 = FUN_048600e0(*(long *)(unaff_x19 + 0x168),0);
      if (iVar2 < 1) {
        if (*(long *)(unaff_x19 + 0x170) == 0) goto LAB_03230600;
        iVar2 = FUN_048600e0(*(long *)(unaff_x19 + 0x170),0);
        if (iVar2 < 1) {
          if (*(long *)(unaff_x19 + 0x178) == 0) goto LAB_03230600;
          iVar2 = FUN_048600e0(*(long *)(unaff_x19 + 0x178),0);
          if (iVar2 < 1) {
            if (*(long *)(unaff_x19 + 0x180) == 0) goto LAB_03230600;
            iVar2 = FUN_048600e0(*(long *)(unaff_x19 + 0x180),0);
            if (iVar2 < 1) {
              return;
            }
          }
        }
      }
      puVar1 = PTR_DAT_06e38e70;
      if (*(int *)(*(long *)PTR_DAT_06e52cd8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      FUN_04866ea4(*(undefined8 *)puVar1);
      return;
    }
  }
LAB_03230600:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


