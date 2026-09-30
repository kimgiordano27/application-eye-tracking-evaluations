/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller$$InsertBefore<object>
ENTRY_POINT: 043831f0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 78
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__InsertBefore<object>(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int unaff_w20;
  
  puVar1 = PTR_DAT_084914a0;
  if (-1 < unaff_w20) {
    puVar1 = PTR_DAT_08486d40;
  }
  uVar2 = thunk_FUN_03af1434(puVar1);
  thunk_FUN_03af1434(PTR_DAT_08491280);
  uVar3 = thunk_FUN_03ac74bc();
  uVar4 = thunk_FUN_03af1434(PTR_DAT_08491498);
  System_Threading_CancellationToken__get_IsCancellationRequested(uVar3,uVar2,uVar4,0);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar3);
}


