/*
FUNCTION_NAME: OVRPlugin$$GetNodeVelocity
ENTRY_POINT: 073dad90
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetNodeVelocity
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float fStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  
  while( true ) {
    fVar9 = (float)param_4;
    fVar8 = unaff_s8;
    fVar7 = (float)FUN_085d262c(0);
    in_stack_000000f0 = in_stack_00000070;
    in_stack_000000f8 =
         CONCAT44((unaff_s10 * param_3 + unaff_s12 * fVar7 + unaff_s11 * fVar9) - unaff_s9 * fVar8,
                  in_stack_00000078);
    in_stack_00000100 =
         CONCAT44((unaff_s11 * fVar8 + unaff_s12 * param_3 + unaff_s9 * fVar9) - unaff_s10 * fVar7,
                  (unaff_s9 * fVar7 + unaff_s12 * fVar8 + unaff_s10 * fVar9) - unaff_s11 * param_3);
    in_stack_00000108 =
         CONCAT44(in_stack_00000108._4_4_,
                  ((unaff_s12 * fVar9 - unaff_s11 * fVar7) - unaff_s10 * fVar8) - unaff_s9 * param_3
                 );
    FUN_0737f644(&stack0x00000030,*(undefined8 *)(unaff_x20 + 0x28),&stack0x000000f0,0);
    in_stack_00000088 = CONCAT44(fStack000000000000003c,uStack0000000000000038);
    in_stack_00000080 = in_stack_00000030;
    *(ulong *)(unaff_x23 + 0x14) = CONCAT44(fStack0000000000000048,fStack0000000000000044);
    *(ulong *)(unaff_x23 + 0xc) = CONCAT44(fStack0000000000000040,fStack000000000000003c);
    lVar4 = *unaff_x21;
    fStack0000000000000018 = (float)in_stack_00000098;
    uStack000000000000001c = (undefined4)*(undefined8 *)(unaff_x23 + 0x1c);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    in_stack_000000f0 = in_stack_00000030;
    in_stack_00000108 = CONCAT44(uStack000000000000001c,fStack0000000000000018);
    in_stack_00000100 = in_stack_00000090;
    lVar6 = *unaff_x25;
    *(undefined8 *)(unaff_x23 + 0x94) = *(undefined8 *)(unaff_x23 + 0x24);
    *(undefined8 *)(unaff_x23 + 0x8c) = *(undefined8 *)(unaff_x23 + 0x1c);
    lVar5 = *(long *)(lVar4 + 0x10);
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    in_stack_000000f8 = in_stack_00000088;
    if (lVar5 == 0) break;
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
      uVar3 = *(undefined8 *)(unaff_x23 + 0x8c);
      lVar5 = lVar5 + (int)uVar1 * unaff_x27;
      *(undefined8 *)(lVar5 + 0x44) = *(undefined8 *)(unaff_x23 + 0x94);
      *(undefined8 *)(lVar5 + 0x3c) = uVar3;
      *(undefined8 *)(lVar5 + 0x28) = in_stack_00000088;
      *(undefined8 *)(lVar5 + 0x20) = in_stack_00000030;
      *(undefined8 *)(lVar5 + 0x38) = in_stack_00000108;
      *(undefined8 *)(lVar5 + 0x30) = in_stack_00000090;
    }
    else {
      uStack0000000000000054 = *(undefined8 *)(unaff_x23 + 0x94);
      fStack0000000000000048 = fStack0000000000000018;
      fStack0000000000000040 = (float)in_stack_00000090;
      fStack0000000000000044 = (float)((ulong)in_stack_00000090 >> 0x20);
      uStack000000000000004c = (undefined4)*(undefined8 *)(unaff_x23 + 0x8c);
      uStack0000000000000050 = (undefined4)((ulong)*(undefined8 *)(unaff_x23 + 0x8c) >> 0x20);
      FUN_0516b5c4(lVar4,&stack0x00000030,
                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    }
    uVar2 = FUN_06c0cab4(&stack0x000000b0,*unaff_x24);
    if ((uVar2 & 1) == 0) {
      FUN_06c0cab0(&stack0x000000b0,*unaff_x22);
      return;
    }
    uVar3 = *(undefined8 *)((long)unaff_x26 + 0x1c);
    in_stack_00000088 = unaff_x26[1];
    in_stack_00000080 = *unaff_x26;
    in_stack_00000098 = unaff_x26[3];
    in_stack_00000090 = unaff_x26[2];
    uVar10 = *(undefined8 *)((long)unaff_x26 + 0x14);
    param_4 = *(undefined8 *)((long)unaff_x26 + 0xc);
    *(undefined8 *)(unaff_x23 + 0x24) = *(undefined8 *)((long)unaff_x26 + 0x24);
    *(undefined8 *)(unaff_x23 + 0x1c) = uVar3;
    in_stack_000000f8 = unaff_x26[1];
    in_stack_000000f0 = *unaff_x26;
    uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
    *(undefined8 *)(unaff_x23 + 0x84) = uVar10;
    *(undefined8 *)(unaff_x23 + 0x7c) = param_4;
    FUN_0737f84c(&stack0x00000030,uVar3,&stack0x000000f0,0);
    in_stack_00000070 = in_stack_00000030;
    in_stack_00000078 = uStack0000000000000038;
    param_3 = 0.0;
    unaff_s10 = fStack0000000000000040;
    unaff_s11 = fStack000000000000003c;
    unaff_s9 = fStack0000000000000044;
    unaff_s12 = fStack0000000000000048;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


