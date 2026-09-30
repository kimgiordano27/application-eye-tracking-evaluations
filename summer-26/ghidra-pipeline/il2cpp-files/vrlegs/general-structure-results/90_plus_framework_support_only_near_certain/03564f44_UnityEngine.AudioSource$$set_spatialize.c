/*
FUNCTION_NAME: UnityEngine.AudioSource$$set_spatialize
ENTRY_POINT: 03564f44
PROGRAM: vrlegs-libil2cpp.so
SCORE: 146
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


undefined4 UnityEngine_AudioSource__set_spatialize(undefined1 param_1 [16],ulong param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  float fVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  void *__dest;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar22;
  uint unaff_w22;
  uint uVar23;
  long *plVar24;
  long *plVar25;
  long unaff_x24;
  long *plVar26;
  long *unaff_x25;
  uint unaff_w26;
  ulong uVar27;
  long unaff_x27;
  uint *puVar28;
  long *unaff_x29;
  long lVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  long *in_stack_00000038;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined4 uStack000000000000016c;
  uint uStack00000000000001b8;
  undefined1 uStack00000000000001bc;
  
code_r0x03564f44:
  uStack000000000000016c = *(undefined4 *)(unaff_x27 + 0x14);
  lVar12 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,&stack0x0000016c);
                    /* try { // try from 03564f74 to 036651ab has its CatchHandler @ 03564f74
                       catch() { ... } // from try @ 03564f74 with catch @ 03564f74
                       catch() { ... } // from try @ 03565210 with catch @ 03564f74
                       catch() { ... } // from try @ 03565244 with catch @ 03564f74
                       catch() { ... } // from try @ 03565274 with catch @ 03564f74
                       catch() { ... } // from try @ 035652b4 with catch @ 03564f74 */
  if ((lVar12 == 0) ||
     (lVar13 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)(*unaff_x29 + 0x40)), lVar13 != 0)) {
    if (2 < *(uint *)(unaff_x29 + 3)) {
      unaff_x29[6] = lVar12;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x29 + 6,lVar12);
      lVar12 = FUN_036d3824();
      if ((lVar12 == 0) ||
         (lVar13 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)(*unaff_x29 + 0x40)), lVar13 != 0)) {
        if (3 < *(uint *)(unaff_x29 + 3)) {
          unaff_x29[7] = lVar12;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x29 + 7,lVar12);
          puVar18 = (undefined8 *)OVRPlugin_TrackedKeyboardFlags_TypeInfo;
LAB_03564fe4:
          uVar14 = FUN_025be8f4(*puVar18,unaff_x29,0);
          if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_0367b470(uVar14);
          uVar23 = unaff_w22;
          uVar10 = unaff_w26;
LAB_03565024:
          if (*(char *)(unaff_x27 + 0x10) == '\x01') {
            lVar12 = *(long *)(unaff_x27 + 0x18);
            if (lVar12 == 0) goto LAB_03566068;
            iVar8 = *(int *)(lVar12 + 0x18);
            if (iVar8 == 0) {
              iVar8 = FUN_036d3364(lVar12,0);
              *(int *)(lVar12 + 0x18) = iVar8;
            }
            lVar12 = *unaff_x25;
            if (lVar12 == 0) goto LAB_03566068;
            iVar9 = *(int *)(lVar12 + 0x18);
            if (iVar9 == 0) {
              iVar9 = FUN_036d3364(lVar12,0);
              *(int *)(lVar12 + 0x18) = iVar9;
            }
            if (iVar8 == iVar9) {
              bVar5 = false;
            }
            else {
              plVar15 = *(long **)(unaff_x27 + 0x18);
              if (plVar15 == (long *)0x0) {
                plVar15 = (long *)0x0;
                *unaff_x25 = 0;
              }
              else {
                lVar12 = *(long *)OVRPlugin_OVRP_1_83_0_TypeInfo;
                bVar3 = *(byte *)(lVar12 + 0x130);
                if (*(byte *)(*plVar15 + 0x130) < bVar3) {
                  plVar26 = (long *)0x0;
                }
                else {
                  plVar26 = plVar15;
                  if (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar3 * 8 + -8) != lVar12) {
                    plVar26 = (long *)0x0;
                  }
                }
                *unaff_x25 = (long)plVar26;
                if (*(byte *)(*plVar15 + 0x130) < bVar3) {
                  plVar15 = (long *)0x0;
                }
                else if (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar3 * 8 + -8) != lVar12) {
                  plVar15 = (long *)0x0;
                }
              }
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x25,plVar15);
              bVar5 = true;
            }
          }
          else {
            bVar5 = false;
          }
          if ((*unaff_x20 == 0) || (lVar12 = *(long *)(*unaff_x20 + 0x38), lVar12 == 0))
          goto LAB_03566068;
          if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
          lVar12 = lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
          plVar15 = (long *)(lVar12 + 0x30);
          *plVar15 = unaff_x27;
          *(undefined4 *)(lVar12 + 0x2c) = 0;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar15,unaff_x27);
          if ((*unaff_x20 == 0) || (lVar12 = *(long *)(*unaff_x20 + 0x38), lVar12 == 0))
          goto LAB_03566068;
          uVar4 = *(uint *)(unaff_x19 + 0x490);
          if (*(uint *)(lVar12 + 0x18) <= uVar4) goto LAB_035660f8;
          lVar13 = lVar12 + (long)(int)uVar4 * 0x178;
          *(short *)(lVar13 + 0x20) = (short)uVar10;
          *(undefined1 *)(lVar13 + 0x5c) = uStack00000000000001bc;
          if (*(uint *)(unaff_x21 + 0x18) <= uVar23) goto LAB_035660f8;
          lVar12 = lVar12 + (long)(int)uVar4 * 0x178;
          *(undefined8 *)(lVar12 + 0x24) = *(undefined8 *)(unaff_x21 + unaff_x24 * 0xc + 0x24);
          *(long *)(lVar12 + 0x38) = *unaff_x25;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          plVar15 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(char *)(unaff_x27 + 0x10) == '\x02') {
            plVar26 = *(long **)(unaff_x27 + 0x18);
            if (plVar26 == (long *)0x0) goto LAB_03566068;
            bVar3 = *(byte *)(*(long *)OVRPlugin_Sizei_TypeInfo + 0x130);
            if ((*(byte *)(*plVar26 + 0x130) < bVar3) ||
               (*(long *)(*(long *)(*plVar26 + 200) + (ulong)bVar3 * 8 + -8) !=
                *(long *)OVRPlugin_Sizei_TypeInfo)) goto LAB_03566068;
            lVar13 = plVar26[4];
            lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar12 = *plVar15;
            }
            uVar10 = FUN_03558224(lVar13,plVar26,*(long *)(lVar12 + 0xb8),
                                  *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
            *(uint *)(unaff_x19 + 0x120) = uVar10;
            lVar12 = **(long **)(*plVar15 + 0xb8);
            if (lVar12 == 0) goto LAB_03566068;
            if (*(uint *)(lVar12 + 0x18) <= uVar10) goto LAB_035660f8;
            lVar12 = lVar12 + (long)(int)uVar10 * 0x38;
            *(int *)(lVar12 + 0x54) = *(int *)(lVar12 + 0x54) + 1;
            if ((*unaff_x20 == 0) || (lVar12 = *(long *)(*unaff_x20 + 0x38), lVar12 == 0))
            goto LAB_03566068;
            if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
            lVar12 = lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
            *(undefined4 *)(lVar12 + 0x2c) = 1;
            uVar11 = *(undefined4 *)(unaff_x19 + 0x120);
            *(undefined8 *)(lVar12 + 0x40) = plVar26;
            *(undefined4 *)(lVar12 + 0x58) = uVar11;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      ((undefined8 *)(lVar12 + 0x40),plVar26);
            plVar15 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if ((*(long *)(unaff_x19 + 0x368) == 0) ||
               (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar12 == 0))
            goto LAB_03566068;
            uVar10 = *(uint *)(unaff_x19 + 0x490);
            if (*(uint *)(lVar12 + 0x18) <= uVar10) goto LAB_035660f8;
            *(undefined4 *)(lVar12 + (long)(int)uVar10 * 0x178 + 0x48) =
                 *(undefined4 *)(unaff_x27 + 0x28);
            *(undefined4 *)(unaff_x19 + 0x644) = 0;
            *(undefined4 *)(unaff_x19 + 0x120) = in_stack_00000030._4_4_;
            in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
            unaff_x25 = in_stack_00000038;
            plVar26 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
          }
          else {
            if (bVar5) {
              lVar12 = *unaff_x25;
              if (lVar12 == 0) goto LAB_03566068;
              iVar8 = *(int *)(lVar12 + 0x18);
              if (iVar8 == 0) {
                iVar8 = FUN_036d3364(lVar12,0);
                *(int *)(lVar12 + 0x18) = iVar8;
              }
              lVar12 = *(long *)(unaff_x19 + 0xf8);
              if (lVar12 == 0) goto LAB_03566068;
              iVar9 = *(int *)(lVar12 + 0x18);
              if (iVar9 == 0) {
                iVar9 = FUN_036d3364(lVar12,0);
                *(int *)(lVar12 + 0x18) = iVar9;
              }
              if (iVar8 != iVar9) {
                uVar22 = FUN_0359778c(0);
                if ((uVar22 & 1) == 0) {
                  if (*unaff_x25 == 0) goto LAB_03566068;
                  uVar14 = *(undefined8 *)(*unaff_x25 + 0x20);
                }
                else {
                  if (*unaff_x25 == 0) goto LAB_03566068;
                  uVar19 = *(undefined8 *)(*unaff_x25 + 0x20);
                  uVar14 = *in_stack_00000028;
                  if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar14 = FUN_03594e9c(uVar14,uVar19,0);
                  unaff_x25 = in_stack_00000038;
                }
                *in_stack_00000028 = uVar14;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000028)
                ;
                lVar12 = *plVar15;
                uVar14 = *in_stack_00000028;
                lVar13 = *unaff_x25;
                if (*(int *)(lVar12 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar12 = *plVar15;
                }
                uVar11 = FUN_03557fec(uVar14,lVar13,*(long *)(lVar12 + 0xb8),
                                      *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
                *(undefined4 *)(unaff_x19 + 0x120) = uVar11;
                unaff_x25 = in_stack_00000038;
              }
            }
            if (*(long *)(unaff_x27 + 0x20) == 0) goto LAB_03566068;
            iVar8 = FUN_03776eb8(*(long *)(unaff_x27 + 0x20),0);
            if (0 < iVar8) {
              if (*(long *)(unaff_x27 + 0x20) == 0) goto LAB_03566068;
              lVar12 = *unaff_x25;
              uVar14 = *in_stack_00000028;
              uVar11 = FUN_03776eb8(*(long *)(unaff_x27 + 0x20),0);
              if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)OVRPlugin_Sizef_TypeInfo);
              }
              uVar14 = FUN_03594928(lVar12,uVar14,uVar11,0);
              *in_stack_00000028 = uVar14;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        (in_stack_00000028,uVar14);
              lVar12 = *plVar15;
              uVar14 = *in_stack_00000028;
              lVar13 = *unaff_x25;
              if (*(int *)(lVar12 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar12 = *plVar15;
              }
              uVar11 = FUN_03557fec(uVar14,lVar13,*(long *)(lVar12 + 0xb8),
                                    *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
              bVar5 = true;
              *(undefined4 *)(unaff_x19 + 0x120) = uVar11;
              unaff_x25 = in_stack_00000038;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar22 = FUN_026b63d8(uVar10,0);
            plVar26 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
            if ((uVar10 != 0x200b) && ((uVar22 & 1) == 0)) {
              lVar12 = *plVar15;
              if (*(int *)(lVar12 + 0xe0) == 0) {
                thunk_FUN_01a58e78(lVar12);
                lVar12 = *plVar15;
              }
              lVar13 = **(long **)(lVar12 + 0xb8);
              if (lVar13 == 0) goto LAB_03566068;
              uVar10 = *(uint *)(unaff_x19 + 0x120);
              if (*(uint *)(lVar13 + 0x18) <= uVar10) goto LAB_035660f8;
              if (*(int *)(lVar13 + (long)(int)uVar10 * 0x38 + 0x54) < 0x3fff) {
                if (*(int *)(lVar12 + 0xe0) == 0) {
                  thunk_FUN_01a58e78(lVar12);
                  lVar13 = **(long **)(*plVar15 + 0xb8);
                  if (lVar13 == 0) goto LAB_03566068;
                  uVar10 = *(uint *)(unaff_x19 + 0x120);
                }
              }
              else {
                uVar19 = *in_stack_00000028;
                uVar14 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbea58);
                FUN_0369922c(uVar14,uVar19,0);
                lVar12 = *plVar15;
                lVar13 = *unaff_x25;
                if (*(int *)(lVar12 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar12 = *plVar15;
                }
                uVar10 = FUN_03557fec(uVar14,lVar13,*(long *)(lVar12 + 0xb8),
                                      *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
                *(uint *)(unaff_x19 + 0x120) = uVar10;
                lVar13 = **(long **)(*plVar15 + 0xb8);
                if (lVar13 == 0) goto LAB_03566068;
              }
              if (*(uint *)(lVar13 + 0x18) <= uVar10) goto LAB_035660f8;
              lVar13 = lVar13 + (long)(int)uVar10 * 0x38;
              *(int *)(lVar13 + 0x54) = *(int *)(lVar13 + 0x54) + 1;
            }
            if ((*unaff_x20 == 0) || (lVar12 = *(long *)(*unaff_x20 + 0x38), lVar12 == 0))
            goto LAB_03566068;
            if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
            *(undefined8 *)(lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x50) =
                 *in_stack_00000028;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            if ((*unaff_x20 == 0) || (lVar12 = *(long *)(*unaff_x20 + 0x38), lVar12 == 0))
            goto LAB_03566068;
            if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
            uVar10 = *(uint *)(unaff_x19 + 0x120);
            *(uint *)(lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x58) = uVar10;
            lVar12 = *plVar15;
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar12 = *plVar15;
              uVar10 = *(uint *)(unaff_x19 + 0x120);
            }
            lVar13 = **(long **)(lVar12 + 0xb8);
            if (lVar13 == 0) goto LAB_03566068;
            if (*(uint *)(lVar13 + 0x18) <= uVar10) goto LAB_035660f8;
            *(bool *)(lVar13 + (long)(int)uVar10 * 0x38 + 0x41) = bVar5;
            if (bVar5) {
              if (*(int *)(lVar12 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar13 = **(long **)(*plVar15 + 0xb8);
                if (lVar13 == 0) goto LAB_03566068;
                uVar10 = *(uint *)(unaff_x19 + 0x120);
              }
              if (*(uint *)(lVar13 + 0x18) <= uVar10) goto LAB_035660f8;
              puVar18 = (undefined8 *)(lVar13 + (long)(int)uVar10 * 0x38 + 0x48);
              *puVar18 = in_stack_00000018;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        (puVar18,in_stack_00000018);
              *(undefined8 *)(unaff_x19 + 0x100) = in_stack_00000010;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x25);
              *(undefined8 *)(unaff_x19 + 0x118) = in_stack_00000018;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        (in_stack_00000028,in_stack_00000018);
              *(undefined4 *)(unaff_x19 + 0x120) = in_stack_00000030._4_4_;
            }
            uVar10 = *(uint *)(unaff_x19 + 0x490);
          }
          do {
            *(uint *)(unaff_x19 + 0x490) = uVar10 + 1;
            do {
              uVar10 = *(uint *)(unaff_x21 + 0x18);
              unaff_w22 = uVar23 + 1;
              if ((int)uVar10 <= (int)unaff_w22) {
LAB_0356573c:
                if (*(char *)(unaff_x19 + 0x3f5) != '\0') {
                  *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
                  goto LAB_03565748;
                }
                lVar12 = *unaff_x20;
                if (lVar12 == 0) goto LAB_03566068;
                *(int *)(lVar12 + 0x1c) = in_stack_00000020._4_4_;
                lVar13 = *plVar15;
                if (*(int *)(lVar13 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar13 = *plVar15;
                }
                lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
                if (lVar13 == 0) goto LAB_03566068;
                uVar10 = FUN_0219b384(lVar13,*(undefined8 *)PTR_DAT_03ceb270);
                *(uint *)(lVar12 + 0x34) = uVar10;
                if (*unaff_x20 == 0) goto LAB_03566068;
                plVar24 = (long *)(*unaff_x20 + 0x60);
                lVar12 = *plVar24;
                if (lVar12 == 0) goto LAB_03566068;
                uVar22 = (ulong)uVar10;
                if (*(int *)(lVar12 + 0x18) < (int)uVar10) {
                  if (*(int *)(*plVar26 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  FUN_01ff02b8(plVar24,uVar22,0,*(undefined8 *)OVRPlugin_SpaceQueryResult_TypeInfo);
                }
                if (*(long *)(unaff_x19 + 0x708) == 0) goto LAB_03566068;
                plVar24 = (long *)(unaff_x19 + 0x708);
                if (*(int *)(*(long *)(unaff_x19 + 0x708) + 0x18) < (int)uVar10) {
                  uVar11 = FUN_036c1d60(uVar10 + 1,0);
                  if (*(int *)(*plVar26 + 0xe0) == 0) {
                    thunk_FUN_01a58e78(*plVar26);
                  }
                  FUN_01ff025c(plVar24,uVar11,
                               *(undefined8 *)OVRSystemPerfMetrics_PerfMetrics_TypeInfo);
                }
                if (*(char *)(unaff_x19 + 0x321) != '\0') {
                  if (*unaff_x20 == 0) goto LAB_03566068;
                  plVar25 = (long *)(*unaff_x20 + 0x38);
                  lVar12 = *plVar25;
                  if (lVar12 == 0) goto LAB_03566068;
                  iVar8 = *(int *)(unaff_x19 + 0x490);
                  if (0x100 < *(int *)(lVar12 + 0x18) - iVar8) {
                    iVar9 = 0x100;
                    if (0x100 < iVar8 + 1) {
                      iVar9 = iVar8 + 1;
                    }
                    if (*(int *)(*plVar26 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    FUN_01ff02b8(plVar25,iVar9,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
                    plVar15 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  }
                }
                fVar6 = DAT_00d38798;
                if ((int)uVar10 < 1) goto LAB_03565fb8;
                lVar12 = 0;
                uVar27 = 0;
                lVar13 = 0x54;
                lVar29 = 0x20;
                goto LAB_035658ec;
              }
              if (uVar10 <= unaff_w22) goto LAB_035660f8;
              puVar28 = (uint *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x20);
              if (*puVar28 == 0) goto LAB_0356573c;
              if (*unaff_x20 == 0) goto LAB_03566068;
              plVar15 = (long *)(*unaff_x20 + 0x38);
              lVar12 = *plVar15;
              iVar8 = *(int *)(unaff_x19 + 0x490);
              if ((lVar12 == 0) || (*(int *)(lVar12 + 0x18) <= iVar8)) {
                if (*(int *)(*plVar26 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                FUN_01ff02b8(plVar15,iVar8 + 1,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
                uVar10 = *(uint *)(unaff_x21 + 0x18);
              }
              if (uVar10 <= unaff_w22) goto LAB_035660f8;
              uVar10 = *puVar28;
              unaff_x24 = (long)(int)unaff_w22;
              if ((uVar10 != 0x3c) || (*(char *)(unaff_x19 + 0x302) == '\0')) {
LAB_035649d0:
                uStack00000000000001bc = 0;
                in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0x100);
                in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x118);
                in_stack_00000030._4_4_ = *(undefined4 *)(unaff_x19 + 0x120);
                if (*(int *)(unaff_x19 + 0x644) != 0) goto LAB_03564aac;
                uVar23 = *(uint *)(unaff_x19 + 0x25c);
                if ((uVar23 >> 4 & 1) == 0) {
                  if ((uVar23 >> 3 & 1) == 0) {
                    if ((uVar23 >> 5 & 1) != 0) goto LAB_03564a00;
                  }
                  else {
                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar22 = FUN_026b8070(uVar10,0);
                    if ((uVar22 & 1) != 0) {
                      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar10 = FUN_026b8594(uVar10,0);
                      goto LAB_03564aa8;
                    }
                  }
                }
                else {
LAB_03564a00:
                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar22 = FUN_026b812c(uVar10,0);
                  if ((uVar22 & 1) != 0) {
                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar10 = FUN_026b8410(uVar10,0);
LAB_03564aa8:
                    uVar10 = uVar10 & 0xffff;
                  }
                }
LAB_03564aac:
                unaff_x27 = FUN_03591848();
                uVar23 = unaff_w22;
                if (unaff_x27 != 0) goto LAB_03565024;
                iVar8 = FUN_035975f8();
                if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
                if (iVar8 == 0) {
                  unaff_w26 = 0x25a1;
                }
                else {
                  unaff_w26 = FUN_035975f8(0);
                }
                *puVar28 = unaff_w26;
                uVar14 = *(undefined8 *)(unaff_x19 + 0x100);
                uVar11 = *(undefined4 *)(unaff_x19 + 0x25c);
                uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                unaff_x27 = FUN_03570fc4(unaff_w26,uVar14,1,uVar11,uVar2,(long)&stack0x000001b8 + 4,
                                         0);
                if (unaff_x27 == 0) {
                  lVar12 = FUN_03597770();
                  if (lVar12 != 0) {
                    lVar12 = FUN_03597770(0);
                    if (lVar12 == 0) goto LAB_03566068;
                    if (0 < *(int *)(lVar12 + 0x18)) {
                      uVar19 = *(undefined8 *)(unaff_x19 + 0x100);
                      uVar14 = FUN_03597770(0);
                      uVar11 = *(undefined4 *)(unaff_x19 + 0x25c);
                      uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                      if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                        thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
                      }
                      unaff_x27 = FUN_035714e4(unaff_w26,uVar19,uVar14,1,uVar11,uVar2,
                                               (long)&stack0x000001b8 + 4,0);
                      if (unaff_x27 != 0) goto LAB_03564b5c;
                    }
                  }
                  uVar14 = FUN_03597650(0);
                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                    thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                  }
                  uVar22 = FUN_036cee6c(uVar14,0,0);
                  if ((uVar22 & 1) != 0) {
                    uVar14 = FUN_03597650(0);
                    uVar11 = *(undefined4 *)(unaff_x19 + 0x25c);
                    uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                    if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
                    }
                    unaff_x27 = FUN_03570fc4(unaff_w26,uVar14,1,uVar11,uVar2,
                                             (long)&stack0x000001b8 + 4,0);
                    if (unaff_x27 != 0) goto LAB_03564b5c;
                  }
                  if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
                  *puVar28 = 0x20;
                  uVar14 = *(undefined8 *)(unaff_x19 + 0x100);
                  uVar11 = *(undefined4 *)(unaff_x19 + 0x25c);
                  uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                  if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  unaff_w26 = 0x20;
                  unaff_x27 = FUN_03570fc4(0x20,uVar14,1,uVar11,uVar2,(long)&stack0x000001b8 + 4,0);
                  if (unaff_x27 == 0) {
                    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
                    *puVar28 = 3;
                    uVar14 = *(undefined8 *)(unaff_x19 + 0x100);
                    uVar11 = *(undefined4 *)(unaff_x19 + 0x25c);
                    uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                    if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    unaff_w26 = 3;
                    unaff_x27 = FUN_03570fc4(3,uVar14,1,uVar11,uVar2,(long)&stack0x000001b8 + 4,0);
                  }
                }
LAB_03564b5c:
                uVar22 = FUN_03597634(0);
                if ((uVar22 & 1) != 0) {
                  unaff_x25 = in_stack_00000038;
                  uVar10 = unaff_w26;
                  if (unaff_x27 == 0) goto LAB_03566068;
                  goto LAB_03565024;
                }
                unaff_x29 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,4);
                if ((int)uVar10 < 0x10000) {
                  in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar10);
                  lVar12 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0);
                  if (unaff_x29 == (long *)0x0) goto LAB_03566068;
                  if ((lVar12 != 0) &&
                     (lVar13 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)(*unaff_x29 + 0x40)),
                     lVar13 == 0)) goto LAB_035660fc;
                  if ((int)unaff_x29[3] == 0) goto LAB_035660f8;
                  unaff_x29[4] = lVar12;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (unaff_x29 + 4,lVar12);
                  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03566068;
                  lVar12 = FUN_036d3824(*(long *)(unaff_x19 + 0xf8),0);
                  if ((lVar12 != 0) &&
                     (lVar13 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)(*unaff_x29 + 0x40)),
                     lVar13 == 0)) goto LAB_035660fc;
                  if (*(uint *)(unaff_x29 + 3) < 2) goto LAB_035660f8;
                  unaff_x29[5] = lVar12;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (unaff_x29 + 5,lVar12);
                  unaff_x25 = in_stack_00000038;
                  if (unaff_x27 == 0) goto LAB_03566068;
                  goto code_r0x03564f44;
                }
                in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar10);
                lVar12 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0);
                if (unaff_x29 == (long *)0x0) goto LAB_03566068;
                if ((lVar12 != 0) &&
                   (lVar13 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)(*unaff_x29 + 0x40)),
                   lVar13 == 0)) goto LAB_035660fc;
                if ((int)unaff_x29[3] == 0) goto LAB_035660f8;
                unaff_x29[4] = lVar12;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (unaff_x29 + 4,lVar12);
                if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03566068;
                lVar12 = FUN_036d3824(*(long *)(unaff_x19 + 0xf8),0);
                if ((lVar12 != 0) &&
                   (lVar13 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)(*unaff_x29 + 0x40)),
                   lVar13 == 0)) goto LAB_035660fc;
                if (*(uint *)(unaff_x29 + 3) < 2) goto LAB_035660f8;
                unaff_x29[5] = lVar12;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (unaff_x29 + 5,lVar12);
                if (unaff_x27 == 0) goto LAB_03566068;
                uStack000000000000016c = *(undefined4 *)(unaff_x27 + 0x14);
                lVar12 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,&stack0x0000016c);
                if ((lVar12 != 0) &&
                   (lVar13 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)(*unaff_x29 + 0x40)),
                   lVar13 == 0)) goto LAB_035660fc;
                if (*(uint *)(unaff_x29 + 3) < 3) goto LAB_035660f8;
                unaff_x29[6] = lVar12;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (unaff_x29 + 6,lVar12);
                lVar12 = FUN_036d3824();
                if ((lVar12 != 0) &&
                   (lVar13 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)(*unaff_x29 + 0x40)),
                   lVar13 == 0)) goto LAB_035660fc;
                if (*(uint *)(unaff_x29 + 3) < 4) goto LAB_035660f8;
                unaff_x29[7] = lVar12;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (unaff_x29 + 7,lVar12);
                puVar18 = (undefined8 *)OVRPlugin_TextureRectMatrixf_TypeInfo;
                unaff_x25 = in_stack_00000038;
                goto LAB_03564fe4;
              }
              uVar11 = *(undefined4 *)(unaff_x19 + 0x120);
              uVar22 = FUN_03586568();
              uVar23 = uStack00000000000001b8;
              if ((uVar22 & 1) == 0) goto LAB_035649d0;
              if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
              iVar8 = *(int *)(unaff_x21 + unaff_x24 * 0xc + 0x24);
              if ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0) {
                *(undefined1 *)(unaff_x19 + 0x26a) = 1;
              }
              puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
              plVar15 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            } while (*(int *)(unaff_x19 + 0x644) != 1);
            lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar12 = *(long *)puVar7;
            }
            lVar12 = **(long **)(lVar12 + 0xb8);
            if (lVar12 == 0) goto LAB_03566068;
            if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x120)) break;
            lVar12 = lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38;
            *(int *)(lVar12 + 0x54) = *(int *)(lVar12 + 0x54) + 1;
            if ((*unaff_x20 == 0) || (lVar12 = *(long *)(*unaff_x20 + 0x38), lVar12 == 0))
            goto LAB_03566068;
            if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) break;
            uVar2 = *(undefined4 *)(unaff_x19 + 0x6a4);
            lVar12 = lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
            *(short *)(lVar12 + 0x20) = (short)uVar2 + -0x2000;
            *(undefined4 *)(lVar12 + 0x48) = uVar2;
            *(long *)(lVar12 + 0x38) = *in_stack_00000038;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            if ((*unaff_x20 == 0) || (lVar12 = *(long *)(*unaff_x20 + 0x38), lVar12 == 0))
            goto LAB_03566068;
            if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) break;
            *(undefined8 *)(lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x40) =
                 *(undefined8 *)(unaff_x19 + 0x698);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            if ((*unaff_x20 == 0) || (lVar12 = *(long *)(*unaff_x20 + 0x38), lVar12 == 0))
            goto LAB_03566068;
            uVar10 = *(uint *)(unaff_x19 + 0x490);
            if (*(uint *)(lVar12 + 0x18) <= uVar10) break;
            *(undefined4 *)(lVar12 + (long)(int)uVar10 * 0x178 + 0x58) =
                 *(undefined4 *)(unaff_x19 + 0x120);
            if ((*(long *)(unaff_x19 + 0x698) == 0) ||
               (lVar13 = UnityEngine_Material__DisableKeyword(*(long *)(unaff_x19 + 0x698),0),
               lVar13 == 0)) goto LAB_03566068;
            FUN_02215a88(lVar13,*(undefined4 *)(unaff_x19 + 0x6a4),&stack0x000000e0,
                         *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
            if (*(uint *)(lVar12 + 0x18) <= uVar10) break;
            *(undefined8 *)(lVar12 + (long)(int)uVar10 * 0x178 + 0x30) = in_stack_000000e0;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            if ((*unaff_x20 == 0) || (lVar12 = *(long *)(*unaff_x20 + 0x38), lVar12 == 0))
            goto LAB_03566068;
            uVar10 = *(uint *)(unaff_x19 + 0x490);
            if (*(uint *)(lVar12 + 0x18) <= uVar10) break;
            uVar2 = *(undefined4 *)(unaff_x19 + 0x644);
            lVar13 = lVar12 + (long)(int)uVar10 * 0x178;
            *(int *)(lVar13 + 0x24) = iVar8;
            *(undefined4 *)(lVar13 + 0x2c) = uVar2;
            if (*(uint *)(unaff_x21 + 0x18) <= uVar23) break;
            *(int *)(lVar12 + (long)(int)uVar10 * 0x178 + 0x28) =
                 (*(int *)(unaff_x21 + (long)(int)uVar23 * 0xc + 0x24) - iVar8) + 1;
            *(undefined4 *)(unaff_x19 + 0x644) = 0;
            *(undefined4 *)(unaff_x19 + 0x120) = uVar11;
            in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
            plVar15 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            unaff_x25 = in_stack_00000038;
          } while( true );
        }
        goto LAB_035660f8;
      }
      goto LAB_035660fc;
    }
    goto LAB_035660f8;
  }
