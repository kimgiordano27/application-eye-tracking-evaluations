/*
FUNCTION_NAME: OVRPlugin$$GetSystemHeadsetType
ENTRY_POINT: 04f62044
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSystemHeadsetType
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
               undefined1 param_4 [16],undefined1 param_5 [16],undefined1 param_6 [16],
               undefined1 param_7 [16],float param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x25;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float in_s17;
  float in_s18;
  float in_stack_00000010;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 in_stack_000000b0;
  undefined4 uStack00000000000000b8;
  float fStack00000000000000bc;
  float fStack00000000000000c0;
  float fStack00000000000000c4;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  
  fVar14 = param_6._12_4_;
  fVar13 = param_6._8_4_;
  fVar12 = param_6._4_4_;
  fVar11 = param_6._0_4_;
  auVar16._4_4_ = fVar14;
  auVar16._0_4_ = fVar14;
  auVar16._8_4_ = fVar14;
  auVar16._12_4_ = fVar14;
  fVar9 = in_s18 * fVar12;
  fVar10 = in_s17 * fVar12;
  auVar16 = NEON_ext(auVar16,param_6,4,1);
  auVar17._4_4_ = fVar9;
  auVar17._0_4_ = param_8 * fVar11;
  auVar17._8_4_ = in_s17 * fVar13;
  auVar17._12_4_ = fVar10;
  auVar18._4_4_ = fVar9;
  auVar18._0_4_ = param_8 * fVar11;
  auVar18._8_4_ = in_s17 * fVar13;
  auVar18._12_4_ = fVar10;
  auVar17 = NEON_ext(auVar17,auVar18,4,1);
  fStack00000000000000bc = param_8 * fVar12;
  fStack00000000000000c0 = in_s18 * fVar13;
  fVar15 = param_8 * fVar13;
  auVar1._4_4_ = fStack00000000000000bc;
  auVar1._0_4_ = in_s17 * fVar11;
  auVar1._8_4_ = fStack00000000000000c0;
  auVar1._12_4_ = fVar15;
  auVar2._4_4_ = fStack00000000000000bc;
  auVar2._0_4_ = in_s17 * fVar11;
  auVar2._8_4_ = fStack00000000000000c0;
  auVar2._12_4_ = fVar15;
  auVar18 = NEON_ext(auVar1,auVar2,0xc,1);
  fStack00000000000000bc =
       (fVar11 * in_stack_00000010 + in_s18 * auVar16._0_4_ + auVar17._4_4_) -
       fStack00000000000000bc;
  fStack00000000000000c0 =
       (fVar12 * in_stack_00000010 + in_s17 * auVar16._4_4_ + auVar17._12_4_) -
       fStack00000000000000c0;
  fStack00000000000000c4 =
       (fVar13 * in_stack_00000010 + param_8 * auVar16._8_4_ + fVar9) - auVar18._4_4_;
  uStack0000000000000048 = CONCAT44(fStack00000000000000bc,param_3);
  uStack0000000000000058 =
       CONCAT44(in_stack_000000c8._4_4_,
                ((fVar14 * in_stack_00000010 - in_s18 * auVar16._12_4_) - fVar10) - fVar15);
  uStack0000000000000050 = CONCAT44(fStack00000000000000c4,fStack00000000000000c0);
  uStack0000000000000040 = in_stack_000000b0;
  uStack0000000000000068 = in_stack_000000d8;
  uStack0000000000000060 = in_stack_000000d0;
  uStack00000000000000b8 = param_3;
  FUN_04f62360();
  lVar3 = FUN_04f60ee4();
  if (lVar3 != 0) {
    plVar4 = (long *)FUN_04f60ee4();
    if ((unaff_x19 == 0) || (uVar5 = FUN_05c89410(), plVar4 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar3 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x25) {
          puVar6 = (undefined8 *)(lVar3 + (long)(*piVar8 + 4) * 0x10 + 0x138);
          goto LAB_04f6219c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_02b7654c(plVar4,*unaff_x25,4);
LAB_04f6219c:
    (*(code *)*puVar6)(plVar4,uVar5,puVar6[1]);
    FUN_04f61664();
  }
  return;
}


