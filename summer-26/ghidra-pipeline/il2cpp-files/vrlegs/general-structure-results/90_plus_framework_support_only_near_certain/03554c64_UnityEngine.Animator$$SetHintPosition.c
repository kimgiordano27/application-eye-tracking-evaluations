/*
FUNCTION_NAME: UnityEngine.Animator$$SetHintPosition
ENTRY_POINT: 03554c64
PROGRAM: vrlegs-libil2cpp.so
SCORE: 169
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_14;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_6;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_6
*/


void UnityEngine_Animator__SetHintPosition(long param_1,undefined1 param_2 [16],float param_3)

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
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  char cVar21;
  undefined4 *puVar22;
  long lVar23;
  long lVar24;
  code *pcVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  uint uVar30;
  long lVar31;
  long *unaff_x19;
  int *unaff_x20;
  undefined8 uVar32;
  long *plVar33;
  long lVar34;
  long *unaff_x26;
  long lVar35;
  long *unaff_x28;
  uint uVar36;
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  float fVar40;
  ulong uVar41;
  ulong uVar42;
  undefined8 uVar43;
  float fVar44;
  uint uVar45;
  ulong uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  uint uStack0000000000000028;
  int in_stack_00000030;
  float fStack0000000000000038;
  float fStack0000000000000040;
  int iStack000000000000006c;
  float fStack0000000000000070;
  uint uStack0000000000000074;
  float fStack0000000000000078;
  long in_stack_00000080;
  float fStack000000000000008c;
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
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01a58e78(param_1);
  }
  uVar18 = FUN_036d35a8();
  lVar19 = FUN_0357f060();
  if (lVar19 == 0) goto LAB_035574b8;
  FUN_036df824(lVar19,0);
  *(float *)(unaff_x19 + 0xe2) = param_3;
  if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
  iVar13 = FUN_039117fc(unaff_x19[0xe5],0);
  if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
  fVar37 = (float)FUN_03911954(unaff_x19[0xe5],0);
  uVar14 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
  FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
  if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
  }
  if (DAT_0412df1c == '\0') {
    FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
    DAT_0412df1c = '\x01';
  }
  puVar11 = OVRPlugin_Mesh_TypeInfo;
  lVar19 = *(long *)OVRPlugin_Mesh_TypeInfo;
  if (*(int *)(lVar19 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar19 = *(long *)puVar11;
  }
  puVar22 = *(undefined4 **)(lVar19 + 0xb8);
  uVar41 = (ulong)(uint)puVar22[1];
  uVar42 = (ulong)(uint)puVar22[2];
  uVar46 = (ulong)(uint)puVar22[3];
  FUN_035683a4(*puVar22,uVar41,uVar42,uVar46,&stack0x000017b0,0x4000ffff,0);
  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar19 = *unaff_x28;
  if (lVar19 == 0) goto LAB_035574b8;
  iVar15 = *unaff_x20;
  if (0 < iVar15) {
    lVar19 = *(long *)(lVar19 + 0x38);
    param_3 = ABS(param_3);
    fVar40 = 1.0;
    if ((uVar18 & 1) == 0) {
      fVar40 = param_3;
    }
    if (lVar19 == 0) goto LAB_035574b8;
    bVar12 = false;
    bVar10 = false;
    _iStack0000000000000128 = 0;
    bVar9 = false;
    iStack00000000000000d4 = 0;
    uStack0000000000000028 = 0;
    uStack0000000000000158 = 0;
    iStack000000000000006c = 0;
    lVar35 = 0x2e0;
    fVar38 = 0.0;
    fVar55 = 0.0;
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
    uVar17 = 1;
    uVar45 = 0;
LAB_03554e78:
    uVar8 = uVar17 - 1;
    if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_035575f4;
    if ((*unaff_x28 == 0) || (lVar24 = *(long *)(*unaff_x28 + 0x50), lVar24 == 0))
    goto LAB_035574b8;
    lVar34 = (long)(int)uVar8;
    lVar26 = lVar19 + lVar34 * 0x178;
    uVar2 = *(uint *)(lVar26 + 100);
    if (*(uint *)(lVar24 + 0x18) <= uVar2) goto LAB_035575f4;
    lVar31 = (long)(int)uVar2;
    lVar24 = lVar24 + lVar31 * 0x5c;
    lVar27 = *(long *)(lVar26 + 0x38);
    uVar4 = *(ushort *)(lVar26 + 0x20);
    uVar6 = *(uint *)(lVar24 + 0x3c);
    uVar36 = *(uint *)(lVar24 + 0x68);
    iVar3 = *(int *)(lVar24 + 0x20);
    iVar15 = *(int *)(lVar24 + 0x28);
    iVar16 = *(int *)(lVar24 + 0x2c);
    uVar7 = *(uint *)(lVar24 + 0x40);
    lVar26 = (long)(int)uVar7;
    fVar44 = *(float *)(lVar24 + 0x4c);
    fVar47 = *(float *)(lVar24 + 0x54);
    fVar51 = *(float *)(lVar24 + 0x58);
    fVar52 = *(float *)(lVar24 + 0x5c);
    fVar49 = *(float *)(lVar24 + 0x60);
    fVar50 = *(float *)(lVar24 + 0x6c);
    fVar54 = *(float *)(lVar24 + 0x70);
    fVar53 = *(float *)(lVar24 + 0x74);
    fVar48 = *(float *)(lVar24 + 0x78);
    uVar30 = (uint)uVar4;
    if ((int)uVar36 < 9) {
      switch(uVar36) {
      case 1:
        if ((char)unaff_x19[0x1e] == '\0') {
          in_stack_000000f8._4_4_ = fVar49 + 0.0;
        }
        else {
          in_stack_000000f8._4_4_ = 0.0 - fVar51;
        }
        break;
      case 2:
LAB_03555018:
        in_stack_000000f8._4_4_ = (fVar49 + fVar52 * 0.5) - fVar51 * 0.5;
        break;
      default:
        goto switchD_03554f58_caseD_3;
      case 4:
        in_stack_000000f8._4_4_ = (fVar52 + fVar49) - fVar51;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar52 + fVar49;
        }
        break;
      case 8:
        goto switchD_03554f58_caseD_8;
      }
LAB_03555088:
      in_stack_000000e8 = 0;
    }
    else if (uVar36 == 0x10) {
switchD_03554f58_caseD_8:
      if (uVar4 < 0xad) {
        if ((uVar4 != 3) && (uVar4 != 10)) {
LAB_03554fac:
          if (*(uint *)(lVar19 + 0x18) <= uVar6) goto LAB_035575f4;
          uVar5 = *(undefined2 *)(lVar19 + (long)(int)uVar6 * 0x178 + 0x20);
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
          if ((fVar51 <= fVar52) && (!bVar1 && uVar36 >> 4 == 0)) {
            in_stack_000000f8._4_4_ = fVar49;
            if ((char)unaff_x19[0x1e] != '\0') {
              in_stack_000000f8._4_4_ = fVar52 + fVar49;
            }
            goto LAB_03555088;
          }
          if (((uVar17 == 1) || (uVar2 != uVar45)) || (uVar8 == *(uint *)((long)unaff_x19 + 0x324)))
          {
            in_stack_000000f8._4_4_ = fVar49;
            if ((char)unaff_x19[0x1e] != '\0') {
              in_stack_000000f8._4_4_ = fVar52 + fVar49;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uStack0000000000000028 = FUN_026b97f8(uVar30,0);
            in_stack_000000e8 = 0;
          }
          else {
            cVar21 = (char)unaff_x19[0x1e];
            fVar49 = -fVar51;
            if (cVar21 != '\0') {
              fVar49 = fVar51;
            }
            if (*(uint *)(lVar19 + 0x18) <= uVar6) goto LAB_035575f4;
            iVar16 = (int)*(char *)(lVar19 + (long)(int)uVar6 * 0x178 + 0x194) +
                     (-iVar3 - (uStack0000000000000028 & 1)) + iVar16 + -1;
            if (iVar16 < 1) {
              fVar51 = 1.0;
              iVar16 = 1;
            }
            else {
              fVar51 = *(float *)((long)unaff_x19 + 0x2dc);
            }
            if (uVar30 == 9) {
LAB_03556e74:
              fVar51 = 1.0 - fVar51;
            }
            else {
              if (uVar30 != 0xa0) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar18 = FUN_026b97f8(uVar30,0);
                cVar21 = (char)unaff_x19[0x1e];
                if ((uVar18 & 1) != 0) goto LAB_03556e74;
              }
              iVar16 = (iVar3 - (~uStack0000000000000028 & 1)) + iVar15;
            }
            fVar51 = ((fVar52 + fVar49) * fVar51) / (float)iVar16;
            if (cVar21 == '\0') {
              in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar51;
              in_stack_000000e8 =
                   CONCAT44((float)((ulong)in_stack_000000e8 >> 0x20) + 0.0,
                            (float)in_stack_000000e8 + 0.0);
            }
            else {
              in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar51;
            }
          }
        }
      }
      else if (((uVar4 != 0xad) && (uVar4 != 0x200b)) && (uVar4 != 0x2060)) goto LAB_03554fac;
    }
    else if (uVar36 == 0x20) {
      fVar51 = fVar50 + fVar53;
      goto LAB_03555018;
    }
switchD_03554f58_caseD_3:
    uVar36 = (uint)*(undefined8 *)(lVar19 + 0x18);
    if (uVar36 <= uVar8) goto LAB_035575f4;
    lVar24 = lVar19 + lVar34 * 0x178;
    fVar52 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
    fVar51 = (float)in_stack_000000b8 + (float)in_stack_000000e8;
    fVar49 = (float)((ulong)in_stack_000000b8 >> 0x20) + (float)((ulong)in_stack_000000e8 >> 0x20);
    if (*(char *)(lVar24 + 0x194) == '\0') goto LAB_03555938;
    iVar15 = *(int *)(lVar19 + lVar34 * 0x178 + 0x2c);
    if (iVar15 != 0) goto LAB_0355574c;
    fVar38 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar2,1.0);
    switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
    case 0:
      lVar23 = lVar19 + lVar34 * 0x178;
      *(undefined4 *)(lVar23 + 0x84) = 0;
      *(undefined4 *)(lVar23 + 0xac) = 0;
      *(undefined4 *)(lVar23 + 0xd4) = 0x3f800000;
      fVar38 = 1.0;
      break;
    case 1:
      fVar48 = *(float *)(lVar19 + lVar34 * 0x178 + 0x70);
      if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
        lVar23 = lVar19 + lVar34 * 0x178;
        fVar53 = (in_stack_000000f8._4_4_ + fVar48) - *(float *)(in_stack_00000080 + 0x230);
        fVar48 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
        goto LAB_035551cc;
      }
      lVar23 = lVar19 + lVar34 * 0x178;
      fVar53 = fVar53 - fVar50;
      *(float *)(lVar23 + 0x84) = fVar38 + (fVar48 - fVar50) / fVar53;
      *(float *)(lVar23 + 0xac) = fVar38 + (*(float *)(lVar23 + 0x98) - fVar50) / fVar53;
      *(float *)(lVar23 + 0xd4) = fVar38 + (*(float *)(lVar23 + 0xc0) - fVar50) / fVar53;
      fVar38 = fVar38 + (*(float *)(lVar23 + 0xe8) - fVar50) / fVar53;
      break;
    case 2:
      lVar23 = lVar19 + lVar34 * 0x178;
      fVar48 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      fVar53 = (in_stack_000000f8._4_4_ + *(float *)(lVar23 + 0x70)) -
               *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
      *(float *)(lVar23 + 0x84) = fVar38 + fVar53 / fVar48;
      *(float *)(lVar23 + 0xac) =
           fVar38 + ((in_stack_000000f8._4_4_ + *(float *)(lVar23 + 0x98)) -
                    *(float *)(in_stack_00000080 + 0x230)) /
                    (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
      *(float *)(lVar23 + 0xd4) =
           fVar38 + ((in_stack_000000f8._4_4_ + *(float *)(lVar23 + 0xc0)) -
                    *(float *)(in_stack_00000080 + 0x230)) /
                    (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
      fVar38 = fVar38 + ((in_stack_000000f8._4_4_ + *(float *)(lVar23 + 0xe8)) -
                        *(float *)(in_stack_00000080 + 0x230)) /
                        (*(float *)(in_stack_00000080 + 0x238) -
                        *(float *)(in_stack_00000080 + 0x230));
      break;
    case 3:
      switch((int)unaff_x19[0x62]) {
      case 0:
        lVar23 = lVar19 + lVar34 * 0x178;
        *(undefined4 *)(lVar23 + 0x88) = 0;
        *(undefined4 *)(lVar23 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar23 + 0xd8) = 0;
        *(undefined4 *)(lVar23 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar23 = lVar19 + lVar34 * 0x178;
        fVar48 = fVar48 - fVar54;
        fVar53 = fVar38 + (*(float *)(lVar23 + 0x74) - fVar54) / fVar48;
        fVar48 = fVar38 + (*(float *)(lVar23 + 0x9c) - fVar54) / fVar48;
        *(float *)(lVar23 + 0x88) = fVar53;
        *(float *)(lVar23 + 0xb0) = fVar48;
        *(float *)(lVar23 + 0xd8) = fVar53;
        *(float *)(lVar23 + 0x100) = fVar48;
        break;
      case 2:
        lVar23 = lVar19 + lVar34 * 0x178;
        fVar53 = fVar38 + (*(float *)(lVar23 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                          (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
        *(float *)(lVar23 + 0x88) = fVar53;
        fVar48 = *(float *)(unaff_x19 + 0x9c);
        fVar50 = *(float *)(unaff_x19 + 0x9d);
        *(float *)(lVar23 + 0xd8) = fVar53;
        fVar53 = fVar38 + (*(float *)(lVar23 + 0x9c) - fVar48) / (fVar50 - fVar48);
        *(float *)(lVar23 + 0xb0) = fVar53;
        *(float *)(lVar23 + 0x100) = fVar53;
        break;
      case 3:
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
        uVar36 = (uint)*(undefined8 *)(lVar19 + 0x18);
      }
      if (uVar36 <= uVar8) goto LAB_035575f4;
      lVar23 = lVar19 + lVar34 * 0x178;
      fVar53 = *(float *)(lVar23 + 0x15c);
      fVar48 = (1.0 - (*(float *)(lVar23 + 0x88) + *(float *)(lVar23 + 0xb0)) * fVar53) * 0.5;
      fVar50 = fVar38 + *(float *)(lVar23 + 0x88) * fVar53 + fVar48;
      fVar38 = fVar38 + fVar48 + *(float *)(lVar23 + 0xb0) * fVar53;
      *(float *)(lVar23 + 0x84) = fVar50;
      *(float *)(lVar23 + 0xac) = fVar50;
      *(float *)(lVar23 + 0xd4) = fVar38;
      break;
    default:
      goto switchD_0355512c_default;
    }
    *(float *)(lVar19 + lVar34 * 0x178 + 0xfc) = fVar38;
switchD_0355512c_default:
    switch((int)unaff_x19[0x62]) {
    case 0:
      if (uVar36 <= uVar8) goto LAB_035575f4;
      lVar23 = lVar19 + lVar34 * 0x178;
      *(undefined4 *)(lVar23 + 0x88) = 0;
      *(undefined4 *)(lVar23 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar23 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar23 + 0x100) = 0;
      break;
    case 1:
      if (uVar8 < uVar36) {
        lVar23 = lVar19 + lVar34 * 0x178;
        fVar44 = fVar44 - fVar47;
        fVar38 = (*(float *)(lVar23 + 0x74) - fVar47) / fVar44;
        fVar44 = (*(float *)(lVar23 + 0x9c) - fVar47) / fVar44;
        *(float *)(lVar23 + 0x88) = fVar38;
        goto UnityEngine_Animator__set_stabilizeFeet;
      }
      goto LAB_035575f4;
    case 2:
      if (uVar36 <= uVar8) goto LAB_035575f4;
      lVar23 = lVar19 + lVar34 * 0x178;
      fVar38 = (*(float *)(lVar23 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
               (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar23 + 0x88) = fVar38;
      fVar44 = (*(float *)(lVar23 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
               (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
      *(float *)(lVar23 + 0xb0) = fVar44;
      *(float *)(lVar23 + 0xd8) = fVar44;
      *(float *)(lVar23 + 0x100) = fVar38;
      break;
    case 3:
      if (uVar36 <= uVar8) goto LAB_035575f4;
      lVar23 = lVar19 + lVar34 * 0x178;
      fVar44 = *(float *)(lVar23 + 0x15c);
      fVar53 = (1.0 - (*(float *)(lVar23 + 0x84) + *(float *)(lVar23 + 0xd4)) / fVar44) * 0.5;
      fVar38 = *(float *)(lVar23 + 0x84) / fVar44 + fVar53;
      fVar53 = fVar53 + *(float *)(lVar23 + 0xd4) / fVar44;
      *(float *)(lVar23 + 0x88) = fVar38;
      *(float *)(lVar23 + 0xb0) = fVar53;
      *(float *)(lVar23 + 0x100) = fVar38;
      *(float *)(lVar23 + 0xd8) = fVar53;
    }
    if (uVar36 <= uVar8) goto LAB_035575f4;
    lVar23 = lVar19 + lVar34 * 0x178;
    fVar38 = *(float *)(lVar23 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    if ((*(char *)(lVar23 + 0x5c) == '\0') && ((*(byte *)(lVar19 + lVar34 * 0x178 + 400) & 1) != 0))
    {
      fVar38 = -fVar38;
    }
    fVar53 = param_3;
    if (((iVar13 == 2) || (fVar53 = fVar40, iVar13 == 1)) ||
       (fVar53 = param_3 / fVar37, iVar13 == 0)) {
      fVar38 = fVar53 * fVar38;
    }
    lVar23 = lVar19 + lVar34 * 0x178;
    fVar44 = *(float *)(lVar23 + 0x88);
    fVar48 = *(float *)(lVar23 + 0x84);
    fVar53 = -2.1474836e+09;
    if (fVar48 != INFINITY) {
      fVar53 = (float)(int)fVar48;
    }
    fVar50 = *(float *)(lVar23 + 0xd4);
    fVar54 = *(float *)(lVar23 + 0xd8);
    fVar47 = -2.1474836e+09;
    if (fVar44 != INFINITY) {
      fVar47 = (float)(int)fVar44;
    }
    uVar39 = FUN_03591d3c(fVar48 - fVar53,fVar44 - fVar47);
    *(undefined4 *)(lVar23 + 0x84) = uVar39;
    if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_035575f4;
    fVar54 = fVar54 - fVar47;
    *(float *)(lVar23 + 0x88) = fVar38;
    uVar39 = FUN_03591d3c(fVar48 - fVar53,fVar54);
    *(undefined4 *)(lVar19 + lVar34 * 0x178 + 0xac) = uVar39;
    if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_035575f4;
    fVar50 = fVar50 - fVar53;
    *(float *)(lVar19 + lVar34 * 0x178 + 0xb0) = fVar38;
    fVar53 = (float)FUN_03591d3c(fVar50,fVar54);
    *(float *)(lVar23 + 0xd4) = fVar53;
    if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_035575f4;
    *(float *)(lVar23 + 0xd8) = fVar38;
    uVar39 = FUN_03591d3c(fVar50,fVar44 - fVar47);
    *(undefined4 *)(lVar19 + lVar34 * 0x178 + 0xfc) = uVar39;
    uVar36 = (uint)*(undefined8 *)(lVar19 + 0x18);
    if (uVar36 <= uVar8) goto LAB_035575f4;
    *(float *)(lVar19 + lVar34 * 0x178 + 0x100) = fVar38;
LAB_0355574c:
    if (((int)uVar8 < (int)unaff_x19[0x65]) &&
       (iStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
      if (((int)uVar2 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
        if (uVar36 <= uVar8) goto LAB_035575f4;
        lVar24 = lVar19 + lVar34 * 0x178;
        *(ulong *)(lVar24 + 0x70) =
             CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar24 + 0x70) >> 0x20),
                      fVar52 + (float)*(undefined8 *)(lVar24 + 0x70));
        *(float *)(lVar24 + 0x78) = fVar49 + *(float *)(lVar24 + 0x78);
        *(ulong *)(lVar24 + 0x98) =
             CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar24 + 0x98) >> 0x20),
                      fVar52 + (float)*(undefined8 *)(lVar24 + 0x98));
        *(float *)(lVar24 + 0xa0) = fVar49 + *(float *)(lVar24 + 0xa0);
        *(ulong *)(lVar24 + 0xc0) =
             CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar24 + 0xc0) >> 0x20),
                      fVar52 + (float)*(undefined8 *)(lVar24 + 0xc0));
        *(float *)(lVar24 + 200) = fVar49 + *(float *)(lVar24 + 200);
        *(ulong *)(lVar24 + 0xe8) =
             CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar24 + 0xe8) >> 0x20),
                      fVar52 + (float)*(undefined8 *)(lVar24 + 0xe8));
        *(float *)(lVar24 + 0xf0) = fVar49 + *(float *)(lVar24 + 0xf0);
        goto UnityEngine_Animator__GetAnimatorClipInfoCount;
      }
      if (((int)uVar2 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
        if (uVar8 < uVar36) {
          if (*(int *)(lVar19 + lVar34 * 0x178 + 0x68) == in_stack_00000030) {
            lVar24 = lVar19 + lVar34 * 0x178;
            *(ulong *)(lVar24 + 0x70) =
                 CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar24 + 0x70) >> 0x20),
                          fVar52 + (float)*(undefined8 *)(lVar24 + 0x70));
            *(float *)(lVar24 + 0x78) = fVar49 + *(float *)(lVar24 + 0x78);
            *(ulong *)(lVar24 + 0x98) =
                 CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar24 + 0x98) >> 0x20),
                          fVar52 + (float)*(undefined8 *)(lVar24 + 0x98));
            *(float *)(lVar24 + 0xa0) = fVar49 + *(float *)(lVar24 + 0xa0);
            *(ulong *)(lVar24 + 0xc0) =
                 CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar24 + 0xc0) >> 0x20),
                          fVar52 + (float)*(undefined8 *)(lVar24 + 0xc0));
            *(float *)(lVar24 + 200) = fVar49 + *(float *)(lVar24 + 200);
            *(ulong *)(lVar24 + 0xe8) =
                 CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar24 + 0xe8) >> 0x20),
                          fVar52 + (float)*(undefined8 *)(lVar24 + 0xe8));
            *(float *)(lVar24 + 0xf0) = fVar49 + *(float *)(lVar24 + 0xf0);
            goto UnityEngine_Animator__GetAnimatorClipInfoCount;
          }
          goto UnityEngine_Animator__GetAnimatorTransitionInfo;
        }
        goto LAB_035575f4;
      }
    }
