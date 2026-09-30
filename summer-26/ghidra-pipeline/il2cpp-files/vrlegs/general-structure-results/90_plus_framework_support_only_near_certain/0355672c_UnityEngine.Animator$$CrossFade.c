/*
FUNCTION_NAME: UnityEngine.Animator$$CrossFade
ENTRY_POINT: 0355672c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 169
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_18;weak_xr_or_state_hits_18;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_6;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_6
*/


void UnityEngine_Animator__CrossFade
               (float param_1,undefined1 param_2 [16],ulong param_3,ulong param_4)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  char cVar17;
  long lVar18;
  code *pcVar19;
  long lVar20;
  long *unaff_x19;
  int *unaff_x20;
  uint unaff_w21;
  undefined8 uVar21;
  long *plVar22;
  long unaff_x22;
  long unaff_x23;
  long lVar23;
  long unaff_x24;
  long lVar24;
  uint unaff_w25;
  long unaff_x27;
  long *unaff_x28;
  uint uVar25;
  long unaff_x29;
  undefined4 uVar26;
  undefined8 uVar27;
  ulong uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float unaff_s8;
  float fVar33;
  float fVar34;
  float fVar35;
  float unaff_s11;
  float fVar36;
  float fVar37;
  float unaff_s14;
  float unaff_s15;
  uint uStack0000000000000028;
  float fStack000000000000002c;
  int iStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  float in_stack_00000040;
  int *in_stack_00000048;
  undefined8 in_stack_00000050;
  int in_stack_00000058;
  undefined8 in_stack_00000068;
  float fStack0000000000000070;
  uint uStack0000000000000074;
  uint in_stack_00000078;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined4 in_stack_00000090;
  uint uStack0000000000000098;
  float fStack000000000000009c;
  uint in_stack_000000a0;
  float in_stack_000000a8;
  undefined8 in_stack_000000b8;
  uint uStack00000000000000c0;
  float fStack00000000000000c4;
  float in_stack_000000c8;
  float fStack00000000000000d0;
  int iStack00000000000000d4;
  float fStack00000000000000d8;
  float fStack00000000000000dc;
  long in_stack_000000e0;
  undefined8 in_stack_000000e8;
  long in_stack_000000f0;
  undefined8 in_stack_000000f8;
  float fStack0000000000000100;
  float fStack0000000000000104;
  long in_stack_00000108;
  undefined8 in_stack_00000110;
  uint uStack0000000000000118;
  uint uStack000000000000011c;
  long in_stack_00000120;
  int in_stack_00000128;
  long in_stack_00000150;
  uint uStack0000000000000158;
  uint uStack000000000000015c;
  uint in_stack_00000160;
  undefined8 in_stack_00000168;
  long *in_stack_00000170;
  undefined8 in_stack_00000178;
  float fStack0000000000000180;
  float fStack0000000000000184;
  float in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  float in_stack_000001a0;
  undefined8 in_stack_000017b0;
  undefined8 in_stack_000017b8;
  float in_stack_000017c0;
  undefined4 in_stack_000017c4;
  
  uVar12 = uStack000000000000015c;
