/*
FUNCTION_NAME: UnityEngine.AnimatorStateInfo$$get_fullPathHash
ENTRY_POINT: 03552b30
PROGRAM: vrlegs-libil2cpp.so
SCORE: 189
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_7;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_7
*/


void UnityEngine_AnimatorStateInfo__get_fullPathHash(undefined1 param_1 [16],ulong param_2)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  int *piVar21;
  ulong uVar22;
  undefined1 uVar23;
  char cVar24;
  uint uVar25;
  long lVar26;
  undefined4 *puVar27;
  long lVar28;
  long lVar29;
  float *pfVar30;
  code *pcVar31;
  uint uVar32;
  float *pfVar33;
  uint uVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  uint uVar39;
  long lVar40;
  long *unaff_x19;
  uint *unaff_x20;
  long *unaff_x21;
  long *plVar41;
  ulong unaff_x24;
  long *plVar42;
  long *plVar43;
  long lVar44;
  long *unaff_x28;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined4 uVar53;
  ulong uVar54;
  ulong uVar55;
  uint uVar56;
  ulong uVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  ulong unaff_d13;
  undefined4 uVar67;
  float fVar68;
  float fVar69;
  undefined8 in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  uint uStack0000000000000030;
  int iStack0000000000000034;
  float fStack0000000000000038;
  float fStack0000000000000040;
  undefined8 in_stack_00000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float in_stack_00000060;
  undefined8 in_stack_00000068;
  byte bStack0000000000000070;
  byte bStack0000000000000074;
  float fStack0000000000000078;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  float fStack0000000000000098;
  float fStack000000000000009c;
  float fStack00000000000000a0;
  float fStack00000000000000a8;
  long *in_stack_000000b8;
  uint uStack00000000000000c0;
  float fStack00000000000000c4;
  float fStack00000000000000c8;
  float fStack00000000000000d0;
  float fStack00000000000000d4;
  float fStack00000000000000d8;
  float fStack00000000000000dc;
  long *in_stack_000000e0;
  undefined8 uStack00000000000000e8;
  undefined8 in_stack_000000f8;
  float fStack0000000000000100;
  float fStack0000000000000104;
  float fStack0000000000000114;
  int iStack0000000000000128;
  float fStack000000000000012c;
  float fStack0000000000000158;
  float fStack000000000000015c;
  long *in_stack_00000160;
  undefined8 in_stack_00000168;
  long *in_stack_00000170;
  undefined8 in_stack_00000178;
  float fStack0000000000000180;
  float fStack0000000000000184;
  float in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  float in_stack_000001a0;
  uint in_stack_000008a0;
  undefined4 in_stack_000008a4;
  undefined8 in_stack_000008a8;
  undefined4 in_stack_000008b0;
  long in_stack_000016f8;
  uint in_stack_0000178c;
  uint in_stack_000017a8;
  undefined8 in_stack_000017b0;
  undefined8 in_stack_000017b8;
  float in_stack_000017c0;
  undefined8 in_stack_000017c8;
  char in_stack_000017d4;
  float in_stack_000017d8;
  uint in_stack_000017dc;
  
  plVar42 = unaff_x28;
LAB_03550bd0:
  fVar59 = (float)unaff_d13;
  in_stack_000017a8 = in_stack_000017a8 + 1;
  lVar26 = unaff_x19[0x8f];
  if (lVar26 != 0) {
    if ((int)in_stack_000017a8 < (int)*(uint *)(lVar26 + 0x18)) {
      if (*(uint *)(lVar26 + 0x18) <= in_stack_000017a8) goto LAB_035575f4;
      uVar10 = *(uint *)(lVar26 + (long)(int)in_stack_000017a8 * 0xc + 0x20);
      if (uVar10 == 0) goto LAB_0355459c;
      if (5 < in_stack_00000168._4_4_) {
        uVar17 = FUN_0276793c(&stack0x000017dc,0);
        uVar18 = FUN_0276793c(&stack0x000017a8,0);
        uVar17 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,uVar17,
                              *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo,uVar18,0);
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
        }
        FUN_0367ae18(uVar17,0);
        in_stack_000017c8 = CONCAT44(3,*unaff_x20);
      }
      if ((*(char *)((long)unaff_x19 + 0x302) != '\0') && (uVar10 == 0x3c)) goto code_r0x0355094c;
      if ((*plVar42 != 0) && (lVar26 = *(long *)(*plVar42 + 0x38), lVar26 != 0)) {
        if (*unaff_x20 < *(uint *)(lVar26 + 0x18)) {
          lVar26 = lVar26 + (long)(int)*unaff_x20 * unaff_x24;
          *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar26 + 0x2c);
          *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar26 + 0x58);
          unaff_x19[0x20] = *(long *)(lVar26 + 0x38);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          goto LAB_035509d4;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
LAB_0355459c:
    fVar59 = (float)param_2;
    if (((char)unaff_x19[0x47] != '\0') &&
       (fVar59 = DAT_00d389f8,
       DAT_00d389f8 < *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
      fVar59 = *(float *)((long)unaff_x19 + 0x1e4);
      fVar68 = *(float *)((long)unaff_x19 + 0x254);
      if ((fVar59 < fVar68) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0) {
          *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
        }
        fVar45 = (*(float *)((long)unaff_x19 + 0x23c) - fVar59) * 0.5;
        if (fVar45 <= DAT_00d38b84) {
          fVar45 = DAT_00d38b84;
        }
        *(float *)(unaff_x19 + 0x48) = fVar59;
        fVar45 = (fVar59 + fVar45) * 20.0 + 0.5;
        fVar59 = DAT_00d38e60;
        if (fVar45 != INFINITY) {
          fVar59 = (float)(int)fVar45 / 20.0;
        }
        if (fVar68 <= fVar59) {
          fVar59 = fVar68;
        }
        goto LAB_03554658;
      }
    }
    *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
    puVar6 = PTR_DAT_03cbdf88;
    if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
      uVar17 = FUN_0276793c(_fStack0000000000000038,0);
      uVar18 = FUN_0277fa90(_fStack0000000000000040,0);
      uVar17 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,uVar17,
                            *(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo,uVar18,0);
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
      }
      FUN_0367a6ec(uVar17,0);
    }
    puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    if ((*unaff_x20 == 0) || ((*unaff_x20 == 1 && (in_stack_000017dc == 3)))) {
      (**(code **)(*unaff_x19 + 0x918))();
      goto LAB_03554724;
    }
    lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar26 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar26 = *(long *)puVar7;
    }
    plVar43 = (long *)OVRPlugin_Media_TypeInfo;
    lVar26 = **(long **)(lVar26 + 0xb8);
    if (lVar26 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0xd1)) goto LAB_035575f4;
    iVar13 = *(int *)(lVar26 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54) << 2;
    if ((*plVar42 == 0) || (lVar26 = *(long *)(*plVar42 + 0x60), lVar26 == 0)) goto LAB_035574b8;
    if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(int *)(lVar26 + 0x18) == 0) goto LAB_035575f4;
    FUN_035968e8(lVar26 + 0x20,0,0);
    if (DAT_0411f172 == '\0') {
      FUN_01ab69ac(PTR_DAT_03cbded8);
      DAT_0411f172 = '\x01';
    }
    iVar11 = (int)unaff_x19[0x4e];
    in_stack_000000f8._4_4_ = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
    uStack00000000000000e8 = *(undefined8 *)(*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
    lVar26 = unaff_x19[0xe3];
    in_stack_000000b8 = (long *)uStack00000000000000e8;
    fStack00000000000000c4 = in_stack_000000f8._4_4_;
    if (iVar11 < 0x401) {
      if (iVar11 == 0x100) {
        if (lVar26 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar26 + 0x18) < 2) goto LAB_035575f4;
        uVar17 = *(undefined8 *)(lVar26 + 0x30);
        if ((int)unaff_x19[0x5c] == 5) {
          if ((*plVar42 == 0) || (lVar29 = *(long *)(*plVar42 + 0x58), lVar29 == 0))
          goto LAB_035574b8;
          if (*(uint *)(lVar29 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
          fVar59 = *(float *)(lVar29 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
        }
        else {
          fVar59 = *(float *)(unaff_x19 + 0x97);
        }
        fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar26 + 0x2c);
        fVar59 = (0.0 - fVar59) - fStack0000000000000020;
      }
      else if (iVar11 == 0x200) {
        if (lVar26 == 0) goto LAB_035574b8;
        if ((*(int *)(lVar26 + 0x18) == 1) || (*(int *)(lVar26 + 0x18) == 0)) goto LAB_035575f4;
        fStack00000000000000c4 = (*(float *)(lVar26 + 0x20) + *(float *)(lVar26 + 0x2c)) * 0.5;
        uVar17 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar26 + 0x24) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar26 + 0x30) >> 0x20)) * 0.5,
                          ((float)*(undefined8 *)(lVar26 + 0x24) +
                          (float)*(undefined8 *)(lVar26 + 0x30)) * 0.5);
        if ((int)unaff_x19[0x5c] == 5) {
          if ((*plVar42 == 0) || (lVar26 = *(long *)(*plVar42 + 0x58), lVar26 == 0))
          goto LAB_035574b8;
          if (*(uint *)(lVar26 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
          lVar26 = lVar26 + (long)(int)uStack0000000000000030 * 0x14;
          fStack00000000000000c4 = fStack000000000000002c + 0.0 + fStack00000000000000c4;
          fVar59 = ((fStack0000000000000020 + *(float *)(lVar26 + 0x28) + *(float *)(lVar26 + 0x30))
                   - fStack0000000000000024) * -0.5 + 0.0;
        }
        else {
          fStack00000000000000c4 = fStack000000000000002c + 0.0 + fStack00000000000000c4;
          fVar59 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x97) + in_stack_000017d8) -
                   fStack0000000000000024) * -0.5 + 0.0;
        }
      }
      else {
        if (iVar11 != 0x400) goto LAB_03554c4c;
        if (lVar26 == 0) goto LAB_035574b8;
        if (*(int *)(lVar26 + 0x18) == 0) goto LAB_035575f4;
        uVar17 = *(undefined8 *)(lVar26 + 0x24);
        if ((int)unaff_x19[0x5c] == 5) {
          if ((*plVar42 == 0) || (lVar29 = *(long *)(*plVar42 + 0x58), lVar29 == 0))
          goto LAB_035574b8;
          if (*(uint *)(lVar29 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
          in_stack_000017d8 = *(float *)(lVar29 + (long)(int)uStack0000000000000030 * 0x14 + 0x30);
        }
        fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar26 + 0x20);
        fVar59 = fStack0000000000000024 + (0.0 - in_stack_000017d8);
      }
LAB_03554c3c:
      in_stack_000000b8 =
           (long *)CONCAT44((float)((ulong)uVar17 >> 0x20) + 0.0,(float)uVar17 + fVar59);
    }
    else if (iVar11 == 0x800) {
      if (lVar26 == 0) goto LAB_035574b8;
      if ((*(int *)(lVar26 + 0x18) == 1) || (*(int *)(lVar26 + 0x18) == 0)) goto LAB_035575f4;
      fVar59 = fStack000000000000002c + 0.0 +
               (*(float *)(lVar26 + 0x20) + *(float *)(lVar26 + 0x2c)) * 0.5;
      in_stack_000000b8 =
           (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar26 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar26 + 0x30) >> 0x20)) * 0.5 + 0.0,
                            ((float)*(undefined8 *)(lVar26 + 0x24) +
                            (float)*(undefined8 *)(lVar26 + 0x30)) * 0.5 + 0.0);
      fStack00000000000000c4 = fVar59;
    }
    else {
      if (iVar11 == 0x1000) {
        if (lVar26 != 0) {
          if ((*(int *)(lVar26 + 0x18) != 1) && (*(int *)(lVar26 + 0x18) != 0)) {
            uVar17 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar26 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar26 + 0x30) >> 0x20)) * 0.5,
                              ((float)*(undefined8 *)(lVar26 + 0x24) +
                              (float)*(undefined8 *)(lVar26 + 0x30)) * 0.5);
            fStack00000000000000c4 =
                 fStack000000000000002c + 0.0 +
                 (*(float *)(lVar26 + 0x20) + *(float *)(lVar26 + 0x2c)) * 0.5;
            fVar59 = 0.0 - ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x9d) +
                            *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000024) * 0.5;
            goto LAB_03554c3c;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
      if (iVar11 == 0x2000) {
        if (lVar26 == 0) goto LAB_035574b8;
        if ((*(int *)(lVar26 + 0x18) == 1) || (*(int *)(lVar26 + 0x18) == 0)) goto LAB_035575f4;
        fVar59 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack0000000000000020) -
                       fStack0000000000000024) * 0.5;
        in_stack_000000b8 =
             (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar26 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar26 + 0x30) >> 0x20)) * 0.5 + 0.0,
                              ((float)*(undefined8 *)(lVar26 + 0x24) +
                              (float)*(undefined8 *)(lVar26 + 0x30)) * 0.5 + fVar59);
        fStack00000000000000c4 =
             fStack000000000000002c + 0.0 +
             (*(float *)(lVar26 + 0x20) + *(float *)(lVar26 + 0x2c)) * 0.5;
      }
    }
LAB_03554c4c:
    if (unaff_x19[0xe5] != 0) {
      uVar17 = FUN_03912334(unaff_x19[0xe5],0);
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)puVar6);
      }
      uVar19 = FUN_036d35a8(uVar17,0,0);
      lVar26 = FUN_0357f060();
      if (lVar26 != 0) {
        FUN_036df824(lVar26,0);
        *(float *)(unaff_x19 + 0xe2) = fVar59;
        if (unaff_x19[0xe5] != 0) {
          iVar11 = FUN_039117fc(unaff_x19[0xe5],0);
          if (unaff_x19[0xe5] != 0) {
            fVar68 = (float)FUN_03911954(unaff_x19[0xe5],0);
            uVar67 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
            FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
            if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
            }
            if (DAT_0412df1c == '\0') {
              FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
              DAT_0412df1c = '\x01';
            }
            puVar6 = OVRPlugin_Mesh_TypeInfo;
            lVar26 = *(long *)OVRPlugin_Mesh_TypeInfo;
            if (*(int *)(lVar26 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar26 = *(long *)puVar6;
            }
            puVar27 = *(undefined4 **)(lVar26 + 0xb8);
            uVar54 = (ulong)(uint)puVar27[1];
            uVar55 = (ulong)(uint)puVar27[2];
            uVar57 = (ulong)(uint)puVar27[3];
            FUN_035683a4(*puVar27,uVar54,uVar55,uVar57,&stack0x000017b0,0x4000ffff,0);
            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            lVar26 = *plVar42;
            if (lVar26 != 0) {
              uVar10 = *unaff_x20;
              if ((int)uVar10 < 1) {
                fStack00000000000000d4 = 0.0;
                iVar13 = 0;
                goto LAB_03556f00;
              }
              lVar26 = *(long *)(lVar26 + 0x38);
              fVar59 = ABS(fVar59);
              fVar45 = 1.0;
              if ((uVar19 & 1) == 0) {
                fVar45 = fVar59;
              }
              if (lVar26 != 0) {
                bVar9 = false;
                bVar8 = false;
                _iStack0000000000000128 = 0;
                bVar5 = false;
                fStack00000000000000d4 = 0.0;
                fStack0000000000000028 = 0.0;
                fStack0000000000000158 = 0.0;
                in_stack_00000068._4_4_ = 0;
                lVar29 = 0x2e0;
                fVar64 = 0.0;
                fVar50 = 0.0;
                fStack00000000000000c8 = fStack00000000000000d8;
                fStack0000000000000104 =
                     *(float *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
                fStack00000000000000d0 = fStack00000000000000dc;
                _bStack0000000000000070 = fStack00000000000000dc;
                fStack000000000000009c = fStack00000000000000dc;
                fStack00000000000000a0 = fStack00000000000000d8;
                fStack0000000000000100 = 0.0;
                in_stack_00000088._4_4_ = 0.0;
                fStack0000000000000040 = 0.0;
                fStack00000000000000a8 = 0.0;
                fStack0000000000000038 = 0.0;
                _bStack0000000000000074 = uStack00000000000000c0;
                fStack0000000000000078 = fStack00000000000000d8;
                fStack0000000000000098 = (float)uStack00000000000000c0;
                uVar12 = 1;
                uVar56 = 0;
                goto LAB_03554e78;
              }
            }
          }
        }
      }
    }
  }
  goto LAB_035574b8;
code_r0x0355094c:
  *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
  uVar19 = FUN_03586568();
  if (((uVar19 & 1) != 0) &&
     (in_stack_000017a8 = in_stack_0000178c, in_stack_000017dc = uVar10,
     *(int *)((long)unaff_x19 + 0x644) == 0)) goto LAB_03550bd0;
