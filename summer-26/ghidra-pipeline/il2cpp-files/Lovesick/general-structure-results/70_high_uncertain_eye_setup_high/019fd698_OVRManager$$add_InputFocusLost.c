/*
FUNCTION_NAME: OVRManager$$add_InputFocusLost
ENTRY_POINT: 019fd698
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


void OVRManager__add_InputFocusLost
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  float *pfVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *plVar7;
  long *unaff_x21;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  float unaff_s9;
  float unaff_s10;
  float fVar14;
  float fVar15;
  float unaff_s12;
  float fVar16;
  float unaff_s13;
  float unaff_s14;
  float fVar17;
  float fVar18;
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
  float fStack00000000000000c8;
  float fStack00000000000000cc;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_4 + 0x720));
  *(undefined1 *)(unaff_x20 + 0xc4) = 1;
  puVar1 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  fVar14 = fStack00000000000000cc + unaff_s10;
  lVar3 = *(long *)(*(long *)
                     Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                   + 0xb8);
  fVar17 = fStack00000000000000c8 + unaff_s14;
  fVar15 = *(float *)(lVar3 + 0x18);
  fVar18 = *(float *)(lVar3 + 0x1c);
  fVar13 = *(float *)(lVar3 + 0x20);
  if (DAT_0377518b == '\0') {
    fStack00000000000000cc = unaff_s12;
    thunk_FUN_00d48444(System_Func<Assembly[]>_TypeInfo);
    DAT_0377518b = '\x01';
    unaff_s12 = fStack00000000000000cc;
  }
  param_2 = fVar14 - param_2;
  fVar8 = fVar13 * fVar13 + fVar15 * fVar15 + fVar18 * fVar18;
  fVar16 = (unaff_s13 + unaff_s9) - unaff_s12;
  param_3 = fVar17 - param_3;
  if (**(float **)(*(long *)System_Func<Assembly[]>_TypeInfo + 0xb8) <= fVar8) {
    fVar10 = param_3 * fVar13 + fVar16 * fVar15 + param_2 * fVar18;
    fVar16 = fVar16 - (fVar15 * fVar10) / fVar8;
    param_2 = param_2 - (fVar18 * fVar10) / fVar8;
    param_3 = param_3 - (fVar13 * fVar10) / fVar8;
  }
  fStack00000000000000cc = fVar14;
  if (DAT_0377518c == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_0377518c = '\x01';
  }
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar13 = SQRT(param_3 * param_3 + fVar16 * fVar16 + param_2 * param_2);
  if (fVar13 <= DAT_028aa038) {
    if (DAT_03774d76 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774d76 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar16 = *pfVar4;
    param_2 = pfVar4[1];
    param_3 = pfVar4[2];
  }
  else {
    fVar16 = fVar16 / fVar13;
    param_2 = param_2 / fVar13;
    param_3 = param_3 / fVar13;
  }
  fVar13 = fStack00000000000000cc;
  uVar11 = (ulong)(uint)param_3;
  uVar5 = (ulong)(uint)param_2;
  if (*(char *)(unaff_x20 + 0xc4) == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    *(undefined1 *)(unaff_x20 + 0xc4) = 1;
  }
  lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
  uVar12 = (ulong)*(uint *)(lVar3 + 0x18);
  uVar9 = FUN_02698e08(fVar16,uVar5,uVar11,uVar12,*(undefined4 *)(lVar3 + 0x1c),
                       *(undefined4 *)(lVar3 + 0x20),0);
  plVar7 = *(long **)(unaff_x19 + 0x130);
  in_stack_00000048 = 0;
  uStack000000000000004c = 0;
  in_stack_00000050 = 0;
  uStack0000000000000054 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  FUN_02666aac(unaff_s13 + unaff_s9,fVar13,fVar17,uVar9,uVar5,uVar11,uVar12,&stack0x00000040,0);
  uStack0000000000000074 = CONCAT44(in_stack_00000058,uStack0000000000000054);
  in_stack_00000068 = in_stack_00000048;
  in_stack_00000060 = in_stack_00000040;
  uStack000000000000006c = uStack000000000000004c;
  in_stack_00000070 = in_stack_00000050;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar3 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)Method_System_Nullable<InputControlScheme>_get_HasValue__) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 2) * 0x10 + 0x138);
        goto LAB_019fd934;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_00d59724(plVar7,*(long *)Method_System_Nullable<InputControlScheme>_get_HasValue__,2)
  ;
LAB_019fd934:
  (*(code *)*puVar2)(plVar7,&stack0x00000060,puVar2[1]);
  *(undefined8 *)(unaff_x19 + 0x144) = in_stack_00000008;
  *(undefined8 *)(unaff_x19 + 0x13c) = in_stack_00000000;
  *(undefined8 *)(unaff_x19 + 0x150) = uStack0000000000000014;
  *(ulong *)(unaff_x19 + 0x148) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
  return;
}


