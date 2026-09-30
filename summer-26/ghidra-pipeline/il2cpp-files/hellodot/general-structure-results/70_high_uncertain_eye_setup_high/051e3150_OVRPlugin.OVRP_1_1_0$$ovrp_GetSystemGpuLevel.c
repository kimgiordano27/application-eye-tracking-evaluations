/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetSystemGpuLevel
ENTRY_POINT: 051e3150
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_OVRP_1_1_0__ovrp_GetSystemGpuLevel
          (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
          float param_7)

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
  float in_s19;
  float in_s23;
  float in_s24;
  
code_r0x051e3150:
  param_3 = param_3 - in_s19;
  param_4 = param_4 - in_s23;
  param_5 = (in_s24 + param_6) - param_5;
  param_7 = (param_1 - param_2) - param_7;
  pfVar3 = unaff_x24;
  do {
    if (unaff_x29 == 0) {
LAB_051e31f0:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if (*(uint *)(unaff_x29 + 0x18) <= unaff_x23) goto LAB_051e31ec;
    lVar2 = unaff_x29 + unaff_x22 * 4;
    unaff_x22 = unaff_x22 + 4;
    unaff_x23 = unaff_x23 + 1;
    unaff_x24 = pfVar3 + 7;
    *(float *)(lVar2 + 0x20) = param_3;
    *(float *)(lVar2 + 0x24) = param_4;
    *(float *)(lVar2 + 0x28) = param_5;
    *(float *)(lVar2 + 0x2c) = param_7;
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
    if (*(uint *)(lVar2 + 0x18) <= unaff_x23) goto LAB_051e31ec;
    uVar1 = *(uint *)(lVar2 + unaff_x22 + 0x20);
    unaff_x29 = *unaff_x19;
    if (-1 < (int)uVar1) break;
    if (*(char *)(unaff_x26 + 0x311) == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum();
      *(undefined1 *)(unaff_x26 + 0x311) = unaff_w27;
    }
    pfVar3 = *(float **)(*unaff_x21 + 0xb8);
    param_3 = *pfVar3;
    param_4 = pfVar3[1];
    param_5 = pfVar3[2];
    param_7 = pfVar3[3];
    pfVar3 = unaff_x24;
  } while( true );
  if (*(uint *)(unaff_x20 + 0x18) <= uVar1) {
LAB_051e31ec:
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c84();
  }
  lVar2 = unaff_x20 + (ulong)uVar1 * unaff_x28;
  fVar5 = *(float *)(lVar2 + 0x30);
  fVar6 = *(float *)(lVar2 + 0x34);
  fVar7 = *(float *)(lVar2 + 0x38);
  fVar4 = (float)FUN_05ee9a10(*(undefined4 *)(lVar2 + 0x2c),0);
  if (*(uint *)(unaff_x20 + 0x18) <= unaff_x23) goto LAB_051e31ec;
  fVar8 = pfVar3[4];
  fVar11 = pfVar3[5];
  fVar10 = pfVar3[6];
  fVar9 = *unaff_x24;
  in_s19 = fVar6 * fVar11;
  in_s23 = fVar4 * fVar10;
  in_s24 = fVar4 * fVar11;
  param_5 = fVar5 * fVar8;
  param_2 = fVar5 * fVar11;
  param_7 = fVar6 * fVar10;
  param_6 = fVar7 * fVar10 + fVar6 * fVar9;
  param_1 = fVar7 * fVar9 - fVar4 * fVar8;
  param_3 = fVar5 * fVar10 + fVar7 * fVar8 + fVar4 * fVar9;
  param_4 = fVar6 * fVar8 + fVar7 * fVar11 + fVar5 * fVar9;
  goto code_r0x051e3150;
}


