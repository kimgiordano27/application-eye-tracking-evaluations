/*
FUNCTION_NAME: FUN_02452a38
ENTRY_POINT: 02452a38
PROGRAM: Lovesick-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_7
*/


void FUN_02452a38(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
                    /* catch() { ... } // from try @ 02452968 with catch @ 02452a38 */
                    /* catch() { ... } // from try @ 024529a4 with catch @ 02452a3c */
                    /* catch() { ... } // from try @ 0245299c with catch @ 02452a40 */
                    /* catch() { ... } // from try @ 02452994 with catch @ 02452a44 */
                    /* catch() { ... } // from try @ 02452964 with catch @ 02452a48 */
                    /* catch() { ... } // from try @ 02452960 with catch @ 02452a4c */
  if ((DAT_037824b1 & 1) == 0) {
    thunk_FUN_00d48444(System_Runtime_Remoting_Metadata_SoapMethodAttribute_TypeInfo);
    DAT_037824b1 = 1;
  }
  puVar1 = System_Runtime_Remoting_Metadata_SoapMethodAttribute_TypeInfo;
  if ((param_2 != 0) && (lVar6 = *(long *)(param_2 + 0x20), lVar6 != 0)) {
    lVar5 = *(long *)(lVar6 + 0x38);
    do {
      if (lVar5 == 0)
      goto UnityEngine_XR_ARSubsystems_XRFaceSubsystemDescriptor__get_supportsEyeTracking;
      lVar4 = *(long *)(lVar5 + 0x28);
      lVar7 = *(long *)(lVar5 + 0x38);
      *(undefined8 *)(lVar5 + 0x48) = 0;
      if (lVar4 == 0)
      goto UnityEngine_XR_ARSubsystems_XRFaceSubsystemDescriptor__get_supportsEyeTracking;
      if (*(long *)(lVar4 + 0x48) == 0) {
        lVar3 = *(long *)(lVar5 + 0x40);
        if (*(long *)(lVar5 + 0x30) == lVar5) {
          FUN_02452524(lVar3,0);
        }
        else {
          if (lVar3 == 0)
          goto UnityEngine_XR_ARSubsystems_XRFaceSubsystemDescriptor__get_supportsEyeTracking;
          *(long *)(lVar3 + 0x20) = *(long *)(lVar5 + 0x30);
          FUN_02452634(lVar5,*(undefined8 *)(lVar4 + 0x38));
        }
        lVar4 = *(long *)(lVar5 + 0x28);
        if (lVar4 == 0)
        goto UnityEngine_XR_ARSubsystems_XRFaceSubsystemDescriptor__get_supportsEyeTracking;
        lVar3 = *(long *)(lVar4 + 0x40);
        if (*(long *)(lVar4 + 0x30) == lVar4) {
          FUN_02452524(lVar3,0);
        }
        else {
          if (lVar3 == 0)
          goto UnityEngine_XR_ARSubsystems_XRFaceSubsystemDescriptor__get_supportsEyeTracking;
          *(long *)(lVar3 + 0x20) = *(long *)(lVar4 + 0x30);
          if (*(long *)(lVar4 + 0x28) == 0)
          goto UnityEngine_XR_ARSubsystems_XRFaceSubsystemDescriptor__get_supportsEyeTracking;
          FUN_02452634(lVar4,*(undefined8 *)(*(long *)(lVar4 + 0x28) + 0x38));
        }
        FUN_024527ac(lVar5);
      }
      bVar2 = lVar5 != lVar6;
      lVar5 = lVar7;
    } while (bVar2);
    lVar6 = *(long *)(param_2 + 0x18);
    if (lVar6 != 0) {
      lVar5 = *(long *)(param_2 + 0x10);
      *(long *)(lVar6 + 0x10) = lVar5;
      if (lVar5 != 0) {
        *(long *)(lVar5 + 0x18) = lVar6;
        FUN_0136b3ec(param_2,*(undefined8 *)puVar1);
        return;
      }
    }
  }
UnityEngine_XR_ARSubsystems_XRFaceSubsystemDescriptor__get_supportsEyeTracking:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


