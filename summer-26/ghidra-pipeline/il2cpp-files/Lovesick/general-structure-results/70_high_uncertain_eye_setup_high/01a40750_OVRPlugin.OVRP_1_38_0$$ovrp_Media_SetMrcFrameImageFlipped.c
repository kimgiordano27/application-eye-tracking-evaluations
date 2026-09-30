/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_SetMrcFrameImageFlipped
ENTRY_POINT: 01a40750
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_OVRP_1_38_0__ovrp_Media_SetMrcFrameImageFlipped
          (undefined4 param_1,float param_2,float param_3,float param_4)

{
  uint uVar1;
  long lVar2;
  float *pfVar3;
  long unaff_x19;
  long *unaff_x20;
  undefined1 unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  long unaff_x27;
  long unaff_x28;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  while( true ) {
    fVar4 = (float)FUN_02698858(param_1,0);
    lVar2 = *(long *)(unaff_x19 + 0x38);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x26) {
LAB_01a4087c:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    lVar2 = lVar2 + unaff_x24;
    fVar8 = *(float *)(lVar2 + 0x2c);
    fVar11 = *(float *)(lVar2 + 0x30);
    fVar10 = *(float *)(lVar2 + 0x34);
    fVar9 = *(float *)(lVar2 + 0x38);
    fVar5 = (param_2 * fVar10 + param_4 * fVar8 + fVar4 * fVar9) - param_3 * fVar11;
    fVar6 = (param_3 * fVar8 + param_4 * fVar11 + param_2 * fVar9) - fVar4 * fVar10;
    fVar7 = (fVar4 * fVar11 + param_4 * fVar10 + param_3 * fVar9) - param_2 * fVar8;
    fVar4 = ((param_4 * fVar9 - fVar4 * fVar8) - param_2 * fVar11) - param_3 * fVar10;
    while( true ) {
      if (unaff_x28 == 0) goto LAB_01a40878;
      if (*(uint *)(unaff_x28 + 0x18) <= unaff_x26) goto LAB_01a4087c;
      lVar2 = unaff_x28 + unaff_x25 * 4;
      unaff_x25 = unaff_x25 + 4;
      unaff_x26 = unaff_x26 + 1;
      unaff_x24 = unaff_x24 + 0x1c;
      *(float *)(lVar2 + 0x20) = fVar5;
      *(float *)(lVar2 + 0x24) = fVar6;
      *(float *)(lVar2 + 0x28) = fVar7;
      *(float *)(lVar2 + 0x2c) = fVar4;
      if (unaff_x25 == 0x68) {
        return 1;
      }
      lVar2 = *unaff_x23;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar2 = *unaff_x23;
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
      if (lVar2 == 0) goto LAB_01a40878;
      if (*(uint *)(lVar2 + 0x18) <= unaff_x26) goto LAB_01a4087c;
      uVar1 = *(uint *)(lVar2 + unaff_x25 + 0x20);
      unaff_x28 = *(long *)(unaff_x19 + 0x48);
      if (-1 < (int)uVar1) break;
      if (*(char *)(unaff_x22 + 0xf00) == '\0') {
        thunk_FUN_00d48444();
        *(undefined1 *)(unaff_x22 + 0xf00) = unaff_w21;
      }
      pfVar3 = *(float **)(*unaff_x20 + 0xb8);
      fVar5 = *pfVar3;
      fVar6 = pfVar3[1];
      fVar7 = pfVar3[2];
      fVar4 = pfVar3[3];
    }
    lVar2 = *(long *)(unaff_x19 + 0x38);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= uVar1) goto LAB_01a4087c;
    lVar2 = lVar2 + (int)uVar1 * unaff_x27;
    param_1 = *(undefined4 *)(lVar2 + 0x2c);
    param_2 = *(float *)(lVar2 + 0x30);
    param_3 = *(float *)(lVar2 + 0x34);
    param_4 = *(float *)(lVar2 + 0x38);
  }
LAB_01a40878:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


