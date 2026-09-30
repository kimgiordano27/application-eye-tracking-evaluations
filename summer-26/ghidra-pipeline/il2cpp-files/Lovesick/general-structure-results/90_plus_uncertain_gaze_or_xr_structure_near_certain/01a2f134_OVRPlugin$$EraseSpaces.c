/*
FUNCTION_NAME: OVRPlugin$$EraseSpaces
ENTRY_POINT: 01a2f134
PROGRAM: Lovesick-libil2cpp.so
SCORE: 93
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin__EraseSpaces(ulong param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 *puVar5;
  long unaff_x21;
  
  puVar5 = *(undefined8 **)(unaff_x20 + 0x588);
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_5671);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<Nullable<int>>,_AsyncProtocolRequest_<ProcessOperation>d__24>__
                      );
    thunk_FUN_00d48444(StringLiteral_6246);
    *(undefined1 *)(unaff_x21 + 0xb52) = 1;
  }
  *(undefined1 *)(param_2 + 0x50) = 1;
  lVar3 = thunk_FUN_00d62348(*puVar5);
  puVar2 = StringLiteral_6246;
  puVar1 = StringLiteral_5671;
  if (lVar3 != 0) {
    FUN_01a2f1c8();
    *(long *)(param_2 + 0x68) = lVar3;
    uVar4 = FUN_00da4fb8(*(undefined8 *)puVar2,0x18);
    *(undefined8 *)(param_2 + 0x70) = uVar4;
    FUN_0128350c(param_2,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


