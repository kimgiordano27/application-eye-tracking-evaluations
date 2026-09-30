/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$IsTypeCustom
ENTRY_POINT: 05ab1984
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_ImmersiveDebugger_Telemetry__IsTypeCustom
               (long *param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  ulong uVar1;
  int in_w8;
  long unaff_x22;
  long lVar2;
  undefined8 *puVar3;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar2 = (long)in_w8 - (long)(int)param_5;
  puVar3 = (undefined8 *)(unaff_x22 + (long)(int)param_5 * 0x10 + 0x28);
  while( true ) {
    if (*(uint *)(unaff_x22 + 0x18) <= param_5) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    uVar1 = (**(code **)(*param_1 + 0x1b8))
                      (param_1,puVar3[-1],*puVar3,param_3,param_4,*(undefined8 *)(*param_1 + 0x1c0))
    ;
    if ((uVar1 & 1) != 0) break;
    lVar2 = lVar2 + -1;
    puVar3 = puVar3 + 2;
    param_5 = param_5 + 1;
    if (lVar2 == 0) {
      return 0xffffffff;
    }
  }
  return param_5;
}


