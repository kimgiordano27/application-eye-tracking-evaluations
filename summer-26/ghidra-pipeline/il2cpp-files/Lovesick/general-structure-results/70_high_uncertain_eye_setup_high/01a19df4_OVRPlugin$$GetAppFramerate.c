/*
FUNCTION_NAME: OVRPlugin$$GetAppFramerate
ENTRY_POINT: 01a19df4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetAppFramerate
               (long param_1,undefined1 param_2 [16],float param_3,float param_4,undefined8 param_5,
               long param_6)

{
  long *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  long lVar4;
  long in_x9;
  int *in_x10;
  long *unaff_x19;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s8;
  float fVar11;
  float unaff_s9;
  float unaff_s11;
  float unaff_s12;
  float unaff_s14;
  float fVar12;
  float unaff_s15;
  float in_stack_000000a8;
  float fStack00000000000000ac;
  
  do {
    in_x9 = in_x9 + -1;
    piVar2 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar3 = (undefined8 *)FUN_00d59724();
      goto LAB_01a19e30;
    }
    plVar1 = (long *)(in_x10 + 2);
    in_x10 = piVar2;
  } while (*plVar1 != param_6);
  puVar3 = (undefined8 *)(param_1 + (long)(*piVar2 + 1) * 0x10 + 0x138);
LAB_01a19e30:
  (*(code *)*puVar3)();
  fStack00000000000000ac = (float)FUN_01a1a140();
  if (DAT_03774e1a == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03774e1a = '\x01';
  }
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (0 < (int)unaff_x19[9]) {
    in_stack_000000a8 = in_stack_000000a8 + unaff_s9 * unaff_s15;
    fVar12 = unaff_s14 + unaff_s12 * unaff_s15;
    fVar11 = unaff_s11 + unaff_s8 * unaff_s15;
    fVar8 = SQRT((fVar11 - param_4) * (fVar11 - param_4) +
                 (fVar12 - fStack00000000000000ac) * (fVar12 - fStack00000000000000ac) +
                 (in_stack_000000a8 - param_3) * (in_stack_000000a8 - param_3));
    lVar5 = 0;
    uVar6 = 0;
    do {
      fVar9 = in_stack_000000a8;
      fVar10 = fVar11;
      uVar7 = FUN_01a1a364(fVar12,in_stack_000000a8,fVar11,fVar12 + unaff_s12 * fVar8 * 0.5,
                           in_stack_000000a8 + unaff_s9 * fVar8 * 0.5,
                           fVar11 + unaff_s8 * fVar8 * 0.5);
      lVar4 = unaff_x19[6];
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      lVar4 = lVar4 + lVar5;
      *(undefined4 *)(lVar4 + 0x20) = uVar7;
      *(float *)(lVar4 + 0x24) = fVar9;
      *(float *)(lVar4 + 0x28) = fVar10;
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0xc;
    } while ((long)uVar6 < (long)(int)unaff_x19[9]);
  }
  (**(code **)(*unaff_x19 + 0x1c8))();
  return;
}


