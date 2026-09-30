/*
FUNCTION_NAME: OVRPlugin$$StopFaceTracking2
ENTRY_POINT: 0601c820
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__StopFaceTracking2(float param_1,float param_2)

{
  float *pfVar1;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined1 unaff_w27;
  long unaff_x28;
  long unaff_x29;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float fVar8;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  
  do {
    fVar2 = fStack0000000000000030;
    fVar7 = fStack0000000000000028;
    fVar8 = fStack000000000000002c;
    if (param_2 <= param_1) {
      if (*(char *)(unaff_x28 + 0xa82) == '\0') {
        FUN_031f20f4();
        *(undefined1 *)(unaff_x28 + 0xa82) = unaff_w27;
      }
      pfVar1 = *(float **)(*unaff_x22 + 0xb8);
      fVar2 = *pfVar1;
      fVar8 = pfVar1[1];
      fVar7 = pfVar1[2];
    }
    if (*(char *)(unaff_x26 + 0xa81) == '\0') {
      FUN_031f20f4();
      *(undefined1 *)(unaff_x26 + 0xa81) = unaff_w27;
    }
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    fVar3 = unaff_s13 - unaff_s10;
    fVar4 = unaff_s14 - unaff_s11;
    fVar5 = unaff_s9 - unaff_s12;
    fVar6 = SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4);
    if (fVar6 <= fStack0000000000000058) {
      if (*(char *)(unaff_x28 + 0xa82) == '\0') {
        FUN_031f20f4();
        *(undefined1 *)(unaff_x28 + 0xa82) = unaff_w27;
      }
      pfVar1 = *(float **)(*unaff_x22 + 0xb8);
      fVar3 = *pfVar1;
      fVar4 = pfVar1[1];
      fVar5 = pfVar1[2];
    }
    else {
      fVar3 = fVar3 / fVar6;
      fVar4 = fVar4 / fVar6;
      fVar5 = fVar5 / fVar6;
    }
    if (fStack0000000000000038 <= fVar7 * fVar5 + fVar2 * fVar3 + fVar8 * fVar4) goto LAB_0601c938;
    do {
      fVar2 = (float)FUN_0601ce58(uStack000000000000003c,uStack0000000000000040,
                                  uStack0000000000000044,uStack0000000000000048,
                                  uStack000000000000004c,in_stack_00000050);
      if (fVar2 <= fStack000000000000005c) {
        fStack000000000000005c = fVar2;
      }
LAB_0601c938:
      unaff_x29 = unaff_x29 + unaff_x25;
      if ((long)((int)*(ulong *)(unaff_x19 + 0x18) + -1) <= (long)unaff_x23) {
        return fStack000000000000005c;
      }
      if ((*(ulong *)(unaff_x19 + 0x18) & 0xffffffff) <= unaff_x23) {
LAB_0601c990:
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      if (*(long *)(unaff_x20 + 0x40) == 0) {
LAB_0601c994:
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      FUN_06034378(&stack0x00000060,*(long *)(unaff_x20 + 0x40),
                   *(undefined4 *)(unaff_x24 + unaff_x23 * 4),0);
      unaff_s12 = in_stack_00000068;
      unaff_s11 = fStack0000000000000064;
      unaff_s10 = fStack0000000000000060;
      unaff_x23 = unaff_x23 + 1;
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_x23) goto LAB_0601c990;
      if (*(long *)(unaff_x20 + 0x40) == 0) goto LAB_0601c994;
      FUN_06034378(&stack0x00000060,*(long *)(unaff_x20 + 0x40),
                   *(undefined4 *)(unaff_x19 + (unaff_x29 >> 0x1e) + 0x20),0);
      unaff_s9 = in_stack_00000068;
      unaff_s14 = fStack0000000000000064;
      unaff_s13 = fStack0000000000000060;
    } while (1.0 <= fStack0000000000000038);
    if (*(char *)(unaff_x26 + 0xa81) == '\0') {
      FUN_031f20f4();
      *(undefined1 *)(unaff_x26 + 0xa81) = unaff_w27;
    }
    param_1 = fStack0000000000000058;
    param_2 = fStack0000000000000034;
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
  } while( true );
}


