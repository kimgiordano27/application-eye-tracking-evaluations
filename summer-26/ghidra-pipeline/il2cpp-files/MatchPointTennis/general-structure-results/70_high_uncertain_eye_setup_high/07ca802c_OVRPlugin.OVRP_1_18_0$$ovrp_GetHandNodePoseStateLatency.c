/*
FUNCTION_NAME: OVRPlugin.OVRP_1_18_0$$ovrp_GetHandNodePoseStateLatency
ENTRY_POINT: 07ca802c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_18_0__ovrp_GetHandNodePoseStateLatency(void)

{
  bool in_ZR;
  long *plVar1;
  int in_w8;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (in_ZR) {
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    uVar2 = *(int *)(unaff_x19 + 0x40) + 1;
    *(uint *)(unaff_x19 + 0x40) = uVar2;
  }
  else {
    if (in_w8 != 0) {
      return 0;
    }
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_07ca80dc;
    *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x10);
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x38));
    uVar2 = 0;
    *(undefined4 *)(unaff_x19 + 0x40) = 0;
  }
  plVar1 = (long *)(unaff_x19 + 0x38);
  lVar3 = *plVar1;
  if (lVar3 != 0) {
    if ((int)*(uint *)(lVar3 + 0x18) <= (int)uVar2) {
      *plVar1 = 0;
      thunk_FUN_044bb4b4(plVar1,0);
      return 0;
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    lVar3 = lVar3 + (long)(int)uVar2 * 0x1c;
    uVar4 = *(undefined8 *)(lVar3 + 0x30);
    uVar6 = *(undefined8 *)(lVar3 + 0x28);
    uVar5 = *(undefined8 *)(lVar3 + 0x20);
    *(undefined4 *)(unaff_x19 + 0x2c) = *(undefined4 *)(lVar3 + 0x38);
    *(undefined8 *)(unaff_x19 + 0x24) = uVar4;
    *(undefined8 *)(unaff_x19 + 0x1c) = uVar6;
    *(undefined8 *)(unaff_x19 + 0x14) = uVar5;
    *(undefined4 *)(unaff_x19 + 0x10) = 1;
    return 1;
  }
LAB_07ca80dc:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


