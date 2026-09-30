/*
FUNCTION_NAME: FUN_05ed4a98
ENTRY_POINT: 05ed4a98
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05ed4a98(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  undefined8 local_48;
  undefined8 uStack_40;
  long *local_38;
  
  if ((DAT_06dc3ec6 & 1) == 0) {
    FUN_02d965b8(
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>,_OVRSceneManager_<FetchAnchorsAsync>d__37>__
                );
    FUN_02d965b8(
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<bool>,_OVRSceneRoom_<LoadRoom>d__19>__
                );
    FUN_02d965b8(
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<bool>,_OVRSpatialAnchor_<WhenLocalizedAsync>d__22>__
                );
    FUN_02d965b8(
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                );
    FUN_02d965b8(
                Method_OVRTaskBuilder<bool>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRSpatialAnchor_<WhenCreatedAsync>d__19>__
                );
    DAT_06dc3ec6 = 1;
  }
  puVar3 = 
  Method_OVRTaskBuilder<bool>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRSpatialAnchor_<WhenCreatedAsync>d__19>__
  ;
  puVar2 = 
  Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<bool>,_OVRSceneRoom_<LoadRoom>d__19>__
  ;
  puVar1 = 
  Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>,_OVRSceneManager_<FetchAnchorsAsync>d__37>__
  ;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = (long *)0x0;
  if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_03c23590(&local_48,*(long *)(param_1 + 0x20),
               *(undefined8 *)
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
              );
  do {
    uVar5 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<uint,_uint>__Dispose
                      (&local_48,*(undefined8 *)puVar2);
    plVar4 = local_38;
    if ((uVar5 & 1) == 0) {
      FUN_05156050(&local_48,*(undefined8 *)puVar1);
      return;
    }
    if (local_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar7 = *local_38;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05ed4ba4;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_02dd004c(local_38,*(long *)puVar3,0);
LAB_05ed4ba4:
    (*(code *)*puVar6)(plVar4,puVar6[1]);
  } while( true );
}


