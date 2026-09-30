/*
FUNCTION_NAME: UnityEngine.Animator$$CrossFade
ENTRY_POINT: 035567ec
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


void UnityEngine_Animator__CrossFade(long param_1)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined *puVar8;
  bool bVar9;
  undefined1 in_CY;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  char cVar16;
  long lVar17;
  code *pcVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long *unaff_x19;
  int *unaff_x20;
  undefined8 uVar23;
  long *plVar24;
  long unaff_x22;
  long unaff_x23;
  long lVar25;
  long unaff_x24;
  long lVar26;
  uint unaff_w25;
  long unaff_x27;
  long *unaff_x28;
  uint uVar27;
  long unaff_x29;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  undefined8 uVar31;
  float fVar32;
  ulong uVar33;
  float fVar34;
  uint uVar35;
  ulong uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float unaff_s11;
  float fVar42;
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
  undefined8 in_stack_00000110;
  uint uStack0000000000000118;
  uint uStack000000000000011c;
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
  
FUN_035568e8:
  lVar19 = unaff_x24;
  unaff_x24 = lVar19;
  if (!(bool)in_CY) {
LAB_035568f0:
    param_1 = param_1 + lVar19 * unaff_x22;
    fVar30 = *(float *)(param_1 + 0x14c);
    uVar35 = *(uint *)(param_1 + 0x128);
    pcVar18 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0355690c:
    fVar32 = unaff_s11 * in_stack_000000a8;
LAB_03556914:
    uVar36 = (ulong)uVar35;
    uVar13 = (ulong)(uint)fStack000000000000009c;
    uVar33 = (ulong)uStack0000000000000098;
    (*pcVar18)(in_stack_000000a0,uVar13,uVar33,uVar36,fVar32 + fVar30,0,in_stack_000000a8,
               in_stack_000000a8);
    uVar12 = uStack000000000000015c;
LAB_03556948:
    uStack000000000000015c = uVar12;
    bVar7 = false;
    uVar35 = in_stack_00000160;
LAB_0355694c:
    if ((*unaff_x28 == 0) || (lVar19 = *(long *)(*unaff_x28 + 0x38), lVar19 == 0))
    goto LAB_035574b8;
    uVar12 = (uint)*(undefined8 *)(lVar19 + 0x18);
    if (uVar12 <= unaff_w25) goto LAB_035575f4;
    if ((*(byte *)(lVar19 + unaff_x24 * unaff_x22 + 0x191) >> 1 & 1) == 0) {
      if ((in_stack_00000110._4_4_ & 1) != 0) {
        uVar33 = (ulong)uStack00000000000000c0;
        uVar13 = (ulong)(uint)fStack00000000000000dc;
        uVar36 = (ulong)(uint)in_stack_000000c8;
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000d8,uVar13,uVar33,uVar36,fStack00000000000000d0,uVar33);
      }
LAB_035569b4:
      in_stack_00000110._4_4_ = 0;
    }
    else {
      if ((((int)unaff_x19[0x65] < (int)unaff_w25) || ((int)unaff_x19[0x66] < (int)uVar35)) ||
         (((int)unaff_x19[0x5c] == 5 &&
          (*(int *)(lVar19 + unaff_x24 * unaff_x22 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      uVar27 = (uint)in_stack_00000150;
      if ((in_stack_00000110._4_4_ & 1) == 0) {
        if ((((in_stack_00000168._4_4_ == 0xd) || ((in_stack_00000168._4_4_ & 0xfffe) == 10)) ||
            ((int)uVar27 < (int)unaff_w25)) || (!bVar1)) goto LAB_035569b4;
        if (unaff_w25 == uVar27) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar14 = FUN_026b97f8(in_stack_00000168._4_4_,0);
          if ((uVar14 & 1) != 0) goto LAB_035569b4;
        }
        puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar26 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar26 = *(long *)puVar8;
        }
        unaff_x22 = 0x178;
        if ((*unaff_x28 == 0) || (lVar19 = *(long *)(*unaff_x28 + 0x38), lVar19 == 0))
        goto LAB_035574b8;
        uVar12 = (uint)*(undefined8 *)(lVar19 + 0x18);
        if (uVar12 <= unaff_w25) goto LAB_035575f4;
        lVar26 = *(long *)(lVar26 + 0xb8);
        lVar25 = lVar19 + unaff_x24 * 0x178;
        in_stack_000017b8 = *(undefined8 *)(lVar25 + 0x184);
        in_stack_000017b0 = *(undefined8 *)(lVar25 + 0x17c);
        fStack00000000000000d8 = *(float *)(lVar26 + 0x1598);
        fStack00000000000000dc = *(float *)(lVar26 + 0x159c);
        in_stack_000017c0 = *(float *)(lVar25 + 0x18c);
        in_stack_000000c8 = *(float *)(lVar26 + 0x15a0);
        fStack00000000000000d0 = *(float *)(lVar26 + 0x15a4);
        uStack00000000000000c0 = 0;
      }
      if (uVar12 <= unaff_w25) goto LAB_035575f4;
      lVar19 = lVar19 + unaff_x24 * unaff_x22;
      fVar32 = *(float *)(lVar19 + 0x128);
      fVar37 = *(float *)(lVar19 + 0x188);
      uVar23 = *(undefined8 *)(lVar19 + 0x17c);
      fVar40 = *(float *)(lVar19 + 0x184);
      uVar31 = *(undefined8 *)(lVar19 + 0x184);
      fVar39 = *(float *)(lVar19 + 0x18c);
      fVar30 = *(float *)(lVar19 + 0x11c);
      fVar38 = *(float *)(lVar19 + 0x148);
      fVar34 = *(float *)(lVar19 + 0x150);
      in_stack_00000178 = uVar23;
      fStack0000000000000180 = fVar40;
      fStack0000000000000184 = fVar37;
      in_stack_00000188 = fVar39;
      in_stack_00000190 = in_stack_000017b0;
      in_stack_00000198 = in_stack_000017b8;
      in_stack_000001a0 = in_stack_000017c0;
      uVar13 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
      lVar19 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if ((uVar13 & 1) == 0) {
        if (*(int *)(lVar19 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar19);
        }
        fVar32 = fVar32 + (float)in_stack_000017b8;
        uVar33 = (ulong)(uint)fVar32;
        fVar30 = fVar30 - (float)((ulong)in_stack_000017b0 >> 0x20);
        fVar34 = fVar34 - in_stack_000017c0;
        uVar13 = (ulong)(uint)fVar34;
        fVar38 = fVar38 + (float)((ulong)in_stack_000017b8 >> 0x20);
        uVar36 = (ulong)(uint)fVar38;
        if (fVar30 <= fStack00000000000000d8) {
          fStack00000000000000d8 = fVar30;
        }
        if (fVar34 <= fStack00000000000000dc) {
          fStack00000000000000dc = fVar34;
        }
        if (in_stack_000000c8 <= fVar32) {
          in_stack_000000c8 = fVar32;
        }
        if (fStack00000000000000d0 <= fVar38) {
          fStack00000000000000d0 = fVar38;
        }
      }
      else {
        if (*(int *)(lVar19 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar19);
        }
        fVar30 = (fVar30 + (in_stack_000000c8 - (float)in_stack_000017b8)) * 0.5;
        uVar36 = (ulong)(uint)fVar30;
        if (fVar34 <= fStack00000000000000dc) {
          fStack00000000000000dc = fVar34;
        }
        uVar13 = (ulong)(uint)fStack00000000000000dc;
        uVar33 = (ulong)uStack00000000000000c0;
        if (fStack00000000000000d0 <= fVar38) {
          fStack00000000000000d0 = fVar38;
        }
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000d8,uVar13,uVar33,uVar36,fStack00000000000000d0,uVar33);
        fStack00000000000000dc = fVar34 - fVar39;
        in_stack_000000c8 = fVar32 + fVar40;
        uStack00000000000000c0 = 0;
        fStack00000000000000d0 = fVar38 + fVar37;
        fStack00000000000000d8 = fVar30;
        in_stack_000017b0 = uVar23;
        in_stack_000017b8 = uVar31;
        in_stack_000017c0 = fVar39;
      }
      unaff_x22 = 0x178;
      if (((*unaff_x20 == 1) || (unaff_w25 == (uint)in_stack_000000e0)) ||
         (((int)uVar27 <= (int)unaff_w25 || (!bVar1)))) {
        uVar33 = (ulong)uStack00000000000000c0;
        uVar13 = (ulong)(uint)fStack00000000000000dc;
        uVar36 = (ulong)(uint)in_stack_000000c8;
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000d8,uVar13,uVar33,uVar36,fStack00000000000000d0,uVar33);
        in_stack_00000110._4_4_ = 0;
      }
      else {
        in_stack_00000110._4_4_ = 1;
      }
    }
    puVar8 = OVRPlugin_Media_TypeInfo;
    iVar11 = *unaff_x20;
    uVar12 = uStack000000000000015c + 1;
    unaff_x27 = unaff_x27 + 0x178;
    in_stack_00000128 = in_stack_00000128 + 1;
    if (iVar11 <= (int)uStack000000000000015c) {
      lVar19 = *unaff_x28;
      if (lVar19 == 0) goto LAB_035574b8;
      *(int *)(lVar19 + 0x18) = iVar11;
      lVar26 = unaff_x19[0xd4];
      *(uint *)(lVar19 + 0x2c) = uVar35 + 1;
      if (iVar11 < 1 || iStack00000000000000d4 == 0) {
        iStack00000000000000d4 = 1;
      }
      *(int *)(lVar19 + 0x1c) = (int)lVar26;
      *(int *)(lVar19 + 0x24) = iStack00000000000000d4;
      *(int *)(lVar19 + 0x30) = (int)unaff_x19[0x96] + 1;
      if (((int)unaff_x19[99] != 0xff) ||
         (uVar14 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar14 & 1) == 0)) goto LAB_03554724;
      lVar19 = unaff_x19[0xdf];
      if (lVar19 != 0) {
        (**(code **)(lVar19 + 0x18))
                  (*(undefined8 *)(lVar19 + 0x40),*unaff_x28,*(undefined8 *)(lVar19 + 0x28));
      }
      if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
      iVar11 = FUN_03911ee4(unaff_x19[0xe5],0);
      if (iVar11 != 0x19) {
        lVar19 = unaff_x19[0xe5];
        if (lVar19 == 0) goto LAB_035574b8;
        uVar35 = FUN_03911ee4(lVar19,0);
        FUN_03911f20(lVar19,uVar35 | 0x19,0);
      }
      if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
        if ((*unaff_x28 == 0) || (lVar19 = *(long *)(*unaff_x28 + 0x60), lVar19 == 0))
        goto LAB_035574b8;
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(int *)(lVar19 + 0x18) == 0) goto LAB_035575f4;
        FUN_03596b20(lVar19 + 0x20,1,0);
      }
      if (unaff_x19[0x74] == 0) goto LAB_035574b8;
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] == 0) || (lVar19 = *(long *)(unaff_x19[0x6d] + 0x60), lVar19 == 0))
      goto LAB_035574b8;
      if (*(int *)(lVar19 + 0x18) == 0) goto LAB_035575f4;
      if (unaff_x19[0x74] == 0) goto LAB_035574b8;
      FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar19 + 0x30),0);
      if ((unaff_x19[0x6d] == 0) || (lVar19 = *(long *)(unaff_x19[0x6d] + 0x60), lVar19 == 0))
      goto LAB_035574b8;
      if (*(int *)(lVar19 + 0x18) == 0) goto LAB_035575f4;
      if (unaff_x19[0x74] == 0) goto LAB_035574b8;
      FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar19 + 0x48),0);
      if ((unaff_x19[0x6d] == 0) || (lVar19 = *(long *)(unaff_x19[0x6d] + 0x60), lVar19 == 0))
      goto LAB_035574b8;
      if (*(int *)(lVar19 + 0x18) == 0) goto LAB_035575f4;
      if (unaff_x19[0x74] == 0) goto LAB_035574b8;
      FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar19 + 0x50),0);
      if ((unaff_x19[0x6d] == 0) || (lVar19 = *(long *)(unaff_x19[0x6d] + 0x60), lVar19 == 0))
      goto LAB_035574b8;
      if (*(int *)(lVar19 + 0x18) == 0) goto LAB_035575f4;
      if (unaff_x19[0x74] == 0) goto LAB_035574b8;
      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar19 + 0x58),0);
      if (unaff_x19[0x74] == 0) goto LAB_035574b8;
      FUN_036aa280(unaff_x19[0x74],0);
      if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
      FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
      if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
      uVar31 = FUN_0390ef60(unaff_x19[0xe4],0);
      if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
      uVar35 = FUN_0390ed3c(unaff_x19[0xe4],0);
      lVar19 = *unaff_x28;
      if (lVar19 == 0) goto LAB_035574b8;
      lVar25 = 0;
      lVar26 = 0;
      goto LAB_03557110;
    }
    if (*(uint *)(unaff_x23 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
    if ((*unaff_x28 == 0) || (lVar26 = *(long *)(*unaff_x28 + 0x50), lVar26 == 0))
    goto LAB_035574b8;
    unaff_x24 = (long)(int)uStack000000000000015c;
    lVar19 = unaff_x23 + unaff_x24 * unaff_x22;
    in_stack_00000160 = *(uint *)(lVar19 + 100);
    if (*(uint *)(lVar26 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
    lVar20 = (long)(int)in_stack_00000160;
    lVar26 = lVar26 + lVar20 * unaff_x29;
    lVar25 = *(long *)(lVar19 + 0x38);
    uVar3 = *(ushort *)(lVar19 + 0x20);
    uVar5 = *(uint *)(lVar26 + 0x3c);
    in_stack_000000e0 = (long)(int)uVar5;
    uVar27 = *(uint *)(lVar26 + 0x68);
    iVar2 = *(int *)(lVar26 + 0x20);
    iVar11 = *(int *)(lVar26 + 0x28);
    iVar10 = *(int *)(lVar26 + 0x2c);
    uVar6 = *(uint *)(lVar26 + 0x40);
    lVar19 = (long)(int)uVar6;
    fVar34 = *(float *)(lVar26 + 0x4c);
    fVar37 = *(float *)(lVar26 + 0x54);
    fVar30 = *(float *)(lVar26 + 0x58);
    fVar41 = *(float *)(lVar26 + 0x5c);
    fVar39 = *(float *)(lVar26 + 0x60);
    fVar40 = *(float *)(lVar26 + 0x6c);
    fVar42 = *(float *)(lVar26 + 0x70);
    fVar32 = *(float *)(lVar26 + 0x74);
    fVar38 = *(float *)(lVar26 + 0x78);
    in_stack_00000168._4_4_ = (uint)uVar3;
    if ((int)uVar27 < 9) {
      switch(uVar27) {
      case 1:
        if ((char)unaff_x19[0x1e] == '\0') {
          in_stack_000000f8._4_4_ = fVar39 + 0.0;
        }
        else {
          in_stack_000000f8._4_4_ = 0.0 - fVar30;
        }
        break;
      case 2:
LAB_03555018:
        in_stack_000000f8._4_4_ = (fVar39 + fVar41 * 0.5) - fVar30 * 0.5;
        break;
      default:
        goto switchD_03554f58_caseD_3;
      case 4:
        in_stack_000000f8._4_4_ = (fVar41 + fVar39) - fVar30;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar41 + fVar39;
        }
        break;
      case 8:
        goto switchD_03554f58_caseD_8;
      }
LAB_03555088:
      in_stack_000000e8 = 0;
    }
    else if (uVar27 == 0x10) {
switchD_03554f58_caseD_8:
      if (uVar3 < 0xad) {
        if ((uVar3 != 3) && (uVar3 != 10)) {
LAB_03554fac:
          if (*(uint *)(unaff_x23 + 0x18) <= uVar5) goto LAB_035575f4;
          uVar4 = *(undefined2 *)(in_stack_000000f0 + in_stack_000000e0 * 0x178 + 0x20);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar13 = FUN_026b8cc4(uVar4,0);
          if ((uVar13 & 1) == 0) {
            bVar1 = (int)in_stack_00000160 < (int)unaff_x19[0x95];
          }
          else {
            bVar1 = false;
          }
          if ((fVar30 <= fVar41) && (!bVar1 && uVar27 >> 4 == 0)) {
            in_stack_000000f8._4_4_ = fVar39;
            if ((char)unaff_x19[0x1e] != '\0') {
              in_stack_000000f8._4_4_ = fVar41 + fVar39;
            }
            goto LAB_03555088;
          }
          if (((uVar12 == 1) || (in_stack_00000160 != uVar35)) ||
             (uStack000000000000015c == *(uint *)((long)unaff_x19 + 0x324))) {
            in_stack_000000f8._4_4_ = fVar39;
            if ((char)unaff_x19[0x1e] != '\0') {
              in_stack_000000f8._4_4_ = fVar41 + fVar39;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uStack0000000000000028 = FUN_026b97f8(in_stack_00000168._4_4_,0);
            in_stack_000000e8 = 0;
          }
          else {
            cVar16 = (char)unaff_x19[0x1e];
            fVar39 = -fVar30;
            if (cVar16 != '\0') {
              fVar39 = fVar30;
            }
            if (*(uint *)(in_stack_000000f0 + 0x18) <= uVar5) goto LAB_035575f4;
            iVar10 = (int)*(char *)(in_stack_000000f0 + in_stack_000000e0 * 0x178 + 0x194) +
                     (-iVar2 - (uStack0000000000000028 & 1)) + iVar10 + -1;
            if (iVar10 < 1) {
              fVar30 = 1.0;
              iVar10 = 1;
            }
            else {
              fVar30 = *(float *)((long)unaff_x19 + 0x2dc);
            }
            if (in_stack_00000168._4_4_ == 9) {
LAB_03556e74:
              fVar30 = 1.0 - fVar30;
            }
            else {
              if (in_stack_00000168._4_4_ != 0xa0) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar13 = FUN_026b97f8(in_stack_00000168._4_4_,0);
                cVar16 = (char)unaff_x19[0x1e];
                if ((uVar13 & 1) != 0) goto LAB_03556e74;
              }
              iVar10 = (iVar2 - (~uStack0000000000000028 & 1)) + iVar11;
            }
            fVar30 = ((fVar41 + fVar39) * fVar30) / (float)iVar10;
            if (cVar16 == '\0') {
              in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar30;
              in_stack_000000e8 =
                   CONCAT44((float)((ulong)in_stack_000000e8 >> 0x20) + 0.0,
                            (float)in_stack_000000e8 + 0.0);
            }
            else {
              in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar30;
            }
          }
        }
      }
      else if (((uVar3 != 0xad) && (uVar3 != 0x200b)) && (uVar3 != 0x2060)) goto LAB_03554fac;
    }
    else if (uVar27 == 0x20) {
      fVar30 = fVar40 + fVar32;
      goto LAB_03555018;
    }
switchD_03554f58_caseD_3:
    uVar27 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
    if (uVar27 <= uStack000000000000015c) goto LAB_035575f4;
    lVar26 = in_stack_000000f0 + unaff_x24 * 0x178;
    fVar41 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
    fVar30 = (float)in_stack_000000b8 + (float)in_stack_000000e8;
    fVar39 = (float)((ulong)in_stack_000000b8 >> 0x20) + (float)((ulong)in_stack_000000e8 >> 0x20);
    if (*(char *)(lVar26 + 0x194) == '\0') goto LAB_03555938;
    iVar11 = *(int *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x2c);
    if (iVar11 != 0) goto LAB_0355574c;
    fVar28 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)in_stack_00000160,1.0);
    switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
    case 0:
      lVar17 = in_stack_000000f0 + unaff_x24 * 0x178;
      *(undefined4 *)(lVar17 + 0x84) = 0;
      *(undefined4 *)(lVar17 + 0xac) = 0;
      *(undefined4 *)(lVar17 + 0xd4) = 0x3f800000;
      fVar28 = 1.0;
      break;
    case 1:
      fVar38 = *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x70);
      if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
        lVar17 = in_stack_000000f0 + unaff_x24 * 0x178;
        fVar32 = (in_stack_000000f8._4_4_ + fVar38) - *(float *)(in_stack_00000080 + 0x230);
        fVar38 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
        goto LAB_035551cc;
      }
      lVar17 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar32 = fVar32 - fVar40;
      *(float *)(lVar17 + 0x84) = fVar28 + (fVar38 - fVar40) / fVar32;
      *(float *)(lVar17 + 0xac) = fVar28 + (*(float *)(lVar17 + 0x98) - fVar40) / fVar32;
      *(float *)(lVar17 + 0xd4) = fVar28 + (*(float *)(lVar17 + 0xc0) - fVar40) / fVar32;
      fVar28 = fVar28 + (*(float *)(lVar17 + 0xe8) - fVar40) / fVar32;
      break;
    case 2:
      lVar17 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar38 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      fVar32 = (in_stack_000000f8._4_4_ + *(float *)(lVar17 + 0x70)) -
               *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
      *(float *)(lVar17 + 0x84) = fVar28 + fVar32 / fVar38;
      *(float *)(lVar17 + 0xac) =
           fVar28 + ((in_stack_000000f8._4_4_ + *(float *)(lVar17 + 0x98)) -
                    *(float *)(in_stack_00000080 + 0x230)) /
                    (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
      *(float *)(lVar17 + 0xd4) =
           fVar28 + ((in_stack_000000f8._4_4_ + *(float *)(lVar17 + 0xc0)) -
                    *(float *)(in_stack_00000080 + 0x230)) /
                    (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
      fVar28 = fVar28 + ((in_stack_000000f8._4_4_ + *(float *)(lVar17 + 0xe8)) -
                        *(float *)(in_stack_00000080 + 0x230)) /
                        (*(float *)(in_stack_00000080 + 0x238) -
                        *(float *)(in_stack_00000080 + 0x230));
      break;
    case 3:
      switch((int)unaff_x19[0x62]) {
      case 0:
        lVar17 = in_stack_000000f0 + unaff_x24 * 0x178;
        *(undefined4 *)(lVar17 + 0x88) = 0;
        *(undefined4 *)(lVar17 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar17 + 0xd8) = 0;
        *(undefined4 *)(lVar17 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar17 = in_stack_000000f0 + unaff_x24 * 0x178;
        fVar38 = fVar38 - fVar42;
        fVar32 = fVar28 + (*(float *)(lVar17 + 0x74) - fVar42) / fVar38;
        fVar38 = fVar28 + (*(float *)(lVar17 + 0x9c) - fVar42) / fVar38;
        *(float *)(lVar17 + 0x88) = fVar32;
        *(float *)(lVar17 + 0xb0) = fVar38;
        *(float *)(lVar17 + 0xd8) = fVar32;
        *(float *)(lVar17 + 0x100) = fVar38;
        break;
      case 2:
        lVar17 = in_stack_000000f0 + unaff_x24 * 0x178;
        fVar32 = fVar28 + (*(float *)(lVar17 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                          (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
        *(float *)(lVar17 + 0x88) = fVar32;
        fVar38 = *(float *)(unaff_x19 + 0x9c);
        fVar40 = *(float *)(unaff_x19 + 0x9d);
        *(float *)(lVar17 + 0xd8) = fVar32;
        fVar32 = fVar28 + (*(float *)(lVar17 + 0x9c) - fVar38) / (fVar40 - fVar38);
        *(float *)(lVar17 + 0xb0) = fVar32;
        *(float *)(lVar17 + 0x100) = fVar32;
        break;
      case 3:
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
        uVar27 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
      }
      if (uVar27 <= uStack000000000000015c) goto LAB_035575f4;
      lVar17 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar32 = *(float *)(lVar17 + 0x15c);
      fVar38 = (1.0 - (*(float *)(lVar17 + 0x88) + *(float *)(lVar17 + 0xb0)) * fVar32) * 0.5;
      fVar40 = fVar28 + *(float *)(lVar17 + 0x88) * fVar32 + fVar38;
      fVar28 = fVar28 + fVar38 + *(float *)(lVar17 + 0xb0) * fVar32;
      *(float *)(lVar17 + 0x84) = fVar40;
      *(float *)(lVar17 + 0xac) = fVar40;
      *(float *)(lVar17 + 0xd4) = fVar28;
      break;
    default:
      goto switchD_0355512c_default;
    }
    *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xfc) = fVar28;
switchD_0355512c_default:
    switch((int)unaff_x19[0x62]) {
    case 0:
      if (uVar27 <= uStack000000000000015c) goto LAB_035575f4;
      lVar17 = in_stack_000000f0 + unaff_x24 * 0x178;
      *(undefined4 *)(lVar17 + 0x88) = 0;
      *(undefined4 *)(lVar17 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar17 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar17 + 0x100) = 0;
      break;
    case 1:
      if (uStack000000000000015c < uVar27) {
        lVar17 = in_stack_000000f0 + unaff_x24 * 0x178;
        fVar34 = fVar34 - fVar37;
        fVar32 = (*(float *)(lVar17 + 0x74) - fVar37) / fVar34;
        fVar34 = (*(float *)(lVar17 + 0x9c) - fVar37) / fVar34;
        *(float *)(lVar17 + 0x88) = fVar32;
        goto UnityEngine_Animator__set_stabilizeFeet;
      }
      goto LAB_035575f4;
    case 2:
      if (uVar27 <= uStack000000000000015c) goto LAB_035575f4;
      lVar17 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar32 = (*(float *)(lVar17 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
               (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar17 + 0x88) = fVar32;
      fVar34 = (*(float *)(lVar17 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
               (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
      *(float *)(lVar17 + 0xb0) = fVar34;
      *(float *)(lVar17 + 0xd8) = fVar34;
      *(float *)(lVar17 + 0x100) = fVar32;
      break;
    case 3:
      if (uVar27 <= uStack000000000000015c) goto LAB_035575f4;
      lVar17 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar38 = *(float *)(lVar17 + 0x15c);
      fVar34 = (1.0 - (*(float *)(lVar17 + 0x84) + *(float *)(lVar17 + 0xd4)) / fVar38) * 0.5;
      fVar32 = *(float *)(lVar17 + 0x84) / fVar38 + fVar34;
      fVar34 = fVar34 + *(float *)(lVar17 + 0xd4) / fVar38;
      *(float *)(lVar17 + 0x88) = fVar32;
      *(float *)(lVar17 + 0xb0) = fVar34;
      *(float *)(lVar17 + 0x100) = fVar32;
      *(float *)(lVar17 + 0xd8) = fVar34;
    }
    if (uVar27 <= uStack000000000000015c) goto LAB_035575f4;
    lVar17 = in_stack_000000f0 + unaff_x24 * 0x178;
    unaff_s14 = *(float *)(lVar17 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    if ((*(char *)(lVar17 + 0x5c) == '\0') &&
       ((*(byte *)(in_stack_000000f0 + unaff_x24 * 0x178 + 400) & 1) != 0)) {
      unaff_s14 = -unaff_s14;
    }
    fVar32 = in_stack_00000050._4_4_;
    if (((in_stack_00000058 == 2) || (fVar32 = fStack0000000000000034, in_stack_00000058 == 1)) ||
       (fVar32 = fStack000000000000002c, in_stack_00000058 == 0)) {
      unaff_s14 = fVar32 * unaff_s14;
    }
    lVar17 = in_stack_000000f0 + unaff_x24 * 0x178;
    fVar34 = *(float *)(lVar17 + 0x88);
    fVar38 = *(float *)(lVar17 + 0x84);
    fVar32 = -2.1474836e+09;
    if (fVar38 != INFINITY) {
      fVar32 = (float)(int)fVar38;
    }
    fVar40 = *(float *)(lVar17 + 0xd4);
    fVar42 = *(float *)(lVar17 + 0xd8);
    fVar37 = -2.1474836e+09;
    if (fVar34 != INFINITY) {
      fVar37 = (float)(int)fVar34;
    }
    uVar29 = FUN_03591d3c(fVar38 - fVar32,fVar34 - fVar37);
    *(undefined4 *)(lVar17 + 0x84) = uVar29;
    if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
    fVar42 = fVar42 - fVar37;
    *(float *)(lVar17 + 0x88) = unaff_s14;
    uVar29 = FUN_03591d3c(fVar38 - fVar32,fVar42);
    *(undefined4 *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xac) = uVar29;
    if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
    fVar40 = fVar40 - fVar32;
    *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xb0) = unaff_s14;
    fVar32 = (float)FUN_03591d3c(fVar40,fVar42);
    *(float *)(lVar17 + 0xd4) = fVar32;
    if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
    *(float *)(lVar17 + 0xd8) = unaff_s14;
    uVar29 = FUN_03591d3c(fVar40,fVar34 - fVar37);
    *(undefined4 *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xfc) = uVar29;
    uVar27 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
    if (uVar27 <= uStack000000000000015c) goto LAB_035575f4;
    *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x100) = unaff_s14;
    unaff_x20 = in_stack_00000048;
LAB_0355574c:
    if (((int)uStack000000000000015c < (int)unaff_x19[0x65]) &&
       (iStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
      if (((int)in_stack_00000160 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
        if (uVar27 <= uStack000000000000015c) goto LAB_035575f4;
        lVar26 = in_stack_000000f0 + unaff_x24 * 0x178;
        *(ulong *)(lVar26 + 0x70) =
             CONCAT44(fVar30 + (float)((ulong)*(undefined8 *)(lVar26 + 0x70) >> 0x20),
                      fVar41 + (float)*(undefined8 *)(lVar26 + 0x70));
        *(float *)(lVar26 + 0x78) = fVar39 + *(float *)(lVar26 + 0x78);
        *(ulong *)(lVar26 + 0x98) =
             CONCAT44(fVar30 + (float)((ulong)*(undefined8 *)(lVar26 + 0x98) >> 0x20),
                      fVar41 + (float)*(undefined8 *)(lVar26 + 0x98));
        *(float *)(lVar26 + 0xa0) = fVar39 + *(float *)(lVar26 + 0xa0);
        *(ulong *)(lVar26 + 0xc0) =
             CONCAT44(fVar30 + (float)((ulong)*(undefined8 *)(lVar26 + 0xc0) >> 0x20),
                      fVar41 + (float)*(undefined8 *)(lVar26 + 0xc0));
        *(float *)(lVar26 + 200) = fVar39 + *(float *)(lVar26 + 200);
        *(ulong *)(lVar26 + 0xe8) =
             CONCAT44(fVar30 + (float)((ulong)*(undefined8 *)(lVar26 + 0xe8) >> 0x20),
                      fVar41 + (float)*(undefined8 *)(lVar26 + 0xe8));
        *(float *)(lVar26 + 0xf0) = fVar39 + *(float *)(lVar26 + 0xf0);
        goto UnityEngine_Animator__GetAnimatorClipInfoCount;
      }
      if (((int)in_stack_00000160 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
        if (uStack000000000000015c < uVar27) {
          if (*(int *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x68) == iStack0000000000000030) {
            lVar26 = in_stack_000000f0 + unaff_x24 * 0x178;
            *(ulong *)(lVar26 + 0x70) =
                 CONCAT44(fVar30 + (float)((ulong)*(undefined8 *)(lVar26 + 0x70) >> 0x20),
                          fVar41 + (float)*(undefined8 *)(lVar26 + 0x70));
            *(float *)(lVar26 + 0x78) = fVar39 + *(float *)(lVar26 + 0x78);
            *(ulong *)(lVar26 + 0x98) =
                 CONCAT44(fVar30 + (float)((ulong)*(undefined8 *)(lVar26 + 0x98) >> 0x20),
                          fVar41 + (float)*(undefined8 *)(lVar26 + 0x98));
            *(float *)(lVar26 + 0xa0) = fVar39 + *(float *)(lVar26 + 0xa0);
            *(ulong *)(lVar26 + 0xc0) =
                 CONCAT44(fVar30 + (float)((ulong)*(undefined8 *)(lVar26 + 0xc0) >> 0x20),
                          fVar41 + (float)*(undefined8 *)(lVar26 + 0xc0));
            *(float *)(lVar26 + 200) = fVar39 + *(float *)(lVar26 + 200);
            *(ulong *)(lVar26 + 0xe8) =
                 CONCAT44(fVar30 + (float)((ulong)*(undefined8 *)(lVar26 + 0xe8) >> 0x20),
                          fVar41 + (float)*(undefined8 *)(lVar26 + 0xe8));
            *(float *)(lVar26 + 0xf0) = fVar39 + *(float *)(lVar26 + 0xf0);
            goto UnityEngine_Animator__GetAnimatorClipInfoCount;
          }
          goto UnityEngine_Animator__GetAnimatorTransitionInfo;
        }
        goto LAB_035575f4;
      }
    }
UnityEngine_Animator__GetAnimatorTransitionInfo:
    if (uVar27 <= uStack000000000000015c) goto LAB_035575f4;
    if (DAT_0411f172 == '\0') {
      FUN_01ab69ac(PTR_DAT_03cbded8);
      DAT_0411f172 = '\x01';
      uVar27 = *(uint *)(in_stack_000000f0 + 0x18);
    }
    puVar8 = PTR_DAT_03cbded8;
    uVar29 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
    lVar17 = in_stack_000000f0 + unaff_x24 * 0x178;
    *(undefined8 *)(lVar17 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
    *(undefined4 *)(lVar17 + 0x78) = uVar29;
    if (uVar27 <= uStack000000000000015c) goto LAB_035575f4;
    uVar29 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
    lVar17 = in_stack_000000f0 + unaff_x24 * 0x178;
    *(undefined8 *)(lVar17 + 0x98) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
    *(undefined4 *)(lVar17 + 0xa0) = uVar29;
    uVar29 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
    *(undefined8 *)(lVar17 + 0xc0) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
    *(undefined4 *)(lVar17 + 200) = uVar29;
    uVar29 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
    *(undefined8 *)(lVar17 + 0xe8) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
    *(undefined4 *)(lVar17 + 0xf0) = uVar29;
    *(undefined1 *)(lVar26 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
    if (iVar11 == 0) {
      pcVar18 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
      (*pcVar18)();
    }
    else if (iVar11 == 1) {
      pcVar18 = *(code **)(*unaff_x19 + 0x8c8);
      goto LAB_0355591c;
    }
LAB_03555938:
    if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar26 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
    lVar26 = lVar26 + unaff_x24 * 0x178;
    uVar31 = *(undefined8 *)(lVar26 + 0x11c);
    *(undefined8 *)(lVar26 + 0x11c) =
         CONCAT44(fVar30 + (float)((ulong)uVar31 >> 0x20),fVar41 + (float)uVar31);
    *(float *)(lVar26 + 0x124) = fVar39 + *(float *)(lVar26 + 0x124);
    if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar26 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
    lVar26 = lVar26 + unaff_x24 * 0x178;
    *(ulong *)(lVar26 + 0x110) =
         CONCAT44(fVar30 + (float)((ulong)*(undefined8 *)(lVar26 + 0x110) >> 0x20),
                  fVar41 + (float)*(undefined8 *)(lVar26 + 0x110));
    *(float *)(lVar26 + 0x118) = fVar39 + *(float *)(lVar26 + 0x118);
    if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar26 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
    lVar26 = lVar26 + unaff_x24 * 0x178;
    *(ulong *)(lVar26 + 0x128) =
         CONCAT44(fVar30 + (float)((ulong)*(undefined8 *)(lVar26 + 0x128) >> 0x20),
                  fVar41 + (float)*(undefined8 *)(lVar26 + 0x128));
    *(float *)(lVar26 + 0x130) = fVar39 + *(float *)(lVar26 + 0x130);
    if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar26 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
    lVar26 = lVar26 + unaff_x24 * 0x178;
    *(float *)(lVar26 + 0x134) = fVar41 + *(float *)(lVar26 + 0x134);
    *(ulong *)(lVar26 + 0x138) =
         CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar26 + 0x138) >> 0x20),
                  fVar30 + (float)*(undefined8 *)(lVar26 + 0x138));
    lVar26 = *in_stack_00000170;
    if ((lVar26 == 0) || (lVar17 = *(long *)(lVar26 + 0x38), lVar17 == 0)) goto LAB_035574b8;
    uVar27 = *(uint *)(lVar17 + 0x18);
    if (uVar27 <= uStack000000000000015c) goto LAB_035575f4;
    lVar21 = lVar17 + unaff_x24 * 0x178;
    uVar13 = CONCAT44(fVar41 + (float)((ulong)*(undefined8 *)(lVar21 + 0x140) >> 0x20),
                      fVar41 + (float)*(undefined8 *)(lVar21 + 0x140));
    fVar32 = fVar30 + *(float *)(lVar21 + 0x150);
    uVar33 = (ulong)(uint)fVar32;
    uVar36 = CONCAT44(fVar30 + (float)((ulong)*(undefined8 *)(lVar21 + 0x148) >> 0x20),
                      fVar30 + (float)*(undefined8 *)(lVar21 + 0x148));
    *(float *)(lVar21 + 0x150) = fVar32;
    *(ulong *)(lVar21 + 0x140) = uVar13;
    *(ulong *)(lVar21 + 0x148) = uVar36;
    if (in_stack_00000160 == uVar35) {
      uVar35 = *unaff_x20 - 1;
      if (uStack000000000000015c == uVar35) goto LAB_03555b44;
    }
    else {
      lVar26 = *(long *)(lVar26 + 0x50);
      if (lVar26 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= uVar35) goto LAB_035575f4;
      lVar21 = (long)(int)uVar35;
      lVar22 = lVar26 + lVar21 * 0x5c;
      uVar36 = (ulong)(uint)*(float *)(lVar22 + 0x58);
      fVar32 = fVar30 + *(float *)(lVar22 + 0x54);
      uVar13 = (ulong)(uint)fVar32;
      fVar34 = fVar41 + *(float *)(lVar22 + 0x58);
      uVar33 = (ulong)(uint)fVar34;
      *(ulong *)(lVar22 + 0x4c) =
           CONCAT44(fVar30 + (float)((ulong)*(undefined8 *)(lVar22 + 0x4c) >> 0x20),
                    fVar30 + (float)*(undefined8 *)(lVar22 + 0x4c));
      *(float *)(lVar22 + 0x54) = fVar32;
      *(float *)(lVar22 + 0x58) = fVar34;
      if (uVar27 <= *(uint *)(lVar22 + 0x34)) goto LAB_035575f4;
      uVar29 = *(undefined4 *)(lVar17 + (long)(int)*(uint *)(lVar22 + 0x34) * 0x178 + 0x11c);
      lVar26 = lVar26 + lVar21 * 0x5c;
      *(float *)(lVar26 + 0x70) = fVar32;
      *(undefined4 *)(lVar26 + 0x6c) = uVar29;
      lVar26 = *in_stack_00000170;
      if ((lVar26 == 0) || (lVar17 = *(long *)(lVar26 + 0x50), lVar17 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar17 + 0x18) <= uVar35) goto LAB_035575f4;
      lVar26 = *(long *)(lVar26 + 0x38);
      if (lVar26 == 0) goto LAB_035574b8;
      uVar35 = *(uint *)(lVar17 + lVar21 * 0x5c + 0x40);
      if (*(uint *)(lVar26 + 0x18) <= uVar35) goto LAB_035575f4;
      lVar17 = lVar17 + lVar21 * 0x5c;
      *(undefined4 *)(lVar17 + 0x74) = *(undefined4 *)(lVar26 + (long)(int)uVar35 * 0x178 + 0x128);
      *(undefined4 *)(lVar17 + 0x78) = *(undefined4 *)(lVar17 + 0x4c);
      uVar35 = *unaff_x20 - 1;
LAB_03555b44:
      if (uStack000000000000015c == uVar35) {
        lVar26 = *in_stack_00000170;
        if ((lVar26 == 0) || (lVar17 = *(long *)(lVar26 + 0x50), lVar17 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar17 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
        lVar21 = lVar17 + lVar20 * 0x5c;
        uVar36 = (ulong)(uint)*(float *)(lVar21 + 0x58);
        uVar13 = CONCAT44(fVar30 + (float)((ulong)*(undefined8 *)(lVar21 + 0x4c) >> 0x20),
                          fVar30 + (float)*(undefined8 *)(lVar21 + 0x4c));
        fVar32 = fVar30 + *(float *)(lVar21 + 0x54);
        fVar41 = fVar41 + *(float *)(lVar21 + 0x58);
        uVar33 = (ulong)(uint)fVar41;
        *(ulong *)(lVar21 + 0x4c) = uVar13;
        *(float *)(lVar21 + 0x54) = fVar32;
        *(float *)(lVar21 + 0x58) = fVar41;
        lVar26 = *(long *)(lVar26 + 0x38);
        if (lVar26 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar26 + 0x18) <= *(uint *)(lVar21 + 0x34)) goto LAB_035575f4;
        uVar29 = *(undefined4 *)(lVar26 + (long)(int)*(uint *)(lVar21 + 0x34) * 0x178 + 0x11c);
        lVar17 = lVar17 + lVar20 * 0x5c;
        *(float *)(lVar17 + 0x70) = fVar32;
        *(undefined4 *)(lVar17 + 0x6c) = uVar29;
        lVar26 = *in_stack_00000170;
        if ((lVar26 == 0) || (lVar17 = *(long *)(lVar26 + 0x50), lVar17 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar17 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
        lVar26 = *(long *)(lVar26 + 0x38);
        if (lVar26 == 0) goto LAB_035574b8;
        uVar35 = *(uint *)(lVar17 + lVar20 * 0x5c + 0x40);
        if (*(uint *)(lVar26 + 0x18) <= uVar35) goto LAB_035575f4;
        lVar17 = lVar17 + lVar20 * 0x5c;
        *(undefined4 *)(lVar17 + 0x74) = *(undefined4 *)(lVar26 + (long)(int)uVar35 * 0x178 + 0x128)
        ;
        *(undefined4 *)(lVar17 + 0x78) = *(undefined4 *)(lVar17 + 0x4c);
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
          if (((in_stack_00000168._4_4_ != 0x200b) && ((uVar14 & 1) == 0)) && (*unaff_x20 != 1))
          goto LAB_0355686c;
        }
      }
      else if (((uVar12 != 1) &&
               ((int)uStack000000000000015c < (int)(*(uint *)(in_stack_000000f0 + 0x18) - 1))) &&
              (((int)uStack000000000000015c < *unaff_x20 &&
               ((in_stack_00000168._4_4_ == 0x2019 || (in_stack_00000168._4_4_ == 0x27)))))) {
        if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c - 1) goto LAB_035575f4;
        uVar4 = *(undefined2 *)(in_stack_000000f0 + unaff_x27 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar14 = FUN_026b82c4(uVar4,0);
        if ((uVar14 & 1) != 0) {
          if (*(uint *)(in_stack_000000f0 + 0x18) <= uVar12) goto LAB_035575f4;
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
        iVar11 = in_stack_00000128;
        if ((uVar14 & 1) == 0) goto LAB_03556070;
      }
      else {
LAB_03556070:
        iVar11 = uStack000000000000015c - 1;
      }
      lVar26 = *in_stack_00000170;
      if (lVar26 == 0) goto LAB_035574b8;
      lVar17 = *(long *)(lVar26 + 0x40);
      if (lVar17 == 0) goto LAB_035574b8;
      uVar35 = *(uint *)(lVar26 + 0x24);
      iVar10 = *(int *)(lVar17 + 0x18);
      if (iVar10 < (int)(uVar35 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar26 + 0x40),iVar10 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar26 = *in_stack_00000170;
        if (lVar26 == 0) goto LAB_035574b8;
      }
      lVar26 = *(long *)(lVar26 + 0x40);
      if (lVar26 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= uVar35) goto LAB_035575f4;
      lVar26 = lVar26 + (long)(int)uVar35 * 0x18;
      *(long **)(lVar26 + 0x20) = unaff_x19;
      *(uint *)(lVar26 + 0x28) = uStack0000000000000158;
      *(int *)(lVar26 + 0x2c) = iVar11;
      *(uint *)(lVar26 + 0x30) = (iVar11 - uStack0000000000000158) + 1;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar26 = unaff_x19[0x6d];
      if (lVar26 == 0) goto LAB_035574b8;
      lVar17 = *(long *)(lVar26 + 0x50);
      *(int *)(lVar26 + 0x24) = *(int *)(lVar26 + 0x24) + 1;
      if (lVar17 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar17 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
      lVar17 = lVar17 + lVar20 * 0x5c;
      uStack000000000000011c = 0;
      iStack00000000000000d4 = iStack00000000000000d4 + 1;
      *(int *)(lVar17 + 0x30) = *(int *)(lVar17 + 0x30) + 1;
    }
    else {
      if ((uStack000000000000011c & 1) == 0) {
        uStack0000000000000158 = uStack000000000000015c;
      }
      if (uStack000000000000015c == *unaff_x20 - 1U) {
        lVar26 = *in_stack_00000170;
        if (lVar26 == 0) goto LAB_035574b8;
        lVar17 = *(long *)(lVar26 + 0x40);
        if (lVar17 == 0) goto LAB_035574b8;
        uVar35 = *(uint *)(lVar26 + 0x24);
        iVar11 = *(int *)(lVar17 + 0x18);
        if (iVar11 < (int)(uVar35 + 1)) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff025c((long *)(lVar26 + 0x40),iVar11 + 1,
                       *(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
          lVar26 = *in_stack_00000170;
          if (lVar26 == 0) goto LAB_035574b8;
        }
        lVar26 = *(long *)(lVar26 + 0x40);
        if (lVar26 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar26 + 0x18) <= uVar35) goto LAB_035575f4;
        lVar26 = lVar26 + (long)(int)uVar35 * 0x18;
        *(long **)(lVar26 + 0x20) = unaff_x19;
        *(uint *)(lVar26 + 0x28) = uStack0000000000000158;
        *(uint *)(lVar26 + 0x2c) = uStack000000000000015c;
        *(uint *)(lVar26 + 0x30) = uVar12 - uStack0000000000000158;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar26 = unaff_x19[0x6d];
        if (lVar26 == 0) goto LAB_035574b8;
        lVar17 = *(long *)(lVar26 + 0x50);
        *(int *)(lVar26 + 0x24) = *(int *)(lVar26 + 0x24) + 1;
        if (lVar17 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar17 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
        lVar17 = lVar17 + lVar20 * 0x5c;
        iStack00000000000000d4 = iStack00000000000000d4 + 1;
        *(int *)(lVar17 + 0x30) = *(int *)(lVar17 + 0x30) + 1;
      }
LAB_03555d68:
      uStack000000000000011c = 1;
    }
LAB_03555d70:
    unaff_x22 = 0x178;
    if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
    goto LAB_035574b8;
    uVar35 = *(uint *)(lVar26 + 0x18);
    if (uVar35 <= uStack000000000000015c) goto LAB_035575f4;
    if ((*(byte *)(lVar26 + unaff_x24 * 0x178 + 400) >> 2 & 1) == 0) {
      if ((uStack0000000000000118 & 1) == 0) {
LAB_03556254:
        uStack0000000000000118 = 0;
      }
      else {
LAB_03555da0:
        if (uVar35 <= uStack000000000000015c - 1) goto LAB_035575f4;
        lVar20 = *unaff_x19;
        uVar35 = *(uint *)(lVar26 + unaff_x27 + -0x330);
        uVar29 = *(undefined4 *)(lVar26 + unaff_x27 + -0x2f8);
LAB_035562ec:
        pcVar18 = *(code **)(lVar20 + 0x8d8);
LAB_035562f4:
        uVar36 = (ulong)uVar35;
        uVar13 = (ulong)(uint)fStack0000000000000070;
        uVar33 = (ulong)uStack0000000000000074;
        (*pcVar18)(in_stack_00000078,uVar13,uVar33,uVar36,fStack0000000000000104,0,
                   in_stack_00000088._4_4_,uVar29);
        puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar26 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar26 = *(long *)puVar8;
        }
LAB_03556348:
        uStack0000000000000118 = 0;
        unaff_s15 = 0.0;
        fStack0000000000000104 = *(float *)(*(long *)(lVar26 + 0xb8) + 0x15a8);
        fStack0000000000000100 = 0.0;
      }
    }
    else {
      lVar26 = lVar26 + unaff_x24 * 0x178;
      iVar11 = *(int *)(lVar26 + 0x68);
      *(undefined4 *)(lVar26 + 0x16c) = in_stack_000017c4;
      if ((((int)unaff_x19[0x65] < (int)uStack000000000000015c) ||
          ((int)unaff_x19[0x66] < (int)in_stack_00000160)) ||
         (((int)unaff_x19[0x5c] == 5 && (iVar11 + 1 != (int)unaff_x19[0x67])))) {
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
        lVar26 = *in_stack_00000170;
        if ((lVar26 == 0) || (lVar20 = *(long *)(lVar26 + 0x38), lVar20 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar20 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
        fVar32 = *(float *)(lVar20 + unaff_x24 * 0x178 + 0x160);
        if (unaff_s15 <= fVar32) {
          unaff_s15 = fVar32;
        }
        if (fStack0000000000000100 <= ABS(unaff_s14)) {
          fStack0000000000000100 = ABS(unaff_s14);
        }
        if (iVar11 != in_stack_00000068._4_4_) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar26 = *in_stack_00000170;
            if (lVar26 == 0) goto LAB_035574b8;
            lVar20 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          else {
            lVar20 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          fStack0000000000000104 = *(float *)(lVar20 + 0x15a8);
        }
        lVar26 = *(long *)(lVar26 + 0x38);
        if (lVar26 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar26 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
        if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
        fVar34 = *(float *)(lVar26 + unaff_x24 * 0x178 + 0x14c);
        fVar32 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
        fVar34 = fVar34 + unaff_s15 * fVar32;
        if (fVar34 <= fStack0000000000000104) {
          fStack0000000000000104 = fVar34;
        }
        uVar13 = (ulong)(uint)fStack0000000000000104;
        in_stack_00000068._4_4_ = iVar11;
      }
      if ((uStack0000000000000118 & 1) == 0) {
        uStack0000000000000118 = 0;
        if ((((in_stack_00000168._4_4_ == 0xd) || ((in_stack_00000168._4_4_ & 0xfffe) == 10)) ||
            ((int)uVar6 < (int)uStack000000000000015c)) || ((bool)(bVar1 ^ 1))) goto LAB_03556364;
        if (uStack000000000000015c == uVar6) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar14 = FUN_026b97f8(in_stack_00000168._4_4_,0);
          if ((uVar14 & 1) != 0) goto LAB_03556254;
        }
        if ((*in_stack_00000170 == 0) ||
           (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar26 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
        lVar26 = lVar26 + unaff_x24 * 0x178;
        in_stack_00000088._4_4_ = *(float *)(lVar26 + 0x160);
        in_stack_00000078 = *(uint *)(lVar26 + 0x11c);
        uVar33 = (ulong)in_stack_00000078;
        bVar9 = unaff_s15 != 0.0;
        fVar32 = in_stack_00000088._4_4_;
        if (bVar9) {
          fVar32 = unaff_s15;
        }
        unaff_s15 = fVar32;
        in_stack_00000090 = *(undefined4 *)(lVar26 + 0x168);
        uStack0000000000000074 = 0;
        fVar32 = unaff_s14;
        if (bVar9) {
          fVar32 = fStack0000000000000100;
        }
        uVar13 = (ulong)(uint)fVar32;
        fStack0000000000000070 = fStack0000000000000104;
        fStack0000000000000100 = fVar32;
      }
      if (*unaff_x20 == 1) {
        if ((*in_stack_00000170 != 0) &&
           (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 != 0)) {
          if (uStack000000000000015c < *(uint *)(lVar26 + 0x18)) {
            lVar26 = lVar26 + unaff_x24 * 0x178;
            lVar20 = *unaff_x19;
            uVar35 = *(uint *)(lVar26 + 0x128);
            uVar29 = *(undefined4 *)(lVar26 + 0x160);
            goto LAB_035562ec;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
      if ((uStack000000000000015c == uVar5) || ((int)uVar6 <= (int)uStack000000000000015c)) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar13 = FUN_026b63d8(in_stack_00000168._4_4_,0);
        if ((*in_stack_00000170 != 0) &&
           (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 != 0)) {
          lVar20 = unaff_x24;
          uVar35 = uStack000000000000015c;
          if (in_stack_00000168._4_4_ == 0x200b || (uVar13 & 1) != 0) {
            lVar20 = lVar19;
            uVar35 = uVar6;
          }
          if (uVar35 < *(uint *)(lVar26 + 0x18)) {
            lVar26 = lVar26 + lVar20 * 0x178;
            uVar35 = *(uint *)(lVar26 + 0x128);
            uVar29 = *(undefined4 *)(lVar26 + 0x160);
            pcVar18 = *(code **)(*unaff_x19 + 0x8d8);
            goto LAB_035562f4;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
      if (!bVar1) {
        if ((*in_stack_00000170 != 0) &&
           (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 != 0)) {
          uVar35 = *(uint *)(lVar26 + 0x18);
          goto LAB_03555da0;
        }
        goto LAB_035574b8;
      }
      if ((int)uStack000000000000015c < *unaff_x20 + -1) {
        if ((*in_stack_00000170 == 0) ||
           (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar26 + 0x18) <= uVar12) goto LAB_035575f4;
        uVar14 = FUN_03567ad8(in_stack_00000090,*(undefined4 *)(lVar26 + unaff_x27),0);
        if ((uVar14 & 1) == 0) {
          if ((*in_stack_00000170 != 0) &&
             (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 != 0)) {
            if (uStack000000000000015c < *(uint *)(lVar26 + 0x18)) {
              lVar26 = lVar26 + unaff_x24 * 0x178;
              uVar36 = (ulong)*(uint *)(lVar26 + 0x128);
              uVar33 = (ulong)uStack0000000000000074;
              uVar13 = (ulong)(uint)fStack0000000000000070;
              (**(code **)(*unaff_x19 + 0x8d8))
                        (in_stack_00000078,uVar13,uVar33,uVar36,fStack0000000000000104,0,
                         in_stack_00000088._4_4_,*(undefined4 *)(lVar26 + 0x160));
              puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
              lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar26 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar26 = *(long *)puVar8;
              }
              goto LAB_03556348;
            }
            goto LAB_035575f4;
          }
          goto LAB_035574b8;
        }
      }
      uStack0000000000000118 = 1;
    }
LAB_03556364:
    if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar26 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
    unaff_x29 = 0x5c;
    if (lVar25 == 0) goto LAB_035574b8;
    uVar35 = *(uint *)(lVar26 + unaff_x24 * 0x178 + 400);
    unaff_s11 = (float)FUN_03776a30(lVar25 + 0x50,0);
    unaff_x23 = in_stack_000000f0;
    unaff_x28 = in_stack_00000170;
    unaff_w25 = uStack000000000000015c;
    in_stack_00000150 = lVar19;
    if ((uVar35 >> 6 & 1) == 0) {
      if (bVar7) {
        if ((*in_stack_00000170 == 0) ||
           (lVar19 = *(long *)(*in_stack_00000170 + 0x38), lVar19 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar19 + 0x18) <= uStack000000000000015c - 1) goto LAB_035575f4;
        uVar35 = *(uint *)(lVar19 + unaff_x27 + -0x330);
        fVar30 = *(float *)(lVar19 + unaff_x27 + -0x30c);
        pcVar18 = *(code **)(*unaff_x19 + 0x8d8);
        fVar32 = in_stack_000000a8 * unaff_s11;
        uStack000000000000015c = uVar12;
        goto LAB_03556914;
      }
      goto LAB_03556948;
    }
    lVar26 = *in_stack_00000170;
    if ((lVar26 == 0) || (lVar20 = *(long *)(lVar26 + 0x38), lVar20 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar20 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
    *(undefined4 *)(lVar20 + unaff_x24 * 0x178 + 0x174) = in_stack_000017c4;
    if ((((int)unaff_x19[0x65] < (int)uStack000000000000015c) ||
        ((int)unaff_x19[0x66] < (int)in_stack_00000160)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar20 + unaff_x24 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((in_stack_00000168._4_4_ == 0xd) || ((in_stack_00000168._4_4_ & 0xfffe) == 10)) ||
        ((int)uVar6 < (int)uStack000000000000015c)) || (bVar7 || !bVar1)) {
LAB_035564e8:
      if (!bVar7) goto LAB_03556948;
    }
    else {
      if (uStack000000000000015c == uVar6) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar14 = FUN_026b97f8(in_stack_00000168._4_4_,0);
        if ((uVar14 & 1) != 0) goto LAB_035564e8;
        lVar26 = *in_stack_00000170;
        if (lVar26 == 0) goto LAB_035574b8;
      }
      lVar26 = *(long *)(lVar26 + 0x38);
      if (lVar26 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
      lVar26 = lVar26 + unaff_x24 * 0x178;
      in_stack_00000040 = *(float *)(lVar26 + 0x60);
      in_stack_00000038 = *(float *)(lVar26 + 0x14c);
      uVar13 = (ulong)(uint)in_stack_00000038;
      in_stack_000000a0 = *(uint *)(lVar26 + 0x11c);
      uVar33 = (ulong)in_stack_000000a0;
      in_stack_000000a8 = *(float *)(lVar26 + 0x160);
      fStack000000000000009c = unaff_s11 * in_stack_000000a8 + in_stack_00000038;
      uStack0000000000000098 = 0;
    }
    iVar11 = *unaff_x20;
    if (iVar11 == 1) {
LAB_03556628:
      if ((*in_stack_00000170 == 0) || (lVar19 = *(long *)(*in_stack_00000170 + 0x38), lVar19 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar19 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
      lVar19 = lVar19 + unaff_x24 * 0x178;
      lVar26 = *unaff_x19;
      uVar35 = *(uint *)(lVar19 + 0x128);
      fVar30 = *(float *)(lVar19 + 0x14c);
LAB_03556654:
      pcVar18 = *(code **)(lVar26 + 0x8d8);
      uStack000000000000015c = uVar12;
      goto LAB_0355690c;
    }
    if (uStack000000000000015c == uVar5) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar13 = FUN_026b63d8(in_stack_00000168._4_4_,0);
      if ((*in_stack_00000170 == 0) ||
         (param_1 = *(long *)(*in_stack_00000170 + 0x38), param_1 == 0)) goto LAB_035574b8;
      uVar35 = *(uint *)(param_1 + 0x18);
      if (in_stack_00000168._4_4_ == 0x200b || (uVar13 & 1) != 0) {
joined_r0x035566c4:
        uStack000000000000015c = uVar12;
        if (uVar6 < uVar35) goto LAB_035568f0;
        goto LAB_035575f4;
      }
      in_CY = uVar35 <= uStack000000000000015c;
      uStack000000000000015c = uVar12;
      goto FUN_035568e8;
    }
    if ((int)uStack000000000000015c < iVar11) {
      lVar26 = *in_stack_00000170;
      if ((lVar26 == 0) || (lVar20 = *(long *)(lVar26 + 0x38), lVar20 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar20 + 0x18) <= uVar12) goto LAB_035575f4;
      if (*(float *)(lVar20 + unaff_x27 + -0x108) == in_stack_00000040) {
        fVar32 = *(float *)(lVar20 + unaff_x27 + -0x1c);
        if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar13 = (ulong)(uint)in_stack_00000038;
        uVar14 = FUN_03567bac(fVar30 + fVar32,uVar13,0);
        if ((uVar14 & 1) != 0) {
          iVar11 = *unaff_x20;
          goto LAB_03556744;
        }
        lVar26 = *in_stack_00000170;
        if (lVar26 == 0) goto LAB_035574b8;
      }
      param_1 = *(long *)(lVar26 + 0x38);
      if (param_1 == 0) goto LAB_035574b8;
      uVar35 = *(uint *)(param_1 + 0x18);
      if ((int)uVar6 < (int)uStack000000000000015c) goto joined_r0x035566c4;
      in_CY = uVar35 <= uStack000000000000015c;
      uStack000000000000015c = uVar12;
      goto FUN_035568e8;
    }
LAB_03556744:
    if ((int)uStack000000000000015c < iVar11) {
      iVar11 = FUN_036d3364(lVar25,0);
      if (*(uint *)(in_stack_000000f0 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar19 = *(long *)(in_stack_000000f0 + unaff_x27 + -0x130);
      if (lVar19 == 0) goto LAB_035574b8;
      iVar10 = FUN_036d3364(lVar19,0);
      if (iVar11 != iVar10) goto LAB_03556628;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 == 0) || (lVar19 = *(long *)(*in_stack_00000170 + 0x38), lVar19 == 0))
      goto LAB_035574b8;
      if (uStack000000000000015c - 1 < *(uint *)(lVar19 + 0x18)) {
        lVar26 = *unaff_x19;
        uVar35 = *(uint *)(lVar19 + unaff_x27 + -0x330);
        fVar30 = *(float *)(lVar19 + unaff_x27 + -0x30c);
        goto LAB_03556654;
      }
      goto LAB_035575f4;
    }
    bVar7 = true;
    uStack000000000000015c = uVar12;
    uVar35 = in_stack_00000160;
    goto LAB_0355694c;
  }
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
  while( true ) {
    lVar19 = *unaff_x28;
    lVar26 = lVar26 + 1;
    lVar25 = lVar25 + 0x50;
    if (lVar19 == 0) break;
LAB_03557110:
    uVar14 = lVar26 + 1;
    if ((long)*(int *)(lVar19 + 0x34) <= (long)uVar14) {
LAB_03554724:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar19 = *(long *)(lVar19 + 0x60);
    if (lVar19 == 0) break;
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(uint *)(lVar19 + 0x18) <= uVar14) goto LAB_035575f4;
    FUN_03596a20(lVar19 + lVar25 + 0x70,0);
    lVar19 = unaff_x19[0xe1];
    if (lVar19 == 0) break;
    if (*(uint *)(lVar19 + 0x18) <= uVar14) goto LAB_035575f4;
    uVar23 = *(undefined8 *)(lVar19 + lVar26 * 8 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar15 = FUN_036d35a8(uVar23,0,0);
    if ((uVar15 & 1) == 0) {
      if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
        if ((*unaff_x28 == 0) || (lVar19 = *(long *)(*unaff_x28 + 0x60), lVar19 == 0)) break;
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar19 + 0x18) <= uVar14) goto LAB_035575f4;
        FUN_03596b20(lVar19 + lVar25 + 0x70,1,0);
      }
      lVar19 = unaff_x19[0xe1];
      if (lVar19 == 0) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar19 = *(long *)(lVar19 + lVar26 * 8 + 0x28);
      if (lVar19 == 0) break;
      lVar19 = UnityEngine_Material__GetColorArray(lVar19,0);
      if ((*unaff_x28 == 0) || (lVar20 = *(long *)(*unaff_x28 + 0x60), lVar20 == 0)) break;
      if (*(uint *)(lVar20 + 0x18) <= uVar14) goto LAB_035575f4;
      if (lVar19 == 0) break;
      FUN_036a460c(lVar19,*(undefined8 *)(lVar20 + lVar25 + 0x80),0);
      lVar19 = unaff_x19[0xe1];
      if (lVar19 == 0) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar19 = *(long *)(lVar19 + lVar26 * 8 + 0x28);
      if (lVar19 == 0) break;
      lVar19 = UnityEngine_Material__GetColorArray(lVar19,0);
      if ((*unaff_x28 == 0) || (lVar20 = *(long *)(*unaff_x28 + 0x60), lVar20 == 0)) break;
      if (*(uint *)(lVar20 + 0x18) <= uVar14) goto LAB_035575f4;
      if (lVar19 == 0) break;
      FUN_036a4810(lVar19,*(undefined8 *)(lVar20 + lVar25 + 0x98),0);
      lVar19 = unaff_x19[0xe1];
      if (lVar19 == 0) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar19 = *(long *)(lVar19 + lVar26 * 8 + 0x28);
      if (lVar19 == 0) break;
      lVar19 = UnityEngine_Material__GetColorArray(lVar19,0);
      if ((*unaff_x28 == 0) || (lVar20 = *(long *)(*unaff_x28 + 0x60), lVar20 == 0)) break;
      if (*(uint *)(lVar20 + 0x18) <= uVar14) goto LAB_035575f4;
      if (lVar19 == 0) break;
      FUN_036a48bc(lVar19,*(undefined8 *)(lVar20 + lVar25 + 0xa0),0);
      lVar19 = unaff_x19[0xe1];
      if (lVar19 == 0) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar19 = *(long *)(lVar19 + lVar26 * 8 + 0x28);
      if (lVar19 == 0) break;
      lVar19 = UnityEngine_Material__GetColorArray(lVar19,0);
      if ((*unaff_x28 == 0) || (lVar20 = *(long *)(*unaff_x28 + 0x60), lVar20 == 0)) break;
      if (*(uint *)(lVar20 + 0x18) <= uVar14) goto LAB_035575f4;
      if (lVar19 == 0) break;
      FUN_036a4e24(lVar19,*(undefined8 *)(lVar20 + lVar25 + 0xa8),0);
      lVar19 = unaff_x19[0xe1];
      if (lVar19 == 0) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar19 = *(long *)(lVar19 + lVar26 * 8 + 0x28);
      if ((lVar19 == 0) || (lVar19 = UnityEngine_Material__GetColorArray(lVar19,0), lVar19 == 0))
      break;
      FUN_036aa280(lVar19,0);
      lVar19 = unaff_x19[0xe1];
      if (lVar19 == 0) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar19 = *(long *)(lVar19 + lVar26 * 8 + 0x28);
      if (lVar19 == 0) break;
      lVar19 = FUN_037b514c(lVar19,0);
      lVar20 = unaff_x19[0xe1];
      if (lVar20 == 0) break;
      if (*(uint *)(lVar20 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar20 = *(long *)(lVar20 + lVar26 * 8 + 0x28);
      if ((lVar20 == 0) || (uVar23 = UnityEngine_Material__GetColorArray(lVar20,0), lVar19 == 0))
      break;
      FUN_0390f3a4(lVar19,uVar23,0);
      lVar19 = unaff_x19[0xe1];
      if (lVar19 == 0) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar19 = *(long *)(lVar19 + lVar26 * 8 + 0x28);
      if ((lVar19 == 0) || (lVar19 = FUN_037b514c(lVar19,0), lVar19 == 0)) break;
      FUN_0390eec8(uVar31,uVar13,uVar33,uVar36,lVar19,0);
      lVar19 = unaff_x19[0xe1];
      if (lVar19 == 0) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar19 = *(long *)(lVar19 + lVar26 * 8 + 0x28);
      if ((lVar19 == 0) || (lVar19 = FUN_037b514c(lVar19,0), lVar19 == 0)) break;
      FUN_0390ed78(lVar19,uVar35 & 1,0);
      lVar19 = unaff_x19[0xe1];
      if (lVar19 == 0) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar14) goto LAB_035575f4;
      plVar24 = *(long **)(lVar19 + lVar26 * 8 + 0x28);
      uVar12 = (**(code **)(*unaff_x19 + 0x2b8))();
      if (plVar24 == (long *)0x0) break;
      (**(code **)(*plVar24 + 0x2c8))(plVar24,uVar12 & 1,*(undefined8 *)(*plVar24 + 0x2d0));
    }
  }
LAB_035574b8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


