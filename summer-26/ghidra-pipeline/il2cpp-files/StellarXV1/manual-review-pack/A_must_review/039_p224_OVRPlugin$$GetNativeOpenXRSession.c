/*
FUNCTION_NAME: OVRPlugin$$GetNativeOpenXRSession
ENTRY_POINT: 07a47538
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_6;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


float OVRPlugin__GetNativeOpenXRSession
                (float param_1,float param_2,float param_3,float param_4,float param_5,
                undefined1 param_6 [16],undefined1 param_7 [16],float param_8)

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
  float unaff_s8;
  float unaff_s15;
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
    fVar6 = SQRT(param_3 * param_3 + param_4 + param_5);
    if (fVar6 <= fStack00000000000000bc) {
      if (*(char *)(unaff_x26 + 0x4f1) == '\0') {
        FUN_04077588();
        *(undefined1 *)(unaff_x26 + 0x4f1) = unaff_w25;
      }
      pfVar4 = *(float **)(*unaff_x22 + 0xb8);
      param_1 = *pfVar4;
      param_2 = pfVar4[1];
      param_3 = pfVar4[2];
    }
    else {
      param_1 = param_1 / fVar6;
      param_2 = param_2 / fVar6;
      param_3 = param_3 / fVar6;
    }
    fVar6 = fStack00000000000000b8;
    if (fStack0000000000000034 <= unaff_s15 * param_3 + unaff_s8 * param_1 + param_8 * param_2)
    goto LAB_07a475f0;
    do {
      fVar5 = (float)FUN_07a47ad0(uStack0000000000000038,uStack000000000000003c,
                                  uStack0000000000000040,uStack0000000000000044,
                                  uStack0000000000000048,uStack000000000000004c);
      if (fVar5 <= fVar6) {
        fVar6 = fVar5;
      }
LAB_07a475f0:
      if ((long)((int)*(ulong *)(unaff_x19 + 0x18) + -1) <= (long)unaff_x23) {
        return fVar6;
      }
      if ((*(ulong *)(unaff_x19 + 0x18) & 0xffffffff) <= unaff_x23) {
LAB_07a47648:
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      if (*(long *)(unaff_x20 + 0x40) == 0) {
LAB_07a47644:
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar1 = unaff_x19 + unaff_x23 * 4;
      OVRPlugin_LayerDesc__ToString
                ((long)&stack0x00000050 + 4,*(long *)(unaff_x20 + 0x40),
                 *(undefined4 *)(lVar1 + 0x20),0);
      fVar3 = fStack000000000000005c;
      fVar2 = fStack0000000000000058;
      fVar5 = in_stack_00000050._4_4_;
      unaff_x23 = unaff_x23 + 1;
      if (*(uint *)(unaff_x19 + 0x18) <= (uint)unaff_x23) goto LAB_07a47648;
      if (*(long *)(unaff_x20 + 0x40) == 0) goto LAB_07a47644;
      OVRPlugin_LayerDesc__ToString
                ((long)&stack0x00000050 + 4,*(long *)(unaff_x20 + 0x40),
                 *(undefined4 *)(lVar1 + 0x24),0);
      param_3 = fStack000000000000005c;
      param_2 = fStack0000000000000058;
      param_1 = in_stack_00000050._4_4_;
    } while (1.0 <= fStack0000000000000034);
    if (*(char *)(unaff_x24 + 0x4e7) == '\0') {
      FUN_04077588();
      *(undefined1 *)(unaff_x24 + 0x4e7) = unaff_w25;
    }
    fStack00000000000000b8 = fVar6;
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    param_8 = fStack0000000000000028;
    unaff_s8 = fStack000000000000002c;
    unaff_s15 = in_stack_00000020._4_4_;
    if (fStack0000000000000030 <= fStack00000000000000bc) {
      if (*(char *)(unaff_x26 + 0x4f1) == '\0') {
        FUN_04077588();
        *(undefined1 *)(unaff_x26 + 0x4f1) = unaff_w25;
      }
      pfVar4 = *(float **)(*unaff_x22 + 0xb8);
      unaff_s8 = *pfVar4;
      param_8 = pfVar4[1];
      unaff_s15 = pfVar4[2];
    }
    if (*(char *)(unaff_x24 + 0x4e7) == '\0') {
      FUN_04077588();
      *(undefined1 *)(unaff_x24 + 0x4e7) = unaff_w25;
    }
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    param_1 = param_1 - fVar5;
    param_2 = param_2 - fVar2;
    param_3 = param_3 - fVar3;
    param_4 = param_1 * param_1;
    param_5 = param_2 * param_2;
  } while( true );
}


