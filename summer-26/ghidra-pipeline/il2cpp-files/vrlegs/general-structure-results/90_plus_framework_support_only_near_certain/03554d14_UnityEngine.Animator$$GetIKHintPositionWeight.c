/*
FUNCTION_NAME: UnityEngine.Animator$$GetIKHintPositionWeight
ENTRY_POINT: 03554d14
PROGRAM: vrlegs-libil2cpp.so
SCORE: 169
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_6;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_6
*/


void UnityEngine_Animator__GetIKHintPositionWeight(long *param_1)

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
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  char cVar20;
  undefined4 *puVar21;
  long lVar22;
  long lVar23;
  code *pcVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  uint uVar29;
  long lVar30;
  long *unaff_x19;
  int *unaff_x20;
  undefined8 uVar31;
  long *plVar32;
  ulong unaff_x24;
  long lVar33;
  long *unaff_x26;
  long lVar34;
  long *unaff_x28;
  uint uVar35;
  float fVar36;
  float fVar37;
  undefined4 uVar38;
  float fVar39;
  ulong uVar40;
  undefined8 uVar41;
  float fVar42;
  uint uVar43;
  ulong uVar44;
  float fVar45;
  float fVar46;
  float unaff_s8;
  float fVar47;
  float unaff_s9;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
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
  
  if (*(int *)(*param_1 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*param_1);
  }
  if (DAT_0412df1c == '\0') {
    FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
    DAT_0412df1c = '\x01';
  }
  puVar11 = OVRPlugin_Mesh_TypeInfo;
  lVar16 = *(long *)OVRPlugin_Mesh_TypeInfo;
  if (*(int *)(lVar16 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar16 = *(long *)puVar11;
  }
  puVar21 = *(undefined4 **)(lVar16 + 0xb8);
  uVar18 = (ulong)(uint)puVar21[1];
  uVar40 = (ulong)(uint)puVar21[2];
  uVar44 = (ulong)(uint)puVar21[3];
  FUN_035683a4(*puVar21,uVar18,uVar40,uVar44,&stack0x000017b0,0x4000ffff,0);
  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar16 = *unaff_x28;
  if (lVar16 == 0) goto LAB_035574b8;
  iVar14 = *unaff_x20;
  if (0 < iVar14) {
    lVar16 = *(long *)(lVar16 + 0x38);
    fVar36 = ABS(unaff_s8);
    fVar39 = 1.0;
    if ((unaff_x24 & 1) == 0) {
      fVar39 = fVar36;
    }
    if (lVar16 == 0) goto LAB_035574b8;
    bVar12 = false;
    bVar10 = false;
    _iStack0000000000000128 = 0;
    bVar9 = false;
    iStack00000000000000d4 = 0;
    uStack0000000000000028 = 0;
    uStack0000000000000158 = 0;
    iStack000000000000006c = 0;
    lVar34 = 0x2e0;
    fVar37 = 0.0;
    fVar53 = 0.0;
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
    uVar43 = 0;
LAB_03554e78:
    uVar8 = uVar15 - 1;
    if (*(uint *)(lVar16 + 0x18) <= uVar8) goto LAB_035575f4;
    if ((*unaff_x28 == 0) || (lVar23 = *(long *)(*unaff_x28 + 0x50), lVar23 == 0))
    goto LAB_035574b8;
    lVar33 = (long)(int)uVar8;
    lVar25 = lVar16 + lVar33 * 0x178;
    uVar2 = *(uint *)(lVar25 + 100);
    if (*(uint *)(lVar23 + 0x18) <= uVar2) goto LAB_035575f4;
    lVar30 = (long)(int)uVar2;
    lVar23 = lVar23 + lVar30 * 0x5c;
    lVar26 = *(long *)(lVar25 + 0x38);
    uVar4 = *(ushort *)(lVar25 + 0x20);
    uVar6 = *(uint *)(lVar23 + 0x3c);
    uVar35 = *(uint *)(lVar23 + 0x68);
    iVar3 = *(int *)(lVar23 + 0x20);
    iVar14 = *(int *)(lVar23 + 0x28);
    iVar13 = *(int *)(lVar23 + 0x2c);
    uVar7 = *(uint *)(lVar23 + 0x40);
    lVar25 = (long)(int)uVar7;
    fVar42 = *(float *)(lVar23 + 0x4c);
    fVar45 = *(float *)(lVar23 + 0x54);
    fVar49 = *(float *)(lVar23 + 0x58);
    fVar50 = *(float *)(lVar23 + 0x5c);
    fVar47 = *(float *)(lVar23 + 0x60);
    fVar48 = *(float *)(lVar23 + 0x6c);
    fVar52 = *(float *)(lVar23 + 0x70);
    fVar51 = *(float *)(lVar23 + 0x74);
    fVar46 = *(float *)(lVar23 + 0x78);
    uVar29 = (uint)uVar4;
    if ((int)uVar35 < 9) {
      switch(uVar35) {
      case 1:
        if ((char)unaff_x19[0x1e] == '\0') {
          in_stack_000000f8._4_4_ = fVar47 + 0.0;
        }
        else {
          in_stack_000000f8._4_4_ = 0.0 - fVar49;
        }
        break;
      case 2:
LAB_03555018:
        in_stack_000000f8._4_4_ = (fVar47 + fVar50 * 0.5) - fVar49 * 0.5;
        break;
      default:
        goto switchD_03554f58_caseD_3;
      case 4:
        in_stack_000000f8._4_4_ = (fVar50 + fVar47) - fVar49;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar50 + fVar47;
        }
        break;
      case 8:
        goto switchD_03554f58_caseD_8;
      }
LAB_03555088:
      in_stack_000000e8 = 0;
    }
    else if (uVar35 == 0x10) {
switchD_03554f58_caseD_8:
      if (uVar4 < 0xad) {
        if ((uVar4 != 3) && (uVar4 != 10)) {
LAB_03554fac:
          if (*(uint *)(lVar16 + 0x18) <= uVar6) goto LAB_035575f4;
          uVar5 = *(undefined2 *)(lVar16 + (long)(int)uVar6 * 0x178 + 0x20);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar18 = FUN_026b8cc4(uVar5,0);
          if ((uVar18 & 1) == 0) {
            bVar1 = (int)uVar2 < (int)unaff_x19[0x95];
          }
          else {
            bVar1 = false;
          }
          if ((fVar49 <= fVar50) && (!bVar1 && uVar35 >> 4 == 0)) {
            in_stack_000000f8._4_4_ = fVar47;
            if ((char)unaff_x19[0x1e] != '\0') {
              in_stack_000000f8._4_4_ = fVar50 + fVar47;
            }
            goto LAB_03555088;
          }
          if (((uVar15 == 1) || (uVar2 != uVar43)) || (uVar8 == *(uint *)((long)unaff_x19 + 0x324)))
          {
            in_stack_000000f8._4_4_ = fVar47;
            if ((char)unaff_x19[0x1e] != '\0') {
              in_stack_000000f8._4_4_ = fVar50 + fVar47;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uStack0000000000000028 = FUN_026b97f8(uVar29,0);
            in_stack_000000e8 = 0;
          }
          else {
            cVar20 = (char)unaff_x19[0x1e];
            fVar47 = -fVar49;
            if (cVar20 != '\0') {
              fVar47 = fVar49;
            }
            if (*(uint *)(lVar16 + 0x18) <= uVar6) goto LAB_035575f4;
            iVar13 = (int)*(char *)(lVar16 + (long)(int)uVar6 * 0x178 + 0x194) +
                     (-iVar3 - (uStack0000000000000028 & 1)) + iVar13 + -1;
            if (iVar13 < 1) {
              fVar49 = 1.0;
              iVar13 = 1;
            }
            else {
              fVar49 = *(float *)((long)unaff_x19 + 0x2dc);
            }
            if (uVar29 == 9) {
LAB_03556e74:
              fVar49 = 1.0 - fVar49;
            }
            else {
              if (uVar29 != 0xa0) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar18 = FUN_026b97f8(uVar29,0);
                cVar20 = (char)unaff_x19[0x1e];
                if ((uVar18 & 1) != 0) goto LAB_03556e74;
              }
              iVar13 = (iVar3 - (~uStack0000000000000028 & 1)) + iVar14;
            }
            fVar49 = ((fVar50 + fVar47) * fVar49) / (float)iVar13;
            if (cVar20 == '\0') {
              in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar49;
              in_stack_000000e8 =
                   CONCAT44((float)((ulong)in_stack_000000e8 >> 0x20) + 0.0,
                            (float)in_stack_000000e8 + 0.0);
            }
            else {
              in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar49;
            }
          }
        }
      }
      else if (((uVar4 != 0xad) && (uVar4 != 0x200b)) && (uVar4 != 0x2060)) goto LAB_03554fac;
    }
    else if (uVar35 == 0x20) {
      fVar49 = fVar48 + fVar51;
      goto LAB_03555018;
    }
switchD_03554f58_caseD_3:
    uVar35 = (uint)*(undefined8 *)(lVar16 + 0x18);
    if (uVar35 <= uVar8) goto LAB_035575f4;
    lVar23 = lVar16 + lVar33 * 0x178;
    fVar50 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
    fVar49 = (float)in_stack_000000b8 + (float)in_stack_000000e8;
    fVar47 = (float)((ulong)in_stack_000000b8 >> 0x20) + (float)((ulong)in_stack_000000e8 >> 0x20);
    if (*(char *)(lVar23 + 0x194) == '\0') goto LAB_03555938;
    iVar14 = *(int *)(lVar16 + lVar33 * 0x178 + 0x2c);
    if (iVar14 != 0) goto LAB_0355574c;
    fVar37 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar2,1.0);
    switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
    case 0:
      lVar22 = lVar16 + lVar33 * 0x178;
      *(undefined4 *)(lVar22 + 0x84) = 0;
      *(undefined4 *)(lVar22 + 0xac) = 0;
      *(undefined4 *)(lVar22 + 0xd4) = 0x3f800000;
      fVar37 = 1.0;
      break;
    case 1:
      fVar46 = *(float *)(lVar16 + lVar33 * 0x178 + 0x70);
      if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
        lVar22 = lVar16 + lVar33 * 0x178;
        fVar51 = (in_stack_000000f8._4_4_ + fVar46) - *(float *)(in_stack_00000080 + 0x230);
        fVar46 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
        goto LAB_035551cc;
      }
      lVar22 = lVar16 + lVar33 * 0x178;
      fVar51 = fVar51 - fVar48;
      *(float *)(lVar22 + 0x84) = fVar37 + (fVar46 - fVar48) / fVar51;
      *(float *)(lVar22 + 0xac) = fVar37 + (*(float *)(lVar22 + 0x98) - fVar48) / fVar51;
      *(float *)(lVar22 + 0xd4) = fVar37 + (*(float *)(lVar22 + 0xc0) - fVar48) / fVar51;
      fVar37 = fVar37 + (*(float *)(lVar22 + 0xe8) - fVar48) / fVar51;
      break;
    case 2:
      lVar22 = lVar16 + lVar33 * 0x178;
      fVar46 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      fVar51 = (in_stack_000000f8._4_4_ + *(float *)(lVar22 + 0x70)) -
               *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
      *(float *)(lVar22 + 0x84) = fVar37 + fVar51 / fVar46;
      *(float *)(lVar22 + 0xac) =
           fVar37 + ((in_stack_000000f8._4_4_ + *(float *)(lVar22 + 0x98)) -
                    *(float *)(in_stack_00000080 + 0x230)) /
                    (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
      *(float *)(lVar22 + 0xd4) =
           fVar37 + ((in_stack_000000f8._4_4_ + *(float *)(lVar22 + 0xc0)) -
                    *(float *)(in_stack_00000080 + 0x230)) /
                    (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
      fVar37 = fVar37 + ((in_stack_000000f8._4_4_ + *(float *)(lVar22 + 0xe8)) -
                        *(float *)(in_stack_00000080 + 0x230)) /
                        (*(float *)(in_stack_00000080 + 0x238) -
                        *(float *)(in_stack_00000080 + 0x230));
      break;
    case 3:
      switch((int)unaff_x19[0x62]) {
      case 0:
        lVar22 = lVar16 + lVar33 * 0x178;
        *(undefined4 *)(lVar22 + 0x88) = 0;
        *(undefined4 *)(lVar22 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar22 + 0xd8) = 0;
        *(undefined4 *)(lVar22 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar22 = lVar16 + lVar33 * 0x178;
        fVar46 = fVar46 - fVar52;
        fVar51 = fVar37 + (*(float *)(lVar22 + 0x74) - fVar52) / fVar46;
        fVar46 = fVar37 + (*(float *)(lVar22 + 0x9c) - fVar52) / fVar46;
        *(float *)(lVar22 + 0x88) = fVar51;
        *(float *)(lVar22 + 0xb0) = fVar46;
        *(float *)(lVar22 + 0xd8) = fVar51;
        *(float *)(lVar22 + 0x100) = fVar46;
        break;
      case 2:
        lVar22 = lVar16 + lVar33 * 0x178;
        fVar51 = fVar37 + (*(float *)(lVar22 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                          (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
        *(float *)(lVar22 + 0x88) = fVar51;
        fVar46 = *(float *)(unaff_x19 + 0x9c);
        fVar48 = *(float *)(unaff_x19 + 0x9d);
        *(float *)(lVar22 + 0xd8) = fVar51;
        fVar51 = fVar37 + (*(float *)(lVar22 + 0x9c) - fVar46) / (fVar48 - fVar46);
        *(float *)(lVar22 + 0xb0) = fVar51;
        *(float *)(lVar22 + 0x100) = fVar51;
        break;
      case 3:
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
        uVar35 = (uint)*(undefined8 *)(lVar16 + 0x18);
      }
      if (uVar35 <= uVar8) goto LAB_035575f4;
      lVar22 = lVar16 + lVar33 * 0x178;
      fVar51 = *(float *)(lVar22 + 0x15c);
      fVar46 = (1.0 - (*(float *)(lVar22 + 0x88) + *(float *)(lVar22 + 0xb0)) * fVar51) * 0.5;
      fVar48 = fVar37 + *(float *)(lVar22 + 0x88) * fVar51 + fVar46;
      fVar37 = fVar37 + fVar46 + *(float *)(lVar22 + 0xb0) * fVar51;
      *(float *)(lVar22 + 0x84) = fVar48;
      *(float *)(lVar22 + 0xac) = fVar48;
      *(float *)(lVar22 + 0xd4) = fVar37;
      break;
    default:
      goto switchD_0355512c_default;
    }
    *(float *)(lVar16 + lVar33 * 0x178 + 0xfc) = fVar37;
switchD_0355512c_default:
    switch((int)unaff_x19[0x62]) {
    case 0:
      if (uVar35 <= uVar8) goto LAB_035575f4;
      lVar22 = lVar16 + lVar33 * 0x178;
      *(undefined4 *)(lVar22 + 0x88) = 0;
      *(undefined4 *)(lVar22 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar22 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar22 + 0x100) = 0;
      break;
    case 1:
      if (uVar8 < uVar35) {
        lVar22 = lVar16 + lVar33 * 0x178;
        fVar42 = fVar42 - fVar45;
        fVar37 = (*(float *)(lVar22 + 0x74) - fVar45) / fVar42;
        fVar42 = (*(float *)(lVar22 + 0x9c) - fVar45) / fVar42;
        *(float *)(lVar22 + 0x88) = fVar37;
        goto UnityEngine_Animator__set_stabilizeFeet;
      }
      goto LAB_035575f4;
    case 2:
      if (uVar35 <= uVar8) goto LAB_035575f4;
      lVar22 = lVar16 + lVar33 * 0x178;
      fVar37 = (*(float *)(lVar22 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
               (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar22 + 0x88) = fVar37;
      fVar42 = (*(float *)(lVar22 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
               (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
      *(float *)(lVar22 + 0xb0) = fVar42;
      *(float *)(lVar22 + 0xd8) = fVar42;
      *(float *)(lVar22 + 0x100) = fVar37;
      break;
    case 3:
      if (uVar35 <= uVar8) goto LAB_035575f4;
      lVar22 = lVar16 + lVar33 * 0x178;
      fVar42 = *(float *)(lVar22 + 0x15c);
      fVar51 = (1.0 - (*(float *)(lVar22 + 0x84) + *(float *)(lVar22 + 0xd4)) / fVar42) * 0.5;
      fVar37 = *(float *)(lVar22 + 0x84) / fVar42 + fVar51;
      fVar51 = fVar51 + *(float *)(lVar22 + 0xd4) / fVar42;
      *(float *)(lVar22 + 0x88) = fVar37;
      *(float *)(lVar22 + 0xb0) = fVar51;
      *(float *)(lVar22 + 0x100) = fVar37;
      *(float *)(lVar22 + 0xd8) = fVar51;
    }
    if (uVar35 <= uVar8) goto LAB_035575f4;
    lVar22 = lVar16 + lVar33 * 0x178;
    fVar37 = *(float *)(lVar22 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    if ((*(char *)(lVar22 + 0x5c) == '\0') && ((*(byte *)(lVar16 + lVar33 * 0x178 + 400) & 1) != 0))
    {
      fVar37 = -fVar37;
    }
    fVar51 = fVar36;
    if (((in_stack_00000058 == 2) || (fVar51 = fVar39, in_stack_00000058 == 1)) ||
       (fVar51 = fVar36 / unaff_s9, in_stack_00000058 == 0)) {
      fVar37 = fVar51 * fVar37;
    }
    lVar22 = lVar16 + lVar33 * 0x178;
    fVar42 = *(float *)(lVar22 + 0x88);
    fVar46 = *(float *)(lVar22 + 0x84);
    fVar51 = -2.1474836e+09;
    if (fVar46 != INFINITY) {
      fVar51 = (float)(int)fVar46;
    }
    fVar48 = *(float *)(lVar22 + 0xd4);
    fVar52 = *(float *)(lVar22 + 0xd8);
    fVar45 = -2.1474836e+09;
    if (fVar42 != INFINITY) {
      fVar45 = (float)(int)fVar42;
    }
    uVar38 = FUN_03591d3c(fVar46 - fVar51,fVar42 - fVar45);
    *(undefined4 *)(lVar22 + 0x84) = uVar38;
    if (*(uint *)(lVar16 + 0x18) <= uVar8) goto LAB_035575f4;
    fVar52 = fVar52 - fVar45;
    *(float *)(lVar22 + 0x88) = fVar37;
    uVar38 = FUN_03591d3c(fVar46 - fVar51,fVar52);
    *(undefined4 *)(lVar16 + lVar33 * 0x178 + 0xac) = uVar38;
    if (*(uint *)(lVar16 + 0x18) <= uVar8) goto LAB_035575f4;
    fVar48 = fVar48 - fVar51;
    *(float *)(lVar16 + lVar33 * 0x178 + 0xb0) = fVar37;
    fVar51 = (float)FUN_03591d3c(fVar48,fVar52);
    *(float *)(lVar22 + 0xd4) = fVar51;
    if (*(uint *)(lVar16 + 0x18) <= uVar8) goto LAB_035575f4;
    *(float *)(lVar22 + 0xd8) = fVar37;
    uVar38 = FUN_03591d3c(fVar48,fVar42 - fVar45);
    *(undefined4 *)(lVar16 + lVar33 * 0x178 + 0xfc) = uVar38;
    uVar35 = (uint)*(undefined8 *)(lVar16 + 0x18);
    if (uVar35 <= uVar8) goto LAB_035575f4;
    *(float *)(lVar16 + lVar33 * 0x178 + 0x100) = fVar37;
LAB_0355574c:
    if (((int)uVar8 < (int)unaff_x19[0x65]) &&
       (iStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
      if (((int)uVar2 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
        if (uVar35 <= uVar8) goto LAB_035575f4;
        lVar23 = lVar16 + lVar33 * 0x178;
        *(ulong *)(lVar23 + 0x70) =
             CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar23 + 0x70) >> 0x20),
                      fVar50 + (float)*(undefined8 *)(lVar23 + 0x70));
        *(float *)(lVar23 + 0x78) = fVar47 + *(float *)(lVar23 + 0x78);
        *(ulong *)(lVar23 + 0x98) =
             CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar23 + 0x98) >> 0x20),
                      fVar50 + (float)*(undefined8 *)(lVar23 + 0x98));
        *(float *)(lVar23 + 0xa0) = fVar47 + *(float *)(lVar23 + 0xa0);
        *(ulong *)(lVar23 + 0xc0) =
             CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar23 + 0xc0) >> 0x20),
                      fVar50 + (float)*(undefined8 *)(lVar23 + 0xc0));
        *(float *)(lVar23 + 200) = fVar47 + *(float *)(lVar23 + 200);
        *(ulong *)(lVar23 + 0xe8) =
             CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar23 + 0xe8) >> 0x20),
                      fVar50 + (float)*(undefined8 *)(lVar23 + 0xe8));
        *(float *)(lVar23 + 0xf0) = fVar47 + *(float *)(lVar23 + 0xf0);
        goto UnityEngine_Animator__GetAnimatorClipInfoCount;
      }
      if (((int)uVar2 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
        if (uVar8 < uVar35) {
          if (*(int *)(lVar16 + lVar33 * 0x178 + 0x68) == in_stack_00000030) {
            lVar23 = lVar16 + lVar33 * 0x178;
            *(ulong *)(lVar23 + 0x70) =
                 CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar23 + 0x70) >> 0x20),
                          fVar50 + (float)*(undefined8 *)(lVar23 + 0x70));
            *(float *)(lVar23 + 0x78) = fVar47 + *(float *)(lVar23 + 0x78);
            *(ulong *)(lVar23 + 0x98) =
                 CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar23 + 0x98) >> 0x20),
                          fVar50 + (float)*(undefined8 *)(lVar23 + 0x98));
            *(float *)(lVar23 + 0xa0) = fVar47 + *(float *)(lVar23 + 0xa0);
            *(ulong *)(lVar23 + 0xc0) =
                 CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar23 + 0xc0) >> 0x20),
                          fVar50 + (float)*(undefined8 *)(lVar23 + 0xc0));
            *(float *)(lVar23 + 200) = fVar47 + *(float *)(lVar23 + 200);
            *(ulong *)(lVar23 + 0xe8) =
                 CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar23 + 0xe8) >> 0x20),
                          fVar50 + (float)*(undefined8 *)(lVar23 + 0xe8));
            *(float *)(lVar23 + 0xf0) = fVar47 + *(float *)(lVar23 + 0xf0);
            goto UnityEngine_Animator__GetAnimatorClipInfoCount;
          }
          goto UnityEngine_Animator__GetAnimatorTransitionInfo;
        }
        goto LAB_035575f4;
      }
    }
