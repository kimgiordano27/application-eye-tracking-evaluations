/*
FUNCTION_NAME: OVRPlugin$$get_batteryLevel
ENTRY_POINT: 060cdb14
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__get_batteryLevel(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  float *pfVar4;
  undefined8 *unaff_x19;
  long unaff_x22;
  long unaff_x23;
  undefined1 unaff_w24;
  long unaff_x25;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  ulong uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined8 in_stack_00000058;
  undefined4 uStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  
  if (*(char *)(unaff_x25 + 0x8be) == '\0') {
    FUN_03642964(PTR_DAT_079f4df0);
    *(undefined1 *)(unaff_x25 + 0x8be) = unaff_w24;
  }
  if (*(int *)(*(long *)PTR_DAT_079f4df0 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  if (unaff_x23 != 0) {
    iVar2 = (int)*(ulong *)(unaff_x23 + 0x18);
    if (iVar2 != 0) {
      fVar5 = unaff_s10 * unaff_s11 + unaff_s8 * unaff_s12 + unaff_s9 * unaff_s13;
      fVar10 = 1.0 / (fVar5 * fVar5 + -1.0);
      fVar12 = unaff_s10 * (fStack000000000000002c - in_stack_00000008._4_4_) +
               unaff_s8 * (fStack0000000000000034 - unaff_s14) +
               unaff_s9 * (fStack0000000000000030 - unaff_s15);
      fVar7 = (fStack000000000000002c - in_stack_00000008._4_4_) * unaff_s11 +
              (fStack0000000000000034 - unaff_s14) * unaff_s12 +
              (fStack0000000000000030 - unaff_s15) * unaff_s13;
      fVar8 = (fVar12 * fVar5 - fVar7) * fVar10;
      fVar10 = (fVar12 - fVar5 * fVar7) * fVar10;
      fStack0000000000000028 = fStack0000000000000028 + in_stack_00000018._4_4_ * fVar8;
      fVar7 = (float)in_stack_00000020 + (float)in_stack_00000010 * fVar8;
      fVar8 = (float)((ulong)in_stack_00000020 >> 0x20) +
              (float)((ulong)in_stack_00000010 >> 0x20) * fVar8;
      uVar9 = CONCAT44(fVar8,fVar7);
      fVar5 = (fStack0000000000000034 + unaff_s8 * fVar10) - fStack0000000000000028;
      fVar12 = (fStack0000000000000030 + unaff_s9 * fVar10) - fVar7;
      fVar10 = (fStack000000000000002c + unaff_s10 * fVar10) - fVar8;
      fVar5 = SQRT(fVar10 * fVar10 + fVar5 * fVar5 + fVar12 * fVar12) - fStack0000000000000038;
      *(float *)(unaff_x23 + 0x20) = fVar5;
      puVar1 = PTR_DAT_079fd258;
      if (1 < iVar2) {
        lVar3 = (*(ulong *)(unaff_x23 + 0x18) & 0xffffffff) - 1;
        pfVar4 = (float *)(unaff_x23 + 0x24);
        do {
          fVar10 = *pfVar4;
          if (*pfVar4 <= fVar5) {
            fVar10 = fVar5;
          }
          fVar5 = fVar10;
          lVar3 = lVar3 + -1;
          pfVar4 = pfVar4 + 1;
        } while (lVar3 != 0);
      }
      if (fVar5 < fStack0000000000000038) {
        fVar5 = SQRT(fStack0000000000000038 * fStack0000000000000038 - fVar5 * fVar5);
        fStack0000000000000028 = fStack0000000000000028 - fVar5 * *(float *)(unaff_x22 + 0xc);
        uVar9 = CONCAT44(fVar8 - (float)((ulong)*(undefined8 *)(unaff_x22 + 0x10) >> 0x20) * fVar5,
                         fVar7 - (float)*(undefined8 *)(unaff_x22 + 0x10) * fVar5);
      }
      uVar11 = (undefined4)(uVar9 >> 0x20);
      uVar6 = FUN_060cd534(fStack0000000000000028,uVar9,uVar9 >> 0x20);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_071ce4a0(uVar6,uVar9 & 0xffffffff,uVar11,uStack00000000000000cc,uStack00000000000000c8,
                   uStack0000000000000040,uStack000000000000003c,&stack0x00000060,0);
      FUN_060cdd44((undefined1 *)((long)&stack0x00000040 + 4));
      unaff_x19[1] = CONCAT44(uStack0000000000000050,uStack000000000000004c);
      *unaff_x19 = uStack0000000000000044;
      *(undefined8 *)((long)unaff_x19 + 0x14) = in_stack_00000058;
      *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000054,uStack0000000000000050);
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03642c20();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


