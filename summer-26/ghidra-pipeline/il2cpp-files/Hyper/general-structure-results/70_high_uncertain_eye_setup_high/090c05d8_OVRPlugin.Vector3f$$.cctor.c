/*
FUNCTION_NAME: OVRPlugin.Vector3f$$.cctor
ENTRY_POINT: 090c05d8
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_Vector3f___cctor
          (undefined1 param_1 [16],float param_2,undefined1 param_3 [16],undefined1 param_4 [16],
          undefined1 param_5 [16],undefined1 param_6 [16],undefined1 param_7 [16],
          undefined1 param_8 [16])

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  long lVar5;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  undefined1 unaff_w27;
  ulong unaff_x28;
  long unaff_x29;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar17 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  float in_register_00005204;
  float in_register_00005208;
  float in_register_0000520c;
  
  uVar27 = param_8._8_8_;
  uVar26 = param_8._0_8_;
  fVar22 = param_7._12_4_;
  fVar24 = param_7._8_4_;
  fVar21 = param_7._4_4_;
  fVar25 = param_7._0_4_;
  fVar11 = param_6._12_4_;
  fVar9 = param_6._8_4_;
  fVar8 = param_6._4_4_;
  fVar23 = param_5._12_4_;
  fVar12 = param_5._8_4_;
  fVar10 = param_5._4_4_;
  fVar6 = param_5._0_4_;
  fVar20 = param_4._12_4_;
  fVar19 = param_4._8_4_;
  fVar18 = param_4._4_4_;
  fVar16 = param_4._0_4_;
code_r0x090c05d8:
                    /* catch() { ... } // from try @ 090c05cc with catch @ 090c05d8 */
  auVar13._4_4_ = fVar22;
  auVar13._0_4_ = fVar22;
                    /* catch() { ... } // from try @ 090c04c8 with catch @ 090c05dc */
  auVar13._8_4_ = fVar22;
  auVar13._12_4_ = fVar22;
  auVar14._4_4_ = fVar21;
  auVar14._0_4_ = fVar25;
  auVar14._8_4_ = fVar24;
  auVar14._12_4_ = fVar22;
                    /* catch() { ... } // from try @ 090c0480 with catch @ 090c05e0 */
                    /* catch() { ... } // from try @ 090c041c with catch @ 090c05e4 */
  auVar14 = NEON_ext(auVar13,auVar14,4,1);
  fVar7 = param_3._0_4_ * (float)uVar26;
  fVar8 = fVar8 * (float)((ulong)uVar26 >> 0x20);
  fVar9 = fVar9 * (float)uVar27;
  fVar11 = fVar11 * (float)((ulong)uVar27 >> 0x20);
  fVar21 = in_register_00005204 * fVar21;
  fVar22 = in_register_00005208 * fVar24;
  fVar24 = in_register_0000520c * fVar24;
  auVar15._4_4_ = fVar8;
  auVar15._0_4_ = fVar7;
  auVar15._8_4_ = fVar9;
  auVar15._12_4_ = fVar11;
  auVar17._4_4_ = fVar8;
  auVar17._0_4_ = fVar7;
  auVar17._8_4_ = fVar9;
  auVar17._12_4_ = fVar11;
  auVar15 = NEON_ext(auVar15,auVar17,4,1);
                    /* try { // try from 090c0600 to 091c0603 has its CatchHandler @ 090c0650 */
  auVar2._4_4_ = fVar21;
  auVar2._0_4_ = param_2 * fVar25;
  auVar2._8_4_ = fVar22;
  auVar2._12_4_ = fVar24;
  auVar3._4_4_ = fVar21;
  auVar3._0_4_ = param_2 * fVar25;
  auVar3._8_4_ = fVar22;
  auVar3._12_4_ = fVar24;
  auVar17 = NEON_ext(auVar2,auVar3,0xc,1);
  fVar21 = (fVar16 + fVar6 * auVar14._0_4_ + auVar15._4_4_) - fVar21;
  fVar22 = (fVar18 + fVar10 * auVar14._4_4_ + auVar15._12_4_) - fVar22;
  fVar10 = (fVar19 + fVar12 * auVar14._8_4_ + fVar8) - auVar17._4_4_;
  fVar24 = ((fVar20 - fVar23 * auVar14._12_4_) - fVar11) - fVar24;
  puVar4 = unaff_x25;
  do {
    if (unaff_x29 == 0) {
LAB_090c06a0:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(uint *)(unaff_x29 + 0x18) <= unaff_x22) goto LAB_090c069c;
    lVar5 = unaff_x29 + unaff_x22 * 0x10;
    unaff_x22 = unaff_x22 + 1;
    unaff_x25 = (undefined8 *)((long)puVar4 + 0x1c);
    *(ulong *)(lVar5 + 0x28) = CONCAT44(fVar24,fVar10);
    *(ulong *)(lVar5 + 0x20) = CONCAT44(fVar22,fVar21);
    if (unaff_x22 == 0x1a) {
      return 1;
    }
    lVar5 = *unaff_x24;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar5 = *unaff_x24;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
    if (lVar5 == 0) goto LAB_090c06a0;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x22) goto LAB_090c069c;
    unaff_x29 = *unaff_x19;
    uVar1 = *(uint *)(lVar5 + unaff_x22 * 4 + 0x20);
    if (-1 < (int)uVar1) break;
    if (*(char *)(unaff_x26 + 0x57b) == '\0') {
      FUN_04947ee4();
      *(undefined1 *)(unaff_x26 + 0x57b) = unaff_w27;
    }
    uVar26 = (*(undefined8 **)(*unaff_x21 + 0xb8))[1];
    fVar10 = (float)uVar26;
    fVar24 = (float)((ulong)uVar26 >> 0x20);
    uVar26 = **(undefined8 **)(*unaff_x21 + 0xb8);
    fVar21 = (float)uVar26;
    fVar22 = (float)((ulong)uVar26 >> 0x20);
    puVar4 = unaff_x25;
  } while( true );
  if (*(uint *)(unaff_x20 + 0x18) <= uVar1) {
LAB_090c069c:
                    /* WARNING: Subroutine does not return */
    FUN_04948194();
  }
  lVar5 = unaff_x23 + (ulong)uVar1 * (unaff_x28 & 0xffffffff);
  param_2 = *(float *)(lVar5 + 0x10);
  param_3 = ZEXT416(*(uint *)(lVar5 + 0x14));
  auVar15 = ZEXT416(*(uint *)(lVar5 + 0x18));
  fVar6 = (float)FUN_0a16a578(*(undefined4 *)(lVar5 + 0xc),0);
  if (*(uint *)(unaff_x20 + 0x18) <= unaff_x22) goto LAB_090c069c;
  fVar24 = (float)*(undefined8 *)((long)puVar4 + 0x24);
  fVar22 = (float)((ulong)*(undefined8 *)((long)puVar4 + 0x24) >> 0x20);
  uVar26 = *unaff_x25;
  fVar25 = (float)uVar26;
  fVar21 = (float)((ulong)uVar26 >> 0x20);
  fVar20 = auVar15._0_4_;
  fVar16 = fVar25 * fVar20;
  fVar18 = fVar21 * fVar20;
  fVar19 = fVar24 * fVar20;
  fVar20 = fVar22 * fVar20;
  uVar27 = CONCAT44(fVar21,fVar24);
  fVar12 = param_3._0_4_;
  fVar10 = param_2;
  fVar23 = fVar6;
  fVar8 = fVar6;
  fVar9 = param_2;
  fVar11 = param_2;
  in_register_00005204 = fVar12;
  in_register_00005208 = fVar6;
  in_register_0000520c = fVar12;
  goto code_r0x090c05d8;
}


