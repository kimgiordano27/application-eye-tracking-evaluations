/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_CreateInsightTriangleMesh
ENTRY_POINT: 07cabcd0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_63_0__ovrp_CreateInsightTriangleMesh(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 in_w8;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar3;
  float fVar4;
  undefined4 uVar5;
  
  *(undefined1 *)(unaff_x21 + 0xf43) = in_w8;
  uVar3 = **(undefined8 **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
  uVar5 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_09f1e740 + 0xb8) + 1);
  fVar4 = (float)((ulong)uVar3 >> 0x20);
  *unaff_x19 = uVar3;
  *(undefined4 *)(unaff_x19 + 1) = uVar5;
  if (ABS((float)uVar3) <= ABS(fVar4)) {
    if (unaff_x20 == 0) goto LAB_07cabd70;
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x18);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
    if (fVar4 <= 0.0) {
      uVar3 = 4;
    }
    else {
      uVar3 = 5;
    }
  }
  else {
    if (unaff_x20 == 0) {
LAB_07cabd70:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x18);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
    if ((float)uVar3 <= 0.0) {
      uVar3 = 3;
    }
    else {
      uVar3 = 2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x07cabd6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,uVar3,uVar2);
  return;
}


