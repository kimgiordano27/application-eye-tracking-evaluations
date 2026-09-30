/*
FUNCTION_NAME: OVRPlugin.OVRP_1_3_0$$.cctor
ENTRY_POINT: 0603a448
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_3_0___cctor(long param_1)

{
  uint uVar1;
  float *pfVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined1 unaff_w22;
  long unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  while (param_1 != 0) {
                    /* try { // try from 0603a454 to 0613a457 has its CatchHandler @ 0603a698 */
    if (*(uint *)(param_1 + 0x18) <= unaff_x25) goto LAB_0603a5b0;
                    /* try { // try from 0603a458 to 0613a467 has its CatchHandler @ 0603a6d4 */
    uVar1 = *(uint *)(param_1 + unaff_x24 + 0x20);
    lVar4 = *(long *)(unaff_x19 + 0x48);
    if ((int)uVar1 < 0) {
      if (*(char *)(unaff_x27 + 0x53c) == '\0') {
        FUN_031f20f4();
        *(undefined1 *)(unaff_x27 + 0x53c) = unaff_w22;
      }
      pfVar2 = *(float **)(*unaff_x21 + 0xb8);
      fVar6 = *pfVar2;
      fVar8 = pfVar2[1];
      fVar10 = pfVar2[2];
      fVar5 = pfVar2[3];
    }
    else {
      lVar3 = *unaff_x20;
      if (lVar3 == 0) break;
                    /* try { // try from 0603a478 to 0613a47f has its CatchHandler @ 0603a6bc */
      if (*(uint *)(lVar3 + 0x18) <= uVar1) goto LAB_0603a5b0;
      lVar3 = lVar3 + (ulong)uVar1 * unaff_x28;
      fVar7 = *(float *)(lVar3 + 0x30);
      fVar9 = *(float *)(lVar3 + 0x34);
      fVar11 = *(float *)(lVar3 + 0x38);
      fVar5 = (float)FUN_06e45c00(*(undefined4 *)(lVar3 + 0x2c),0);
                    /* try { // try from 0603a490 to 0613a4a3 has its CatchHandler @ 0603a6d0 */
      lVar3 = *unaff_x20;
      if (lVar3 == 0) break;
      if (*(uint *)(lVar3 + 0x18) <= unaff_x25) goto LAB_0603a5b0;
      lVar3 = lVar3 + unaff_x23;
      fVar12 = *(float *)(lVar3 + 0x2c);
      fVar15 = *(float *)(lVar3 + 0x30);
      fVar14 = *(float *)(lVar3 + 0x34);
      fVar13 = *(float *)(lVar3 + 0x38);
                    /* try { // try from 0603a4bc to 0613a4bf has its CatchHandler @ 0603a694 */
                    /* try { // try from 0603a4c0 to 0613a4c7 has its CatchHandler @ 0603a6cc */
      fVar6 = (fVar7 * fVar14 + fVar11 * fVar12 + fVar5 * fVar13) - fVar9 * fVar15;
      fVar8 = (fVar9 * fVar12 + fVar11 * fVar15 + fVar7 * fVar13) - fVar5 * fVar14;
      fVar10 = (fVar5 * fVar15 + fVar11 * fVar14 + fVar9 * fVar13) - fVar7 * fVar12;
      fVar5 = ((fVar11 * fVar13 - fVar5 * fVar12) - fVar7 * fVar15) - fVar9 * fVar14;
    }
    if (lVar4 == 0) break;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x25) {
LAB_0603a5b0:
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    lVar4 = lVar4 + unaff_x24 * 4;
    unaff_x24 = unaff_x24 + 4;
    unaff_x25 = unaff_x25 + 1;
    unaff_x23 = unaff_x23 + 0x1c;
    *(float *)(lVar4 + 0x20) = fVar6;
    *(float *)(lVar4 + 0x24) = fVar8;
    *(float *)(lVar4 + 0x28) = fVar10;
    *(float *)(lVar4 + 0x2c) = fVar5;
    if (unaff_x24 == 0x68) {
      return 1;
    }
    lVar4 = *unaff_x26;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar4 = *unaff_x26;
    }
    param_1 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