LAB_035660fc:
  uVar14 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar14,0);
LAB_035658ec:
  do {
    fVar33 = (float)param_2;
    if (uVar27 != 0) {
      lVar20 = *plVar24;
      if (lVar20 == 0) goto LAB_03566068;
      if (*(uint *)(lVar20 + 0x18) <= uVar27) goto LAB_035660f8;
      uVar14 = *(undefined8 *)(lVar20 + uVar27 * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar16 = FUN_036d35a8(uVar14,0,0);
      if ((uVar16 & 1) != 0) {
        lVar20 = *plVar15;
        plVar26 = (long *)*plVar24;
        if (*(int *)(lVar20 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar20 = *plVar15;
        }
        lVar20 = **(long **)(lVar20 + 0xb8);
        if (lVar20 == 0) goto LAB_03566068;
        if (*(uint *)(lVar20 + 0x18) <= uVar27) goto LAB_035660f8;
        lVar20 = lVar20 + lVar13;
        in_stack_00000160 = *(undefined8 *)(lVar20 + -4);
        in_stack_00000158 = *(undefined8 *)(lVar20 + -0xc);
        in_stack_00000150 = *(undefined8 *)(lVar20 + -0x14);
        in_stack_00000148 = *(undefined8 *)(lVar20 + -0x1c);
        uVar14 = *(undefined8 *)(lVar20 + -0x24);
        in_stack_00000138 = *(undefined8 *)(lVar20 + -0x2c);
        in_stack_00000130 = *(undefined8 *)(lVar20 + -0x34);
        in_stack_00000140 = uVar14;
        lVar20 = FUN_0359e964();
        fVar33 = (float)uVar14;
        if (plVar26 == (long *)0x0) goto LAB_03566068;
        if ((lVar20 != 0) &&
           (lVar17 = thunk_FUN_01a89d6c(lVar20,*(undefined8 *)(*plVar26 + 0x40)), lVar17 == 0))
        goto LAB_035660fc;
        if (*(uint *)(plVar26 + 3) <= uVar27) goto LAB_035660f8;
        plVar26[uVar27 + 4] = lVar20;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((long)plVar26 + lVar29,lVar20);
        plVar15 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if ((*unaff_x20 == 0) || (lVar20 = *(long *)(*unaff_x20 + 0x60), lVar20 == 0))
        goto LAB_03566068;
        if (*(uint *)(lVar20 + 0x18) <= uVar27) goto LAB_035660f8;
        puVar18 = (undefined8 *)(lVar20 + lVar12 + 0x30);
        *puVar18 = 0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar18,0);
      }
      if (*(long *)(unaff_x19 + 0x380) == 0) goto LAB_03566068;
      fVar30 = (float)FUN_036dba50(*(long *)(unaff_x19 + 0x380),0);
      lVar20 = *plVar24;
      if (lVar20 == 0) goto LAB_03566068;
      if (*(uint *)(lVar20 + 0x18) <= uVar27) goto LAB_035660f8;
      lVar20 = *(long *)(lVar20 + uVar27 * 8 + 0x20);
      if ((lVar20 == 0) || (fVar32 = fVar33, lVar20 = FUN_037b4844(lVar20,0), lVar20 == 0))
      goto LAB_03566068;
      fVar31 = (float)FUN_036dba50(lVar20,0);
      fVar33 = (fVar33 - fVar32) * (fVar33 - fVar32);
      param_2 = (ulong)(uint)fVar33;
      if (fVar6 <= (fVar30 - fVar31) * (fVar30 - fVar31) + fVar33) {
        lVar20 = *plVar24;
        if (lVar20 == 0) goto LAB_03566068;
        if (*(uint *)(lVar20 + 0x18) <= uVar27) goto LAB_035660f8;
        lVar20 = *(long *)(lVar20 + uVar27 * 8 + 0x20);
        if (lVar20 == 0) goto LAB_03566068;
        lVar20 = FUN_037b4844(lVar20,0);
        if ((*(long *)(unaff_x19 + 0x380) == 0) ||
           (FUN_036dba50(*(long *)(unaff_x19 + 0x380),0), lVar20 == 0)) goto LAB_03566068;
        FUN_036dbae0(lVar20,0);
      }
      lVar20 = *plVar24;
      if (lVar20 == 0) goto LAB_03566068;
      if (*(uint *)(lVar20 + 0x18) <= uVar27) goto LAB_035660f8;
      lVar20 = *(long *)(lVar20 + uVar27 * 8 + 0x20);
      if (lVar20 == 0) goto LAB_03566068;
      uVar14 = *(undefined8 *)(lVar20 + 0xf0);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar16 = FUN_036d35a8(uVar14,0,0);
      if ((uVar16 & 1) == 0) {
        lVar20 = *plVar24;
        if (lVar20 == 0) goto LAB_03566068;
        if (*(uint *)(lVar20 + 0x18) <= uVar27) goto LAB_035660f8;
        lVar20 = *(long *)(lVar20 + uVar27 * 8 + 0x20);
        if ((lVar20 == 0) || (lVar20 = *(long *)(lVar20 + 0xf0), lVar20 == 0)) goto LAB_03566068;
        iVar8 = FUN_036d3364(lVar20,0);
        lVar20 = *plVar15;
        if (*(int *)(lVar20 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar20);
          lVar20 = *plVar15;
        }
        lVar20 = **(long **)(lVar20 + 0xb8);
        if (lVar20 == 0) goto LAB_03566068;
        if (*(uint *)(lVar20 + 0x18) <= uVar27) goto LAB_035660f8;
        lVar20 = *(long *)(lVar20 + lVar13 + -0x1c);
        if (lVar20 == 0) goto LAB_03566068;
        iVar9 = FUN_036d3364(lVar20,0);
        if (iVar8 != iVar9) goto LAB_03565b98;
      }
      else {
LAB_03565b98:
        lVar20 = *plVar24;
        if (lVar20 == 0) goto LAB_03566068;
        if (*(uint *)(lVar20 + 0x18) <= uVar27) goto LAB_035660f8;
        lVar17 = *plVar15;
        lVar20 = *(long *)(lVar20 + uVar27 * 8 + 0x20);
        if (*(int *)(lVar17 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar17 = *plVar15;
        }
        lVar17 = **(long **)(lVar17 + 0xb8);
        if (lVar17 == 0) goto LAB_03566068;
        if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_035660f8;
        if (lVar20 == 0) goto LAB_03566068;
        thunk_FUN_0359e5ac(lVar20,*(undefined8 *)(lVar17 + lVar13 + -0x1c),0);
        lVar20 = *plVar24;
        if (lVar20 == 0) goto LAB_03566068;
        if (*(uint *)(lVar20 + 0x18) <= uVar27) goto LAB_035660f8;
        lVar17 = **(long **)(*plVar15 + 0xb8);
        if (lVar17 == 0) goto LAB_03566068;
        if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_035660f8;
        lVar20 = *(long *)(lVar20 + uVar27 * 8 + 0x20);
        if (lVar20 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar20 + 0xd8) = *(undefined8 *)(lVar17 + lVar13 + -0x2c);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar20 = *plVar24;
        if (lVar20 == 0) goto LAB_03566068;
        if (*(uint *)(lVar20 + 0x18) <= uVar27) goto LAB_035660f8;
        lVar17 = **(long **)(*plVar15 + 0xb8);
        if (lVar17 == 0) goto LAB_03566068;
        if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_035660f8;
        lVar20 = *(long *)(lVar20 + uVar27 * 8 + 0x20);
        if (lVar20 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar20 + 0xe0) = *(undefined8 *)(lVar17 + lVar13 + -0x24);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
      lVar20 = *plVar15;
      if (*(int *)(lVar20 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar20 = *plVar15;
      }
      lVar17 = **(long **)(lVar20 + 0xb8);
      if (lVar17 == 0) goto LAB_03566068;
      if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_035660f8;
      if (*(char *)(lVar17 + lVar13 + -0x13) != '\0') {
        lVar21 = *plVar24;
        if (lVar21 == 0) goto LAB_03566068;
        if (*(uint *)(lVar21 + 0x18) <= uVar27) goto LAB_035660f8;
        lVar21 = *(long *)(lVar21 + uVar27 * 8 + 0x20);
        if (*(int *)(lVar20 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar17 = **(long **)(*plVar15 + 0xb8);
          if (lVar17 == 0) goto LAB_03566068;
        }
        if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_035660f8;
        if (lVar21 == 0) goto LAB_03566068;
        FUN_0359e608(lVar21,*(undefined8 *)(lVar17 + lVar13 + -0x1c),0);
        lVar20 = *plVar24;
        if (lVar20 == 0) goto LAB_03566068;
        if (*(uint *)(lVar20 + 0x18) <= uVar27) goto LAB_035660f8;
        lVar17 = **(long **)(*plVar15 + 0xb8);
        if (lVar17 == 0) goto LAB_03566068;
        if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_035660f8;
        lVar20 = *(long *)(lVar20 + uVar27 * 8 + 0x20);
        if (lVar20 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar20 + 0x100) = *(undefined8 *)(lVar17 + lVar13 + -0xc);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar20 + 0x100);
      }
    }
    lVar20 = *plVar15;
    if (*(int *)(lVar20 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar20 = *plVar15;
    }
    lVar20 = **(long **)(lVar20 + 0xb8);
    if (lVar20 == 0) goto LAB_03566068;
    if (*(uint *)(lVar20 + 0x18) <= uVar27) goto LAB_035660f8;
    if ((*unaff_x20 == 0) || (lVar17 = *(long *)(*unaff_x20 + 0x60), lVar17 == 0))
    goto LAB_03566068;
    if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_035660f8;
    lVar21 = *(long *)(lVar17 + lVar12 + 0x30);
    iVar8 = *(int *)(lVar20 + lVar13);
    if (lVar21 == 0) {
      if (uVar27 == 0) {
        in_stack_00000118 = 0;
        in_stack_00000110 = 0;
        in_stack_00000128 = 0;
        in_stack_00000120 = 0;
        in_stack_000000f8 = 0;
        in_stack_000000f0 = 0;
        in_stack_00000108 = 0;
        in_stack_00000100 = 0;
        in_stack_000000e8 = 0;
        in_stack_000000e0 = 0;
        FUN_03595600(&stack0x000000e0,*(undefined8 *)(unaff_x19 + 0x3a0),iVar8 + 1,0);
        memcpy(&stack0x00000090,&stack0x000000e0,0x50);
        if (*(int *)(lVar17 + 0x18) == 0) goto LAB_035660f8;
        memcpy((void *)(lVar17 + lVar12 + 0x20),&stack0x00000090,0x50);
        __dest = (void *)(lVar17 + 0x20);
      }
      else {
        lVar20 = *plVar24;
        if (lVar20 == 0) goto LAB_03566068;
        if (*(uint *)(lVar20 + 0x18) <= uVar27) goto LAB_035660f8;
        lVar20 = *(long *)(lVar20 + uVar27 * 8 + 0x20);
        if (lVar20 == 0) goto LAB_03566068;
        uVar14 = UnityEngine_Material__GetColorArray(lVar20,0);
        in_stack_00000118 = 0;
        in_stack_00000110 = 0;
        in_stack_00000128 = 0;
        in_stack_00000120 = 0;
        in_stack_000000f8 = 0;
        in_stack_000000f0 = 0;
        in_stack_00000108 = 0;
        in_stack_00000100 = 0;
        in_stack_000000e8 = 0;
        in_stack_000000e0 = 0;
        FUN_03595600(&stack0x000000e0,uVar14,iVar8 + 1,0);
        memcpy(&stack0x00000040,&stack0x000000e0,0x50);
        if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_035660f8;
        __dest = (void *)(lVar17 + lVar12 + 0x20);
        memcpy(__dest,&stack0x00000040,0x50);
      }
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(__dest,0);
    }
    else {
      iVar9 = *(int *)(lVar21 + 0x18);
      if (iVar9 < iVar8 * 4) {
LAB_03565e08:
        if (iVar8 < 0x401) {
          iVar8 = FUN_036c1d60(iVar8 + 1,0);
        }
        else {
          iVar8 = iVar8 + 0x100;
        }
        if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_03595b9c(lVar17 + lVar12 + 0x20,iVar8,0);
      }
      else if ((0 < iVar8) && (*(char *)(unaff_x19 + 0x321) != '\0')) {
        iVar1 = iVar9 + 3;
        if (-1 < iVar9) {
          iVar1 = iVar9;
        }
        if (0x100 < (iVar1 >> 2) - iVar8) goto LAB_03565e08;
      }
    }
    plVar15 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if ((*unaff_x20 == 0) || (lVar20 = *(long *)(*unaff_x20 + 0x60), lVar20 == 0))
    goto LAB_03566068;
    lVar17 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar17 = *plVar15;
    }
    lVar17 = **(long **)(lVar17 + 0xb8);
    if (lVar17 == 0) goto LAB_03566068;
    if ((*(uint *)(lVar17 + 0x18) <= uVar27) || (*(uint *)(lVar20 + 0x18) <= uVar27))
    goto LAB_035660f8;
    *(undefined8 *)(lVar20 + lVar12 + 0x68) = *(undefined8 *)(lVar17 + lVar13 + -0x1c);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    uVar27 = uVar27 + 1;
    lVar12 = lVar12 + 0x50;
    lVar13 = lVar13 + 0x38;
    lVar29 = lVar29 + 8;
  } while (uVar10 != uVar27);
LAB_03565fb8:
  lVar12 = *plVar24;
  if (lVar12 != 0) {
    lVar13 = (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 | uVar22 << 3) + 0x20;
    do {
      uVar10 = (uint)uVar22;
      if ((int)*(uint *)(lVar12 + 0x18) <= (int)uVar10) {
LAB_03565748:
        return *(undefined4 *)(unaff_x19 + 0x490);
      }
      if (*(uint *)(lVar12 + 0x18) <= uVar10) {
LAB_035660f8:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar14 = *(undefined8 *)(lVar12 + lVar13);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar22 = FUN_036cee6c(uVar14,0,0);
      if ((uVar22 & 1) == 0) goto LAB_03565748;
      if ((*unaff_x20 == 0) || (lVar12 = *(long *)(*unaff_x20 + 0x60), lVar12 == 0)) break;
      if ((int)uVar10 < *(int *)(lVar12 + 0x18)) {
        lVar12 = *plVar24;
        if (lVar12 == 0) break;
        if (*(uint *)(lVar12 + 0x18) <= uVar10) goto LAB_035660f8;
        if ((*(long *)(lVar12 + lVar13) == 0) ||
           (lVar12 = FUN_037b514c(*(long *)(lVar12 + lVar13),0), lVar12 == 0)) break;
        FUN_0390f3a4(lVar12,0,0);
      }
      lVar12 = *plVar24;
      uVar22 = (ulong)(uVar10 + 1);
      lVar13 = lVar13 + 8;
    } while (lVar12 != 0);
  }
LAB_03566068:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


