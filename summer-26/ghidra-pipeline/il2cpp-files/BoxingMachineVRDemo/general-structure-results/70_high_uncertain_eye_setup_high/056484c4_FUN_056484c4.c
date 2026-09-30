/*
FUNCTION_NAME: FUN_056484c4
ENTRY_POINT: 056484c4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_056484c4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_0504920c(param_1,0);
  if (param_2 != 0) {
    *(long *)(param_1 + 0x10) = param_2;
    thunk_FUN_02dd37b4((long *)(param_1 + 0x10),param_2);
    return;
  }
  uVar1 = thunk_FUN_02dc61f4(System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo)
  ;
  uVar1 = FUN_0566ef38(uVar1,0);
  thunk_FUN_02dc61f4(PTR_DAT_06763b78);
  uVar2 = thunk_FUN_02d9d534();
  FUN_04f7d8e0(uVar2,uVar1,0);
  uVar1 = thunk_FUN_02dc61f4(System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar2,uVar1);
}


