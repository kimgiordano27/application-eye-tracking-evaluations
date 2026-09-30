/*
FUNCTION_NAME: OVRManager$$remove_BoundaryVisibilityChanged
ENTRY_POINT: 073c2d34
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


void OVRManager__remove_BoundaryVisibilityChanged(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  float *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  float fVar3;
  float fVar4;
  float unaff_s9;
  float unaff_s10;
  float fVar5;
  float unaff_s11;
  float unaff_s13;
  float unaff_s14;
  float in_stack_00000008;
  
  *(undefined1 *)(unaff_x23 + 0xb5) = 1;
  puVar1 = PTR_DAT_08e6a6b8;
  if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  lVar2 = *(long *)(unaff_x19 + 0x58);
  if (lVar2 != 0) {
    fVar3 = (float)(**(code **)(lVar2 + 0x18))
                             (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
    *(float *)(unaff_x19 + 0x6c) = unaff_s10;
    *(float *)(unaff_x19 + 0x70) = unaff_s11;
    *(float *)(unaff_x19 + 0x74) = unaff_s9;
    lVar2 = *(long *)(unaff_x19 + 0x48);
    if (*(char *)(unaff_x23 + 0xb5) == '\0') {
                    /* try { // try from 073c2d90 to 074c2d97 has its CatchHandler @ 073c2ddc */
      FUN_03c8f898(PTR_DAT_08e6a6b8);
      *(undefined1 *)(unaff_x23 + 0xb5) = 1;
    }
                    /* try { // try from 073c2da4 to 074c2da7 has its CatchHandler @ 073c2dd8 */
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    /* try { // try from 073c2da8 to 074c2dcb has its CatchHandler @ 073c2c6c */
      thunk_FUN_03cd7500();
    }
    if (lVar2 != 0) {
                    /* try { // try from 073c2dcc to 074c2dcf has its CatchHandler @ 073c2dd4 */
                    /* try { // try from 073c2dd0 to 074c2df3 has its CatchHandler @ 073c2c6c */
      fVar4 = (float)FUN_0859c728(SQRT(unaff_s10 * unaff_s10 + unaff_s11 * unaff_s11 +
                                       unaff_s9 * unaff_s9),lVar2,0);
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 073c2dcc with catch @ 073c2dd4
                        */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 073c2da4 with catch @ 073c2dd8
                        */
      if (*(long *)(unaff_x19 + 0x40) != 0) {
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 073c2d90 with catch @ 073c2ddc
                        */
                    /* try { // try from 073c2df4 to 074c2df7 has its CatchHandler @ 073c2e18 */
                    /* try { // try from 073c2df8 to 074c2e1f has its CatchHandler @ 073c2c6c */
        fVar3 = (float)FUN_0859c728(SQRT(unaff_s13 * unaff_s13 + unaff_s14 * unaff_s14 +
                                         in_stack_00000008 * in_stack_00000008) / fVar3,
                                    *(long *)(unaff_x19 + 0x40),0);
        if (fVar4 <= fVar3) {
          fVar3 = fVar4;
        }
        FUN_073c2ec4(fVar3);
                    /* catch() { ... } // from try @ 073c2df4 with catch @ 073c2e18 */
                    /* try { // try from 073c2e20 to 074c2e27 has its CatchHandler @ 073c2e3c */
        if (*(int *)(unaff_x21 + 0x20) - 2U < 3) {
          lVar2 = *(long *)(unaff_x19 + 0x48);
          if (DAT_094100b5 == '\0') {
            FUN_03c8f898(PTR_DAT_08e6a6b8);
            DAT_094100b5 = '\x01';
          }
          fVar5 = *unaff_x20;
          fVar4 = unaff_x20[1];
          fVar3 = unaff_x20[2];
          if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          if (lVar2 == 0) goto LAB_073c2ec0;
          FUN_0859c728(SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3),lVar2,0);
          FUN_073c2ec4();
        }
        return;
      }
    }
  }
LAB_073c2ec0:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


