/*
FUNCTION_NAME: OVRPlugin$$EnqueueSetupLayer
ENTRY_POINT: 05319194
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__EnqueueSetupLayer
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  ulong unaff_x21;
  long unaff_x24;
  long *unaff_x25;
  undefined4 uVar3;
  
  do {
                    /* catch() { ... } // from try @ 05318ffc with catch @ 05319194
                       try { // try from 05319194 to 054191e7 has its CatchHandler @ 05318d14 */
    lVar1 = *unaff_x25;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar1 = *unaff_x25;
    }
    if (**(long **)(lVar1 + 0xb8) == 0) goto LAB_053191ac;
    if ((long)*(int *)(**(long **)(lVar1 + 0xb8) + 0x18) <= (long)unaff_x21) {
                    /* catch() { ... } // from try @ 05318fb0 with catch @ 05319198
                       catch() { ... } // from try @ 05319190 with catch @ 05319198 */
                    /* catch() { ... } // from try @ 05318f9c with catch @ 0531919c
                       catch() { ... } // from try @ 05319160 with catch @ 0531919c */
                    /* catch() { ... } // from try @ 0531918c with catch @ 053191a0 */
                    /* catch() { ... } // from try @ 05319188 with catch @ 053191a4 */
                    /* catch() { ... } // from try @ 05318f78 with catch @ 053191a8 */
      return;
    }
    lVar1 = FUN_05319060();
    if (lVar1 == 0) goto LAB_053191ac;
    lVar1 = FUN_05318f10(lVar1,unaff_x21 & 0xffffffff);
    if (lVar1 != 0) {
      if (*unaff_x19 == 0) {
LAB_053191ac:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 05319184 with catch @ 053191ac */
        FUN_02f089c8();
      }
      lVar2 = FUN_05315da4();
      uVar3 = FUN_05318c34(lVar1);
      if (lVar2 == 0) goto LAB_053191ac;
      if (*(uint *)(lVar2 + 0x18) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 05319180 with catch @ 053191b0 */
        FUN_02f089d0();
      }
      lVar2 = lVar2 + unaff_x24;
      *(undefined4 *)(lVar2 + 0x20) = uVar3;
      *(undefined4 *)(lVar2 + 0x24) = param_2;
      *(undefined4 *)(lVar2 + 0x28) = param_3;
      *(undefined4 *)(lVar2 + 0x2c) = param_4;
    }
    unaff_x21 = unaff_x21 + 1;
    unaff_x24 = unaff_x24 + 0x10;
  } while( true );
}


