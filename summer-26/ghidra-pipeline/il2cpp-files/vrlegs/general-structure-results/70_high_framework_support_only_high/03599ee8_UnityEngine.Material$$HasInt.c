/*
FUNCTION_NAME: UnityEngine.Material$$HasInt
ENTRY_POINT: 03599ee8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 UnityEngine_Material__HasInt(void)

{
  short sVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined *puVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  long *plVar29;
  undefined4 in_w8;
  long lVar30;
  undefined4 in_w9;
  long unaff_x19;
  long unaff_x20;
  long lVar31;
  long lVar32;
  long unaff_x23;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar45 [16];
  uint uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  
  *(undefined4 *)(unaff_x19 + 0x10) = in_w9;
  *(undefined4 *)(unaff_x19 + 0x40) = in_w8;
  if (unaff_x20 != 0) {
    iVar19 = *(int *)(unaff_x19 + 0x2c);
    if (*(long *)(unaff_x20 + 0x38) == 0) {
      FUN_0359a7d0();
    }
    auVar45._8_8_ = in_stack_00000038;
    auVar45._0_8_ = in_stack_00000030;
    if (*(long *)(unaff_x20 + 0xb0) != 0) {
      if (*(int *)(*(long *)(unaff_x20 + 0xb0) + 0x18) < iVar19) {
        lVar31 = *(long *)(unaff_x19 + 0x30);
        _in_stack_00000030 = auVar45;
        if (lVar31 == 0) goto LAB_0359a718;
        if (*(long *)(lVar31 + 0x38) == 0) {
          FUN_0359a7d0(lVar31);
        }
        if (*(long *)(lVar31 + 0xb0) == 0) goto LAB_0359a718;
        *(int *)(unaff_x19 + 0x2c) = *(int *)(*(long *)(lVar31 + 0xb0) + 0x18) + -1;
      }
      auVar5._8_8_ = in_stack_00000038;
      auVar5._0_8_ = in_stack_00000030;
      auVar4._8_8_ = in_stack_00000038;
      auVar4._0_8_ = in_stack_00000030;
      auVar3._8_8_ = in_stack_00000038;
      auVar3._0_8_ = in_stack_00000030;
      if ((((unaff_x23 != 0) && (_in_stack_00000030 = auVar3, *(long *)(unaff_x23 + 0x28) != 0)) &&
          (lVar31 = *(long *)(*(long *)(unaff_x23 + 0x28) + 0x368), _in_stack_00000030 = auVar4,
          lVar31 != 0)) &&
         (lVar31 = *(long *)(lVar31 + 0x38), _in_stack_00000030 = auVar5, lVar31 != 0)) {
        if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x38)) {
LAB_0359a71c:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        memmove((void *)(unaff_x19 + 0x48),
                (void *)(lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x38) * 0x178 + 0x20),0x178);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x58,0);
        auVar7._8_8_ = in_stack_00000038;
        auVar7._0_8_ = in_stack_00000030;
        auVar6._8_8_ = in_stack_00000038;
        auVar6._0_8_ = in_stack_00000030;
        uVar2 = *(uint *)(unaff_x19 + 0x80);
        *(uint *)(unaff_x19 + 0x1c0) = uVar2;
        *(undefined4 *)(unaff_x19 + 0x1c4) = *(undefined4 *)(unaff_x19 + 0x94);
        if (((*(long *)(unaff_x23 + 0x28) != 0) &&
            (lVar31 = *(long *)(*(long *)(unaff_x23 + 0x28) + 0x368), _in_stack_00000030 = auVar6,
            lVar31 != 0)) &&
           (lVar31 = *(long *)(lVar31 + 0x60), _in_stack_00000030 = auVar7, lVar31 != 0)) {
          if (*(uint *)(lVar31 + 0x18) <= uVar2) goto LAB_0359a71c;
          memmove((void *)(unaff_x19 + 0x1c8),(void *)(lVar31 + (long)(int)uVar2 * 0x50 + 0x20),0x50
                 );
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    ((void *)(unaff_x19 + 0x1c8),0);
          lVar31 = *(long *)(unaff_x19 + 0x30);
          if (lVar31 != 0) {
            if (*(long *)(lVar31 + 0x38) == 0) {
              FUN_0359a7d0(lVar31);
            }
            puVar18 = OVRPlugin_HandStatus_TypeInfo;
            if (*(long *)(lVar31 + 0xb0) != 0) {
              FUN_02215a88(*(long *)(lVar31 + 0xb0),*(undefined4 *)(unaff_x19 + 0x28),
                           &stack0x00000018,*(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
              auVar8._8_8_ = in_stack_00000038;
              auVar8._0_8_ = in_stack_00000030;
              if ((CONCAT44(uStack000000000000001c,uStack0000000000000018) != 0) &&
                 (lVar31 = *(long *)(unaff_x19 + 0x30), _in_stack_00000030 = auVar8, lVar31 != 0)) {
                fVar40 = *(float *)(CONCAT44(uStack000000000000001c,uStack0000000000000018) + 0x2c);
                if (*(long *)(lVar31 + 0x38) == 0) {
                  FUN_0359a7d0(lVar31);
                }
                if (*(long *)(lVar31 + 0xb0) != 0) {
                  FUN_02215a88(*(long *)(lVar31 + 0xb0),*(undefined4 *)(unaff_x19 + 0x28),
                               &stack0x00000018,*(undefined8 *)puVar18);
                  auVar9._8_8_ = in_stack_00000038;
                  auVar9._0_8_ = in_stack_00000030;
                  if ((CONCAT44(uStack000000000000001c,uStack0000000000000018) != 0) &&
                     (lVar31 = *(long *)(CONCAT44(uStack000000000000001c,uStack0000000000000018) +
                                        0x20), _in_stack_00000030 = auVar9, lVar31 != 0)) {
                    fVar33 = (float)FUN_03776ea8(lVar31,0);
                    *(undefined4 *)(unaff_x19 + 0x21c) = 0;
                    *(float *)(unaff_x19 + 0x218) = fVar40 * fVar33;
                    iVar19 = *(int *)(unaff_x19 + 0x3c);
                    if (DAT_041214a1 == '\0') {
                      FUN_01ab69ac(PTR_DAT_03cbdee0);
                      DAT_041214a1 = '\x01';
                    }
                    if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    auVar15._8_8_ = in_stack_00000038;
                    auVar15._0_8_ = in_stack_00000030;
                    auVar14._8_8_ = in_stack_00000038;
                    auVar14._0_8_ = in_stack_00000030;
                    auVar13._8_8_ = in_stack_00000038;
                    auVar13._0_8_ = in_stack_00000030;
                    auVar12._8_8_ = in_stack_00000038;
                    auVar12._0_8_ = in_stack_00000030;
                    auVar11._8_8_ = in_stack_00000038;
                    auVar11._0_8_ = in_stack_00000030;
                    auVar10._8_8_ = in_stack_00000038;
                    auVar10._0_8_ = in_stack_00000030;
                    iVar20 = -iVar19;
                    if (-1 < iVar19) {
                      iVar20 = iVar19;
                    }
                    *(float *)(unaff_x19 + 0x220) = 1.0 / (float)iVar20;
                    _in_stack_00000030 = auVar15;
                    if (*(float *)(unaff_x19 + 0x21c) <= 1.0 / (float)iVar20) {
LAB_0359a6b8:
                      fVar33 = *(float *)(unaff_x19 + 0x21c);
                      fVar40 = (float)FUN_036c4edc(0);
                      *(float *)(unaff_x19 + 0x21c) = fVar33 + fVar40;
                      *(undefined8 *)(unaff_x19 + 0x18) = 0;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                ((undefined8 *)(unaff_x19 + 0x18),0);
                      *(undefined4 *)(unaff_x19 + 0x10) = 2;
                      return 1;
                    }
                    *(undefined4 *)(unaff_x19 + 0x21c) = 0;
                    _in_stack_00000030 = auVar10;
                    if ((((unaff_x23 != 0) &&
                         (_in_stack_00000030 = auVar11, *(long *)(unaff_x23 + 0x28) != 0)) &&
                        (lVar31 = *(long *)(*(long *)(unaff_x23 + 0x28) + 0x368),
                        _in_stack_00000030 = auVar12, lVar31 != 0)) &&
                       (lVar31 = *(long *)(lVar31 + 0x38), _in_stack_00000030 = auVar13, lVar31 != 0
                       )) {
                      uVar2 = *(uint *)(unaff_x19 + 0x38);
                      _in_stack_00000030 = auVar15;
                      if (*(uint *)(lVar31 + 0x18) <= uVar2) goto LAB_0359a71c;
                      sVar1 = *(short *)(lVar31 + (long)(int)uVar2 * 0x178 + 0x20);
                      if ((sVar1 == 0x2026) || (sVar1 == 3)) {
                        _in_stack_00000030 = auVar14;
                        if (*(long *)(unaff_x23 + 0x20) != 0) {
                          uStack0000000000000018 = uVar2;
                          FUN_0219eaf8(*(long *)(unaff_x23 + 0x20),&stack0x00000018,
                                       *(undefined8 *)
                                        VRMShaders_RuntimeOnlyAwaitCaller_<>c__DisplayClass4_0_TypeInfo
                                      );
                          return 0;
                        }
                      }
                      else {
                        lVar31 = *(long *)(unaff_x19 + 0x30);
                        if (lVar31 != 0) {
                          if (*(long *)(lVar31 + 0x38) == 0) {
                            FUN_0359a7d0(lVar31);
                          }
                          if (*(long *)(lVar31 + 0xb0) != 0) {
                            FUN_02215a88(*(long *)(lVar31 + 0xb0),*(undefined4 *)(unaff_x19 + 0x40),
                                         &stack0x00000018,
                                         *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
                            auVar16._8_8_ = in_stack_00000038;
                            auVar16._0_8_ = in_stack_00000030;
                            lVar31 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
                            if ((lVar31 != 0) &&
                               (_in_stack_00000030 = auVar16, *(long *)(lVar31 + 0x20) != 0)) {
                              lVar32 = *(long *)(unaff_x19 + 0x1d8);
                              fVar33 = *(float *)(unaff_x19 + 0x168);
                              fVar43 = *(float *)(unaff_x19 + 0x174);
                              fVar44 = *(float *)(unaff_x19 + 0x188);
                              fVar42 = *(float *)(unaff_x19 + 0x218);
                              fVar41 = *(float *)(lVar31 + 0x2c);
                              fVar40 = (float)FUN_03776ea8(*(long *)(lVar31 + 0x20),0);
                              if (*(long *)(lVar31 + 0x20) != 0) {
                                FUN_03776e6c(&stack0x00000018,*(long *)(lVar31 + 0x20),0);
                                in_stack_00000040 =
                                     CONCAT44(uStack000000000000001c,uStack0000000000000018);
                                in_stack_00000048 = in_stack_00000020;
                                in_stack_00000050 = in_stack_00000028;
                                fVar34 = (float)FUN_03776ca4(&stack0x00000040,0);
                                if (*(long *)(lVar31 + 0x20) != 0) {
                                  FUN_03776e6c(&stack0x00000018,*(long *)(lVar31 + 0x20),0);
                                  in_stack_00000040 =
                                       CONCAT44(uStack000000000000001c,uStack0000000000000018);
                                  in_stack_00000048 = in_stack_00000020;
                                  in_stack_00000050 = in_stack_00000028;
                                  fVar35 = (float)FUN_03776cac(&stack0x00000040,0);
                                  if (*(long *)(lVar31 + 0x20) != 0) {
                                    FUN_03776e6c(&stack0x00000018,*(long *)(lVar31 + 0x20),0);
                                    in_stack_00000040 =
                                         CONCAT44(uStack000000000000001c,uStack0000000000000018);
                                    in_stack_00000048 = in_stack_00000020;
                                    in_stack_00000050 = in_stack_00000028;
                                    fVar36 = (float)FUN_03776c9c(&stack0x00000040,0);
                                    if (*(long *)(lVar31 + 0x20) != 0) {
                                      FUN_03776e6c(&stack0x00000018,*(long *)(lVar31 + 0x20),0);
                                      in_stack_00000040 =
                                           CONCAT44(uStack000000000000001c,uStack0000000000000018);
                                      in_stack_00000048 = in_stack_00000020;
                                      in_stack_00000050 = in_stack_00000028;
                                      fVar37 = (float)FUN_03776cac(&stack0x00000040,0);
                                      if (*(long *)(lVar31 + 0x20) != 0) {
                                        FUN_03776e6c(&stack0x00000018,*(long *)(lVar31 + 0x20),0);
                                        in_stack_00000040 =
                                             CONCAT44(uStack000000000000001c,uStack0000000000000018)
                                        ;
                                        in_stack_00000048 = in_stack_00000020;
                                        in_stack_00000050 = in_stack_00000028;
                                        fVar38 = (float)FUN_03776ca4(&stack0x00000040,0);
                                        if (*(long *)(lVar31 + 0x20) != 0) {
                                          FUN_03776e6c(&stack0x00000018,*(long *)(lVar31 + 0x20),0);
                                          in_stack_00000040 =
                                               CONCAT44(uStack000000000000001c,
                                                        uStack0000000000000018);
                                          in_stack_00000048 = in_stack_00000020;
                                          in_stack_00000050 = in_stack_00000028;
                                          fVar39 = (float)FUN_03776c94(&stack0x00000040,0);
                                          auVar17._8_8_ = in_stack_00000038;
                                          auVar17._0_8_ = in_stack_00000030;
                                          if (lVar32 != 0) {
                                            _in_stack_00000030 = auVar17;
                                            if (*(uint *)(unaff_x19 + 0x1c4) <
                                                *(uint *)(lVar32 + 0x18)) {
                                              fVar40 = (fVar44 / fVar42) * fVar41 * fVar40;
                                              lVar30 = lVar32 + (long)(int)*(uint *)(unaff_x19 +
                                                                                    0x1c4) * 0xc;
                                              fVar42 = fVar33 + fVar40 * fVar34;
                                              fVar41 = fVar43 + fVar40 * (fVar35 - fVar36);
                                              *(float *)(lVar30 + 0x20) = fVar42;
                                              *(float *)(lVar30 + 0x24) = fVar41;
                                              *(undefined4 *)(lVar30 + 0x28) = 0;
                                              uVar2 = *(int *)(unaff_x19 + 0x1c4) + 1;
                                              if (uVar2 < *(uint *)(lVar32 + 0x18)) {
                                                fVar43 = fVar43 + fVar40 * fVar37;
                                                lVar30 = lVar32 + (long)(int)uVar2 * 0xc;
                                                *(float *)(lVar30 + 0x20) = fVar42;
                                                *(float *)(lVar30 + 0x24) = fVar43;
                                                *(undefined4 *)(lVar30 + 0x28) = 0;
                                                uVar2 = *(int *)(unaff_x19 + 0x1c4) + 2;
                                                if (uVar2 < *(uint *)(lVar32 + 0x18)) {
                                                  lVar30 = lVar32 + (long)(int)uVar2 * 0xc;
                                                  fVar33 = fVar33 + fVar40 * (fVar38 + fVar39);
                                                  *(float *)(lVar30 + 0x20) = fVar33;
                                                  *(float *)(lVar30 + 0x24) = fVar43;
                                                  *(undefined4 *)(lVar30 + 0x28) = 0;
                                                  uVar2 = *(int *)(unaff_x19 + 0x1c4) + 3;
                                                  if (uVar2 < *(uint *)(lVar32 + 0x18)) {
                                                    lVar30 = lVar32 + (long)(int)uVar2 * 0xc;
                                                    *(float *)(lVar30 + 0x20) = fVar33;
                                                    *(float *)(lVar30 + 0x24) = fVar41;
                                                    *(undefined4 *)(lVar30 + 0x28) = 0;
                                                    if (*(long *)(lVar31 + 0x20) != 0) {
                                                      lVar30 = *(long *)(unaff_x19 + 0x1f0);
                                                      _in_stack_00000030 =
                                                           FUN_03776e94(*(long *)(lVar31 + 0x20),0);
                                                      if (*(int *)(*(long *)
                                                  System_Runtime_Serialization_Formatters_Binary_ObjectReader_TypeNAssembly_TypeInfo
                                                  + 0xe0) == 0) {
                                                    thunk_FUN_01a58e78();
                                                  }
                                                  iVar19 = FUN_03776a58(&stack0x00000030,0);
                                                  if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                                                     (plVar29 = *(long **)(*(long *)(unaff_x19 +
                                                                                    0x30) + 0xa8),
                                                     plVar29 != (long *)0x0)) {
                                                    iVar20 = (**(code **)(*plVar29 + 0x188))
                                                                       (plVar29,*(undefined8 *)
                                                                                 (*plVar29 + 400));
                                                    if (*(long *)(lVar31 + 0x20) != 0) {
                                                      auVar45 = FUN_03776e94(*(long *)(lVar31 + 0x20
                                                                                      ),0);
                                                      _in_stack_00000030 = auVar45;
                                                      iVar21 = FUN_03776a60(&stack0x00000030,0);
                                                      if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                                                         (plVar29 = *(long **)(*(long *)(unaff_x19 +
                                                                                        0x30) + 0xa8
                                                                              ),
                                                         plVar29 != (long *)0x0)) {
                                                        iVar22 = (**(code **)(*plVar29 + 0x1a8))
                                                                           (plVar29,*(undefined8 *)
                                                                                     (*plVar29 +
                                                                                     0x1b0));
                                                        if (*(long *)(lVar31 + 0x20) != 0) {
                                                          auVar45 = FUN_03776e94(*(long *)(lVar31 + 
                                                  0x20),0);
                                                  _in_stack_00000030 = auVar45;
                                                  iVar23 = FUN_03776a60(&stack0x00000030,0);
                                                  if (*(long *)(lVar31 + 0x20) != 0) {
                                                    auVar45 = FUN_03776e94(*(long *)(lVar31 + 0x20),
                                                                           0);
                                                    _in_stack_00000030 = auVar45;
                                                    iVar24 = FUN_03776a70(&stack0x00000030,0);
                                                    if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                                                       (plVar29 = *(long **)(*(long *)(unaff_x19 +
                                                                                      0x30) + 0xa8),
                                                       plVar29 != (long *)0x0)) {
                                                      iVar25 = (**(code **)(*plVar29 + 0x1a8))
                                                                         (plVar29,*(undefined8 *)
                                                                                   (*plVar29 + 0x1b0
                                                                                   ));
                                                      if (*(long *)(lVar31 + 0x20) != 0) {
                                                        auVar45 = FUN_03776e94(*(long *)(lVar31 + 
                                                  0x20),0);
                                                  _in_stack_00000030 = auVar45;
                                                  iVar26 = FUN_03776a58(&stack0x00000030,0);
                                                  if (*(long *)(lVar31 + 0x20) != 0) {
                                                    auVar45 = FUN_03776e94(*(long *)(lVar31 + 0x20),
                                                                           0);
                                                    _in_stack_00000030 = auVar45;
                                                    iVar27 = FUN_03776a68(&stack0x00000030,0);
                                                    if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                                                       (plVar29 = *(long **)(*(long *)(unaff_x19 +
                                                                                      0x30) + 0xa8),
                                                       plVar29 != (long *)0x0)) {
                                                      iVar28 = (**(code **)(*plVar29 + 0x188))
                                                                         (plVar29,*(undefined8 *)
                                                                                   (*plVar29 + 400))
                                                      ;
                                                      if (lVar30 != 0) {
                                                        if (*(uint *)(unaff_x19 + 0x1c4) <
                                                            *(uint *)(lVar30 + 0x18)) {
                                                          lVar31 = lVar30 + (long)(int)*(uint *)(
                                                  unaff_x19 + 0x1c4) * 8;
                                                  *(float *)(lVar31 + 0x20) =
                                                       (float)iVar19 / (float)iVar20;
                                                  *(float *)(lVar31 + 0x24) =
                                                       (float)iVar21 / (float)iVar22;
                                                  uVar2 = *(int *)(unaff_x19 + 0x1c4) + 1;
                                                  if (uVar2 < *(uint *)(lVar30 + 0x18)) {
                                                    lVar31 = lVar30 + (long)(int)uVar2 * 8;
                                                    fVar40 = (float)(iVar24 + iVar23) /
                                                             (float)iVar25;
                                                    *(float *)(lVar31 + 0x20) =
                                                         (float)iVar19 / (float)iVar20;
                                                    *(float *)(lVar31 + 0x24) = fVar40;
                                                    uVar2 = *(int *)(unaff_x19 + 0x1c4) + 2;
                                                    if (uVar2 < *(uint *)(lVar30 + 0x18)) {
                                                      lVar31 = lVar30 + (long)(int)uVar2 * 8;
                                                      fVar33 = (float)(iVar27 + iVar26) /
                                                               (float)iVar28;
                                                      *(float *)(lVar31 + 0x20) = fVar33;
                                                      *(float *)(lVar31 + 0x24) = fVar40;
                                                      uVar2 = *(int *)(unaff_x19 + 0x1c4) + 3;
                                                      if (uVar2 < *(uint *)(lVar30 + 0x18)) {
                                                        lVar31 = lVar30 + (long)(int)uVar2 * 8;
                                                        *(float *)(lVar31 + 0x20) = fVar33;
                                                        *(float *)(lVar31 + 0x24) =
                                                             (float)iVar21 / (float)iVar22;
                                                        if (*(long *)(unaff_x19 + 0x1c8) != 0) {
                                                          FUN_036a460c(*(long *)(unaff_x19 + 0x1c8),
                                                                       lVar32,0);
                                                          if (*(long *)(unaff_x19 + 0x1c8) != 0) {
                                                            FUN_036a4810(*(long *)(unaff_x19 + 0x1c8
                                                                                  ),lVar30,0);
                                                            plVar29 = *(long **)(unaff_x23 + 0x28);
                                                            if (plVar29 != (long *)0x0) {
                                                              (**(code **)(*plVar29 + 0x7b8))
                                                                        (plVar29,*(undefined8 *)
                                                                                  (unaff_x19 + 0x1c8
                                                                                  ),
                                                                         *(undefined4 *)
                                                                          (unaff_x19 + 0x1c0),
                                                                         *(undefined8 *)
                                                                          (*plVar29 + 0x7c0));
                                                              iVar19 = *(int *)(unaff_x19 + 0x40);
                                                              if (*(int *)(unaff_x19 + 0x3c) < 1) {
                                                                if (*(int *)(unaff_x19 + 0x28) <
                                                                    iVar19) {
                                                                  iVar19 = iVar19 + -1;
                                                                }
                                                                else {
                                                                  iVar19 = *(int *)(unaff_x19 + 0x2c
                                                                                   );
                                                                }
                                                              }
                                                              else if (iVar19 < *(int *)(unaff_x19 +
                                                                                        0x2c)) {
                                                                iVar19 = iVar19 + 1;
                                                              }
                                                              else {
                                                                iVar19 = *(int *)(unaff_x19 + 0x28);
                                                              }
                                                              *(int *)(unaff_x19 + 0x40) = iVar19;
                                                              goto LAB_0359a6b8;
                                                            }
                                                          }
                                                        }
                                                        goto LAB_0359a718;
                                                      }
                                                    }
                                                  }
                                                  }
                                                  goto LAB_0359a71c;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  goto LAB_0359a718;
                                                  }
                                                }
                                              }
                                            }
                                            goto LAB_0359a71c;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0359a718:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