LAB_035509d4:
  if ((unaff_x19[0x6d] == 0) || (lVar26 = *(long *)(unaff_x19[0x6d] + 0x38), lVar26 == 0))
  goto LAB_035574b8;
  uVar12 = *unaff_x20;
  if (*(uint *)(lVar26 + 0x18) <= uVar12) goto LAB_035575f4;
  lVar44 = (long)(int)uVar12;
  cVar24 = *(char *)(lVar26 + lVar44 * unaff_x24 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
  lVar29 = unaff_x19[0x24];
  if ((uint)in_stack_000017c8 == uVar12) {
    uVar10 = (uint)((ulong)in_stack_000017c8 >> 0x20);
    *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
    if (uVar10 == 0x2026) {
      *(long *)(lVar26 + lVar44 * unaff_x24 + 0x30) = unaff_x19[0xca];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((unaff_x19[0x6d] == 0) || (lVar26 = *(long *)(unaff_x19[0x6d] + 0x38), lVar26 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      lVar26 = lVar26 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar26 + 0x2c) = 0;
      *(long *)(lVar26 + 0x38) = unaff_x19[0xcb];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((unaff_x19[0x6d] == 0) || (lVar26 = *(long *)(unaff_x19[0x6d] + 0x38), lVar26 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(long *)(lVar26 + (long)(int)*unaff_x20 * unaff_x24 + 0x50) = unaff_x19[0xcc];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
      goto LAB_035574b8;
      uVar12 = *unaff_x20;
      if (*(uint *)(lVar26 + 0x18) <= uVar12) goto LAB_035575f4;
      bVar5 = true;
      *(int *)(lVar26 + (long)(int)uVar12 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
      in_stack_000017c8 = CONCAT44(3,uVar12 + 1);
    }
    else if (uVar10 == 3) {
      if ((*unaff_x21 == 0) || (lVar20 = FUN_03568ac0(*unaff_x21,0), lVar20 == 0))
      goto LAB_035574b8;
      FUN_0219b634(lVar20,&stack0x00000c18,&stack0x000008a0,*(undefined8 *)OVRPlugin_Hand_TypeInfo);
      if (*(uint *)(lVar26 + 0x18) <= uVar12) goto LAB_035575f4;
      *(ulong *)(lVar26 + lVar44 * unaff_x24 + 0x30) = CONCAT44(in_stack_000008a4,in_stack_000008a0)
      ;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      uVar12 = *(uint *)((long)unaff_x19 + 0x494);
      bVar5 = true;
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
    }
    else {
      bVar5 = true;
    }
  }
  else {
    bVar5 = false;
  }
  iVar13 = (int)unaff_x24;
  if (((int)uVar12 < *(int *)((long)unaff_x19 + 0x324)) && (uVar10 != 3)) {
    if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar26 + 0x18) <= uVar12) goto LAB_035575f4;
    lVar26 = lVar26 + (long)(int)uVar12 * (long)iVar13;
    *(undefined1 *)(lVar26 + 0x194) = 0;
    *(undefined2 *)(lVar26 + 0x20) = 0x200b;
    *(undefined4 *)(lVar26 + 100) = 0;
    *unaff_x20 = uVar12 + 1;
    plVar42 = in_stack_00000170;
    in_stack_000017dc = uVar10;
    goto LAB_03550bd0;
  }
  iVar11 = *(int *)((long)unaff_x19 + 0x644);
  if (iVar11 == 0) {
    uVar12 = *(uint *)((long)unaff_x19 + 0x25c);
    if ((uVar12 >> 4 & 1) == 0) {
      if ((uVar12 >> 3 & 1) == 0) {
        fStack0000000000000158 = 1.0;
        if ((uVar12 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar19 = FUN_026b812c(uVar10,0);
          if ((uVar19 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar10 = FUN_026b8410(uVar10,0);
            uVar10 = uVar10 & 0xffff;
            fStack0000000000000158 = fStack0000000000000028;
          }
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar19 = FUN_026b8070(uVar10,0);
        fStack0000000000000158 = 1.0;
        if ((uVar19 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar10 = FUN_026b8594(uVar10,0);
          goto LAB_03550fdc;
        }
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar19 = FUN_026b812c(uVar10,0);
      fStack0000000000000158 = 1.0;
      if ((uVar19 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar10 = FUN_026b8410(uVar10,0);
LAB_03550fdc:
        fStack0000000000000158 = 1.0;
        uVar10 = uVar10 & 0xffff;
      }
    }
    iVar11 = *(int *)((long)unaff_x19 + 0x644);
    if (iVar11 != 0) goto LAB_03550c00;
LAB_03550fec:
    if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *in_stack_000000e0 = *(long *)(lVar26 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000e0);
    plVar42 = in_stack_00000170;
    in_stack_000017dc = uVar10;
    if (*in_stack_000000e0 == 0) goto LAB_03550bd0;
    if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *unaff_x21 = *(long *)(lVar26 + (long)(int)*unaff_x20 * unaff_x24 + 0x38);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *in_stack_00000160 = *(long *)(lVar26 + (long)(int)*unaff_x20 * unaff_x24 + 0x50);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
    goto LAB_035574b8;
    uVar56 = *unaff_x20;
    uVar12 = *(uint *)(lVar26 + 0x18);
    if (uVar12 <= uVar56) goto LAB_035575f4;
    *(undefined4 *)(unaff_x19 + 0x24) =
         *(undefined4 *)(lVar26 + (long)(int)uVar56 * unaff_x24 + 0x58);
    if (bVar5) {
      lVar29 = unaff_x19[0x8f];
      if (lVar29 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar29 + 0x18) <= in_stack_000017a8) goto LAB_035575f4;
      if ((*(int *)(lVar29 + (long)(int)in_stack_000017a8 * 0xc + 0x20) != 10) ||
         (uVar56 == *(uint *)(unaff_x19 + 0x93))) goto LAB_035510fc;
      if (uVar12 <= uVar56 - 1) goto LAB_035575f4;
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar68 = *(float *)(lVar26 + (long)(int)(uVar56 - 1) * (long)iVar13 + 0x60);
      iVar11 = FUN_03776950(*unaff_x21 + 0x50,0);
      lVar26 = *unaff_x21;
    }
    else {
LAB_035510fc:
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar68 = *(float *)(unaff_x19 + 0x3d);
      iVar11 = FUN_03776950(*unaff_x21 + 0x50,0);
      lVar26 = unaff_x19[0x20];
    }
    if (lVar26 == 0) goto LAB_035574b8;
    fVar64 = (float)FUN_03776960(lVar26 + 0x50,0);
    fVar50 = fStack0000000000000098;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar50 = 1.0;
    }
    fVar45 = 0.0;
    fVar47 = 0.0;
    if (!(bool)(bVar5 & uVar10 == 0x2026)) {
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar47 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar45 = (float)FUN_037769c0(*unaff_x21 + 0x50,0);
    }
    lVar26 = unaff_x19[0xc9];
    if ((lVar26 == 0) || (*(long *)(lVar26 + 0x20) == 0)) goto LAB_035574b8;
    fVar46 = *(float *)((long)unaff_x19 + 0x404);
    fVar48 = *(float *)(lVar26 + 0x2c);
    fVar59 = (float)FUN_03776ea8(*(long *)(lVar26 + 0x20),0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar65 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar51 = *(float *)((long)unaff_x19 + 0x404);
    fVar49 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
    lVar26 = unaff_x19[0x6d];
    if ((lVar26 == 0) || (lVar29 = *(long *)(lVar26 + 0x38), lVar29 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar29 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    lVar29 = lVar29 + (long)(int)*unaff_x20 * unaff_x24;
    *(undefined4 *)(lVar29 + 0x2c) = 0;
    fVar50 = ((fStack0000000000000158 * fVar68) / (float)iVar11) * fVar64 * fVar50;
    fVar59 = fVar50 * fVar46 * fVar48 * fVar59;
    *(float *)(lVar29 + 0x160) = fVar59;
    uVar12 = *(uint *)(unaff_x19 + 0x24);
    fVar49 = fVar50 * fVar65 * fVar51 * fVar49;
    if (uVar12 == 0) {
      fStack000000000000015c = *(float *)(unaff_x19 + 0xc3);
    }
    else {
      lVar29 = unaff_x19[0xe1];
      if (lVar29 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar29 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar29 = *(long *)(lVar29 + (long)(int)uVar12 * 8 + 0x20);
      if (lVar29 == 0) goto LAB_035574b8;
      fStack000000000000015c = *(float *)(lVar29 + 0x10c);
    }
LAB_035514b0:
    fVar68 = 0.0;
    if (uVar10 != 3 && uVar10 != 0xad) {
      fVar68 = fVar59;
    }
  }
  else {
    fStack0000000000000158 = 1.0;
    if (iVar11 == 0) goto LAB_03550fec;
LAB_03550c00:
    if (iVar11 == 1) {
      if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *in_stack_000000b8 = *(long *)(lVar26 + (long)(int)*unaff_x20 * unaff_x24 + 0x40);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(undefined4 *)((long)unaff_x19 + 0x6a4) =
           *(undefined4 *)(lVar26 + (long)(int)*unaff_x20 * unaff_x24 + 0x48);
      if ((unaff_x19[0xd3] == 0) ||
         (lVar26 = UnityEngine_Material__DisableKeyword(unaff_x19[0xd3],0), lVar26 == 0))
      goto LAB_035574b8;
      FUN_02215a88(lVar26,*(undefined4 *)((long)unaff_x19 + 0x6a4),&stack0x000008a0,
                   *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
      puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar26 = CONCAT44(in_stack_000008a4,in_stack_000008a0);
      plVar42 = in_stack_00000170;
      in_stack_000017dc = uVar10;
      if (lVar26 == 0) goto LAB_03550bd0;
      if (uVar10 == 0x3c) {
        uVar10 = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
      }
      else {
        lVar44 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar44 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar44 = *(long *)puVar6;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1bc) = *(undefined4 *)(*(long *)(lVar44 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x20] == 0) goto LAB_035574b8;
      fVar59 = *(float *)(unaff_x19 + 0x3d);
      memmove(&stack0x00001720,(void *)(unaff_x19[0x20] + 0x50),0x60);
      iVar11 = FUN_03776950(&stack0x00001720,0);
      if (*unaff_x21 == 0) goto LAB_035574b8;
      memmove(&stack0x00001720,(void *)(*unaff_x21 + 0x50),0x60);
      fVar45 = (float)FUN_03776960(&stack0x00001720,0);
      fVar68 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar68 = 1.0;
      }
      if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
      fVar68 = (fVar59 / (float)iVar11) * fVar45 * fVar68;
      iVar11 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
      fVar59 = *(float *)(unaff_x19 + 0x3d);
      if (iVar11 < 1) {
        if (*unaff_x21 == 0) goto LAB_035574b8;
        iVar11 = FUN_03776950(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar50 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
        fVar45 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar45 = 1.0;
        }
        if (unaff_x19[0x20] == 0) goto LAB_035574b8;
        fVar64 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
        if (*(long *)(lVar26 + 0x20) == 0) goto LAB_035574b8;
        FUN_03776e6c(&stack0x000008a0,*(long *)(lVar26 + 0x20),0);
        fVar46 = (float)FUN_03776c9c(&stack0x00001700,0);
        if (*(long *)(lVar26 + 0x20) == 0) goto LAB_035574b8;
        fVar65 = *(float *)(lVar26 + 0x2c);
        fVar48 = (float)FUN_03776ea8(*(long *)(lVar26 + 0x20),0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar47 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar51 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar62 = *(float *)((long)unaff_x19 + 0x404);
        fVar49 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
        if (unaff_x19[0x20] == 0) goto LAB_035574b8;
        fVar49 = fVar68 * fVar51 * fVar62 * fVar49;
        fVar45 = (fVar59 / (float)iVar11) * fVar50 * fVar45;
        fVar59 = fVar45 * (fVar64 / fVar46) * fVar65 * fVar48;
        fVar45 = fVar45 / fVar59;
        fVar47 = fVar45 * fVar47;
        fVar68 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
        fVar45 = fVar45 * fVar68;
      }
      else {
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        iVar11 = FUN_03776950(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        fVar45 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
        if (*(long *)(lVar26 + 0x20) == 0) goto LAB_035574b8;
        fVar64 = *(float *)(lVar26 + 0x2c);
        fVar50 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar50 = 1.0;
        }
        fVar46 = (float)FUN_03776ea8(*(long *)(lVar26 + 0x20),0);
        if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
        fVar47 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        fVar48 = (float)FUN_037769b0(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        fVar65 = *(float *)((long)unaff_x19 + 0x404);
        fVar49 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
        if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
        fVar49 = fVar68 * fVar48 * fVar65 * fVar49;
        fVar59 = (fVar59 / (float)iVar11) * fVar45 * fVar50 * fVar64 * fVar46;
        fVar45 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
      }
      *in_stack_000000e0 = lVar26;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000e0,lVar26);
      if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      lVar26 = lVar26 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar26 + 0x2c) = 1;
      *(float *)(lVar26 + 0x160) = fVar59;
      *(long *)(lVar26 + 0x40) = *in_stack_000000b8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(long *)(lVar26 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *unaff_x21;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar26 = *in_stack_00000170;
      if ((lVar26 == 0) || (lVar44 = *(long *)(lVar26 + 0x38), lVar44 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar44 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      fStack000000000000015c = 0.0;
      *(int *)(lVar44 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24];
      *(int *)(unaff_x19 + 0x24) = (int)lVar29;
      goto LAB_035514b0;
    }
    lVar26 = *in_stack_00000170;
    fVar49 = 0.0;
    fVar68 = fVar49;
    if (uVar10 != 3 && uVar10 != 0xad) {
      fVar68 = fVar59;
    }
    if (lVar26 == 0) goto LAB_035574b8;
    fVar47 = 0.0;
    fVar45 = 0.0;
  }
  lVar26 = *(long *)(lVar26 + 0x38);
  if (lVar26 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar26 = lVar26 + (long)(int)*unaff_x20 * unaff_x24;
  *(short *)(lVar26 + 0x20) = (short)uVar10;
  *(int *)(lVar26 + 0x60) = (int)unaff_x19[0x3d];
  *(undefined4 *)(lVar26 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
  if ((unaff_x19[0x6d] == 0) || (lVar26 = *(long *)(unaff_x19[0x6d] + 0x38), lVar26 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(int *)(lVar26 + (long)(int)*unaff_x20 * unaff_x24 + 0x168) = (int)unaff_x19[0x2b];
  if ((unaff_x19[0x6d] == 0) || (lVar26 = *(long *)(unaff_x19[0x6d] + 0x38), lVar26 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(undefined4 *)(lVar26 + (long)(int)*unaff_x20 * unaff_x24 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x15c);
  if ((unaff_x19[0x6d] == 0) || (lVar26 = *(long *)(unaff_x19[0x6d] + 0x38), lVar26 == 0))
  goto LAB_035574b8;
  uVar12 = *unaff_x20;
  FUN_0209a6e0(_fStack00000000000000c8,&stack0x000008a0,
               *(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
  if (*(uint *)(lVar26 + 0x18) <= uVar12) goto LAB_035575f4;
  lVar26 = lVar26 + (long)(int)uVar12 * unaff_x24;
  *(undefined4 *)(lVar26 + 0x18c) = in_stack_000008b0;
  *(undefined8 *)(lVar26 + 0x184) = in_stack_000008a8;
  *(ulong *)(lVar26 + 0x17c) = CONCAT44(in_stack_000008a4,in_stack_000008a0);
  if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(undefined4 *)(lVar26 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x25c);
  if ((unaff_x19[0xc9] == 0) || (lVar26 = *(long *)(unaff_x19[0xc9] + 0x20), lVar26 == 0))
  goto LAB_035574b8;
  FUN_03776e6c(&stack0x00000c18,lVar26,0);
  puVar6 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
  if ((int)uVar10 < 0x10000) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar12 = FUN_026b63d8(uVar10,0);
    uVar12 = uVar12 & 1;
  }
  else {
    uVar12 = 0;
  }
  fVar50 = *(float *)(unaff_x19 + 0x55);
  *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
    fStack000000000000012c = 0.0;
    fVar46 = 0.0;
    fVar64 = 0.0;
  }
  else {
    if (*in_stack_000000e0 == 0) goto LAB_035574b8;
    uVar25 = *unaff_x20;
    uVar56 = *(uint *)(*in_stack_000000e0 + 0x28);
    if ((int)uVar25 < (int)in_stack_00000088._4_4_) {
      if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= uVar25 + 1) goto LAB_035575f4;
      lVar26 = *(long *)(lVar26 + (long)(int)(uVar25 + 1) * (long)iVar13 + 0x30);
      if ((((lVar26 == 0) || (*unaff_x21 == 0)) ||
          (lVar29 = *(long *)(*unaff_x21 + 0x128), lVar29 == 0)) ||
         (lVar29 = *(long *)(lVar29 + 0x18), lVar29 == 0)) goto LAB_035574b8;
      in_stack_000008a0 = uVar56 | *(int *)(lVar26 + 0x28) << 0x10;
      uVar19 = FUN_0219f8b8(lVar29,&stack0x000008a0,&stack0x000016f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      uVar67 = 0;
      if ((uVar19 & 1) == 0) {
        fStack000000000000012c = 0.0;
        fVar46 = 0.0;
        fVar64 = 0.0;
      }
      else {
        if (in_stack_000016f8 == 0) goto LAB_035574b8;
        fStack000000000000012c = *(float *)(in_stack_000016f8 + 0x1c);
        uVar67 = *(undefined4 *)(in_stack_000016f8 + 0x20);
        fVar64 = *(float *)(in_stack_000016f8 + 0x14);
        fVar46 = *(float *)(in_stack_000016f8 + 0x18);
        if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
          fVar50 = 0.0;
        }
      }
      uVar25 = *unaff_x20;
    }
    else {
      uVar67 = 0;
      fStack000000000000012c = 0.0;
      fVar46 = 0.0;
      fVar64 = 0.0;
    }
    if (0 < (int)uVar25) {
      if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= uVar25 - 1) goto LAB_035575f4;
      lVar26 = *(long *)(lVar26 + (ulong)(uVar25 - 1) * (unaff_x24 & 0xffffffff) + 0x30);
      if (((lVar26 == 0) || (*unaff_x21 == 0)) ||
         ((lVar29 = *(long *)(*unaff_x21 + 0x128), lVar29 == 0 ||
          (lVar29 = *(long *)(lVar29 + 0x18), lVar29 == 0)))) goto LAB_035574b8;
      in_stack_000008a0 = *(uint *)(lVar26 + 0x28) | uVar56 << 0x10;
      uVar19 = FUN_0219f8b8(lVar29,&stack0x000008a0,&stack0x000016f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      if ((uVar19 & 1) != 0) {
        if ((in_stack_000016f8 == 0) ||
           (fVar64 = (float)FUN_03571cb4(fVar64,fVar46,fStack000000000000012c,uVar67,
                                         *(undefined4 *)(in_stack_000016f8 + 0x28),
                                         *(undefined4 *)(in_stack_000016f8 + 0x2c),
                                         *(undefined4 *)(in_stack_000016f8 + 0x30),
                                         *(undefined4 *)(in_stack_000016f8 + 0x34),0),
           in_stack_000016f8 == 0)) goto LAB_035574b8;
        if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
          fVar50 = 0.0;
        }
      }
    }
    *(float *)((long)unaff_x19 + 0x2fc) = fStack000000000000012c;
  }
  if ((char)unaff_x19[0x1e] != '\0') {
    fVar65 = *(float *)(unaff_x19 + 200);
    fVar48 = (float)FUN_03776cb4(&stack0x00001790,0);
    fVar65 = fVar65 - fVar68 * fVar48 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    *(float *)(unaff_x19 + 200) = fVar65;
    if ((uVar10 == 0x200b) || (uVar12 != 0)) {
      *(float *)(unaff_x19 + 200) =
           fVar65 - fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
    }
  }
  fVar65 = *(float *)(unaff_x19 + 0x56);
  fVar48 = 0.0;
  if (fVar65 != 0.0) {
    fVar48 = (float)FUN_03776c94(&stack0x00001790,0);
    fVar51 = (float)FUN_03776ca4(&stack0x00001790,0);
    fVar48 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (fVar65 * 0.5 - fVar68 * (fVar48 * 0.5 + fVar51));
    *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + fVar48;
  }
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar24 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
    lVar26 = *in_stack_00000160;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar19 = FUN_036cee6c(lVar26,0,0);
    fVar51 = 0.0;
    if ((uVar19 & 1) != 0) {
      lVar26 = *in_stack_00000160;
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar26 == 0) goto LAB_035574b8;
      uVar19 = FUN_03699d3c(lVar26,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x54),0);
      fVar51 = 0.0;
      if ((uVar19 & 1) != 0) {
        lVar26 = *in_stack_00000160;
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar26 == 0) goto LAB_035574b8;
        fVar65 = (float)FUN_0369e060(lVar26,*(undefined4 *)
                                             (*(long *)(*(long *)puVar6 + 0xb8) + 0x54),0);
        if ((*unaff_x21 == 0) || (*in_stack_00000160 == 0)) goto LAB_035574b8;
        fVar62 = *(float *)(*unaff_x21 + 0x1b0);
        fVar51 = (float)FUN_0369e060(*in_stack_00000160,
                                     *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xcc),0);
        fVar51 = fVar51 * fVar65 * fVar62 * 0.25;
        if (fVar65 < fStack000000000000015c + fVar51) {
          fStack000000000000015c = fVar65 - fVar51;
        }
      }
    }
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fStack00000000000000d0 = *(float *)(*unaff_x21 + 0x1b4);
  }
  else {
    lVar26 = *in_stack_00000160;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar19 = FUN_036cee6c(lVar26,0,0);
    fStack00000000000000d0 = 0.0;
    if ((uVar19 & 1) != 0) {
      lVar26 = *in_stack_00000160;
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar26 == 0) goto LAB_035574b8;
      uVar19 = FUN_03699d3c(lVar26,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x54),0);
      if ((uVar19 & 1) != 0) {
        lVar26 = *in_stack_00000160;
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar26 == 0) goto LAB_035574b8;
        uVar19 = FUN_03699d3c(lVar26,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xcc),0);
        if ((uVar19 & 1) != 0) {
          lVar26 = *in_stack_00000160;
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (lVar26 == 0) goto LAB_035574b8;
          fVar65 = (float)FUN_0369e060(lVar26,*(undefined4 *)
                                               (*(long *)(*(long *)puVar6 + 0xb8) + 0x54),0);
          if ((*unaff_x21 == 0) || (*in_stack_00000160 == 0)) goto LAB_035574b8;
          fVar62 = *(float *)(*unaff_x21 + 0x1a8);
          fVar51 = (float)FUN_0369e060(*in_stack_00000160,
                                       *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xcc),0);
          fVar51 = fVar51 * fVar65 * fVar62 * 0.25;
          if (fVar65 < fStack000000000000015c + fVar51) {
            fStack000000000000015c = fVar65 - fVar51;
          }
          goto FUN_03551b84;
        }
      }
    }
    fVar51 = 0.0;
  }
FUN_03551b84:
  fVar65 = *(float *)(unaff_x19 + 200);
  fVar62 = (float)FUN_03776ca4(&stack0x00001790,0);
  fVar65 = fVar65 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar68 * (fVar64 + ((fVar62 - fStack000000000000015c) - fVar51));
  fVar64 = (float)FUN_03776cac(&stack0x00001790,0);
  fVar69 = *(float *)((long)unaff_x19 + 0x61c) +
           ((fVar49 + fVar68 * (fVar46 + fStack000000000000015c + fVar64)) -
           *(float *)(unaff_x19 + 0x9b));
  fVar64 = (float)FUN_03776c9c(&stack0x00001790,0);
  fVar64 = fVar69 - fVar68 * (fStack000000000000015c + fStack000000000000015c + fVar64);
  fVar46 = (float)FUN_03776c94(&stack0x00001790,0);
  fVar62 = fVar65 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar68 * (fVar51 + fVar51 +
                             fStack000000000000015c + fStack000000000000015c + fVar46);
  fStack0000000000000104 = fVar65;
  fVar46 = fVar62;
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar24 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
    fVar61 = (float)(int)unaff_x19[0xbe] * fStack000000000000005c;
    fVar46 = (float)FUN_03776cac(&stack0x00001790,0);
    fVar60 = fVar61 * fVar68 * (fVar51 + fStack000000000000015c + fVar46);
    fVar46 = (float)FUN_03776cac(&stack0x00001790,0);
    fVar58 = (float)FUN_03776c9c(&stack0x00001790,0);
    fVar69 = fVar69 + 0.0;
    fVar64 = fVar64 + 0.0;
    fVar61 = fVar61 * fVar68 * (((fVar46 - fVar58) - fStack000000000000015c) - fVar51);
    fVar58 = fVar65 + fVar60;
    fVar46 = fVar62 + fVar61;
    fVar52 = (fVar60 - fVar61) * 0.5;
    fVar65 = (fVar65 + fVar61) - fVar52;
    fVar62 = (fVar62 + fVar60) - fVar52;
    fStack0000000000000104 = fVar58 - fVar52;
    fVar46 = fVar46 - fVar52;
  }
  if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
    fStack0000000000000114 = 0.0;
    fVar52 = 0.0;
    fVar60 = 0.0;
    fStack0000000000000100 = 0.0;
    fVar61 = fVar64;
    fVar58 = fVar69;
  }
  else {
    thunk_FUN_036bc400(_fStack0000000000000078,0);
    fVar63 = (fVar62 + fVar65) * 0.5;
    fVar66 = (fVar64 + fVar69) * 0.5;
    fVar69 = fVar69 - fVar66;
    fStack0000000000000100 = 0.0;
    fVar58 = fVar69;
    fStack0000000000000104 =
         (float)FUN_036bdd2c(fStack0000000000000104 - fVar63,_fStack0000000000000078,0);
    fStack0000000000000104 = fVar63 + fStack0000000000000104;
    fStack0000000000000100 = fStack0000000000000100 + 0.0;
    fVar61 = fVar64 - fVar66;
    fStack0000000000000114 = 0.0;
    fVar64 = fVar61;
    fVar65 = (float)FUN_036bdd2c(fVar65 - fVar63,_fStack0000000000000078,0);
    fVar65 = fVar63 + fVar65;
    fStack0000000000000114 = fStack0000000000000114 + 0.0;
    fVar64 = fVar66 + fVar64;
    fVar60 = 0.0;
    fVar62 = (float)FUN_036bdd2c(fVar62 - fVar63,_fStack0000000000000078,0);
    fVar62 = fVar63 + fVar62;
    fVar69 = fVar66 + fVar69;
    fVar60 = fVar60 + 0.0;
    fVar52 = 0.0;
    fVar46 = (float)FUN_036bdd2c(fVar46 - fVar63,_fStack0000000000000078,0);
    fVar46 = fVar63 + fVar46;
    fVar52 = fVar52 + 0.0;
    fVar61 = fVar66 + fVar61;
    fVar58 = fVar66 + fVar58;
  }
  if (*in_stack_00000170 == 0) goto LAB_035574b8;
  lVar26 = *(long *)(*in_stack_00000170 + 0x38);
  unaff_d13 = (ulong)(uint)fVar68;
  if (lVar26 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar26 = lVar26 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar26 + 0x11c) = fVar65;
  *(float *)(lVar26 + 0x120) = fVar64;
  *(float *)(lVar26 + 0x124) = fStack0000000000000114;
  if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar26 = lVar26 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar26 + 0x114) = fVar58;
  *(float *)(lVar26 + 0x110) = fStack0000000000000104;
  *(float *)(lVar26 + 0x118) = fStack0000000000000100;
  if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar26 = lVar26 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar26 + 0x128) = fVar62;
  *(float *)(lVar26 + 300) = fVar69;
  *(float *)(lVar26 + 0x130) = fVar60;
  if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar26 = lVar26 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar26 + 0x134) = fVar46;
  *(float *)(lVar26 + 0x138) = fVar61;
  *(float *)(lVar26 + 0x13c) = fVar52;
  if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
  goto LAB_035574b8;
  uVar56 = *unaff_x20;
  lVar29 = (long)(int)uVar56;
  if (*(uint *)(lVar26 + 0x18) <= uVar56) goto LAB_035575f4;
  lVar44 = lVar26 + lVar29 * unaff_x24;
  *(int *)(lVar44 + 0x140) = (int)unaff_x19[200];
  fVar69 = *(float *)(unaff_x19 + 0x9b);
  param_2 = (ulong)(uint)fVar69;
  fVar46 = *(float *)((long)unaff_x19 + 0x61c);
  *(float *)(lVar44 + 0x15c) = (fVar62 - fVar65) / (fVar58 - fVar64);
  *(float *)(lVar44 + 0x14c) = (fVar49 - fVar69) + fVar46;
  fVar47 = fVar47 * fVar68;
  if (*(int *)((long)unaff_x19 + 0x644) == 0) {
    fVar47 = fVar47 / fStack0000000000000158;
    fVar45 = (fVar45 * fVar68) / fStack0000000000000158;
  }
  else {
    fVar45 = fVar45 * fVar68;
  }
  uVar25 = *(uint *)(unaff_x19 + 0x93);
  if ((uVar12 == 0) || (uVar56 == uVar25)) {
    fVar45 = fVar46 + fVar45;
    fVar47 = fVar46 + fVar47;
    fVar65 = fVar45;
    fVar64 = fVar47;
    if (fVar46 != 0.0) {
      fVar64 = (fVar47 - fVar46) / *(float *)((long)unaff_x19 + 0x404);
      fVar65 = (fVar45 - fVar46) / *(float *)((long)unaff_x19 + 0x404);
      if (fVar64 <= fVar47) {
        fVar64 = fVar47;
      }
      if (fVar45 <= fVar65) {
        fVar65 = fVar45;
      }
    }
    lVar26 = lVar26 + lVar29 * unaff_x24;
    fVar46 = fVar64;
    if (fVar64 <= *(float *)(unaff_x19 + 0x99)) {
      fVar46 = *(float *)(unaff_x19 + 0x99);
    }
    fVar49 = fVar65;
    if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar65) {
      fVar49 = *(float *)((long)unaff_x19 + 0x4cc);
    }
    *(float *)((long)unaff_x19 + 0x4cc) = fVar49;
    *(float *)(unaff_x19 + 0x99) = fVar46;
    *(float *)(lVar26 + 0x154) = fVar64;
    *(float *)(lVar26 + 0x158) = fVar65;
    *(float *)(lVar26 + 0x148) = fVar47 - fVar69;
    *(float *)(unaff_x19 + 0x98) = fVar47 - fVar69;
    *(float *)(lVar26 + 0x150) = fVar45 - fVar69;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar45 - fVar69;
    if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x97) = fVar46;
      if (unaff_x19[0x20] == 0) goto LAB_035574b8;
      fVar45 = *(float *)((long)unaff_x19 + 0x4bc);
      fVar64 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
      fStack0000000000000158 = (fVar68 * fVar64) / fStack0000000000000158;
      param_2 = (ulong)*(uint *)(unaff_x19 + 0x9b);
      if (fVar45 <= fStack0000000000000158) {
        fVar45 = fStack0000000000000158;
      }
      *(float *)((long)unaff_x19 + 0x4bc) = fVar45;
    }
    if ((float)param_2 == 0.0) {
      fVar45 = *(float *)(in_stack_00000080 + 0x208);
      if (*(float *)(in_stack_00000080 + 0x208) <= fVar47) {
        fVar45 = fVar47;
      }
      *(float *)(in_stack_00000080 + 0x208) = fVar45;
    }
  }
  else {
    fVar45 = *(float *)(unaff_x19 + 0x99);
    lVar26 = lVar26 + lVar29 * unaff_x24;
    *(float *)(lVar26 + 0x154) = fVar45;
    fVar64 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar45 = fVar45 - fVar69;
    *(float *)(lVar26 + 0x148) = fVar45;
    *(float *)(lVar26 + 0x158) = fVar64;
    *(float *)(unaff_x19 + 0x98) = fVar45;
    fVar64 = fVar64 - fVar69;
    *(float *)(lVar26 + 0x150) = fVar64;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar64;
  }
  lVar26 = *in_stack_00000170;
  if ((lVar26 == 0) || (lVar29 = *(long *)(lVar26 + 0x38), lVar29 == 0)) goto LAB_035574b8;
  uVar14 = *unaff_x20;
  if (*(uint *)(lVar29 + 0x18) <= uVar14) goto LAB_035575f4;
  lVar29 = lVar29 + (long)(int)uVar14 * unaff_x24;
  *(undefined1 *)(lVar29 + 0x194) = 0;
  uVar32 = *(uint *)(unaff_x19 + 0x4f);
  in_stack_000017dc = uVar10;
  if ((uVar10 == 9) ||
     (((((uVar12 == 0 && (uVar10 != 3)) && (uVar10 != 0x200b)) && (uVar10 != 0xad)) ||
      (((uVar10 == 0xad & (bStack0000000000000074 ^ 0xff)) != 0 ||
       (*(int *)((long)unaff_x19 + 0x644) == 1)))))) {
    *(undefined1 *)(lVar29 + 0x194) = 1;
    pfVar30 = _fStack00000000000000a0;
    pfVar33 = _fStack00000000000000a8;
    if (bVar5) {
      lVar26 = *(long *)(lVar26 + 0x50);
      if (lVar26 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      pfVar33 = (float *)(lVar26 + 0x60);
      pfVar30 = (float *)(lVar26 + 100);
    }
    fVar64 = *pfVar33;
    fVar46 = *pfVar30;
    fVar45 = *(float *)(unaff_x19 + 0x6c);
    fVar65 = *(float *)(unaff_x19 + 200);
    in_stack_000000f8._4_4_ = (fStack000000000000009c - fVar64) - fVar46;
    bVar8 = true;
    if ((fVar45 <= in_stack_000000f8._4_4_) && (bVar8 = false, !NAN(fVar45))) {
      bVar8 = fVar45 == -1.0;
    }
    if (!bVar8) {
      in_stack_000000f8._4_4_ = fVar45;
    }
    fVar45 = 0.0;
    if ((char)unaff_x19[0x1e] == '\0') {
      fVar45 = (float)FUN_03776cb4(&stack0x00001790,0);
      param_2 = (ulong)*(uint *)(unaff_x19 + 0x9b);
    }
    fVar47 = *(float *)((long)unaff_x19 + 0x2d4);
    fVar49 = *(float *)((long)unaff_x19 + 0x4cc);
    if (uVar10 != 0xad) {
      fVar59 = fVar68;
    }
    fVar69 = (float)param_2;
    fVar62 = 0.0;
    if ((0.0 < fVar69) && (fVar62 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar62 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    uVar14 = *unaff_x20;
    fVar62 = (*(float *)(unaff_x19 + 0x97) - (fVar49 - fVar69)) + fVar62;
    if (fStack00000000000000c4 < fVar62) {
      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
        *(uint *)((long)unaff_x19 + 0x2e4) = uVar14;
      }
      puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      uVar17 = DAT_00d37868;
      if ((char)unaff_x19[0x47] != '\0') {
        fVar58 = *(float *)(unaff_x19 + 0x59);
        if (((fVar58 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar69)) &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar59 = *(float *)((long)unaff_x19 + 700) +
                   ((in_stack_00000018._4_4_ - fVar62) / (float)(int)unaff_x19[0x95]) /
                   fStack0000000000000058;
          if (fVar59 <= fVar58) {
            fVar59 = fVar58;
          }
          goto LAB_03554b48;
        }
        fVar69 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar62 = *(float *)(unaff_x19 + 0x4a);
        param_2 = (ulong)(uint)fVar62;
        if ((fVar62 < fVar69) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar59 = (fVar69 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar59 <= DAT_00d38b84) {
            fVar59 = DAT_00d38b84;
          }
          fVar68 = (fVar69 - fVar59) * 20.0 + 0.5;
          *(float *)((long)unaff_x19 + 0x23c) = fVar69;
          fVar59 = DAT_00d38e60;
          if (fVar68 != INFINITY) {
            fVar59 = (float)(int)fVar68 / 20.0;
          }
          if (fVar59 <= fVar62) {
            fVar59 = fVar62;
          }
          goto LAB_03554658;
        }
      }
      switch((int)unaff_x19[0x5c]) {
      case 1:
        lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar26 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar26 = *(long *)puVar6;
        }
        lVar29 = *(long *)(lVar26 + 0xb8);
        lVar26 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
          lVar26 = FUN_01a46ff8(lVar26);
        }
        piVar21 = (int *)thunk_FUN_01a59484(lVar29 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar26 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar21 == 0) goto LAB_03554580;
        lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar26 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar26 = *(long *)puVar6;
        }
        FUN_0209b778(*(long *)(lVar26 + 0xb8) + 0x11f0,&stack0x000008a0,
                     *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
        memcpy(&stack0x00001380,&stack0x000008a0,0x378);
LAB_035529dc:
        iVar13 = FUN_0358c15c();
        goto LAB_035529e8;
      default:
        goto UnityEngine_AnimationClip__set_wrapMode;
      case 3:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
LAB_03552550:
        in_stack_000017a8 = FUN_0358c15c();
        break;
      case 5:
        if ((uVar14 == 0) || ((int)in_stack_000017a8 < 0)) {
          *unaff_x20 = 0;
          plVar42 = in_stack_00000170;
          in_stack_000017a8 = 0xffffffff;
          in_stack_000017c8 = uVar17;
          goto LAB_03550bd0;
        }
        fVar59 = *(float *)(unaff_x19 + 0x99);
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        if (fVar59 - fVar49 <= fStack00000000000000c4) {
          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
          *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
          param_2 = *(ulong *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          lVar26 = NEON_rev64(param_2,4);
          unaff_x19[0x99] = lVar26;
          *(undefined4 *)(unaff_x19 + 0x9b) = 0;
          *(undefined8 *)(in_stack_00000080 + 0x208) = 0;
          *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
          *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
          plVar42 = in_stack_00000170;
          goto LAB_03550bd0;
        }
        break;
      case 6:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        lVar26 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar19 = FUN_036cee6c(lVar26,0,0);
        if ((uVar19 & 1) != 0) {
          plVar42 = (long *)unaff_x19[0x5d];
          uVar17 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar42 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar42 + 0x528))(plVar42,uVar17,*(undefined8 *)(*plVar42 + 0x530));
          lVar26 = unaff_x19[0x5d];
          if (lVar26 == 0) goto LAB_035574b8;
          *(int *)(lVar26 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar26,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar42 = (long *)unaff_x19[0x5d];
          if (plVar42 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar42 + 0x7a8))(plVar42,0,0,*(undefined8 *)(*plVar42 + 0x7b0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
      }
      goto UnityEngine_AnimationClip__get_hasMotionCurves;
    }
UnityEngine_AnimationClip__set_wrapMode:
    puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    fVar45 = ABS(fVar65) + fVar45 * (1.0 - fVar47) * fVar59;
    fVar59 = 1.0;
    if ((uVar32 & 0x18) != 0) {
      fVar59 = DAT_00d38acc;
    }
    fVar65 = fVar59 * in_stack_000000f8._4_4_;
    if (fVar65 < fVar45) {
      param_2 = (ulong)(uint)fVar51;
      if (((char)unaff_x19[0x5b] != '\0') && (uVar14 != *(uint *)(unaff_x19 + 0x93))) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
          lVar26 = *in_stack_00000170;
          if ((lVar26 == 0) || (lVar29 = *(long *)(lVar26 + 0x38), lVar29 == 0)) goto LAB_035574b8;
          if (*(uint *)(lVar29 + 0x18) <= *unaff_x20) goto LAB_035575f4;
          fVar65 = *(float *)(unaff_x19 + 0x9b);
          fVar47 = 0.0;
          if ((0.0 < fVar65) && (fVar47 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
            fVar47 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
          }
          fVar47 = fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57) +
                   *(float *)(lVar29 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
                   (fVar47 - *(float *)((long)unaff_x19 + 0x4cc)) +
                   fStack0000000000000058 *
                   (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700));
        }
        else {
          lVar26 = unaff_x19[0x6d];
          *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
          if (lVar26 == 0) goto LAB_035574b8;
          fVar65 = *(float *)(unaff_x19 + 0x9b);
          fVar47 = *(float *)(unaff_x19 + 0x58) +
                   fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57);
        }
        puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar26 = *(long *)(lVar26 + 0x38);
        if (lVar26 == 0) goto LAB_035574b8;
        uVar34 = *(uint *)((long)unaff_x19 + 0x494);
        if ((*(uint *)(lVar26 + 0x18) <= uVar34) ||
           (uVar39 = uVar34 - 1, *(uint *)(lVar26 + 0x18) <= uVar39)) goto LAB_035575f4;
        param_2 = (ulong)(uint)(fVar47 + *(float *)(unaff_x19 + 0x97));
        fVar49 = (fVar47 + *(float *)(unaff_x19 + 0x97) + fVar65) -
                 *(float *)(lVar26 + (long)(int)uVar34 * unaff_x24 + 0x158);
        if (((bStack0000000000000074 & 1) == 0 &&
             *(short *)(lVar26 + (long)(int)uVar39 * (long)iVar13 + 0x20) == 0xad) &&
           ((fVar49 < fStack00000000000000c4 || ((int)unaff_x19[0x5c] == 0)))) {
          bStack0000000000000074 = 0;
          *unaff_x20 = uVar39;
          plVar42 = in_stack_00000170;
          in_stack_000017a8 = in_stack_000017a8 - 1;
          in_stack_000017c8 = CONCAT44(0x2d,uVar39);
          goto LAB_03550bd0;
        }
        if (*(short *)(lVar26 + (long)(int)uVar34 * unaff_x24 + 0x20) == 0xad) {
          bStack0000000000000074 = 1;
          plVar42 = in_stack_00000170;
          goto LAB_03550bd0;
        }
        if ((bStack0000000000000070 & *(byte *)(unaff_x19 + 0x47) & 1) != 0) {
          fVar47 = *(float *)((long)unaff_x19 + 0x2d4);
          fVar65 = *(float *)(unaff_x19 + 0x5a) / 100.0;
          if ((fVar65 <= fVar47) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
            fVar47 = *(float *)((long)unaff_x19 + 0x1e4);
            param_2 = (ulong)(uint)fVar47;
            fVar65 = *(float *)(unaff_x19 + 0x4a);
            if ((fVar47 <= fVar65) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)))
            goto LAB_03552d44;
LAB_03557594:
            fVar59 = (fVar47 - *(float *)(unaff_x19 + 0x48)) * 0.5;
            if (fVar59 <= DAT_00d38b84) {
              fVar59 = DAT_00d38b84;
            }
            *(float *)((long)unaff_x19 + 0x23c) = fVar47;
            fVar47 = fVar47 - fVar59;
LAB_03557524:
            fVar68 = fVar47 * 20.0 + 0.5;
            fVar59 = DAT_00d38e60;
            if (fVar68 != INFINITY) {
              fVar59 = (float)(int)fVar68 / 20.0;
            }
            if (fVar59 <= fVar65) {
              fVar59 = fVar65;
            }
LAB_03554658:
            *(float *)((long)unaff_x19 + 0x1e4) = fVar59;
            return;
          }
LAB_03557558:
          fVar68 = fVar45;
          if (0.0 < fVar47) {
            fVar68 = fVar45 / (1.0 - fVar47);
          }
          fVar47 = fVar47 + (fVar45 - fVar59 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar68;
LAB_035574e8:
          if (fVar65 <= fVar47) {
            fVar47 = fVar65;
          }
          *(float *)((long)unaff_x19 + 0x2d4) = fVar47;
          return;
        }
LAB_03552d44:
        lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar26 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar26 = *(long *)puVar6;
        }
        iVar11 = *(int *)(*(long *)(lVar26 + 0xb8) + 0xe78);
        if (((iVar11 != iStack0000000000000034) && (iVar11 != -1)) &&
           (((bStack0000000000000070 ^ 1) & 1) == 0)) {
          if (*(int *)(lVar26 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          in_stack_000017a8 = FUN_0358c15c();
          if ((unaff_x19[0x6d] == 0) || (lVar26 = *(long *)(unaff_x19[0x6d] + 0x38), lVar26 == 0))
          goto LAB_035574b8;
          uVar34 = *unaff_x20 - 1;
          if (*(uint *)(lVar26 + 0x18) <= uVar34) goto LAB_035575f4;
          iStack0000000000000034 = iVar11;
          if (*(short *)(lVar26 + (long)(int)uVar34 * (long)iVar13 + 0x20) == 0xad) {
            bStack0000000000000074 = 0;
            *unaff_x20 = uVar34;
            plVar42 = in_stack_00000170;
            in_stack_000017a8 = in_stack_000017a8 - 1;
            in_stack_000017c8 = CONCAT44(0x2d,uVar34);
            goto LAB_03550bd0;
          }
        }
        if (fVar49 <= fStack00000000000000c4) {
switchD_03552ef4_caseD_0:
          param_2 = unaff_d13;
          FUN_0358cbd4(fStack0000000000000058,unaff_d13,fStack00000000000000d4,
                       *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,fVar50,
                       in_stack_000000f8._4_4_,in_stack_00000050._4_4_);
LAB_03552f38:
          bStack0000000000000070 = 1;
          bStack0000000000000074 = 0;
          in_stack_00000068._4_4_ = 1;
          plVar42 = in_stack_00000170;
          goto LAB_03550bd0;
        }
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(undefined4 *)((long)unaff_x19 + 0x2e4) = *(undefined4 *)((long)unaff_x19 + 0x494);
        }
        fVar65 = fStack00000000000000c4;
        if ((char)unaff_x19[0x47] != '\0') {
          fVar65 = *(float *)(unaff_x19 + 0x59);
          if ((fVar65 < *(float *)((long)unaff_x19 + 700)) &&
             (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
            fVar59 = *(float *)((long)unaff_x19 + 700) +
                     ((in_stack_00000018._4_4_ - fVar49) / (float)((int)unaff_x19[0x95] + 1)) /
                     fStack0000000000000058;
            if (fVar59 <= fVar65) {
              fVar59 = fVar65;
            }
LAB_03554b48:
            *(float *)((long)unaff_x19 + 700) = fVar59;
            return;
          }
          fVar47 = *(float *)((long)unaff_x19 + 0x2d4);
          fVar65 = *(float *)(unaff_x19 + 0x5a) / 100.0;
          if ((fVar47 < fVar65) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
          goto LAB_03557558;
          fVar47 = *(float *)((long)unaff_x19 + 0x1e4);
          param_2 = (ulong)(uint)fVar47;
          fVar65 = *(float *)(unaff_x19 + 0x4a);
          if ((fVar65 < fVar47) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
          goto LAB_03557594;
        }
        switch((int)unaff_x19[0x5c]) {
        case 0:
        case 2:
        case 4:
          goto switchD_03552ef4_caseD_0;
        case 1:
          lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar26 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          }
          lVar29 = *(long *)(lVar26 + 0xb8);
          lVar26 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
          if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
            lVar26 = FUN_01a46ff8(lVar26);
          }
          piVar21 = (int *)thunk_FUN_01a59484(lVar29 + 0x11f0,
                                              *(long *)(*(long *)(*(long *)(lVar26 + 0xc0) + 8) +
                                                       0x80) + 0xa0);
          if (*piVar21 == 0) {
            bStack0000000000000074 = 0;
LAB_03554580:
            in_stack_000017c8 = DAT_00d37868;
            unaff_x20[0] = 0;
            unaff_x20[1] = 0;
            plVar42 = in_stack_00000170;
            in_stack_000017a8 = 0xffffffff;
            goto LAB_03550bd0;
          }
          lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar26 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          }
          FUN_0209b778(*(long *)(lVar26 + 0xb8) + 0x11f0,&stack0x000008a0,
                       *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
          memcpy(&stack0x00001008,&stack0x000008a0,0x378);
          iVar13 = FUN_0358c15c();
          bStack0000000000000074 = 0;
LAB_035529e8:
          iVar11 = *(int *)((long)unaff_x19 + 0x494) + -1;
          *(int *)((long)unaff_x19 + 0x494) = iVar11;
          in_stack_00000168._4_4_ = in_stack_00000168._4_4_ + 1;
          plVar42 = in_stack_00000170;
          in_stack_000017a8 = iVar13 - 1;
          in_stack_000017c8 = CONCAT44(0x2026,iVar11);
          goto LAB_03550bd0;
        case 3:
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          in_stack_000017a8 = FUN_0358c15c();
          bStack0000000000000074 = 0;
UnityEngine_AnimationClip__get_hasMotionCurves:
          plVar42 = in_stack_00000170;
          in_stack_000017c8 = CONCAT44(3,uVar14);
          goto LAB_03550bd0;
        case 5:
          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
          param_2 = unaff_d13;
          FUN_0358cbd4(fStack0000000000000058,unaff_d13,fStack00000000000000d4,
                       *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,fVar50,
                       in_stack_000000f8._4_4_,in_stack_00000050._4_4_);
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          *(undefined4 *)(unaff_x19 + 0x9b) = 0;
          *(undefined8 *)(in_stack_00000080 + 0x208) = 0;
          *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
          goto LAB_03552f38;
        case 6:
          lVar26 = unaff_x19[0x5d];
          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar19 = FUN_036cee6c(lVar26,0,0);
          if ((uVar19 & 1) != 0) {
            plVar42 = (long *)unaff_x19[0x5d];
            uVar17 = (**(code **)(*unaff_x19 + 0x518))();
            if (plVar42 == (long *)0x0) goto LAB_035574b8;
            (**(code **)(*plVar42 + 0x528))(plVar42,uVar17,*(undefined8 *)(*plVar42 + 0x530));
            lVar26 = unaff_x19[0x5d];
            if (lVar26 == 0) goto LAB_035574b8;
            *(int *)(lVar26 + 0x400) = (int)unaff_x19[0x80];
            FUN_0357ee30(lVar26,*(undefined4 *)((long)unaff_x19 + 0x494),0);
            plVar42 = (long *)unaff_x19[0x5d];
            if (plVar42 == (long *)0x0) goto LAB_035574b8;
            (**(code **)(*plVar42 + 0x7a8))(plVar42,0,0,*(undefined8 *)(*plVar42 + 0x7b0));
            *(undefined1 *)(unaff_x19 + 0x5f) = 1;
          }
          bStack0000000000000074 = 0;
LAB_03552b00:
          plVar42 = in_stack_00000170;
          in_stack_000017c8 = CONCAT44(3,*unaff_x20);
          goto LAB_03550bd0;
        default:
          bStack0000000000000074 = 0;
          goto LAB_03552f54;
        }
      }
      if (((char)unaff_x19[0x47] != '\0') &&
         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        fVar65 = *(float *)(unaff_x19 + 0x5a) / 100.0;
        if (fVar47 < fVar65) {
          fVar68 = fVar45 / (1.0 - fVar47);
          if (fVar47 <= 0.0) {
            fVar68 = fVar45;
          }
          fVar47 = fVar47 + (fVar45 - fVar59 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar68;
          goto LAB_035574e8;
        }
        fVar47 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar65 = *(float *)(unaff_x19 + 0x4a);
        if (fVar65 < fVar47) {
          fVar59 = (fVar47 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar59 <= DAT_00d38b84) {
            fVar59 = DAT_00d38b84;
          }
          *(float *)((long)unaff_x19 + 0x23c) = fVar47;
          fVar47 = fVar47 - fVar59;
          goto LAB_03557524;
        }
      }
      iVar11 = (int)unaff_x19[0x5c];
      if (iVar11 == 1) {
        lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar26 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar26 = *(long *)puVar6;
        }
        lVar29 = *(long *)(lVar26 + 0xb8);
        lVar26 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
          lVar26 = FUN_01a46ff8(lVar26);
        }
        piVar21 = (int *)thunk_FUN_01a59484(lVar29 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar26 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar21 == 0) goto LAB_03554580;
        lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar26 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar26 = *(long *)puVar6;
        }
        FUN_0209b778(*(long *)(lVar26 + 0xb8) + 0x11f0,&stack0x000008a0,
                     *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
        memcpy(&stack0x00000c90,&stack0x000008a0,0x378);
        goto LAB_035529dc;
      }
      if (iVar11 == 6) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        lVar26 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar19 = FUN_036cee6c(lVar26,0,0);
        if ((uVar19 & 1) != 0) {
          plVar42 = (long *)unaff_x19[0x5d];
          uVar17 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar42 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar42 + 0x528))(plVar42,uVar17,*(undefined8 *)(*plVar42 + 0x530));
          lVar26 = unaff_x19[0x5d];
          if (lVar26 == 0) goto LAB_035574b8;
          *(int *)(lVar26 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar26,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar42 = (long *)unaff_x19[0x5d];
          if (plVar42 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar42 + 0x7a8))(plVar42,0,0,*(undefined8 *)(*plVar42 + 0x7b0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
        goto LAB_03552b00;
      }
      if (iVar11 == 3) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        goto LAB_03552550;
      }
    }
