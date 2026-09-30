/*
FUNCTION_NAME: OVRPlugin$$CreateVirtualKeyboard
ENTRY_POINT: 0694dd68
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


void OVRPlugin__CreateVirtualKeyboard
               (long param_1,undefined1 param_2 [16],float param_3,float param_4,undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar1 = (**(code **)(param_1 + 0x2e8))(param_5,*(undefined8 *)(param_1 + 0x2f0));
  if ((uVar1 & 1) == 0) {
    uVar1 = (**(code **)(*unaff_x20 + 0x2e8))();
    if ((uVar1 & 1) == 0) {
      return;
    }
  }
  lVar2 = (**(code **)(*unaff_x21 + 0x5e8))();
  lVar3 = FUN_07c98f88();
  if (lVar3 != 0) {
    fVar4 = (float)FUN_07cac824(lVar3,0);
    fVar10 = *(float *)(unaff_x19 + 0x54);
    fVar6 = param_3;
    fVar8 = param_4;
    lVar3 = FUN_07c98f88();
    if ((lVar3 != 0) && (uVar5 = FUN_07cac280(lVar3,0), lVar2 != 0)) {
      fVar7 = -(fVar10 * param_3);
      fVar9 = -(fVar10 * param_4);
      FUN_07d32a2c(-(fVar10 * fVar4),fVar7,fVar9,uVar5,fVar6,fVar8,lVar2,0);
      lVar2 = (**(code **)(*unaff_x20 + 0x5e8))();
      lVar3 = FUN_07c98f88();
      if (lVar3 != 0) {
        fVar4 = (float)FUN_07cac824(lVar3,0);
        fVar10 = *(float *)(unaff_x19 + 0x54);
        fVar6 = fVar7;
        fVar8 = fVar9;
        lVar3 = FUN_07c98f88();
        if ((lVar3 != 0) && (uVar5 = FUN_07cac280(lVar3,0), lVar2 != 0)) {
          FUN_07d32a2c(fVar4 * fVar10,fVar7 * fVar10,fVar9 * fVar10,uVar5,fVar6,fVar8,lVar2,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


