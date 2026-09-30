/*
FUNCTION_NAME: FUN_05c91480
ENTRY_POINT: 05c91480
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 73
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;foveated_rendering
MODULES: weak_source_state;validity_gate;foveation_rendering;keyword_support
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_4;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;functionality_permission_setup;functionality_foveated_rendering
*/


undefined8 FUN_05c91480(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
                    /* catch() { ... } // from try @ 05c9104c with catch @ 05c91480 */
  puVar1 = PTR_DAT_0664d6f0;
                    /* catch() { ... } // from try @ 05c91184 with catch @ 05c91484
                       catch() { ... } // from try @ 05c913bc with catch @ 05c91484 */
                    /* catch() { ... } // from try @ 05c911e8 with catch @ 05c91488
                       catch() { ... } // from try @ 05c9127c with catch @ 05c91488
                       catch() { ... } // from try @ 05c913c0 with catch @ 05c91488 */
  if ((DAT_06a57ad8 & 1) == 0) {
                    /* try { // try from 05c914a4 to 05d914a7 has its CatchHandler @ 05c914b0 */
    FUN_02d4dc40(PTR_DAT_0664d6f0);
                    /* catch() { ... } // from try @ 05c914a4 with catch @ 05c914b0 */
    FUN_02d4dc40(Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<FoveatedRenderingFeature>__)
    ;
                    /* try { // try from 05c914b4 to 05d914bb has its CatchHandler @ 05c914c4 */
                    /* try { // try from 05c914bc to 05d914c7 has its CatchHandler @ 05c90ab4 */
    FUN_02d4dc40(Method_UnityEngine_XR_OpenXR_OpenXRSettings_PermissionGrantedCallback__);
                    /* catch() { ... } // from try @ 05c914b4 with catch @ 05c914c4 */
    DAT_06a57ad8 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  lVar2 = FUN_05b1fe8c(0);
  if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x10), lVar2 != 0)) &&
     (lVar3 = FUN_0344f524(lVar2,*(undefined8 *)
                                  Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<FoveatedRenderingFeature>__
                          ), lVar3 != 0)) {
    uVar4 = FUN_05c28690(lVar3,0);
    if ((uVar4 & 1) != 0) {
      return 1;
    }
    lVar2 = FUN_0344f524(lVar2,*(undefined8 *)
                                Method_UnityEngine_XR_OpenXR_OpenXRSettings_PermissionGrantedCallback__
                        );
    if (lVar2 != 0) {
      uVar5 = FUN_05c29060(lVar2,0);
      return uVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


