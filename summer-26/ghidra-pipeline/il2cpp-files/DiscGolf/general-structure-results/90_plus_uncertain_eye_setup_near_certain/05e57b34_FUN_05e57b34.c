/*
FUNCTION_NAME: FUN_05e57b34
ENTRY_POINT: 05e57b34
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_05e57b34(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  puVar1 = Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_GetEnumerator__;
  if ((DAT_06dc3aec & 1) == 0) {
    FUN_02d965b8(Method_System_Collections_Generic_List<DebugUI_Widget>_ToArray__);
    FUN_02d965b8(Method_System_Collections_Generic_List<DebugUI_Widget>_GetEnumerator__);
    FUN_02d965b8(Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_get_Count__);
    FUN_02d965b8(Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>__ctor__);
    FUN_02d965b8(
                Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_GetEnumerator__
                );
    DAT_06dc3aec = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar2 = *(long *)puVar1;
  }
  pcVar5 = *(char **)(lVar2 + 0xb8);
  if (*pcVar5 != '\0') {
    return;
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    pcVar5 = *(char **)(*(long *)puVar1 + 0xb8);
  }
  puVar1 = Method_System_Collections_Generic_List<DebugUI_Widget>_ToArray__;
  *pcVar5 = '\x01';
  uVar3 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
  FUN_04be213c(uVar3,0,*(undefined8 *)
                        Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_get_Count__
               ,0);
  uVar4 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
  FUN_04be213c(uVar4,0,*(undefined8 *)
                        Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>__ctor__,0);
  if (*(int *)(*(long *)Method_System_Collections_Generic_List<DebugUI_Widget>_GetEnumerator__ +
              0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_05e4b600(uVar3,uVar4,0);
  return;
}


