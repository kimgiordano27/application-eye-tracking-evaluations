/*
FUNCTION_NAME: OVRPlugin$$set_vsyncCount
ENTRY_POINT: 0693e220
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_vsyncCount(long param_1,undefined1 param_2 [16],float param_3,float param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  
  if (((param_1 != 0) && (*(long *)(param_1 + 0xf0) != 0)) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0xf0) + 0xe8), lVar1 != 0)) {
    lVar1 = FUN_07c9c69c(lVar1,0);
    lVar2 = FUN_07d22e2c();
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      UnityEngine_UIElements_Length__Equals(lVar2 + 0x20,0);
      if (lVar1 != 0) {
        FUN_07cac358(lVar1,0);
        fVar3 = (float)FUN_07d22ae4();
        if (DAT_08974e24 == '\0') {
          FUN_03a8a718(PTR_DAT_08486c60);
          DAT_08974e24 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        fVar4 = SQRT(param_4 * param_4 + fVar3 * fVar3 + param_3 * param_3) * DAT_015c5928 *
                *(float *)((long)unaff_x19 + 0x3c);
        fVar3 = 1.0;
        if (fVar4 <= 1.0) {
          fVar3 = fVar4;
        }
        fVar5 = 0.0;
        if (0.0 <= fVar4) {
          fVar5 = fVar3;
        }
        fVar5 = *(float *)((long)unaff_x19 + 0x24) * fVar5;
        fVar3 = 1.0;
        if (fVar5 <= 1.0) {
          fVar3 = fVar5;
        }
        fVar4 = 0.0;
        if (0.0 <= fVar5) {
          fVar4 = fVar3;
        }
        uVar6 = FUN_07c94120(1.0 - *(float *)(unaff_x19 + 7),*(float *)(unaff_x19 + 7) + 1.0,0);
        (**(code **)(*unaff_x19 + 0x318))(fVar4);
        (**(code **)(*unaff_x19 + 0x308))(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0693e384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*unaff_x19 + 0x2d8))();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


