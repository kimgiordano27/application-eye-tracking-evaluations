/*
FUNCTION_NAME: FUN_07675e48
ENTRY_POINT: 07675e48
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2
*/


uint FUN_07675e48(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 local_38;
  
  puVar1 = System_Action<Entry>_TypeInfo;
  if ((DAT_0827100c & 1) == 0) {
    FUN_0373b518(
                Method_UnityEngine_XR_ARFoundation_ARTrackable<XRRaycast,_ARRaycast>_get_sessionRelativeData__
                );
    FUN_0373b518(System_Action<Entry>_TypeInfo);
    DAT_0827100c = 1;
  }
  lVar3 = *(long *)(param_1 + 0x200);
  local_38 = 0;
  FUN_056e60ec(&local_38,param_2,param_3,*(undefined8 *)puVar1);
  if (lVar3 != 0) {
    uVar2 = FUN_0591fcbc(lVar3,local_38,param_4,
                         *(undefined8 *)
                          Method_UnityEngine_XR_ARFoundation_ARTrackable<XRRaycast,_ARRaycast>_get_sessionRelativeData__
                        );
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


