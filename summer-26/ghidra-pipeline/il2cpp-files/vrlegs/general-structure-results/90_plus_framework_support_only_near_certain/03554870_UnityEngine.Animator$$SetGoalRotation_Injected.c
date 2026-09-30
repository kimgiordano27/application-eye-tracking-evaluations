/*
FUNCTION_NAME: UnityEngine.Animator$$SetGoalRotation_Injected
ENTRY_POINT: 03554870
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


void UnityEngine_Animator__SetGoalRotation_Injected
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined8 param_4,
               undefined8 param_5)

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
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  char cVar22;
  undefined4 *puVar23;
  long lVar24;
  long lVar25;
  code *pcVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  uint uVar31;
  long lVar32;
  long *unaff_x19;
  int *unaff_x20;
  undefined8 uVar33;
  long *plVar34;
  long *unaff_x22;
  long lVar35;
  long *unaff_x26;
  long lVar36;
  long *unaff_x28;
  uint uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  float fVar42;
  ulong uVar43;
  ulong uVar44;
  float fVar45;
  uint uVar46;
  ulong uVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fStack0000000000000020;
  float fStack0000000000000024;
  uint uStack0000000000000028;
  float fStack000000000000002c;
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
  undefined8 uStack00000000000000b8;
  uint in_stack_000000c0;
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
  
  fStack00000000000000c4 =
       fStack000000000000002c + 0.0 +
       (*(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x2c)) * 0.5;
  fVar38 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack0000000000000020) -
                 fStack0000000000000024) * 0.5;
  uStack00000000000000b8 =
       CONCAT44(((float)((ulong)param_4 >> 0x20) + (float)((ulong)param_5 >> 0x20)) * 0.5 + 0.0,
                ((float)param_4 + (float)param_5) * 0.5 + fVar38);
  if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
  uVar18 = FUN_03912334(unaff_x19[0xe5],0);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*unaff_x22);
  }
  uVar19 = FUN_036d35a8(uVar18,0,0);
  lVar20 = FUN_0357f060();
  if (lVar20 == 0) goto LAB_035574b8;
  FUN_036df824(lVar20,0);
  *(float *)(unaff_x19 + 0xe2) = fVar38;
  if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
  iVar13 = FUN_039117fc(unaff_x19[0xe5],0);
  if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
  fVar39 = (float)FUN_03911954(unaff_x19[0xe5],0);
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
  lVar20 = *(long *)OVRPlugin_Mesh_TypeInfo;
  if (*(int *)(lVar20 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar20 = *(long *)puVar11;
  }
  puVar23 = *(undefined4 **)(lVar20 + 0xb8);
  uVar43 = (ulong)(uint)puVar23[1];
  uVar44 = (ulong)(uint)puVar23[2];
  uVar47 = (ulong)(uint)puVar23[3];
  FUN_035683a4(*puVar23,uVar43,uVar44,uVar47,&stack0x000017b0,0x4000ffff,0);
  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar20 = *unaff_x28;
  if (lVar20 == 0) goto LAB_035574b8;
  iVar15 = *unaff_x20;
  if (0 < iVar15) {
    lVar20 = *(long *)(lVar20 + 0x38);
    fVar38 = ABS(fVar38);
    fVar42 = 1.0;
    if ((uVar19 & 1) == 0) {
      fVar42 = fVar38;
    }
    if (lVar20 == 0) goto LAB_035574b8;
    bVar12 = false;
    bVar10 = false;
    _iStack0000000000000128 = 0;
    bVar9 = false;
    iStack00000000000000d4 = 0;
    uStack0000000000000028 = 0;
    uStack0000000000000158 = 0;
    iStack000000000000006c = 0;
    lVar36 = 0x2e0;
    fVar40 = 0.0;
    fVar56 = 0.0;
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
    uStack0000000000000074 = in_stack_000000c0;
    fStack0000000000000078 = fStack00000000000000d8;
    uStack0000000000000098 = in_stack_000000c0;
    uVar17 = 1;
    uVar46 = 0;
LAB_03554e78:
    uVar8 = uVar17 - 1;
    if (*(uint *)(lVar20 + 0x18) <= uVar8) goto LAB_035575f4;
    if ((*unaff_x28 == 0) || (lVar25 = *(long *)(*unaff_x28 + 0x50), lVar25 == 0))
    goto LAB_035574b8;
    lVar35 = (long)(int)uVar8;
    lVar27 = lVar20 + lVar35 * 0x178;
    uVar2 = *(uint *)(lVar27 + 100);
    if (*(uint *)(lVar25 + 0x18) <= uVar2) goto LAB_035575f4;
    lVar32 = (long)(int)uVar2;
    lVar25 = lVar25 + lVar32 * 0x5c;
    lVar28 = *(long *)(lVar27 + 0x38);
    uVar4 = *(ushort *)(lVar27 + 0x20);
    uVar6 = *(uint *)(lVar25 + 0x3c);
    uVar37 = *(uint *)(lVar25 + 0x68);
    iVar3 = *(int *)(lVar25 + 0x20);
    iVar15 = *(int *)(lVar25 + 0x28);
    iVar16 = *(int *)(lVar25 + 0x2c);
    uVar7 = *(uint *)(lVar25 + 0x40);
    lVar27 = (long)(int)uVar7;
    fVar45 = *(float *)(lVar25 + 0x4c);
    fVar48 = *(float *)(lVar25 + 0x54);
    fVar52 = *(float *)(lVar25 + 0x58);
    fVar53 = *(float *)(lVar25 + 0x5c);
    fVar50 = *(float *)(lVar25 + 0x60);
    fVar51 = *(float *)(lVar25 + 0x6c);
    fVar55 = *(float *)(lVar25 + 0x70);
    fVar54 = *(float *)(lVar25 + 0x74);
    fVar49 = *(float *)(lVar25 + 0x78);
    uVar31 = (uint)uVar4;
    if ((int)uVar37 < 9) {
      switch(uVar37) {
      case 1:
        if ((char)unaff_x19[0x1e] == '\0') {
          in_stack_000000f8._4_4_ = fVar50 + 0.0;
        }
        else {
          in_stack_000000f8._4_4_ = 0.0 - fVar52;
        }
        break;
      case 2:
LAB_03555018:
        in_stack_000000f8._4_4_ = (fVar50 + fVar53 * 0.5) - fVar52 * 0.5;
        break;
      default:
        goto switchD_03554f58_caseD_3;
      case 4:
        in_stack_000000f8._4_4_ = (fVar53 + fVar50) - fVar52;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar53 + fVar50;
        }
        break;
      case 8:
        goto switchD_03554f58_caseD_8;
      }
LAB_03555088:
      in_stack_000000e8 = 0;
    }
    else if (uVar37 == 0x10) {
switchD_03554f58_caseD_8:
      if (uVar4 < 0xad) {
        if ((uVar4 != 3) && (uVar4 != 10)) {
LAB_03554fac:
          if (*(uint *)(lVar20 + 0x18) <= uVar6) goto LAB_035575f4;
          uVar5 = *(undefined2 *)(lVar20 + (long)(int)uVar6 * 0x178 + 0x20);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar19 = FUN_026b8cc4(uVar5,0);
          if ((uVar19 & 1) == 0) {
            bVar1 = (int)uVar2 < (int)unaff_x19[0x95];
          }
          else {
            bVar1 = false;
          }
          if ((fVar52 <= fVar53) && (!bVar1 && uVar37 >> 4 == 0)) {
            in_stack_000000f8._4_4_ = fVar50;
            if ((char)unaff_x19[0x1e] != '\0') {
              in_stack_000000f8._4_4_ = fVar53 + fVar50;
            }
            goto LAB_03555088;
          }
          if (((uVar17 == 1) || (uVar2 != uVar46)) || (uVar8 == *(uint *)((long)unaff_x19 + 0x324)))
          {
            in_stack_000000f8._4_4_ = fVar50;
            if ((char)unaff_x19[0x1e] != '\0') {
              in_stack_000000f8._4_4_ = fVar53 + fVar50;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uStack0000000000000028 = FUN_026b97f8(uVar31,0);
            in_stack_000000e8 = 0;
          }
          else {
            cVar22 = (char)unaff_x19[0x1e];
            fVar50 = -fVar52;
            if (cVar22 != '\0') {
              fVar50 = fVar52;
            }
            if (*(uint *)(lVar20 + 0x18) <= uVar6) goto LAB_035575f4;
            iVar16 = (int)*(char *)(lVar20 + (long)(int)uVar6 * 0x178 + 0x194) +
                     (-iVar3 - (uStack0000000000000028 & 1)) + iVar16 + -1;
            if (iVar16 < 1) {
              fVar52 = 1.0;
              iVar16 = 1;
            }
            else {
              fVar52 = *(float *)((long)unaff_x19 + 0x2dc);
            }
            if (uVar31 == 9) {
LAB_03556e74:
              fVar52 = 1.0 - fVar52;
            }
            else {
              if (uVar31 != 0xa0) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar19 = FUN_026b97f8(uVar31,0);
                cVar22 = (char)unaff_x19[0x1e];
                if ((uVar19 & 1) != 0) goto LAB_03556e74;
              }
              iVar16 = (iVar3 - (~uStack0000000000000028 & 1)) + iVar15;
            }
            fVar52 = ((fVar53 + fVar50) * fVar52) / (float)iVar16;
            if (cVar22 == '\0') {
              in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar52;
              in_stack_000000e8 =
                   CONCAT44((float)((ulong)in_stack_000000e8 >> 0x20) + 0.0,
                            (float)in_stack_000000e8 + 0.0);
            }
            else {
              in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar52;
            }
          }
        }
      }
      else if (((uVar4 != 0xad) && (uVar4 != 0x200b)) && (uVar4 != 0x2060)) goto LAB_03554fac;
    }
    else if (uVar37 == 0x20) {
      fVar52 = fVar51 + fVar54;
      goto LAB_03555018;
    }
switchD_03554f58_caseD_3:
    uVar37 = (uint)*(undefined8 *)(lVar20 + 0x18);
    if (uVar37 <= uVar8) goto LAB_035575f4;
    lVar25 = lVar20 + lVar35 * 0x178;
    fVar53 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
    fVar52 = (float)uStack00000000000000b8 + (float)in_stack_000000e8;
    fVar50 = (float)((ulong)uStack00000000000000b8 >> 0x20) +
             (float)((ulong)in_stack_000000e8 >> 0x20);
    if (*(char *)(lVar25 + 0x194) == '\0') goto LAB_03555938;
    iVar15 = *(int *)(lVar20 + lVar35 * 0x178 + 0x2c);
    if (iVar15 != 0) goto LAB_0355574c;
    fVar40 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar2,1.0);
    switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
    case 0:
      lVar24 = lVar20 + lVar35 * 0x178;
      *(undefined4 *)(lVar24 + 0x84) = 0;
      *(undefined4 *)(lVar24 + 0xac) = 0;
      *(undefined4 *)(lVar24 + 0xd4) = 0x3f800000;
      fVar40 = 1.0;
      break;
    case 1:
      fVar49 = *(float *)(lVar20 + lVar35 * 0x178 + 0x70);
      if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
        lVar24 = lVar20 + lVar35 * 0x178;
        fVar54 = (in_stack_000000f8._4_4_ + fVar49) - *(float *)(in_stack_00000080 + 0x230);
        fVar49 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
        goto LAB_035551cc;
      }
      lVar24 = lVar20 + lVar35 * 0x178;
      fVar54 = fVar54 - fVar51;
      *(float *)(lVar24 + 0x84) = fVar40 + (fVar49 - fVar51) / fVar54;
      *(float *)(lVar24 + 0xac) = fVar40 + (*(float *)(lVar24 + 0x98) - fVar51) / fVar54;
      *(float *)(lVar24 + 0xd4) = fVar40 + (*(float *)(lVar24 + 0xc0) - fVar51) / fVar54;
      fVar40 = fVar40 + (*(float *)(lVar24 + 0xe8) - fVar51) / fVar54;
      break;
    case 2:
      lVar24 = lVar20 + lVar35 * 0x178;
      fVar49 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      fVar54 = (in_stack_000000f8._4_4_ + *(float *)(lVar24 + 0x70)) -
               *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
      *(float *)(lVar24 + 0x84) = fVar40 + fVar54 / fVar49;
      *(float *)(lVar24 + 0xac) =
           fVar40 + ((in_stack_000000f8._4_4_ + *(float *)(lVar24 + 0x98)) -
                    *(float *)(in_stack_00000080 + 0x230)) /
                    (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
      *(float *)(lVar24 + 0xd4) =
           fVar40 + ((in_stack_000000f8._4_4_ + *(float *)(lVar24 + 0xc0)) -
                    *(float *)(in_stack_00000080 + 0x230)) /
                    (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
      fVar40 = fVar40 + ((in_stack_000000f8._4_4_ + *(float *)(lVar24 + 0xe8)) -
                        *(float *)(in_stack_00000080 + 0x230)) /
                        (*(float *)(in_stack_00000080 + 0x238) -
                        *(float *)(in_stack_00000080 + 0x230));
      break;
    case 3:
      switch((int)unaff_x19[0x62]) {
      case 0:
        lVar24 = lVar20 + lVar35 * 0x178;
        *(undefined4 *)(lVar24 + 0x88) = 0;
        *(undefined4 *)(lVar24 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar24 + 0xd8) = 0;
        *(undefined4 *)(lVar24 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar24 = lVar20 + lVar35 * 0x178;
        fVar49 = fVar49 - fVar55;
        fVar54 = fVar40 + (*(float *)(lVar24 + 0x74) - fVar55) / fVar49;
        fVar49 = fVar40 + (*(float *)(lVar24 + 0x9c) - fVar55) / fVar49;
        *(float *)(lVar24 + 0x88) = fVar54;
        *(float *)(lVar24 + 0xb0) = fVar49;
        *(float *)(lVar24 + 0xd8) = fVar54;
        *(float *)(lVar24 + 0x100) = fVar49;
        break;
      case 2:
        lVar24 = lVar20 + lVar35 * 0x178;
        fVar54 = fVar40 + (*(float *)(lVar24 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                          (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
        *(float *)(lVar24 + 0x88) = fVar54;
        fVar49 = *(float *)(unaff_x19 + 0x9c);
        fVar51 = *(float *)(unaff_x19 + 0x9d);
        *(float *)(lVar24 + 0xd8) = fVar54;
        fVar54 = fVar40 + (*(float *)(lVar24 + 0x9c) - fVar49) / (fVar51 - fVar49);
        *(float *)(lVar24 + 0xb0) = fVar54;
        *(float *)(lVar24 + 0x100) = fVar54;
        break;
      case 3:
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
        uVar37 = (uint)*(undefined8 *)(lVar20 + 0x18);
      }
      if (uVar37 <= uVar8) goto LAB_035575f4;
      lVar24 = lVar20 + lVar35 * 0x178;
      fVar54 = *(float *)(lVar24 + 0x15c);
      fVar49 = (1.0 - (*(float *)(lVar24 + 0x88) + *(float *)(lVar24 + 0xb0)) * fVar54) * 0.5;
      fVar51 = fVar40 + *(float *)(lVar24 + 0x88) * fVar54 + fVar49;
      fVar40 = fVar40 + fVar49 + *(float *)(lVar24 + 0xb0) * fVar54;
      *(float *)(lVar24 + 0x84) = fVar51;
      *(float *)(lVar24 + 0xac) = fVar51;
      *(float *)(lVar24 + 0xd4) = fVar40;
      break;
    default:
      goto switchD_0355512c_default;
    }
    *(float *)(lVar20 + lVar35 * 0x178 + 0xfc) = fVar40;
switchD_0355512c_default:
    switch((int)unaff_x19[0x62]) {
    case 0:
      if (uVar37 <= uVar8) goto LAB_035575f4;
      lVar24 = lVar20 + lVar35 * 0x178;
      *(undefined4 *)(lVar24 + 0x88) = 0;
      *(undefined4 *)(lVar24 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar24 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar24 + 0x100) = 0;
      break;
    case 1:
      if (uVar8 < uVar37) {
        lVar24 = lVar20 + lVar35 * 0x178;
        fVar45 = fVar45 - fVar48;
        fVar40 = (*(float *)(lVar24 + 0x74) - fVar48) / fVar45;
        fVar45 = (*(float *)(lVar24 + 0x9c) - fVar48) / fVar45;
        *(float *)(lVar24 + 0x88) = fVar40;
        goto UnityEngine_Animator__set_stabilizeFeet;
      }
      goto LAB_035575f4;
    case 2:
      if (uVar37 <= uVar8) goto LAB_035575f4;
      lVar24 = lVar20 + lVar35 * 0x178;
      fVar40 = (*(float *)(lVar24 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
               (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar24 + 0x88) = fVar40;
      fVar45 = (*(float *)(lVar24 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
               (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
      *(float *)(lVar24 + 0xb0) = fVar45;
      *(float *)(lVar24 + 0xd8) = fVar45;
      *(float *)(lVar24 + 0x100) = fVar40;
      break;
    case 3:
      if (uVar37 <= uVar8) goto LAB_035575f4;
      lVar24 = lVar20 + lVar35 * 0x178;
      fVar45 = *(float *)(lVar24 + 0x15c);
      fVar54 = (1.0 - (*(float *)(lVar24 + 0x84) + *(float *)(lVar24 + 0xd4)) / fVar45) * 0.5;
      fVar40 = *(float *)(lVar24 + 0x84) / fVar45 + fVar54;
      fVar54 = fVar54 + *(float *)(lVar24 + 0xd4) / fVar45;
      *(float *)(lVar24 + 0x88) = fVar40;
      *(float *)(lVar24 + 0xb0) = fVar54;
      *(float *)(lVar24 + 0x100) = fVar40;
      *(float *)(lVar24 + 0xd8) = fVar54;
    }
    if (uVar37 <= uVar8) goto LAB_035575f4;
    lVar24 = lVar20 + lVar35 * 0x178;
    fVar40 = *(float *)(lVar24 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    if ((*(char *)(lVar24 + 0x5c) == '\0') && ((*(byte *)(lVar20 + lVar35 * 0x178 + 400) & 1) != 0))
    {
      fVar40 = -fVar40;
    }
    fVar54 = fVar38;
    if (((iVar13 == 2) || (fVar54 = fVar42, iVar13 == 1)) || (fVar54 = fVar38 / fVar39, iVar13 == 0)
       ) {
      fVar40 = fVar54 * fVar40;
    }
    lVar24 = lVar20 + lVar35 * 0x178;
    fVar45 = *(float *)(lVar24 + 0x88);
    fVar49 = *(float *)(lVar24 + 0x84);
    fVar54 = -2.1474836e+09;
    if (fVar49 != INFINITY) {
      fVar54 = (float)(int)fVar49;
    }
    fVar51 = *(float *)(lVar24 + 0xd4);
    fVar55 = *(float *)(lVar24 + 0xd8);
    fVar48 = -2.1474836e+09;
    if (fVar45 != INFINITY) {
      fVar48 = (float)(int)fVar45;
    }
    uVar41 = FUN_03591d3c(fVar49 - fVar54,fVar45 - fVar48);
    *(undefined4 *)(lVar24 + 0x84) = uVar41;
    if (*(uint *)(lVar20 + 0x18) <= uVar8) goto LAB_035575f4;
    fVar55 = fVar55 - fVar48;
    *(float *)(lVar24 + 0x88) = fVar40;
    uVar41 = FUN_03591d3c(fVar49 - fVar54,fVar55);
    *(undefined4 *)(lVar20 + lVar35 * 0x178 + 0xac) = uVar41;
    if (*(uint *)(lVar20 + 0x18) <= uVar8) goto LAB_035575f4;
    fVar51 = fVar51 - fVar54;
    *(float *)(lVar20 + lVar35 * 0x178 + 0xb0) = fVar40;
    fVar54 = (float)FUN_03591d3c(fVar51,fVar55);
    *(float *)(lVar24 + 0xd4) = fVar54;
    if (*(uint *)(lVar20 + 0x18) <= uVar8) goto LAB_035575f4;
    *(float *)(lVar24 + 0xd8) = fVar40;
    uVar41 = FUN_03591d3c(fVar51,fVar45 - fVar48);
    *(undefined4 *)(lVar20 + lVar35 * 0x178 + 0xfc) = uVar41;
    uVar37 = (uint)*(undefined8 *)(lVar20 + 0x18);
    if (uVar37 <= uVar8) goto LAB_035575f4;
    *(float *)(lVar20 + lVar35 * 0x178 + 0x100) = fVar40;
LAB_0355574c:
    if (((int)uVar8 < (int)unaff_x19[0x65]) &&
       (iStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
      if (((int)uVar2 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
        if (uVar37 <= uVar8) goto LAB_035575f4;
        lVar25 = lVar20 + lVar35 * 0x178;
        *(ulong *)(lVar25 + 0x70) =
             CONCAT44(fVar52 + (float)((ulong)*(undefined8 *)(lVar25 + 0x70) >> 0x20),
                      fVar53 + (float)*(undefined8 *)(lVar25 + 0x70));
        *(float *)(lVar25 + 0x78) = fVar50 + *(float *)(lVar25 + 0x78);
        *(ulong *)(lVar25 + 0x98) =
             CONCAT44(fVar52 + (float)((ulong)*(undefined8 *)(lVar25 + 0x98) >> 0x20),
                      fVar53 + (float)*(undefined8 *)(lVar25 + 0x98));
        *(float *)(lVar25 + 0xa0) = fVar50 + *(float *)(lVar25 + 0xa0);
        *(ulong *)(lVar25 + 0xc0) =
             CONCAT44(fVar52 + (float)((ulong)*(undefined8 *)(lVar25 + 0xc0) >> 0x20),
                      fVar53 + (float)*(undefined8 *)(lVar25 + 0xc0));
        *(float *)(lVar25 + 200) = fVar50 + *(float *)(lVar25 + 200);
        *(ulong *)(lVar25 + 0xe8) =
             CONCAT44(fVar52 + (float)((ulong)*(undefined8 *)(lVar25 + 0xe8) >> 0x20),
                      fVar53 + (float)*(undefined8 *)(lVar25 + 0xe8));
        *(float *)(lVar25 + 0xf0) = fVar50 + *(float *)(lVar25 + 0xf0);
        goto UnityEngine_Animator__GetAnimatorClipInfoCount;
      }
      if (((int)uVar2 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
        if (uVar8 < uVar37) {
          if (*(int *)(lVar20 + lVar35 * 0x178 + 0x68) == in_stack_00000030) {
            lVar25 = lVar20 + lVar35 * 0x178;
            *(ulong *)(lVar25 + 0x70) =
                 CONCAT44(fVar52 + (float)((ulong)*(undefined8 *)(lVar25 + 0x70) >> 0x20),
                          fVar53 + (float)*(undefined8 *)(lVar25 + 0x70));
            *(float *)(lVar25 + 0x78) = fVar50 + *(float *)(lVar25 + 0x78);
            *(ulong *)(lVar25 + 0x98) =
                 CONCAT44(fVar52 + (float)((ulong)*(undefined8 *)(lVar25 + 0x98) >> 0x20),
                          fVar53 + (float)*(undefined8 *)(lVar25 + 0x98));
            *(float *)(lVar25 + 0xa0) = fVar50 + *(float *)(lVar25 + 0xa0);
            *(ulong *)(lVar25 + 0xc0) =
                 CONCAT44(fVar52 + (float)((ulong)*(undefined8 *)(lVar25 + 0xc0) >> 0x20),
                          fVar53 + (float)*(undefined8 *)(lVar25 + 0xc0));
            *(float *)(lVar25 + 200) = fVar50 + *(float *)(lVar25 + 200);
            *(ulong *)(lVar25 + 0xe8) =
                 CONCAT44(fVar52 + (float)((ulong)*(undefined8 *)(lVar25 + 0xe8) >> 0x20),
                          fVar53 + (float)*(undefined8 *)(lVar25 + 0xe8));
            *(float *)(lVar25 + 0xf0) = fVar50 + *(float *)(lVar25 + 0xf0);
            goto UnityEngine_Animator__GetAnimatorClipInfoCount;
          }
          goto UnityEngine_Animator__GetAnimatorTransitionInfo;
        }
        goto LAB_035575f4;
      }
    }
UnityEngine_Animator__GetAnimatorTransitionInfo:
    if (uVar37 <= uVar8) goto LAB_035575f4;
    if (DAT_0411f172 == '\0') {
      FUN_01ab69ac(PTR_DAT_03cbded8);
      DAT_0411f172 = '\x01';
      uVar37 = *(uint *)(lVar20 + 0x18);
    }
    puVar11 = PTR_DAT_03cbded8;
    uVar41 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
    lVar24 = lVar20 + lVar35 * 0x178;
    *(undefined8 *)(lVar24 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
    *(undefined4 *)(lVar24 + 0x78) = uVar41;
    if (uVar37 <= uVar8) goto LAB_035575f4;
    uVar41 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
    lVar24 = lVar20 + lVar35 * 0x178;
    *(undefined8 *)(lVar24 + 0x98) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
    *(undefined4 *)(lVar24 + 0xa0) = uVar41;
    uVar41 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
    *(undefined8 *)(lVar24 + 0xc0) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
    *(undefined4 *)(lVar24 + 200) = uVar41;
    uVar41 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
    *(undefined8 *)(lVar24 + 0xe8) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
    *(undefined4 *)(lVar24 + 0xf0) = uVar41;
    *(undefined1 *)(lVar25 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
    if (iVar15 == 0) {
      pcVar26 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
      (*pcVar26)();
    }
    else if (iVar15 == 1) {
      pcVar26 = *(code **)(*unaff_x19 + 0x8c8);
      goto LAB_0355591c;
    }
LAB_03555938:
    if ((*in_stack_00000170 == 0) || (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar25 + 0x18) <= uVar8) goto LAB_035575f4;
    lVar25 = lVar25 + lVar35 * 0x178;
    uVar18 = *(undefined8 *)(lVar25 + 0x11c);
    *(undefined8 *)(lVar25 + 0x11c) =
         CONCAT44(fVar52 + (float)((ulong)uVar18 >> 0x20),fVar53 + (float)uVar18);
    *(float *)(lVar25 + 0x124) = fVar50 + *(float *)(lVar25 + 0x124);
    if ((*in_stack_00000170 == 0) || (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar25 + 0x18) <= uVar8) goto LAB_035575f4;
    lVar25 = lVar25 + lVar35 * 0x178;
    *(ulong *)(lVar25 + 0x110) =
         CONCAT44(fVar52 + (float)((ulong)*(undefined8 *)(lVar25 + 0x110) >> 0x20),
                  fVar53 + (float)*(undefined8 *)(lVar25 + 0x110));
    *(float *)(lVar25 + 0x118) = fVar50 + *(float *)(lVar25 + 0x118);
    if ((*in_stack_00000170 == 0) || (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar25 + 0x18) <= uVar8) goto LAB_035575f4;
    lVar25 = lVar25 + lVar35 * 0x178;
    *(ulong *)(lVar25 + 0x128) =
         CONCAT44(fVar52 + (float)((ulong)*(undefined8 *)(lVar25 + 0x128) >> 0x20),
                  fVar53 + (float)*(undefined8 *)(lVar25 + 0x128));
    *(float *)(lVar25 + 0x130) = fVar50 + *(float *)(lVar25 + 0x130);
    if ((*in_stack_00000170 == 0) || (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar25 + 0x18) <= uVar8) goto LAB_035575f4;
    lVar25 = lVar25 + lVar35 * 0x178;
    *(float *)(lVar25 + 0x134) = fVar53 + *(float *)(lVar25 + 0x134);
    *(ulong *)(lVar25 + 0x138) =
         CONCAT44(fVar50 + (float)((ulong)*(undefined8 *)(lVar25 + 0x138) >> 0x20),
                  fVar52 + (float)*(undefined8 *)(lVar25 + 0x138));
    lVar25 = *in_stack_00000170;
    if ((lVar25 == 0) || (lVar24 = *(long *)(lVar25 + 0x38), lVar24 == 0)) goto LAB_035574b8;
    uVar37 = *(uint *)(lVar24 + 0x18);
    if (uVar37 <= uVar8) goto LAB_035575f4;
    lVar29 = lVar24 + lVar35 * 0x178;
    uVar43 = CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar29 + 0x140) >> 0x20),
                      fVar53 + (float)*(undefined8 *)(lVar29 + 0x140));
    fVar54 = fVar52 + *(float *)(lVar29 + 0x150);
    uVar44 = (ulong)(uint)fVar54;
    uVar47 = CONCAT44(fVar52 + (float)((ulong)*(undefined8 *)(lVar29 + 0x148) >> 0x20),
                      fVar52 + (float)*(undefined8 *)(lVar29 + 0x148));
    *(float *)(lVar29 + 0x150) = fVar54;
    *(ulong *)(lVar29 + 0x140) = uVar43;
    *(ulong *)(lVar29 + 0x148) = uVar47;
    if (uVar2 == uVar46) {
      uVar46 = *unaff_x20 - 1;
      if (uVar8 == uVar46) goto LAB_03555b44;
    }
    else {
      lVar25 = *(long *)(lVar25 + 0x50);
      if (lVar25 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar25 + 0x18) <= uVar46) goto LAB_035575f4;
      lVar29 = (long)(int)uVar46;
      lVar30 = lVar25 + lVar29 * 0x5c;
      uVar47 = (ulong)(uint)*(float *)(lVar30 + 0x58);
      fVar54 = fVar52 + *(float *)(lVar30 + 0x54);
      uVar43 = (ulong)(uint)fVar54;
      fVar45 = fVar53 + *(float *)(lVar30 + 0x58);
      uVar44 = (ulong)(uint)fVar45;
      *(ulong *)(lVar30 + 0x4c) =
           CONCAT44(fVar52 + (float)((ulong)*(undefined8 *)(lVar30 + 0x4c) >> 0x20),
                    fVar52 + (float)*(undefined8 *)(lVar30 + 0x4c));
      *(float *)(lVar30 + 0x54) = fVar54;
      *(float *)(lVar30 + 0x58) = fVar45;
      if (uVar37 <= *(uint *)(lVar30 + 0x34)) goto LAB_035575f4;
      uVar41 = *(undefined4 *)(lVar24 + (long)(int)*(uint *)(lVar30 + 0x34) * 0x178 + 0x11c);
      lVar25 = lVar25 + lVar29 * 0x5c;
      *(float *)(lVar25 + 0x70) = fVar54;
      *(undefined4 *)(lVar25 + 0x6c) = uVar41;
      lVar25 = *in_stack_00000170;
      if ((lVar25 == 0) || (lVar24 = *(long *)(lVar25 + 0x50), lVar24 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= uVar46) goto LAB_035575f4;
      lVar25 = *(long *)(lVar25 + 0x38);
      if (lVar25 == 0) goto LAB_035574b8;
      uVar46 = *(uint *)(lVar24 + lVar29 * 0x5c + 0x40);
      if (*(uint *)(lVar25 + 0x18) <= uVar46) goto LAB_035575f4;
      lVar24 = lVar24 + lVar29 * 0x5c;
      *(undefined4 *)(lVar24 + 0x74) = *(undefined4 *)(lVar25 + (long)(int)uVar46 * 0x178 + 0x128);
      *(undefined4 *)(lVar24 + 0x78) = *(undefined4 *)(lVar24 + 0x4c);
      uVar46 = *unaff_x20 - 1;
LAB_03555b44:
      if (uVar8 == uVar46) {
        lVar25 = *in_stack_00000170;
        if ((lVar25 == 0) || (lVar24 = *(long *)(lVar25 + 0x50), lVar24 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar24 + 0x18) <= uVar2) goto LAB_035575f4;
        lVar29 = lVar24 + lVar32 * 0x5c;
        uVar47 = (ulong)(uint)*(float *)(lVar29 + 0x58);
        uVar43 = CONCAT44(fVar52 + (float)((ulong)*(undefined8 *)(lVar29 + 0x4c) >> 0x20),
                          fVar52 + (float)*(undefined8 *)(lVar29 + 0x4c));
        fVar54 = fVar52 + *(float *)(lVar29 + 0x54);
        fVar53 = fVar53 + *(float *)(lVar29 + 0x58);
        uVar44 = (ulong)(uint)fVar53;
        *(ulong *)(lVar29 + 0x4c) = uVar43;
        *(float *)(lVar29 + 0x54) = fVar54;
        *(float *)(lVar29 + 0x58) = fVar53;
        lVar25 = *(long *)(lVar25 + 0x38);
        if (lVar25 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar25 + 0x18) <= *(uint *)(lVar29 + 0x34)) goto LAB_035575f4;
        uVar41 = *(undefined4 *)(lVar25 + (long)(int)*(uint *)(lVar29 + 0x34) * 0x178 + 0x11c);
        lVar24 = lVar24 + lVar32 * 0x5c;
        *(float *)(lVar24 + 0x70) = fVar54;
        *(undefined4 *)(lVar24 + 0x6c) = uVar41;
        lVar25 = *in_stack_00000170;
        if ((lVar25 == 0) || (lVar24 = *(long *)(lVar25 + 0x50), lVar24 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar24 + 0x18) <= uVar2) goto LAB_035575f4;
        lVar25 = *(long *)(lVar25 + 0x38);
        if (lVar25 == 0) goto LAB_035574b8;
        uVar46 = *(uint *)(lVar24 + lVar32 * 0x5c + 0x40);
        if (*(uint *)(lVar25 + 0x18) <= uVar46) goto LAB_035575f4;
        lVar24 = lVar24 + lVar32 * 0x5c;
        *(undefined4 *)(lVar24 + 0x74) = *(undefined4 *)(lVar25 + (long)(int)uVar46 * 0x178 + 0x128)
        ;
        *(undefined4 *)(lVar24 + 0x78) = *(undefined4 *)(lVar24 + 0x4c);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar19 = FUN_026b82c4(uVar31,0);
    if (((((uVar19 & 1) == 0) && (1 < uVar31 - 0x2010)) && (uVar31 != 0xad)) && (uVar31 != 0x2d)) {
      if (bVar10) {
        if (((uVar17 != 1) && ((int)uVar8 < (int)(*(uint *)(lVar20 + 0x18) - 1))) &&
           (((int)uVar8 < *unaff_x20 && ((uVar31 == 0x2019 || (uVar31 == 0x27)))))) {
          if (*(uint *)(lVar20 + 0x18) <= uVar17 - 2) goto LAB_035575f4;
          uVar5 = *(undefined2 *)(lVar20 + lVar36 + -0x438);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar19 = FUN_026b82c4(uVar5,0);
          if ((uVar19 & 1) != 0) {
            if (*(uint *)(lVar20 + 0x18) <= uVar17) goto LAB_035575f4;
            uVar5 = *(undefined2 *)(lVar20 + lVar36 + -0x148);
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar19 = FUN_026b82c4(uVar5,0);
            if ((uVar19 & 1) != 0) goto LAB_03555d68;
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
        uVar19 = FUN_026b81f8(uVar31,0);
        if ((uVar19 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar19 = FUN_026b63d8(uVar31,0);
          if (((uVar31 != 0x200b) && ((uVar19 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0355686c;
        }
      }
      if (uVar8 == *unaff_x20 - 1U) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar19 = FUN_026b82c4(uVar31,0);
        iVar15 = iStack0000000000000128;
        if ((uVar19 & 1) == 0) goto LAB_03556070;
      }
      else {
LAB_03556070:
        iVar15 = uVar17 - 2;
      }
      lVar25 = *in_stack_00000170;
      if (lVar25 == 0) goto LAB_035574b8;
      lVar24 = *(long *)(lVar25 + 0x40);
      if (lVar24 == 0) goto LAB_035574b8;
      uVar46 = *(uint *)(lVar25 + 0x24);
      iVar16 = *(int *)(lVar24 + 0x18);
      if (iVar16 < (int)(uVar46 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar25 + 0x40),iVar16 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar25 = *in_stack_00000170;
        if (lVar25 == 0) goto LAB_035574b8;
      }
      lVar25 = *(long *)(lVar25 + 0x40);
      if (lVar25 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar25 + 0x18) <= uVar46) goto LAB_035575f4;
      lVar25 = lVar25 + (long)(int)uVar46 * 0x18;
      *(long **)(lVar25 + 0x20) = unaff_x19;
      *(uint *)(lVar25 + 0x28) = uStack0000000000000158;
      *(int *)(lVar25 + 0x2c) = iVar15;
      *(uint *)(lVar25 + 0x30) = (iVar15 - uStack0000000000000158) + 1;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar25 = unaff_x19[0x6d];
      if (lVar25 == 0) goto LAB_035574b8;
      lVar24 = *(long *)(lVar25 + 0x50);
      *(int *)(lVar25 + 0x24) = *(int *)(lVar25 + 0x24) + 1;
      if (lVar24 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= uVar2) goto LAB_035575f4;
      lVar24 = lVar24 + lVar32 * 0x5c;
      bVar10 = false;
      iStack00000000000000d4 = iStack00000000000000d4 + 1;
      *(int *)(lVar24 + 0x30) = *(int *)(lVar24 + 0x30) + 1;
    }
    else {
      if (!bVar10) {
        uStack0000000000000158 = uVar8;
      }
      if (uVar8 == *unaff_x20 - 1U) {
        lVar25 = *in_stack_00000170;
        if (lVar25 == 0) goto LAB_035574b8;
        lVar24 = *(long *)(lVar25 + 0x40);
        if (lVar24 == 0) goto LAB_035574b8;
        uVar46 = *(uint *)(lVar25 + 0x24);
        iVar15 = *(int *)(lVar24 + 0x18);
        if (iVar15 < (int)(uVar46 + 1)) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff025c((long *)(lVar25 + 0x40),iVar15 + 1,
                       *(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
          lVar25 = *in_stack_00000170;
          if (lVar25 == 0) goto LAB_035574b8;
        }
        lVar25 = *(long *)(lVar25 + 0x40);
        if (lVar25 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar25 + 0x18) <= uVar46) goto LAB_035575f4;
        lVar25 = lVar25 + (long)(int)uVar46 * 0x18;
        *(long **)(lVar25 + 0x20) = unaff_x19;
        *(uint *)(lVar25 + 0x28) = uStack0000000000000158;
        *(uint *)(lVar25 + 0x2c) = uVar8;
        *(uint *)(lVar25 + 0x30) = uVar17 - uStack0000000000000158;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar25 = unaff_x19[0x6d];
        if (lVar25 == 0) goto LAB_035574b8;
        lVar24 = *(long *)(lVar25 + 0x50);
        *(int *)(lVar25 + 0x24) = *(int *)(lVar25 + 0x24) + 1;
        if (lVar24 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar24 + 0x18) <= uVar2) goto LAB_035575f4;
        lVar24 = lVar24 + lVar32 * 0x5c;
        iStack00000000000000d4 = iStack00000000000000d4 + 1;
        *(int *)(lVar24 + 0x30) = *(int *)(lVar24 + 0x30) + 1;
      }
LAB_03555d68:
      bVar10 = true;
    }
LAB_03555d70:
    if ((*in_stack_00000170 == 0) || (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 == 0))
    goto LAB_035574b8;
    uVar46 = *(uint *)(lVar25 + 0x18);
    if (uVar46 <= uVar8) goto LAB_035575f4;
    if ((*(byte *)(lVar25 + lVar35 * 0x178 + 400) >> 2 & 1) == 0) {
      if (bVar12) {
LAB_03555da0:
        if (uVar46 <= uVar17 - 2) goto LAB_035575f4;
        lVar32 = *unaff_x19;
        uVar46 = *(uint *)(lVar25 + lVar36 + -0x330);
        uVar41 = *(undefined4 *)(lVar25 + lVar36 + -0x2f8);
LAB_035562ec:
        pcVar26 = *(code **)(lVar32 + 0x8d8);
LAB_035562f4:
        uVar47 = (ulong)uVar46;
        uVar43 = (ulong)(uint)fStack0000000000000070;
        uVar44 = (ulong)uStack0000000000000074;
        (*pcVar26)(fStack0000000000000078,uVar43,uVar44,uVar47,fStack0000000000000104,0,
                   fStack000000000000008c,uVar41);
        puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar25 = *(long *)puVar11;
        }
LAB_03556348:
        bVar12 = false;
        fVar56 = 0.0;
        fStack0000000000000104 = *(float *)(*(long *)(lVar25 + 0xb8) + 0x15a8);
        fStack0000000000000100 = 0.0;
      }
      else {
LAB_03556254:
        bVar12 = false;
      }
    }
    else {
      lVar25 = lVar25 + lVar35 * 0x178;
      iVar15 = *(int *)(lVar25 + 0x68);
      *(undefined4 *)(lVar25 + 0x16c) = in_stack_000017c4;
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
      uVar19 = FUN_026b63d8(uVar31,0);
      if ((uVar31 != 0x200b) && ((uVar19 & 1) == 0)) {
        lVar25 = *in_stack_00000170;
        if ((lVar25 == 0) || (lVar32 = *(long *)(lVar25 + 0x38), lVar32 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar32 + 0x18) <= uVar8) goto LAB_035575f4;
        fVar54 = *(float *)(lVar32 + lVar35 * 0x178 + 0x160);
        if (fVar56 <= fVar54) {
          fVar56 = fVar54;
        }
        if (fStack0000000000000100 <= ABS(fVar40)) {
          fStack0000000000000100 = ABS(fVar40);
        }
        if (iVar15 != iStack000000000000006c) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar25 = *in_stack_00000170;
            if (lVar25 == 0) goto LAB_035574b8;
            lVar32 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          else {
            lVar32 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          fStack0000000000000104 = *(float *)(lVar32 + 0x15a8);
        }
        lVar25 = *(long *)(lVar25 + 0x38);
        if (lVar25 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar25 + 0x18) <= uVar8) goto LAB_035575f4;
        if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
        fVar45 = *(float *)(lVar25 + lVar35 * 0x178 + 0x14c);
        fVar54 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
        fVar45 = fVar45 + fVar56 * fVar54;
        if (fVar45 <= fStack0000000000000104) {
          fStack0000000000000104 = fVar45;
        }
        uVar43 = (ulong)(uint)fStack0000000000000104;
        iStack000000000000006c = iVar15;
      }
      if (!bVar12) {
        bVar12 = false;
        if ((((uVar31 == 0xd) || ((uVar31 & 0xfffe) == 10)) || ((int)uVar7 < (int)uVar8)) ||
           ((bool)(bVar1 ^ 1))) goto LAB_03556364;
        if (uVar8 == uVar7) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar19 = FUN_026b97f8(uVar31,0);
          if ((uVar19 & 1) != 0) goto LAB_03556254;
        }
        if ((*in_stack_00000170 == 0) ||
           (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar25 + 0x18) <= uVar8) goto LAB_035575f4;
        lVar25 = lVar25 + lVar35 * 0x178;
        fStack000000000000008c = *(float *)(lVar25 + 0x160);
        fStack0000000000000078 = *(float *)(lVar25 + 0x11c);
        uVar44 = (ulong)(uint)fStack0000000000000078;
        bVar12 = fVar56 != 0.0;
        fVar54 = fStack000000000000008c;
        if (bVar12) {
          fVar54 = fVar56;
        }
        fVar56 = fVar54;
        uVar14 = *(undefined4 *)(lVar25 + 0x168);
        uStack0000000000000074 = 0;
        fVar54 = fVar40;
        if (bVar12) {
          fVar54 = fStack0000000000000100;
        }
        uVar43 = (ulong)(uint)fVar54;
        fStack0000000000000070 = fStack0000000000000104;
        fStack0000000000000100 = fVar54;
      }
      if (*unaff_x20 == 1) {
        if ((*in_stack_00000170 != 0) &&
           (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 != 0)) {
          if (uVar8 < *(uint *)(lVar25 + 0x18)) {
            lVar25 = lVar25 + lVar35 * 0x178;
            lVar32 = *unaff_x19;
            uVar46 = *(uint *)(lVar25 + 0x128);
            uVar41 = *(undefined4 *)(lVar25 + 0x160);
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
        uVar19 = FUN_026b63d8(uVar31,0);
        if ((*in_stack_00000170 != 0) &&
           (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 != 0)) {
          lVar32 = lVar35;
          uVar46 = uVar8;
          if (uVar31 == 0x200b || (uVar19 & 1) != 0) {
            lVar32 = lVar27;
            uVar46 = uVar7;
          }
          if (uVar46 < *(uint *)(lVar25 + 0x18)) {
            lVar25 = lVar25 + lVar32 * 0x178;
            uVar46 = *(uint *)(lVar25 + 0x128);
            uVar41 = *(undefined4 *)(lVar25 + 0x160);
            pcVar26 = *(code **)(*unaff_x19 + 0x8d8);
            goto LAB_035562f4;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
      if (!bVar1) {
        if ((*in_stack_00000170 != 0) &&
           (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 != 0)) {
          uVar46 = *(uint *)(lVar25 + 0x18);
          goto LAB_03555da0;
        }
        goto LAB_035574b8;
      }
      if ((int)uVar8 < *unaff_x20 + -1) {
        if ((*in_stack_00000170 == 0) ||
           (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar25 + 0x18) <= uVar17) goto LAB_035575f4;
        uVar19 = FUN_03567ad8(uVar14,*(undefined4 *)(lVar25 + lVar36),0);
        if ((uVar19 & 1) == 0) {
          if ((*in_stack_00000170 != 0) &&
             (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 != 0)) {
            if (uVar8 < *(uint *)(lVar25 + 0x18)) {
              lVar25 = lVar25 + lVar35 * 0x178;
              uVar47 = (ulong)*(uint *)(lVar25 + 0x128);
              uVar44 = (ulong)uStack0000000000000074;
              uVar43 = (ulong)(uint)fStack0000000000000070;
              (**(code **)(*unaff_x19 + 0x8d8))
                        (fStack0000000000000078,uVar43,uVar44,uVar47,fStack0000000000000104,0,
                         fStack000000000000008c,*(undefined4 *)(lVar25 + 0x160));
              puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
              lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar25 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar25 = *(long *)puVar11;
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
    if ((*in_stack_00000170 == 0) || (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar25 + 0x18) <= uVar8) goto LAB_035575f4;
    if (lVar28 == 0) goto LAB_035574b8;
    uVar46 = *(uint *)(lVar25 + lVar35 * 0x178 + 400);
    fVar54 = (float)FUN_03776a30(lVar28 + 0x50,0);
    if ((uVar46 >> 6 & 1) == 0) {
      if ((_iStack0000000000000128 & 0x100000000) != 0) {
        if ((*in_stack_00000170 == 0) ||
           (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar25 + 0x18) <= uVar17 - 2) goto LAB_035575f4;
        uVar46 = *(uint *)(lVar25 + lVar36 + -0x330);
        fVar52 = *(float *)(lVar25 + lVar36 + -0x30c);
        pcVar26 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
        uVar47 = (ulong)uVar46;
        uVar43 = (ulong)(uint)fStack000000000000009c;
        uVar44 = (ulong)uStack0000000000000098;
        (*pcVar26)(fStack00000000000000a0,uVar43,uVar44,uVar47,
                   fStack00000000000000a8 * fVar54 + fVar52,0,fStack00000000000000a8,
                   fStack00000000000000a8);
      }
LAB_03556948:
      _iStack0000000000000128 = _iStack0000000000000128 & 0xffffffff;
    }
    else {
      lVar25 = *in_stack_00000170;
      if ((lVar25 == 0) || (lVar32 = *(long *)(lVar25 + 0x38), lVar32 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar32 + 0x18) <= uVar8) goto LAB_035575f4;
      *(undefined4 *)(lVar32 + lVar35 * 0x178 + 0x174) = in_stack_000017c4;
      if ((((int)unaff_x19[0x65] < (int)uVar8) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
         (((int)unaff_x19[0x5c] == 5 &&
          (*(int *)(lVar32 + lVar35 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((((uVar31 == 0xd) || ((uVar31 & 0xfffe) == 10)) || ((int)uVar7 < (int)uVar8)) ||
         ((_iStack0000000000000128 & 0x100000000) != 0 || !bVar1)) {
LAB_035564e8:
        if ((_iStack0000000000000128 & 0x100000000) == 0) goto LAB_03556948;
      }
      else {
        if (uVar8 == uVar7) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar19 = FUN_026b97f8(uVar31,0);
          if ((uVar19 & 1) != 0) goto LAB_035564e8;
          lVar25 = *in_stack_00000170;
          if (lVar25 == 0) goto LAB_035574b8;
        }
        lVar25 = *(long *)(lVar25 + 0x38);
        if (lVar25 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar25 + 0x18) <= uVar8) goto LAB_035575f4;
        lVar25 = lVar25 + lVar35 * 0x178;
        fStack0000000000000040 = *(float *)(lVar25 + 0x60);
        fStack0000000000000038 = *(float *)(lVar25 + 0x14c);
        uVar43 = (ulong)(uint)fStack0000000000000038;
        fStack00000000000000a0 = *(float *)(lVar25 + 0x11c);
        uVar44 = (ulong)(uint)fStack00000000000000a0;
        fStack00000000000000a8 = *(float *)(lVar25 + 0x160);
        fStack000000000000009c = fVar54 * fStack00000000000000a8 + fStack0000000000000038;
        uStack0000000000000098 = 0;
      }
      iVar15 = *unaff_x20;
      if (iVar15 == 1) {
LAB_03556628:
        if ((*in_stack_00000170 != 0) &&
           (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 != 0)) {
          if (uVar8 < *(uint *)(lVar25 + 0x18)) {
            lVar25 = lVar25 + lVar35 * 0x178;
            lVar27 = *unaff_x19;
            uVar46 = *(uint *)(lVar25 + 0x128);
            fVar52 = *(float *)(lVar25 + 0x14c);
LAB_03556654:
            pcVar26 = *(code **)(lVar27 + 0x8d8);
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
        uVar19 = FUN_026b63d8(uVar31,0);
        if ((*in_stack_00000170 != 0) &&
           (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 != 0)) {
          uVar46 = *(uint *)(lVar25 + 0x18);
          if (uVar31 == 0x200b || (uVar19 & 1) != 0) {
            if (uVar46 <= uVar7) goto LAB_035575f4;
          }
          else {
FUN_035568e8:
            lVar27 = lVar35;
            if (uVar46 <= uVar8) goto LAB_035575f4;
          }
LAB_035568f0:
          lVar25 = lVar25 + lVar27 * 0x178;
          fVar52 = *(float *)(lVar25 + 0x14c);
          uVar46 = *(uint *)(lVar25 + 0x128);
          pcVar26 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_03556914;
        }
        goto LAB_035574b8;
      }
      if ((int)uVar8 < iVar15) {
        lVar25 = *in_stack_00000170;
        if ((lVar25 != 0) && (lVar32 = *(long *)(lVar25 + 0x38), lVar32 != 0)) {
          if (uVar17 < *(uint *)(lVar32 + 0x18)) {
            if (*(float *)(lVar32 + lVar36 + -0x108) == fStack0000000000000040) {
              fVar45 = *(float *)(lVar32 + lVar36 + -0x1c);
              if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar43 = (ulong)(uint)fStack0000000000000038;
              uVar19 = FUN_03567bac(fVar52 + fVar45,uVar43,0);
              if ((uVar19 & 1) != 0) {
                iVar15 = *unaff_x20;
                goto LAB_03556744;
              }
              lVar25 = *in_stack_00000170;
              if (lVar25 == 0) goto LAB_035574b8;
            }
            lVar25 = *(long *)(lVar25 + 0x38);
            if (lVar25 != 0) {
              uVar46 = *(uint *)(lVar25 + 0x18);
              if ((int)uVar8 <= (int)uVar7) goto FUN_035568e8;
              if (uVar7 < uVar46) goto LAB_035568f0;
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
        iVar15 = FUN_036d3364(lVar28,0);
        if (*(uint *)(lVar20 + 0x18) <= uVar17) goto LAB_035575f4;
        lVar25 = *(long *)(lVar20 + lVar36 + -0x130);
        if (lVar25 == 0) goto LAB_035574b8;
        iVar16 = FUN_036d3364(lVar25,0);
        if (iVar15 != iVar16) goto LAB_03556628;
      }
      if (!bVar1) {
        if ((*in_stack_00000170 != 0) &&
           (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 != 0)) {
          if (uVar17 - 2 < *(uint *)(lVar25 + 0x18)) {
            lVar27 = *unaff_x19;
            uVar46 = *(uint *)(lVar25 + lVar36 + -0x330);
            fVar52 = *(float *)(lVar25 + lVar36 + -0x30c);
            goto LAB_03556654;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
      _iStack0000000000000128 = CONCAT44(1,iStack0000000000000128);
    }
    if ((*in_stack_00000170 == 0) || (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 == 0))
    goto LAB_035574b8;
    uVar46 = (uint)*(undefined8 *)(lVar25 + 0x18);
    if (uVar46 <= uVar8) goto LAB_035575f4;
    if ((*(byte *)(lVar25 + lVar35 * 0x178 + 0x191) >> 1 & 1) == 0) {
      if (bVar9) {
        uVar44 = (ulong)in_stack_000000c0;
        uVar43 = (ulong)(uint)fStack00000000000000dc;
        uVar47 = (ulong)(uint)fStack00000000000000c8;
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000d8,uVar43,uVar44,uVar47,fStack00000000000000d0,uVar44);
      }
LAB_035569b4:
      bVar9 = false;
    }
    else {
      if ((((int)unaff_x19[0x65] < (int)uVar8) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
         (((int)unaff_x19[0x5c] == 5 &&
          (*(int *)(lVar25 + lVar35 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar9) {
        if ((((uVar31 == 0xd) || ((uVar31 & 0xfffe) == 10)) || ((int)uVar7 < (int)uVar8)) ||
           (!bVar1)) goto LAB_035569b4;
        if (uVar8 == uVar7) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar19 = FUN_026b97f8(uVar31,0);
          if ((uVar19 & 1) != 0) goto LAB_035569b4;
        }
        puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar27 = *(long *)puVar11;
        }
        if ((*in_stack_00000170 == 0) ||
           (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 == 0)) goto LAB_035574b8;
        uVar46 = (uint)*(undefined8 *)(lVar25 + 0x18);
        if (uVar46 <= uVar8) goto LAB_035575f4;
        lVar27 = *(long *)(lVar27 + 0xb8);
        lVar28 = lVar25 + lVar35 * 0x178;
        in_stack_000017b8 = *(undefined8 *)(lVar28 + 0x184);
        in_stack_000017b0 = *(undefined8 *)(lVar28 + 0x17c);
        fStack00000000000000d8 = *(float *)(lVar27 + 0x1598);
        fStack00000000000000dc = *(float *)(lVar27 + 0x159c);
        in_stack_000017c0 = *(float *)(lVar28 + 0x18c);
        fStack00000000000000c8 = *(float *)(lVar27 + 0x15a0);
        fStack00000000000000d0 = *(float *)(lVar27 + 0x15a4);
        in_stack_000000c0 = 0;
      }
      if (uVar46 <= uVar8) goto LAB_035575f4;
      lVar25 = lVar25 + lVar35 * 0x178;
      fVar54 = *(float *)(lVar25 + 0x128);
      fVar48 = *(float *)(lVar25 + 0x188);
      uVar33 = *(undefined8 *)(lVar25 + 0x17c);
      fVar51 = *(float *)(lVar25 + 0x184);
      uVar18 = *(undefined8 *)(lVar25 + 0x184);
      fVar50 = *(float *)(lVar25 + 0x18c);
      fVar52 = *(float *)(lVar25 + 0x11c);
      fVar49 = *(float *)(lVar25 + 0x148);
      fVar45 = *(float *)(lVar25 + 0x150);
      in_stack_00000178 = uVar33;
      fStack0000000000000180 = fVar51;
      fStack0000000000000184 = fVar48;
      in_stack_00000188 = fVar50;
      in_stack_00000190 = in_stack_000017b0;
      in_stack_00000198 = in_stack_000017b8;
      in_stack_000001a0 = in_stack_000017c0;
      uVar19 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
      lVar25 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if ((uVar19 & 1) == 0) {
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar25);
        }
        fVar54 = fVar54 + (float)in_stack_000017b8;
        uVar44 = (ulong)(uint)fVar54;
        fVar52 = fVar52 - (float)((ulong)in_stack_000017b0 >> 0x20);
        fVar45 = fVar45 - in_stack_000017c0;
        uVar43 = (ulong)(uint)fVar45;
        fVar49 = fVar49 + (float)((ulong)in_stack_000017b8 >> 0x20);
        uVar47 = (ulong)(uint)fVar49;
        if (fVar52 <= fStack00000000000000d8) {
          fStack00000000000000d8 = fVar52;
        }
        if (fVar45 <= fStack00000000000000dc) {
          fStack00000000000000dc = fVar45;
        }
        if (fStack00000000000000c8 <= fVar54) {
          fStack00000000000000c8 = fVar54;
        }
        if (fStack00000000000000d0 <= fVar49) {
          fStack00000000000000d0 = fVar49;
        }
      }
      else {
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar25);
        }
        fVar52 = (fVar52 + (fStack00000000000000c8 - (float)in_stack_000017b8)) * 0.5;
        uVar47 = (ulong)(uint)fVar52;
        if (fVar45 <= fStack00000000000000dc) {
          fStack00000000000000dc = fVar45;
        }
        uVar43 = (ulong)(uint)fStack00000000000000dc;
        uVar44 = (ulong)in_stack_000000c0;
        if (fStack00000000000000d0 <= fVar49) {
          fStack00000000000000d0 = fVar49;
        }
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000d8,uVar43,uVar44,uVar47,fStack00000000000000d0,uVar44);
        fStack00000000000000dc = fVar45 - fVar50;
        fStack00000000000000c8 = fVar54 + fVar51;
        in_stack_000000c0 = 0;
        fStack00000000000000d0 = fVar49 + fVar48;
        fStack00000000000000d8 = fVar52;
        in_stack_000017b0 = uVar33;
        in_stack_000017b8 = uVar18;
        in_stack_000017c0 = fVar50;
      }
      if (((*unaff_x20 == 1) || (uVar8 == uVar6)) || (((int)uVar7 <= (int)uVar8 || (!bVar1)))) {
        uVar44 = (ulong)in_stack_000000c0;
        uVar43 = (ulong)(uint)fStack00000000000000dc;
        uVar47 = (ulong)(uint)fStack00000000000000c8;
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000d8,uVar43,uVar44,uVar47,fStack00000000000000d0,uVar44);
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
    }
    iVar15 = *unaff_x20;
    lVar36 = lVar36 + 0x178;
    _iStack0000000000000128 = CONCAT44(uStack000000000000012c,iStack0000000000000128 + 1);
    bVar1 = iVar15 <= (int)uVar17;
    unaff_x28 = in_stack_00000170;
    uVar17 = uVar17 + 1;
    uVar46 = uVar2;
    if (bVar1) goto FUN_03556ed8;
    goto LAB_03554e78;
  }
  iStack00000000000000d4 = 0;
  iVar13 = 0;
  in_stack_00000170 = unaff_x28;
  goto LAB_03556f00;
FUN_03556ed8:
  lVar20 = *in_stack_00000170;
  if (lVar20 == 0) goto LAB_035574b8;
  iVar13 = uVar2 + 1;
  unaff_x26 = (long *)OVRPlugin_Media_TypeInfo;
LAB_03556f00:
  *(int *)(lVar20 + 0x18) = iVar15;
  lVar36 = unaff_x19[0xd4];
  *(int *)(lVar20 + 0x2c) = iVar13;
  if (iVar15 < 1 || iStack00000000000000d4 == 0) {
    iStack00000000000000d4 = 1;
  }
  *(int *)(lVar20 + 0x1c) = (int)lVar36;
  *(int *)(lVar20 + 0x24) = iStack00000000000000d4;
  *(int *)(lVar20 + 0x30) = (int)unaff_x19[0x96] + 1;
  if (((int)unaff_x19[99] != 0xff) ||
     (uVar19 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar19 & 1) == 0)) {
LAB_03554724:
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_03567630();
    return;
  }
  lVar20 = unaff_x19[0xdf];
  if (lVar20 != 0) {
    (**(code **)(lVar20 + 0x18))
              (*(undefined8 *)(lVar20 + 0x40),*in_stack_00000170,*(undefined8 *)(lVar20 + 0x28));
  }
  if (unaff_x19[0xe5] != 0) {
    iVar13 = FUN_03911ee4(unaff_x19[0xe5],0);
    if (iVar13 != 0x19) {
      lVar20 = unaff_x19[0xe5];
      if (lVar20 == 0) goto LAB_035574b8;
      uVar17 = FUN_03911ee4(lVar20,0);
      FUN_03911f20(lVar20,uVar17 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar20 = *(long *)(*in_stack_00000170 + 0x60), lVar20 == 0))
      goto LAB_035574b8;
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar20 + 0x18) == 0) goto LAB_035575f4;
      FUN_03596b20(lVar20 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar20 = *(long *)(unaff_x19[0x6d] + 0x60), lVar20 != 0)) {
        if (*(int *)(lVar20 + 0x18) == 0) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar20 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar20 = *(long *)(unaff_x19[0x6d] + 0x60), lVar20 != 0)) {
            if (*(int *)(lVar20 + 0x18) == 0) goto LAB_035575f4;
            if (unaff_x19[0x74] != 0) {
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar20 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar20 = *(long *)(unaff_x19[0x6d] + 0x60), lVar20 != 0)) {
                if (*(int *)(lVar20 + 0x18) == 0) goto LAB_035575f4;
                if (unaff_x19[0x74] != 0) {
                  FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar20 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar20 = *(long *)(unaff_x19[0x6d] + 0x60), lVar20 != 0)) {
                    if (*(int *)(lVar20 + 0x18) == 0) goto LAB_035575f4;
                    if (unaff_x19[0x74] != 0) {
                      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar20 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_036aa280(unaff_x19[0x74],0);
                        if (unaff_x19[0xe4] != 0) {
                          FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
                          if (unaff_x19[0xe4] != 0) {
                            uVar18 = FUN_0390ef60(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar17 = FUN_0390ed3c(unaff_x19[0xe4],0);
                              lVar20 = *in_stack_00000170;
                              if (lVar20 != 0) {
                                lVar25 = 0;
                                lVar36 = 0;
                                do {
                                  uVar19 = lVar36 + 1;
                                  if ((long)*(int *)(lVar20 + 0x34) <= (long)uVar19)
                                  goto LAB_03554724;
                                  lVar20 = *(long *)(lVar20 + 0x60);
                                  if (lVar20 == 0) break;
                                  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  if (*(uint *)(lVar20 + 0x18) <= uVar19) goto LAB_035575f4;
                                  FUN_03596a20(lVar20 + lVar25 + 0x70,0);
                                  lVar20 = unaff_x19[0xe1];
                                  if (lVar20 == 0) break;
                                  if (*(uint *)(lVar20 + 0x18) <= uVar19) goto LAB_035575f4;
                                  uVar33 = *(undefined8 *)(lVar20 + lVar36 * 8 + 0x28);
                                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar21 = FUN_036d35a8(uVar33,0,0);
                                  if ((uVar21 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                      if ((*in_stack_00000170 == 0) ||
                                         (lVar20 = *(long *)(*in_stack_00000170 + 0x60), lVar20 == 0
                                         )) break;
                                      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      if (*(uint *)(lVar20 + 0x18) <= uVar19) goto LAB_035575f4;
                                      FUN_03596b20(lVar20 + lVar25 + 0x70,1,0);
                                    }
                                    lVar20 = unaff_x19[0xe1];
                                    if (lVar20 == 0) break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar20 = *(long *)(lVar20 + lVar36 * 8 + 0x28);
                                    if (lVar20 == 0) break;
                                    lVar20 = UnityEngine_Material__GetColorArray(lVar20,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar27 = *(long *)(*in_stack_00000170 + 0x60), lVar27 == 0))
                                    break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar19) goto LAB_035575f4;
                                    if (lVar20 == 0) break;
                                    FUN_036a460c(lVar20,*(undefined8 *)(lVar27 + lVar25 + 0x80),0);
                                    lVar20 = unaff_x19[0xe1];
                                    if (lVar20 == 0) break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar20 = *(long *)(lVar20 + lVar36 * 8 + 0x28);
                                    if (lVar20 == 0) break;
                                    lVar20 = UnityEngine_Material__GetColorArray(lVar20,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar27 = *(long *)(*in_stack_00000170 + 0x60), lVar27 == 0))
                                    break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar19) goto LAB_035575f4;
                                    if (lVar20 == 0) break;
                                    FUN_036a4810(lVar20,*(undefined8 *)(lVar27 + lVar25 + 0x98),0);
                                    lVar20 = unaff_x19[0xe1];
                                    if (lVar20 == 0) break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar20 = *(long *)(lVar20 + lVar36 * 8 + 0x28);
                                    if (lVar20 == 0) break;
                                    lVar20 = UnityEngine_Material__GetColorArray(lVar20,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar27 = *(long *)(*in_stack_00000170 + 0x60), lVar27 == 0))
                                    break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar19) goto LAB_035575f4;
                                    if (lVar20 == 0) break;
                                    FUN_036a48bc(lVar20,*(undefined8 *)(lVar27 + lVar25 + 0xa0),0);
                                    lVar20 = unaff_x19[0xe1];
                                    if (lVar20 == 0) break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar20 = *(long *)(lVar20 + lVar36 * 8 + 0x28);
                                    if (lVar20 == 0) break;
                                    lVar20 = UnityEngine_Material__GetColorArray(lVar20,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar27 = *(long *)(*in_stack_00000170 + 0x60), lVar27 == 0))
                                    break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar19) goto LAB_035575f4;
                                    if (lVar20 == 0) break;
                                    FUN_036a4e24(lVar20,*(undefined8 *)(lVar27 + lVar25 + 0xa8),0);
                                    lVar20 = unaff_x19[0xe1];
                                    if (lVar20 == 0) break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar20 = *(long *)(lVar20 + lVar36 * 8 + 0x28);
                                    if ((lVar20 == 0) ||
                                       (lVar20 = UnityEngine_Material__GetColorArray(lVar20,0),
                                       lVar20 == 0)) break;
                                    FUN_036aa280(lVar20,0);
                                    lVar20 = unaff_x19[0xe1];
                                    if (lVar20 == 0) break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar20 = *(long *)(lVar20 + lVar36 * 8 + 0x28);
                                    if (lVar20 == 0) break;
                                    lVar20 = FUN_037b514c(lVar20,0);
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar27 = *(long *)(lVar27 + lVar36 * 8 + 0x28);
                                    if ((lVar27 == 0) ||
                                       (uVar33 = UnityEngine_Material__GetColorArray(lVar27,0),
                                       lVar20 == 0)) break;
                                    FUN_0390f3a4(lVar20,uVar33,0);
                                    lVar20 = unaff_x19[0xe1];
                                    if (lVar20 == 0) break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar20 = *(long *)(lVar20 + lVar36 * 8 + 0x28);
                                    if ((lVar20 == 0) ||
                                       (lVar20 = FUN_037b514c(lVar20,0), lVar20 == 0)) break;
                                    FUN_0390eec8(uVar18,uVar43,uVar44,uVar47,lVar20,0);
                                    lVar20 = unaff_x19[0xe1];
                                    if (lVar20 == 0) break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar20 = *(long *)(lVar20 + lVar36 * 8 + 0x28);
                                    if ((lVar20 == 0) ||
                                       (lVar20 = FUN_037b514c(lVar20,0), lVar20 == 0)) break;
                                    FUN_0390ed78(lVar20,uVar17 & 1,0);
                                    lVar20 = unaff_x19[0xe1];
                                    if (lVar20 == 0) break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar19) goto LAB_035575f4;
                                    plVar34 = *(long **)(lVar20 + lVar36 * 8 + 0x28);
                                    uVar46 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar34 == (long *)0x0) break;
                                    (**(code **)(*plVar34 + 0x2c8))
                                              (plVar34,uVar46 & 1,*(undefined8 *)(*plVar34 + 0x2d0))
                                    ;
                                  }
                                  lVar20 = *in_stack_00000170;
                                  lVar36 = lVar36 + 1;
                                  lVar25 = lVar25 + 0x50;
                                } while (lVar20 != 0);
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