LAB_03552f54:
    if (uVar10 == 0xad) {
      if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(undefined1 *)(lVar26 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
    }
    else {
      if (uVar10 == 9) {
        lVar26 = *in_stack_00000170;
        if ((lVar26 == 0) || (lVar29 = *(long *)(lVar26 + 0x38), lVar29 == 0)) goto LAB_035574b8;
        uVar14 = *unaff_x20;
        if (*(uint *)(lVar29 + 0x18) <= uVar14) goto LAB_035575f4;
        *(undefined1 *)(lVar29 + (long)(int)uVar14 * unaff_x24 + 0x194) = 0;
        *(uint *)((long)unaff_x19 + 0x4a4) = uVar14;
        lVar29 = *(long *)(lVar26 + 0x50);
        if (lVar29 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
        lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar29 + 0x2c) = *(int *)(lVar29 + 0x2c) + 1;
        goto LAB_03552fcc;
      }
      if (*(int *)((long)unaff_x19 + 0x644) == 1) {
        (**(code **)(*unaff_x19 + 0x898))(fVar65,fVar51);
      }
      else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
        (**(code **)(*unaff_x19 + 0x888))(fStack000000000000015c);
      }
      uVar14 = *unaff_x20;
      if ((in_stack_00000068._4_4_ & 1) != 0) {
        *(uint *)(in_stack_00000080 + 0x1f0) = uVar14;
      }
      *(uint *)((long)unaff_x19 + 0x4a4) = uVar14;
      *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
      if ((unaff_x19[0x6d] == 0) || (lVar26 = *(long *)(unaff_x19[0x6d] + 0x50), lVar26 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      in_stack_00000068._4_4_ = 0;
      *(float *)(lVar26 + 0x60) = fVar64;
      *(float *)(lVar26 + 100) = fVar46;
    }
  }
  else {
    if (((uVar10 & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
      fVar45 = (float)param_2;
      fVar59 = 0.0;
      if ((0.0 < fVar45) && (fVar59 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar59 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      param_2 = (ulong)(uint)fStack00000000000000c4;
      if (fStack00000000000000c4 <
          (*(float *)(unaff_x19 + 0x97) - (*(float *)((long)unaff_x19 + 0x4cc) - fVar45)) + fVar59)
      {
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(uint *)((long)unaff_x19 + 0x2e4) = uVar14;
        }
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        lVar26 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar19 = FUN_036cee6c(lVar26,0,0);
        if ((uVar19 & 1) != 0) {
          plVar42 = (long *)unaff_x19[0x5d];
          uVar17 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar42 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar42 + 0x528))(plVar42,uVar17,*(undefined8 *)(*plVar42 + 0x530));
          lVar26 = unaff_x19[0x5d];
          if (lVar26 == 0) goto LAB_035574b8;
          *(int *)(lVar26 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar26,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar42 = (long *)unaff_x19[0x5d];
          if (plVar42 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar42 + 0x7a8))(plVar42,0,0,*(undefined8 *)(*plVar42 + 0x7b0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
        goto UnityEngine_AnimationClip__get_hasMotionCurves;
      }
    }
    if ((((uVar10 - 0x2007 < 0x23) &&
         ((1L << ((ulong)(uVar10 - 0x2007) & 0x3f) & 0x600000001U) != 0)) || (uVar10 - 10 < 2)) ||
       (uVar10 == 0xa0)) {
LAB_03552b54:
      if (((uVar10 != 0xad) && (uVar10 != 0x200b)) && (uVar10 != 0x2060)) {
        lVar26 = *in_stack_00000170;
        if ((lVar26 == 0) || (lVar29 = *(long *)(lVar26 + 0x50), lVar29 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
        lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar29 + 0x2c) = *(int *)(lVar29 + 0x2c) + 1;
        *(int *)(lVar26 + 0x20) = *(int *)(lVar26 + 0x20) + 1;
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar19 = FUN_026b97f8(uVar10,0);
      if ((uVar19 & 1) != 0) goto LAB_03552b54;
    }
    if (uVar10 == 0xa0) {
      if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x50), lVar26 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_03552fcc:
      *(int *)(lVar26 + 0x20) = *(int *)(lVar26 + 0x20) + 1;
    }
  }
  if (((int)unaff_x19[0x5c] == 1) && ((uVar10 == 0x2d || (!bVar5)))) {
    if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
    fVar59 = *(float *)(unaff_x19 + 0x3d);
    iVar11 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
    if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
    fVar64 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
    lVar26 = unaff_x19[0xca];
    fVar45 = fStack0000000000000098;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar45 = 1.0;
    }
    if ((lVar26 == 0) || (*(long *)(lVar26 + 0x20) == 0)) goto LAB_035574b8;
    fVar65 = *(float *)((long)unaff_x19 + 0x404);
    fVar51 = *(float *)(lVar26 + 0x2c);
    fVar46 = (float)FUN_03776ea8(*(long *)(lVar26 + 0x20),0);
    fVar47 = *_fStack00000000000000a8;
    fVar46 = fVar65 * (fVar59 / (float)iVar11) * fVar64 * fVar45 * fVar51 * fVar46;
    fVar59 = *_fStack00000000000000a0;
    if ((uVar10 == 10) && (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93])) {
      if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
      goto LAB_035574b8;
      uVar14 = *(int *)((long)unaff_x19 + 0x494) - 1;
      if (*(uint *)(lVar26 + 0x18) <= uVar14) goto LAB_035575f4;
      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
      fVar45 = *(float *)(lVar26 + (long)(int)uVar14 * (long)iVar13 + 0x60);
      iVar11 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
      fVar65 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
      lVar26 = unaff_x19[0xca];
      fVar64 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar64 = 1.0;
      }
      if ((lVar26 == 0) || (*(long *)(lVar26 + 0x20) == 0)) goto LAB_035574b8;
      fVar51 = *(float *)((long)unaff_x19 + 0x404);
      fVar49 = *(float *)(lVar26 + 0x2c);
      fVar46 = (float)FUN_03776ea8(*(long *)(lVar26 + 0x20),0);
      if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x50), lVar26 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      fVar47 = *(float *)(lVar26 + 0x60);
      fVar59 = *(float *)(lVar26 + 100);
      fVar46 = fVar51 * (fVar45 / (float)iVar11) * fVar65 * fVar64 * fVar49 * fVar46;
    }
    fVar65 = *(float *)(unaff_x19 + 0x9b);
    fVar45 = 0.0;
    fVar64 = 0.0;
    if ((0.0 < fVar65) && (fVar64 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar64 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    fVar49 = *(float *)(unaff_x19 + 0x97);
    fVar62 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar51 = *(float *)(unaff_x19 + 200);
    if ((char)unaff_x19[0x1e] == '\0') {
      if ((unaff_x19[0xca] == 0) || (lVar26 = *(long *)(unaff_x19[0xca] + 0x20), lVar26 == 0))
      goto LAB_035574b8;
      FUN_03776e6c(&stack0x000008a0,lVar26,0);
      fVar45 = (float)FUN_03776cb4(&stack0x00001700,0);
    }
    puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    fVar69 = *(float *)(unaff_x19 + 0x6c);
    fVar59 = (fStack000000000000009c - fVar47) - fVar59;
    bVar8 = true;
    if ((fVar69 <= fVar59) && (bVar8 = false, !NAN(fVar69))) {
      bVar8 = fVar69 == -1.0;
    }
    if (!bVar8) {
      fVar59 = fVar69;
    }
    fVar47 = 1.0;
    if ((uVar32 & 0x18) != 0) {
      fVar47 = DAT_00d38acc;
    }
    if (((fVar49 - (fVar62 - fVar65)) + fVar64 < fStack00000000000000c4) &&
       (ABS(fVar51) + fVar46 * fVar45 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
        fVar47 * fVar59)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0358c4f0();
      lVar26 = *(long *)(*(long *)puVar6 + 0xb8);
      memcpy(&stack0x00000528,(void *)(lVar26 + 0x788),0x378);
      FUN_0209b210(lVar26 + 0x11f0,&stack0x00000528,*(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
    }
  }
  lVar26 = *in_stack_00000170;
  if (lVar26 == 0) goto LAB_035574b8;
  lVar29 = *(long *)(lVar26 + 0x38);
  unaff_d13 = (ulong)(uint)fVar68;
  if (lVar29 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar29 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  uVar14 = *(uint *)(unaff_x19 + 0x95);
  lVar29 = lVar29 + (long)(int)*unaff_x20 * unaff_x24;
  *(uint *)(lVar29 + 100) = uVar14;
  *(int *)(lVar29 + 0x68) = (int)unaff_x19[0x96];
  if ((bVar5) || ((uVar10 < 0xe && ((1 << (ulong)(uVar10 & 0x1f) & 0x2c00U) != 0)))) {
    lVar26 = *(long *)(lVar26 + 0x50);
    if (lVar26 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar26 + 0x18) <= uVar14) goto LAB_035575f4;
    if (*(int *)(lVar26 + (long)(int)uVar14 * 0x5c + 0x24) == 1) goto LAB_0355346c;
  }
  else {
    lVar26 = *(long *)(lVar26 + 0x50);
    if (lVar26 == 0) goto LAB_035574b8;
LAB_0355346c:
    if (*(uint *)(lVar26 + 0x18) <= uVar14) goto LAB_035575f4;
    *(int *)(lVar26 + (long)(int)uVar14 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
  }
  if (uVar10 == 9) {
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar59 = (float)FUN_03776a48(*unaff_x21 + 0x50,0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar64 = *(float *)(unaff_x19 + 200);
    fVar45 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x21 + 0x1b9));
    fVar59 = fVar68 * fVar59 * fVar45;
    fVar45 = fVar59 * (float)(int)(fVar64 / fVar59);
    param_2 = (ulong)(uint)fVar45;
    if (fVar45 <= fVar64) {
      fVar45 = fVar64 + fVar59;
    }
LAB_03553678:
    *(float *)(unaff_x19 + 200) = fVar45;
  }
  else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
    if ((char)unaff_x19[0x1e] == '\0') {
      if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
        fVar64 = 1.0;
      }
      else {
        fVar64 = (float)thunk_FUN_036bc400(_fStack0000000000000078,0);
      }
      fVar45 = *(float *)(unaff_x19 + 200);
      fVar46 = (float)FUN_03776cb4(&stack0x00001790,0);
      if (unaff_x19[0x20] == 0) goto LAB_035574b8;
      fVar59 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
      fVar45 = fVar45 + fVar59 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                 fVar68 * (fStack000000000000012c + fVar64 * fVar46) +
                                 fStack00000000000000d4 *
                                 (fStack00000000000000d0 +
                                 fVar50 + *(float *)(unaff_x19[0x20] + 0x1ac)));
      *(float *)(unaff_x19 + 200) = fVar45;
      goto joined_r0x035535c0;
    }
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar45 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (*(float *)((long)unaff_x19 + 0x2ac) +
             fVar68 * fStack000000000000012c +
             fStack00000000000000d4 *
             (fStack00000000000000d0 + fVar50 + *(float *)(*unaff_x21 + 0x1ac)));
    param_2 = (ulong)(uint)fVar45;
    fVar45 = *(float *)(unaff_x19 + 200) - fVar45;
    *(float *)(unaff_x19 + 200) = fVar45;
    if ((uVar10 == 0x200b) || (uVar12 != 0)) {
      fVar59 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
      param_2 = (ulong)(uint)fVar59;
      fVar45 = fVar45 - fVar59;
      goto LAB_03553678;
    }
  }
  else {
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar59 = *(float *)(unaff_x19 + 200);
    fVar45 = fVar59 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                      (*(float *)((long)unaff_x19 + 0x2ac) +
                      (*(float *)(unaff_x19 + 0x56) - fVar48) +
                      fStack00000000000000d4 * (fVar50 + *(float *)(*unaff_x21 + 0x1ac)));
    *(float *)(unaff_x19 + 200) = fVar45;
joined_r0x035535c0:
    if ((uVar10 == 0x200b) || (param_2 = (ulong)(uint)fVar59, uVar12 != 0)) {
      fVar59 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
      param_2 = (ulong)(uint)fVar59;
      fVar45 = fVar45 + fVar59;
      goto LAB_03553678;
    }
  }
  lVar26 = *in_stack_00000170;
  if ((lVar26 == 0) || (lVar29 = *(long *)(lVar26 + 0x38), lVar29 == 0)) goto LAB_035574b8;
  uVar14 = *unaff_x20;
  uVar32 = (uint)*(undefined8 *)(lVar29 + 0x18);
  if (uVar32 <= uVar14) goto LAB_035575f4;
  *(float *)(lVar29 + (long)(int)uVar14 * unaff_x24 + 0x144) = fVar45;
  uVar34 = uVar10;
  if ((int)uVar10 < 0xd) {
    if ((uVar10 - 10 < 2) || (uVar10 == 3)) goto LAB_0355371c;
LAB_03553700:
    if (((bool)(bVar5 & uVar10 == 0x2d)) || ((float)uVar14 == in_stack_00000088._4_4_))
    goto LAB_0355371c;
  }
  else {
    if (1 < uVar10 - 0x2028) {
      if (uVar10 != 0xd) goto LAB_03553700;
      param_2 = 0;
      *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
      if ((float)uVar14 != in_stack_00000088._4_4_) goto LAB_03553c8c;
    }
LAB_0355371c:
    if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
      fVar59 = *(float *)(unaff_x19 + 0x99);
      fVar45 = *(float *)(unaff_x19 + 0x9a);
      if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      fVar59 = fVar59 - fVar45;
      if (((fStack000000000000005c < ABS(fVar59)) && (*(char *)((long)unaff_x19 + 0x2c4) == '\0'))
         && (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
        FUN_0358c860(fVar59);
        *(float *)((long)unaff_x19 + 0x4c4) = *(float *)((long)unaff_x19 + 0x4c4) - fVar59;
        *(float *)(unaff_x19 + 0x9b) = fVar59 + *(float *)(unaff_x19 + 0x9b);
        puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar26 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar26 = *(long *)puVar6;
        }
        lVar29 = *(long *)(lVar26 + 0xb8);
        if (*(int *)(lVar29 + 0x7ac) == (int)unaff_x19[0x95]) {
          if (*(int *)(lVar26 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar29 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          FUN_0209b778(lVar29 + 0x11f0,&stack0x000008a0,*(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo
                      );
          puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          memcpy((void *)(*(long *)(lVar26 + 0xb8) + 0x788),&stack0x000008a0,0x378);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    (*(long *)(lVar26 + 0xb8) + 0x818,0);
          lVar26 = *(long *)(*(long *)puVar6 + 0xb8);
          *(float *)(lVar26 + 0x7bc) = fVar59 + *(float *)(lVar26 + 0x7bc);
          *(float *)(lVar26 + 0x800) = fVar59 + *(float *)(lVar26 + 0x800);
          memcpy(&stack0x000001b0,(void *)(lVar26 + 0x788),0x378);
          FUN_0209b210(lVar26 + 0x11f0,&stack0x000001b0,
                       *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
        }
      }
    }
    fVar64 = *(float *)(unaff_x19 + 0x9b);
    *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
    fVar45 = *(float *)((long)unaff_x19 + 0x4cc) - fVar64;
    fVar59 = *(float *)((long)unaff_x19 + 0x4c4);
    if (fVar45 <= *(float *)((long)unaff_x19 + 0x4c4)) {
      fVar59 = fVar45;
    }
    *(float *)((long)unaff_x19 + 0x4c4) = fVar59;
    fVar46 = *(float *)(unaff_x19 + 0x99);
    if (in_stack_000017d4 == '\0') {
      in_stack_000017d8 = fVar59;
    }
    if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
       (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
        ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
      in_stack_000017d4 = '\x01';
    }
    lVar26 = *in_stack_00000170;
    if ((lVar26 == 0) || (lVar29 = *(long *)(lVar26 + 0x50), lVar29 == 0)) goto LAB_035574b8;
    uVar14 = *(uint *)(unaff_x19 + 0x95);
    if (*(uint *)(lVar29 + 0x18) <= uVar14) goto LAB_035575f4;
    lVar44 = unaff_x19[0x93];
    lVar20 = lVar29 + (long)(int)uVar14 * 0x5c;
    *(int *)(lVar20 + 0x34) = (int)lVar44;
    uVar32 = *(uint *)(unaff_x19 + 0x93);
    if ((int)lVar44 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
      uVar32 = *(uint *)((long)unaff_x19 + 0x49c);
    }
    *(uint *)((long)unaff_x19 + 0x49c) = uVar32;
    *(uint *)(lVar20 + 0x38) = uVar32;
    *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
    *(undefined4 *)(lVar20 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
    iVar11 = *(int *)((long)unaff_x19 + 0x49c);
    if ((int)uVar32 <= *(int *)((long)unaff_x19 + 0x4a4)) {
      iVar11 = *(int *)((long)unaff_x19 + 0x4a4);
    }
    *(int *)((long)unaff_x19 + 0x4a4) = iVar11;
    *(int *)(lVar20 + 0x40) = iVar11;
    *(int *)(lVar20 + 0x24) = (*(int *)(lVar20 + 0x3c) - *(int *)(lVar20 + 0x34)) + 1;
    *(undefined4 *)(lVar20 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
    lVar26 = *(long *)(lVar26 + 0x38);
    if (lVar26 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar26 + 0x18) <= uVar32) goto LAB_035575f4;
    uVar67 = *(undefined4 *)(lVar26 + (long)(int)uVar32 * (long)iVar13 + 0x11c);
    lVar29 = lVar29 + (long)(int)uVar14 * 0x5c;
    *(float *)(lVar29 + 0x70) = fVar45;
    *(undefined4 *)(lVar29 + 0x6c) = uVar67;
    lVar26 = *in_stack_00000170;
    if ((lVar26 == 0) || (lVar29 = *(long *)(lVar26 + 0x50), lVar29 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
    lVar26 = *(long *)(lVar26 + 0x38);
    if (lVar26 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar26 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
    fVar46 = fVar46 - fVar64;
    param_2 = (ulong)(uint)fVar46;
    lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
    *(undefined4 *)(lVar29 + 0x74) =
         *(undefined4 *)(lVar26 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x128)
    ;
    *(float *)(lVar29 + 0x78) = fVar46;
    lVar26 = *in_stack_00000170;
    if ((lVar26 == 0) || (lVar44 = *(long *)(lVar26 + 0x50), lVar44 == 0)) goto LAB_035574b8;
    lVar20 = (long)(int)*(uint *)(unaff_x19 + 0x95);
    if (*(uint *)(lVar44 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
    lVar29 = lVar44 + lVar20 * 0x5c;
    *(float *)(lVar29 + 0x44) = *(float *)(lVar29 + 0x74) - fVar68 * fStack000000000000015c;
    *(float *)(lVar29 + 0x5c) = in_stack_000000f8._4_4_;
    if (*(int *)(lVar29 + 0x24) == 1) {
      *(int *)(lVar44 + lVar20 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
    }
    if ((*unaff_x21 == 0) || (lVar29 = *(long *)(lVar26 + 0x38), lVar29 == 0)) goto LAB_035574b8;
    lVar37 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
    uVar32 = (uint)*(undefined8 *)(lVar29 + 0x18);
    if (uVar32 <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
    if ((*(char *)(lVar29 + lVar37 * unaff_x24 + 0x194) == '\0') &&
       (lVar37 = (long)(int)*(uint *)(unaff_x19 + 0x94), uVar32 <= *(uint *)(unaff_x19 + 0x94)))
    goto LAB_035575f4;
    lVar44 = lVar44 + lVar20 * 0x5c;
    fVar68 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (fStack00000000000000d4 *
              (fStack00000000000000d0 + fVar50 + *(float *)(*unaff_x21 + 0x1ac)) -
             *(float *)((long)unaff_x19 + 0x2ac));
    fVar59 = -fVar68;
    if ((char)unaff_x19[0x1e] != '\0') {
      fVar59 = fVar68;
    }
    *(float *)(lVar44 + 0x58) = *(float *)(lVar29 + lVar37 * unaff_x24 + 0x144) + fVar59;
    *(float *)(lVar44 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
    *(float *)(lVar44 + 0x54) = fVar45;
    *(float *)(lVar44 + 0x48) = in_stack_00000060 + (fVar46 - fVar45);
    *(float *)(lVar44 + 0x4c) = fVar46;
    if ((int)uVar10 < 0x2d) {
      if (uVar10 - 10 < 2) {
LAB_03553b60:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        lVar26 = unaff_x19[0x6d];
        *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
        iVar13 = (int)unaff_x19[0x95] + 1;
        *(int *)(unaff_x19 + 0x95) = iVar13;
        *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
        if ((lVar26 == 0) || (*(long *)(lVar26 + 0x50) == 0)) goto LAB_035574b8;
        if (*(int *)(*(long *)(lVar26 + 0x50) + 0x18) <= iVar13) {
          FUN_0358ca18();
          lVar26 = unaff_x19[0x6d];
          if (lVar26 == 0) goto LAB_035574b8;
        }
        lVar26 = *(long *)(lVar26 + 0x38);
        if (lVar26 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        fVar59 = *(float *)(lVar26 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
        if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
          if ((uVar10 == 0x2029) || (fVar68 = 0.0, uVar10 == 10)) {
            fVar68 = *(float *)((long)unaff_x19 + 0x2cc);
          }
          uVar23 = 0;
          fVar68 = fVar59 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                   fStack0000000000000058 *
                   (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700)) +
                   fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar68) +
                   *(float *)(unaff_x19 + 0x9b);
        }
        else {
          if ((uVar10 == 0x2029) || (fVar68 = 0.0, uVar10 == 10)) {
            fVar68 = *(float *)((long)unaff_x19 + 0x2cc);
          }
          uVar23 = 1;
          fVar68 = *(float *)(unaff_x19 + 0x9b) +
                   *(float *)(unaff_x19 + 0x58) +
                   fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar68);
        }
        *(float *)(unaff_x19 + 0x9b) = fVar68;
        *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar23;
        puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar26 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar26 = *(long *)puVar6;
        }
        uVar17 = *(undefined8 *)(*(long *)(lVar26 + 0xb8) + 0x15a8);
        *(float *)(unaff_x19 + 0x9a) = fVar59;
        param_2 = NEON_rev64(uVar17,4);
        unaff_x19[0x99] = param_2;
        *(float *)(unaff_x19 + 200) =
             *(float *)(unaff_x19 + 0x81) + 0.0 + *(float *)((long)unaff_x19 + 0x40c);
        FUN_0358c4f0();
        FUN_0358c4f0();
        *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
        in_stack_00000068._4_4_ = 1;
        bStack0000000000000070 = 1;
        plVar42 = in_stack_00000170;
        goto LAB_03550bd0;
      }
      if (uVar10 == 3) {
        if (unaff_x19[0x8f] == 0) goto LAB_035574b8;
        in_stack_000017a8 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
        uVar34 = 3;
      }
    }
    else if ((uVar10 - 0x2028 < 2) || (uVar10 == 0x2d)) goto LAB_03553b60;
  }
LAB_03553c8c:
  uVar14 = *unaff_x20;
  if (uVar32 <= uVar14) goto LAB_035575f4;
  if (*(char *)(lVar29 + (long)(int)uVar14 * unaff_x24 + 0x194) != '\0') {
    lVar29 = lVar29 + (long)(int)uVar14 * unaff_x24;
    uVar54 = *(ulong *)(lVar29 + 0x11c);
    uVar19 = *(ulong *)(in_stack_00000080 + 0x230);
    *(ulong *)(in_stack_00000080 + 0x230) =
         uVar19 ^ (uVar19 ^ uVar54) &
                  ~CONCAT44(-(uint)((float)(uVar19 >> 0x20) < (float)(uVar54 >> 0x20)),
                            -(uint)((float)uVar19 < (float)uVar54));
    uVar19 = *(ulong *)(in_stack_00000080 + 0x238);
    param_2 = *(ulong *)(lVar29 + 0x128);
    *(ulong *)(in_stack_00000080 + 0x238) =
         uVar19 ^ (uVar19 ^ param_2) &
                  ~CONCAT44(-(uint)((float)(param_2 >> 0x20) < (float)(uVar19 >> 0x20)),
                            -(uint)((float)param_2 < (float)uVar19));
  }
  if (((int)unaff_x19[0x5c] == 5) &&
     ((0xd < uVar34 || ((1 << (ulong)(uVar34 & 0x1f) & 0x2c00U) == 0)))) {
    lVar29 = *(long *)(lVar26 + 0x58);
    if (lVar29 == 0) goto LAB_035574b8;
    iVar11 = (int)unaff_x19[0x96] + 1;
    if (*(int *)(lVar29 + 0x18) < iVar11) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff02b8((long *)(lVar26 + 0x58),iVar11,1,*(undefined8 *)OVRPlugin_MeshType_TypeInfo);
      lVar26 = *in_stack_00000170;
      if (lVar26 == 0) goto LAB_035574b8;
    }
    lVar29 = *(long *)(lVar26 + 0x58);
    if (lVar29 == 0) goto LAB_035574b8;
    uVar32 = *(uint *)(unaff_x19 + 0x96);
    lVar44 = (long)(int)uVar32;
    uVar14 = *(uint *)(lVar29 + 0x18);
    if (uVar14 <= uVar32) goto LAB_035575f4;
    lVar20 = lVar29 + lVar44 * 0x14;
    fVar68 = *(float *)(lVar20 + 0x30);
    param_2 = (ulong)(uint)fVar68;
    *(undefined4 *)(lVar20 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
    fVar59 = *(float *)((long)unaff_x19 + 0x4c4);
    if (fVar68 <= *(float *)((long)unaff_x19 + 0x4c4)) {
      fVar59 = fVar68;
    }
    *(float *)(lVar20 + 0x30) = fVar59;
    uVar34 = *(uint *)((long)unaff_x19 + 0x494);
    if (uVar34 == 0 && uVar32 == 0) {
      *(uint *)(lVar29 + (ulong)uVar32 * 0x14 + 0x20) = uVar34;
    }
    else {
      uVar39 = uVar34 - 1;
      if (0 < (int)uVar34) {
        lVar26 = *(long *)(lVar26 + 0x38);
        if (lVar26 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar26 + 0x18) <= uVar39) goto LAB_035575f4;
        if (uVar32 != *(uint *)(lVar26 + (ulong)uVar39 * (unaff_x24 & 0xffffffff) + 0x68)) {
          if (uVar14 <= uVar32 - 1) goto LAB_035575f4;
          *(uint *)(lVar29 + 0x20 + (long)(int)(uVar32 - 1) * 0x14 + 4) = uVar39;
          *(uint *)(lVar29 + 0x20 + lVar44 * 0x14) = uVar34;
          goto LAB_03553d10;
        }
      }
      if ((float)uVar34 == in_stack_00000088._4_4_) {
        *(float *)(lVar29 + lVar44 * 0x14 + 0x24) = in_stack_00000088._4_4_;
      }
    }
  }
LAB_03553d10:
  puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  if (((char)unaff_x19[0x5b] == '\0') &&
     ((6 < *(uint *)(unaff_x19 + 0x5c) ||
      ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0)))) goto LAB_035542ac;
  if ((uVar12 == 0) && (((uVar10 != 0x2d && (uVar10 != 0x200b)) && (uVar10 != 0xad)))) {
    if (*(char *)((long)unaff_x19 + 0x2da) != '\0') {
      if ((bStack0000000000000070 & 1) != 0) goto UnityEngine_Animator__set_animatePhysics;
      goto LAB_035542a8;
    }
LAB_03553ef0:
    if (((((0x2bfd < uVar10 - 0xac01) && (0xfd < uVar10 - 0x1101)) && (0x1d < uVar10 - 0xa961)) ||
        (uVar19 = FUN_03597a54(0), (uVar19 & 1) != 0)) &&
       ((((0xed < uVar10 - 0xff01 && (0x1d < uVar10 - 0xfe31)) && (0x717d < uVar10 - 0x2e81)) &&
        (0x1fd < uVar10 - 0xf901)))) goto LAB_03553f78;
    lVar26 = FUN_035978e8(0);
    if ((lVar26 == 0) || (*(long *)(lVar26 + 0x10) == 0)) goto LAB_035574b8;
    uVar14 = FUN_0219c130(*(long *)(lVar26 + 0x10),&stack0x000008a0,
                          *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    if ((int)in_stack_00000088._4_4_ <= (int)*unaff_x20) {
      in_stack_000008a0 = uVar10;
      if ((uVar14 & 1) == 0) {
LAB_03554270:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        goto LAB_035542a8;
      }
LAB_035541dc:
      if (uVar56 != uVar25 || ((bStack0000000000000070 ^ 0xff) & 1) != 0) goto LAB_035542ac;
      if (uVar12 == 0) goto LAB_0355422c;
      goto UnityEngine_Animator__get_bodyPositionInternal;
    }
    lVar26 = FUN_035978e8(0);
    if (((lVar26 == 0) || (*in_stack_00000170 == 0)) ||
       (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar29 + 0x18) <= *unaff_x20 + 1) goto LAB_035575f4;
    if (*(long *)(lVar26 + 0x18) == 0) goto LAB_035574b8;
    in_stack_000008a0 =
         (uint)*(ushort *)(lVar29 + (long)(int)(*unaff_x20 + 1) * (long)iVar13 + 0x20);
    uVar19 = FUN_0219c130(*(long *)(lVar26 + 0x18),&stack0x000008a0,
                          *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    if ((uVar14 & 1) != 0) goto LAB_035541dc;
    if ((uVar19 & 1) == 0) goto LAB_03554270;
    if ((bStack0000000000000070 & 1) == 0) goto LAB_035542a8;
    if (uVar12 != 0) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0358c4f0();
    }
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_0358c4f0();
  }
  else {
    if (*(char *)((long)unaff_x19 + 0x2da) != '\x01') {
      if (((0x28 < uVar10 - 0x2007) ||
          ((1L << ((ulong)(uVar10 - 0x2007) & 0x3f) & 0x10000000401U) == 0)) &&
         ((uVar10 != 0xa0 && (uVar10 != 0x2060)))) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        bStack0000000000000070 = 0;
        *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xe78) = 0xffffffff;
        goto LAB_035542ac;
      }
      goto LAB_03553ef0;
    }
LAB_03553f78:
    if ((bStack0000000000000070 & 1) == 0) {
LAB_035542a8:
      bStack0000000000000070 = 0;
      goto LAB_035542ac;
    }
    if (uVar12 == 0) {
UnityEngine_Animator__set_animatePhysics:
      if ((bStack0000000000000074 & 1) == 0 && uVar10 == 0xad)
      goto UnityEngine_Animator__get_bodyPositionInternal;
    }
    else {
UnityEngine_Animator__get_bodyPositionInternal:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0358c4f0();
    }
LAB_0355422c:
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_0358c4f0();
  }
  bStack0000000000000070 = 1;
LAB_035542ac:
  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_0358c4f0();
  *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
  plVar42 = in_stack_00000170;
  goto LAB_03550bd0;
LAB_03554e78:
  uVar10 = uVar12 - 1;
  if (*(uint *)(lVar26 + 0x18) <= uVar10) goto LAB_035575f4;
  if ((*plVar42 == 0) || (lVar44 = *(long *)(*plVar42 + 0x50), lVar44 == 0)) goto LAB_035574b8;
  lVar37 = (long)(int)uVar10;
  lVar20 = lVar26 + lVar37 * 0x178;
  uVar25 = *(uint *)(lVar20 + 100);
  if (*(uint *)(lVar44 + 0x18) <= uVar25) goto LAB_035575f4;
  lVar40 = (long)(int)uVar25;
  lVar44 = lVar44 + lVar40 * 0x5c;
  lVar35 = *(long *)(lVar20 + 0x38);
  uVar3 = *(ushort *)(lVar20 + 0x20);
  uVar32 = *(uint *)(lVar44 + 0x3c);
  uVar14 = *(uint *)(lVar44 + 0x68);
  iVar2 = *(int *)(lVar44 + 0x20);
  iVar15 = *(int *)(lVar44 + 0x28);
  iVar16 = *(int *)(lVar44 + 0x2c);
  uVar34 = *(uint *)(lVar44 + 0x40);
  lVar20 = (long)(int)uVar34;
  fVar65 = *(float *)(lVar44 + 0x4c);
  fVar51 = *(float *)(lVar44 + 0x54);
  fVar46 = *(float *)(lVar44 + 0x58);
  fVar69 = *(float *)(lVar44 + 0x5c);
  fVar49 = *(float *)(lVar44 + 0x60);
  fVar62 = *(float *)(lVar44 + 0x6c);
  fVar58 = *(float *)(lVar44 + 0x70);
  fVar48 = *(float *)(lVar44 + 0x74);
  fVar47 = *(float *)(lVar44 + 0x78);
  uVar39 = (uint)uVar3;
  if ((int)uVar14 < 9) {
    switch(uVar14) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar49 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar46;
      }
      break;
    case 2:
LAB_03555018:
      in_stack_000000f8._4_4_ = (fVar49 + fVar69 * 0.5) - fVar46 * 0.5;
      break;
    default:
      goto switchD_03554f58_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar69 + fVar49) - fVar46;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar69 + fVar49;
      }
      break;
    case 8:
      goto switchD_03554f58_caseD_8;
    }
LAB_03555088:
    uStack00000000000000e8 = 0;
  }
  else if (uVar14 == 0x10) {
switchD_03554f58_caseD_8:
    if (uVar3 < 0xad) {
      if ((uVar3 != 3) && (uVar3 != 10)) goto LAB_03554fac;
    }
    else if ((uVar3 != 0xad) && ((uVar3 != 0x200b && (uVar3 != 0x2060)))) {
LAB_03554fac:
      if (*(uint *)(lVar26 + 0x18) <= uVar32) goto LAB_035575f4;
      uVar4 = *(undefined2 *)(lVar26 + (long)(int)uVar32 * 0x178 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar19 = FUN_026b8cc4(uVar4,0);
      if ((uVar19 & 1) == 0) {
        bVar1 = (int)uVar25 < (int)unaff_x19[0x95];
      }
      else {
        bVar1 = false;
      }
      if ((fVar46 <= fVar69) && (!bVar1 && uVar14 >> 4 == 0)) {
        in_stack_000000f8._4_4_ = fVar49;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar69 + fVar49;
        }
        goto LAB_03555088;
      }
      if (((uVar12 == 1) || (uVar25 != uVar56)) || (uVar10 == *(uint *)((long)unaff_x19 + 0x324))) {
        in_stack_000000f8._4_4_ = fVar49;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar69 + fVar49;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fStack0000000000000028 = (float)FUN_026b97f8(uVar39,0);
        uStack00000000000000e8 = 0;
      }
      else {
        cVar24 = (char)unaff_x19[0x1e];
        fVar49 = -fVar46;
        if (cVar24 != '\0') {
          fVar49 = fVar46;
        }
        if (*(uint *)(lVar26 + 0x18) <= uVar32) goto LAB_035575f4;
        iVar16 = (int)*(char *)(lVar26 + (long)(int)uVar32 * 0x178 + 0x194) +
                 (-iVar2 - ((uint)fStack0000000000000028 & 1)) + iVar16 + -1;
        if (iVar16 < 1) {
          fVar46 = 1.0;
          iVar16 = 1;
        }
        else {
          fVar46 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar39 == 9) {
LAB_03556e74:
          fVar46 = 1.0 - fVar46;
        }
        else {
          if (uVar39 != 0xa0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar19 = FUN_026b97f8(uVar39,0);
            cVar24 = (char)unaff_x19[0x1e];
            if ((uVar19 & 1) != 0) goto LAB_03556e74;
          }
          iVar16 = (iVar2 - (~(uint)fStack0000000000000028 & 1)) + iVar15;
        }
        fVar46 = ((fVar69 + fVar49) * fVar46) / (float)iVar16;
        if (cVar24 == '\0') {
          in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar46;
          uStack00000000000000e8 =
               CONCAT44((float)((ulong)uStack00000000000000e8 >> 0x20) + 0.0,
                        (float)uStack00000000000000e8 + 0.0);
        }
        else {
          in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar46;
        }
      }
    }
  }
  else if (uVar14 == 0x20) {
    fVar46 = fVar62 + fVar48;
    goto LAB_03555018;
  }
switchD_03554f58_caseD_3:
  uVar14 = (uint)*(undefined8 *)(lVar26 + 0x18);
  if (uVar14 <= uVar10) goto LAB_035575f4;
  lVar44 = lVar26 + lVar37 * 0x178;
  fVar69 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar46 = SUB84(in_stack_000000b8,0) + (float)uStack00000000000000e8;
  fVar49 = (float)((ulong)in_stack_000000b8 >> 0x20) +
           (float)((ulong)uStack00000000000000e8 >> 0x20);
  if (*(char *)(lVar44 + 0x194) == '\0') goto LAB_03555938;
  iVar15 = *(int *)(lVar26 + lVar37 * 0x178 + 0x2c);
  if (iVar15 != 0) goto LAB_0355574c;
  fVar64 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar25,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar28 = lVar26 + lVar37 * 0x178;
    *(undefined4 *)(lVar28 + 0x84) = 0;
    *(undefined4 *)(lVar28 + 0xac) = 0;
    *(undefined4 *)(lVar28 + 0xd4) = 0x3f800000;
    fVar64 = 1.0;
    break;
  case 1:
    fVar47 = *(float *)(lVar26 + lVar37 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar28 = lVar26 + lVar37 * 0x178;
      fVar48 = (in_stack_000000f8._4_4_ + fVar47) - *(float *)(in_stack_00000080 + 0x230);
      fVar47 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      goto LAB_035551cc;
    }
    lVar28 = lVar26 + lVar37 * 0x178;
    fVar48 = fVar48 - fVar62;
    *(float *)(lVar28 + 0x84) = fVar64 + (fVar47 - fVar62) / fVar48;
    *(float *)(lVar28 + 0xac) = fVar64 + (*(float *)(lVar28 + 0x98) - fVar62) / fVar48;
    *(float *)(lVar28 + 0xd4) = fVar64 + (*(float *)(lVar28 + 0xc0) - fVar62) / fVar48;
    fVar64 = fVar64 + (*(float *)(lVar28 + 0xe8) - fVar62) / fVar48;
    break;
  case 2:
    lVar28 = lVar26 + lVar37 * 0x178;
    fVar47 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
    fVar48 = (in_stack_000000f8._4_4_ + *(float *)(lVar28 + 0x70)) -
             *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
    *(float *)(lVar28 + 0x84) = fVar64 + fVar48 / fVar47;
    *(float *)(lVar28 + 0xac) =
         fVar64 + ((in_stack_000000f8._4_4_ + *(float *)(lVar28 + 0x98)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    *(float *)(lVar28 + 0xd4) =
         fVar64 + ((in_stack_000000f8._4_4_ + *(float *)(lVar28 + 0xc0)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    fVar64 = fVar64 + ((in_stack_000000f8._4_4_ + *(float *)(lVar28 + 0xe8)) -
                      *(float *)(in_stack_00000080 + 0x230)) /
                      (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar28 = lVar26 + lVar37 * 0x178;
      *(undefined4 *)(lVar28 + 0x88) = 0;
      *(undefined4 *)(lVar28 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar28 + 0xd8) = 0;
      *(undefined4 *)(lVar28 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar28 = lVar26 + lVar37 * 0x178;
      fVar47 = fVar47 - fVar58;
      fVar48 = fVar64 + (*(float *)(lVar28 + 0x74) - fVar58) / fVar47;
      fVar47 = fVar64 + (*(float *)(lVar28 + 0x9c) - fVar58) / fVar47;
      *(float *)(lVar28 + 0x88) = fVar48;
      *(float *)(lVar28 + 0xb0) = fVar47;
      *(float *)(lVar28 + 0xd8) = fVar48;
      *(float *)(lVar28 + 0x100) = fVar47;
      break;
    case 2:
      lVar28 = lVar26 + lVar37 * 0x178;
      fVar48 = fVar64 + (*(float *)(lVar28 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar28 + 0x88) = fVar48;
      fVar47 = *(float *)(unaff_x19 + 0x9c);
      fVar62 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar28 + 0xd8) = fVar48;
      fVar48 = fVar64 + (*(float *)(lVar28 + 0x9c) - fVar47) / (fVar62 - fVar47);
      *(float *)(lVar28 + 0xb0) = fVar48;
      *(float *)(lVar28 + 0x100) = fVar48;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar14 = (uint)*(undefined8 *)(lVar26 + 0x18);
    }
    if (uVar14 <= uVar10) goto LAB_035575f4;
    lVar28 = lVar26 + lVar37 * 0x178;
    fVar48 = *(float *)(lVar28 + 0x15c);
    fVar47 = (1.0 - (*(float *)(lVar28 + 0x88) + *(float *)(lVar28 + 0xb0)) * fVar48) * 0.5;
    fVar62 = fVar64 + *(float *)(lVar28 + 0x88) * fVar48 + fVar47;
    fVar64 = fVar64 + fVar47 + *(float *)(lVar28 + 0xb0) * fVar48;
    *(float *)(lVar28 + 0x84) = fVar62;
    *(float *)(lVar28 + 0xac) = fVar62;
    *(float *)(lVar28 + 0xd4) = fVar64;
    break;
  default:
    goto switchD_0355512c_default;
  }
  *(float *)(lVar26 + lVar37 * 0x178 + 0xfc) = fVar64;
switchD_0355512c_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar14 <= uVar10) goto LAB_035575f4;
    lVar28 = lVar26 + lVar37 * 0x178;
    *(undefined4 *)(lVar28 + 0x88) = 0;
    *(undefined4 *)(lVar28 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar28 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar28 + 0x100) = 0;
    break;
  case 1:
    if (uVar10 < uVar14) {
      lVar28 = lVar26 + lVar37 * 0x178;
      fVar65 = fVar65 - fVar51;
      fVar64 = (*(float *)(lVar28 + 0x74) - fVar51) / fVar65;
      fVar65 = (*(float *)(lVar28 + 0x9c) - fVar51) / fVar65;
      *(float *)(lVar28 + 0x88) = fVar64;
      goto UnityEngine_Animator__set_stabilizeFeet;
    }
    goto LAB_035575f4;
  case 2:
    if (uVar14 <= uVar10) goto LAB_035575f4;
    lVar28 = lVar26 + lVar37 * 0x178;
    fVar64 = (*(float *)(lVar28 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar28 + 0x88) = fVar64;
    fVar65 = (*(float *)(lVar28 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
    *(float *)(lVar28 + 0xb0) = fVar65;
    *(float *)(lVar28 + 0xd8) = fVar65;
    *(float *)(lVar28 + 0x100) = fVar64;
    break;
  case 3:
    if (uVar14 <= uVar10) goto LAB_035575f4;
    lVar28 = lVar26 + lVar37 * 0x178;
    fVar65 = *(float *)(lVar28 + 0x15c);
    fVar48 = (1.0 - (*(float *)(lVar28 + 0x84) + *(float *)(lVar28 + 0xd4)) / fVar65) * 0.5;
    fVar64 = *(float *)(lVar28 + 0x84) / fVar65 + fVar48;
    fVar48 = fVar48 + *(float *)(lVar28 + 0xd4) / fVar65;
    *(float *)(lVar28 + 0x88) = fVar64;
    *(float *)(lVar28 + 0xb0) = fVar48;
    *(float *)(lVar28 + 0x100) = fVar64;
    *(float *)(lVar28 + 0xd8) = fVar48;
  }
  if (uVar14 <= uVar10) goto LAB_035575f4;
  lVar28 = lVar26 + lVar37 * 0x178;
  fVar64 = *(float *)(lVar28 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar28 + 0x5c) == '\0') && ((*(byte *)(lVar26 + lVar37 * 0x178 + 400) & 1) != 0)) {
    fVar64 = -fVar64;
  }
  fVar48 = fVar59;
  if (((iVar11 == 2) || (fVar48 = fVar45, iVar11 == 1)) || (fVar48 = fVar59 / fVar68, iVar11 == 0))
  {
    fVar64 = fVar48 * fVar64;
  }
  lVar28 = lVar26 + lVar37 * 0x178;
  fVar65 = *(float *)(lVar28 + 0x88);
  fVar47 = *(float *)(lVar28 + 0x84);
  fVar48 = -2.1474836e+09;
  if (fVar47 != INFINITY) {
    fVar48 = (float)(int)fVar47;
  }
  fVar62 = *(float *)(lVar28 + 0xd4);
  fVar58 = *(float *)(lVar28 + 0xd8);
  fVar51 = -2.1474836e+09;
  if (fVar65 != INFINITY) {
    fVar51 = (float)(int)fVar65;
  }
  uVar53 = FUN_03591d3c(fVar47 - fVar48,fVar65 - fVar51);
  *(undefined4 *)(lVar28 + 0x84) = uVar53;
  if (*(uint *)(lVar26 + 0x18) <= uVar10) goto LAB_035575f4;
  fVar58 = fVar58 - fVar51;
  *(float *)(lVar28 + 0x88) = fVar64;
  uVar53 = FUN_03591d3c(fVar47 - fVar48,fVar58);
  *(undefined4 *)(lVar26 + lVar37 * 0x178 + 0xac) = uVar53;
  if (*(uint *)(lVar26 + 0x18) <= uVar10) goto LAB_035575f4;
  fVar62 = fVar62 - fVar48;
  *(float *)(lVar26 + lVar37 * 0x178 + 0xb0) = fVar64;
  fVar48 = (float)FUN_03591d3c(fVar62,fVar58);
  *(float *)(lVar28 + 0xd4) = fVar48;
  if (*(uint *)(lVar26 + 0x18) <= uVar10) goto LAB_035575f4;
  *(float *)(lVar28 + 0xd8) = fVar64;
  uVar53 = FUN_03591d3c(fVar62,fVar65 - fVar51);
  *(undefined4 *)(lVar26 + lVar37 * 0x178 + 0xfc) = uVar53;
  uVar14 = (uint)*(undefined8 *)(lVar26 + 0x18);
  if (uVar14 <= uVar10) goto LAB_035575f4;
  *(float *)(lVar26 + lVar37 * 0x178 + 0x100) = fVar64;
LAB_0355574c:
  if (((int)uVar10 < (int)unaff_x19[0x65]) &&
     ((int)fStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar25 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar14 <= uVar10) goto LAB_035575f4;
      lVar44 = lVar26 + lVar37 * 0x178;
      *(ulong *)(lVar44 + 0x70) =
           CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar44 + 0x70) >> 0x20),
                    fVar69 + (float)*(undefined8 *)(lVar44 + 0x70));
      *(float *)(lVar44 + 0x78) = fVar49 + *(float *)(lVar44 + 0x78);
      *(ulong *)(lVar44 + 0x98) =
           CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar44 + 0x98) >> 0x20),
                    fVar69 + (float)*(undefined8 *)(lVar44 + 0x98));
      *(float *)(lVar44 + 0xa0) = fVar49 + *(float *)(lVar44 + 0xa0);
      *(ulong *)(lVar44 + 0xc0) =
           CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar44 + 0xc0) >> 0x20),
                    fVar69 + (float)*(undefined8 *)(lVar44 + 0xc0));
      *(float *)(lVar44 + 200) = fVar49 + *(float *)(lVar44 + 200);
      *(ulong *)(lVar44 + 0xe8) =
           CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar44 + 0xe8) >> 0x20),
                    fVar69 + (float)*(undefined8 *)(lVar44 + 0xe8));
      *(float *)(lVar44 + 0xf0) = fVar49 + *(float *)(lVar44 + 0xf0);
      goto UnityEngine_Animator__GetAnimatorClipInfoCount;
    }
    if (((int)uVar25 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar10 < uVar14) {
        if (*(uint *)(lVar26 + lVar37 * 0x178 + 0x68) == uStack0000000000000030) {
          lVar44 = lVar26 + lVar37 * 0x178;
          *(ulong *)(lVar44 + 0x70) =
               CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar44 + 0x70) >> 0x20),
                        fVar69 + (float)*(undefined8 *)(lVar44 + 0x70));
          *(float *)(lVar44 + 0x78) = fVar49 + *(float *)(lVar44 + 0x78);
          *(ulong *)(lVar44 + 0x98) =
               CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar44 + 0x98) >> 0x20),
                        fVar69 + (float)*(undefined8 *)(lVar44 + 0x98));
          *(float *)(lVar44 + 0xa0) = fVar49 + *(float *)(lVar44 + 0xa0);
          *(ulong *)(lVar44 + 0xc0) =
               CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar44 + 0xc0) >> 0x20),
                        fVar69 + (float)*(undefined8 *)(lVar44 + 0xc0));
          *(float *)(lVar44 + 200) = fVar49 + *(float *)(lVar44 + 200);
          *(ulong *)(lVar44 + 0xe8) =
               CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar44 + 0xe8) >> 0x20),
                        fVar69 + (float)*(undefined8 *)(lVar44 + 0xe8));
          *(float *)(lVar44 + 0xf0) = fVar49 + *(float *)(lVar44 + 0xf0);
          goto UnityEngine_Animator__GetAnimatorClipInfoCount;
        }
        goto UnityEngine_Animator__GetAnimatorTransitionInfo;
      }
      goto LAB_035575f4;
    }
  }
