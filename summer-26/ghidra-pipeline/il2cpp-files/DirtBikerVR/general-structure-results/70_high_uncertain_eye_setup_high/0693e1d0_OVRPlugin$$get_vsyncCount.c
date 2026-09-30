/*
FUNCTION_NAME: OVRPlugin$$get_vsyncCount
ENTRY_POINT: 0693e1d0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_vsyncCount
               (undefined1 param_1 [16],float param_2,float param_3,long *param_4,long param_5)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  
  lVar2 = param_4[3];
  if (lVar2 != 0) {
    if (((*(char *)(lVar2 + 0x18) == '\0') || (param_5 == 0)) || (*(char *)(lVar2 + 0x19) == '\0'))
    {
      return;
    }
    lVar2 = FUN_07d22e2c(param_5,0);
    if (lVar2 != 0) {
      if (*(long *)(lVar2 + 0x18) == 0) {
        return;
      }
      if (((param_4[2] != 0) && (lVar2 = *(long *)(param_4[2] + 0xf0), lVar2 != 0)) &&
         (lVar2 = *(long *)(lVar2 + 0xe8), lVar2 != 0)) {
        lVar2 = FUN_07c9c69c(lVar2,0);
        lVar1 = FUN_07d22e2c(param_5,0);
        if (lVar1 != 0) {
          if (*(int *)(lVar1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          UnityEngine_UIElements_Length__Equals(lVar1 + 0x20,0);
          if (lVar2 != 0) {
            FUN_07cac358(lVar2,0);
            fVar3 = (float)FUN_07d22ae4(param_5,0);
            if (DAT_08974e24 == '\0') {
              FUN_03a8a718(PTR_DAT_08486c60);
              DAT_08974e24 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            fVar4 = SQRT(param_3 * param_3 + fVar3 * fVar3 + param_2 * param_2) * DAT_015c5928 *
                    *(float *)((long)param_4 + 0x3c);
            fVar3 = 1.0;
            if (fVar4 <= 1.0) {
              fVar3 = fVar4;
            }
            fVar5 = 0.0;
            if (0.0 <= fVar4) {
              fVar5 = fVar3;
            }
            fVar5 = *(float *)((long)param_4 + 0x24) * fVar5;
            fVar3 = 1.0;
            if (fVar5 <= 1.0) {
              fVar3 = fVar5;
            }
            fVar4 = 0.0;
            if (0.0 <= fVar5) {
              fVar4 = fVar3;
            }
            uVar6 = FUN_07c94120(1.0 - *(float *)(param_4 + 7),*(float *)(param_4 + 7) + 1.0,0);
            (**(code **)(*param_4 + 0x318))(fVar4,param_4,*(undefined8 *)(*param_4 + 800));
            (**(code **)(*param_4 + 0x308))(uVar6,param_4,*(undefined8 *)(*param_4 + 0x310));
                    /* WARNING: Could not recover jumptable at 0x0693e384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_4 + 0x2d8))(param_4,*(undefined8 *)(*param_4 + 0x2e0));
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


