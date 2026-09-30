/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_GetSpaceSemanticLabels
ENTRY_POINT: 06977108
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_72_0__ovrp_GetSpaceSemanticLabels(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong unaff_x19;
  undefined8 *puVar5;
  undefined8 *unaff_x20;
  long *unaff_x21;
  
  uVar2 = FUN_07c9e200(param_1,0,0);
  if (((uVar2 & 1) != 0) || ((unaff_x19 & 1) != 0)) {
    uVar3 = FUN_04717ed0(*(undefined8 *)PTR_DAT_084b74e0,*(undefined8 *)PTR_DAT_084b74c8);
    *unaff_x20 = uVar3;
    thunk_FUN_03afed3c();
  }
  if (*unaff_x21 != 0) {
    lVar4 = *(long *)(*unaff_x21 + 0x18);
    if (lVar4 == 0) {
      bVar1 = true;
    }
    else {
      lVar4 = FUN_07c420b4(lVar4,0);
      if (lVar4 == 0) goto LAB_069771cc;
      bVar1 = *(int *)(lVar4 + 0x18) == 0;
    }
    if (!bVar1 && (unaff_x19 & 1) == 0) {
      return;
    }
    lVar4 = *unaff_x21;
    uVar3 = FUN_0697a228();
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)(lVar4 + 0x18);
      *puVar5 = uVar3;
      thunk_FUN_03afed3c(puVar5,uVar3);
      return;
    }
  }
LAB_069771cc:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


