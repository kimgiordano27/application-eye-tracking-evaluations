/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxLoadFromMemory
ENTRY_POINT: 076dcd34
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_65_0__ovrp_KtxLoadFromMemory
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined4 uVar2;
  float fVar3;
  float unaff_s8;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_085849e0(param_4,0);
  if (lVar1 != 0) {
    FUN_0859aca0(lVar1,0);
    lVar1 = *(long *)(unaff_x20 + 0x20);
    if (lVar1 != 0) {
      fVar4 = *(float *)(unaff_x20 + 0x2c);
      fVar5 = *(float *)(lVar1 + 0x20);
      fVar3 = param_3;
      lVar1 = FUN_085849e0(lVar1,0);
      if (lVar1 != 0) {
        fVar4 = fVar4 + fVar5;
        if (param_2 <= param_3) {
          param_2 = param_3;
        }
        if (unaff_s8 <= param_2) {
          unaff_s8 = param_2;
        }
        fVar5 = unaff_s8 * fVar4;
        uVar2 = FUN_08598884(lVar1,0);
        *unaff_x19 = 0;
        unaff_x19[1] = 0;
        unaff_x19[2] = 0;
        *(undefined4 *)unaff_x19 = uVar2;
        *(float *)((long)unaff_x19 + 4) = fVar4;
        fVar5 = fVar5 * 0.5;
        *(float *)(unaff_x19 + 1) = fVar3;
        *(float *)((long)unaff_x19 + 0xc) = fVar5;
        *(float *)(unaff_x19 + 2) = fVar5;
        *(float *)((long)unaff_x19 + 0x14) = fVar5;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


