/*
FUNCTION_NAME: OVRManager$$OnApplicationFocus
ENTRY_POINT: 027dfb1c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OnApplicationFocus(void)

{
  undefined8 uVar1;
  undefined8 uVar3;
  long unaff_x21;
  long unaff_x22;
  undefined *puVar2;
  
  *(undefined1 *)(unaff_x22 + 0x87) = 1;
  puVar2 = PTR_DAT_03cfcf68;
  if ((unaff_x21 != 0) && (puVar2 = PTR_DAT_03cfcf70, (*(byte *)(unaff_x21 + 0x30) & 5) != 0)) {
    if (*(int *)(*(long *)PTR_DAT_03cd7210 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_027dfbcc();
    return;
  }
  uVar1 = thunk_FUN_01a6ca08(puVar2);
  uVar1 = FUN_027b3d94(uVar1,0);
  thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
  uVar3 = thunk_FUN_01a89e68();
  FUN_0276a4a8(uVar3,uVar1,0);
  uVar1 = thunk_FUN_01a6ca08(PTR_DAT_03cfcf78);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar3,uVar1);
}


