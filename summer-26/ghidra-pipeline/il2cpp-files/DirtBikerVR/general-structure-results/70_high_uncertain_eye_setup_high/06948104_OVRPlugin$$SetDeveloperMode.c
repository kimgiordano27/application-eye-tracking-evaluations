/*
FUNCTION_NAME: OVRPlugin$$SetDeveloperMode
ENTRY_POINT: 06948104
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetDeveloperMode
               (undefined1 param_1 [16],float param_2,float param_3,undefined4 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong unaff_x25;
  long *unaff_x29;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  FUN_07cacdbc(param_5,param_6,0);
  FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b6608,0);
  lVar2 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487320);
  FUN_07c9d2fc(lVar2,*(undefined8 *)PTR_DAT_084b66b8,0);
  if (lVar2 != 0) {
    lVar3 = FUN_07c9c69c(lVar2,0);
    uVar4 = FUN_07c9c69c();
    if (lVar3 != 0) {
      FUN_07cacdbc(lVar3,uVar4,0);
      lVar3 = FUN_07c98f88();
      lVar5 = FUN_07c9c69c(lVar2,0);
      if (lVar3 != 0) {
        uVar6 = FUN_07cac280(lVar3,0);
        fVar10 = param_2;
        fVar11 = param_3;
        uVar7 = FUN_07cac4e0(lVar3,0);
        if (lVar5 != 0) {
          FUN_07cad038(uVar6,param_2,param_3,uVar7,fVar10,fVar11,param_4,lVar5,0);
          lVar3 = FUN_045614d0(lVar2,*(undefined8 *)PTR_DAT_08494af8);
          if (lVar3 != 0) {
            FUN_07c46614(0x42a00000,lVar3,0);
            FUN_045614d0(lVar2,*(undefined8 *)PTR_DAT_084b65c0);
            lVar2 = FUN_045614d0(lVar2,*(undefined8 *)PTR_DAT_084b65d0);
            uVar4 = FUN_07c98f88();
            if (lVar2 != 0) {
              *(undefined8 *)(lVar2 + 0x20) = uVar4;
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
              lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
              FUN_07c9d2fc(lVar3,*(undefined8 *)PTR_DAT_084b6688,0);
              if ((((lVar2 != 0) && (lVar5 = FUN_07c9c69c(lVar2,0), lVar5 != 0)) &&
                  (FUN_07cacdbc(), lVar3 != 0)) && (lVar5 = FUN_07c9c69c(lVar3,0), lVar5 != 0)) {
                FUN_07cacdbc();
                lVar5 = FUN_07c9c69c(lVar2,0);
                fVar8 = (float)FUN_07cac280();
                fVar10 = param_2;
                fVar11 = param_3;
                fVar9 = (float)FUN_07cac7a8();
                if (lVar5 != 0) {
                  param_3 = param_3 - fVar11;
                  param_2 = param_2 - fVar10;
                  FUN_07cac358(fVar8 - fVar9,param_2,param_3,lVar5,0);
                  lVar5 = FUN_07c9c69c(lVar3,0);
                  fVar8 = (float)FUN_07cac280();
                  fVar10 = param_2;
                  fVar11 = param_3;
                  fVar9 = (float)FUN_07cac7a8();
                  if (lVar5 != 0) {
                    FUN_07cac358(fVar8 + fVar9,param_2 + fVar10,param_3 + fVar11,lVar5,0);
                    puVar1 = PTR_DAT_084b5a40;
                    FUN_07c998ec(lVar2,*(undefined8 *)PTR_DAT_084b5a40,0);
                    FUN_07c998ec(lVar3,*(undefined8 *)puVar1,0);
                    goto LAB_06948418;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


