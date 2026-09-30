/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMap$$InitializeMapValues
ENTRY_POINT: 014a217c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_MRUtilityKit_SpaceMap__InitializeMapValues(long param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((DAT_03776cba & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<VRequestResponse<string>>,_WitUnityRequest_<SendMessageAsync>d__20>__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<RTHandle>_Contains__);
    DAT_03776cba = 1;
  }
  puVar1 = Method_System_Collections_Generic_HashSet<RTHandle>_Contains__;
  if (param_2 != 0) {
    uVar2 = FUN_02658e60(param_2,0);
    uVar4 = FUN_00da4fb8(*(undefined8 *)puVar1,uVar2);
    FUN_02658f14(param_2,uVar4,0,0);
    uVar2 = FUN_02658e9c(param_2,0);
    uVar3 = FUN_02658ed8(param_2,0);
    lVar5 = *(long *)(param_1 + 0x90);
    if (lVar5 != 0) {
      uVar4 = FUN_014a2d14(uVar4,uVar2,uVar3,*(undefined4 *)(lVar5 + 0x10),
                           *(undefined4 *)(lVar5 + 0x14));
      if (*(long *)(param_1 + 0x40) != 0) {
        FUN_00bc2300(*(long *)(param_1 + 0x40),uVar4,
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<VRequestResponse<string>>,_WitUnityRequest_<SendMessageAsync>d__20>__
                    );
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


