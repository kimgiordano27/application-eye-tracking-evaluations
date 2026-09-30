/*
FUNCTION_NAME: OVRManager$$remove_VrFocusLost
ENTRY_POINT: 019fd404
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_VrFocusLost
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long unaff_x20;
  long *plVar5;
  long unaff_x21;
  long *unaff_x22;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar9;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  undefined8 uStack0000000000000074;
  
  fVar9 = SQRT(unaff_s9 * unaff_s9 + unaff_s10 * unaff_s10 + unaff_s8 * unaff_s8);
  fVar6 = (float)FUN_0269f578(param_4,0);
  fVar8 = param_3;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar7 = (float)FUN_02666e8c();
  plVar5 = *(long **)(unaff_x19 + 0x130);
  in_stack_00000048 = 0;
  uStack000000000000004c = 0;
  in_stack_00000050 = 0;
  uStack0000000000000054 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  FUN_02666aac(fVar6 + fVar9 * fVar7,*(undefined4 *)(unaff_x21 + 4),param_3 + fVar9 * fVar8,
               *(undefined4 *)(unaff_x20 + 0xc),*(undefined4 *)(unaff_x20 + 0x10),
               *(undefined4 *)(unaff_x20 + 0x14),*(undefined4 *)(unaff_x20 + 0x18),&stack0x00000040,
               0);
  uStack0000000000000074 = CONCAT44(in_stack_00000058,uStack0000000000000054);
  in_stack_00000068 = in_stack_00000048;
  in_stack_00000060 = in_stack_00000040;
  uStack000000000000006c = uStack000000000000004c;
  in_stack_00000070 = in_stack_00000050;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) ==
          *(long *)Method_System_Nullable<InputControlScheme>_get_HasValue__) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 2) * 0x10 + 0x138);
        goto LAB_019fd4ec;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)
           FUN_00d59724(plVar5,*(long *)Method_System_Nullable<InputControlScheme>_get_HasValue__,2)
  ;
LAB_019fd4ec:
  (*(code *)*puVar1)(plVar5,&stack0x00000060,puVar1[1]);
  *(undefined8 *)(unaff_x19 + 0x144) = in_stack_00000008;
  *(undefined8 *)(unaff_x19 + 0x13c) = in_stack_00000000;
  *(undefined8 *)(unaff_x19 + 0x150) = uStack0000000000000014;
  *(ulong *)(unaff_x19 + 0x148) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
  return;
}


