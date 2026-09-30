/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.EyeGazeState>
ENTRY_POINT: 03b69ec4
PROGRAM: vrfs-libil2cpp.so
SCORE: 171
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_EyeGazeState>
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  uint in_w8;
  long lVar10;
  float *pfVar11;
  long unaff_x19;
  long unaff_x20;
  long *plVar12;
  long *unaff_x24;
  undefined8 *unaff_x25;
  uint uVar13;
  long *plVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
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
  
  fVar28 = (float)param_3;
  fVar30 = (float)param_2;
  uVar15 = (undefined4)param_4;
  if (0 < (int)in_w8) {
    uVar13 = 0;
    do {
      if (in_w8 <= uVar13) goto LAB_03b6b0c8;
      plVar14 = (long *)(unaff_x20 + (long)(int)uVar13 * 8 + 0x20);
      lVar10 = *plVar14;
      if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x18), lVar10 == 0)) goto LAB_03b6b08c;
      uVar6 = FUN_0431ae70(lVar10,*unaff_x25);
      if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_03b6b08c;
      uVar7 = FUN_049afbe0(*(long *)(unaff_x19 + 0x18),0);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_016466fc(*unaff_x24);
      }
      uVar8 = FUN_051d94d4(uVar6,uVar7,0);
      if ((uVar8 & 1) != 0) {
        if (*(uint *)(unaff_x20 + 0x18) <= uVar13) goto LAB_03b6b0c8;
        lVar10 = *plVar14;
        if (lVar10 == 0) goto LAB_03b6b08c;
        *(undefined8 *)(unaff_x19 + 0xc0) = *(undefined8 *)(lVar10 + 0x20);
        thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0xc0));
      }
      fVar28 = (float)param_3;
      fVar30 = (float)param_2;
      uVar15 = (undefined4)param_4;
      in_w8 = *(uint *)(unaff_x20 + 0x18);
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)in_w8);
  }
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    lVar10 = FUN_051e5130(*(long *)(unaff_x19 + 0x18),0);
    plVar14 = (long *)(unaff_x19 + 0xb0);
    *plVar14 = lVar10;
    thunk_FUN_01656ef8(plVar14,lVar10);
    if (*plVar14 != 0) {
      lVar10 = FUN_0431ae70(*plVar14,*unaff_x25);
      plVar12 = (long *)(unaff_x19 + 0xb8);
      *plVar12 = lVar10;
      thunk_FUN_01656ef8(plVar12,lVar10);
      FUN_03b6b0d8();
      FUN_03b66608();
      FUN_03b6b244();
      puVar1 = PTR_DAT_06e50440;
      if (*(long *)(unaff_x19 + 0x300) != 0) {
        if (*(long *)(*(long *)(unaff_x19 + 0x300) + 0x18) == 0) {
          if (DAT_0722a398 == '\0') {
            thunk_FUN_0159f088(PTR_DAT_06e50440);
            DAT_0722a398 = '\x01';
          }
          if (*plVar14 == 0) goto LAB_03b6b08c;
          lVar10 = *(long *)(*(long *)puVar1 + 0xb8);
          fVar26 = *(float *)(lVar10 + 0xc);
          fVar27 = *(float *)(lVar10 + 0x10);
          fVar29 = *(float *)(lVar10 + 0x14);
          lVar10 = FUN_0431ae70(*plVar14,*(undefined8 *)PTR_DAT_06dfafe8);
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_016466fc(*unaff_x24);
          }
          uVar8 = FUN_051d2ac0(lVar10,0,0);
          if ((uVar8 & 1) == 0) {
            uVar8 = (ulong)(uint)(fVar26 * DAT_0534c250);
            fVar30 = fVar27 * DAT_0534c250;
            fVar28 = fVar29 * DAT_0534c250;
          }
          else {
            if (lVar10 == 0) goto LAB_03b6b08c;
            FUN_0486aa88(&stack0x00000050,lVar10,0);
            in_stack_000000a8 = in_stack_00000058;
            in_stack_000000a0 = in_stack_00000050;
            in_stack_000000b0 = in_stack_00000060;
            uVar8 = FUN_051db98c(&stack0x000000a0,0);
          }
          lVar10 = *plVar12;
          if (lVar10 == 0) goto LAB_03b6b08c;
          uVar15 = FUN_049ac010(lVar10,0);
          FUN_03b8c508(uVar8,0);
          FUN_049ac798(lVar10,0);
        }
        uVar6 = *(undefined8 *)(unaff_x19 + 0xc0);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar8 = FUN_051d2ac0(uVar6,0,0);
        if ((uVar8 & 1) == 0) {
          if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_03b6b08c;
          uVar6 = Fusion_CloudServices_<get_CommittedPlayerInternal>d__112__System_Collections_Generic_IEnumerable<Fusion_PlayerRef>_GetEnumerator
                            (*(long *)(unaff_x19 + 0x20),0);
        }
        else {
          uVar6 = *(undefined8 *)(unaff_x19 + 0xc0);
        }
        *(undefined8 *)(unaff_x19 + 0x2e0) = uVar6;
        thunk_FUN_01656ef8(unaff_x19 + 0x2e0);
        if (*(long *)(unaff_x19 + 0x18) != 0) {
          uVar6 = FUN_049afbe0(*(long *)(unaff_x19 + 0x18),0);
          *(undefined8 *)(unaff_x19 + 0x140) = uVar6;
          thunk_FUN_01656ef8(unaff_x19 + 0x140);
          if (*(long *)(unaff_x19 + 0x20) != 0) {
            uVar6 = Fusion_CloudServices_<get_CommittedPlayerInternal>d__112__System_Collections_Generic_IEnumerable<Fusion_PlayerRef>_GetEnumerator
                              (*(long *)(unaff_x19 + 0x20),0);
            *(undefined8 *)(unaff_x19 + 0x148) = uVar6;
            thunk_FUN_01656ef8(unaff_x19 + 0x148);
            if ((*(long *)(unaff_x19 + 0x18) != 0) &&
               (lVar10 = FUN_051e5130(*(long *)(unaff_x19 + 0x18),0), lVar10 != 0)) {
              uVar6 = Fusion_CloudServices_<get_CommittedPlayerInternal>d__112__System_Collections_Generic_IEnumerable<Fusion_PlayerRef>_GetEnumerator
                                (lVar10,0);
              *(undefined8 *)(unaff_x19 + 0x180) = uVar6;
              thunk_FUN_01656ef8(unaff_x19 + 0x180);
              if ((*(long *)(unaff_x19 + 0x18) != 0) &&
                 (lVar10 = FUN_051e5130(*(long *)(unaff_x19 + 0x18),0), lVar10 != 0)) {
                uVar16 = Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar10,0);
                *(undefined4 *)(unaff_x19 + 0x188) = uVar16;
                *(float *)(unaff_x19 + 0x18c) = fVar30;
                *(float *)(unaff_x19 + 400) = fVar28;
                if ((*(long *)(unaff_x19 + 0x18) != 0) &&
                   (lVar10 = FUN_051e5130(*(long *)(unaff_x19 + 0x18),0), lVar10 != 0)) {
                  uVar16 = FUN_04f1adf8(lVar10,0);
                  *(undefined4 *)(unaff_x19 + 0x194) = uVar16;
                  *(float *)(unaff_x19 + 0x198) = fVar30;
                  *(float *)(unaff_x19 + 0x19c) = fVar28;
                  *(undefined4 *)(unaff_x19 + 0x1a0) = uVar15;
                  if (*(long *)(unaff_x19 + 0x20) != 0) {
                    uVar16 = Fusion_CloudServices_<Join>d__84__SetStateMachine
                                       (*(long *)(unaff_x19 + 0x20),0);
                    *(undefined4 *)(unaff_x19 + 0x1a4) = uVar16;
                    *(float *)(unaff_x19 + 0x1a8) = fVar30;
                    *(float *)(unaff_x19 + 0x1ac) = fVar28;
                    if (*(long *)(unaff_x19 + 0x20) != 0) {
                      uVar16 = FUN_04f1adf8(*(long *)(unaff_x19 + 0x20),0);
                      *(undefined4 *)(unaff_x19 + 0x1b0) = uVar16;
                      *(float *)(unaff_x19 + 0x1b4) = fVar30;
                      *(float *)(unaff_x19 + 0x1b8) = fVar28;
                      *(undefined4 *)(unaff_x19 + 0x1bc) = uVar15;
                      if (*(long *)(unaff_x19 + 0x18) != 0) {
                        uVar16 = FUN_049b09fc(*(long *)(unaff_x19 + 0x18),0);
                        *(undefined4 *)(unaff_x19 + 0x1c0) = uVar16;
                        if (*(long *)(unaff_x19 + 0x18) != 0) {
                          uVar16 = FUN_049b0a7c(*(long *)(unaff_x19 + 0x18),0);
                          *(undefined4 *)(unaff_x19 + 0x1c4) = uVar16;
                          if (*(long *)(unaff_x19 + 0x18) != 0) {
                            uVar16 = FUN_049b0afc(*(long *)(unaff_x19 + 0x18),0);
                            *(undefined4 *)(unaff_x19 + 0x1c8) = uVar16;
                            uVar16 = FUN_03b6b36c();
                            *(undefined4 *)(unaff_x19 + 0x240) = uVar16;
                            *(float *)(unaff_x19 + 0x244) = fVar30;
                            *(float *)(unaff_x19 + 0x248) = fVar28;
                            *(undefined4 *)(unaff_x19 + 0x24c) = uVar15;
                            if (*(long *)(unaff_x19 + 0x18) != 0) {
                              fVar26 = (float)FUN_049afc60(*(long *)(unaff_x19 + 0x18),0);
                              if (*(long *)(unaff_x19 + 0x18) != 0) {
                                fVar27 = fVar28;
                                fVar29 = fVar30;
                                fVar17 = (float)FUN_049b0744(*(long *)(unaff_x19 + 0x18),0);
                                fVar22 = fVar26 * fVar27;
                                fVar27 = fVar30 * fVar27 - fVar28 * fVar29;
                                fVar28 = fVar28 * fVar17 - fVar22;
                                fVar30 = fVar26 * fVar29 - fVar30 * fVar17;
                                fStack0000000000000090 = fVar27;
                                fStack0000000000000094 = fVar28;
                                in_stack_00000098 = fVar30;
                                if (DAT_0722a39f == '\0') {
                                  thunk_FUN_0159f088(PTR_DAT_06e1a840);
                                  DAT_0722a39f = '\x01';
                                }
                                puVar2 = PTR_DAT_06e1a840;
                                if (*(int *)(*(long *)PTR_DAT_06e1a840 + 0xe0) == 0) {
                                  thunk_FUN_016466fc();
                                }
                                fVar26 = DAT_0533fbb4;
                                fVar17 = fVar30 * fVar30;
                                fVar29 = SQRT(fVar17 + fVar27 * fVar27 + fVar28 * fVar28);
                                if (fVar29 <= DAT_0533fbb4) {
                                  if (DAT_0722a13e == '\0') {
                                    thunk_FUN_0159f088(PTR_DAT_06e50440);
                                    DAT_0722a13e = '\x01';
                                  }
                                  pfVar11 = *(float **)(*(long *)puVar1 + 0xb8);
                                  fVar27 = *pfVar11;
                                  fVar28 = pfVar11[1];
                                  fVar30 = pfVar11[2];
                                }
                                else {
                                  fVar27 = fVar27 / fVar29;
                                  fVar28 = fVar28 / fVar29;
                                  fVar30 = fVar30 / fVar29;
                                }
                                if (*(long *)(unaff_x19 + 0x18) != 0) {
                                  fVar29 = (float)FUN_049afc60(*(long *)(unaff_x19 + 0x18),0);
                                  fVar31 = fVar28 * fVar22 - fVar30 * fVar17;
                                  fVar22 = fVar30 * fVar29 - fVar27 * fVar22;
                                  fVar29 = fVar27 * fVar17 - fVar28 * fVar29;
                                  fStack0000000000000090 = fVar31;
                                  fStack0000000000000094 = fVar22;
                                  in_stack_00000098 = fVar29;
                                  if (DAT_0722a39f == '\0') {
                                    thunk_FUN_0159f088(PTR_DAT_06e1a840);
                                    DAT_0722a39f = '\x01';
                                  }
                                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                                    thunk_FUN_016466fc();
                                  }
                                  fVar17 = SQRT(fVar29 * fVar29 + fVar31 * fVar31 + fVar22 * fVar22)
                                  ;
                                  if (fVar17 <= fVar26) {
                                    if (DAT_0722a13e == '\0') {
                                      thunk_FUN_0159f088(PTR_DAT_06e50440);
                                      DAT_0722a13e = '\x01';
                                    }
                                    pfVar11 = *(float **)(*(long *)puVar1 + 0xb8);
                                    fVar31 = *pfVar11;
                                    fVar22 = pfVar11[1];
                                    fVar29 = pfVar11[2];
                                  }
                                  else {
                                    fVar31 = fVar31 / fVar17;
                                    fVar22 = fVar22 / fVar17;
                                    fVar29 = fVar29 / fVar17;
                                  }
                                  puVar4 = PTR_DAT_06e52cd8;
                                  puVar3 = PTR_DAT_06e2ec60;
                                  puVar2 = PTR_DAT_06ddc378;
                                  fVar26 = DAT_0534bf7c;
                                  fVar29 = fVar30 - fVar29;
                                  fVar17 = fVar29 * fVar29;
                                  if (fVar17 + (fVar27 - fVar31) * (fVar27 - fVar31) +
                                               (fVar28 - fVar22) * (fVar28 - fVar22) < DAT_0534bf7c)
                                  {
                                    if (*(long *)(unaff_x19 + 0x18) != 0) {
                                      uVar6 = FUN_051e0500(*(long *)(unaff_x19 + 0x18),0);
                                      uVar6 = FUN_02526be4(*(undefined8 *)puVar2,uVar6,
                                                           *(undefined8 *)puVar3,0);
                                      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                                        thunk_FUN_016466fc(*(long *)puVar4);
                                      }
                                      FUN_0486672c(uVar6,0);
                                      return;
                                    }
                                  }
                                  else {
                                    fStack0000000000000108 = fVar22;
                                    fStack000000000000010c = fVar31;
                                    if (*(long *)(unaff_x19 + 0x20) != 0) {
                                      fVar22 = DAT_0534bf7c;
                                      FUN_04f1adf8(*(long *)(unaff_x19 + 0x20),0);
                                      fVar31 = (float)FUN_04f13694(0);
                                      if (*plVar14 != 0) {
                                        fVar19 = fVar22;
                                        fVar21 = fVar17;
                                        fVar24 = fVar29;
                                        fVar18 = (float)FUN_04f1adf8(*plVar14,0);
                                        fVar23 = fVar29 * fVar24;
                                        fVar25 = fVar31 * fVar21 + fVar22 * fVar24 + fVar29 * fVar19
                                        ;
                                        fVar20 = ((fVar22 * fVar19 - fVar31 * fVar18) -
                                                 fVar17 * fVar21) - fVar23;
                                        *(float *)(unaff_x19 + 0x2b0) =
                                             (fVar17 * fVar24 + fVar22 * fVar18 + fVar31 * fVar19) -
                                             fVar29 * fVar21;
                                        *(float *)(unaff_x19 + 0x2b4) =
                                             (fVar29 * fVar18 + fVar22 * fVar21 + fVar17 * fVar19) -
                                             fVar31 * fVar24;
                                        *(float *)(unaff_x19 + 0x2b8) = fVar25 - fVar17 * fVar18;
                                        *(float *)(unaff_x19 + 700) = fVar20;
                                        if (*(long *)(unaff_x19 + 0x20) != 0) {
                                          lVar10 = *(long *)(unaff_x19 + 0xb0);
                                          Fusion_CloudServices_<Join>d__84__SetStateMachine
                                                    (*(long *)(unaff_x19 + 0x20),0);
                                          if (lVar10 != 0) {
                                            uVar15 = FUN_04f1c838(lVar10,0);
                                            *(undefined4 *)(unaff_x19 + 0x150) = uVar15;
                                            *(float *)(unaff_x19 + 0x154) = fVar20;
                                            *(float *)(unaff_x19 + 0x158) = fVar23;
                                            if (*(long *)(unaff_x19 + 0xb0) != 0) {
                                              FUN_04f1adf8(*(long *)(unaff_x19 + 0xb0),0);
                                              fVar29 = (float)FUN_04f13694(0);
                                              if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                fVar17 = fVar25;
                                                fVar22 = fVar20;
                                                fVar31 = fVar23;
                                                fVar19 = (float)FUN_04f1adf8(*(long *)(unaff_x19 +
                                                                                      0x20),0);
                                                fVar21 = (fVar23 * fVar19 +
                                                         fVar25 * fVar22 + fVar20 * fVar17) -
                                                         fVar29 * fVar31;
                                                fVar24 = (fVar29 * fVar22 +
                                                         fVar25 * fVar31 + fVar23 * fVar17) -
                                                         fVar20 * fVar19;
                                                fVar18 = ((fVar25 * fVar17 - fVar29 * fVar19) -
                                                         fVar20 * fVar22) - fVar23 * fVar31;
                                                *(float *)(unaff_x19 + 0x15c) =
                                                     (fVar20 * fVar31 +
                                                     fVar25 * fVar19 + fVar29 * fVar17) -
                                                     fVar23 * fVar22;
                                                *(float *)(unaff_x19 + 0x160) = fVar21;
                                                *(float *)(unaff_x19 + 0x164) = fVar24;
                                                *(float *)(unaff_x19 + 0x168) = fVar18;
                                                uVar15 = FUN_04f13694(0);
                                                *(undefined4 *)(unaff_x19 + 0x344) = uVar15;
                                                *(float *)(unaff_x19 + 0x348) = fVar21;
                                                *(float *)(unaff_x19 + 0x34c) = fVar24;
                                                *(float *)(unaff_x19 + 0x350) = fVar18;
                                                if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                  uVar6 = FUN_04f1adf8(*(long *)(unaff_x19 + 0x20),0
                                                                      );
                                                  if (*plVar14 != 0) {
                                                    FUN_04f1adf8(*plVar14,0);
                                                    uVar15 = FUN_03b5df08(uVar6);
                                                    *(float *)(unaff_x19 + 0x178) = fVar18;
                                                    *(undefined4 *)(unaff_x19 + 0x16c) = uVar15;
                                                    *(float *)(unaff_x19 + 0x170) = fVar21;
                                                    *(float *)(unaff_x19 + 0x174) = fVar24;
                                                    fVar22 = fStack000000000000010c;
                                                    fVar31 = (float)FUN_04f13c44(fVar27,0);
                                                    fVar27 = fVar28;
                                                    fVar29 = fVar30;
                                                    fVar17 = fVar22;
                                                    uVar15 = FUN_04f13694(0);
                                                    *(undefined4 *)(unaff_x19 + 0x270) = uVar15;
                                                    *(float *)(unaff_x19 + 0x274) = fVar27;
                                                    *(float *)(unaff_x19 + 0x278) = fVar29;
                                                    *(float *)(unaff_x19 + 0x27c) = fVar17;
                                                    fVar27 = *(float *)(unaff_x19 + 0x24c);
                                                    fVar29 = *(float *)(unaff_x19 + 0x240);
                                                    fVar17 = *(float *)(unaff_x19 + 0x244);
                                                    fVar24 = *(float *)(unaff_x19 + 0x248);
                                                    fVar18 = fVar30 * fVar24;
                                                    fVar19 = (fVar30 * fVar17 +
                                                             fVar22 * fVar29 + fVar31 * fVar27) -
                                                             fVar28 * fVar24;
                                                    fVar21 = (fVar31 * fVar24 +
                                                             fVar22 * fVar17 + fVar28 * fVar27) -
                                                             fVar30 * fVar29;
                                                    *(float *)(unaff_x19 + 0x280) = fVar19;
                                                    *(float *)(unaff_x19 + 0x284) = fVar21;
                                                    *(float *)(unaff_x19 + 0x288) =
                                                         (fVar28 * fVar29 +
                                                         fVar22 * fVar24 + fVar30 * fVar27) -
                                                         fVar31 * fVar17;
                                                    *(float *)(unaff_x19 + 0x28c) =
                                                         ((fVar22 * fVar27 - fVar31 * fVar29) -
                                                         fVar28 * fVar17) - fVar18;
                                                    FUN_03b6b42c();
                                                    fVar29 = (float)FUN_04f13694(0);
                                                    fVar30 = fVar18;
                                                    fVar28 = fVar19;
                                                    fVar27 = fVar21;
                                                    fVar17 = (float)FUN_03b6b4e4();
                                                    fVar24 = fVar21 * fVar27;
                                                    fVar20 = fVar29 * fVar28 +
                                                             fVar18 * fVar27 + fVar21 * fVar30;
                                                    fVar22 = ((fVar18 * fVar30 - fVar29 * fVar17) -
                                                             fVar19 * fVar28) - fVar24;
                                                    *(float *)(unaff_x19 + 0x260) =
                                                         (fVar19 * fVar27 +
                                                         fVar18 * fVar17 + fVar29 * fVar30) -
                                                         fVar21 * fVar28;
                                                    *(float *)(unaff_x19 + 0x264) =
                                                         (fVar21 * fVar17 +
                                                         fVar18 * fVar28 + fVar19 * fVar30) -
                                                         fVar29 * fVar27;
                                                    *(float *)(unaff_x19 + 0x268) =
                                                         fVar20 - fVar19 * fVar17;
                                                    *(float *)(unaff_x19 + 0x26c) = fVar22;
                                                    FUN_03b6b618();
                                                    fVar29 = (float)FUN_04f13694(0);
                                                    fVar30 = fVar20;
                                                    fVar28 = fVar22;
                                                    fVar27 = fVar24;
                                                    fVar17 = (float)FUN_03b6b36c();
                                                    fVar19 = fVar24 * fVar27;
                                                    fVar21 = fVar29 * fVar28 +
                                                             fVar20 * fVar27 + fVar24 * fVar30;
                                                    fVar31 = ((fVar20 * fVar30 - fVar29 * fVar17) -
                                                             fVar22 * fVar28) - fVar19;
                                                    *(float *)(unaff_x19 + 0x250) =
                                                         (fVar22 * fVar27 +
                                                         fVar20 * fVar17 + fVar29 * fVar30) -
                                                         fVar24 * fVar28;
                                                    *(float *)(unaff_x19 + 0x254) =
                                                         (fVar24 * fVar17 +
                                                         fVar20 * fVar28 + fVar22 * fVar30) -
                                                         fVar29 * fVar27;
                                                    *(float *)(unaff_x19 + 600) =
                                                         fVar21 - fVar22 * fVar17;
                                                    *(float *)(unaff_x19 + 0x25c) = fVar31;
                                                    if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                      uVar6 = FUN_049afbe0(*(long *)(unaff_x19 +
                                                                                    0x18),0);
                                                      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
                                                        thunk_FUN_016466fc(*unaff_x24);
                                                      }
                                                      uVar8 = FUN_051d2ac0(uVar6,0,0);
                                                      if ((uVar8 & 1) != 0) {
                                                        if (*(long *)(unaff_x19 + 0x18) == 0)
                                                        goto LAB_03b6b08c;
                                                        FUN_049b0044(*(long *)(unaff_x19 + 0x18),0,0
                                                                    );
                                                        if ((*(long *)(unaff_x19 + 0x18) == 0) ||
                                                           (lVar10 = FUN_049afbe0(*(long *)(
                                                  unaff_x19 + 0x18),0), lVar10 == 0))
                                                  goto LAB_03b6b08c;
                                                  uVar6 = FUN_051e5130(lVar10,0);
                                                  *(undefined8 *)(unaff_x19 + 0x2e8) = uVar6;
                                                  thunk_FUN_01656ef8(unaff_x19 + 0x2e8);
                                                  if (*(long *)(unaff_x19 + 0x20) == 0)
                                                  goto LAB_03b6b08c;
                                                  uVar6 = 
                                                  Fusion_CloudServices_<get_CommittedPlayerInternal>d__112__System_Collections_Generic_IEnumerable<Fusion_PlayerRef>_GetEnumerator
                                                            (*(long *)(unaff_x19 + 0x20),0);
                                                  uVar7 = *(undefined8 *)(unaff_x19 + 0xc0);
                                                  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
                                                    thunk_FUN_016466fc(*unaff_x24);
                                                  }
                                                  bVar5 = FUN_051d94d4(uVar6,uVar7,0);
                                                  *(byte *)(unaff_x19 + 0x2fc) = bVar5 & 1;
                                                  FUN_03b6b758();
                                                  }
                                                  if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                    uVar15 = FUN_049b09fc(*(long *)(unaff_x19 + 0x18
                                                                                   ),0);
                                                    *(undefined4 *)(unaff_x19 + 0x2f0) = uVar15;
                                                    if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                      uVar15 = FUN_049b0a7c(*(long *)(unaff_x19 +
                                                                                     0x18),0);
                                                      *(undefined4 *)(unaff_x19 + 0x2f4) = uVar15;
                                                      if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                        uVar15 = FUN_049b0afc(*(long *)(unaff_x19 +
                                                                                       0x18),0);
                                                        *(undefined4 *)(unaff_x19 + 0x2f8) = uVar15;
                                                        if ((*(long *)(unaff_x19 + 0xb8) != 0) &&
                                                           (lVar10 = FUN_051e5130(*(long *)(
                                                  unaff_x19 + 0xb8),0), lVar10 != 0)) {
                                                    FUN_04f1adf8(lVar10,0);
                                                    fVar30 = (float)FUN_04f13694(0);
                                                    if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                      fVar28 = fVar21;
                                                      fVar27 = fVar31;
                                                      fVar29 = fVar19;
                                                      fVar17 = (float)FUN_04f1adf8(*(long *)(
                                                  unaff_x19 + 0x20),0);
                                                  fVar24 = fVar19 * fVar29;
                                                  fVar18 = fVar30 * fVar27 +
                                                           fVar21 * fVar29 + fVar19 * fVar28;
                                                  fVar22 = ((fVar21 * fVar28 - fVar30 * fVar17) -
                                                           fVar31 * fVar27) - fVar24;
                                                  *(float *)(unaff_x19 + 300) =
                                                       (fVar31 * fVar29 +
                                                       fVar21 * fVar17 + fVar30 * fVar28) -
                                                       fVar19 * fVar27;
                                                  *(float *)(unaff_x19 + 0x130) =
                                                       (fVar19 * fVar17 +
                                                       fVar21 * fVar27 + fVar31 * fVar28) -
                                                       fVar30 * fVar29;
                                                  *(float *)(unaff_x19 + 0x134) =
                                                       fVar18 - fVar31 * fVar17;
                                                  *(float *)(unaff_x19 + 0x138) = fVar22;
                                                  if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                    uVar6 = FUN_049afbe0(*(long *)(unaff_x19 + 0x18)
                                                                         ,0);
                                                    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
                                                      thunk_FUN_016466fc(*unaff_x24);
                                                    }
                                                    uVar8 = FUN_051d94d4(uVar6,0,0);
                                                    if ((uVar8 & 1) == 0) {
                                                      if ((*(long *)(unaff_x19 + 0x18) == 0) ||
                                                         (lVar10 = FUN_049afbe0(*(long *)(unaff_x19
                                                                                         + 0x18),0),
                                                         lVar10 == 0)) goto LAB_03b6b08c;
                                                      lVar10 = FUN_051e5130(lVar10,0);
                                                      if ((*plVar14 == 0) ||
                                                         (
                                                  Fusion_CloudServices_<Join>d__84__SetStateMachine
                                                            (*plVar14,0), lVar10 == 0))
                                                  goto LAB_03b6b08c;
                                                  uVar15 = FUN_04f1c838(lVar10,0);
                                                  *(undefined4 *)(unaff_x19 + 0x21c) = uVar15;
                                                  *(float *)(unaff_x19 + 0x220) = fVar22;
                                                  *(float *)(unaff_x19 + 0x224) = fVar24;
                                                  if (((*(long *)(unaff_x19 + 0x18) == 0) ||
                                                      (lVar10 = FUN_049afbe0(*(long *)(unaff_x19 +
                                                                                      0x18),0),
                                                      lVar10 == 0)) ||
                                                     (lVar10 = FUN_051e5130(lVar10,0), lVar10 == 0))
                                                  goto LAB_03b6b08c;
                                                  FUN_04f1adf8(lVar10,0);
                                                  fVar30 = (float)FUN_04f13694(0);
                                                  if (*plVar14 == 0) goto LAB_03b6b08c;
                                                  fVar28 = fVar18;
                                                  fVar27 = fVar22;
                                                  fVar29 = fVar24;
                                                  fVar17 = (float)FUN_04f1adf8(*plVar14,0);
                                                  fVar21 = fVar22 * fVar17;
                                                  fVar31 = fVar22 * fVar27;
                                                  fVar20 = fVar24 * fVar29;
                                                  fVar19 = (fVar22 * fVar29 +
                                                           fVar18 * fVar17 + fVar30 * fVar28) -
                                                           fVar24 * fVar27;
                                                  fVar22 = (fVar24 * fVar17 +
                                                           fVar18 * fVar27 + fVar22 * fVar28) -
                                                           fVar30 * fVar29;
                                                  fVar24 = (fVar30 * fVar27 +
                                                           fVar18 * fVar29 + fVar24 * fVar28) -
                                                           fVar21;
                                                  fVar18 = ((fVar18 * fVar28 - fVar30 * fVar17) -
                                                           fVar31) - fVar20;
                                                  }
                                                  else {
                                                    if (*plVar14 == 0) goto LAB_03b6b08c;
                                                    uVar15 = FUN_04f1aa98(*plVar14,0);
                                                    *(undefined4 *)(unaff_x19 + 0x21c) = uVar15;
                                                    *(float *)(unaff_x19 + 0x220) = fVar22;
                                                    *(float *)(unaff_x19 + 0x224) = fVar24;
                                                    if (*(long *)(unaff_x19 + 0xb0) == 0)
                                                    goto LAB_03b6b08c;
                                                    fVar19 = (float)FUN_04f1aef8(*(long *)(unaff_x19
                                                                                          + 0xb0),0)
                                                    ;
                                                  }
                                                  *(float *)(unaff_x19 + 0x2a0) = fVar19;
                                                  *(float *)(unaff_x19 + 0x2a4) = fVar22;
                                                  *(float *)(unaff_x19 + 0x2a8) = fVar24;
                                                  *(float *)(unaff_x19 + 0x2ac) = fVar18;
                                                  if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                    uVar15 = FUN_04f1aa98(*(long *)(unaff_x19 + 0x20
                                                                                   ),0);
                                                    *(undefined4 *)(unaff_x19 + 0x228) = uVar15;
                                                    *(float *)(unaff_x19 + 0x22c) = fVar22;
                                                    *(float *)(unaff_x19 + 0x230) = fVar24;
                                                    if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                      uVar15 = FUN_04f1aef8(*(long *)(unaff_x19 +
                                                                                     0x20),0);
                                                      *(undefined4 *)(unaff_x19 + 0x2c0) = uVar15;
                                                      *(float *)(unaff_x19 + 0x2c4) = fVar22;
                                                      *(float *)(unaff_x19 + 0x2c8) = fVar24;
                                                      *(float *)(unaff_x19 + 0x2cc) = fVar18;
                                                      if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                        FUN_049b1da8(*(long *)(unaff_x19 + 0x18),1,0
                                                                    );
                                                        if ((*(long *)(unaff_x19 + 0x18) != 0) &&
                                                           (lVar10 = FUN_051e516c(*(long *)(
                                                  unaff_x19 + 0x18),0), lVar10 != 0)) {
                                                    uVar8 = FUN_051df964(lVar10,0);
                                                    puVar2 = PTR_DAT_06e49d60;
                                                    lVar10 = *(long *)(unaff_x19 + 0x18);
                                                    if (lVar10 != 0) {
                                                      if ((uVar8 & 1) == 0) {
                                                        lVar10 = FUN_051e5130(lVar10,0);
                                                        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                                                          thunk_FUN_016466fc(*(long *)puVar4);
                                                        }
                                                        uVar6 = *(undefined8 *)puVar2;
LAB_03b6ae68:
                                                        FUN_04866834(uVar6,lVar10,0);
                                                        return;
                                                      }
                                                      FUN_049b2360(lVar10,0,0);
                                                      if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                        FUN_049b21d0(*(long *)(unaff_x19 + 0x18),0,0
                                                                    );
                                                        if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                          fVar30 = (float)FUN_049afd98(*(long *)(
                                                  unaff_x19 + 0x18),0);
                                                  if (DAT_0722a13e == '\0') {
                                                    thunk_FUN_0159f088(PTR_DAT_06e50440);
                                                    DAT_0722a13e = '\x01';
                                                  }
                                                  pfVar11 = *(float **)(*(long *)puVar1 + 0xb8);
                                                  fVar24 = fVar24 - pfVar11[2];
                                                  if (fVar24 * fVar24 +
                                                      (fVar30 - *pfVar11) * (fVar30 - *pfVar11) +
                                                      (fVar22 - pfVar11[1]) * (fVar22 - pfVar11[1])
                                                      < fVar26) {
                                                    if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                      uVar15 = 
                                                  Fusion_CloudServices_<Join>d__84__SetStateMachine
                                                            (*(long *)(unaff_x19 + 0x20),0);
                                                  *(undefined4 *)(unaff_x19 + 200) = uVar15;
                                                  *(float *)(unaff_x19 + 0xcc) = fVar26;
                                                  *(float *)(unaff_x19 + 0xd0) = fVar24;
                                                  if (*(long *)(unaff_x19 + 0xb8) != 0) {
                                                    uVar15 = FUN_049ac524(*(long *)(unaff_x19 + 0xb8
                                                                                   ),0);
                                                    *(undefined4 *)(unaff_x19 + 0x32c) = uVar15;
                                                    *(float *)(unaff_x19 + 0x330) = fVar26;
                                                    *(float *)(unaff_x19 + 0x334) = fVar24;
                                                    if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                      uVar15 = FUN_04f1adf8(*(long *)(unaff_x19 +
                                                                                     0x20),0);
                                                      *(undefined4 *)(unaff_x19 + 0xd4) = uVar15;
                                                      *(float *)(unaff_x19 + 0xd8) = fVar26;
                                                      *(float *)(unaff_x19 + 0xdc) = fVar24;
                                                      *(float *)(unaff_x19 + 0xe0) = fVar18;
                                                      fVar30 = (float)FUN_03b6b618();
                                                      fVar17 = *(float *)(unaff_x19 + 0x250);
                                                      fVar22 = *(float *)(unaff_x19 + 0x25c);
                                                      fVar31 = *(float *)(unaff_x19 + 600);
                                                      fVar19 = *(float *)(unaff_x19 + 0x254);
                                                      fVar27 = fVar24 * fVar31;
                                                      fVar28 = (fVar26 * fVar31 +
                                                               fVar18 * fVar17 + fVar30 * fVar22) -
                                                               fVar24 * fVar19;
                                                      fVar29 = (fVar24 * fVar17 +
                                                               fVar18 * fVar19 + fVar26 * fVar22) -
                                                               fVar30 * fVar31;
                                                      *(float *)(unaff_x19 + 0x290) = fVar28;
                                                      *(float *)(unaff_x19 + 0x294) = fVar29;
                                                      *(float *)(unaff_x19 + 0x298) =
                                                           (fVar30 * fVar19 +
                                                           fVar18 * fVar31 + fVar24 * fVar22) -
                                                           fVar26 * fVar17;
                                                      *(float *)(unaff_x19 + 0x29c) =
                                                           ((fVar18 * fVar22 - fVar30 * fVar17) -
                                                           fVar26 * fVar19) - fVar27;
                                                      FUN_03b6b9a0();
                                                      uVar15 = FUN_051dd1d4(0);
                                                      *(undefined4 *)(unaff_x19 + 0x308) = uVar15;
                                                      uVar15 = FUN_051dd1d4(0);
                                                      *(undefined4 *)(unaff_x19 + 0x30c) = uVar15;
                                                      if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                        uVar15 = 
                                                  Fusion_CloudServices_<Join>d__84__SetStateMachine
                                                            (*(long *)(unaff_x19 + 0x20),0);
                                                  *(undefined4 *)(unaff_x19 + 0x234) = uVar15;
                                                  *(float *)(unaff_x19 + 0x238) = fVar28;
                                                  *(float *)(unaff_x19 + 0x23c) = fVar27;
                                                  if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                    uVar15 = FUN_04f1adf8(*(long *)(unaff_x19 + 0x20
                                                                                   ),0);
                                                    *(undefined4 *)(unaff_x19 + 0x2d0) = uVar15;
                                                    *(float *)(unaff_x19 + 0x2d4) = fVar28;
                                                    *(float *)(unaff_x19 + 0x2d8) = fVar27;
                                                    *(float *)(unaff_x19 + 0x2dc) = fVar29;
                                                    if ((*(long *)(unaff_x19 + 0x28) != 0) &&
                                                       (lVar10 = *(long *)(*(long *)(unaff_x19 +
                                                                                    0x28) + 0x30),
                                                       lVar10 != 0)) {
                                                      uVar6 = FUN_0160edfc(*(undefined8 *)
                                                                            PTR_DAT_06dad490,
                                                                           *(undefined4 *)
                                                                            (lVar10 + 0x18));
                                                      *(undefined8 *)(unaff_x19 + 0x318) = uVar6;
                                                      thunk_FUN_01656ef8((undefined8 *)
                                                                         (unaff_x19 + 0x318),uVar6);
                                                      puVar1 = PTR_DAT_06e2a8c0;
                                                      plVar14 = *(long **)(unaff_x19 + 0x318);
                                                      if (plVar14 != (long *)0x0) {
                                                        uVar8 = 0;
                                                        do {
                                                          if ((long)(int)plVar14[3] <= (long)uVar8)
                                                          {
                                                            *(undefined1 *)(unaff_x19 + 0x2fd) = 1;
                                                            return;
                                                          }
                                                          if ((*(long *)(unaff_x19 + 0x28) == 0) ||
                                                             (lVar10 = *(long *)(*(long *)(unaff_x19
                                                                                          + 0x28) +
                                                                                0x30), lVar10 == 0))
                                                          break;
                                                          if (*(uint *)(lVar10 + 0x18) <= uVar8) {
LAB_03b6b0c8:
                    /* WARNING: Subroutine does not return */
                                                            FUN_0160eebc();
                                                          }
                                                          uVar6 = *(undefined8 *)
                                                                   (lVar10 + uVar8 * 8 + 0x20);
                                                          lVar10 = thunk_FUN_015d056c(*(undefined8 *
                                                                                       )puVar1);
                                                          if (lVar10 == 0) break;
                                                          FUN_03b8a21c(lVar10,uVar6,0);
                                                          lVar9 = thunk_FUN_015d0480(lVar10,*(
                                                  undefined8 *)(*plVar14 + 0x40));
                                                  if (lVar9 == 0) {
                                                    uVar6 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
                                                    FUN_0160ee7c(uVar6,0);
                                                  }
                                                  if (*(uint *)(plVar14 + 3) <= uVar8)
                                                  goto LAB_03b6b0c8;
                                                  plVar14[uVar8 + 4] = lVar10;
                                                  thunk_FUN_01656ef8(plVar14 + uVar8 + 4,lVar10);
                                                  plVar14 = *(long **)(unaff_x19 + 0x318);
                                                  uVar8 = uVar8 + 1;
                                                  } while (plVar14 != (long *)0x0);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else if (*plVar14 != 0) {
                                                    uVar6 = FUN_051e0500(*plVar14,0);
                                                    puVar2 = PTR_DAT_06dc37c0;
                                                    puVar1 = PTR_DAT_06db5be8;
                                                    if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                      fStack0000000000000090 =
                                                           (float)FUN_049afd98(*(long *)(unaff_x19 +
                                                                                        0x18),0);
                                                      fStack0000000000000094 = fVar26;
                                                      in_stack_00000098 = fVar24;
                                                      uVar7 = Fusion_CloudCommunicator__Dispose
                                                                        (&stack0x00000090,0);
                                                      uVar6 = FUN_02526f2c(*(undefined8 *)puVar2,
                                                                           uVar6,*(undefined8 *)
                                                                                  puVar1,uVar7,0);
                                                      lVar10 = *plVar14;
                                                      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                                                        thunk_FUN_016466fc(*(long *)puVar4);
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
LAB_03b6b08c:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


