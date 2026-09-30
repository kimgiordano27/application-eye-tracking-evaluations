/*
FUNCTION_NAME: OVRObjectPool$$List<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 05be94e4
PROGRAM: Hyper-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint OVRObjectPool__List<OVRPlugin_Qpl_Annotation_Builder_Entry>(void *param_1)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  void *in_x9;
  long lVar7;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  long unaff_x22;
  int iVar8;
  long lVar9;
  int iVar10;
  void *unaff_x25;
  int iVar11;
  void *pvVar12;
  int iVar13;
  void *unaff_x27;
  long unaff_x29;
  int iVar14;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  uint uVar19;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined1 auVar20 [16];
  undefined1 auVar15 [12];
  undefined1 auVar18 [16];
  
  if (-1 < *(int *)(*(long *)(unaff_x22 + 0x30) + 0x28)) {
    in_x9 = (void *)(unaff_x29 + -0x38);
  }
  memcpy(param_1,in_x9,*(size_t *)(unaff_x29 + -0x98));
  uVar5 = FUN_0494813c(*(undefined8 *)(unaff_x22 + 0x30));
  if ((uVar5 & 1) == 0) {
    iVar14 = 0;
  }
  else {
    lVar7 = *(long *)(unaff_x19 + 0x38);
    lVar6 = *(long *)(lVar7 + 0x30);
    lVar9 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_04980b34(lVar6);
      lVar7 = *(long *)(unaff_x19 + 0x38);
      lVar9 = *(long *)(lVar7 + 0x30);
    }
    lVar2 = *(long *)(unaff_x29 + -0x38);
    if (-1 < *(int *)(lVar9 + 0x28)) {
      lVar2 = unaff_x29 + -0x38;
    }
    FUN_04948b64(lVar6,*(undefined8 *)(lVar7 + 0x38),*(undefined8 *)(unaff_x29 + -0xd0),lVar2,0,
                 unaff_x29 + -0x14);
    iVar14 = *(int *)(unaff_x29 + -0x14);
  }
  lVar9 = *(long *)(unaff_x19 + 0x38);
  pvVar1 = *(void **)(unaff_x29 + -0x40);
  if (-1 < *(int *)(*(long *)(lVar9 + 0x40) + 0x28)) {
    pvVar1 = (void *)(unaff_x29 + -0x40);
  }
  memcpy(unaff_x25,pvVar1,*(size_t *)(unaff_x29 + -0x88));
  uVar5 = FUN_0494813c(*(undefined8 *)(lVar9 + 0x40));
  if ((uVar5 & 1) == 0) {
    iVar8 = 0;
  }
  else {
    lVar7 = *(long *)(unaff_x19 + 0x38);
    lVar6 = *(long *)(lVar7 + 0x40);
    lVar9 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_04980b34(lVar6);
      lVar7 = *(long *)(unaff_x19 + 0x38);
      lVar9 = *(long *)(lVar7 + 0x40);
    }
    lVar2 = *(long *)(unaff_x29 + -0x40);
    if (-1 < *(int *)(lVar9 + 0x28)) {
      lVar2 = unaff_x29 + -0x40;
    }
    FUN_04948b64(lVar6,*(undefined8 *)(lVar7 + 0x48),*(undefined8 *)(unaff_x29 + -200),lVar2,0,
                 unaff_x29 + -0x14);
    iVar8 = *(int *)(unaff_x29 + -0x14);
  }
  lVar9 = *(long *)(unaff_x19 + 0x38);
  pvVar1 = *(void **)(unaff_x29 + -0x48);
  if (-1 < *(int *)(*(long *)(lVar9 + 0x50) + 0x28)) {
    pvVar1 = (void *)(unaff_x29 + -0x48);
  }
  memcpy(unaff_x27,pvVar1,*(size_t *)(unaff_x29 + -0x80));
  uVar5 = FUN_0494813c(*(undefined8 *)(lVar9 + 0x50));
  if ((uVar5 & 1) == 0) {
    iVar10 = 0;
  }
  else {
    lVar7 = *(long *)(unaff_x19 + 0x38);
    lVar6 = *(long *)(lVar7 + 0x50);
    lVar9 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_04980b34(lVar6);
      lVar7 = *(long *)(unaff_x19 + 0x38);
      lVar9 = *(long *)(lVar7 + 0x50);
    }
    lVar2 = *(long *)(unaff_x29 + -0x48);
    if (-1 < *(int *)(lVar9 + 0x28)) {
      lVar2 = unaff_x29 + -0x48;
    }
    FUN_04948b64(lVar6,*(undefined8 *)(lVar7 + 0x58),*(undefined8 *)(unaff_x29 + -0xc0),lVar2,0,
                 unaff_x29 + -0x14);
    iVar10 = *(int *)(unaff_x29 + -0x14);
  }
  lVar9 = *(long *)(unaff_x19 + 0x38);
  pvVar12 = *(void **)(unaff_x29 + -0x90);
  pvVar1 = *(void **)(unaff_x29 + -0x50);
  if (-1 < *(int *)(*(long *)(lVar9 + 0x60) + 0x28)) {
    pvVar1 = (void *)(unaff_x29 + -0x50);
  }
  memcpy(pvVar12,pvVar1,*(size_t *)(unaff_x29 + -0x68));
  uVar5 = FUN_0494813c(*(undefined8 *)(lVar9 + 0x60),pvVar12);
  if ((uVar5 & 1) == 0) {
    iVar11 = 0;
  }
  else {
    lVar7 = *(long *)(unaff_x19 + 0x38);
    lVar6 = *(long *)(lVar7 + 0x60);
    lVar9 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_04980b34(lVar6);
      lVar7 = *(long *)(unaff_x19 + 0x38);
      lVar9 = *(long *)(lVar7 + 0x60);
    }
    lVar2 = *(long *)(unaff_x29 + -0x50);
    if (-1 < *(int *)(lVar9 + 0x28)) {
      lVar2 = unaff_x29 + -0x50;
    }
    FUN_04948b64(lVar6,*(undefined8 *)(lVar7 + 0x68),*(undefined8 *)(unaff_x29 + -0xb8),lVar2,0,
                 unaff_x29 + -0x14);
    iVar11 = *(int *)(unaff_x29 + -0x14);
  }
  lVar9 = *(long *)(unaff_x19 + 0x38);
  pvVar12 = *(void **)(unaff_x29 + -0x78);
  pvVar1 = *(void **)(unaff_x29 + -0x58);
  if (-1 < *(int *)(*(long *)(lVar9 + 0x70) + 0x28)) {
    pvVar1 = (void *)(unaff_x29 + -0x58);
  }
  memcpy(pvVar12,pvVar1,*(size_t *)(unaff_x29 + -0x60));
  uVar5 = FUN_0494813c(*(undefined8 *)(lVar9 + 0x70),pvVar12);
  if ((uVar5 & 1) == 0) {
    iVar13 = 0;
  }
  else {
    lVar7 = *(long *)(unaff_x19 + 0x38);
    lVar6 = *(long *)(lVar7 + 0x70);
    lVar9 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_04980b34(lVar6);
      lVar7 = *(long *)(unaff_x19 + 0x38);
      lVar9 = *(long *)(lVar7 + 0x70);
    }
    lVar2 = *(long *)(unaff_x29 + -0x58);
    if (-1 < *(int *)(lVar9 + 0x28)) {
      lVar2 = unaff_x29 + -0x58;
    }
    FUN_04948b64(lVar6,*(undefined8 *)(lVar7 + 0x78),*(undefined8 *)(unaff_x29 + -0xb0),lVar2,0,
                 unaff_x29 + -0x14);
    iVar13 = *(int *)(unaff_x29 + -0x14);
  }
  puVar4 = PTR_DAT_0ac40db0;
  if (*(int *)(*(long *)PTR_DAT_0ac40db0 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if (DAT_0b3240b6 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac40db0);
    DAT_0b3240b6 = '\x01';
  }
  lVar9 = *(long *)puVar4;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar9 = *(long *)puVar4;
  }
  iVar3 = **(int **)(lVar9 + 0xb8);
  if (DAT_0b3240b7 == '\0') {
    FUN_04947ee4(puVar4);
    lVar9 = *(long *)puVar4;
    DAT_0b3240b7 = '\x01';
  }
  if ((*(int *)(lVar9 + 0xe4) == 0) && (thunk_FUN_049a583c(), DAT_0b3240b7 == '\0')) {
    FUN_04947ee4(PTR_DAT_0ac40db0);
    DAT_0b3240b7 = '\x01';
  }
  if ((*(int *)(*(long *)puVar4 + 0xe4) == 0) && (thunk_FUN_049a583c(), DAT_0b3240b7 == '\0')) {
    FUN_04947ee4(PTR_DAT_0ac40db0);
    DAT_0b3240b7 = '\x01';
  }
  if ((*(int *)(*(long *)puVar4 + 0xe4) == 0) && (thunk_FUN_049a583c(), DAT_0b3240b7 == '\0')) {
    FUN_04947ee4(PTR_DAT_0ac40db0);
    DAT_0b3240b7 = '\x01';
  }
  if ((*(int *)(*(long *)puVar4 + 0xe4) == 0) && (thunk_FUN_049a583c(), DAT_0b3240b7 == '\0')) {
    FUN_04947ee4(PTR_DAT_0ac40db0);
    DAT_0b3240b7 = '\x01';
  }
  if ((*(int *)(*(long *)puVar4 + 0xe4) == 0) && (thunk_FUN_049a583c(), DAT_0b3240b7 == '\0')) {
    FUN_04947ee4(PTR_DAT_0ac40db0);
    DAT_0b3240b7 = '\x01';
  }
  if ((*(int *)(*(long *)puVar4 + 0xe4) == 0) && (thunk_FUN_049a583c(), DAT_0b3240b7 == '\0')) {
    FUN_04947ee4(PTR_DAT_0ac40db0);
    DAT_0b3240b7 = '\x01';
  }
  if ((*(int *)(*(long *)puVar4 + 0xe4) == 0) && (thunk_FUN_049a583c(), DAT_0b3240b7 == '\0')) {
    FUN_04947ee4(PTR_DAT_0ac40db0);
    DAT_0b3240b7 = '\x01';
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if (DAT_0b3240b8 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac40db0);
    DAT_0b3240b8 = '\x01';
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x70) + 0x28) != *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar19 = iVar3 + unaff_w20 * -0x7a143589;
  uVar21 = iVar3 + *(int *)(unaff_x29 + -0xa8) * -0x7a143589 + (int)((ulong)_DAT_01df0120 >> 0x20);
  uVar22 = iVar3 + unaff_w21 * -0x7a143589 + (int)_UNK_01df0128;
  uVar23 = iVar3 + iVar14 * -0x7a143589 + (int)((ulong)_UNK_01df0128 >> 0x20);
  uVar19 = iVar11 * -0x7a143589 + (uVar19 * 0x2000 + (uVar19 >> 0x13)) * -0x61c8864f;
  uVar21 = iVar8 * -0x7a143589 + (uVar21 * 0x2000 + (uVar21 >> 0x13)) * -0x61c8864f;
  uVar22 = iVar10 * -0x7a143589 + (uVar22 * 0x2000 + (uVar22 >> 0x13)) * -0x61c8864f;
  uVar23 = iVar13 * -0x7a143589 + (uVar23 * 0x2000 + (uVar23 >> 0x13)) * -0x61c8864f;
  auVar16._0_4_ = (uVar19 * 0x2000 + (uVar19 >> 0x13)) * -0x61c8864f;
  auVar16._4_4_ = (uVar21 * 0x2000 + (uVar21 >> 0x13)) * -0x61c8864f;
  auVar16._8_4_ = (uVar22 * 0x2000 + (uVar22 >> 0x13)) * -0x61c8864f;
  auVar16._12_4_ = (uVar23 * 0x2000 + (uVar23 >> 0x13)) * -0x61c8864f;
  auVar17._8_4_ = _UNK_01df2b38;
  auVar17._0_8_ = _DAT_01df2b30;
  auVar20 = NEON_ushl(auVar16,_DAT_01df3220,4);
  auVar17._12_4_ = _UNK_01df2b3c;
  auVar17 = NEON_ushl(auVar16,auVar17,4);
  iVar14 = CONCAT13(auVar17[3] | auVar20[3],
                    CONCAT12(auVar17[2] | auVar20[2],
                             CONCAT11(auVar17[1] | auVar20[1],auVar17[0] | auVar20[0])));
  auVar15._0_8_ =
       CONCAT17(auVar17[7] | auVar20[7],
                CONCAT16(auVar17[6] | auVar20[6],
                         CONCAT15(auVar17[5] | auVar20[5],CONCAT14(auVar17[4] | auVar20[4],iVar14)))
               );
  auVar15[8] = auVar17[8] | auVar20[8];
  auVar15[9] = auVar17[9] | auVar20[9];
  auVar15[10] = auVar17[10] | auVar20[10];
  auVar15[0xb] = auVar17[0xb] | auVar20[0xb];
  auVar18[0xc] = auVar17[0xc] | auVar20[0xc];
  auVar18._0_12_ = auVar15;
  auVar18[0xd] = auVar17[0xd] | auVar20[0xd];
  auVar18[0xe] = auVar17[0xe] | auVar20[0xe];
  auVar18[0xf] = auVar17[0xf] | auVar20[0xf];
  uVar19 = iVar14 + (int)((ulong)auVar15._0_8_ >> 0x20) + auVar15._8_4_ + auVar18._12_4_ + 0x20;
  uVar19 = (uVar19 ^ uVar19 >> 0xf) * -0x7a143589;
  uVar19 = (uVar19 ^ uVar19 >> 0xd) * -0x3d4d51c3;
  return uVar19 ^ uVar19 >> 0x10;
}


