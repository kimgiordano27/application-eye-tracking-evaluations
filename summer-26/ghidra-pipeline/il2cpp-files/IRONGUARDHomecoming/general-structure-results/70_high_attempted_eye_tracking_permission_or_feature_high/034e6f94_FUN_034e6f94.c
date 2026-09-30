/*
FUNCTION_NAME: FUN_034e6f94
ENTRY_POINT: 034e6f94
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


void FUN_034e6f94(void)

{
  undefined *puVar1;
  
  puVar1 = Method_OVREyeGaze_OnPermissionGranted__;
                    /* catch() { ... } // from try @ 034e6f0c with catch @ 034e6fa0
                       catch() { ... } // from try @ 034e6f90 with catch @ 034e6fa0 */
                    /* try { // try from 034e6fa4 to 035e6fa7 has its CatchHandler @ 034e6fb0 */
                    /* try { // try from 034e6fa8 to 035e6fb3 has its CatchHandler @ 034e6bb0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034e6fa4 with catch @ 034e6fb0
                        */
  if ((DAT_04832df4 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_WeakHashSetFormatter__ctor__);
    thunk_FUN_01efb3a4(Method_OVREyeGaze_OnPermissionGranted__);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter__ctor__);
    DAT_04832df4 = 1;
  }
  FUN_042afbcc(*(undefined4 *)(*(long *)puVar1 + 0xe0));
  return;
}


