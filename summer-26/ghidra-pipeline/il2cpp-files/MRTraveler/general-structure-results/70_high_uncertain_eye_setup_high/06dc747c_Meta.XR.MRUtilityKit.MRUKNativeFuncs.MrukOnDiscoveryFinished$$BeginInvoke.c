/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.MrukOnDiscoveryFinished$$BeginInvoke
ENTRY_POINT: 06dc747c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnDiscoveryFinished__BeginInvoke
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x19;
  long unaff_x20;
  
  FUN_05d60b38(param_2,param_3,*(undefined8 *)(param_1 + 0x5f0));
  if (unaff_x20 != 0) {
    FUN_05d68e9c();
    lVar1 = (**(code **)(*unaff_x19 + 0x548))();
    if (lVar1 != 0) {
      lVar1 = *(long *)(lVar1 + 0x90);
      uVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e90d10);
      FUN_05d60b38();
      if (lVar1 != 0) {
        FUN_05d68e9c(lVar1,uVar2,*(undefined8 *)PTR_DAT_08e90d30);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


