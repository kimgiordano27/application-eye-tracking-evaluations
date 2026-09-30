/*
FUNCTION_NAME: UnityEngine.InputSystem.UI.InputSystemUIInputModule$$ProcessPointerMovement
ENTRY_POINT: 05d0b768
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 84
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_InputSystem_UI_InputSystemUIInputModule__ProcessPointerMovement(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  
  FUN_02d965b8(Method_System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_Add__);
  FUN_02d965b8(Method_System_Collections_Generic_HashSet<OVRPlugin_SpaceComponentType>_Add__);
  *(undefined1 *)(unaff_x20 + 0xe79) = 1;
  if (unaff_x19 == 0) {
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar2 = thunk_FUN_02dd3144();
    uVar3 = thunk_FUN_02dfd288(
                              Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>__ctor__
                              );
    FUN_0544bf54(uVar2,uVar3,0);
  }
  else {
    uVar1 = thunk_FUN_0536b75c();
    if (((uVar1 & 1) == 0) && (uVar1 = thunk_FUN_0536b75c(), (uVar1 & 1) == 0)) {
      if (0 < *(int *)(unaff_x19 + 0x10)) {
        if (*(int *)(*(long *)Newtonsoft_Json_Utilities_LateBoundReflectionDelegateFactory_TypeInfo
                    + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar1 = FUN_05cd6fb0();
        if ((uVar1 & 1) != 0) {
          FUN_05d0b8b0(0);
          return;
        }
      }
      FUN_05d0b918();
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


