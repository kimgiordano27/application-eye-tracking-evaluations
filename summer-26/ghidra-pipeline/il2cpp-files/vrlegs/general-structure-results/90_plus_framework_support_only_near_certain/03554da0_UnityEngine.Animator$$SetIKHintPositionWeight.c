/*
FUNCTION_NAME: UnityEngine.Animator$$SetIKHintPositionWeight
ENTRY_POINT: 03554da0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 169
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_19;weak_xr_or_state_hits_19;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_6;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_6
*/


void UnityEngine_Animator__SetIKHintPositionWeight
               (undefined1 param_1 [16],ulong param_2,ulong param_3,ulong param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  undefined *puVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  char cVar18;
  long lVar19;
  long in_x9;
  long lVar20;
  code *pcVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  uint uVar26;
  long lVar27;
  long *unaff_x19;
  int *unaff_x20;
  undefined8 uVar28;
  long *plVar29;
  long lVar30;
  ulong unaff_x24;
  long lVar31;
  long *unaff_x26;
  long lVar32;
  long *unaff_x28;
  uint uVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  float fVar37;
  undefined8 uVar38;
  float fVar39;
  uint uVar40;
  float fVar41;
  float fVar42;
  float unaff_s8;
  float fVar43;
  float unaff_s9;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  uint uStack0000000000000028;
  int in_stack_00000030;
  float fStack0000000000000038;
  float fStack0000000000000040;
  int in_stack_00000058;
  int iStack000000000000006c;
  float fStack0000000000000070;
  uint uStack0000000000000074;
  float fStack0000000000000078;
  long in_stack_00000080;
  float fStack000000000000008c;
  undefined4 in_stack_00000090;
  uint uStack0000000000000098;
  float fStack000000000000009c;
  float fStack00000000000000a0;
  float fStack00000000000000a8;
  undefined8 in_stack_000000b8;
  uint uStack00000000000000c0;
  float fStack00000000000000c4;
  float fStack00000000000000c8;
  float fStack00000000000000d0;
  int iStack00000000000000d4;
  float fStack00000000000000d8;
  float fStack00000000000000dc;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f8;
  float fStack0000000000000100;
  float fStack0000000000000104;
  int iStack0000000000000128;
  undefined4 uStack000000000000012c;
  uint uStack0000000000000158;
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
  
  if (in_x9 == 0) goto LAB_035574b8;
  iVar14 = *unaff_x20;
  if (0 < iVar14) {
    lVar30 = *(long *)(in_x9 + 0x38);
    fVar34 = ABS(unaff_s8);
    fVar37 = 1.0;
    if ((unaff_x24 & 1) == 0) {
      fVar37 = fVar34;
    }
    if (lVar30 == 0) goto LAB_035574b8;
    bVar12 = false;
    bVar10 = false;
    _iStack0000000000000128 = 0;
    bVar9 = false;
    iStack00000000000000d4 = 0;
    uStack0000000000000028 = 0;
    uStack0000000000000158 = 0;
    iStack000000000000006c = 0;
    lVar32 = 0x2e0;
    fVar35 = 0.0;
    fVar49 = 0.0;
    fStack00000000000000c8 = fStack00000000000000d8;
    fStack0000000000000104 =
         *(float *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
    fStack00000000000000d0 = fStack00000000000000dc;
    fStack0000000000000070 = fStack00000000000000dc;
    fStack000000000000009c = fStack00000000000000dc;
    fStack00000000000000a0 = fStack00000000000000d8;
    fStack0000000000000100 = 0.0;
    fStack000000000000008c = 0.0;
    fStack0000000000000040 = 0.0;
    fStack00000000000000a8 = 0.0;
    fStack0000000000000038 = 0.0;
    uStack0000000000000074 = uStack00000000000000c0;
    fStack0000000000000078 = fStack00000000000000d8;
    uStack0000000000000098 = uStack00000000000000c0;
    uVar15 = 1;
    uVar40 = 0;
LAB_03554e78:
    uVar8 = uVar15 - 1;
    if (*(uint *)(lVar30 + 0x18) <= uVar8) goto LAB_035575f4;
    if ((*unaff_x28 == 0) || (lVar20 = *(long *)(*unaff_x28 + 0x50), lVar20 == 0))
    goto LAB_035574b8;
    lVar31 = (long)(int)uVar8;
    lVar22 = lVar30 + lVar31 * 0x178;
    uVar2 = *(uint *)(lVar22 + 100);
    if (*(uint *)(lVar20 + 0x18) <= uVar2) goto LAB_035575f4;
    lVar27 = (long)(int)uVar2;
    lVar20 = lVar20 + lVar27 * 0x5c;
    lVar23 = *(long *)(lVar22 + 0x38);
    uVar4 = *(ushort *)(lVar22 + 0x20);
    uVar6 = *(uint *)(lVar20 + 0x3c);
    uVar33 = *(uint *)(lVar20 + 0x68);
    iVar3 = *(int *)(lVar20 + 0x20);
    iVar14 = *(int *)(lVar20 + 0x28);
    iVar13 = *(int *)(lVar20 + 0x2c);
    uVar7 = *(uint *)(lVar20 + 0x40);
    lVar22 = (long)(int)uVar7;
    fVar39 = *(float *)(lVar20 + 0x4c);
    fVar41 = *(float *)(lVar20 + 0x54);
    fVar45 = *(float *)(lVar20 + 0x58);
    fVar46 = *(float *)(lVar20 + 0x5c);
    fVar43 = *(float *)(lVar20 + 0x60);
    fVar44 = *(float *)(lVar20 + 0x6c);
    fVar48 = *(float *)(lVar20 + 0x70);
    fVar47 = *(float *)(lVar20 + 0x74);
    fVar42 = *(float *)(lVar20 + 0x78);
    uVar26 = (uint)uVar4;
    if ((int)uVar33 < 9) {
      switch(uVar33) {
      case 1:
        if ((char)unaff_x19[0x1e] == '\0') {
          in_stack_000000f8._4_4_ = fVar43 + 0.0;
        }
        else {
          in_stack_000000f8._4_4_ = 0.0 - fVar45;
        }
        break;
      case 2:
LAB_03555018:
        in_stack_000000f8._4_4_ = (fVar43 + fVar46 * 0.5) - fVar45 * 0.5;
        break;
      default:
        goto switchD_03554f58_caseD_3;
      case 4:
        in_stack_000000f8._4_4_ = (fVar46 + fVar43) - fVar45;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar46 + fVar43;
        }
        break;
      case 8:
        goto switchD_03554f58_caseD_8;
      }
LAB_03555088:
      in_stack_000000e8 = 0;
    }
    else if (uVar33 == 0x10) {
switchD_03554f58_caseD_8:
      if (uVar4 < 0xad) {
        if ((uVar4 != 3) && (uVar4 != 10)) {
LAB_03554fac:
          if (*(uint *)(lVar30 + 0x18) <= uVar6) goto LAB_035575f4;
          uVar5 = *(undefined2 *)(lVar30 + (long)(int)uVar6 * 0x178 + 0x20);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar16 = FUN_026b8cc4(uVar5,0);
          if ((uVar16 & 1) == 0) {
            bVar1 = (int)uVar2 < (int)unaff_x19[0x95];
          }
          else {
            bVar1 = false;
          }
          if ((fVar45 <= fVar46) && (!bVar1 && uVar33 >> 4 == 0)) {
            in_stack_000000f8._4_4_ = fVar43;
            if ((char)unaff_x19[0x1e] != '\0') {
              in_stack_000000f8._4_4_ = fVar46 + fVar43;
            }
            goto LAB_03555088;
          }
          if (((uVar15 == 1) || (uVar2 != uVar40)) || (uVar8 == *(uint *)((long)unaff_x19 + 0x324)))
          {
            in_stack_000000f8._4_4_ = fVar43;
            if ((char)unaff_x19[0x1e] != '\0') {
              in_stack_000000f8._4_4_ = fVar46 + fVar43;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uStack0000000000000028 = FUN_026b97f8(uVar26,0);
            in_stack_000000e8 = 0;
          }
          else {
            cVar18 = (char)unaff_x19[0x1e];
            fVar43 = -fVar45;
            if (cVar18 != '\0') {
              fVar43 = fVar45;
            }
            if (*(uint *)(lVar30 + 0x18) <= uVar6) goto LAB_035575f4;
            iVar13 = (int)*(char *)(lVar30 + (long)(int)uVar6 * 0x178 + 0x194) +
                     (-iVar3 - (uStack0000000000000028 & 1)) + iVar13 + -1;
            if (iVar13 < 1) {
              fVar45 = 1.0;
              iVar13 = 1;
            }
            else {
              fVar45 = *(float *)((long)unaff_x19 + 0x2dc);
            }
            if (uVar26 == 9) {
LAB_03556e74:
              fVar45 = 1.0 - fVar45;
            }
            else {
              if (uVar26 != 0xa0) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar16 = FUN_026b97f8(uVar26,0);
                cVar18 = (char)unaff_x19[0x1e];
                if ((uVar16 & 1) != 0) goto LAB_03556e74;
              }
              iVar13 = (iVar3 - (~uStack0000000000000028 & 1)) + iVar14;
            }
            fVar45 = ((fVar46 + fVar43) * fVar45) / (float)iVar13;
            if (cVar18 == '\0') {
              in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar45;
              in_stack_000000e8 =
                   CONCAT44((float)((ulong)in_stack_000000e8 >> 0x20) + 0.0,
                            (float)in_stack_000000e8 + 0.0);
            }
            else {
              in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar45;
            }
          }
        }
      }
      else if (((uVar4 != 0xad) && (uVar4 != 0x200b)) && (uVar4 != 0x2060)) goto LAB_03554fac;
    }
    else if (uVar33 == 0x20) {
      fVar45 = fVar44 + fVar47;
      goto LAB_03555018;
    }
switchD_03554f58_caseD_3:
    uVar33 = (uint)*(undefined8 *)(lVar30 + 0x18);
    if (uVar33 <= uVar8) goto LAB_035575f4;
    lVar20 = lVar30 + lVar31 * 0x178;
    fVar46 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
    fVar45 = (float)in_stack_000000b8 + (float)in_stack_000000e8;
    fVar43 = (float)((ulong)in_stack_000000b8 >> 0x20) + (float)((ulong)in_stack_000000e8 >> 0x20);
    if (*(char *)(lVar20 + 0x194) == '\0') goto LAB_03555938;
    iVar14 = *(int *)(lVar30 + lVar31 * 0x178 + 0x2c);
    if (iVar14 != 0) goto LAB_0355574c;
    fVar35 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar2,1.0);
    switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
    case 0:
      lVar19 = lVar30 + lVar31 * 0x178;
      *(undefined4 *)(lVar19 + 0x84) = 0;
      *(undefined4 *)(lVar19 + 0xac) = 0;
      *(undefined4 *)(lVar19 + 0xd4) = 0x3f800000;
      fVar35 = 1.0;
      break;
    case 1:
      fVar42 = *(float *)(lVar30 + lVar31 * 0x178 + 0x70);
      if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
        lVar19 = lVar30 + lVar31 * 0x178;
        fVar47 = (in_stack_000000f8._4_4_ + fVar42) - *(float *)(in_stack_00000080 + 0x230);
        fVar42 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
        goto LAB_035551cc;
      }
      lVar19 = lVar30 + lVar31 * 0x178;
      fVar47 = fVar47 - fVar44;
      *(float *)(lVar19 + 0x84) = fVar35 + (fVar42 - fVar44) / fVar47;
      *(float *)(lVar19 + 0xac) = fVar35 + (*(float *)(lVar19 + 0x98) - fVar44) / fVar47;
      *(float *)(lVar19 + 0xd4) = fVar35 + (*(float *)(lVar19 + 0xc0) - fVar44) / fVar47;
      fVar35 = fVar35 + (*(float *)(lVar19 + 0xe8) - fVar44) / fVar47;
      break;
    case 2:
      lVar19 = lVar30 + lVar31 * 0x178;
      fVar42 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      fVar47 = (in_stack_000000f8._4_4_ + *(float *)(lVar19 + 0x70)) -
               *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
      *(float *)(lVar19 + 0x84) = fVar35 + fVar47 / fVar42;
      *(float *)(lVar19 + 0xac) =
           fVar35 + ((in_stack_000000f8._4_4_ + *(float *)(lVar19 + 0x98)) -
                    *(float *)(in_stack_00000080 + 0x230)) /
                    (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
      *(float *)(lVar19 + 0xd4) =
           fVar35 + ((in_stack_000000f8._4_4_ + *(float *)(lVar19 + 0xc0)) -
                    *(float *)(in_stack_00000080 + 0x230)) /
                    (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
      fVar35 = fVar35 + ((in_stack_000000f8._4_4_ + *(float *)(lVar19 + 0xe8)) -
                        *(float *)(in_stack_00000080 + 0x230)) /
                        (*(float *)(in_stack_00000080 + 0x238) -
                        *(float *)(in_stack_00000080 + 0x230));
      break;
    case 3:
      switch((int)unaff_x19[0x62]) {
      case 0:
        lVar19 = lVar30 + lVar31 * 0x178;
        *(undefined4 *)(lVar19 + 0x88) = 0;
        *(undefined4 *)(lVar19 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar19 + 0xd8) = 0;
        *(undefined4 *)(lVar19 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar19 = lVar30 + lVar31 * 0x178;
        fVar42 = fVar42 - fVar48;
        fVar47 = fVar35 + (*(float *)(lVar19 + 0x74) - fVar48) / fVar42;
        fVar42 = fVar35 + (*(float *)(lVar19 + 0x9c) - fVar48) / fVar42;
        *(float *)(lVar19 + 0x88) = fVar47;
        *(float *)(lVar19 + 0xb0) = fVar42;
        *(float *)(lVar19 + 0xd8) = fVar47;
        *(float *)(lVar19 + 0x100) = fVar42;
        break;
      case 2:
        lVar19 = lVar30 + lVar31 * 0x178;
        fVar47 = fVar35 + (*(float *)(lVar19 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                          (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
        *(float *)(lVar19 + 0x88) = fVar47;
        fVar42 = *(float *)(unaff_x19 + 0x9c);
        fVar44 = *(float *)(unaff_x19 + 0x9d);
        *(float *)(lVar19 + 0xd8) = fVar47;
        fVar47 = fVar35 + (*(float *)(lVar19 + 0x9c) - fVar42) / (fVar44 - fVar42);
        *(float *)(lVar19 + 0xb0) = fVar47;
        *(float *)(lVar19 + 0x100) = fVar47;
        break;
      case 3:
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
        uVar33 = (uint)*(undefined8 *)(lVar30 + 0x18);
      }
      if (uVar33 <= uVar8) goto LAB_035575f4;
      lVar19 = lVar30 + lVar31 * 0x178;
      fVar47 = *(float *)(lVar19 + 0x15c);
      fVar42 = (1.0 - (*(float *)(lVar19 + 0x88) + *(float *)(lVar19 + 0xb0)) * fVar47) * 0.5;
      fVar44 = fVar35 + *(float *)(lVar19 + 0x88) * fVar47 + fVar42;
      fVar35 = fVar35 + fVar42 + *(float *)(lVar19 + 0xb0) * fVar47;
      *(float *)(lVar19 + 0x84) = fVar44;
      *(float *)(lVar19 + 0xac) = fVar44;
      *(float *)(lVar19 + 0xd4) = fVar35;
      break;
    default:
      goto switchD_0355512c_default;
    }
    *(float *)(lVar30 + lVar31 * 0x178 + 0xfc) = fVar35;
switchD_0355512c_default:
    switch((int)unaff_x19[0x62]) {
    case 0:
      if (uVar33 <= uVar8) goto LAB_035575f4;
      lVar19 = lVar30 + lVar31 * 0x178;
      *(undefined4 *)(lVar19 + 0x88) = 0;
      *(undefined4 *)(lVar19 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar19 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar19 + 0x100) = 0;
      break;
    case 1:
      if (uVar8 < uVar33) {
        lVar19 = lVar30 + lVar31 * 0x178;
        fVar39 = fVar39 - fVar41;
        fVar35 = (*(float *)(lVar19 + 0x74) - fVar41) / fVar39;
        fVar39 = (*(float *)(lVar19 + 0x9c) - fVar41) / fVar39;
        *(float *)(lVar19 + 0x88) = fVar35;
        goto UnityEngine_Animator__set_stabilizeFeet;
      }
      goto LAB_035575f4;
    case 2:
      if (uVar33 <= uVar8) goto LAB_035575f4;
      lVar19 = lVar30 + lVar31 * 0x178;
      fVar35 = (*(float *)(lVar19 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
               (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar19 + 0x88) = fVar35;
      fVar39 = (*(float *)(lVar19 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
               (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
      *(float *)(lVar19 + 0xb0) = fVar39;
      *(float *)(lVar19 + 0xd8) = fVar39;
      *(float *)(lVar19 + 0x100) = fVar35;
      break;
    case 3:
      if (uVar33 <= uVar8) goto LAB_035575f4;
      lVar19 = lVar30 + lVar31 * 0x178;
      fVar39 = *(float *)(lVar19 + 0x15c);
      fVar47 = (1.0 - (*(float *)(lVar19 + 0x84) + *(float *)(lVar19 + 0xd4)) / fVar39) * 0.5;
      fVar35 = *(float *)(lVar19 + 0x84) / fVar39 + fVar47;
      fVar47 = fVar47 + *(float *)(lVar19 + 0xd4) / fVar39;
      *(float *)(lVar19 + 0x88) = fVar35;
      *(float *)(lVar19 + 0xb0) = fVar47;
      *(float *)(lVar19 + 0x100) = fVar35;
      *(float *)(lVar19 + 0xd8) = fVar47;
    }
    if (uVar33 <= uVar8) goto LAB_035575f4;
    lVar19 = lVar30 + lVar31 * 0x178;
    fVar35 = *(float *)(lVar19 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    if ((*(char *)(lVar19 + 0x5c) == '\0') && ((*(byte *)(lVar30 + lVar31 * 0x178 + 400) & 1) != 0))
    {
      fVar35 = -fVar35;
    }
    fVar47 = fVar34;
    if (((in_stack_00000058 == 2) || (fVar47 = fVar37, in_stack_00000058 == 1)) ||
       (fVar47 = fVar34 / unaff_s9, in_stack_00000058 == 0)) {
      fVar35 = fVar47 * fVar35;
    }
    lVar19 = lVar30 + lVar31 * 0x178;
    fVar39 = *(float *)(lVar19 + 0x88);
    fVar42 = *(float *)(lVar19 + 0x84);
    fVar47 = -2.1474836e+09;
    if (fVar42 != INFINITY) {
      fVar47 = (float)(int)fVar42;
    }
    fVar44 = *(float *)(lVar19 + 0xd4);
    fVar48 = *(float *)(lVar19 + 0xd8);
    fVar41 = -2.1474836e+09;
    if (fVar39 != INFINITY) {
      fVar41 = (float)(int)fVar39;
    }
    uVar36 = FUN_03591d3c(fVar42 - fVar47,fVar39 - fVar41);
    *(undefined4 *)(lVar19 + 0x84) = uVar36;
    if (*(uint *)(lVar30 + 0x18) <= uVar8) goto LAB_035575f4;
    fVar48 = fVar48 - fVar41;
    *(float *)(lVar19 + 0x88) = fVar35;
    uVar36 = FUN_03591d3c(fVar42 - fVar47,fVar48);
    *(undefined4 *)(lVar30 + lVar31 * 0x178 + 0xac) = uVar36;
    if (*(uint *)(lVar30 + 0x18) <= uVar8) goto LAB_035575f4;
    fVar44 = fVar44 - fVar47;
    *(float *)(lVar30 + lVar31 * 0x178 + 0xb0) = fVar35;
    fVar47 = (float)FUN_03591d3c(fVar44,fVar48);
    *(float *)(lVar19 + 0xd4) = fVar47;
    if (*(uint *)(lVar30 + 0x18) <= uVar8) goto LAB_035575f4;
    *(float *)(lVar19 + 0xd8) = fVar35;
    uVar36 = FUN_03591d3c(fVar44,fVar39 - fVar41);
    *(undefined4 *)(lVar30 + lVar31 * 0x178 + 0xfc) = uVar36;
    uVar33 = (uint)*(undefined8 *)(lVar30 + 0x18);
    if (uVar33 <= uVar8) goto LAB_035575f4;
    *(float *)(lVar30 + lVar31 * 0x178 + 0x100) = fVar35;
LAB_0355574c:
    if (((int)uVar8 < (int)unaff_x19[0x65]) &&
       (iStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
      if (((int)uVar2 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
        if (uVar33 <= uVar8) goto LAB_035575f4;
        lVar20 = lVar30 + lVar31 * 0x178;
        *(ulong *)(lVar20 + 0x70) =
             CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar20 + 0x70) >> 0x20),
                      fVar46 + (float)*(undefined8 *)(lVar20 + 0x70));
        *(float *)(lVar20 + 0x78) = fVar43 + *(float *)(lVar20 + 0x78);
        *(ulong *)(lVar20 + 0x98) =
             CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar20 + 0x98) >> 0x20),
                      fVar46 + (float)*(undefined8 *)(lVar20 + 0x98));
        *(float *)(lVar20 + 0xa0) = fVar43 + *(float *)(lVar20 + 0xa0);
        *(ulong *)(lVar20 + 0xc0) =
             CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar20 + 0xc0) >> 0x20),
                      fVar46 + (float)*(undefined8 *)(lVar20 + 0xc0));
        *(float *)(lVar20 + 200) = fVar43 + *(float *)(lVar20 + 200);
        *(ulong *)(lVar20 + 0xe8) =
             CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar20 + 0xe8) >> 0x20),
                      fVar46 + (float)*(undefined8 *)(lVar20 + 0xe8));
        *(float *)(lVar20 + 0xf0) = fVar43 + *(float *)(lVar20 + 0xf0);
        goto UnityEngine_Animator__GetAnimatorClipInfoCount;
      }
      if (((int)uVar2 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
        if (uVar8 < uVar33) {
          if (*(int *)(lVar30 + lVar31 * 0x178 + 0x68) == in_stack_00000030) {
            lVar20 = lVar30 + lVar31 * 0x178;
            *(ulong *)(lVar20 + 0x70) =
                 CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar20 + 0x70) >> 0x20),
                          fVar46 + (float)*(undefined8 *)(lVar20 + 0x70));
            *(float *)(lVar20 + 0x78) = fVar43 + *(float *)(lVar20 + 0x78);
            *(ulong *)(lVar20 + 0x98) =
                 CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar20 + 0x98) >> 0x20),
                          fVar46 + (float)*(undefined8 *)(lVar20 + 0x98));
            *(float *)(lVar20 + 0xa0) = fVar43 + *(float *)(lVar20 + 0xa0);
            *(ulong *)(lVar20 + 0xc0) =
                 CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar20 + 0xc0) >> 0x20),
                          fVar46 + (float)*(undefined8 *)(lVar20 + 0xc0));
            *(float *)(lVar20 + 200) = fVar43 + *(float *)(lVar20 + 200);
            *(ulong *)(lVar20 + 0xe8) =
                 CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar20 + 0xe8) >> 0x20),
                          fVar46 + (float)*(undefined8 *)(lVar20 + 0xe8));
            *(float *)(lVar20 + 0xf0) = fVar43 + *(float *)(lVar20 + 0xf0);
            goto UnityEngine_Animator__GetAnimatorClipInfoCount;
          }
          goto UnityEngine_Animator__GetAnimatorTransitionInfo;
        }
        goto LAB_035575f4;
      }
    }