code_r0x0355672c:
  uStack000000000000015c = uVar12;
  uVar28 = (ulong)(uint)in_stack_00000038;
  uVar14 = FUN_03567bac(param_1 + unaff_s8,uVar28,0);
  uVar12 = uStack000000000000015c;
  if ((uVar14 & 1) != 0) {
    iVar10 = *unaff_x20;
    goto LAB_03556744;
  }
  lVar15 = *unaff_x28;
  if (lVar15 != 0) {
LAB_035568bc:
    uStack000000000000015c = uVar12;
    lVar15 = *(long *)(lVar15 + 0x38);
    if (lVar15 != 0) {
      if ((int)unaff_w25 <= (int)(uint)in_stack_00000150) {
        bVar9 = *(uint *)(lVar15 + 0x18) <= unaff_w25;
        goto FUN_035568e8;
      }
      lVar24 = in_stack_00000150;
      if ((uint)in_stack_00000150 < *(uint *)(lVar15 + 0x18)) {
LAB_035568f0:
        do {
          lVar15 = lVar15 + lVar24 * unaff_x22;
          fVar34 = *(float *)(lVar15 + 0x14c);
          uVar13 = *(uint *)(lVar15 + 0x128);
          pcVar19 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0355690c:
          fVar36 = unaff_s11 * in_stack_000000a8;
LAB_03556914:
          param_4 = (ulong)uVar13;
          uVar28 = (ulong)(uint)fStack000000000000009c;
          param_3 = (ulong)uStack0000000000000098;
          (*pcVar19)(in_stack_000000a0,uVar28,param_3,param_4,fVar36 + fVar34,0,in_stack_000000a8,
                     in_stack_000000a8);
          uVar12 = uStack000000000000015c;
LAB_03556948:
          uStack000000000000015c = uVar12;
          bVar9 = false;
          uVar13 = in_stack_00000160;
LAB_0355694c:
          if ((*unaff_x28 == 0) || (lVar15 = *(long *)(*unaff_x28 + 0x38), lVar15 == 0))
          goto LAB_035574b8;
          uVar12 = (uint)*(undefined8 *)(lVar15 + 0x18);
          if (uVar12 <= unaff_w25) break;
          if ((*(byte *)(lVar15 + unaff_x24 * unaff_x22 + 0x191) >> 1 & 1) == 0) {
            if ((in_stack_00000110._4_4_ & 1) != 0) {
              param_3 = (ulong)uStack00000000000000c0;
              uVar28 = (ulong)(uint)fStack00000000000000dc;
              param_4 = (ulong)(uint)in_stack_000000c8;
              (**(code **)(*unaff_x19 + 0x8e8))
                        (fStack00000000000000d8,uVar28,param_3,param_4,fStack00000000000000d0,
                         param_3);
            }
LAB_035569b4:
            in_stack_00000110._4_4_ = 0;
          }
          else {
            if ((((int)unaff_x19[0x65] < (int)unaff_w25) || ((int)unaff_x19[0x66] < (int)uVar13)) ||
               (((int)unaff_x19[0x5c] == 5 &&
                (*(int *)(lVar15 + unaff_x24 * unaff_x22 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            uVar25 = (uint)in_stack_00000150;
            if ((in_stack_00000110._4_4_ & 1) == 0) {
              if ((((in_stack_00000168._4_4_ == 0xd) || ((in_stack_00000168._4_4_ & 0xfffe) == 10))
                  || ((int)uVar25 < (int)unaff_w25)) || (!bVar1)) goto LAB_035569b4;
              if (unaff_w25 == uVar25) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar14 = FUN_026b97f8(in_stack_00000168._4_4_,0);
                if ((uVar14 & 1) != 0) goto LAB_035569b4;
              }
              puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
              lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar24 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar24 = *(long *)puVar7;
              }
              unaff_x22 = 0x178;
              if ((*unaff_x28 == 0) || (lVar15 = *(long *)(*unaff_x28 + 0x38), lVar15 == 0))
              goto LAB_035574b8;
              uVar12 = (uint)*(undefined8 *)(lVar15 + 0x18);
              if (uVar12 <= unaff_w25) break;
              lVar24 = *(long *)(lVar24 + 0xb8);
              lVar23 = lVar15 + unaff_x24 * 0x178;
              in_stack_000017b8 = *(undefined8 *)(lVar23 + 0x184);
              in_stack_000017b0 = *(undefined8 *)(lVar23 + 0x17c);
              fStack00000000000000d8 = *(float *)(lVar24 + 0x1598);
              fStack00000000000000dc = *(float *)(lVar24 + 0x159c);
              in_stack_000017c0 = *(float *)(lVar23 + 0x18c);
              in_stack_000000c8 = *(float *)(lVar24 + 0x15a0);
              fStack00000000000000d0 = *(float *)(lVar24 + 0x15a4);
              uStack00000000000000c0 = 0;
            }
            if (uVar12 <= unaff_w25) break;
            lVar15 = lVar15 + unaff_x24 * unaff_x22;
            fVar36 = *(float *)(lVar15 + 0x128);
            fVar30 = *(float *)(lVar15 + 0x188);
            uVar21 = *(undefined8 *)(lVar15 + 0x17c);
            fVar33 = *(float *)(lVar15 + 0x184);
            uVar27 = *(undefined8 *)(lVar15 + 0x184);
            fVar32 = *(float *)(lVar15 + 0x18c);
            fVar34 = *(float *)(lVar15 + 0x11c);
            fVar31 = *(float *)(lVar15 + 0x148);
            fVar29 = *(float *)(lVar15 + 0x150);
            in_stack_00000178 = uVar21;
            fStack0000000000000180 = fVar33;
            fStack0000000000000184 = fVar30;
            in_stack_00000188 = fVar32;
            in_stack_00000190 = in_stack_000017b0;
            in_stack_00000198 = in_stack_000017b8;
            in_stack_000001a0 = in_stack_000017c0;
            uVar14 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
            lVar15 = *(long *)OVRPlugin_Mesh_TypeInfo;
            if ((uVar14 & 1) == 0) {
              if (*(int *)(lVar15 + 0xe0) == 0) {
                thunk_FUN_01a58e78(lVar15);
              }
              fVar36 = fVar36 + (float)in_stack_000017b8;
              param_3 = (ulong)(uint)fVar36;
              fVar34 = fVar34 - (float)((ulong)in_stack_000017b0 >> 0x20);
              fVar29 = fVar29 - in_stack_000017c0;
              uVar28 = (ulong)(uint)fVar29;
              fVar31 = fVar31 + (float)((ulong)in_stack_000017b8 >> 0x20);
              param_4 = (ulong)(uint)fVar31;
              if (fVar34 <= fStack00000000000000d8) {
                fStack00000000000000d8 = fVar34;
              }
              if (fVar29 <= fStack00000000000000dc) {
                fStack00000000000000dc = fVar29;
              }
              if (in_stack_000000c8 <= fVar36) {
                in_stack_000000c8 = fVar36;
              }
              if (fStack00000000000000d0 <= fVar31) {
                fStack00000000000000d0 = fVar31;
              }
            }
            else {
              if (*(int *)(lVar15 + 0xe0) == 0) {
                thunk_FUN_01a58e78(lVar15);
              }
              fVar34 = (fVar34 + (in_stack_000000c8 - (float)in_stack_000017b8)) * 0.5;
              param_4 = (ulong)(uint)fVar34;
              if (fVar29 <= fStack00000000000000dc) {
                fStack00000000000000dc = fVar29;
              }
              uVar28 = (ulong)(uint)fStack00000000000000dc;
              param_3 = (ulong)uStack00000000000000c0;
              if (fStack00000000000000d0 <= fVar31) {
                fStack00000000000000d0 = fVar31;
              }
              (**(code **)(*unaff_x19 + 0x8e8))
                        (fStack00000000000000d8,uVar28,param_3,param_4,fStack00000000000000d0,
                         param_3);
              fStack00000000000000dc = fVar29 - fVar32;
              in_stack_000000c8 = fVar36 + fVar33;
              uStack00000000000000c0 = 0;
              fStack00000000000000d0 = fVar31 + fVar30;
              fStack00000000000000d8 = fVar34;
              in_stack_000017b0 = uVar21;
              in_stack_000017b8 = uVar27;
              in_stack_000017c0 = fVar32;
            }
            unaff_x22 = 0x178;
            if (((*unaff_x20 == 1) || (unaff_w25 == (uint)in_stack_000000e0)) ||
               (((int)uVar25 <= (int)unaff_w25 || (!bVar1)))) {
              param_3 = (ulong)uStack00000000000000c0;
              uVar28 = (ulong)(uint)fStack00000000000000dc;
              param_4 = (ulong)(uint)in_stack_000000c8;
              (**(code **)(*unaff_x19 + 0x8e8))
                        (fStack00000000000000d8,uVar28,param_3,param_4,fStack00000000000000d0,
                         param_3);
              in_stack_00000110._4_4_ = 0;
            }
            else {
              in_stack_00000110._4_4_ = 1;
            }
          }
          puVar7 = OVRPlugin_Media_TypeInfo;
          iVar10 = *unaff_x20;
          uVar12 = uStack000000000000015c + 1;
          unaff_x27 = unaff_x27 + 0x178;
          in_stack_00000128 = in_stack_00000128 + 1;
          if (iVar10 <= (int)uStack000000000000015c) {
            lVar15 = *unaff_x28;
            if (lVar15 == 0) goto LAB_035574b8;
            *(int *)(lVar15 + 0x18) = iVar10;
            lVar24 = unaff_x19[0xd4];
            *(uint *)(lVar15 + 0x2c) = uVar13 + 1;
            if (iVar10 < 1 || iStack00000000000000d4 == 0) {
              iStack00000000000000d4 = 1;
            }
            *(int *)(lVar15 + 0x1c) = (int)lVar24;
            *(int *)(lVar15 + 0x24) = iStack00000000000000d4;
            *(int *)(lVar15 + 0x30) = (int)unaff_x19[0x96] + 1;
            if (((int)unaff_x19[99] != 0xff) ||
               (uVar14 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar14 & 1) == 0)) goto LAB_03554724;
            lVar15 = unaff_x19[0xdf];
            if (lVar15 != 0) {
              (**(code **)(lVar15 + 0x18))
                        (*(undefined8 *)(lVar15 + 0x40),*unaff_x28,*(undefined8 *)(lVar15 + 0x28));
            }
            if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
            iVar10 = FUN_03911ee4(unaff_x19[0xe5],0);
            if (iVar10 != 0x19) {
              lVar15 = unaff_x19[0xe5];
              if (lVar15 == 0) goto LAB_035574b8;
              uVar12 = FUN_03911ee4(lVar15,0);
              FUN_03911f20(lVar15,uVar12 | 0x19,0);
            }
            if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
              if ((*unaff_x28 == 0) || (lVar15 = *(long *)(*unaff_x28 + 0x60), lVar15 == 0))
              goto LAB_035574b8;
              if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              if (*(int *)(lVar15 + 0x18) == 0) break;
              FUN_03596b20(lVar15 + 0x20,1,0);
            }
            if (unaff_x19[0x74] == 0) goto LAB_035574b8;
            FUN_036aa790(unaff_x19[0x74],0);
            if ((unaff_x19[0x6d] == 0) || (lVar15 = *(long *)(unaff_x19[0x6d] + 0x60), lVar15 == 0))
            goto LAB_035574b8;
            if (*(int *)(lVar15 + 0x18) == 0) break;
            if (unaff_x19[0x74] == 0) goto LAB_035574b8;
            FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar15 + 0x30),0);
            if ((unaff_x19[0x6d] == 0) || (lVar15 = *(long *)(unaff_x19[0x6d] + 0x60), lVar15 == 0))
            goto LAB_035574b8;
            if (*(int *)(lVar15 + 0x18) == 0) break;
            if (unaff_x19[0x74] == 0) goto LAB_035574b8;
            FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar15 + 0x48),0);
            if ((unaff_x19[0x6d] == 0) || (lVar15 = *(long *)(unaff_x19[0x6d] + 0x60), lVar15 == 0))
            goto LAB_035574b8;
            if (*(int *)(lVar15 + 0x18) == 0) break;
            if (unaff_x19[0x74] == 0) goto LAB_035574b8;
            FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar15 + 0x50),0);
            if ((unaff_x19[0x6d] == 0) || (lVar15 = *(long *)(unaff_x19[0x6d] + 0x60), lVar15 == 0))
            goto LAB_035574b8;
            if (*(int *)(lVar15 + 0x18) == 0) break;
            if (unaff_x19[0x74] == 0) goto LAB_035574b8;
            FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar15 + 0x58),0);
            if (unaff_x19[0x74] == 0) goto LAB_035574b8;
            FUN_036aa280(unaff_x19[0x74],0);
            if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
            FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
            if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
            uVar27 = FUN_0390ef60(unaff_x19[0xe4],0);
            if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
            uVar12 = FUN_0390ed3c(unaff_x19[0xe4],0);
            lVar15 = *unaff_x28;
            if (lVar15 == 0) goto LAB_035574b8;
            lVar23 = 0;
            lVar24 = 0;
            goto LAB_03557110;
          }
          if (*(uint *)(unaff_x23 + 0x18) <= uStack000000000000015c) break;
          if ((*unaff_x28 == 0) || (lVar15 = *(long *)(*unaff_x28 + 0x50), lVar15 == 0))
          goto LAB_035574b8;
          unaff_x24 = (long)(int)uStack000000000000015c;
          lVar24 = unaff_x23 + unaff_x24 * unaff_x22;
          in_stack_00000160 = *(uint *)(lVar24 + 100);
          if (*(uint *)(lVar15 + 0x18) <= in_stack_00000160) break;
          lVar23 = (long)(int)in_stack_00000160;
          lVar15 = lVar15 + lVar23 * unaff_x29;
          in_stack_00000108 = *(long *)(lVar24 + 0x38);
          uVar3 = *(ushort *)(lVar24 + 0x20);
          uVar5 = *(uint *)(lVar15 + 0x3c);
          in_stack_000000e0 = (long)(int)uVar5;
          uVar25 = *(uint *)(lVar15 + 0x68);
          iVar2 = *(int *)(lVar15 + 0x20);
          iVar10 = *(int *)(lVar15 + 0x28);
          iVar11 = *(int *)(lVar15 + 0x2c);
          uVar6 = *(uint *)(lVar15 + 0x40);
          in_stack_00000150 = (long)(int)uVar6;
          fVar29 = *(float *)(lVar15 + 0x4c);
          fVar30 = *(float *)(lVar15 + 0x54);
          fVar34 = *(float *)(lVar15 + 0x58);
          fVar35 = *(float *)(lVar15 + 0x5c);
          fVar32 = *(float *)(lVar15 + 0x60);
          fVar33 = *(float *)(lVar15 + 0x6c);
          fVar37 = *(float *)(lVar15 + 0x70);
          fVar36 = *(float *)(lVar15 + 0x74);
          fVar31 = *(float *)(lVar15 + 0x78);
          in_stack_00000168._4_4_ = (uint)uVar3;
          if ((int)uVar25 < 9) {
            switch(uVar25) {
            case 1:
              if ((char)unaff_x19[0x1e] == '\0') {
                in_stack_000000f8._4_4_ = fVar32 + 0.0;
              }
              else {
                in_stack_000000f8._4_4_ = 0.0 - fVar34;
              }
              break;
            case 2:
LAB_03555018:
              in_stack_000000f8._4_4_ = (fVar32 + fVar35 * 0.5) - fVar34 * 0.5;
              break;
            default:
              goto switchD_03554f58_caseD_3;
            case 4:
              in_stack_000000f8._4_4_ = (fVar35 + fVar32) - fVar34;
              if ((char)unaff_x19[0x1e] != '\0') {
                in_stack_000000f8._4_4_ = fVar35 + fVar32;
              }
              break;
            case 8:
              goto switchD_03554f58_caseD_8;
            }
LAB_03555088:
            in_stack_000000e8 = 0;
          }
          else if (uVar25 == 0x10) {
switchD_03554f58_caseD_8:
            if (uVar3 < 0xad) {
              if ((uVar3 != 3) && (uVar3 != 10)) {
LAB_03554fac:
                if (*(uint *)(unaff_x23 + 0x18) <= uVar5) break;
                uVar4 = *(undefined2 *)(in_stack_000000f0 + in_stack_000000e0 * 0x178 + 0x20);
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar14 = FUN_026b8cc4(uVar4,0);
                if ((uVar14 & 1) == 0) {
                  bVar1 = (int)in_stack_00000160 < (int)unaff_x19[0x95];
                }
                else {
                  bVar1 = false;
                }
                if ((fVar34 <= fVar35) && (!bVar1 && uVar25 >> 4 == 0)) {
                  in_stack_000000f8._4_4_ = fVar32;
                  if ((char)unaff_x19[0x1e] != '\0') {
                    in_stack_000000f8._4_4_ = fVar35 + fVar32;
                  }
                  goto LAB_03555088;
                }
                if (((uVar12 == 1) || (in_stack_00000160 != uVar13)) ||
                   (uStack000000000000015c == *(uint *)((long)unaff_x19 + 0x324))) {
                  in_stack_000000f8._4_4_ = fVar32;
                  if ((char)unaff_x19[0x1e] != '\0') {
                    in_stack_000000f8._4_4_ = fVar35 + fVar32;
                  }
                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uStack0000000000000028 = FUN_026b97f8(in_stack_00000168._4_4_,0);
                  in_stack_000000e8 = 0;
                }
                else {
                  cVar17 = (char)unaff_x19[0x1e];
                  fVar32 = -fVar34;
                  if (cVar17 != '\0') {
                    fVar32 = fVar34;
                  }
                  if (*(uint *)(in_stack_000000f0 + 0x18) <= uVar5) break;
                  iVar11 = (int)*(char *)(in_stack_000000f0 + in_stack_000000e0 * 0x178 + 0x194) +
                           (-iVar2 - (uStack0000000000000028 & 1)) + iVar11 + -1;
                  if (iVar11 < 1) {
                    fVar34 = 1.0;
                    iVar11 = 1;
                  }
                  else {
                    fVar34 = *(float *)((long)unaff_x19 + 0x2dc);
                  }
                  if (in_stack_00000168._4_4_ == 9) {
LAB_03556e74:
                    fVar34 = 1.0 - fVar34;
                  }
                  else {
                    if (in_stack_00000168._4_4_ != 0xa0) {
                      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar14 = FUN_026b97f8(in_stack_00000168._4_4_,0);
                      cVar17 = (char)unaff_x19[0x1e];
                      if ((uVar14 & 1) != 0) goto LAB_03556e74;
                    }
                    iVar11 = (iVar2 - (~uStack0000000000000028 & 1)) + iVar10;
                  }
                  fVar34 = ((fVar35 + fVar32) * fVar34) / (float)iVar11;
                  if (cVar17 == '\0') {
                    in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar34;
                    in_stack_000000e8 =
                         CONCAT44((float)((ulong)in_stack_000000e8 >> 0x20) + 0.0,
                                  (float)in_stack_000000e8 + 0.0);
                  }
                  else {
                    in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar34;
                  }
                }
              }
            }
            else if (((uVar3 != 0xad) && (uVar3 != 0x200b)) && (uVar3 != 0x2060)) goto LAB_03554fac;
          }
          else if (uVar25 == 0x20) {
            fVar34 = fVar33 + fVar36;
            goto LAB_03555018;
          }
