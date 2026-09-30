/*
FUNCTION_NAME: FUN_01074ad4
ENTRY_POINT: 01074ad4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_01074ad4(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = StringLiteral_2245;
  if ((DAT_037761f0 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Interactor<LocomotionAxisTurnerInteractor,_LocomotionAxisTurnerInteractable>_Awake__
                      );
    thunk_FUN_00d48444(StringLiteral_4583);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IMarker>_Clear__);
    thunk_FUN_00d48444(UnityEngine_Timeline_TrackBindingTypeAttribute_var);
    thunk_FUN_00d48444(
                      Method_System_Linq_Expressions_Interpreter_LightCompiler_EnsureAvailableForClosure__
                      );
    thunk_FUN_00d48444(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<OVRPlugin_SpaceQueryResult>__
                      );
    thunk_FUN_00d48444(StringLiteral_2245);
    DAT_037761f0 = 1;
  }
  lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar1 = 
  Method_Oculus_Interaction_Interactor<LocomotionAxisTurnerInteractor,_LocomotionAxisTurnerInteractable>_Awake__
  ;
  if (lVar2 != 0) {
    FUN_017b46ec(lVar2,0);
    *(undefined8 *)(lVar2 + 0x10) = param_3;
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = StringLiteral_4583;
    if (lVar3 != 0) {
      FUN_0128180c(lVar3,lVar2,
                   *(undefined8 *)
                    Method_System_Linq_Expressions_Interpreter_LightCompiler_EnsureAvailableForClosure__
                   ,0);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      puVar1 = Method_System_Collections_Generic_List<IMarker>_Clear__;
      if (lVar4 != 0) {
        FUN_012819a8(lVar4,lVar2,
                     *(undefined8 *)
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<OVRPlugin_SpaceQueryResult>__
                     ,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        puVar1 = UnityEngine_Timeline_TrackBindingTypeAttribute_var;
        lVar3 = FUN_0106896c(param_1,0,0,param_2,lVar3,lVar4);
        if ((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) {
          *(undefined4 *)(lVar3 + 0x148) = 2;
          *(byte *)(lVar3 + 0x14c) = param_4 & 1;
        }
        FUN_0114e340(lVar3,*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)puVar1);
        return lVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


