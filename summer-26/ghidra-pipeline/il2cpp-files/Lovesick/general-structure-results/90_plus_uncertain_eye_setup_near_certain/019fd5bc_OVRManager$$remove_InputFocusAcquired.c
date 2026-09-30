/*
FUNCTION_NAME: OVRManager$$remove_InputFocusAcquired
ENTRY_POINT: 019fd5bc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_InputFocusAcquired(undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  float *pfVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  float *unaff_x20;
  long *plVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  ulong uVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
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
  float fStack00000000000000c8;
  float fStack00000000000000cc;
  
  fVar21 = *unaff_x20;
  fVar22 = unaff_x20[1];
  fVar23 = unaff_x20[2];
  fVar16 = *(float *)(unaff_x19 + 0x158);
  fVar15 = *(float *)(unaff_x19 + 0x138);
  lVar4 = FUN_0268fd10();
  if (lVar4 != 0) {
    fVar10 = (float)FUN_026a125c(lVar4,0);
    puVar1 = System_Threading_Timer_TimerComparer_TypeInfo;
    fVar15 = ABS(fVar16) - fVar15 * fVar10;
    if (fVar15 <= 0.0) {
      return;
    }
    if (*(int *)(*(long *)StringLiteral_6259 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    fVar16 = (float)FUN_02666efc();
    uVar19 = *(undefined4 *)(unaff_x19 + 0x158);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    iVar3 = FUN_01772c68(uVar19,0);
    if (*(long *)(unaff_x19 + 0x120) != 0) {
      fVar10 = (float)iVar3;
      fVar16 = fVar16 * fVar10;
      param_2 = param_2 * fVar10;
      fVar17 = fVar15 * fVar16;
      fVar18 = fVar15 * param_2;
      fStack00000000000000c8 = fVar23;
      fStack00000000000000cc = fVar22;
      fVar22 = (float)FUN_0269f578(*(long *)(unaff_x19 + 0x120),0);
      if (DAT_037750c4 == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_037750c4 = '\x01';
      }
      puVar2 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
      fVar18 = fStack00000000000000cc + fVar18;
      fVar21 = fVar21 + fVar17;
      lVar4 = *(long *)(*(long *)
                         Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                       + 0xb8);
      fVar10 = fStack00000000000000c8 + fVar15 * param_3 * fVar10;
      fVar23 = *(float *)(lVar4 + 0x18);
      fVar17 = *(float *)(lVar4 + 0x1c);
      fVar15 = *(float *)(lVar4 + 0x20);
      fStack00000000000000cc = fVar22;
      if (DAT_0377518b == '\0') {
        thunk_FUN_00d48444(System_Func<Assembly[]>_TypeInfo);
        DAT_0377518b = '\x01';
      }
      fVar16 = fVar18 - fVar16;
      fVar22 = fVar15 * fVar15 + fVar23 * fVar23 + fVar17 * fVar17;
      fVar20 = fVar21 - fStack00000000000000cc;
      param_2 = fVar10 - param_2;
      if (**(float **)(*(long *)System_Func<Assembly[]>_TypeInfo + 0xb8) <= fVar22) {
        fVar12 = param_2 * fVar15 + fVar20 * fVar23 + fVar16 * fVar17;
        fVar20 = fVar20 - (fVar23 * fVar12) / fVar22;
        fVar16 = fVar16 - (fVar17 * fVar12) / fVar22;
        param_2 = param_2 - (fVar15 * fVar12) / fVar22;
      }
      fStack00000000000000cc = fVar18;
      if (DAT_0377518c == '\0') {
        thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
        DAT_0377518c = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      fVar15 = SQRT(param_2 * param_2 + fVar20 * fVar20 + fVar16 * fVar16);
      if (fVar15 <= DAT_028aa038) {
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        pfVar6 = *(float **)(*(long *)puVar2 + 0xb8);
        fVar20 = *pfVar6;
        fVar16 = pfVar6[1];
        param_2 = pfVar6[2];
      }
      else {
        fVar20 = fVar20 / fVar15;
        fVar16 = fVar16 / fVar15;
        param_2 = param_2 / fVar15;
      }
      fVar15 = fStack00000000000000cc;
      uVar13 = (ulong)(uint)param_2;
      uVar7 = (ulong)(uint)fVar16;
      if (DAT_037750c4 == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_037750c4 = '\x01';
      }
      lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
      uVar14 = (ulong)*(uint *)(lVar4 + 0x18);
      uVar11 = FUN_02698e08(fVar20,uVar7,uVar13,uVar14,*(undefined4 *)(lVar4 + 0x1c),
                            *(undefined4 *)(lVar4 + 0x20),0);
      plVar9 = *(long **)(unaff_x19 + 0x130);
      uStack0000000000000048 = 0;
      uStack000000000000004c = 0;
      uStack0000000000000050 = 0;
      uStack0000000000000054 = 0;
      in_stack_00000040 = 0;
      in_stack_00000058 = 0;
      FUN_02666aac(fVar21,fVar15,fVar10,uVar11,uVar7,uVar13,uVar14,&stack0x00000040,0);
      uStack0000000000000074 = CONCAT44(in_stack_00000058,uStack0000000000000054);
      uStack0000000000000068 = uStack0000000000000048;
      in_stack_00000060 = in_stack_00000040;
      uStack000000000000006c = uStack000000000000004c;
      uStack0000000000000070 = uStack0000000000000050;
      if (plVar9 != (long *)0x0) {
        lVar4 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) ==
                *(long *)Method_System_Nullable<InputControlScheme>_get_HasValue__) {
              puVar5 = (undefined8 *)(lVar4 + (long)(*piVar8 + 2) * 0x10 + 0x138);
              goto LAB_019fd934;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_00d59724(plVar9,*(long *)
                                      Method_System_Nullable<InputControlScheme>_get_HasValue__,2);
LAB_019fd934:
        (*(code *)*puVar5)(plVar9,&stack0x00000060,puVar5[1]);
        *(undefined8 *)(unaff_x19 + 0x144) = in_stack_00000008;
        *(undefined8 *)(unaff_x19 + 0x13c) = in_stack_00000000;
        *(undefined8 *)(unaff_x19 + 0x150) = uStack0000000000000014;
        *(ulong *)(unaff_x19 + 0x148) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


