/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.Vector2f>
ENTRY_POINT: 03b6a034
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


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_Vector2f>
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  float *pfVar7;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *unaff_x23;
  long *unaff_x24;
  long *plVar11;
  undefined4 uVar12;
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
  float unaff_s8;
  float fVar26;
  float unaff_s9;
  float fVar27;
  float unaff_s10;
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
  
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_016466fc(*unaff_x24);
  }
  uVar5 = FUN_051d2ac0(param_4,0,0);
  if ((uVar5 & 1) == 0) {
    uVar5 = (ulong)(uint)(unaff_s8 * DAT_0534c250);
    param_2 = unaff_s9 * DAT_0534c250;
    param_3 = unaff_s10 * DAT_0534c250;
  }
  else {
    if (param_4 == 0) goto LAB_03b6b08c;
    FUN_0486aa88(&stack0x00000050,param_4,0);
    in_stack_000000a8 = in_stack_00000058;
    in_stack_000000a0 = in_stack_00000050;
    in_stack_000000b0 = in_stack_00000060;
    uVar5 = FUN_051db98c(&stack0x000000a0,0);
  }
  lVar8 = *unaff_x21;
  if (lVar8 != 0) {
    uVar12 = FUN_049ac010(lVar8,0);
    FUN_03b8c508(uVar5,0);
    FUN_049ac798(lVar8,0);
    uVar9 = *(undefined8 *)(unaff_x19 + 0xc0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar5 = FUN_051d2ac0(uVar9,0,0);
    if ((uVar5 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_03b6b08c;
      uVar9 = Fusion_CloudServices_<get_CommittedPlayerInternal>d__112__System_Collections_Generic_IEnumerable<Fusion_PlayerRef>_GetEnumerator
                        (*(long *)(unaff_x19 + 0x20),0);
    }
    else {
      uVar9 = *(undefined8 *)(unaff_x19 + 0xc0);
    }
    *(undefined8 *)(unaff_x19 + 0x2e0) = uVar9;
    thunk_FUN_01656ef8(unaff_x19 + 0x2e0);
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      uVar9 = FUN_049afbe0(*(long *)(unaff_x19 + 0x18),0);
      *(undefined8 *)(unaff_x19 + 0x140) = uVar9;
      thunk_FUN_01656ef8(unaff_x19 + 0x140);
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        uVar9 = Fusion_CloudServices_<get_CommittedPlayerInternal>d__112__System_Collections_Generic_IEnumerable<Fusion_PlayerRef>_GetEnumerator
                          (*(long *)(unaff_x19 + 0x20),0);
        *(undefined8 *)(unaff_x19 + 0x148) = uVar9;
        thunk_FUN_01656ef8(unaff_x19 + 0x148);
        if ((*(long *)(unaff_x19 + 0x18) != 0) &&
           (lVar8 = FUN_051e5130(*(long *)(unaff_x19 + 0x18),0), lVar8 != 0)) {
          uVar9 = Fusion_CloudServices_<get_CommittedPlayerInternal>d__112__System_Collections_Generic_IEnumerable<Fusion_PlayerRef>_GetEnumerator
                            (lVar8,0);
          *(undefined8 *)(unaff_x19 + 0x180) = uVar9;
          thunk_FUN_01656ef8(unaff_x19 + 0x180);
          if ((*(long *)(unaff_x19 + 0x18) != 0) &&
             (lVar8 = FUN_051e5130(*(long *)(unaff_x19 + 0x18),0), lVar8 != 0)) {
            uVar13 = Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar8,0);
            *(undefined4 *)(unaff_x19 + 0x188) = uVar13;
            *(float *)(unaff_x19 + 0x18c) = param_2;
            *(float *)(unaff_x19 + 400) = param_3;
            if ((*(long *)(unaff_x19 + 0x18) != 0) &&
               (lVar8 = FUN_051e5130(*(long *)(unaff_x19 + 0x18),0), lVar8 != 0)) {
              uVar13 = FUN_04f1adf8(lVar8,0);
              *(undefined4 *)(unaff_x19 + 0x194) = uVar13;
              *(float *)(unaff_x19 + 0x198) = param_2;
              *(float *)(unaff_x19 + 0x19c) = param_3;
              *(undefined4 *)(unaff_x19 + 0x1a0) = uVar12;
              if (*(long *)(unaff_x19 + 0x20) != 0) {
                uVar13 = Fusion_CloudServices_<Join>d__84__SetStateMachine
                                   (*(long *)(unaff_x19 + 0x20),0);
                *(undefined4 *)(unaff_x19 + 0x1a4) = uVar13;
                *(float *)(unaff_x19 + 0x1a8) = param_2;
                *(float *)(unaff_x19 + 0x1ac) = param_3;
                if (*(long *)(unaff_x19 + 0x20) != 0) {
                  uVar13 = FUN_04f1adf8(*(long *)(unaff_x19 + 0x20),0);
                  *(undefined4 *)(unaff_x19 + 0x1b0) = uVar13;
                  *(float *)(unaff_x19 + 0x1b4) = param_2;
                  *(float *)(unaff_x19 + 0x1b8) = param_3;
                  *(undefined4 *)(unaff_x19 + 0x1bc) = uVar12;
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
                        *(float *)(unaff_x19 + 0x244) = param_2;
                        *(float *)(unaff_x19 + 0x248) = param_3;
                        *(undefined4 *)(unaff_x19 + 0x24c) = uVar12;
                        if (*(long *)(unaff_x19 + 0x18) != 0) {
                          fVar14 = (float)FUN_049afc60(*(long *)(unaff_x19 + 0x18),0);
                          if (*(long *)(unaff_x19 + 0x18) != 0) {
                            fVar27 = param_3;
                            fVar18 = param_2;
                            fVar15 = (float)FUN_049b0744(*(long *)(unaff_x19 + 0x18),0);
                            fVar22 = fVar14 * fVar27;
                            fVar26 = param_2 * fVar27 - param_3 * fVar18;
                            fVar27 = param_3 * fVar15 - fVar22;
                            fVar14 = fVar14 * fVar18 - param_2 * fVar15;
                            fStack0000000000000090 = fVar26;
                            fStack0000000000000094 = fVar27;
                            in_stack_00000098 = fVar14;
                            if (DAT_0722a39f == '\0') {
                              thunk_FUN_0159f088(PTR_DAT_06e1a840);
                              DAT_0722a39f = '\x01';
                            }
                            puVar1 = PTR_DAT_06e1a840;
                            if (*(int *)(*(long *)PTR_DAT_06e1a840 + 0xe0) == 0) {
                              thunk_FUN_016466fc();
                            }
                            fVar18 = DAT_0533fbb4;
                            fVar19 = fVar14 * fVar14;
                            fVar15 = SQRT(fVar19 + fVar26 * fVar26 + fVar27 * fVar27);
                            if (fVar15 <= DAT_0533fbb4) {
                              if (DAT_0722a13e == '\0') {
                                thunk_FUN_0159f088(PTR_DAT_06e50440);
                                DAT_0722a13e = '\x01';
                              }
                              pfVar7 = *(float **)(*unaff_x23 + 0xb8);
                              fVar26 = *pfVar7;
                              fVar27 = pfVar7[1];
                              fVar14 = pfVar7[2];
                            }
                            else {
                              fVar26 = fVar26 / fVar15;
                              fVar27 = fVar27 / fVar15;
                              fVar14 = fVar14 / fVar15;
                            }
                            if (*(long *)(unaff_x19 + 0x18) != 0) {
                              fVar15 = (float)FUN_049afc60(*(long *)(unaff_x19 + 0x18),0);
                              fVar28 = fVar27 * fVar22 - fVar14 * fVar19;
                              fVar22 = fVar14 * fVar15 - fVar26 * fVar22;
                              fVar15 = fVar26 * fVar19 - fVar27 * fVar15;
                              fStack0000000000000090 = fVar28;
                              fStack0000000000000094 = fVar22;
                              in_stack_00000098 = fVar15;
                              if (DAT_0722a39f == '\0') {
                                thunk_FUN_0159f088(PTR_DAT_06e1a840);
                                DAT_0722a39f = '\x01';
                              }
                              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                                thunk_FUN_016466fc();
                              }
                              fVar19 = SQRT(fVar15 * fVar15 + fVar28 * fVar28 + fVar22 * fVar22);
                              if (fVar19 <= fVar18) {
                                if (DAT_0722a13e == '\0') {
                                  thunk_FUN_0159f088(PTR_DAT_06e50440);
                                  DAT_0722a13e = '\x01';
                                }
                                pfVar7 = *(float **)(*unaff_x23 + 0xb8);
                                fVar28 = *pfVar7;
                                fVar22 = pfVar7[1];
                                fVar15 = pfVar7[2];
                              }
                              else {
                                fVar28 = fVar28 / fVar19;
                                fVar22 = fVar22 / fVar19;
                                fVar15 = fVar15 / fVar19;
                              }
                              puVar3 = PTR_DAT_06e52cd8;
                              puVar2 = PTR_DAT_06e2ec60;
                              puVar1 = PTR_DAT_06ddc378;
                              fVar18 = DAT_0534bf7c;
                              fVar15 = fVar14 - fVar15;
                              fVar19 = fVar15 * fVar15;
                              if (fVar19 + (fVar26 - fVar28) * (fVar26 - fVar28) +
                                           (fVar27 - fVar22) * (fVar27 - fVar22) < DAT_0534bf7c) {
                                if (*(long *)(unaff_x19 + 0x18) != 0) {
                                  uVar9 = FUN_051e0500(*(long *)(unaff_x19 + 0x18),0);
                                  uVar9 = FUN_02526be4(*(undefined8 *)puVar1,uVar9,
                                                       *(undefined8 *)puVar2,0);
                                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                                    thunk_FUN_016466fc(*(long *)puVar3);
                                  }
                                  FUN_0486672c(uVar9,0);
                                  return;
                                }
                              }
                              else {
                                fStack0000000000000108 = fVar22;
                                fStack000000000000010c = fVar28;
                                if (*(long *)(unaff_x19 + 0x20) != 0) {
                                  fVar22 = DAT_0534bf7c;
                                  FUN_04f1adf8(*(long *)(unaff_x19 + 0x20),0);
                                  fVar28 = (float)FUN_04f13694(0);
                                  if (*unaff_x20 != 0) {
                                    fVar17 = fVar22;
                                    fVar21 = fVar19;
                                    fVar24 = fVar15;
                                    fVar16 = (float)FUN_04f1adf8(*unaff_x20,0);
                                    fVar23 = fVar15 * fVar24;
                                    fVar25 = fVar28 * fVar21 + fVar22 * fVar24 + fVar15 * fVar17;
                                    fVar20 = ((fVar22 * fVar17 - fVar28 * fVar16) - fVar19 * fVar21)
                                             - fVar23;
                                    *(float *)(unaff_x19 + 0x2b0) =
                                         (fVar19 * fVar24 + fVar22 * fVar16 + fVar28 * fVar17) -
                                         fVar15 * fVar21;
                                    *(float *)(unaff_x19 + 0x2b4) =
                                         (fVar15 * fVar16 + fVar22 * fVar21 + fVar19 * fVar17) -
                                         fVar28 * fVar24;
                                    *(float *)(unaff_x19 + 0x2b8) = fVar25 - fVar19 * fVar16;
                                    *(float *)(unaff_x19 + 700) = fVar20;
                                    if (*(long *)(unaff_x19 + 0x20) != 0) {
                                      lVar8 = *(long *)(unaff_x19 + 0xb0);
                                      Fusion_CloudServices_<Join>d__84__SetStateMachine
                                                (*(long *)(unaff_x19 + 0x20),0);
                                      if (lVar8 != 0) {
                                        uVar12 = FUN_04f1c838(lVar8,0);
                                        *(undefined4 *)(unaff_x19 + 0x150) = uVar12;
                                        *(float *)(unaff_x19 + 0x154) = fVar20;
                                        *(float *)(unaff_x19 + 0x158) = fVar23;
                                        if (*(long *)(unaff_x19 + 0xb0) != 0) {
                                          FUN_04f1adf8(*(long *)(unaff_x19 + 0xb0),0);
                                          fVar15 = (float)FUN_04f13694(0);
                                          if (*(long *)(unaff_x19 + 0x20) != 0) {
                                            fVar22 = fVar25;
                                            fVar19 = fVar20;
                                            fVar28 = fVar23;
                                            fVar17 = (float)FUN_04f1adf8(*(long *)(unaff_x19 + 0x20)
                                                                         ,0);
                                            fVar21 = (fVar23 * fVar17 +
                                                     fVar25 * fVar19 + fVar20 * fVar22) -
                                                     fVar15 * fVar28;
                                            fVar24 = (fVar15 * fVar19 +
                                                     fVar25 * fVar28 + fVar23 * fVar22) -
                                                     fVar20 * fVar17;
                                            fVar16 = ((fVar25 * fVar22 - fVar15 * fVar17) -
                                                     fVar20 * fVar19) - fVar23 * fVar28;
                                            *(float *)(unaff_x19 + 0x15c) =
                                                 (fVar20 * fVar28 +
                                                 fVar25 * fVar17 + fVar15 * fVar22) -
                                                 fVar23 * fVar19;
                                            *(float *)(unaff_x19 + 0x160) = fVar21;
                                            *(float *)(unaff_x19 + 0x164) = fVar24;
                                            *(float *)(unaff_x19 + 0x168) = fVar16;
                                            uVar12 = FUN_04f13694(0);
                                            *(undefined4 *)(unaff_x19 + 0x344) = uVar12;
                                            *(float *)(unaff_x19 + 0x348) = fVar21;
                                            *(float *)(unaff_x19 + 0x34c) = fVar24;
                                            *(float *)(unaff_x19 + 0x350) = fVar16;
                                            if (*(long *)(unaff_x19 + 0x20) != 0) {
                                              uVar9 = FUN_04f1adf8(*(long *)(unaff_x19 + 0x20),0);
                                              if (*unaff_x20 != 0) {
                                                FUN_04f1adf8(*unaff_x20,0);
                                                uVar12 = FUN_03b5df08(uVar9);
                                                *(float *)(unaff_x19 + 0x178) = fVar16;
                                                *(undefined4 *)(unaff_x19 + 0x16c) = uVar12;
                                                *(float *)(unaff_x19 + 0x170) = fVar21;
                                                *(float *)(unaff_x19 + 0x174) = fVar24;
                                                fVar19 = fStack000000000000010c;
                                                fVar28 = (float)FUN_04f13c44(fVar26,0);
                                                fVar15 = fVar27;
                                                fVar22 = fVar14;
                                                fVar26 = fVar19;
                                                uVar12 = FUN_04f13694(0);
                                                *(undefined4 *)(unaff_x19 + 0x270) = uVar12;
                                                *(float *)(unaff_x19 + 0x274) = fVar15;
                                                *(float *)(unaff_x19 + 0x278) = fVar22;
                                                *(float *)(unaff_x19 + 0x27c) = fVar26;
                                                fVar15 = *(float *)(unaff_x19 + 0x24c);
                                                fVar22 = *(float *)(unaff_x19 + 0x240);
                                                fVar26 = *(float *)(unaff_x19 + 0x244);
                                                fVar24 = *(float *)(unaff_x19 + 0x248);
                                                fVar16 = fVar14 * fVar24;
                                                fVar17 = (fVar14 * fVar26 +
                                                         fVar19 * fVar22 + fVar28 * fVar15) -
                                                         fVar27 * fVar24;
                                                fVar21 = (fVar28 * fVar24 +
                                                         fVar19 * fVar26 + fVar27 * fVar15) -
                                                         fVar14 * fVar22;
                                                *(float *)(unaff_x19 + 0x280) = fVar17;
                                                *(float *)(unaff_x19 + 0x284) = fVar21;
                                                *(float *)(unaff_x19 + 0x288) =
                                                     (fVar27 * fVar22 +
                                                     fVar19 * fVar24 + fVar14 * fVar15) -
                                                     fVar28 * fVar26;
                                                *(float *)(unaff_x19 + 0x28c) =
                                                     ((fVar19 * fVar15 - fVar28 * fVar22) -
                                                     fVar27 * fVar26) - fVar16;
                                                FUN_03b6b42c();
                                                fVar22 = (float)FUN_04f13694(0);
                                                fVar14 = fVar16;
                                                fVar27 = fVar17;
                                                fVar15 = fVar21;
                                                fVar26 = (float)FUN_03b6b4e4();
                                                fVar24 = fVar21 * fVar15;
                                                fVar20 = fVar22 * fVar27 +
                                                         fVar16 * fVar15 + fVar21 * fVar14;
                                                fVar19 = ((fVar16 * fVar14 - fVar22 * fVar26) -
                                                         fVar17 * fVar27) - fVar24;
                                                *(float *)(unaff_x19 + 0x260) =
                                                     (fVar17 * fVar15 +
                                                     fVar16 * fVar26 + fVar22 * fVar14) -
                                                     fVar21 * fVar27;
                                                *(float *)(unaff_x19 + 0x264) =
                                                     (fVar21 * fVar26 +
                                                     fVar16 * fVar27 + fVar17 * fVar14) -
                                                     fVar22 * fVar15;
                                                *(float *)(unaff_x19 + 0x268) =
                                                     fVar20 - fVar17 * fVar26;
                                                *(float *)(unaff_x19 + 0x26c) = fVar19;
                                                FUN_03b6b618();
                                                fVar22 = (float)FUN_04f13694(0);
                                                fVar14 = fVar20;
                                                fVar27 = fVar19;
                                                fVar15 = fVar24;
                                                fVar26 = (float)FUN_03b6b36c();
                                                fVar17 = fVar24 * fVar15;
                                                fVar21 = fVar22 * fVar27 +
                                                         fVar20 * fVar15 + fVar24 * fVar14;
                                                fVar28 = ((fVar20 * fVar14 - fVar22 * fVar26) -
                                                         fVar19 * fVar27) - fVar17;
                                                *(float *)(unaff_x19 + 0x250) =
                                                     (fVar19 * fVar15 +
                                                     fVar20 * fVar26 + fVar22 * fVar14) -
                                                     fVar24 * fVar27;
                                                *(float *)(unaff_x19 + 0x254) =
                                                     (fVar24 * fVar26 +
                                                     fVar20 * fVar27 + fVar19 * fVar14) -
                                                     fVar22 * fVar15;
                                                *(float *)(unaff_x19 + 600) =
                                                     fVar21 - fVar19 * fVar26;
                                                *(float *)(unaff_x19 + 0x25c) = fVar28;
                                                if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                  uVar9 = FUN_049afbe0(*(long *)(unaff_x19 + 0x18),0
                                                                      );
                                                  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
                                                    thunk_FUN_016466fc(*unaff_x24);
                                                  }
                                                  uVar5 = FUN_051d2ac0(uVar9,0,0);
                                                  if ((uVar5 & 1) != 0) {
                                                    if (*(long *)(unaff_x19 + 0x18) == 0)
                                                    goto LAB_03b6b08c;
                                                    FUN_049b0044(*(long *)(unaff_x19 + 0x18),0,0);
                                                    if ((*(long *)(unaff_x19 + 0x18) == 0) ||
                                                       (lVar8 = FUN_049afbe0(*(long *)(unaff_x19 +
                                                                                      0x18),0),
                                                       lVar8 == 0)) goto LAB_03b6b08c;
                                                    uVar9 = FUN_051e5130(lVar8,0);
                                                    *(undefined8 *)(unaff_x19 + 0x2e8) = uVar9;
                                                    thunk_FUN_01656ef8(unaff_x19 + 0x2e8);
                                                    if (*(long *)(unaff_x19 + 0x20) == 0)
                                                    goto LAB_03b6b08c;
                                                    uVar9 = 
                                                  Fusion_CloudServices_<get_CommittedPlayerInternal>d__112__System_Collections_Generic_IEnumerable<Fusion_PlayerRef>_GetEnumerator
                                                            (*(long *)(unaff_x19 + 0x20),0);
                                                  uVar10 = *(undefined8 *)(unaff_x19 + 0xc0);
                                                  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
                                                    thunk_FUN_016466fc(*unaff_x24);
                                                  }
                                                  bVar4 = FUN_051d94d4(uVar9,uVar10,0);
                                                  *(byte *)(unaff_x19 + 0x2fc) = bVar4 & 1;
                                                  FUN_03b6b758();
                                                  }
                                                  if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                    uVar12 = FUN_049b09fc(*(long *)(unaff_x19 + 0x18
                                                                                   ),0);
                                                    *(undefined4 *)(unaff_x19 + 0x2f0) = uVar12;
                                                    if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                      uVar12 = FUN_049b0a7c(*(long *)(unaff_x19 +
                                                                                     0x18),0);
                                                      *(undefined4 *)(unaff_x19 + 0x2f4) = uVar12;
                                                      if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                        uVar12 = FUN_049b0afc(*(long *)(unaff_x19 +
                                                                                       0x18),0);
                                                        *(undefined4 *)(unaff_x19 + 0x2f8) = uVar12;
                                                        if ((*(long *)(unaff_x19 + 0xb8) != 0) &&
                                                           (lVar8 = FUN_051e5130(*(long *)(unaff_x19
                                                                                          + 0xb8),0)
                                                           , lVar8 != 0)) {
                                                          FUN_04f1adf8(lVar8,0);
                                                          fVar14 = (float)FUN_04f13694(0);
                                                          if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                            fVar27 = fVar21;
                                                            fVar15 = fVar28;
                                                            fVar22 = fVar17;
                                                            fVar26 = (float)FUN_04f1adf8(*(long *)(
                                                  unaff_x19 + 0x20),0);
                                                  fVar24 = fVar17 * fVar22;
                                                  fVar16 = fVar14 * fVar15 +
                                                           fVar21 * fVar22 + fVar17 * fVar27;
                                                  fVar19 = ((fVar21 * fVar27 - fVar14 * fVar26) -
                                                           fVar28 * fVar15) - fVar24;
                                                  *(float *)(unaff_x19 + 300) =
                                                       (fVar28 * fVar22 +
                                                       fVar21 * fVar26 + fVar14 * fVar27) -
                                                       fVar17 * fVar15;
                                                  *(float *)(unaff_x19 + 0x130) =
                                                       (fVar17 * fVar26 +
                                                       fVar21 * fVar15 + fVar28 * fVar27) -
                                                       fVar14 * fVar22;
                                                  *(float *)(unaff_x19 + 0x134) =
                                                       fVar16 - fVar28 * fVar26;
                                                  *(float *)(unaff_x19 + 0x138) = fVar19;
                                                  if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                    uVar9 = FUN_049afbe0(*(long *)(unaff_x19 + 0x18)
                                                                         ,0);
                                                    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
                                                      thunk_FUN_016466fc(*unaff_x24);
                                                    }
                                                    uVar5 = FUN_051d94d4(uVar9,0,0);
                                                    if ((uVar5 & 1) == 0) {
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
                                                  uVar12 = FUN_04f1c838(lVar8,0);
                                                  *(undefined4 *)(unaff_x19 + 0x21c) = uVar12;
                                                  *(float *)(unaff_x19 + 0x220) = fVar19;
                                                  *(float *)(unaff_x19 + 0x224) = fVar24;
                                                  if (((*(long *)(unaff_x19 + 0x18) == 0) ||
                                                      (lVar8 = FUN_049afbe0(*(long *)(unaff_x19 +
                                                                                     0x18),0),
                                                      lVar8 == 0)) ||
                                                     (lVar8 = FUN_051e5130(lVar8,0), lVar8 == 0))
                                                  goto LAB_03b6b08c;
                                                  FUN_04f1adf8(lVar8,0);
                                                  fVar14 = (float)FUN_04f13694(0);
                                                  if (*unaff_x20 == 0) goto LAB_03b6b08c;
                                                  fVar27 = fVar16;
                                                  fVar15 = fVar19;
                                                  fVar22 = fVar24;
                                                  fVar26 = (float)FUN_04f1adf8(*unaff_x20,0);
                                                  fVar21 = fVar19 * fVar26;
                                                  fVar28 = fVar19 * fVar15;
                                                  fVar20 = fVar24 * fVar22;
                                                  fVar17 = (fVar19 * fVar22 +
                                                           fVar16 * fVar26 + fVar14 * fVar27) -
                                                           fVar24 * fVar15;
                                                  fVar19 = (fVar24 * fVar26 +
                                                           fVar16 * fVar15 + fVar19 * fVar27) -
                                                           fVar14 * fVar22;
                                                  fVar24 = (fVar14 * fVar15 +
                                                           fVar16 * fVar22 + fVar24 * fVar27) -
                                                           fVar21;
                                                  fVar16 = ((fVar16 * fVar27 - fVar14 * fVar26) -
                                                           fVar28) - fVar20;
                                                  }
                                                  else {
                                                    if (*unaff_x20 == 0) goto LAB_03b6b08c;
                                                    uVar12 = FUN_04f1aa98(*unaff_x20,0);
                                                    *(undefined4 *)(unaff_x19 + 0x21c) = uVar12;
                                                    *(float *)(unaff_x19 + 0x220) = fVar19;
                                                    *(float *)(unaff_x19 + 0x224) = fVar24;
                                                    if (*(long *)(unaff_x19 + 0xb0) == 0)
                                                    goto LAB_03b6b08c;
                                                    fVar17 = (float)FUN_04f1aef8(*(long *)(unaff_x19
                                                                                          + 0xb0),0)
                                                    ;
                                                  }
                                                  *(float *)(unaff_x19 + 0x2a0) = fVar17;
                                                  *(float *)(unaff_x19 + 0x2a4) = fVar19;
                                                  *(float *)(unaff_x19 + 0x2a8) = fVar24;
                                                  *(float *)(unaff_x19 + 0x2ac) = fVar16;
                                                  if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                    uVar12 = FUN_04f1aa98(*(long *)(unaff_x19 + 0x20
                                                                                   ),0);
                                                    *(undefined4 *)(unaff_x19 + 0x228) = uVar12;
                                                    *(float *)(unaff_x19 + 0x22c) = fVar19;
                                                    *(float *)(unaff_x19 + 0x230) = fVar24;
                                                    if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                      uVar12 = FUN_04f1aef8(*(long *)(unaff_x19 +
                                                                                     0x20),0);
                                                      *(undefined4 *)(unaff_x19 + 0x2c0) = uVar12;
                                                      *(float *)(unaff_x19 + 0x2c4) = fVar19;
                                                      *(float *)(unaff_x19 + 0x2c8) = fVar24;
                                                      *(float *)(unaff_x19 + 0x2cc) = fVar16;
                                                      if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                        FUN_049b1da8(*(long *)(unaff_x19 + 0x18),1,0
                                                                    );
                                                        if ((*(long *)(unaff_x19 + 0x18) != 0) &&
                                                           (lVar8 = FUN_051e516c(*(long *)(unaff_x19
                                                                                          + 0x18),0)
                                                           , lVar8 != 0)) {
                                                          uVar5 = FUN_051df964(lVar8,0);
                                                          puVar1 = PTR_DAT_06e49d60;
                                                          lVar8 = *(long *)(unaff_x19 + 0x18);
                                                          if (lVar8 != 0) {
                                                            if ((uVar5 & 1) == 0) {
                                                              lVar8 = FUN_051e5130(lVar8,0);
                                                              if (*(int *)(*(long *)puVar3 + 0xe0)
                                                                  == 0) {
                                                                thunk_FUN_016466fc(*(long *)puVar3);
                                                              }
                                                              uVar9 = *(undefined8 *)puVar1;
LAB_03b6ae68:
                                                              FUN_04866834(uVar9,lVar8,0);
                                                              return;
                                                            }
                                                            FUN_049b2360(lVar8,0,0);
                                                            if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                              FUN_049b21d0(*(long *)(unaff_x19 +
                                                                                    0x18),0,0);
                                                              if (*(long *)(unaff_x19 + 0x18) != 0)
                                                              {
                                                                fVar14 = (float)FUN_049afd98(*(long 
                                                  *)(unaff_x19 + 0x18),0);
                                                  if (DAT_0722a13e == '\0') {
                                                    thunk_FUN_0159f088(PTR_DAT_06e50440);
                                                    DAT_0722a13e = '\x01';
                                                  }
                                                  pfVar7 = *(float **)(*unaff_x23 + 0xb8);
                                                  fVar24 = fVar24 - pfVar7[2];
                                                  if (fVar24 * fVar24 +
                                                      (fVar14 - *pfVar7) * (fVar14 - *pfVar7) +
                                                      (fVar19 - pfVar7[1]) * (fVar19 - pfVar7[1]) <
                                                      fVar18) {
                                                    if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                      uVar12 = 
                                                  Fusion_CloudServices_<Join>d__84__SetStateMachine
                                                            (*(long *)(unaff_x19 + 0x20),0);
                                                  *(undefined4 *)(unaff_x19 + 200) = uVar12;
                                                  *(float *)(unaff_x19 + 0xcc) = fVar18;
                                                  *(float *)(unaff_x19 + 0xd0) = fVar24;
                                                  if (*(long *)(unaff_x19 + 0xb8) != 0) {
                                                    uVar12 = FUN_049ac524(*(long *)(unaff_x19 + 0xb8
                                                                                   ),0);
                                                    *(undefined4 *)(unaff_x19 + 0x32c) = uVar12;
                                                    *(float *)(unaff_x19 + 0x330) = fVar18;
                                                    *(float *)(unaff_x19 + 0x334) = fVar24;
                                                    if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                      uVar12 = FUN_04f1adf8(*(long *)(unaff_x19 +
                                                                                     0x20),0);
                                                      *(undefined4 *)(unaff_x19 + 0xd4) = uVar12;
                                                      *(float *)(unaff_x19 + 0xd8) = fVar18;
                                                      *(float *)(unaff_x19 + 0xdc) = fVar24;
                                                      *(float *)(unaff_x19 + 0xe0) = fVar16;
                                                      fVar14 = (float)FUN_03b6b618();
                                                      fVar26 = *(float *)(unaff_x19 + 0x250);
                                                      fVar19 = *(float *)(unaff_x19 + 0x25c);
                                                      fVar28 = *(float *)(unaff_x19 + 600);
                                                      fVar17 = *(float *)(unaff_x19 + 0x254);
                                                      fVar15 = fVar24 * fVar28;
                                                      fVar27 = (fVar18 * fVar28 +
                                                               fVar16 * fVar26 + fVar14 * fVar19) -
                                                               fVar24 * fVar17;
                                                      fVar22 = (fVar24 * fVar26 +
                                                               fVar16 * fVar17 + fVar18 * fVar19) -
                                                               fVar14 * fVar28;
                                                      *(float *)(unaff_x19 + 0x290) = fVar27;
                                                      *(float *)(unaff_x19 + 0x294) = fVar22;
                                                      *(float *)(unaff_x19 + 0x298) =
                                                           (fVar14 * fVar17 +
                                                           fVar16 * fVar28 + fVar24 * fVar19) -
                                                           fVar18 * fVar26;
                                                      *(float *)(unaff_x19 + 0x29c) =
                                                           ((fVar16 * fVar19 - fVar14 * fVar26) -
                                                           fVar18 * fVar17) - fVar15;
                                                      FUN_03b6b9a0();
                                                      uVar12 = FUN_051dd1d4(0);
                                                      *(undefined4 *)(unaff_x19 + 0x308) = uVar12;
                                                      uVar12 = FUN_051dd1d4(0);
                                                      *(undefined4 *)(unaff_x19 + 0x30c) = uVar12;
                                                      if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                        uVar12 = 
                                                  Fusion_CloudServices_<Join>d__84__SetStateMachine
                                                            (*(long *)(unaff_x19 + 0x20),0);
                                                  *(undefined4 *)(unaff_x19 + 0x234) = uVar12;
                                                  *(float *)(unaff_x19 + 0x238) = fVar27;
                                                  *(float *)(unaff_x19 + 0x23c) = fVar15;
                                                  if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                    uVar12 = FUN_04f1adf8(*(long *)(unaff_x19 + 0x20
                                                                                   ),0);
                                                    *(undefined4 *)(unaff_x19 + 0x2d0) = uVar12;
                                                    *(float *)(unaff_x19 + 0x2d4) = fVar27;
                                                    *(float *)(unaff_x19 + 0x2d8) = fVar15;
                                                    *(float *)(unaff_x19 + 0x2dc) = fVar22;
                                                    if ((*(long *)(unaff_x19 + 0x28) != 0) &&
                                                       (lVar8 = *(long *)(*(long *)(unaff_x19 + 0x28
                                                                                   ) + 0x30),
                                                       lVar8 != 0)) {
                                                      uVar9 = FUN_0160edfc(*(undefined8 *)
                                                                            PTR_DAT_06dad490,
                                                                           *(undefined4 *)
                                                                            (lVar8 + 0x18));
                                                      *(undefined8 *)(unaff_x19 + 0x318) = uVar9;
                                                      thunk_FUN_01656ef8((undefined8 *)
                                                                         (unaff_x19 + 0x318),uVar9);
                                                      puVar1 = PTR_DAT_06e2a8c0;
                                                      plVar11 = *(long **)(unaff_x19 + 0x318);
                                                      if (plVar11 != (long *)0x0) {
                                                        uVar5 = 0;
                                                        do {
                                                          if ((long)(int)plVar11[3] <= (long)uVar5)
                                                          {
                                                            *(undefined1 *)(unaff_x19 + 0x2fd) = 1;
                                                            return;
                                                          }
                                                          if ((*(long *)(unaff_x19 + 0x28) == 0) ||
                                                             (lVar8 = *(long *)(*(long *)(unaff_x19
                                                                                         + 0x28) +
                                                                               0x30), lVar8 == 0))
                                                          break;
                                                          if (*(uint *)(lVar8 + 0x18) <= uVar5) {
LAB_03b6b0c8:
                    /* WARNING: Subroutine does not return */
                                                            FUN_0160eebc();
                                                          }
                                                          uVar9 = *(undefined8 *)
                                                                   (lVar8 + uVar5 * 8 + 0x20);
                                                          lVar8 = thunk_FUN_015d056c(*(undefined8 *)
                                                                                      puVar1);
                                                          if (lVar8 == 0) break;
                                                          FUN_03b8a21c(lVar8,uVar9,0);
                                                          lVar6 = thunk_FUN_015d0480(lVar8,*(
                                                  undefined8 *)(*plVar11 + 0x40));
                                                  if (lVar6 == 0) {
                                                    uVar9 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
                                                    FUN_0160ee7c(uVar9,0);
                                                  }
                                                  if (*(uint *)(plVar11 + 3) <= uVar5)
                                                  goto LAB_03b6b0c8;
                                                  plVar11[uVar5 + 4] = lVar8;
                                                  thunk_FUN_01656ef8(plVar11 + uVar5 + 4,lVar8);
                                                  plVar11 = *(long **)(unaff_x19 + 0x318);
                                                  uVar5 = uVar5 + 1;
                                                  } while (plVar11 != (long *)0x0);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else if (*unaff_x20 != 0) {
                                                    uVar9 = FUN_051e0500(*unaff_x20,0);
                                                    puVar2 = PTR_DAT_06dc37c0;
                                                    puVar1 = PTR_DAT_06db5be8;
                                                    if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                      fStack0000000000000090 =
                                                           (float)FUN_049afd98(*(long *)(unaff_x19 +
                                                                                        0x18),0);
                                                      fStack0000000000000094 = fVar18;
                                                      in_stack_00000098 = fVar24;
                                                      uVar10 = Fusion_CloudCommunicator__Dispose
                                                                         (&stack0x00000090,0);
                                                      uVar9 = FUN_02526f2c(*(undefined8 *)puVar2,
                                                                           uVar9,*(undefined8 *)
                                                                                  puVar1,uVar10,0);
                                                      lVar8 = *unaff_x20;
                                                      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                                                        thunk_FUN_016466fc(*(long *)puVar3);
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
LAB_03b6b08c:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


