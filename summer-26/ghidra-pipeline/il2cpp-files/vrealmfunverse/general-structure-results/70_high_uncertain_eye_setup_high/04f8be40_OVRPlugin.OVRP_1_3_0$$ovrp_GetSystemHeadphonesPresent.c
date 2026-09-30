/*
FUNCTION_NAME: OVRPlugin.OVRP_1_3_0$$ovrp_GetSystemHeadphonesPresent
ENTRY_POINT: 04f8be40
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_3_0__ovrp_GetSystemHeadphonesPresent(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x19;
  ulong uVar9;
  long *unaff_x22;
  
  FUN_02b3c81c(System_ComponentModel_Design_IDictionaryService_var);
  FUN_02b3c81c(System_Func<NavigationSubmitEvent>_TypeInfo);
  FUN_02b3c81c(System_Func<object>_TypeInfo);
  *(undefined1 *)(unaff_x19 + 0xd75) = 1;
  lVar4 = *unaff_x22;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar4 = *unaff_x22;
  }
  puVar3 = System_Func<object>_TypeInfo;
  puVar2 = System_Action<HandTracking_SubsystemCreatedEventArgs>_TypeInfo;
  if (**(long **)(lVar4 + 0xb8) == 0) {
LAB_04f8bfb0:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar5 = FUN_02b3c908(*(undefined8 *)DG_Tweening_Core_DOSetter<Color>_TypeInfo,
                       *(undefined4 *)(**(long **)(lVar4 + 0xb8) + 0x18));
  uVar9 = 0;
  lVar4 = 0x20;
  while( true ) {
    lVar6 = *unaff_x22;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar6 = *unaff_x22;
    }
    lVar8 = **(long **)(lVar6 + 0xb8);
    if (lVar8 == 0) goto LAB_04f8bfb0;
    if ((long)*(int *)(lVar8 + 0x18) <= (long)uVar9) {
      return lVar5;
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar8 = **(long **)(*unaff_x22 + 0xb8);
      if (lVar8 == 0) goto LAB_04f8bfb0;
    }
    lVar6 = FUN_037a6268(lVar8,uVar9 & 0xffffffff,*(undefined8 *)puVar3);
    if (lVar6 == 0) goto LAB_04f8bfb0;
    iVar1 = *(int *)(lVar6 + 0x18) + -1;
    uVar7 = FUN_02b3c908(*(undefined8 *)puVar2,iVar1);
    if (lVar5 == 0) goto LAB_04f8bfb0;
    if (*(uint *)(lVar5 + 0x18) <= uVar9) break;
    lVar6 = lVar5 + uVar9 * 8;
    *(undefined8 *)(lVar6 + 0x20) = uVar7;
    thunk_FUN_02bb0e9c(lVar5 + lVar4,uVar7);
    if (**(long **)(*unaff_x22 + 0xb8) == 0) goto LAB_04f8bfb0;
    uVar7 = FUN_037a6268(**(long **)(*unaff_x22 + 0xb8),uVar9 & 0xffffffff,*(undefined8 *)puVar3);
    if (*(uint *)(lVar5 + 0x18) <= uVar9) break;
    FUN_04d9f2a8(uVar7,*(undefined8 *)(lVar6 + 0x20),iVar1,0);
    uVar9 = uVar9 + 1;
    lVar4 = lVar4 + 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


