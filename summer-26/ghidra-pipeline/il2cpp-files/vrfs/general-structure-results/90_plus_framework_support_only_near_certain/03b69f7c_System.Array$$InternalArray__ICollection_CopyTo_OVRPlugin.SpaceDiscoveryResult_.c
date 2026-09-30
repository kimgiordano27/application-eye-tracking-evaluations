/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 03b69f7c
PROGRAM: vrfs-libil2cpp.so
SCORE: 111
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_SpaceDiscoveryResult>
               (undefined1 param_1 [16],float param_2,float param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  float *pfVar9;
  long unaff_x19;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
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
  
  lVar6 = FUN_051e5130();
  plVar10 = (long *)(unaff_x19 + 0xb0);
  *plVar10 = lVar6;
  thunk_FUN_01656ef8(plVar10,lVar6);
  if (*plVar10 != 0) {
    lVar6 = FUN_0431ae70(*plVar10,*unaff_x25);
    plVar11 = (long *)(unaff_x19 + 0xb8);
    *plVar11 = lVar6;
    thunk_FUN_01656ef8(plVar11,lVar6);
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
        if (*plVar10 == 0) goto LAB_03b6b08c;
        lVar6 = *(long *)(*(long *)puVar1 + 0xb8);
        fVar25 = *(float *)(lVar6 + 0xc);
        fVar27 = *(float *)(lVar6 + 0x10);
        fVar28 = *(float *)(lVar6 + 0x14);
        lVar6 = FUN_0431ae70(*plVar10,*(undefined8 *)PTR_DAT_06dfafe8);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_016466fc(*unaff_x24);
        }
        uVar7 = FUN_051d2ac0(lVar6,0,0);
        if ((uVar7 & 1) == 0) {
          uVar7 = (ulong)(uint)(fVar25 * DAT_0534c250);
          param_2 = fVar27 * DAT_0534c250;
          param_3 = fVar28 * DAT_0534c250;
        }
        else {
          if (lVar6 == 0) goto LAB_03b6b08c;
          FUN_0486aa88(&stack0x00000050,lVar6,0);
          in_stack_000000a8 = in_stack_00000058;
          in_stack_000000a0 = in_stack_00000050;
          in_stack_000000b0 = in_stack_00000060;
          uVar7 = FUN_051db98c(&stack0x000000a0,0);
        }
        lVar6 = *plVar11;
        if (lVar6 == 0) goto LAB_03b6b08c;
        param_4 = FUN_049ac010(lVar6,0);
        FUN_03b8c508(uVar7,0);
        FUN_049ac798(lVar6,0);
      }
      uVar12 = *(undefined8 *)(unaff_x19 + 0xc0);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar7 = FUN_051d2ac0(uVar12,0,0);
      if ((uVar7 & 1) == 0) {
        if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_03b6b08c;
        uVar12 = Fusion_CloudServices_<get_CommittedPlayerInternal>d__112__System_Collections_Generic_IEnumerable<Fusion_PlayerRef>_GetEnumerator
                           (*(long *)(unaff_x19 + 0x20),0);
      }
      else {
        uVar12 = *(undefined8 *)(unaff_x19 + 0xc0);
      }
      *(undefined8 *)(unaff_x19 + 0x2e0) = uVar12;
      thunk_FUN_01656ef8(unaff_x19 + 0x2e0);
      if (*(long *)(unaff_x19 + 0x18) != 0) {
        uVar12 = FUN_049afbe0(*(long *)(unaff_x19 + 0x18),0);
        *(undefined8 *)(unaff_x19 + 0x140) = uVar12;
        thunk_FUN_01656ef8(unaff_x19 + 0x140);
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          uVar12 = Fusion_CloudServices_<get_CommittedPlayerInternal>d__112__System_Collections_Generic_IEnumerable<Fusion_PlayerRef>_GetEnumerator
                             (*(long *)(unaff_x19 + 0x20),0);
          *(undefined8 *)(unaff_x19 + 0x148) = uVar12;
          thunk_FUN_01656ef8(unaff_x19 + 0x148);
          if ((*(long *)(unaff_x19 + 0x18) != 0) &&
             (lVar6 = FUN_051e5130(*(long *)(unaff_x19 + 0x18),0), lVar6 != 0)) {
            uVar12 = Fusion_CloudServices_<get_CommittedPlayerInternal>d__112__System_Collections_Generic_IEnumerable<Fusion_PlayerRef>_GetEnumerator
                               (lVar6,0);
            *(undefined8 *)(unaff_x19 + 0x180) = uVar12;
            thunk_FUN_01656ef8(unaff_x19 + 0x180);
            if ((*(long *)(unaff_x19 + 0x18) != 0) &&
               (lVar6 = FUN_051e5130(*(long *)(unaff_x19 + 0x18),0), lVar6 != 0)) {
              uVar14 = Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar6,0);
              *(undefined4 *)(unaff_x19 + 0x188) = uVar14;
              *(float *)(unaff_x19 + 0x18c) = param_2;
              *(float *)(unaff_x19 + 400) = param_3;
              if ((*(long *)(unaff_x19 + 0x18) != 0) &&
                 (lVar6 = FUN_051e5130(*(long *)(unaff_x19 + 0x18),0), lVar6 != 0)) {
                uVar14 = FUN_04f1adf8(lVar6,0);
                *(undefined4 *)(unaff_x19 + 0x194) = uVar14;
                *(float *)(unaff_x19 + 0x198) = param_2;
                *(float *)(unaff_x19 + 0x19c) = param_3;
                *(undefined4 *)(unaff_x19 + 0x1a0) = param_4;
                if (*(long *)(unaff_x19 + 0x20) != 0) {
                  uVar14 = Fusion_CloudServices_<Join>d__84__SetStateMachine
                                     (*(long *)(unaff_x19 + 0x20),0);
                  *(undefined4 *)(unaff_x19 + 0x1a4) = uVar14;
                  *(float *)(unaff_x19 + 0x1a8) = param_2;
                  *(float *)(unaff_x19 + 0x1ac) = param_3;
                  if (*(long *)(unaff_x19 + 0x20) != 0) {
                    uVar14 = FUN_04f1adf8(*(long *)(unaff_x19 + 0x20),0);
                    *(undefined4 *)(unaff_x19 + 0x1b0) = uVar14;
                    *(float *)(unaff_x19 + 0x1b4) = param_2;
                    *(float *)(unaff_x19 + 0x1b8) = param_3;
                    *(undefined4 *)(unaff_x19 + 0x1bc) = param_4;
                    if (*(long *)(unaff_x19 + 0x18) != 0) {
                      uVar14 = FUN_049b09fc(*(long *)(unaff_x19 + 0x18),0);
                      *(undefined4 *)(unaff_x19 + 0x1c0) = uVar14;
                      if (*(long *)(unaff_x19 + 0x18) != 0) {
                        uVar14 = FUN_049b0a7c(*(long *)(unaff_x19 + 0x18),0);
                        *(undefined4 *)(unaff_x19 + 0x1c4) = uVar14;
                        if (*(long *)(unaff_x19 + 0x18) != 0) {
                          uVar14 = FUN_049b0afc(*(long *)(unaff_x19 + 0x18),0);
                          *(undefined4 *)(unaff_x19 + 0x1c8) = uVar14;
                          uVar14 = FUN_03b6b36c();
                          *(undefined4 *)(unaff_x19 + 0x240) = uVar14;
                          *(float *)(unaff_x19 + 0x244) = param_2;
                          *(float *)(unaff_x19 + 0x248) = param_3;
                          *(undefined4 *)(unaff_x19 + 0x24c) = param_4;
                          if (*(long *)(unaff_x19 + 0x18) != 0) {
                            fVar25 = (float)FUN_049afc60(*(long *)(unaff_x19 + 0x18),0);
                            if (*(long *)(unaff_x19 + 0x18) != 0) {
                              fVar27 = param_3;
                              fVar28 = param_2;
                              fVar15 = (float)FUN_049b0744(*(long *)(unaff_x19 + 0x18),0);
                              fVar21 = fVar25 * fVar27;
                              fVar26 = param_2 * fVar27 - param_3 * fVar28;
                              fVar27 = param_3 * fVar15 - fVar21;
                              fVar25 = fVar25 * fVar28 - param_2 * fVar15;
                              fStack0000000000000090 = fVar26;
                              fStack0000000000000094 = fVar27;
                              in_stack_00000098 = fVar25;
                              if (DAT_0722a39f == '\0') {
                                thunk_FUN_0159f088(PTR_DAT_06e1a840);
                                DAT_0722a39f = '\x01';
                              }
                              puVar2 = PTR_DAT_06e1a840;
                              if (*(int *)(*(long *)PTR_DAT_06e1a840 + 0xe0) == 0) {
                                thunk_FUN_016466fc();
                              }
                              fVar28 = DAT_0533fbb4;
                              fVar18 = fVar25 * fVar25;
                              fVar15 = SQRT(fVar18 + fVar26 * fVar26 + fVar27 * fVar27);
                              if (fVar15 <= DAT_0533fbb4) {
                                if (DAT_0722a13e == '\0') {
                                  thunk_FUN_0159f088(PTR_DAT_06e50440);
                                  DAT_0722a13e = '\x01';
                                }
                                pfVar9 = *(float **)(*(long *)puVar1 + 0xb8);
                                fVar26 = *pfVar9;
                                fVar27 = pfVar9[1];
                                fVar25 = pfVar9[2];
                              }
                              else {
                                fVar26 = fVar26 / fVar15;
                                fVar27 = fVar27 / fVar15;
                                fVar25 = fVar25 / fVar15;
                              }
                              if (*(long *)(unaff_x19 + 0x18) != 0) {
                                fVar15 = (float)FUN_049afc60(*(long *)(unaff_x19 + 0x18),0);
                                fVar29 = fVar27 * fVar21 - fVar25 * fVar18;
                                fVar21 = fVar25 * fVar15 - fVar26 * fVar21;
                                fVar15 = fVar26 * fVar18 - fVar27 * fVar15;
                                fStack0000000000000090 = fVar29;
                                fStack0000000000000094 = fVar21;
                                in_stack_00000098 = fVar15;
                                if (DAT_0722a39f == '\0') {
                                  thunk_FUN_0159f088(PTR_DAT_06e1a840);
                                  DAT_0722a39f = '\x01';
                                }
                                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                                  thunk_FUN_016466fc();
                                }
                                fVar18 = SQRT(fVar15 * fVar15 + fVar29 * fVar29 + fVar21 * fVar21);
                                if (fVar18 <= fVar28) {
                                  if (DAT_0722a13e == '\0') {
                                    thunk_FUN_0159f088(PTR_DAT_06e50440);
                                    DAT_0722a13e = '\x01';
                                  }
                                  pfVar9 = *(float **)(*(long *)puVar1 + 0xb8);
                                  fVar29 = *pfVar9;
                                  fVar21 = pfVar9[1];
                                  fVar15 = pfVar9[2];
                                }
                                else {
                                  fVar29 = fVar29 / fVar18;
                                  fVar21 = fVar21 / fVar18;
                                  fVar15 = fVar15 / fVar18;
                                }
                                puVar4 = PTR_DAT_06e52cd8;
                                puVar3 = PTR_DAT_06e2ec60;
                                puVar2 = PTR_DAT_06ddc378;
                                fVar28 = DAT_0534bf7c;
                                fVar15 = fVar25 - fVar15;
                                fVar18 = fVar15 * fVar15;
                                if (fVar18 + (fVar26 - fVar29) * (fVar26 - fVar29) +
                                             (fVar27 - fVar21) * (fVar27 - fVar21) < DAT_0534bf7c) {
                                  if (*(long *)(unaff_x19 + 0x18) != 0) {
                                    uVar12 = FUN_051e0500(*(long *)(unaff_x19 + 0x18),0);
                                    uVar12 = FUN_02526be4(*(undefined8 *)puVar2,uVar12,
                                                          *(undefined8 *)puVar3,0);
                                    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                                      thunk_FUN_016466fc(*(long *)puVar4);
                                    }
                                    FUN_0486672c(uVar12,0);
                                    return;
                                  }
                                }
                                else {
                                  fStack0000000000000108 = fVar21;
                                  fStack000000000000010c = fVar29;
                                  if (*(long *)(unaff_x19 + 0x20) != 0) {
                                    fVar21 = DAT_0534bf7c;
                                    FUN_04f1adf8(*(long *)(unaff_x19 + 0x20),0);
                                    fVar29 = (float)FUN_04f13694(0);
                                    if (*plVar10 != 0) {
                                      fVar17 = fVar21;
                                      fVar20 = fVar18;
                                      fVar23 = fVar15;
                                      fVar16 = (float)FUN_04f1adf8(*plVar10,0);
                                      fVar22 = fVar15 * fVar23;
                                      fVar24 = fVar29 * fVar20 + fVar21 * fVar23 + fVar15 * fVar17;
                                      fVar19 = ((fVar21 * fVar17 - fVar29 * fVar16) -
                                               fVar18 * fVar20) - fVar22;
                                      *(float *)(unaff_x19 + 0x2b0) =
                                           (fVar18 * fVar23 + fVar21 * fVar16 + fVar29 * fVar17) -
                                           fVar15 * fVar20;
                                      *(float *)(unaff_x19 + 0x2b4) =
                                           (fVar15 * fVar16 + fVar21 * fVar20 + fVar18 * fVar17) -
                                           fVar29 * fVar23;
                                      *(float *)(unaff_x19 + 0x2b8) = fVar24 - fVar18 * fVar16;
                                      *(float *)(unaff_x19 + 700) = fVar19;
                                      if (*(long *)(unaff_x19 + 0x20) != 0) {
                                        lVar6 = *(long *)(unaff_x19 + 0xb0);
                                        Fusion_CloudServices_<Join>d__84__SetStateMachine
                                                  (*(long *)(unaff_x19 + 0x20),0);
                                        if (lVar6 != 0) {
                                          uVar14 = FUN_04f1c838(lVar6,0);
                                          *(undefined4 *)(unaff_x19 + 0x150) = uVar14;
                                          *(float *)(unaff_x19 + 0x154) = fVar19;
                                          *(float *)(unaff_x19 + 0x158) = fVar22;
                                          if (*(long *)(unaff_x19 + 0xb0) != 0) {
                                            FUN_04f1adf8(*(long *)(unaff_x19 + 0xb0),0);
                                            fVar15 = (float)FUN_04f13694(0);
                                            if (*(long *)(unaff_x19 + 0x20) != 0) {
                                              fVar21 = fVar24;
                                              fVar18 = fVar19;
                                              fVar29 = fVar22;
                                              fVar17 = (float)FUN_04f1adf8(*(long *)(unaff_x19 +
                                                                                    0x20),0);
                                              fVar20 = (fVar22 * fVar17 +
                                                       fVar24 * fVar18 + fVar19 * fVar21) -
                                                       fVar15 * fVar29;
                                              fVar23 = (fVar15 * fVar18 +
                                                       fVar24 * fVar29 + fVar22 * fVar21) -
                                                       fVar19 * fVar17;
                                              fVar16 = ((fVar24 * fVar21 - fVar15 * fVar17) -
                                                       fVar19 * fVar18) - fVar22 * fVar29;
                                              *(float *)(unaff_x19 + 0x15c) =
                                                   (fVar19 * fVar29 +
                                                   fVar24 * fVar17 + fVar15 * fVar21) -
                                                   fVar22 * fVar18;
                                              *(float *)(unaff_x19 + 0x160) = fVar20;
                                              *(float *)(unaff_x19 + 0x164) = fVar23;
                                              *(float *)(unaff_x19 + 0x168) = fVar16;
                                              uVar14 = FUN_04f13694(0);
                                              *(undefined4 *)(unaff_x19 + 0x344) = uVar14;
                                              *(float *)(unaff_x19 + 0x348) = fVar20;
                                              *(float *)(unaff_x19 + 0x34c) = fVar23;
                                              *(float *)(unaff_x19 + 0x350) = fVar16;
                                              if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                uVar12 = FUN_04f1adf8(*(long *)(unaff_x19 + 0x20),0)
                                                ;
                                                if (*plVar10 != 0) {
                                                  FUN_04f1adf8(*plVar10,0);
                                                  uVar14 = FUN_03b5df08(uVar12);
                                                  *(float *)(unaff_x19 + 0x178) = fVar16;
                                                  *(undefined4 *)(unaff_x19 + 0x16c) = uVar14;
                                                  *(float *)(unaff_x19 + 0x170) = fVar20;
                                                  *(float *)(unaff_x19 + 0x174) = fVar23;
                                                  fVar18 = fStack000000000000010c;
                                                  fVar29 = (float)FUN_04f13c44(fVar26,0);
                                                  fVar15 = fVar27;
                                                  fVar21 = fVar25;
                                                  fVar26 = fVar18;
                                                  uVar14 = FUN_04f13694(0);
                                                  *(undefined4 *)(unaff_x19 + 0x270) = uVar14;
                                                  *(float *)(unaff_x19 + 0x274) = fVar15;
                                                  *(float *)(unaff_x19 + 0x278) = fVar21;
                                                  *(float *)(unaff_x19 + 0x27c) = fVar26;
                                                  fVar15 = *(float *)(unaff_x19 + 0x24c);
                                                  fVar21 = *(float *)(unaff_x19 + 0x240);
                                                  fVar26 = *(float *)(unaff_x19 + 0x244);
                                                  fVar23 = *(float *)(unaff_x19 + 0x248);
                                                  fVar16 = fVar25 * fVar23;
                                                  fVar17 = (fVar25 * fVar26 +
                                                           fVar18 * fVar21 + fVar29 * fVar15) -
                                                           fVar27 * fVar23;
                                                  fVar20 = (fVar29 * fVar23 +
                                                           fVar18 * fVar26 + fVar27 * fVar15) -
                                                           fVar25 * fVar21;
                                                  *(float *)(unaff_x19 + 0x280) = fVar17;
                                                  *(float *)(unaff_x19 + 0x284) = fVar20;
                                                  *(float *)(unaff_x19 + 0x288) =
                                                       (fVar27 * fVar21 +
                                                       fVar18 * fVar23 + fVar25 * fVar15) -
                                                       fVar29 * fVar26;
                                                  *(float *)(unaff_x19 + 0x28c) =
                                                       ((fVar18 * fVar15 - fVar29 * fVar21) -
                                                       fVar27 * fVar26) - fVar16;
                                                  FUN_03b6b42c();
                                                  fVar21 = (float)FUN_04f13694(0);
                                                  fVar25 = fVar16;
                                                  fVar27 = fVar17;
                                                  fVar15 = fVar20;
                                                  fVar26 = (float)FUN_03b6b4e4();
                                                  fVar23 = fVar20 * fVar15;
                                                  fVar19 = fVar21 * fVar27 +
                                                           fVar16 * fVar15 + fVar20 * fVar25;
                                                  fVar18 = ((fVar16 * fVar25 - fVar21 * fVar26) -
                                                           fVar17 * fVar27) - fVar23;
                                                  *(float *)(unaff_x19 + 0x260) =
                                                       (fVar17 * fVar15 +
                                                       fVar16 * fVar26 + fVar21 * fVar25) -
                                                       fVar20 * fVar27;
                                                  *(float *)(unaff_x19 + 0x264) =
                                                       (fVar20 * fVar26 +
                                                       fVar16 * fVar27 + fVar17 * fVar25) -
                                                       fVar21 * fVar15;
                                                  *(float *)(unaff_x19 + 0x268) =
                                                       fVar19 - fVar17 * fVar26;
                                                  *(float *)(unaff_x19 + 0x26c) = fVar18;
                                                  FUN_03b6b618();
                                                  fVar21 = (float)FUN_04f13694(0);
                                                  fVar25 = fVar19;
                                                  fVar27 = fVar18;
                                                  fVar15 = fVar23;
                                                  fVar26 = (float)FUN_03b6b36c();
                                                  fVar17 = fVar23 * fVar15;
                                                  fVar20 = fVar21 * fVar27 +
                                                           fVar19 * fVar15 + fVar23 * fVar25;
                                                  fVar29 = ((fVar19 * fVar25 - fVar21 * fVar26) -
                                                           fVar18 * fVar27) - fVar17;
                                                  *(float *)(unaff_x19 + 0x250) =
                                                       (fVar18 * fVar15 +
                                                       fVar19 * fVar26 + fVar21 * fVar25) -
                                                       fVar23 * fVar27;
                                                  *(float *)(unaff_x19 + 0x254) =
                                                       (fVar23 * fVar26 +
                                                       fVar19 * fVar27 + fVar18 * fVar25) -
                                                       fVar21 * fVar15;
                                                  *(float *)(unaff_x19 + 600) =
                                                       fVar20 - fVar18 * fVar26;
                                                  *(float *)(unaff_x19 + 0x25c) = fVar29;
                                                  if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                    uVar12 = FUN_049afbe0(*(long *)(unaff_x19 + 0x18
                                                                                   ),0);
                                                    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
                                                      thunk_FUN_016466fc(*unaff_x24);
                                                    }
                                                    uVar7 = FUN_051d2ac0(uVar12,0,0);
                                                    if ((uVar7 & 1) != 0) {
                                                      if (*(long *)(unaff_x19 + 0x18) == 0)
                                                      goto LAB_03b6b08c;
                                                      FUN_049b0044(*(long *)(unaff_x19 + 0x18),0,0);
                                                      if ((*(long *)(unaff_x19 + 0x18) == 0) ||
                                                         (lVar6 = FUN_049afbe0(*(long *)(unaff_x19 +
                                                                                        0x18),0),
                                                         lVar6 == 0)) goto LAB_03b6b08c;
                                                      uVar12 = FUN_051e5130(lVar6,0);
                                                      *(undefined8 *)(unaff_x19 + 0x2e8) = uVar12;
                                                      thunk_FUN_01656ef8(unaff_x19 + 0x2e8);
                                                      if (*(long *)(unaff_x19 + 0x20) == 0)
                                                      goto LAB_03b6b08c;
                                                      uVar12 = 
                                                  Fusion_CloudServices_<get_CommittedPlayerInternal>d__112__System_Collections_Generic_IEnumerable<Fusion_PlayerRef>_GetEnumerator
                                                            (*(long *)(unaff_x19 + 0x20),0);
                                                  uVar13 = *(undefined8 *)(unaff_x19 + 0xc0);
                                                  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
                                                    thunk_FUN_016466fc(*unaff_x24);
                                                  }
                                                  bVar5 = FUN_051d94d4(uVar12,uVar13,0);
                                                  *(byte *)(unaff_x19 + 0x2fc) = bVar5 & 1;
                                                  FUN_03b6b758();
                                                  }
                                                  if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                    uVar14 = FUN_049b09fc(*(long *)(unaff_x19 + 0x18
                                                                                   ),0);
                                                    *(undefined4 *)(unaff_x19 + 0x2f0) = uVar14;
                                                    if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                      uVar14 = FUN_049b0a7c(*(long *)(unaff_x19 +
                                                                                     0x18),0);
                                                      *(undefined4 *)(unaff_x19 + 0x2f4) = uVar14;
                                                      if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                        uVar14 = FUN_049b0afc(*(long *)(unaff_x19 +
                                                                                       0x18),0);
                                                        *(undefined4 *)(unaff_x19 + 0x2f8) = uVar14;
                                                        if ((*(long *)(unaff_x19 + 0xb8) != 0) &&
                                                           (lVar6 = FUN_051e5130(*(long *)(unaff_x19
                                                                                          + 0xb8),0)
                                                           , lVar6 != 0)) {
                                                          FUN_04f1adf8(lVar6,0);
                                                          fVar25 = (float)FUN_04f13694(0);
                                                          if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                            fVar27 = fVar20;
                                                            fVar15 = fVar29;
                                                            fVar21 = fVar17;
                                                            fVar26 = (float)FUN_04f1adf8(*(long *)(
                                                  unaff_x19 + 0x20),0);
                                                  fVar23 = fVar17 * fVar21;
                                                  fVar16 = fVar25 * fVar15 +
                                                           fVar20 * fVar21 + fVar17 * fVar27;
                                                  fVar18 = ((fVar20 * fVar27 - fVar25 * fVar26) -
                                                           fVar29 * fVar15) - fVar23;
                                                  *(float *)(unaff_x19 + 300) =
                                                       (fVar29 * fVar21 +
                                                       fVar20 * fVar26 + fVar25 * fVar27) -
                                                       fVar17 * fVar15;
                                                  *(float *)(unaff_x19 + 0x130) =
                                                       (fVar17 * fVar26 +
                                                       fVar20 * fVar15 + fVar29 * fVar27) -
                                                       fVar25 * fVar21;
                                                  *(float *)(unaff_x19 + 0x134) =
                                                       fVar16 - fVar29 * fVar26;
                                                  *(float *)(unaff_x19 + 0x138) = fVar18;
                                                  if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                    uVar12 = FUN_049afbe0(*(long *)(unaff_x19 + 0x18
                                                                                   ),0);
                                                    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
                                                      thunk_FUN_016466fc(*unaff_x24);
                                                    }
                                                    uVar7 = FUN_051d94d4(uVar12,0,0);
                                                    if ((uVar7 & 1) == 0) {
                                                      if ((*(long *)(unaff_x19 + 0x18) == 0) ||
                                                         (lVar6 = FUN_049afbe0(*(long *)(unaff_x19 +
                                                                                        0x18),0),
                                                         lVar6 == 0)) goto LAB_03b6b08c;
                                                      lVar6 = FUN_051e5130(lVar6,0);
                                                      if ((*plVar10 == 0) ||
                                                         (
                                                  Fusion_CloudServices_<Join>d__84__SetStateMachine
                                                            (*plVar10,0), lVar6 == 0))
                                                  goto LAB_03b6b08c;
                                                  uVar14 = FUN_04f1c838(lVar6,0);
                                                  *(undefined4 *)(unaff_x19 + 0x21c) = uVar14;
                                                  *(float *)(unaff_x19 + 0x220) = fVar18;
                                                  *(float *)(unaff_x19 + 0x224) = fVar23;
                                                  if (((*(long *)(unaff_x19 + 0x18) == 0) ||
                                                      (lVar6 = FUN_049afbe0(*(long *)(unaff_x19 +
                                                                                     0x18),0),
                                                      lVar6 == 0)) ||
                                                     (lVar6 = FUN_051e5130(lVar6,0), lVar6 == 0))
                                                  goto LAB_03b6b08c;
                                                  FUN_04f1adf8(lVar6,0);
                                                  fVar25 = (float)FUN_04f13694(0);
                                                  if (*plVar10 == 0) goto LAB_03b6b08c;
                                                  fVar27 = fVar16;
                                                  fVar15 = fVar18;
                                                  fVar21 = fVar23;
                                                  fVar26 = (float)FUN_04f1adf8(*plVar10,0);
                                                  fVar20 = fVar18 * fVar26;
                                                  fVar29 = fVar18 * fVar15;
                                                  fVar19 = fVar23 * fVar21;
                                                  fVar17 = (fVar18 * fVar21 +
                                                           fVar16 * fVar26 + fVar25 * fVar27) -
                                                           fVar23 * fVar15;
                                                  fVar18 = (fVar23 * fVar26 +
                                                           fVar16 * fVar15 + fVar18 * fVar27) -
                                                           fVar25 * fVar21;
                                                  fVar23 = (fVar25 * fVar15 +
                                                           fVar16 * fVar21 + fVar23 * fVar27) -
                                                           fVar20;
                                                  fVar16 = ((fVar16 * fVar27 - fVar25 * fVar26) -
                                                           fVar29) - fVar19;
                                                  }
                                                  else {
                                                    if (*plVar10 == 0) goto LAB_03b6b08c;
                                                    uVar14 = FUN_04f1aa98(*plVar10,0);
                                                    *(undefined4 *)(unaff_x19 + 0x21c) = uVar14;
                                                    *(float *)(unaff_x19 + 0x220) = fVar18;
                                                    *(float *)(unaff_x19 + 0x224) = fVar23;
                                                    if (*(long *)(unaff_x19 + 0xb0) == 0)
                                                    goto LAB_03b6b08c;
                                                    fVar17 = (float)FUN_04f1aef8(*(long *)(unaff_x19
                                                                                          + 0xb0),0)
                                                    ;
                                                  }
                                                  *(float *)(unaff_x19 + 0x2a0) = fVar17;
                                                  *(float *)(unaff_x19 + 0x2a4) = fVar18;
                                                  *(float *)(unaff_x19 + 0x2a8) = fVar23;
                                                  *(float *)(unaff_x19 + 0x2ac) = fVar16;
                                                  if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                    uVar14 = FUN_04f1aa98(*(long *)(unaff_x19 + 0x20
                                                                                   ),0);
                                                    *(undefined4 *)(unaff_x19 + 0x228) = uVar14;
                                                    *(float *)(unaff_x19 + 0x22c) = fVar18;
                                                    *(float *)(unaff_x19 + 0x230) = fVar23;
                                                    if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                      uVar14 = FUN_04f1aef8(*(long *)(unaff_x19 +
                                                                                     0x20),0);
                                                      *(undefined4 *)(unaff_x19 + 0x2c0) = uVar14;
                                                      *(float *)(unaff_x19 + 0x2c4) = fVar18;
                                                      *(float *)(unaff_x19 + 0x2c8) = fVar23;
                                                      *(float *)(unaff_x19 + 0x2cc) = fVar16;
                                                      if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                        FUN_049b1da8(*(long *)(unaff_x19 + 0x18),1,0
                                                                    );
                                                        if ((*(long *)(unaff_x19 + 0x18) != 0) &&
                                                           (lVar6 = FUN_051e516c(*(long *)(unaff_x19
                                                                                          + 0x18),0)
                                                           , lVar6 != 0)) {
                                                          uVar7 = FUN_051df964(lVar6,0);
                                                          puVar2 = PTR_DAT_06e49d60;
                                                          lVar6 = *(long *)(unaff_x19 + 0x18);
                                                          if (lVar6 != 0) {
                                                            if ((uVar7 & 1) == 0) {
                                                              lVar6 = FUN_051e5130(lVar6,0);
                                                              if (*(int *)(*(long *)puVar4 + 0xe0)
                                                                  == 0) {
                                                                thunk_FUN_016466fc(*(long *)puVar4);
                                                              }
                                                              uVar12 = *(undefined8 *)puVar2;
LAB_03b6ae68:
                                                              FUN_04866834(uVar12,lVar6,0);
                                                              return;
                                                            }
                                                            FUN_049b2360(lVar6,0,0);
                                                            if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                              FUN_049b21d0(*(long *)(unaff_x19 +
                                                                                    0x18),0,0);
                                                              if (*(long *)(unaff_x19 + 0x18) != 0)
                                                              {
                                                                fVar25 = (float)FUN_049afd98(*(long 
                                                  *)(unaff_x19 + 0x18),0);
                                                  if (DAT_0722a13e == '\0') {
                                                    thunk_FUN_0159f088(PTR_DAT_06e50440);
                                                    DAT_0722a13e = '\x01';
                                                  }
                                                  pfVar9 = *(float **)(*(long *)puVar1 + 0xb8);
                                                  fVar23 = fVar23 - pfVar9[2];
                                                  if (fVar23 * fVar23 +
                                                      (fVar25 - *pfVar9) * (fVar25 - *pfVar9) +
                                                      (fVar18 - pfVar9[1]) * (fVar18 - pfVar9[1]) <
                                                      fVar28) {
                                                    if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                      uVar14 = 
                                                  Fusion_CloudServices_<Join>d__84__SetStateMachine
                                                            (*(long *)(unaff_x19 + 0x20),0);
                                                  *(undefined4 *)(unaff_x19 + 200) = uVar14;
                                                  *(float *)(unaff_x19 + 0xcc) = fVar28;
                                                  *(float *)(unaff_x19 + 0xd0) = fVar23;
                                                  if (*(long *)(unaff_x19 + 0xb8) != 0) {
                                                    uVar14 = FUN_049ac524(*(long *)(unaff_x19 + 0xb8
                                                                                   ),0);
                                                    *(undefined4 *)(unaff_x19 + 0x32c) = uVar14;
                                                    *(float *)(unaff_x19 + 0x330) = fVar28;
                                                    *(float *)(unaff_x19 + 0x334) = fVar23;
                                                    if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                      uVar14 = FUN_04f1adf8(*(long *)(unaff_x19 +
                                                                                     0x20),0);
                                                      *(undefined4 *)(unaff_x19 + 0xd4) = uVar14;
                                                      *(float *)(unaff_x19 + 0xd8) = fVar28;
                                                      *(float *)(unaff_x19 + 0xdc) = fVar23;
                                                      *(float *)(unaff_x19 + 0xe0) = fVar16;
                                                      fVar25 = (float)FUN_03b6b618();
                                                      fVar26 = *(float *)(unaff_x19 + 0x250);
                                                      fVar18 = *(float *)(unaff_x19 + 0x25c);
                                                      fVar29 = *(float *)(unaff_x19 + 600);
                                                      fVar17 = *(float *)(unaff_x19 + 0x254);
                                                      fVar15 = fVar23 * fVar29;
                                                      fVar27 = (fVar28 * fVar29 +
                                                               fVar16 * fVar26 + fVar25 * fVar18) -
                                                               fVar23 * fVar17;
                                                      fVar21 = (fVar23 * fVar26 +
                                                               fVar16 * fVar17 + fVar28 * fVar18) -
                                                               fVar25 * fVar29;
                                                      *(float *)(unaff_x19 + 0x290) = fVar27;
                                                      *(float *)(unaff_x19 + 0x294) = fVar21;
                                                      *(float *)(unaff_x19 + 0x298) =
                                                           (fVar25 * fVar17 +
                                                           fVar16 * fVar29 + fVar23 * fVar18) -
                                                           fVar28 * fVar26;
                                                      *(float *)(unaff_x19 + 0x29c) =
                                                           ((fVar16 * fVar18 - fVar25 * fVar26) -
                                                           fVar28 * fVar17) - fVar15;
                                                      FUN_03b6b9a0();
                                                      uVar14 = FUN_051dd1d4(0);
                                                      *(undefined4 *)(unaff_x19 + 0x308) = uVar14;
                                                      uVar14 = FUN_051dd1d4(0);
                                                      *(undefined4 *)(unaff_x19 + 0x30c) = uVar14;
                                                      if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                        uVar14 = 
                                                  Fusion_CloudServices_<Join>d__84__SetStateMachine
                                                            (*(long *)(unaff_x19 + 0x20),0);
                                                  *(undefined4 *)(unaff_x19 + 0x234) = uVar14;
                                                  *(float *)(unaff_x19 + 0x238) = fVar27;
                                                  *(float *)(unaff_x19 + 0x23c) = fVar15;
                                                  if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                    uVar14 = FUN_04f1adf8(*(long *)(unaff_x19 + 0x20
                                                                                   ),0);
                                                    *(undefined4 *)(unaff_x19 + 0x2d0) = uVar14;
                                                    *(float *)(unaff_x19 + 0x2d4) = fVar27;
                                                    *(float *)(unaff_x19 + 0x2d8) = fVar15;
                                                    *(float *)(unaff_x19 + 0x2dc) = fVar21;
                                                    if ((*(long *)(unaff_x19 + 0x28) != 0) &&
                                                       (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x28
                                                                                   ) + 0x30),
                                                       lVar6 != 0)) {
                                                      uVar12 = FUN_0160edfc(*(undefined8 *)
                                                                             PTR_DAT_06dad490,
                                                                            *(undefined4 *)
                                                                             (lVar6 + 0x18));
                                                      *(undefined8 *)(unaff_x19 + 0x318) = uVar12;
                                                      thunk_FUN_01656ef8((undefined8 *)
                                                                         (unaff_x19 + 0x318),uVar12)
                                                      ;
                                                      puVar1 = PTR_DAT_06e2a8c0;
                                                      plVar10 = *(long **)(unaff_x19 + 0x318);
                                                      if (plVar10 != (long *)0x0) {
                                                        uVar7 = 0;
                                                        do {
                                                          if ((long)(int)plVar10[3] <= (long)uVar7)
                                                          {
                                                            *(undefined1 *)(unaff_x19 + 0x2fd) = 1;
                                                            return;
                                                          }
                                                          if ((*(long *)(unaff_x19 + 0x28) == 0) ||
                                                             (lVar6 = *(long *)(*(long *)(unaff_x19
                                                                                         + 0x28) +
                                                                               0x30), lVar6 == 0))
                                                          break;
                                                          if (*(uint *)(lVar6 + 0x18) <= uVar7) {
LAB_03b6b0c8:
                    /* WARNING: Subroutine does not return */
                                                            FUN_0160eebc();
                                                          }
                                                          uVar12 = *(undefined8 *)
                                                                    (lVar6 + uVar7 * 8 + 0x20);
                                                          lVar6 = thunk_FUN_015d056c(*(undefined8 *)
                                                                                      puVar1);
                                                          if (lVar6 == 0) break;
                                                          FUN_03b8a21c(lVar6,uVar12,0);
                                                          lVar8 = thunk_FUN_015d0480(lVar6,*(
                                                  undefined8 *)(*plVar10 + 0x40));
                                                  if (lVar8 == 0) {
                                                    uVar12 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
                                                    FUN_0160ee7c(uVar12,0);
                                                  }
                                                  if (*(uint *)(plVar10 + 3) <= uVar7)
                                                  goto LAB_03b6b0c8;
                                                  plVar10[uVar7 + 4] = lVar6;
                                                  thunk_FUN_01656ef8(plVar10 + uVar7 + 4,lVar6);
                                                  plVar10 = *(long **)(unaff_x19 + 0x318);
                                                  uVar7 = uVar7 + 1;
                                                  } while (plVar10 != (long *)0x0);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else if (*plVar10 != 0) {
                                                    uVar12 = FUN_051e0500(*plVar10,0);
                                                    puVar2 = PTR_DAT_06dc37c0;
                                                    puVar1 = PTR_DAT_06db5be8;
                                                    if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                      fStack0000000000000090 =
                                                           (float)FUN_049afd98(*(long *)(unaff_x19 +
                                                                                        0x18),0);
                                                      fStack0000000000000094 = fVar28;
                                                      in_stack_00000098 = fVar23;
                                                      uVar13 = Fusion_CloudCommunicator__Dispose
                                                                         (&stack0x00000090,0);
                                                      uVar12 = FUN_02526f2c(*(undefined8 *)puVar2,
                                                                            uVar12,*(undefined8 *)
                                                                                    puVar1,uVar13,0)
                                                      ;
                                                      lVar6 = *plVar10;
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
LAB_03b6b08c:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


