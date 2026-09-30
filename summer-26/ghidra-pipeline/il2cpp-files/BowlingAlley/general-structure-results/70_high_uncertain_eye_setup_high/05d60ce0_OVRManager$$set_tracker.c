/*
FUNCTION_NAME: OVRManager$$set_tracker
ENTRY_POINT: 05d60ce0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_tracker
               (long param_1,undefined8 param_2,float param_3,undefined1 param_4 [16],float param_5,
               float param_6)

{
  float *pfVar1;
  float fVar2;
  uint uVar3;
  ulong uVar4;
  float *pfVar5;
  float *pfVar6;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  float *unaff_x24;
  float *unaff_x25;
  long unaff_x26;
  undefined1 unaff_w27;
  float *unaff_x28;
  long lVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float unaff_s9;
  float fVar12;
  
  while( true ) {
    *(float *)(param_1 + -0x14) = param_5;
    lVar7 = *unaff_x20;
    if (lVar7 == 0) break;
    param_6 = param_6 - param_3;
    fVar2 = (float)((ulong)param_2 >> 0x20);
    fVar12 = fVar2;
    fVar11 = param_6;
    uVar8 = FUN_06bddffc(0);
    if (*(uint *)(lVar7 + 0x18) <= unaff_x23) {
LAB_05d60ddc:
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    lVar7 = lVar7 + unaff_x26;
    *(undefined4 *)(lVar7 + -0x10) = uVar8;
    *(float *)(lVar7 + -0xc) = fVar12;
    *(float *)(lVar7 + -8) = fVar11;
    *(float *)(lVar7 + -4) = param_5;
    lVar7 = *unaff_x20;
    if (lVar7 == 0) break;
    if ((*(ulong *)(lVar7 + 0x18) & 0xffffffff) <= unaff_x23) goto LAB_05d60ddc;
    fVar12 = 0.0;
    if (unaff_x26 != 0x3c) {
      if ((uint)*(ulong *)(lVar7 + 0x18) <= (int)unaff_x23 - 1U) goto LAB_05d60ddc;
      fVar12 = *(float *)(lVar7 + unaff_x26 + -0x20);
      if (*(char *)(unaff_x22 + 0x828) == '\0') {
        thunk_FUN_032e1da0();
        *(undefined1 *)(unaff_x22 + 0x828) = unaff_w27;
      }
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      fVar12 = SQRT((float)param_2 * (float)param_2 + fVar2 * fVar2 + param_6 * param_6) / unaff_s9
               + fVar12;
    }
    *(float *)(lVar7 + unaff_x26) = fVar12;
    uVar4 = *(ulong *)(unaff_x19 + 0x18);
    unaff_x23 = unaff_x23 + 1;
    unaff_x26 = unaff_x26 + 0x20;
    pfVar1 = unaff_x28 + 3;
    uVar3 = (uint)uVar4;
    if ((long)(int)uVar3 <= (long)unaff_x23) {
      return;
    }
    if (unaff_x26 == 0x3c) {
      if (uVar3 < 2) goto LAB_05d60ddc;
      uVar9 = *(undefined8 *)(unaff_x19 + 0x2c);
      uVar10 = *(undefined8 *)(unaff_x19 + 0x20);
      pfVar5 = unaff_x25;
      pfVar6 = unaff_x24;
    }
    else {
      if (((uVar4 & 0xffffffff) <= unaff_x23) || (uVar3 <= (int)unaff_x23 - 1U)) goto LAB_05d60ddc;
      uVar9 = *(undefined8 *)(unaff_x28 + 1);
      uVar10 = *(undefined8 *)(unaff_x28 + -2);
      pfVar5 = unaff_x28;
      pfVar6 = pfVar1;
    }
    param_2 = CONCAT44((float)((ulong)uVar9 >> 0x20) - (float)((ulong)uVar10 >> 0x20),
                       (float)uVar9 - (float)uVar10);
    param_1 = *unaff_x20;
    if (param_1 == 0) break;
    if (((uVar4 & 0xffffffff) <= unaff_x23) || (*(uint *)(param_1 + 0x18) <= unaff_x23))
    goto LAB_05d60ddc;
    param_5 = *pfVar1;
    param_1 = param_1 + unaff_x26;
    param_6 = *pfVar6;
    param_3 = *pfVar5;
    *(undefined8 *)(param_1 + -0x1c) = *(undefined8 *)(unaff_x28 + 1);
    unaff_x28 = pfVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


