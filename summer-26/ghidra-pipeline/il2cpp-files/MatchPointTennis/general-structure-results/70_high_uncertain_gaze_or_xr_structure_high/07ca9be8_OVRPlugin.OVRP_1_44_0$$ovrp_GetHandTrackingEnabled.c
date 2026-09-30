/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetHandTrackingEnabled
ENTRY_POINT: 07ca9be8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_8;functionality_gaze_retrieval_or_extraction
*/


undefined8
OVRPlugin_OVRP_1_44_0__ovrp_GetHandTrackingEnabled
          (long param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
          undefined1 param_7 [16],undefined1 param_8 [16],float param_9)

{
  uint uVar1;
  long lVar2;
  float *pfVar3;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined1 unaff_w22;
  long unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  do {
    fVar8 = *(float *)(param_1 + 0x34);
    fVar7 = *(float *)(param_1 + 0x38);
    fVar4 = (param_3 * fVar8 + param_5 * param_6 + param_2 * fVar7) - param_4 * param_9;
    fVar5 = (param_4 * param_6 + param_5 * param_9 + param_3 * fVar7) - param_2 * fVar8;
    fVar6 = (param_2 * param_9 + param_5 * fVar8 + param_4 * fVar7) - param_3 * param_6;
    fVar7 = ((param_5 * fVar7 - param_2 * param_6) - param_3 * param_9) - param_4 * fVar8;
    while( true ) {
      if (unaff_x29 == 0) goto LAB_07ca9b20;
      if (*(uint *)(unaff_x29 + 0x18) <= unaff_x25) goto LAB_07ca9cec;
      lVar2 = unaff_x29 + unaff_x24 * 4;
      unaff_x24 = unaff_x24 + 4;
      unaff_x25 = unaff_x25 + 1;
      unaff_x23 = unaff_x23 + 0x1c;
      *(float *)(lVar2 + 0x20) = fVar4;
      *(float *)(lVar2 + 0x24) = fVar5;
      *(float *)(lVar2 + 0x28) = fVar6;
      *(float *)(lVar2 + 0x2c) = fVar7;
      if (unaff_x24 == 0x68) {
        return 1;
      }
      lVar2 = *unaff_x26;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar2 = *unaff_x26;
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
      if (lVar2 == 0) goto LAB_07ca9b20;
      if (*(uint *)(lVar2 + 0x18) <= unaff_x25) goto LAB_07ca9cec;
      uVar1 = *(uint *)(lVar2 + unaff_x24 + 0x20);
      unaff_x29 = *(long *)(unaff_x19 + 0x48);
      if (-1 < (int)uVar1) break;
      if (*(char *)(unaff_x27 + 0xf45) == '\0') {
        FUN_04447ba8();
        *(undefined1 *)(unaff_x27 + 0xf45) = unaff_w22;
      }
      pfVar3 = *(float **)(*unaff_x21 + 0xb8);
      fVar4 = *pfVar3;
      fVar5 = pfVar3[1];
      fVar6 = pfVar3[2];
      fVar7 = pfVar3[3];
    }
    lVar2 = *unaff_x20;
    if (lVar2 == 0) {
LAB_07ca9b20:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(uint *)(lVar2 + 0x18) <= uVar1) {
LAB_07ca9cec:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    lVar2 = lVar2 + (ulong)uVar1 * unaff_x28;
    param_3 = *(float *)(lVar2 + 0x30);
    param_4 = *(float *)(lVar2 + 0x34);
    param_5 = *(float *)(lVar2 + 0x38);
    param_2 = (float)FUN_095165fc(*(undefined4 *)(lVar2 + 0x2c),0);
    param_1 = *unaff_x20;
    if (param_1 == 0) goto LAB_07ca9b20;
    if (*(uint *)(param_1 + 0x18) <= unaff_x25) goto LAB_07ca9cec;
    param_1 = param_1 + unaff_x23;
    param_6 = *(float *)(param_1 + 0x2c);
    param_9 = *(float *)(param_1 + 0x30);
  } while( true );
}


