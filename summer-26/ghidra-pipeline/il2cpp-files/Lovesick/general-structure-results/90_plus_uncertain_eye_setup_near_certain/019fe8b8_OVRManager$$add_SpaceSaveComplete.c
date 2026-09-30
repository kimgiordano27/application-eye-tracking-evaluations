/*
FUNCTION_NAME: OVRManager$$add_SpaceSaveComplete
ENTRY_POINT: 019fe8b8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 104
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_SpaceSaveComplete
               (ulong param_1,undefined1 param_2 [16],ulong param_3,ulong param_4,long param_5,
               float *param_6)

{
  undefined *puVar1;
  ulong uVar2;
  uint *puVar3;
  long unaff_x21;
  undefined8 uVar4;
  long unaff_x22;
  long *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  plVar5 = *(long **)(unaff_x22 + 0xf0);
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_6259);
    *(undefined1 *)(unaff_x21 + 0x8ac) = 1;
  }
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(int *)(*plVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar13 = FUN_02666e8c(param_6,0);
  uVar4 = *(undefined8 *)(param_5 + 0x28);
  uVar15 = param_3;
  uVar17 = param_4;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar2 = FUN_02681b9c(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_5 + 0x28) == 0) goto LAB_019febd8;
    fVar21 = param_6[1];
    fVar6 = param_6[2];
    fVar20 = *param_6;
    fVar7 = (float)FUN_0269f578(*(long *)(param_5 + 0x28),0);
    fVar22 = (float)uVar17;
    fVar12 = (float)uVar15;
    fVar10 = fVar12;
    fVar11 = fVar22;
    if (*(int *)(*plVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    fVar8 = (float)FUN_02666f6c(param_6,0);
    if (DAT_0377518b == '\0') {
      thunk_FUN_00d48444(System_Func<Assembly[]>_TypeInfo);
      DAT_0377518b = '\x01';
    }
    fVar9 = fVar11 * fVar11 + fVar8 * fVar8 + fVar10 * fVar10;
    fVar20 = fVar20 - fVar7;
    fVar21 = fVar21 - fVar12;
    fVar6 = fVar6 - fVar22;
    if (**(float **)(*(long *)System_Func<Assembly[]>_TypeInfo + 0xb8) <= fVar9) {
      fVar7 = fVar6 * fVar11 + fVar20 * fVar8 + fVar21 * fVar10;
      fVar20 = fVar20 - (fVar8 * fVar7) / fVar9;
      fVar21 = fVar21 - (fVar10 * fVar7) / fVar9;
      fVar6 = fVar6 - (fVar11 * fVar7) / fVar9;
    }
    if (DAT_0377518c == '\0') {
      thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
      DAT_0377518c = '\x01';
    }
    if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar15 = (ulong)(uint)DAT_028aa038;
    uVar17 = (ulong)(uint)(fVar6 * fVar6);
    fVar10 = SQRT(fVar6 * fVar6 + fVar20 * fVar20 + fVar21 * fVar21);
    if (fVar10 <= DAT_028aa038) {
      if (DAT_03774d76 == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_03774d76 = '\x01';
      }
      puVar3 = *(uint **)(*(long *)
                           Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                         + 0xb8);
      uVar13 = (ulong)*puVar3;
      param_3 = (ulong)puVar3[1];
      param_4 = (ulong)puVar3[2];
    }
    else {
      uVar13 = (ulong)(uint)(fVar20 / fVar10);
      param_3 = (ulong)(uint)(fVar21 / fVar10);
      param_4 = (ulong)(uint)(fVar6 / fVar10);
    }
  }
  if (*(long *)(param_5 + 0x38) != 0) {
    fVar10 = param_6[2];
    fVar7 = *(float *)(*(long *)(param_5 + 0x38) + 0x58);
    fVar11 = *param_6;
    fVar6 = param_6[1];
    if (*(int *)(*plVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    fVar12 = (float)FUN_02666f6c(param_6,0);
    fVar22 = *(float *)(param_5 + 0x50);
    uVar2 = uVar15;
    uVar18 = uVar17;
    uVar4 = FUN_02666f6c(param_6,0);
    uVar16 = param_3;
    uVar19 = param_4;
    uVar14 = FUN_02698e08(uVar13,param_3,param_4,uVar4,uVar2,uVar18,0);
    if (*(long *)(param_5 + 0x30) != 0) {
      FUN_026a01f4((fVar11 - (float)uVar13 * fVar7) + fVar12 * fVar22,
                   (fVar6 - (float)param_3 * fVar7) + (float)uVar15 * fVar22,
                   (fVar10 - (float)param_4 * fVar7) + (float)uVar17 * fVar22,uVar14,uVar16,uVar19,
                   uVar4,*(long *)(param_5 + 0x30),0);
      return;
    }
  }
LAB_019febd8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


