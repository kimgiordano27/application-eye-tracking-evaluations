/*
FUNCTION_NAME: FUN_03598df0
ENTRY_POINT: 03598df0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_03598df0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if ((DAT_0412e0ad & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d09ac8);
    FUN_01ab69ac(OVRPlugin_InsightPassthroughColorMapType_TypeInfo);
    DAT_0412e0ad = 1;
  }
  puVar2 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
  puVar1 = PTR_DAT_03d09ac8;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar3 = FUN_0369b288(param_1,0);
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar6);
    lVar6 = *(long *)puVar2;
  }
  uVar4 = FUN_01f65944(uVar3,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0xf0),*(undefined8 *)puVar1);
  uVar5 = FUN_03699d3c(param_1,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x54),0);
  if ((uVar5 & 1) != 0) {
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar6 = *(long *)puVar2;
    }
    uVar5 = FUN_03699d3c(param_1,*(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0xc),0);
    if ((uVar5 & 1) != 0) {
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar6 = *(long *)puVar2;
      }
      fVar7 = (float)FUN_0369e060(param_1,*(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x54),0);
      fVar8 = (float)FUN_0369e060(param_1,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc),0
                                 );
      fVar9 = (float)FUN_0369e060(param_1,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x3c),
                                  0);
      fVar10 = (float)FUN_0369e060(param_1,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40)
                                   ,0);
      fVar11 = (float)FUN_0369e060(param_1,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30)
                                   ,0);
      fVar12 = (float)FUN_0369e060(param_1,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x34)
                                   ,0);
      lVar6 = *(long *)puVar2;
      if (fVar11 <= fVar12) {
        fVar11 = fVar12;
      }
      fVar8 = fVar8 + fVar11 * 0.25;
      fVar11 = 1.0;
      if ((uVar4 & 1) == 0) {
        fVar10 = fVar10 + fVar9 + fVar8;
        if (fVar10 <= 1.0) {
          fVar10 = 1.0;
        }
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar6 = *(long *)puVar2;
        }
        fVar11 = (fVar7 - *(float *)(*(long *)(lVar6 + 0xb8) + 0x128)) / (fVar7 * fVar10);
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar6 = *(long *)puVar2;
      }
      FUN_0369d118(fVar11,param_1,*(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0xcc),0);
      uVar5 = FUN_03699d3c(param_1,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x78),0);
      if ((uVar5 & 1) != 0) {
        lVar6 = *(long *)puVar2;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar6 = *(long *)puVar2;
        }
        fVar11 = (float)FUN_0369e060(param_1,*(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x78),0);
        fVar9 = (float)FUN_0369e060(param_1,*(undefined4 *)
                                             (*(long *)(*(long *)puVar2 + 0xb8) + 0x80),0);
        lVar6 = *(long *)puVar2;
        fVar12 = 1.0;
        if ((uVar4 & 1) == 0) {
          fVar12 = fVar7 - *(float *)(*(long *)(lVar6 + 0xb8) + 0x128);
          fVar10 = fVar8 * fVar12;
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar6 = *(long *)puVar2;
            fVar12 = fVar7 - *(float *)(*(long *)(lVar6 + 0xb8) + 0x128);
          }
          fVar12 = fVar12 - fVar10;
          if (fVar12 <= 0.0) {
            fVar12 = 0.0;
          }
          fVar12 = fVar12 / (fVar7 * (fVar11 + fVar9));
        }
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar6 = *(long *)puVar2;
        }
        FUN_0369d118(fVar12,param_1,*(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0xd0),0);
      }
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar6 = *(long *)puVar2;
      }
      uVar5 = FUN_03699d3c(param_1,*(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x18),0);
      if ((uVar5 & 1) != 0) {
        lVar6 = *(long *)puVar2;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar6 = *(long *)puVar2;
        }
        fVar9 = (float)FUN_0369e060(param_1,*(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x18),0);
        fVar12 = (float)FUN_0369e060(param_1,*(undefined4 *)
                                              (*(long *)(*(long *)puVar2 + 0xb8) + 0x1c),0);
        fVar10 = (float)FUN_0369e060(param_1,*(undefined4 *)
                                              (*(long *)(*(long *)puVar2 + 0xb8) + 0x20),0);
        fVar13 = (float)FUN_0369e060(param_1,*(undefined4 *)
                                              (*(long *)(*(long *)puVar2 + 0xb8) + 0x24),0);
        lVar6 = *(long *)puVar2;
        fVar11 = ABS(fVar9);
        if (ABS(fVar9) <= ABS(fVar12)) {
          fVar11 = ABS(fVar12);
        }
        fVar9 = 1.0;
        if ((uVar4 & 1) == 0) {
          fVar9 = fVar7 - *(float *)(*(long *)(lVar6 + 0xb8) + 0x128);
          fVar8 = fVar8 * fVar9;
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar6 = *(long *)puVar2;
            fVar9 = fVar7 - *(float *)(*(long *)(lVar6 + 0xb8) + 0x128);
          }
          fVar9 = fVar9 - fVar8;
          if (fVar9 <= 0.0) {
            fVar9 = 0.0;
          }
          fVar9 = fVar9 / (fVar7 * (fVar11 + fVar10 + fVar13));
        }
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar6 = *(long *)puVar2;
        }
        FUN_0369d118(fVar9,param_1,*(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0xd4),0);
        return;
      }
    }
  }
  return;
}


