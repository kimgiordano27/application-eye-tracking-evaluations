/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$.cctor
ENTRY_POINT: 063b9dec
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_71_0___cctor(ulong param_1,float param_2,long param_3)

{
  long unaff_x19;
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if ((param_1 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07db73d8);
    *(undefined1 *)(unaff_x19 + 0x7b8) = 1;
  }
  if (*(char *)(param_3 + 0xd0) == '\0') {
    fVar5 = *(float *)(param_3 + 0x28);
    fVar3 = *(float *)(param_3 + 0x24) * DAT_015866e8;
    fVar4 = fVar5 * DAT_015866e8;
    uVar2 = FUN_07599c38(*(float *)(param_3 + 0x20) * DAT_015866e8,0);
    *(undefined4 *)(param_3 + 0xb0) = uVar2;
    *(float *)(param_3 + 0xb4) = fVar3;
    *(float *)(param_3 + 0xb8) = fVar4;
    *(float *)(param_3 + 0xbc) = fVar5;
    *(undefined1 *)(param_3 + 0xd0) = 1;
  }
  if (param_2 == 0.0) {
    lVar1 = *(long *)(param_3 + 0xa8);
    if (lVar1 == 0) goto LAB_063b9ec0;
    uVar2 = *(undefined4 *)(param_3 + 0xb0);
  }
  else {
    lVar1 = *(long *)(param_3 + 0xa8);
    if (param_2 == 1.0) {
      if (lVar1 == 0) {
LAB_063b9ec0:
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      uVar2 = *(undefined4 *)(param_3 + 0xc0);
    }
    else {
      uVar2 = FUN_07599a90(*(undefined4 *)(param_3 + 0xb0),*(undefined4 *)(param_3 + 0xb4),
                           *(undefined4 *)(param_3 + 0xb8),*(undefined4 *)(param_3 + 0xbc),
                           *(undefined4 *)(param_3 + 0xc0),*(undefined4 *)(param_3 + 0xc4),
                           *(undefined4 *)(param_3 + 200),*(undefined4 *)(param_3 + 0xcc),0);
      if (lVar1 == 0) goto LAB_063b9ec0;
    }
  }
  FUN_075ba420(uVar2,lVar1,0);
  return;
}


