/*
FUNCTION_NAME: GameAnalyticsSDK.Utilities.GA_MiniJSON.Parser$$ParseString
ENTRY_POINT: 020478e0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_5;telemetry_or_network_hits_4
*/


long * GameAnalyticsSDK_Utilities_GA_MiniJSON_Parser__ParseString(long param_1,int param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 local_48;
  undefined8 uStack_40;
  long *local_38;
  
  if ((DAT_0452f13e & 1) == 0) {
    FUN_01c5d288(System_Collections_Generic_IEnumerable<OVRPermissionsRequester_Permission>_TypeInfo
                );
    FUN_01c5d288(
                System_Collections_Generic_IEnumerable<PlayerEditorConnectionEvents_MessageTypeSubscribers>_TypeInfo
                );
    FUN_01c5d288(System_Collections_Generic_IEnumerable<DebugUI_Table_Row>_TypeInfo);
    FUN_01c5d288(
                System_Collections_Generic_IEnumerator<Action<RenderTargetIdentifier,_CommandBuffer>>_TypeInfo
                );
    FUN_01c5d288(System_Collections_Generic_IEnumerator<float[]>_TypeInfo);
    DAT_0452f13e = 1;
  }
  puVar4 = System_Collections_Generic_IEnumerator<float[]>_TypeInfo;
  puVar3 = 
  System_Collections_Generic_IEnumerable<PlayerEditorConnectionEvents_MessageTypeSubscribers>_TypeInfo
  ;
  puVar2 = System_Collections_Generic_IEnumerable<OVRPermissionsRequester_Permission>_TypeInfo;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = (long *)0x0;
  if (*(long *)(param_1 + 0x388) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  FUN_02d50a3c(&local_48,*(long *)(param_1 + 0x388),
               *(undefined8 *)
                System_Collections_Generic_IEnumerator<Action<RenderTargetIdentifier,_CommandBuffer>>_TypeInfo
              );
  do {
    uVar5 = FUN_029fd614(&local_48,*(undefined8 *)puVar3);
    if ((uVar5 & 1) == 0) {
      plVar6 = (long *)0x0;
      break;
    }
    if (local_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
    if ((*(byte *)(*local_38 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*local_38 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(local_38);
    }
    plVar6 = local_38;
  } while (*(int *)((long)local_38 + 0x2c) != param_2);
  FUN_029fd610(&local_48,*(undefined8 *)puVar2);
  return plVar6;
}


