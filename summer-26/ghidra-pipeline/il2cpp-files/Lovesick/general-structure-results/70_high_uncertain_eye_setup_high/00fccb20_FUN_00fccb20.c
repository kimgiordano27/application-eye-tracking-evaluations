/*
FUNCTION_NAME: FUN_00fccb20
ENTRY_POINT: 00fccb20
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


void FUN_00fccb20(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = Method_ReverbTutorial_SecondHideComplete__;
  if ((DAT_03775b20 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet_Enumerator<Transform>_Dispose__);
    thunk_FUN_00d48444(Method_ReverbTutorial_SecondHideComplete__);
    thunk_FUN_00d48444(
                      Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_GetPrefabScaleBasedOnAnchorPlaneRect__
                      );
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_51__);
    DAT_03775b20 = 1;
  }
  *(undefined1 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x38) = 1;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__796_51__;
  if (lVar2 != 0) {
    FUN_01298da0(lVar2,*(undefined8 *)
                        Method_System_Collections_Generic_HashSet_Enumerator<Transform>_Dispose__);
    *(long *)(param_1 + 0x48) = lVar2;
    lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar2 != 0) {
      FUN_01320e50(lVar2,*(undefined8 *)
                          Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_GetPrefabScaleBasedOnAnchorPlaneRect__
                  );
      *(long *)(param_1 + 0x50) = lVar2;
      thunk_FUN_0268a01c(param_1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