UnityEngine_Animator__GetAnimatorTransitionInfo:
    if (uVar33 <= uVar8) goto LAB_035575f4;
    if (DAT_0411f172 == '\0') {
      FUN_01ab69ac(PTR_DAT_03cbded8);
      DAT_0411f172 = '\x01';
      uVar33 = *(uint *)(lVar30 + 0x18);
    }
    puVar11 = PTR_DAT_03cbded8;
    uVar36 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
    lVar19 = lVar30 + lVar31 * 0x178;
    *(undefined8 *)(lVar19 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
    *(undefined4 *)(lVar19 + 0x78) = uVar36;
    if (uVar33 <= uVar8) goto LAB_035575f4;
    uVar36 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
    lVar19 = lVar30 + lVar31 * 0x178;
    *(undefined8 *)(lVar19 + 0x98) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
    *(undefined4 *)(lVar19 + 0xa0) = uVar36;
    uVar36 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
    *(undefined8 *)(lVar19 + 0xc0) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
    *(undefined4 *)(lVar19 + 200) = uVar36;
    uVar36 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
    *(undefined8 *)(lVar19 + 0xe8) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
    *(undefined4 *)(lVar19 + 0xf0) = uVar36;
    *(undefined1 *)(lVar20 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
    if (iVar14 == 0) {
      pcVar21 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
      (*pcVar21)();
    }
    else if (iVar14 == 1) {
      pcVar21 = *(code **)(*unaff_x19 + 0x8c8);
      goto LAB_0355591c;
    }
LAB_03555938:
    if ((*in_stack_00000170 == 0) || (lVar20 = *(long *)(*in_stack_00000170 + 0x38), lVar20 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar20 + 0x18) <= uVar8) goto LAB_035575f4;
    lVar20 = lVar20 + lVar31 * 0x178;
    uVar38 = *(undefined8 *)(lVar20 + 0x11c);
    *(undefined8 *)(lVar20 + 0x11c) =
         CONCAT44(fVar45 + (float)((ulong)uVar38 >> 0x20),fVar46 + (float)uVar38);
    *(float *)(lVar20 + 0x124) = fVar43 + *(float *)(lVar20 + 0x124);
    if ((*in_stack_00000170 == 0) || (lVar20 = *(long *)(*in_stack_00000170 + 0x38), lVar20 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar20 + 0x18) <= uVar8) goto LAB_035575f4;
    lVar20 = lVar20 + lVar31 * 0x178;
    *(ulong *)(lVar20 + 0x110) =
         CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar20 + 0x110) >> 0x20),
                  fVar46 + (float)*(undefined8 *)(lVar20 + 0x110));
    *(float *)(lVar20 + 0x118) = fVar43 + *(float *)(lVar20 + 0x118);
    if ((*in_stack_00000170 == 0) || (lVar20 = *(long *)(*in_stack_00000170 + 0x38), lVar20 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar20 + 0x18) <= uVar8) goto LAB_035575f4;
    lVar20 = lVar20 + lVar31 * 0x178;
    *(ulong *)(lVar20 + 0x128) =
         CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar20 + 0x128) >> 0x20),
                  fVar46 + (float)*(undefined8 *)(lVar20 + 0x128));
    *(float *)(lVar20 + 0x130) = fVar43 + *(float *)(lVar20 + 0x130);
    if ((*in_stack_00000170 == 0) || (lVar20 = *(long *)(*in_stack_00000170 + 0x38), lVar20 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar20 + 0x18) <= uVar8) goto LAB_035575f4;
    lVar20 = lVar20 + lVar31 * 0x178;
    *(float *)(lVar20 + 0x134) = fVar46 + *(float *)(lVar20 + 0x134);
    *(ulong *)(lVar20 + 0x138) =
         CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar20 + 0x138) >> 0x20),
                  fVar45 + (float)*(undefined8 *)(lVar20 + 0x138));
    lVar20 = *in_stack_00000170;
    if ((lVar20 == 0) || (lVar19 = *(long *)(lVar20 + 0x38), lVar19 == 0)) goto LAB_035574b8;
    uVar33 = *(uint *)(lVar19 + 0x18);
    if (uVar33 <= uVar8) goto LAB_035575f4;
    lVar24 = lVar19 + lVar31 * 0x178;
    param_2 = CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar24 + 0x140) >> 0x20),
                       fVar46 + (float)*(undefined8 *)(lVar24 + 0x140));
    fVar47 = fVar45 + *(float *)(lVar24 + 0x150);
    param_3 = (ulong)(uint)fVar47;
    param_4 = CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar24 + 0x148) >> 0x20),
                       fVar45 + (float)*(undefined8 *)(lVar24 + 0x148));
    *(float *)(lVar24 + 0x150) = fVar47;
    *(ulong *)(lVar24 + 0x140) = param_2;
    *(ulong *)(lVar24 + 0x148) = param_4;
    if (uVar2 == uVar40) {
      uVar40 = *unaff_x20 - 1;
      if (uVar8 == uVar40) goto LAB_03555b44;
    }
    else {
      lVar20 = *(long *)(lVar20 + 0x50);
      if (lVar20 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar20 + 0x18) <= uVar40) goto LAB_035575f4;
      lVar24 = (long)(int)uVar40;
      lVar25 = lVar20 + lVar24 * 0x5c;
      param_4 = (ulong)(uint)*(float *)(lVar25 + 0x58);
      fVar47 = fVar45 + *(float *)(lVar25 + 0x54);
      param_2 = (ulong)(uint)fVar47;
      fVar39 = fVar46 + *(float *)(lVar25 + 0x58);
      param_3 = (ulong)(uint)fVar39;
      *(ulong *)(lVar25 + 0x4c) =
           CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar25 + 0x4c) >> 0x20),
                    fVar45 + (float)*(undefined8 *)(lVar25 + 0x4c));
      *(float *)(lVar25 + 0x54) = fVar47;
      *(float *)(lVar25 + 0x58) = fVar39;
      if (uVar33 <= *(uint *)(lVar25 + 0x34)) goto LAB_035575f4;
      uVar36 = *(undefined4 *)(lVar19 + (long)(int)*(uint *)(lVar25 + 0x34) * 0x178 + 0x11c);
      lVar20 = lVar20 + lVar24 * 0x5c;
      *(float *)(lVar20 + 0x70) = fVar47;
      *(undefined4 *)(lVar20 + 0x6c) = uVar36;
      lVar20 = *in_stack_00000170;
      if ((lVar20 == 0) || (lVar19 = *(long *)(lVar20 + 0x50), lVar19 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar19 + 0x18) <= uVar40) goto LAB_035575f4;
      lVar20 = *(long *)(lVar20 + 0x38);
      if (lVar20 == 0) goto LAB_035574b8;
      uVar40 = *(uint *)(lVar19 + lVar24 * 0x5c + 0x40);
      if (*(uint *)(lVar20 + 0x18) <= uVar40) goto LAB_035575f4;
      lVar19 = lVar19 + lVar24 * 0x5c;
      *(undefined4 *)(lVar19 + 0x74) = *(undefined4 *)(lVar20 + (long)(int)uVar40 * 0x178 + 0x128);
      *(undefined4 *)(lVar19 + 0x78) = *(undefined4 *)(lVar19 + 0x4c);
      uVar40 = *unaff_x20 - 1;
