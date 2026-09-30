/*
FUNCTION_NAME: OVRPlugin$$StartBodyTracking2
ENTRY_POINT: 0601c8e0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__StartBodyTracking2(float param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
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
  float fVar4;
  float unaff_s8;
  float unaff_s15;
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
  undefined4 uStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  
  do {
    if (fStack0000000000000038 <=
        unaff_s8 * param_3 + fStack0000000000000054 * param_1 + unaff_s15 * param_2)
    goto LAB_0601c938;
    do {
      fVar4 = (float)FUN_0601ce58(uStack000000000000003c,uStack0000000000000040,
                                  uStack0000000000000044,uStack0000000000000048,
                                  uStack000000000000004c,uStack0000000000000050);
      if (fVar4 <= fStack000000000000005c) {
        fStack000000000000005c = fVar4;
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
      fVar2 = in_stack_00000068;
      fVar1 = fStack0000000000000064;
      fVar4 = fStack0000000000000060;
      unaff_x23 = unaff_x23 + 1;
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_x23) goto LAB_0601c990;
      if (*(long *)(unaff_x20 + 0x40) == 0) goto LAB_0601c994;
      FUN_06034378(&stack0x00000060,*(long *)(unaff_x20 + 0x40),
                   *(undefined4 *)(unaff_x19 + (unaff_x29 >> 0x1e) + 0x20),0);
      param_3 = in_stack_00000068;
      param_2 = fStack0000000000000064;
      param_1 = fStack0000000000000060;
    } while (1.0 <= fStack0000000000000038);
    if (*(char *)(unaff_x26 + 0xa81) == '\0') {
      FUN_031f20f4();
      *(undefined1 *)(unaff_x26 + 0xa81) = unaff_w27;
    }
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    fStack0000000000000054 = fStack0000000000000030;
    unaff_s8 = fStack0000000000000028;
    unaff_s15 = fStack000000000000002c;
    if (fStack0000000000000034 <= fStack0000000000000058) {
      if (*(char *)(unaff_x28 + 0xa82) == '\0') {
        FUN_031f20f4();
        *(undefined1 *)(unaff_x28 + 0xa82) = unaff_w27;
      }
      pfVar3 = *(float **)(*unaff_x22 + 0xb8);
      fStack0000000000000054 = *pfVar3;
      unaff_s15 = pfVar3[1];
      unaff_s8 = pfVar3[2];
    }
    if (*(char *)(unaff_x26 + 0xa81) == '\0') {
      FUN_031f20f4();
      *(undefined1 *)(unaff_x26 + 0xa81) = unaff_w27;
    }
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    param_1 = param_1 - fVar4;
    param_2 = param_2 - fVar1;
    param_3 = param_3 - fVar2;
    fVar4 = SQRT(param_3 * param_3 + param_1 * param_1 + param_2 * param_2);
    if (fVar4 <= fStack0000000000000058) {
      if (*(char *)(unaff_x28 + 0xa82) == '\0') {
        FUN_031f20f4();
        *(undefined1 *)(unaff_x28 + 0xa82) = unaff_w27;
      }
      pfVar3 = *(float **)(*unaff_x22 + 0xb8);
      param_1 = *pfVar3;
      param_2 = pfVar3[1];
      param_3 = pfVar3[2];
    }
    else {
      param_1 = param_1 / fVar4;
      param_2 = param_2 / fVar4;
      param_3 = param_3 / fVar4;
    }
  } while( true );
}


