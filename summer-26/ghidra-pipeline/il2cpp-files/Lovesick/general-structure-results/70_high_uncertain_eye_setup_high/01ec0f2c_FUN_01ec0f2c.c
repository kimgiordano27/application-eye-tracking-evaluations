/*
FUNCTION_NAME: FUN_01ec0f2c
ENTRY_POINT: 01ec0f2c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01ec0f2c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
                    /* try { // try from 01ec0f2c to 01fc0f3b has its CatchHandler @ 01ec1f4c */
  puVar1 = MedleyEdgeCaseGateLoadUtility_<SetToSaveStateCoroutine>d__2_TypeInfo;
  if ((DAT_0377ff68 & 1) == 0) {
                    /* try { // try from 01ec0f4c to 01fc0f4f has its CatchHandler @ 01ec1f18 */
    thunk_FUN_00d48444(Method_Sirenix_Utilities_TypeExtensions_IsCastableTo__);
    thunk_FUN_00d48444(MedleyEdgeCaseGateLoadUtility_<SetToSaveStateCoroutine>d__2_TypeInfo);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_3_0_TypeInfo);
    thunk_FUN_00d48444(DG_Tweening_Core_DOGetter<Rect>_TypeInfo);
                    /* try { // try from 01ec0f80 to 01fc0f83 has its CatchHandler @ 01ec1ee8 */
    DAT_0377ff68 = 1;
  }
                    /* try { // try from 01ec0f84 to 01fc0f8f has its CatchHandler @ 01ec1f08 */
  lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar1 = DG_Tweening_Core_DOGetter<Rect>_TypeInfo;
  if (lVar2 != 0) {
                    /* try { // try from 01ec0f98 to 01fc0f9b has its CatchHandler @ 01ec1f14 */
                    /* try { // try from 01ec0fa4 to 01fc0fb3 has its CatchHandler @ 01ec1f10 */
    FUN_01298da0(lVar2,*(undefined8 *)Method_Sirenix_Utilities_TypeExtensions_IsCastableTo__);
    *(long *)(param_1 + 0x10) = lVar2;
    lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar2 != 0) {
                    /* try { // try from 01ec0fc0 to 01fc0fc7 has its CatchHandler @ 01ec1f0c */
                    /* try { // try from 01ec0fcc to 01fc100b has its CatchHandler @ 01ec1f30 */
      FUN_01320e50(lVar2,*(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo);
      *(long *)(param_1 + 0x18) = lVar2;
      FUN_017b46ec(param_1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


