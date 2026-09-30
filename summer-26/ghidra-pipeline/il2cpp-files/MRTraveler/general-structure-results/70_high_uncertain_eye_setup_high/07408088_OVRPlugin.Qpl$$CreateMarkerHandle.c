/*
FUNCTION_NAME: OVRPlugin.Qpl$$CreateMarkerHandle
ENTRY_POINT: 07408088
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Qpl__CreateMarkerHandle(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  float *pfVar4;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  float *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  undefined1 unaff_w27;
  long unaff_x28;
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
  
  while( true ) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      param_1 = *unaff_x25;
    }
    lVar2 = *(long *)(*(long *)(param_1 + 0xb8) + 0x10);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x23) goto LAB_074081e8;
    uVar1 = *(uint *)(lVar2 + unaff_x22 + 0x20);
    lVar2 = *unaff_x19;
    if ((int)uVar1 < 0) {
      if (*(char *)(unaff_x26 + 0xffc) == '\0') {
        FUN_03c8f898();
        *(undefined1 *)(unaff_x26 + 0xffc) = unaff_w27;
      }
      pfVar4 = *(float **)(*unaff_x21 + 0xb8);
      fVar6 = *pfVar4;
      fVar8 = pfVar4[1];
      fVar10 = pfVar4[2];
      fVar5 = pfVar4[3];
    }
    else {
      if (*(uint *)(unaff_x20 + 0x18) <= uVar1) goto LAB_074081e8;
      lVar3 = unaff_x20 + (ulong)uVar1 * unaff_x28;
      fVar7 = *(float *)(lVar3 + 0x30);
      fVar9 = *(float *)(lVar3 + 0x34);
      fVar11 = *(float *)(lVar3 + 0x38);
                    /* try { // try from 074080dc to 07508113 has its CatchHandler @ 07407f48 */
      fVar5 = (float)FUN_085d2318(*(undefined4 *)(lVar3 + 0x2c),0);
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_x23) goto LAB_074081e8;
      fVar12 = unaff_x24[-3];
      fVar15 = unaff_x24[-2];
      fVar14 = unaff_x24[-1];
      fVar13 = *unaff_x24;
                    /* try { // try from 07408114 to 0750811b has its CatchHandler @ 074081ec */
                    /* try { // try from 07408128 to 075081a3 has its CatchHandler @ 074081f4 */
      fVar6 = (fVar7 * fVar14 + fVar11 * fVar12 + fVar5 * fVar13) - fVar9 * fVar15;
      fVar8 = (fVar9 * fVar12 + fVar11 * fVar15 + fVar7 * fVar13) - fVar5 * fVar14;
      fVar10 = (fVar5 * fVar15 + fVar11 * fVar14 + fVar9 * fVar13) - fVar7 * fVar12;
      fVar5 = ((fVar11 * fVar13 - fVar5 * fVar12) - fVar7 * fVar15) - fVar9 * fVar14;
    }
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x23) {
LAB_074081e8:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    lVar2 = lVar2 + unaff_x22 * 4;
    unaff_x22 = unaff_x22 + 4;
    unaff_x23 = unaff_x23 + 1;
    unaff_x24 = unaff_x24 + 7;
    *(float *)(lVar2 + 0x20) = fVar6;
    *(float *)(lVar2 + 0x24) = fVar8;
    *(float *)(lVar2 + 0x28) = fVar10;
    *(float *)(lVar2 + 0x2c) = fVar5;
    if (unaff_x22 == 0x68) {
      return 1;
    }
    param_1 = *unaff_x25;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


