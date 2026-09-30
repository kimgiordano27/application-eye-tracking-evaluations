/*
FUNCTION_NAME: FUN_05d0b744
ENTRY_POINT: 05d0b744
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 115
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_7;validity_or_gating_hits_6;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_05d0b744(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_18;
  
  if ((DAT_06dc2e79 & 1) == 0) {
    FUN_02d965b8(Newtonsoft_Json_Utilities_LateBoundReflectionDelegateFactory_TypeInfo);
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_Add__
                );
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<OVRPlugin_SpaceComponentType>_Add__);
    DAT_06dc2e79 = 1;
  }
  local_18 = 0;
  if (param_1 == 0) {
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar2 = thunk_FUN_02dd3144();
    uVar3 = thunk_FUN_02dfd288(
                              Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>__ctor__
                              );
    FUN_0544bf54(uVar2,uVar3,0);
  }
  else {
    uVar1 = thunk_FUN_0536b75c(param_1,*(undefined8 *)
                                        Method_System_Collections_Generic_HashSet<OVRPlugin_SpaceComponentType>_Add__
                               ,0);
    if (((uVar1 & 1) == 0) &&
       (uVar1 = thunk_FUN_0536b75c(param_1,*(undefined8 *)
                                            Method_System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_Add__
                                   ,0), (uVar1 & 1) == 0)) {
      if (0 < *(int *)(param_1 + 0x10)) {
        if (*(int *)(*(long *)Newtonsoft_Json_Utilities_LateBoundReflectionDelegateFactory_TypeInfo
                    + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar1 = FUN_05cd6fb0(param_1,&local_18,0);
        if ((uVar1 & 1) != 0) {
          FUN_05d0b8b0(local_18);
          return;
        }
      }
      FUN_05d0b918(param_1);
      return;
    }
    thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
    uVar2 = thunk_FUN_02dd3144();
    uVar3 = thunk_FUN_02dfd288(
                              Method_System_Collections_Generic_HashSet<OVRPlugin_SpaceComponentType>_GetEnumerator__
                              );
    uVar4 = thunk_FUN_02dfd288(
                              Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>__ctor__
                              );
    FUN_0544bfcc(uVar2,uVar3,uVar4,0);
  }
  uVar3 = thunk_FUN_02dfd288(
                            Method_System_Collections_Generic_HashSet<SymbolTable_NameHashKey>_Add__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar2,uVar3);
}


