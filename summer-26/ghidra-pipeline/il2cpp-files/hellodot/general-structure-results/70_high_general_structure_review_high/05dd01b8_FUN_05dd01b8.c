/*
FUNCTION_NAME: FUN_05dd01b8
ENTRY_POINT: 05dd01b8
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_5;ray_or_cast_sink_hits_5;telemetry_or_network_hits_2
*/


void FUN_05dd01b8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_065c8c40;
  if ((DAT_06a7af44 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IEnumerator<NonConvexMeshCollider_Tri>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IEnumerator<NonConvexMeshCollider_Vector3Int>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IEnumerator<OVRPermissionsRequester_Permission>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8c40);
    DAT_06a7af44 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar2 = FUN_05ef59b8(param_2,0,0);
  puVar1 = System_Collections_Generic_IEnumerator<NonConvexMeshCollider_Tri>_TypeInfo;
  if ((uVar2 & 1) != 0) {
    uVar3 = thunk_FUN_02cea894(*(undefined8 *)
                                System_Collections_Generic_IEnumerator<NonConvexMeshCollider_Tri>_TypeInfo
                              );
    FUN_047b3b70(uVar3,param_1,
                 *(undefined8 *)
                  System_Collections_Generic_IEnumerator<NonConvexMeshCollider_Vector3Int>_TypeInfo,
                 0);
    if (param_2 != 0) {
      FUN_05dd07dc(param_2,uVar3);
      uVar3 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
      FUN_047b3b70(uVar3,param_1,
                   *(undefined8 *)
                    System_Collections_Generic_IEnumerator<OVRPermissionsRequester_Permission>_TypeInfo
                   ,0);
      FUN_05dd088c(param_2,uVar3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  return;
}


