/*
FUNCTION_NAME: OVRManager$$remove_InputFocusLost
ENTRY_POINT: 019fd774
PROGRAM: Lovesick-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_InputFocusLost(float param_1,float param_2,float param_3,float param_4)

{
  undefined8 *puVar1;
  float *pfVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *plVar6;
  long *unaff_x21;
  long *unaff_x22;
  float fVar7;
  float unaff_s8;
  float unaff_s11;
  float unaff_s12;
  float fVar8;
  float unaff_s13;
  float fVar9;
  float unaff_s14;
  float fVar10;
  float unaff_s15;
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
  
  param_4 = param_4 + param_2 + param_3;
  fVar8 = unaff_s12 - (unaff_s11 * param_4) / param_1;
  fVar9 = unaff_s13 - (unaff_s15 * param_4) / param_1;
  fVar10 = unaff_s14 - (unaff_s8 * param_4) / param_1;
  if (DAT_0377518c == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_0377518c = '\x01';
  }
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar7 = SQRT(fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9);
  if (fVar7 <= DAT_028aa038) {
    if (DAT_03774d76 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774d76 = '\x01';
    }
    pfVar2 = *(float **)(*unaff_x22 + 0xb8);
    fVar8 = *pfVar2;
    fVar9 = pfVar2[1];
    fVar10 = pfVar2[2];
  }
  else {
    fVar8 = fVar8 / fVar7;
    fVar9 = fVar9 / fVar7;
    fVar10 = fVar10 / fVar7;
  }
  if (*(char *)(unaff_x20 + 0xc4) == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    *(undefined1 *)(unaff_x20 + 0xc4) = 1;
  }
  lVar3 = *(long *)(*unaff_x22 + 0xb8);
  FUN_02698e08(fVar8,fVar9,fVar10,*(undefined4 *)(lVar3 + 0x18),*(undefined4 *)(lVar3 + 0x1c),
               *(undefined4 *)(lVar3 + 0x20),0);
  plVar6 = *(long **)(unaff_x19 + 0x130);
  in_stack_00000048 = 0;
  uStack000000000000004c = 0;
  in_stack_00000050 = 0;
  uStack0000000000000054 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  FUN_02666aac(&stack0x00000040,0);
  uStack0000000000000074 = CONCAT44(in_stack_00000058,uStack0000000000000054);
  in_stack_00000068 = in_stack_00000048;
  in_stack_00000060 = in_stack_00000040;
  uStack000000000000006c = uStack000000000000004c;
  in_stack_00000070 = in_stack_00000050;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) ==
          *(long *)Method_System_Nullable<InputControlScheme>_get_HasValue__) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
        goto LAB_019fd934;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)
           FUN_00d59724(plVar6,*(long *)Method_System_Nullable<InputControlScheme>_get_HasValue__,2)
  ;
LAB_019fd934:
  (*(code *)*puVar1)(plVar6,&stack0x00000060,puVar1[1]);
  *(undefined8 *)(unaff_x19 + 0x144) = in_stack_00000008;
  *(undefined8 *)(unaff_x19 + 0x13c) = in_stack_00000000;
  *(undefined8 *)(unaff_x19 + 0x150) = uStack0000000000000014;
  *(ulong *)(unaff_x19 + 0x148) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
  return;
}


