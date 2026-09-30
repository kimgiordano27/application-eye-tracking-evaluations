/*
FUNCTION_NAME: FUN_01d475f8
ENTRY_POINT: 01d475f8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01d475f8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((DAT_0377f517 & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_58__);
    thunk_FUN_00d48444(UnityEngine_UIElements_IDragAndDropData_TypeInfo);
    thunk_FUN_00d48444(Method_OVRTask_FromResult<OVRSpatialAnchor_UnboundAnchor[]>__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<NavMeshModifier>_Contains__);
    DAT_0377f517 = 1;
  }
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__796_58__;
  puVar2 = Method_OVRTask_FromResult<OVRSpatialAnchor_UnboundAnchor[]>__;
  puVar1 = UnityEngine_UIElements_IDragAndDropData_TypeInfo;
  local_40 = 0;
  uStack_38 = 0;
  local_48 = 0;
  if (param_2 != 0) {
    if (*(long *)(param_2 + 0x98) != 0) {
      FUN_01323390(*(long *)(param_2 + 0x98),&local_48,
                   *(undefined8 *)Method_System_Collections_Generic_List<NavMeshModifier>_Contains__
                  );
      while (uVar4 = FUN_012b894c(&local_48,*(undefined8 *)puVar1), (uVar4 & 1) != 0) {
        lVar5 = FUN_00c44ea0(&local_48,*(undefined8 *)puVar2);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if ((lVar5 != param_2) && (*(long *)(lVar5 + 0x78) != 0)) {
          FUN_01d51044(param_1,lVar5);
        }
      }
      FUN_012b8948(&local_48,*(undefined8 *)puVar3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


