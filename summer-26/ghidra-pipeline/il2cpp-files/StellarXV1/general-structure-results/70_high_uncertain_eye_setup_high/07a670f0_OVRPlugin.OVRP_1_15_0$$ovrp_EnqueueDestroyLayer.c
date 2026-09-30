/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_EnqueueDestroyLayer
ENTRY_POINT: 07a670f0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_15_0__ovrp_EnqueueDestroyLayer(undefined8 param_1)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long unaff_x19;
  float *pfVar6;
  undefined8 uVar7;
  float fVar8;
  
  uVar2 = FUN_08a3db8c(param_1,0);
  if ((uVar2 & 1) != 0) {
    bVar1 = *(byte *)(unaff_x19 + 0x60);
    *(byte *)(unaff_x19 + 0x60) = bVar1 ^ 1;
    if (bVar1 == 0) {
      if (*(char *)(unaff_x19 + 0x58) == '\0') {
        if (*(int *)(*(long *)PTR_DAT_09285d70 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        FUN_08978b08(*(undefined8 *)PTR_DAT_092f0d90,0);
        *(undefined1 *)(unaff_x19 + 0x60) = 0;
        return;
      }
      puVar5 = (undefined8 *)PTR_DAT_092f0d88;
      if (*(int *)(*(long *)PTR_DAT_09285d70 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        puVar5 = (undefined8 *)PTR_DAT_092f0d88;
      }
    }
    else {
      if (*(char *)(unaff_x19 + 0x58) != '\0') {
        FUN_07a64d34();
      }
      puVar5 = (undefined8 *)PTR_DAT_092f0d98;
      if (*(int *)(*(long *)PTR_DAT_09285d70 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        puVar5 = (undefined8 *)PTR_DAT_092f0d98;
      }
    }
    FUN_0897e2a8(*puVar5,0);
    return;
  }
  uVar2 = FUN_08a3db8c(0x114,0);
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_08a3db8c(0x113,0);
    if ((uVar2 & 1) != 0) {
      pfVar6 = (float *)(unaff_x19 + 0x54);
      uVar7 = *(undefined8 *)PTR_DAT_092f0da8;
      fVar8 = 15.0;
      if (*pfVar6 + 1.0 <= 15.0) {
        fVar8 = *pfVar6 + 1.0;
      }
      *pfVar6 = fVar8;
      uVar3 = FUN_0768c8ac(pfVar6,0);
      uVar7 = FUN_074d875c(uVar7,uVar3,0);
      if (*(char *)(unaff_x19 + 0x58) != '\0') {
        FUN_07a64d34();
        FUN_07a64d4c(uVar7);
        FUN_07a64ed4(0x3fc00000);
        return;
      }
    }
  }
  else {
    pfVar6 = (float *)(unaff_x19 + 0x54);
    uVar7 = *(undefined8 *)PTR_DAT_092f0da8;
    fVar8 = 1.0;
    if (1.0 <= *pfVar6 + -1.0) {
      fVar8 = *pfVar6 + -1.0;
    }
    *pfVar6 = fVar8;
    uVar3 = FUN_0768c8ac(pfVar6,0);
    uVar7 = FUN_074d875c(uVar7,uVar3,0);
    if (*(char *)(unaff_x19 + 0x58) != '\0') {
      FUN_07a64d34();
      FUN_07a64d4c(uVar7);
      lVar4 = FUN_07a648f0();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      *(undefined4 *)(lVar4 + 0x3c) = 0x3fc00000;
      *(undefined1 *)(lVar4 + 0x38) = 1;
    }
  }
  return;
}


