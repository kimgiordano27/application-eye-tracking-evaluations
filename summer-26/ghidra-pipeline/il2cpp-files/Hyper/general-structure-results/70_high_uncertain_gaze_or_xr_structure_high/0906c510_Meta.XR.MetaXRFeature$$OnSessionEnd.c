/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionEnd
ENTRY_POINT: 0906c510
PROGRAM: Hyper-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionEnd
               (long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  
  *(undefined1 *)(param_1 + 0x68) = param_3;
  *(undefined1 *)(param_1 + 0x69) = param_4;
  *(undefined8 *)(param_1 + 0x60) = param_2;
  thunk_FUN_049ee3d8();
  plVar2 = *(long **)(param_1 + 0x30);
  uVar1 = FUN_0906c568(param_1,param_2);
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0906c560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x558))(plVar2,uVar1,*(undefined8 *)(*plVar2 + 0x560));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


