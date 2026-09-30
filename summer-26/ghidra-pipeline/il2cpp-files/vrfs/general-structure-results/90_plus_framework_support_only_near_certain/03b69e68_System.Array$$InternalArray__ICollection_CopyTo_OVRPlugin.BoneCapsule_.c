/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.BoneCapsule>
ENTRY_POINT: 03b69e68
PROGRAM: vrfs-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_BoneCapsule>
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16],long param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  float *pfVar13;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  uint uVar17;
  long *plVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  float fStack0000000000000090;
  float fStack0000000000000094;
  float in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  float fStack0000000000000108;
  float fStack000000000000010c;
  
  uVar30 = param_4._0_8_;
  uVar16 = param_3._0_8_;
  uVar15 = param_2._0_8_;
  *(long *)(unaff_x21 + 0x28) = param_4._8_8_;
  *(undefined8 *)(unaff_x21 + 0x20) = uVar30;
  *(long *)(unaff_x21 + 0x54) = param_2._8_8_;
  *(undefined8 *)(unaff_x21 + 0x4c) = uVar15;
  *(long *)(unaff_x21 + 0x38) = param_3._8_8_;
  *(undefined8 *)(unaff_x21 + 0x30) = uVar16;
  *(long *)(unaff_x21 + 0x48) = param_1._8_8_;
  *(long *)(unaff_x21 + 0x40) = param_1._0_8_;
  puVar2 = PTR_DAT_06d9fd78;
  if (param_5 != 0) {
    uVar8 = FUN_049afbe0(param_5,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_016466fc(*(long *)puVar2);
    }
    puVar3 = PTR_DAT_06df9580;
    uVar9 = FUN_051d2ac0(uVar8,0,0);
    fVar33 = (float)uVar16;
    fVar35 = (float)uVar15;
    uVar19 = (undefined4)uVar30;
    if ((uVar9 & 1) != 0) {
      if (unaff_x20 == 0) goto LAB_03b6b08c;
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      if (0 < (int)uVar1) {
        uVar17 = 0;
        do {
          if (uVar1 <= uVar17) goto LAB_03b6b0c8;
          plVar18 = (long *)(unaff_x20 + (long)(int)uVar17 * 8 + 0x20);
          lVar12 = *plVar18;
          if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x18), lVar12 == 0)) goto LAB_03b6b08c;
          uVar8 = FUN_0431ae70(lVar12,*(undefined8 *)puVar3);
          if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_03b6b08c;
          uVar10 = FUN_049afbe0(*(long *)(unaff_x19 + 0x18),0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_016466fc(*(long *)puVar2);
          }
          uVar9 = FUN_051d94d4(uVar8,uVar10,0);
          if ((uVar9 & 1) != 0) {
            if (*(uint *)(unaff_x20 + 0x18) <= uVar17) goto LAB_03b6b0c8;
            lVar12 = *plVar18;
            if (lVar12 == 0) goto LAB_03b6b08c;
            *(undefined8 *)(unaff_x19 + 0xc0) = *(undefined8 *)(lVar12 + 0x20);
            thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0xc0));
          }
          fVar33 = (float)uVar16;
          fVar35 = (float)uVar15;
          uVar19 = (undefined4)uVar30;
          uVar1 = *(uint *)(unaff_x20 + 0x18);
          uVar17 = uVar17 + 1;
        } while ((int)uVar17 < (int)uVar1);
      }
    }
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      lVar12 = FUN_051e5130(*(long *)(unaff_x19 + 0x18),0);
      plVar18 = (long *)(unaff_x19 + 0xb0);
      *plVar18 = lVar12;
      thunk_FUN_01656ef8(plVar18,lVar12);
      if (*plVar18 != 0) {
        lVar12 = FUN_0431ae70(*plVar18,*(undefined8 *)puVar3);
        plVar14 = (long *)(unaff_x19 + 0xb8);
        *plVar14 = lVar12;
        thunk_FUN_01656ef8(plVar14,lVar12);
        FUN_03b6b0d8();
        FUN_03b66608();
        FUN_03b6b244();
        puVar3 = PTR_DAT_06e50440;
        if (*(long *)(unaff_x19 + 0x300) != 0) {
          if (*(long *)(*(long *)(unaff_x19 + 0x300) + 0x18) == 0) {
            if (DAT_0722a398 == '\0') {
              thunk_FUN_0159f088(PTR_DAT_06e50440);
              DAT_0722a398 = '\x01';
            }
            if (*plVar18 == 0) goto LAB_03b6b08c;
            lVar12 = *(long *)(*(long *)puVar3 + 0xb8);
            fVar31 = *(float *)(lVar12 + 0xc);
            fVar32 = *(float *)(lVar12 + 0x10);
            fVar34 = *(float *)(lVar12 + 0x14);
            lVar12 = FUN_0431ae70(*plVar18,*(undefined8 *)PTR_DAT_06dfafe8);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_016466fc(*(long *)puVar2);
            }
            uVar9 = FUN_051d2ac0(lVar12,0,0);
            if ((uVar9 & 1) == 0) {
              uVar9 = (ulong)(uint)(fVar31 * DAT_0534c250);
              fVar35 = fVar32 * DAT_0534c250;
              fVar33 = fVar34 * DAT_0534c250;
            }
            else {
              if (lVar12 == 0) goto LAB_03b6b08c;
              FUN_0486aa88(&stack0x00000050,lVar12,0);
              in_stack_000000a8 = in_stack_00000058;
              in_stack_000000a0 = in_stack_00000050;
              in_stack_000000b0 = in_stack_00000060;
              uVar9 = FUN_051db98c(&stack0x000000a0,0);
            }
            lVar12 = *plVar14;
            if (lVar12 == 0) goto LAB_03b6b08c;
            uVar19 = FUN_049ac010(lVar12,0);
            FUN_03b8c508(uVar9,0);
            FUN_049ac798(lVar12,0);
          }
          uVar15 = *(undefined8 *)(unaff_x19 + 0xc0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          uVar9 = FUN_051d2ac0(uVar15,0,0);
          if ((uVar9 & 1) == 0) {
            if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_03b6b08c;
            uVar15 = Fusion_CloudServices_<get_CommittedPlayerInternal>d__112__System_Collections_Generic_IEnumerable<Fusion_PlayerRef>_GetEnumerator
                               (*(long *)(unaff_x19 + 0x20),0);
          }
          else {
            uVar15 = *(undefined8 *)(unaff_x19 + 0xc0);
          }
          *(undefined8 *)(unaff_x19 + 0x2e0) = uVar15;
          thunk_FUN_01656ef8(unaff_x19 + 0x2e0);
          if (*(long *)(unaff_x19 + 0x18) != 0) {
            uVar15 = FUN_049afbe0(*(long *)(unaff_x19 + 0x18),0);
            *(undefined8 *)(unaff_x19 + 0x140) = uVar15;
            thunk_FUN_01656ef8(unaff_x19 + 0x140);
            if (*(long *)(unaff_x19 + 0x20) != 0) {
              uVar15 = Fusion_CloudServices_<get_CommittedPlayerInternal>d__112__System_Collections_Generic_IEnumerable<Fusion_PlayerRef>_GetEnumerator
                                 (*(long *)(unaff_x19 + 0x20),0);
              *(undefined8 *)(unaff_x19 + 0x148) = uVar15;
              thunk_FUN_01656ef8(unaff_x19 + 0x148);
              if ((*(long *)(unaff_x19 + 0x18) != 0) &&
                 (lVar12 = FUN_051e5130(*(long *)(unaff_x19 + 0x18),0), lVar12 != 0)) {
                uVar15 = Fusion_CloudServices_<get_CommittedPlayerInternal>d__112__System_Collections_Generic_IEnumerable<Fusion_PlayerRef>_GetEnumerator
                                   (lVar12,0);
                *(undefined8 *)(unaff_x19 + 0x180) = uVar15;
                thunk_FUN_01656ef8(unaff_x19 + 0x180);
                if ((*(long *)(unaff_x19 + 0x18) != 0) &&
                   (lVar12 = FUN_051e5130(*(long *)(unaff_x19 + 0x18),0), lVar12 != 0)) {
                  uVar20 = Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar12,0);
                  *(undefined4 *)(unaff_x19 + 0x188) = uVar20;
                  *(float *)(unaff_x19 + 0x18c) = fVar35;
                  *(float *)(unaff_x19 + 400) = fVar33;
                  if ((*(long *)(unaff_x19 + 0x18) != 0) &&
                     (lVar12 = FUN_051e5130(*(long *)(unaff_x19 + 0x18),0), lVar12 != 0)) {
                    uVar20 = FUN_04f1adf8(lVar12,0);
                    *(undefined4 *)(unaff_x19 + 0x194) = uVar20;
                    *(float *)(unaff_x19 + 0x198) = fVar35;
                    *(float *)(unaff_x19 + 0x19c) = fVar33;
                    *(undefined4 *)(unaff_x19 + 0x1a0) = uVar19;
                    if (*(long *)(unaff_x19 + 0x20) != 0) {
                      uVar20 = Fusion_CloudServices_<Join>d__84__SetStateMachine
                                         (*(long *)(unaff_x19 + 0x20),0);
                      *(undefined4 *)(unaff_x19 + 0x1a4) = uVar20;
                      *(float *)(unaff_x19 + 0x1a8) = fVar35;
                      *(float *)(unaff_x19 + 0x1ac) = fVar33;
                      if (*(long *)(unaff_x19 + 0x20) != 0) {
                        uVar20 = FUN_04f1adf8(*(long *)(unaff_x19 + 0x20),0);
                        *(undefined4 *)(unaff_x19 + 0x1b0) = uVar20;
                        *(float *)(unaff_x19 + 0x1b4) = fVar35;
                        *(float *)(unaff_x19 + 0x1b8) = fVar33;
                        *(undefined4 *)(unaff_x19 + 0x1bc) = uVar19;
                        if (*(long *)(unaff_x19 + 0x18) != 0) {
                          uVar20 = FUN_049b09fc(*(long *)(unaff_x19 + 0x18),0);
                          *(undefined4 *)(unaff_x19 + 0x1c0) = uVar20;
                          if (*(long *)(unaff_x19 + 0x18) != 0) {
                            uVar20 = FUN_049b0a7c(*(long *)(unaff_x19 + 0x18),0);
                            *(undefined4 *)(unaff_x19 + 0x1c4) = uVar20;
                            if (*(long *)(unaff_x19 + 0x18) != 0) {
                              uVar20 = FUN_049b0afc(*(long *)(unaff_x19 + 0x18),0);
                              *(undefined4 *)(unaff_x19 + 0x1c8) = uVar20;
                              uVar20 = FUN_03b6b36c();
                              *(undefined4 *)(unaff_x19 + 0x240) = uVar20;
                              *(float *)(unaff_x19 + 0x244) = fVar35;
                              *(float *)(unaff_x19 + 0x248) = fVar33;
                              *(undefined4 *)(unaff_x19 + 0x24c) = uVar19;
                              if (*(long *)(unaff_x19 + 0x18) != 0) {
                                fVar31 = (float)FUN_049afc60(*(long *)(unaff_x19 + 0x18),0);
                                if (*(long *)(unaff_x19 + 0x18) != 0) {
                                  fVar32 = fVar33;
                                  fVar34 = fVar35;
                                  fVar21 = (float)FUN_049b0744(*(long *)(unaff_x19 + 0x18),0);
                                  fVar26 = fVar31 * fVar32;
                                  fVar32 = fVar35 * fVar32 - fVar33 * fVar34;
                                  fVar33 = fVar33 * fVar21 - fVar26;
                                  fVar35 = fVar31 * fVar34 - fVar35 * fVar21;
                                  fStack0000000000000090 = fVar32;
                                  fStack0000000000000094 = fVar33;
                                  in_stack_00000098 = fVar35;
                                  if (DAT_0722a39f == '\0') {
                                    thunk_FUN_0159f088(PTR_DAT_06e1a840);
                                    DAT_0722a39f = '\x01';
                                  }
                                  puVar4 = PTR_DAT_06e1a840;
                                  if (*(int *)(*(long *)PTR_DAT_06e1a840 + 0xe0) == 0) {
                                    thunk_FUN_016466fc();
                                  }
                                  fVar31 = DAT_0533fbb4;
                                  fVar21 = fVar35 * fVar35;
                                  fVar34 = SQRT(fVar21 + fVar32 * fVar32 + fVar33 * fVar33);
                                  if (fVar34 <= DAT_0533fbb4) {
                                    if (DAT_0722a13e == '\0') {
                                      thunk_FUN_0159f088(PTR_DAT_06e50440);
                                      DAT_0722a13e = '\x01';
                                    }
                                    pfVar13 = *(float **)(*(long *)puVar3 + 0xb8);
                                    fVar32 = *pfVar13;
                                    fVar33 = pfVar13[1];
                                    fVar35 = pfVar13[2];
                                  }
                                  else {
                                    fVar32 = fVar32 / fVar34;
                                    fVar33 = fVar33 / fVar34;
                                    fVar35 = fVar35 / fVar34;
                                  }
                                  if (*(long *)(unaff_x19 + 0x18) != 0) {
                                    fVar34 = (float)FUN_049afc60(*(long *)(unaff_x19 + 0x18),0);
                                    fVar36 = fVar33 * fVar26 - fVar35 * fVar21;
                                    fVar26 = fVar35 * fVar34 - fVar32 * fVar26;
                                    fVar34 = fVar32 * fVar21 - fVar33 * fVar34;
                                    fStack0000000000000090 = fVar36;
                                    fStack0000000000000094 = fVar26;
                                    in_stack_00000098 = fVar34;
                                    if (DAT_0722a39f == '\0') {
                                      thunk_FUN_0159f088(PTR_DAT_06e1a840);
                                      DAT_0722a39f = '\x01';
                                    }
                                    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                                      thunk_FUN_016466fc();
                                    }
                                    fVar21 = SQRT(fVar34 * fVar34 +
                                                  fVar36 * fVar36 + fVar26 * fVar26);
                                    if (fVar21 <= fVar31) {
                                      if (DAT_0722a13e == '\0') {
                                        thunk_FUN_0159f088(PTR_DAT_06e50440);
                                        DAT_0722a13e = '\x01';
                                      }
                                      pfVar13 = *(float **)(*(long *)puVar3 + 0xb8);
                                      fVar36 = *pfVar13;
                                      fVar26 = pfVar13[1];
                                      fVar34 = pfVar13[2];
                                    }
                                    else {
                                      fVar36 = fVar36 / fVar21;
                                      fVar26 = fVar26 / fVar21;
                                      fVar34 = fVar34 / fVar21;
                                    }
                                    puVar6 = PTR_DAT_06e52cd8;
                                    puVar5 = PTR_DAT_06e2ec60;
                                    puVar4 = PTR_DAT_06ddc378;
                                    fVar31 = DAT_0534bf7c;
                                    fVar34 = fVar35 - fVar34;
                                    fVar21 = fVar34 * fVar34;
                                    if (fVar21 + (fVar32 - fVar36) * (fVar32 - fVar36) +
                                                 (fVar33 - fVar26) * (fVar33 - fVar26) <
                                        DAT_0534bf7c) {
                                      if (*(long *)(unaff_x19 + 0x18) != 0) {
                                        uVar15 = FUN_051e0500(*(long *)(unaff_x19 + 0x18),0);
                                        uVar15 = FUN_02526be4(*(undefined8 *)puVar4,uVar15,
                                                              *(undefined8 *)puVar5,0);
                                        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                                          thunk_FUN_016466fc(*(long *)puVar6);
                                        }
                                        FUN_0486672c(uVar15,0);
                                        return;
                                      }
                                    }
                                    else {
                                      fStack0000000000000108 = fVar26;
                                      fStack000000000000010c = fVar36;
                                      if (*(long *)(unaff_x19 + 0x20) != 0) {
                                        fVar26 = DAT_0534bf7c;
                                        FUN_04f1adf8(*(long *)(unaff_x19 + 0x20),0);
                                        fVar36 = (float)FUN_04f13694(0);
                                        if (*plVar18 != 0) {
                                          fVar23 = fVar26;
                                          fVar25 = fVar21;
                                          fVar28 = fVar34;
                                          fVar22 = (float)FUN_04f1adf8(*plVar18,0);
                                          fVar27 = fVar34 * fVar28;
                                          fVar29 = fVar36 * fVar25 +
                                                   fVar26 * fVar28 + fVar34 * fVar23;
                                          fVar24 = ((fVar26 * fVar23 - fVar36 * fVar22) -
                                                   fVar21 * fVar25) - fVar27;
                                          *(float *)(unaff_x19 + 0x2b0) =
                                               (fVar21 * fVar28 + fVar26 * fVar22 + fVar36 * fVar23)
                                               - fVar34 * fVar25;
                                          *(float *)(unaff_x19 + 0x2b4) =
                                               (fVar34 * fVar22 + fVar26 * fVar25 + fVar21 * fVar23)
                                               - fVar36 * fVar28;
                                          *(float *)(unaff_x19 + 0x2b8) = fVar29 - fVar21 * fVar22;
                                          *(float *)(unaff_x19 + 700) = fVar24;
                                          if (*(long *)(unaff_x19 + 0x20) != 0) {
                                            lVar12 = *(long *)(unaff_x19 + 0xb0);
                                            Fusion_CloudServices_<Join>d__84__SetStateMachine
                                                      (*(long *)(unaff_x19 + 0x20),0);
                                            if (lVar12 != 0) {
                                              uVar19 = FUN_04f1c838(lVar12,0);
                                              *(undefined4 *)(unaff_x19 + 0x150) = uVar19;
                                              *(float *)(unaff_x19 + 0x154) = fVar24;
                                              *(float *)(unaff_x19 + 0x158) = fVar27;
                                              if (*(long *)(unaff_x19 + 0xb0) != 0) {
                                                FUN_04f1adf8(*(long *)(unaff_x19 + 0xb0),0);
                                                fVar34 = (float)FUN_04f13694(0);
                                                if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                  fVar21 = fVar29;
                                                  fVar26 = fVar24;
                                                  fVar36 = fVar27;
                                                  fVar23 = (float)FUN_04f1adf8(*(long *)(unaff_x19 +
                                                                                        0x20),0);
                                                  fVar25 = (fVar27 * fVar23 +
                                                           fVar29 * fVar26 + fVar24 * fVar21) -
                                                           fVar34 * fVar36;
                                                  fVar28 = (fVar34 * fVar26 +
                                                           fVar29 * fVar36 + fVar27 * fVar21) -
                                                           fVar24 * fVar23;
                                                  fVar22 = ((fVar29 * fVar21 - fVar34 * fVar23) -
                                                           fVar24 * fVar26) - fVar27 * fVar36;
                                                  *(float *)(unaff_x19 + 0x15c) =
                                                       (fVar24 * fVar36 +
                                                       fVar29 * fVar23 + fVar34 * fVar21) -
                                                       fVar27 * fVar26;
                                                  *(float *)(unaff_x19 + 0x160) = fVar25;
                                                  *(float *)(unaff_x19 + 0x164) = fVar28;
                                                  *(float *)(unaff_x19 + 0x168) = fVar22;
                                                  uVar19 = FUN_04f13694(0);
                                                  *(undefined4 *)(unaff_x19 + 0x344) = uVar19;
                                                  *(float *)(unaff_x19 + 0x348) = fVar25;
                                                  *(float *)(unaff_x19 + 0x34c) = fVar28;
                                                  *(float *)(unaff_x19 + 0x350) = fVar22;
                                                  if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                    uVar15 = FUN_04f1adf8(*(long *)(unaff_x19 + 0x20
                                                                                   ),0);
                                                    if (*plVar18 != 0) {
                                                      FUN_04f1adf8(*plVar18,0);
                                                      uVar19 = FUN_03b5df08(uVar15);
                                                      *(float *)(unaff_x19 + 0x178) = fVar22;
                                                      *(undefined4 *)(unaff_x19 + 0x16c) = uVar19;
                                                      *(float *)(unaff_x19 + 0x170) = fVar25;
                                                      *(float *)(unaff_x19 + 0x174) = fVar28;
                                                      fVar26 = fStack000000000000010c;
                                                      fVar36 = (float)FUN_04f13c44(fVar32,0);
                                                      fVar32 = fVar33;
                                                      fVar34 = fVar35;
                                                      fVar21 = fVar26;
                                                      uVar19 = FUN_04f13694(0);
                                                      *(undefined4 *)(unaff_x19 + 0x270) = uVar19;
                                                      *(float *)(unaff_x19 + 0x274) = fVar32;
                                                      *(float *)(unaff_x19 + 0x278) = fVar34;
                                                      *(float *)(unaff_x19 + 0x27c) = fVar21;
                                                      fVar32 = *(float *)(unaff_x19 + 0x24c);
                                                      fVar34 = *(float *)(unaff_x19 + 0x240);
                                                      fVar21 = *(float *)(unaff_x19 + 0x244);
                                                      fVar28 = *(float *)(unaff_x19 + 0x248);
                                                      fVar22 = fVar35 * fVar28;
                                                      fVar23 = (fVar35 * fVar21 +
                                                               fVar26 * fVar34 + fVar36 * fVar32) -
                                                               fVar33 * fVar28;
                                                      fVar25 = (fVar36 * fVar28 +
                                                               fVar26 * fVar21 + fVar33 * fVar32) -
                                                               fVar35 * fVar34;
                                                      *(float *)(unaff_x19 + 0x280) = fVar23;
                                                      *(float *)(unaff_x19 + 0x284) = fVar25;
                                                      *(float *)(unaff_x19 + 0x288) =
                                                           (fVar33 * fVar34 +
                                                           fVar26 * fVar28 + fVar35 * fVar32) -
                                                           fVar36 * fVar21;
                                                      *(float *)(unaff_x19 + 0x28c) =
                                                           ((fVar26 * fVar32 - fVar36 * fVar34) -
                                                           fVar33 * fVar21) - fVar22;
                                                      FUN_03b6b42c();
                                                      fVar34 = (float)FUN_04f13694(0);
                                                      fVar35 = fVar22;
                                                      fVar33 = fVar23;
                                                      fVar32 = fVar25;
                                                      fVar21 = (float)FUN_03b6b4e4();
                                                      fVar28 = fVar25 * fVar32;
                                                      fVar24 = fVar34 * fVar33 +
                                                               fVar22 * fVar32 + fVar25 * fVar35;
                                                      fVar26 = ((fVar22 * fVar35 - fVar34 * fVar21)
                                                               - fVar23 * fVar33) - fVar28;
                                                      *(float *)(unaff_x19 + 0x260) =
                                                           (fVar23 * fVar32 +
                                                           fVar22 * fVar21 + fVar34 * fVar35) -
                                                           fVar25 * fVar33;
                                                      *(float *)(unaff_x19 + 0x264) =
                                                           (fVar25 * fVar21 +
                                                           fVar22 * fVar33 + fVar23 * fVar35) -
                                                           fVar34 * fVar32;
                                                      *(float *)(unaff_x19 + 0x268) =
                                                           fVar24 - fVar23 * fVar21;
                                                      *(float *)(unaff_x19 + 0x26c) = fVar26;
                                                      FUN_03b6b618();
                                                      fVar34 = (float)FUN_04f13694(0);
                                                      fVar35 = fVar24;
                                                      fVar33 = fVar26;
                                                      fVar32 = fVar28;
                                                      fVar21 = (float)FUN_03b6b36c();
                                                      fVar23 = fVar28 * fVar32;
                                                      fVar25 = fVar34 * fVar33 +
                                                               fVar24 * fVar32 + fVar28 * fVar35;
                                                      fVar36 = ((fVar24 * fVar35 - fVar34 * fVar21)
                                                               - fVar26 * fVar33) - fVar23;
                                                      *(float *)(unaff_x19 + 0x250) =
                                                           (fVar26 * fVar32 +
                                                           fVar24 * fVar21 + fVar34 * fVar35) -
                                                           fVar28 * fVar33;
                                                      *(float *)(unaff_x19 + 0x254) =
                                                           (fVar28 * fVar21 +
                                                           fVar24 * fVar33 + fVar26 * fVar35) -
                                                           fVar34 * fVar32;
                                                      *(float *)(unaff_x19 + 600) =
                                                           fVar25 - fVar26 * fVar21;
                                                      *(float *)(unaff_x19 + 0x25c) = fVar36;
                                                      if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                        uVar15 = FUN_049afbe0(*(long *)(unaff_x19 +
                                                                                       0x18),0);
                                                        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                                                          thunk_FUN_016466fc(*(long *)puVar2);
                                                        }
                                                        uVar9 = FUN_051d2ac0(uVar15,0,0);
                                                        if ((uVar9 & 1) != 0) {
                                                          if (*(long *)(unaff_x19 + 0x18) == 0)
                                                          goto LAB_03b6b08c;
                                                          FUN_049b0044(*(long *)(unaff_x19 + 0x18),0
                                                                       ,0);
                                                          if ((*(long *)(unaff_x19 + 0x18) == 0) ||
                                                             (lVar12 = FUN_049afbe0(*(long *)(
                                                  unaff_x19 + 0x18),0), lVar12 == 0))
                                                  goto LAB_03b6b08c;
                                                  uVar15 = FUN_051e5130(lVar12,0);
                                                  *(undefined8 *)(unaff_x19 + 0x2e8) = uVar15;
                                                  thunk_FUN_01656ef8(unaff_x19 + 0x2e8);
                                                  if (*(long *)(unaff_x19 + 0x20) == 0)
                                                  goto LAB_03b6b08c;
                                                  uVar15 = 
                                                  Fusion_CloudServices_<get_CommittedPlayerInternal>d__112__System_Collections_Generic_IEnumerable<Fusion_PlayerRef>_GetEnumerator
                                                            (*(long *)(unaff_x19 + 0x20),0);
                                                  uVar16 = *(undefined8 *)(unaff_x19 + 0xc0);
                                                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                                                    thunk_FUN_016466fc(*(long *)puVar2);
                                                  }
                                                  bVar7 = FUN_051d94d4(uVar15,uVar16,0);
                                                  *(byte *)(unaff_x19 + 0x2fc) = bVar7 & 1;
                                                  FUN_03b6b758();
                                                  }
                                                  if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                    uVar19 = FUN_049b09fc(*(long *)(unaff_x19 + 0x18
                                                                                   ),0);
                                                    *(undefined4 *)(unaff_x19 + 0x2f0) = uVar19;
                                                    if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                      uVar19 = FUN_049b0a7c(*(long *)(unaff_x19 +
                                                                                     0x18),0);
                                                      *(undefined4 *)(unaff_x19 + 0x2f4) = uVar19;
                                                      if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                        uVar19 = FUN_049b0afc(*(long *)(unaff_x19 +
                                                                                       0x18),0);
                                                        *(undefined4 *)(unaff_x19 + 0x2f8) = uVar19;
                                                        if ((*(long *)(unaff_x19 + 0xb8) != 0) &&
                                                           (lVar12 = FUN_051e5130(*(long *)(
                                                  unaff_x19 + 0xb8),0), lVar12 != 0)) {
                                                    FUN_04f1adf8(lVar12,0);
                                                    fVar35 = (float)FUN_04f13694(0);
                                                    if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                      fVar33 = fVar25;
                                                      fVar32 = fVar36;
                                                      fVar34 = fVar23;
                                                      fVar21 = (float)FUN_04f1adf8(*(long *)(
                                                  unaff_x19 + 0x20),0);
                                                  fVar28 = fVar23 * fVar34;
                                                  fVar22 = fVar35 * fVar32 +
                                                           fVar25 * fVar34 + fVar23 * fVar33;
                                                  fVar26 = ((fVar25 * fVar33 - fVar35 * fVar21) -
                                                           fVar36 * fVar32) - fVar28;
                                                  *(float *)(unaff_x19 + 300) =
                                                       (fVar36 * fVar34 +
                                                       fVar25 * fVar21 + fVar35 * fVar33) -
                                                       fVar23 * fVar32;
                                                  *(float *)(unaff_x19 + 0x130) =
                                                       (fVar23 * fVar21 +
                                                       fVar25 * fVar32 + fVar36 * fVar33) -
                                                       fVar35 * fVar34;
                                                  *(float *)(unaff_x19 + 0x134) =
                                                       fVar22 - fVar36 * fVar21;
                                                  *(float *)(unaff_x19 + 0x138) = fVar26;
                                                  if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                    uVar15 = FUN_049afbe0(*(long *)(unaff_x19 + 0x18
                                                                                   ),0);
                                                    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                                                      thunk_FUN_016466fc(*(long *)puVar2);
                                                    }
                                                    uVar9 = FUN_051d94d4(uVar15,0,0);
                                                    if ((uVar9 & 1) == 0) {
                                                      if ((*(long *)(unaff_x19 + 0x18) == 0) ||
                                                         (lVar12 = FUN_049afbe0(*(long *)(unaff_x19
                                                                                         + 0x18),0),
                                                         lVar12 == 0)) goto LAB_03b6b08c;
                                                      lVar12 = FUN_051e5130(lVar12,0);
                                                      if ((*plVar18 == 0) ||
                                                         (
                                                  Fusion_CloudServices_<Join>d__84__SetStateMachine
                                                            (*plVar18,0), lVar12 == 0))
                                                  goto LAB_03b6b08c;
                                                  uVar19 = FUN_04f1c838(lVar12,0);
                                                  *(undefined4 *)(unaff_x19 + 0x21c) = uVar19;
                                                  *(float *)(unaff_x19 + 0x220) = fVar26;
                                                  *(float *)(unaff_x19 + 0x224) = fVar28;
                                                  if (((*(long *)(unaff_x19 + 0x18) == 0) ||
                                                      (lVar12 = FUN_049afbe0(*(long *)(unaff_x19 +
                                                                                      0x18),0),
                                                      lVar12 == 0)) ||
                                                     (lVar12 = FUN_051e5130(lVar12,0), lVar12 == 0))
                                                  goto LAB_03b6b08c;
                                                  FUN_04f1adf8(lVar12,0);
                                                  fVar35 = (float)FUN_04f13694(0);
                                                  if (*plVar18 == 0) goto LAB_03b6b08c;
                                                  fVar33 = fVar22;
                                                  fVar32 = fVar26;
                                                  fVar34 = fVar28;
                                                  fVar21 = (float)FUN_04f1adf8(*plVar18,0);
                                                  fVar25 = fVar26 * fVar21;
                                                  fVar36 = fVar26 * fVar32;
                                                  fVar24 = fVar28 * fVar34;
                                                  fVar23 = (fVar26 * fVar34 +
                                                           fVar22 * fVar21 + fVar35 * fVar33) -
                                                           fVar28 * fVar32;
                                                  fVar26 = (fVar28 * fVar21 +
                                                           fVar22 * fVar32 + fVar26 * fVar33) -
                                                           fVar35 * fVar34;
                                                  fVar28 = (fVar35 * fVar32 +
                                                           fVar22 * fVar34 + fVar28 * fVar33) -
                                                           fVar25;
                                                  fVar22 = ((fVar22 * fVar33 - fVar35 * fVar21) -
                                                           fVar36) - fVar24;
                                                  }
                                                  else {
                                                    if (*plVar18 == 0) goto LAB_03b6b08c;
                                                    uVar19 = FUN_04f1aa98(*plVar18,0);
                                                    *(undefined4 *)(unaff_x19 + 0x21c) = uVar19;
                                                    *(float *)(unaff_x19 + 0x220) = fVar26;
                                                    *(float *)(unaff_x19 + 0x224) = fVar28;
                                                    if (*(long *)(unaff_x19 + 0xb0) == 0)
                                                    goto LAB_03b6b08c;
                                                    fVar23 = (float)FUN_04f1aef8(*(long *)(unaff_x19
                                                                                          + 0xb0),0)
                                                    ;
                                                  }
                                                  *(float *)(unaff_x19 + 0x2a0) = fVar23;
                                                  *(float *)(unaff_x19 + 0x2a4) = fVar26;
                                                  *(float *)(unaff_x19 + 0x2a8) = fVar28;
                                                  *(float *)(unaff_x19 + 0x2ac) = fVar22;
                                                  if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                    uVar19 = FUN_04f1aa98(*(long *)(unaff_x19 + 0x20
                                                                                   ),0);
                                                    *(undefined4 *)(unaff_x19 + 0x228) = uVar19;
                                                    *(float *)(unaff_x19 + 0x22c) = fVar26;
                                                    *(float *)(unaff_x19 + 0x230) = fVar28;
                                                    if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                      uVar19 = FUN_04f1aef8(*(long *)(unaff_x19 +
                                                                                     0x20),0);
                                                      *(undefined4 *)(unaff_x19 + 0x2c0) = uVar19;
                                                      *(float *)(unaff_x19 + 0x2c4) = fVar26;
                                                      *(float *)(unaff_x19 + 0x2c8) = fVar28;
                                                      *(float *)(unaff_x19 + 0x2cc) = fVar22;
                                                      if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                        FUN_049b1da8(*(long *)(unaff_x19 + 0x18),1,0
                                                                    );
                                                        if ((*(long *)(unaff_x19 + 0x18) != 0) &&
                                                           (lVar12 = FUN_051e516c(*(long *)(
                                                  unaff_x19 + 0x18),0), lVar12 != 0)) {
                                                    uVar9 = FUN_051df964(lVar12,0);
                                                    puVar2 = PTR_DAT_06e49d60;
                                                    lVar12 = *(long *)(unaff_x19 + 0x18);
                                                    if (lVar12 != 0) {
                                                      if ((uVar9 & 1) == 0) {
                                                        lVar12 = FUN_051e5130(lVar12,0);
                                                        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                                                          thunk_FUN_016466fc(*(long *)puVar6);
                                                        }
                                                        uVar15 = *(undefined8 *)puVar2;
LAB_03b6ae68:
                                                        FUN_04866834(uVar15,lVar12,0);
                                                        return;
                                                      }
                                                      FUN_049b2360(lVar12,0,0);
                                                      if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                        FUN_049b21d0(*(long *)(unaff_x19 + 0x18),0,0
                                                                    );
                                                        if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                          fVar35 = (float)FUN_049afd98(*(long *)(
                                                  unaff_x19 + 0x18),0);
                                                  if (DAT_0722a13e == '\0') {
                                                    thunk_FUN_0159f088(PTR_DAT_06e50440);
                                                    DAT_0722a13e = '\x01';
                                                  }
                                                  pfVar13 = *(float **)(*(long *)puVar3 + 0xb8);
                                                  fVar28 = fVar28 - pfVar13[2];
                                                  if (fVar28 * fVar28 +
                                                      (fVar35 - *pfVar13) * (fVar35 - *pfVar13) +
                                                      (fVar26 - pfVar13[1]) * (fVar26 - pfVar13[1])
                                                      < fVar31) {
                                                    if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                      uVar19 = 
                                                  Fusion_CloudServices_<Join>d__84__SetStateMachine
                                                            (*(long *)(unaff_x19 + 0x20),0);
                                                  *(undefined4 *)(unaff_x19 + 200) = uVar19;
                                                  *(float *)(unaff_x19 + 0xcc) = fVar31;
                                                  *(float *)(unaff_x19 + 0xd0) = fVar28;
                                                  if (*(long *)(unaff_x19 + 0xb8) != 0) {
                                                    uVar19 = FUN_049ac524(*(long *)(unaff_x19 + 0xb8
                                                                                   ),0);
                                                    *(undefined4 *)(unaff_x19 + 0x32c) = uVar19;
                                                    *(float *)(unaff_x19 + 0x330) = fVar31;
                                                    *(float *)(unaff_x19 + 0x334) = fVar28;
                                                    if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                      uVar19 = FUN_04f1adf8(*(long *)(unaff_x19 +
                                                                                     0x20),0);
                                                      *(undefined4 *)(unaff_x19 + 0xd4) = uVar19;
                                                      *(float *)(unaff_x19 + 0xd8) = fVar31;
                                                      *(float *)(unaff_x19 + 0xdc) = fVar28;
                                                      *(float *)(unaff_x19 + 0xe0) = fVar22;
                                                      fVar35 = (float)FUN_03b6b618();
                                                      fVar21 = *(float *)(unaff_x19 + 0x250);
                                                      fVar26 = *(float *)(unaff_x19 + 0x25c);
                                                      fVar36 = *(float *)(unaff_x19 + 600);
                                                      fVar23 = *(float *)(unaff_x19 + 0x254);
                                                      fVar32 = fVar28 * fVar36;
                                                      fVar33 = (fVar31 * fVar36 +
                                                               fVar22 * fVar21 + fVar35 * fVar26) -
                                                               fVar28 * fVar23;
                                                      fVar34 = (fVar28 * fVar21 +
                                                               fVar22 * fVar23 + fVar31 * fVar26) -
                                                               fVar35 * fVar36;
                                                      *(float *)(unaff_x19 + 0x290) = fVar33;
                                                      *(float *)(unaff_x19 + 0x294) = fVar34;
                                                      *(float *)(unaff_x19 + 0x298) =
                                                           (fVar35 * fVar23 +
                                                           fVar22 * fVar36 + fVar28 * fVar26) -
                                                           fVar31 * fVar21;
                                                      *(float *)(unaff_x19 + 0x29c) =
                                                           ((fVar22 * fVar26 - fVar35 * fVar21) -
                                                           fVar31 * fVar23) - fVar32;
                                                      FUN_03b6b9a0();
                                                      uVar19 = FUN_051dd1d4(0);
                                                      *(undefined4 *)(unaff_x19 + 0x308) = uVar19;
                                                      uVar19 = FUN_051dd1d4(0);
                                                      *(undefined4 *)(unaff_x19 + 0x30c) = uVar19;
                                                      if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                        uVar19 = 
                                                  Fusion_CloudServices_<Join>d__84__SetStateMachine
                                                            (*(long *)(unaff_x19 + 0x20),0);
                                                  *(undefined4 *)(unaff_x19 + 0x234) = uVar19;
                                                  *(float *)(unaff_x19 + 0x238) = fVar33;
                                                  *(float *)(unaff_x19 + 0x23c) = fVar32;
                                                  if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                    uVar19 = FUN_04f1adf8(*(long *)(unaff_x19 + 0x20
                                                                                   ),0);
                                                    *(undefined4 *)(unaff_x19 + 0x2d0) = uVar19;
                                                    *(float *)(unaff_x19 + 0x2d4) = fVar33;
                                                    *(float *)(unaff_x19 + 0x2d8) = fVar32;
                                                    *(float *)(unaff_x19 + 0x2dc) = fVar34;
                                                    if ((*(long *)(unaff_x19 + 0x28) != 0) &&
                                                       (lVar12 = *(long *)(*(long *)(unaff_x19 +
                                                                                    0x28) + 0x30),
                                                       lVar12 != 0)) {
                                                      uVar15 = FUN_0160edfc(*(undefined8 *)
                                                                             PTR_DAT_06dad490,
                                                                            *(undefined4 *)
                                                                             (lVar12 + 0x18));
                                                      *(undefined8 *)(unaff_x19 + 0x318) = uVar15;
                                                      thunk_FUN_01656ef8((undefined8 *)
                                                                         (unaff_x19 + 0x318),uVar15)
                                                      ;
                                                      puVar2 = PTR_DAT_06e2a8c0;
                                                      plVar18 = *(long **)(unaff_x19 + 0x318);
                                                      if (plVar18 != (long *)0x0) {
                                                        uVar9 = 0;
                                                        do {
                                                          if ((long)(int)plVar18[3] <= (long)uVar9)
                                                          {
                                                            *(undefined1 *)(unaff_x19 + 0x2fd) = 1;
                                                            return;
                                                          }
                                                          if ((*(long *)(unaff_x19 + 0x28) == 0) ||
                                                             (lVar12 = *(long *)(*(long *)(unaff_x19
                                                                                          + 0x28) +
                                                                                0x30), lVar12 == 0))
                                                          break;
                                                          if (*(uint *)(lVar12 + 0x18) <= uVar9) {
LAB_03b6b0c8:
                    /* WARNING: Subroutine does not return */
                                                            FUN_0160eebc();
                                                          }
                                                          uVar15 = *(undefined8 *)
                                                                    (lVar12 + uVar9 * 8 + 0x20);
                                                          lVar12 = thunk_FUN_015d056c(*(undefined8 *
                                                                                       )puVar2);
                                                          if (lVar12 == 0) break;
                                                          FUN_03b8a21c(lVar12,uVar15,0);
                                                          lVar11 = thunk_FUN_015d0480(lVar12,*(
                                                  undefined8 *)(*plVar18 + 0x40));
                                                  if (lVar11 == 0) {
                                                    uVar15 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
                                                    FUN_0160ee7c(uVar15,0);
                                                  }
                                                  if (*(uint *)(plVar18 + 3) <= uVar9)
                                                  goto LAB_03b6b0c8;
                                                  plVar18[uVar9 + 4] = lVar12;
                                                  thunk_FUN_01656ef8(plVar18 + uVar9 + 4,lVar12);
                                                  plVar18 = *(long **)(unaff_x19 + 0x318);
                                                  uVar9 = uVar9 + 1;
                                                  } while (plVar18 != (long *)0x0);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else if (*plVar18 != 0) {
                                                    uVar15 = FUN_051e0500(*plVar18,0);
                                                    puVar3 = PTR_DAT_06dc37c0;
                                                    puVar2 = PTR_DAT_06db5be8;
                                                    if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                      fStack0000000000000090 =
                                                           (float)FUN_049afd98(*(long *)(unaff_x19 +
                                                                                        0x18),0);
                                                      fStack0000000000000094 = fVar31;
                                                      in_stack_00000098 = fVar28;
                                                      uVar16 = Fusion_CloudCommunicator__Dispose
                                                                         (&stack0x00000090,0);
                                                      uVar15 = FUN_02526f2c(*(undefined8 *)puVar3,
                                                                            uVar15,*(undefined8 *)
                                                                                    puVar2,uVar16,0)
                                                      ;
                                                      lVar12 = *plVar18;
                                                      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                                                        thunk_FUN_016466fc(*(long *)puVar6);
                                                      }
                                                      goto LAB_03b6ae68;
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
LAB_03b6b08c:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


