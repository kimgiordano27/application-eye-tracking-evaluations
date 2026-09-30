/*
FUNCTION_NAME: OVRPlugin$$GetControllerState2
ENTRY_POINT: 01a18540
PROGRAM: Lovesick-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetControllerState2(undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  float *pfVar5;
  long lVar6;
  undefined8 *unaff_x19;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  ulong uVar13;
  float fVar14;
  ulong uVar15;
  float fVar16;
  float unaff_s9;
  float unaff_s10;
  float unaff_s12;
  float unaff_s13;
  float fStack0000000000000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  
  fVar16 = param_3;
  fVar7 = (float)FUN_026877e4();
  if (DAT_03777c7d == '\0') {
    thunk_FUN_00d48444(System_Func<Assembly[]>_TypeInfo);
    DAT_03777c7d = '\x01';
  }
  puVar1 = Method_System_Collections_Generic_HashSet<RTHandle>_Contains__;
  fVar12 = fVar16 * fVar16;
  fVar8 = fVar12 + fVar7 * fVar7 + param_2 * param_2;
  fVar14 = **(float **)(*(long *)System_Func<Assembly[]>_TypeInfo + 0xb8);
  fStack0000000000000004 = unaff_s10;
  if (fVar14 <= fVar8) {
    fVar9 = (in_stack_00000008._4_4_ - param_3) * fVar16 +
            (unaff_s9 - unaff_s12) * fVar7 + (unaff_s10 - unaff_s13) * param_2;
    fVar14 = fVar7 * fVar9;
    fVar12 = fVar16 * fVar9;
    fVar16 = fVar14 / fVar8;
    fVar7 = (param_2 * fVar9) / fVar8;
    fVar8 = fVar12 / fVar8;
  }
  else {
    if (DAT_03774d76 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774d76 = '\x01';
    }
    pfVar5 = *(float **)
              (*(long *)
                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
              0xb8);
    fVar16 = *pfVar5;
    fVar7 = pfVar5[1];
    fVar8 = pfVar5[2];
  }
  fVar9 = (float)FUN_026877f0();
  fVar10 = (float)FUN_01a17ffc();
  lVar3 = FUN_00da4fb8(*(undefined8 *)puVar1,1);
  if (DAT_03774e1a == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03774e1a = '\x01';
  }
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (lVar3 != 0) {
    iVar4 = (int)*(ulong *)(lVar3 + 0x18);
    if (iVar4 != 0) {
      fVar16 = fVar16 + fVar9;
      fVar7 = fVar7 + fVar12;
      fVar8 = fVar8 + fVar14;
      fVar14 = (in_stack_00000008._4_4_ - fVar8) * (in_stack_00000008._4_4_ - fVar8);
      fVar12 = SQRT(fVar14 + (unaff_s9 - fVar16) * (unaff_s9 - fVar16) +
                             (fStack0000000000000004 - fVar7) * (fStack0000000000000004 - fVar7)) -
               fVar10;
      *(float *)(lVar3 + 0x20) = fVar12;
      puVar1 = StringLiteral_6259;
      if (1 < iVar4) {
        lVar6 = (*(ulong *)(lVar3 + 0x18) & 0xffffffff) - 1;
        pfVar5 = (float *)(lVar3 + 0x24);
        do {
          fVar9 = *pfVar5;
          if (*pfVar5 <= fVar12) {
            fVar9 = fVar12;
          }
          fVar12 = fVar9;
          lVar6 = lVar6 + -1;
          pfVar5 = pfVar5 + 1;
        } while (lVar6 != 0);
      }
      if (fVar12 < fVar10) {
        fVar10 = fVar10 * fVar10;
        fVar9 = SQRT(fVar10 - fVar12 * fVar12);
        fVar12 = (float)FUN_026877e4();
        fVar16 = fVar16 - fVar9 * fVar12;
        fVar7 = fVar7 - fVar9 * fVar10;
        fVar8 = fVar8 - fVar9 * fVar14;
      }
      uVar13 = (ulong)(uint)fVar7;
      uVar15 = (ulong)(uint)fVar8;
      FUN_01a17f28(&stack0x00000030);
      uVar2 = uStack0000000000000040;
      uVar11 = FUN_01a1882c(fVar16,uVar13,uVar15);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02666aac(uVar11,uVar13,uVar15,uStack000000000000003c,uVar2,
                   uStack0000000000000044 & 0xffffffff,uStack0000000000000044._4_4_,&stack0x00000050
                   ,0);
      FUN_01a1895c(&stack0x00000010);
      unaff_x19[1] = CONCAT44(uStack000000000000001c,uStack0000000000000018);
      *unaff_x19 = in_stack_00000010;
      *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000024;
      *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000020,uStack000000000000001c);
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


