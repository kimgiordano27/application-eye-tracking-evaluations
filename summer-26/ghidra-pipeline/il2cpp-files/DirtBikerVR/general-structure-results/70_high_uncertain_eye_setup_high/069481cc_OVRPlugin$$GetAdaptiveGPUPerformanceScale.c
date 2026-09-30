/*
FUNCTION_NAME: OVRPlugin$$GetAdaptiveGPUPerformanceScale
ENTRY_POINT: 069481cc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetAdaptiveGPUPerformanceScale(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong unaff_x25;
  long *unaff_x29;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s9;
  float unaff_s10;
  
  FUN_07cad038();
  lVar2 = FUN_045614d0();
  if (lVar2 != 0) {
    FUN_07c46614(0x42a00000,lVar2,0);
    FUN_045614d0();
    lVar2 = FUN_045614d0();
    uVar3 = FUN_07c98f88();
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x20) = uVar3;
      thunk_FUN_03afed3c();
      FUN_07c998cc(lVar2,*(undefined8 *)PTR_DAT_08489ea0,0);
      FUN_045614d0();
      if ((unaff_x25 & 1) == 0) {
LAB_06948418:
        if (*(int *)(*unaff_x29 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b65f8,0);
        FUN_06939cec();
        FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b66c0,0);
        FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b6680,0);
        return;
      }
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b6660,0);
      puVar1 = PTR_DAT_08487320;
      lVar2 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487320);
      FUN_07c9d2fc(lVar2,*(undefined8 *)PTR_DAT_084b6638,0);
      lVar4 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
      FUN_07c9d2fc(lVar4,*(undefined8 *)PTR_DAT_084b6688,0);
      if ((((lVar2 != 0) && (lVar5 = FUN_07c9c69c(lVar2,0), lVar5 != 0)) &&
          (FUN_07cacdbc(), lVar4 != 0)) && (lVar5 = FUN_07c9c69c(lVar4,0), lVar5 != 0)) {
        FUN_07cacdbc();
        lVar5 = FUN_07c9c69c(lVar2,0);
        fVar6 = (float)FUN_07cac280();
        fVar8 = unaff_s9;
        fVar9 = unaff_s10;
        fVar7 = (float)FUN_07cac7a8();
        if (lVar5 != 0) {
          unaff_s10 = unaff_s10 - fVar9;
          unaff_s9 = unaff_s9 - fVar8;
          FUN_07cac358(fVar6 - fVar7,unaff_s9,unaff_s10,lVar5,0);
          lVar5 = FUN_07c9c69c(lVar4,0);
          fVar6 = (float)FUN_07cac280();
          fVar8 = unaff_s9;
          fVar9 = unaff_s10;
          fVar7 = (float)FUN_07cac7a8();
          if (lVar5 != 0) {
            FUN_07cac358(fVar6 + fVar7,unaff_s9 + fVar8,unaff_s10 + fVar9,lVar5,0);
            puVar1 = PTR_DAT_084b5a40;
            FUN_07c998ec(lVar2,*(undefined8 *)PTR_DAT_084b5a40,0);
            FUN_07c998ec(lVar4,*(undefined8 *)puVar1,0);
            goto LAB_06948418;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


