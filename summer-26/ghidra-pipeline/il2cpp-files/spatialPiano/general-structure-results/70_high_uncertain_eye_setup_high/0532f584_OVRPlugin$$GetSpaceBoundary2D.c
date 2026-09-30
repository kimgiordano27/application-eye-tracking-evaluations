/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundary2D
ENTRY_POINT: 0532f584
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceBoundary2D(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  
  if (param_1 != 0) {
    if (2 < *(uint *)(unaff_x20 + 3)) {
      unaff_x20[6] = unaff_x21;
      lVar1 = thunk_FUN_02f45270(*unaff_x22);
      FUN_0532f640(lVar1,3);
      if ((lVar1 != 0) &&
         (lVar2 = thunk_FUN_02f45174(lVar1,*(undefined8 *)(*unaff_x20 + 0x40)), lVar2 == 0))
      goto LAB_0532f630;
      if ((*(uint *)(unaff_x20 + 3) & 0xfffffffc) != 0) {
        unaff_x20[7] = lVar1;
        lVar1 = thunk_FUN_02f45270(*unaff_x22);
        FUN_0532f640(lVar1,4);
        if ((lVar1 != 0) &&
           (lVar2 = thunk_FUN_02f45174(lVar1,*(undefined8 *)(*unaff_x20 + 0x40)), lVar2 == 0))
        goto LAB_0532f630;
        if (4 < *(uint *)(unaff_x20 + 3)) {
          unaff_x20[8] = lVar1;
          *(long **)(unaff_x19 + 0x28) = unaff_x20;
          FUN_05116b38();
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
LAB_0532f630:
  uVar3 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar3,0);
}


