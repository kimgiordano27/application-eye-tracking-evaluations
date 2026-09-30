/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetSystemCpuLevel
ENTRY_POINT: 051e30d4
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_1_0__ovrp_SetSystemCpuLevel(long param_1)

{
  uint uVar1;
  long lVar2;
  float *pfVar3;
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
  long unaff_x29;
  float fVar4;
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
  
code_r0x051e30d4:
  fVar6 = *(float *)(param_1 + 0x30);
  fVar8 = *(float *)(param_1 + 0x34);
  fVar10 = *(float *)(param_1 + 0x38);
  fVar4 = (float)FUN_05ee9a10(*(undefined4 *)(param_1 + 0x2c),0);
  if (unaff_x23 < *(uint *)(unaff_x20 + 0x18)) {
    fVar11 = unaff_x24[-3];
    fVar14 = unaff_x24[-2];
    fVar13 = unaff_x24[-1];
    fVar12 = *unaff_x24;
    fVar5 = (fVar6 * fVar13 + fVar10 * fVar11 + fVar4 * fVar12) - fVar8 * fVar14;
    fVar7 = (fVar8 * fVar11 + fVar10 * fVar14 + fVar6 * fVar12) - fVar4 * fVar13;
    fVar9 = (fVar4 * fVar14 + fVar10 * fVar13 + fVar8 * fVar12) - fVar6 * fVar11;
    fVar4 = ((fVar10 * fVar12 - fVar4 * fVar11) - fVar6 * fVar14) - fVar8 * fVar13;
    do {
      if (unaff_x29 == 0) {
LAB_051e31f0:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      if (*(uint *)(unaff_x29 + 0x18) <= unaff_x23) break;
      lVar2 = unaff_x29 + unaff_x22 * 4;
      unaff_x22 = unaff_x22 + 4;
      unaff_x23 = unaff_x23 + 1;
      unaff_x24 = unaff_x24 + 7;
      *(float *)(lVar2 + 0x20) = fVar5;
      *(float *)(lVar2 + 0x24) = fVar7;
      *(float *)(lVar2 + 0x28) = fVar9;
      *(float *)(lVar2 + 0x2c) = fVar4;
      if (unaff_x22 == 0x68) {
        return 1;
      }
      lVar2 = *unaff_x25;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar2 = *unaff_x25;
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
      if (lVar2 == 0) goto LAB_051e31f0;
      if (*(uint *)(lVar2 + 0x18) <= unaff_x23) break;
      uVar1 = *(uint *)(lVar2 + unaff_x22 + 0x20);
      unaff_x29 = *unaff_x19;
      if (-1 < (int)uVar1) goto code_r0x051e30c4;
      if (*(char *)(unaff_x26 + 0x311) == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum();
        *(undefined1 *)(unaff_x26 + 0x311) = unaff_w27;
      }
      pfVar3 = *(float **)(*unaff_x21 + 0xb8);
      fVar5 = *pfVar3;
      fVar7 = pfVar3[1];
      fVar9 = pfVar3[2];
      fVar4 = pfVar3[3];
    } while( true );
  }
LAB_051e31ec:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
code_r0x051e30c4:
  if (*(uint *)(unaff_x20 + 0x18) <= uVar1) goto LAB_051e31ec;
  param_1 = unaff_x20 + (ulong)uVar1 * unaff_x28;
  goto code_r0x051e30d4;
}


