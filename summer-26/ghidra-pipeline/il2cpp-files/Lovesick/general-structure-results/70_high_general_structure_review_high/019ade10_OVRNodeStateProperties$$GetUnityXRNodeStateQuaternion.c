/*
FUNCTION_NAME: OVRNodeStateProperties$$GetUnityXRNodeStateQuaternion
ENTRY_POINT: 019ade10
PROGRAM: Lovesick-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_8;source_validity_pose_sink_structure
*/


undefined8
OVRNodeStateProperties__GetUnityXRNodeStateQuaternion
          (undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  float *pfVar6;
  float *unaff_x19;
  long unaff_x20;
  float *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fStack0000000000000004;
  float fStack000000000000000c;
  undefined8 in_stack_00000010;
  float in_stack_00000018;
  undefined4 uStack000000000000001c;
  undefined4 in_stack_00000020;
  undefined4 uStack0000000000000024;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 in_stack_00000068;
  
  thunk_FUN_00d48444(StringLiteral_6259);
  *(undefined1 *)(unaff_x23 + 0x5a5) = 1;
  puVar3 = StringLiteral_6259;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  in_stack_00000030 = 0;
  in_stack_00000018 = 0.0;
  uStack000000000000001c = 0;
  in_stack_00000020 = 0;
  uStack0000000000000024 = 0;
  in_stack_00000010 = 0;
  in_stack_00000028 = 0;
  if (unaff_x22 != 0) {
    FUN_026f2e2c(&stack0x00000050);
    in_stack_00000038 = CONCAT44(fStack000000000000005c,fStack0000000000000058);
    in_stack_00000030 = CONCAT44(fStack0000000000000054,fStack0000000000000050);
    in_stack_00000040 = CONCAT44(uStack0000000000000064,uStack0000000000000060);
    fVar7 = (float)FUN_02687a80(&stack0x00000030,0);
    fVar17 = param_3;
    fStack0000000000000004 = param_2;
    uVar4 = FUN_0268fd10();
    FUN_019aa6e4(&stack0x00000050,uVar4,0);
    fVar16 = fStack0000000000000058;
    fVar14 = fStack0000000000000054;
    fStack000000000000000c = fStack0000000000000050;
    uVar4 = FUN_0268fd10();
    FUN_019aa6e4(&stack0x00000050,uVar4,0);
    fVar15 = fStack0000000000000058;
    fVar13 = fStack0000000000000054;
    fVar10 = fStack0000000000000050;
    uVar4 = FUN_0268fd10();
    FUN_019aa6e4(&stack0x00000050,uVar4,0);
    in_stack_00000010 = CONCAT44(fStack0000000000000054,fStack0000000000000050);
    in_stack_00000018 = fStack0000000000000058;
    in_stack_00000028 = in_stack_00000068;
    in_stack_00000020 = uStack0000000000000060;
    fVar11 = fStack000000000000005c;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    fVar8 = (float)FUN_02666e8c(&stack0x00000010,0);
    if (DAT_03777c7d == '\0') {
      thunk_FUN_00d48444(System_Func<Assembly[]>_TypeInfo);
      DAT_03777c7d = '\x01';
    }
    puVar2 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
    fVar9 = fVar17 * fVar17 + fVar8 * fVar8 + fVar11 * fVar11;
    if (**(float **)(*(long *)System_Func<Assembly[]>_TypeInfo + 0xb8) <= fVar9) {
      fVar10 = (param_3 - fVar15) * fVar17 +
               (fVar7 - fVar10) * fVar8 + (fStack0000000000000004 - fVar13) * fVar11;
      fVar13 = (fVar8 * fVar10) / fVar9;
      fVar15 = (fVar11 * fVar10) / fVar9;
      fVar9 = (fVar17 * fVar10) / fVar9;
    }
    else {
      if (DAT_03774d76 == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_03774d76 = '\x01';
      }
      pfVar6 = *(float **)(*(long *)puVar2 + 0xb8);
      fVar13 = *pfVar6;
      fVar15 = pfVar6[1];
      fVar9 = pfVar6[2];
    }
    fVar14 = fVar14 + fVar15;
    fVar16 = fVar16 + fVar9;
    fVar10 = (float)FUN_026f3208(fStack000000000000000c + fVar13);
    *unaff_x21 = fVar10;
    unaff_x21[1] = fVar14;
    unaff_x21[2] = fVar16;
    uVar5 = FUN_019adac0();
    if ((uVar5 & 1) == 0) {
      uVar4 = 0;
      fVar10 = 0.0;
    }
    else {
      fVar16 = *unaff_x21;
      fVar17 = unaff_x21[1];
      fVar15 = unaff_x21[2];
      uVar4 = FUN_0268fd10();
      FUN_019aa6e4(&stack0x00000050,uVar4,0);
      fVar13 = fStack0000000000000058;
      fVar14 = fStack0000000000000054;
      fVar10 = fStack0000000000000050;
      if (DAT_0377518c == '\0') {
        thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
        DAT_0377518c = '\x01';
      }
      puVar1 = System_Threading_Timer_TimerComparer_TypeInfo;
      fVar16 = fVar16 - fVar10;
      fVar17 = fVar17 - fVar14;
      fVar15 = fVar15 - fVar13;
      if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      fVar14 = fVar15 * fVar15;
      fVar10 = SQRT(fVar14 + fVar16 * fVar16 + fVar17 * fVar17);
      if (fVar10 <= DAT_028aa038) {
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        pfVar6 = *(float **)(*(long *)puVar2 + 0xb8);
        fVar16 = *pfVar6;
        fVar17 = pfVar6[1];
        fVar15 = pfVar6[2];
      }
      else {
        fVar16 = fVar16 / fVar10;
        fVar17 = fVar17 / fVar10;
        fVar15 = fVar15 / fVar10;
      }
      uVar4 = FUN_0268fd10();
      FUN_019aa6e4(&stack0x00000050,uVar4,0);
      in_stack_00000010 = CONCAT44(fStack0000000000000054,fStack0000000000000050);
      in_stack_00000018 = fStack0000000000000058;
      in_stack_00000028 = in_stack_00000068;
      in_stack_00000020 = uStack0000000000000060;
      fVar10 = fStack000000000000005c;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      fVar13 = (float)FUN_02666e8c(&stack0x00000010,0);
      if (DAT_03775508 == '\0') {
        thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
        DAT_03775508 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      fVar11 = SQRT((fVar15 * fVar15 + fVar16 * fVar16 + fVar17 * fVar17) *
                    (fVar14 * fVar14 + fVar13 * fVar13 + fVar10 * fVar10));
      fVar7 = 0.0;
      if (DAT_028aa5c8 <= fVar11) {
        fVar11 = (fVar15 * fVar14 + fVar16 * fVar13 + fVar17 * fVar10) / fVar11;
        fVar10 = fVar11;
        if (1.0 < fVar11) {
          fVar10 = 1.0;
        }
        if (fVar11 < -1.0) {
          fVar10 = -1.0;
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        dVar12 = acos((double)fVar10);
        fVar7 = (float)dVar12 * DAT_028aa158;
      }
      uVar4 = 1;
      fVar7 = fVar7 / *(float *)(unaff_x20 + 0x24);
      fVar10 = fVar7;
      if (1.0 < fVar7) {
        fVar10 = 1.0;
      }
      fVar10 = 1.0 - fVar10;
      if (fVar7 < 0.0) {
        fVar10 = 1.0;
      }
    }
    *unaff_x19 = fVar10;
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


