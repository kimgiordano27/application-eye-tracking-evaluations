/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetSystemCpuLevel
ENTRY_POINT: 051e306c
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_1_0__ovrp_GetSystemCpuLevel(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  float *pfVar4;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  float *pfVar8;
  long *unaff_x25;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  plVar5 = *(long **)(unaff_x21 + 0xa08);
  lVar6 = 0;
  uVar7 = 0;
  pfVar8 = (float *)(unaff_x20 + 0x38);
  while( true ) {
    lVar2 = *unaff_x25;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar2 = *unaff_x25;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= uVar7) goto LAB_051e31ec;
    uVar1 = *(uint *)(lVar2 + lVar6 + 0x20);
    lVar2 = *unaff_x19;
    if ((int)uVar1 < 0) {
      if (DAT_06a67311 == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(plVar5);
        DAT_06a67311 = '\x01';
      }
      pfVar4 = *(float **)(*plVar5 + 0xb8);
      fVar10 = *pfVar4;
      fVar12 = pfVar4[1];
      fVar14 = pfVar4[2];
      fVar9 = pfVar4[3];
    }
    else {
      if (*(uint *)(unaff_x20 + 0x18) <= uVar1) goto LAB_051e31ec;
      lVar3 = unaff_x20 + (ulong)uVar1 * 0x1c;
      fVar11 = *(float *)(lVar3 + 0x30);
      fVar13 = *(float *)(lVar3 + 0x34);
      fVar15 = *(float *)(lVar3 + 0x38);
      fVar9 = (float)FUN_05ee9a10(*(undefined4 *)(lVar3 + 0x2c),0);
      if (*(uint *)(unaff_x20 + 0x18) <= uVar7) goto LAB_051e31ec;
      fVar16 = pfVar8[-3];
      fVar19 = pfVar8[-2];
      fVar18 = pfVar8[-1];
      fVar17 = *pfVar8;
      fVar10 = (fVar11 * fVar18 + fVar15 * fVar16 + fVar9 * fVar17) - fVar13 * fVar19;
      fVar12 = (fVar13 * fVar16 + fVar15 * fVar19 + fVar11 * fVar17) - fVar9 * fVar18;
      fVar14 = (fVar9 * fVar19 + fVar15 * fVar18 + fVar13 * fVar17) - fVar11 * fVar16;
      fVar9 = ((fVar15 * fVar17 - fVar9 * fVar16) - fVar11 * fVar19) - fVar13 * fVar18;
    }
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= uVar7) {
LAB_051e31ec:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    lVar2 = lVar2 + lVar6 * 4;
    lVar6 = lVar6 + 4;
    uVar7 = uVar7 + 1;
    pfVar8 = pfVar8 + 7;
    *(float *)(lVar2 + 0x20) = fVar10;
    *(float *)(lVar2 + 0x24) = fVar12;
    *(float *)(lVar2 + 0x28) = fVar14;
    *(float *)(lVar2 + 0x2c) = fVar9;
    if (lVar6 == 0x68) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