UnityEngine_Animator__GetAnimatorTransitionInfo:
    if (uVar36 <= uVar8) goto LAB_035575f4;
    if (DAT_0411f172 == '\0') {
      FUN_01ab69ac(PTR_DAT_03cbded8);
      DAT_0411f172 = '\x01';
      uVar36 = *(uint *)(lVar19 + 0x18);
    }
    puVar11 = PTR_DAT_03cbded8;
    uVar39 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
    lVar23 = lVar19 + lVar34 * 0x178;
    *(undefined8 *)(lVar23 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
    *(undefined4 *)(lVar23 + 0x78) = uVar39;
    if (uVar36 <= uVar8) goto LAB_035575f4;
    uVar39 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
    lVar23 = lVar19 + lVar34 * 0x178;
    *(undefined8 *)(lVar23 + 0x98) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
    *(undefined4 *)(lVar23 + 0xa0) = uVar39;
    uVar39 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
    *(undefined8 *)(lVar23 + 0xc0) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
    *(undefined4 *)(lVar23 + 200) = uVar39;
    uVar39 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
    *(undefined8 *)(lVar23 + 0xe8) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
    *(undefined4 *)(lVar23 + 0xf0) = uVar39;
    *(undefined1 *)(lVar24 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
    if (iVar15 == 0) {
      pcVar25 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
      (*pcVar25)();
    }
    else if (iVar15 == 1) {
      pcVar25 = *(code **)(*unaff_x19 + 0x8c8);
      goto LAB_0355591c;
    }
LAB_03555938:
    if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar24 + 0x18) <= uVar8) goto LAB_035575f4;
    lVar24 = lVar24 + lVar34 * 0x178;
    uVar43 = *(undefined8 *)(lVar24 + 0x11c);
    *(undefined8 *)(lVar24 + 0x11c) =
         CONCAT44(fVar51 + (float)((ulong)uVar43 >> 0x20),fVar52 + (float)uVar43);
    *(float *)(lVar24 + 0x124) = fVar49 + *(float *)(lVar24 + 0x124);
    if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar24 + 0x18) <= uVar8) goto LAB_035575f4;
    lVar24 = lVar24 + lVar34 * 0x178;
    *(ulong *)(lVar24 + 0x110) =
         CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar24 + 0x110) >> 0x20),
                  fVar52 + (float)*(undefined8 *)(lVar24 + 0x110));
    *(float *)(lVar24 + 0x118) = fVar49 + *(float *)(lVar24 + 0x118);
    if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar24 + 0x18) <= uVar8) goto LAB_035575f4;
    lVar24 = lVar24 + lVar34 * 0x178;
    *(ulong *)(lVar24 + 0x128) =
         CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar24 + 0x128) >> 0x20),
                  fVar52 + (float)*(undefined8 *)(lVar24 + 0x128));
    *(float *)(lVar24 + 0x130) = fVar49 + *(float *)(lVar24 + 0x130);
    if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar24 + 0x18) <= uVar8) goto LAB_035575f4;
    lVar24 = lVar24 + lVar34 * 0x178;
    *(float *)(lVar24 + 0x134) = fVar52 + *(float *)(lVar24 + 0x134);
    *(ulong *)(lVar24 + 0x138) =
         CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar24 + 0x138) >> 0x20),
                  fVar51 + (float)*(undefined8 *)(lVar24 + 0x138));
    lVar24 = *in_stack_00000170;
    if ((lVar24 == 0) || (lVar23 = *(long *)(lVar24 + 0x38), lVar23 == 0)) goto LAB_035574b8;
    uVar36 = *(uint *)(lVar23 + 0x18);
    if (uVar36 <= uVar8) goto LAB_035575f4;
    lVar28 = lVar23 + lVar34 * 0x178;
    uVar41 = CONCAT44(fVar52 + (float)((ulong)*(undefined8 *)(lVar28 + 0x140) >> 0x20),
                      fVar52 + (float)*(undefined8 *)(lVar28 + 0x140));
    fVar53 = fVar51 + *(float *)(lVar28 + 0x150);
    uVar42 = (ulong)(uint)fVar53;
    uVar46 = CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar28 + 0x148) >> 0x20),
                      fVar51 + (float)*(undefined8 *)(lVar28 + 0x148));
    *(float *)(lVar28 + 0x150) = fVar53;
    *(ulong *)(lVar28 + 0x140) = uVar41;
    *(ulong *)(lVar28 + 0x148) = uVar46;
    if (uVar2 == uVar45) {
      uVar45 = *unaff_x20 - 1;
      if (uVar8 == uVar45) goto LAB_03555b44;
    }
    else {
      lVar24 = *(long *)(lVar24 + 0x50);
      if (lVar24 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= uVar45) goto LAB_035575f4;
      lVar28 = (long)(int)uVar45;
      lVar29 = lVar24 + lVar28 * 0x5c;
      uVar46 = (ulong)(uint)*(float *)(lVar29 + 0x58);
      fVar53 = fVar51 + *(float *)(lVar29 + 0x54);
      uVar41 = (ulong)(uint)fVar53;
      fVar44 = fVar52 + *(float *)(lVar29 + 0x58);
      uVar42 = (ulong)(uint)fVar44;
      *(ulong *)(lVar29 + 0x4c) =
           CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar29 + 0x4c) >> 0x20),
                    fVar51 + (float)*(undefined8 *)(lVar29 + 0x4c));
      *(float *)(lVar29 + 0x54) = fVar53;
      *(float *)(lVar29 + 0x58) = fVar44;
      if (uVar36 <= *(uint *)(lVar29 + 0x34)) goto LAB_035575f4;
      uVar39 = *(undefined4 *)(lVar23 + (long)(int)*(uint *)(lVar29 + 0x34) * 0x178 + 0x11c);
      lVar24 = lVar24 + lVar28 * 0x5c;
      *(float *)(lVar24 + 0x70) = fVar53;
      *(undefined4 *)(lVar24 + 0x6c) = uVar39;
      lVar24 = *in_stack_00000170;
      if ((lVar24 == 0) || (lVar23 = *(long *)(lVar24 + 0x50), lVar23 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar23 + 0x18) <= uVar45) goto LAB_035575f4;
      lVar24 = *(long *)(lVar24 + 0x38);
      if (lVar24 == 0) goto LAB_035574b8;
      uVar45 = *(uint *)(lVar23 + lVar28 * 0x5c + 0x40);
      if (*(uint *)(lVar24 + 0x18) <= uVar45) goto LAB_035575f4;
      lVar23 = lVar23 + lVar28 * 0x5c;
      *(undefined4 *)(lVar23 + 0x74) = *(undefined4 *)(lVar24 + (long)(int)uVar45 * 0x178 + 0x128);
      *(undefined4 *)(lVar23 + 0x78) = *(undefined4 *)(lVar23 + 0x4c);
      uVar45 = *unaff_x20 - 1;
