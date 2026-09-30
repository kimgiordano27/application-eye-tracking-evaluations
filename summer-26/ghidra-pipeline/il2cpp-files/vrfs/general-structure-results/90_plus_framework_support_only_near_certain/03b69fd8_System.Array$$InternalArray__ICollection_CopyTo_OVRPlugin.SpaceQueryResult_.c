/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 03b69fd8
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


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_SpaceQueryResult>
               (long param_1,undefined1 param_2 [16],float param_3,float param_4,undefined4 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  float *pfVar9;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 uVar10;
  undefined8 uVar11;
  long *unaff_x24;
  long *plVar12;
  undefined4 uVar13;
  float fVar14;
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
  
  puVar1 = PTR_DAT_06e50440;
  if (param_1 == 0) goto LAB_03b6b08c;
  if (*(long *)(param_1 + 0x18) == 0) {
    if (DAT_0722a398 == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06e50440);
      DAT_0722a398 = '\x01';
    }
    if (*unaff_x20 == 0) goto LAB_03b6b08c;
    lVar8 = *(long *)(*(long *)puVar1 + 0xb8);
    fVar24 = *(float *)(lVar8 + 0xc);
    fVar26 = *(float *)(lVar8 + 0x10);
    fVar27 = *(float *)(lVar8 + 0x14);
    lVar8 = FUN_0431ae70(*unaff_x20,*(undefined8 *)PTR_DAT_06dfafe8);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_016466fc(*unaff_x24);
    }
    uVar6 = FUN_051d2ac0(lVar8,0,0);
    if ((uVar6 & 1) == 0) {
      uVar6 = (ulong)(uint)(fVar24 * DAT_0534c250);
      param_3 = fVar26 * DAT_0534c250;
      param_4 = fVar27 * DAT_0534c250;
    }
    else {
      if (lVar8 == 0) goto LAB_03b6b08c;
      FUN_0486aa88(&stack0x00000050,lVar8,0);
      in_stack_000000a8 = in_stack_00000058;
      in_stack_000000a0 = in_stack_00000050;
      in_stack_000000b0 = in_stack_00000060;
      uVar6 = FUN_051db98c(&stack0x000000a0,0);
    }
    lVar8 = *unaff_x21;
    if (lVar8 == 0) goto LAB_03b6b08c;
    param_5 = FUN_049ac010(lVar8,0);
    FUN_03b8c508(uVar6,0);
    FUN_049ac798(lVar8,0);
  }
  uVar10 = *(undefined8 *)(unaff_x19 + 0xc0);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar6 = FUN_051d2ac0(uVar10,0,0);
  if ((uVar6 & 1) == 0) {
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_03b6b08c;
    uVar10 = Fusion_CloudServices_<get_CommittedPlayerInternal>d__112__System_Collections_Generic_IEnumerable<Fusion_PlayerRef>_GetEnumerator
                       (*(long *)(unaff_x19 + 0x20),0);
  }
  else {
    uVar10 = *(undefined8 *)(unaff_x19 + 0xc0);
  }
  *(undefined8 *)(unaff_x19 + 0x2e0) = uVar10;
  thunk_FUN_01656ef8(unaff_x19 + 0x2e0);
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    uVar10 = FUN_049afbe0(*(long *)(unaff_x19 + 0x18),0);
    *(undefined8 *)(unaff_x19 + 0x140) = uVar10;
    thunk_FUN_01656ef8(unaff_x19 + 0x140);
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      uVar10 = Fusion_CloudServices_<get_CommittedPlayerInternal>d__112__System_Collections_Generic_IEnumerable<Fusion_PlayerRef>_GetEnumerator
                         (*(long *)(unaff_x19 + 0x20),0);
      *(undefined8 *)(unaff_x19 + 0x148) = uVar10;
      thunk_FUN_01656ef8(unaff_x19 + 0x148);
      if ((*(long *)(unaff_x19 + 0x18) != 0) &&
         (lVar8 = FUN_051e5130(*(long *)(unaff_x19 + 0x18),0), lVar8 != 0)) {
        uVar10 = Fusion_CloudServices_<get_CommittedPlayerInternal>d__112__System_Collections_Generic_IEnumerable<Fusion_PlayerRef>_GetEnumerator
                           (lVar8,0);
        *(undefined8 *)(unaff_x19 + 0x180) = uVar10;
        thunk_FUN_01656ef8(unaff_x19 + 0x180);
        if ((*(long *)(unaff_x19 + 0x18) != 0) &&
           (lVar8 = FUN_051e5130(*(long *)(unaff_x19 + 0x18),0), lVar8 != 0)) {
          uVar13 = Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar8,0);
          *(undefined4 *)(unaff_x19 + 0x188) = uVar13;
          *(float *)(unaff_x19 + 0x18c) = param_3;
          *(float *)(unaff_x19 + 400) = param_4;
          if ((*(long *)(unaff_x19 + 0x18) != 0) &&
             (lVar8 = FUN_051e5130(*(long *)(unaff_x19 + 0x18),0), lVar8 != 0)) {
            uVar13 = FUN_04f1adf8(lVar8,0);
            *(undefined4 *)(unaff_x19 + 0x194) = uVar13;
            *(float *)(unaff_x19 + 0x198) = param_3;
            *(float *)(unaff_x19 + 0x19c) = param_4;
            *(undefined4 *)(unaff_x19 + 0x1a0) = param_5;
            if (*(long *)(unaff_x19 + 0x20) != 0) {
              uVar13 = Fusion_CloudServices_<Join>d__84__SetStateMachine
                                 (*(long *)(unaff_x19 + 0x20),0);
              *(undefined4 *)(unaff_x19 + 0x1a4) = uVar13;
              *(float *)(unaff_x19 + 0x1a8) = param_3;
              *(float *)(unaff_x19 + 0x1ac) = param_4;
              if (*(long *)(unaff_x19 + 0x20) != 0) {
                uVar13 = FUN_04f1adf8(*(long *)(unaff_x19 + 0x20),0);
                *(undefined4 *)(unaff_x19 + 0x1b0) = uVar13;
                *(float *)(unaff_x19 + 0x1b4) = param_3;
                *(float *)(unaff_x19 + 0x1b8) = param_4;
                *(undefined4 *)(unaff_x19 + 0x1bc) = param_5;
                if (*(long *)(unaff_x19 + 0x18) != 0) {
                  uVar13 = FUN_049b09fc(*(long *)(unaff_x19 + 0x18),0);
                  *(undefined4 *)(unaff_x19 + 0x1c0) = uVar13;
                  if (*(long *)(unaff_x19 + 0x18) != 0) {
                    uVar13 = FUN_049b0a7c(*(long *)(unaff_x19 + 0x18),0);
                    *(undefined4 *)(unaff_x19 + 0x1c4) = uVar13;
                    if (*(long *)(unaff_x19 + 0x18) != 0) {
                      uVar13 = FUN_049b0afc(*(long *)(unaff_x19 + 0x18),0);
                      *(undefined4 *)(unaff_x19 + 0x1c8) = uVar13;
                      uVar13 = FUN_03b6b36c();
                      *(undefined4 *)(unaff_x19 + 0x240) = uVar13;
                      *(float *)(unaff_x19 + 0x244) = param_3;
                      *(float *)(unaff_x19 + 0x248) = param_4;
                      *(undefined4 *)(unaff_x19 + 0x24c) = param_5;
                      if (*(long *)(unaff_x19 + 0x18) != 0) {
                        fVar24 = (float)FUN_049afc60(*(long *)(unaff_x19 + 0x18),0);
                        if (*(long *)(unaff_x19 + 0x18) != 0) {
                          fVar26 = param_4;
                          fVar27 = param_3;
                          fVar14 = (float)FUN_049b0744(*(long *)(unaff_x19 + 0x18),0);
                          fVar20 = fVar24 * fVar26;
                          fVar25 = param_3 * fVar26 - param_4 * fVar27;
                          fVar26 = param_4 * fVar14 - fVar20;
                          fVar24 = fVar24 * fVar27 - param_3 * fVar14;
                          fStack0000000000000090 = fVar25;
                          fStack0000000000000094 = fVar26;
                          in_stack_00000098 = fVar24;
                          if (DAT_0722a39f == '\0') {
                            thunk_FUN_0159f088(PTR_DAT_06e1a840);
                            DAT_0722a39f = '\x01';
                          }
                          puVar2 = PTR_DAT_06e1a840;
                          if (*(int *)(*(long *)PTR_DAT_06e1a840 + 0xe0) == 0) {
                            thunk_FUN_016466fc();
                          }
                          fVar27 = DAT_0533fbb4;
                          fVar17 = fVar24 * fVar24;
                          fVar14 = SQRT(fVar17 + fVar25 * fVar25 + fVar26 * fVar26);
                          if (fVar14 <= DAT_0533fbb4) {
                            if (DAT_0722a13e == '\0') {
                              thunk_FUN_0159f088(PTR_DAT_06e50440);
                              DAT_0722a13e = '\x01';
                            }
                            pfVar9 = *(float **)(*(long *)puVar1 + 0xb8);
                            fVar25 = *pfVar9;
                            fVar26 = pfVar9[1];
                            fVar24 = pfVar9[2];
                          }
                          else {
                            fVar25 = fVar25 / fVar14;
                            fVar26 = fVar26 / fVar14;
                            fVar24 = fVar24 / fVar14;
                          }
                          if (*(long *)(unaff_x19 + 0x18) != 0) {
                            fVar14 = (float)FUN_049afc60(*(long *)(unaff_x19 + 0x18),0);
                            fVar28 = fVar26 * fVar20 - fVar24 * fVar17;
                            fVar20 = fVar24 * fVar14 - fVar25 * fVar20;
                            fVar14 = fVar25 * fVar17 - fVar26 * fVar14;
                            fStack0000000000000090 = fVar28;
                            fStack0000000000000094 = fVar20;
                            in_stack_00000098 = fVar14;
                            if (DAT_0722a39f == '\0') {
                              thunk_FUN_0159f088(PTR_DAT_06e1a840);
                              DAT_0722a39f = '\x01';
                            }
                            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                              thunk_FUN_016466fc();
                            }
                            fVar17 = SQRT(fVar14 * fVar14 + fVar28 * fVar28 + fVar20 * fVar20);
                            if (fVar17 <= fVar27) {
                              if (DAT_0722a13e == '\0') {
                                thunk_FUN_0159f088(PTR_DAT_06e50440);
                                DAT_0722a13e = '\x01';
                              }
                              pfVar9 = *(float **)(*(long *)puVar1 + 0xb8);
                              fVar28 = *pfVar9;
                              fVar20 = pfVar9[1];
                              fVar14 = pfVar9[2];
                            }
                            else {
                              fVar28 = fVar28 / fVar17;
                              fVar20 = fVar20 / fVar17;
                              fVar14 = fVar14 / fVar17;
                            }
                            puVar4 = PTR_DAT_06e52cd8;
                            puVar3 = PTR_DAT_06e2ec60;
                            puVar2 = PTR_DAT_06ddc378;
                            fVar27 = DAT_0534bf7c;
                            fVar14 = fVar24 - fVar14;
                            fVar17 = fVar14 * fVar14;
                            if (fVar17 + (fVar25 - fVar28) * (fVar25 - fVar28) +
                                         (fVar26 - fVar20) * (fVar26 - fVar20) < DAT_0534bf7c) {
                              if (*(long *)(unaff_x19 + 0x18) != 0) {
                                uVar10 = FUN_051e0500(*(long *)(unaff_x19 + 0x18),0);
                                uVar10 = FUN_02526be4(*(undefined8 *)puVar2,uVar10,
                                                      *(undefined8 *)puVar3,0);
                                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                                  thunk_FUN_016466fc(*(long *)puVar4);
                                }
                                FUN_0486672c(uVar10,0);
                                return;
                              }
                            }
                            else {
                              fStack0000000000000108 = fVar20;
                              fStack000000000000010c = fVar28;
                              if (*(long *)(unaff_x19 + 0x20) != 0) {
                                fVar20 = DAT_0534bf7c;
                                FUN_04f1adf8(*(long *)(unaff_x19 + 0x20),0);
                                fVar28 = (float)FUN_04f13694(0);
                                if (*unaff_x20 != 0) {
                                  fVar16 = fVar20;
                                  fVar19 = fVar17;
                                  fVar22 = fVar14;
                                  fVar15 = (float)FUN_04f1adf8(*unaff_x20,0);
                                  fVar21 = fVar14 * fVar22;
                                  fVar23 = fVar28 * fVar19 + fVar20 * fVar22 + fVar14 * fVar16;
                                  fVar18 = ((fVar20 * fVar16 - fVar28 * fVar15) - fVar17 * fVar19) -
                                           fVar21;
                                  *(float *)(unaff_x19 + 0x2b0) =
                                       (fVar17 * fVar22 + fVar20 * fVar15 + fVar28 * fVar16) -
                                       fVar14 * fVar19;
                                  *(float *)(unaff_x19 + 0x2b4) =
                                       (fVar14 * fVar15 + fVar20 * fVar19 + fVar17 * fVar16) -
                                       fVar28 * fVar22;
                                  *(float *)(unaff_x19 + 0x2b8) = fVar23 - fVar17 * fVar15;
                                  *(float *)(unaff_x19 + 700) = fVar18;
                                  if (*(long *)(unaff_x19 + 0x20) != 0) {
                                    lVar8 = *(long *)(unaff_x19 + 0xb0);
                                    Fusion_CloudServices_<Join>d__84__SetStateMachine
                                              (*(long *)(unaff_x19 + 0x20),0);
                                    if (lVar8 != 0) {
                                      uVar13 = FUN_04f1c838(lVar8,0);
                                      *(undefined4 *)(unaff_x19 + 0x150) = uVar13;
                                      *(float *)(unaff_x19 + 0x154) = fVar18;
                                      *(float *)(unaff_x19 + 0x158) = fVar21;
                                      if (*(long *)(unaff_x19 + 0xb0) != 0) {
                                        FUN_04f1adf8(*(long *)(unaff_x19 + 0xb0),0);
                                        fVar14 = (float)FUN_04f13694(0);
                                        if (*(long *)(unaff_x19 + 0x20) != 0) {
                                          fVar20 = fVar23;
                                          fVar17 = fVar18;
                                          fVar28 = fVar21;
                                          fVar16 = (float)FUN_04f1adf8(*(long *)(unaff_x19 + 0x20),0
                                                                      );
                                          fVar19 = (fVar21 * fVar16 +
                                                   fVar23 * fVar17 + fVar18 * fVar20) -
                                                   fVar14 * fVar28;
                                          fVar22 = (fVar14 * fVar17 +
                                                   fVar23 * fVar28 + fVar21 * fVar20) -
                                                   fVar18 * fVar16;
                                          fVar15 = ((fVar23 * fVar20 - fVar14 * fVar16) -
                                                   fVar18 * fVar17) - fVar21 * fVar28;
                                          *(float *)(unaff_x19 + 0x15c) =
                                               (fVar18 * fVar28 + fVar23 * fVar16 + fVar14 * fVar20)
                                               - fVar21 * fVar17;
                                          *(float *)(unaff_x19 + 0x160) = fVar19;
                                          *(float *)(unaff_x19 + 0x164) = fVar22;
                                          *(float *)(unaff_x19 + 0x168) = fVar15;
                                          uVar13 = FUN_04f13694(0);
                                          *(undefined4 *)(unaff_x19 + 0x344) = uVar13;
                                          *(float *)(unaff_x19 + 0x348) = fVar19;
                                          *(float *)(unaff_x19 + 0x34c) = fVar22;
                                          *(float *)(unaff_x19 + 0x350) = fVar15;
                                          if (*(long *)(unaff_x19 + 0x20) != 0) {
                                            uVar10 = FUN_04f1adf8(*(long *)(unaff_x19 + 0x20),0);
                                            if (*unaff_x20 != 0) {
                                              FUN_04f1adf8(*unaff_x20,0);
                                              uVar13 = FUN_03b5df08(uVar10);
                                              *(float *)(unaff_x19 + 0x178) = fVar15;
                                              *(undefined4 *)(unaff_x19 + 0x16c) = uVar13;
                                              *(float *)(unaff_x19 + 0x170) = fVar19;
                                              *(float *)(unaff_x19 + 0x174) = fVar22;
                                              fVar17 = fStack000000000000010c;
                                              fVar28 = (float)FUN_04f13c44(fVar25,0);
                                              fVar14 = fVar26;
                                              fVar20 = fVar24;
                                              fVar25 = fVar17;
                                              uVar13 = FUN_04f13694(0);
                                              *(undefined4 *)(unaff_x19 + 0x270) = uVar13;
                                              *(float *)(unaff_x19 + 0x274) = fVar14;
                                              *(float *)(unaff_x19 + 0x278) = fVar20;
                                              *(float *)(unaff_x19 + 0x27c) = fVar25;
                                              fVar14 = *(float *)(unaff_x19 + 0x24c);
                                              fVar20 = *(float *)(unaff_x19 + 0x240);
                                              fVar25 = *(float *)(unaff_x19 + 0x244);
                                              fVar22 = *(float *)(unaff_x19 + 0x248);
                                              fVar15 = fVar24 * fVar22;
                                              fVar16 = (fVar24 * fVar25 +
                                                       fVar17 * fVar20 + fVar28 * fVar14) -
                                                       fVar26 * fVar22;
                                              fVar19 = (fVar28 * fVar22 +
                                                       fVar17 * fVar25 + fVar26 * fVar14) -
                                                       fVar24 * fVar20;
                                              *(float *)(unaff_x19 + 0x280) = fVar16;
                                              *(float *)(unaff_x19 + 0x284) = fVar19;
                                              *(float *)(unaff_x19 + 0x288) =
                                                   (fVar26 * fVar20 +
                                                   fVar17 * fVar22 + fVar24 * fVar14) -
                                                   fVar28 * fVar25;
                                              *(float *)(unaff_x19 + 0x28c) =
                                                   ((fVar17 * fVar14 - fVar28 * fVar20) -
                                                   fVar26 * fVar25) - fVar15;
                                              FUN_03b6b42c();
                                              fVar20 = (float)FUN_04f13694(0);
                                              fVar24 = fVar15;
                                              fVar26 = fVar16;
                                              fVar14 = fVar19;
                                              fVar25 = (float)FUN_03b6b4e4();
                                              fVar22 = fVar19 * fVar14;
                                              fVar18 = fVar20 * fVar26 +
                                                       fVar15 * fVar14 + fVar19 * fVar24;
                                              fVar17 = ((fVar15 * fVar24 - fVar20 * fVar25) -
                                                       fVar16 * fVar26) - fVar22;
                                              *(float *)(unaff_x19 + 0x260) =
                                                   (fVar16 * fVar14 +
                                                   fVar15 * fVar25 + fVar20 * fVar24) -
                                                   fVar19 * fVar26;
                                              *(float *)(unaff_x19 + 0x264) =
                                                   (fVar19 * fVar25 +
                                                   fVar15 * fVar26 + fVar16 * fVar24) -
                                                   fVar20 * fVar14;
                                              *(float *)(unaff_x19 + 0x268) =
                                                   fVar18 - fVar16 * fVar25;
                                              *(float *)(unaff_x19 + 0x26c) = fVar17;
                                              FUN_03b6b618();
                                              fVar20 = (float)FUN_04f13694(0);
                                              fVar24 = fVar18;
                                              fVar26 = fVar17;
                                              fVar14 = fVar22;
                                              fVar25 = (float)FUN_03b6b36c();
                                              fVar16 = fVar22 * fVar14;
                                              fVar19 = fVar20 * fVar26 +
                                                       fVar18 * fVar14 + fVar22 * fVar24;
                                              fVar28 = ((fVar18 * fVar24 - fVar20 * fVar25) -
                                                       fVar17 * fVar26) - fVar16;
                                              *(float *)(unaff_x19 + 0x250) =
                                                   (fVar17 * fVar14 +
                                                   fVar18 * fVar25 + fVar20 * fVar24) -
                                                   fVar22 * fVar26;
                                              *(float *)(unaff_x19 + 0x254) =
                                                   (fVar22 * fVar25 +
                                                   fVar18 * fVar26 + fVar17 * fVar24) -
                                                   fVar20 * fVar14;
                                              *(float *)(unaff_x19 + 600) = fVar19 - fVar17 * fVar25
                                              ;
                                              *(float *)(unaff_x19 + 0x25c) = fVar28;
                                              if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                uVar10 = FUN_049afbe0(*(long *)(unaff_x19 + 0x18),0)
                                                ;
                                                if (*(int *)(*unaff_x24 + 0xe0) == 0) {
                                                  thunk_FUN_016466fc(*unaff_x24);
                                                }
                                                uVar6 = FUN_051d2ac0(uVar10,0,0);
                                                if ((uVar6 & 1) != 0) {
                                                  if (*(long *)(unaff_x19 + 0x18) == 0)
                                                  goto LAB_03b6b08c;
                                                  FUN_049b0044(*(long *)(unaff_x19 + 0x18),0,0);
                                                  if ((*(long *)(unaff_x19 + 0x18) == 0) ||
                                                     (lVar8 = FUN_049afbe0(*(long *)(unaff_x19 +
                                                                                    0x18),0),
                                                     lVar8 == 0)) goto LAB_03b6b08c;
                                                  uVar10 = FUN_051e5130(lVar8,0);
                                                  *(undefined8 *)(unaff_x19 + 0x2e8) = uVar10;
                                                  thunk_FUN_01656ef8(unaff_x19 + 0x2e8);
                                                  if (*(long *)(unaff_x19 + 0x20) == 0)
                                                  goto LAB_03b6b08c;
                                                  uVar10 = 
                                                  Fusion_CloudServices_<get_CommittedPlayerInternal>d__112__System_Collections_Generic_IEnumerable<Fusion_PlayerRef>_GetEnumerator
                                                            (*(long *)(unaff_x19 + 0x20),0);
                                                  uVar11 = *(undefined8 *)(unaff_x19 + 0xc0);
                                                  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
                                                    thunk_FUN_016466fc(*unaff_x24);
                                                  }
                                                  bVar5 = FUN_051d94d4(uVar10,uVar11,0);
                                                  *(byte *)(unaff_x19 + 0x2fc) = bVar5 & 1;
                                                  FUN_03b6b758();
                                                }
                                                if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                  uVar13 = FUN_049b09fc(*(long *)(unaff_x19 + 0x18),
                                                                        0);
                                                  *(undefined4 *)(unaff_x19 + 0x2f0) = uVar13;
                                                  if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                    uVar13 = FUN_049b0a7c(*(long *)(unaff_x19 + 0x18
                                                                                   ),0);
                                                    *(undefined4 *)(unaff_x19 + 0x2f4) = uVar13;
                                                    if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                      uVar13 = FUN_049b0afc(*(long *)(unaff_x19 +
                                                                                     0x18),0);
                                                      *(undefined4 *)(unaff_x19 + 0x2f8) = uVar13;
                                                      if ((*(long *)(unaff_x19 + 0xb8) != 0) &&
                                                         (lVar8 = FUN_051e5130(*(long *)(unaff_x19 +
                                                                                        0xb8),0),
                                                         lVar8 != 0)) {
                                                        FUN_04f1adf8(lVar8,0);
                                                        fVar24 = (float)FUN_04f13694(0);
                                                        if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                          fVar26 = fVar19;
                                                          fVar14 = fVar28;
                                                          fVar20 = fVar16;
                                                          fVar25 = (float)FUN_04f1adf8(*(long *)(
                                                  unaff_x19 + 0x20),0);
                                                  fVar22 = fVar16 * fVar20;
                                                  fVar15 = fVar24 * fVar14 +
                                                           fVar19 * fVar20 + fVar16 * fVar26;
                                                  fVar17 = ((fVar19 * fVar26 - fVar24 * fVar25) -
                                                           fVar28 * fVar14) - fVar22;
                                                  *(float *)(unaff_x19 + 300) =
                                                       (fVar28 * fVar20 +
                                                       fVar19 * fVar25 + fVar24 * fVar26) -
                                                       fVar16 * fVar14;
                                                  *(float *)(unaff_x19 + 0x130) =
                                                       (fVar16 * fVar25 +
                                                       fVar19 * fVar14 + fVar28 * fVar26) -
                                                       fVar24 * fVar20;
                                                  *(float *)(unaff_x19 + 0x134) =
                                                       fVar15 - fVar28 * fVar25;
                                                  *(float *)(unaff_x19 + 0x138) = fVar17;
                                                  if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                    uVar10 = FUN_049afbe0(*(long *)(unaff_x19 + 0x18
                                                                                   ),0);
                                                    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
                                                      thunk_FUN_016466fc(*unaff_x24);
                                                    }
                                                    uVar6 = FUN_051d94d4(uVar10,0,0);
                                                    if ((uVar6 & 1) == 0) {
                                                      if ((*(long *)(unaff_x19 + 0x18) == 0) ||
                                                         (lVar8 = FUN_049afbe0(*(long *)(unaff_x19 +
                                                                                        0x18),0),
                                                         lVar8 == 0)) goto LAB_03b6b08c;
                                                      lVar8 = FUN_051e5130(lVar8,0);
                                                      if ((*unaff_x20 == 0) ||
                                                         (
                                                  Fusion_CloudServices_<Join>d__84__SetStateMachine
                                                            (*unaff_x20,0), lVar8 == 0))
                                                  goto LAB_03b6b08c;
                                                  uVar13 = FUN_04f1c838(lVar8,0);
                                                  *(undefined4 *)(unaff_x19 + 0x21c) = uVar13;
                                                  *(float *)(unaff_x19 + 0x220) = fVar17;
                                                  *(float *)(unaff_x19 + 0x224) = fVar22;
                                                  if (((*(long *)(unaff_x19 + 0x18) == 0) ||
                                                      (lVar8 = FUN_049afbe0(*(long *)(unaff_x19 +
                                                                                     0x18),0),
                                                      lVar8 == 0)) ||
                                                     (lVar8 = FUN_051e5130(lVar8,0), lVar8 == 0))
                                                  goto LAB_03b6b08c;
                                                  FUN_04f1adf8(lVar8,0);
                                                  fVar24 = (float)FUN_04f13694(0);
                                                  if (*unaff_x20 == 0) goto LAB_03b6b08c;
                                                  fVar26 = fVar15;
                                                  fVar14 = fVar17;
                                                  fVar20 = fVar22;
                                                  fVar25 = (float)FUN_04f1adf8(*unaff_x20,0);
                                                  fVar19 = fVar17 * fVar25;
                                                  fVar28 = fVar17 * fVar14;
                                                  fVar18 = fVar22 * fVar20;
                                                  fVar16 = (fVar17 * fVar20 +
                                                           fVar15 * fVar25 + fVar24 * fVar26) -
                                                           fVar22 * fVar14;
                                                  fVar17 = (fVar22 * fVar25 +
                                                           fVar15 * fVar14 + fVar17 * fVar26) -
                                                           fVar24 * fVar20;
                                                  fVar22 = (fVar24 * fVar14 +
                                                           fVar15 * fVar20 + fVar22 * fVar26) -
                                                           fVar19;
                                                  fVar15 = ((fVar15 * fVar26 - fVar24 * fVar25) -
                                                           fVar28) - fVar18;
                                                  }
                                                  else {
                                                    if (*unaff_x20 == 0) goto LAB_03b6b08c;
                                                    uVar13 = FUN_04f1aa98(*unaff_x20,0);
                                                    *(undefined4 *)(unaff_x19 + 0x21c) = uVar13;
                                                    *(float *)(unaff_x19 + 0x220) = fVar17;
                                                    *(float *)(unaff_x19 + 0x224) = fVar22;
                                                    if (*(long *)(unaff_x19 + 0xb0) == 0)
                                                    goto LAB_03b6b08c;
                                                    fVar16 = (float)FUN_04f1aef8(*(long *)(unaff_x19
                                                                                          + 0xb0),0)
                                                    ;
                                                  }
                                                  *(float *)(unaff_x19 + 0x2a0) = fVar16;
                                                  *(float *)(unaff_x19 + 0x2a4) = fVar17;
                                                  *(float *)(unaff_x19 + 0x2a8) = fVar22;
                                                  *(float *)(unaff_x19 + 0x2ac) = fVar15;
                                                  if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                    uVar13 = FUN_04f1aa98(*(long *)(unaff_x19 + 0x20
                                                                                   ),0);
                                                    *(undefined4 *)(unaff_x19 + 0x228) = uVar13;
                                                    *(float *)(unaff_x19 + 0x22c) = fVar17;
                                                    *(float *)(unaff_x19 + 0x230) = fVar22;
                                                    if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                      uVar13 = FUN_04f1aef8(*(long *)(unaff_x19 +
                                                                                     0x20),0);
                                                      *(undefined4 *)(unaff_x19 + 0x2c0) = uVar13;
                                                      *(float *)(unaff_x19 + 0x2c4) = fVar17;
                                                      *(float *)(unaff_x19 + 0x2c8) = fVar22;
                                                      *(float *)(unaff_x19 + 0x2cc) = fVar15;
                                                      if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                        FUN_049b1da8(*(long *)(unaff_x19 + 0x18),1,0
                                                                    );
                                                        if ((*(long *)(unaff_x19 + 0x18) != 0) &&
                                                           (lVar8 = FUN_051e516c(*(long *)(unaff_x19
                                                                                          + 0x18),0)
                                                           , lVar8 != 0)) {
                                                          uVar6 = FUN_051df964(lVar8,0);
                                                          puVar2 = PTR_DAT_06e49d60;
                                                          lVar8 = *(long *)(unaff_x19 + 0x18);
                                                          if (lVar8 != 0) {
                                                            if ((uVar6 & 1) == 0) {
                                                              lVar8 = FUN_051e5130(lVar8,0);
                                                              if (*(int *)(*(long *)puVar4 + 0xe0)
                                                                  == 0) {
                                                                thunk_FUN_016466fc(*(long *)puVar4);
                                                              }
                                                              uVar10 = *(undefined8 *)puVar2;
LAB_03b6ae68:
                                                              FUN_04866834(uVar10,lVar8,0);
                                                              return;
                                                            }
                                                            FUN_049b2360(lVar8,0,0);
                                                            if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                              FUN_049b21d0(*(long *)(unaff_x19 +
                                                                                    0x18),0,0);
                                                              if (*(long *)(unaff_x19 + 0x18) != 0)
                                                              {
                                                                fVar24 = (float)FUN_049afd98(*(long 
                                                  *)(unaff_x19 + 0x18),0);
                                                  if (DAT_0722a13e == '\0') {
                                                    thunk_FUN_0159f088(PTR_DAT_06e50440);
                                                    DAT_0722a13e = '\x01';
                                                  }
                                                  pfVar9 = *(float **)(*(long *)puVar1 + 0xb8);
                                                  fVar22 = fVar22 - pfVar9[2];
                                                  if (fVar22 * fVar22 +
                                                      (fVar24 - *pfVar9) * (fVar24 - *pfVar9) +
                                                      (fVar17 - pfVar9[1]) * (fVar17 - pfVar9[1]) <
                                                      fVar27) {
                                                    if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                      uVar13 = 
                                                  Fusion_CloudServices_<Join>d__84__SetStateMachine
                                                            (*(long *)(unaff_x19 + 0x20),0);
                                                  *(undefined4 *)(unaff_x19 + 200) = uVar13;
                                                  *(float *)(unaff_x19 + 0xcc) = fVar27;
                                                  *(float *)(unaff_x19 + 0xd0) = fVar22;
                                                  if (*(long *)(unaff_x19 + 0xb8) != 0) {
                                                    uVar13 = FUN_049ac524(*(long *)(unaff_x19 + 0xb8
                                                                                   ),0);
                                                    *(undefined4 *)(unaff_x19 + 0x32c) = uVar13;
                                                    *(float *)(unaff_x19 + 0x330) = fVar27;
                                                    *(float *)(unaff_x19 + 0x334) = fVar22;
                                                    if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                      uVar13 = FUN_04f1adf8(*(long *)(unaff_x19 +
                                                                                     0x20),0);
                                                      *(undefined4 *)(unaff_x19 + 0xd4) = uVar13;
                                                      *(float *)(unaff_x19 + 0xd8) = fVar27;
                                                      *(float *)(unaff_x19 + 0xdc) = fVar22;
                                                      *(float *)(unaff_x19 + 0xe0) = fVar15;
                                                      fVar24 = (float)FUN_03b6b618();
                                                      fVar25 = *(float *)(unaff_x19 + 0x250);
                                                      fVar17 = *(float *)(unaff_x19 + 0x25c);
                                                      fVar28 = *(float *)(unaff_x19 + 600);
                                                      fVar16 = *(float *)(unaff_x19 + 0x254);
                                                      fVar14 = fVar22 * fVar28;
                                                      fVar26 = (fVar27 * fVar28 +
                                                               fVar15 * fVar25 + fVar24 * fVar17) -
                                                               fVar22 * fVar16;
                                                      fVar20 = (fVar22 * fVar25 +
                                                               fVar15 * fVar16 + fVar27 * fVar17) -
                                                               fVar24 * fVar28;
                                                      *(float *)(unaff_x19 + 0x290) = fVar26;
                                                      *(float *)(unaff_x19 + 0x294) = fVar20;
                                                      *(float *)(unaff_x19 + 0x298) =
                                                           (fVar24 * fVar16 +
                                                           fVar15 * fVar28 + fVar22 * fVar17) -
                                                           fVar27 * fVar25;
                                                      *(float *)(unaff_x19 + 0x29c) =
                                                           ((fVar15 * fVar17 - fVar24 * fVar25) -
                                                           fVar27 * fVar16) - fVar14;
                                                      FUN_03b6b9a0();
                                                      uVar13 = FUN_051dd1d4(0);
                                                      *(undefined4 *)(unaff_x19 + 0x308) = uVar13;
                                                      uVar13 = FUN_051dd1d4(0);
                                                      *(undefined4 *)(unaff_x19 + 0x30c) = uVar13;
                                                      if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                        uVar13 = 
                                                  Fusion_CloudServices_<Join>d__84__SetStateMachine
                                                            (*(long *)(unaff_x19 + 0x20),0);
                                                  *(undefined4 *)(unaff_x19 + 0x234) = uVar13;
                                                  *(float *)(unaff_x19 + 0x238) = fVar26;
                                                  *(float *)(unaff_x19 + 0x23c) = fVar14;
                                                  if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                    uVar13 = FUN_04f1adf8(*(long *)(unaff_x19 + 0x20
                                                                                   ),0);
                                                    *(undefined4 *)(unaff_x19 + 0x2d0) = uVar13;
                                                    *(float *)(unaff_x19 + 0x2d4) = fVar26;
                                                    *(float *)(unaff_x19 + 0x2d8) = fVar14;
                                                    *(float *)(unaff_x19 + 0x2dc) = fVar20;
                                                    if ((*(long *)(unaff_x19 + 0x28) != 0) &&
                                                       (lVar8 = *(long *)(*(long *)(unaff_x19 + 0x28
                                                                                   ) + 0x30),
                                                       lVar8 != 0)) {
                                                      uVar10 = FUN_0160edfc(*(undefined8 *)
                                                                             PTR_DAT_06dad490,
                                                                            *(undefined4 *)
                                                                             (lVar8 + 0x18));
                                                      *(undefined8 *)(unaff_x19 + 0x318) = uVar10;
                                                      thunk_FUN_01656ef8((undefined8 *)
                                                                         (unaff_x19 + 0x318),uVar10)
                                                      ;
                                                      puVar1 = PTR_DAT_06e2a8c0;
                                                      plVar12 = *(long **)(unaff_x19 + 0x318);
                                                      if (plVar12 != (long *)0x0) {
                                                        uVar6 = 0;
                                                        do {
                                                          if ((long)(int)plVar12[3] <= (long)uVar6)
                                                          {
                                                            *(undefined1 *)(unaff_x19 + 0x2fd) = 1;
                                                            return;
                                                          }
                                                          if ((*(long *)(unaff_x19 + 0x28) == 0) ||
                                                             (lVar8 = *(long *)(*(long *)(unaff_x19
                                                                                         + 0x28) +
                                                                               0x30), lVar8 == 0))
                                                          break;
                                                          if (*(uint *)(lVar8 + 0x18) <= uVar6) {
LAB_03b6b0c8:
                    /* WARNING: Subroutine does not return */
                                                            FUN_0160eebc();
                                                          }
                                                          uVar10 = *(undefined8 *)
                                                                    (lVar8 + uVar6 * 8 + 0x20);
                                                          lVar8 = thunk_FUN_015d056c(*(undefined8 *)
                                                                                      puVar1);
                                                          if (lVar8 == 0) break;
                                                          FUN_03b8a21c(lVar8,uVar10,0);
                                                          lVar7 = thunk_FUN_015d0480(lVar8,*(
                                                  undefined8 *)(*plVar12 + 0x40));
                                                  if (lVar7 == 0) {
                                                    uVar10 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
                                                    FUN_0160ee7c(uVar10,0);
                                                  }
                                                  if (*(uint *)(plVar12 + 3) <= uVar6)
                                                  goto LAB_03b6b0c8;
                                                  plVar12[uVar6 + 4] = lVar8;
                                                  thunk_FUN_01656ef8(plVar12 + uVar6 + 4,lVar8);
                                                  plVar12 = *(long **)(unaff_x19 + 0x318);
                                                  uVar6 = uVar6 + 1;
                                                  } while (plVar12 != (long *)0x0);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else if (*unaff_x20 != 0) {
                                                    uVar10 = FUN_051e0500(*unaff_x20,0);
                                                    puVar2 = PTR_DAT_06dc37c0;
                                                    puVar1 = PTR_DAT_06db5be8;
                                                    if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                      fStack0000000000000090 =
                                                           (float)FUN_049afd98(*(long *)(unaff_x19 +
                                                                                        0x18),0);
                                                      fStack0000000000000094 = fVar27;
                                                      in_stack_00000098 = fVar22;
                                                      uVar11 = Fusion_CloudCommunicator__Dispose
                                                                         (&stack0x00000090,0);
                                                      uVar10 = FUN_02526f2c(*(undefined8 *)puVar2,
                                                                            uVar10,*(undefined8 *)
                                                                                    puVar1,uVar11,0)
                                                      ;
                                                      lVar8 = *unaff_x20;
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
LAB_03b6b08c:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


