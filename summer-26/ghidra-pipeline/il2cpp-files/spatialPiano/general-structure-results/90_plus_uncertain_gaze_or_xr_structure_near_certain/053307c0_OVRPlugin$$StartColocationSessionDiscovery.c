/*
FUNCTION_NAME: OVRPlugin$$StartColocationSessionDiscovery
ENTRY_POINT: 053307c0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 113
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


float OVRPlugin__StartColocationSessionDiscovery
                (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6
                ,float param_7,long param_8,long param_9)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  float fVar4;
  float fVar5;
  ulong uVar6;
  float *pfVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  undefined8 in_stack_00000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack00000000000000b8;
  float fStack00000000000000bc;
  
  puVar3 = PTR_DAT_067c8f80;
  puVar2 = PTR_DAT_067c8f78;
  fStack0000000000000038 = param_1;
  fStack000000000000003c = param_2;
  fStack0000000000000040 = param_3;
  fStack0000000000000044 = param_4;
  fStack0000000000000048 = param_5;
  fStack000000000000004c = param_6;
  if (param_9 != 0) {
    uVar6 = *(ulong *)(param_9 + 0x18);
    if ((long)((uVar6 << 0x20) + -0x100000000) < 1) {
      fVar14 = INFINITY;
    }
    else {
      fVar14 = INFINITY;
      uVar8 = 0;
      param_4 = param_4 - param_1;
      param_5 = param_5 - param_2;
      param_6 = param_6 - param_3;
      fVar13 = SQRT(param_6 * param_6 + param_4 * param_4 + param_5 * param_5);
      fStack00000000000000bc = DAT_011b06e4;
      do {
        if ((uVar6 & 0xffffffff) <= uVar8) {
LAB_05330ac4:
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        if (*(long *)(param_8 + 0x40) == 0) goto LAB_05330ac0;
        lVar1 = param_9 + uVar8 * 4;
        FUN_05348760((long)&stack0x00000050 + 4,*(long *)(param_8 + 0x40),
                     *(undefined4 *)(lVar1 + 0x20),0);
        fVar5 = fStack000000000000005c;
        fVar4 = fStack0000000000000058;
        fVar10 = in_stack_00000050._4_4_;
        uVar8 = uVar8 + 1;
        if (*(uint *)(param_9 + 0x18) <= (uint)uVar8) goto LAB_05330ac4;
        if (*(long *)(param_8 + 0x40) == 0) goto LAB_05330ac0;
        FUN_05348760((long)&stack0x00000050 + 4,*(long *)(param_8 + 0x40),
                     *(undefined4 *)(lVar1 + 0x24),0);
        fVar12 = fStack000000000000005c;
        fVar11 = fStack0000000000000058;
        fVar9 = in_stack_00000050._4_4_;
        if (1.0 <= param_7) {
LAB_05330a44:
          fVar10 = (float)FUN_05330f4c(fStack0000000000000038,fStack000000000000003c,
                                       fStack0000000000000040,fStack0000000000000044,
                                       fStack0000000000000048,fStack000000000000004c);
          if (fVar10 <= fVar14) {
            fVar14 = fVar10;
          }
        }
        else {
          if (DAT_06bb42bf == '\0') {
            FUN_02f08768(puVar3);
            DAT_06bb42bf = '\x01';
          }
          fStack00000000000000b8 = fVar14;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          fVar15 = param_5 / fVar13;
          fVar16 = param_4 / fVar13;
          fVar17 = param_6 / fVar13;
          if (fVar13 <= fStack00000000000000bc) {
            if (DAT_06bb42c1 == '\0') {
              FUN_02f08768(puVar2);
              DAT_06bb42c1 = '\x01';
            }
            pfVar7 = *(float **)(*(long *)puVar2 + 0xb8);
            fVar16 = *pfVar7;
            fVar15 = pfVar7[1];
            fVar17 = pfVar7[2];
          }
          if (DAT_06bb42bf == '\0') {
            FUN_02f08768(puVar3);
            DAT_06bb42bf = '\x01';
          }
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          fVar9 = fVar9 - fVar10;
          fVar11 = fVar11 - fVar4;
          fVar12 = fVar12 - fVar5;
          fVar14 = SQRT(fVar12 * fVar12 + fVar9 * fVar9 + fVar11 * fVar11);
          if (fVar14 <= fStack00000000000000bc) {
            if (DAT_06bb42c1 == '\0') {
              FUN_02f08768(puVar2);
              DAT_06bb42c1 = '\x01';
            }
            pfVar7 = *(float **)(*(long *)puVar2 + 0xb8);
            fVar9 = *pfVar7;
            fVar11 = pfVar7[1];
            fVar12 = pfVar7[2];
          }
          else {
            fVar9 = fVar9 / fVar14;
            fVar11 = fVar11 / fVar14;
            fVar12 = fVar12 / fVar14;
          }
          fVar14 = fStack00000000000000b8;
          if (fVar17 * fVar12 + fVar16 * fVar9 + fVar15 * fVar11 < param_7) goto LAB_05330a44;
        }
        uVar6 = *(ulong *)(param_9 + 0x18);
      } while ((long)uVar8 < (long)((int)uVar6 + -1));
    }
    return fVar14;
  }
LAB_05330ac0:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


