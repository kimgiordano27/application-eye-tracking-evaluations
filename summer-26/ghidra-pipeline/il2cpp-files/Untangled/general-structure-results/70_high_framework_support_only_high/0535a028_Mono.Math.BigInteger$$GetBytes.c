/*
FUNCTION_NAME: Mono.Math.BigInteger$$GetBytes
ENTRY_POINT: 0535a028
PROGRAM: Untangled-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_5;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Mono_Math_BigInteger__GetBytes(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int extraout_w1;
  int extraout_var;
  undefined8 uVar17;
  undefined8 uVar18;
  long *plVar19;
  int iVar20;
  int iVar21;
  long unaff_x19;
  long lVar22;
  long unaff_x21;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  
  FUN_02f07e70();
  FUN_02f07e70(PTR_DAT_06d40b78);
  FUN_02f07e70(PTR_DAT_06d40b80);
  FUN_02f07e70(PTR_DAT_06d40b88);
  FUN_02f07e70(PTR_DAT_06d3fb40);
  FUN_02f07e70(PTR_DAT_06d40b90);
  FUN_02f07e70(PTR_DAT_06d3fb48);
  FUN_02f07e70(PTR_DAT_06d40b98);
  FUN_02f07e70(PTR_DAT_06d40ba0);
  FUN_02f07e70(PTR_DAT_06d40ba8);
  FUN_02f07e70(PTR_DAT_06d40bb0);
  FUN_02f07e70(PTR_DAT_06d40bb8);
  FUN_02f07e70(PTR_DAT_06d40bc0);
  FUN_02f07e70(PTR_DAT_06d40bc8);
  FUN_02f07e70(PTR_DAT_06d40bd0);
  FUN_02f07e70(PTR_DAT_06d40bd8);
  FUN_02f07e70(PTR_DAT_06d40be0);
  FUN_02f07e70(PTR_DAT_06d40be8);
  FUN_02f07e70(PTR_DAT_06d40bf0);
  FUN_02f07e70(PTR_DAT_06d40bf8);
  FUN_02f07e70(PTR_DAT_06d40c00);
  FUN_02f07e70(PTR_DAT_06d40c08);
  FUN_02f07e70(PTR_DAT_06d40c10);
  FUN_02f07e70(PTR_DAT_06d40c18);
  FUN_02f07e70(PTR_DAT_06d40c20);
  FUN_02f07e70(PTR_DAT_06d40c28);
  FUN_02f07e70(PTR_DAT_06d40c30);
  FUN_02f07e70(PTR_DAT_06d40c38);
  FUN_02f07e70(PTR_DAT_06d40c40);
  FUN_02f07e70(PTR_DAT_06d40c48);
  FUN_02f07e70(PTR_DAT_06d40c50);
  FUN_02f07e70(PTR_DAT_06d40c58);
  FUN_02f07e70(PTR_DAT_06d40c60);
  FUN_02f07e70(PTR_DAT_06d40c68);
  FUN_02f07e70(PTR_DAT_06d40c70);
  FUN_02f07e70(PTR_DAT_06d40c78);
  FUN_02f07e70(PTR_DAT_06d40c80);
  FUN_02f07e70(PTR_DAT_06d40c88);
  FUN_02f07e70(PTR_DAT_06d3fbf8);
  FUN_02f07e70(PTR_DAT_06d3fbc8);
  FUN_02f07e70(PTR_DAT_06d393f8);
  FUN_02f07e70(PTR_DAT_06d40c90);
  FUN_02f07e70(PTR_DAT_06d40c98);
  FUN_02f07e70(PTR_DAT_06d40ca0);
  FUN_02f07e70(PTR_DAT_06d40ca8);
  FUN_02f07e70(PTR_DAT_06d40cb0);
  *(undefined1 *)(unaff_x19 + 0x5bc) = 1;
  lVar11 = FUN_0533f874(0);
  lVar12 = FUN_05346100(0);
  lVar13 = FUN_05348a30(0);
  lVar14 = FUN_05345294(0);
  lVar15 = FUN_05348ae8(0);
  lVar16 = FUN_053461ec(0);
  puVar7 = PTR_DAT_06d393f8;
  if (lVar11 == 0) goto LAB_0535dca8;
  lVar22 = *(long *)(lVar11 + 0xb8);
  uVar5 = *(ushort *)(*(long *)(*(long *)PTR_DAT_06d393f8 + 0x20) + 0x135);
  if ((uVar5 & 1) == 0) {
    FUN_02eea768();
    uVar5 = *(ushort *)(*(long *)(*(long *)puVar7 + 0x20) + 0x135);
  }
  iVar10 = *(int *)(lVar22 + 8);
  lVar22 = *(long *)(lVar11 + 0xc0);
  if ((uVar5 & 1) == 0) {
    FUN_02eea768();
  }
  iVar4 = *(int *)(lVar22 + 8);
  if ((iVar10 < 1) && (iVar4 < 1)) {
    return in_stack_00000260;
  }
  iVar8 = FUN_0536a2ac(lVar11,0);
  iVar9 = FUN_06689e38(0);
  if (iVar9 < 2) {
    iVar9 = 1;
  }
  if (iVar4 < 1) {
    auVar23 = ZEXT816(0);
  }
  else {
    if (*(long *)(unaff_x21 + 0xc0) == 0) goto LAB_0535dca8;
    FUN_042cd218(*(long *)(unaff_x21 + 0xc0) + 0x20,*(undefined8 *)PTR_DAT_06d40ca0);
    if (*(long *)(unaff_x21 + 0xc0) == 0) goto LAB_0535dca8;
    FUN_042b1eec(*(long *)(unaff_x21 + 0xc0) + 0x28,*(undefined8 *)PTR_DAT_06d3fbc8);
    if (*(long *)(unaff_x21 + 0xc0) == 0) goto LAB_0535dca8;
    FUN_042cd758(*(long *)(unaff_x21 + 0xc0) + 0x30,*(undefined8 *)PTR_DAT_06d40ca8);
    if (*(long *)(unaff_x21 + 0xc0) == 0) goto LAB_0535dca8;
    FUN_042b4240(*(long *)(unaff_x21 + 0xc0) + 0x38,*(undefined8 *)PTR_DAT_06d3fbf8);
    puVar7 = PTR_DAT_06d40cb0;
    FUN_042d06f4(lVar11 + 0x30,*(undefined8 *)PTR_DAT_06d40cb0);
    FUN_042d06f4(lVar11 + 0x30,*(undefined8 *)puVar7);
    if (*(long *)(unaff_x21 + 0xc0) == 0) goto LAB_0535dca8;
    iVar20 = *(int *)(*(long *)(unaff_x21 + 0xc0) + 0x60);
    plVar19 = (long *)(lVar11 + 0x10);
    if ((((((*plVar19 == 0) || (lVar12 == 0)) || (*(long *)(lVar12 + 0x58) == 0)) ||
         ((lVar13 == 0 || (*(long *)(lVar13 + 0x18) == 0)))) ||
        (((*(long *)(lVar13 + 0xe0) == 0 ||
          ((*(long *)(lVar13 + 0xe8) == 0 || (*(long *)(lVar13 + 0xf0) == 0)))) ||
         (*(long *)(lVar13 + 0xf8) == 0)))) ||
       ((((*(long *)(lVar13 + 0x100) == 0 || (*(long *)(lVar13 + 0x108) == 0)) ||
         (*(long *)(lVar13 + 0x118) == 0)) || (*(long *)(lVar13 + 0x120) == 0)))) goto LAB_0535dca8;
    iVar6 = iVar9 * 5 * iVar4;
    auVar23 = FUN_03abcf88(&stack0x00000528,iVar6,1,in_stack_00000260,in_stack_00000268,
                           *(undefined8 *)PTR_DAT_06d40c20);
    lVar22 = FUN_053461ec(0);
    if (((((lVar22 == 0) || (*plVar19 == 0)) ||
         ((*(long *)(lVar11 + 0x48) == 0 ||
          ((*(long *)(lVar11 + 0x18) == 0 || (*(long *)(lVar11 + 0x40) == 0)))))) ||
        ((lVar14 == 0 ||
         ((((FUN_05369508(lVar14,0), *(long *)(lVar14 + 0x10) == 0 ||
            (*(long *)(lVar12 + 0x28) == 0)) || (*(long *)(lVar12 + 0x30) == 0)) ||
          ((*(long *)(lVar12 + 0x38) == 0 || (*(long *)(lVar13 + 0x118) == 0)))))))) ||
       (((*(long *)(lVar13 + 0x120) == 0 ||
         ((*(long *)(lVar13 + 0x30) == 0 || (*(long *)(unaff_x21 + 0xa8) == 0)))) ||
        (*(long *)(*(long *)(unaff_x21 + 0xa8) + 0x10) == 0)))) goto LAB_0535dca8;
    auVar23 = FUN_03abd028(&stack0x00000528,iVar4,1,auVar23._0_8_,auVar23._8_8_,
                           *(undefined8 *)PTR_DAT_06d40c28);
    if ((((((((*plVar19 == 0) || (*(long *)(lVar11 + 0x48) == 0)) || (*(long *)(lVar11 + 0x40) == 0)
            ) || ((*(long *)(lVar12 + 0x28) == 0 || (*(long *)(lVar12 + 0x30) == 0)))) ||
          ((*(long *)(lVar12 + 0x38) == 0 ||
           ((*(long *)(lVar12 + 0x40) == 0 || (*(long *)(lVar12 + 0x48) == 0)))))) ||
         ((*(long *)(lVar12 + 0x50) == 0 ||
          (((*(long *)(lVar13 + 0x118) == 0 || (*(long *)(lVar13 + 0x120) == 0)) ||
           (*(long *)(lVar13 + 0x38) == 0)))))) ||
        (((((*(long *)(unaff_x21 + 0x18) == 0 || (*(long *)(unaff_x21 + 0x20) == 0)) ||
           ((*(long *)(unaff_x21 + 0x28) == 0 ||
            ((*(long *)(unaff_x21 + 0x30) == 0 || (*(long *)(unaff_x21 + 0x38) == 0)))))) ||
          (*(long *)(unaff_x21 + 0x40) == 0)) ||
         (((*(long *)(unaff_x21 + 0x48) == 0 || (*(long *)(unaff_x21 + 0x50) == 0)) ||
          (*(long *)(unaff_x21 + 0x58) == 0)))))) ||
       ((((*(long *)(unaff_x21 + 0x60) == 0 || (*(long *)(unaff_x21 + 0x68) == 0)) ||
         ((*(long *)(unaff_x21 + 0x70) == 0 ||
          ((*(long *)(unaff_x21 + 0x78) == 0 || (*(long *)(unaff_x21 + 0x80) == 0)))))) ||
        ((lVar15 == 0 ||
         (((((((*(long *)(lVar15 + 0x18) == 0 || (*(long *)(lVar15 + 0x20) == 0)) ||
              (*(long *)(lVar15 + 0x30) == 0)) ||
             ((*(long *)(lVar15 + 0x38) == 0 || (*(long *)(lVar15 + 0x40) == 0)))) ||
            (*(long *)(lVar15 + 0x48) == 0)) ||
           ((*(long *)(lVar15 + 0x50) == 0 || (*(long *)(lVar15 + 0x58) == 0)))) ||
          ((*(long *)(lVar15 + 0x60) == 0 ||
           (((*(long *)(lVar15 + 0x68) == 0 || (*(long *)(lVar15 + 0x70) == 0)) ||
            (*(long *)(lVar15 + 0x78) == 0)))))))))))) goto LAB_0535dca8;
    bVar1 = 0 < iVar20;
    bVar2 = 0 < extraout_var;
    auVar23 = FUN_03abd0c8(&stack0x00000528,iVar6,1,auVar23._0_8_,auVar23._8_8_,
                           *(undefined8 *)PTR_DAT_06d40c30);
    bVar3 = 0 < iVar8;
    if ((bVar3 && bVar2) && bVar1) {
      FUN_066d1868(0);
      if (((*plVar19 == 0) || (lVar22 = *(long *)(unaff_x21 + 0xc0), lVar22 == 0)) ||
         ((*(long *)(lVar22 + 0x10) == 0 || (*(long *)(lVar22 + 0x18) == 0)))) goto LAB_0535dca8;
      FUN_042cd940(lVar22 + 0x30,*(undefined8 *)PTR_DAT_06d40c98);
      auVar24 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<CullingSplit>
                          (&stack0x00000528,iVar6,1,in_stack_00000260,in_stack_00000268,
                           *(undefined8 *)PTR_DAT_06d40bc8);
      lVar22 = *(long *)(unaff_x21 + 0xc0);
      if (lVar22 == 0) goto LAB_0535dca8;
      auVar24 = FUN_03ab3674(*(undefined8 *)(lVar22 + 0x30),*(undefined8 *)(lVar22 + 0x38),
                             auVar24._0_8_,auVar24._8_8_,*(undefined8 *)PTR_DAT_06d40b98);
    }
    else {
      auVar24 = ZEXT816(0);
    }
    if (0 < iVar8) {
      if (lVar16 == 0) goto LAB_0535dca8;
      iVar20 = 0;
      do {
        if (((*plVar19 == 0) || (*(long *)(lVar11 + 0x48) == 0)) ||
           (((((*(long *)(lVar11 + 0x18) == 0 ||
               (((*(long *)(lVar11 + 0x40) == 0 || (*(long *)(lVar15 + 0x18) == 0)) ||
                (*(long *)(lVar15 + 0x28) == 0)))) ||
              (((*(long *)(lVar15 + 0x30) == 0 || (*(long *)(lVar15 + 0x38) == 0)) ||
               (*(long *)(lVar15 + 0x40) == 0)))) ||
             ((*(long *)(lVar15 + 0x48) == 0 || (*(long *)(lVar15 + 0x50) == 0)))) ||
            ((*(long *)(lVar15 + 0x58) == 0 ||
             ((((*(long *)(lVar15 + 0x60) == 0 || (*(long *)(lVar15 + 0x68) == 0)) ||
               (*(long *)(lVar15 + 0x70) == 0)) || (*(long *)(lVar15 + 0x90) == 0))))))))
        goto LAB_0535dca8;
        auVar23 = FUN_03abd168(&stack0x00000528,iVar4,1,auVar23._0_8_,auVar23._8_8_,
                               *(undefined8 *)PTR_DAT_06d40c38);
        if ((((*plVar19 == 0) || (*(long *)(lVar11 + 0x48) == 0)) ||
            ((*(long *)(lVar11 + 0x18) == 0 ||
             (((*(long *)(lVar11 + 0x40) == 0 ||
               (FUN_05369508(lVar14,0), *(long *)(lVar14 + 0x10) == 0)) ||
              ((*(long *)(lVar13 + 0x18) == 0 ||
               (((*(long *)(lVar13 + 0x38) == 0 || (*(long *)(lVar13 + 0x118) == 0)) ||
                (*(long *)(lVar13 + 0x120) == 0)))))))))) ||
           (((*(long *)(lVar13 + 0x40) == 0 || (*(long *)(unaff_x21 + 0x18) == 0)) ||
            ((*(long *)(unaff_x21 + 0x20) == 0 ||
             ((((*(long *)(unaff_x21 + 0x30) == 0 || (*(long *)(unaff_x21 + 0x38) == 0)) ||
               ((*(long *)(unaff_x21 + 0x40) == 0 ||
                (((*(long *)(unaff_x21 + 0x48) == 0 || (*(long *)(unaff_x21 + 0x50) == 0)) ||
                 (*(long *)(unaff_x21 + 0x60) == 0)))))) || (*(long *)(unaff_x21 + 0x70) == 0)))))))
           ) goto LAB_0535dca8;
        auVar23 = FUN_03abd2a8(&stack0x00000528,iVar6,1,auVar23._0_8_,auVar23._8_8_,
                               *(undefined8 *)PTR_DAT_06d40c48);
        if ((((*plVar19 == 0) || (*(long *)(lVar13 + 0x18) == 0)) ||
            (((*(long *)(lVar13 + 0x40) == 0 ||
              ((*(long *)(lVar13 + 0x58) == 0 || (*(long *)(lVar13 + 200) == 0)))) ||
             (*(long *)(lVar13 + 0xd0) == 0)))) ||
           ((((*(long *)(lVar13 + 0xd8) == 0 || (*(long *)(lVar13 + 0x48) == 0)) ||
             (*(long *)(lVar13 + 0x50) == 0)) ||
            ((*(long *)(unaff_x21 + 0x30) == 0 || (*(long *)(unaff_x21 + 0x38) == 0))))))
        goto LAB_0535dca8;
        auVar23 = FUN_03abd348(&stack0x00000528,iVar6,1,auVar23._0_8_,auVar23._8_8_,
                               *(undefined8 *)PTR_DAT_06d40c50);
        if (((((*plVar19 == 0) ||
              ((*(long *)(lVar11 + 0x48) == 0 || (*(long *)(lVar11 + 0x40) == 0)))) ||
             ((*(long *)(lVar13 + 0x18) == 0 ||
              ((((*(long *)(lVar13 + 0x38) == 0 || (*(long *)(lVar13 + 0x40) == 0)) ||
                (*(long *)(unaff_x21 + 0x18) == 0)) ||
               (((*(long *)(unaff_x21 + 0x30) == 0 || (*(long *)(unaff_x21 + 0x50) == 0)) ||
                ((*(long *)(unaff_x21 + 0x70) == 0 ||
                 ((lVar22 = *(long *)(unaff_x21 + 0x88), lVar22 == 0 ||
                  (*(long *)(lVar22 + 0x10) == 0)))))))))))) || (*(long *)(lVar22 + 0x18) == 0)) ||
           (*(long *)(lVar22 + 0x20) == 0)) goto LAB_0535dca8;
        auVar23 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<XRRaycast>
                            (&stack0x00000528,iVar6,1,auVar23._0_8_,auVar23._8_8_,
                             *(undefined8 *)PTR_DAT_06d40c58);
        if ((((((*plVar19 == 0) || (*(long *)(lVar11 + 0x40) == 0)) ||
              (*(long *)(lVar13 + 0x18) == 0)) ||
             ((*(long *)(lVar13 + 0x38) == 0 || (*(long *)(lVar13 + 0x40) == 0)))) ||
            ((*(long *)(lVar13 + 0x58) == 0 ||
             ((*(long *)(lVar13 + 200) == 0 || (*(long *)(lVar13 + 0xd0) == 0)))))) ||
           ((*(long *)(lVar13 + 0xd8) == 0 ||
            ((((((*(long *)(unaff_x21 + 0x18) == 0 || (*(long *)(unaff_x21 + 0x50) == 0)) ||
                (*(long *)(unaff_x21 + 0x70) == 0)) ||
               ((lVar22 = *(long *)(unaff_x21 + 0x88), lVar22 == 0 ||
                (*(long *)(lVar22 + 0x10) == 0)))) || (*(long *)(lVar22 + 0x18) == 0)) ||
             (*(long *)(lVar22 + 0x20) == 0)))))) goto LAB_0535dca8;
        auVar23 = FUN_03abd208(&stack0x00000528,iVar6,1,auVar23._0_8_,auVar23._8_8_,
                               *(undefined8 *)PTR_DAT_06d40c40);
        if (((((*plVar19 == 0) || (*(long *)(lVar11 + 0x40) == 0)) ||
             ((*(long *)(lVar13 + 0x18) == 0 ||
              (((*(long *)(lVar13 + 0x38) == 0 || (*(long *)(unaff_x21 + 0x18) == 0)) ||
               (*(long *)(unaff_x21 + 0x70) == 0)))))) ||
            (((lVar22 = *(long *)(unaff_x21 + 0x90), lVar22 == 0 || (*(long *)(lVar22 + 0x10) == 0))
             || (*(long *)(lVar22 + 0x18) == 0)))) || (*(long *)(lVar22 + 0x20) == 0))
        goto LAB_0535dca8;
        auVar23 = FUN_03abd7a8(&stack0x00000528,iVar6,1,auVar23._0_8_,auVar23._8_8_,
                               *(undefined8 *)PTR_DAT_06d40c88);
        if ((((*plVar19 == 0) || (*(long *)(lVar11 + 0x40) == 0)) ||
            ((*(long *)(lVar13 + 0x18) == 0 ||
             (((*(long *)(lVar13 + 0x38) == 0 || (*(long *)(unaff_x21 + 0x18) == 0)) ||
              (*(long *)(unaff_x21 + 0x30) == 0)))))) ||
           (((*(long *)(unaff_x21 + 0x50) == 0 || (*(long *)(unaff_x21 + 0x70) == 0)) ||
            ((*(long *)(unaff_x21 + 0x80) == 0 ||
             ((*(long *)(lVar15 + 0x18) == 0 || (*(long *)(lVar15 + 0x90) == 0))))))))
        goto LAB_0535dca8;
        auVar23 = FUN_03abd488(&stack0x00000528,iVar6,1,auVar23._0_8_,auVar23._8_8_,
                               *(undefined8 *)PTR_DAT_06d40c60);
        if (0 < extraout_w1) {
          if (((((*plVar19 == 0) || (*(long *)(lVar11 + 0x40) == 0)) ||
               (*(long *)(lVar13 + 0x18) == 0)) ||
              ((*(long *)(lVar13 + 0x38) == 0 || (*(long *)(lVar13 + 0xa8) == 0)))) ||
             ((*(long *)(unaff_x21 + 0x18) == 0 ||
              ((*(long *)(lVar15 + 0x18) == 0 || (*(long *)(lVar15 + 0x90) == 0))))))
          goto LAB_0535dca8;
          auVar23 = FUN_03abd528(&stack0x00000528,iVar6,1,auVar23._0_8_,auVar23._8_8_,
                                 *(undefined8 *)PTR_DAT_06d40c68);
        }
        if (extraout_var < 1) {
          if ((((((((*plVar19 == 0) || (*(long *)(lVar11 + 0x48) == 0)) ||
                  (*(long *)(lVar11 + 0x40) == 0)) ||
                 (((*(long *)(lVar13 + 0x18) == 0 || (*(long *)(lVar13 + 0x38) == 0)) ||
                  ((*(long *)(unaff_x21 + 0x18) == 0 ||
                   ((*(long *)(unaff_x21 + 0x20) == 0 || (*(long *)(unaff_x21 + 0x30) == 0))))))))
                || (*(long *)(unaff_x21 + 0x38) == 0)) ||
               (((*(long *)(unaff_x21 + 0x50) == 0 || (*(long *)(unaff_x21 + 0x60) == 0)) ||
                (*(long *)(unaff_x21 + 0x68) == 0)))) ||
              ((*(long *)(unaff_x21 + 0x70) == 0 || (*(long *)(unaff_x21 + 0x78) == 0)))) ||
             ((((*(long *)(unaff_x21 + 0x80) == 0 ||
                ((*(long *)(lVar15 + 0x58) == 0 || (*(long *)(lVar15 + 0x60) == 0)))) ||
               (*(long *)(lVar15 + 0x68) == 0)) ||
              ((((*(long *)(lVar15 + 0x70) == 0 ||
                 (lVar22 = *(long *)(unaff_x21 + 0x88), lVar22 == 0)) ||
                (*(long *)(lVar22 + 0x10) == 0)) ||
               ((*(long *)(lVar22 + 0x18) == 0 || (*(long *)(lVar22 + 0x20) == 0))))))))
          goto LAB_0535dca8;
          auVar23 = FUN_03abd5c8(&stack0x00000528,iVar6,1,auVar23._0_8_,auVar23._8_8_,
                                 *(undefined8 *)PTR_DAT_06d40c70);
        }
        else {
          if (((((*plVar19 == 0) || (*(long *)(lVar11 + 0x40) == 0)) ||
               ((*(long *)(lVar13 + 0x18) == 0 ||
                (((*(long *)(lVar13 + 0x38) == 0 || (*(long *)(unaff_x21 + 0x18) == 0)) ||
                 (*(long *)(unaff_x21 + 0x30) == 0)))))) ||
              ((*(long *)(unaff_x21 + 0x38) == 0 || (*(long *)(unaff_x21 + 0x50) == 0)))) ||
             ((*(long *)(unaff_x21 + 0x70) == 0 ||
              (((*(long *)(unaff_x21 + 0x80) == 0 ||
                (lVar22 = *(long *)(unaff_x21 + 0x88), lVar22 == 0)) ||
               ((*(long *)(lVar22 + 0x10) == 0 ||
                ((*(long *)(lVar22 + 0x18) == 0 || (*(long *)(lVar22 + 0x20) == 0))))))))))
          goto LAB_0535dca8;
          auVar23 = FUN_03abd668(&stack0x00000528,iVar6,1,auVar23._0_8_,auVar23._8_8_,
                                 *(undefined8 *)PTR_DAT_06d40c78);
          if (((bVar3 && bVar2) && bVar1) && iVar20 == 0) {
            auVar23 = FUN_06689568(auVar24._0_8_,auVar24._8_8_,auVar23._0_8_,auVar23._8_8_,0);
          }
          if (iVar20 == 0) {
            if (((((*plVar19 == 0) || (*(long *)(lVar11 + 0x40) == 0)) ||
                 (*(long *)(unaff_x21 + 0x18) == 0)) ||
                ((*(long *)(unaff_x21 + 0x20) == 0 || (*(long *)(unaff_x21 + 0x70) == 0)))) ||
               ((*(long *)(unaff_x21 + 0xc0) == 0 ||
                (*(long *)(*(long *)(unaff_x21 + 0xc0) + 0x10) == 0)))) goto LAB_0535dca8;
            auVar23 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<XRRaycastHit>
                                (&stack0x00000528,iVar4 * 3,1,auVar23._0_8_,auVar23._8_8_,
                                 *(undefined8 *)PTR_DAT_06d40be8);
            if ((((*plVar19 == 0) || (lVar22 = *(long *)(unaff_x21 + 0xc0), lVar22 == 0)) ||
                (*(long *)(lVar22 + 0x10) == 0)) || (*(long *)(lVar22 + 0x18) == 0))
            goto LAB_0535dca8;
            auVar23 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeText>
                                (&stack0x00000528,iVar4 * 3,1,auVar23._0_8_,auVar23._8_8_,
                                 *(undefined8 *)PTR_DAT_06d40be0);
            if (((((*plVar19 == 0) || (*(long *)(unaff_x21 + 0x18) == 0)) ||
                 (*(long *)(unaff_x21 + 0x20) == 0)) ||
                ((lVar22 = *(long *)(unaff_x21 + 0xc0), lVar22 == 0 ||
                 (*(long *)(lVar22 + 0x10) == 0)))) || (*(long *)(lVar22 + 0x18) == 0))
            goto LAB_0535dca8;
            FUN_042cd400(lVar22 + 0x20,*(undefined8 *)PTR_DAT_06d40c90);
            auVar23 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<Keyframe>
                                (&stack0x00000528,iVar6 * 6,1,auVar23._0_8_,auVar23._8_8_,
                                 *(undefined8 *)PTR_DAT_06d40bd0);
            lVar22 = *(long *)(unaff_x21 + 0xc0);
            if (lVar22 == 0) goto LAB_0535dca8;
            auVar23 = FUN_03ab36f4(*(undefined8 *)(lVar22 + 0x20),*(undefined8 *)(lVar22 + 0x28),
                                   auVar23._0_8_,auVar23._8_8_,*(undefined8 *)PTR_DAT_06d40ba0);
          }
          else {
            lVar22 = *(long *)(unaff_x21 + 0xc0);
            if (((lVar22 == 0) || (*(long *)(unaff_x21 + 0x18) == 0)) ||
               ((*(long *)(unaff_x21 + 0x20) == 0 || (*(long *)(lVar22 + 0x10) == 0))))
            goto LAB_0535dca8;
            uVar17 = *(undefined8 *)(lVar22 + 0x28);
            uVar18 = *(undefined8 *)PTR_DAT_06d40bb8;
            *(undefined4 *)((long)((ulong)&stack0x00000528 | 1) + 3) = 0;
            *(undefined4 *)((ulong)&stack0x00000528 | 1) = 0;
            auVar23 = FUN_03ab5914(&stack0x00000528,uVar17,0x100,auVar23._0_8_,auVar23._8_8_,uVar18)
            ;
          }
          iVar21 = 4;
          do {
            if (((*(long *)(unaff_x21 + 0x18) == 0) ||
                (lVar22 = *(long *)(unaff_x21 + 0xc0), lVar22 == 0)) ||
               (*(long *)(lVar22 + 0x10) == 0)) goto LAB_0535dca8;
            auVar23 = FUN_03ab58a8(&stack0x00000528,*(undefined8 *)(lVar22 + 0x28),0x80,
                                   auVar23._0_8_,auVar23._8_8_,*(undefined8 *)PTR_DAT_06d40bb0);
            if ((*plVar19 == 0) || (*(long *)(unaff_x21 + 0x18) == 0)) goto LAB_0535dca8;
            auVar23 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<float>
                                (&stack0x00000528,iVar4,1,auVar23._0_8_,auVar23._8_8_,
                                 *(undefined8 *)PTR_DAT_06d40bd8);
            iVar21 = iVar21 + -1;
          } while (iVar21 != 0);
          if ((((((*plVar19 == 0) || (*(long *)(lVar11 + 0x48) == 0)) ||
                ((*(long *)(lVar11 + 0x40) == 0 ||
                 (((*(long *)(lVar13 + 0x18) == 0 || (*(long *)(lVar13 + 0x38) == 0)) ||
                  (*(long *)(unaff_x21 + 0x18) == 0)))))) ||
               ((*(long *)(unaff_x21 + 0x20) == 0 || (*(long *)(unaff_x21 + 0x50) == 0)))) ||
              (*(long *)(unaff_x21 + 0x60) == 0)) ||
             (((*(long *)(unaff_x21 + 0x68) == 0 || (*(long *)(unaff_x21 + 0x70) == 0)) ||
              ((*(long *)(unaff_x21 + 0x78) == 0 ||
               ((((*(long *)(unaff_x21 + 0x80) == 0 || (*(long *)(lVar15 + 0x58) == 0)) ||
                 (*(long *)(lVar15 + 0x60) == 0)) ||
                ((*(long *)(lVar15 + 0x68) == 0 || (*(long *)(lVar15 + 0x70) == 0))))))))))
          goto LAB_0535dca8;
          auVar23 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_Vector4f>
                              (&stack0x00000528,iVar6,1,auVar23._0_8_,auVar23._8_8_,
                               *(undefined8 *)PTR_DAT_06d40c80);
        }
        iVar20 = iVar20 + 1;
      } while (iVar20 != iVar8);
    }
    lVar22 = FUN_053461ec(0);
    if (((lVar22 == 0) || (*plVar19 == 0)) ||
       ((((*(long *)(lVar13 + 0x18) == 0 ||
          (((*(long *)(lVar13 + 0x118) == 0 || (*(long *)(lVar13 + 0x120) == 0)) ||
           (*(long *)(lVar13 + 0x40) == 0)))) ||
         (((*(long *)(unaff_x21 + 0x20) == 0 || (*(long *)(unaff_x21 + 0x40) == 0)) ||
          (*(long *)(unaff_x21 + 0x48) == 0)))) ||
        ((*(long *)(unaff_x21 + 0x58) == 0 || (*(long *)(unaff_x21 + 0x68) == 0))))))
    goto LAB_0535dca8;
    auVar23 = FUN_03abcda8(&stack0x00000528,iVar6,1,auVar23._0_8_,auVar23._8_8_,
                           *(undefined8 *)PTR_DAT_06d40c08);
    if ((bVar3 && bVar2) && bVar1) {
      if ((*plVar19 == 0) || (*(long *)(unaff_x21 + 0xc0) == 0)) goto LAB_0535dca8;
      auVar24 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeQueue<SelfCollisionConstraint_ContactInfo>>
                          (&stack0x00000528,iVar4,1,auVar23._0_8_,auVar23._8_8_,
                           *(undefined8 *)PTR_DAT_06d40bc0);
      if ((*(long *)(unaff_x21 + 0x18) == 0) || (*(long *)(unaff_x21 + 0xc0) == 0))
      goto LAB_0535dca8;
      auVar24 = FUN_03ab583c(&stack0x00000528,*(undefined8 *)(*(long *)(unaff_x21 + 0xc0) + 0x38),
                             0x80,auVar24._0_8_,auVar24._8_8_,*(undefined8 *)PTR_DAT_06d40ba8);
    }
    else {
      auVar24 = ZEXT816(0);
    }
    if (((((*plVar19 == 0) || (*(long *)(lVar11 + 0x40) == 0)) || (*(long *)(lVar13 + 0x18) == 0))
        || (((*(long *)(lVar13 + 0x118) == 0 || (*(long *)(lVar13 + 0x120) == 0)) ||
            ((*(long *)(lVar13 + 200) == 0 ||
             ((*(long *)(lVar13 + 0xd0) == 0 || (*(long *)(lVar13 + 0xd8) == 0)))))))) ||
       ((*(long *)(lVar13 + 0x48) == 0 ||
        ((((*(long *)(lVar13 + 0x50) == 0 || (*(long *)(lVar13 + 0x60) == 0)) ||
          (*(long *)(lVar13 + 0x68) == 0)) || (*(long *)(lVar13 + 0xb8) == 0))))))
    goto LAB_0535dca8;
    auVar23 = FUN_03abcd08(&stack0x00000528,iVar6,1,auVar23._0_8_,auVar23._8_8_,
                           *(undefined8 *)PTR_DAT_06d40c00);
    if (((*plVar19 == 0) || (*(long *)(lVar13 + 0x118) == 0)) ||
       (((*(long *)(lVar13 + 0x88) == 0 ||
         ((*(long *)(lVar13 + 0x90) == 0 || (*(long *)(lVar13 + 0x98) == 0)))) ||
        (*(long *)(lVar13 + 0x78) == 0)))) goto LAB_0535dca8;
    auVar23 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<SelfCollisionConstraint_GridInfo>
                        (&stack0x00000528,iVar6,1,auVar23._0_8_,auVar23._8_8_,
                         *(undefined8 *)PTR_DAT_06d40bf8);
    if (((((*plVar19 == 0) || (*(long *)(lVar12 + 0x28) == 0)) || (*(long *)(lVar12 + 0x30) == 0))
        || (((*(long *)(lVar13 + 0x118) == 0 || (*(long *)(lVar13 + 0x120) == 0)) ||
            ((*(long *)(lVar13 + 0x90) == 0 ||
             ((*(long *)(lVar13 + 0x98) == 0 || (*(long *)(lVar13 + 0x20) == 0)))))))) ||
       ((*(long *)(lVar13 + 0x70) == 0 || (*(long *)(lVar13 + 0x110) == 0)))) goto LAB_0535dca8;
    auVar23 = FUN_03abce48(&stack0x00000528,iVar6,1,auVar23._0_8_,auVar23._8_8_,
                           *(undefined8 *)PTR_DAT_06d40c10);
    lVar22 = FUN_053461ec(0);
    if (((((lVar22 == 0) || (*plVar19 == 0)) || (*(long *)(lVar11 + 0x48) == 0)) ||
        ((*(long *)(lVar15 + 0x30) == 0 || (*(long *)(lVar15 + 0x38) == 0)))) ||
       (((*(long *)(lVar15 + 0x48) == 0 ||
         ((*(long *)(lVar15 + 0x50) == 0 || (*(long *)(lVar12 + 0x28) == 0)))) ||
        ((*(long *)(lVar12 + 0x30) == 0 ||
         ((((*(long *)(lVar12 + 0x38) == 0 || (*(long *)(lVar12 + 0x40) == 0)) ||
           (*(long *)(lVar12 + 0x48) == 0)) ||
          ((*(long *)(lVar13 + 0x18) == 0 || (*(long *)(lVar13 + 0x58) == 0))))))))))
    goto LAB_0535dca8;
    auVar23 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<DecalEntity>
                        (&stack0x00000528,iVar4,1,auVar23._0_8_,auVar23._8_8_,
                         *(undefined8 *)PTR_DAT_06d40c18);
    if ((bVar3 && bVar2) && bVar1) {
      auVar23 = FUN_06689568(auVar23._0_8_,auVar23._8_8_,auVar24._0_8_,auVar24._8_8_,0);
    }
  }
  if (iVar10 < 1) {
    auVar24 = ZEXT816(0);
  }
  else {
    if ((((((lVar16 == 0) || (FUN_0536a17c(lVar11,0), *(long *)(lVar11 + 0x10) == 0)) ||
          ((*(long *)(lVar11 + 0x48) == 0 ||
           (((*(long *)(lVar11 + 0x18) == 0 || (*(long *)(lVar11 + 0x40) == 0)) || (lVar14 == 0)))))
          ) || ((FUN_05369508(lVar14,0), *(long *)(lVar14 + 0x10) == 0 || (lVar12 == 0)))) ||
        (((*(long *)(lVar12 + 0x28) == 0 ||
          (((*(long *)(lVar12 + 0x30) == 0 || (*(long *)(lVar12 + 0x38) == 0)) ||
           ((*(long *)(lVar12 + 0x58) == 0 ||
            (((*(long *)(lVar12 + 0x40) == 0 || (*(long *)(lVar12 + 0x48) == 0)) ||
             (*(long *)(lVar12 + 0x50) == 0)))))))) ||
         (((lVar13 == 0 || (*(long *)(lVar13 + 0x18) == 0)) || (*(long *)(lVar13 + 0x38) == 0))))))
       || (((((*(long *)(lVar13 + 0xe0) == 0 || (*(long *)(lVar13 + 0xe8) == 0)) ||
             ((*(long *)(lVar13 + 0xf0) == 0 ||
              ((((((*(long *)(lVar13 + 0xf8) == 0 || (*(long *)(lVar13 + 0x100) == 0)) ||
                  (*(long *)(lVar13 + 0x108) == 0)) ||
                 ((*(long *)(lVar13 + 0x118) == 0 || (*(long *)(lVar13 + 0x120) == 0)))) ||
                (*(long *)(lVar13 + 0x30) == 0)) ||
               ((*(long *)(lVar13 + 0x40) == 0 || (*(long *)(lVar13 + 0x58) == 0)))))))) ||
            ((*(long *)(lVar13 + 200) == 0 ||
             (((((*(long *)(lVar13 + 0xd0) == 0 || (*(long *)(lVar13 + 0xd8) == 0)) ||
                (*(long *)(lVar13 + 0x48) == 0)) ||
               ((*(long *)(lVar13 + 0x50) == 0 || (*(long *)(lVar13 + 0x60) == 0)))) ||
              ((*(long *)(lVar13 + 0x68) == 0 ||
               ((*(long *)(lVar13 + 0xb8) == 0 || (*(long *)(lVar13 + 0x88) == 0)))))))))) ||
           (((*(long *)(lVar13 + 0x90) == 0 ||
             (((*(long *)(lVar13 + 0x98) == 0 || (*(long *)(lVar13 + 0x78) == 0)) ||
              (*(long *)(lVar13 + 0x20) == 0)))) ||
            (((((((((*(long *)(lVar13 + 0x70) == 0 || (*(long *)(lVar13 + 0x110) == 0)) ||
                   ((*(long *)(lVar13 + 0xa8) == 0 ||
                    ((*(long *)(unaff_x21 + 0x18) == 0 || (*(long *)(unaff_x21 + 0x20) == 0)))))) ||
                  (*(long *)(unaff_x21 + 0x28) == 0)) ||
                 ((((((*(long *)(unaff_x21 + 0x30) == 0 || (*(long *)(unaff_x21 + 0x38) == 0)) ||
                     (*(long *)(unaff_x21 + 0x40) == 0)) ||
                    ((*(long *)(unaff_x21 + 0x48) == 0 || (*(long *)(unaff_x21 + 0x50) == 0)))) ||
                   ((*(long *)(unaff_x21 + 0x58) == 0 ||
                    ((*(long *)(unaff_x21 + 0x60) == 0 || (*(long *)(unaff_x21 + 0x68) == 0)))))) ||
                  (*(long *)(unaff_x21 + 0x70) == 0)))) ||
                (((*(long *)(unaff_x21 + 0x78) == 0 || (*(long *)(unaff_x21 + 0x80) == 0)) ||
                 (lVar15 == 0)))) ||
               ((*(long *)(lVar15 + 0x18) == 0 || (*(long *)(lVar15 + 0x20) == 0)))) ||
              (((*(long *)(lVar15 + 0x28) == 0 ||
                ((*(long *)(lVar15 + 0x30) == 0 || (*(long *)(lVar15 + 0x38) == 0)))) ||
               (*(long *)(lVar15 + 0x40) == 0)))) ||
             (((((*(long *)(lVar15 + 0x48) == 0 || (*(long *)(lVar15 + 0x50) == 0)) ||
                (*(long *)(lVar15 + 0x58) == 0)) ||
               (((*(long *)(lVar15 + 0x60) == 0 || (*(long *)(lVar15 + 0x68) == 0)) ||
                ((*(long *)(lVar15 + 0x70) == 0 ||
                 ((*(long *)(lVar15 + 0x90) == 0 || (*(long *)(lVar15 + 0x78) == 0)))))))) ||
              ((((*(long *)(unaff_x21 + 0xa8) == 0 ||
                 ((((*(long *)(*(long *)(unaff_x21 + 0xa8) + 0x10) == 0 ||
                    (lVar11 = *(long *)(unaff_x21 + 0x88), lVar11 == 0)) ||
                   (*(long *)(lVar11 + 0x10) == 0)) ||
                  ((*(long *)(lVar11 + 0x18) == 0 || (*(long *)(lVar11 + 0x20) == 0)))))) ||
                ((lVar11 = *(long *)(unaff_x21 + 0x90), lVar11 == 0 ||
                 ((*(long *)(lVar11 + 0x10) == 0 || (*(long *)(lVar11 + 0x18) == 0)))))) ||
               (*(long *)(lVar11 + 0x20) == 0)))))))))))) goto LAB_0535dca8;
    auVar24 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<Hammersley_Hammersley2dSeq16>
                        (&stack0x00000528,iVar10,1,in_stack_00000260,in_stack_00000268,
                         *(undefined8 *)PTR_DAT_06d40bf0);
  }
  auVar23 = FUN_06689568(auVar23._0_8_,auVar23._8_8_,auVar24._0_8_,auVar24._8_8_,0);
  uVar18 = auVar23._8_8_;
  uVar17 = auVar23._0_8_;
  lVar11 = FUN_0533f874(0);
  if (lVar11 != 0) {
    iVar10 = FUN_0536a17c(lVar11,0);
    if (iVar10 < 1) {
      if (lVar12 != 0) {
        uVar17 = FUN_05377fe0(lVar12,uVar17,uVar18,0);
        return uVar17;
      }
    }
    else if (lVar13 != 0) {
      auVar23 = FUN_0537d688(lVar13,uVar17,uVar18,iVar9 * 5,0);
      if (lVar12 != 0) {
        auVar24 = FUN_05377fe0(lVar12,uVar17,uVar18,0);
        uVar17 = FUN_06689568(auVar23._0_8_,auVar23._8_8_,auVar24._0_8_,auVar24._8_8_,0);
        return uVar17;
      }
    }
  }
LAB_0535dca8:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


