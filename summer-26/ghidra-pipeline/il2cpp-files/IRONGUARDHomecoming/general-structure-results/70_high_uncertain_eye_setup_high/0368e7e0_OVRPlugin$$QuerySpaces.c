/*
FUNCTION_NAME: OVRPlugin$$QuerySpaces
ENTRY_POINT: 0368e7e0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__QuerySpaces
               (undefined4 *param_1,undefined1 param_2 [16],float param_3,float param_4,
               undefined8 param_5)

{
  long lVar1;
  long unaff_x20;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_04070398(param_5,0);
  if (lVar1 != 0) {
    fVar2 = (float)FUN_0407ec3c(lVar1,0);
    if ((*(long *)(unaff_x20 + 0x20) != 0) &&
       (lVar1 = FUN_04070398(*(long *)(unaff_x20 + 0x20),0), lVar1 != 0)) {
      FUN_0407ec3c(lVar1,0);
      if ((*(long *)(unaff_x20 + 0x20) != 0) &&
         (lVar1 = FUN_04070398(*(long *)(unaff_x20 + 0x20),0), lVar1 != 0)) {
        FUN_0407ec3c(lVar1,0);
        lVar1 = *(long *)(unaff_x20 + 0x20);
        if (param_3 <= param_4) {
          param_3 = param_4;
        }
        if (lVar1 != 0) {
          fVar4 = *(float *)(unaff_x20 + 0x2c);
          fVar5 = *(float *)(lVar1 + 0x20);
          lVar1 = FUN_04070398(lVar1,0);
          if (lVar1 != 0) {
            if (fVar2 <= param_3) {
              fVar2 = param_3;
            }
            fVar4 = fVar4 + fVar5;
            fVar2 = fVar2 * fVar4;
            uVar3 = FUN_0407d3c8(lVar1,0);
            *param_1 = uVar3;
            param_1[1] = fVar4;
            fVar2 = fVar2 * 0.5;
            param_1[2] = param_4;
            param_1[3] = fVar2;
            param_1[4] = fVar2;
            param_1[5] = fVar2;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