UnityEngine_Animator__GetAnimatorTransitionInfo:
  if (uVar14 <= uVar10) goto LAB_035575f4;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbded8);
    DAT_0411f172 = '\x01';
    uVar14 = *(uint *)(lVar26 + 0x18);
  }
  puVar6 = PTR_DAT_03cbded8;
  uVar53 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar28 = lVar26 + lVar37 * 0x178;
  *(undefined8 *)(lVar28 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar28 + 0x78) = uVar53;
  if (uVar14 <= uVar10) goto LAB_035575f4;
  uVar53 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
  lVar28 = lVar26 + lVar37 * 0x178;
  *(undefined8 *)(lVar28 + 0x98) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
  *(undefined4 *)(lVar28 + 0xa0) = uVar53;
  uVar53 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
  *(undefined8 *)(lVar28 + 0xc0) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
  *(undefined4 *)(lVar28 + 200) = uVar53;
  uVar53 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
  *(undefined8 *)(lVar28 + 0xe8) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
  *(undefined4 *)(lVar28 + 0xf0) = uVar53;
  *(undefined1 *)(lVar44 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
  if (iVar15 == 0) {
    pcVar31 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
    (*pcVar31)();
  }
  else if (iVar15 == 1) {
    pcVar31 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0355591c;
  }
LAB_03555938:
  if ((*in_stack_00000170 == 0) || (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar44 + 0x18) <= uVar10) goto LAB_035575f4;
  lVar44 = lVar44 + lVar37 * 0x178;
  uVar17 = *(undefined8 *)(lVar44 + 0x11c);
  *(undefined8 *)(lVar44 + 0x11c) =
       CONCAT44(fVar46 + (float)((ulong)uVar17 >> 0x20),fVar69 + (float)uVar17);
  *(float *)(lVar44 + 0x124) = fVar49 + *(float *)(lVar44 + 0x124);
  if ((*in_stack_00000170 == 0) || (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar44 + 0x18) <= uVar10) goto LAB_035575f4;
  lVar44 = lVar44 + lVar37 * 0x178;
  *(ulong *)(lVar44 + 0x110) =
       CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar44 + 0x110) >> 0x20),
                fVar69 + (float)*(undefined8 *)(lVar44 + 0x110));
  *(float *)(lVar44 + 0x118) = fVar49 + *(float *)(lVar44 + 0x118);
  if ((*in_stack_00000170 == 0) || (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar44 + 0x18) <= uVar10) goto LAB_035575f4;
  lVar44 = lVar44 + lVar37 * 0x178;
  *(ulong *)(lVar44 + 0x128) =
       CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar44 + 0x128) >> 0x20),
                fVar69 + (float)*(undefined8 *)(lVar44 + 0x128));
  *(float *)(lVar44 + 0x130) = fVar49 + *(float *)(lVar44 + 0x130);
  if ((*in_stack_00000170 == 0) || (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar44 + 0x18) <= uVar10) goto LAB_035575f4;
  lVar44 = lVar44 + lVar37 * 0x178;
  *(float *)(lVar44 + 0x134) = fVar69 + *(float *)(lVar44 + 0x134);
  *(ulong *)(lVar44 + 0x138) =
       CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar44 + 0x138) >> 0x20),
                fVar46 + (float)*(undefined8 *)(lVar44 + 0x138));
  lVar44 = *in_stack_00000170;
  if ((lVar44 == 0) || (lVar28 = *(long *)(lVar44 + 0x38), lVar28 == 0)) goto LAB_035574b8;
  uVar14 = *(uint *)(lVar28 + 0x18);
  if (uVar14 <= uVar10) goto LAB_035575f4;
  lVar36 = lVar28 + lVar37 * 0x178;
  uVar54 = CONCAT44(fVar69 + (float)((ulong)*(undefined8 *)(lVar36 + 0x140) >> 0x20),
                    fVar69 + (float)*(undefined8 *)(lVar36 + 0x140));
  fVar48 = fVar46 + *(float *)(lVar36 + 0x150);
  uVar55 = (ulong)(uint)fVar48;
  uVar57 = CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar36 + 0x148) >> 0x20),
                    fVar46 + (float)*(undefined8 *)(lVar36 + 0x148));
  *(float *)(lVar36 + 0x150) = fVar48;
  *(ulong *)(lVar36 + 0x140) = uVar54;
  *(ulong *)(lVar36 + 0x148) = uVar57;
  if (uVar25 == uVar56) {
    uVar56 = *unaff_x20 - 1;
    if (uVar10 == uVar56) goto LAB_03555b44;
  }
  else {
    lVar44 = *(long *)(lVar44 + 0x50);
    if (lVar44 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar44 + 0x18) <= uVar56) goto LAB_035575f4;
    lVar36 = (long)(int)uVar56;
    lVar38 = lVar44 + lVar36 * 0x5c;
    uVar57 = (ulong)(uint)*(float *)(lVar38 + 0x58);
    fVar48 = fVar46 + *(float *)(lVar38 + 0x54);
    uVar54 = (ulong)(uint)fVar48;
    fVar65 = fVar69 + *(float *)(lVar38 + 0x58);
    uVar55 = (ulong)(uint)fVar65;
    *(ulong *)(lVar38 + 0x4c) =
         CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar38 + 0x4c) >> 0x20),
                  fVar46 + (float)*(undefined8 *)(lVar38 + 0x4c));
    *(float *)(lVar38 + 0x54) = fVar48;
    *(float *)(lVar38 + 0x58) = fVar65;
    if (uVar14 <= *(uint *)(lVar38 + 0x34)) goto LAB_035575f4;
    uVar53 = *(undefined4 *)(lVar28 + (long)(int)*(uint *)(lVar38 + 0x34) * 0x178 + 0x11c);
    lVar44 = lVar44 + lVar36 * 0x5c;
    *(float *)(lVar44 + 0x70) = fVar48;
    *(undefined4 *)(lVar44 + 0x6c) = uVar53;
    lVar44 = *in_stack_00000170;
    if ((lVar44 == 0) || (lVar28 = *(long *)(lVar44 + 0x50), lVar28 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar28 + 0x18) <= uVar56) goto LAB_035575f4;
    lVar44 = *(long *)(lVar44 + 0x38);
    if (lVar44 == 0) goto LAB_035574b8;
    uVar56 = *(uint *)(lVar28 + lVar36 * 0x5c + 0x40);
    if (*(uint *)(lVar44 + 0x18) <= uVar56) goto LAB_035575f4;
    lVar28 = lVar28 + lVar36 * 0x5c;
    *(undefined4 *)(lVar28 + 0x74) = *(undefined4 *)(lVar44 + (long)(int)uVar56 * 0x178 + 0x128);
    *(undefined4 *)(lVar28 + 0x78) = *(undefined4 *)(lVar28 + 0x4c);
    uVar56 = *unaff_x20 - 1;
