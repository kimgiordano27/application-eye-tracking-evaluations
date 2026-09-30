/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.Vector4f>
ENTRY_POINT: 03b6a0ec
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


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_Vector4f>
               (undefined1 param_1 [16],float param_2,float param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  float *pfVar8;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  long *unaff_x23;
  long *unaff_x24;
  long *plVar11;
  undefined4 uVar12;
  float fVar13;
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
  float fStack0000000000000090;
  float fStack0000000000000094;
  float in_stack_00000098;
  float fStack0000000000000108;
  float fStack000000000000010c;
  
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
         (lVar6 = FUN_051e5130(*(long *)(unaff_x19 + 0x18),0), lVar6 != 0)) {
        uVar9 = Fusion_CloudServices_<get_CommittedPlayerInternal>d__112__System_Collections_Generic_IEnumerable<Fusion_PlayerRef>_GetEnumerator
                          (lVar6,0);
        *(undefined8 *)(unaff_x19 + 0x180) = uVar9;
        thunk_FUN_01656ef8(unaff_x19 + 0x180);
        if ((*(long *)(unaff_x19 + 0x18) != 0) &&
           (lVar6 = FUN_051e5130(*(long *)(unaff_x19 + 0x18),0), lVar6 != 0)) {
          uVar12 = Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar6,0);
          *(undefined4 *)(unaff_x19 + 0x188) = uVar12;
          *(float *)(unaff_x19 + 0x18c) = param_2;
          *(float *)(unaff_x19 + 400) = param_3;
          if ((*(long *)(unaff_x19 + 0x18) != 0) &&
             (lVar6 = FUN_051e5130(*(long *)(unaff_x19 + 0x18),0), lVar6 != 0)) {
            uVar12 = FUN_04f1adf8(lVar6,0);
            *(undefined4 *)(unaff_x19 + 0x194) = uVar12;
            *(float *)(unaff_x19 + 0x198) = param_2;
            *(float *)(unaff_x19 + 0x19c) = param_3;
            *(undefined4 *)(unaff_x19 + 0x1a0) = param_4;
            if (*(long *)(unaff_x19 + 0x20) != 0) {
              uVar12 = Fusion_CloudServices_<Join>d__84__SetStateMachine
                                 (*(long *)(unaff_x19 + 0x20),0);
              *(undefined4 *)(unaff_x19 + 0x1a4) = uVar12;
              *(float *)(unaff_x19 + 0x1a8) = param_2;
              *(float *)(unaff_x19 + 0x1ac) = param_3;
              if (*(long *)(unaff_x19 + 0x20) != 0) {
                uVar12 = FUN_04f1adf8(*(long *)(unaff_x19 + 0x20),0);
                *(undefined4 *)(unaff_x19 + 0x1b0) = uVar12;
                *(float *)(unaff_x19 + 0x1b4) = param_2;
                *(float *)(unaff_x19 + 0x1b8) = param_3;
                *(undefined4 *)(unaff_x19 + 0x1bc) = param_4;
                if (*(long *)(unaff_x19 + 0x18) != 0) {
                  uVar12 = FUN_049b09fc(*(long *)(unaff_x19 + 0x18),0);
                  *(undefined4 *)(unaff_x19 + 0x1c0) = uVar12;
                  if (*(long *)(unaff_x19 + 0x18) != 0) {
                    uVar12 = FUN_049b0a7c(*(long *)(unaff_x19 + 0x18),0);
                    *(undefined4 *)(unaff_x19 + 0x1c4) = uVar12;
                    if (*(long *)(unaff_x19 + 0x18) != 0) {
                      uVar12 = FUN_049b0afc(*(long *)(unaff_x19 + 0x18),0);
                      *(undefined4 *)(unaff_x19 + 0x1c8) = uVar12;
                      uVar12 = FUN_03b6b36c();
                      *(undefined4 *)(unaff_x19 + 0x240) = uVar12;
                      *(float *)(unaff_x19 + 0x244) = param_2;
                      *(float *)(unaff_x19 + 0x248) = param_3;
                      *(undefined4 *)(unaff_x19 + 0x24c) = param_4;
                      if (*(long *)(unaff_x19 + 0x18) != 0) {
                        fVar13 = (float)FUN_049afc60(*(long *)(unaff_x19 + 0x18),0);
                        if (*(long *)(unaff_x19 + 0x18) != 0) {
                          fVar26 = param_3;
                          fVar17 = param_2;
                          fVar14 = (float)FUN_049b0744(*(long *)(unaff_x19 + 0x18),0);
                          fVar21 = fVar13 * fVar26;
                          fVar25 = param_2 * fVar26 - param_3 * fVar17;
                          fVar26 = param_3 * fVar14 - fVar21;
                          fVar13 = fVar13 * fVar17 - param_2 * fVar14;
                          fStack0000000000000090 = fVar25;
                          fStack0000000000000094 = fVar26;
                          in_stack_00000098 = fVar13;
                          if (DAT_0722a39f == '\0') {
                            thunk_FUN_0159f088(PTR_DAT_06e1a840);
                            DAT_0722a39f = '\x01';
                          }
                          puVar1 = PTR_DAT_06e1a840;
                          if (*(int *)(*(long *)PTR_DAT_06e1a840 + 0xe0) == 0) {
                            thunk_FUN_016466fc();
                          }
                          fVar17 = DAT_0533fbb4;
                          fVar18 = fVar13 * fVar13;
                          fVar14 = SQRT(fVar18 + fVar25 * fVar25 + fVar26 * fVar26);
                          if (fVar14 <= DAT_0533fbb4) {
                            if (DAT_0722a13e == '\0') {
                              thunk_FUN_0159f088(PTR_DAT_06e50440);
                              DAT_0722a13e = '\x01';
                            }
                            pfVar8 = *(float **)(*unaff_x23 + 0xb8);
                            fVar25 = *pfVar8;
                            fVar26 = pfVar8[1];
                            fVar13 = pfVar8[2];
                          }
                          else {
                            fVar25 = fVar25 / fVar14;
                            fVar26 = fVar26 / fVar14;
                            fVar13 = fVar13 / fVar14;
                          }
                          if (*(long *)(unaff_x19 + 0x18) != 0) {
                            fVar14 = (float)FUN_049afc60(*(long *)(unaff_x19 + 0x18),0);
                            fVar27 = fVar26 * fVar21 - fVar13 * fVar18;
                            fVar21 = fVar13 * fVar14 - fVar25 * fVar21;
                            fVar14 = fVar25 * fVar18 - fVar26 * fVar14;
                            fStack0000000000000090 = fVar27;
                            fStack0000000000000094 = fVar21;
                            in_stack_00000098 = fVar14;
                            if (DAT_0722a39f == '\0') {
                              thunk_FUN_0159f088(PTR_DAT_06e1a840);
                              DAT_0722a39f = '\x01';
                            }
                            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                              thunk_FUN_016466fc();
                            }
                            fVar18 = SQRT(fVar14 * fVar14 + fVar27 * fVar27 + fVar21 * fVar21);
                            if (fVar18 <= fVar17) {
                              if (DAT_0722a13e == '\0') {
                                thunk_FUN_0159f088(PTR_DAT_06e50440);
                                DAT_0722a13e = '\x01';
                              }
                              pfVar8 = *(float **)(*unaff_x23 + 0xb8);
                              fVar27 = *pfVar8;
                              fVar21 = pfVar8[1];
                              fVar14 = pfVar8[2];
                            }
                            else {
                              fVar27 = fVar27 / fVar18;
                              fVar21 = fVar21 / fVar18;
                              fVar14 = fVar14 / fVar18;
                            }
                            puVar3 = PTR_DAT_06e52cd8;
                            puVar2 = PTR_DAT_06e2ec60;
                            puVar1 = PTR_DAT_06ddc378;
                            fVar17 = DAT_0534bf7c;
                            fVar14 = fVar13 - fVar14;
                            fVar18 = fVar14 * fVar14;
                            if (fVar18 + (fVar25 - fVar27) * (fVar25 - fVar27) +
                                         (fVar26 - fVar21) * (fVar26 - fVar21) < DAT_0534bf7c) {
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
                              fStack0000000000000108 = fVar21;
                              fStack000000000000010c = fVar27;
                              if (*(long *)(unaff_x19 + 0x20) != 0) {
                                fVar21 = DAT_0534bf7c;
                                FUN_04f1adf8(*(long *)(unaff_x19 + 0x20),0);
                                fVar27 = (float)FUN_04f13694(0);
                                if (*unaff_x20 != 0) {
                                  fVar16 = fVar21;
                                  fVar20 = fVar18;
                                  fVar23 = fVar14;
                                  fVar15 = (float)FUN_04f1adf8(*unaff_x20,0);
                                  fVar22 = fVar14 * fVar23;
                                  fVar24 = fVar27 * fVar20 + fVar21 * fVar23 + fVar14 * fVar16;
                                  fVar19 = ((fVar21 * fVar16 - fVar27 * fVar15) - fVar18 * fVar20) -
                                           fVar22;
                                  *(float *)(unaff_x19 + 0x2b0) =
                                       (fVar18 * fVar23 + fVar21 * fVar15 + fVar27 * fVar16) -
                                       fVar14 * fVar20;
                                  *(float *)(unaff_x19 + 0x2b4) =
                                       (fVar14 * fVar15 + fVar21 * fVar20 + fVar18 * fVar16) -
                                       fVar27 * fVar23;
                                  *(float *)(unaff_x19 + 0x2b8) = fVar24 - fVar18 * fVar15;
                                  *(float *)(unaff_x19 + 700) = fVar19;
                                  if (*(long *)(unaff_x19 + 0x20) != 0) {
                                    lVar6 = *(long *)(unaff_x19 + 0xb0);
                                    Fusion_CloudServices_<Join>d__84__SetStateMachine
                                              (*(long *)(unaff_x19 + 0x20),0);
                                    if (lVar6 != 0) {
                                      uVar12 = FUN_04f1c838(lVar6,0);
                                      *(undefined4 *)(unaff_x19 + 0x150) = uVar12;
                                      *(float *)(unaff_x19 + 0x154) = fVar19;
                                      *(float *)(unaff_x19 + 0x158) = fVar22;
                                      if (*(long *)(unaff_x19 + 0xb0) != 0) {
                                        FUN_04f1adf8(*(long *)(unaff_x19 + 0xb0),0);
                                        fVar14 = (float)FUN_04f13694(0);
                                        if (*(long *)(unaff_x19 + 0x20) != 0) {
                                          fVar21 = fVar24;
                                          fVar18 = fVar19;
                                          fVar27 = fVar22;
                                          fVar16 = (float)FUN_04f1adf8(*(long *)(unaff_x19 + 0x20),0
                                                                      );
                                          fVar20 = (fVar22 * fVar16 +
                                                   fVar24 * fVar18 + fVar19 * fVar21) -
                                                   fVar14 * fVar27;
                                          fVar23 = (fVar14 * fVar18 +
                                                   fVar24 * fVar27 + fVar22 * fVar21) -
                                                   fVar19 * fVar16;
                                          fVar15 = ((fVar24 * fVar21 - fVar14 * fVar16) -
                                                   fVar19 * fVar18) - fVar22 * fVar27;
                                          *(float *)(unaff_x19 + 0x15c) =
                                               (fVar19 * fVar27 + fVar24 * fVar16 + fVar14 * fVar21)
                                               - fVar22 * fVar18;
                                          *(float *)(unaff_x19 + 0x160) = fVar20;
                                          *(float *)(unaff_x19 + 0x164) = fVar23;
                                          *(float *)(unaff_x19 + 0x168) = fVar15;
                                          uVar12 = FUN_04f13694(0);
                                          *(undefined4 *)(unaff_x19 + 0x344) = uVar12;
                                          *(float *)(unaff_x19 + 0x348) = fVar20;
                                          *(float *)(unaff_x19 + 0x34c) = fVar23;
                                          *(float *)(unaff_x19 + 0x350) = fVar15;
                                          if (*(long *)(unaff_x19 + 0x20) != 0) {
                                            uVar9 = FUN_04f1adf8(*(long *)(unaff_x19 + 0x20),0);
                                            if (*unaff_x20 != 0) {
                                              FUN_04f1adf8(*unaff_x20,0);
                                              uVar12 = FUN_03b5df08(uVar9);
                                              *(float *)(unaff_x19 + 0x178) = fVar15;
                                              *(undefined4 *)(unaff_x19 + 0x16c) = uVar12;
                                              *(float *)(unaff_x19 + 0x170) = fVar20;
                                              *(float *)(unaff_x19 + 0x174) = fVar23;
                                              fVar18 = fStack000000000000010c;
                                              fVar27 = (float)FUN_04f13c44(fVar25,0);
                                              fVar14 = fVar26;
                                              fVar21 = fVar13;
                                              fVar25 = fVar18;
                                              uVar12 = FUN_04f13694(0);
                                              *(undefined4 *)(unaff_x19 + 0x270) = uVar12;
                                              *(float *)(unaff_x19 + 0x274) = fVar14;
                                              *(float *)(unaff_x19 + 0x278) = fVar21;
                                              *(float *)(unaff_x19 + 0x27c) = fVar25;
                                              fVar14 = *(float *)(unaff_x19 + 0x24c);
                                              fVar21 = *(float *)(unaff_x19 + 0x240);
                                              fVar25 = *(float *)(unaff_x19 + 0x244);
                                              fVar23 = *(float *)(unaff_x19 + 0x248);
                                              fVar15 = fVar13 * fVar23;
                                              fVar16 = (fVar13 * fVar25 +
                                                       fVar18 * fVar21 + fVar27 * fVar14) -
                                                       fVar26 * fVar23;
                                              fVar20 = (fVar27 * fVar23 +
                                                       fVar18 * fVar25 + fVar26 * fVar14) -
                                                       fVar13 * fVar21;
                                              *(float *)(unaff_x19 + 0x280) = fVar16;
                                              *(float *)(unaff_x19 + 0x284) = fVar20;
                                              *(float *)(unaff_x19 + 0x288) =
                                                   (fVar26 * fVar21 +
                                                   fVar18 * fVar23 + fVar13 * fVar14) -
                                                   fVar27 * fVar25;
                                              *(float *)(unaff_x19 + 0x28c) =
                                                   ((fVar18 * fVar14 - fVar27 * fVar21) -
                                                   fVar26 * fVar25) - fVar15;
                                              FUN_03b6b42c();
                                              fVar21 = (float)FUN_04f13694(0);
                                              fVar13 = fVar15;
                                              fVar26 = fVar16;
                                              fVar14 = fVar20;
                                              fVar25 = (float)FUN_03b6b4e4();
                                              fVar23 = fVar20 * fVar14;
                                              fVar19 = fVar21 * fVar26 +
                                                       fVar15 * fVar14 + fVar20 * fVar13;
                                              fVar18 = ((fVar15 * fVar13 - fVar21 * fVar25) -
                                                       fVar16 * fVar26) - fVar23;
                                              *(float *)(unaff_x19 + 0x260) =
                                                   (fVar16 * fVar14 +
                                                   fVar15 * fVar25 + fVar21 * fVar13) -
                                                   fVar20 * fVar26;
                                              *(float *)(unaff_x19 + 0x264) =
                                                   (fVar20 * fVar25 +
                                                   fVar15 * fVar26 + fVar16 * fVar13) -
                                                   fVar21 * fVar14;
                                              *(float *)(unaff_x19 + 0x268) =
                                                   fVar19 - fVar16 * fVar25;
                                              *(float *)(unaff_x19 + 0x26c) = fVar18;
                                              FUN_03b6b618();
                                              fVar21 = (float)FUN_04f13694(0);
                                              fVar13 = fVar19;
                                              fVar26 = fVar18;
                                              fVar14 = fVar23;
                                              fVar25 = (float)FUN_03b6b36c();
                                              fVar16 = fVar23 * fVar14;
                                              fVar20 = fVar21 * fVar26 +
                                                       fVar19 * fVar14 + fVar23 * fVar13;
                                              fVar27 = ((fVar19 * fVar13 - fVar21 * fVar25) -
                                                       fVar18 * fVar26) - fVar16;
                                              *(float *)(unaff_x19 + 0x250) =
                                                   (fVar18 * fVar14 +
                                                   fVar19 * fVar25 + fVar21 * fVar13) -
                                                   fVar23 * fVar26;
                                              *(float *)(unaff_x19 + 0x254) =
                                                   (fVar23 * fVar25 +
                                                   fVar19 * fVar26 + fVar18 * fVar13) -
                                                   fVar21 * fVar14;
                                              *(float *)(unaff_x19 + 600) = fVar20 - fVar18 * fVar25
                                              ;
                                              *(float *)(unaff_x19 + 0x25c) = fVar27;
                                              if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                uVar9 = FUN_049afbe0(*(long *)(unaff_x19 + 0x18),0);
                                                if (*(int *)(*unaff_x24 + 0xe0) == 0) {
                                                  thunk_FUN_016466fc(*unaff_x24);
                                                }
                                                uVar5 = FUN_051d2ac0(uVar9,0,0);
                                                if ((uVar5 & 1) != 0) {
                                                  if (*(long *)(unaff_x19 + 0x18) == 0)
                                                  goto LAB_03b6b08c;
                                                  FUN_049b0044(*(long *)(unaff_x19 + 0x18),0,0);
                                                  if ((*(long *)(unaff_x19 + 0x18) == 0) ||
                                                     (lVar6 = FUN_049afbe0(*(long *)(unaff_x19 +
                                                                                    0x18),0),
                                                     lVar6 == 0)) goto LAB_03b6b08c;
                                                  uVar9 = FUN_051e5130(lVar6,0);
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
                                                  uVar12 = FUN_049b09fc(*(long *)(unaff_x19 + 0x18),
                                                                        0);
                                                  *(undefined4 *)(unaff_x19 + 0x2f0) = uVar12;
                                                  if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                    uVar12 = FUN_049b0a7c(*(long *)(unaff_x19 + 0x18
                                                                                   ),0);
                                                    *(undefined4 *)(unaff_x19 + 0x2f4) = uVar12;
                                                    if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                      uVar12 = FUN_049b0afc(*(long *)(unaff_x19 +
                                                                                     0x18),0);
                                                      *(undefined4 *)(unaff_x19 + 0x2f8) = uVar12;
                                                      if ((*(long *)(unaff_x19 + 0xb8) != 0) &&
                                                         (lVar6 = FUN_051e5130(*(long *)(unaff_x19 +
                                                                                        0xb8),0),
                                                         lVar6 != 0)) {
                                                        FUN_04f1adf8(lVar6,0);
                                                        fVar13 = (float)FUN_04f13694(0);
                                                        if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                          fVar26 = fVar20;
                                                          fVar14 = fVar27;
                                                          fVar21 = fVar16;
                                                          fVar25 = (float)FUN_04f1adf8(*(long *)(
                                                  unaff_x19 + 0x20),0);
                                                  fVar23 = fVar16 * fVar21;
                                                  fVar15 = fVar13 * fVar14 +
                                                           fVar20 * fVar21 + fVar16 * fVar26;
                                                  fVar18 = ((fVar20 * fVar26 - fVar13 * fVar25) -
                                                           fVar27 * fVar14) - fVar23;
                                                  *(float *)(unaff_x19 + 300) =
                                                       (fVar27 * fVar21 +
                                                       fVar20 * fVar25 + fVar13 * fVar26) -
                                                       fVar16 * fVar14;
                                                  *(float *)(unaff_x19 + 0x130) =
                                                       (fVar16 * fVar25 +
                                                       fVar20 * fVar14 + fVar27 * fVar26) -
                                                       fVar13 * fVar21;
                                                  *(float *)(unaff_x19 + 0x134) =
                                                       fVar15 - fVar27 * fVar25;
                                                  *(float *)(unaff_x19 + 0x138) = fVar18;
                                                  if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                    uVar9 = FUN_049afbe0(*(long *)(unaff_x19 + 0x18)
                                                                         ,0);
                                                    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
                                                      thunk_FUN_016466fc(*unaff_x24);
                                                    }
                                                    uVar5 = FUN_051d94d4(uVar9,0,0);
                                                    if ((uVar5 & 1) == 0) {
                                                      if ((*(long *)(unaff_x19 + 0x18) == 0) ||
                                                         (lVar6 = FUN_049afbe0(*(long *)(unaff_x19 +
                                                                                        0x18),0),
                                                         lVar6 == 0)) goto LAB_03b6b08c;
                                                      lVar6 = FUN_051e5130(lVar6,0);
                                                      if ((*unaff_x20 == 0) ||
                                                         (
                                                  Fusion_CloudServices_<Join>d__84__SetStateMachine
                                                            (*unaff_x20,0), lVar6 == 0))
                                                  goto LAB_03b6b08c;
                                                  uVar12 = FUN_04f1c838(lVar6,0);
                                                  *(undefined4 *)(unaff_x19 + 0x21c) = uVar12;
                                                  *(float *)(unaff_x19 + 0x220) = fVar18;
                                                  *(float *)(unaff_x19 + 0x224) = fVar23;
                                                  if (((*(long *)(unaff_x19 + 0x18) == 0) ||
                                                      (lVar6 = FUN_049afbe0(*(long *)(unaff_x19 +
                                                                                     0x18),0),
                                                      lVar6 == 0)) ||
                                                     (lVar6 = FUN_051e5130(lVar6,0), lVar6 == 0))
                                                  goto LAB_03b6b08c;
                                                  FUN_04f1adf8(lVar6,0);
                                                  fVar13 = (float)FUN_04f13694(0);
                                                  if (*unaff_x20 == 0) goto LAB_03b6b08c;
                                                  fVar26 = fVar15;
                                                  fVar14 = fVar18;
                                                  fVar21 = fVar23;
                                                  fVar25 = (float)FUN_04f1adf8(*unaff_x20,0);
                                                  fVar20 = fVar18 * fVar25;
                                                  fVar27 = fVar18 * fVar14;
                                                  fVar19 = fVar23 * fVar21;
                                                  fVar16 = (fVar18 * fVar21 +
                                                           fVar15 * fVar25 + fVar13 * fVar26) -
                                                           fVar23 * fVar14;
                                                  fVar18 = (fVar23 * fVar25 +
                                                           fVar15 * fVar14 + fVar18 * fVar26) -
                                                           fVar13 * fVar21;
                                                  fVar23 = (fVar13 * fVar14 +
                                                           fVar15 * fVar21 + fVar23 * fVar26) -
                                                           fVar20;
                                                  fVar15 = ((fVar15 * fVar26 - fVar13 * fVar25) -
                                                           fVar27) - fVar19;
                                                  }
                                                  else {
                                                    if (*unaff_x20 == 0) goto LAB_03b6b08c;
                                                    uVar12 = FUN_04f1aa98(*unaff_x20,0);
                                                    *(undefined4 *)(unaff_x19 + 0x21c) = uVar12;
                                                    *(float *)(unaff_x19 + 0x220) = fVar18;
                                                    *(float *)(unaff_x19 + 0x224) = fVar23;
                                                    if (*(long *)(unaff_x19 + 0xb0) == 0)
                                                    goto LAB_03b6b08c;
                                                    fVar16 = (float)FUN_04f1aef8(*(long *)(unaff_x19
                                                                                          + 0xb0),0)
                                                    ;
                                                  }
                                                  *(float *)(unaff_x19 + 0x2a0) = fVar16;
                                                  *(float *)(unaff_x19 + 0x2a4) = fVar18;
                                                  *(float *)(unaff_x19 + 0x2a8) = fVar23;
                                                  *(float *)(unaff_x19 + 0x2ac) = fVar15;
                                                  if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                    uVar12 = FUN_04f1aa98(*(long *)(unaff_x19 + 0x20
                                                                                   ),0);
                                                    *(undefined4 *)(unaff_x19 + 0x228) = uVar12;
                                                    *(float *)(unaff_x19 + 0x22c) = fVar18;
                                                    *(float *)(unaff_x19 + 0x230) = fVar23;
                                                    if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                      uVar12 = FUN_04f1aef8(*(long *)(unaff_x19 +
                                                                                     0x20),0);
                                                      *(undefined4 *)(unaff_x19 + 0x2c0) = uVar12;
                                                      *(float *)(unaff_x19 + 0x2c4) = fVar18;
                                                      *(float *)(unaff_x19 + 0x2c8) = fVar23;
                                                      *(float *)(unaff_x19 + 0x2cc) = fVar15;
                                                      if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                        FUN_049b1da8(*(long *)(unaff_x19 + 0x18),1,0
                                                                    );
                                                        if ((*(long *)(unaff_x19 + 0x18) != 0) &&
                                                           (lVar6 = FUN_051e516c(*(long *)(unaff_x19
                                                                                          + 0x18),0)
                                                           , lVar6 != 0)) {
                                                          uVar5 = FUN_051df964(lVar6,0);
                                                          puVar1 = PTR_DAT_06e49d60;
                                                          lVar6 = *(long *)(unaff_x19 + 0x18);
                                                          if (lVar6 != 0) {
                                                            if ((uVar5 & 1) == 0) {
                                                              lVar6 = FUN_051e5130(lVar6,0);
                                                              if (*(int *)(*(long *)puVar3 + 0xe0)
                                                                  == 0) {
                                                                thunk_FUN_016466fc(*(long *)puVar3);
                                                              }
                                                              uVar9 = *(undefined8 *)puVar1;
LAB_03b6ae68:
                                                              FUN_04866834(uVar9,lVar6,0);
                                                              return;
                                                            }
                                                            FUN_049b2360(lVar6,0,0);
                                                            if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                              FUN_049b21d0(*(long *)(unaff_x19 +
                                                                                    0x18),0,0);
                                                              if (*(long *)(unaff_x19 + 0x18) != 0)
                                                              {
                                                                fVar13 = (float)FUN_049afd98(*(long 
                                                  *)(unaff_x19 + 0x18),0);
                                                  if (DAT_0722a13e == '\0') {
                                                    thunk_FUN_0159f088(PTR_DAT_06e50440);
                                                    DAT_0722a13e = '\x01';
                                                  }
                                                  pfVar8 = *(float **)(*unaff_x23 + 0xb8);
                                                  fVar23 = fVar23 - pfVar8[2];
                                                  if (fVar23 * fVar23 +
                                                      (fVar13 - *pfVar8) * (fVar13 - *pfVar8) +
                                                      (fVar18 - pfVar8[1]) * (fVar18 - pfVar8[1]) <
                                                      fVar17) {
                                                    if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                      uVar12 = 
                                                  Fusion_CloudServices_<Join>d__84__SetStateMachine
                                                            (*(long *)(unaff_x19 + 0x20),0);
                                                  *(undefined4 *)(unaff_x19 + 200) = uVar12;
                                                  *(float *)(unaff_x19 + 0xcc) = fVar17;
                                                  *(float *)(unaff_x19 + 0xd0) = fVar23;
                                                  if (*(long *)(unaff_x19 + 0xb8) != 0) {
                                                    uVar12 = FUN_049ac524(*(long *)(unaff_x19 + 0xb8
                                                                                   ),0);
                                                    *(undefined4 *)(unaff_x19 + 0x32c) = uVar12;
                                                    *(float *)(unaff_x19 + 0x330) = fVar17;
                                                    *(float *)(unaff_x19 + 0x334) = fVar23;
                                                    if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                      uVar12 = FUN_04f1adf8(*(long *)(unaff_x19 +
                                                                                     0x20),0);
                                                      *(undefined4 *)(unaff_x19 + 0xd4) = uVar12;
                                                      *(float *)(unaff_x19 + 0xd8) = fVar17;
                                                      *(float *)(unaff_x19 + 0xdc) = fVar23;
                                                      *(float *)(unaff_x19 + 0xe0) = fVar15;
                                                      fVar13 = (float)FUN_03b6b618();
                                                      fVar25 = *(float *)(unaff_x19 + 0x250);
                                                      fVar18 = *(float *)(unaff_x19 + 0x25c);
                                                      fVar27 = *(float *)(unaff_x19 + 600);
                                                      fVar16 = *(float *)(unaff_x19 + 0x254);
                                                      fVar14 = fVar23 * fVar27;
                                                      fVar26 = (fVar17 * fVar27 +
                                                               fVar15 * fVar25 + fVar13 * fVar18) -
                                                               fVar23 * fVar16;
                                                      fVar21 = (fVar23 * fVar25 +
                                                               fVar15 * fVar16 + fVar17 * fVar18) -
                                                               fVar13 * fVar27;
                                                      *(float *)(unaff_x19 + 0x290) = fVar26;
                                                      *(float *)(unaff_x19 + 0x294) = fVar21;
                                                      *(float *)(unaff_x19 + 0x298) =
                                                           (fVar13 * fVar16 +
                                                           fVar15 * fVar27 + fVar23 * fVar18) -
                                                           fVar17 * fVar25;
                                                      *(float *)(unaff_x19 + 0x29c) =
                                                           ((fVar15 * fVar18 - fVar13 * fVar25) -
                                                           fVar17 * fVar16) - fVar14;
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
                                                  *(float *)(unaff_x19 + 0x238) = fVar26;
                                                  *(float *)(unaff_x19 + 0x23c) = fVar14;
                                                  if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                    uVar12 = FUN_04f1adf8(*(long *)(unaff_x19 + 0x20
                                                                                   ),0);
                                                    *(undefined4 *)(unaff_x19 + 0x2d0) = uVar12;
                                                    *(float *)(unaff_x19 + 0x2d4) = fVar26;
                                                    *(float *)(unaff_x19 + 0x2d8) = fVar14;
                                                    *(float *)(unaff_x19 + 0x2dc) = fVar21;
                                                    if ((*(long *)(unaff_x19 + 0x28) != 0) &&
                                                       (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x28
                                                                                   ) + 0x30),
                                                       lVar6 != 0)) {
                                                      uVar9 = FUN_0160edfc(*(undefined8 *)
                                                                            PTR_DAT_06dad490,
                                                                           *(undefined4 *)
                                                                            (lVar6 + 0x18));
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
                                                             (lVar6 = *(long *)(*(long *)(unaff_x19
                                                                                         + 0x28) +
                                                                               0x30), lVar6 == 0))
                                                          break;
                                                          if (*(uint *)(lVar6 + 0x18) <= uVar5) {
LAB_03b6b0c8:
                    /* WARNING: Subroutine does not return */
                                                            FUN_0160eebc();
                                                          }
                                                          uVar9 = *(undefined8 *)
                                                                   (lVar6 + uVar5 * 8 + 0x20);
                                                          lVar6 = thunk_FUN_015d056c(*(undefined8 *)
                                                                                      puVar1);
                                                          if (lVar6 == 0) break;
                                                          FUN_03b8a21c(lVar6,uVar9,0);
                                                          lVar7 = thunk_FUN_015d0480(lVar6,*(
                                                  undefined8 *)(*plVar11 + 0x40));
                                                  if (lVar7 == 0) {
                                                    uVar9 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
                                                    FUN_0160ee7c(uVar9,0);
                                                  }
                                                  if (*(uint *)(plVar11 + 3) <= uVar5)
                                                  goto LAB_03b6b0c8;
                                                  plVar11[uVar5 + 4] = lVar6;
                                                  thunk_FUN_01656ef8(plVar11 + uVar5 + 4,lVar6);
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
                                                      fStack0000000000000094 = fVar17;
                                                      in_stack_00000098 = fVar23;
                                                      uVar10 = Fusion_CloudCommunicator__Dispose
                                                                         (&stack0x00000090,0);
                                                      uVar9 = FUN_02526f2c(*(undefined8 *)puVar2,
                                                                           uVar9,*(undefined8 *)
                                                                                  puVar1,uVar10,0);
                                                      lVar6 = *unaff_x20;
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
LAB_03b6b08c:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


