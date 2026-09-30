/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_GetDynamicObjectKeyboardSupported
ENTRY_POINT: 063bf688
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_104_0__ovrp_GetDynamicObjectKeyboardSupported(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  int unaff_w20;
  int unaff_w21;
  long *unaff_x24;
  
  while( true ) {
    iVar1 = FUN_06163524(param_1,0);
    unaff_w20 = iVar1 + unaff_w20;
    unaff_w21 = unaff_w21 + 1;
    iVar1 = FUN_0625b654();
    if (iVar1 <= unaff_w21) break;
    param_1 = FUN_0625b6b4();
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03798b70(*unaff_x24);
    }
  }
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar3 = FUN_0616245c(unaff_w20,0);
  iVar1 = FUN_0625b654();
  if (0 < iVar1) {
    iVar1 = 0;
    uVar6 = uVar3;
    do {
      uVar4 = FUN_0625b6b4();
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_03798b70(*unaff_x24);
      }
      FUN_06163ba4(uVar4,uVar6,0,0);
      lVar5 = FUN_0628e72c(uVar6,0);
      uVar6 = FUN_0625b6b4();
      iVar2 = FUN_06163524(uVar6,0);
      uVar6 = FUN_0628e720(lVar5 + iVar2,0);
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0625b654();
    } while (iVar1 < iVar2);
  }
  return uVar3;
}


