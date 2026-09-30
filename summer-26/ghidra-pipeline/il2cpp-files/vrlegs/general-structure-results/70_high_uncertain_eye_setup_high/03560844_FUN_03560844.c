/*
FUNCTION_NAME: FUN_03560844
ENTRY_POINT: 03560844
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_20;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_03560844(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float in_s3;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  puVar1 = PTR_DAT_03cbdf88;
                    /* try { // try from 03560848 to 0366084b has its CatchHandler @ 035608a0 */
                    /* try { // try from 03560868 to 0366086b has its CatchHandler @ 035608ac */
                    /* try { // try from 0356086c to 03660897 has its CatchHandler @ 035606d0 */
  if ((DAT_0412df87 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_InsightPassthroughColorMapType_TypeInfo);
    DAT_0412df87 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x380);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar2 = FUN_036cee6c(uVar4,0,0);
  puVar1 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar3 = *(long *)puVar1;
    }
    if (*(char *)(*(long *)(lVar3 + 0xb8) + 300) == '\0') {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03598308(0);
      lVar3 = *(long *)puVar1;
    }
    *(undefined1 *)(param_1 + 0x748) = 1;
    lVar5 = *(long *)(param_1 + 0x110);
    fVar16 = *(float *)(param_1 + 0x340);
    if (*(float *)(param_1 + 0x348) <= *(float *)(param_1 + 0x340)) {
      fVar16 = *(float *)(param_1 + 0x348);
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (lVar5 != 0) {
      fVar6 = (float)FUN_0369e060(lVar5,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xa0),0)
      ;
      fVar14 = *(float *)(param_1 + 0x34c);
      if (fVar6 <= fVar16) {
        fVar16 = fVar6;
      }
      fVar6 = *(float *)(param_1 + 0x344);
      if (fVar14 <= *(float *)(param_1 + 0x344)) {
        fVar6 = fVar14;
      }
      if (*(long *)(param_1 + 0x110) != 0) {
        fVar7 = (float)FUN_0369e060(*(long *)(param_1 + 0x110),
                                    *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xa4),0);
        if (fVar7 <= fVar6) {
          fVar6 = fVar7;
        }
        if (*(long *)(param_1 + 0x380) != 0) {
          FUN_036db544(*(long *)(param_1 + 0x380),0);
          if (*(long *)(param_1 + 0x380) != 0) {
            fVar22 = *(float *)(param_1 + 0x340);
            fVar19 = *(float *)(param_1 + 0x348);
            fVar7 = fVar14;
            FUN_036db544(*(long *)(param_1 + 0x380),0);
            if (*(long *)(param_1 + 0x380) != 0) {
              fVar11 = *(float *)(param_1 + 0x344);
              fVar8 = *(float *)(param_1 + 0x34c);
              fVar12 = fVar11;
              fVar15 = in_s3;
              fVar9 = (float)FUN_036dbba0(*(long *)(param_1 + 0x380),0);
              if (*(long *)(param_1 + 0x380) != 0) {
                fVar13 = fVar12;
                fVar10 = (float)FUN_036dba50(*(long *)(param_1 + 0x380),0);
                if (*(long *)(param_1 + 0x380) != 0) {
                  FUN_036db544(*(long *)(param_1 + 0x380),0);
                  if (*(long *)(param_1 + 0x380) != 0) {
                    fVar20 = *(float *)(param_1 + 0x340);
                    fVar21 = *(float *)(param_1 + 0x348);
                    FUN_036dba50(*(long *)(param_1 + 0x380),0);
                    if (*(long *)(param_1 + 0x380) != 0) {
                      FUN_036db544(*(long *)(param_1 + 0x380),0);
                      fVar17 = *(float *)(param_1 + 0x344);
                      fVar18 = *(float *)(param_1 + 0x34c);
                      lVar3 = *(long *)(param_1 + 0x110);
                      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      if (lVar3 != 0) {
                        if (fVar22 <= 0.0) {
                          fVar22 = 0.0;
                        }
                        if (fVar6 <= 0.0) {
                          fVar6 = 0.0;
                        }
                        if (fVar19 <= 0.0) {
                          fVar19 = 0.0;
                        }
                        if (fVar20 <= 0.0) {
                          fVar20 = 0.0;
                        }
                        if (fVar11 <= 0.0) {
                          fVar11 = 0.0;
                        }
                        if (fVar17 <= 0.0) {
                          fVar17 = 0.0;
                        }
                        thunk_FUN_0369b650(fVar9 + (0.5 - fVar10) * fVar7 + (fVar20 - fVar21) * 0.5,
                                           fVar12 + (0.5 - fVar13) * fVar15 +
                                                    (fVar18 - fVar17) * 0.5,
                                           fVar16 + ((fVar14 - fVar22) - fVar19) * 0.5,
                                           fVar6 + ((in_s3 - fVar11) - fVar8) * 0.5,lVar3,
                                           *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x9c)
                                           ,0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  return;
}