LAB_03555b44:
      if (uVar8 == uVar40) {
        lVar20 = *in_stack_00000170;
        if ((lVar20 == 0) || (lVar19 = *(long *)(lVar20 + 0x50), lVar19 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar19 + 0x18) <= uVar2) goto LAB_035575f4;
        lVar24 = lVar19 + lVar27 * 0x5c;
        param_4 = (ulong)(uint)*(float *)(lVar24 + 0x58);
        param_2 = CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar24 + 0x4c) >> 0x20),
                           fVar45 + (float)*(undefined8 *)(lVar24 + 0x4c));
        fVar47 = fVar45 + *(float *)(lVar24 + 0x54);
        fVar46 = fVar46 + *(float *)(lVar24 + 0x58);
        param_3 = (ulong)(uint)fVar46;
        *(ulong *)(lVar24 + 0x4c) = param_2;
        *(float *)(lVar24 + 0x54) = fVar47;
        *(float *)(lVar24 + 0x58) = fVar46;
        lVar20 = *(long *)(lVar20 + 0x38);
        if (lVar20 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar20 + 0x18) <= *(uint *)(lVar24 + 0x34)) goto LAB_035575f4;
        uVar36 = *(undefined4 *)(lVar20 + (long)(int)*(uint *)(lVar24 + 0x34) * 0x178 + 0x11c);
        lVar19 = lVar19 + lVar27 * 0x5c;
        *(float *)(lVar19 + 0x70) = fVar47;
        *(undefined4 *)(lVar19 + 0x6c) = uVar36;
        lVar20 = *in_stack_00000170;
        if ((lVar20 == 0) || (lVar19 = *(long *)(lVar20 + 0x50), lVar19 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar19 + 0x18) <= uVar2) goto LAB_035575f4;
        lVar20 = *(long *)(lVar20 + 0x38);
        if (lVar20 == 0) goto LAB_035574b8;
        uVar40 = *(uint *)(lVar19 + lVar27 * 0x5c + 0x40);
        if (*(uint *)(lVar20 + 0x18) <= uVar40) goto LAB_035575f4;
        lVar19 = lVar19 + lVar27 * 0x5c;
        *(undefined4 *)(lVar19 + 0x74) = *(undefined4 *)(lVar20 + (long)(int)uVar40 * 0x178 + 0x128)
        ;
        *(undefined4 *)(lVar19 + 0x78) = *(undefined4 *)(lVar19 + 0x4c);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar16 = FUN_026b82c4(uVar26,0);
    if (((((uVar16 & 1) == 0) && (1 < uVar26 - 0x2010)) && (uVar26 != 0xad)) && (uVar26 != 0x2d)) {
      if (bVar10) {
        if (((uVar15 != 1) && ((int)uVar8 < (int)(*(uint *)(lVar30 + 0x18) - 1))) &&
           (((int)uVar8 < *unaff_x20 && ((uVar26 == 0x2019 || (uVar26 == 0x27)))))) {
          if (*(uint *)(lVar30 + 0x18) <= uVar15 - 2) goto LAB_035575f4;
          uVar5 = *(undefined2 *)(lVar30 + lVar32 + -0x438);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar16 = FUN_026b82c4(uVar5,0);
          if ((uVar16 & 1) != 0) {
            if (*(uint *)(lVar30 + 0x18) <= uVar15) goto LAB_035575f4;
            uVar5 = *(undefined2 *)(lVar30 + lVar32 + -0x148);
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar16 = FUN_026b82c4(uVar5,0);
            if ((uVar16 & 1) != 0) goto LAB_03555d68;
          }
        }
      }
      else {
        if (uVar15 != 1) {
LAB_0355686c:
          bVar10 = false;
          goto LAB_03555d70;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar16 = FUN_026b81f8(uVar26,0);
        if ((uVar16 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar16 = FUN_026b63d8(uVar26,0);
          if (((uVar26 != 0x200b) && ((uVar16 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0355686c;
        }
      }
      if (uVar8 == *unaff_x20 - 1U) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar16 = FUN_026b82c4(uVar26,0);
        iVar14 = iStack0000000000000128;
        if ((uVar16 & 1) == 0) goto LAB_03556070;
      }
      else {
LAB_03556070:
        iVar14 = uVar15 - 2;
      }
      lVar20 = *in_stack_00000170;
      if (lVar20 == 0) goto LAB_035574b8;
      lVar19 = *(long *)(lVar20 + 0x40);
      if (lVar19 == 0) goto LAB_035574b8;
      uVar40 = *(uint *)(lVar20 + 0x24);
      iVar13 = *(int *)(lVar19 + 0x18);
      if (iVar13 < (int)(uVar40 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar20 + 0x40),iVar13 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar20 = *in_stack_00000170;
        if (lVar20 == 0) goto LAB_035574b8;
      }
      lVar20 = *(long *)(lVar20 + 0x40);
      if (lVar20 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar20 + 0x18) <= uVar40) goto LAB_035575f4;
      lVar20 = lVar20 + (long)(int)uVar40 * 0x18;
      *(long **)(lVar20 + 0x20) = unaff_x19;
      *(uint *)(lVar20 + 0x28) = uStack0000000000000158;
      *(int *)(lVar20 + 0x2c) = iVar14;
      *(uint *)(lVar20 + 0x30) = (iVar14 - uStack0000000000000158) + 1;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar20 = unaff_x19[0x6d];
      if (lVar20 == 0) goto LAB_035574b8;
      lVar19 = *(long *)(lVar20 + 0x50);
      *(int *)(lVar20 + 0x24) = *(int *)(lVar20 + 0x24) + 1;
      if (lVar19 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar19 + 0x18) <= uVar2) goto LAB_035575f4;
      lVar19 = lVar19 + lVar27 * 0x5c;
      bVar10 = false;
      iStack00000000000000d4 = iStack00000000000000d4 + 1;
      *(int *)(lVar19 + 0x30) = *(int *)(lVar19 + 0x30) + 1;
    }
    else {
      if (!bVar10) {
        uStack0000000000000158 = uVar8;
      }
      if (uVar8 == *unaff_x20 - 1U) {
        lVar20 = *in_stack_00000170;
        if (lVar20 == 0) goto LAB_035574b8;
        lVar19 = *(long *)(lVar20 + 0x40);
        if (lVar19 == 0) goto LAB_035574b8;
        uVar40 = *(uint *)(lVar20 + 0x24);
        iVar14 = *(int *)(lVar19 + 0x18);
        if (iVar14 < (int)(uVar40 + 1)) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff025c((long *)(lVar20 + 0x40),iVar14 + 1,
                       *(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
          lVar20 = *in_stack_00000170;
          if (lVar20 == 0) goto LAB_035574b8;
        }
        lVar20 = *(long *)(lVar20 + 0x40);
        if (lVar20 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar20 + 0x18) <= uVar40) goto LAB_035575f4;
        lVar20 = lVar20 + (long)(int)uVar40 * 0x18;
        *(long **)(lVar20 + 0x20) = unaff_x19;
        *(uint *)(lVar20 + 0x28) = uStack0000000000000158;
        *(uint *)(lVar20 + 0x2c) = uVar8;
        *(uint *)(lVar20 + 0x30) = uVar15 - uStack0000000000000158;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar20 = unaff_x19[0x6d];
        if (lVar20 == 0) goto LAB_035574b8;
        lVar19 = *(long *)(lVar20 + 0x50);
        *(int *)(lVar20 + 0x24) = *(int *)(lVar20 + 0x24) + 1;
        if (lVar19 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar19 + 0x18) <= uVar2) goto LAB_035575f4;
        lVar19 = lVar19 + lVar27 * 0x5c;
        iStack00000000000000d4 = iStack00000000000000d4 + 1;
        *(int *)(lVar19 + 0x30) = *(int *)(lVar19 + 0x30) + 1;
      }
LAB_03555d68:
      bVar10 = true;
    }
LAB_03555d70:
    if ((*in_stack_00000170 == 0) || (lVar20 = *(long *)(*in_stack_00000170 + 0x38), lVar20 == 0))
    goto LAB_035574b8;
    uVar40 = *(uint *)(lVar20 + 0x18);
    if (uVar40 <= uVar8) goto LAB_035575f4;
    if ((*(byte *)(lVar20 + lVar31 * 0x178 + 400) >> 2 & 1) == 0) {
      if (bVar12) {
LAB_03555da0:
        if (uVar40 <= uVar15 - 2) goto LAB_035575f4;
        lVar27 = *unaff_x19;
        uVar40 = *(uint *)(lVar20 + lVar32 + -0x330);
        uVar36 = *(undefined4 *)(lVar20 + lVar32 + -0x2f8);
LAB_035562ec:
        pcVar21 = *(code **)(lVar27 + 0x8d8);
LAB_035562f4:
        param_4 = (ulong)uVar40;
        param_2 = (ulong)(uint)fStack0000000000000070;
        param_3 = (ulong)uStack0000000000000074;
        (*pcVar21)(fStack0000000000000078,param_2,param_3,param_4,fStack0000000000000104,0,
                   fStack000000000000008c,uVar36);
        puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar20 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar20 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar20 = *(long *)puVar11;
        }
LAB_03556348:
        bVar12 = false;
        fVar49 = 0.0;
        fStack0000000000000104 = *(float *)(*(long *)(lVar20 + 0xb8) + 0x15a8);
        fStack0000000000000100 = 0.0;
      }
      else {
LAB_03556254:
        bVar12 = false;
      }
    }
    else {
      lVar20 = lVar20 + lVar31 * 0x178;
      iVar14 = *(int *)(lVar20 + 0x68);
      *(undefined4 *)(lVar20 + 0x16c) = in_stack_000017c4;
      if ((((int)unaff_x19[0x65] < (int)uVar8) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
         (((int)unaff_x19[0x5c] == 5 && (iVar14 + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar16 = FUN_026b63d8(uVar26,0);
      if ((uVar26 != 0x200b) && ((uVar16 & 1) == 0)) {
        lVar20 = *in_stack_00000170;
        if ((lVar20 == 0) || (lVar27 = *(long *)(lVar20 + 0x38), lVar27 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar27 + 0x18) <= uVar8) goto LAB_035575f4;
        fVar47 = *(float *)(lVar27 + lVar31 * 0x178 + 0x160);
        if (fVar49 <= fVar47) {
          fVar49 = fVar47;
        }
        if (fStack0000000000000100 <= ABS(fVar35)) {
          fStack0000000000000100 = ABS(fVar35);
        }
        if (iVar14 != iStack000000000000006c) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar20 = *in_stack_00000170;
            if (lVar20 == 0) goto LAB_035574b8;
            lVar27 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          else {
            lVar27 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          fStack0000000000000104 = *(float *)(lVar27 + 0x15a8);
        }
        lVar20 = *(long *)(lVar20 + 0x38);
        if (lVar20 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar20 + 0x18) <= uVar8) goto LAB_035575f4;
        if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
        fVar39 = *(float *)(lVar20 + lVar31 * 0x178 + 0x14c);
        fVar47 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
        fVar39 = fVar39 + fVar49 * fVar47;
        if (fVar39 <= fStack0000000000000104) {
          fStack0000000000000104 = fVar39;
        }
        param_2 = (ulong)(uint)fStack0000000000000104;
        iStack000000000000006c = iVar14;
      }
      if (!bVar12) {
        bVar12 = false;
        if ((((uVar26 == 0xd) || ((uVar26 & 0xfffe) == 10)) || ((int)uVar7 < (int)uVar8)) ||
           ((bool)(bVar1 ^ 1))) goto LAB_03556364;
        if (uVar8 == uVar7) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar16 = FUN_026b97f8(uVar26,0);
          if ((uVar16 & 1) != 0) goto LAB_03556254;
        }
        if ((*in_stack_00000170 == 0) ||
           (lVar20 = *(long *)(*in_stack_00000170 + 0x38), lVar20 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar20 + 0x18) <= uVar8) goto LAB_035575f4;
        lVar20 = lVar20 + lVar31 * 0x178;
        fStack000000000000008c = *(float *)(lVar20 + 0x160);
        fStack0000000000000078 = *(float *)(lVar20 + 0x11c);
        param_3 = (ulong)(uint)fStack0000000000000078;
        bVar12 = fVar49 != 0.0;
        fVar47 = fStack000000000000008c;
        if (bVar12) {
          fVar47 = fVar49;
        }
        fVar49 = fVar47;
        in_stack_00000090 = *(undefined4 *)(lVar20 + 0x168);
        uStack0000000000000074 = 0;
        fVar47 = fVar35;
        if (bVar12) {
          fVar47 = fStack0000000000000100;
        }
        param_2 = (ulong)(uint)fVar47;
        fStack0000000000000070 = fStack0000000000000104;
        fStack0000000000000100 = fVar47;
      }
      if (*unaff_x20 == 1) {
        if ((*in_stack_00000170 != 0) &&
           (lVar20 = *(long *)(*in_stack_00000170 + 0x38), lVar20 != 0)) {
          if (uVar8 < *(uint *)(lVar20 + 0x18)) {
            lVar20 = lVar20 + lVar31 * 0x178;
            lVar27 = *unaff_x19;
            uVar40 = *(uint *)(lVar20 + 0x128);
            uVar36 = *(undefined4 *)(lVar20 + 0x160);
            goto LAB_035562ec;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
      if ((uVar8 == uVar6) || ((int)uVar7 <= (int)uVar8)) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar16 = FUN_026b63d8(uVar26,0);
        if ((*in_stack_00000170 != 0) &&
           (lVar20 = *(long *)(*in_stack_00000170 + 0x38), lVar20 != 0)) {
          lVar27 = lVar31;
          uVar40 = uVar8;
          if (uVar26 == 0x200b || (uVar16 & 1) != 0) {
            lVar27 = lVar22;
            uVar40 = uVar7;
          }
          if (uVar40 < *(uint *)(lVar20 + 0x18)) {
            lVar20 = lVar20 + lVar27 * 0x178;
            uVar40 = *(uint *)(lVar20 + 0x128);
            uVar36 = *(undefined4 *)(lVar20 + 0x160);
            pcVar21 = *(code **)(*unaff_x19 + 0x8d8);
            goto LAB_035562f4;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
      if (!bVar1) {
        if ((*in_stack_00000170 != 0) &&
           (lVar20 = *(long *)(*in_stack_00000170 + 0x38), lVar20 != 0)) {
          uVar40 = *(uint *)(lVar20 + 0x18);
          goto LAB_03555da0;
        }
        goto LAB_035574b8;
      }
      if ((int)uVar8 < *unaff_x20 + -1) {
        if ((*in_stack_00000170 == 0) ||
           (lVar20 = *(long *)(*in_stack_00000170 + 0x38), lVar20 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar20 + 0x18) <= uVar15) goto LAB_035575f4;
        uVar16 = FUN_03567ad8(in_stack_00000090,*(undefined4 *)(lVar20 + lVar32),0);
        if ((uVar16 & 1) == 0) {
          if ((*in_stack_00000170 != 0) &&
             (lVar20 = *(long *)(*in_stack_00000170 + 0x38), lVar20 != 0)) {
            if (uVar8 < *(uint *)(lVar20 + 0x18)) {
              lVar20 = lVar20 + lVar31 * 0x178;
              param_4 = (ulong)*(uint *)(lVar20 + 0x128);
              param_3 = (ulong)uStack0000000000000074;
              param_2 = (ulong)(uint)fStack0000000000000070;
              (**(code **)(*unaff_x19 + 0x8d8))
                        (fStack0000000000000078,param_2,param_3,param_4,fStack0000000000000104,0,
                         fStack000000000000008c,*(undefined4 *)(lVar20 + 0x160));
              puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
              lVar20 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar20 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar20 = *(long *)puVar11;
              }
              goto LAB_03556348;
            }
            goto LAB_035575f4;
          }
          goto LAB_035574b8;
        }
      }
      bVar12 = true;
    }
LAB_03556364:
    if ((*in_stack_00000170 == 0) || (lVar20 = *(long *)(*in_stack_00000170 + 0x38), lVar20 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar20 + 0x18) <= uVar8) goto LAB_035575f4;
    if (lVar23 == 0) goto LAB_035574b8;
    uVar40 = *(uint *)(lVar20 + lVar31 * 0x178 + 400);
    fVar47 = (float)FUN_03776a30(lVar23 + 0x50,0);
    if ((uVar40 >> 6 & 1) == 0) {
      if ((_iStack0000000000000128 & 0x100000000) != 0) {
        if ((*in_stack_00000170 == 0) ||
           (lVar20 = *(long *)(*in_stack_00000170 + 0x38), lVar20 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar20 + 0x18) <= uVar15 - 2) goto LAB_035575f4;
        uVar40 = *(uint *)(lVar20 + lVar32 + -0x330);
        fVar45 = *(float *)(lVar20 + lVar32 + -0x30c);
        pcVar21 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
        param_4 = (ulong)uVar40;
        param_2 = (ulong)(uint)fStack000000000000009c;
        param_3 = (ulong)uStack0000000000000098;
        (*pcVar21)(fStack00000000000000a0,param_2,param_3,param_4,
                   fStack00000000000000a8 * fVar47 + fVar45,0,fStack00000000000000a8,
                   fStack00000000000000a8);
      }
LAB_03556948:
      _iStack0000000000000128 = _iStack0000000000000128 & 0xffffffff;
    }
    else {
      lVar20 = *in_stack_00000170;
      if ((lVar20 == 0) || (lVar27 = *(long *)(lVar20 + 0x38), lVar27 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar8) goto LAB_035575f4;
      *(undefined4 *)(lVar27 + lVar31 * 0x178 + 0x174) = in_stack_000017c4;
      if ((((int)unaff_x19[0x65] < (int)uVar8) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
         (((int)unaff_x19[0x5c] == 5 &&
          (*(int *)(lVar27 + lVar31 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((((uVar26 == 0xd) || ((uVar26 & 0xfffe) == 10)) || ((int)uVar7 < (int)uVar8)) ||
         ((_iStack0000000000000128 & 0x100000000) != 0 || !bVar1)) {
LAB_035564e8:
        if ((_iStack0000000000000128 & 0x100000000) == 0) goto LAB_03556948;
      }
      else {
        if (uVar8 == uVar7) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar16 = FUN_026b97f8(uVar26,0);
          if ((uVar16 & 1) != 0) goto LAB_035564e8;
          lVar20 = *in_stack_00000170;
          if (lVar20 == 0) goto LAB_035574b8;
        }
        lVar20 = *(long *)(lVar20 + 0x38);
        if (lVar20 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar20 + 0x18) <= uVar8) goto LAB_035575f4;
        lVar20 = lVar20 + lVar31 * 0x178;
        fStack0000000000000040 = *(float *)(lVar20 + 0x60);
        fStack0000000000000038 = *(float *)(lVar20 + 0x14c);
        param_2 = (ulong)(uint)fStack0000000000000038;
        fStack00000000000000a0 = *(float *)(lVar20 + 0x11c);
        param_3 = (ulong)(uint)fStack00000000000000a0;
        fStack00000000000000a8 = *(float *)(lVar20 + 0x160);
        fStack000000000000009c = fVar47 * fStack00000000000000a8 + fStack0000000000000038;
        uStack0000000000000098 = 0;
      }
      iVar14 = *unaff_x20;
      if (iVar14 == 1) {
LAB_03556628:
        if ((*in_stack_00000170 != 0) &&
           (lVar20 = *(long *)(*in_stack_00000170 + 0x38), lVar20 != 0)) {
          if (uVar8 < *(uint *)(lVar20 + 0x18)) {
            lVar20 = lVar20 + lVar31 * 0x178;
            lVar22 = *unaff_x19;
            uVar40 = *(uint *)(lVar20 + 0x128);
            fVar45 = *(float *)(lVar20 + 0x14c);
LAB_03556654:
            pcVar21 = *(code **)(lVar22 + 0x8d8);
            goto LAB_03556914;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
      if (uVar8 == uVar6) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar16 = FUN_026b63d8(uVar26,0);
        if ((*in_stack_00000170 != 0) &&
           (lVar20 = *(long *)(*in_stack_00000170 + 0x38), lVar20 != 0)) {
          uVar40 = *(uint *)(lVar20 + 0x18);
          if (uVar26 == 0x200b || (uVar16 & 1) != 0) {
            if (uVar40 <= uVar7) goto LAB_035575f4;
          }
          else {
FUN_035568e8:
            lVar22 = lVar31;
            if (uVar40 <= uVar8) goto LAB_035575f4;
          }
LAB_035568f0:
          lVar20 = lVar20 + lVar22 * 0x178;
          fVar45 = *(float *)(lVar20 + 0x14c);
          uVar40 = *(uint *)(lVar20 + 0x128);
          pcVar21 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_03556914;
        }
        goto LAB_035574b8;
      }
      if ((int)uVar8 < iVar14) {
        lVar20 = *in_stack_00000170;
        if ((lVar20 != 0) && (lVar27 = *(long *)(lVar20 + 0x38), lVar27 != 0)) {
          if (uVar15 < *(uint *)(lVar27 + 0x18)) {
            if (*(float *)(lVar27 + lVar32 + -0x108) == fStack0000000000000040) {
              fVar39 = *(float *)(lVar27 + lVar32 + -0x1c);
              if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              param_2 = (ulong)(uint)fStack0000000000000038;
              uVar16 = FUN_03567bac(fVar45 + fVar39,param_2,0);
              if ((uVar16 & 1) != 0) {
                iVar14 = *unaff_x20;
                goto LAB_03556744;
              }
              lVar20 = *in_stack_00000170;
              if (lVar20 == 0) goto LAB_035574b8;
            }
            lVar20 = *(long *)(lVar20 + 0x38);
            if (lVar20 != 0) {
              uVar40 = *(uint *)(lVar20 + 0x18);
              if ((int)uVar8 <= (int)uVar7) goto FUN_035568e8;
              if (uVar7 < uVar40) goto LAB_035568f0;
              goto LAB_035575f4;
            }
            goto LAB_035574b8;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
LAB_03556744:
      if ((int)uVar8 < iVar14) {
        iVar14 = FUN_036d3364(lVar23,0);
        if (*(uint *)(lVar30 + 0x18) <= uVar15) goto LAB_035575f4;
        lVar20 = *(long *)(lVar30 + lVar32 + -0x130);
        if (lVar20 == 0) goto LAB_035574b8;
        iVar13 = FUN_036d3364(lVar20,0);
        if (iVar14 != iVar13) goto LAB_03556628;
      }
      if (!bVar1) {
        if ((*in_stack_00000170 != 0) &&
           (lVar20 = *(long *)(*in_stack_00000170 + 0x38), lVar20 != 0)) {
          if (uVar15 - 2 < *(uint *)(lVar20 + 0x18)) {
            lVar22 = *unaff_x19;
            uVar40 = *(uint *)(lVar20 + lVar32 + -0x330);
            fVar45 = *(float *)(lVar20 + lVar32 + -0x30c);
            goto LAB_03556654;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
      _iStack0000000000000128 = CONCAT44(1,iStack0000000000000128);
    }
    if ((*in_stack_00000170 == 0) || (lVar20 = *(long *)(*in_stack_00000170 + 0x38), lVar20 == 0))
    goto LAB_035574b8;
    uVar40 = (uint)*(undefined8 *)(lVar20 + 0x18);
    if (uVar40 <= uVar8) goto LAB_035575f4;
    if ((*(byte *)(lVar20 + lVar31 * 0x178 + 0x191) >> 1 & 1) == 0) {
      if (bVar9) {
        param_3 = (ulong)uStack00000000000000c0;
        param_2 = (ulong)(uint)fStack00000000000000dc;
        param_4 = (ulong)(uint)fStack00000000000000c8;
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000d8,param_2,param_3,param_4,fStack00000000000000d0,param_3);
      }
LAB_035569b4:
      bVar9 = false;
    }
    else {
      if ((((int)unaff_x19[0x65] < (int)uVar8) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
         (((int)unaff_x19[0x5c] == 5 &&
          (*(int *)(lVar20 + lVar31 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar9) {
        if ((((uVar26 == 0xd) || ((uVar26 & 0xfffe) == 10)) || ((int)uVar7 < (int)uVar8)) ||
           (!bVar1)) goto LAB_035569b4;
        if (uVar8 == uVar7) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar16 = FUN_026b97f8(uVar26,0);
          if ((uVar16 & 1) != 0) goto LAB_035569b4;
        }
        puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar22 = *(long *)puVar11;
        }
        if ((*in_stack_00000170 == 0) ||
           (lVar20 = *(long *)(*in_stack_00000170 + 0x38), lVar20 == 0)) goto LAB_035574b8;
        uVar40 = (uint)*(undefined8 *)(lVar20 + 0x18);
        if (uVar40 <= uVar8) goto LAB_035575f4;
        lVar22 = *(long *)(lVar22 + 0xb8);
        lVar23 = lVar20 + lVar31 * 0x178;
        in_stack_000017b8 = *(undefined8 *)(lVar23 + 0x184);
        in_stack_000017b0 = *(undefined8 *)(lVar23 + 0x17c);
        fStack00000000000000d8 = *(float *)(lVar22 + 0x1598);
        fStack00000000000000dc = *(float *)(lVar22 + 0x159c);
        in_stack_000017c0 = *(float *)(lVar23 + 0x18c);
        fStack00000000000000c8 = *(float *)(lVar22 + 0x15a0);
        fStack00000000000000d0 = *(float *)(lVar22 + 0x15a4);
        uStack00000000000000c0 = 0;
      }
      if (uVar40 <= uVar8) goto LAB_035575f4;
      lVar20 = lVar20 + lVar31 * 0x178;
      fVar47 = *(float *)(lVar20 + 0x128);
      fVar41 = *(float *)(lVar20 + 0x188);
      uVar28 = *(undefined8 *)(lVar20 + 0x17c);
      fVar44 = *(float *)(lVar20 + 0x184);
      uVar38 = *(undefined8 *)(lVar20 + 0x184);
      fVar43 = *(float *)(lVar20 + 0x18c);
      fVar45 = *(float *)(lVar20 + 0x11c);
      fVar42 = *(float *)(lVar20 + 0x148);
      fVar39 = *(float *)(lVar20 + 0x150);
      in_stack_00000178 = uVar28;
      fStack0000000000000180 = fVar44;
      fStack0000000000000184 = fVar41;
      in_stack_00000188 = fVar43;
      in_stack_00000190 = in_stack_000017b0;
      in_stack_00000198 = in_stack_000017b8;
      in_stack_000001a0 = in_stack_000017c0;
      uVar16 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
      lVar20 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if ((uVar16 & 1) == 0) {
        if (*(int *)(lVar20 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar20);
        }
        fVar47 = fVar47 + (float)in_stack_000017b8;
        param_3 = (ulong)(uint)fVar47;
        fVar45 = fVar45 - (float)((ulong)in_stack_000017b0 >> 0x20);
        fVar39 = fVar39 - in_stack_000017c0;
        param_2 = (ulong)(uint)fVar39;
        fVar42 = fVar42 + (float)((ulong)in_stack_000017b8 >> 0x20);
        param_4 = (ulong)(uint)fVar42;
        if (fVar45 <= fStack00000000000000d8) {
          fStack00000000000000d8 = fVar45;
        }
        if (fVar39 <= fStack00000000000000dc) {
          fStack00000000000000dc = fVar39;
        }
        if (fStack00000000000000c8 <= fVar47) {
          fStack00000000000000c8 = fVar47;
        }
        if (fStack00000000000000d0 <= fVar42) {
          fStack00000000000000d0 = fVar42;
        }
      }
      else {
        if (*(int *)(lVar20 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar20);
        }
        fVar45 = (fVar45 + (fStack00000000000000c8 - (float)in_stack_000017b8)) * 0.5;
        param_4 = (ulong)(uint)fVar45;
        if (fVar39 <= fStack00000000000000dc) {
          fStack00000000000000dc = fVar39;
        }
        param_2 = (ulong)(uint)fStack00000000000000dc;
        param_3 = (ulong)uStack00000000000000c0;
        if (fStack00000000000000d0 <= fVar42) {
          fStack00000000000000d0 = fVar42;
        }
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000d8,param_2,param_3,param_4,fStack00000000000000d0,param_3);
        fStack00000000000000dc = fVar39 - fVar43;
        fStack00000000000000c8 = fVar47 + fVar44;
        uStack00000000000000c0 = 0;
        fStack00000000000000d0 = fVar42 + fVar41;
        fStack00000000000000d8 = fVar45;
        in_stack_000017b0 = uVar28;
        in_stack_000017b8 = uVar38;
        in_stack_000017c0 = fVar43;
      }
      if (((*unaff_x20 == 1) || (uVar8 == uVar6)) || (((int)uVar7 <= (int)uVar8 || (!bVar1)))) {
        param_3 = (ulong)uStack00000000000000c0;
        param_2 = (ulong)(uint)fStack00000000000000dc;
        param_4 = (ulong)(uint)fStack00000000000000c8;
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000d8,param_2,param_3,param_4,fStack00000000000000d0,param_3);
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
    }
    iVar14 = *unaff_x20;
    lVar32 = lVar32 + 0x178;
    _iStack0000000000000128 = CONCAT44(uStack000000000000012c,iStack0000000000000128 + 1);
    bVar1 = iVar14 <= (int)uVar15;
    unaff_x28 = in_stack_00000170;
    uVar15 = uVar15 + 1;
    uVar40 = uVar2;
    if (bVar1) goto FUN_03556ed8;
    goto LAB_03554e78;
  }
  iStack00000000000000d4 = 0;
  iVar13 = 0;
  in_stack_00000170 = unaff_x28;
  goto LAB_03556f00;
FUN_03556ed8:
  in_x9 = *in_stack_00000170;
  if (in_x9 == 0) goto LAB_035574b8;
  iVar13 = uVar2 + 1;
  unaff_x26 = (long *)OVRPlugin_Media_TypeInfo;
LAB_03556f00:
  *(int *)(in_x9 + 0x18) = iVar14;
  lVar30 = unaff_x19[0xd4];
  *(int *)(in_x9 + 0x2c) = iVar13;
  if (iVar14 < 1 || iStack00000000000000d4 == 0) {
    iStack00000000000000d4 = 1;
  }
  *(int *)(in_x9 + 0x1c) = (int)lVar30;
  *(int *)(in_x9 + 0x24) = iStack00000000000000d4;
  *(int *)(in_x9 + 0x30) = (int)unaff_x19[0x96] + 1;
  if (((int)unaff_x19[99] != 0xff) ||
     (uVar16 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar16 & 1) == 0)) {
LAB_03554724:
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_03567630();
    return;
  }
  lVar30 = unaff_x19[0xdf];
  if (lVar30 != 0) {
    (**(code **)(lVar30 + 0x18))
              (*(undefined8 *)(lVar30 + 0x40),*in_stack_00000170,*(undefined8 *)(lVar30 + 0x28));
  }
  if (unaff_x19[0xe5] != 0) {
    iVar14 = FUN_03911ee4(unaff_x19[0xe5],0);
    if (iVar14 != 0x19) {
      lVar30 = unaff_x19[0xe5];
      if (lVar30 == 0) goto LAB_035574b8;
      uVar15 = FUN_03911ee4(lVar30,0);
      FUN_03911f20(lVar30,uVar15 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x60), lVar30 == 0))
      goto LAB_035574b8;
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar30 + 0x18) == 0) goto LAB_035575f4;
      FUN_03596b20(lVar30 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar30 = *(long *)(unaff_x19[0x6d] + 0x60), lVar30 != 0)) {
        if (*(int *)(lVar30 + 0x18) == 0) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar30 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar30 = *(long *)(unaff_x19[0x6d] + 0x60), lVar30 != 0)) {
            if (*(int *)(lVar30 + 0x18) == 0) goto LAB_035575f4;
            if (unaff_x19[0x74] != 0) {
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar30 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar30 = *(long *)(unaff_x19[0x6d] + 0x60), lVar30 != 0)) {
                if (*(int *)(lVar30 + 0x18) == 0) goto LAB_035575f4;
                if (unaff_x19[0x74] != 0) {
                  FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar30 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar30 = *(long *)(unaff_x19[0x6d] + 0x60), lVar30 != 0)) {
                    if (*(int *)(lVar30 + 0x18) == 0) goto LAB_035575f4;
                    if (unaff_x19[0x74] != 0) {
                      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar30 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_036aa280(unaff_x19[0x74],0);
                        if (unaff_x19[0xe4] != 0) {
                          FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
                          if (unaff_x19[0xe4] != 0) {
                            uVar38 = FUN_0390ef60(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar15 = FUN_0390ed3c(unaff_x19[0xe4],0);
                              lVar30 = *in_stack_00000170;
                              if (lVar30 != 0) {
                                lVar20 = 0;
                                lVar32 = 0;
                                do {
                                  uVar16 = lVar32 + 1;
                                  if ((long)*(int *)(lVar30 + 0x34) <= (long)uVar16)
                                  goto LAB_03554724;
                                  lVar30 = *(long *)(lVar30 + 0x60);
                                  if (lVar30 == 0) break;
                                  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  if (*(uint *)(lVar30 + 0x18) <= uVar16) goto LAB_035575f4;
                                  FUN_03596a20(lVar30 + lVar20 + 0x70,0);
                                  lVar30 = unaff_x19[0xe1];
                                  if (lVar30 == 0) break;
                                  if (*(uint *)(lVar30 + 0x18) <= uVar16) goto LAB_035575f4;
                                  uVar28 = *(undefined8 *)(lVar30 + lVar32 * 8 + 0x28);
                                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar17 = FUN_036d35a8(uVar28,0,0);
                                  if ((uVar17 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                      if ((*in_stack_00000170 == 0) ||
                                         (lVar30 = *(long *)(*in_stack_00000170 + 0x60), lVar30 == 0
                                         )) break;
                                      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      if (*(uint *)(lVar30 + 0x18) <= uVar16) goto LAB_035575f4;
                                      FUN_03596b20(lVar30 + lVar20 + 0x70,1,0);
                                    }
                                    lVar30 = unaff_x19[0xe1];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar16) goto LAB_035575f4;
                                    lVar30 = *(long *)(lVar30 + lVar32 * 8 + 0x28);
                                    if (lVar30 == 0) break;
                                    lVar30 = UnityEngine_Material__GetColorArray(lVar30,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar22 = *(long *)(*in_stack_00000170 + 0x60), lVar22 == 0))
                                    break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar16) goto LAB_035575f4;
                                    if (lVar30 == 0) break;
                                    FUN_036a460c(lVar30,*(undefined8 *)(lVar22 + lVar20 + 0x80),0);
                                    lVar30 = unaff_x19[0xe1];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar16) goto LAB_035575f4;
                                    lVar30 = *(long *)(lVar30 + lVar32 * 8 + 0x28);
                                    if (lVar30 == 0) break;
                                    lVar30 = UnityEngine_Material__GetColorArray(lVar30,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar22 = *(long *)(*in_stack_00000170 + 0x60), lVar22 == 0))
                                    break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar16) goto LAB_035575f4;
                                    if (lVar30 == 0) break;
                                    FUN_036a4810(lVar30,*(undefined8 *)(lVar22 + lVar20 + 0x98),0);
                                    lVar30 = unaff_x19[0xe1];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar16) goto LAB_035575f4;
                                    lVar30 = *(long *)(lVar30 + lVar32 * 8 + 0x28);
                                    if (lVar30 == 0) break;
                                    lVar30 = UnityEngine_Material__GetColorArray(lVar30,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar22 = *(long *)(*in_stack_00000170 + 0x60), lVar22 == 0))
                                    break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar16) goto LAB_035575f4;
                                    if (lVar30 == 0) break;
                                    FUN_036a48bc(lVar30,*(undefined8 *)(lVar22 + lVar20 + 0xa0),0);
                                    lVar30 = unaff_x19[0xe1];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar16) goto LAB_035575f4;
                                    lVar30 = *(long *)(lVar30 + lVar32 * 8 + 0x28);
                                    if (lVar30 == 0) break;
                                    lVar30 = UnityEngine_Material__GetColorArray(lVar30,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar22 = *(long *)(*in_stack_00000170 + 0x60), lVar22 == 0))
                                    break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar16) goto LAB_035575f4;
                                    if (lVar30 == 0) break;
                                    FUN_036a4e24(lVar30,*(undefined8 *)(lVar22 + lVar20 + 0xa8),0);
                                    lVar30 = unaff_x19[0xe1];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar16) goto LAB_035575f4;
                                    lVar30 = *(long *)(lVar30 + lVar32 * 8 + 0x28);
                                    if ((lVar30 == 0) ||
                                       (lVar30 = UnityEngine_Material__GetColorArray(lVar30,0),
                                       lVar30 == 0)) break;
                                    FUN_036aa280(lVar30,0);
                                    lVar30 = unaff_x19[0xe1];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar16) goto LAB_035575f4;
                                    lVar30 = *(long *)(lVar30 + lVar32 * 8 + 0x28);
                                    if (lVar30 == 0) break;
                                    lVar30 = FUN_037b514c(lVar30,0);
                                    lVar22 = unaff_x19[0xe1];
                                    if (lVar22 == 0) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar16) goto LAB_035575f4;
                                    lVar22 = *(long *)(lVar22 + lVar32 * 8 + 0x28);
                                    if ((lVar22 == 0) ||
                                       (uVar28 = UnityEngine_Material__GetColorArray(lVar22,0),
                                       lVar30 == 0)) break;
                                    FUN_0390f3a4(lVar30,uVar28,0);
                                    lVar30 = unaff_x19[0xe1];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar16) goto LAB_035575f4;
                                    lVar30 = *(long *)(lVar30 + lVar32 * 8 + 0x28);
                                    if ((lVar30 == 0) ||
                                       (lVar30 = FUN_037b514c(lVar30,0), lVar30 == 0)) break;
                                    FUN_0390eec8(uVar38,param_2,param_3,param_4,lVar30,0);
                                    lVar30 = unaff_x19[0xe1];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar16) goto LAB_035575f4;
                                    lVar30 = *(long *)(lVar30 + lVar32 * 8 + 0x28);
                                    if ((lVar30 == 0) ||
                                       (lVar30 = FUN_037b514c(lVar30,0), lVar30 == 0)) break;
                                    FUN_0390ed78(lVar30,uVar15 & 1,0);
                                    lVar30 = unaff_x19[0xe1];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar16) goto LAB_035575f4;
                                    plVar29 = *(long **)(lVar30 + lVar32 * 8 + 0x28);
                                    uVar40 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar29 == (long *)0x0) break;
                                    (**(code **)(*plVar29 + 0x2c8))
                                              (plVar29,uVar40 & 1,*(undefined8 *)(*plVar29 + 0x2d0))
                                    ;
                                  }
                                  lVar30 = *in_stack_00000170;
                                  lVar32 = lVar32 + 1;
                                  lVar20 = lVar20 + 0x50;
                                } while (lVar30 != 0);
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
LAB_035574b8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


