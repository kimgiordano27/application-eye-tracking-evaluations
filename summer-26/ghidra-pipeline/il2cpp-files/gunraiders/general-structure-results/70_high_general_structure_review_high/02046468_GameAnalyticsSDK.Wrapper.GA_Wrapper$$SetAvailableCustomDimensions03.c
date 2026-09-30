/*
FUNCTION_NAME: GameAnalyticsSDK.Wrapper.GA_Wrapper$$SetAvailableCustomDimensions03
ENTRY_POINT: 02046468
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_5;telemetry_or_network_hits_4
*/


long * GameAnalyticsSDK_Wrapper_GA_Wrapper__SetAvailableCustomDimensions03(ulong param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  int unaff_w19;
  long unaff_x20;
  long *plVar6;
  long unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  
  if ((param_1 & 1) == 0) {
    FUN_01c5d288(System_Collections_Generic_IEnumerable<OVRPermissionsRequester_Permission>_TypeInfo
                );
    FUN_01c5d288(
                System_Collections_Generic_IEnumerable<PlayerEditorConnectionEvents_MessageTypeSubscribers>_TypeInfo
                );
    FUN_01c5d288(System_Collections_Generic_IEnumerable<DebugUI_Table_Row>_TypeInfo);
    FUN_01c5d288(
                System_Collections_Generic_IEnumerator<Action<RenderTargetIdentifier,_CommandBuffer>>_TypeInfo
                );
    FUN_01c5d288(System_Collections_Generic_IEnumerator<KeyValuePair<object,_object>>_TypeInfo);
    *(undefined1 *)(unaff_x21 + 0x135) = 1;
  }
  puVar4 = System_Collections_Generic_IEnumerator<KeyValuePair<object,_object>>_TypeInfo;
  puVar3 = 
  System_Collections_Generic_IEnumerable<PlayerEditorConnectionEvents_MessageTypeSubscribers>_TypeInfo
  ;
  puVar2 = System_Collections_Generic_IEnumerable<OVRPermissionsRequester_Permission>_TypeInfo;
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = (long *)0x0;
  if (*(long *)(unaff_x20 + 0x348) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  FUN_02d50a3c(&stack0x00000008,*(long *)(unaff_x20 + 0x348),
               *(undefined8 *)
                System_Collections_Generic_IEnumerator<Action<RenderTargetIdentifier,_CommandBuffer>>_TypeInfo
              );
  do {
    uVar5 = FUN_029fd614(&stack0x00000008,*(undefined8 *)puVar3);
    if ((uVar5 & 1) == 0) {
      plVar6 = (long *)0x0;
      break;
    }
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
    if ((*(byte *)(*in_stack_00000018 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*in_stack_00000018 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(in_stack_00000018);
    }
    plVar6 = in_stack_00000018;
  } while (*(int *)((long)in_stack_00000018 + 0x2c) != unaff_w19);
  FUN_029fd610(&stack0x00000008,*(undefined8 *)puVar2);
  return plVar6;
}


