/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor$$.ctor
ENTRY_POINT: 02452a9c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 101
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_7
*/


void UnityEngine_XR_ARSubsystems_XRFaceSubsystemDescriptor___ctor(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  
  do {
                    /* catch() { ... } // from try @ 024520b8 with catch @ 02452a9c */
                    /* catch() { ... } // from try @ 02452158 with catch @ 02452aa0 */
    lVar1 = *(long *)(unaff_x20 + 0x40);
                    /* catch() { ... } // from try @ 0245209c with catch @ 02452aa4 */
                    /* catch() { ... } // from try @ 02452218 with catch @ 02452aa8 */
    if (*(long *)(unaff_x20 + 0x30) == unaff_x20) {
                    /* catch() { ... } // from try @ 02452560 with catch @ 02452ac4 */
                    /* catch() { ... } // from try @ 024522ec with catch @ 02452ac8 */
      FUN_02452524(lVar1,0);
    }
    else {
                    /* catch() { ... } // from try @ 02452084 with catch @ 02452aac */
      if (lVar1 == 0) {
UnityEngine_XR_ARSubsystems_XRFaceSubsystemDescriptor__get_supportsEyeTracking:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
                    /* catch() { ... } // from try @ 02452250 with catch @ 02452ab0 */
      *(long *)(lVar1 + 0x20) = *(long *)(unaff_x20 + 0x30);
                    /* catch() { ... } // from try @ 024520d8 with catch @ 02452ab4 */
                    /* catch() { ... } // from try @ 0245206c with catch @ 02452ab8 */
                    /* catch() { ... } // from try @ 02452430 with catch @ 02452abc */
      FUN_02452634(unaff_x20,*(undefined8 *)(param_1 + 0x38));
                    /* catch() { ... } // from try @ 02452404 with catch @ 02452ac0 */
    }
                    /* catch() { ... } // from try @ 02452330 with catch @ 02452acc */
    lVar1 = *(long *)(unaff_x20 + 0x28);
                    /* catch() { ... } // from try @ 0245261c with catch @ 02452ad0 */
    if (lVar1 == 0)
    goto UnityEngine_XR_ARSubsystems_XRFaceSubsystemDescriptor__get_supportsEyeTracking;
                    /* catch() { ... } // from try @ 024525b0 with catch @ 02452ad4 */
                    /* catch() { ... } // from try @ 02452538 with catch @ 02452ad8 */
    lVar2 = *(long *)(lVar1 + 0x40);
                    /* catch() { ... } // from try @ 02452520 with catch @ 02452adc */
                    /* catch() { ... } // from try @ 024522b8 with catch @ 02452ae0 */
    if (*(long *)(lVar1 + 0x30) == lVar1) {
                    /* catch() { ... } // from try @ 024524cc with catch @ 02452b00 */
      FUN_02452524(lVar2,0);
    }
    else {
                    /* catch() { ... } // from try @ 024522fc with catch @ 02452ae4 */
      if (lVar2 == 0)
      goto UnityEngine_XR_ARSubsystems_XRFaceSubsystemDescriptor__get_supportsEyeTracking;
      *(long *)(lVar2 + 0x20) = *(long *)(lVar1 + 0x30);
                    /* catch() { ... } // from try @ 024525f0 with catch @ 02452aec */
                    /* catch() { ... } // from try @ 02452588 with catch @ 02452af0 */
      if (*(long *)(lVar1 + 0x28) == 0)
      goto UnityEngine_XR_ARSubsystems_XRFaceSubsystemDescriptor__get_supportsEyeTracking;
                    /* catch() { ... } // from try @ 024524fc with catch @ 02452af4 */
                    /* catch() { ... } // from try @ 02452494 with catch @ 02452af8 */
      FUN_02452634(lVar1,*(undefined8 *)(*(long *)(lVar1 + 0x28) + 0x38));
                    /* catch() { ... } // from try @ 024524ac with catch @ 02452afc */
    }
    FUN_024527ac(unaff_x20);
    lVar1 = unaff_x20;
    do {
      unaff_x20 = unaff_x23;
      if (lVar1 == unaff_x22) {
        lVar1 = *(long *)(unaff_x19 + 0x18);
                    /* try { // try from 02452b24 to 02552b27 has its CatchHandler @ 02452b50 */
        if (lVar1 != 0) {
                    /* try { // try from 02452b28 to 02552b5f has its CatchHandler @ 024519a8 */
          lVar2 = *(long *)(unaff_x19 + 0x10);
          *(long *)(lVar1 + 0x10) = lVar2;
          if (lVar2 != 0) {
            *(long *)(lVar2 + 0x18) = lVar1;
            FUN_0136b3ec();
            return;
          }
        }
        goto UnityEngine_XR_ARSubsystems_XRFaceSubsystemDescriptor__get_supportsEyeTracking;
      }
      if (unaff_x20 == 0)
      goto UnityEngine_XR_ARSubsystems_XRFaceSubsystemDescriptor__get_supportsEyeTracking;
      param_1 = *(long *)(unaff_x20 + 0x28);
      unaff_x23 = *(long *)(unaff_x20 + 0x38);
      *(undefined8 *)(unaff_x20 + 0x48) = 0;
      if (param_1 == 0)
      goto UnityEngine_XR_ARSubsystems_XRFaceSubsystemDescriptor__get_supportsEyeTracking;
      lVar1 = unaff_x20;
    } while (*(long *)(param_1 + 0x48) != 0);
  } while( true );
}


