/*
FUNCTION_NAME: OVRPlugin$$GetControllerState
ENTRY_POINT: 01a184bc
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


undefined8
OVRPlugin__GetControllerState
          (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,undefined8 param_5
          ,undefined8 *param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  float *pfVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  ulong uVar14;
  float fVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fStack0000000000000004;
  float fStack000000000000000c;
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
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  
  if ((DAT_0377a9a0 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_6259);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<RTHandle>_Contains__);
    DAT_0377a9a0 = 1;
  }
  in_stack_00000058 = 0;
  in_stack_00000060 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  fVar7 = (float)FUN_01a17fa0(param_4,param_7);
  fVar11 = param_2;
  fStack000000000000000c = param_3;
  fVar8 = (float)FUN_026877f0(param_5,0);
  fVar18 = fVar11;
  fVar17 = param_3;
  fVar9 = (float)FUN_026877e4(param_5,0);
  if (DAT_03777c7d == '\0') {
    thunk_FUN_00d48444(System_Func<Assembly[]>_TypeInfo);
    DAT_03777c7d = '\x01';
  }
  puVar1 = Method_System_Collections_Generic_HashSet<RTHandle>_Contains__;
  fVar13 = fVar17 * fVar17;
  fVar10 = fVar13 + fVar9 * fVar9 + fVar18 * fVar18;
  fVar15 = **(float **)(*(long *)System_Func<Assembly[]>_TypeInfo + 0xb8);
  fStack0000000000000004 = param_2;
  if (fVar15 <= fVar10) {
    fVar11 = (fStack000000000000000c - param_3) * fVar17 +
             (fVar7 - fVar8) * fVar9 + (param_2 - fVar11) * fVar18;
    fVar15 = fVar9 * fVar11;
    fVar13 = fVar17 * fVar11;
    fVar17 = fVar15 / fVar10;
    fVar18 = (fVar18 * fVar11) / fVar10;
    fVar10 = fVar13 / fVar10;
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
    fVar17 = *pfVar5;
    fVar18 = pfVar5[1];
    fVar10 = pfVar5[2];
  }
  fVar11 = (float)FUN_026877f0(param_5,0);
  fVar8 = (float)FUN_01a17ffc(param_4,param_7);
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
      fVar17 = fVar17 + fVar11;
      fVar18 = fVar18 + fVar13;
      fVar10 = fVar10 + fVar15;
      fVar9 = (fStack000000000000000c - fVar10) * (fStack000000000000000c - fVar10);
      fVar11 = SQRT(fVar9 + (fVar7 - fVar17) * (fVar7 - fVar17) +
                            (fStack0000000000000004 - fVar18) * (fStack0000000000000004 - fVar18)) -
               fVar8;
      *(float *)(lVar3 + 0x20) = fVar11;
      puVar1 = StringLiteral_6259;
      if (1 < iVar4) {
        lVar6 = (*(ulong *)(lVar3 + 0x18) & 0xffffffff) - 1;
        pfVar5 = (float *)(lVar3 + 0x24);
        do {
          fVar7 = *pfVar5;
          if (*pfVar5 <= fVar11) {
            fVar7 = fVar11;
          }
          fVar11 = fVar7;
          lVar6 = lVar6 + -1;
          pfVar5 = pfVar5 + 1;
        } while (lVar6 != 0);
      }
      if (fVar11 < fVar8) {
        fVar8 = fVar8 * fVar8;
        fVar7 = SQRT(fVar8 - fVar11 * fVar11);
        fVar11 = (float)FUN_026877e4(param_5,0);
        fVar17 = fVar17 - fVar7 * fVar11;
        fVar18 = fVar18 - fVar7 * fVar8;
        fVar10 = fVar10 - fVar7 * fVar9;
      }
      uVar14 = (ulong)(uint)fVar18;
      uVar16 = (ulong)(uint)fVar10;
      FUN_01a17f28(&stack0x00000030,param_4,param_7);
      uVar2 = uStack0000000000000040;
      uVar12 = FUN_01a1882c(fVar17,uVar14,uVar16,param_4,param_7);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02666aac(uVar12,uVar14,uVar16,uStack000000000000003c,uVar2,
                   uStack0000000000000044 & 0xffffffff,uStack0000000000000044._4_4_,&stack0x00000050
                   ,0);
      FUN_01a1895c(&stack0x00000010,param_4,&stack0x00000050,param_7);
      param_6[1] = CONCAT44(uStack000000000000001c,uStack0000000000000018);
      *param_6 = in_stack_00000010;
      *(undefined8 *)((long)param_6 + 0x14) = uStack0000000000000024;
      *(ulong *)((long)param_6 + 0xc) = CONCAT44(uStack0000000000000020,uStack000000000000001c);
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


