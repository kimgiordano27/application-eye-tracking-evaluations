/*
FUNCTION_NAME: OVRManager$$GetCurrentInputSubsystem
ENTRY_POINT: 069291d0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRManager__GetCurrentInputSubsystem(float param_1,long param_2)

{
  uint in_w8;
  int in_w9;
  int in_w10;
  uint in_w11;
  uint in_w12;
  long lVar1;
  uint in_w13;
  long lVar2;
  long in_x14;
  uint in_w15;
  long unaff_x19;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float unaff_s8;
  
  while (*(uint *)(in_x14 + 0x20) < in_w15) {
    lVar2 = unaff_x19 + (long)(int)in_w13 * (long)in_w10;
    lVar1 = unaff_x19 + (long)(int)in_w12 * (long)in_w10;
    uVar4 = *(undefined8 *)(lVar2 + 0x20);
    fVar7 = *(float *)(lVar2 + 0x28);
    lVar2 = unaff_x19 + (long)(int)*(uint *)(in_x14 + 0x20) * (long)in_w10;
    uVar9 = *(undefined8 *)(lVar1 + 0x20);
    fVar5 = (float)((ulong)uVar4 >> 0x20);
    fVar3 = (float)uVar4;
    fVar8 = (float)uVar9 - fVar3;
    fVar10 = (float)((ulong)uVar9 >> 0x20) - fVar5;
    uVar4 = *(undefined8 *)(lVar2 + 0x24);
    fVar3 = *(float *)(lVar2 + 0x20) - fVar3;
    uVar9 = NEON_rev64(CONCAT44(fVar10,fVar8),4);
    fVar5 = (float)uVar4 - fVar5;
    fVar6 = (float)((ulong)uVar4 >> 0x20) - fVar7;
    fVar7 = *(float *)(lVar1 + 0x28) - fVar7;
    fVar8 = fVar8 * fVar5 - (float)uVar9 * fVar3;
    fVar5 = fVar10 * fVar6 - fVar7 * fVar5;
    fVar3 = fVar7 * fVar3 - (float)((ulong)uVar9 >> 0x20) * fVar6;
    unaff_s8 = unaff_s8 + SQRT(fVar8 * fVar8 + fVar5 * fVar5 + fVar3 * fVar3) * param_1;
    if ((int)in_w8 <= (int)(in_w11 + 1)) {
      return unaff_s8;
    }
    if (in_w8 <= in_w9 + 1U) break;
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_w15 = *(uint *)(unaff_x19 + 0x18);
    in_w13 = *(uint *)(param_2 + (long)(int)(in_w9 + 1U) * 4 + 0x20);
    if ((((in_w15 <= in_w13) || (in_w8 <= in_w9 + 2U)) ||
        (in_w12 = *(uint *)(param_2 + (long)(in_w9 + 2) * 4 + 0x20), in_w15 <= in_w12)) ||
       (in_w11 = in_w9 + 3, in_w8 <= in_w11)) break;
    in_x14 = param_2 + (long)(in_w9 + 3) * 4;
    in_w9 = in_w9 + 3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


