/*
FUNCTION_NAME: OVRManager$$UseExternalCompositionFromCmd
ENTRY_POINT: 073c6728
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__UseExternalCompositionFromCmd(undefined4 param_1)

{
  bool bVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x21;
  long lVar4;
  
  if (unaff_x20 != 0) {
    *(undefined4 *)(unaff_x20 + 0xac) = param_1;
    lVar4 = *(long *)(unaff_x19 + 0x40);
    uVar3 = *(undefined8 *)(unaff_x19 + 0x28);
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar2 = FUN_085dfaac(uVar3,0,0);
    if ((uVar2 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_073c67b8;
      bVar1 = *(int *)(*(long *)(unaff_x19 + 0x28) + 0x40) == 0;
    }
    else {
      bVar1 = true;
    }
    if (lVar4 != 0) {
      *(bool *)(lVar4 + 0xb4) = bVar1;
      if ((*(long *)(unaff_x19 + 0x20) != 0) && (*(long *)(unaff_x19 + 0x40) != 0)) {
        *(bool *)(*(long *)(unaff_x19 + 0x40) + 0xa8) =
             *(int *)(*(long *)(unaff_x19 + 0x20) + 0x84) == 2;
        FUN_073c3b5c();
                    /* try { // try from 073c67b0 to 074c67b7 has its CatchHandler @ 073c680c */
        return;
      }
    }
  }
LAB_073c67b8:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


