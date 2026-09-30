/*
FUNCTION_NAME: FUN_05e57f5c
ENTRY_POINT: 05e57f5c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05e57f5c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar2 = Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>_get_Count__;
  puVar1 = Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_GetEnumerator__;
  if ((DAT_06dc3aef & 1) == 0) {
    FUN_02d965b8(Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>_get_Count__);
    FUN_02d965b8(
                Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_GetEnumerator__
                );
    DAT_06dc3aef = 1;
  }
  uVar3 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
  FUN_05e57154(uVar3,0);
  puVar4 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  *puVar4 = uVar3;
  LeanTween__value(puVar4,uVar3);
  return;
}


