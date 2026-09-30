/*
FUNCTION_NAME: FUN_05ac4730
ENTRY_POINT: 05ac4730
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 119
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_05ac4730(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_06dc1e19 & 1) == 0) {
    FUN_02d965b8(System_Collections_Generic_Dictionary<OVRGrabbable,_int>_TypeInfo);
    FUN_02d965b8(System_Xml_Serialization_XmlArrayAttribute_TypeInfo);
    FUN_02d965b8(Method_OVRTask_Awaiter<bool>_get_IsCompleted__);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarRequestResultCode>_SetStateMachine__
                );
    FUN_02d965b8(PTR_DAT_06a10fd8);
    FUN_02d965b8(Method_OVRTask_Awaiter<OVRPlugin_Result>_GetResult__);
    DAT_06dc1e19 = 1;
  }
  puVar1 = System_Xml_Serialization_XmlArrayAttribute_TypeInfo;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(long *)(param_2 + 0x50) == 0) {
    FUN_05bfde00(param_1,*(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarRequestResultCode>_SetStateMachine__
                 ,*(undefined8 *)PTR_DAT_06a10fd8,param_2,0);
  }
  else {
    FUN_05ac54d4(param_1,param_2);
    uVar3 = *(undefined8 *)(param_2 + 0x50);
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    uVar2 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
    FUN_05bca5c4(uVar2,uVar3,uVar5,0);
    *(undefined8 *)(param_2 + 0x68) = uVar2;
    LeanTween__value((undefined8 *)(param_2 + 0x68),uVar2);
  }
  lVar4 = *(long *)(param_2 + 0x58);
  if (lVar4 == 0) {
    if (*(long *)(param_2 + 0x60) == 0) {
      FUN_05bfde88(param_1,*(undefined8 *)Method_OVRTask_Awaiter<OVRPlugin_Result>_GetResult__,
                   param_2,0);
      goto LAB_05ac4898;
    }
  }
  else {
    if (*(int *)(*(long *)System_Collections_Generic_Dictionary<OVRGrabbable,_int>_TypeInfo + 0xe4)
        == 0) {
      thunk_FUN_02df485c();
    }
    FUN_05bc00c0(lVar4,0);
  }
  if (*(long *)(param_2 + 0x60) != 0) {
    FUN_05ac1ab0(param_1,*(long *)(param_2 + 0x60),
                 *(undefined8 *)Method_OVRTask_Awaiter<bool>_get_IsCompleted__,param_2);
  }
LAB_05ac4898:
  FUN_05ac1c10(param_1,param_2);
  FUN_05ac1cb0(param_1,param_2);
  return;
}


