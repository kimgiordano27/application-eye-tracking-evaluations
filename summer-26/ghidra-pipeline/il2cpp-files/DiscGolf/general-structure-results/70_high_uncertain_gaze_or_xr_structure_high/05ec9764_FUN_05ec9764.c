/*
FUNCTION_NAME: FUN_05ec9764
ENTRY_POINT: 05ec9764
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


void FUN_05ec9764(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((DAT_06dc3e91 & 1) == 0) {
    FUN_02d965b8(Method_System_Nullable<OVRInput_Controller>_get_HasValue__);
    FUN_02d965b8(Method_System_Nullable<OVRPlugin_Posef>__ctor__);
    FUN_02d965b8(Method_System_Collections_Generic_List<RenderGraph_DebugData_ResourceData>_Clear__)
    ;
    FUN_02d965b8(Method_System_Nullable<OVRPlugin_Posef>_get_HasValue__);
    FUN_02d965b8(Method_System_Nullable<OVRPlugin_XrApi>_get_Value__);
    FUN_02d965b8(Method_System_Collections_Generic_List<RenderGraph_DebugData_ResourceData>_Add__);
    FUN_02d965b8(Method_System_Nullable<OVRSceneManager_LogForwarder>__ctor__);
    DAT_06dc3e91 = 1;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar2 = FUN_04ff1c80(*(long *)(param_1 + 0x30),param_2,
                         *(undefined8 *)Method_System_Nullable<OVRPlugin_Posef>__ctor__);
    if ((uVar2 & 1) == 0) {
      lVar4 = *(long *)(param_1 + 0x30);
      uVar3 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Method_System_Collections_Generic_List<RenderGraph_DebugData_ResourceData>_Add__
                                );
      FUN_04ff0cf0(uVar3,*(undefined8 *)
                          Method_System_Collections_Generic_List<RenderGraph_DebugData_ResourceData>_Clear__
                  );
      if (lVar4 == 0) goto LAB_05ec9894;
      FUN_04ff1a8c(lVar4,param_2,uVar3,
                   *(undefined8 *)Method_System_Nullable<OVRInput_Controller>_get_HasValue__);
    }
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (lVar4 = FUN_04ff19ec(*(long *)(param_1 + 0x30),param_2,
                             *(undefined8 *)Method_System_Nullable<OVRPlugin_Posef>_get_HasValue__),
       puVar1 = Method_System_Nullable<OVRSceneManager_LogForwarder>__ctor__, lVar4 != 0)) {
      uVar3 = FUN_04ff1890(lVar4,*(undefined8 *)Method_System_Nullable<OVRPlugin_XrApi>_get_Value__)
      ;
      FUN_0361471c(uVar3,*(undefined8 *)puVar1);
      return;
    }
  }
LAB_05ec9894:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


