/*
FUNCTION_NAME: OVRPlugin$$set_rotation
ENTRY_POINT: 0337e458
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_rotation(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = 
  Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_Dictionary<ICustomEventReceiver,_Transform>>_Dispose__
  ;
  puVar1 = 
  Method_System_Collections_Generic_Dictionary_Enumerator<ProjectionAxis,_List<Face>>_get_Current__;
  if ((DAT_045335e8 & 1) == 0) {
    FUN_01c5d288(
                Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_Dictionary<ICustomEventReceiver,_Transform>>_Dispose__
                );
    FUN_01c5d288(
                Method_System_Collections_Generic_Dictionary_Enumerator<ProjectionAxis,_List<Face>>_get_Current__
                );
    DAT_045335e8 = 1;
  }
  FUN_03313b6c(param_1,0);
  uVar3 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
  FUN_0290bee4(uVar3,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  return;
}


