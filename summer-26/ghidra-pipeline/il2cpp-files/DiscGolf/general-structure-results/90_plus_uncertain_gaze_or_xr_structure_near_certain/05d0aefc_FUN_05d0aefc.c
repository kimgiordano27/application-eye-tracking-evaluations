/*
FUNCTION_NAME: FUN_05d0aefc
ENTRY_POINT: 05d0aefc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 126
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_13;validity_or_gating_hits_10;telemetry_or_network_hits_4;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_05d0aefc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long local_40 [2];
  
  if ((DAT_06dc2e75 & 1) == 0) {
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<OVRManager_EventListener>_Remove__);
    FUN_02d965b8(
                Method_System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>__ctor__
                );
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_Add__
                );
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<OVRPlugin_SpaceComponentType>_Add__);
    DAT_06dc2e75 = 1;
  }
  if (param_1 == 0) {
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar4 = thunk_FUN_02dd3144();
    uVar5 = thunk_FUN_02dfd288(
                              Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                              );
    FUN_0544bf54(uVar4,uVar5,0);
  }
  else {
    uVar2 = thunk_FUN_0536b75c(param_1,*(undefined8 *)
                                        Method_System_Collections_Generic_HashSet<OVRPlugin_SpaceComponentType>_Add__
                               ,0);
    if (((uVar2 & 1) == 0) &&
       (uVar2 = thunk_FUN_0536b75c(param_1,*(undefined8 *)
                                            Method_System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_Add__
                                   ,0),
       puVar1 = Method_System_Collections_Generic_HashSet<OVRManager_EventListener>_Remove__,
       (uVar2 & 1) == 0)) {
      lVar3 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Method_System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>__ctor__
                                );
      FUN_05d0b084(lVar3,0,*(undefined8 *)puVar1);
      if (lVar3 != 0) {
        local_40[1] = 0;
        local_40[0] = param_1;
        thunk_FUN_02df7734(lVar3,local_40,param_2,param_3);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
    uVar4 = thunk_FUN_02dd3144();
    uVar5 = thunk_FUN_02dfd288(
                              Method_System_Collections_Generic_HashSet<OVRPlugin_SpaceComponentType>_GetEnumerator__
                              );
    uVar6 = thunk_FUN_02dfd288(
                              Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>__ctor__
                              );
    FUN_0544bfcc(uVar4,uVar5,uVar6,0);
  }
  uVar5 = thunk_FUN_02dfd288(
                            Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Contains__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar4,uVar5);
}


