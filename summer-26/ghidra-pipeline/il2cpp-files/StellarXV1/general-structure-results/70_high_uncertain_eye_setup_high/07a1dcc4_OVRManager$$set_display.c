/*
FUNCTION_NAME: OVRManager$$set_display
ENTRY_POINT: 07a1dcc4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_display(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float unaff_s8;
  
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07a1dc98 with catch @ 07a1dccc
                        */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07a1dbf0 with catch @ 07a1dcd0
                        */
  if (DAT_09885627 == '\0') {
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07a1dc60 with catch @ 07a1dcd4
                        */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07a1dc28 with catch @ 07a1dcd8
                        */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07a1dc7c with catch @ 07a1dcdc
                        */
    FUN_04077588(PTR_DAT_09285d58);
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07a1dbd4 with catch @ 07a1dce0
                        */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07a1dc44 with catch @ 07a1dce4
                        */
    DAT_09885627 = '\x01';
  }
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07a1dc0c with catch @ 07a1dce8
                        */
                    /* try { // try from 07a1dd04 to 07b1dd07 has its CatchHandler @ 07a1dd20 */
                    /* try { // try from 07a1dd08 to 07b1dd23 has its CatchHandler @ 07a1dae4 */
  fVar4 = ABS(unaff_s8);
  if (ABS(unaff_s8) <= 0.0) {
    fVar4 = 0.0;
  }
  fVar6 = **(float **)(*(long *)PTR_DAT_09285d58 + 0xb8) * 8.0;
                    /* catch() { ... } // from try @ 07a1dd04 with catch @ 07a1dd20 */
  fVar3 = fVar4 * DAT_01aecc74;
  if (fVar4 * DAT_01aecc74 <= fVar6) {
    fVar3 = fVar6;
  }
  if (fVar3 <= ABS(0.0 - unaff_s8)) {
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_089c6d28(*(long *)(param_1 + 0x30),1,0);
      lVar1 = *(long *)(param_1 + 0x30);
      if (lVar1 != 0) {
        lVar2 = *(long *)(param_1 + 0x60);
        *(undefined4 *)(lVar1 + 0x7c) = 0x3f800000;
        fVar4 = *(float *)(lVar1 + 0x74);
        if (unaff_s8 <= *(float *)(lVar1 + 0x74)) {
          fVar4 = unaff_s8;
        }
        *(float *)(lVar1 + 0x74) = fVar4;
        if (lVar2 != 0) {
          uVar5 = (**(code **)(lVar2 + 0x18))
                            (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
          *(undefined4 *)(param_1 + 0x78) = uVar5;
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  return;
}


