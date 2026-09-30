/*
FUNCTION_NAME: OVRPlugin$$StartFaceTracking2
ENTRY_POINT: 0601c744
PROGRAM: vandalizer-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__StartFaceTracking2
                (ulong param_1,float param_2,float param_3,float param_4,float param_5,float param_6
                ,undefined1 param_7 [16],float param_8)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  long in_x10;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_s8;
  float fVar13;
  float fVar14;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined8 in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  
  fVar12 = *(float *)(in_x10 + 0x9b8);
  plVar4 = *(long **)(unaff_x22 + 0x378);
  fStack0000000000000034 = SQRT(param_6 + param_5);
  uVar5 = 0;
  fStack0000000000000030 = param_2 / fStack0000000000000034;
  fStack000000000000002c = param_3 / fStack0000000000000034;
  fStack0000000000000028 = param_4 / fStack0000000000000034;
  lVar6 = 0x100000000;
  do {
    if ((param_1 & 0xffffffff) <= uVar5) {
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
                 *(undefined4 *)(unaff_x19 + 0x20 + uVar5 * 4),0);
    fVar2 = in_stack_00000068;
    fVar1 = fStack0000000000000064;
    fVar11 = fStack0000000000000060;
    uVar5 = uVar5 + 1;
    if (*(uint *)(unaff_x19 + 0x18) <= uVar5) goto LAB_0601c990;
    if (*(long *)(unaff_x20 + 0x40) == 0) goto LAB_0601c994;
    FUN_06034378(&stack0x00000060,*(long *)(unaff_x20 + 0x40),
                 *(undefined4 *)(unaff_x19 + (lVar6 >> 0x1e) + 0x20),0);
    fVar10 = in_stack_00000068;
    fVar9 = fStack0000000000000064;
    fVar8 = fStack0000000000000060;
    if (1.0 <= unaff_s8) {
LAB_0601c908:
      fVar11 = (float)FUN_0601ce58(in_stack_00000038._4_4_,uStack0000000000000040,
                                   uStack0000000000000044,uStack0000000000000048,
                                   uStack000000000000004c,in_stack_00000050);
      if (fVar11 <= in_stack_00000058._4_4_) {
        in_stack_00000058._4_4_ = fVar11;
      }
    }
    else {
      if (DAT_07a3ca81 == '\0') {
        FUN_031f20f4();
        DAT_07a3ca81 = '\x01';
      }
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      fVar7 = fStack0000000000000030;
      fVar13 = fStack0000000000000028;
      fVar14 = fStack000000000000002c;
      if (fStack0000000000000034 <= fVar12) {
        if (DAT_07a3ca82 == '\0') {
          FUN_031f20f4(plVar4);
          DAT_07a3ca82 = '\x01';
        }
        pfVar3 = *(float **)(*plVar4 + 0xb8);
        fVar7 = *pfVar3;
        fVar14 = pfVar3[1];
        fVar13 = pfVar3[2];
      }
      if (DAT_07a3ca81 == '\0') {
        FUN_031f20f4();
        DAT_07a3ca81 = '\x01';
      }
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      fVar8 = fVar8 - fVar11;
      fVar9 = fVar9 - fVar1;
      fVar10 = fVar10 - fVar2;
      fVar11 = SQRT(fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9);
      if (fVar11 <= fVar12) {
        if (DAT_07a3ca82 == '\0') {
          FUN_031f20f4(plVar4);
          DAT_07a3ca82 = '\x01';
        }
        pfVar3 = *(float **)(*plVar4 + 0xb8);
        fVar8 = *pfVar3;
        fVar9 = pfVar3[1];
        fVar10 = pfVar3[2];
      }
      else {
        fVar8 = fVar8 / fVar11;
        fVar9 = fVar9 / fVar11;
        fVar10 = fVar10 / fVar11;
      }
      unaff_s8 = param_8;
      if (fVar13 * fVar10 + fVar7 * fVar8 + fVar14 * fVar9 < param_8) goto LAB_0601c908;
    }
    lVar6 = lVar6 + 0x100000000;
    param_1 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
    if ((long)((int)*(ulong *)(unaff_x19 + 0x18) + -1) <= (long)uVar5) {
      return in_stack_00000058._4_4_;
    }
  } while( true );
}


