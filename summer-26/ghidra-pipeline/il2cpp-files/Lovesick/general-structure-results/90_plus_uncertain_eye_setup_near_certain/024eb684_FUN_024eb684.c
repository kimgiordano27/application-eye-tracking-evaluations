/*
FUNCTION_NAME: FUN_024eb684
ENTRY_POINT: 024eb684
PROGRAM: Lovesick-libil2cpp.so
SCORE: 104
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_024eb684(void *param_1)

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
  void *pvVar23;
  ulong uVar24;
  long *plVar25;
  int iVar26;
  long lVar27;
  undefined8 uVar28;
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
  uint local_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  
  pvVar23 = param_1;
  if ((DAT_037827da & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_Sizef_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_1944);
    thunk_FUN_00d48444(Method_RCG_Lovesick_Dialogue_HintManager_PuzzleCompleted__);
    thunk_FUN_00d48444(System_Func<KeyValuePair<int,_int>,_int>_TypeInfo);
    pvVar23 = (void *)thunk_FUN_00d48444(
                                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                        );
    DAT_037827da = 1;
  }
  puVar22 = System_Func<KeyValuePair<int,_int>,_int>_TypeInfo;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_d0._0_8_ = 0;
  local_d0._8_8_ = 0;
  iVar26 = *(int *)((long)param_1 + 0x10);
  lVar31 = *(long *)((long)param_1 + 0x20);
  if (iVar26 == 2) {
    fVar38 = *(float *)((long)param_1 + 0x220);
    *(undefined4 *)((long)param_1 + 0x10) = 0xffffffff;
LAB_024eb974:
    auVar20._8_8_ = local_d0._8_8_;
    auVar20._0_8_ = local_d0._0_8_;
    auVar19._8_8_ = local_d0._8_8_;
    auVar19._0_8_ = local_d0._0_8_;
    auVar18._8_8_ = local_d0._8_8_;
    auVar18._0_8_ = local_d0._0_8_;
    auVar17._8_8_ = local_d0._8_8_;
    auVar17._0_8_ = local_d0._0_8_;
    auVar43._8_8_ = local_d0._8_8_;
    auVar43._0_8_ = local_d0._0_8_;
    if (fVar38 < *(float *)((long)param_1 + 0x21c)) {
      *(undefined4 *)((long)param_1 + 0x21c) = 0;
      if ((((lVar31 == 0) || (auVar43 = auVar17, *(long *)(lVar31 + 0x20) == 0)) ||
          (lVar29 = *(long *)(*(long *)(lVar31 + 0x20) + 0x360), auVar43 = auVar18, lVar29 == 0)) ||
         (lVar29 = *(long *)(lVar29 + 0x38), auVar43 = auVar19, lVar29 == 0)) goto LAB_024ebf98;
      uVar3 = *(uint *)((long)param_1 + 0x38);
      if (*(uint *)(lVar29 + 0x18) <= uVar3) goto LAB_024ebf9c;
      sVar2 = *(short *)(lVar29 + (long)(int)uVar3 * 0x178 + 0x20);
      if ((sVar2 == 0x2026) || (sVar2 == 3)) {
        pvVar23 = (void *)0x0;
        auVar43 = auVar20;
        if (*(long *)(lVar31 + 0x18) == 0) goto LAB_024ebf98;
        local_e8 = uVar3;
        FUN_0129de0c(*(long *)(lVar31 + 0x18),&local_e8,*(undefined8 *)OVRPlugin_Sizef_TypeInfo);
        goto LAB_024eb9f4;
      }
      lVar29 = *(long *)((long)param_1 + 0x30);
      auVar43 = local_d0;
      if (lVar29 == 0) {
LAB_024ebf98:
        local_d0 = auVar43;
                    /* WARNING: Subroutine does not return */
        FUN_00da518c(pvVar23);
      }
      if (*(long *)(lVar29 + 0x38) == 0) {
        FUN_024ec04c(lVar29);
      }
      auVar43._8_8_ = local_d0._8_8_;
      auVar43._0_8_ = local_d0._0_8_;
      pvVar23 = (void *)0x0;
      if (*(long *)(lVar29 + 0xb0) == 0) goto LAB_024ebf98;
      pvVar23 = (void *)FUN_0132138c(*(long *)(lVar29 + 0xb0),*(undefined4 *)((long)param_1 + 0x40),
                                     &local_e8,*(undefined8 *)puVar22);
      auVar21._8_8_ = local_d0._8_8_;
      auVar21._0_8_ = local_d0._0_8_;
      auVar43._8_8_ = local_d0._8_8_;
      auVar43._0_8_ = local_d0._0_8_;
      lVar29 = CONCAT44(uStack_e4,local_e8);
      if (lVar29 == 0) goto LAB_024ebf98;
      pvVar23 = (void *)0x0;
      auVar43 = auVar21;
      if (*(long *)(lVar29 + 0x20) == 0) goto LAB_024ebf98;
      lVar30 = *(long *)((long)param_1 + 0x1d8);
      fVar32 = *(float *)((long)param_1 + 0x168);
      fVar41 = *(float *)((long)param_1 + 0x174);
      fVar42 = *(float *)((long)param_1 + 0x188);
      fVar40 = *(float *)((long)param_1 + 0x218);
      fVar39 = *(float *)(lVar29 + 0x2c);
      fVar38 = (float)FUN_026fd668(*(long *)(lVar29 + 0x20),0);
      auVar43._8_8_ = local_d0._8_8_;
      auVar43._0_8_ = local_d0._0_8_;
      pvVar23 = (void *)0x0;
      if (*(long *)(lVar29 + 0x20) == 0) goto LAB_024ebf98;
      FUN_026fd62c(&local_e8,*(long *)(lVar29 + 0x20),0);
      local_c0 = CONCAT44(uStack_e4,local_e8);
      uStack_b8 = uStack_e0;
      local_b0 = local_d8;
      fVar33 = (float)FUN_026fd464(&local_c0,0);
      auVar43._8_8_ = local_d0._8_8_;
      auVar43._0_8_ = local_d0._0_8_;
      pvVar23 = (void *)0x0;
      if (*(long *)(lVar29 + 0x20) == 0) goto LAB_024ebf98;
      FUN_026fd62c(&local_e8,*(long *)(lVar29 + 0x20),0);
      local_c0 = CONCAT44(uStack_e4,local_e8);
      uStack_b8 = uStack_e0;
      local_b0 = local_d8;
      fVar34 = (float)FUN_026fd46c(&local_c0,0);
      auVar43._8_8_ = local_d0._8_8_;
      auVar43._0_8_ = local_d0._0_8_;
      pvVar23 = (void *)0x0;
      if (*(long *)(lVar29 + 0x20) == 0) goto LAB_024ebf98;
      FUN_026fd62c(&local_e8,*(long *)(lVar29 + 0x20),0);
      local_c0 = CONCAT44(uStack_e4,local_e8);
      uStack_b8 = uStack_e0;
      local_b0 = local_d8;
      fVar35 = (float)FUN_026fd45c(&local_c0,0);
      auVar43._8_8_ = local_d0._8_8_;
      auVar43._0_8_ = local_d0._0_8_;
      pvVar23 = (void *)0x0;
      if (*(long *)(lVar29 + 0x20) == 0) goto LAB_024ebf98;
      FUN_026fd62c(&local_e8,*(long *)(lVar29 + 0x20),0);
      local_c0 = CONCAT44(uStack_e4,local_e8);
      uStack_b8 = uStack_e0;
      local_b0 = local_d8;
      fVar36 = (float)FUN_026fd46c(&local_c0,0);
      auVar43._8_8_ = local_d0._8_8_;
      auVar43._0_8_ = local_d0._0_8_;
      pvVar23 = (void *)0x0;
      if (*(long *)(lVar29 + 0x20) == 0) goto LAB_024ebf98;
      FUN_026fd62c(&local_e8,*(long *)(lVar29 + 0x20),0);
      local_c0 = CONCAT44(uStack_e4,local_e8);
      uStack_b8 = uStack_e0;
      local_b0 = local_d8;
      fVar37 = (float)FUN_026fd464(&local_c0,0);
      auVar43._8_8_ = local_d0._8_8_;
      auVar43._0_8_ = local_d0._0_8_;
      pvVar23 = (void *)0x0;
      if (*(long *)(lVar29 + 0x20) == 0) goto LAB_024ebf98;
      FUN_026fd62c(&local_e8,*(long *)(lVar29 + 0x20),0);
      local_c0 = CONCAT44(uStack_e4,local_e8);
      uStack_b8 = uStack_e0;
      local_b0 = local_d8;
      pvVar23 = (void *)FUN_026fd454(&local_c0,0);
      auVar43._8_8_ = local_d0._8_8_;
      auVar43._0_8_ = local_d0._0_8_;
      if (lVar30 == 0) goto LAB_024ebf98;
      if (*(uint *)(lVar30 + 0x18) <= *(uint *)((long)param_1 + 0x1c4)) {
LAB_024ebf9c:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      fVar38 = (fVar42 / fVar40) * fVar39 * fVar38;
      lVar27 = lVar30 + (long)(int)*(uint *)((long)param_1 + 0x1c4) * 0xc;
      fVar40 = fVar32 + fVar38 * fVar33;
      fVar39 = fVar41 + fVar38 * (fVar34 - fVar35);
      *(float *)(lVar27 + 0x20) = fVar40;
      *(float *)(lVar27 + 0x24) = fVar39;
      *(undefined4 *)(lVar27 + 0x28) = 0;
      uVar3 = *(int *)((long)param_1 + 0x1c4) + 1;
      if (*(uint *)(lVar30 + 0x18) <= uVar3) goto LAB_024ebf9c;
      fVar41 = fVar41 + fVar38 * fVar36;
      lVar27 = lVar30 + (long)(int)uVar3 * 0xc;
      *(float *)(lVar27 + 0x20) = fVar40;
      *(float *)(lVar27 + 0x24) = fVar41;
      *(undefined4 *)(lVar27 + 0x28) = 0;
      uVar3 = *(int *)((long)param_1 + 0x1c4) + 2;
      if (*(uint *)(lVar30 + 0x18) <= uVar3) goto LAB_024ebf9c;
      lVar27 = lVar30 + (long)(int)uVar3 * 0xc;
      fVar32 = fVar32 + fVar38 * (fVar37 + extraout_s0);
      *(float *)(lVar27 + 0x20) = fVar32;
      *(float *)(lVar27 + 0x24) = fVar41;
      *(undefined4 *)(lVar27 + 0x28) = 0;
      uVar3 = *(int *)((long)param_1 + 0x1c4) + 3;
      if (*(uint *)(lVar30 + 0x18) <= uVar3) goto LAB_024ebf9c;
      lVar27 = lVar30 + (long)(int)uVar3 * 0xc;
      *(float *)(lVar27 + 0x20) = fVar32;
      *(float *)(lVar27 + 0x24) = fVar39;
      *(undefined4 *)(lVar27 + 0x28) = 0;
      puVar22 = StringLiteral_1944;
      pvVar23 = (void *)0x0;
      auVar43 = local_d0;
      if (*(long *)(lVar29 + 0x20) == 0) goto LAB_024ebf98;
      lVar27 = *(long *)((long)param_1 + 0x1f0);
      local_d0 = FUN_026fd654(*(long *)(lVar29 + 0x20),0);
      if (*(int *)(*(long *)puVar22 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      pvVar23 = (void *)FUN_026fd218(local_d0,0);
      auVar43 = local_d0;
      if (*(long *)((long)param_1 + 0x30) == 0) goto LAB_024ebf98;
      iVar26 = (int)pvVar23;
      plVar25 = *(long **)(*(long *)((long)param_1 + 0x30) + 0xa8);
      pvVar23 = (void *)0x0;
      if (plVar25 == (long *)0x0) goto LAB_024ebf98;
      pvVar23 = (void *)(**(code **)(*plVar25 + 0x188))(plVar25,*(undefined8 *)(*plVar25 + 400));
      auVar43 = local_d0;
      if (*(long *)(lVar29 + 0x20) == 0) goto LAB_024ebf98;
      iVar1 = (int)pvVar23;
      auVar43 = FUN_026fd654(*(long *)(lVar29 + 0x20),0);
      local_d0 = auVar43;
      pvVar23 = (void *)FUN_026fd220(local_d0,0);
      auVar43 = local_d0;
      if (*(long *)((long)param_1 + 0x30) == 0) goto LAB_024ebf98;
      iVar6 = (int)pvVar23;
      plVar25 = *(long **)(*(long *)((long)param_1 + 0x30) + 0xa8);
      pvVar23 = (void *)0x0;
      if (plVar25 == (long *)0x0) goto LAB_024ebf98;
      pvVar23 = (void *)(**(code **)(*plVar25 + 0x1a8))(plVar25,*(undefined8 *)(*plVar25 + 0x1b0));
      auVar43 = local_d0;
      if (*(long *)(lVar29 + 0x20) == 0) goto LAB_024ebf98;
      iVar7 = (int)pvVar23;
      auVar43 = FUN_026fd654(*(long *)(lVar29 + 0x20),0);
      local_d0 = auVar43;
      pvVar23 = (void *)FUN_026fd220(local_d0,0);
      auVar43 = local_d0;
      if (*(long *)(lVar29 + 0x20) == 0) goto LAB_024ebf98;
      iVar5 = (int)pvVar23;
      auVar43 = FUN_026fd654(*(long *)(lVar29 + 0x20),0);
      local_d0 = auVar43;
      pvVar23 = (void *)FUN_026fd230(local_d0,0);
      auVar43 = local_d0;
      if (*(long *)((long)param_1 + 0x30) == 0) goto LAB_024ebf98;
      iVar4 = (int)pvVar23;
      plVar25 = *(long **)(*(long *)((long)param_1 + 0x30) + 0xa8);
      pvVar23 = (void *)0x0;
      if (plVar25 == (long *)0x0) goto LAB_024ebf98;
      pvVar23 = (void *)(**(code **)(*plVar25 + 0x1a8))(plVar25,*(undefined8 *)(*plVar25 + 0x1b0));
      auVar43 = local_d0;
      if (*(long *)(lVar29 + 0x20) == 0) goto LAB_024ebf98;
      iVar8 = (int)pvVar23;
      auVar43 = FUN_026fd654(*(long *)(lVar29 + 0x20),0);
      local_d0 = auVar43;
      pvVar23 = (void *)FUN_026fd218(local_d0,0);
      auVar43 = local_d0;
      if (*(long *)(lVar29 + 0x20) == 0) goto LAB_024ebf98;
      iVar10 = (int)pvVar23;
      auVar43 = FUN_026fd654(*(long *)(lVar29 + 0x20),0);
      local_d0 = auVar43;
      pvVar23 = (void *)FUN_026fd228(local_d0,0);
      auVar43 = local_d0;
      if (*(long *)((long)param_1 + 0x30) == 0) goto LAB_024ebf98;
      iVar9 = (int)pvVar23;
      plVar25 = *(long **)(*(long *)((long)param_1 + 0x30) + 0xa8);
      pvVar23 = (void *)0x0;
      if (plVar25 == (long *)0x0) goto LAB_024ebf98;
      pvVar23 = (void *)(**(code **)(*plVar25 + 0x188))(plVar25,*(undefined8 *)(*plVar25 + 400));
      auVar43 = local_d0;
      if (lVar27 == 0) goto LAB_024ebf98;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)((long)param_1 + 0x1c4)) goto LAB_024ebf9c;
      lVar29 = lVar27 + (long)(int)*(uint *)((long)param_1 + 0x1c4) * 8;
      fVar32 = (float)iVar26 / (float)iVar1;
      fVar38 = (float)iVar6 / (float)iVar7;
      *(float *)(lVar29 + 0x20) = fVar32;
      *(float *)(lVar29 + 0x24) = fVar38;
      uVar3 = *(int *)((long)param_1 + 0x1c4) + 1;
      if (*(uint *)(lVar27 + 0x18) <= uVar3) goto LAB_024ebf9c;
      lVar29 = lVar27 + (long)(int)uVar3 * 8;
      fVar41 = (float)(iVar4 + iVar5) / (float)iVar8;
      *(float *)(lVar29 + 0x20) = fVar32;
      *(float *)(lVar29 + 0x24) = fVar41;
      uVar3 = *(int *)((long)param_1 + 0x1c4) + 2;
      if (*(uint *)(lVar27 + 0x18) <= uVar3) goto LAB_024ebf9c;
      lVar29 = lVar27 + (long)(int)uVar3 * 8;
      fVar32 = (float)(iVar9 + iVar10) / (float)(int)pvVar23;
      *(float *)(lVar29 + 0x20) = fVar32;
      *(float *)(lVar29 + 0x24) = fVar41;
      uVar3 = *(int *)((long)param_1 + 0x1c4) + 3;
      if (*(uint *)(lVar27 + 0x18) <= uVar3) goto LAB_024ebf9c;
      lVar29 = lVar27 + (long)(int)uVar3 * 8;
      *(float *)(lVar29 + 0x20) = fVar32;
      *(float *)(lVar29 + 0x24) = fVar38;
      pvVar23 = (void *)0x0;
      if (*(long *)((long)param_1 + 0x1c8) == 0) goto LAB_024ebf98;
      FUN_0266b9c4(*(long *)((long)param_1 + 0x1c8),lVar30,0);
      pvVar23 = (void *)0x0;
      auVar43 = local_d0;
      if (*(long *)((long)param_1 + 0x1c8) == 0) goto LAB_024ebf98;
      FUN_0266bbc8(*(long *)((long)param_1 + 0x1c8),lVar27,0);
      plVar25 = *(long **)(lVar31 + 0x20);
      pvVar23 = (void *)0x0;
      auVar43 = local_d0;
      if (plVar25 == (long *)0x0) goto LAB_024ebf98;
      (**(code **)(*plVar25 + 0x7e8))
                (plVar25,*(undefined8 *)((long)param_1 + 0x1c8),
                 *(undefined4 *)((long)param_1 + 0x1c0),*(undefined8 *)(*plVar25 + 0x7f0));
      iVar26 = *(int *)((long)param_1 + 0x40);
      if (*(int *)((long)param_1 + 0x3c) < 1) {
        if (*(int *)((long)param_1 + 0x28) < iVar26) {
          iVar26 = iVar26 + -1;
        }
        else {
          iVar26 = *(int *)((long)param_1 + 0x2c);
        }
      }
      else if (iVar26 < *(int *)((long)param_1 + 0x2c)) {
        iVar26 = iVar26 + 1;
      }
      else {
        iVar26 = *(int *)((long)param_1 + 0x28);
      }
      *(int *)((long)param_1 + 0x40) = iVar26;
    }
    fVar32 = *(float *)((long)param_1 + 0x21c);
    fVar38 = (float)FUN_02689110(0);
    *(undefined8 *)((long)param_1 + 0x18) = 0;
    *(float *)((long)param_1 + 0x21c) = fVar32 + fVar38;
    *(undefined4 *)((long)param_1 + 0x10) = 2;
    uVar28 = 1;
  }
  else {
    if (iVar26 == 1) {
      lVar29 = *(long *)((long)param_1 + 0x30);
      *(undefined4 *)((long)param_1 + 0x10) = 0xffffffff;
      *(undefined4 *)((long)param_1 + 0x40) = *(undefined4 *)((long)param_1 + 0x28);
      auVar43 = ZEXT816(0);
      if (lVar29 == 0) goto LAB_024ebf98;
      iVar26 = *(int *)((long)param_1 + 0x2c);
      if (*(long *)(lVar29 + 0x38) == 0) {
        pvVar23 = (void *)FUN_024ec04c(lVar29);
      }
      auVar11._8_8_ = local_d0._8_8_;
      auVar11._0_8_ = local_d0._0_8_;
      auVar43._8_8_ = local_d0._8_8_;
      auVar43._0_8_ = local_d0._0_8_;
      if (*(long *)(lVar29 + 0xb0) == 0) goto LAB_024ebf98;
      if (*(int *)(*(long *)(lVar29 + 0xb0) + 0x18) < iVar26) {
        lVar29 = *(long *)((long)param_1 + 0x30);
        auVar43 = auVar11;
        if (lVar29 == 0) goto LAB_024ebf98;
        if (*(long *)(lVar29 + 0x38) == 0) {
          pvVar23 = (void *)FUN_024ec04c(lVar29);
        }
        auVar43._8_8_ = local_d0._8_8_;
        auVar43._0_8_ = local_d0._0_8_;
        if (*(long *)(lVar29 + 0xb0) == 0) goto LAB_024ebf98;
        *(int *)((long)param_1 + 0x2c) = *(int *)(*(long *)(lVar29 + 0xb0) + 0x18) + -1;
      }
      auVar13._8_8_ = local_d0._8_8_;
      auVar13._0_8_ = local_d0._0_8_;
      auVar12._8_8_ = local_d0._8_8_;
      auVar12._0_8_ = local_d0._0_8_;
      auVar43._8_8_ = local_d0._8_8_;
      auVar43._0_8_ = local_d0._0_8_;
      if ((((lVar31 == 0) || (auVar43 = auVar12, *(long *)(lVar31 + 0x20) == 0)) ||
          (lVar29 = *(long *)(*(long *)(lVar31 + 0x20) + 0x360), auVar43 = auVar13, lVar29 == 0)) ||
         (lVar29 = *(long *)(lVar29 + 0x38), auVar43 = local_d0, lVar29 == 0)) goto LAB_024ebf98;
      if (*(uint *)(lVar29 + 0x18) <= *(uint *)((long)param_1 + 0x38)) goto LAB_024ebf9c;
      pvVar23 = memmove((void *)((long)param_1 + 0x48),
                        (void *)(lVar29 + (long)(int)*(uint *)((long)param_1 + 0x38) * 0x178 + 0x20)
                        ,0x178);
      auVar14._8_8_ = local_d0._8_8_;
      auVar14._0_8_ = local_d0._0_8_;
      auVar43._8_8_ = local_d0._8_8_;
      auVar43._0_8_ = local_d0._0_8_;
      uVar3 = *(uint *)((long)param_1 + 0x80);
      *(uint *)((long)param_1 + 0x1c0) = uVar3;
      *(undefined4 *)((long)param_1 + 0x1c4) = *(undefined4 *)((long)param_1 + 0x94);
      if (((*(long *)(lVar31 + 0x20) == 0) ||
          (lVar29 = *(long *)(*(long *)(lVar31 + 0x20) + 0x360), auVar43 = auVar14, lVar29 == 0)) ||
         (lVar29 = *(long *)(lVar29 + 0x60), auVar43 = local_d0, lVar29 == 0)) goto LAB_024ebf98;
      if (*(uint *)(lVar29 + 0x18) <= uVar3) goto LAB_024ebf9c;
      pvVar23 = memmove((void *)((long)param_1 + 0x1c8),
                        (void *)(lVar29 + (long)(int)uVar3 * 0x50 + 0x20),0x50);
      auVar43._8_8_ = local_d0._8_8_;
      auVar43._0_8_ = local_d0._0_8_;
      lVar29 = *(long *)((long)param_1 + 0x30);
      if (lVar29 == 0) goto LAB_024ebf98;
      if (*(long *)(lVar29 + 0x38) == 0) {
        FUN_024ec04c(lVar29);
      }
      auVar43._8_8_ = local_d0._8_8_;
      auVar43._0_8_ = local_d0._0_8_;
      pvVar23 = (void *)0x0;
      if (*(long *)(lVar29 + 0xb0) == 0) goto LAB_024ebf98;
      pvVar23 = (void *)FUN_0132138c(*(long *)(lVar29 + 0xb0),*(undefined4 *)((long)param_1 + 0x28),
                                     &local_e8,*(undefined8 *)puVar22);
      auVar15._8_8_ = local_d0._8_8_;
      auVar15._0_8_ = local_d0._0_8_;
      auVar43._8_8_ = local_d0._8_8_;
      auVar43._0_8_ = local_d0._0_8_;
      if ((CONCAT44(uStack_e4,local_e8) == 0) ||
         (lVar29 = *(long *)((long)param_1 + 0x30), auVar43 = auVar15, lVar29 == 0))
      goto LAB_024ebf98;
      fVar38 = *(float *)(CONCAT44(uStack_e4,local_e8) + 0x2c);
      if (*(long *)(lVar29 + 0x38) == 0) {
        FUN_024ec04c(lVar29);
      }
      auVar43._8_8_ = local_d0._8_8_;
      auVar43._0_8_ = local_d0._0_8_;
      pvVar23 = (void *)0x0;
      if (*(long *)(lVar29 + 0xb0) == 0) goto LAB_024ebf98;
      pvVar23 = (void *)FUN_0132138c(*(long *)(lVar29 + 0xb0),*(undefined4 *)((long)param_1 + 0x28),
                                     &local_e8,*(undefined8 *)puVar22);
      auVar16._8_8_ = local_d0._8_8_;
      auVar16._0_8_ = local_d0._0_8_;
      auVar43._8_8_ = local_d0._8_8_;
      auVar43._0_8_ = local_d0._0_8_;
      if (CONCAT44(uStack_e4,local_e8) == 0) goto LAB_024ebf98;
      lVar29 = *(long *)(CONCAT44(uStack_e4,local_e8) + 0x20);
      pvVar23 = (void *)0x0;
      auVar43 = auVar16;
      if (lVar29 == 0) goto LAB_024ebf98;
      fVar32 = (float)FUN_026fd668(lVar29,0);
      *(undefined4 *)((long)param_1 + 0x21c) = 0;
      *(float *)((long)param_1 + 0x218) = fVar38 * fVar32;
      iVar26 = *(int *)((long)param_1 + 0x3c);
      if (DAT_03775283 == '\0') {
        thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
        DAT_03775283 = '\x01';
      }
      pvVar23 = *(void **)System_Threading_Timer_TimerComparer_TypeInfo;
      if (*(int *)((long)pvVar23 + 0xe0) == 0) {
        pvVar23 = (void *)thunk_FUN_00d32864();
      }
      iVar1 = -iVar26;
      if (-1 < iVar26) {
        iVar1 = iVar26;
      }
      fVar38 = 1.0 / (float)iVar1;
      *(float *)((long)param_1 + 0x220) = fVar38;
      goto LAB_024eb974;
    }
    pvVar23 = (void *)0x0;
    if (iVar26 != 0) {
      return 0;
    }
    *(undefined4 *)((long)param_1 + 0x10) = 0xffffffff;
    auVar43 = ZEXT816(0);
    if (lVar31 == 0) goto LAB_024ebf98;
    uVar28 = *(undefined8 *)(lVar31 + 0x20);
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar24 = FUN_0268b4e0(uVar28,0,0);
    if ((uVar24 & 1) == 0) {
      *(undefined8 *)((long)param_1 + 0x18) = 0;
      *(undefined4 *)((long)param_1 + 0x10) = 1;
      return 1;
    }
LAB_024eb9f4:
    uVar28 = 0;
  }
  return uVar28;
}


