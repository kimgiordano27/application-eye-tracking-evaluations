/*
FUNCTION_NAME: OVR.OpenVR.IVRInput._UpdateActionState$$BeginInvoke
ENTRY_POINT: 04f1ccd0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void OVR_OpenVR_IVRInput__UpdateActionState__BeginInvoke(undefined **param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined4 unaff_w21;
  undefined8 unaff_x22;
  long unaff_x24;
  long lVar5;
  undefined8 uVar6;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  do {
    FUN_049bd8c8(param_2,unaff_x24,*(undefined8 *)param_1[0xce],0);
    lVar2 = *unaff_x29;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar2 = *unaff_x29;
    }
    puVar4 = *(undefined8 **)(lVar2 + 0xb8);
    lVar5 = puVar4[1];
    if (lVar5 == 0) {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar4 = *(undefined8 **)(*unaff_x29 + 0xb8);
      }
      uVar6 = *puVar4;
      lVar5 = thunk_FUN_02b79644(*(undefined8 *)System_Converter<Object,_IUpdateDriver>_TypeInfo);
      FUN_049bdae4(lVar5,uVar6,
                   *(undefined8 *)
                    System_Runtime_CompilerServices_ConditionalWeakTable_CreateValueCallback<HttpWebRequest,_NtlmSession>_TypeInfo
                   ,0);
      plVar3 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 8);
      *plVar3 = lVar5;
      thunk_FUN_02bb0e9c(plVar3,lVar5);
    }
    lVar2 = thunk_FUN_02b79644(*(undefined8 *)System_Converter<Object,_IInteractor>_TypeInfo);
    FUN_0498c0c0(lVar2,param_2,lVar5,unaff_x22,
                 *(undefined8 *)System_Converter<Object,_IInteractableView>_TypeInfo);
    if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    FUN_04f1c75c(*(long *)(unaff_x19 + 0x40),unaff_w21,lVar2);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    do {
      FUN_0498c120(lVar2,unaff_x20,*unaff_x26);
      uVar1 = FUN_0475f254(&stack0x00000020,*unaff_x27);
      unaff_x20 = in_stack_00000038;
      unaff_w21 = in_stack_00000030;
      if ((uVar1 & 1) == 0) {
        FUN_0475f250(&stack0x00000020,
                     *(undefined8 *)System_Converter<Object,_IBoundsClipper>_TypeInfo);
        return;
      }
      unaff_x24 = thunk_FUN_02b79644(*unaff_x28);
      FUN_04dbdb8c(unaff_x24,0);
      if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      *(long *)(unaff_x24 + 0x18) = unaff_x19;
      thunk_FUN_02bb0e9c();
      FUN_04f801ac(unaff_w21,0);
      *(undefined4 *)(unaff_x24 + 0x10) = unaff_w21;
      if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar2 = FUN_04f1c7b4(*(long *)(unaff_x19 + 0x40),unaff_w21);
    } while (lVar2 != 0);
    unaff_x22 = thunk_FUN_02b79644(*(undefined8 *)UnityEngine_Timeline_PlayableTrack_var);
    FUN_049b830c();
    param_2 = thunk_FUN_02b79644(*(undefined8 *)
                                  System_Converter<ParameterExpression,_Expression>_TypeInfo);
    param_1 = &
              Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition_BuildStateDelegate<FingerFeatureConfigBuilder_OpenCloseStateBuilder>_TypeInfo
    ;
  } while( true );
}


