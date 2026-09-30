/*
FUNCTION_NAME: FUN_06cd42b8
ENTRY_POINT: 06cd42b8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_06cd42b8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  thunk_FUN_03257e30(PTR_DAT_0759b238);
  FUN_02d65908();
  puVar1 = System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>_TypeInfo;
  uVar2 = thunk_FUN_03257e30(
                            System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>_TypeInfo
                            );
  FUN_06deee2c(uVar2,param_1,0);
  thunk_FUN_03257e30(PTR_DAT_0759b208);
  uVar2 = thunk_FUN_0322f148();
  uVar3 = thunk_FUN_03257e30(puVar1);
  FUN_05dfcbd0(uVar2,uVar3,0);
  uVar3 = thunk_FUN_03257e30(System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo)
  ;
                    /* WARNING: Subroutine does not return */
  FUN_031f225c(uVar2,uVar3);
}