UnityEngine_Animator__GetAnimatorTransitionInfo:
    if (uVar35 <= uVar8) goto LAB_035575f4;
    if (DAT_0411f172 == '\0') {
      FUN_01ab69ac(PTR_DAT_03cbded8);
      DAT_0411f172 = '\x01';
      uVar35 = *(uint *)(lVar16 + 0x18);
    }
    puVar11 = PTR_DAT_03cbded8;
    uVar38 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
    lVar22 = lVar16 + lVar33 * 0x178;
    *(undefined8 *)(lVar22 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
    *(undefined4 *)(lVar22 + 0x78) = uVar38;
    if (uVar35 <= uVar8) goto LAB_035575f4;
    uVar38 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
    lVar22 = lVar16 + lVar33 * 0x178;
    *(undefined8 *)(lVar22 + 0x98) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
    *(undefined4 *)(lVar22 + 0xa0) = uVar38;
    uVar38 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
    *(undefined8 *)(lVar22 + 0xc0) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
    *(undefined4 *)(lVar22 + 200) = uVar38;
    uVar38 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
    *(undefined8 *)(lVar22 + 0xe8) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
    *(undefined4 *)(lVar22 + 0xf0) = uVar38;
    *(undefined1 *)(lVar23 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
    if (iVar14 == 0) {
      pcVar24 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
      (*pcVar24)();
    }
    else if (iVar14 == 1) {
      pcVar24 = *(code **)(*unaff_x19 + 0x8c8);
      goto LAB_0355591c;
    }
LAB_03555938:
    if ((*in_stack_00000170 == 0) || (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar23 + 0x18) <= uVar8) goto LAB_035575f4;
    lVar23 = lVar23 + lVar33 * 0x178;
    uVar41 = *(undefined8 *)(lVar23 + 0x11c);
    *(undefined8 *)(lVar23 + 0x11c) =
         CONCAT44(fVar49 + (float)((ulong)uVar41 >> 0x20),fVar50 + (float)uVar41);
    *(float *)(lVar23 + 0x124) = fVar47 + *(float *)(lVar23 + 0x124);
    if ((*in_stack_00000170 == 0) || (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar23 + 0x18) <= uVar8) goto LAB_035575f4;
    lVar23 = lVar23 + lVar33 * 0x178;
    *(ulong *)(lVar23 + 0x110) =
         CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar23 + 0x110) >> 0x20),
                  fVar50 + (float)*(undefined8 *)(lVar23 + 0x110));
    *(float *)(lVar23 + 0x118) = fVar47 + *(float *)(lVar23 + 0x118);
    if ((*in_stack_00000170 == 0) || (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar23 + 0x18) <= uVar8) goto LAB_035575f4;
    lVar23 = lVar23 + lVar33 * 0x178;
    *(ulong *)(lVar23 + 0x128) =
         CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar23 + 0x128) >> 0x20),
                  fVar50 + (float)*(undefined8 *)(lVar23 + 0x128));
    *(float *)(lVar23 + 0x130) = fVar47 + *(float *)(lVar23 + 0x130);
    if ((*in_stack_00000170 == 0) || (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar23 + 0x18) <= uVar8) goto LAB_035575f4;
    lVar23 = lVar23 + lVar33 * 0x178;
    *(float *)(lVar23 + 0x134) = fVar50 + *(float *)(lVar23 + 0x134);
    *(ulong *)(lVar23 + 0x138) =
         CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)(lVar23 + 0x138) >> 0x20),
                  fVar49 + (float)*(undefined8 *)(lVar23 + 0x138));
    lVar23 = *in_stack_00000170;
    if ((lVar23 == 0) || (lVar22 = *(long *)(lVar23 + 0x38), lVar22 == 0)) goto LAB_035574b8;
    uVar35 = *(uint *)(lVar22 + 0x18);
    if (uVar35 <= uVar8) goto LAB_035575f4;
    lVar27 = lVar22 + lVar33 * 0x178;
    uVar18 = CONCAT44(fVar50 + (float)((ulong)*(undefined8 *)(lVar27 + 0x140) >> 0x20),
                      fVar50 + (float)*(undefined8 *)(lVar27 + 0x140));
    fVar51 = fVar49 + *(float *)(lVar27 + 0x150);
    uVar40 = (ulong)(uint)fVar51;
    uVar44 = CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar27 + 0x148) >> 0x20),
                      fVar49 + (float)*(undefined8 *)(lVar27 + 0x148));
    *(float *)(lVar27 + 0x150) = fVar51;
    *(ulong *)(lVar27 + 0x140) = uVar18;
    *(ulong *)(lVar27 + 0x148) = uVar44;
    if (uVar2 == uVar43) {
      uVar43 = *unaff_x20 - 1;
      if (uVar8 == uVar43) goto LAB_03555b44;
    }
    else {
      lVar23 = *(long *)(lVar23 + 0x50);
      if (lVar23 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar23 + 0x18) <= uVar43) goto LAB_035575f4;
      lVar27 = (long)(int)uVar43;
      lVar28 = lVar23 + lVar27 * 0x5c;
      uVar44 = (ulong)(uint)*(float *)(lVar28 + 0x58);
      fVar51 = fVar49 + *(float *)(lVar28 + 0x54);
      uVar18 = (ulong)(uint)fVar51;
      fVar42 = fVar50 + *(float *)(lVar28 + 0x58);
      uVar40 = (ulong)(uint)fVar42;
      *(ulong *)(lVar28 + 0x4c) =
           CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar28 + 0x4c) >> 0x20),
                    fVar49 + (float)*(undefined8 *)(lVar28 + 0x4c));
      *(float *)(lVar28 + 0x54) = fVar51;
      *(float *)(lVar28 + 0x58) = fVar42;
      if (uVar35 <= *(uint *)(lVar28 + 0x34)) goto LAB_035575f4;
      uVar38 = *(undefined4 *)(lVar22 + (long)(int)*(uint *)(lVar28 + 0x34) * 0x178 + 0x11c);
      lVar23 = lVar23 + lVar27 * 0x5c;
      *(float *)(lVar23 + 0x70) = fVar51;
      *(undefined4 *)(lVar23 + 0x6c) = uVar38;
      lVar23 = *in_stack_00000170;
      if ((lVar23 == 0) || (lVar22 = *(long *)(lVar23 + 0x50), lVar22 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar22 + 0x18) <= uVar43) goto LAB_035575f4;
      lVar23 = *(long *)(lVar23 + 0x38);
      if (lVar23 == 0) goto LAB_035574b8;
      uVar43 = *(uint *)(lVar22 + lVar27 * 0x5c + 0x40);
      if (*(uint *)(lVar23 + 0x18) <= uVar43) goto LAB_035575f4;
      lVar22 = lVar22 + lVar27 * 0x5c;
      *(undefined4 *)(lVar22 + 0x74) = *(undefined4 *)(lVar23 + (long)(int)uVar43 * 0x178 + 0x128);
      *(undefined4 *)(lVar22 + 0x78) = *(undefined4 *)(lVar22 + 0x4c);
      uVar43 = *unaff_x20 - 1;
