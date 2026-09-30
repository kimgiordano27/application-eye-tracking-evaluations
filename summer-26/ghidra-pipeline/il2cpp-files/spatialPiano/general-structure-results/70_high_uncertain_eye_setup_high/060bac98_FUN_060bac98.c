/*
FUNCTION_NAME: FUN_060bac98
ENTRY_POINT: 060bac98
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_060bac98(long param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  
  if ((DAT_06bc7747 & 1) == 0) {
    FUN_02f08768(
                Field_<PrivateImplementationDetails>_AAFC395EF50119504BA02FF16011DC5F347953970F851D503AFFE6B942D5DD1C
                );
    FUN_02f08768(System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo);
    DAT_06bc7747 = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_061028b4(0,*(undefined8 *)
                    System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo,0);
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_06105f9c(param_1,0);
  }
  if (DAT_06bc7798 == (code *)0x0) {
    DAT_06bc7798 = (code *)FUN_02f0872c(
                                       "UnityEngine.Renderer::SetMaterialArray_Injected(System.IntPtr,UnityEngine.Material[],System.Int32)"
                                       );
  }
                    /* WARNING: Could not recover jumptable at 0x060bad10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_06bc7798)(lVar1,param_2,param_3);
  return;
}


