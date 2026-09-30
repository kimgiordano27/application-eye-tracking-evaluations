/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetAppHasVrFocus
ENTRY_POINT: 07ca5224
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_1_0__ovrp_GetAppHasVrFocus(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long unaff_x19;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *unaff_x22;
  
  FUN_04447ba8();
  *(undefined1 *)(unaff_x19 + 0xa29) = 1;
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar3 = *unaff_x22;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x28);
  if (lVar5 == 0) {
                    /* try { // try from 07ca5250 to 07da5277 has its CatchHandler @ 07ca5874 */
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar3 = *unaff_x22;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f50fa0);
    FUN_05565ec4(lVar5,uVar6,*(undefined8 *)PTR_DAT_09f50fc0,0);
    plVar4 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x28);
    *plVar4 = lVar5;
    thunk_FUN_044bb4b4(plVar4,lVar5);
    lVar3 = *unaff_x22;
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar3 = *unaff_x22;
  }
  puVar2 = PTR_DAT_09f50fb8;
  puVar1 = PTR_DAT_09f50fb0;
  lVar7 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x30);
  if (lVar7 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar3 = *unaff_x22;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar7 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f50fa8);
    FUN_055757e8(lVar7,uVar6,*(undefined8 *)PTR_DAT_09f50fc8,0);
    plVar4 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x30);
    *plVar4 = lVar7;
    thunk_FUN_044bb4b4(plVar4,lVar7);
  }
  uVar6 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
  FUN_062ba350(uVar6,4,lVar5,lVar7,*(undefined8 *)puVar1);
  return uVar6;
}


