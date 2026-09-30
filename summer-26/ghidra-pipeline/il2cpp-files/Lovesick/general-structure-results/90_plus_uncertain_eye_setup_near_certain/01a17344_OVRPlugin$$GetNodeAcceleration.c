/*
FUNCTION_NAME: OVRPlugin$$GetNodeAcceleration
ENTRY_POINT: 01a17344
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetNodeAcceleration(undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  float *pfVar5;
  undefined8 *unaff_x19;
  undefined8 *unaff_x23;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  ulong uVar11;
  float fVar12;
  ulong uVar13;
  float fVar14;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s12;
  float unaff_s15;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 in_stack_00000070;
  undefined4 uStack00000000000000e8;
  undefined4 uStack00000000000000ec;
  
  fVar6 = (float)FUN_026877e4();
  lVar2 = FUN_00da4fb8(*unaff_x23,1);
  if (DAT_03774e1a == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03774e1a = '\x01';
  }
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (lVar2 != 0) {
    iVar3 = (int)*(ulong *)(lVar2 + 0x18);
    if (iVar3 != 0) {
      fVar12 = unaff_s10 * fStack0000000000000004 +
               unaff_s8 * unaff_s15 + unaff_s9 * fStack0000000000000000;
      fVar7 = unaff_s10 * (fStack000000000000002c - fStack0000000000000010) +
              unaff_s8 * (fStack0000000000000034 - fStack000000000000000c) +
              unaff_s9 * (fStack0000000000000030 - fStack0000000000000008);
      fVar9 = (fStack000000000000002c - fStack0000000000000010) * fStack0000000000000024 +
              (fStack0000000000000034 - fStack000000000000000c) * fStack0000000000000028 +
              (fStack0000000000000030 - fStack0000000000000008) * fStack0000000000000014;
      fVar14 = 1.0 / (fVar12 * fVar12 + -1.0);
      fVar10 = (fVar12 * fVar7 - fVar9) * fVar14;
      fVar14 = (fVar7 - fVar12 * fVar9) * fVar14;
      fStack0000000000000020 = fStack0000000000000020 + fVar6 * fVar10;
      fStack000000000000001c = fStack000000000000001c + param_2 * fVar10;
      fStack0000000000000018 = fStack0000000000000018 + param_3 * fVar10;
      fVar7 = (fStack0000000000000034 + unaff_s8 * fVar14) - fStack0000000000000020;
      fVar9 = (fStack0000000000000030 + unaff_s9 * fVar14) - fStack000000000000001c;
      fVar6 = (fStack000000000000002c + unaff_s10 * fVar14) - fStack0000000000000018;
      fVar9 = fVar9 * fVar9;
      fVar6 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar9) - unaff_s12;
      *(float *)(lVar2 + 0x20) = fVar6;
      puVar1 = StringLiteral_6259;
      if (1 < iVar3) {
        lVar4 = (*(ulong *)(lVar2 + 0x18) & 0xffffffff) - 1;
        pfVar5 = (float *)(lVar2 + 0x24);
        do {
          fVar7 = *pfVar5;
          if (*pfVar5 <= fVar6) {
            fVar7 = fVar6;
          }
          fVar6 = fVar7;
          lVar4 = lVar4 + -1;
          pfVar5 = pfVar5 + 1;
        } while (lVar4 != 0);
      }
      if (fVar6 < unaff_s12) {
        fVar7 = unaff_s12 * unaff_s12;
        fVar14 = SQRT(fVar7 - fVar6 * fVar6);
        fVar6 = (float)FUN_026877e4();
        fStack0000000000000020 = fStack0000000000000020 - fVar14 * fVar6;
        fStack000000000000001c = fStack000000000000001c - fVar14 * fVar7;
        fStack0000000000000018 = fStack0000000000000018 - fVar14 * fVar9;
      }
      uVar11 = (ulong)(uint)fStack000000000000001c;
      uVar13 = (ulong)(uint)fStack0000000000000018;
      uVar8 = FUN_01a16c3c(fStack0000000000000020,uVar11,uVar13);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02666aac(uVar8,uVar11,uVar13,uStack000000000000003c,uStack00000000000000ec,
                   uStack0000000000000038,uStack00000000000000e8,&stack0x00000080,0);
      FUN_01a175c8(&stack0x00000040);
      unaff_x19[1] = CONCAT44(uStack000000000000004c,uStack0000000000000048);
      *unaff_x19 = in_stack_00000040;
      *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000054;
      *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