LAB_03555b44:
      if (uVar8 == uVar45) {
        lVar24 = *in_stack_00000170;
        if ((lVar24 == 0) || (lVar23 = *(long *)(lVar24 + 0x50), lVar23 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar23 + 0x18) <= uVar2) goto LAB_035575f4;
        lVar28 = lVar23 + lVar31 * 0x5c;
        uVar46 = (ulong)(uint)*(float *)(lVar28 + 0x58);
        uVar41 = CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar28 + 0x4c) >> 0x20),
                          fVar51 + (float)*(undefined8 *)(lVar28 + 0x4c));
        fVar53 = fVar51 + *(float *)(lVar28 + 0x54);
        fVar52 = fVar52 + *(float *)(lVar28 + 0x58);
        uVar42 = (ulong)(uint)fVar52;
        *(ulong *)(lVar28 + 0x4c) = uVar41;
        *(float *)(lVar28 + 0x54) = fVar53;
        *(float *)(lVar28 + 0x58) = fVar52;
        lVar24 = *(long *)(lVar24 + 0x38);
        if (lVar24 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar24 + 0x18) <= *(uint *)(lVar28 + 0x34)) goto LAB_035575f4;
        uVar39 = *(undefined4 *)(lVar24 + (long)(int)*(uint *)(lVar28 + 0x34) * 0x178 + 0x11c);
        lVar23 = lVar23 + lVar31 * 0x5c;
        *(float *)(lVar23 + 0x70) = fVar53;
        *(undefined4 *)(lVar23 + 0x6c) = uVar39;
        lVar24 = *in_stack_00000170;
        if ((lVar24 == 0) || (lVar23 = *(long *)(lVar24 + 0x50), lVar23 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar23 + 0x18) <= uVar2) goto LAB_035575f4;
        lVar24 = *(long *)(lVar24 + 0x38);
        if (lVar24 == 0) goto LAB_035574b8;
        uVar45 = *(uint *)(lVar23 + lVar31 * 0x5c + 0x40);
        if (*(uint *)(lVar24 + 0x18) <= uVar45) goto LAB_035575f4;
        lVar23 = lVar23 + lVar31 * 0x5c;
        *(undefined4 *)(lVar23 + 0x74) = *(undefined4 *)(lVar24 + (long)(int)uVar45 * 0x178 + 0x128)
        ;
        *(undefined4 *)(lVar23 + 0x78) = *(undefined4 *)(lVar23 + 0x4c);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar18 = FUN_026b82c4(uVar30,0);
    if (((((uVar18 & 1) == 0) && (1 < uVar30 - 0x2010)) && (uVar30 != 0xad)) && (uVar30 != 0x2d)) {
      if (bVar10) {
        if (((uVar17 != 1) && ((int)uVar8 < (int)(*(uint *)(lVar19 + 0x18) - 1))) &&
           (((int)uVar8 < *unaff_x20 && ((uVar30 == 0x2019 || (uVar30 == 0x27)))))) {
          if (*(uint *)(lVar19 + 0x18) <= uVar17 - 2) goto LAB_035575f4;
          uVar5 = *(undefined2 *)(lVar19 + lVar35 + -0x438);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar18 = FUN_026b82c4(uVar5,0);
          if ((uVar18 & 1) != 0) {
            if (*(uint *)(lVar19 + 0x18) <= uVar17) goto LAB_035575f4;
            uVar5 = *(undefined2 *)(lVar19 + lVar35 + -0x148);
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar18 = FUN_026b82c4(uVar5,0);
            if ((uVar18 & 1) != 0) goto LAB_03555d68;
          }
        }
      }
      else {
        if (uVar17 != 1) {
LAB_0355686c:
          bVar10 = false;
          goto LAB_03555d70;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar18 = FUN_026b81f8(uVar30,0);
        if ((uVar18 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar18 = FUN_026b63d8(uVar30,0);
          if (((uVar30 != 0x200b) && ((uVar18 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0355686c;
        }
      }
      if (uVar8 == *unaff_x20 - 1U) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar18 = FUN_026b82c4(uVar30,0);
        iVar15 = iStack0000000000000128;
        if ((uVar18 & 1) == 0) goto LAB_03556070;
      }
      else {
LAB_03556070:
        iVar15 = uVar17 - 2;
      }
      lVar24 = *in_stack_00000170;
      if (lVar24 == 0) goto LAB_035574b8;
      lVar23 = *(long *)(lVar24 + 0x40);
      if (lVar23 == 0) goto LAB_035574b8;
      uVar45 = *(uint *)(lVar24 + 0x24);
      iVar16 = *(int *)(lVar23 + 0x18);
      if (iVar16 < (int)(uVar45 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar24 + 0x40),iVar16 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar24 = *in_stack_00000170;
        if (lVar24 == 0) goto LAB_035574b8;
      }
      lVar24 = *(long *)(lVar24 + 0x40);
      if (lVar24 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= uVar45) goto LAB_035575f4;
      lVar24 = lVar24 + (long)(int)uVar45 * 0x18;
      *(long **)(lVar24 + 0x20) = unaff_x19;
      *(uint *)(lVar24 + 0x28) = uStack0000000000000158;
      *(int *)(lVar24 + 0x2c) = iVar15;
      *(uint *)(lVar24 + 0x30) = (iVar15 - uStack0000000000000158) + 1;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar24 = unaff_x19[0x6d];
      if (lVar24 == 0) goto LAB_035574b8;
      lVar23 = *(long *)(lVar24 + 0x50);
      *(int *)(lVar24 + 0x24) = *(int *)(lVar24 + 0x24) + 1;
      if (lVar23 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar23 + 0x18) <= uVar2) goto LAB_035575f4;
      lVar23 = lVar23 + lVar31 * 0x5c;
      bVar10 = false;
      iStack00000000000000d4 = iStack00000000000000d4 + 1;
      *(int *)(lVar23 + 0x30) = *(int *)(lVar23 + 0x30) + 1;
    }
    else {
      if (!bVar10) {
        uStack0000000000000158 = uVar8;
      }
      if (uVar8 == *unaff_x20 - 1U) {
        lVar24 = *in_stack_00000170;
        if (lVar24 == 0) goto LAB_035574b8;
        lVar23 = *(long *)(lVar24 + 0x40);
        if (lVar23 == 0) goto LAB_035574b8;
        uVar45 = *(uint *)(lVar24 + 0x24);
        iVar15 = *(int *)(lVar23 + 0x18);
        if (iVar15 < (int)(uVar45 + 1)) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff025c((long *)(lVar24 + 0x40),iVar15 + 1,
                       *(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
          lVar24 = *in_stack_00000170;
          if (lVar24 == 0) goto LAB_035574b8;
        }
        lVar24 = *(long *)(lVar24 + 0x40);
        if (lVar24 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar24 + 0x18) <= uVar45) goto LAB_035575f4;
        lVar24 = lVar24 + (long)(int)uVar45 * 0x18;
        *(long **)(lVar24 + 0x20) = unaff_x19;
        *(uint *)(lVar24 + 0x28) = uStack0000000000000158;
        *(uint *)(lVar24 + 0x2c) = uVar8;
        *(uint *)(lVar24 + 0x30) = uVar17 - uStack0000000000000158;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar24 = unaff_x19[0x6d];
        if (lVar24 == 0) goto LAB_035574b8;
        lVar23 = *(long *)(lVar24 + 0x50);
        *(int *)(lVar24 + 0x24) = *(int *)(lVar24 + 0x24) + 1;
        if (lVar23 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar23 + 0x18) <= uVar2) goto LAB_035575f4;
        lVar23 = lVar23 + lVar31 * 0x5c;
        iStack00000000000000d4 = iStack00000000000000d4 + 1;
        *(int *)(lVar23 + 0x30) = *(int *)(lVar23 + 0x30) + 1;
      }
LAB_03555d68:
      bVar10 = true;
    }
LAB_03555d70:
    if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
    goto LAB_035574b8;
    uVar45 = *(uint *)(lVar24 + 0x18);
    if (uVar45 <= uVar8) goto LAB_035575f4;
    if ((*(byte *)(lVar24 + lVar34 * 0x178 + 400) >> 2 & 1) == 0) {
      if (bVar12) {
LAB_03555da0:
        if (uVar45 <= uVar17 - 2) goto LAB_035575f4;
        lVar31 = *unaff_x19;
        uVar45 = *(uint *)(lVar24 + lVar35 + -0x330);
        uVar39 = *(undefined4 *)(lVar24 + lVar35 + -0x2f8);
LAB_035562ec:
        pcVar25 = *(code **)(lVar31 + 0x8d8);
LAB_035562f4:
        uVar46 = (ulong)uVar45;
        uVar41 = (ulong)(uint)fStack0000000000000070;
        uVar42 = (ulong)uStack0000000000000074;
        (*pcVar25)(fStack0000000000000078,uVar41,uVar42,uVar46,fStack0000000000000104,0,
                   fStack000000000000008c,uVar39);
        puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar24 = *(long *)puVar11;
        }
LAB_03556348:
        bVar12 = false;
        fVar55 = 0.0;
        fStack0000000000000104 = *(float *)(*(long *)(lVar24 + 0xb8) + 0x15a8);
        fStack0000000000000100 = 0.0;
      }
      else {
LAB_03556254:
        bVar12 = false;
      }
    }
    else {
      lVar24 = lVar24 + lVar34 * 0x178;
      iVar15 = *(int *)(lVar24 + 0x68);
      *(undefined4 *)(lVar24 + 0x16c) = in_stack_000017c4;
      if ((((int)unaff_x19[0x65] < (int)uVar8) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
         (((int)unaff_x19[0x5c] == 5 && (iVar15 + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar18 = FUN_026b63d8(uVar30,0);
      if ((uVar30 != 0x200b) && ((uVar18 & 1) == 0)) {
        lVar24 = *in_stack_00000170;
        if ((lVar24 == 0) || (lVar31 = *(long *)(lVar24 + 0x38), lVar31 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar31 + 0x18) <= uVar8) goto LAB_035575f4;
        fVar53 = *(float *)(lVar31 + lVar34 * 0x178 + 0x160);
        if (fVar55 <= fVar53) {
          fVar55 = fVar53;
        }
        if (fStack0000000000000100 <= ABS(fVar38)) {
          fStack0000000000000100 = ABS(fVar38);
        }
        if (iVar15 != iStack000000000000006c) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar24 = *in_stack_00000170;
            if (lVar24 == 0) goto LAB_035574b8;
            lVar31 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          else {
            lVar31 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          fStack0000000000000104 = *(float *)(lVar31 + 0x15a8);
        }
        lVar24 = *(long *)(lVar24 + 0x38);
        if (lVar24 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar24 + 0x18) <= uVar8) goto LAB_035575f4;
        if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
        fVar44 = *(float *)(lVar24 + lVar34 * 0x178 + 0x14c);
        fVar53 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
        fVar44 = fVar44 + fVar55 * fVar53;
        if (fVar44 <= fStack0000000000000104) {
          fStack0000000000000104 = fVar44;
        }
        uVar41 = (ulong)(uint)fStack0000000000000104;
        iStack000000000000006c = iVar15;
      }
      if (!bVar12) {
        bVar12 = false;
        if ((((uVar30 == 0xd) || ((uVar30 & 0xfffe) == 10)) || ((int)uVar7 < (int)uVar8)) ||
           ((bool)(bVar1 ^ 1))) goto LAB_03556364;
        if (uVar8 == uVar7) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar18 = FUN_026b97f8(uVar30,0);
          if ((uVar18 & 1) != 0) goto LAB_03556254;
        }
        if ((*in_stack_00000170 == 0) ||
           (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar24 + 0x18) <= uVar8) goto LAB_035575f4;
        lVar24 = lVar24 + lVar34 * 0x178;
        fStack000000000000008c = *(float *)(lVar24 + 0x160);
        fStack0000000000000078 = *(float *)(lVar24 + 0x11c);
        uVar42 = (ulong)(uint)fStack0000000000000078;
        bVar12 = fVar55 != 0.0;
        fVar53 = fStack000000000000008c;
        if (bVar12) {
          fVar53 = fVar55;
        }
        fVar55 = fVar53;
        uVar14 = *(undefined4 *)(lVar24 + 0x168);
        uStack0000000000000074 = 0;
        fVar53 = fVar38;
        if (bVar12) {
          fVar53 = fStack0000000000000100;
        }
        uVar41 = (ulong)(uint)fVar53;
        fStack0000000000000070 = fStack0000000000000104;
        fStack0000000000000100 = fVar53;
      }
      if (*unaff_x20 == 1) {
        if ((*in_stack_00000170 != 0) &&
           (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 != 0)) {
          if (uVar8 < *(uint *)(lVar24 + 0x18)) {
            lVar24 = lVar24 + lVar34 * 0x178;
            lVar31 = *unaff_x19;
            uVar45 = *(uint *)(lVar24 + 0x128);
            uVar39 = *(undefined4 *)(lVar24 + 0x160);
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
        uVar18 = FUN_026b63d8(uVar30,0);
        if ((*in_stack_00000170 != 0) &&
           (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 != 0)) {
          lVar31 = lVar34;
          uVar45 = uVar8;
          if (uVar30 == 0x200b || (uVar18 & 1) != 0) {
            lVar31 = lVar26;
            uVar45 = uVar7;
          }
          if (uVar45 < *(uint *)(lVar24 + 0x18)) {
            lVar24 = lVar24 + lVar31 * 0x178;
            uVar45 = *(uint *)(lVar24 + 0x128);
            uVar39 = *(undefined4 *)(lVar24 + 0x160);
            pcVar25 = *(code **)(*unaff_x19 + 0x8d8);
            goto LAB_035562f4;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
      if (!bVar1) {
        if ((*in_stack_00000170 != 0) &&
           (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 != 0)) {
          uVar45 = *(uint *)(lVar24 + 0x18);
          goto LAB_03555da0;
        }
        goto LAB_035574b8;
      }
      if ((int)uVar8 < *unaff_x20 + -1) {
        if ((*in_stack_00000170 == 0) ||
           (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar24 + 0x18) <= uVar17) goto LAB_035575f4;
        uVar18 = FUN_03567ad8(uVar14,*(undefined4 *)(lVar24 + lVar35),0);
        if ((uVar18 & 1) == 0) {
          if ((*in_stack_00000170 != 0) &&
             (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 != 0)) {
            if (uVar8 < *(uint *)(lVar24 + 0x18)) {
              lVar24 = lVar24 + lVar34 * 0x178;
              uVar46 = (ulong)*(uint *)(lVar24 + 0x128);
              uVar42 = (ulong)uStack0000000000000074;
              uVar41 = (ulong)(uint)fStack0000000000000070;
              (**(code **)(*unaff_x19 + 0x8d8))
                        (fStack0000000000000078,uVar41,uVar42,uVar46,fStack0000000000000104,0,
                         fStack000000000000008c,*(undefined4 *)(lVar24 + 0x160));
              puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
              lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar24 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar24 = *(long *)puVar11;
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
    if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar24 + 0x18) <= uVar8) goto LAB_035575f4;
    if (lVar27 == 0) goto LAB_035574b8;
    uVar45 = *(uint *)(lVar24 + lVar34 * 0x178 + 400);
    fVar53 = (float)FUN_03776a30(lVar27 + 0x50,0);
    if ((uVar45 >> 6 & 1) == 0) {
      if ((_iStack0000000000000128 & 0x100000000) != 0) {
        if ((*in_stack_00000170 == 0) ||
           (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar24 + 0x18) <= uVar17 - 2) goto LAB_035575f4;
        uVar45 = *(uint *)(lVar24 + lVar35 + -0x330);
        fVar51 = *(float *)(lVar24 + lVar35 + -0x30c);
        pcVar25 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
        uVar46 = (ulong)uVar45;
        uVar41 = (ulong)(uint)fStack000000000000009c;
        uVar42 = (ulong)uStack0000000000000098;
        (*pcVar25)(fStack00000000000000a0,uVar41,uVar42,uVar46,
                   fStack00000000000000a8 * fVar53 + fVar51,0,fStack00000000000000a8,
                   fStack00000000000000a8);
      }
LAB_03556948:
      _iStack0000000000000128 = _iStack0000000000000128 & 0xffffffff;
    }
    else {
      lVar24 = *in_stack_00000170;
      if ((lVar24 == 0) || (lVar31 = *(long *)(lVar24 + 0x38), lVar31 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar31 + 0x18) <= uVar8) goto LAB_035575f4;
      *(undefined4 *)(lVar31 + lVar34 * 0x178 + 0x174) = in_stack_000017c4;
      if ((((int)unaff_x19[0x65] < (int)uVar8) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
         (((int)unaff_x19[0x5c] == 5 &&
          (*(int *)(lVar31 + lVar34 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((((uVar30 == 0xd) || ((uVar30 & 0xfffe) == 10)) || ((int)uVar7 < (int)uVar8)) ||
         ((_iStack0000000000000128 & 0x100000000) != 0 || !bVar1)) {
LAB_035564e8:
        if ((_iStack0000000000000128 & 0x100000000) == 0) goto LAB_03556948;
      }
      else {
        if (uVar8 == uVar7) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar18 = FUN_026b97f8(uVar30,0);
          if ((uVar18 & 1) != 0) goto LAB_035564e8;
          lVar24 = *in_stack_00000170;
          if (lVar24 == 0) goto LAB_035574b8;
        }
        lVar24 = *(long *)(lVar24 + 0x38);
        if (lVar24 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar24 + 0x18) <= uVar8) goto LAB_035575f4;
        lVar24 = lVar24 + lVar34 * 0x178;
        fStack0000000000000040 = *(float *)(lVar24 + 0x60);
        fStack0000000000000038 = *(float *)(lVar24 + 0x14c);
        uVar41 = (ulong)(uint)fStack0000000000000038;
        fStack00000000000000a0 = *(float *)(lVar24 + 0x11c);
        uVar42 = (ulong)(uint)fStack00000000000000a0;
        fStack00000000000000a8 = *(float *)(lVar24 + 0x160);
        fStack000000000000009c = fVar53 * fStack00000000000000a8 + fStack0000000000000038;
        uStack0000000000000098 = 0;
      }
      iVar15 = *unaff_x20;
      if (iVar15 == 1) {
LAB_03556628:
        if ((*in_stack_00000170 != 0) &&
           (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 != 0)) {
          if (uVar8 < *(uint *)(lVar24 + 0x18)) {
            lVar24 = lVar24 + lVar34 * 0x178;
            lVar26 = *unaff_x19;
            uVar45 = *(uint *)(lVar24 + 0x128);
            fVar51 = *(float *)(lVar24 + 0x14c);
LAB_03556654:
            pcVar25 = *(code **)(lVar26 + 0x8d8);
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
        uVar18 = FUN_026b63d8(uVar30,0);
        if ((*in_stack_00000170 != 0) &&
           (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 != 0)) {
          uVar45 = *(uint *)(lVar24 + 0x18);
          if (uVar30 == 0x200b || (uVar18 & 1) != 0) {
            if (uVar45 <= uVar7) goto LAB_035575f4;
          }
          else {
FUN_035568e8:
            lVar26 = lVar34;
            if (uVar45 <= uVar8) goto LAB_035575f4;
          }
LAB_035568f0:
          lVar24 = lVar24 + lVar26 * 0x178;
          fVar51 = *(float *)(lVar24 + 0x14c);
          uVar45 = *(uint *)(lVar24 + 0x128);
          pcVar25 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_03556914;
        }
        goto LAB_035574b8;
      }
      if ((int)uVar8 < iVar15) {
        lVar24 = *in_stack_00000170;
        if ((lVar24 != 0) && (lVar31 = *(long *)(lVar24 + 0x38), lVar31 != 0)) {
          if (uVar17 < *(uint *)(lVar31 + 0x18)) {
            if (*(float *)(lVar31 + lVar35 + -0x108) == fStack0000000000000040) {
              fVar44 = *(float *)(lVar31 + lVar35 + -0x1c);
              if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar41 = (ulong)(uint)fStack0000000000000038;
              uVar18 = FUN_03567bac(fVar51 + fVar44,uVar41,0);
              if ((uVar18 & 1) != 0) {
                iVar15 = *unaff_x20;
                goto LAB_03556744;
              }
              lVar24 = *in_stack_00000170;
              if (lVar24 == 0) goto LAB_035574b8;
            }
            lVar24 = *(long *)(lVar24 + 0x38);
            if (lVar24 != 0) {
              uVar45 = *(uint *)(lVar24 + 0x18);
              if ((int)uVar8 <= (int)uVar7) goto FUN_035568e8;
              if (uVar7 < uVar45) goto LAB_035568f0;
              goto LAB_035575f4;
            }
            goto LAB_035574b8;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
LAB_03556744:
      if ((int)uVar8 < iVar15) {
        iVar15 = FUN_036d3364(lVar27,0);
        if (*(uint *)(lVar19 + 0x18) <= uVar17) goto LAB_035575f4;
        lVar24 = *(long *)(lVar19 + lVar35 + -0x130);
        if (lVar24 == 0) goto LAB_035574b8;
        iVar16 = FUN_036d3364(lVar24,0);
        if (iVar15 != iVar16) goto LAB_03556628;
      }
      if (!bVar1) {
        if ((*in_stack_00000170 != 0) &&
           (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 != 0)) {
          if (uVar17 - 2 < *(uint *)(lVar24 + 0x18)) {
            lVar26 = *unaff_x19;
            uVar45 = *(uint *)(lVar24 + lVar35 + -0x330);
            fVar51 = *(float *)(lVar24 + lVar35 + -0x30c);
            goto LAB_03556654;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
      _iStack0000000000000128 = CONCAT44(1,iStack0000000000000128);
    }
    if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
    goto LAB_035574b8;
    uVar45 = (uint)*(undefined8 *)(lVar24 + 0x18);
    if (uVar45 <= uVar8) goto LAB_035575f4;
    if ((*(byte *)(lVar24 + lVar34 * 0x178 + 0x191) >> 1 & 1) == 0) {
      if (bVar9) {
        uVar42 = (ulong)uStack00000000000000c0;
        uVar41 = (ulong)(uint)fStack00000000000000dc;
        uVar46 = (ulong)(uint)fStack00000000000000c8;
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000d8,uVar41,uVar42,uVar46,fStack00000000000000d0,uVar42);
      }
LAB_035569b4:
      bVar9 = false;
    }
    else {
      if ((((int)unaff_x19[0x65] < (int)uVar8) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
         (((int)unaff_x19[0x5c] == 5 &&
          (*(int *)(lVar24 + lVar34 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar9) {
        if ((((uVar30 == 0xd) || ((uVar30 & 0xfffe) == 10)) || ((int)uVar7 < (int)uVar8)) ||
           (!bVar1)) goto LAB_035569b4;
        if (uVar8 == uVar7) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar18 = FUN_026b97f8(uVar30,0);
          if ((uVar18 & 1) != 0) goto LAB_035569b4;
        }
        puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar26 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar26 = *(long *)puVar11;
        }
        if ((*in_stack_00000170 == 0) ||
           (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0)) goto LAB_035574b8;
        uVar45 = (uint)*(undefined8 *)(lVar24 + 0x18);
        if (uVar45 <= uVar8) goto LAB_035575f4;
        lVar26 = *(long *)(lVar26 + 0xb8);
        lVar27 = lVar24 + lVar34 * 0x178;
        in_stack_000017b8 = *(undefined8 *)(lVar27 + 0x184);
        in_stack_000017b0 = *(undefined8 *)(lVar27 + 0x17c);
        fStack00000000000000d8 = *(float *)(lVar26 + 0x1598);
        fStack00000000000000dc = *(float *)(lVar26 + 0x159c);
        in_stack_000017c0 = *(float *)(lVar27 + 0x18c);
        fStack00000000000000c8 = *(float *)(lVar26 + 0x15a0);
        fStack00000000000000d0 = *(float *)(lVar26 + 0x15a4);
        uStack00000000000000c0 = 0;
      }
      if (uVar45 <= uVar8) goto LAB_035575f4;
      lVar24 = lVar24 + lVar34 * 0x178;
      fVar53 = *(float *)(lVar24 + 0x128);
      fVar47 = *(float *)(lVar24 + 0x188);
      uVar32 = *(undefined8 *)(lVar24 + 0x17c);
      fVar50 = *(float *)(lVar24 + 0x184);
      uVar43 = *(undefined8 *)(lVar24 + 0x184);
      fVar49 = *(float *)(lVar24 + 0x18c);
      fVar51 = *(float *)(lVar24 + 0x11c);
      fVar48 = *(float *)(lVar24 + 0x148);
      fVar44 = *(float *)(lVar24 + 0x150);
      in_stack_00000178 = uVar32;
      fStack0000000000000180 = fVar50;
      fStack0000000000000184 = fVar47;
      in_stack_00000188 = fVar49;
      in_stack_00000190 = in_stack_000017b0;
      in_stack_00000198 = in_stack_000017b8;
      in_stack_000001a0 = in_stack_000017c0;
      uVar18 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
      lVar24 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if ((uVar18 & 1) == 0) {
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar24);
        }
        fVar53 = fVar53 + (float)in_stack_000017b8;
        uVar42 = (ulong)(uint)fVar53;
        fVar51 = fVar51 - (float)((ulong)in_stack_000017b0 >> 0x20);
        fVar44 = fVar44 - in_stack_000017c0;
        uVar41 = (ulong)(uint)fVar44;
        fVar48 = fVar48 + (float)((ulong)in_stack_000017b8 >> 0x20);
        uVar46 = (ulong)(uint)fVar48;
        if (fVar51 <= fStack00000000000000d8) {
          fStack00000000000000d8 = fVar51;
        }
        if (fVar44 <= fStack00000000000000dc) {
          fStack00000000000000dc = fVar44;
        }
        if (fStack00000000000000c8 <= fVar53) {
          fStack00000000000000c8 = fVar53;
        }
        if (fStack00000000000000d0 <= fVar48) {
          fStack00000000000000d0 = fVar48;
        }
      }
      else {
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar24);
        }
        fVar51 = (fVar51 + (fStack00000000000000c8 - (float)in_stack_000017b8)) * 0.5;
        uVar46 = (ulong)(uint)fVar51;
        if (fVar44 <= fStack00000000000000dc) {
          fStack00000000000000dc = fVar44;
        }
        uVar41 = (ulong)(uint)fStack00000000000000dc;
        uVar42 = (ulong)uStack00000000000000c0;
        if (fStack00000000000000d0 <= fVar48) {
          fStack00000000000000d0 = fVar48;
        }
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000d8,uVar41,uVar42,uVar46,fStack00000000000000d0,uVar42);
        fStack00000000000000dc = fVar44 - fVar49;
        fStack00000000000000c8 = fVar53 + fVar50;
        uStack00000000000000c0 = 0;
        fStack00000000000000d0 = fVar48 + fVar47;
        fStack00000000000000d8 = fVar51;
        in_stack_000017b0 = uVar32;
        in_stack_000017b8 = uVar43;
        in_stack_000017c0 = fVar49;
      }
      if (((*unaff_x20 == 1) || (uVar8 == uVar6)) || (((int)uVar7 <= (int)uVar8 || (!bVar1)))) {
        uVar42 = (ulong)uStack00000000000000c0;
        uVar41 = (ulong)(uint)fStack00000000000000dc;
        uVar46 = (ulong)(uint)fStack00000000000000c8;
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000d8,uVar41,uVar42,uVar46,fStack00000000000000d0,uVar42);
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
    }
    iVar15 = *unaff_x20;
    lVar35 = lVar35 + 0x178;
    _iStack0000000000000128 = CONCAT44(uStack000000000000012c,iStack0000000000000128 + 1);
    bVar1 = iVar15 <= (int)uVar17;
    unaff_x28 = in_stack_00000170;
    uVar17 = uVar17 + 1;
    uVar45 = uVar2;
    if (bVar1) goto FUN_03556ed8;
    goto LAB_03554e78;
  }
  iStack00000000000000d4 = 0;
  iVar13 = 0;
  in_stack_00000170 = unaff_x28;
LAB_03556f00:
  *(int *)(lVar19 + 0x18) = iVar15;
  lVar35 = unaff_x19[0xd4];
  *(int *)(lVar19 + 0x2c) = iVar13;
  if (iVar15 < 1 || iStack00000000000000d4 == 0) {
    iStack00000000000000d4 = 1;
  }
  *(int *)(lVar19 + 0x1c) = (int)lVar35;
  *(int *)(lVar19 + 0x24) = iStack00000000000000d4;
  *(int *)(lVar19 + 0x30) = (int)unaff_x19[0x96] + 1;
  if (((int)unaff_x19[99] != 0xff) ||
     (uVar18 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar18 & 1) == 0)) {
LAB_03554724:
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_03567630();
    return;
  }
  lVar19 = unaff_x19[0xdf];
  if (lVar19 != 0) {
    (**(code **)(lVar19 + 0x18))
              (*(undefined8 *)(lVar19 + 0x40),*in_stack_00000170,*(undefined8 *)(lVar19 + 0x28));
  }
  if (unaff_x19[0xe5] != 0) {
    iVar13 = FUN_03911ee4(unaff_x19[0xe5],0);
    if (iVar13 != 0x19) {
      lVar19 = unaff_x19[0xe5];
      if (lVar19 == 0) goto LAB_035574b8;
      uVar17 = FUN_03911ee4(lVar19,0);
      FUN_03911f20(lVar19,uVar17 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar19 = *(long *)(*in_stack_00000170 + 0x60), lVar19 == 0))
      goto LAB_035574b8;
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar19 + 0x18) == 0) goto LAB_035575f4;
      FUN_03596b20(lVar19 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar19 = *(long *)(unaff_x19[0x6d] + 0x60), lVar19 != 0)) {
        if (*(int *)(lVar19 + 0x18) == 0) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar19 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar19 = *(long *)(unaff_x19[0x6d] + 0x60), lVar19 != 0)) {
            if (*(int *)(lVar19 + 0x18) == 0) goto LAB_035575f4;
            if (unaff_x19[0x74] != 0) {
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar19 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar19 = *(long *)(unaff_x19[0x6d] + 0x60), lVar19 != 0)) {
                if (*(int *)(lVar19 + 0x18) == 0) goto LAB_035575f4;
                if (unaff_x19[0x74] != 0) {
                  FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar19 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar19 = *(long *)(unaff_x19[0x6d] + 0x60), lVar19 != 0)) {
                    if (*(int *)(lVar19 + 0x18) == 0) goto LAB_035575f4;
                    if (unaff_x19[0x74] != 0) {
                      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar19 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_036aa280(unaff_x19[0x74],0);
                        if (unaff_x19[0xe4] != 0) {
                          FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
                          if (unaff_x19[0xe4] != 0) {
                            uVar43 = FUN_0390ef60(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar17 = FUN_0390ed3c(unaff_x19[0xe4],0);
                              lVar19 = *in_stack_00000170;
                              if (lVar19 != 0) {
                                lVar24 = 0;
                                lVar35 = 0;
                                do {
                                  uVar18 = lVar35 + 1;
                                  if ((long)*(int *)(lVar19 + 0x34) <= (long)uVar18)
                                  goto LAB_03554724;
                                  lVar19 = *(long *)(lVar19 + 0x60);
                                  if (lVar19 == 0) break;
                                  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  if (*(uint *)(lVar19 + 0x18) <= uVar18) goto LAB_035575f4;
                                  FUN_03596a20(lVar19 + lVar24 + 0x70,0);
                                  lVar19 = unaff_x19[0xe1];
                                  if (lVar19 == 0) break;
                                  if (*(uint *)(lVar19 + 0x18) <= uVar18) goto LAB_035575f4;
                                  uVar32 = *(undefined8 *)(lVar19 + lVar35 * 8 + 0x28);
                                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar20 = FUN_036d35a8(uVar32,0,0);
                                  if ((uVar20 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                      if ((*in_stack_00000170 == 0) ||
                                         (lVar19 = *(long *)(*in_stack_00000170 + 0x60), lVar19 == 0
                                         )) break;
                                      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      if (*(uint *)(lVar19 + 0x18) <= uVar18) goto LAB_035575f4;
                                      FUN_03596b20(lVar19 + lVar24 + 0x70,1,0);
                                    }
                                    lVar19 = unaff_x19[0xe1];
                                    if (lVar19 == 0) break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar18) goto LAB_035575f4;
                                    lVar19 = *(long *)(lVar19 + lVar35 * 8 + 0x28);
                                    if (lVar19 == 0) break;
                                    lVar19 = UnityEngine_Material__GetColorArray(lVar19,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar26 = *(long *)(*in_stack_00000170 + 0x60), lVar26 == 0))
                                    break;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar18) goto LAB_035575f4;
                                    if (lVar19 == 0) break;
                                    FUN_036a460c(lVar19,*(undefined8 *)(lVar26 + lVar24 + 0x80),0);
                                    lVar19 = unaff_x19[0xe1];
                                    if (lVar19 == 0) break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar18) goto LAB_035575f4;
                                    lVar19 = *(long *)(lVar19 + lVar35 * 8 + 0x28);
                                    if (lVar19 == 0) break;
                                    lVar19 = UnityEngine_Material__GetColorArray(lVar19,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar26 = *(long *)(*in_stack_00000170 + 0x60), lVar26 == 0))
                                    break;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar18) goto LAB_035575f4;
                                    if (lVar19 == 0) break;
                                    FUN_036a4810(lVar19,*(undefined8 *)(lVar26 + lVar24 + 0x98),0);
                                    lVar19 = unaff_x19[0xe1];
                                    if (lVar19 == 0) break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar18) goto LAB_035575f4;
                                    lVar19 = *(long *)(lVar19 + lVar35 * 8 + 0x28);
                                    if (lVar19 == 0) break;
                                    lVar19 = UnityEngine_Material__GetColorArray(lVar19,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar26 = *(long *)(*in_stack_00000170 + 0x60), lVar26 == 0))
                                    break;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar18) goto LAB_035575f4;
                                    if (lVar19 == 0) break;
                                    FUN_036a48bc(lVar19,*(undefined8 *)(lVar26 + lVar24 + 0xa0),0);
                                    lVar19 = unaff_x19[0xe1];
                                    if (lVar19 == 0) break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar18) goto LAB_035575f4;
                                    lVar19 = *(long *)(lVar19 + lVar35 * 8 + 0x28);
                                    if (lVar19 == 0) break;
                                    lVar19 = UnityEngine_Material__GetColorArray(lVar19,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar26 = *(long *)(*in_stack_00000170 + 0x60), lVar26 == 0))
                                    break;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar18) goto LAB_035575f4;
                                    if (lVar19 == 0) break;
                                    FUN_036a4e24(lVar19,*(undefined8 *)(lVar26 + lVar24 + 0xa8),0);
                                    lVar19 = unaff_x19[0xe1];
                                    if (lVar19 == 0) break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar18) goto LAB_035575f4;
                                    lVar19 = *(long *)(lVar19 + lVar35 * 8 + 0x28);
                                    if ((lVar19 == 0) ||
                                       (lVar19 = UnityEngine_Material__GetColorArray(lVar19,0),
                                       lVar19 == 0)) break;
                                    FUN_036aa280(lVar19,0);
                                    lVar19 = unaff_x19[0xe1];
                                    if (lVar19 == 0) break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar18) goto LAB_035575f4;
                                    lVar19 = *(long *)(lVar19 + lVar35 * 8 + 0x28);
                                    if (lVar19 == 0) break;
                                    lVar19 = FUN_037b514c(lVar19,0);
                                    lVar26 = unaff_x19[0xe1];
                                    if (lVar26 == 0) break;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar18) goto LAB_035575f4;
                                    lVar26 = *(long *)(lVar26 + lVar35 * 8 + 0x28);
                                    if ((lVar26 == 0) ||
                                       (uVar32 = UnityEngine_Material__GetColorArray(lVar26,0),
                                       lVar19 == 0)) break;
                                    FUN_0390f3a4(lVar19,uVar32,0);
                                    lVar19 = unaff_x19[0xe1];
                                    if (lVar19 == 0) break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar18) goto LAB_035575f4;
                                    lVar19 = *(long *)(lVar19 + lVar35 * 8 + 0x28);
                                    if ((lVar19 == 0) ||
                                       (lVar19 = FUN_037b514c(lVar19,0), lVar19 == 0)) break;
                                    FUN_0390eec8(uVar43,uVar41,uVar42,uVar46,lVar19,0);
                                    lVar19 = unaff_x19[0xe1];
                                    if (lVar19 == 0) break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar18) goto LAB_035575f4;
                                    lVar19 = *(long *)(lVar19 + lVar35 * 8 + 0x28);
                                    if ((lVar19 == 0) ||
                                       (lVar19 = FUN_037b514c(lVar19,0), lVar19 == 0)) break;
                                    FUN_0390ed78(lVar19,uVar17 & 1,0);
                                    lVar19 = unaff_x19[0xe1];
                                    if (lVar19 == 0) break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar18) goto LAB_035575f4;
                                    plVar33 = *(long **)(lVar19 + lVar35 * 8 + 0x28);
                                    uVar45 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar33 == (long *)0x0) break;
                                    (**(code **)(*plVar33 + 0x2c8))
                                              (plVar33,uVar45 & 1,*(undefined8 *)(*plVar33 + 0x2d0))
                                    ;
                                  }
                                  lVar19 = *in_stack_00000170;
                                  lVar35 = lVar35 + 1;
                                  lVar24 = lVar24 + 0x50;
                                } while (lVar19 != 0);
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
  lVar19 = *in_stack_00000170;
  if (lVar19 == 0) goto LAB_035574b8;
  iVar13 = uVar2 + 1;
  unaff_x26 = (long *)OVRPlugin_Media_TypeInfo;
  goto LAB_03556f00;
}


