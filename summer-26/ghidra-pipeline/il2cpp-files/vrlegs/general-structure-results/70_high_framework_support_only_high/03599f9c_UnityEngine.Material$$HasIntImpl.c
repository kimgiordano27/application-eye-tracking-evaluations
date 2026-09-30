/*
FUNCTION_NAME: UnityEngine.Material$$HasIntImpl
ENTRY_POINT: 03599f9c
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


undefined8 UnityEngine_Material__HasIntImpl(long param_1)

{
  uint uVar1;
  short sVar2;
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
  undefined *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  long *plVar25;
  long lVar26;
  long lVar27;
  long unaff_x19;
  long lVar28;
  long unaff_x23;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  uint uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  
  auVar3._8_8_ = in_stack_00000038;
  auVar3._0_8_ = in_stack_00000030;
  auVar41._8_8_ = in_stack_00000038;
  auVar41._0_8_ = in_stack_00000030;
  *(uint *)(unaff_x19 + 0x1c0) = (uint)param_1;
  *(undefined4 *)(unaff_x19 + 0x1c4) = *(undefined4 *)(unaff_x19 + 0x94);
  if (((*(long *)(unaff_x23 + 0x28) != 0) &&
      (lVar27 = *(long *)(*(long *)(unaff_x23 + 0x28) + 0x368), _in_stack_00000030 = auVar41,
      lVar27 != 0)) && (lVar27 = *(long *)(lVar27 + 0x60), _in_stack_00000030 = auVar3, lVar27 != 0)
     ) {
    if (*(uint *)(lVar27 + 0x18) <= (uint)param_1) goto LAB_0359a71c;
    memmove((void *)(unaff_x19 + 0x1c8),(void *)(lVar27 + param_1 * 0x50 + 0x20),0x50);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists((void *)(unaff_x19 + 0x1c8),0)
    ;
    lVar27 = *(long *)(unaff_x19 + 0x30);
    if (lVar27 != 0) {
      if (*(long *)(lVar27 + 0x38) == 0) {
        FUN_0359a7d0(lVar27);
      }
      puVar14 = OVRPlugin_HandStatus_TypeInfo;
      if (*(long *)(lVar27 + 0xb0) != 0) {
        FUN_02215a88(*(long *)(lVar27 + 0xb0),*(undefined4 *)(unaff_x19 + 0x28),&stack0x00000018,
                     *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
        auVar4._8_8_ = in_stack_00000038;
        auVar4._0_8_ = in_stack_00000030;
        if ((CONCAT44(uStack000000000000001c,uStack0000000000000018) != 0) &&
           (lVar27 = *(long *)(unaff_x19 + 0x30), _in_stack_00000030 = auVar4, lVar27 != 0)) {
          fVar36 = *(float *)(CONCAT44(uStack000000000000001c,uStack0000000000000018) + 0x2c);
          if (*(long *)(lVar27 + 0x38) == 0) {
            FUN_0359a7d0(lVar27);
          }
          if (*(long *)(lVar27 + 0xb0) != 0) {
            FUN_02215a88(*(long *)(lVar27 + 0xb0),*(undefined4 *)(unaff_x19 + 0x28),&stack0x00000018
                         ,*(undefined8 *)puVar14);
            auVar5._8_8_ = in_stack_00000038;
            auVar5._0_8_ = in_stack_00000030;
            if ((CONCAT44(uStack000000000000001c,uStack0000000000000018) != 0) &&
               (lVar27 = *(long *)(CONCAT44(uStack000000000000001c,uStack0000000000000018) + 0x20),
               _in_stack_00000030 = auVar5, lVar27 != 0)) {
              fVar29 = (float)FUN_03776ea8(lVar27,0);
              *(undefined4 *)(unaff_x19 + 0x21c) = 0;
              *(float *)(unaff_x19 + 0x218) = fVar36 * fVar29;
              iVar15 = *(int *)(unaff_x19 + 0x3c);
              if (DAT_041214a1 == '\0') {
                FUN_01ab69ac(PTR_DAT_03cbdee0);
                DAT_041214a1 = '\x01';
              }
              if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              auVar11._8_8_ = in_stack_00000038;
              auVar11._0_8_ = in_stack_00000030;
              auVar10._8_8_ = in_stack_00000038;
              auVar10._0_8_ = in_stack_00000030;
              auVar9._8_8_ = in_stack_00000038;
              auVar9._0_8_ = in_stack_00000030;
              auVar8._8_8_ = in_stack_00000038;
              auVar8._0_8_ = in_stack_00000030;
              auVar7._8_8_ = in_stack_00000038;
              auVar7._0_8_ = in_stack_00000030;
              auVar6._8_8_ = in_stack_00000038;
              auVar6._0_8_ = in_stack_00000030;
              iVar16 = -iVar15;
              if (-1 < iVar15) {
                iVar16 = iVar15;
              }
              *(float *)(unaff_x19 + 0x220) = 1.0 / (float)iVar16;
              _in_stack_00000030 = auVar11;
              if (*(float *)(unaff_x19 + 0x21c) <= 1.0 / (float)iVar16) {
LAB_0359a6b8:
                fVar29 = *(float *)(unaff_x19 + 0x21c);
                fVar36 = (float)FUN_036c4edc(0);
                *(float *)(unaff_x19 + 0x21c) = fVar29 + fVar36;
                *(undefined8 *)(unaff_x19 + 0x18) = 0;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          ((undefined8 *)(unaff_x19 + 0x18),0);
                *(undefined4 *)(unaff_x19 + 0x10) = 2;
                return 1;
              }
              *(undefined4 *)(unaff_x19 + 0x21c) = 0;
              _in_stack_00000030 = auVar6;
              if ((((unaff_x23 != 0) &&
                   (_in_stack_00000030 = auVar7, *(long *)(unaff_x23 + 0x28) != 0)) &&
                  (lVar27 = *(long *)(*(long *)(unaff_x23 + 0x28) + 0x368),
                  _in_stack_00000030 = auVar8, lVar27 != 0)) &&
                 (lVar27 = *(long *)(lVar27 + 0x38), _in_stack_00000030 = auVar9, lVar27 != 0)) {
                uVar1 = *(uint *)(unaff_x19 + 0x38);
                _in_stack_00000030 = auVar11;
                if (*(uint *)(lVar27 + 0x18) <= uVar1) goto LAB_0359a71c;
                sVar2 = *(short *)(lVar27 + (long)(int)uVar1 * 0x178 + 0x20);
                if ((sVar2 == 0x2026) || (sVar2 == 3)) {
                  _in_stack_00000030 = auVar10;
                  if (*(long *)(unaff_x23 + 0x20) != 0) {
                    uStack0000000000000018 = uVar1;
                    FUN_0219eaf8(*(long *)(unaff_x23 + 0x20),&stack0x00000018,
                                 *(undefined8 *)
                                  VRMShaders_RuntimeOnlyAwaitCaller_<>c__DisplayClass4_0_TypeInfo);
                    return 0;
                  }
                }
                else {
                  lVar27 = *(long *)(unaff_x19 + 0x30);
                  if (lVar27 != 0) {
                    if (*(long *)(lVar27 + 0x38) == 0) {
                      FUN_0359a7d0(lVar27);
                    }
                    if (*(long *)(lVar27 + 0xb0) != 0) {
                      FUN_02215a88(*(long *)(lVar27 + 0xb0),*(undefined4 *)(unaff_x19 + 0x40),
                                   &stack0x00000018,*(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
                      auVar12._8_8_ = in_stack_00000038;
                      auVar12._0_8_ = in_stack_00000030;
                      lVar27 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
                      if ((lVar27 != 0) &&
                         (_in_stack_00000030 = auVar12, *(long *)(lVar27 + 0x20) != 0)) {
                        lVar28 = *(long *)(unaff_x19 + 0x1d8);
                        fVar29 = *(float *)(unaff_x19 + 0x168);
                        fVar39 = *(float *)(unaff_x19 + 0x174);
                        fVar40 = *(float *)(unaff_x19 + 0x188);
                        fVar38 = *(float *)(unaff_x19 + 0x218);
                        fVar37 = *(float *)(lVar27 + 0x2c);
                        fVar36 = (float)FUN_03776ea8(*(long *)(lVar27 + 0x20),0);
                        if (*(long *)(lVar27 + 0x20) != 0) {
                          FUN_03776e6c(&stack0x00000018,*(long *)(lVar27 + 0x20),0);
                          in_stack_00000040 =
                               CONCAT44(uStack000000000000001c,uStack0000000000000018);
                          in_stack_00000048 = in_stack_00000020;
                          in_stack_00000050 = in_stack_00000028;
                          fVar30 = (float)FUN_03776ca4(&stack0x00000040,0);
                          if (*(long *)(lVar27 + 0x20) != 0) {
                            FUN_03776e6c(&stack0x00000018,*(long *)(lVar27 + 0x20),0);
                            in_stack_00000040 =
                                 CONCAT44(uStack000000000000001c,uStack0000000000000018);
                            in_stack_00000048 = in_stack_00000020;
                            in_stack_00000050 = in_stack_00000028;
                            fVar31 = (float)FUN_03776cac(&stack0x00000040,0);
                            if (*(long *)(lVar27 + 0x20) != 0) {
                              FUN_03776e6c(&stack0x00000018,*(long *)(lVar27 + 0x20),0);
                              in_stack_00000040 =
                                   CONCAT44(uStack000000000000001c,uStack0000000000000018);
                              in_stack_00000048 = in_stack_00000020;
                              in_stack_00000050 = in_stack_00000028;
                              fVar32 = (float)FUN_03776c9c(&stack0x00000040,0);
                              if (*(long *)(lVar27 + 0x20) != 0) {
                                FUN_03776e6c(&stack0x00000018,*(long *)(lVar27 + 0x20),0);
                                in_stack_00000040 =
                                     CONCAT44(uStack000000000000001c,uStack0000000000000018);
                                in_stack_00000048 = in_stack_00000020;
                                in_stack_00000050 = in_stack_00000028;
                                fVar33 = (float)FUN_03776cac(&stack0x00000040,0);
                                if (*(long *)(lVar27 + 0x20) != 0) {
                                  FUN_03776e6c(&stack0x00000018,*(long *)(lVar27 + 0x20),0);
                                  in_stack_00000040 =
                                       CONCAT44(uStack000000000000001c,uStack0000000000000018);
                                  in_stack_00000048 = in_stack_00000020;
                                  in_stack_00000050 = in_stack_00000028;
                                  fVar34 = (float)FUN_03776ca4(&stack0x00000040,0);
                                  if (*(long *)(lVar27 + 0x20) != 0) {
                                    FUN_03776e6c(&stack0x00000018,*(long *)(lVar27 + 0x20),0);
                                    in_stack_00000040 =
                                         CONCAT44(uStack000000000000001c,uStack0000000000000018);
                                    in_stack_00000048 = in_stack_00000020;
                                    in_stack_00000050 = in_stack_00000028;
                                    fVar35 = (float)FUN_03776c94(&stack0x00000040,0);
                                    auVar13._8_8_ = in_stack_00000038;
                                    auVar13._0_8_ = in_stack_00000030;
                                    if (lVar28 != 0) {
                                      _in_stack_00000030 = auVar13;
                                      if (*(uint *)(unaff_x19 + 0x1c4) < *(uint *)(lVar28 + 0x18)) {
                                        fVar36 = (fVar40 / fVar38) * fVar37 * fVar36;
                                        lVar26 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x1c4) *
                                                          0xc;
                                        fVar38 = fVar29 + fVar36 * fVar30;
                                        fVar37 = fVar39 + fVar36 * (fVar31 - fVar32);
                                        *(float *)(lVar26 + 0x20) = fVar38;
                                        *(float *)(lVar26 + 0x24) = fVar37;
                                        *(undefined4 *)(lVar26 + 0x28) = 0;
                                        uVar1 = *(int *)(unaff_x19 + 0x1c4) + 1;
                                        if (uVar1 < *(uint *)(lVar28 + 0x18)) {
                                          fVar39 = fVar39 + fVar36 * fVar33;
                                          lVar26 = lVar28 + (long)(int)uVar1 * 0xc;
                                          *(float *)(lVar26 + 0x20) = fVar38;
                                          *(float *)(lVar26 + 0x24) = fVar39;
                                          *(undefined4 *)(lVar26 + 0x28) = 0;
                                          uVar1 = *(int *)(unaff_x19 + 0x1c4) + 2;
                                          if (uVar1 < *(uint *)(lVar28 + 0x18)) {
                                            lVar26 = lVar28 + (long)(int)uVar1 * 0xc;
                                            fVar29 = fVar29 + fVar36 * (fVar34 + fVar35);
                                            *(float *)(lVar26 + 0x20) = fVar29;
                                            *(float *)(lVar26 + 0x24) = fVar39;
                                            *(undefined4 *)(lVar26 + 0x28) = 0;
                                            uVar1 = *(int *)(unaff_x19 + 0x1c4) + 3;
                                            if (uVar1 < *(uint *)(lVar28 + 0x18)) {
                                              lVar26 = lVar28 + (long)(int)uVar1 * 0xc;
                                              *(float *)(lVar26 + 0x20) = fVar29;
                                              *(float *)(lVar26 + 0x24) = fVar37;
                                              *(undefined4 *)(lVar26 + 0x28) = 0;
                                              if (*(long *)(lVar27 + 0x20) != 0) {
                                                lVar26 = *(long *)(unaff_x19 + 0x1f0);
                                                _in_stack_00000030 =
                                                     FUN_03776e94(*(long *)(lVar27 + 0x20),0);
                                                if (*(int *)(*(long *)
                                                  System_Runtime_Serialization_Formatters_Binary_ObjectReader_TypeNAssembly_TypeInfo
                                                  + 0xe0) == 0) {
                                                  thunk_FUN_01a58e78();
                                                }
                                                iVar15 = FUN_03776a58(&stack0x00000030,0);
                                                if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                                                   (plVar25 = *(long **)(*(long *)(unaff_x19 + 0x30)
                                                                        + 0xa8),
                                                   plVar25 != (long *)0x0)) {
                                                  iVar16 = (**(code **)(*plVar25 + 0x188))
                                                                     (plVar25,*(undefined8 *)
                                                                               (*plVar25 + 400));
                                                  if (*(long *)(lVar27 + 0x20) != 0) {
                                                    auVar41 = FUN_03776e94(*(long *)(lVar27 + 0x20),
                                                                           0);
                                                    _in_stack_00000030 = auVar41;
                                                    iVar17 = FUN_03776a60(&stack0x00000030,0);
                                                    if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                                                       (plVar25 = *(long **)(*(long *)(unaff_x19 +
                                                                                      0x30) + 0xa8),
                                                       plVar25 != (long *)0x0)) {
                                                      iVar18 = (**(code **)(*plVar25 + 0x1a8))
                                                                         (plVar25,*(undefined8 *)
                                                                                   (*plVar25 + 0x1b0
                                                                                   ));
                                                      if (*(long *)(lVar27 + 0x20) != 0) {
                                                        auVar41 = FUN_03776e94(*(long *)(lVar27 + 
                                                  0x20),0);
                                                  _in_stack_00000030 = auVar41;
                                                  iVar19 = FUN_03776a60(&stack0x00000030,0);
                                                  if (*(long *)(lVar27 + 0x20) != 0) {
                                                    auVar41 = FUN_03776e94(*(long *)(lVar27 + 0x20),
                                                                           0);
                                                    _in_stack_00000030 = auVar41;
                                                    iVar20 = FUN_03776a70(&stack0x00000030,0);
                                                    if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                                                       (plVar25 = *(long **)(*(long *)(unaff_x19 +
                                                                                      0x30) + 0xa8),
                                                       plVar25 != (long *)0x0)) {
                                                      iVar21 = (**(code **)(*plVar25 + 0x1a8))
                                                                         (plVar25,*(undefined8 *)
                                                                                   (*plVar25 + 0x1b0
                                                                                   ));
                                                      if (*(long *)(lVar27 + 0x20) != 0) {
                                                        auVar41 = FUN_03776e94(*(long *)(lVar27 + 
                                                  0x20),0);
                                                  _in_stack_00000030 = auVar41;
                                                  iVar22 = FUN_03776a58(&stack0x00000030,0);
                                                  if (*(long *)(lVar27 + 0x20) != 0) {
                                                    auVar41 = FUN_03776e94(*(long *)(lVar27 + 0x20),
                                                                           0);
                                                    _in_stack_00000030 = auVar41;
                                                    iVar23 = FUN_03776a68(&stack0x00000030,0);
                                                    if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                                                       (plVar25 = *(long **)(*(long *)(unaff_x19 +
                                                                                      0x30) + 0xa8),
                                                       plVar25 != (long *)0x0)) {
                                                      iVar24 = (**(code **)(*plVar25 + 0x188))
                                                                         (plVar25,*(undefined8 *)
                                                                                   (*plVar25 + 400))
                                                      ;
                                                      if (lVar26 != 0) {
                                                        if (*(uint *)(unaff_x19 + 0x1c4) <
                                                            *(uint *)(lVar26 + 0x18)) {
                                                          lVar27 = lVar26 + (long)(int)*(uint *)(
                                                  unaff_x19 + 0x1c4) * 8;
                                                  *(float *)(lVar27 + 0x20) =
                                                       (float)iVar15 / (float)iVar16;
                                                  *(float *)(lVar27 + 0x24) =
                                                       (float)iVar17 / (float)iVar18;
                                                  uVar1 = *(int *)(unaff_x19 + 0x1c4) + 1;
                                                  if (uVar1 < *(uint *)(lVar26 + 0x18)) {
                                                    lVar27 = lVar26 + (long)(int)uVar1 * 8;
                                                    fVar36 = (float)(iVar20 + iVar19) /
                                                             (float)iVar21;
                                                    *(float *)(lVar27 + 0x20) =
                                                         (float)iVar15 / (float)iVar16;
                                                    *(float *)(lVar27 + 0x24) = fVar36;
                                                    uVar1 = *(int *)(unaff_x19 + 0x1c4) + 2;
                                                    if (uVar1 < *(uint *)(lVar26 + 0x18)) {
                                                      lVar27 = lVar26 + (long)(int)uVar1 * 8;
                                                      fVar29 = (float)(iVar23 + iVar22) /
                                                               (float)iVar24;
                                                      *(float *)(lVar27 + 0x20) = fVar29;
                                                      *(float *)(lVar27 + 0x24) = fVar36;
                                                      uVar1 = *(int *)(unaff_x19 + 0x1c4) + 3;
                                                      if (uVar1 < *(uint *)(lVar26 + 0x18)) {
                                                        lVar27 = lVar26 + (long)(int)uVar1 * 8;
                                                        *(float *)(lVar27 + 0x20) = fVar29;
                                                        *(float *)(lVar27 + 0x24) =
                                                             (float)iVar17 / (float)iVar18;
                                                        if (*(long *)(unaff_x19 + 0x1c8) != 0) {
                                                          FUN_036a460c(*(long *)(unaff_x19 + 0x1c8),
                                                                       lVar28,0);
                                                          if (*(long *)(unaff_x19 + 0x1c8) != 0) {
                                                            FUN_036a4810(*(long *)(unaff_x19 + 0x1c8
                                                                                  ),lVar26,0);
                                                            plVar25 = *(long **)(unaff_x23 + 0x28);
                                                            if (plVar25 != (long *)0x0) {
                                                              (**(code **)(*plVar25 + 0x7b8))
                                                                        (plVar25,*(undefined8 *)
                                                                                  (unaff_x19 + 0x1c8
                                                                                  ),
                                                                         *(undefined4 *)
                                                                          (unaff_x19 + 0x1c0),
                                                                         *(undefined8 *)
                                                                          (*plVar25 + 0x7c0));
                                                              iVar15 = *(int *)(unaff_x19 + 0x40);
                                                              if (*(int *)(unaff_x19 + 0x3c) < 1) {
                                                                if (*(int *)(unaff_x19 + 0x28) <
                                                                    iVar15) {
                                                                  iVar15 = iVar15 + -1;
                                                                }
                                                                else {
                                                                  iVar15 = *(int *)(unaff_x19 + 0x2c
                                                                                   );
                                                                }
                                                              }
                                                              else if (iVar15 < *(int *)(unaff_x19 +
                                                                                        0x2c)) {
                                                                iVar15 = iVar15 + 1;
                                                              }
                                                              else {
                                                                iVar15 = *(int *)(unaff_x19 + 0x28);
                                                              }
                                                              *(int *)(unaff_x19 + 0x40) = iVar15;
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
LAB_0359a71c:
                    /* WARNING: Subroutine does not return */
                                      FUN_01ab6c44();
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