switchD_03554f58_caseD_3:
          uVar25 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
          if (uVar25 <= uStack000000000000015c) break;
          lVar15 = in_stack_000000f0 + unaff_x24 * 0x178;
          fVar32 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
          param_1 = (float)in_stack_000000b8 + (float)in_stack_000000e8;
          fVar34 = (float)((ulong)in_stack_000000b8 >> 0x20) +
                   (float)((ulong)in_stack_000000e8 >> 0x20);
          if (*(char *)(lVar15 + 0x194) == '\0') goto LAB_03555938;
          iVar10 = *(int *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x2c);
          if (iVar10 != 0) goto LAB_0355574c;
          fVar35 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)in_stack_00000160,1.0);
          switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
          case 0:
            lVar24 = in_stack_000000f0 + unaff_x24 * 0x178;
            *(undefined4 *)(lVar24 + 0x84) = 0;
            *(undefined4 *)(lVar24 + 0xac) = 0;
            *(undefined4 *)(lVar24 + 0xd4) = 0x3f800000;
            fVar35 = 1.0;
            break;
          case 1:
            fVar31 = *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x70);
            if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
              lVar24 = in_stack_000000f0 + unaff_x24 * 0x178;
              fVar36 = (in_stack_000000f8._4_4_ + fVar31) - *(float *)(in_stack_00000080 + 0x230);
              fVar31 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230)
              ;
              goto LAB_035551cc;
            }
            lVar24 = in_stack_000000f0 + unaff_x24 * 0x178;
            fVar36 = fVar36 - fVar33;
            *(float *)(lVar24 + 0x84) = fVar35 + (fVar31 - fVar33) / fVar36;
            *(float *)(lVar24 + 0xac) = fVar35 + (*(float *)(lVar24 + 0x98) - fVar33) / fVar36;
            *(float *)(lVar24 + 0xd4) = fVar35 + (*(float *)(lVar24 + 0xc0) - fVar33) / fVar36;
            fVar35 = fVar35 + (*(float *)(lVar24 + 0xe8) - fVar33) / fVar36;
            break;
          case 2:
            lVar24 = in_stack_000000f0 + unaff_x24 * 0x178;
            fVar31 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
            fVar36 = (in_stack_000000f8._4_4_ + *(float *)(lVar24 + 0x70)) -
                     *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
            *(float *)(lVar24 + 0x84) = fVar35 + fVar36 / fVar31;
            *(float *)(lVar24 + 0xac) =
                 fVar35 + ((in_stack_000000f8._4_4_ + *(float *)(lVar24 + 0x98)) -
                          *(float *)(in_stack_00000080 + 0x230)) /
                          (*(float *)(in_stack_00000080 + 0x238) -
                          *(float *)(in_stack_00000080 + 0x230));
            *(float *)(lVar24 + 0xd4) =
                 fVar35 + ((in_stack_000000f8._4_4_ + *(float *)(lVar24 + 0xc0)) -
                          *(float *)(in_stack_00000080 + 0x230)) /
                          (*(float *)(in_stack_00000080 + 0x238) -
                          *(float *)(in_stack_00000080 + 0x230));
            fVar35 = fVar35 + ((in_stack_000000f8._4_4_ + *(float *)(lVar24 + 0xe8)) -
                              *(float *)(in_stack_00000080 + 0x230)) /
                              (*(float *)(in_stack_00000080 + 0x238) -
                              *(float *)(in_stack_00000080 + 0x230));
            break;
          case 3:
            switch((int)unaff_x19[0x62]) {
            case 0:
              lVar24 = in_stack_000000f0 + unaff_x24 * 0x178;
              *(undefined4 *)(lVar24 + 0x88) = 0;
              *(undefined4 *)(lVar24 + 0xb0) = 0x3f800000;
              *(undefined4 *)(lVar24 + 0xd8) = 0;
              *(undefined4 *)(lVar24 + 0x100) = 0x3f800000;
              break;
            case 1:
              lVar24 = in_stack_000000f0 + unaff_x24 * 0x178;
              fVar31 = fVar31 - fVar37;
              fVar36 = fVar35 + (*(float *)(lVar24 + 0x74) - fVar37) / fVar31;
              fVar31 = fVar35 + (*(float *)(lVar24 + 0x9c) - fVar37) / fVar31;
              *(float *)(lVar24 + 0x88) = fVar36;
              *(float *)(lVar24 + 0xb0) = fVar31;
              *(float *)(lVar24 + 0xd8) = fVar36;
              *(float *)(lVar24 + 0x100) = fVar31;
              break;
            case 2:
              lVar24 = in_stack_000000f0 + unaff_x24 * 0x178;
              fVar36 = fVar35 + (*(float *)(lVar24 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                                (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
              *(float *)(lVar24 + 0x88) = fVar36;
              fVar31 = *(float *)(unaff_x19 + 0x9c);
              fVar33 = *(float *)(unaff_x19 + 0x9d);
              *(float *)(lVar24 + 0xd8) = fVar36;
              fVar36 = fVar35 + (*(float *)(lVar24 + 0x9c) - fVar31) / (fVar33 - fVar31);
              *(float *)(lVar24 + 0xb0) = fVar36;
              *(float *)(lVar24 + 0x100) = fVar36;
              break;
            case 3:
              if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
              uVar25 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
            }
            if (uVar25 <= uStack000000000000015c) goto LAB_035575f4;
            lVar24 = in_stack_000000f0 + unaff_x24 * 0x178;
            fVar36 = *(float *)(lVar24 + 0x15c);
            fVar31 = (1.0 - (*(float *)(lVar24 + 0x88) + *(float *)(lVar24 + 0xb0)) * fVar36) * 0.5;
            fVar33 = fVar35 + *(float *)(lVar24 + 0x88) * fVar36 + fVar31;
            fVar35 = fVar35 + fVar31 + *(float *)(lVar24 + 0xb0) * fVar36;
            *(float *)(lVar24 + 0x84) = fVar33;
            *(float *)(lVar24 + 0xac) = fVar33;
            *(float *)(lVar24 + 0xd4) = fVar35;
            break;
          default:
            goto switchD_0355512c_default;
          }
          *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xfc) = fVar35;
switchD_0355512c_default:
          switch((int)unaff_x19[0x62]) {
          case 0:
            if (uVar25 <= uStack000000000000015c) goto LAB_035575f4;
            lVar24 = in_stack_000000f0 + unaff_x24 * 0x178;
            *(undefined4 *)(lVar24 + 0x88) = 0;
            *(undefined4 *)(lVar24 + 0xb0) = 0x3f800000;
            *(undefined4 *)(lVar24 + 0xd8) = 0x3f800000;
            *(undefined4 *)(lVar24 + 0x100) = 0;
            break;
          case 1:
            if (uStack000000000000015c < uVar25) {
              lVar24 = in_stack_000000f0 + unaff_x24 * 0x178;
              fVar29 = fVar29 - fVar30;
              fVar36 = (*(float *)(lVar24 + 0x74) - fVar30) / fVar29;
              fVar29 = (*(float *)(lVar24 + 0x9c) - fVar30) / fVar29;
              *(float *)(lVar24 + 0x88) = fVar36;
              goto UnityEngine_Animator__set_stabilizeFeet;
            }
            goto LAB_035575f4;
          case 2:
            if (uVar25 <= uStack000000000000015c) goto LAB_035575f4;
            lVar24 = in_stack_000000f0 + unaff_x24 * 0x178;
            fVar36 = (*(float *)(lVar24 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                     (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
            *(float *)(lVar24 + 0x88) = fVar36;
            fVar29 = (*(float *)(lVar24 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
                     (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
            *(float *)(lVar24 + 0xb0) = fVar29;
            *(float *)(lVar24 + 0xd8) = fVar29;
            *(float *)(lVar24 + 0x100) = fVar36;
            break;
          case 3:
            if (uVar25 <= uStack000000000000015c) goto LAB_035575f4;
            lVar24 = in_stack_000000f0 + unaff_x24 * 0x178;
            fVar31 = *(float *)(lVar24 + 0x15c);
            fVar29 = (1.0 - (*(float *)(lVar24 + 0x84) + *(float *)(lVar24 + 0xd4)) / fVar31) * 0.5;
            fVar36 = *(float *)(lVar24 + 0x84) / fVar31 + fVar29;
            fVar29 = fVar29 + *(float *)(lVar24 + 0xd4) / fVar31;
            *(float *)(lVar24 + 0x88) = fVar36;
            *(float *)(lVar24 + 0xb0) = fVar29;
            *(float *)(lVar24 + 0x100) = fVar36;
            *(float *)(lVar24 + 0xd8) = fVar29;
          }
          if (uVar25 <= uStack000000000000015c) break;
          lVar24 = in_stack_000000f0 + unaff_x24 * 0x178;
          unaff_s14 = *(float *)(lVar24 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
          if ((*(char *)(lVar24 + 0x5c) == '\0') &&
             ((*(byte *)(in_stack_000000f0 + unaff_x24 * 0x178 + 400) & 1) != 0)) {
            unaff_s14 = -unaff_s14;
          }
          fVar36 = in_stack_00000050._4_4_;
          if (((in_stack_00000058 == 2) || (fVar36 = fStack0000000000000034, in_stack_00000058 == 1)
              ) || (fVar36 = fStack000000000000002c, in_stack_00000058 == 0)) {
            unaff_s14 = fVar36 * unaff_s14;
          }
          lVar24 = in_stack_000000f0 + unaff_x24 * 0x178;
          fVar29 = *(float *)(lVar24 + 0x88);
          fVar31 = *(float *)(lVar24 + 0x84);
          fVar36 = -2.1474836e+09;
          if (fVar31 != INFINITY) {
            fVar36 = (float)(int)fVar31;
          }
          fVar33 = *(float *)(lVar24 + 0xd4);
          fVar35 = *(float *)(lVar24 + 0xd8);
          fVar30 = -2.1474836e+09;
          if (fVar29 != INFINITY) {
            fVar30 = (float)(int)fVar29;
          }
          uVar26 = FUN_03591d3c(fVar31 - fVar36,fVar29 - fVar30);
          *(undefined4 *)(lVar24 + 0x84) = uVar26;
          if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) break;
          fVar35 = fVar35 - fVar30;
          *(float *)(lVar24 + 0x88) = unaff_s14;
          uVar26 = FUN_03591d3c(fVar31 - fVar36,fVar35);
          *(undefined4 *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xac) = uVar26;
          if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) break;
          fVar33 = fVar33 - fVar36;
          *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xb0) = unaff_s14;
          fVar36 = (float)FUN_03591d3c(fVar33,fVar35);
          *(float *)(lVar24 + 0xd4) = fVar36;
          if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) break;
          *(float *)(lVar24 + 0xd8) = unaff_s14;
          uVar26 = FUN_03591d3c(fVar33,fVar29 - fVar30);
          *(undefined4 *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xfc) = uVar26;
          uVar25 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
          if (uVar25 <= uStack000000000000015c) break;
          *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x100) = unaff_s14;
          unaff_x20 = in_stack_00000048;
LAB_0355574c:
          if (((int)uStack000000000000015c < (int)unaff_x19[0x65]) &&
             (iStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
            if (((int)unaff_x19[0x66] <= (int)in_stack_00000160) || ((int)unaff_x19[0x5c] == 5)) {
              if (((int)in_stack_00000160 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
                if (uStack000000000000015c < uVar25) {
                  if (*(int *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x68) ==
                      iStack0000000000000030) {
                    lVar15 = in_stack_000000f0 + unaff_x24 * 0x178;
                    *(ulong *)(lVar15 + 0x70) =
                         CONCAT44(param_1 + (float)((ulong)*(undefined8 *)(lVar15 + 0x70) >> 0x20),
                                  fVar32 + (float)*(undefined8 *)(lVar15 + 0x70));
                    *(float *)(lVar15 + 0x78) = fVar34 + *(float *)(lVar15 + 0x78);
                    *(ulong *)(lVar15 + 0x98) =
                         CONCAT44(param_1 + (float)((ulong)*(undefined8 *)(lVar15 + 0x98) >> 0x20),
                                  fVar32 + (float)*(undefined8 *)(lVar15 + 0x98));
                    *(float *)(lVar15 + 0xa0) = fVar34 + *(float *)(lVar15 + 0xa0);
                    *(ulong *)(lVar15 + 0xc0) =
                         CONCAT44(param_1 + (float)((ulong)*(undefined8 *)(lVar15 + 0xc0) >> 0x20),
                                  fVar32 + (float)*(undefined8 *)(lVar15 + 0xc0));
                    *(float *)(lVar15 + 200) = fVar34 + *(float *)(lVar15 + 200);
                    *(ulong *)(lVar15 + 0xe8) =
                         CONCAT44(param_1 + (float)((ulong)*(undefined8 *)(lVar15 + 0xe8) >> 0x20),
                                  fVar32 + (float)*(undefined8 *)(lVar15 + 0xe8));
                    *(float *)(lVar15 + 0xf0) = fVar34 + *(float *)(lVar15 + 0xf0);
                    goto UnityEngine_Animator__GetAnimatorClipInfoCount;
                  }
                  goto UnityEngine_Animator__GetAnimatorTransitionInfo;
                }
                break;
              }
              goto UnityEngine_Animator__GetAnimatorTransitionInfo;
            }
            if (uVar25 <= uStack000000000000015c) break;
            lVar15 = in_stack_000000f0 + unaff_x24 * 0x178;
            *(ulong *)(lVar15 + 0x70) =
                 CONCAT44(param_1 + (float)((ulong)*(undefined8 *)(lVar15 + 0x70) >> 0x20),
                          fVar32 + (float)*(undefined8 *)(lVar15 + 0x70));
            *(float *)(lVar15 + 0x78) = fVar34 + *(float *)(lVar15 + 0x78);
            *(ulong *)(lVar15 + 0x98) =
                 CONCAT44(param_1 + (float)((ulong)*(undefined8 *)(lVar15 + 0x98) >> 0x20),
                          fVar32 + (float)*(undefined8 *)(lVar15 + 0x98));
            *(float *)(lVar15 + 0xa0) = fVar34 + *(float *)(lVar15 + 0xa0);
            *(ulong *)(lVar15 + 0xc0) =
                 CONCAT44(param_1 + (float)((ulong)*(undefined8 *)(lVar15 + 0xc0) >> 0x20),
                          fVar32 + (float)*(undefined8 *)(lVar15 + 0xc0));
            *(float *)(lVar15 + 200) = fVar34 + *(float *)(lVar15 + 200);
            *(ulong *)(lVar15 + 0xe8) =
                 CONCAT44(param_1 + (float)((ulong)*(undefined8 *)(lVar15 + 0xe8) >> 0x20),
                          fVar32 + (float)*(undefined8 *)(lVar15 + 0xe8));
            *(float *)(lVar15 + 0xf0) = fVar34 + *(float *)(lVar15 + 0xf0);
          }
          else {
UnityEngine_Animator__GetAnimatorTransitionInfo:
            if (uVar25 <= uStack000000000000015c) break;
            if (DAT_0411f172 == '\0') {
              FUN_01ab69ac(PTR_DAT_03cbded8);
              DAT_0411f172 = '\x01';
              uVar25 = *(uint *)(in_stack_000000f0 + 0x18);
            }
            puVar7 = PTR_DAT_03cbded8;
            uVar26 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
            lVar24 = in_stack_000000f0 + unaff_x24 * 0x178;
            *(undefined8 *)(lVar24 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
            *(undefined4 *)(lVar24 + 0x78) = uVar26;
            if (uVar25 <= uStack000000000000015c) break;
            uVar26 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
            lVar24 = in_stack_000000f0 + unaff_x24 * 0x178;
            *(undefined8 *)(lVar24 + 0x98) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
            *(undefined4 *)(lVar24 + 0xa0) = uVar26;
            uVar26 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
            *(undefined8 *)(lVar24 + 0xc0) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
            *(undefined4 *)(lVar24 + 200) = uVar26;
            uVar26 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
            *(undefined8 *)(lVar24 + 0xe8) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
            *(undefined4 *)(lVar24 + 0xf0) = uVar26;
            *(undefined1 *)(lVar15 + 0x194) = 0;
          }
UnityEngine_Animator__GetAnimatorClipInfoCount:
          if (iVar10 == 0) {
            pcVar19 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
            (*pcVar19)();
          }
          else if (iVar10 == 1) {
            pcVar19 = *(code **)(*unaff_x19 + 0x8c8);
            goto LAB_0355591c;
          }
LAB_03555938:
          if ((*in_stack_00000170 == 0) ||
             (lVar15 = *(long *)(*in_stack_00000170 + 0x38), lVar15 == 0)) goto LAB_035574b8;
          if (*(uint *)(lVar15 + 0x18) <= uStack000000000000015c) break;
          lVar15 = lVar15 + unaff_x24 * 0x178;
          uVar27 = *(undefined8 *)(lVar15 + 0x11c);
          *(undefined8 *)(lVar15 + 0x11c) =
               CONCAT44(param_1 + (float)((ulong)uVar27 >> 0x20),fVar32 + (float)uVar27);
          *(float *)(lVar15 + 0x124) = fVar34 + *(float *)(lVar15 + 0x124);
          if ((*in_stack_00000170 == 0) ||
             (lVar15 = *(long *)(*in_stack_00000170 + 0x38), lVar15 == 0)) goto LAB_035574b8;
          if (*(uint *)(lVar15 + 0x18) <= uStack000000000000015c) break;
          lVar15 = lVar15 + unaff_x24 * 0x178;
          *(ulong *)(lVar15 + 0x110) =
               CONCAT44(param_1 + (float)((ulong)*(undefined8 *)(lVar15 + 0x110) >> 0x20),
                        fVar32 + (float)*(undefined8 *)(lVar15 + 0x110));
          *(float *)(lVar15 + 0x118) = fVar34 + *(float *)(lVar15 + 0x118);
          if ((*in_stack_00000170 == 0) ||
             (lVar15 = *(long *)(*in_stack_00000170 + 0x38), lVar15 == 0)) goto LAB_035574b8;
          if (*(uint *)(lVar15 + 0x18) <= uStack000000000000015c) break;
          lVar15 = lVar15 + unaff_x24 * 0x178;
          *(ulong *)(lVar15 + 0x128) =
               CONCAT44(param_1 + (float)((ulong)*(undefined8 *)(lVar15 + 0x128) >> 0x20),
                        fVar32 + (float)*(undefined8 *)(lVar15 + 0x128));
          *(float *)(lVar15 + 0x130) = fVar34 + *(float *)(lVar15 + 0x130);
          if ((*in_stack_00000170 == 0) ||
             (lVar15 = *(long *)(*in_stack_00000170 + 0x38), lVar15 == 0)) goto LAB_035574b8;
          if (*(uint *)(lVar15 + 0x18) <= uStack000000000000015c) break;
          lVar15 = lVar15 + unaff_x24 * 0x178;
          *(float *)(lVar15 + 0x134) = fVar32 + *(float *)(lVar15 + 0x134);
          *(ulong *)(lVar15 + 0x138) =
               CONCAT44(fVar34 + (float)((ulong)*(undefined8 *)(lVar15 + 0x138) >> 0x20),
                        param_1 + (float)*(undefined8 *)(lVar15 + 0x138));
          lVar15 = *in_stack_00000170;
          if ((lVar15 == 0) || (lVar24 = *(long *)(lVar15 + 0x38), lVar24 == 0)) goto LAB_035574b8;
          uVar25 = *(uint *)(lVar24 + 0x18);
          if (uVar25 <= uStack000000000000015c) break;
          lVar18 = lVar24 + unaff_x24 * 0x178;
          uVar28 = CONCAT44(fVar32 + (float)((ulong)*(undefined8 *)(lVar18 + 0x140) >> 0x20),
                            fVar32 + (float)*(undefined8 *)(lVar18 + 0x140));
          fVar34 = param_1 + *(float *)(lVar18 + 0x150);
          param_3 = (ulong)(uint)fVar34;
          param_4 = CONCAT44(param_1 + (float)((ulong)*(undefined8 *)(lVar18 + 0x148) >> 0x20),
                             param_1 + (float)*(undefined8 *)(lVar18 + 0x148));
          *(float *)(lVar18 + 0x150) = fVar34;
          *(ulong *)(lVar18 + 0x140) = uVar28;
          *(ulong *)(lVar18 + 0x148) = param_4;
          if (in_stack_00000160 == uVar13) {
            uVar13 = *unaff_x20 - 1;
            if (uStack000000000000015c == uVar13) goto LAB_03555b44;
          }
          else {
            lVar15 = *(long *)(lVar15 + 0x50);
            if (lVar15 == 0) goto LAB_035574b8;
            if (*(uint *)(lVar15 + 0x18) <= uVar13) break;
            lVar18 = (long)(int)uVar13;
            lVar20 = lVar15 + lVar18 * 0x5c;
            param_4 = (ulong)(uint)*(float *)(lVar20 + 0x58);
            fVar34 = param_1 + *(float *)(lVar20 + 0x54);
            uVar28 = (ulong)(uint)fVar34;
            fVar36 = fVar32 + *(float *)(lVar20 + 0x58);
            param_3 = (ulong)(uint)fVar36;
            *(ulong *)(lVar20 + 0x4c) =
                 CONCAT44(param_1 + (float)((ulong)*(undefined8 *)(lVar20 + 0x4c) >> 0x20),
                          param_1 + (float)*(undefined8 *)(lVar20 + 0x4c));
            *(float *)(lVar20 + 0x54) = fVar34;
            *(float *)(lVar20 + 0x58) = fVar36;
            if (uVar25 <= *(uint *)(lVar20 + 0x34)) break;
            uVar26 = *(undefined4 *)(lVar24 + (long)(int)*(uint *)(lVar20 + 0x34) * 0x178 + 0x11c);
            lVar15 = lVar15 + lVar18 * 0x5c;
            *(float *)(lVar15 + 0x70) = fVar34;
            *(undefined4 *)(lVar15 + 0x6c) = uVar26;
            lVar15 = *in_stack_00000170;
            if ((lVar15 == 0) || (lVar24 = *(long *)(lVar15 + 0x50), lVar24 == 0))
            goto LAB_035574b8;
            if (*(uint *)(lVar24 + 0x18) <= uVar13) break;
            lVar15 = *(long *)(lVar15 + 0x38);
            if (lVar15 == 0) goto LAB_035574b8;
            uVar13 = *(uint *)(lVar24 + lVar18 * 0x5c + 0x40);
            if (*(uint *)(lVar15 + 0x18) <= uVar13) break;
            lVar24 = lVar24 + lVar18 * 0x5c;
            *(undefined4 *)(lVar24 + 0x74) =
                 *(undefined4 *)(lVar15 + (long)(int)uVar13 * 0x178 + 0x128);
            *(undefined4 *)(lVar24 + 0x78) = *(undefined4 *)(lVar24 + 0x4c);
            uVar13 = *unaff_x20 - 1;
LAB_03555b44:
            if (uStack000000000000015c == uVar13) {
              lVar15 = *in_stack_00000170;
              if ((lVar15 == 0) || (lVar24 = *(long *)(lVar15 + 0x50), lVar24 == 0))
              goto LAB_035574b8;
              if (*(uint *)(lVar24 + 0x18) <= in_stack_00000160) break;
              lVar18 = lVar24 + lVar23 * 0x5c;
              param_4 = (ulong)(uint)*(float *)(lVar18 + 0x58);
              uVar28 = CONCAT44(param_1 + (float)((ulong)*(undefined8 *)(lVar18 + 0x4c) >> 0x20),
                                param_1 + (float)*(undefined8 *)(lVar18 + 0x4c));
              fVar34 = param_1 + *(float *)(lVar18 + 0x54);
              fVar32 = fVar32 + *(float *)(lVar18 + 0x58);
              param_3 = (ulong)(uint)fVar32;
              *(ulong *)(lVar18 + 0x4c) = uVar28;
              *(float *)(lVar18 + 0x54) = fVar34;
              *(float *)(lVar18 + 0x58) = fVar32;
              lVar15 = *(long *)(lVar15 + 0x38);
              if (lVar15 == 0) goto LAB_035574b8;
              if (*(uint *)(lVar15 + 0x18) <= *(uint *)(lVar18 + 0x34)) break;
              uVar26 = *(undefined4 *)(lVar15 + (long)(int)*(uint *)(lVar18 + 0x34) * 0x178 + 0x11c)
              ;
              lVar24 = lVar24 + lVar23 * 0x5c;
              *(float *)(lVar24 + 0x70) = fVar34;
              *(undefined4 *)(lVar24 + 0x6c) = uVar26;
              lVar15 = *in_stack_00000170;
              if ((lVar15 == 0) || (lVar24 = *(long *)(lVar15 + 0x50), lVar24 == 0))
              goto LAB_035574b8;
              if (*(uint *)(lVar24 + 0x18) <= in_stack_00000160) break;
              lVar15 = *(long *)(lVar15 + 0x38);
              if (lVar15 == 0) goto LAB_035574b8;
              uVar13 = *(uint *)(lVar24 + lVar23 * 0x5c + 0x40);
              if (*(uint *)(lVar15 + 0x18) <= uVar13) break;
              lVar24 = lVar24 + lVar23 * 0x5c;
              *(undefined4 *)(lVar24 + 0x74) =
                   *(undefined4 *)(lVar15 + (long)(int)uVar13 * 0x178 + 0x128);
              *(undefined4 *)(lVar24 + 0x78) = *(undefined4 *)(lVar24 + 0x4c);
            }
          }
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar14 = FUN_026b82c4(in_stack_00000168._4_4_,0);
          if (((((uVar14 & 1) == 0) && (1 < in_stack_00000168._4_4_ - 0x2010)) &&
              (in_stack_00000168._4_4_ != 0xad)) && (in_stack_00000168._4_4_ != 0x2d)) {
            if ((uStack000000000000011c & 1) == 0) {
              if (uVar12 != 1) {
LAB_0355686c:
                uStack000000000000011c = 0;
                goto LAB_03555d70;
              }
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar14 = FUN_026b81f8(in_stack_00000168._4_4_,0);
              if ((uVar14 & 1) != 0) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar14 = FUN_026b63d8(in_stack_00000168._4_4_,0);
                if (((in_stack_00000168._4_4_ != 0x200b) && ((uVar14 & 1) == 0)) &&
                   (*unaff_x20 != 1)) goto LAB_0355686c;
              }
            }
            else if (((uVar12 != 1) &&
                     ((int)uStack000000000000015c < (int)(*(uint *)(in_stack_000000f0 + 0x18) - 1)))
                    && (((int)uStack000000000000015c < *unaff_x20 &&
                        ((in_stack_00000168._4_4_ == 0x2019 || (in_stack_00000168._4_4_ == 0x27)))))
                    ) {
              if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c - 1) break;
              uVar4 = *(undefined2 *)(in_stack_000000f0 + unaff_x27 + -0x438);
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar14 = FUN_026b82c4(uVar4,0);
              if ((uVar14 & 1) != 0) {
                if (*(uint *)(in_stack_000000f0 + 0x18) <= uVar12) break;
                uVar4 = *(undefined2 *)(in_stack_000000f0 + unaff_x27 + -0x148);
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar14 = FUN_026b82c4(uVar4,0);
                if ((uVar14 & 1) != 0) goto LAB_03555d68;
              }
            }
            if (uStack000000000000015c == *unaff_x20 - 1U) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar14 = FUN_026b82c4(in_stack_00000168._4_4_,0);
              iVar10 = in_stack_00000128;
              if ((uVar14 & 1) == 0) goto LAB_03556070;
            }
            else {
LAB_03556070:
              iVar10 = uStack000000000000015c - 1;
            }
            lVar15 = *in_stack_00000170;
            if (lVar15 == 0) goto LAB_035574b8;
            lVar24 = *(long *)(lVar15 + 0x40);
            if (lVar24 == 0) goto LAB_035574b8;
            uVar13 = *(uint *)(lVar15 + 0x24);
            iVar11 = *(int *)(lVar24 + 0x18);
            if (iVar11 < (int)(uVar13 + 1)) {
              if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_01ff025c((long *)(lVar15 + 0x40),iVar11 + 1,
                           *(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
              lVar15 = *in_stack_00000170;
              if (lVar15 == 0) goto LAB_035574b8;
            }
            lVar15 = *(long *)(lVar15 + 0x40);
            if (lVar15 == 0) goto LAB_035574b8;
            if (*(uint *)(lVar15 + 0x18) <= uVar13) break;
            lVar15 = lVar15 + (long)(int)uVar13 * 0x18;
            *(long **)(lVar15 + 0x20) = unaff_x19;
            *(uint *)(lVar15 + 0x28) = uStack0000000000000158;
            *(int *)(lVar15 + 0x2c) = iVar10;
            *(uint *)(lVar15 + 0x30) = (iVar10 - uStack0000000000000158) + 1;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            lVar15 = unaff_x19[0x6d];
            if (lVar15 == 0) goto LAB_035574b8;
            lVar24 = *(long *)(lVar15 + 0x50);
            *(int *)(lVar15 + 0x24) = *(int *)(lVar15 + 0x24) + 1;
            if (lVar24 == 0) goto LAB_035574b8;
            if (*(uint *)(lVar24 + 0x18) <= in_stack_00000160) break;
            lVar24 = lVar24 + lVar23 * 0x5c;
            uStack000000000000011c = 0;
            iStack00000000000000d4 = iStack00000000000000d4 + 1;
            *(int *)(lVar24 + 0x30) = *(int *)(lVar24 + 0x30) + 1;
          }
          else {
            if ((uStack000000000000011c & 1) == 0) {
              uStack0000000000000158 = uStack000000000000015c;
            }
            if (uStack000000000000015c == *unaff_x20 - 1U) {
              lVar15 = *in_stack_00000170;
              if (lVar15 == 0) goto LAB_035574b8;
              lVar24 = *(long *)(lVar15 + 0x40);
              if (lVar24 == 0) goto LAB_035574b8;
              uVar13 = *(uint *)(lVar15 + 0x24);
              iVar10 = *(int *)(lVar24 + 0x18);
              if (iVar10 < (int)(uVar13 + 1)) {
                if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                FUN_01ff025c((long *)(lVar15 + 0x40),iVar10 + 1,
                             *(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
                lVar15 = *in_stack_00000170;
                if (lVar15 == 0) goto LAB_035574b8;
              }
              lVar15 = *(long *)(lVar15 + 0x40);
              if (lVar15 == 0) goto LAB_035574b8;
              if (*(uint *)(lVar15 + 0x18) <= uVar13) break;
              lVar15 = lVar15 + (long)(int)uVar13 * 0x18;
              *(long **)(lVar15 + 0x20) = unaff_x19;
              *(uint *)(lVar15 + 0x28) = uStack0000000000000158;
              *(uint *)(lVar15 + 0x2c) = uStack000000000000015c;
              *(uint *)(lVar15 + 0x30) = uVar12 - uStack0000000000000158;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              lVar15 = unaff_x19[0x6d];
              if (lVar15 == 0) goto LAB_035574b8;
              lVar24 = *(long *)(lVar15 + 0x50);
              *(int *)(lVar15 + 0x24) = *(int *)(lVar15 + 0x24) + 1;
              if (lVar24 == 0) goto LAB_035574b8;
              if (*(uint *)(lVar24 + 0x18) <= in_stack_00000160) break;
              lVar24 = lVar24 + lVar23 * 0x5c;
              iStack00000000000000d4 = iStack00000000000000d4 + 1;
              *(int *)(lVar24 + 0x30) = *(int *)(lVar24 + 0x30) + 1;
            }
LAB_03555d68:
            uStack000000000000011c = 1;
          }
LAB_03555d70:
          unaff_x22 = 0x178;
          if ((*in_stack_00000170 == 0) ||
             (lVar15 = *(long *)(*in_stack_00000170 + 0x38), lVar15 == 0)) goto LAB_035574b8;
          uVar13 = *(uint *)(lVar15 + 0x18);
          if (uVar13 <= uStack000000000000015c) break;
          if ((*(byte *)(lVar15 + unaff_x24 * 0x178 + 400) >> 2 & 1) == 0) {
            if ((uStack0000000000000118 & 1) == 0) {
LAB_03556254:
              uStack0000000000000118 = 0;
            }
            else {
LAB_03555da0:
              if (uVar13 <= uStack000000000000015c - 1) break;
              lVar24 = *unaff_x19;
              uVar13 = *(uint *)(lVar15 + unaff_x27 + -0x330);
              uVar26 = *(undefined4 *)(lVar15 + unaff_x27 + -0x2f8);
LAB_035562ec:
              pcVar19 = *(code **)(lVar24 + 0x8d8);
LAB_035562f4:
              param_4 = (ulong)uVar13;
              uVar28 = (ulong)(uint)fStack0000000000000070;
              param_3 = (ulong)uStack0000000000000074;
              (*pcVar19)(in_stack_00000078,uVar28,param_3,param_4,fStack0000000000000104,0,
                         in_stack_00000088._4_4_,uVar26);
              puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
              lVar15 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar15 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar15 = *(long *)puVar7;
              }
LAB_03556348:
              uStack0000000000000118 = 0;
              unaff_s15 = 0.0;
              fStack0000000000000104 = *(float *)(*(long *)(lVar15 + 0xb8) + 0x15a8);
              fStack0000000000000100 = 0.0;
            }
          }
          else {
            lVar15 = lVar15 + unaff_x24 * 0x178;
            iVar10 = *(int *)(lVar15 + 0x68);
            *(undefined4 *)(lVar15 + 0x16c) = in_stack_000017c4;
            if ((((int)unaff_x19[0x65] < (int)uStack000000000000015c) ||
                ((int)unaff_x19[0x66] < (int)in_stack_00000160)) ||
               (((int)unaff_x19[0x5c] == 5 && (iVar10 + 1 != (int)unaff_x19[0x67])))) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar14 = FUN_026b63d8(in_stack_00000168._4_4_,0);
            if ((in_stack_00000168._4_4_ != 0x200b) && ((uVar14 & 1) == 0)) {
              lVar15 = *in_stack_00000170;
              if ((lVar15 == 0) || (lVar24 = *(long *)(lVar15 + 0x38), lVar24 == 0))
              goto LAB_035574b8;
              if (*(uint *)(lVar24 + 0x18) <= uStack000000000000015c) break;
              fVar34 = *(float *)(lVar24 + unaff_x24 * 0x178 + 0x160);
              if (unaff_s15 <= fVar34) {
                unaff_s15 = fVar34;
              }
              if (fStack0000000000000100 <= ABS(unaff_s14)) {
                fStack0000000000000100 = ABS(unaff_s14);
              }
              if (iVar10 != in_stack_00000068._4_4_) {
                if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar15 = *in_stack_00000170;
                  if (lVar15 == 0) goto LAB_035574b8;
                  lVar24 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                }
                else {
                  lVar24 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                }
                fStack0000000000000104 = *(float *)(lVar24 + 0x15a8);
              }
              lVar15 = *(long *)(lVar15 + 0x38);
              if (lVar15 == 0) goto LAB_035574b8;
              if (*(uint *)(lVar15 + 0x18) <= uStack000000000000015c) break;
              if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
              fVar36 = *(float *)(lVar15 + unaff_x24 * 0x178 + 0x14c);
              fVar34 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
              fVar36 = fVar36 + unaff_s15 * fVar34;
              if (fVar36 <= fStack0000000000000104) {
                fStack0000000000000104 = fVar36;
              }
              uVar28 = (ulong)(uint)fStack0000000000000104;
              in_stack_00000068._4_4_ = iVar10;
            }
            if ((uStack0000000000000118 & 1) == 0) {
              uStack0000000000000118 = 0;
              if ((((in_stack_00000168._4_4_ == 0xd) || ((in_stack_00000168._4_4_ & 0xfffe) == 10))
                  || ((int)uVar6 < (int)uStack000000000000015c)) || ((bool)(bVar1 ^ 1)))
              goto LAB_03556364;
              if (uStack000000000000015c == uVar6) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar14 = FUN_026b97f8(in_stack_00000168._4_4_,0);
                if ((uVar14 & 1) != 0) goto LAB_03556254;
              }
              if ((*in_stack_00000170 == 0) ||
                 (lVar15 = *(long *)(*in_stack_00000170 + 0x38), lVar15 == 0)) goto LAB_035574b8;
              if (*(uint *)(lVar15 + 0x18) <= uStack000000000000015c) break;
              lVar15 = lVar15 + unaff_x24 * 0x178;
              in_stack_00000088._4_4_ = *(float *)(lVar15 + 0x160);
              in_stack_00000078 = *(uint *)(lVar15 + 0x11c);
              param_3 = (ulong)in_stack_00000078;
              bVar8 = unaff_s15 != 0.0;
              fVar34 = in_stack_00000088._4_4_;
              if (bVar8) {
                fVar34 = unaff_s15;
              }
              unaff_s15 = fVar34;
              in_stack_00000090 = *(undefined4 *)(lVar15 + 0x168);
              uStack0000000000000074 = 0;
              fVar34 = unaff_s14;
              if (bVar8) {
                fVar34 = fStack0000000000000100;
              }
              uVar28 = (ulong)(uint)fVar34;
              fStack0000000000000070 = fStack0000000000000104;
              fStack0000000000000100 = fVar34;
            }
            if (*unaff_x20 == 1) {
              if ((*in_stack_00000170 != 0) &&
                 (lVar15 = *(long *)(*in_stack_00000170 + 0x38), lVar15 != 0)) {
                if (uStack000000000000015c < *(uint *)(lVar15 + 0x18)) {
                  lVar15 = lVar15 + unaff_x24 * 0x178;
                  lVar24 = *unaff_x19;
                  uVar13 = *(uint *)(lVar15 + 0x128);
                  uVar26 = *(undefined4 *)(lVar15 + 0x160);
                  goto LAB_035562ec;
                }
                break;
              }
              goto LAB_035574b8;
            }
            if ((uStack000000000000015c == uVar5) || ((int)uVar6 <= (int)uStack000000000000015c)) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar14 = FUN_026b63d8(in_stack_00000168._4_4_,0);
              if ((*in_stack_00000170 != 0) &&
                 (lVar15 = *(long *)(*in_stack_00000170 + 0x38), lVar15 != 0)) {
                lVar24 = unaff_x24;
                uVar13 = uStack000000000000015c;
                if (in_stack_00000168._4_4_ == 0x200b || (uVar14 & 1) != 0) {
                  lVar24 = in_stack_00000150;
                  uVar13 = uVar6;
                }
                if (uVar13 < *(uint *)(lVar15 + 0x18)) {
                  lVar15 = lVar15 + lVar24 * 0x178;
                  uVar13 = *(uint *)(lVar15 + 0x128);
                  uVar26 = *(undefined4 *)(lVar15 + 0x160);
                  pcVar19 = *(code **)(*unaff_x19 + 0x8d8);
                  goto LAB_035562f4;
                }
                break;
              }
              goto LAB_035574b8;
            }
            if (!bVar1) {
              if ((*in_stack_00000170 != 0) &&
                 (lVar15 = *(long *)(*in_stack_00000170 + 0x38), lVar15 != 0)) {
                uVar13 = *(uint *)(lVar15 + 0x18);
                goto LAB_03555da0;
              }
              goto LAB_035574b8;
            }
            if ((int)uStack000000000000015c < *unaff_x20 + -1) {
              if ((*in_stack_00000170 == 0) ||
                 (lVar15 = *(long *)(*in_stack_00000170 + 0x38), lVar15 == 0)) goto LAB_035574b8;
              if (*(uint *)(lVar15 + 0x18) <= uVar12) break;
              uVar14 = FUN_03567ad8(in_stack_00000090,*(undefined4 *)(lVar15 + unaff_x27),0);
              if ((uVar14 & 1) == 0) {
                if ((*in_stack_00000170 != 0) &&
                   (lVar15 = *(long *)(*in_stack_00000170 + 0x38), lVar15 != 0)) {
                  if (uStack000000000000015c < *(uint *)(lVar15 + 0x18)) {
                    lVar15 = lVar15 + unaff_x24 * 0x178;
                    param_4 = (ulong)*(uint *)(lVar15 + 0x128);
                    param_3 = (ulong)uStack0000000000000074;
                    uVar28 = (ulong)(uint)fStack0000000000000070;
                    (**(code **)(*unaff_x19 + 0x8d8))
                              (in_stack_00000078,uVar28,param_3,param_4,fStack0000000000000104,0,
                               in_stack_00000088._4_4_,*(undefined4 *)(lVar15 + 0x160));
                    puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                    lVar15 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                    if (*(int *)(lVar15 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar15 = *(long *)puVar7;
                    }
                    goto LAB_03556348;
                  }
                  break;
                }
                goto LAB_035574b8;
              }
            }
            uStack0000000000000118 = 1;
          }
LAB_03556364:
          if ((*in_stack_00000170 == 0) ||
             (lVar15 = *(long *)(*in_stack_00000170 + 0x38), lVar15 == 0)) goto LAB_035574b8;
          if (*(uint *)(lVar15 + 0x18) <= uStack000000000000015c) break;
          unaff_x29 = 0x5c;
          if (in_stack_00000108 == 0) goto LAB_035574b8;
          uVar13 = *(uint *)(lVar15 + unaff_x24 * 0x178 + 400);
          unaff_s11 = (float)FUN_03776a30(in_stack_00000108 + 0x50,0);
          unaff_x23 = in_stack_000000f0;
          unaff_x28 = in_stack_00000170;
          unaff_w25 = uStack000000000000015c;
          if ((uVar13 >> 6 & 1) == 0) {
            if (bVar9) {
              if ((*in_stack_00000170 == 0) ||
                 (lVar15 = *(long *)(*in_stack_00000170 + 0x38), lVar15 == 0)) goto LAB_035574b8;
              if (*(uint *)(lVar15 + 0x18) <= uStack000000000000015c - 1) break;
              uVar13 = *(uint *)(lVar15 + unaff_x27 + -0x330);
              fVar34 = *(float *)(lVar15 + unaff_x27 + -0x30c);
              pcVar19 = *(code **)(*unaff_x19 + 0x8d8);
              fVar36 = in_stack_000000a8 * unaff_s11;
              uStack000000000000015c = uVar12;
              goto LAB_03556914;
            }
            goto LAB_03556948;
          }
          lVar15 = *in_stack_00000170;
          if ((lVar15 == 0) || (lVar24 = *(long *)(lVar15 + 0x38), lVar24 == 0)) goto LAB_035574b8;
          if (*(uint *)(lVar24 + 0x18) <= uStack000000000000015c) break;
          *(undefined4 *)(lVar24 + unaff_x24 * 0x178 + 0x174) = in_stack_000017c4;
          if ((((int)unaff_x19[0x65] < (int)uStack000000000000015c) ||
              ((int)unaff_x19[0x66] < (int)in_stack_00000160)) ||
             (((int)unaff_x19[0x5c] == 5 &&
              (*(int *)(lVar24 + unaff_x24 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
            unaff_w21 = 0;
          }
          else {
            unaff_w21 = 1;
          }
          if ((((in_stack_00000168._4_4_ == 0xd) || ((in_stack_00000168._4_4_ & 0xfffe) == 10)) ||
              ((int)uVar6 < (int)uStack000000000000015c)) || (bVar9 || unaff_w21 != 1)) {
LAB_035564e8:
            if (!bVar9) goto LAB_03556948;
          }
          else {
            if (uStack000000000000015c == uVar6) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar14 = FUN_026b97f8(in_stack_00000168._4_4_,0);
              if ((uVar14 & 1) != 0) goto LAB_035564e8;
              lVar15 = *in_stack_00000170;
              if (lVar15 == 0) goto LAB_035574b8;
            }
            lVar15 = *(long *)(lVar15 + 0x38);
            if (lVar15 == 0) goto LAB_035574b8;
            if (*(uint *)(lVar15 + 0x18) <= uStack000000000000015c) break;
            lVar15 = lVar15 + unaff_x24 * 0x178;
            in_stack_00000040 = *(float *)(lVar15 + 0x60);
            in_stack_00000038 = *(float *)(lVar15 + 0x14c);
            uVar28 = (ulong)(uint)in_stack_00000038;
            in_stack_000000a0 = *(uint *)(lVar15 + 0x11c);
            param_3 = (ulong)in_stack_000000a0;
            in_stack_000000a8 = *(float *)(lVar15 + 0x160);
            fStack000000000000009c = unaff_s11 * in_stack_000000a8 + in_stack_00000038;
            uStack0000000000000098 = 0;
          }
          iVar10 = *unaff_x20;
          in_stack_00000120 = unaff_x27;
          if (iVar10 == 1) {
LAB_03556628:
            uStack000000000000015c = uVar12;
            if ((*unaff_x28 == 0) || (lVar15 = *(long *)(*unaff_x28 + 0x38), lVar15 == 0))
            goto LAB_035574b8;
            if (*(uint *)(lVar15 + 0x18) <= unaff_w25) break;
            lVar15 = lVar15 + unaff_x24 * unaff_x22;
            lVar24 = *unaff_x19;
            uVar13 = *(uint *)(lVar15 + 0x128);
            fVar34 = *(float *)(lVar15 + 0x14c);
LAB_03556654:
            pcVar19 = *(code **)(lVar24 + 0x8d8);
            unaff_x27 = in_stack_00000120;
            goto LAB_0355690c;
          }
          if (uStack000000000000015c != uVar5) {
            if ((int)uStack000000000000015c < iVar10) {
              lVar15 = *in_stack_00000170;
              if ((lVar15 == 0) || (lVar24 = *(long *)(lVar15 + 0x38), lVar24 == 0))
              goto LAB_035574b8;
              if (*(uint *)(lVar24 + 0x18) <= uVar12) break;
              if (*(float *)(lVar24 + unaff_x27 + -0x108) != in_stack_00000040) goto LAB_035568bc;
              unaff_s8 = *(float *)(lVar24 + unaff_x27 + -0x1c);
              if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              goto code_r0x0355672c;
            }
LAB_03556744:
            uStack000000000000015c = uVar12;
            if ((int)unaff_w25 < iVar10) {
              iVar10 = FUN_036d3364(in_stack_00000108,0);
              if (*(uint *)(unaff_x23 + 0x18) <= uStack000000000000015c) break;
              lVar15 = *(long *)(unaff_x23 + in_stack_00000120 + -0x130);
              if (lVar15 == 0) goto LAB_035574b8;
              iVar11 = FUN_036d3364(lVar15,0);
              unaff_x27 = in_stack_00000120;
              uVar12 = uStack000000000000015c;
              if (iVar10 != iVar11) goto LAB_03556628;
            }
            if ((unaff_w21 & 1) == 0) {
              if ((*unaff_x28 == 0) || (lVar15 = *(long *)(*unaff_x28 + 0x38), lVar15 == 0))
              goto LAB_035574b8;
              if (uStack000000000000015c - 2 < *(uint *)(lVar15 + 0x18)) {
                lVar24 = *unaff_x19;
                uVar13 = *(uint *)(lVar15 + unaff_x27 + -0x330);
                fVar34 = *(float *)(lVar15 + unaff_x27 + -0x30c);
                in_stack_00000120 = unaff_x27;
                goto LAB_03556654;
              }
              break;
            }
            bVar9 = true;
            uVar13 = in_stack_00000160;
            goto LAB_0355694c;
          }
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar14 = FUN_026b63d8(in_stack_00000168._4_4_,0);
          if ((*in_stack_00000170 == 0) ||
             (lVar15 = *(long *)(*in_stack_00000170 + 0x38), lVar15 == 0)) goto LAB_035574b8;
          if (in_stack_00000168._4_4_ == 0x200b || (uVar14 & 1) != 0) {
            lVar24 = in_stack_00000150;
            uStack000000000000015c = uVar12;
            if (uVar6 < *(uint *)(lVar15 + 0x18)) goto LAB_035568f0;
            break;
          }
          bVar9 = *(uint *)(lVar15 + 0x18) <= uStack000000000000015c;
          uStack000000000000015c = uVar12;
FUN_035568e8:
          lVar24 = unaff_x24;
          if (bVar9) break;
        } while( true );
      }
      goto LAB_035575f4;
    }
  }
  goto LAB_035574b8;
  while( true ) {
    lVar15 = *unaff_x28;
    lVar24 = lVar24 + 1;
    lVar23 = lVar23 + 0x50;
    if (lVar15 == 0) break;
LAB_03557110:
    uVar14 = lVar24 + 1;
    if ((long)*(int *)(lVar15 + 0x34) <= (long)uVar14) {
LAB_03554724:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar15 = *(long *)(lVar15 + 0x60);
    if (lVar15 == 0) break;
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_035575f4;
    FUN_03596a20(lVar15 + lVar23 + 0x70,0);
    lVar15 = unaff_x19[0xe1];
    if (lVar15 == 0) break;
    if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_035575f4;
    uVar21 = *(undefined8 *)(lVar15 + lVar24 * 8 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar16 = FUN_036d35a8(uVar21,0,0);
    if ((uVar16 & 1) == 0) {
      if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
        if ((*unaff_x28 == 0) || (lVar15 = *(long *)(*unaff_x28 + 0x60), lVar15 == 0)) break;
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar15 + 0x18) <= uVar14) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        FUN_03596b20(lVar15 + lVar23 + 0x70,1,0);
      }
      lVar15 = unaff_x19[0xe1];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar15 = *(long *)(lVar15 + lVar24 * 8 + 0x28);
      if (lVar15 == 0) break;
      lVar15 = UnityEngine_Material__GetColorArray(lVar15,0);
      if ((*unaff_x28 == 0) || (lVar18 = *(long *)(*unaff_x28 + 0x60), lVar18 == 0)) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar14) goto LAB_035575f4;
      if (lVar15 == 0) break;
      FUN_036a460c(lVar15,*(undefined8 *)(lVar18 + lVar23 + 0x80),0);
      lVar15 = unaff_x19[0xe1];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar15 = *(long *)(lVar15 + lVar24 * 8 + 0x28);
      if (lVar15 == 0) break;
      lVar15 = UnityEngine_Material__GetColorArray(lVar15,0);
      if ((*unaff_x28 == 0) || (lVar18 = *(long *)(*unaff_x28 + 0x60), lVar18 == 0)) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar14) goto LAB_035575f4;
      if (lVar15 == 0) break;
      FUN_036a4810(lVar15,*(undefined8 *)(lVar18 + lVar23 + 0x98),0);
      lVar15 = unaff_x19[0xe1];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar15 = *(long *)(lVar15 + lVar24 * 8 + 0x28);
      if (lVar15 == 0) break;
      lVar15 = UnityEngine_Material__GetColorArray(lVar15,0);
      if ((*unaff_x28 == 0) || (lVar18 = *(long *)(*unaff_x28 + 0x60), lVar18 == 0)) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar14) goto LAB_035575f4;
      if (lVar15 == 0) break;
      FUN_036a48bc(lVar15,*(undefined8 *)(lVar18 + lVar23 + 0xa0),0);
      lVar15 = unaff_x19[0xe1];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar15 = *(long *)(lVar15 + lVar24 * 8 + 0x28);
      if (lVar15 == 0) break;
      lVar15 = UnityEngine_Material__GetColorArray(lVar15,0);
      if ((*unaff_x28 == 0) || (lVar18 = *(long *)(*unaff_x28 + 0x60), lVar18 == 0)) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar14) goto LAB_035575f4;
      if (lVar15 == 0) break;
      FUN_036a4e24(lVar15,*(undefined8 *)(lVar18 + lVar23 + 0xa8),0);
      lVar15 = unaff_x19[0xe1];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar15 = *(long *)(lVar15 + lVar24 * 8 + 0x28);
      if ((lVar15 == 0) || (lVar15 = UnityEngine_Material__GetColorArray(lVar15,0), lVar15 == 0))
      break;
      FUN_036aa280(lVar15,0);
      lVar15 = unaff_x19[0xe1];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar15 = *(long *)(lVar15 + lVar24 * 8 + 0x28);
      if (lVar15 == 0) break;
      lVar15 = FUN_037b514c(lVar15,0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar24 * 8 + 0x28);
      if ((lVar18 == 0) || (uVar21 = UnityEngine_Material__GetColorArray(lVar18,0), lVar15 == 0))
      break;
      FUN_0390f3a4(lVar15,uVar21,0);
      lVar15 = unaff_x19[0xe1];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar15 = *(long *)(lVar15 + lVar24 * 8 + 0x28);
      if ((lVar15 == 0) || (lVar15 = FUN_037b514c(lVar15,0), lVar15 == 0)) break;
      FUN_0390eec8(uVar27,uVar28,param_3,param_4,lVar15,0);
      lVar15 = unaff_x19[0xe1];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar15 = *(long *)(lVar15 + lVar24 * 8 + 0x28);
      if ((lVar15 == 0) || (lVar15 = FUN_037b514c(lVar15,0), lVar15 == 0)) break;
      FUN_0390ed78(lVar15,uVar12 & 1,0);
      lVar15 = unaff_x19[0xe1];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_035575f4;
      plVar22 = *(long **)(lVar15 + lVar24 * 8 + 0x28);
      uVar13 = (**(code **)(*unaff_x19 + 0x2b8))();
      if (plVar22 == (long *)0x0) break;
      (**(code **)(*plVar22 + 0x2c8))(plVar22,uVar13 & 1,*(undefined8 *)(*plVar22 + 0x2d0));
    }
  }
LAB_035574b8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


