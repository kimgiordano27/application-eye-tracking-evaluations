/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$SerializeToString<__Il2CppFullySharedGenericType>
ENTRY_POINT: 05d052a8
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__SerializeToString<__Il2CppFullySharedGenericType>
          (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  
  FUN_04980b34(param_2);
  lVar1 = thunk_FUN_04983e64();
  if (lVar1 != 0) {
                    /* try { // try from 05d052c4 to 05e052cb has its CatchHandler @ 05d053a8 */
    if (*(int *)(*(long *)PTR_DAT_0ac09f18 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
                    /* try { // try from 05d052e8 to 05e052f7 has its CatchHandler @ 05d053a4 */
                    /* WARNING: Could not recover jumptable at 0x05d052f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))(lVar1);
    return uVar2;
  }
                    /* try { // try from 05d052f8 to 05e0531f has its CatchHandler @ 05d0520c */
  if ((*(ushort *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x20) + 0x135) & 1) == 0) {
    FUN_04980b34();
  }
  uVar2 = thunk_FUN_04983f60();
                    /* try { // try from 05d05320 to 05e0532f has its CatchHandler @ 05d053a0 */
  (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x28))();
                    /* try { // try from 05d05330 to 05e053c3 has its CatchHandler @ 05d0520c */
  return uVar2;
}


