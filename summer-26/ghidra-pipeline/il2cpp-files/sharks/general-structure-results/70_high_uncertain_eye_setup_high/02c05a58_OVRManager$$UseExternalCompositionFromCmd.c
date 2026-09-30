/*
FUNCTION_NAME: OVRManager$$UseExternalCompositionFromCmd
ENTRY_POINT: 02c05a58
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__UseExternalCompositionFromCmd(undefined8 param_1)

{
  undefined *puVar1;
  bool in_ZR;
  bool in_CY;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  if (in_CY && !in_ZR) {
    *(undefined8 *)(unaff_x22 + 0x30) = param_1;
                    /* try { // try from 02c05a6c to 02d05a7b has its CatchHandler @ 02c05a7c */
    thunk_FUN_0188fd20((undefined8 *)(unaff_x22 + 0x30),param_1);
    uVar2 = FUN_02c145cc(0);
                    /* catch() { ... } // from try @ 02c05a30 with catch @ 02c05a7c
                       catch() { ... } // from try @ 02c05a6c with catch @ 02c05a7c */
                    /* try { // try from 02c05a80 to 02d05a83 has its CatchHandler @ 02c05a8c */
    if (3 < *(uint *)(unaff_x22 + 0x18)) {
                    /* try { // try from 02c05a84 to 02d05a8f has its CatchHandler @ 02c0572c */
      *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
                    /* catch() { ... } // from try @ 02c05a80 with catch @ 02c05a8c */
      thunk_FUN_0188fd20((undefined8 *)(unaff_x22 + 0x38),uVar2);
      puVar1 = PTR_DAT_0380ae20;
      if (4 < *(uint *)(unaff_x22 + 0x18)) {
        *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)PTR_DAT_037ff190;
        thunk_FUN_0188fd20((undefined8 *)(unaff_x22 + 0x40));
        uVar2 = FUN_02c108dc(*(undefined8 *)puVar1,0);
        if (5 < *(uint *)(unaff_x22 + 0x18)) {
          *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
          thunk_FUN_0188fd20();
          uVar2 = FUN_02a507f8();
          lVar3 = FUN_02c05794();
          if (lVar3 != 0) {
            uVar4 = FUN_02c145cc(0);
            uVar2 = FUN_02a503d0(uVar2,uVar4,lVar3,0);
            return uVar2;
          }
          return uVar2;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


