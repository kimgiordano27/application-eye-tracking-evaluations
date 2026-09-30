/*
FUNCTION_NAME: OVRPlugin$$StopColocationSessionDiscovery
ENTRY_POINT: 05330888
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


float OVRPlugin__StopColocationSessionDiscovery(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  undefined1 unaff_w25;
  long unaff_x26;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float fVar10;
  float unaff_s15;
  float fVar11;
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined8 in_stack_00000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack00000000000000b8;
  float fStack00000000000000bc;
  
  do {
    lVar1 = unaff_x19 + unaff_x23 * 4;
    FUN_05348760((long)&stack0x00000050 + 4,param_1,*(undefined4 *)(lVar1 + 0x20),0);
    fVar3 = fStack000000000000005c;
    fVar2 = fStack0000000000000058;
    fVar8 = in_stack_00000050._4_4_;
    unaff_x23 = unaff_x23 + 1;
    if (*(uint *)(unaff_x19 + 0x18) <= (uint)unaff_x23) goto LAB_05330ac4;
    if (*(long *)(unaff_x20 + 0x40) == 0) break;
    FUN_05348760((long)&stack0x00000050 + 4,*(long *)(unaff_x20 + 0x40),
                 *(undefined4 *)(lVar1 + 0x24),0);
    fVar7 = fStack000000000000005c;
    fVar6 = fStack0000000000000058;
    fVar5 = in_stack_00000050._4_4_;
    if (1.0 <= unaff_s8) {
LAB_05330a44:
      fVar8 = (float)FUN_05330f4c(uStack0000000000000038,uStack000000000000003c,
                                  uStack0000000000000040,uStack0000000000000044,
                                  uStack0000000000000048,uStack000000000000004c);
      if (fVar8 <= unaff_s15) {
        unaff_s15 = fVar8;
      }
    }
    else {
      if (*(char *)(unaff_x24 + 0x2bf) == '\0') {
        FUN_02f08768();
        *(undefined1 *)(unaff_x24 + 0x2bf) = unaff_w25;
      }
      fStack00000000000000b8 = unaff_s15;
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      fVar9 = fStack0000000000000028;
      fVar10 = fStack000000000000002c;
      fVar11 = in_stack_00000020._4_4_;
      if (fStack0000000000000030 <= fStack00000000000000bc) {
        if (*(char *)(unaff_x26 + 0x2c1) == '\0') {
          FUN_02f08768();
          *(undefined1 *)(unaff_x26 + 0x2c1) = unaff_w25;
        }
        pfVar4 = *(float **)(*unaff_x22 + 0xb8);
        fVar10 = *pfVar4;
        fVar9 = pfVar4[1];
        fVar11 = pfVar4[2];
      }
      if (*(char *)(unaff_x24 + 0x2bf) == '\0') {
        FUN_02f08768();
        *(undefined1 *)(unaff_x24 + 0x2bf) = unaff_w25;
      }
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      fVar5 = fVar5 - fVar8;
      fVar6 = fVar6 - fVar2;
      fVar7 = fVar7 - fVar3;
      fVar8 = SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6);
      if (fVar8 <= fStack00000000000000bc) {
        if (*(char *)(unaff_x26 + 0x2c1) == '\0') {
          FUN_02f08768();
          *(undefined1 *)(unaff_x26 + 0x2c1) = unaff_w25;
        }
        pfVar4 = *(float **)(*unaff_x22 + 0xb8);
        fVar5 = *pfVar4;
        fVar6 = pfVar4[1];
        fVar7 = pfVar4[2];
      }
      else {
        fVar5 = fVar5 / fVar8;
        fVar6 = fVar6 / fVar8;
        fVar7 = fVar7 / fVar8;
      }
      unaff_s8 = fStack0000000000000034;
      unaff_s15 = fStack00000000000000b8;
      if (fVar11 * fVar7 + fVar10 * fVar5 + fVar9 * fVar6 < fStack0000000000000034)
      goto LAB_05330a44;
    }
    if ((long)((int)*(ulong *)(unaff_x19 + 0x18) + -1) <= (long)unaff_x23) {
      return unaff_s15;
    }
    if ((*(ulong *)(unaff_x19 + 0x18) & 0xffffffff) <= unaff_x23) {
LAB_05330ac4:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    param_1 = *(long *)(unaff_x20 + 0x40);
  } while (param_1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


