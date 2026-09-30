/*
FUNCTION_NAME: OVRPlugin.OVRP_1_48_0$$ovrp_SetExternalCameraProperties
ENTRY_POINT: 07caa61c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_48_0__ovrp_SetExternalCameraProperties
               (undefined1 param_1 [16],float param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  ulong unaff_x21;
  long *unaff_x22;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  
  lVar1 = FUN_0952b33c(param_3,0);
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_044a54b4(*unaff_x22);
  }
  uVar2 = FUN_0952c404(lVar1,0,0);
  if ((uVar2 & 1) != 0) {
    lVar1 = FUN_0952b33c(*(undefined8 *)PTR_DAT_09f51148,0);
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar2 = FUN_0952fedc(lVar1,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if ((unaff_x21 & 1) == 0) {
    fVar4 = (float)FUN_09536010(0);
    if ((lVar1 != 0) && (lVar3 = FUN_0952a094(lVar1,0), lVar3 != 0)) {
      fVar4 = fVar4 * unaff_s8;
      FUN_0953a23c(lVar3,0);
      param_2 = fVar4 + param_2;
      if (param_2 < *(float *)(unaff_x19 + 0x2c) - *(float *)(unaff_x19 + 0x34)) {
        return;
      }
      lVar3 = FUN_0952a094(lVar1,0);
      if (lVar3 != 0) {
        FUN_0953a23c(lVar3,0);
        if (*(float *)(unaff_x19 + 0x2c) + *(float *)(unaff_x19 + 0x34) < fVar4 + param_2) {
          return;
        }
        lVar1 = FUN_0952a094(lVar1,0);
        if (DAT_0a51bf40 == '\0') {
          FUN_04447ba8(PTR_DAT_09f1e740);
          DAT_0a51bf40 = '\x01';
        }
        if (lVar1 != 0) {
          lVar3 = *(long *)(*(long *)PTR_DAT_09f1e740 + 0xb8);
          fVar6 = fVar4 * *(float *)(lVar3 + 0x20);
          fVar5 = fVar4 * *(float *)(lVar3 + 0x1c);
          param_2 = fVar4 * *(float *)(lVar3 + 0x18);
          goto LAB_07caa708;
        }
      }
    }
  }
  else if ((lVar1 != 0) && (lVar3 = FUN_0952a094(lVar1,0), lVar3 != 0)) {
    FUN_0953a23c(lVar3,0);
    lVar1 = FUN_0952a094(lVar1,0);
    if (DAT_0a51bf40 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf40 = '\x01';
    }
    if (lVar1 != 0) {
      param_2 = unaff_s8 - param_2;
      lVar3 = *(long *)(*(long *)PTR_DAT_09f1e740 + 0xb8);
      fVar6 = param_2 * *(float *)(lVar3 + 0x20);
      fVar5 = param_2 * *(float *)(lVar3 + 0x1c);
      param_2 = param_2 * *(float *)(lVar3 + 0x18);
LAB_07caa708:
      FUN_0953b770(param_2,fVar5,fVar6,lVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


