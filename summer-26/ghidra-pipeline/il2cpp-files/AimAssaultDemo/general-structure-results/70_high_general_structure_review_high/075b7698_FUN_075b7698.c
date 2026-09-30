/*
FUNCTION_NAME: FUN_075b7698
ENTRY_POINT: 075b7698
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_7;ray_or_cast_sink_hits_4;telemetry_or_network_hits_6;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_075b7698(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if ((DAT_0826e458 & 1) == 0) {
    FUN_0373b518(OVRPassthroughLayer_SerializedSurfaceGeometry_TypeInfo);
    FUN_0373b518(PTR_DAT_07d96620);
    FUN_0373b518(OVRPassthroughLayer_StylesHandler_TypeInfo);
    FUN_0373b518(PTR_DAT_07de4490);
    FUN_0373b518(OVRPermissionsRequester_<>c_TypeInfo);
    FUN_0373b518(OVRPermissionsRequester_Permission_TypeInfo);
    FUN_0373b518(UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo);
    DAT_0826e458 = 1;
  }
  *param_3 = 0;
  thunk_FUN_037aeb94(param_3,0);
  puVar1 = OVRPassthroughLayer_StylesHandler_TypeInfo;
  if (param_1 != 0) {
    uVar2 = FUN_060c546c(param_1,0);
    uVar3 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                      (uVar2,*(undefined8 *)puVar1,0);
    if (((uVar3 & 1) == 0) &&
       (uVar3 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                          (uVar2,*(undefined8 *)PTR_DAT_07de4490,0), (uVar3 & 1) == 0)) {
      uVar3 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                        (uVar2,*(undefined8 *)OVRPermissionsRequester_Permission_TypeInfo,0);
      if (((uVar3 & 1) == 0) &&
         (uVar3 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                            (uVar2,*(undefined8 *)
                                    UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo,0),
         (uVar3 & 1) == 0)) {
        uVar3 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                          (uVar2,*(undefined8 *)OVRPermissionsRequester_<>c_TypeInfo,0);
        if ((uVar3 & 1) == 0) {
          if (*(int *)(*(long *)PTR_DAT_07d96620 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          uVar2 = FUN_03f9c1f8(param_1,param_2,param_3,
                               *(undefined8 *)OVRPassthroughLayer_SerializedSurfaceGeometry_TypeInfo
                              );
          return uVar2;
        }
        uVar2 = 0x7ff8000000000000;
      }
      else {
        uVar2 = 0xfff0000000000000;
      }
    }
    else {
      uVar2 = 0x7ff0000000000000;
    }
    *param_2 = uVar2;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


