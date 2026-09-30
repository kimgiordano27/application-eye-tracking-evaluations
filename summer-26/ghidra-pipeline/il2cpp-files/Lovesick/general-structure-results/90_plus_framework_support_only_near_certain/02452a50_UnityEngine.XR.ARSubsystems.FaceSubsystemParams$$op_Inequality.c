/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.FaceSubsystemParams$$op_Inequality
ENTRY_POINT: 02452a50
PROGRAM: Lovesick-libil2cpp.so
SCORE: 101
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_7
*/


void UnityEngine_XR_ARSubsystems_FaceSubsystemParams__op_Inequality(ulong param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long lVar5;
  long lVar6;
  
                    /* catch() { ... } // from try @ 0245295c with catch @ 02452a50 */
  if ((param_1 & 1) == 0) {
                    /* catch() { ... } // from try @ 02452958 with catch @ 02452a54 */
                    /* catch() { ... } // from try @ 02452954 with catch @ 02452a58 */
                    /* catch() { ... } // from try @ 02452950 with catch @ 02452a5c */
    thunk_FUN_00d48444(System_Runtime_Remoting_Metadata_SoapMethodAttribute_TypeInfo);
                    /* catch() { ... } // from try @ 0245294c with catch @ 02452a60 */
                    /* catch() { ... } // from try @ 02452948 with catch @ 02452a64 */
    *(undefined1 *)(unaff_x20 + 0x4b1) = 1;
  }
                    /* catch() { ... } // from try @ 02452464 with catch @ 02452a68 */
                    /* catch() { ... } // from try @ 02452378 with catch @ 02452a6c */
                    /* catch() { ... } // from try @ 024521a0 with catch @ 02452a70 */
  if ((unaff_x19 != 0) && (lVar5 = *(long *)(unaff_x19 + 0x20), lVar5 != 0)) {
                    /* catch() { ... } // from try @ 0245212c with catch @ 02452a74 */
                    /* catch() { ... } // from try @ 024521c0 with catch @ 02452a78 */
                    /* catch() { ... } // from try @ 02452278 with catch @ 02452a7c */
    lVar4 = *(long *)(lVar5 + 0x38);
    do {
                    /* catch() { ... } // from try @ 02452100 with catch @ 02452a80 */
      if (lVar4 == 0)
      goto UnityEngine_XR_ARSubsystems_XRFaceSubsystemDescriptor__get_supportsEyeTracking;
                    /* catch() { ... } // from try @ 02452344 with catch @ 02452a84 */
      lVar3 = *(long *)(lVar4 + 0x28);
                    /* catch() { ... } // from try @ 02452468 with catch @ 02452a88 */
      lVar6 = *(long *)(lVar4 + 0x38);
                    /* catch() { ... } // from try @ 024523cc with catch @ 02452a8c */
      *(undefined8 *)(lVar4 + 0x48) = 0;
                    /* catch() { ... } // from try @ 024523a8 with catch @ 02452a90 */
      if (lVar3 == 0)
      goto UnityEngine_XR_ARSubsystems_XRFaceSubsystemDescriptor__get_supportsEyeTracking;
                    /* catch() { ... } // from try @ 024523f0 with catch @ 02452a94 */
                    /* catch() { ... } // from try @ 024521dc with catch @ 02452a98 */
      if (*(long *)(lVar3 + 0x48) == 0) {
        lVar2 = *(long *)(lVar4 + 0x40);
        if (*(long *)(lVar4 + 0x30) == lVar4) {
          FUN_02452524(lVar2,0);
        }
        else {
          if (lVar2 == 0)
          goto UnityEngine_XR_ARSubsystems_XRFaceSubsystemDescriptor__get_supportsEyeTracking;
          *(long *)(lVar2 + 0x20) = *(long *)(lVar4 + 0x30);
          FUN_02452634(lVar4,*(undefined8 *)(lVar3 + 0x38));
        }
        lVar3 = *(long *)(lVar4 + 0x28);
        if (lVar3 == 0)
        goto UnityEngine_XR_ARSubsystems_XRFaceSubsystemDescriptor__get_supportsEyeTracking;
        lVar2 = *(long *)(lVar3 + 0x40);
        if (*(long *)(lVar3 + 0x30) == lVar3) {
          FUN_02452524(lVar2,0);
        }
        else {
          if (lVar2 == 0)
          goto UnityEngine_XR_ARSubsystems_XRFaceSubsystemDescriptor__get_supportsEyeTracking;
          *(long *)(lVar2 + 0x20) = *(long *)(lVar3 + 0x30);
          if (*(long *)(lVar3 + 0x28) == 0)
          goto UnityEngine_XR_ARSubsystems_XRFaceSubsystemDescriptor__get_supportsEyeTracking;
          FUN_02452634(lVar3,*(undefined8 *)(*(long *)(lVar3 + 0x28) + 0x38));
        }
        FUN_024527ac(lVar4);
      }
      bVar1 = lVar4 != lVar5;
      lVar4 = lVar6;
    } while (bVar1);
    lVar5 = *(long *)(unaff_x19 + 0x18);
    if (lVar5 != 0) {
      lVar4 = *(long *)(unaff_x19 + 0x10);
      *(long *)(lVar5 + 0x10) = lVar4;
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x18) = lVar5;
        FUN_0136b3ec();
        return;
      }
    }
  }
UnityEngine_XR_ARSubsystems_XRFaceSubsystemDescriptor__get_supportsEyeTracking:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


