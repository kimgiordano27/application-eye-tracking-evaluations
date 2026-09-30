/*
FUNCTION_NAME: OVRManager$$add_VrFocusLost
ENTRY_POINT: 019fd328
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_VrFocusLost(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int in_w9;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *plVar6;
  long unaff_x21;
  long unaff_x22;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float fVar10;
  float unaff_s9;
  float fVar11;
  float unaff_s10;
  float fVar12;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float fVar13;
  float unaff_s15;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  undefined8 in_stack_000000c8;
  
  fVar13 = *(float *)(param_1 + 0x20);
  if (in_w9 == 0) {
    thunk_FUN_00d48444(System_Func<Assembly[]>_TypeInfo);
    *(undefined1 *)(unaff_x22 + 0x18b) = 1;
  }
  fVar7 = fVar13 * fVar13 + unaff_s11 * unaff_s11 + unaff_s15 * unaff_s15;
  fVar11 = unaff_s13 - unaff_s9;
  fVar12 = unaff_s12 - unaff_s10;
  fVar10 = in_stack_000000c8._4_4_ - unaff_s8;
  fVar9 = **(float **)(*(long *)System_Func<Assembly[]>_TypeInfo + 0xb8);
  if (fVar9 <= fVar7) {
    fVar8 = fVar10 * fVar13 + fVar11 * unaff_s11 + fVar12 * unaff_s15;
    fVar9 = (unaff_s11 * fVar8) / fVar7;
    fVar11 = fVar11 - fVar9;
    fVar12 = fVar12 - (unaff_s15 * fVar8) / fVar7;
    fVar10 = fVar10 - (fVar13 * fVar8) / fVar7;
  }
  if (DAT_03774e1b == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03774e1b = '\x01';
  }
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar1 = StringLiteral_6259;
  if (*(long *)(unaff_x19 + 0x120) != 0) {
    fVar10 = SQRT(fVar11 * fVar11 + fVar12 * fVar12 + fVar10 * fVar10);
    fVar7 = (float)FUN_0269f578(*(long *)(unaff_x19 + 0x120),0);
    fVar13 = fVar9;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    fVar11 = (float)FUN_02666e8c();
    plVar6 = *(long **)(unaff_x19 + 0x130);
    uStack0000000000000048 = 0;
    uStack000000000000004c = 0;
    uStack0000000000000050 = 0;
    uStack0000000000000054 = 0;
    in_stack_00000040 = 0;
    in_stack_00000058 = 0;
    FUN_02666aac(fVar7 + fVar10 * fVar11,*(undefined4 *)(unaff_x21 + 4),fVar9 + fVar10 * fVar13,
                 *(undefined4 *)(unaff_x20 + 0xc),*(undefined4 *)(unaff_x20 + 0x10),
                 *(undefined4 *)(unaff_x20 + 0x14),*(undefined4 *)(unaff_x20 + 0x18),
                 &stack0x00000040,0);
    uStack0000000000000074 = CONCAT44(in_stack_00000058,uStack0000000000000054);
    uStack0000000000000068 = uStack0000000000000048;
    in_stack_00000060 = in_stack_00000040;
    uStack000000000000006c = uStack000000000000004c;
    uStack0000000000000070 = uStack0000000000000050;
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) ==
              *(long *)Method_System_Nullable<InputControlScheme>_get_HasValue__) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
            goto LAB_019fd4ec;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_00d59724(plVar6,*(long *)
                                    Method_System_Nullable<InputControlScheme>_get_HasValue__,2);
LAB_019fd4ec:
      (*(code *)*puVar2)(plVar6,&stack0x00000060,puVar2[1]);
      *(undefined8 *)(unaff_x19 + 0x144) = in_stack_00000008;
      *(undefined8 *)(unaff_x19 + 0x13c) = in_stack_00000000;
      *(undefined8 *)(unaff_x19 + 0x150) = uStack0000000000000014;
      *(ulong *)(unaff_x19 + 0x148) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


