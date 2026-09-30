/*
FUNCTION_NAME: UnityEngine.Material$$HasFloat
ENTRY_POINT: 03599e34
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


undefined8 UnityEngine_Material__HasFloat(void)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined *puVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  int iVar26;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float extraout_s0;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar43 [16];
  uint uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  
  lVar23 = FUN_01ab69ac(PTR_DAT_03cbdf88);
  *(undefined1 *)(unaff_x20 + 0xb5) = 1;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000050 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  iVar26 = *(int *)(unaff_x19 + 0x10);
  lVar31 = *(long *)(unaff_x19 + 0x20);
  if (iVar26 == 2) {
    fVar38 = *(float *)(unaff_x19 + 0x220);
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
LAB_0359a0e0:
    auVar20._8_8_ = in_stack_00000038;
    auVar20._0_8_ = in_stack_00000030;
    auVar19._8_8_ = in_stack_00000038;
    auVar19._0_8_ = in_stack_00000030;
    auVar18._8_8_ = in_stack_00000038;
    auVar18._0_8_ = in_stack_00000030;
    auVar17._8_8_ = in_stack_00000038;
    auVar17._0_8_ = in_stack_00000030;
    auVar43._8_8_ = in_stack_00000038;
    auVar43._0_8_ = in_stack_00000030;
    if (fVar38 < *(float *)(unaff_x19 + 0x21c)) {
      *(undefined4 *)(unaff_x19 + 0x21c) = 0;
      if ((((lVar31 == 0) || (auVar43 = auVar17, *(long *)(lVar31 + 0x28) == 0)) ||
          (lVar28 = *(long *)(*(long *)(lVar31 + 0x28) + 0x368), auVar43 = auVar18, lVar28 == 0)) ||
         (lVar28 = *(long *)(lVar28 + 0x38), auVar43 = auVar19, lVar28 == 0)) goto LAB_0359a718;
      uVar3 = *(uint *)(unaff_x19 + 0x38);
      if (*(uint *)(lVar28 + 0x18) <= uVar3) goto LAB_0359a71c;
      sVar2 = *(short *)(lVar28 + (long)(int)uVar3 * 0x178 + 0x20);
      if ((sVar2 == 0x2026) || (sVar2 == 3)) {
        lVar23 = 0;
        auVar43 = auVar20;
        if (*(long *)(lVar31 + 0x20) == 0) goto LAB_0359a718;
        uStack0000000000000018 = uVar3;
        FUN_0219eaf8(*(long *)(lVar31 + 0x20),&stack0x00000018,
                     *(undefined8 *)VRMShaders_RuntimeOnlyAwaitCaller_<>c__DisplayClass4_0_TypeInfo)
        ;
        goto LAB_0359a160;
      }
      lVar28 = *(long *)(unaff_x19 + 0x30);
      auVar43 = _in_stack_00000030;
      if (lVar28 == 0) {
LAB_0359a718:
        _in_stack_00000030 = auVar43;
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c(lVar23);
      }
      if (*(long *)(lVar28 + 0x38) == 0) {
        FUN_0359a7d0(lVar28);
      }
      auVar43._8_8_ = in_stack_00000038;
      auVar43._0_8_ = in_stack_00000030;
      lVar23 = 0;
      if (*(long *)(lVar28 + 0xb0) == 0) goto LAB_0359a718;
      lVar23 = FUN_02215a88(*(long *)(lVar28 + 0xb0),*(undefined4 *)(unaff_x19 + 0x40),
                            &stack0x00000018,*(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
      auVar21._8_8_ = in_stack_00000038;
      auVar21._0_8_ = in_stack_00000030;
      auVar43._8_8_ = in_stack_00000038;
      auVar43._0_8_ = in_stack_00000030;
      lVar28 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
      if (lVar28 == 0) goto LAB_0359a718;
      lVar23 = 0;
      auVar43 = auVar21;
      if (*(long *)(lVar28 + 0x20) == 0) goto LAB_0359a718;
      lVar29 = *(long *)(unaff_x19 + 0x1d8);
      fVar32 = *(float *)(unaff_x19 + 0x168);
      fVar41 = *(float *)(unaff_x19 + 0x174);
      fVar42 = *(float *)(unaff_x19 + 0x188);
      fVar40 = *(float *)(unaff_x19 + 0x218);
      fVar39 = *(float *)(lVar28 + 0x2c);
      fVar38 = (float)FUN_03776ea8(*(long *)(lVar28 + 0x20),0);
      auVar43._8_8_ = in_stack_00000038;
      auVar43._0_8_ = in_stack_00000030;
      lVar23 = 0;
      if (*(long *)(lVar28 + 0x20) == 0) goto LAB_0359a718;
      FUN_03776e6c(&stack0x00000018,*(long *)(lVar28 + 0x20),0);
      in_stack_00000040 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
      in_stack_00000048 = in_stack_00000020;
      in_stack_00000050 = in_stack_00000028;
      fVar33 = (float)FUN_03776ca4(&stack0x00000040,0);
      auVar43._8_8_ = in_stack_00000038;
      auVar43._0_8_ = in_stack_00000030;
      lVar23 = 0;
      if (*(long *)(lVar28 + 0x20) == 0) goto LAB_0359a718;
      FUN_03776e6c(&stack0x00000018,*(long *)(lVar28 + 0x20),0);
      in_stack_00000040 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
      in_stack_00000048 = in_stack_00000020;
      in_stack_00000050 = in_stack_00000028;
      fVar34 = (float)FUN_03776cac(&stack0x00000040,0);
      auVar43._8_8_ = in_stack_00000038;
      auVar43._0_8_ = in_stack_00000030;
      lVar23 = 0;
      if (*(long *)(lVar28 + 0x20) == 0) goto LAB_0359a718;
      FUN_03776e6c(&stack0x00000018,*(long *)(lVar28 + 0x20),0);
      in_stack_00000040 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
      in_stack_00000048 = in_stack_00000020;
      in_stack_00000050 = in_stack_00000028;
      fVar35 = (float)FUN_03776c9c(&stack0x00000040,0);
      auVar43._8_8_ = in_stack_00000038;
      auVar43._0_8_ = in_stack_00000030;
      lVar23 = 0;
      if (*(long *)(lVar28 + 0x20) == 0) goto LAB_0359a718;
      FUN_03776e6c(&stack0x00000018,*(long *)(lVar28 + 0x20),0);
      in_stack_00000040 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
      in_stack_00000048 = in_stack_00000020;
      in_stack_00000050 = in_stack_00000028;
      fVar36 = (float)FUN_03776cac(&stack0x00000040,0);
      auVar43._8_8_ = in_stack_00000038;
      auVar43._0_8_ = in_stack_00000030;
      lVar23 = 0;
      if (*(long *)(lVar28 + 0x20) == 0) goto LAB_0359a718;
      FUN_03776e6c(&stack0x00000018,*(long *)(lVar28 + 0x20),0);
      in_stack_00000040 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
      in_stack_00000048 = in_stack_00000020;
      in_stack_00000050 = in_stack_00000028;
      fVar37 = (float)FUN_03776ca4(&stack0x00000040,0);
      auVar43._8_8_ = in_stack_00000038;
      auVar43._0_8_ = in_stack_00000030;
      lVar23 = 0;
      if (*(long *)(lVar28 + 0x20) == 0) goto LAB_0359a718;
      FUN_03776e6c(&stack0x00000018,*(long *)(lVar28 + 0x20),0);
      in_stack_00000040 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
      in_stack_00000048 = in_stack_00000020;
      in_stack_00000050 = in_stack_00000028;
      lVar23 = FUN_03776c94(&stack0x00000040,0);
      auVar43._8_8_ = in_stack_00000038;
      auVar43._0_8_ = in_stack_00000030;
      if (lVar29 == 0) goto LAB_0359a718;
      if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x1c4)) {
LAB_0359a71c:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      fVar38 = (fVar42 / fVar40) * fVar39 * fVar38;
      lVar23 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x1c4) * 0xc;
      fVar40 = fVar32 + fVar38 * fVar33;
      fVar39 = fVar41 + fVar38 * (fVar34 - fVar35);
      *(float *)(lVar23 + 0x20) = fVar40;
      *(float *)(lVar23 + 0x24) = fVar39;
      *(undefined4 *)(lVar23 + 0x28) = 0;
      uVar3 = *(int *)(unaff_x19 + 0x1c4) + 1;
      if (*(uint *)(lVar29 + 0x18) <= uVar3) goto LAB_0359a71c;
      fVar41 = fVar41 + fVar38 * fVar36;
      lVar23 = lVar29 + (long)(int)uVar3 * 0xc;
      *(float *)(lVar23 + 0x20) = fVar40;
      *(float *)(lVar23 + 0x24) = fVar41;
      *(undefined4 *)(lVar23 + 0x28) = 0;
      uVar3 = *(int *)(unaff_x19 + 0x1c4) + 2;
      if (*(uint *)(lVar29 + 0x18) <= uVar3) goto LAB_0359a71c;
      lVar23 = lVar29 + (long)(int)uVar3 * 0xc;
      fVar32 = fVar32 + fVar38 * (fVar37 + extraout_s0);
      *(float *)(lVar23 + 0x20) = fVar32;
      *(float *)(lVar23 + 0x24) = fVar41;
      *(undefined4 *)(lVar23 + 0x28) = 0;
      uVar3 = *(int *)(unaff_x19 + 0x1c4) + 3;
      if (*(uint *)(lVar29 + 0x18) <= uVar3) goto LAB_0359a71c;
      lVar23 = lVar29 + (long)(int)uVar3 * 0xc;
      *(float *)(lVar23 + 0x20) = fVar32;
      *(float *)(lVar23 + 0x24) = fVar39;
      *(undefined4 *)(lVar23 + 0x28) = 0;
      lVar23 = 0;
      auVar43 = _in_stack_00000030;
      if (*(long *)(lVar28 + 0x20) == 0) goto LAB_0359a718;
      lVar30 = *(long *)(unaff_x19 + 0x1f0);
      _in_stack_00000030 = FUN_03776e94(*(long *)(lVar28 + 0x20),0);
      if (*(int *)(*(long *)
                    System_Runtime_Serialization_Formatters_Binary_ObjectReader_TypeNAssembly_TypeInfo
                  + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar23 = FUN_03776a58(&stack0x00000030,0);
      auVar43 = _in_stack_00000030;
      if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_0359a718;
      iVar26 = (int)lVar23;
      plVar25 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0xa8);
      lVar23 = 0;
      if (plVar25 == (long *)0x0) goto LAB_0359a718;
      lVar23 = (**(code **)(*plVar25 + 0x188))(plVar25,*(undefined8 *)(*plVar25 + 400));
      auVar43 = _in_stack_00000030;
      if (*(long *)(lVar28 + 0x20) == 0) goto LAB_0359a718;
      iVar1 = (int)lVar23;
      auVar43 = FUN_03776e94(*(long *)(lVar28 + 0x20),0);
      _in_stack_00000030 = auVar43;
      lVar23 = FUN_03776a60(&stack0x00000030,0);
      auVar43 = _in_stack_00000030;
      if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_0359a718;
      iVar6 = (int)lVar23;
      plVar25 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0xa8);
      lVar23 = 0;
      if (plVar25 == (long *)0x0) goto LAB_0359a718;
      lVar23 = (**(code **)(*plVar25 + 0x1a8))(plVar25,*(undefined8 *)(*plVar25 + 0x1b0));
      auVar43 = _in_stack_00000030;
      if (*(long *)(lVar28 + 0x20) == 0) goto LAB_0359a718;
      iVar7 = (int)lVar23;
      auVar43 = FUN_03776e94(*(long *)(lVar28 + 0x20),0);
      _in_stack_00000030 = auVar43;
      lVar23 = FUN_03776a60(&stack0x00000030,0);
      auVar43 = _in_stack_00000030;
      if (*(long *)(lVar28 + 0x20) == 0) goto LAB_0359a718;
      iVar5 = (int)lVar23;
      auVar43 = FUN_03776e94(*(long *)(lVar28 + 0x20),0);
      _in_stack_00000030 = auVar43;
      lVar23 = FUN_03776a70(&stack0x00000030,0);
      auVar43 = _in_stack_00000030;
      if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_0359a718;
      iVar4 = (int)lVar23;
      plVar25 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0xa8);
      lVar23 = 0;
      if (plVar25 == (long *)0x0) goto LAB_0359a718;
      lVar23 = (**(code **)(*plVar25 + 0x1a8))(plVar25,*(undefined8 *)(*plVar25 + 0x1b0));
      auVar43 = _in_stack_00000030;
      if (*(long *)(lVar28 + 0x20) == 0) goto LAB_0359a718;
      iVar8 = (int)lVar23;
      auVar43 = FUN_03776e94(*(long *)(lVar28 + 0x20),0);
      _in_stack_00000030 = auVar43;
      lVar23 = FUN_03776a58(&stack0x00000030,0);
      auVar43 = _in_stack_00000030;
      if (*(long *)(lVar28 + 0x20) == 0) goto LAB_0359a718;
      iVar10 = (int)lVar23;
      auVar43 = FUN_03776e94(*(long *)(lVar28 + 0x20),0);
      _in_stack_00000030 = auVar43;
      lVar23 = FUN_03776a68(&stack0x00000030,0);
      auVar43 = _in_stack_00000030;
      if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_0359a718;
      iVar9 = (int)lVar23;
      plVar25 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0xa8);
      lVar23 = 0;
      if (plVar25 == (long *)0x0) goto LAB_0359a718;
      lVar23 = (**(code **)(*plVar25 + 0x188))(plVar25,*(undefined8 *)(*plVar25 + 400));
      auVar43 = _in_stack_00000030;
      if (lVar30 == 0) goto LAB_0359a718;
      if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x1c4)) goto LAB_0359a71c;
      lVar28 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x1c4) * 8;
      fVar32 = (float)iVar26 / (float)iVar1;
      fVar38 = (float)iVar6 / (float)iVar7;
      *(float *)(lVar28 + 0x20) = fVar32;
      *(float *)(lVar28 + 0x24) = fVar38;
      uVar3 = *(int *)(unaff_x19 + 0x1c4) + 1;
      if (*(uint *)(lVar30 + 0x18) <= uVar3) goto LAB_0359a71c;
      lVar28 = lVar30 + (long)(int)uVar3 * 8;
      fVar41 = (float)(iVar4 + iVar5) / (float)iVar8;
      *(float *)(lVar28 + 0x20) = fVar32;
      *(float *)(lVar28 + 0x24) = fVar41;
      uVar3 = *(int *)(unaff_x19 + 0x1c4) + 2;
      if (*(uint *)(lVar30 + 0x18) <= uVar3) goto LAB_0359a71c;
      lVar28 = lVar30 + (long)(int)uVar3 * 8;
      fVar32 = (float)(iVar9 + iVar10) / (float)(int)lVar23;
      *(float *)(lVar28 + 0x20) = fVar32;
      *(float *)(lVar28 + 0x24) = fVar41;
      uVar3 = *(int *)(unaff_x19 + 0x1c4) + 3;
      if (*(uint *)(lVar30 + 0x18) <= uVar3) goto LAB_0359a71c;
      lVar23 = lVar30 + (long)(int)uVar3 * 8;
      *(float *)(lVar23 + 0x20) = fVar32;
      *(float *)(lVar23 + 0x24) = fVar38;
      lVar23 = 0;
      if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_0359a718;
      FUN_036a460c(*(long *)(unaff_x19 + 0x1c8),lVar29,0);
      lVar23 = 0;
      auVar43 = _in_stack_00000030;
      if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_0359a718;
      FUN_036a4810(*(long *)(unaff_x19 + 0x1c8),lVar30,0);
      plVar25 = *(long **)(lVar31 + 0x28);
      lVar23 = 0;
      auVar43 = _in_stack_00000030;
      if (plVar25 == (long *)0x0) goto LAB_0359a718;
      (**(code **)(*plVar25 + 0x7b8))
                (plVar25,*(undefined8 *)(unaff_x19 + 0x1c8),*(undefined4 *)(unaff_x19 + 0x1c0),
                 *(undefined8 *)(*plVar25 + 0x7c0));
      iVar26 = *(int *)(unaff_x19 + 0x40);
      if (*(int *)(unaff_x19 + 0x3c) < 1) {
        if (*(int *)(unaff_x19 + 0x28) < iVar26) {
          iVar26 = iVar26 + -1;
        }
        else {
          iVar26 = *(int *)(unaff_x19 + 0x2c);
        }
      }
      else if (iVar26 < *(int *)(unaff_x19 + 0x2c)) {
        iVar26 = iVar26 + 1;
      }
      else {
        iVar26 = *(int *)(unaff_x19 + 0x28);
      }
      *(int *)(unaff_x19 + 0x40) = iVar26;
    }
    fVar32 = *(float *)(unaff_x19 + 0x21c);
    fVar38 = (float)FUN_036c4edc(0);
    *(float *)(unaff_x19 + 0x21c) = fVar32 + fVar38;
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(unaff_x19 + 0x18),0);
    *(undefined4 *)(unaff_x19 + 0x10) = 2;
    uVar27 = 1;
  }
  else {
    if (iVar26 == 1) {
      lVar28 = *(long *)(unaff_x19 + 0x30);
      *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
      *(undefined4 *)(unaff_x19 + 0x40) = *(undefined4 *)(unaff_x19 + 0x28);
      auVar43 = ZEXT816(0);
      if (lVar28 == 0) goto LAB_0359a718;
      iVar26 = *(int *)(unaff_x19 + 0x2c);
      if (*(long *)(lVar28 + 0x38) == 0) {
        lVar23 = FUN_0359a7d0(lVar28);
      }
      auVar11._8_8_ = in_stack_00000038;
      auVar11._0_8_ = in_stack_00000030;
      auVar43._8_8_ = in_stack_00000038;
      auVar43._0_8_ = in_stack_00000030;
      if (*(long *)(lVar28 + 0xb0) == 0) goto LAB_0359a718;
      if (*(int *)(*(long *)(lVar28 + 0xb0) + 0x18) < iVar26) {
        lVar28 = *(long *)(unaff_x19 + 0x30);
        auVar43 = auVar11;
        if (lVar28 == 0) goto LAB_0359a718;
        if (*(long *)(lVar28 + 0x38) == 0) {
          lVar23 = FUN_0359a7d0(lVar28);
        }
        auVar43._8_8_ = in_stack_00000038;
        auVar43._0_8_ = in_stack_00000030;
        if (*(long *)(lVar28 + 0xb0) == 0) goto LAB_0359a718;
        *(int *)(unaff_x19 + 0x2c) = *(int *)(*(long *)(lVar28 + 0xb0) + 0x18) + -1;
      }
      auVar13._8_8_ = in_stack_00000038;
      auVar13._0_8_ = in_stack_00000030;
      auVar12._8_8_ = in_stack_00000038;
      auVar12._0_8_ = in_stack_00000030;
      auVar43._8_8_ = in_stack_00000038;
      auVar43._0_8_ = in_stack_00000030;
      if ((((lVar31 == 0) || (auVar43 = auVar12, *(long *)(lVar31 + 0x28) == 0)) ||
          (lVar28 = *(long *)(*(long *)(lVar31 + 0x28) + 0x368), auVar43 = auVar13, lVar28 == 0)) ||
         (lVar28 = *(long *)(lVar28 + 0x38), auVar43 = _in_stack_00000030, lVar28 == 0))
      goto LAB_0359a718;
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x38)) goto LAB_0359a71c;
      memmove((void *)(unaff_x19 + 0x48),
              (void *)(lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x38) * 0x178 + 0x20),0x178);
      lVar23 = GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x58,0)
      ;
      auVar14._8_8_ = in_stack_00000038;
      auVar14._0_8_ = in_stack_00000030;
      auVar43._8_8_ = in_stack_00000038;
      auVar43._0_8_ = in_stack_00000030;
      uVar3 = *(uint *)(unaff_x19 + 0x80);
      *(uint *)(unaff_x19 + 0x1c0) = uVar3;
      *(undefined4 *)(unaff_x19 + 0x1c4) = *(undefined4 *)(unaff_x19 + 0x94);
      if (((*(long *)(lVar31 + 0x28) == 0) ||
          (lVar28 = *(long *)(*(long *)(lVar31 + 0x28) + 0x368), auVar43 = auVar14, lVar28 == 0)) ||
         (lVar28 = *(long *)(lVar28 + 0x60), auVar43 = _in_stack_00000030, lVar28 == 0))
      goto LAB_0359a718;
      if (*(uint *)(lVar28 + 0x18) <= uVar3) goto LAB_0359a71c;
      memmove((void *)(unaff_x19 + 0x1c8),(void *)(lVar28 + (long)(int)uVar3 * 0x50 + 0x20),0x50);
      lVar23 = GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                         ((void *)(unaff_x19 + 0x1c8),0);
      auVar43._8_8_ = in_stack_00000038;
      auVar43._0_8_ = in_stack_00000030;
      lVar28 = *(long *)(unaff_x19 + 0x30);
      if (lVar28 == 0) goto LAB_0359a718;
      if (*(long *)(lVar28 + 0x38) == 0) {
        FUN_0359a7d0(lVar28);
      }
      puVar22 = OVRPlugin_HandStatus_TypeInfo;
      auVar43._8_8_ = in_stack_00000038;
      auVar43._0_8_ = in_stack_00000030;
      lVar23 = 0;
      if (*(long *)(lVar28 + 0xb0) == 0) goto LAB_0359a718;
      lVar23 = FUN_02215a88(*(long *)(lVar28 + 0xb0),*(undefined4 *)(unaff_x19 + 0x28),
                            &stack0x00000018,*(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
      auVar15._8_8_ = in_stack_00000038;
      auVar15._0_8_ = in_stack_00000030;
      auVar43._8_8_ = in_stack_00000038;
      auVar43._0_8_ = in_stack_00000030;
      if ((CONCAT44(uStack000000000000001c,uStack0000000000000018) == 0) ||
         (lVar28 = *(long *)(unaff_x19 + 0x30), auVar43 = auVar15, lVar28 == 0)) goto LAB_0359a718;
      fVar38 = *(float *)(CONCAT44(uStack000000000000001c,uStack0000000000000018) + 0x2c);
      if (*(long *)(lVar28 + 0x38) == 0) {
        FUN_0359a7d0(lVar28);
      }
      auVar43._8_8_ = in_stack_00000038;
      auVar43._0_8_ = in_stack_00000030;
      lVar23 = 0;
      if (*(long *)(lVar28 + 0xb0) == 0) goto LAB_0359a718;
      lVar23 = FUN_02215a88(*(long *)(lVar28 + 0xb0),*(undefined4 *)(unaff_x19 + 0x28),
                            &stack0x00000018,*(undefined8 *)puVar22);
      auVar16._8_8_ = in_stack_00000038;
      auVar16._0_8_ = in_stack_00000030;
      auVar43._8_8_ = in_stack_00000038;
      auVar43._0_8_ = in_stack_00000030;
      if (CONCAT44(uStack000000000000001c,uStack0000000000000018) == 0) goto LAB_0359a718;
      lVar28 = *(long *)(CONCAT44(uStack000000000000001c,uStack0000000000000018) + 0x20);
      lVar23 = 0;
      auVar43 = auVar16;
      if (lVar28 == 0) goto LAB_0359a718;
      fVar32 = (float)FUN_03776ea8(lVar28,0);
      *(undefined4 *)(unaff_x19 + 0x21c) = 0;
      *(float *)(unaff_x19 + 0x218) = fVar38 * fVar32;
      iVar26 = *(int *)(unaff_x19 + 0x3c);
      if (DAT_041214a1 == '\0') {
        FUN_01ab69ac(PTR_DAT_03cbdee0);
        DAT_041214a1 = '\x01';
      }
      lVar23 = *(long *)PTR_DAT_03cbdee0;
      if (*(int *)(lVar23 + 0xe0) == 0) {
        lVar23 = thunk_FUN_01a58e78();
      }
      iVar1 = -iVar26;
      if (-1 < iVar26) {
        iVar1 = iVar26;
      }
      fVar38 = 1.0 / (float)iVar1;
      *(float *)(unaff_x19 + 0x220) = fVar38;
      goto LAB_0359a0e0;
    }
    lVar23 = 0;
    if (iVar26 != 0) {
      return 0;
    }
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    auVar43 = ZEXT816(0);
    if (lVar31 == 0) goto LAB_0359a718;
    uVar27 = *(undefined8 *)(lVar31 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar24 = FUN_036d35a8(uVar27,0,0);
    if ((uVar24 & 1) == 0) {
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(unaff_x19 + 0x18),0);
      *(undefined4 *)(unaff_x19 + 0x10) = 1;
      return 1;
    }
LAB_0359a160:
    uVar27 = 0;
  }
  return uVar27;
}


