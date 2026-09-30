/*
FUNCTION_NAME: OVR.OpenVR.IVRInput._GetInputSourceHandle$$Invoke
ENTRY_POINT: 04f1cb70
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void OVR_OpenVR_IVRInput__GetInputSourceHandle__Invoke(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long unaff_x19;
  long unaff_x20;
  long lVar15;
  undefined8 uVar16;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 in_stack_00000038;
  
  FUN_02b3c81c(*(undefined8 *)(param_1 + 0xf38));
  FUN_02b3c81c(System_Converter<Object,_IUpdateDriver>_TypeInfo);
  FUN_02b3c81c(System_Converter<ParameterExpression,_Expression>_TypeInfo);
  FUN_02b3c81c(System_Converter<ParameterInfo,_ParameterExpression>_TypeInfo);
  FUN_02b3c81c(
              System_Runtime_CompilerServices_ConditionalWeakTable_CreateValueCallback<HttpWebRequest,_NtlmSession>_TypeInfo
              );
  FUN_02b3c81c(
              System_Runtime_CompilerServices_ConditionalWeakTable_CreateValueCallback<object,_OSSpecificSynchronizationContext>_TypeInfo
              );
  FUN_02b3c81c(DG_Tweening_Core_DOGetter<Color>_TypeInfo);
  FUN_02b3c81c(DG_Tweening_Core_DOGetter<Color2>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x896) = 1;
  puVar4 = DG_Tweening_Core_DOGetter<Color2>_TypeInfo;
  puVar3 = DG_Tweening_Core_DOGetter<Color>_TypeInfo;
  puVar2 = System_Converter<Object,_IInteractable>_TypeInfo;
  puVar1 = System_Converter<Object,_ICylinderClipper>_TypeInfo;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  _uStack0000000000000030 = 0;
  if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  FUN_038b2040(*(long *)(unaff_x19 + 0x30),
               *(undefined8 *)System_Converter<ParameterInfo,_ParameterExpression>_TypeInfo);
  in_stack_00000028 = in_stack_00000008;
  in_stack_00000020 = in_stack_00000000;
  in_stack_00000038 = in_stack_00000018;
  _uStack0000000000000030 = in_stack_00000010;
  while( true ) {
    uVar8 = FUN_0475f254(&stack0x00000020,*(undefined8 *)puVar1);
    uVar7 = in_stack_00000038;
    uVar6 = _uStack0000000000000030;
    if ((uVar8 & 1) == 0) {
      FUN_0475f250(&stack0x00000020,*(undefined8 *)System_Converter<Object,_IBoundsClipper>_TypeInfo
                  );
      return;
    }
    uVar5 = uStack0000000000000030;
    lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
    FUN_04dbdb8c(lVar9,0);
    if (lVar9 == 0) break;
    *(long *)(lVar9 + 0x18) = unaff_x19;
    thunk_FUN_02bb0e9c();
    FUN_04f801ac(uVar6 & 0xffffffff,0);
    *(undefined4 *)(lVar9 + 0x10) = uVar5;
    if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar10 = FUN_04f1c7b4(*(long *)(unaff_x19 + 0x40),uVar6 & 0xffffffff);
    if (lVar10 == 0) {
      uVar11 = thunk_FUN_02b79644(*(undefined8 *)UnityEngine_Timeline_PlayableTrack_var);
      FUN_049b830c();
      uVar12 = thunk_FUN_02b79644(*(undefined8 *)
                                   System_Converter<ParameterExpression,_Expression>_TypeInfo);
      FUN_049bd8c8(uVar12,lVar9,
                   *(undefined8 *)
                    System_Runtime_CompilerServices_ConditionalWeakTable_CreateValueCallback<object,_OSSpecificSynchronizationContext>_TypeInfo
                   ,0);
      lVar9 = *(long *)puVar4;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar9 = *(long *)puVar4;
      }
      puVar14 = *(undefined8 **)(lVar9 + 0xb8);
      lVar15 = puVar14[1];
      if (lVar15 == 0) {
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          puVar14 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
        }
        uVar16 = *puVar14;
        lVar15 = thunk_FUN_02b79644(*(undefined8 *)System_Converter<Object,_IUpdateDriver>_TypeInfo)
        ;
        FUN_049bdae4(lVar15,uVar16,
                     *(undefined8 *)
                      System_Runtime_CompilerServices_ConditionalWeakTable_CreateValueCallback<HttpWebRequest,_NtlmSession>_TypeInfo
                     ,0);
        plVar13 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
        *plVar13 = lVar15;
        thunk_FUN_02bb0e9c(plVar13,lVar15);
      }
      lVar10 = thunk_FUN_02b79644(*(undefined8 *)System_Converter<Object,_IInteractor>_TypeInfo);
      FUN_0498c0c0(lVar10,uVar12,lVar15,uVar11,
                   *(undefined8 *)System_Converter<Object,_IInteractableView>_TypeInfo);
      if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_04f1c75c(*(long *)(unaff_x19 + 0x40),uVar6 & 0xffffffff,lVar10);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
    }
    FUN_0498c120(lVar10,uVar7,*(undefined8 *)puVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


