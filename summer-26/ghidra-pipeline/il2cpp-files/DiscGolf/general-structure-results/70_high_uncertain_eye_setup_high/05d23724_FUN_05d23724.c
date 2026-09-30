/*
FUNCTION_NAME: FUN_05d23724
ENTRY_POINT: 05d23724
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_05d23724(long param_1)

{
  long lVar1;
  long *plVar2;
  
                    /* try { // try from 05d23730 to 05e23737 has its CatchHandler @ 05d239fc */
  if ((DAT_06dc2f7f & 1) == 0) {
    FUN_02d965b8(Method_System_Collections_Generic_KeyValuePair<Collider,_IXRInteractable>_get_Key__
                );
                    /* try { // try from 05d23748 to 05e2374f has its CatchHandler @ 05d239f0 */
    FUN_02d965b8(OVRPlugin_OVRP_1_106_0_TypeInfo);
    DAT_06dc2f7f = 1;
  }
  plVar2 = (long *)(param_1 + 0x18);
  lVar1 = *plVar2;
  if (lVar1 == 0) {
                    /* try { // try from 05d2376c to 05e23773 has its CatchHandler @ 05d23954 */
    lVar1 = thunk_FUN_02dd3144(*(undefined8 *)OVRPlugin_OVRP_1_106_0_TypeInfo);
    FUN_05c50774(lVar1,0,*(undefined8 *)
                          Method_System_Collections_Generic_KeyValuePair<Collider,_IXRInteractable>_get_Key__
                 ,0);
    *plVar2 = lVar1;
    LeanTween__value(plVar2,lVar1);
    lVar1 = *plVar2;
  }
  return lVar1;
}


