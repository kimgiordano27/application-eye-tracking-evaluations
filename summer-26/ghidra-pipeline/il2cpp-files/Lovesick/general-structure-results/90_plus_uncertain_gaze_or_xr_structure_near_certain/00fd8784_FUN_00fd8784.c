/*
FUNCTION_NAME: FUN_00fd8784
ENTRY_POINT: 00fd8784
PROGRAM: Lovesick-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_00fd8784(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long local_28;
  
  puVar1 = StringLiteral_8224;
  if ((DAT_03775baa & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_4918);
    thunk_FUN_00d48444(StringLiteral_8224);
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Utilities_ThreadSafeStore<StructMultiKey<Type,_NamingStrategy>,_EnumInfo>_Get__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_MoveNext__
                      );
    thunk_FUN_00d48444(Method_Oculus_Platform_Request<AchievementDefinitionList>__ctor__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__);
    thunk_FUN_00d48444(Method_Autohand_HandPublicEvents_OnReleaseEvent__);
    DAT_03775baa = 1;
  }
  FUN_010c2c5c(param_1,&local_28,*(undefined8 *)puVar1);
  if (local_28 != 0) {
    lVar3 = *(long *)(local_28 + 0x20);
    lVar2 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_Oculus_Platform_Request<AchievementDefinitionList>__ctor__);
    if ((lVar2 != 0) &&
       (FUN_013df2bc(lVar2,param_1,
                     *(undefined8 *)
                      Method_Newtonsoft_Json_Utilities_ThreadSafeStore<StructMultiKey<Type,_NamingStrategy>,_EnumInfo>_Get__
                     ,0), puVar1 = StringLiteral_4918, lVar3 != 0)) {
      FUN_013df780(lVar3,lVar2,*(undefined8 *)Method_Autohand_HandPublicEvents_OnReleaseEvent__);
      FUN_010c2c5c(param_1,&local_28,*(undefined8 *)puVar1);
      if (local_28 != 0) {
        lVar3 = *(long *)(local_28 + 0xf8);
        lVar2 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__);
        if ((lVar2 == 0) ||
           (FUN_026c8404(lVar2,param_1,
                         *(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_MoveNext__
                         ,0), lVar3 == 0)) goto LAB_00fd88e4;
        FUN_026c84dc(lVar3,lVar2,0);
      }
      return;
    }
  }
LAB_00fd88e4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


