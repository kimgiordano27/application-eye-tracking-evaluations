/*
FUNCTION_NAME: OVRManager$$add_SpaceQueryResults
ENTRY_POINT: 060b8410
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRManager__add_SpaceQueryResults(void)

{
  int iVar1;
  undefined8 *puVar2;
  float *pfVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s15;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 in_stack_00000020;
  
  FUN_03642964(PTR_DAT_079f4df0);
  *(undefined1 *)(unaff_x23 + 0x6b7) = 1;
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  fVar10 = SQRT(unaff_s13 * unaff_s13 + unaff_s11 * unaff_s11 + unaff_s12 * unaff_s12);
  if (fVar10 <= unaff_s15) {
    if (*(char *)(unaff_x24 + 0x6b5) == '\0') {
      FUN_03642964(PTR_DAT_079f4dc0);
      *(undefined1 *)(unaff_x24 + 0x6b5) = 1;
    }
    pfVar3 = *(float **)(*unaff_x22 + 0xb8);
    fVar8 = *pfVar3;
    fVar9 = pfVar3[1];
    fVar10 = pfVar3[2];
  }
  else {
    fVar8 = unaff_s11 / fVar10;
    fVar9 = unaff_s12 / fVar10;
    fVar10 = unaff_s13 / fVar10;
  }
  fVar10 = (float)FUN_060389e8(fVar8,fVar9,fVar10,uStack0000000000000018,uStack000000000000001c,
                               in_stack_00000020,0);
  plVar7 = *(long **)(unaff_x19 + 0x28);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x21) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_060b8500;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_0367cd30(plVar7,*unaff_x21,0);
LAB_060b8500:
  iVar1 = (*(code *)*puVar2)(plVar7,puVar2[1]);
  fVar8 = -fVar10;
  if (iVar1 != 1) {
    fVar8 = fVar10;
  }
  if (fVar8 < -70.0) {
    fVar8 = fVar8 + 360.0;
  }
  return fVar8;
}


