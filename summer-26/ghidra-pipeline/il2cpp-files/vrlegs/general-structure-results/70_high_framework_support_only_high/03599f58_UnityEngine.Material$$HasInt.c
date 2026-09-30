/*
FUNCTION_NAME: UnityEngine.Material$$HasInt
ENTRY_POINT: 03599f58
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


undefined8 UnityEngine_Material__HasInt(long param_1)

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
  undefined *puVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  long *plVar26;
  long lVar27;
  long lVar28;
  long unaff_x19;
  long lVar29;
  long unaff_x23;
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
  float fVar41;
  undefined1 auVar42 [16];
  uint uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  
  auVar42._8_8_ = in_stack_00000038;
  auVar42._0_8_ = in_stack_00000030;
  if ((param_1 != 0) &&
     (lVar27 = *(long *)(param_1 + 0x38), _in_stack_00000030 = auVar42, lVar27 != 0)) {
    if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x38)) {
LAB_0359a71c:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    memmove((void *)(unaff_x19 + 0x48),
            (void *)(lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x38) * 0x178 + 0x20),0x178);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x58,0);
    auVar4._8_8_ = in_stack_00000038;
    auVar4._0_8_ = in_stack_00000030;
    auVar3._8_8_ = in_stack_00000038;
    auVar3._0_8_ = in_stack_00000030;
    uVar2 = *(uint *)(unaff_x19 + 0x80);
    *(uint *)(unaff_x19 + 0x1c0) = uVar2;
    *(undefined4 *)(unaff_x19 + 0x1c4) = *(undefined4 *)(unaff_x19 + 0x94);
    if (((*(long *)(unaff_x23 + 0x28) != 0) &&
        (lVar27 = *(long *)(*(long *)(unaff_x23 + 0x28) + 0x368), _in_stack_00000030 = auVar3,
        lVar27 != 0)) &&
       (lVar27 = *(long *)(lVar27 + 0x60), _in_stack_00000030 = auVar4, lVar27 != 0)) {
      if (*(uint *)(lVar27 + 0x18) <= uVar2) goto LAB_0359a71c;
      memmove((void *)(unaff_x19 + 0x1c8),(void *)(lVar27 + (long)(int)uVar2 * 0x50 + 0x20),0x50);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((void *)(unaff_x19 + 0x1c8),0);
      lVar27 = *(long *)(unaff_x19 + 0x30);
      if (lVar27 != 0) {
        if (*(long *)(lVar27 + 0x38) == 0) {
          FUN_0359a7d0(lVar27);
        }
        puVar15 = OVRPlugin_HandStatus_TypeInfo;
        if (*(long *)(lVar27 + 0xb0) != 0) {
          FUN_02215a88(*(long *)(lVar27 + 0xb0),*(undefined4 *)(unaff_x19 + 0x28),&stack0x00000018,
                       *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
          auVar5._8_8_ = in_stack_00000038;
          auVar5._0_8_ = in_stack_00000030;
          if ((CONCAT44(uStack000000000000001c,uStack0000000000000018) != 0) &&
             (lVar27 = *(long *)(unaff_x19 + 0x30), _in_stack_00000030 = auVar5, lVar27 != 0)) {
            fVar37 = *(float *)(CONCAT44(uStack000000000000001c,uStack0000000000000018) + 0x2c);
            if (*(long *)(lVar27 + 0x38) == 0) {
              FUN_0359a7d0(lVar27);
            }
            if (*(long *)(lVar27 + 0xb0) != 0) {
              FUN_02215a88(*(long *)(lVar27 + 0xb0),*(undefined4 *)(unaff_x19 + 0x28),
                           &stack0x00000018,*(undefined8 *)puVar15);
              auVar6._8_8_ = in_stack_00000038;
              auVar6._0_8_ = in_stack_00000030;
              if ((CONCAT44(uStack000000000000001c,uStack0000000000000018) != 0) &&
                 (lVar27 = *(long *)(CONCAT44(uStack000000000000001c,uStack0000000000000018) + 0x20)
                 , _in_stack_00000030 = auVar6, lVar27 != 0)) {
                fVar30 = (float)FUN_03776ea8(lVar27,0);
                *(undefined4 *)(unaff_x19 + 0x21c) = 0;
                *(float *)(unaff_x19 + 0x218) = fVar37 * fVar30;
                iVar16 = *(int *)(unaff_x19 + 0x3c);
                if (DAT_041214a1 == '\0') {
                  FUN_01ab69ac(PTR_DAT_03cbdee0);
                  DAT_041214a1 = '\x01';
                }
                if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                auVar12._8_8_ = in_stack_00000038;
                auVar12._0_8_ = in_stack_00000030;
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
                iVar17 = -iVar16;
                if (-1 < iVar16) {
                  iVar17 = iVar16;
                }
                *(float *)(unaff_x19 + 0x220) = 1.0 / (float)iVar17;
                _in_stack_00000030 = auVar12;
                if (*(float *)(unaff_x19 + 0x21c) <= 1.0 / (float)iVar17) {
LAB_0359a6b8:
                  fVar30 = *(float *)(unaff_x19 + 0x21c);
                  fVar37 = (float)FUN_036c4edc(0);
                  *(float *)(unaff_x19 + 0x21c) = fVar30 + fVar37;
                  *(undefined8 *)(unaff_x19 + 0x18) = 0;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            ((undefined8 *)(unaff_x19 + 0x18),0);
                  *(undefined4 *)(unaff_x19 + 0x10) = 2;
                  return 1;
                }
                *(undefined4 *)(unaff_x19 + 0x21c) = 0;
                _in_stack_00000030 = auVar7;
                if ((((unaff_x23 != 0) &&
                     (_in_stack_00000030 = auVar8, *(long *)(unaff_x23 + 0x28) != 0)) &&
                    (lVar27 = *(long *)(*(long *)(unaff_x23 + 0x28) + 0x368),
                    _in_stack_00000030 = auVar9, lVar27 != 0)) &&
                   (lVar27 = *(long *)(lVar27 + 0x38), _in_stack_00000030 = auVar10, lVar27 != 0)) {
                  uVar2 = *(uint *)(unaff_x19 + 0x38);
                  _in_stack_00000030 = auVar12;
                  if (*(uint *)(lVar27 + 0x18) <= uVar2) goto LAB_0359a71c;
                  sVar1 = *(short *)(lVar27 + (long)(int)uVar2 * 0x178 + 0x20);
                  if ((sVar1 == 0x2026) || (sVar1 == 3)) {
                    _in_stack_00000030 = auVar11;
                    if (*(long *)(unaff_x23 + 0x20) != 0) {
                      uStack0000000000000018 = uVar2;
                      FUN_0219eaf8(*(long *)(unaff_x23 + 0x20),&stack0x00000018,
                                   *(undefined8 *)
                                    VRMShaders_RuntimeOnlyAwaitCaller_<>c__DisplayClass4_0_TypeInfo)
                      ;
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
                        auVar13._8_8_ = in_stack_00000038;
                        auVar13._0_8_ = in_stack_00000030;
                        lVar27 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
                        if ((lVar27 != 0) &&
                           (_in_stack_00000030 = auVar13, *(long *)(lVar27 + 0x20) != 0)) {
                          lVar29 = *(long *)(unaff_x19 + 0x1d8);
                          fVar30 = *(float *)(unaff_x19 + 0x168);
                          fVar40 = *(float *)(unaff_x19 + 0x174);
                          fVar41 = *(float *)(unaff_x19 + 0x188);
                          fVar39 = *(float *)(unaff_x19 + 0x218);
                          fVar38 = *(float *)(lVar27 + 0x2c);
                          fVar37 = (float)FUN_03776ea8(*(long *)(lVar27 + 0x20),0);
                          if (*(long *)(lVar27 + 0x20) != 0) {
                            FUN_03776e6c(&stack0x00000018,*(long *)(lVar27 + 0x20),0);
                            in_stack_00000040 =
                                 CONCAT44(uStack000000000000001c,uStack0000000000000018);
                            in_stack_00000048 = in_stack_00000020;
                            in_stack_00000050 = in_stack_00000028;
                            fVar31 = (float)FUN_03776ca4(&stack0x00000040,0);
                            if (*(long *)(lVar27 + 0x20) != 0) {
                              FUN_03776e6c(&stack0x00000018,*(long *)(lVar27 + 0x20),0);
                              in_stack_00000040 =
                                   CONCAT44(uStack000000000000001c,uStack0000000000000018);
                              in_stack_00000048 = in_stack_00000020;
                              in_stack_00000050 = in_stack_00000028;
                              fVar32 = (float)FUN_03776cac(&stack0x00000040,0);
                              if (*(long *)(lVar27 + 0x20) != 0) {
                                FUN_03776e6c(&stack0x00000018,*(long *)(lVar27 + 0x20),0);
                                in_stack_00000040 =
                                     CONCAT44(uStack000000000000001c,uStack0000000000000018);
                                in_stack_00000048 = in_stack_00000020;
                                in_stack_00000050 = in_stack_00000028;
                                fVar33 = (float)FUN_03776c9c(&stack0x00000040,0);
                                if (*(long *)(lVar27 + 0x20) != 0) {
                                  FUN_03776e6c(&stack0x00000018,*(long *)(lVar27 + 0x20),0);
                                  in_stack_00000040 =
                                       CONCAT44(uStack000000000000001c,uStack0000000000000018);
                                  in_stack_00000048 = in_stack_00000020;
                                  in_stack_00000050 = in_stack_00000028;
                                  fVar34 = (float)FUN_03776cac(&stack0x00000040,0);
                                  if (*(long *)(lVar27 + 0x20) != 0) {
                                    FUN_03776e6c(&stack0x00000018,*(long *)(lVar27 + 0x20),0);
                                    in_stack_00000040 =
                                         CONCAT44(uStack000000000000001c,uStack0000000000000018);
                                    in_stack_00000048 = in_stack_00000020;
                                    in_stack_00000050 = in_stack_00000028;
                                    fVar35 = (float)FUN_03776ca4(&stack0x00000040,0);
                                    if (*(long *)(lVar27 + 0x20) != 0) {
                                      FUN_03776e6c(&stack0x00000018,*(long *)(lVar27 + 0x20),0);
                                      in_stack_00000040 =
                                           CONCAT44(uStack000000000000001c,uStack0000000000000018);
                                      in_stack_00000048 = in_stack_00000020;
                                      in_stack_00000050 = in_stack_00000028;
                                      fVar36 = (float)FUN_03776c94(&stack0x00000040,0);
                                      auVar14._8_8_ = in_stack_00000038;
                                      auVar14._0_8_ = in_stack_00000030;
                                      if (lVar29 != 0) {
                                        _in_stack_00000030 = auVar14;
                                        if (*(uint *)(unaff_x19 + 0x1c4) < *(uint *)(lVar29 + 0x18))
                                        {
                                          fVar37 = (fVar41 / fVar39) * fVar38 * fVar37;
                                          lVar28 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x1c4)
                                                            * 0xc;
                                          fVar39 = fVar30 + fVar37 * fVar31;
                                          fVar38 = fVar40 + fVar37 * (fVar32 - fVar33);
                                          *(float *)(lVar28 + 0x20) = fVar39;
                                          *(float *)(lVar28 + 0x24) = fVar38;
                                          *(undefined4 *)(lVar28 + 0x28) = 0;
                                          uVar2 = *(int *)(unaff_x19 + 0x1c4) + 1;
                                          if (uVar2 < *(uint *)(lVar29 + 0x18)) {
                                            fVar40 = fVar40 + fVar37 * fVar34;
                                            lVar28 = lVar29 + (long)(int)uVar2 * 0xc;
                                            *(float *)(lVar28 + 0x20) = fVar39;
                                            *(float *)(lVar28 + 0x24) = fVar40;
                                            *(undefined4 *)(lVar28 + 0x28) = 0;
                                            uVar2 = *(int *)(unaff_x19 + 0x1c4) + 2;
                                            if (uVar2 < *(uint *)(lVar29 + 0x18)) {
                                              lVar28 = lVar29 + (long)(int)uVar2 * 0xc;
                                              fVar30 = fVar30 + fVar37 * (fVar35 + fVar36);
                                              *(float *)(lVar28 + 0x20) = fVar30;
                                              *(float *)(lVar28 + 0x24) = fVar40;
                                              *(undefined4 *)(lVar28 + 0x28) = 0;
                                              uVar2 = *(int *)(unaff_x19 + 0x1c4) + 3;
                                              if (uVar2 < *(uint *)(lVar29 + 0x18)) {
                                                lVar28 = lVar29 + (long)(int)uVar2 * 0xc;
                                                *(float *)(lVar28 + 0x20) = fVar30;
                                                *(float *)(lVar28 + 0x24) = fVar38;
                                                *(undefined4 *)(lVar28 + 0x28) = 0;
                                                if (*(long *)(lVar27 + 0x20) != 0) {
                                                  lVar28 = *(long *)(unaff_x19 + 0x1f0);
                                                  _in_stack_00000030 =
                                                       FUN_03776e94(*(long *)(lVar27 + 0x20),0);
                                                  if (*(int *)(*(long *)
                                                  System_Runtime_Serialization_Formatters_Binary_ObjectReader_TypeNAssembly_TypeInfo
                                                  + 0xe0) == 0) {
                                                    thunk_FUN_01a58e78();
                                                  }
                                                  iVar16 = FUN_03776a58(&stack0x00000030,0);
                                                  if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                                                     (plVar26 = *(long **)(*(long *)(unaff_x19 +
                                                                                    0x30) + 0xa8),
                                                     plVar26 != (long *)0x0)) {
                                                    iVar17 = (**(code **)(*plVar26 + 0x188))
                                                                       (plVar26,*(undefined8 *)
                                                                                 (*plVar26 + 400));
                                                    if (*(long *)(lVar27 + 0x20) != 0) {
                                                      auVar42 = FUN_03776e94(*(long *)(lVar27 + 0x20
                                                                                      ),0);
                                                      _in_stack_00000030 = auVar42;
                                                      iVar18 = FUN_03776a60(&stack0x00000030,0);
                                                      if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                                                         (plVar26 = *(long **)(*(long *)(unaff_x19 +
                                                                                        0x30) + 0xa8
                                                                              ),
                                                         plVar26 != (long *)0x0)) {
                                                        iVar19 = (**(code **)(*plVar26 + 0x1a8))
                                                                           (plVar26,*(undefined8 *)
                                                                                     (*plVar26 +
                                                                                     0x1b0));
                                                        if (*(long *)(lVar27 + 0x20) != 0) {
                                                          auVar42 = FUN_03776e94(*(long *)(lVar27 + 
                                                  0x20),0);
                                                  _in_stack_00000030 = auVar42;
                                                  iVar20 = FUN_03776a60(&stack0x00000030,0);
                                                  if (*(long *)(lVar27 + 0x20) != 0) {
                                                    auVar42 = FUN_03776e94(*(long *)(lVar27 + 0x20),
                                                                           0);
                                                    _in_stack_00000030 = auVar42;
                                                    iVar21 = FUN_03776a70(&stack0x00000030,0);
                                                    if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                                                       (plVar26 = *(long **)(*(long *)(unaff_x19 +
                                                                                      0x30) + 0xa8),
                                                       plVar26 != (long *)0x0)) {
                                                      iVar22 = (**(code **)(*plVar26 + 0x1a8))
                                                                         (plVar26,*(undefined8 *)
                                                                                   (*plVar26 + 0x1b0
                                                                                   ));
                                                      if (*(long *)(lVar27 + 0x20) != 0) {
                                                        auVar42 = FUN_03776e94(*(long *)(lVar27 + 
                                                  0x20),0);
                                                  _in_stack_00000030 = auVar42;
                                                  iVar23 = FUN_03776a58(&stack0x00000030,0);
                                                  if (*(long *)(lVar27 + 0x20) != 0) {
                                                    auVar42 = FUN_03776e94(*(long *)(lVar27 + 0x20),
                                                                           0);
                                                    _in_stack_00000030 = auVar42;
                                                    iVar24 = FUN_03776a68(&stack0x00000030,0);
                                                    if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                                                       (plVar26 = *(long **)(*(long *)(unaff_x19 +
                                                                                      0x30) + 0xa8),
                                                       plVar26 != (long *)0x0)) {
                                                      iVar25 = (**(code **)(*plVar26 + 0x188))
                                                                         (plVar26,*(undefined8 *)
                                                                                   (*plVar26 + 400))
                                                      ;
                                                      if (lVar28 != 0) {
                                                        if (*(uint *)(unaff_x19 + 0x1c4) <
                                                            *(uint *)(lVar28 + 0x18)) {
                                                          lVar27 = lVar28 + (long)(int)*(uint *)(
                                                  unaff_x19 + 0x1c4) * 8;
                                                  *(float *)(lVar27 + 0x20) =
                                                       (float)iVar16 / (float)iVar17;
                                                  *(float *)(lVar27 + 0x24) =
                                                       (float)iVar18 / (float)iVar19;
                                                  uVar2 = *(int *)(unaff_x19 + 0x1c4) + 1;
                                                  if (uVar2 < *(uint *)(lVar28 + 0x18)) {
                                                    lVar27 = lVar28 + (long)(int)uVar2 * 8;
                                                    fVar37 = (float)(iVar21 + iVar20) /
                                                             (float)iVar22;
                                                    *(float *)(lVar27 + 0x20) =
                                                         (float)iVar16 / (float)iVar17;
                                                    *(float *)(lVar27 + 0x24) = fVar37;
                                                    uVar2 = *(int *)(unaff_x19 + 0x1c4) + 2;
                                                    if (uVar2 < *(uint *)(lVar28 + 0x18)) {
                                                      lVar27 = lVar28 + (long)(int)uVar2 * 8;
                                                      fVar30 = (float)(iVar24 + iVar23) /
                                                               (float)iVar25;
                                                      *(float *)(lVar27 + 0x20) = fVar30;
                                                      *(float *)(lVar27 + 0x24) = fVar37;
                                                      uVar2 = *(int *)(unaff_x19 + 0x1c4) + 3;
                                                      if (uVar2 < *(uint *)(lVar28 + 0x18)) {
                                                        lVar27 = lVar28 + (long)(int)uVar2 * 8;
                                                        *(float *)(lVar27 + 0x20) = fVar30;
                                                        *(float *)(lVar27 + 0x24) =
                                                             (float)iVar18 / (float)iVar19;
                                                        if (*(long *)(unaff_x19 + 0x1c8) != 0) {
                                                          FUN_036a460c(*(long *)(unaff_x19 + 0x1c8),
                                                                       lVar29,0);
                                                          if (*(long *)(unaff_x19 + 0x1c8) != 0) {
                                                            FUN_036a4810(*(long *)(unaff_x19 + 0x1c8
                                                                                  ),lVar28,0);
                                                            plVar26 = *(long **)(unaff_x23 + 0x28);
                                                            if (plVar26 != (long *)0x0) {
                                                              (**(code **)(*plVar26 + 0x7b8))
                                                                        (plVar26,*(undefined8 *)
                                                                                  (unaff_x19 + 0x1c8
                                                                                  ),
                                                                         *(undefined4 *)
                                                                          (unaff_x19 + 0x1c0),
                                                                         *(undefined8 *)
                                                                          (*plVar26 + 0x7c0));
                                                              iVar16 = *(int *)(unaff_x19 + 0x40);
                                                              if (*(int *)(unaff_x19 + 0x3c) < 1) {
                                                                if (*(int *)(unaff_x19 + 0x28) <
                                                                    iVar16) {
                                                                  iVar16 = iVar16 + -1;
                                                                }
                                                                else {
                                                                  iVar16 = *(int *)(unaff_x19 + 0x2c
                                                                                   );
                                                                }
                                                              }
                                                              else if (iVar16 < *(int *)(unaff_x19 +
                                                                                        0x2c)) {
                                                                iVar16 = iVar16 + 1;
                                                              }
                                                              else {
                                                                iVar16 = *(int *)(unaff_x19 + 0x28);
                                                              }
                                                              *(int *)(unaff_x19 + 0x40) = iVar16;
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
LAB_0359a718:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


