/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_DestroyDynamicObjectTracker
ENTRY_POINT: 056a7f94
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 138
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_104_0__ovrp_DestroyDynamicObjectTracker(undefined1 param_1 [16])

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x19;
  long *unaff_x23;
  undefined1 auVar7 [16];
  undefined8 in_stack_00000018;
  
  *(long *)(unaff_x19 + 0x20) = param_1._8_8_;
  *(long *)(unaff_x19 + 0x18) = param_1._0_8_;
  *(undefined8 *)(unaff_x19 + 0x28) = in_stack_00000018;
  auVar7 = OVRPlugin_<>c__<_cctor>b__807_26(unaff_x19 + 0x18,0);
  uVar6 = auVar7._0_8_;
  uVar3 = FUN_055339f0(uVar6,0);
  uVar4 = FUN_056a841c();
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02df485c(*unaff_x23);
  }
  iVar2 = FUN_056a44c4(uVar6,auVar7._8_8_,uVar4,uVar6);
  puVar1 = System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_TypeInfo;
  if (iVar2 == 0) {
    lVar5 = **(long **)(*(long *)
                         System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_TypeInfo
                       + 0xb8);
    if (lVar5 == 0) {
      uVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                  System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_TypeInfo
                                );
      FUN_04e39494(uVar6,*(undefined8 *)
                          System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_TypeInfo);
      **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar6;
      LeanTween__value(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar6);
      lVar5 = **(long **)(*(long *)puVar1 + 0xb8);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
    }
    FUN_04e3a230(lVar5,uVar3);
  }
  else {
    FUN_056a9b78(unaff_x19 + 0x18,0);
  }
  return;
}