LAB_03555b44:
      if (uVar8 == uVar43) {
        lVar23 = *in_stack_00000170;
        if ((lVar23 == 0) || (lVar22 = *(long *)(lVar23 + 0x50), lVar22 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar22 + 0x18) <= uVar2) goto LAB_035575f4;
        lVar27 = lVar22 + lVar30 * 0x5c;
        uVar44 = (ulong)(uint)*(float *)(lVar27 + 0x58);
        uVar18 = CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar27 + 0x4c) >> 0x20),
                          fVar49 + (float)*(undefined8 *)(lVar27 + 0x4c));
        fVar51 = fVar49 + *(float *)(lVar27 + 0x54);
        fVar50 = fVar50 + *(float *)(lVar27 + 0x58);
        uVar40 = (ulong)(uint)fVar50;
        *(ulong *)(lVar27 + 0x4c) = uVar18;
        *(float *)(lVar27 + 0x54) = fVar51;
        *(float *)(lVar27 + 0x58) = fVar50;
        lVar23 = *(long *)(lVar23 + 0x38);
        if (lVar23 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar23 + 0x18) <= *(uint *)(lVar27 + 0x34)) goto LAB_035575f4;
        uVar38 = *(undefined4 *)(lVar23 + (long)(int)*(uint *)(lVar27 + 0x34) * 0x178 + 0x11c);
        lVar22 = lVar22 + lVar30 * 0x5c;
        *(float *)(lVar22 + 0x70) = fVar51;
        *(undefined4 *)(lVar22 + 0x6c) = uVar38;
        lVar23 = *in_stack_00000170;
        if ((lVar23 == 0) || (lVar22 = *(long *)(lVar23 + 0x50), lVar22 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar22 + 0x18) <= uVar2) goto LAB_035575f4;
        lVar23 = *(long *)(lVar23 + 0x38);
        if (lVar23 == 0) goto LAB_035574b8;
        uVar43 = *(uint *)(lVar22 + lVar30 * 0x5c + 0x40);
        if (*(uint *)(lVar23 + 0x18) <= uVar43) goto LAB_035575f4;
        lVar22 = lVar22 + lVar30 * 0x5c;
        *(undefined4 *)(lVar22 + 0x74) = *(undefined4 *)(lVar23 + (long)(int)uVar43 * 0x178 + 0x128)
        ;
        *(undefined4 *)(lVar22 + 0x78) = *(undefined4 *)(lVar22 + 0x4c);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar17 = FUN_026b82c4(uVar29,0);
    if (((((uVar17 & 1) == 0) && (1 < uVar29 - 0x2010)) && (uVar29 != 0xad)) && (uVar29 != 0x2d)) {
      if (bVar10) {
        if (((uVar15 != 1) && ((int)uVar8 < (int)(*(uint *)(lVar16 + 0x18) - 1))) &&
           (((int)uVar8 < *unaff_x20 && ((uVar29 == 0x2019 || (uVar29 == 0x27)))))) {
          if (*(uint *)(lVar16 + 0x18) <= uVar15 - 2) goto LAB_035575f4;
          uVar5 = *(undefined2 *)(lVar16 + lVar34 + -0x438);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar17 = FUN_026b82c4(uVar5,0);
          if ((uVar17 & 1) != 0) {
            if (*(uint *)(lVar16 + 0x18) <= uVar15) goto LAB_035575f4;
            uVar5 = *(undefined2 *)(lVar16 + lVar34 + -0x148);
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar17 = FUN_026b82c4(uVar5,0);
            if ((uVar17 & 1) != 0) goto LAB_03555d68;
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
        uVar17 = FUN_026b81f8(uVar29,0);
        if ((uVar17 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar17 = FUN_026b63d8(uVar29,0);
          if (((uVar29 != 0x200b) && ((uVar17 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0355686c;
        }
      }
      if (uVar8 == *unaff_x20 - 1U) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar17 = FUN_026b82c4(uVar29,0);
        iVar14 = iStack0000000000000128;
        if ((uVar17 & 1) == 0) goto LAB_03556070;
      }
      else {
LAB_03556070:
        iVar14 = uVar15 - 2;
      }
      lVar23 = *in_stack_00000170;
      if (lVar23 == 0) goto LAB_035574b8;
      lVar22 = *(long *)(lVar23 + 0x40);
      if (lVar22 == 0) goto LAB_035574b8;
      uVar43 = *(uint *)(lVar23 + 0x24);
      iVar13 = *(int *)(lVar22 + 0x18);
      if (iVar13 < (int)(uVar43 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar23 + 0x40),iVar13 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar23 = *in_stack_00000170;
        if (lVar23 == 0) goto LAB_035574b8;
      }
      lVar23 = *(long *)(lVar23 + 0x40);
      if (lVar23 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar23 + 0x18) <= uVar43) goto LAB_035575f4;
      lVar23 = lVar23 + (long)(int)uVar43 * 0x18;
      *(long **)(lVar23 + 0x20) = unaff_x19;
      *(uint *)(lVar23 + 0x28) = uStack0000000000000158;
      *(int *)(lVar23 + 0x2c) = iVar14;
      *(uint *)(lVar23 + 0x30) = (iVar14 - uStack0000000000000158) + 1;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar23 = unaff_x19[0x6d];
      if (lVar23 == 0) goto LAB_035574b8;
      lVar22 = *(long *)(lVar23 + 0x50);
      *(int *)(lVar23 + 0x24) = *(int *)(lVar23 + 0x24) + 1;
      if (lVar22 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar22 + 0x18) <= uVar2) goto LAB_035575f4;
      lVar22 = lVar22 + lVar30 * 0x5c;
      bVar10 = false;
      iStack00000000000000d4 = iStack00000000000000d4 + 1;
      *(int *)(lVar22 + 0x30) = *(int *)(lVar22 + 0x30) + 1;
    }
    else {
      if (!bVar10) {
        uStack0000000000000158 = uVar8;
      }
      if (uVar8 == *unaff_x20 - 1U) {
        lVar23 = *in_stack_00000170;
        if (lVar23 == 0) goto LAB_035574b8;
        lVar22 = *(long *)(lVar23 + 0x40);
        if (lVar22 == 0) goto LAB_035574b8;
        uVar43 = *(uint *)(lVar23 + 0x24);
        iVar14 = *(int *)(lVar22 + 0x18);
        if (iVar14 < (int)(uVar43 + 1)) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff025c((long *)(lVar23 + 0x40),iVar14 + 1,
                       *(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
          lVar23 = *in_stack_00000170;
          if (lVar23 == 0) goto LAB_035574b8;
        }
        lVar23 = *(long *)(lVar23 + 0x40);
        if (lVar23 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar23 + 0x18) <= uVar43) goto LAB_035575f4;
        lVar23 = lVar23 + (long)(int)uVar43 * 0x18;
        *(long **)(lVar23 + 0x20) = unaff_x19;
        *(uint *)(lVar23 + 0x28) = uStack0000000000000158;
        *(uint *)(lVar23 + 0x2c) = uVar8;
        *(uint *)(lVar23 + 0x30) = uVar15 - uStack0000000000000158;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar23 = unaff_x19[0x6d];
        if (lVar23 == 0) goto LAB_035574b8;
        lVar22 = *(long *)(lVar23 + 0x50);
        *(int *)(lVar23 + 0x24) = *(int *)(lVar23 + 0x24) + 1;
        if (lVar22 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar22 + 0x18) <= uVar2) goto LAB_035575f4;
        lVar22 = lVar22 + lVar30 * 0x5c;
        iStack00000000000000d4 = iStack00000000000000d4 + 1;
        *(int *)(lVar22 + 0x30) = *(int *)(lVar22 + 0x30) + 1;
      }
LAB_03555d68:
      bVar10 = true;
    }
LAB_03555d70:
    if ((*in_stack_00000170 == 0) || (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 == 0))
    goto LAB_035574b8;
    uVar43 = *(uint *)(lVar23 + 0x18);
    if (uVar43 <= uVar8) goto LAB_035575f4;
    if ((*(byte *)(lVar23 + lVar33 * 0x178 + 400) >> 2 & 1) == 0) {
      if (bVar12) {
LAB_03555da0:
        if (uVar43 <= uVar15 - 2) goto LAB_035575f4;
        lVar30 = *unaff_x19;
        uVar43 = *(uint *)(lVar23 + lVar34 + -0x330);
        uVar38 = *(undefined4 *)(lVar23 + lVar34 + -0x2f8);
LAB_035562ec:
        pcVar24 = *(code **)(lVar30 + 0x8d8);
LAB_035562f4:
        uVar44 = (ulong)uVar43;
        uVar18 = (ulong)(uint)fStack0000000000000070;
        uVar40 = (ulong)uStack0000000000000074;
        (*pcVar24)(fStack0000000000000078,uVar18,uVar40,uVar44,fStack0000000000000104,0,
                   fStack000000000000008c,uVar38);
        puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar23 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar23 = *(long *)puVar11;
        }
LAB_03556348:
        bVar12 = false;
        fVar53 = 0.0;
        fStack0000000000000104 = *(float *)(*(long *)(lVar23 + 0xb8) + 0x15a8);
        fStack0000000000000100 = 0.0;
      }
      else {
LAB_03556254:
        bVar12 = false;
      }
    }
    else {
      lVar23 = lVar23 + lVar33 * 0x178;
      iVar14 = *(int *)(lVar23 + 0x68);
      *(undefined4 *)(lVar23 + 0x16c) = in_stack_000017c4;
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
      uVar17 = FUN_026b63d8(uVar29,0);
      if ((uVar29 != 0x200b) && ((uVar17 & 1) == 0)) {
        lVar23 = *in_stack_00000170;
        if ((lVar23 == 0) || (lVar30 = *(long *)(lVar23 + 0x38), lVar30 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar30 + 0x18) <= uVar8) goto LAB_035575f4;
        fVar51 = *(float *)(lVar30 + lVar33 * 0x178 + 0x160);
        if (fVar53 <= fVar51) {
          fVar53 = fVar51;
        }
        if (fStack0000000000000100 <= ABS(fVar37)) {
          fStack0000000000000100 = ABS(fVar37);
        }
        if (iVar14 != iStack000000000000006c) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar23 = *in_stack_00000170;
            if (lVar23 == 0) goto LAB_035574b8;
            lVar30 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          else {
            lVar30 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          fStack0000000000000104 = *(float *)(lVar30 + 0x15a8);
        }
        lVar23 = *(long *)(lVar23 + 0x38);
        if (lVar23 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar23 + 0x18) <= uVar8) goto LAB_035575f4;
        if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
        fVar42 = *(float *)(lVar23 + lVar33 * 0x178 + 0x14c);
        fVar51 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
        fVar42 = fVar42 + fVar53 * fVar51;
        if (fVar42 <= fStack0000000000000104) {
          fStack0000000000000104 = fVar42;
        }
        uVar18 = (ulong)(uint)fStack0000000000000104;
        iStack000000000000006c = iVar14;
      }
      if (!bVar12) {
        bVar12 = false;
        if ((((uVar29 == 0xd) || ((uVar29 & 0xfffe) == 10)) || ((int)uVar7 < (int)uVar8)) ||
           ((bool)(bVar1 ^ 1))) goto LAB_03556364;
        if (uVar8 == uVar7) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar17 = FUN_026b97f8(uVar29,0);
          if ((uVar17 & 1) != 0) goto LAB_03556254;
        }
        if ((*in_stack_00000170 == 0) ||
           (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar23 + 0x18) <= uVar8) goto LAB_035575f4;
        lVar23 = lVar23 + lVar33 * 0x178;
        fStack000000000000008c = *(float *)(lVar23 + 0x160);
        fStack0000000000000078 = *(float *)(lVar23 + 0x11c);
        uVar40 = (ulong)(uint)fStack0000000000000078;
        bVar12 = fVar53 != 0.0;
        fVar51 = fStack000000000000008c;
        if (bVar12) {
          fVar51 = fVar53;
        }
        fVar53 = fVar51;
        in_stack_00000090 = *(undefined4 *)(lVar23 + 0x168);
        uStack0000000000000074 = 0;
        fVar51 = fVar37;
        if (bVar12) {
          fVar51 = fStack0000000000000100;
        }
        uVar18 = (ulong)(uint)fVar51;
        fStack0000000000000070 = fStack0000000000000104;
        fStack0000000000000100 = fVar51;
      }
      if (*unaff_x20 == 1) {
        if ((*in_stack_00000170 != 0) &&
           (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 != 0)) {
          if (uVar8 < *(uint *)(lVar23 + 0x18)) {
            lVar23 = lVar23 + lVar33 * 0x178;
            lVar30 = *unaff_x19;
            uVar43 = *(uint *)(lVar23 + 0x128);
            uVar38 = *(undefined4 *)(lVar23 + 0x160);
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
        uVar18 = FUN_026b63d8(uVar29,0);
        if ((*in_stack_00000170 != 0) &&
           (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 != 0)) {
          lVar30 = lVar33;
          uVar43 = uVar8;
          if (uVar29 == 0x200b || (uVar18 & 1) != 0) {
            lVar30 = lVar25;
            uVar43 = uVar7;
          }
          if (uVar43 < *(uint *)(lVar23 + 0x18)) {
            lVar23 = lVar23 + lVar30 * 0x178;
            uVar43 = *(uint *)(lVar23 + 0x128);
            uVar38 = *(undefined4 *)(lVar23 + 0x160);
            pcVar24 = *(code **)(*unaff_x19 + 0x8d8);
            goto LAB_035562f4;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
      if (!bVar1) {
        if ((*in_stack_00000170 != 0) &&
           (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 != 0)) {
          uVar43 = *(uint *)(lVar23 + 0x18);
          goto LAB_03555da0;
        }
        goto LAB_035574b8;
      }
      if ((int)uVar8 < *unaff_x20 + -1) {
        if ((*in_stack_00000170 == 0) ||
           (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar23 + 0x18) <= uVar15) goto LAB_035575f4;
        uVar17 = FUN_03567ad8(in_stack_00000090,*(undefined4 *)(lVar23 + lVar34),0);
        if ((uVar17 & 1) == 0) {
          if ((*in_stack_00000170 != 0) &&
             (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 != 0)) {
            if (uVar8 < *(uint *)(lVar23 + 0x18)) {
              lVar23 = lVar23 + lVar33 * 0x178;
              uVar44 = (ulong)*(uint *)(lVar23 + 0x128);
              uVar40 = (ulong)uStack0000000000000074;
              uVar18 = (ulong)(uint)fStack0000000000000070;
              (**(code **)(*unaff_x19 + 0x8d8))
                        (fStack0000000000000078,uVar18,uVar40,uVar44,fStack0000000000000104,0,
                         fStack000000000000008c,*(undefined4 *)(lVar23 + 0x160));
              puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
              lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar23 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar23 = *(long *)puVar11;
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
    if ((*in_stack_00000170 == 0) || (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar23 + 0x18) <= uVar8) goto LAB_035575f4;
    if (lVar26 == 0) goto LAB_035574b8;
    uVar43 = *(uint *)(lVar23 + lVar33 * 0x178 + 400);
    fVar51 = (float)FUN_03776a30(lVar26 + 0x50,0);
    if ((uVar43 >> 6 & 1) == 0) {
      if ((_iStack0000000000000128 & 0x100000000) != 0) {
        if ((*in_stack_00000170 == 0) ||
           (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar23 + 0x18) <= uVar15 - 2) goto LAB_035575f4;
        uVar43 = *(uint *)(lVar23 + lVar34 + -0x330);
        fVar49 = *(float *)(lVar23 + lVar34 + -0x30c);
        pcVar24 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
        uVar44 = (ulong)uVar43;
        uVar18 = (ulong)(uint)fStack000000000000009c;
        uVar40 = (ulong)uStack0000000000000098;
        (*pcVar24)(fStack00000000000000a0,uVar18,uVar40,uVar44,
                   fStack00000000000000a8 * fVar51 + fVar49,0,fStack00000000000000a8,
                   fStack00000000000000a8);
      }
LAB_03556948:
      _iStack0000000000000128 = _iStack0000000000000128 & 0xffffffff;
    }
    else {
      lVar23 = *in_stack_00000170;
      if ((lVar23 == 0) || (lVar30 = *(long *)(lVar23 + 0x38), lVar30 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar30 + 0x18) <= uVar8) goto LAB_035575f4;
      *(undefined4 *)(lVar30 + lVar33 * 0x178 + 0x174) = in_stack_000017c4;
      if ((((int)unaff_x19[0x65] < (int)uVar8) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
         (((int)unaff_x19[0x5c] == 5 &&
          (*(int *)(lVar30 + lVar33 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((((uVar29 == 0xd) || ((uVar29 & 0xfffe) == 10)) || ((int)uVar7 < (int)uVar8)) ||
         ((_iStack0000000000000128 & 0x100000000) != 0 || !bVar1)) {
LAB_035564e8:
        if ((_iStack0000000000000128 & 0x100000000) == 0) goto LAB_03556948;
      }
      else {
        if (uVar8 == uVar7) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar17 = FUN_026b97f8(uVar29,0);
          if ((uVar17 & 1) != 0) goto LAB_035564e8;
          lVar23 = *in_stack_00000170;
          if (lVar23 == 0) goto LAB_035574b8;
        }
        lVar23 = *(long *)(lVar23 + 0x38);
        if (lVar23 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar23 + 0x18) <= uVar8) goto LAB_035575f4;
        lVar23 = lVar23 + lVar33 * 0x178;
        fStack0000000000000040 = *(float *)(lVar23 + 0x60);
        fStack0000000000000038 = *(float *)(lVar23 + 0x14c);
        uVar18 = (ulong)(uint)fStack0000000000000038;
        fStack00000000000000a0 = *(float *)(lVar23 + 0x11c);
        uVar40 = (ulong)(uint)fStack00000000000000a0;
        fStack00000000000000a8 = *(float *)(lVar23 + 0x160);
        fStack000000000000009c = fVar51 * fStack00000000000000a8 + fStack0000000000000038;
        uStack0000000000000098 = 0;
      }
      iVar14 = *unaff_x20;
      if (iVar14 == 1) {
LAB_03556628:
        if ((*in_stack_00000170 != 0) &&
           (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 != 0)) {
          if (uVar8 < *(uint *)(lVar23 + 0x18)) {
            lVar23 = lVar23 + lVar33 * 0x178;
            lVar25 = *unaff_x19;
            uVar43 = *(uint *)(lVar23 + 0x128);
            fVar49 = *(float *)(lVar23 + 0x14c);
LAB_03556654:
            pcVar24 = *(code **)(lVar25 + 0x8d8);
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
        uVar18 = FUN_026b63d8(uVar29,0);
        if ((*in_stack_00000170 != 0) &&
           (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 != 0)) {
          uVar43 = *(uint *)(lVar23 + 0x18);
          if (uVar29 == 0x200b || (uVar18 & 1) != 0) {
            if (uVar43 <= uVar7) goto LAB_035575f4;
          }
          else {
FUN_035568e8:
            lVar25 = lVar33;
            if (uVar43 <= uVar8) goto LAB_035575f4;
          }
LAB_035568f0:
          lVar23 = lVar23 + lVar25 * 0x178;
          fVar49 = *(float *)(lVar23 + 0x14c);
          uVar43 = *(uint *)(lVar23 + 0x128);
          pcVar24 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_03556914;
        }
        goto LAB_035574b8;
      }
      if ((int)uVar8 < iVar14) {
        lVar23 = *in_stack_00000170;
        if ((lVar23 != 0) && (lVar30 = *(long *)(lVar23 + 0x38), lVar30 != 0)) {
          if (uVar15 < *(uint *)(lVar30 + 0x18)) {
            if (*(float *)(lVar30 + lVar34 + -0x108) == fStack0000000000000040) {
              fVar42 = *(float *)(lVar30 + lVar34 + -0x1c);
              if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar18 = (ulong)(uint)fStack0000000000000038;
              uVar17 = FUN_03567bac(fVar49 + fVar42,uVar18,0);
              if ((uVar17 & 1) != 0) {
                iVar14 = *unaff_x20;
                goto LAB_03556744;
              }
              lVar23 = *in_stack_00000170;
              if (lVar23 == 0) goto LAB_035574b8;
            }
            lVar23 = *(long *)(lVar23 + 0x38);
            if (lVar23 != 0) {
              uVar43 = *(uint *)(lVar23 + 0x18);
              if ((int)uVar8 <= (int)uVar7) goto FUN_035568e8;
              if (uVar7 < uVar43) goto LAB_035568f0;
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
        iVar14 = FUN_036d3364(lVar26,0);
        if (*(uint *)(lVar16 + 0x18) <= uVar15) goto LAB_035575f4;
        lVar23 = *(long *)(lVar16 + lVar34 + -0x130);
        if (lVar23 == 0) goto LAB_035574b8;
        iVar13 = FUN_036d3364(lVar23,0);
        if (iVar14 != iVar13) goto LAB_03556628;
      }
      if (!bVar1) {
        if ((*in_stack_00000170 != 0) &&
           (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 != 0)) {
          if (uVar15 - 2 < *(uint *)(lVar23 + 0x18)) {
            lVar25 = *unaff_x19;
            uVar43 = *(uint *)(lVar23 + lVar34 + -0x330);
            fVar49 = *(float *)(lVar23 + lVar34 + -0x30c);
            goto LAB_03556654;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
      _iStack0000000000000128 = CONCAT44(1,iStack0000000000000128);
    }
    if ((*in_stack_00000170 == 0) || (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 == 0))
    goto LAB_035574b8;
    uVar43 = (uint)*(undefined8 *)(lVar23 + 0x18);
    if (uVar43 <= uVar8) goto LAB_035575f4;
    if ((*(byte *)(lVar23 + lVar33 * 0x178 + 0x191) >> 1 & 1) == 0) {
      if (bVar9) {
        uVar40 = (ulong)uStack00000000000000c0;
        uVar18 = (ulong)(uint)fStack00000000000000dc;
        uVar44 = (ulong)(uint)fStack00000000000000c8;
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000d8,uVar18,uVar40,uVar44,fStack00000000000000d0,uVar40);
      }
LAB_035569b4:
      bVar9 = false;
    }
    else {
      if ((((int)unaff_x19[0x65] < (int)uVar8) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
         (((int)unaff_x19[0x5c] == 5 &&
          (*(int *)(lVar23 + lVar33 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar9) {
        if ((((uVar29 == 0xd) || ((uVar29 & 0xfffe) == 10)) || ((int)uVar7 < (int)uVar8)) ||
           (!bVar1)) goto LAB_035569b4;
        if (uVar8 == uVar7) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar17 = FUN_026b97f8(uVar29,0);
          if ((uVar17 & 1) != 0) goto LAB_035569b4;
        }
        puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar25 = *(long *)puVar11;
        }
        if ((*in_stack_00000170 == 0) ||
           (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 == 0)) goto LAB_035574b8;
        uVar43 = (uint)*(undefined8 *)(lVar23 + 0x18);
        if (uVar43 <= uVar8) goto LAB_035575f4;
        lVar25 = *(long *)(lVar25 + 0xb8);
        lVar26 = lVar23 + lVar33 * 0x178;
        in_stack_000017b8 = *(undefined8 *)(lVar26 + 0x184);
        in_stack_000017b0 = *(undefined8 *)(lVar26 + 0x17c);
        fStack00000000000000d8 = *(float *)(lVar25 + 0x1598);
        fStack00000000000000dc = *(float *)(lVar25 + 0x159c);
        in_stack_000017c0 = *(float *)(lVar26 + 0x18c);
        fStack00000000000000c8 = *(float *)(lVar25 + 0x15a0);
        fStack00000000000000d0 = *(float *)(lVar25 + 0x15a4);
        uStack00000000000000c0 = 0;
      }
      if (uVar43 <= uVar8) goto LAB_035575f4;
      lVar23 = lVar23 + lVar33 * 0x178;
      fVar51 = *(float *)(lVar23 + 0x128);
      fVar45 = *(float *)(lVar23 + 0x188);
      uVar31 = *(undefined8 *)(lVar23 + 0x17c);
      fVar48 = *(float *)(lVar23 + 0x184);
      uVar41 = *(undefined8 *)(lVar23 + 0x184);
      fVar47 = *(float *)(lVar23 + 0x18c);
      fVar49 = *(float *)(lVar23 + 0x11c);
      fVar46 = *(float *)(lVar23 + 0x148);
      fVar42 = *(float *)(lVar23 + 0x150);
      in_stack_00000178 = uVar31;
      fStack0000000000000180 = fVar48;
      fStack0000000000000184 = fVar45;
      in_stack_00000188 = fVar47;
      in_stack_00000190 = in_stack_000017b0;
      in_stack_00000198 = in_stack_000017b8;
      in_stack_000001a0 = in_stack_000017c0;
      uVar18 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
      lVar23 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if ((uVar18 & 1) == 0) {
        if (*(int *)(lVar23 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar23);
        }
        fVar51 = fVar51 + (float)in_stack_000017b8;
        uVar40 = (ulong)(uint)fVar51;
        fVar49 = fVar49 - (float)((ulong)in_stack_000017b0 >> 0x20);
        fVar42 = fVar42 - in_stack_000017c0;
        uVar18 = (ulong)(uint)fVar42;
        fVar46 = fVar46 + (float)((ulong)in_stack_000017b8 >> 0x20);
        uVar44 = (ulong)(uint)fVar46;
        if (fVar49 <= fStack00000000000000d8) {
          fStack00000000000000d8 = fVar49;
        }
        if (fVar42 <= fStack00000000000000dc) {
          fStack00000000000000dc = fVar42;
        }
        if (fStack00000000000000c8 <= fVar51) {
          fStack00000000000000c8 = fVar51;
        }
        if (fStack00000000000000d0 <= fVar46) {
          fStack00000000000000d0 = fVar46;
        }
      }
      else {
        if (*(int *)(lVar23 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar23);
        }
        fVar49 = (fVar49 + (fStack00000000000000c8 - (float)in_stack_000017b8)) * 0.5;
        uVar44 = (ulong)(uint)fVar49;
        if (fVar42 <= fStack00000000000000dc) {
          fStack00000000000000dc = fVar42;
        }
        uVar18 = (ulong)(uint)fStack00000000000000dc;
        uVar40 = (ulong)uStack00000000000000c0;
        if (fStack00000000000000d0 <= fVar46) {
          fStack00000000000000d0 = fVar46;
        }
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000d8,uVar18,uVar40,uVar44,fStack00000000000000d0,uVar40);
        fStack00000000000000dc = fVar42 - fVar47;
        fStack00000000000000c8 = fVar51 + fVar48;
        uStack00000000000000c0 = 0;
        fStack00000000000000d0 = fVar46 + fVar45;
        fStack00000000000000d8 = fVar49;
        in_stack_000017b0 = uVar31;
        in_stack_000017b8 = uVar41;
        in_stack_000017c0 = fVar47;
      }
      if (((*unaff_x20 == 1) || (uVar8 == uVar6)) || (((int)uVar7 <= (int)uVar8 || (!bVar1)))) {
        uVar40 = (ulong)uStack00000000000000c0;
        uVar18 = (ulong)(uint)fStack00000000000000dc;
        uVar44 = (ulong)(uint)fStack00000000000000c8;
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000d8,uVar18,uVar40,uVar44,fStack00000000000000d0,uVar40);
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
    }
    iVar14 = *unaff_x20;
    lVar34 = lVar34 + 0x178;
    _iStack0000000000000128 = CONCAT44(uStack000000000000012c,iStack0000000000000128 + 1);
    bVar1 = iVar14 <= (int)uVar15;
    unaff_x28 = in_stack_00000170;
    uVar15 = uVar15 + 1;
    uVar43 = uVar2;
    if (bVar1) goto FUN_03556ed8;
    goto LAB_03554e78;
  }
  iStack00000000000000d4 = 0;
  iVar13 = 0;
  in_stack_00000170 = unaff_x28;
LAB_03556f00:
  *(int *)(lVar16 + 0x18) = iVar14;
  lVar34 = unaff_x19[0xd4];
  *(int *)(lVar16 + 0x2c) = iVar13;
  if (iVar14 < 1 || iStack00000000000000d4 == 0) {
    iStack00000000000000d4 = 1;
  }
  *(int *)(lVar16 + 0x1c) = (int)lVar34;
  *(int *)(lVar16 + 0x24) = iStack00000000000000d4;
  *(int *)(lVar16 + 0x30) = (int)unaff_x19[0x96] + 1;
  if (((int)unaff_x19[99] != 0xff) ||
     (uVar17 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar17 & 1) == 0)) {
LAB_03554724:
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_03567630();
    return;
  }
  lVar16 = unaff_x19[0xdf];
  if (lVar16 != 0) {
    (**(code **)(lVar16 + 0x18))
              (*(undefined8 *)(lVar16 + 0x40),*in_stack_00000170,*(undefined8 *)(lVar16 + 0x28));
  }
  if (unaff_x19[0xe5] != 0) {
    iVar14 = FUN_03911ee4(unaff_x19[0xe5],0);
    if (iVar14 != 0x19) {
      lVar16 = unaff_x19[0xe5];
      if (lVar16 == 0) goto LAB_035574b8;
      uVar15 = FUN_03911ee4(lVar16,0);
      FUN_03911f20(lVar16,uVar15 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar16 = *(long *)(*in_stack_00000170 + 0x60), lVar16 == 0))
      goto LAB_035574b8;
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar16 + 0x18) == 0) goto LAB_035575f4;
      FUN_03596b20(lVar16 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar16 = *(long *)(unaff_x19[0x6d] + 0x60), lVar16 != 0)) {
        if (*(int *)(lVar16 + 0x18) == 0) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar16 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar16 = *(long *)(unaff_x19[0x6d] + 0x60), lVar16 != 0)) {
            if (*(int *)(lVar16 + 0x18) == 0) goto LAB_035575f4;
            if (unaff_x19[0x74] != 0) {
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar16 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar16 = *(long *)(unaff_x19[0x6d] + 0x60), lVar16 != 0)) {
                if (*(int *)(lVar16 + 0x18) == 0) goto LAB_035575f4;
                if (unaff_x19[0x74] != 0) {
                  FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar16 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar16 = *(long *)(unaff_x19[0x6d] + 0x60), lVar16 != 0)) {
                    if (*(int *)(lVar16 + 0x18) == 0) goto LAB_035575f4;
                    if (unaff_x19[0x74] != 0) {
                      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar16 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_036aa280(unaff_x19[0x74],0);
                        if (unaff_x19[0xe4] != 0) {
                          FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
                          if (unaff_x19[0xe4] != 0) {
                            uVar41 = FUN_0390ef60(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar15 = FUN_0390ed3c(unaff_x19[0xe4],0);
                              lVar16 = *in_stack_00000170;
                              if (lVar16 != 0) {
                                lVar23 = 0;
                                lVar34 = 0;
                                do {
                                  uVar17 = lVar34 + 1;
                                  if ((long)*(int *)(lVar16 + 0x34) <= (long)uVar17)
                                  goto LAB_03554724;
                                  lVar16 = *(long *)(lVar16 + 0x60);
                                  if (lVar16 == 0) break;
                                  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_035575f4;
                                  FUN_03596a20(lVar16 + lVar23 + 0x70,0);
                                  lVar16 = unaff_x19[0xe1];
                                  if (lVar16 == 0) break;
                                  if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_035575f4;
                                  uVar31 = *(undefined8 *)(lVar16 + lVar34 * 8 + 0x28);
                                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar19 = FUN_036d35a8(uVar31,0,0);
                                  if ((uVar19 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                      if ((*in_stack_00000170 == 0) ||
                                         (lVar16 = *(long *)(*in_stack_00000170 + 0x60), lVar16 == 0
                                         )) break;
                                      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_035575f4;
                                      FUN_03596b20(lVar16 + lVar23 + 0x70,1,0);
                                    }
                                    lVar16 = unaff_x19[0xe1];
                                    if (lVar16 == 0) break;
                                    if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_035575f4;
                                    lVar16 = *(long *)(lVar16 + lVar34 * 8 + 0x28);
                                    if (lVar16 == 0) break;
                                    lVar16 = UnityEngine_Material__GetColorArray(lVar16,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar25 = *(long *)(*in_stack_00000170 + 0x60), lVar25 == 0))
                                    break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar17) goto LAB_035575f4;
                                    if (lVar16 == 0) break;
                                    FUN_036a460c(lVar16,*(undefined8 *)(lVar25 + lVar23 + 0x80),0);
                                    lVar16 = unaff_x19[0xe1];
                                    if (lVar16 == 0) break;
                                    if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_035575f4;
                                    lVar16 = *(long *)(lVar16 + lVar34 * 8 + 0x28);
                                    if (lVar16 == 0) break;
                                    lVar16 = UnityEngine_Material__GetColorArray(lVar16,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar25 = *(long *)(*in_stack_00000170 + 0x60), lVar25 == 0))
                                    break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar17) goto LAB_035575f4;
                                    if (lVar16 == 0) break;
                                    FUN_036a4810(lVar16,*(undefined8 *)(lVar25 + lVar23 + 0x98),0);
                                    lVar16 = unaff_x19[0xe1];
                                    if (lVar16 == 0) break;
                                    if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_035575f4;
                                    lVar16 = *(long *)(lVar16 + lVar34 * 8 + 0x28);
                                    if (lVar16 == 0) break;
                                    lVar16 = UnityEngine_Material__GetColorArray(lVar16,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar25 = *(long *)(*in_stack_00000170 + 0x60), lVar25 == 0))
                                    break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar17) goto LAB_035575f4;
                                    if (lVar16 == 0) break;
                                    FUN_036a48bc(lVar16,*(undefined8 *)(lVar25 + lVar23 + 0xa0),0);
                                    lVar16 = unaff_x19[0xe1];
                                    if (lVar16 == 0) break;
                                    if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_035575f4;
                                    lVar16 = *(long *)(lVar16 + lVar34 * 8 + 0x28);
                                    if (lVar16 == 0) break;
                                    lVar16 = UnityEngine_Material__GetColorArray(lVar16,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar25 = *(long *)(*in_stack_00000170 + 0x60), lVar25 == 0))
                                    break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar17) goto LAB_035575f4;
                                    if (lVar16 == 0) break;
                                    FUN_036a4e24(lVar16,*(undefined8 *)(lVar25 + lVar23 + 0xa8),0);
                                    lVar16 = unaff_x19[0xe1];
                                    if (lVar16 == 0) break;
                                    if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_035575f4;
                                    lVar16 = *(long *)(lVar16 + lVar34 * 8 + 0x28);
                                    if ((lVar16 == 0) ||
                                       (lVar16 = UnityEngine_Material__GetColorArray(lVar16,0),
                                       lVar16 == 0)) break;
                                    FUN_036aa280(lVar16,0);
                                    lVar16 = unaff_x19[0xe1];
                                    if (lVar16 == 0) break;
                                    if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_035575f4;
                                    lVar16 = *(long *)(lVar16 + lVar34 * 8 + 0x28);
                                    if (lVar16 == 0) break;
                                    lVar16 = FUN_037b514c(lVar16,0);
                                    lVar25 = unaff_x19[0xe1];
                                    if (lVar25 == 0) break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar17) goto LAB_035575f4;
                                    lVar25 = *(long *)(lVar25 + lVar34 * 8 + 0x28);
                                    if ((lVar25 == 0) ||
                                       (uVar31 = UnityEngine_Material__GetColorArray(lVar25,0),
                                       lVar16 == 0)) break;
                                    FUN_0390f3a4(lVar16,uVar31,0);
                                    lVar16 = unaff_x19[0xe1];
                                    if (lVar16 == 0) break;
                                    if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_035575f4;
                                    lVar16 = *(long *)(lVar16 + lVar34 * 8 + 0x28);
                                    if ((lVar16 == 0) ||
                                       (lVar16 = FUN_037b514c(lVar16,0), lVar16 == 0)) break;
                                    FUN_0390eec8(uVar41,uVar18,uVar40,uVar44,lVar16,0);
                                    lVar16 = unaff_x19[0xe1];
                                    if (lVar16 == 0) break;
                                    if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_035575f4;
                                    lVar16 = *(long *)(lVar16 + lVar34 * 8 + 0x28);
                                    if ((lVar16 == 0) ||
                                       (lVar16 = FUN_037b514c(lVar16,0), lVar16 == 0)) break;
                                    FUN_0390ed78(lVar16,uVar15 & 1,0);
                                    lVar16 = unaff_x19[0xe1];
                                    if (lVar16 == 0) break;
                                    if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_035575f4;
                                    plVar32 = *(long **)(lVar16 + lVar34 * 8 + 0x28);
                                    uVar43 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar32 == (long *)0x0) break;
                                    (**(code **)(*plVar32 + 0x2c8))
                                              (plVar32,uVar43 & 1,*(undefined8 *)(*plVar32 + 0x2d0))
                                    ;
                                  }
                                  lVar16 = *in_stack_00000170;
                                  lVar34 = lVar34 + 1;
                                  lVar23 = lVar23 + 0x50;
                                } while (lVar16 != 0);
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
FUN_03556ed8:
  lVar16 = *in_stack_00000170;
  if (lVar16 == 0) goto LAB_035574b8;
  iVar13 = uVar2 + 1;
  unaff_x26 = (long *)OVRPlugin_Media_TypeInfo;
  goto LAB_03556f00;
}


