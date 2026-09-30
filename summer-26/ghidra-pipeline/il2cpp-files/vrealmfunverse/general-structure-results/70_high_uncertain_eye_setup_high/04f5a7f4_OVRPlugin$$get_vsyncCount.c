/*
FUNCTION_NAME: OVRPlugin$$get_vsyncCount
ENTRY_POINT: 04f5a7f4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__get_vsyncCount(long param_1)

{
  long lVar1;
  
  if ((DAT_066c9aa6 & 1) == 0) {
    FUN_02b3c81c(
                System_Collections_Generic_Dictionary<FirebaseFirestore_FirestoreInstanceCacheKey,_FirebaseFirestore>_TypeInfo
                );
    FUN_02b3c81c(
                System_Collections_Generic_Dictionary<JointRotationActiveState_JointRotationFeatureConfig,_JointRotationActiveState_JointRotationFeatureState>_TypeInfo
                );
    DAT_066c9aa6 = 1;
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0x18)) {
      lVar1 = FUN_037a6268(lVar1,0,*(undefined8 *)
                                    System_Collections_Generic_Dictionary<JointRotationActiveState_JointRotationFeatureConfig,_JointRotationActiveState_JointRotationFeatureState>_TypeInfo
                          );
      if (lVar1 == 0) goto LAB_04f5a878;
      if (*(char *)(lVar1 + 0x38) != '\0') {
        return *(long *)(lVar1 + 0x48) != 0;
      }
    }
    return false;
  }
LAB_04f5a878:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


