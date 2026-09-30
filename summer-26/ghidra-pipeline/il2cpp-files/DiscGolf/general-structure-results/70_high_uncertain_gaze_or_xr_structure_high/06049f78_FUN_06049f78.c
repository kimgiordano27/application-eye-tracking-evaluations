/*
FUNCTION_NAME: FUN_06049f78
ENTRY_POINT: 06049f78
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_06049f78(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = Method_System_Net_Configuration_ConnectionManagementElementCollection__ctor__;
  if ((DAT_06dc4c48 & 1) == 0) {
    FUN_02d965b8(OVRPlugin_OVRP_1_100_0_TypeInfo);
    FUN_02d965b8(Method_Oculus_Avatar2_EntityJointMonitorBase<InterpolatingJoint>__ctor__);
    FUN_02d965b8(Method_System_Net_Configuration_ConnectionManagementElementCollection__ctor__);
    FUN_02d965b8(Method_System_Net_Configuration_ConnectionManagementSection__ctor__);
    DAT_06dc4c48 = 1;
  }
  uVar2 = FUN_0536ba54(param_1,*(undefined8 *)puVar1,0);
  if (((((uVar2 & 1) != 0) &&
       (uVar2 = FUN_0536ba54(param_1,*(undefined8 *)
                                      Method_System_Net_Configuration_ConnectionManagementSection__ctor__
                             ,0), (uVar2 & 1) != 0)) &&
      (uVar2 = FUN_0536ba54(param_1,*(undefined8 *)
                                     Method_Oculus_Avatar2_EntityJointMonitorBase<InterpolatingJoint>__ctor__
                            ,0), (uVar2 & 1) != 0)) &&
     (uVar2 = FUN_0536ba54(param_1,*(undefined8 *)OVRPlugin_OVRP_1_100_0_TypeInfo,0),
     (uVar2 & 1) != 0)) {
    uVar3 = thunk_FUN_02dfd288(
                              Method_System_Net_Configuration_ConnectionManagementSection_get_Properties__
                              );
    uVar4 = thunk_FUN_02dfd288(
                              Method_Unity_Services_Multiplayer_ConnectionModule_DeserializeConnectionMetadata__
                              );
    uVar3 = FUN_0536d554(uVar3,param_1,uVar4,0);
    thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
    uVar4 = thunk_FUN_02dd3144();
    FUN_05452924(uVar4,uVar3,0);
    uVar3 = thunk_FUN_02dfd288(Method_Unity_Services_Multiplayer_ConnectionModule_OnSessionChanged__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar4,uVar3);
  }
  return;
}


