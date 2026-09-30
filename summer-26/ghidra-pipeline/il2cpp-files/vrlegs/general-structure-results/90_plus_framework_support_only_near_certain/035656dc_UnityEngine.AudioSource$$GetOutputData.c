/*
FUNCTION_NAME: UnityEngine.AudioSource$$GetOutputData
ENTRY_POINT: 035656dc
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


undefined4 UnityEngine_AudioSource__GetOutputData(undefined1 param_1 [16],ulong param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  float fVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  void *__dest;
  uint in_w8;
  long lVar16;
  long in_x9;
  long lVar17;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar18;
  uint unaff_w22;
  long lVar19;
  long *plVar20;
  undefined8 unaff_x23;
  long *plVar21;
  undefined8 uVar22;
  long *unaff_x24;
  undefined8 uVar23;
  long *unaff_x25;
  ulong uVar24;
  long *unaff_x27;
  uint *puVar25;
  long lVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 in_stack_00000010;
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
  undefined8 in_stack_00000168;
  uint uStack00000000000001b8;
  undefined1 uStack00000000000001bc;
  
code_r0x035656dc:
  puVar12 = (undefined8 *)(in_x9 + (long)(int)in_w8 * 0x38 + 0x48);
  *puVar12 = unaff_x23;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar12,unaff_x23);
  *(undefined8 *)(unaff_x19 + 0x100) = in_stack_00000010;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x25);
  *(undefined8 *)(unaff_x19 + 0x118) = unaff_x23;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000028,unaff_x23);
  *(undefined4 *)(unaff_x19 + 0x120) = in_stack_00000030._4_4_;
LAB_03565718:
  uVar8 = *(uint *)(unaff_x19 + 0x490);
LAB_0356571c:
  do {
    *(uint *)(unaff_x19 + 0x490) = uVar8 + 1;
    do {
      uVar8 = *(uint *)(unaff_x21 + 0x18);
      unaff_w22 = unaff_w22 + 1;
      if ((int)uVar8 <= (int)unaff_w22) {
LAB_0356573c:
        if (*(char *)(unaff_x19 + 0x3f5) != '\0') {
          *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
          goto LAB_03565748;
        }
        lVar19 = *unaff_x20;
        if (lVar19 == 0) goto LAB_03566068;
        *(int *)(lVar19 + 0x1c) = in_stack_00000020._4_4_;
        lVar13 = *unaff_x24;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar13 = *unaff_x24;
        }
        lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
        if (lVar13 == 0) goto LAB_03566068;
        uVar8 = FUN_0219b384(lVar13,*(undefined8 *)PTR_DAT_03ceb270);
        *(uint *)(lVar19 + 0x34) = uVar8;
        if (*unaff_x20 == 0) goto LAB_03566068;
        plVar20 = (long *)(*unaff_x20 + 0x60);
        lVar19 = *plVar20;
        if (lVar19 == 0) goto LAB_03566068;
        uVar18 = (ulong)uVar8;
        if (*(int *)(lVar19 + 0x18) < (int)uVar8) {
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff02b8(plVar20,uVar18,0,*(undefined8 *)OVRPlugin_SpaceQueryResult_TypeInfo);
        }
        if (*(long *)(unaff_x19 + 0x708) == 0) goto LAB_03566068;
        plVar20 = (long *)(unaff_x19 + 0x708);
        if (*(int *)(*(long *)(unaff_x19 + 0x708) + 0x18) < (int)uVar8) {
          uVar9 = FUN_036c1d60(uVar8 + 1,0);
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*unaff_x27);
          }
          FUN_01ff025c(plVar20,uVar9,*(undefined8 *)OVRSystemPerfMetrics_PerfMetrics_TypeInfo);
        }
        if (*(char *)(unaff_x19 + 0x321) != '\0') {
          if (*unaff_x20 == 0) goto LAB_03566068;
          plVar21 = (long *)(*unaff_x20 + 0x38);
          lVar19 = *plVar21;
          if (lVar19 == 0) goto LAB_03566068;
          iVar10 = *(int *)(unaff_x19 + 0x490);
          if (0x100 < *(int *)(lVar19 + 0x18) - iVar10) {
            iVar11 = 0x100;
            if (0x100 < iVar10 + 1) {
              iVar11 = iVar10 + 1;
            }
            if (*(int *)(*unaff_x27 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_01ff02b8(plVar21,iVar11,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
            unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          }
        }
        fVar5 = DAT_00d38798;
        if ((int)uVar8 < 1) goto LAB_03565fb8;
        lVar19 = 0;
        uVar24 = 0;
        lVar13 = 0x54;
        lVar26 = 0x20;
        goto LAB_035658ec;
      }
      if (uVar8 <= unaff_w22) goto LAB_035660f8;
      puVar25 = (uint *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x20);
      if (*puVar25 == 0) goto LAB_0356573c;
      if (*unaff_x20 == 0) goto LAB_03566068;
      plVar20 = (long *)(*unaff_x20 + 0x38);
      lVar19 = *plVar20;
      iVar10 = *(int *)(unaff_x19 + 0x490);
      if ((lVar19 == 0) || (*(int *)(lVar19 + 0x18) <= iVar10)) {
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff02b8(plVar20,iVar10 + 1,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
        uVar8 = *(uint *)(unaff_x21 + 0x18);
      }
      if (uVar8 <= unaff_w22) goto LAB_035660f8;
      uVar8 = *puVar25;
      if ((uVar8 != 0x3c) || (*(char *)(unaff_x19 + 0x302) == '\0')) {
LAB_035649d0:
        uStack00000000000001bc = 0;
        in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0x100);
        unaff_x23 = *(undefined8 *)(unaff_x19 + 0x118);
        in_stack_00000030._4_4_ = *(undefined4 *)(unaff_x19 + 0x120);
        if (*(int *)(unaff_x19 + 0x644) != 0) goto LAB_03564aac;
        uVar7 = *(uint *)(unaff_x19 + 0x25c);
        if ((uVar7 >> 4 & 1) == 0) {
          if ((uVar7 >> 3 & 1) == 0) {
            if ((uVar7 >> 5 & 1) != 0) goto LAB_03564a00;
          }
          else {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar18 = FUN_026b8070(uVar8,0);
            if ((uVar18 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar8 = FUN_026b8594(uVar8,0);
              goto LAB_03564aa8;
            }
          }
        }
        else {
LAB_03564a00:
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar18 = FUN_026b812c(uVar8,0);
          if ((uVar18 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar8 = FUN_026b8410(uVar8,0);
LAB_03564aa8:
            uVar8 = uVar8 & 0xffff;
          }
        }
LAB_03564aac:
        lVar19 = FUN_03591848();
        if (lVar19 == 0) {
          iVar10 = FUN_035975f8();
          if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
          if (iVar10 == 0) {
            uVar7 = 0x25a1;
          }
          else {
            uVar7 = FUN_035975f8(0);
          }
          *puVar25 = uVar7;
          uVar22 = *(undefined8 *)(unaff_x19 + 0x100);
          uVar9 = *(undefined4 *)(unaff_x19 + 0x25c);
          uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
          if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          lVar19 = FUN_03570fc4(uVar7,uVar22,1,uVar9,uVar2,(long)&stack0x000001b8 + 4,0);
          if (lVar19 == 0) {
            lVar19 = FUN_03597770();
            if (lVar19 != 0) {
              lVar19 = FUN_03597770(0);
              if (lVar19 == 0) goto LAB_03566068;
              if (0 < *(int *)(lVar19 + 0x18)) {
                uVar23 = *(undefined8 *)(unaff_x19 + 0x100);
                uVar22 = FUN_03597770(0);
                uVar9 = *(undefined4 *)(unaff_x19 + 0x25c);
                uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
                }
                lVar19 = FUN_035714e4(uVar7,uVar23,uVar22,1,uVar9,uVar2,(long)&stack0x000001b8 + 4,0
                                     );
                if (lVar19 != 0) goto LAB_03564b5c;
              }
            }
            uVar22 = FUN_03597650(0);
            if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
              thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
            }
            uVar18 = FUN_036cee6c(uVar22,0,0);
            if ((uVar18 & 1) != 0) {
              uVar22 = FUN_03597650(0);
              uVar9 = *(undefined4 *)(unaff_x19 + 0x25c);
              uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
              if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
              }
              lVar19 = FUN_03570fc4(uVar7,uVar22,1,uVar9,uVar2,(long)&stack0x000001b8 + 4,0);
              if (lVar19 != 0) goto LAB_03564b5c;
            }
            if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
            *puVar25 = 0x20;
            uVar22 = *(undefined8 *)(unaff_x19 + 0x100);
            uVar9 = *(undefined4 *)(unaff_x19 + 0x25c);
            uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
            if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar7 = 0x20;
            lVar19 = FUN_03570fc4(0x20,uVar22,1,uVar9,uVar2,(long)&stack0x000001b8 + 4,0);
            if (lVar19 == 0) {
              if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
              *puVar25 = 3;
              uVar22 = *(undefined8 *)(unaff_x19 + 0x100);
              uVar9 = *(undefined4 *)(unaff_x19 + 0x25c);
              uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
              if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar7 = 3;
              lVar19 = FUN_03570fc4(3,uVar22,1,uVar9,uVar2,(long)&stack0x000001b8 + 4,0);
            }
          }
LAB_03564b5c:
          uVar18 = FUN_03597634(0);
          if ((uVar18 & 1) == 0) {
            plVar20 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,4);
            if ((int)uVar8 < 0x10000) {
              in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar8);
              lVar13 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0);
              if (plVar20 == (long *)0x0) goto LAB_03566068;
              if ((lVar13 != 0) &&
                 (lVar26 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar20 + 0x40)), lVar26 == 0)
                 ) goto LAB_035660fc;
              if ((int)plVar20[3] == 0) goto LAB_035660f8;
              plVar20[4] = lVar13;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar20 + 4,lVar13);
              if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03566068;
              lVar13 = FUN_036d3824(*(long *)(unaff_x19 + 0xf8),0);
              if ((lVar13 != 0) &&
                 (lVar26 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar20 + 0x40)), lVar26 == 0)
                 ) goto LAB_035660fc;
              if (*(uint *)(plVar20 + 3) < 2) goto LAB_035660f8;
              plVar20[5] = lVar13;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar20 + 5,lVar13);
              if (lVar19 == 0) goto LAB_03566068;
              in_stack_00000168._4_4_ = *(undefined4 *)(lVar19 + 0x14);
              lVar13 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,(long)&stack0x00000168 + 4
                                         );
              if ((lVar13 != 0) &&
                 (lVar26 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar20 + 0x40)), lVar26 == 0)
                 ) goto LAB_035660fc;
              if (*(uint *)(plVar20 + 3) < 3) goto LAB_035660f8;
              plVar20[6] = lVar13;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar20 + 6,lVar13);
              lVar13 = FUN_036d3824();
              if ((lVar13 != 0) &&
                 (lVar26 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar20 + 0x40)), lVar26 == 0)
                 ) goto LAB_035660fc;
              if (*(uint *)(plVar20 + 3) < 4) goto LAB_035660f8;
              plVar20[7] = lVar13;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar20 + 7,lVar13);
              puVar12 = (undefined8 *)OVRPlugin_TrackedKeyboardFlags_TypeInfo;
            }
            else {
              in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar8);
              lVar13 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0);
              if (plVar20 == (long *)0x0) goto LAB_03566068;
              if ((lVar13 != 0) &&
                 (lVar26 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar20 + 0x40)), lVar26 == 0)
                 ) goto LAB_035660fc;
              if ((int)plVar20[3] == 0) goto LAB_035660f8;
              plVar20[4] = lVar13;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar20 + 4,lVar13);
              if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03566068;
              lVar13 = FUN_036d3824(*(long *)(unaff_x19 + 0xf8),0);
              if ((lVar13 != 0) &&
                 (lVar26 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar20 + 0x40)), lVar26 == 0)
                 ) goto LAB_035660fc;
              if (*(uint *)(plVar20 + 3) < 2) goto LAB_035660f8;
              plVar20[5] = lVar13;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar20 + 5,lVar13);
              if (lVar19 == 0) goto LAB_03566068;
              in_stack_00000168._4_4_ = *(undefined4 *)(lVar19 + 0x14);
              lVar13 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,(long)&stack0x00000168 + 4
                                         );
              if ((lVar13 != 0) &&
                 (lVar26 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar20 + 0x40)), lVar26 == 0)
                 ) goto LAB_035660fc;
              if (*(uint *)(plVar20 + 3) < 3) goto LAB_035660f8;
              plVar20[6] = lVar13;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar20 + 6,lVar13);
              lVar13 = FUN_036d3824();
              if ((lVar13 != 0) &&
                 (lVar26 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar20 + 0x40)), lVar26 == 0)
                 ) goto LAB_035660fc;
              if (*(uint *)(plVar20 + 3) < 4) goto LAB_035660f8;
              plVar20[7] = lVar13;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar20 + 7,lVar13);
              puVar12 = (undefined8 *)OVRPlugin_TextureRectMatrixf_TypeInfo;
            }
            uVar22 = FUN_025be8f4(*puVar12,plVar20,0);
            if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_0367b470(uVar22);
            unaff_x25 = in_stack_00000038;
            uVar8 = uVar7;
          }
          else {
            unaff_x25 = in_stack_00000038;
            uVar8 = uVar7;
            if (lVar19 == 0) goto LAB_03566068;
          }
        }
        if (*(char *)(lVar19 + 0x10) == '\x01') {
          lVar13 = *(long *)(lVar19 + 0x18);
          if (lVar13 == 0) goto LAB_03566068;
          iVar10 = *(int *)(lVar13 + 0x18);
          if (iVar10 == 0) {
            iVar10 = FUN_036d3364(lVar13,0);
            *(int *)(lVar13 + 0x18) = iVar10;
          }
          lVar13 = *unaff_x25;
          if (lVar13 == 0) goto LAB_03566068;
          iVar11 = *(int *)(lVar13 + 0x18);
          if (iVar11 == 0) {
            iVar11 = FUN_036d3364(lVar13,0);
            *(int *)(lVar13 + 0x18) = iVar11;
          }
          if (iVar10 == iVar11) {
            bVar4 = false;
          }
          else {
            plVar20 = *(long **)(lVar19 + 0x18);
            if (plVar20 == (long *)0x0) {
              plVar20 = (long *)0x0;
              *unaff_x25 = 0;
            }
            else {
              lVar13 = *(long *)OVRPlugin_OVRP_1_83_0_TypeInfo;
              bVar3 = *(byte *)(lVar13 + 0x130);
              if (*(byte *)(*plVar20 + 0x130) < bVar3) {
                plVar21 = (long *)0x0;
              }
              else {
                plVar21 = plVar20;
                if (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar3 * 8 + -8) != lVar13) {
                  plVar21 = (long *)0x0;
                }
              }
              *unaff_x25 = (long)plVar21;
              if (*(byte *)(*plVar20 + 0x130) < bVar3) {
                plVar20 = (long *)0x0;
              }
              else if (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar3 * 8 + -8) != lVar13) {
                plVar20 = (long *)0x0;
              }
            }
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x25,plVar20);
            bVar4 = true;
          }
        }
        else {
          bVar4 = false;
        }
        if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 == 0))
        goto LAB_03566068;
        if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
        lVar13 = lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
        plVar20 = (long *)(lVar13 + 0x30);
        *plVar20 = lVar19;
        *(undefined4 *)(lVar13 + 0x2c) = 0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar20,lVar19);
        if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 == 0))
        goto LAB_03566068;
        uVar7 = *(uint *)(unaff_x19 + 0x490);
        if (*(uint *)(lVar13 + 0x18) <= uVar7) goto LAB_035660f8;
        lVar26 = lVar13 + (long)(int)uVar7 * 0x178;
        *(short *)(lVar26 + 0x20) = (short)uVar8;
        *(undefined1 *)(lVar26 + 0x5c) = uStack00000000000001bc;
        if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
        lVar13 = lVar13 + (long)(int)uVar7 * 0x178;
        *(undefined8 *)(lVar13 + 0x24) =
             *(undefined8 *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x24);
        *(long *)(lVar13 + 0x38) = *unaff_x25;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(char *)(lVar19 + 0x10) == '\x02') {
          plVar20 = *(long **)(lVar19 + 0x18);
          if (plVar20 == (long *)0x0) goto LAB_03566068;
          bVar3 = *(byte *)(*(long *)OVRPlugin_Sizei_TypeInfo + 0x130);
          if ((*(byte *)(*plVar20 + 0x130) < bVar3) ||
             (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar3 * 8 + -8) !=
              *(long *)OVRPlugin_Sizei_TypeInfo)) goto LAB_03566068;
          lVar26 = plVar20[4];
          lVar13 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar13 = *unaff_x24;
          }
          uVar8 = FUN_03558224(lVar26,plVar20,*(long *)(lVar13 + 0xb8),
                               *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8));
          *(uint *)(unaff_x19 + 0x120) = uVar8;
          lVar13 = **(long **)(*unaff_x24 + 0xb8);
          if (lVar13 == 0) goto LAB_03566068;
          if (*(uint *)(lVar13 + 0x18) <= uVar8) goto LAB_035660f8;
          lVar13 = lVar13 + (long)(int)uVar8 * 0x38;
          *(int *)(lVar13 + 0x54) = *(int *)(lVar13 + 0x54) + 1;
          if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 == 0))
          goto LAB_03566068;
          if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
          lVar13 = lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
          *(undefined4 *)(lVar13 + 0x2c) = 1;
          uVar9 = *(undefined4 *)(unaff_x19 + 0x120);
          *(undefined8 *)(lVar13 + 0x40) = plVar20;
          *(undefined4 *)(lVar13 + 0x58) = uVar9;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    ((undefined8 *)(lVar13 + 0x40),plVar20);
          unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if ((*(long *)(unaff_x19 + 0x368) == 0) ||
             (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar13 == 0))
          goto LAB_03566068;
          uVar8 = *(uint *)(unaff_x19 + 0x490);
          if (*(uint *)(lVar13 + 0x18) <= uVar8) goto LAB_035660f8;
          *(undefined4 *)(lVar13 + (long)(int)uVar8 * 0x178 + 0x48) = *(undefined4 *)(lVar19 + 0x28)
          ;
          *(undefined4 *)(unaff_x19 + 0x644) = 0;
          *(undefined4 *)(unaff_x19 + 0x120) = in_stack_00000030._4_4_;
          in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
          unaff_x25 = in_stack_00000038;
          unaff_x27 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
          goto LAB_0356571c;
        }
        if (bVar4) {
          lVar13 = *unaff_x25;
          if (lVar13 == 0) goto LAB_03566068;
          iVar10 = *(int *)(lVar13 + 0x18);
          if (iVar10 == 0) {
            iVar10 = FUN_036d3364(lVar13,0);
            *(int *)(lVar13 + 0x18) = iVar10;
          }
          lVar13 = *(long *)(unaff_x19 + 0xf8);
          if (lVar13 == 0) goto LAB_03566068;
          iVar11 = *(int *)(lVar13 + 0x18);
          if (iVar11 == 0) {
            iVar11 = FUN_036d3364(lVar13,0);
            *(int *)(lVar13 + 0x18) = iVar11;
          }
          if (iVar10 != iVar11) {
            uVar18 = FUN_0359778c(0);
            if ((uVar18 & 1) == 0) {
              if (*unaff_x25 == 0) goto LAB_03566068;
              uVar22 = *(undefined8 *)(*unaff_x25 + 0x20);
            }
            else {
              if (*unaff_x25 == 0) goto LAB_03566068;
              uVar23 = *(undefined8 *)(*unaff_x25 + 0x20);
              uVar22 = *in_stack_00000028;
              if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar22 = FUN_03594e9c(uVar22,uVar23,0);
              unaff_x25 = in_stack_00000038;
            }
            *in_stack_00000028 = uVar22;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000028);
            lVar13 = *unaff_x24;
            uVar22 = *in_stack_00000028;
            lVar26 = *unaff_x25;
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar13 = *unaff_x24;
            }
            uVar9 = FUN_03557fec(uVar22,lVar26,*(long *)(lVar13 + 0xb8),
                                 *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8));
            *(undefined4 *)(unaff_x19 + 0x120) = uVar9;
            unaff_x25 = in_stack_00000038;
          }
        }
        if (*(long *)(lVar19 + 0x20) == 0) goto LAB_03566068;
        iVar10 = FUN_03776eb8(*(long *)(lVar19 + 0x20),0);
        if (0 < iVar10) {
          if (*(long *)(lVar19 + 0x20) == 0) goto LAB_03566068;
          lVar13 = *unaff_x25;
          uVar22 = *in_stack_00000028;
          uVar9 = FUN_03776eb8(*(long *)(lVar19 + 0x20),0);
          if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)OVRPlugin_Sizef_TypeInfo);
          }
          uVar22 = FUN_03594928(lVar13,uVar22,uVar9,0);
          *in_stack_00000028 = uVar22;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    (in_stack_00000028,uVar22);
          lVar19 = *unaff_x24;
          uVar22 = *in_stack_00000028;
          lVar13 = *unaff_x25;
          if (*(int *)(lVar19 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar19 = *unaff_x24;
          }
          uVar9 = FUN_03557fec(uVar22,lVar13,*(long *)(lVar19 + 0xb8),
                               *(undefined8 *)(*(long *)(lVar19 + 0xb8) + 8));
          bVar4 = true;
          *(undefined4 *)(unaff_x19 + 0x120) = uVar9;
          unaff_x25 = in_stack_00000038;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar18 = FUN_026b63d8(uVar8,0);
        unaff_x27 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
        if ((uVar8 != 0x200b) && ((uVar18 & 1) == 0)) {
          lVar19 = *unaff_x24;
          if (*(int *)(lVar19 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar19);
            lVar19 = *unaff_x24;
          }
          lVar13 = **(long **)(lVar19 + 0xb8);
          if (lVar13 == 0) goto LAB_03566068;
          uVar8 = *(uint *)(unaff_x19 + 0x120);
          if (*(uint *)(lVar13 + 0x18) <= uVar8) goto LAB_035660f8;
          if (*(int *)(lVar13 + (long)(int)uVar8 * 0x38 + 0x54) < 0x3fff) {
            if (*(int *)(lVar19 + 0xe0) == 0) {
              thunk_FUN_01a58e78(lVar19);
              lVar13 = **(long **)(*unaff_x24 + 0xb8);
              if (lVar13 == 0) goto LAB_03566068;
              uVar8 = *(uint *)(unaff_x19 + 0x120);
            }
          }
          else {
            uVar23 = *in_stack_00000028;
            uVar22 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbea58);
            FUN_0369922c(uVar22,uVar23,0);
            lVar19 = *unaff_x24;
            lVar13 = *unaff_x25;
            if (*(int *)(lVar19 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar19 = *unaff_x24;
            }
            uVar8 = FUN_03557fec(uVar22,lVar13,*(long *)(lVar19 + 0xb8),
                                 *(undefined8 *)(*(long *)(lVar19 + 0xb8) + 8));
            *(uint *)(unaff_x19 + 0x120) = uVar8;
            lVar13 = **(long **)(*unaff_x24 + 0xb8);
            if (lVar13 == 0) goto LAB_03566068;
          }
          if (*(uint *)(lVar13 + 0x18) <= uVar8) goto LAB_035660f8;
          lVar13 = lVar13 + (long)(int)uVar8 * 0x38;
          *(int *)(lVar13 + 0x54) = *(int *)(lVar13 + 0x54) + 1;
        }
        if ((*unaff_x20 == 0) || (lVar19 = *(long *)(*unaff_x20 + 0x38), lVar19 == 0))
        goto LAB_03566068;
        if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
        *(undefined8 *)(lVar19 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x50) =
             *in_stack_00000028;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((*unaff_x20 == 0) || (lVar19 = *(long *)(*unaff_x20 + 0x38), lVar19 == 0))
        goto LAB_03566068;
        if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
        in_w8 = *(uint *)(unaff_x19 + 0x120);
        *(uint *)(lVar19 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x58) = in_w8;
        lVar19 = *unaff_x24;
        if (*(int *)(lVar19 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar19 = *unaff_x24;
          in_w8 = *(uint *)(unaff_x19 + 0x120);
        }
        in_x9 = **(long **)(lVar19 + 0xb8);
        if (in_x9 == 0) goto LAB_03566068;
        if (*(uint *)(in_x9 + 0x18) <= in_w8) goto LAB_035660f8;
        *(bool *)(in_x9 + (long)(int)in_w8 * 0x38 + 0x41) = bVar4;
        if (!bVar4) goto LAB_03565718;
        if (*(int *)(lVar19 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          in_x9 = **(long **)(*unaff_x24 + 0xb8);
          if (in_x9 == 0) goto LAB_03566068;
          in_w8 = *(uint *)(unaff_x19 + 0x120);
        }
        if (*(uint *)(in_x9 + 0x18) <= in_w8) goto LAB_035660f8;
        goto code_r0x035656dc;
      }
      uVar9 = *(undefined4 *)(unaff_x19 + 0x120);
      uVar18 = FUN_03586568();
      uVar7 = uStack00000000000001b8;
      if ((uVar18 & 1) == 0) goto LAB_035649d0;
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
      iVar10 = *(int *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x24);
      if ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0) {
        *(undefined1 *)(unaff_x19 + 0x26a) = 1;
      }
      puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      unaff_w22 = uStack00000000000001b8;
    } while (*(int *)(unaff_x19 + 0x644) != 1);
    lVar19 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar19 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar19 = *(long *)puVar6;
    }
    lVar19 = **(long **)(lVar19 + 0xb8);
    if (lVar19 == 0) goto LAB_03566068;
    if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x19 + 0x120)) goto LAB_035660f8;
    lVar19 = lVar19 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38;
    *(int *)(lVar19 + 0x54) = *(int *)(lVar19 + 0x54) + 1;
    if ((*unaff_x20 == 0) || (lVar19 = *(long *)(*unaff_x20 + 0x38), lVar19 == 0))
    goto LAB_03566068;
    if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
    uVar2 = *(undefined4 *)(unaff_x19 + 0x6a4);
    lVar19 = lVar19 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
    *(short *)(lVar19 + 0x20) = (short)uVar2 + -0x2000;
    *(undefined4 *)(lVar19 + 0x48) = uVar2;
    *(long *)(lVar19 + 0x38) = *in_stack_00000038;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*unaff_x20 == 0) || (lVar19 = *(long *)(*unaff_x20 + 0x38), lVar19 == 0))
    goto LAB_03566068;
    if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
    *(undefined8 *)(lVar19 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x40) =
         *(undefined8 *)(unaff_x19 + 0x698);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*unaff_x20 == 0) || (lVar19 = *(long *)(*unaff_x20 + 0x38), lVar19 == 0))
    goto LAB_03566068;
    uVar8 = *(uint *)(unaff_x19 + 0x490);
    if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_035660f8;
    *(undefined4 *)(lVar19 + (long)(int)uVar8 * 0x178 + 0x58) = *(undefined4 *)(unaff_x19 + 0x120);
    if ((*(long *)(unaff_x19 + 0x698) == 0) ||
       (lVar13 = UnityEngine_Material__DisableKeyword(*(long *)(unaff_x19 + 0x698),0), lVar13 == 0))
    goto LAB_03566068;
    FUN_02215a88(lVar13,*(undefined4 *)(unaff_x19 + 0x6a4),&stack0x000000e0,
                 *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
    if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_035660f8;
    *(undefined8 *)(lVar19 + (long)(int)uVar8 * 0x178 + 0x30) = in_stack_000000e0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*unaff_x20 == 0) || (lVar19 = *(long *)(*unaff_x20 + 0x38), lVar19 == 0))
    goto LAB_03566068;
    uVar8 = *(uint *)(unaff_x19 + 0x490);
    if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_035660f8;
    uVar2 = *(undefined4 *)(unaff_x19 + 0x644);
    lVar13 = lVar19 + (long)(int)uVar8 * 0x178;
    *(int *)(lVar13 + 0x24) = iVar10;
    *(undefined4 *)(lVar13 + 0x2c) = uVar2;
    if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_035660f8;
    *(int *)(lVar19 + (long)(int)uVar8 * 0x178 + 0x28) =
         (*(int *)(unaff_x21 + (long)(int)uVar7 * 0xc + 0x24) - iVar10) + 1;
    *(undefined4 *)(unaff_x19 + 0x644) = 0;
    *(undefined4 *)(unaff_x19 + 0x120) = uVar9;
    in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
    unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    unaff_x25 = in_stack_00000038;
    unaff_w22 = uVar7;
  } while( true );
LAB_035658ec:
  do {
    fVar30 = (float)param_2;
    if (uVar24 != 0) {
      lVar16 = *plVar20;
      if (lVar16 == 0) goto LAB_03566068;
      if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_035660f8;
      uVar22 = *(undefined8 *)(lVar16 + uVar24 * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar14 = FUN_036d35a8(uVar22,0,0);
      if ((uVar14 & 1) != 0) {
        lVar16 = *unaff_x24;
        plVar21 = (long *)*plVar20;
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar16 = *unaff_x24;
        }
        lVar16 = **(long **)(lVar16 + 0xb8);
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_035660f8;
        lVar16 = lVar16 + lVar13;
        in_stack_00000160 = *(undefined8 *)(lVar16 + -4);
        in_stack_00000158 = *(undefined8 *)(lVar16 + -0xc);
        in_stack_00000150 = *(undefined8 *)(lVar16 + -0x14);
        in_stack_00000148 = *(undefined8 *)(lVar16 + -0x1c);
        uVar22 = *(undefined8 *)(lVar16 + -0x24);
        in_stack_00000138 = *(undefined8 *)(lVar16 + -0x2c);
        in_stack_00000130 = *(undefined8 *)(lVar16 + -0x34);
        in_stack_00000140 = uVar22;
        lVar16 = FUN_0359e964();
        fVar30 = (float)uVar22;
        if (plVar21 == (long *)0x0) goto LAB_03566068;
        if ((lVar16 != 0) &&
           (lVar15 = thunk_FUN_01a89d6c(lVar16,*(undefined8 *)(*plVar21 + 0x40)), lVar15 == 0)) {
LAB_035660fc:
          uVar22 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar22,0);
        }
        if (*(uint *)(plVar21 + 3) <= uVar24) goto LAB_035660f8;
        plVar21[uVar24 + 4] = lVar16;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((long)plVar21 + lVar26,lVar16);
        unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if ((*unaff_x20 == 0) || (lVar16 = *(long *)(*unaff_x20 + 0x60), lVar16 == 0))
        goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_035660f8;
        puVar12 = (undefined8 *)(lVar16 + lVar19 + 0x30);
        *puVar12 = 0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar12,0);
      }
      if (*(long *)(unaff_x19 + 0x380) == 0) goto LAB_03566068;
      fVar27 = (float)FUN_036dba50(*(long *)(unaff_x19 + 0x380),0);
      lVar16 = *plVar20;
      if (lVar16 == 0) goto LAB_03566068;
      if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_035660f8;
      lVar16 = *(long *)(lVar16 + uVar24 * 8 + 0x20);
      if ((lVar16 == 0) || (fVar29 = fVar30, lVar16 = FUN_037b4844(lVar16,0), lVar16 == 0))
      goto LAB_03566068;
      fVar28 = (float)FUN_036dba50(lVar16,0);
      fVar30 = (fVar30 - fVar29) * (fVar30 - fVar29);
      param_2 = (ulong)(uint)fVar30;
      if (fVar5 <= (fVar27 - fVar28) * (fVar27 - fVar28) + fVar30) {
        lVar16 = *plVar20;
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_035660f8;
        lVar16 = *(long *)(lVar16 + uVar24 * 8 + 0x20);
        if (lVar16 == 0) goto LAB_03566068;
        lVar16 = FUN_037b4844(lVar16,0);
        if ((*(long *)(unaff_x19 + 0x380) == 0) ||
           (FUN_036dba50(*(long *)(unaff_x19 + 0x380),0), lVar16 == 0)) goto LAB_03566068;
        FUN_036dbae0(lVar16,0);
      }
      lVar16 = *plVar20;
      if (lVar16 == 0) goto LAB_03566068;
      if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_035660f8;
      lVar16 = *(long *)(lVar16 + uVar24 * 8 + 0x20);
      if (lVar16 == 0) goto LAB_03566068;
      uVar22 = *(undefined8 *)(lVar16 + 0xf0);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar14 = FUN_036d35a8(uVar22,0,0);
      if ((uVar14 & 1) == 0) {
        lVar16 = *plVar20;
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_035660f8;
        lVar16 = *(long *)(lVar16 + uVar24 * 8 + 0x20);
        if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0xf0), lVar16 == 0)) goto LAB_03566068;
        iVar10 = FUN_036d3364(lVar16,0);
        lVar16 = *unaff_x24;
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar16);
          lVar16 = *unaff_x24;
        }
        lVar16 = **(long **)(lVar16 + 0xb8);
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_035660f8;
        lVar16 = *(long *)(lVar16 + lVar13 + -0x1c);
        if (lVar16 == 0) goto LAB_03566068;
        iVar11 = FUN_036d3364(lVar16,0);
        if (iVar10 != iVar11) goto LAB_03565b98;
      }
      else {
LAB_03565b98:
        lVar16 = *plVar20;
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_035660f8;
        lVar15 = *unaff_x24;
        lVar16 = *(long *)(lVar16 + uVar24 * 8 + 0x20);
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar15 = *unaff_x24;
        }
        lVar15 = **(long **)(lVar15 + 0xb8);
        if (lVar15 == 0) goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_035660f8;
        if (lVar16 == 0) goto LAB_03566068;
        thunk_FUN_0359e5ac(lVar16,*(undefined8 *)(lVar15 + lVar13 + -0x1c),0);
        lVar16 = *plVar20;
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_035660f8;
        lVar15 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar15 == 0) goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_035660f8;
        lVar16 = *(long *)(lVar16 + uVar24 * 8 + 0x20);
        if (lVar16 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar16 + 0xd8) = *(undefined8 *)(lVar15 + lVar13 + -0x2c);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar16 = *plVar20;
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_035660f8;
        lVar15 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar15 == 0) goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_035660f8;
        lVar16 = *(long *)(lVar16 + uVar24 * 8 + 0x20);
        if (lVar16 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar16 + 0xe0) = *(undefined8 *)(lVar15 + lVar13 + -0x24);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
      lVar16 = *unaff_x24;
      if (*(int *)(lVar16 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar16 = *unaff_x24;
      }
      lVar15 = **(long **)(lVar16 + 0xb8);
      if (lVar15 == 0) goto LAB_03566068;
      if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_035660f8;
      if (*(char *)(lVar15 + lVar13 + -0x13) != '\0') {
        lVar17 = *plVar20;
        if (lVar17 == 0) goto LAB_03566068;
        if (*(uint *)(lVar17 + 0x18) <= uVar24) goto LAB_035660f8;
        lVar17 = *(long *)(lVar17 + uVar24 * 8 + 0x20);
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar15 = **(long **)(*unaff_x24 + 0xb8);
          if (lVar15 == 0) goto LAB_03566068;
        }
        if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_035660f8;
        if (lVar17 == 0) goto LAB_03566068;
        FUN_0359e608(lVar17,*(undefined8 *)(lVar15 + lVar13 + -0x1c),0);
        lVar16 = *plVar20;
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_035660f8;
        lVar15 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar15 == 0) goto LAB_03566068;
        if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_035660f8;
        lVar16 = *(long *)(lVar16 + uVar24 * 8 + 0x20);
        if (lVar16 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar16 + 0x100) = *(undefined8 *)(lVar15 + lVar13 + -0xc);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar16 + 0x100);
      }
    }
    lVar16 = *unaff_x24;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar16 = *unaff_x24;
    }
    lVar16 = **(long **)(lVar16 + 0xb8);
    if (lVar16 == 0) goto LAB_03566068;
    if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_035660f8;
    if ((*unaff_x20 == 0) || (lVar15 = *(long *)(*unaff_x20 + 0x60), lVar15 == 0))
    goto LAB_03566068;
    if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_035660f8;
    lVar17 = *(long *)(lVar15 + lVar19 + 0x30);
    iVar10 = *(int *)(lVar16 + lVar13);
    if (lVar17 == 0) {
      if (uVar24 == 0) {
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
        FUN_03595600(&stack0x000000e0,*(undefined8 *)(unaff_x19 + 0x3a0),iVar10 + 1,0);
        memcpy(&stack0x00000090,&stack0x000000e0,0x50);
        if (*(int *)(lVar15 + 0x18) == 0) goto LAB_035660f8;
        memcpy((void *)(lVar15 + lVar19 + 0x20),&stack0x00000090,0x50);
        __dest = (void *)(lVar15 + 0x20);
      }
      else {
        lVar16 = *plVar20;
        if (lVar16 == 0) goto LAB_03566068;
        if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_035660f8;
        lVar16 = *(long *)(lVar16 + uVar24 * 8 + 0x20);
        if (lVar16 == 0) goto LAB_03566068;
        uVar22 = UnityEngine_Material__GetColorArray(lVar16,0);
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
        FUN_03595600(&stack0x000000e0,uVar22,iVar10 + 1,0);
        memcpy(&stack0x00000040,&stack0x000000e0,0x50);
        if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_035660f8;
        __dest = (void *)(lVar15 + lVar19 + 0x20);
        memcpy(__dest,&stack0x00000040,0x50);
      }
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(__dest,0);
    }
    else {
      iVar11 = *(int *)(lVar17 + 0x18);
      if (iVar11 < iVar10 * 4) {
LAB_03565e08:
        if (iVar10 < 0x401) {
          iVar10 = FUN_036c1d60(iVar10 + 1,0);
        }
        else {
          iVar10 = iVar10 + 0x100;
        }
        if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_03595b9c(lVar15 + lVar19 + 0x20,iVar10,0);
      }
      else if ((0 < iVar10) && (*(char *)(unaff_x19 + 0x321) != '\0')) {
        iVar1 = iVar11 + 3;
        if (-1 < iVar11) {
          iVar1 = iVar11;
        }
        if (0x100 < (iVar1 >> 2) - iVar10) goto LAB_03565e08;
      }
    }
    unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if ((*unaff_x20 == 0) || (lVar16 = *(long *)(*unaff_x20 + 0x60), lVar16 == 0))
    goto LAB_03566068;
    lVar15 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar15 = *unaff_x24;
    }
    lVar15 = **(long **)(lVar15 + 0xb8);
    if (lVar15 == 0) goto LAB_03566068;
    if ((*(uint *)(lVar15 + 0x18) <= uVar24) || (*(uint *)(lVar16 + 0x18) <= uVar24))
    goto LAB_035660f8;
    *(undefined8 *)(lVar16 + lVar19 + 0x68) = *(undefined8 *)(lVar15 + lVar13 + -0x1c);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    uVar24 = uVar24 + 1;
    lVar19 = lVar19 + 0x50;
    lVar13 = lVar13 + 0x38;
    lVar26 = lVar26 + 8;
  } while (uVar8 != uVar24);
LAB_03565fb8:
  lVar19 = *plVar20;
  if (lVar19 != 0) {
    lVar13 = (-(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | uVar18 << 3) + 0x20;
    do {
      uVar8 = (uint)uVar18;
      if ((int)*(uint *)(lVar19 + 0x18) <= (int)uVar8) {
LAB_03565748:
        return *(undefined4 *)(unaff_x19 + 0x490);
      }
      if (*(uint *)(lVar19 + 0x18) <= uVar8) {
LAB_035660f8:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar22 = *(undefined8 *)(lVar19 + lVar13);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar18 = FUN_036cee6c(uVar22,0,0);
      if ((uVar18 & 1) == 0) goto LAB_03565748;
      if ((*unaff_x20 == 0) || (lVar19 = *(long *)(*unaff_x20 + 0x60), lVar19 == 0)) break;
      if ((int)uVar8 < *(int *)(lVar19 + 0x18)) {
        lVar19 = *plVar20;
        if (lVar19 == 0) break;
        if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_035660f8;
        if ((*(long *)(lVar19 + lVar13) == 0) ||
           (lVar19 = FUN_037b514c(*(long *)(lVar19 + lVar13),0), lVar19 == 0)) break;
        FUN_0390f3a4(lVar19,0,0);
      }
      lVar19 = *plVar20;
      uVar18 = (ulong)(uVar8 + 1);
      lVar13 = lVar13 + 8;
    } while (lVar19 != 0);
  }
LAB_03566068:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


