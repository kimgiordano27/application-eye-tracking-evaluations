/*
FUNCTION_NAME: OVRManager$$add_InputFocusAcquired
ENTRY_POINT: 05301d40
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager__add_InputFocusAcquired(long param_1)

{
  float fVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *in_x10;
  int *piVar5;
  float *unaff_x19;
  float fVar6;
  float fVar7;
  float unaff_s8;
  float fVar8;
  float fVar9;
  undefined4 uStack0000000000000004;
  float in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 uStack000000000000003c;
  undefined4 in_stack_00000040;
  undefined8 uStack0000000000000044;
  
  uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *in_x10) {
        puVar3 = (undefined8 *)(param_1 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_05301d88;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined8 *)FUN_02f421d0();
LAB_05301d88:
  (*(code *)*puVar3)(&stack0x00000018);
  fVar1 = fStack0000000000000020;
  fVar7 = in_stack_00000018;
  fVar8 = unaff_x19[1];
  fVar9 = fStack0000000000000024 * fStack0000000000000024 +
          in_stack_00000028._4_4_ * in_stack_00000028._4_4_;
  fVar6 = (fVar8 - fVar8) * (fVar8 - fVar8) +
          (in_stack_00000018 - *unaff_x19) * (in_stack_00000018 - *unaff_x19) +
          (fStack0000000000000020 - unaff_x19[2]) * (fStack0000000000000020 - unaff_x19[2]);
  if (fVar6 <= fVar9) {
    bVar2 = true;
  }
  else if ((fVar6 <= fVar9 + unaff_s8) ||
          (fVar6 = (fVar6 - fVar9) - unaff_s8, fVar6 * fVar6 <= fVar9 * 4.0 * unaff_s8)) {
    in_stack_00000030 = *(undefined8 *)unaff_x19;
    uStack0000000000000044 = *(undefined8 *)(unaff_x19 + 5);
    in_stack_00000038 = (undefined4)*(undefined8 *)(unaff_x19 + 2);
    uStack000000000000003c = (undefined4)*(undefined8 *)(unaff_x19 + 3);
    in_stack_00000040 = (undefined4)((ulong)*(undefined8 *)(unaff_x19 + 3) >> 0x20);
    if (*(int *)(*(long *)PTR_DAT_067c9790 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_060fde38(&stack0x00000030,0);
    uStack0000000000000004 = 0;
    fVar7 = (float)FUN_05301ef4(fVar7,fVar8,fVar1,*unaff_x19,unaff_x19[1],unaff_x19[2]);
    bVar2 = fVar7 <= fVar9;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