LAB_03555b44:
    if (uVar10 == uVar56) {
      lVar44 = *in_stack_00000170;
      if ((lVar44 == 0) || (lVar28 = *(long *)(lVar44 + 0x50), lVar28 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= uVar25) goto LAB_035575f4;
      lVar36 = lVar28 + lVar40 * 0x5c;
      uVar57 = (ulong)(uint)*(float *)(lVar36 + 0x58);
      uVar54 = CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar36 + 0x4c) >> 0x20),
                        fVar46 + (float)*(undefined8 *)(lVar36 + 0x4c));
      fVar48 = fVar46 + *(float *)(lVar36 + 0x54);
      fVar69 = fVar69 + *(float *)(lVar36 + 0x58);
      uVar55 = (ulong)(uint)fVar69;
      *(ulong *)(lVar36 + 0x4c) = uVar54;
      *(float *)(lVar36 + 0x54) = fVar48;
      *(float *)(lVar36 + 0x58) = fVar69;
      lVar44 = *(long *)(lVar44 + 0x38);
      if (lVar44 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar44 + 0x18) <= *(uint *)(lVar36 + 0x34)) goto LAB_035575f4;
      uVar53 = *(undefined4 *)(lVar44 + (long)(int)*(uint *)(lVar36 + 0x34) * 0x178 + 0x11c);
      lVar28 = lVar28 + lVar40 * 0x5c;
      *(float *)(lVar28 + 0x70) = fVar48;
      *(undefined4 *)(lVar28 + 0x6c) = uVar53;
      lVar44 = *in_stack_00000170;
      if ((lVar44 == 0) || (lVar28 = *(long *)(lVar44 + 0x50), lVar28 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= uVar25) goto LAB_035575f4;
      lVar44 = *(long *)(lVar44 + 0x38);
      if (lVar44 == 0) goto LAB_035574b8;
      uVar56 = *(uint *)(lVar28 + lVar40 * 0x5c + 0x40);
      if (*(uint *)(lVar44 + 0x18) <= uVar56) goto LAB_035575f4;
      lVar28 = lVar28 + lVar40 * 0x5c;
      *(undefined4 *)(lVar28 + 0x74) = *(undefined4 *)(lVar44 + (long)(int)uVar56 * 0x178 + 0x128);
      *(undefined4 *)(lVar28 + 0x78) = *(undefined4 *)(lVar28 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar19 = FUN_026b82c4(uVar39,0);
  if (((((uVar19 & 1) == 0) && (1 < uVar39 - 0x2010)) && (uVar39 != 0xad)) && (uVar39 != 0x2d)) {
    if (bVar8) {
      if (((uVar12 != 1) && ((int)uVar10 < (int)(*(uint *)(lVar26 + 0x18) - 1))) &&
         (((int)uVar10 < (int)*unaff_x20 && ((uVar39 == 0x2019 || (uVar39 == 0x27)))))) {
        if (*(uint *)(lVar26 + 0x18) <= uVar12 - 2) goto LAB_035575f4;
        uVar4 = *(undefined2 *)(lVar26 + lVar29 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar19 = FUN_026b82c4(uVar4,0);
        if ((uVar19 & 1) != 0) {
          if (*(uint *)(lVar26 + 0x18) <= uVar12) goto LAB_035575f4;
          uVar4 = *(undefined2 *)(lVar26 + lVar29 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar19 = FUN_026b82c4(uVar4,0);
          if ((uVar19 & 1) != 0) goto LAB_03555d68;
        }
      }
    }
    else {
      if (uVar12 != 1) {
LAB_0355686c:
        bVar8 = false;
        goto LAB_03555d70;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar19 = FUN_026b81f8(uVar39,0);
      if ((uVar19 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar19 = FUN_026b63d8(uVar39,0);
        if (((uVar39 != 0x200b) && ((uVar19 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0355686c;
      }
    }
    if (uVar10 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar19 = FUN_026b82c4(uVar39,0);
      iVar15 = iStack0000000000000128;
      if ((uVar19 & 1) == 0) goto LAB_03556070;
    }
    else {
LAB_03556070:
      iVar15 = uVar12 - 2;
    }
    lVar44 = *in_stack_00000170;
    if (lVar44 == 0) goto LAB_035574b8;
    lVar28 = *(long *)(lVar44 + 0x40);
    if (lVar28 == 0) goto LAB_035574b8;
    uVar56 = *(uint *)(lVar44 + 0x24);
    iVar16 = *(int *)(lVar28 + 0x18);
    if (iVar16 < (int)(uVar56 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar44 + 0x40),iVar16 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar44 = *in_stack_00000170;
      if (lVar44 == 0) goto LAB_035574b8;
    }
    lVar44 = *(long *)(lVar44 + 0x40);
    if (lVar44 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar44 + 0x18) <= uVar56) goto LAB_035575f4;
    lVar44 = lVar44 + (long)(int)uVar56 * 0x18;
    *(long **)(lVar44 + 0x20) = unaff_x19;
    *(float *)(lVar44 + 0x28) = fStack0000000000000158;
    *(int *)(lVar44 + 0x2c) = iVar15;
    *(int *)(lVar44 + 0x30) = (iVar15 - (int)fStack0000000000000158) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar44 = unaff_x19[0x6d];
    if (lVar44 == 0) goto LAB_035574b8;
    lVar28 = *(long *)(lVar44 + 0x50);
    *(int *)(lVar44 + 0x24) = *(int *)(lVar44 + 0x24) + 1;
    if (lVar28 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar28 + 0x18) <= uVar25) goto LAB_035575f4;
    lVar28 = lVar28 + lVar40 * 0x5c;
    bVar8 = false;
    fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
    *(int *)(lVar28 + 0x30) = *(int *)(lVar28 + 0x30) + 1;
  }
  else {
    if (!bVar8) {
      fStack0000000000000158 = (float)uVar10;
    }
    if (uVar10 == *unaff_x20 - 1) {
      lVar44 = *in_stack_00000170;
      if (lVar44 == 0) goto LAB_035574b8;
      lVar28 = *(long *)(lVar44 + 0x40);
      if (lVar28 == 0) goto LAB_035574b8;
      uVar56 = *(uint *)(lVar44 + 0x24);
      iVar15 = *(int *)(lVar28 + 0x18);
      if (iVar15 < (int)(uVar56 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar44 + 0x40),iVar15 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar44 = *in_stack_00000170;
        if (lVar44 == 0) goto LAB_035574b8;
      }
      lVar44 = *(long *)(lVar44 + 0x40);
      if (lVar44 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar44 + 0x18) <= uVar56) goto LAB_035575f4;
      lVar44 = lVar44 + (long)(int)uVar56 * 0x18;
      *(long **)(lVar44 + 0x20) = unaff_x19;
      *(float *)(lVar44 + 0x28) = fStack0000000000000158;
      *(uint *)(lVar44 + 0x2c) = uVar10;
      *(uint *)(lVar44 + 0x30) = uVar12 - (int)fStack0000000000000158;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar44 = unaff_x19[0x6d];
      if (lVar44 == 0) goto LAB_035574b8;
      lVar28 = *(long *)(lVar44 + 0x50);
      *(int *)(lVar44 + 0x24) = *(int *)(lVar44 + 0x24) + 1;
      if (lVar28 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= uVar25) goto LAB_035575f4;
      lVar28 = lVar28 + lVar40 * 0x5c;
      fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
      *(int *)(lVar28 + 0x30) = *(int *)(lVar28 + 0x30) + 1;
    }
LAB_03555d68:
    bVar8 = true;
  }
LAB_03555d70:
  if ((*in_stack_00000170 == 0) || (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 == 0))
  goto LAB_035574b8;
  uVar56 = *(uint *)(lVar44 + 0x18);
  if (uVar56 <= uVar10) goto LAB_035575f4;
  if ((*(byte *)(lVar44 + lVar37 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar9) {
LAB_03555da0:
      if (uVar56 <= uVar12 - 2) goto LAB_035575f4;
      lVar40 = *unaff_x19;
      uVar56 = *(uint *)(lVar44 + lVar29 + -0x330);
      uVar53 = *(undefined4 *)(lVar44 + lVar29 + -0x2f8);
LAB_035562ec:
      pcVar31 = *(code **)(lVar40 + 0x8d8);
LAB_035562f4:
      uVar57 = (ulong)uVar56;
      uVar54 = (ulong)(uint)_bStack0000000000000070;
      uVar55 = (ulong)_bStack0000000000000074;
      (*pcVar31)(fStack0000000000000078,uVar54,uVar55,uVar57,fStack0000000000000104,0,
                 in_stack_00000088._4_4_,uVar53);
      puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar44 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar44 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar44 = *(long *)puVar6;
      }
LAB_03556348:
      bVar9 = false;
      fVar50 = 0.0;
      fStack0000000000000104 = *(float *)(*(long *)(lVar44 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
    else {
LAB_03556254:
      bVar9 = false;
    }
  }
  else {
    lVar44 = lVar44 + lVar37 * 0x178;
    iVar15 = *(int *)(lVar44 + 0x68);
    *(int *)(lVar44 + 0x16c) = iVar13;
    if ((((int)unaff_x19[0x65] < (int)uVar10) || ((int)unaff_x19[0x66] < (int)uVar25)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar15 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar19 = FUN_026b63d8(uVar39,0);
    if ((uVar39 != 0x200b) && ((uVar19 & 1) == 0)) {
      lVar44 = *in_stack_00000170;
      if ((lVar44 == 0) || (lVar40 = *(long *)(lVar44 + 0x38), lVar40 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar40 + 0x18) <= uVar10) goto LAB_035575f4;
      fVar48 = *(float *)(lVar40 + lVar37 * 0x178 + 0x160);
      if (fVar50 <= fVar48) {
        fVar50 = fVar48;
      }
      if (fStack0000000000000100 <= ABS(fVar64)) {
        fStack0000000000000100 = ABS(fVar64);
      }
      if (iVar15 != in_stack_00000068._4_4_) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar44 = *in_stack_00000170;
          if (lVar44 == 0) goto LAB_035574b8;
          lVar40 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar40 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar40 + 0x15a8);
      }
      lVar44 = *(long *)(lVar44 + 0x38);
      if (lVar44 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar44 + 0x18) <= uVar10) goto LAB_035575f4;
      if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
      fVar65 = *(float *)(lVar44 + lVar37 * 0x178 + 0x14c);
      fVar48 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar65 = fVar65 + fVar50 * fVar48;
      if (fVar65 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar65;
      }
      uVar54 = (ulong)(uint)fStack0000000000000104;
      in_stack_00000068._4_4_ = iVar15;
    }
    if (!bVar9) {
      bVar9 = false;
      if ((((uVar39 == 0xd) || ((uVar39 & 0xfffe) == 10)) || ((int)uVar34 < (int)uVar10)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_03556364;
      if (uVar10 == uVar34) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar19 = FUN_026b97f8(uVar39,0);
        if ((uVar19 & 1) != 0) goto LAB_03556254;
      }
      if ((*in_stack_00000170 == 0) || (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar44 + 0x18) <= uVar10) goto LAB_035575f4;
      lVar44 = lVar44 + lVar37 * 0x178;
      in_stack_00000088._4_4_ = *(float *)(lVar44 + 0x160);
      fStack0000000000000078 = *(float *)(lVar44 + 0x11c);
      uVar55 = (ulong)(uint)fStack0000000000000078;
      bVar9 = fVar50 != 0.0;
      fVar48 = in_stack_00000088._4_4_;
      if (bVar9) {
        fVar48 = fVar50;
      }
      fVar50 = fVar48;
      uVar67 = *(undefined4 *)(lVar44 + 0x168);
      _bStack0000000000000074 = 0;
      fVar48 = fVar64;
      if (bVar9) {
        fVar48 = fStack0000000000000100;
      }
      uVar54 = (ulong)(uint)fVar48;
      _bStack0000000000000070 = fStack0000000000000104;
      fStack0000000000000100 = fVar48;
    }
    if (*unaff_x20 == 1) {
      if ((*in_stack_00000170 != 0) && (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 != 0))
      {
        if (uVar10 < *(uint *)(lVar44 + 0x18)) {
          lVar44 = lVar44 + lVar37 * 0x178;
          lVar40 = *unaff_x19;
          uVar56 = *(uint *)(lVar44 + 0x128);
          uVar53 = *(undefined4 *)(lVar44 + 0x160);
          goto LAB_035562ec;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if ((uVar10 == uVar32) || ((int)uVar34 <= (int)uVar10)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar19 = FUN_026b63d8(uVar39,0);
      if ((*in_stack_00000170 != 0) && (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 != 0))
      {
        lVar40 = lVar37;
        uVar56 = uVar10;
        if (uVar39 == 0x200b || (uVar19 & 1) != 0) {
          lVar40 = lVar20;
          uVar56 = uVar34;
        }
        if (uVar56 < *(uint *)(lVar44 + 0x18)) {
          lVar44 = lVar44 + lVar40 * 0x178;
          uVar56 = *(uint *)(lVar44 + 0x128);
          uVar53 = *(undefined4 *)(lVar44 + 0x160);
          pcVar31 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_035562f4;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 != 0))
      {
        uVar56 = *(uint *)(lVar44 + 0x18);
        goto LAB_03555da0;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar10 < (int)(*unaff_x20 - 1)) {
      if ((*in_stack_00000170 == 0) || (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar44 + 0x18) <= uVar12) goto LAB_035575f4;
      uVar19 = FUN_03567ad8(uVar67,*(undefined4 *)(lVar44 + lVar29),0);
      if ((uVar19 & 1) == 0) {
        if ((*in_stack_00000170 != 0) &&
           (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 != 0)) {
          if (uVar10 < *(uint *)(lVar44 + 0x18)) {
            lVar44 = lVar44 + lVar37 * 0x178;
            uVar57 = (ulong)*(uint *)(lVar44 + 0x128);
            uVar55 = (ulong)_bStack0000000000000074;
            uVar54 = (ulong)(uint)_bStack0000000000000070;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fStack0000000000000078,uVar54,uVar55,uVar57,fStack0000000000000104,0,
                       in_stack_00000088._4_4_,*(undefined4 *)(lVar44 + 0x160));
            puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar44 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar44 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar44 = *(long *)puVar6;
            }
            goto LAB_03556348;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
    }
    bVar9 = true;
  }
LAB_03556364:
  if ((*in_stack_00000170 == 0) || (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar44 + 0x18) <= uVar10) goto LAB_035575f4;
  if (lVar35 == 0) goto LAB_035574b8;
  uVar56 = *(uint *)(lVar44 + lVar37 * 0x178 + 400);
  fVar48 = (float)FUN_03776a30(lVar35 + 0x50,0);
  if ((uVar56 >> 6 & 1) == 0) {
    if ((_iStack0000000000000128 & 0x100000000) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar44 + 0x18) <= uVar12 - 2) goto LAB_035575f4;
      uVar56 = *(uint *)(lVar44 + lVar29 + -0x330);
      fVar46 = *(float *)(lVar44 + lVar29 + -0x30c);
      pcVar31 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
      uVar57 = (ulong)uVar56;
      uVar54 = (ulong)(uint)fStack000000000000009c;
      uVar55 = (ulong)(uint)fStack0000000000000098;
      (*pcVar31)(fStack00000000000000a0,uVar54,uVar55,uVar57,
                 fStack00000000000000a8 * fVar48 + fVar46,0,fStack00000000000000a8,
                 fStack00000000000000a8);
    }
LAB_03556948:
    _iStack0000000000000128 = _iStack0000000000000128 & 0xffffffff;
  }
  else {
    lVar44 = *in_stack_00000170;
    if ((lVar44 == 0) || (lVar40 = *(long *)(lVar44 + 0x38), lVar40 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar40 + 0x18) <= uVar10) goto LAB_035575f4;
    *(int *)(lVar40 + lVar37 * 0x178 + 0x174) = iVar13;
    if ((((int)unaff_x19[0x65] < (int)uVar10) || ((int)unaff_x19[0x66] < (int)uVar25)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar40 + lVar37 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar39 == 0xd) || ((uVar39 & 0xfffe) == 10)) || ((int)uVar34 < (int)uVar10)) ||
       ((_iStack0000000000000128 & 0x100000000) != 0 || !bVar1)) {
LAB_035564e8:
      if ((_iStack0000000000000128 & 0x100000000) == 0) goto LAB_03556948;
    }
    else {
      if (uVar10 == uVar34) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar19 = FUN_026b97f8(uVar39,0);
        if ((uVar19 & 1) != 0) goto LAB_035564e8;
        lVar44 = *in_stack_00000170;
        if (lVar44 == 0) goto LAB_035574b8;
      }
      lVar44 = *(long *)(lVar44 + 0x38);
      if (lVar44 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar44 + 0x18) <= uVar10) goto LAB_035575f4;
      lVar44 = lVar44 + lVar37 * 0x178;
      fStack0000000000000040 = *(float *)(lVar44 + 0x60);
      fStack0000000000000038 = *(float *)(lVar44 + 0x14c);
      uVar54 = (ulong)(uint)fStack0000000000000038;
      fStack00000000000000a0 = *(float *)(lVar44 + 0x11c);
      uVar55 = (ulong)(uint)fStack00000000000000a0;
      fStack00000000000000a8 = *(float *)(lVar44 + 0x160);
      fStack000000000000009c = fVar48 * fStack00000000000000a8 + fStack0000000000000038;
      fStack0000000000000098 = 0.0;
    }
    uVar56 = *unaff_x20;
    if (uVar56 == 1) {
LAB_03556628:
      if ((*in_stack_00000170 != 0) && (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 != 0))
      {
        if (uVar10 < *(uint *)(lVar44 + 0x18)) {
          lVar44 = lVar44 + lVar37 * 0x178;
          lVar20 = *unaff_x19;
          uVar56 = *(uint *)(lVar44 + 0x128);
          fVar46 = *(float *)(lVar44 + 0x14c);
LAB_03556654:
          pcVar31 = *(code **)(lVar20 + 0x8d8);
          goto LAB_03556914;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (uVar10 == uVar32) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar19 = FUN_026b63d8(uVar39,0);
      if ((*in_stack_00000170 != 0) && (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 != 0))
      {
        uVar56 = *(uint *)(lVar44 + 0x18);
        if (uVar39 == 0x200b || (uVar19 & 1) != 0) {
          if (uVar56 <= uVar34) goto LAB_035575f4;
        }
        else {
FUN_035568e8:
          lVar20 = lVar37;
          if (uVar56 <= uVar10) goto LAB_035575f4;
        }
LAB_035568f0:
        lVar44 = lVar44 + lVar20 * 0x178;
        fVar46 = *(float *)(lVar44 + 0x14c);
        uVar56 = *(uint *)(lVar44 + 0x128);
        pcVar31 = *(code **)(*unaff_x19 + 0x8d8);
        goto LAB_03556914;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar10 < (int)uVar56) {
      lVar44 = *in_stack_00000170;
      if ((lVar44 != 0) && (lVar40 = *(long *)(lVar44 + 0x38), lVar40 != 0)) {
        if (uVar12 < *(uint *)(lVar40 + 0x18)) {
          if (*(float *)(lVar40 + lVar29 + -0x108) == fStack0000000000000040) {
            fVar65 = *(float *)(lVar40 + lVar29 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar54 = (ulong)(uint)fStack0000000000000038;
            uVar19 = FUN_03567bac(fVar46 + fVar65,uVar54,0);
            if ((uVar19 & 1) != 0) {
              uVar56 = *unaff_x20;
              goto LAB_03556744;
            }
            lVar44 = *in_stack_00000170;
            if (lVar44 == 0) goto LAB_035574b8;
          }
          lVar44 = *(long *)(lVar44 + 0x38);
          if (lVar44 != 0) {
            uVar56 = *(uint *)(lVar44 + 0x18);
            if ((int)uVar10 <= (int)uVar34) goto FUN_035568e8;
            if (uVar34 < uVar56) goto LAB_035568f0;
            goto LAB_035575f4;
          }
          goto LAB_035574b8;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
LAB_03556744:
    if ((int)uVar10 < (int)uVar56) {
      iVar15 = FUN_036d3364(lVar35,0);
      if (*(uint *)(lVar26 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar44 = *(long *)(lVar26 + lVar29 + -0x130);
      if (lVar44 == 0) goto LAB_035574b8;
      iVar16 = FUN_036d3364(lVar44,0);
      if (iVar15 != iVar16) goto LAB_03556628;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 != 0))
      {
        if (uVar12 - 2 < *(uint *)(lVar44 + 0x18)) {
          lVar20 = *unaff_x19;
          uVar56 = *(uint *)(lVar44 + lVar29 + -0x330);
          fVar46 = *(float *)(lVar44 + lVar29 + -0x30c);
          goto LAB_03556654;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    _iStack0000000000000128 = CONCAT44(1,iStack0000000000000128);
  }
  if ((*in_stack_00000170 == 0) || (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 == 0))
  goto LAB_035574b8;
  uVar56 = (uint)*(undefined8 *)(lVar44 + 0x18);
  if (uVar56 <= uVar10) goto LAB_035575f4;
  if ((*(byte *)(lVar44 + lVar37 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar5) {
      uVar55 = (ulong)uStack00000000000000c0;
      uVar54 = (ulong)(uint)fStack00000000000000dc;
      uVar57 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar54,uVar55,uVar57,fStack00000000000000d0,uVar55);
    }
LAB_035569b4:
    bVar5 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar10) || ((int)unaff_x19[0x66] < (int)uVar25)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar44 + lVar37 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar5) {
      if ((((uVar39 == 0xd) || ((uVar39 & 0xfffe) == 10)) || ((int)uVar34 < (int)uVar10)) ||
         (!bVar1)) goto LAB_035569b4;
      if (uVar10 == uVar34) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar19 = FUN_026b97f8(uVar39,0);
        if ((uVar19 & 1) != 0) goto LAB_035569b4;
      }
      puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar20 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar20 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar20 = *(long *)puVar6;
      }
      if ((*in_stack_00000170 == 0) || (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 == 0))
      goto LAB_035574b8;
      uVar56 = (uint)*(undefined8 *)(lVar44 + 0x18);
      if (uVar56 <= uVar10) goto LAB_035575f4;
      lVar20 = *(long *)(lVar20 + 0xb8);
      lVar35 = lVar44 + lVar37 * 0x178;
      in_stack_000017b8 = *(undefined8 *)(lVar35 + 0x184);
      in_stack_000017b0 = *(undefined8 *)(lVar35 + 0x17c);
      fStack00000000000000d8 = *(float *)(lVar20 + 0x1598);
      fStack00000000000000dc = *(float *)(lVar20 + 0x159c);
      in_stack_000017c0 = *(float *)(lVar35 + 0x18c);
      fStack00000000000000c8 = *(float *)(lVar20 + 0x15a0);
      fStack00000000000000d0 = *(float *)(lVar20 + 0x15a4);
      uStack00000000000000c0 = 0;
    }
    if (uVar56 <= uVar10) goto LAB_035575f4;
    lVar44 = lVar44 + lVar37 * 0x178;
    fVar48 = *(float *)(lVar44 + 0x128);
    fVar51 = *(float *)(lVar44 + 0x188);
    uVar18 = *(undefined8 *)(lVar44 + 0x17c);
    fVar62 = *(float *)(lVar44 + 0x184);
    uVar17 = *(undefined8 *)(lVar44 + 0x184);
    fVar49 = *(float *)(lVar44 + 0x18c);
    fVar46 = *(float *)(lVar44 + 0x11c);
    fVar47 = *(float *)(lVar44 + 0x148);
    fVar65 = *(float *)(lVar44 + 0x150);
    in_stack_00000178 = uVar18;
    fStack0000000000000180 = fVar62;
    fStack0000000000000184 = fVar51;
    in_stack_00000188 = fVar49;
    in_stack_00000190 = in_stack_000017b0;
    in_stack_00000198 = in_stack_000017b8;
    in_stack_000001a0 = in_stack_000017c0;
    uVar19 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
    lVar44 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if ((uVar19 & 1) == 0) {
      if (*(int *)(lVar44 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar44);
      }
      fVar48 = fVar48 + (float)in_stack_000017b8;
      uVar55 = (ulong)(uint)fVar48;
      fVar46 = fVar46 - (float)((ulong)in_stack_000017b0 >> 0x20);
      fVar65 = fVar65 - in_stack_000017c0;
      uVar54 = (ulong)(uint)fVar65;
      fVar47 = fVar47 + (float)((ulong)in_stack_000017b8 >> 0x20);
      uVar57 = (ulong)(uint)fVar47;
      if (fVar46 <= fStack00000000000000d8) {
        fStack00000000000000d8 = fVar46;
      }
      if (fVar65 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar65;
      }
      if (fStack00000000000000c8 <= fVar48) {
        fStack00000000000000c8 = fVar48;
      }
      if (fStack00000000000000d0 <= fVar47) {
        fStack00000000000000d0 = fVar47;
      }
    }
    else {
      if (*(int *)(lVar44 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar44);
      }
      fVar46 = (fVar46 + (fStack00000000000000c8 - (float)in_stack_000017b8)) * 0.5;
      uVar57 = (ulong)(uint)fVar46;
      if (fVar65 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar65;
      }
      uVar54 = (ulong)(uint)fStack00000000000000dc;
      uVar55 = (ulong)uStack00000000000000c0;
      if (fStack00000000000000d0 <= fVar47) {
        fStack00000000000000d0 = fVar47;
      }
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar54,uVar55,uVar57,fStack00000000000000d0,uVar55);
      fStack00000000000000dc = fVar65 - fVar49;
      fStack00000000000000c8 = fVar48 + fVar62;
      uStack00000000000000c0 = 0;
      fStack00000000000000d0 = fVar47 + fVar51;
      fStack00000000000000d8 = fVar46;
      in_stack_000017b0 = uVar18;
      in_stack_000017b8 = uVar17;
      in_stack_000017c0 = fVar49;
    }
    if (((*unaff_x20 == 1) || (uVar10 == uVar32)) || (((int)uVar34 <= (int)uVar10 || (!bVar1)))) {
      uVar55 = (ulong)uStack00000000000000c0;
      uVar54 = (ulong)(uint)fStack00000000000000dc;
      uVar57 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar54,uVar55,uVar57,fStack00000000000000d0,uVar55);
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
  }
  uVar10 = *unaff_x20;
  lVar29 = lVar29 + 0x178;
  _iStack0000000000000128 = CONCAT44(fStack000000000000012c,iStack0000000000000128 + 1);
  bVar1 = (int)uVar10 <= (int)uVar12;
  plVar42 = in_stack_00000170;
  uVar12 = uVar12 + 1;
  uVar56 = uVar25;
  if (bVar1) goto FUN_03556ed8;
  goto LAB_03554e78;
FUN_03556ed8:
  lVar26 = *in_stack_00000170;
  if (lVar26 != 0) {
    iVar13 = uVar25 + 1;
    plVar43 = (long *)OVRPlugin_Media_TypeInfo;
LAB_03556f00:
    *(uint *)(lVar26 + 0x18) = uVar10;
    lVar29 = unaff_x19[0xd4];
    *(int *)(lVar26 + 0x2c) = iVar13;
    if ((int)uVar10 < 1 || fStack00000000000000d4 == 0.0) {
      fStack00000000000000d4 = 1.4013e-45;
    }
    *(int *)(lVar26 + 0x1c) = (int)lVar29;
    *(float *)(lVar26 + 0x24) = fStack00000000000000d4;
    *(int *)(lVar26 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar19 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar19 & 1) == 0)) {
LAB_03554724:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar26 = unaff_x19[0xdf];
    if (lVar26 != 0) {
      (**(code **)(lVar26 + 0x18))
                (*(undefined8 *)(lVar26 + 0x40),*plVar42,*(undefined8 *)(lVar26 + 0x28));
    }
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    iVar13 = FUN_03911ee4(unaff_x19[0xe5],0);
    if (iVar13 != 0x19) {
      lVar26 = unaff_x19[0xe5];
      if (lVar26 == 0) goto LAB_035574b8;
      uVar10 = FUN_03911ee4(lVar26,0);
      FUN_03911f20(lVar26,uVar10 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*plVar42 == 0) || (lVar26 = *(long *)(*plVar42 + 0x60), lVar26 == 0)) goto LAB_035574b8;
      if (*(int *)(*plVar43 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar26 + 0x18) == 0) goto LAB_035575f4;
      FUN_03596b20(lVar26 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar26 = *(long *)(unaff_x19[0x6d] + 0x60), lVar26 != 0)) {
        if (*(int *)(lVar26 + 0x18) == 0) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar26 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar26 = *(long *)(unaff_x19[0x6d] + 0x60), lVar26 != 0)) {
            if (*(int *)(lVar26 + 0x18) == 0) goto LAB_035575f4;
            if (unaff_x19[0x74] != 0) {
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar26 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar26 = *(long *)(unaff_x19[0x6d] + 0x60), lVar26 != 0)) {
                if (*(int *)(lVar26 + 0x18) == 0) goto LAB_035575f4;
                if (unaff_x19[0x74] != 0) {
                  FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar26 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar26 = *(long *)(unaff_x19[0x6d] + 0x60), lVar26 != 0)) {
                    if (*(int *)(lVar26 + 0x18) == 0) goto LAB_035575f4;
                    if (unaff_x19[0x74] != 0) {
                      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar26 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_036aa280(unaff_x19[0x74],0);
                        if (unaff_x19[0xe4] != 0) {
                          FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
                          if (unaff_x19[0xe4] != 0) {
                            uVar17 = FUN_0390ef60(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar10 = FUN_0390ed3c(unaff_x19[0xe4],0);
                              lVar26 = *plVar42;
                              if (lVar26 != 0) {
                                lVar44 = 0;
                                lVar29 = 0;
                                do {
                                  uVar19 = lVar29 + 1;
                                  if ((long)*(int *)(lVar26 + 0x34) <= (long)uVar19)
                                  goto LAB_03554724;
                                  lVar26 = *(long *)(lVar26 + 0x60);
                                  if (lVar26 == 0) break;
                                  if (*(int *)(*plVar43 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  if (*(uint *)(lVar26 + 0x18) <= uVar19) goto LAB_035575f4;
                                  FUN_03596a20(lVar26 + lVar44 + 0x70,0);
                                  lVar26 = unaff_x19[0xe1];
                                  if (lVar26 == 0) break;
                                  if (*(uint *)(lVar26 + 0x18) <= uVar19) goto LAB_035575f4;
                                  uVar18 = *(undefined8 *)(lVar26 + lVar29 * 8 + 0x28);
                                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar22 = FUN_036d35a8(uVar18,0,0);
                                  if ((uVar22 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                      if ((*plVar42 == 0) ||
                                         (lVar26 = *(long *)(*plVar42 + 0x60), lVar26 == 0)) break;
                                      if (*(int *)(*plVar43 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      if (*(uint *)(lVar26 + 0x18) <= uVar19) goto LAB_035575f4;
                                      FUN_03596b20(lVar26 + lVar44 + 0x70,1,0);
                                    }
                                    lVar26 = unaff_x19[0xe1];
                                    if (lVar26 == 0) break;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar26 = *(long *)(lVar26 + lVar29 * 8 + 0x28);
                                    if (lVar26 == 0) break;
                                    lVar26 = UnityEngine_Material__GetColorArray(lVar26,0);
                                    if ((*plVar42 == 0) ||
                                       (lVar20 = *(long *)(*plVar42 + 0x60), lVar20 == 0)) break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar19) goto LAB_035575f4;
                                    if (lVar26 == 0) break;
                                    FUN_036a460c(lVar26,*(undefined8 *)(lVar20 + lVar44 + 0x80),0);
                                    lVar26 = unaff_x19[0xe1];
                                    if (lVar26 == 0) break;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar26 = *(long *)(lVar26 + lVar29 * 8 + 0x28);
                                    if (lVar26 == 0) break;
                                    lVar26 = UnityEngine_Material__GetColorArray(lVar26,0);
                                    if ((*plVar42 == 0) ||
                                       (lVar20 = *(long *)(*plVar42 + 0x60), lVar20 == 0)) break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar19) goto LAB_035575f4;
                                    if (lVar26 == 0) break;
                                    FUN_036a4810(lVar26,*(undefined8 *)(lVar20 + lVar44 + 0x98),0);
                                    lVar26 = unaff_x19[0xe1];
                                    if (lVar26 == 0) break;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar26 = *(long *)(lVar26 + lVar29 * 8 + 0x28);
                                    if (lVar26 == 0) break;
                                    lVar26 = UnityEngine_Material__GetColorArray(lVar26,0);
                                    if ((*plVar42 == 0) ||
                                       (lVar20 = *(long *)(*plVar42 + 0x60), lVar20 == 0)) break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar19) goto LAB_035575f4;
                                    if (lVar26 == 0) break;
                                    FUN_036a48bc(lVar26,*(undefined8 *)(lVar20 + lVar44 + 0xa0),0);
                                    lVar26 = unaff_x19[0xe1];
                                    if (lVar26 == 0) break;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar26 = *(long *)(lVar26 + lVar29 * 8 + 0x28);
                                    if (lVar26 == 0) break;
                                    lVar26 = UnityEngine_Material__GetColorArray(lVar26,0);
                                    if ((*plVar42 == 0) ||
                                       (lVar20 = *(long *)(*plVar42 + 0x60), lVar20 == 0)) break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar19) goto LAB_035575f4;
                                    if (lVar26 == 0) break;
                                    FUN_036a4e24(lVar26,*(undefined8 *)(lVar20 + lVar44 + 0xa8),0);
                                    lVar26 = unaff_x19[0xe1];
                                    if (lVar26 == 0) break;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar26 = *(long *)(lVar26 + lVar29 * 8 + 0x28);
                                    if ((lVar26 == 0) ||
                                       (lVar26 = UnityEngine_Material__GetColorArray(lVar26,0),
                                       lVar26 == 0)) break;
                                    FUN_036aa280(lVar26,0);
                                    lVar26 = unaff_x19[0xe1];
                                    if (lVar26 == 0) break;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar26 = *(long *)(lVar26 + lVar29 * 8 + 0x28);
                                    if (lVar26 == 0) break;
                                    lVar26 = FUN_037b514c(lVar26,0);
                                    lVar20 = unaff_x19[0xe1];
                                    if (lVar20 == 0) break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar20 = *(long *)(lVar20 + lVar29 * 8 + 0x28);
                                    if ((lVar20 == 0) ||
                                       (uVar18 = UnityEngine_Material__GetColorArray(lVar20,0),
                                       lVar26 == 0)) break;
                                    FUN_0390f3a4(lVar26,uVar18,0);
                                    lVar26 = unaff_x19[0xe1];
                                    if (lVar26 == 0) break;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar26 = *(long *)(lVar26 + lVar29 * 8 + 0x28);
                                    if ((lVar26 == 0) ||
                                       (lVar26 = FUN_037b514c(lVar26,0), lVar26 == 0)) break;
                                    FUN_0390eec8(uVar17,uVar54,uVar55,uVar57,lVar26,0);
                                    lVar26 = unaff_x19[0xe1];
                                    if (lVar26 == 0) break;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar26 = *(long *)(lVar26 + lVar29 * 8 + 0x28);
                                    if ((lVar26 == 0) ||
                                       (lVar26 = FUN_037b514c(lVar26,0), lVar26 == 0)) break;
                                    FUN_0390ed78(lVar26,uVar10 & 1,0);
                                    lVar26 = unaff_x19[0xe1];
                                    if (lVar26 == 0) break;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar19) goto LAB_035575f4;
                                    plVar41 = *(long **)(lVar26 + lVar29 * 8 + 0x28);
                                    uVar12 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar41 == (long *)0x0) break;
                                    (**(code **)(*plVar41 + 0x2c8))
                                              (plVar41,uVar12 & 1,*(undefined8 *)(*plVar41 + 0x2d0))
                                    ;
                                  }
                                  lVar26 = *plVar42;
                                  lVar29 = lVar29 + 1;
                                  lVar44 = lVar44 + 0x50;
                                } while (lVar26 != 0);
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


