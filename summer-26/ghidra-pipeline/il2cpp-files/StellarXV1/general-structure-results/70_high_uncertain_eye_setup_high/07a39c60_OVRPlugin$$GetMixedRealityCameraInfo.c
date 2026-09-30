/*
FUNCTION_NAME: OVRPlugin$$GetMixedRealityCameraInfo
ENTRY_POINT: 07a39c60
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetMixedRealityCameraInfo(float param_1,float param_2)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  float *pfVar5;
  undefined8 *unaff_x19;
  long unaff_x22;
  undefined8 *unaff_x23;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  ulong uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000008;
  undefined8 uStack0000000000000010;
  float fStack000000000000001c;
  undefined8 uStack0000000000000020;
  undefined8 in_stack_00000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined8 in_stack_00000058;
  undefined4 uStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  
  fStack000000000000001c = *(float *)(unaff_x22 + 0xc);
  uStack0000000000000020 = *(undefined8 *)(unaff_x22 + 4);
  uStack0000000000000010 = *(undefined8 *)(unaff_x22 + 0x10);
  lVar2 = FUN_04077674(*unaff_x23,1);
  if (DAT_098855ad == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    DAT_098855ad = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if (lVar2 != 0) {
    iVar3 = (int)*(ulong *)(lVar2 + 0x18);
    if (iVar3 != 0) {
      fVar6 = unaff_s10 * unaff_s11 + unaff_s8 * unaff_s12 + unaff_s9 * unaff_s13;
      fVar11 = 1.0 / (fVar6 * fVar6 + -1.0);
      fVar13 = unaff_s10 * (in_stack_00000028._4_4_ - in_stack_00000008._4_4_) +
               unaff_s8 * (fStack0000000000000034 - unaff_s14) +
               unaff_s9 * (fStack0000000000000030 - unaff_s15);
      fVar8 = (in_stack_00000028._4_4_ - in_stack_00000008._4_4_) * unaff_s11 +
              (fStack0000000000000034 - unaff_s14) * unaff_s12 +
              (fStack0000000000000030 - unaff_s15) * unaff_s13;
      fVar9 = (fVar13 * fVar6 - fVar8) * fVar11;
      fVar11 = (fVar13 - fVar6 * fVar8) * fVar11;
      param_2 = param_2 + fStack000000000000001c * fVar9;
      fVar8 = (float)uStack0000000000000020 + (float)uStack0000000000000010 * fVar9;
      fVar9 = (float)((ulong)uStack0000000000000020 >> 0x20) +
              (float)((ulong)uStack0000000000000010 >> 0x20) * fVar9;
      uVar10 = CONCAT44(fVar9,fVar8);
      fVar6 = (fStack0000000000000034 + unaff_s8 * fVar11) - param_2;
      fVar13 = (fStack0000000000000030 + unaff_s9 * fVar11) - fVar8;
      fVar11 = (in_stack_00000028._4_4_ + unaff_s10 * fVar11) - fVar9;
      fVar6 = SQRT(fVar11 * fVar11 + fVar6 * fVar6 + fVar13 * fVar13) - param_1;
      *(float *)(lVar2 + 0x20) = fVar6;
      puVar1 = PTR_DAT_092b7110;
      if (1 < iVar3) {
        lVar4 = (*(ulong *)(lVar2 + 0x18) & 0xffffffff) - 1;
        pfVar5 = (float *)(lVar2 + 0x24);
        do {
          fVar11 = *pfVar5;
          if (*pfVar5 <= fVar6) {
            fVar11 = fVar6;
          }
          fVar6 = fVar11;
          lVar4 = lVar4 + -1;
          pfVar5 = pfVar5 + 1;
        } while (lVar4 != 0);
      }
      if (fVar6 < param_1) {
        fVar6 = SQRT(param_1 * param_1 - fVar6 * fVar6);
        param_2 = param_2 - fVar6 * *(float *)(unaff_x22 + 0xc);
        uVar10 = CONCAT44(fVar9 - (float)((ulong)*(undefined8 *)(unaff_x22 + 0x10) >> 0x20) * fVar6,
                          fVar8 - (float)*(undefined8 *)(unaff_x22 + 0x10) * fVar6);
      }
      uVar12 = (undefined4)(uVar10 >> 0x20);
      uVar7 = FUN_07a396b8(param_2,uVar10,uVar10 >> 0x20);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_089d99f0(uVar7,uVar10 & 0xffffffff,uVar12,uStack00000000000000cc,uStack00000000000000c8,
                   uStack0000000000000040,in_stack_00000038._4_4_,&stack0x00000060,0);
      FUN_07a39ec8((undefined1 *)((long)&stack0x00000040 + 4));
      unaff_x19[1] = CONCAT44(uStack0000000000000050,uStack000000000000004c);
      *unaff_x19 = uStack0000000000000044;
      *(undefined8 *)((long)unaff_x19 + 0x14) = in_stack_00000058;
      *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000054,uStack0000000000000050);
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


