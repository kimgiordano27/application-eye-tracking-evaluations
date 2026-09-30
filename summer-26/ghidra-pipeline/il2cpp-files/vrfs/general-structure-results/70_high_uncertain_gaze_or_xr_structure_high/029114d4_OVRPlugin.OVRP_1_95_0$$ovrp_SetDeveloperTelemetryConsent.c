/*
FUNCTION_NAME: OVRPlugin.OVRP_1_95_0$$ovrp_SetDeveloperTelemetryConsent
ENTRY_POINT: 029114d4
PROGRAM: vrfs-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
OVRPlugin_OVRP_1_95_0__ovrp_SetDeveloperTelemetryConsent
          (undefined8 param_1,long *param_2,long param_3)

{
  ulong uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = (**(code **)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x68) + 8))(param_2);
  if ((uVar1 & 1) == 0) {
    return 0xffffffff;
  }
  lVar5 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
  lVar4 = *(long *)(lVar5 + 0x60);
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar5 + 0x80) + 8);
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_015c2790(lVar4);
  }
  if (param_2 != (long *)0x0) {
    if (*(long *)(*param_2 + 0x40) == *(long *)(lVar4 + 0x40)) {
      puVar2 = (undefined8 *)thunk_FUN_015d06c4();
                    /* WARNING: Could not recover jumptable at 0x02911574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE)
                        (param_1,*puVar2,puVar2[1],
                         *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x80));
      return uVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0160f170(param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


