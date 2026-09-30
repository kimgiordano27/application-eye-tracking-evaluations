/*
FUNCTION_NAME: OVR.OpenVR.IVRInput._UpdateActionState$$.ctor
ENTRY_POINT: 04f1cc08
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void OVR_OpenVR_IVRInput__UpdateActionState___ctor(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long unaff_x19;
  long lVar11;
  undefined8 uVar12;
  long unaff_x26;
  undefined8 *puVar13;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 in_stack_00000038;
  
  puVar13 = *(undefined8 **)(unaff_x26 + 0x630);
  FUN_038b2040(param_2,*param_1);
  in_stack_00000028 = in_stack_00000008;
  in_stack_00000020 = in_stack_00000000;
  in_stack_00000038 = in_stack_00000018;
  _uStack0000000000000030 = in_stack_00000010;
  while( true ) {
    uVar4 = FUN_0475f254(&stack0x00000020,*unaff_x27);
    uVar3 = in_stack_00000038;
    uVar2 = _uStack0000000000000030;
    if ((uVar4 & 1) == 0) {
      FUN_0475f250(&stack0x00000020,*(undefined8 *)System_Converter<Object,_IBoundsClipper>_TypeInfo
                  );
      return;
    }
    uVar1 = uStack0000000000000030;
    lVar5 = thunk_FUN_02b79644(*unaff_x28);
    FUN_04dbdb8c(lVar5,0);
    if (lVar5 == 0) break;
    *(long *)(lVar5 + 0x18) = unaff_x19;
    thunk_FUN_02bb0e9c();
    FUN_04f801ac(uVar2 & 0xffffffff,0);
    *(undefined4 *)(lVar5 + 0x10) = uVar1;
    if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar6 = FUN_04f1c7b4(*(long *)(unaff_x19 + 0x40),uVar2 & 0xffffffff);
    if (lVar6 == 0) {
      uVar7 = thunk_FUN_02b79644(*(undefined8 *)UnityEngine_Timeline_PlayableTrack_var);
      FUN_049b830c();
      uVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                  System_Converter<ParameterExpression,_Expression>_TypeInfo);
      FUN_049bd8c8(uVar8,lVar5,
                   *(undefined8 *)
                    System_Runtime_CompilerServices_ConditionalWeakTable_CreateValueCallback<object,_OSSpecificSynchronizationContext>_TypeInfo
                   ,0);
      lVar5 = *unaff_x29;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar5 = *unaff_x29;
      }
      puVar10 = *(undefined8 **)(lVar5 + 0xb8);
      lVar11 = puVar10[1];
      if (lVar11 == 0) {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          puVar10 = *(undefined8 **)(*unaff_x29 + 0xb8);
        }
        uVar12 = *puVar10;
        lVar11 = thunk_FUN_02b79644(*(undefined8 *)System_Converter<Object,_IUpdateDriver>_TypeInfo)
        ;
        FUN_049bdae4(lVar11,uVar12,
                     *(undefined8 *)
                      System_Runtime_CompilerServices_ConditionalWeakTable_CreateValueCallback<HttpWebRequest,_NtlmSession>_TypeInfo
                     ,0);
        plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 8);
        *plVar9 = lVar11;
        thunk_FUN_02bb0e9c(plVar9,lVar11);
      }
      lVar6 = thunk_FUN_02b79644(*(undefined8 *)System_Converter<Object,_IInteractor>_TypeInfo);
      FUN_0498c0c0(lVar6,uVar8,lVar11,uVar7,
                   *(undefined8 *)System_Converter<Object,_IInteractableView>_TypeInfo);
      if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_04f1c75c(*(long *)(unaff_x19 + 0x40),uVar2 & 0xffffffff,lVar6);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
    }
    FUN_0498c120(lVar6,uVar3,*puVar13);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


