/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_GetCameraAnchorName
ENTRY_POINT: 069746f8
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


void OVRPlugin_OVRP_1_49_0__ovrp_Media_GetCameraAnchorName(ulong param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *unaff_x19;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  ulong unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  
  while( true ) {
    if ((param_1 & 0xffffffff) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    uVar7 = *(undefined8 *)(unaff_x20 + 0x20 + unaff_x25 * 8);
    lVar6 = *unaff_x19;
    lVar2 = thunk_FUN_03ac74bc(*unaff_x26);
    FUN_0679343c(lVar2,0);
    if (lVar2 == 0) break;
    *(undefined8 *)(lVar2 + 0x18) = uVar7;
    thunk_FUN_03afed3c((undefined8 *)(lVar2 + 0x18),uVar7);
    *(undefined1 *)(lVar2 + 0x10) = 1;
    *(bool *)(lVar2 + 0x11) = unaff_x25 < 2;
    *(bool *)(lVar2 + 0x12) = 1 < unaff_x25;
    if (lVar6 == 0) break;
    lVar4 = *(long *)(lVar6 + 0x10);
    lVar5 = *unaff_x27;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar4 == 0) break;
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
      plVar3 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
      *plVar3 = lVar2;
      thunk_FUN_03afed3c(plVar3,lVar2);
    }
    else {
      FUN_04de85b0(lVar6,lVar2,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
    }
    param_1 = (ulong)*(uint *)(unaff_x20 + 0x18);
    unaff_x25 = unaff_x25 + 1;
    if ((long)(int)*(uint *)(unaff_x20 + 0x18) <= (long)unaff_x25) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


