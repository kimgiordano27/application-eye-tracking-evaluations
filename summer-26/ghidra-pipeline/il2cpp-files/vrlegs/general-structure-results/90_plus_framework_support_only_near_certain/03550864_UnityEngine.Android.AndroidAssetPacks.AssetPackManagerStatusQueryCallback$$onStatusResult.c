/*
FUNCTION_NAME: UnityEngine.Android.AndroidAssetPacks.AssetPackManagerStatusQueryCallback$$onStatusResult
ENTRY_POINT: 03550864
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


void UnityEngine_Android_AndroidAssetPacks_AssetPackManagerStatusQueryCallback__onStatusResult
               (long param_1,float param_2,ulong param_3,float param_4)

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
  undefined4 *puVar26;
  long lVar27;
  uint in_w9;
  long lVar28;
  float *pfVar29;
  code *pcVar30;
  byte in_w10;
  uint uVar31;
  float *pfVar32;
  uint in_w11;
  uint uVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  uint uVar38;
  long lVar39;
  long *unaff_x19;
  uint *unaff_x20;
  long *unaff_x21;
  long *plVar40;
  ulong unaff_x24;
  long lVar41;
  long *plVar42;
  long *unaff_x28;
  long lVar43;
  undefined8 *unaff_x29;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined4 uVar52;
  ulong uVar53;
  ulong uVar54;
  uint uVar55;
  ulong uVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  ulong unaff_d11;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined4 uVar66;
  float fVar67;
  float fVar68;
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
  uint uStack000000000000006c;
  float fStack0000000000000070;
  byte bStack0000000000000074;
  float fStack0000000000000078;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  float in_stack_00000098;
  float fStack000000000000009c;
  float fStack00000000000000a0;
  float fStack00000000000000a8;
  long *in_stack_000000b8;
  uint in_stack_000000c0;
  float fStack00000000000000c4;
  float fStack00000000000000c8;
  float fStack00000000000000d0;
  float fStack00000000000000d4;
  float fStack00000000000000d8;
  float fStack00000000000000dc;
  long *in_stack_000000e0;
  undefined8 uStack00000000000000e8;
  float fStack00000000000000fc;
  float fStack0000000000000100;
  float fStack0000000000000104;
  float fStack0000000000000114;
  int iStack0000000000000128;
  float fStack000000000000012c;
  float fStack0000000000000158;
  float fStack000000000000015c;
  long *in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000178;
  float fStack0000000000000180;
  float fStack0000000000000184;
  float in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  float in_stack_000001a0;
  uint in_stack_000008a0;
  undefined4 in_stack_000008a4;
  undefined4 in_stack_000008b0;
  undefined4 in_stack_00000c18;
  undefined4 in_stack_00000c1c;
  undefined8 in_stack_00000c20;
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
  
  fStack000000000000009c = (float)param_3;
  uStack000000000000006c = in_w11;
  fStack00000000000000c4 = param_4;
  fStack00000000000000d4 = param_2;
  fStack00000000000000fc = fStack000000000000009c;
LAB_0355087c:
  fVar58 = (float)unaff_d11;
  if ((int)*(uint *)(param_1 + 0x18) <= (int)in_w9) {
LAB_0355459c:
    fVar58 = (float)param_3;
    if (((char)unaff_x19[0x47] != '\0') &&
       (fVar58 = DAT_00d389f8,
       DAT_00d389f8 < *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
      fVar58 = *(float *)((long)unaff_x19 + 0x1e4);
      fVar67 = *(float *)((long)unaff_x19 + 0x254);
      if ((fVar58 < fVar67) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0) {
          *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
        }
        fVar44 = (*(float *)((long)unaff_x19 + 0x23c) - fVar58) * 0.5;
        if (fVar44 <= DAT_00d38b84) {
          fVar44 = DAT_00d38b84;
        }
        *(float *)(unaff_x19 + 0x48) = fVar58;
        fVar44 = (fVar58 + fVar44) * 20.0 + 0.5;
        fVar58 = DAT_00d38e60;
        if (fVar44 != INFINITY) {
          fVar58 = (float)(int)fVar44 / 20.0;
        }
        if (fVar67 <= fVar58) {
          fVar58 = fVar67;
        }
LAB_03554658:
        *(float *)((long)unaff_x19 + 0x1e4) = fVar58;
        return;
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
    lVar41 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar41 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar41 = *(long *)puVar7;
    }
    plVar42 = (long *)OVRPlugin_Media_TypeInfo;
    lVar41 = **(long **)(lVar41 + 0xb8);
    if (lVar41 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar41 + 0x18) <= *(uint *)(unaff_x19 + 0xd1)) goto LAB_035575f4;
    iVar13 = *(int *)(lVar41 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54) << 2;
    if ((*unaff_x28 == 0) || (lVar41 = *(long *)(*unaff_x28 + 0x60), lVar41 == 0))
    goto LAB_035574b8;
    if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(int *)(lVar41 + 0x18) == 0) goto LAB_035575f4;
    FUN_035968e8(lVar41 + 0x20,0,0);
    if (DAT_0411f172 == '\0') {
      FUN_01ab69ac(PTR_DAT_03cbded8);
      DAT_0411f172 = '\x01';
    }
    iVar11 = (int)unaff_x19[0x4e];
    fStack00000000000000fc = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
    uStack00000000000000e8 = *(undefined8 *)(*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
    lVar41 = unaff_x19[0xe3];
    in_stack_000000b8 = (long *)uStack00000000000000e8;
    if (iVar11 < 0x401) {
      if (iVar11 == 0x100) {
        if (lVar41 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar41 + 0x18) < 2) goto LAB_035575f4;
        uVar17 = *(undefined8 *)(lVar41 + 0x30);
        if ((int)unaff_x19[0x5c] == 5) {
          if ((*unaff_x28 == 0) || (lVar28 = *(long *)(*unaff_x28 + 0x58), lVar28 == 0))
          goto LAB_035574b8;
          if (*(uint *)(lVar28 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
          fVar58 = *(float *)(lVar28 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
        }
        else {
          fVar58 = *(float *)(unaff_x19 + 0x97);
        }
        fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar41 + 0x2c);
        fVar58 = (0.0 - fVar58) - fStack0000000000000020;
      }
      else if (iVar11 == 0x200) {
        if (lVar41 == 0) goto LAB_035574b8;
        if ((*(int *)(lVar41 + 0x18) == 1) || (*(int *)(lVar41 + 0x18) == 0)) goto LAB_035575f4;
        fVar58 = (*(float *)(lVar41 + 0x20) + *(float *)(lVar41 + 0x2c)) * 0.5;
        uVar17 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar41 + 0x24) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar41 + 0x30) >> 0x20)) * 0.5,
                          ((float)*(undefined8 *)(lVar41 + 0x24) +
                          (float)*(undefined8 *)(lVar41 + 0x30)) * 0.5);
        if ((int)unaff_x19[0x5c] == 5) {
          if ((*unaff_x28 == 0) || (lVar41 = *(long *)(*unaff_x28 + 0x58), lVar41 == 0))
          goto LAB_035574b8;
          if (*(uint *)(lVar41 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
          lVar41 = lVar41 + (long)(int)uStack0000000000000030 * 0x14;
          fStack00000000000000c4 = fStack000000000000002c + 0.0 + fVar58;
          fVar58 = ((fStack0000000000000020 + *(float *)(lVar41 + 0x28) + *(float *)(lVar41 + 0x30))
                   - fStack0000000000000024) * -0.5 + 0.0;
        }
        else {
          fStack00000000000000c4 = fStack000000000000002c + 0.0 + fVar58;
          fVar58 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x97) + in_stack_000017d8) -
                   fStack0000000000000024) * -0.5 + 0.0;
        }
      }
      else {
        fStack00000000000000c4 = fStack00000000000000fc;
        if (iVar11 != 0x400) goto LAB_03554c4c;
        if (lVar41 == 0) goto LAB_035574b8;
        if (*(int *)(lVar41 + 0x18) == 0) goto LAB_035575f4;
        uVar17 = *(undefined8 *)(lVar41 + 0x24);
        if ((int)unaff_x19[0x5c] == 5) {
          if ((*unaff_x28 == 0) || (lVar28 = *(long *)(*unaff_x28 + 0x58), lVar28 == 0))
          goto LAB_035574b8;
          if (*(uint *)(lVar28 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
          in_stack_000017d8 = *(float *)(lVar28 + (long)(int)uStack0000000000000030 * 0x14 + 0x30);
        }
        fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar41 + 0x20);
        fVar58 = fStack0000000000000024 + (0.0 - in_stack_000017d8);
      }
LAB_03554c3c:
      in_stack_000000b8 =
           (long *)CONCAT44((float)((ulong)uVar17 >> 0x20) + 0.0,(float)uVar17 + fVar58);
    }
    else if (iVar11 == 0x800) {
      if (lVar41 == 0) goto LAB_035574b8;
      if ((*(int *)(lVar41 + 0x18) == 1) || (*(int *)(lVar41 + 0x18) == 0)) goto LAB_035575f4;
      fVar58 = fStack000000000000002c + 0.0 +
               (*(float *)(lVar41 + 0x20) + *(float *)(lVar41 + 0x2c)) * 0.5;
      in_stack_000000b8 =
           (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar41 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar41 + 0x30) >> 0x20)) * 0.5 + 0.0,
                            ((float)*(undefined8 *)(lVar41 + 0x24) +
                            (float)*(undefined8 *)(lVar41 + 0x30)) * 0.5 + 0.0);
      fStack00000000000000c4 = fVar58;
    }
    else {
      if (iVar11 == 0x1000) {
        if (lVar41 != 0) {
          if ((*(int *)(lVar41 + 0x18) != 1) && (*(int *)(lVar41 + 0x18) != 0)) {
            uVar17 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar41 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar41 + 0x30) >> 0x20)) * 0.5,
                              ((float)*(undefined8 *)(lVar41 + 0x24) +
                              (float)*(undefined8 *)(lVar41 + 0x30)) * 0.5);
            fStack00000000000000c4 =
                 fStack000000000000002c + 0.0 +
                 (*(float *)(lVar41 + 0x20) + *(float *)(lVar41 + 0x2c)) * 0.5;
            fVar58 = 0.0 - ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x9d) +
                            *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000024) * 0.5;
            goto LAB_03554c3c;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
      fStack00000000000000c4 = fStack00000000000000fc;
      if (iVar11 == 0x2000) {
        if (lVar41 == 0) goto LAB_035574b8;
        if ((*(int *)(lVar41 + 0x18) == 1) || (*(int *)(lVar41 + 0x18) == 0)) goto LAB_035575f4;
        fVar58 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack0000000000000020) -
                       fStack0000000000000024) * 0.5;
        in_stack_000000b8 =
             (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar41 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar41 + 0x30) >> 0x20)) * 0.5 + 0.0,
                              ((float)*(undefined8 *)(lVar41 + 0x24) +
                              (float)*(undefined8 *)(lVar41 + 0x30)) * 0.5 + fVar58);
        fStack00000000000000c4 =
             fStack000000000000002c + 0.0 +
             (*(float *)(lVar41 + 0x20) + *(float *)(lVar41 + 0x2c)) * 0.5;
      }
    }
LAB_03554c4c:
    if (unaff_x19[0xe5] != 0) {
      uVar17 = FUN_03912334(unaff_x19[0xe5],0);
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)puVar6);
      }
      uVar19 = FUN_036d35a8(uVar17,0,0);
      lVar41 = FUN_0357f060();
      if (lVar41 != 0) {
        FUN_036df824(lVar41,0);
        *(float *)(unaff_x19 + 0xe2) = fVar58;
        if (unaff_x19[0xe5] != 0) {
          iVar11 = FUN_039117fc(unaff_x19[0xe5],0);
          if (unaff_x19[0xe5] != 0) {
            fVar67 = (float)FUN_03911954(unaff_x19[0xe5],0);
            uVar66 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
            FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
            if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
            }
            if (DAT_0412df1c == '\0') {
              FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
              DAT_0412df1c = '\x01';
            }
            puVar6 = OVRPlugin_Mesh_TypeInfo;
            lVar41 = *(long *)OVRPlugin_Mesh_TypeInfo;
            if (*(int *)(lVar41 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar41 = *(long *)puVar6;
            }
            puVar26 = *(undefined4 **)(lVar41 + 0xb8);
            uVar53 = (ulong)(uint)puVar26[1];
            uVar54 = (ulong)(uint)puVar26[2];
            uVar56 = (ulong)(uint)puVar26[3];
            FUN_035683a4(*puVar26,uVar53,uVar54,uVar56,&stack0x000017b0,0x4000ffff,0);
            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            lVar41 = *unaff_x28;
            if (lVar41 != 0) {
              uVar10 = *unaff_x20;
              if ((int)uVar10 < 1) {
                fVar58 = 0.0;
                iVar13 = 0;
                goto LAB_03556f00;
              }
              lVar41 = *(long *)(lVar41 + 0x38);
              fVar58 = ABS(fVar58);
              fVar44 = 1.0;
              if ((uVar19 & 1) == 0) {
                fVar44 = fVar58;
              }
              if (lVar41 != 0) {
                bVar9 = false;
                bVar8 = false;
                _iStack0000000000000128 = 0;
                bVar5 = false;
                fStack00000000000000d4 = 0.0;
                fStack0000000000000028 = 0.0;
                fStack0000000000000158 = 0.0;
                uStack000000000000006c = 0;
                lVar28 = 0x2e0;
                fVar45 = 0.0;
                fVar47 = 0.0;
                fStack00000000000000c8 = fStack00000000000000d8;
                fStack0000000000000104 =
                     *(float *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
                fStack00000000000000d0 = fStack00000000000000dc;
                fStack0000000000000070 = fStack00000000000000dc;
                fStack000000000000009c = fStack00000000000000dc;
                fStack00000000000000a0 = fStack00000000000000d8;
                fStack0000000000000100 = 0.0;
                in_stack_00000088._4_4_ = 0.0;
                fStack0000000000000040 = 0.0;
                fStack00000000000000a8 = 0.0;
                fStack0000000000000038 = 0.0;
                _bStack0000000000000074 = in_stack_000000c0;
                fStack0000000000000078 = fStack00000000000000d8;
                in_stack_00000098 = (float)in_stack_000000c0;
                uVar12 = 1;
                uVar55 = 0;
                goto LAB_03554e78;
              }
            }
          }
        }
      }
    }
    goto LAB_035574b8;
  }
  if (*(uint *)(param_1 + 0x18) <= in_w9) goto LAB_035575f4;
  uVar10 = *(uint *)(param_1 + (long)(int)in_w9 * 0xc + 0x20);
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
  if ((*(char *)((long)unaff_x19 + 0x302) == '\0') || (uVar10 != 0x3c)) {
    if ((*unaff_x28 == 0) || (lVar41 = *(long *)(*unaff_x28 + 0x38), lVar41 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar41 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    lVar41 = lVar41 + (long)(int)*unaff_x20 * unaff_x24;
    *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar41 + 0x2c);
    *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar41 + 0x58);
    unaff_x19[0x20] = *(long *)(lVar41 + 0x38);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
LAB_035509d4:
    if ((unaff_x19[0x6d] == 0) || (lVar41 = *(long *)(unaff_x19[0x6d] + 0x38), lVar41 == 0))
    goto LAB_035574b8;
    uVar12 = *unaff_x20;
    if (*(uint *)(lVar41 + 0x18) <= uVar12) goto LAB_035575f4;
    lVar43 = (long)(int)uVar12;
    cVar24 = *(char *)(lVar41 + lVar43 * unaff_x24 + 0x5c);
    *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
    lVar28 = unaff_x19[0x24];
    if ((uint)in_stack_000017c8 == uVar12) {
      uVar10 = (uint)((ulong)in_stack_000017c8 >> 0x20);
      *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
      if (uVar10 == 0x2026) {
        *(long *)(lVar41 + lVar43 * unaff_x24 + 0x30) = unaff_x19[0xca];
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((unaff_x19[0x6d] == 0) || (lVar41 = *(long *)(unaff_x19[0x6d] + 0x38), lVar41 == 0))
        goto LAB_035574b8;
        if (*(uint *)(lVar41 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        lVar41 = lVar41 + (long)(int)*unaff_x20 * unaff_x24;
        *(undefined4 *)(lVar41 + 0x2c) = 0;
        *(long *)(lVar41 + 0x38) = unaff_x19[0xcb];
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((unaff_x19[0x6d] == 0) || (lVar41 = *(long *)(unaff_x19[0x6d] + 0x38), lVar41 == 0))
        goto LAB_035574b8;
        if (*(uint *)(lVar41 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        *(long *)(lVar41 + (long)(int)*unaff_x20 * unaff_x24 + 0x50) = unaff_x19[0xcc];
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((*unaff_x28 == 0) || (lVar41 = *(long *)(*unaff_x28 + 0x38), lVar41 == 0))
        goto LAB_035574b8;
        uVar12 = *unaff_x20;
        if (*(uint *)(lVar41 + 0x18) <= uVar12) goto LAB_035575f4;
        bVar5 = true;
        *(int *)(lVar41 + (long)(int)uVar12 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
        *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        in_stack_000017c8 = CONCAT44(3,uVar12 + 1);
      }
      else if (uVar10 == 3) {
        if ((*unaff_x21 == 0) || (lVar20 = FUN_03568ac0(*unaff_x21,0), lVar20 == 0))
        goto LAB_035574b8;
        in_stack_00000c18 = 3;
        FUN_0219b634(lVar20,&stack0x00000c18,&stack0x000008a0,*(undefined8 *)OVRPlugin_Hand_TypeInfo
                    );
        if (*(uint *)(lVar41 + 0x18) <= uVar12) goto LAB_035575f4;
        *(ulong *)(lVar41 + lVar43 * unaff_x24 + 0x30) =
             CONCAT44(in_stack_000008a4,in_stack_000008a0);
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
      if ((*unaff_x28 == 0) || (lVar41 = *(long *)(*unaff_x28 + 0x38), lVar41 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar41 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar41 = lVar41 + (long)(int)uVar12 * (long)iVar13;
      *(undefined1 *)(lVar41 + 0x194) = 0;
      *(undefined2 *)(lVar41 + 0x20) = 0x200b;
      *(undefined4 *)(lVar41 + 100) = 0;
      *unaff_x20 = uVar12 + 1;
    }
    else {
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
        if ((*unaff_x28 == 0) || (lVar41 = *(long *)(*unaff_x28 + 0x38), lVar41 == 0))
        goto LAB_035574b8;
        if (*(uint *)(lVar41 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        *in_stack_000000e0 = *(long *)(lVar41 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000e0);
        if (*in_stack_000000e0 == 0) goto LAB_03550bd0;
        if ((*unaff_x28 == 0) || (lVar41 = *(long *)(*unaff_x28 + 0x38), lVar41 == 0))
        goto LAB_035574b8;
        if (*(uint *)(lVar41 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        *unaff_x21 = *(long *)(lVar41 + (long)(int)*unaff_x20 * unaff_x24 + 0x38);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((*unaff_x28 == 0) || (lVar41 = *(long *)(*unaff_x28 + 0x38), lVar41 == 0))
        goto LAB_035574b8;
        if (*(uint *)(lVar41 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        *in_stack_00000160 = *(long *)(lVar41 + (long)(int)*unaff_x20 * unaff_x24 + 0x50);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((*unaff_x28 == 0) || (lVar41 = *(long *)(*unaff_x28 + 0x38), lVar41 == 0))
        goto LAB_035574b8;
        uVar55 = *unaff_x20;
        uVar12 = *(uint *)(lVar41 + 0x18);
        if (uVar12 <= uVar55) goto LAB_035575f4;
        *(undefined4 *)(unaff_x19 + 0x24) =
             *(undefined4 *)(lVar41 + (long)(int)uVar55 * unaff_x24 + 0x58);
        if (bVar5) {
          lVar28 = unaff_x19[0x8f];
          if (lVar28 == 0) goto LAB_035574b8;
          if (*(uint *)(lVar28 + 0x18) <= in_stack_000017a8) goto LAB_035575f4;
          if ((*(int *)(lVar28 + (long)(int)in_stack_000017a8 * 0xc + 0x20) != 10) ||
             (uVar55 == *(uint *)(unaff_x19 + 0x93))) goto LAB_035510fc;
          if (uVar12 <= uVar55 - 1) goto LAB_035575f4;
          if (*unaff_x21 == 0) goto LAB_035574b8;
          fVar67 = *(float *)(lVar41 + (long)(int)(uVar55 - 1) * (long)iVar13 + 0x60);
          iVar11 = FUN_03776950(*unaff_x21 + 0x50,0);
          lVar41 = *unaff_x21;
        }
        else {
LAB_035510fc:
          if (*unaff_x21 == 0) goto LAB_035574b8;
          fVar67 = *(float *)(unaff_x19 + 0x3d);
          iVar11 = FUN_03776950(*unaff_x21 + 0x50,0);
          lVar41 = unaff_x19[0x20];
        }
        if (lVar41 == 0) goto LAB_035574b8;
        fVar63 = (float)FUN_03776960(lVar41 + 0x50,0);
        fVar49 = in_stack_00000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar49 = 1.0;
        }
        fVar45 = 0.0;
        fVar47 = 0.0;
        if (!(bool)(bVar5 & uVar10 == 0x2026)) {
          if (*unaff_x21 == 0) goto LAB_035574b8;
          fVar47 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
          if (*unaff_x21 == 0) goto LAB_035574b8;
          fVar45 = (float)FUN_037769c0(*unaff_x21 + 0x50,0);
        }
        lVar41 = unaff_x19[0xc9];
        if ((lVar41 == 0) || (*(long *)(lVar41 + 0x20) == 0)) goto LAB_035574b8;
        fVar46 = *(float *)((long)unaff_x19 + 0x404);
        fVar48 = *(float *)(lVar41 + 0x2c);
        fVar58 = (float)FUN_03776ea8(*(long *)(lVar41 + 0x20),0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar64 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar50 = *(float *)((long)unaff_x19 + 0x404);
        fVar44 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
        lVar41 = unaff_x19[0x6d];
        if ((lVar41 == 0) || (lVar28 = *(long *)(lVar41 + 0x38), lVar28 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        lVar28 = lVar28 + (long)(int)*unaff_x20 * unaff_x24;
        *(undefined4 *)(lVar28 + 0x2c) = 0;
        fVar49 = ((fStack0000000000000158 * fVar67) / (float)iVar11) * fVar63 * fVar49;
        fVar58 = fVar49 * fVar46 * fVar48 * fVar58;
        *(float *)(lVar28 + 0x160) = fVar58;
        uVar12 = *(uint *)(unaff_x19 + 0x24);
        fVar44 = fVar49 * fVar64 * fVar50 * fVar44;
        if (uVar12 == 0) {
          fStack000000000000015c = *(float *)(unaff_x19 + 0xc3);
        }
        else {
          lVar28 = unaff_x19[0xe1];
          if (lVar28 == 0) goto LAB_035574b8;
          if (*(uint *)(lVar28 + 0x18) <= uVar12) goto LAB_035575f4;
          lVar28 = *(long *)(lVar28 + (long)(int)uVar12 * 8 + 0x20);
          if (lVar28 == 0) goto LAB_035574b8;
          fStack000000000000015c = *(float *)(lVar28 + 0x10c);
        }
LAB_035514b0:
        unaff_x29 = (undefined8 *)&stack0x000008a0;
        fVar67 = 0.0;
        if (uVar10 != 3 && uVar10 != 0xad) {
          fVar67 = fVar58;
        }
LAB_035514cc:
        lVar41 = *(long *)(lVar41 + 0x38);
        if (lVar41 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar41 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        lVar41 = lVar41 + (long)(int)*unaff_x20 * unaff_x24;
        *(short *)(lVar41 + 0x20) = (short)uVar10;
        *(int *)(lVar41 + 0x60) = (int)unaff_x19[0x3d];
        *(undefined4 *)(lVar41 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
        if ((unaff_x19[0x6d] == 0) || (lVar41 = *(long *)(unaff_x19[0x6d] + 0x38), lVar41 == 0))
        goto LAB_035574b8;
        if (*(uint *)(lVar41 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        *(int *)(lVar41 + (long)(int)*unaff_x20 * unaff_x24 + 0x168) = (int)unaff_x19[0x2b];
        if ((unaff_x19[0x6d] == 0) || (lVar41 = *(long *)(unaff_x19[0x6d] + 0x38), lVar41 == 0))
        goto LAB_035574b8;
        if (*(uint *)(lVar41 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        *(undefined4 *)(lVar41 + (long)(int)*unaff_x20 * unaff_x24 + 0x170) =
             *(undefined4 *)((long)unaff_x19 + 0x15c);
        if ((unaff_x19[0x6d] == 0) || (lVar41 = *(long *)(unaff_x19[0x6d] + 0x38), lVar41 == 0))
        goto LAB_035574b8;
        uVar12 = *unaff_x20;
        FUN_0209a6e0(_fStack00000000000000c8,&stack0x000008a0,
                     *(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
        if (*(uint *)(lVar41 + 0x18) <= uVar12) goto LAB_035575f4;
        uVar18 = unaff_x29[1];
        uVar17 = *unaff_x29;
        lVar41 = lVar41 + (long)(int)uVar12 * unaff_x24;
        *(undefined4 *)(lVar41 + 0x18c) = in_stack_000008b0;
        *(undefined8 *)(lVar41 + 0x184) = uVar18;
        *(undefined8 *)(lVar41 + 0x17c) = uVar17;
        if ((*unaff_x28 == 0) || (lVar41 = *(long *)(*unaff_x28 + 0x38), lVar41 == 0))
        goto LAB_035574b8;
        if (*(uint *)(lVar41 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        *(undefined4 *)(lVar41 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
             *(undefined4 *)((long)unaff_x19 + 0x25c);
        if ((unaff_x19[0xc9] == 0) || (lVar41 = *(long *)(unaff_x19[0xc9] + 0x20), lVar41 == 0))
        goto LAB_035574b8;
        FUN_03776e6c(&stack0x00000c18,lVar41,0);
        puVar6 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
        unaff_x29[0x1df] = in_stack_00000c20;
        unaff_x29[0x1de] = CONCAT44(in_stack_00000c1c,in_stack_00000c18);
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
        fVar49 = *(float *)(unaff_x19 + 0x55);
        *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
        if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
          fStack000000000000012c = 0.0;
          fVar46 = 0.0;
          fVar63 = 0.0;
        }
        else {
          if (*in_stack_000000e0 == 0) goto LAB_035574b8;
          uVar25 = *unaff_x20;
          uVar55 = *(uint *)(*in_stack_000000e0 + 0x28);
          if ((int)uVar25 < (int)in_stack_00000088._4_4_) {
            if ((*unaff_x28 == 0) || (lVar41 = *(long *)(*unaff_x28 + 0x38), lVar41 == 0))
            goto LAB_035574b8;
            if (*(uint *)(lVar41 + 0x18) <= uVar25 + 1) goto LAB_035575f4;
            lVar41 = *(long *)(lVar41 + (long)(int)(uVar25 + 1) * (long)iVar13 + 0x30);
            if ((((lVar41 == 0) || (*unaff_x21 == 0)) ||
                (lVar28 = *(long *)(*unaff_x21 + 0x128), lVar28 == 0)) ||
               (lVar28 = *(long *)(lVar28 + 0x18), lVar28 == 0)) goto LAB_035574b8;
            in_stack_000008a0 = uVar55 | *(int *)(lVar41 + 0x28) << 0x10;
            uVar19 = FUN_0219f8b8(lVar28,&stack0x000008a0,&stack0x000016f8,
                                  *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
            uVar66 = 0;
            if ((uVar19 & 1) == 0) {
              fStack000000000000012c = 0.0;
              fVar46 = 0.0;
              fVar63 = 0.0;
            }
            else {
              if (in_stack_000016f8 == 0) goto LAB_035574b8;
              fStack000000000000012c = *(float *)(in_stack_000016f8 + 0x1c);
              uVar66 = *(undefined4 *)(in_stack_000016f8 + 0x20);
              fVar63 = *(float *)(in_stack_000016f8 + 0x14);
              fVar46 = *(float *)(in_stack_000016f8 + 0x18);
              if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
                fVar49 = 0.0;
              }
            }
            uVar25 = *unaff_x20;
          }
          else {
            uVar66 = 0;
            fStack000000000000012c = 0.0;
            fVar46 = 0.0;
            fVar63 = 0.0;
          }
          if (0 < (int)uVar25) {
            if ((*unaff_x28 == 0) || (lVar41 = *(long *)(*unaff_x28 + 0x38), lVar41 == 0))
            goto LAB_035574b8;
            if (*(uint *)(lVar41 + 0x18) <= uVar25 - 1) goto LAB_035575f4;
            lVar41 = *(long *)(lVar41 + (ulong)(uVar25 - 1) * (unaff_x24 & 0xffffffff) + 0x30);
            if (((lVar41 == 0) || (*unaff_x21 == 0)) ||
               ((lVar28 = *(long *)(*unaff_x21 + 0x128), lVar28 == 0 ||
                (lVar28 = *(long *)(lVar28 + 0x18), lVar28 == 0)))) goto LAB_035574b8;
            in_stack_000008a0 = *(uint *)(lVar41 + 0x28) | uVar55 << 0x10;
            uVar19 = FUN_0219f8b8(lVar28,&stack0x000008a0,&stack0x000016f8,
                                  *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
            if ((uVar19 & 1) != 0) {
              if ((in_stack_000016f8 == 0) ||
                 (fVar63 = (float)FUN_03571cb4(fVar63,fVar46,fStack000000000000012c,uVar66,
                                               *(undefined4 *)(in_stack_000016f8 + 0x28),
                                               *(undefined4 *)(in_stack_000016f8 + 0x2c),
                                               *(undefined4 *)(in_stack_000016f8 + 0x30),
                                               *(undefined4 *)(in_stack_000016f8 + 0x34),0),
                 in_stack_000016f8 == 0)) goto LAB_035574b8;
              if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
                fVar49 = 0.0;
              }
            }
          }
          *(float *)((long)unaff_x19 + 0x2fc) = fStack000000000000012c;
        }
        if ((char)unaff_x19[0x1e] != '\0') {
          fVar64 = *(float *)(unaff_x19 + 200);
          fVar48 = (float)FUN_03776cb4(&stack0x00001790,0);
          fVar64 = fVar64 - fVar67 * fVar48 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
          *(float *)(unaff_x19 + 200) = fVar64;
          if ((uVar10 == 0x200b) || (uVar12 != 0)) {
            *(float *)(unaff_x19 + 200) =
                 fVar64 - fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
          }
        }
        fVar64 = *(float *)(unaff_x19 + 0x56);
        fVar48 = 0.0;
        if (fVar64 != 0.0) {
          fVar48 = (float)FUN_03776c94(&stack0x00001790,0);
          fVar50 = (float)FUN_03776ca4(&stack0x00001790,0);
          fVar48 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                   (fVar64 * 0.5 - fVar67 * (fVar48 * 0.5 + fVar50));
          *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + fVar48;
        }
        if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar24 == '\0')) &&
           ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
          lVar41 = *in_stack_00000160;
          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar19 = FUN_036cee6c(lVar41,0,0);
          fVar50 = 0.0;
          if ((uVar19 & 1) != 0) {
            lVar41 = *in_stack_00000160;
            if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            if (lVar41 == 0) goto LAB_035574b8;
            uVar19 = FUN_03699d3c(lVar41,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x54),0
                                 );
            fVar50 = 0.0;
            if ((uVar19 & 1) != 0) {
              lVar41 = *in_stack_00000160;
              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              if (lVar41 == 0) goto LAB_035574b8;
              fVar64 = (float)FUN_0369e060(lVar41,*(undefined4 *)
                                                   (*(long *)(*(long *)puVar6 + 0xb8) + 0x54),0);
              if ((*unaff_x21 == 0) || (*in_stack_00000160 == 0)) goto LAB_035574b8;
              fVar61 = *(float *)(*unaff_x21 + 0x1b0);
              fVar50 = (float)FUN_0369e060(*in_stack_00000160,
                                           *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xcc)
                                           ,0);
              fVar50 = fVar50 * fVar64 * fVar61 * 0.25;
              if (fVar64 < fStack000000000000015c + fVar50) {
                fStack000000000000015c = fVar64 - fVar50;
              }
            }
          }
          if (*unaff_x21 == 0) goto LAB_035574b8;
          fStack00000000000000d0 = *(float *)(*unaff_x21 + 0x1b4);
        }
        else {
          lVar41 = *in_stack_00000160;
          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar19 = FUN_036cee6c(lVar41,0,0);
          fStack00000000000000d0 = 0.0;
          if ((uVar19 & 1) != 0) {
            lVar41 = *in_stack_00000160;
            if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            if (lVar41 == 0) goto LAB_035574b8;
            uVar19 = FUN_03699d3c(lVar41,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x54),0
                                 );
            if ((uVar19 & 1) != 0) {
              lVar41 = *in_stack_00000160;
              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              if (lVar41 == 0) goto LAB_035574b8;
              uVar19 = FUN_03699d3c(lVar41,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xcc)
                                    ,0);
              if ((uVar19 & 1) != 0) {
                lVar41 = *in_stack_00000160;
                if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                if (lVar41 != 0) {
                  fVar64 = (float)FUN_0369e060(lVar41,*(undefined4 *)
                                                       (*(long *)(*(long *)puVar6 + 0xb8) + 0x54),0)
                  ;
                  if ((*unaff_x21 != 0) && (*in_stack_00000160 != 0)) {
                    fVar61 = *(float *)(*unaff_x21 + 0x1a8);
                    fVar50 = (float)FUN_0369e060(*in_stack_00000160,
                                                 *(undefined4 *)
                                                  (*(long *)(*(long *)puVar6 + 0xb8) + 0xcc),0);
                    fVar50 = fVar50 * fVar64 * fVar61 * 0.25;
                    if (fVar64 < fStack000000000000015c + fVar50) {
                      fStack000000000000015c = fVar64 - fVar50;
                    }
                    goto FUN_03551b84;
                  }
                }
                goto LAB_035574b8;
              }
            }
          }
          fVar50 = 0.0;
        }
FUN_03551b84:
        fVar64 = *(float *)(unaff_x19 + 200);
        fVar61 = (float)FUN_03776ca4(&stack0x00001790,0);
        fVar64 = fVar64 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                          fVar67 * (fVar63 + ((fVar61 - fStack000000000000015c) - fVar50));
        fVar63 = (float)FUN_03776cac(&stack0x00001790,0);
        fVar68 = *(float *)((long)unaff_x19 + 0x61c) +
                 ((fVar44 + fVar67 * (fVar46 + fStack000000000000015c + fVar63)) -
                 *(float *)(unaff_x19 + 0x9b));
        fVar63 = (float)FUN_03776c9c(&stack0x00001790,0);
        fVar63 = fVar68 - fVar67 * (fStack000000000000015c + fStack000000000000015c + fVar63);
        fVar46 = (float)FUN_03776c94(&stack0x00001790,0);
        fVar61 = fVar64 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                          fVar67 * (fVar50 + fVar50 +
                                   fStack000000000000015c + fStack000000000000015c + fVar46);
        fStack0000000000000104 = fVar64;
        fVar46 = fVar61;
        if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar24 == '\0')) &&
           ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
          fVar60 = (float)(int)unaff_x19[0xbe] * fStack000000000000005c;
          fVar46 = (float)FUN_03776cac(&stack0x00001790,0);
          fVar59 = fVar60 * fVar67 * (fVar50 + fStack000000000000015c + fVar46);
          fVar46 = (float)FUN_03776cac(&stack0x00001790,0);
          fVar57 = (float)FUN_03776c9c(&stack0x00001790,0);
          fVar68 = fVar68 + 0.0;
          fVar63 = fVar63 + 0.0;
          fVar60 = fVar60 * fVar67 * (((fVar46 - fVar57) - fStack000000000000015c) - fVar50);
          fVar57 = fVar64 + fVar59;
          fVar46 = fVar61 + fVar60;
          fVar51 = (fVar59 - fVar60) * 0.5;
          fVar64 = (fVar64 + fVar60) - fVar51;
          fVar61 = (fVar61 + fVar59) - fVar51;
          fStack0000000000000104 = fVar57 - fVar51;
          fVar46 = fVar46 - fVar51;
        }
        if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
          fStack0000000000000114 = 0.0;
          fVar51 = 0.0;
          fVar59 = 0.0;
          fStack0000000000000100 = 0.0;
          fVar60 = fVar63;
          fVar57 = fVar68;
        }
        else {
          thunk_FUN_036bc400(_fStack0000000000000078,0);
          fVar62 = (fVar61 + fVar64) * 0.5;
          fVar65 = (fVar63 + fVar68) * 0.5;
          fVar68 = fVar68 - fVar65;
          fStack0000000000000100 = 0.0;
          fVar57 = fVar68;
          fStack0000000000000104 =
               (float)FUN_036bdd2c(fStack0000000000000104 - fVar62,_fStack0000000000000078,0);
          fStack0000000000000104 = fVar62 + fStack0000000000000104;
          fStack0000000000000100 = fStack0000000000000100 + 0.0;
          fVar60 = fVar63 - fVar65;
          fStack0000000000000114 = 0.0;
          fVar63 = fVar60;
          fVar64 = (float)FUN_036bdd2c(fVar64 - fVar62,_fStack0000000000000078,0);
          fVar64 = fVar62 + fVar64;
          fStack0000000000000114 = fStack0000000000000114 + 0.0;
          fVar63 = fVar65 + fVar63;
          fVar59 = 0.0;
          fVar61 = (float)FUN_036bdd2c(fVar61 - fVar62,_fStack0000000000000078,0);
          fVar61 = fVar62 + fVar61;
          fVar68 = fVar65 + fVar68;
          fVar59 = fVar59 + 0.0;
          fVar51 = 0.0;
          fVar46 = (float)FUN_036bdd2c(fVar46 - fVar62,_fStack0000000000000078,0);
          fVar46 = fVar62 + fVar46;
          fVar51 = fVar51 + 0.0;
          fVar60 = fVar65 + fVar60;
          fVar57 = fVar65 + fVar57;
        }
        if (*unaff_x28 == 0) goto LAB_035574b8;
        lVar41 = *(long *)(*unaff_x28 + 0x38);
        unaff_d11 = (ulong)(uint)fVar67;
        if (lVar41 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar41 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        lVar41 = lVar41 + (long)(int)*unaff_x20 * unaff_x24;
        *(float *)(lVar41 + 0x11c) = fVar64;
        *(float *)(lVar41 + 0x120) = fVar63;
        *(float *)(lVar41 + 0x124) = fStack0000000000000114;
        if ((*unaff_x28 == 0) || (lVar41 = *(long *)(*unaff_x28 + 0x38), lVar41 == 0))
        goto LAB_035574b8;
        if (*(uint *)(lVar41 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        lVar41 = lVar41 + (long)(int)*unaff_x20 * unaff_x24;
        *(float *)(lVar41 + 0x114) = fVar57;
        *(float *)(lVar41 + 0x110) = fStack0000000000000104;
        *(float *)(lVar41 + 0x118) = fStack0000000000000100;
        if ((*unaff_x28 == 0) || (lVar41 = *(long *)(*unaff_x28 + 0x38), lVar41 == 0))
        goto LAB_035574b8;
        if (*(uint *)(lVar41 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        lVar41 = lVar41 + (long)(int)*unaff_x20 * unaff_x24;
        *(float *)(lVar41 + 0x128) = fVar61;
        *(float *)(lVar41 + 300) = fVar68;
        *(float *)(lVar41 + 0x130) = fVar59;
        if ((*unaff_x28 == 0) || (lVar41 = *(long *)(*unaff_x28 + 0x38), lVar41 == 0))
        goto LAB_035574b8;
        if (*(uint *)(lVar41 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        lVar41 = lVar41 + (long)(int)*unaff_x20 * unaff_x24;
        *(float *)(lVar41 + 0x134) = fVar46;
        *(float *)(lVar41 + 0x138) = fVar60;
        *(float *)(lVar41 + 0x13c) = fVar51;
        if ((*unaff_x28 == 0) || (lVar41 = *(long *)(*unaff_x28 + 0x38), lVar41 == 0))
        goto LAB_035574b8;
        uVar55 = *unaff_x20;
        lVar28 = (long)(int)uVar55;
        if (*(uint *)(lVar41 + 0x18) <= uVar55) goto LAB_035575f4;
        lVar43 = lVar41 + lVar28 * unaff_x24;
        *(int *)(lVar43 + 0x140) = (int)unaff_x19[200];
        fVar68 = *(float *)(unaff_x19 + 0x9b);
        param_3 = (ulong)(uint)fVar68;
        fVar46 = *(float *)((long)unaff_x19 + 0x61c);
        *(float *)(lVar43 + 0x15c) = (fVar61 - fVar64) / (fVar57 - fVar63);
        *(float *)(lVar43 + 0x14c) = (fVar44 - fVar68) + fVar46;
        fVar47 = fVar47 * fVar67;
        if (*(int *)((long)unaff_x19 + 0x644) == 0) {
          fVar47 = fVar47 / fStack0000000000000158;
          fVar45 = (fVar45 * fVar67) / fStack0000000000000158;
        }
        else {
          fVar45 = fVar45 * fVar67;
        }
        uVar25 = *(uint *)(unaff_x19 + 0x93);
        if ((uVar12 == 0) || (uVar55 == uVar25)) {
          fVar45 = fVar46 + fVar45;
          fVar47 = fVar46 + fVar47;
          fVar63 = fVar45;
          fVar44 = fVar47;
          if (fVar46 != 0.0) {
            fVar44 = (fVar47 - fVar46) / *(float *)((long)unaff_x19 + 0x404);
            fVar63 = (fVar45 - fVar46) / *(float *)((long)unaff_x19 + 0x404);
            if (fVar44 <= fVar47) {
              fVar44 = fVar47;
            }
            if (fVar45 <= fVar63) {
              fVar63 = fVar45;
            }
          }
          lVar41 = lVar41 + lVar28 * unaff_x24;
          fVar46 = fVar44;
          if (fVar44 <= *(float *)(unaff_x19 + 0x99)) {
            fVar46 = *(float *)(unaff_x19 + 0x99);
          }
          fVar64 = fVar63;
          if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar63) {
            fVar64 = *(float *)((long)unaff_x19 + 0x4cc);
          }
          *(float *)((long)unaff_x19 + 0x4cc) = fVar64;
          *(float *)(unaff_x19 + 0x99) = fVar46;
          *(float *)(lVar41 + 0x154) = fVar44;
          *(float *)(lVar41 + 0x158) = fVar63;
          *(float *)(lVar41 + 0x148) = fVar47 - fVar68;
          *(float *)(unaff_x19 + 0x98) = fVar47 - fVar68;
          *(float *)(lVar41 + 0x150) = fVar45 - fVar68;
          *(float *)((long)unaff_x19 + 0x4c4) = fVar45 - fVar68;
          if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
            *(float *)(unaff_x19 + 0x97) = fVar46;
            if (unaff_x19[0x20] == 0) goto LAB_035574b8;
            fVar44 = *(float *)((long)unaff_x19 + 0x4bc);
            fVar45 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
            fStack0000000000000158 = (fVar67 * fVar45) / fStack0000000000000158;
            param_3 = (ulong)*(uint *)(unaff_x19 + 0x9b);
            if (fVar44 <= fStack0000000000000158) {
              fVar44 = fStack0000000000000158;
            }
            *(float *)((long)unaff_x19 + 0x4bc) = fVar44;
          }
          if ((float)param_3 == 0.0) {
            fVar44 = *(float *)(in_stack_00000080 + 0x208);
            if (*(float *)(in_stack_00000080 + 0x208) <= fVar47) {
              fVar44 = fVar47;
            }
            *(float *)(in_stack_00000080 + 0x208) = fVar44;
          }
        }
        else {
          fVar44 = *(float *)(unaff_x19 + 0x99);
          lVar41 = lVar41 + lVar28 * unaff_x24;
          *(float *)(lVar41 + 0x154) = fVar44;
          fVar47 = *(float *)((long)unaff_x19 + 0x4cc);
          fVar44 = fVar44 - fVar68;
          *(float *)(lVar41 + 0x148) = fVar44;
          *(float *)(lVar41 + 0x158) = fVar47;
          *(float *)(unaff_x19 + 0x98) = fVar44;
          fVar47 = fVar47 - fVar68;
          *(float *)(lVar41 + 0x150) = fVar47;
          *(float *)((long)unaff_x19 + 0x4c4) = fVar47;
        }
        lVar41 = *unaff_x28;
        if ((lVar41 == 0) || (lVar28 = *(long *)(lVar41 + 0x38), lVar28 == 0)) goto LAB_035574b8;
        uVar14 = *unaff_x20;
        if (*(uint *)(lVar28 + 0x18) <= uVar14) goto LAB_035575f4;
        lVar28 = lVar28 + (long)(int)uVar14 * unaff_x24;
        *(undefined1 *)(lVar28 + 0x194) = 0;
        uVar31 = *(uint *)(unaff_x19 + 0x4f);
        if ((uVar10 == 9) ||
           (((((uVar12 == 0 && (uVar10 != 3)) && (uVar10 != 0x200b)) && (uVar10 != 0xad)) ||
            (((uVar10 == 0xad & (bStack0000000000000074 ^ 0xff)) != 0 ||
             (*(int *)((long)unaff_x19 + 0x644) == 1)))))) {
          *(undefined1 *)(lVar28 + 0x194) = 1;
          pfVar29 = _fStack00000000000000a0;
          pfVar32 = _fStack00000000000000a8;
          if (bVar5) {
            lVar41 = *(long *)(lVar41 + 0x50);
            if (lVar41 == 0) goto LAB_035574b8;
            if (*(uint *)(lVar41 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
            lVar41 = lVar41 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
            pfVar32 = (float *)(lVar41 + 0x60);
            pfVar29 = (float *)(lVar41 + 100);
          }
          fVar47 = *pfVar32;
          fVar45 = *pfVar29;
          fVar44 = *(float *)(unaff_x19 + 0x6c);
          fVar63 = *(float *)(unaff_x19 + 200);
          fStack00000000000000fc = (fStack000000000000009c - fVar47) - fVar45;
          bVar8 = true;
          if ((fVar44 <= fStack00000000000000fc) && (bVar8 = false, !NAN(fVar44))) {
            bVar8 = fVar44 == -1.0;
          }
          if (!bVar8) {
            fStack00000000000000fc = fVar44;
          }
          fVar44 = 0.0;
          if ((char)unaff_x19[0x1e] == '\0') {
            fVar44 = (float)FUN_03776cb4(&stack0x00001790,0);
            param_3 = (ulong)*(uint *)(unaff_x19 + 0x9b);
          }
          fVar46 = *(float *)((long)unaff_x19 + 0x2d4);
          fVar64 = *(float *)((long)unaff_x19 + 0x4cc);
          if (uVar10 != 0xad) {
            fVar58 = fVar67;
          }
          fVar68 = (float)param_3;
          fVar61 = 0.0;
          if ((0.0 < fVar68) && (fVar61 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
            fVar61 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
          }
          uVar14 = *unaff_x20;
          fVar61 = (*(float *)(unaff_x19 + 0x97) - (fVar64 - fVar68)) + fVar61;
          if (fStack00000000000000c4 < fVar61) {
            if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
              *(uint *)((long)unaff_x19 + 0x2e4) = uVar14;
            }
            puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            uVar17 = DAT_00d37868;
            if ((char)unaff_x19[0x47] != '\0') {
              fVar57 = *(float *)(unaff_x19 + 0x59);
              if (((fVar57 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar68)) &&
                 (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                fVar58 = *(float *)((long)unaff_x19 + 700) +
                         ((in_stack_00000018._4_4_ - fVar61) / (float)(int)unaff_x19[0x95]) /
                         fStack0000000000000058;
                if (fVar58 <= fVar57) {
                  fVar58 = fVar57;
                }
                goto LAB_03554b48;
              }
              fVar68 = *(float *)((long)unaff_x19 + 0x1e4);
              fVar61 = *(float *)(unaff_x19 + 0x4a);
              param_3 = (ulong)(uint)fVar61;
              if ((fVar61 < fVar68) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                fVar58 = (fVar68 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                if (fVar58 <= DAT_00d38b84) {
                  fVar58 = DAT_00d38b84;
                }
                fVar67 = (fVar68 - fVar58) * 20.0 + 0.5;
                *(float *)((long)unaff_x19 + 0x23c) = fVar68;
                fVar58 = DAT_00d38e60;
                if (fVar67 != INFINITY) {
                  fVar58 = (float)(int)fVar67 / 20.0;
                }
                if (fVar58 <= fVar61) {
                  fVar58 = fVar61;
                }
                goto LAB_03554658;
              }
            }
            switch((int)unaff_x19[0x5c]) {
            case 1:
              lVar41 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar41 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar41 = *(long *)puVar6;
              }
              lVar28 = *(long *)(lVar41 + 0xb8);
              lVar41 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
              if ((*(byte *)(lVar41 + 0x135) & 1) == 0) {
                lVar41 = FUN_01a46ff8(lVar41);
              }
              piVar21 = (int *)thunk_FUN_01a59484(lVar28 + 0x11f0,
                                                  *(long *)(*(long *)(*(long *)(lVar41 + 0xc0) + 8)
                                                           + 0x80) + 0xa0);
              puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*piVar21 == 0) {
LAB_03554580:
                in_stack_000017c8 = DAT_00d37868;
                unaff_x29 = (undefined8 *)&stack0x000008a0;
                unaff_x20[0] = 0;
                unaff_x20[1] = 0;
                in_stack_000017a8 = 0xffffffff;
              }
              else {
                lVar41 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                if (*(int *)(lVar41 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar41 = *(long *)puVar6;
                }
                FUN_0209b778(*(long *)(lVar41 + 0xb8) + 0x11f0,&stack0x000008a0,
                             *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                memcpy(&stack0x00001380,&stack0x000008a0,0x378);
LAB_035529dc:
                iVar13 = FUN_0358c15c();
LAB_035529e8:
                unaff_x29 = (undefined8 *)&stack0x000008a0;
                iVar11 = *(int *)((long)unaff_x19 + 0x494) + -1;
                *(int *)((long)unaff_x19 + 0x494) = iVar11;
                in_stack_000017c8 = CONCAT44(0x2026,iVar11);
                in_stack_00000168._4_4_ = in_stack_00000168._4_4_ + 1;
                in_stack_000017a8 = iVar13 - 1;
              }
              goto LAB_03550bd0;
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
                in_stack_000017a8 = 0xffffffff;
                *unaff_x20 = 0;
                in_stack_000017c8 = uVar17;
                goto UnityEngine_AnimatorStateInfo__get_fullPathHash;
              }
              fVar58 = *(float *)(unaff_x19 + 0x99);
              unaff_x29 = (undefined8 *)&stack0x000008a0;
              if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              in_stack_000017a8 = FUN_0358c15c();
              if (fVar58 - fVar64 <= fStack00000000000000c4) {
                *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
                *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
                param_3 = *(ulong *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) +
                                    0x15a8);
                *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
                *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                lVar41 = NEON_rev64(param_3,4);
                unaff_x19[0x99] = lVar41;
                *(undefined4 *)(unaff_x19 + 0x9b) = 0;
                *(undefined8 *)(in_stack_00000080 + 0x208) = 0;
                *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
                *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
                goto LAB_03550bd0;
              }
              break;
            case 6:
              if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              in_stack_000017a8 = FUN_0358c15c();
              lVar41 = unaff_x19[0x5d];
              if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
              }
              uVar19 = FUN_036cee6c(lVar41,0,0);
              if ((uVar19 & 1) != 0) {
                plVar42 = (long *)unaff_x19[0x5d];
                uVar17 = (**(code **)(*unaff_x19 + 0x518))();
                if (plVar42 == (long *)0x0) goto LAB_035574b8;
                (**(code **)(*plVar42 + 0x528))(plVar42,uVar17,*(undefined8 *)(*plVar42 + 0x530));
                lVar41 = unaff_x19[0x5d];
                if (lVar41 == 0) goto LAB_035574b8;
                *(int *)(lVar41 + 0x400) = (int)unaff_x19[0x80];
                FUN_0357ee30(lVar41,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                plVar42 = (long *)unaff_x19[0x5d];
                if (plVar42 == (long *)0x0) goto LAB_035574b8;
                (**(code **)(*plVar42 + 0x7a8))(plVar42,0,0,*(undefined8 *)(*plVar42 + 0x7b0));
                *(undefined1 *)(unaff_x19 + 0x5f) = 1;
              }
            }
UnityEngine_AnimationClip__get_hasMotionCurves:
            unaff_x29 = (undefined8 *)&stack0x000008a0;
            in_stack_000017c8 = CONCAT44(3,uVar14);
            goto LAB_03550bd0;
          }
UnityEngine_AnimationClip__set_wrapMode:
          puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          fVar44 = ABS(fVar63) + fVar44 * (1.0 - fVar46) * fVar58;
          fVar58 = 1.0;
          if ((uVar31 & 0x18) != 0) {
            fVar58 = DAT_00d38acc;
          }
          fVar63 = fVar58 * fStack00000000000000fc;
          if (fVar63 < fVar44) {
            param_3 = (ulong)(uint)fVar50;
            if (((char)unaff_x19[0x5b] == '\0') || (uVar14 == *(uint *)(unaff_x19 + 0x93))) {
              if (((char)unaff_x19[0x47] != '\0') &&
                 (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                fVar63 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                if (fVar46 < fVar63) {
                  fVar67 = fVar44 / (1.0 - fVar46);
                  if (fVar46 <= 0.0) {
                    fVar67 = fVar44;
                  }
                  fVar46 = fVar46 + (fVar44 - fVar58 * (fStack00000000000000fc + DAT_00d38cc4)) /
                                    fVar67;
                  goto LAB_035574e8;
                }
                fVar46 = *(float *)((long)unaff_x19 + 0x1e4);
                fVar63 = *(float *)(unaff_x19 + 0x4a);
                if (fVar63 < fVar46) {
                  fVar58 = (fVar46 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                  if (fVar58 <= DAT_00d38b84) {
                    fVar58 = DAT_00d38b84;
                  }
                  *(float *)((long)unaff_x19 + 0x23c) = fVar46;
                  fVar46 = fVar46 - fVar58;
LAB_03557524:
                  fVar67 = fVar46 * 20.0 + 0.5;
                  fVar58 = DAT_00d38e60;
                  if (fVar67 != INFINITY) {
                    fVar58 = (float)(int)fVar67 / 20.0;
                  }
                  if (fVar58 <= fVar63) {
                    fVar58 = fVar63;
                  }
                  goto LAB_03554658;
                }
              }
              iVar11 = (int)unaff_x19[0x5c];
              if (iVar11 == 1) {
                lVar41 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                if (*(int *)(lVar41 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar41 = *(long *)puVar6;
                }
                lVar28 = *(long *)(lVar41 + 0xb8);
                lVar41 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
                if ((*(byte *)(lVar41 + 0x135) & 1) == 0) {
                  lVar41 = FUN_01a46ff8(lVar41);
                }
                piVar21 = (int *)thunk_FUN_01a59484(lVar28 + 0x11f0,
                                                    *(long *)(*(long *)(*(long *)(lVar41 + 0xc0) + 8
                                                                       ) + 0x80) + 0xa0);
                puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                if (*piVar21 != 0) {
                  lVar41 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (*(int *)(lVar41 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar41 = *(long *)puVar6;
                  }
                  FUN_0209b778(*(long *)(lVar41 + 0xb8) + 0x11f0,&stack0x000008a0,
                               *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                  memcpy(&stack0x00000c90,&stack0x000008a0,0x378);
                  goto LAB_035529dc;
                }
                goto LAB_03554580;
              }
              if (iVar11 != 6) {
                if (iVar11 == 3) {
                  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  goto LAB_03552550;
                }
                goto LAB_03552f54;
              }
              if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              in_stack_000017a8 = FUN_0358c15c();
              lVar41 = unaff_x19[0x5d];
              if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
              }
              uVar19 = FUN_036cee6c(lVar41,0,0);
              if ((uVar19 & 1) != 0) {
                plVar42 = (long *)unaff_x19[0x5d];
                uVar17 = (**(code **)(*unaff_x19 + 0x518))();
                if (plVar42 == (long *)0x0) goto LAB_035574b8;
                (**(code **)(*plVar42 + 0x528))(plVar42,uVar17,*(undefined8 *)(*plVar42 + 0x530));
                lVar41 = unaff_x19[0x5d];
                if (lVar41 == 0) goto LAB_035574b8;
                *(int *)(lVar41 + 0x400) = (int)unaff_x19[0x80];
                FUN_0357ee30(lVar41,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                plVar42 = (long *)unaff_x19[0x5d];
                if (plVar42 == (long *)0x0) goto LAB_035574b8;
                (**(code **)(*plVar42 + 0x7a8))(plVar42,0,0,*(undefined8 *)(*plVar42 + 0x7b0));
                *(undefined1 *)(unaff_x19 + 0x5f) = 1;
              }
LAB_03552b00:
              unaff_x29 = (undefined8 *)&stack0x000008a0;
              in_stack_000017c8 = CONCAT44(3,*unaff_x20);
            }
            else {
              if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              unaff_x29 = (undefined8 *)&stack0x000008a0;
              in_stack_000017a8 = FUN_0358c15c();
              if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
                lVar41 = *unaff_x28;
                if ((lVar41 == 0) || (lVar28 = *(long *)(lVar41 + 0x38), lVar28 == 0))
                goto LAB_035574b8;
                if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
                fVar63 = *(float *)(unaff_x19 + 0x9b);
                fVar46 = 0.0;
                if ((0.0 < fVar63) && (fVar46 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                  fVar46 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
                }
                fVar46 = fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57) +
                         *(float *)(lVar28 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
                         (fVar46 - *(float *)((long)unaff_x19 + 0x4cc)) +
                         fStack0000000000000058 *
                         (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700));
              }
              else {
                lVar41 = unaff_x19[0x6d];
                *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
                if (lVar41 == 0) goto LAB_035574b8;
                fVar63 = *(float *)(unaff_x19 + 0x9b);
                fVar46 = *(float *)(unaff_x19 + 0x58) +
                         fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57);
              }
              puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
              lVar41 = *(long *)(lVar41 + 0x38);
              if (lVar41 == 0) goto LAB_035574b8;
              uVar33 = *(uint *)((long)unaff_x19 + 0x494);
              if ((*(uint *)(lVar41 + 0x18) <= uVar33) ||
                 (uVar38 = uVar33 - 1, *(uint *)(lVar41 + 0x18) <= uVar38)) goto LAB_035575f4;
              param_3 = (ulong)(uint)(fVar46 + *(float *)(unaff_x19 + 0x97));
              fVar64 = (fVar46 + *(float *)(unaff_x19 + 0x97) + fVar63) -
                       *(float *)(lVar41 + (long)(int)uVar33 * unaff_x24 + 0x158);
              if (((bStack0000000000000074 & 1) != 0 ||
                   *(short *)(lVar41 + (long)(int)uVar38 * (long)iVar13 + 0x20) != 0xad) ||
                 ((fStack00000000000000c4 <= fVar64 && ((int)unaff_x19[0x5c] != 0)))) {
                if (*(short *)(lVar41 + (long)(int)uVar33 * unaff_x24 + 0x20) == 0xad) {
                  bStack0000000000000074 = 1;
                }
                else {
                  if ((in_w10 & *(byte *)(unaff_x19 + 0x47) & 1) != 0) {
                    fVar46 = *(float *)((long)unaff_x19 + 0x2d4);
                    fVar63 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                    if ((fVar63 <= fVar46) ||
                       ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
                      fVar46 = *(float *)((long)unaff_x19 + 0x1e4);
                      param_3 = (ulong)(uint)fVar46;
                      fVar63 = *(float *)(unaff_x19 + 0x4a);
                      if ((fVar46 <= fVar63) ||
                         ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)))
                      goto LAB_03552d44;
LAB_03557594:
                      fVar58 = (fVar46 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                      if (fVar58 <= DAT_00d38b84) {
                        fVar58 = DAT_00d38b84;
                      }
                      *(float *)((long)unaff_x19 + 0x23c) = fVar46;
                      fVar46 = fVar46 - fVar58;
                      goto LAB_03557524;
                    }
LAB_03557558:
                    fVar67 = fVar44;
                    if (0.0 < fVar46) {
                      fVar67 = fVar44 / (1.0 - fVar46);
                    }
                    fVar46 = fVar46 + (fVar44 - fVar58 * (fStack00000000000000fc + DAT_00d38cc4)) /
                                      fVar67;
LAB_035574e8:
                    if (fVar63 <= fVar46) {
                      fVar46 = fVar63;
                    }
                    *(float *)((long)unaff_x19 + 0x2d4) = fVar46;
                    return;
                  }
LAB_03552d44:
                  lVar41 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (*(int *)(lVar41 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar41 = *(long *)puVar6;
                  }
                  iVar11 = *(int *)(*(long *)(lVar41 + 0xb8) + 0xe78);
                  if (((iVar11 != iStack0000000000000034) && (iVar11 != -1)) &&
                     (((in_w10 ^ 1) & 1) == 0)) {
                    if (*(int *)(lVar41 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    in_stack_000017a8 = FUN_0358c15c();
                    if ((unaff_x19[0x6d] == 0) ||
                       (lVar41 = *(long *)(unaff_x19[0x6d] + 0x38), lVar41 == 0)) goto LAB_035574b8;
                    uVar33 = *unaff_x20 - 1;
                    if (*(uint *)(lVar41 + 0x18) <= uVar33) goto LAB_035575f4;
                    iStack0000000000000034 = iVar11;
                    if (*(short *)(lVar41 + (long)(int)uVar33 * (long)iVar13 + 0x20) == 0xad) {
                      bStack0000000000000074 = 0;
                      in_stack_000017c8 = CONCAT44(0x2d,uVar33);
                      *unaff_x20 = uVar33;
                      in_stack_000017a8 = in_stack_000017a8 - 1;
                      goto LAB_03550bd0;
                    }
                  }
                  if (fVar64 <= fStack00000000000000c4) {
switchD_03552ef4_caseD_0:
                    param_3 = unaff_d11;
                    FUN_0358cbd4(fStack0000000000000058,unaff_d11,fStack00000000000000d4,
                                 *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,
                                 fVar49,fStack00000000000000fc,in_stack_00000050._4_4_);
                  }
                  else {
                    if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                      *(undefined4 *)((long)unaff_x19 + 0x2e4) =
                           *(undefined4 *)((long)unaff_x19 + 0x494);
                    }
                    fVar63 = fStack00000000000000c4;
                    if ((char)unaff_x19[0x47] != '\0') {
                      fVar63 = *(float *)(unaff_x19 + 0x59);
                      if ((fVar63 < *(float *)((long)unaff_x19 + 700)) &&
                         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                        fVar58 = *(float *)((long)unaff_x19 + 700) +
                                 ((in_stack_00000018._4_4_ - fVar64) /
                                 (float)((int)unaff_x19[0x95] + 1)) / fStack0000000000000058;
                        if (fVar58 <= fVar63) {
                          fVar58 = fVar63;
                        }
LAB_03554b48:
                        *(float *)((long)unaff_x19 + 700) = fVar58;
                        return;
                      }
                      fVar46 = *(float *)((long)unaff_x19 + 0x2d4);
                      fVar63 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                      if ((fVar46 < fVar63) &&
                         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
                      goto LAB_03557558;
                      fVar46 = *(float *)((long)unaff_x19 + 0x1e4);
                      param_3 = (ulong)(uint)fVar46;
                      fVar63 = *(float *)(unaff_x19 + 0x4a);
                      if ((fVar63 < fVar46) &&
                         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
                      goto LAB_03557594;
                    }
                    switch((int)unaff_x19[0x5c]) {
                    case 0:
                    case 2:
                    case 4:
                      goto switchD_03552ef4_caseD_0;
                    case 1:
                      lVar41 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                      if (*(int *)(lVar41 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar41 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                      }
                      lVar28 = *(long *)(lVar41 + 0xb8);
                      lVar41 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
                      if ((*(byte *)(lVar41 + 0x135) & 1) == 0) {
                        lVar41 = FUN_01a46ff8(lVar41);
                      }
                      piVar21 = (int *)thunk_FUN_01a59484(lVar28 + 0x11f0,
                                                          *(long *)(*(long *)(*(long *)(lVar41 + 
                                                  0xc0) + 8) + 0x80) + 0xa0);
                      if (*piVar21 == 0) {
                        bStack0000000000000074 = 0;
                        goto LAB_03554580;
                      }
                      lVar41 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                      if (*(int *)(lVar41 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar41 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                      }
                      FUN_0209b778(*(long *)(lVar41 + 0xb8) + 0x11f0,&stack0x000008a0,
                                   *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                      memcpy(&stack0x00001008,&stack0x000008a0,0x378);
                      iVar13 = FUN_0358c15c();
                      bStack0000000000000074 = 0;
                      goto LAB_035529e8;
                    case 3:
                      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      in_stack_000017a8 = FUN_0358c15c();
                      bStack0000000000000074 = 0;
                      goto UnityEngine_AnimationClip__get_hasMotionCurves;
                    case 5:
                      *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
                      param_3 = unaff_d11;
                      FUN_0358cbd4(fStack0000000000000058,unaff_d11,fStack00000000000000d4,
                                   *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,
                                   fVar49,fStack00000000000000fc,in_stack_00000050._4_4_);
                      *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                      *(undefined4 *)(unaff_x19 + 0x9b) = 0;
                      *(undefined8 *)(in_stack_00000080 + 0x208) = 0;
                      *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
                      break;
                    case 6:
                      lVar41 = unaff_x19[0x5d];
                      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar19 = FUN_036cee6c(lVar41,0,0);
                      if ((uVar19 & 1) != 0) {
                        plVar42 = (long *)unaff_x19[0x5d];
                        uVar17 = (**(code **)(*unaff_x19 + 0x518))();
                        if (plVar42 == (long *)0x0) goto LAB_035574b8;
                        (**(code **)(*plVar42 + 0x528))
                                  (plVar42,uVar17,*(undefined8 *)(*plVar42 + 0x530));
                        lVar41 = unaff_x19[0x5d];
                        if (lVar41 == 0) goto LAB_035574b8;
                        *(int *)(lVar41 + 0x400) = (int)unaff_x19[0x80];
                        FUN_0357ee30(lVar41,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                        plVar42 = (long *)unaff_x19[0x5d];
                        if (plVar42 == (long *)0x0) goto LAB_035574b8;
                        (**(code **)(*plVar42 + 0x7a8))
                                  (plVar42,0,0,*(undefined8 *)(*plVar42 + 0x7b0));
                        *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                      }
                      bStack0000000000000074 = 0;
                      goto LAB_03552b00;
                    default:
                      bStack0000000000000074 = 0;
                      goto LAB_03552f54;
                    }
                  }
                  in_w10 = 1;
                  bStack0000000000000074 = 0;
                  uStack000000000000006c = 1;
                }
              }
              else {
                bStack0000000000000074 = 0;
                in_stack_000017c8 = CONCAT44(0x2d,uVar38);
                *unaff_x20 = uVar38;
                in_stack_000017a8 = in_stack_000017a8 - 1;
              }
            }
            goto LAB_03550bd0;
          }
LAB_03552f54:
          if (uVar10 != 0xad) {
            if (uVar10 == 9) {
              lVar41 = *unaff_x28;
              if ((lVar41 != 0) && (lVar28 = *(long *)(lVar41 + 0x38), lVar28 != 0)) {
                uVar14 = *unaff_x20;
                if (*(uint *)(lVar28 + 0x18) <= uVar14) goto LAB_035575f4;
                *(undefined1 *)(lVar28 + (long)(int)uVar14 * unaff_x24 + 0x194) = 0;
                *(uint *)((long)unaff_x19 + 0x4a4) = uVar14;
                lVar28 = *(long *)(lVar41 + 0x50);
                if (lVar28 != 0) {
                  if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar28 + 0x18)) {
                    lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                    *(int *)(lVar28 + 0x2c) = *(int *)(lVar28 + 0x2c) + 1;
                    goto LAB_03552fcc;
                  }
                  goto LAB_035575f4;
                }
              }
            }
            else {
              if (*(int *)((long)unaff_x19 + 0x644) == 1) {
                (**(code **)(*unaff_x19 + 0x898))(fVar63,fVar50);
              }
              else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
                (**(code **)(*unaff_x19 + 0x888))(fStack000000000000015c);
              }
              uVar14 = *unaff_x20;
              if ((uStack000000000000006c & 1) != 0) {
                *(uint *)(in_stack_00000080 + 0x1f0) = uVar14;
              }
              *(uint *)((long)unaff_x19 + 0x4a4) = uVar14;
              *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar41 = *(long *)(unaff_x19[0x6d] + 0x50), lVar41 != 0)) {
                if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar41 + 0x18)) {
                  lVar41 = lVar41 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                  uStack000000000000006c = 0;
                  *(float *)(lVar41 + 0x60) = fVar47;
                  *(float *)(lVar41 + 100) = fVar45;
                  goto LAB_035530c4;
                }
                goto LAB_035575f4;
              }
            }
            goto LAB_035574b8;
          }
          if ((*unaff_x28 == 0) || (lVar41 = *(long *)(*unaff_x28 + 0x38), lVar41 == 0))
          goto LAB_035574b8;
          if (*(uint *)(lVar41 + 0x18) <= *unaff_x20) goto LAB_035575f4;
          *(undefined1 *)(lVar41 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
        }
        else {
          if (((uVar10 & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
            fVar44 = (float)param_3;
            fVar58 = 0.0;
            if ((0.0 < fVar44) && (fVar58 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
              fVar58 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
            }
            param_3 = (ulong)(uint)fStack00000000000000c4;
            if (fStack00000000000000c4 <
                (*(float *)(unaff_x19 + 0x97) - (*(float *)((long)unaff_x19 + 0x4cc) - fVar44)) +
                fVar58) {
              if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                *(uint *)((long)unaff_x19 + 0x2e4) = uVar14;
              }
              if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              in_stack_000017a8 = FUN_0358c15c();
              lVar41 = unaff_x19[0x5d];
              if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
              }
              uVar19 = FUN_036cee6c(lVar41,0,0);
              if ((uVar19 & 1) != 0) {
                plVar42 = (long *)unaff_x19[0x5d];
                uVar17 = (**(code **)(*unaff_x19 + 0x518))();
                if (plVar42 != (long *)0x0) {
                  (**(code **)(*plVar42 + 0x528))(plVar42,uVar17,*(undefined8 *)(*plVar42 + 0x530));
                  lVar41 = unaff_x19[0x5d];
                  if (lVar41 != 0) {
                    *(int *)(lVar41 + 0x400) = (int)unaff_x19[0x80];
                    FUN_0357ee30(lVar41,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                    plVar42 = (long *)unaff_x19[0x5d];
                    if (plVar42 != (long *)0x0) {
                      (**(code **)(*plVar42 + 0x7a8))(plVar42,0,0,*(undefined8 *)(*plVar42 + 0x7b0))
                      ;
                      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                      goto UnityEngine_AnimationClip__get_hasMotionCurves;
                    }
                  }
                }
                goto LAB_035574b8;
              }
              goto UnityEngine_AnimationClip__get_hasMotionCurves;
            }
          }
          if ((((uVar10 - 0x2007 < 0x23) &&
               ((1L << ((ulong)(uVar10 - 0x2007) & 0x3f) & 0x600000001U) != 0)) || (uVar10 - 10 < 2)
              ) || (uVar10 == 0xa0)) {
LAB_03552b54:
            if (((uVar10 != 0xad) && (uVar10 != 0x200b)) && (uVar10 != 0x2060)) {
              lVar41 = *unaff_x28;
              if ((lVar41 == 0) || (lVar28 = *(long *)(lVar41 + 0x50), lVar28 == 0))
              goto LAB_035574b8;
              if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
              lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
              *(int *)(lVar28 + 0x2c) = *(int *)(lVar28 + 0x2c) + 1;
              *(int *)(lVar41 + 0x20) = *(int *)(lVar41 + 0x20) + 1;
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
            if ((*unaff_x28 == 0) || (lVar41 = *(long *)(*unaff_x28 + 0x50), lVar41 == 0))
            goto LAB_035574b8;
            if (*(uint *)(lVar41 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
            lVar41 = lVar41 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_03552fcc:
            *(int *)(lVar41 + 0x20) = *(int *)(lVar41 + 0x20) + 1;
          }
        }
LAB_035530c4:
        unaff_x29 = (undefined8 *)&stack0x000008a0;
        if (((int)unaff_x19[0x5c] == 1) && ((uVar10 == 0x2d || (!bVar5)))) {
          if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
          fVar58 = *(float *)(unaff_x19 + 0x3d);
          iVar11 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
          if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
          fVar47 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
          lVar41 = unaff_x19[0xca];
          fVar44 = in_stack_00000098;
          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
            fVar44 = 1.0;
          }
          if ((lVar41 == 0) || (*(long *)(lVar41 + 0x20) == 0)) goto LAB_035574b8;
          fVar63 = *(float *)((long)unaff_x19 + 0x404);
          fVar64 = *(float *)(lVar41 + 0x2c);
          fVar45 = (float)FUN_03776ea8(*(long *)(lVar41 + 0x20),0);
          fVar46 = *_fStack00000000000000a8;
          fVar45 = fVar63 * (fVar58 / (float)iVar11) * fVar47 * fVar44 * fVar64 * fVar45;
          fVar58 = *_fStack00000000000000a0;
          if ((uVar10 == 10) && (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93])) {
            if ((*unaff_x28 == 0) || (lVar41 = *(long *)(*unaff_x28 + 0x38), lVar41 == 0))
            goto LAB_035574b8;
            uVar14 = *(int *)((long)unaff_x19 + 0x494) - 1;
            if (*(uint *)(lVar41 + 0x18) <= uVar14) goto LAB_035575f4;
            if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
            fVar44 = *(float *)(lVar41 + (long)(int)uVar14 * (long)iVar13 + 0x60);
            iVar11 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
            if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
            fVar63 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
            lVar41 = unaff_x19[0xca];
            fVar47 = in_stack_00000098;
            if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
              fVar47 = 1.0;
            }
            if ((lVar41 == 0) || (*(long *)(lVar41 + 0x20) == 0)) goto LAB_035574b8;
            fVar64 = *(float *)((long)unaff_x19 + 0x404);
            fVar50 = *(float *)(lVar41 + 0x2c);
            fVar45 = (float)FUN_03776ea8(*(long *)(lVar41 + 0x20),0);
            if ((*unaff_x28 == 0) || (lVar41 = *(long *)(*unaff_x28 + 0x50), lVar41 == 0))
            goto LAB_035574b8;
            if (*(uint *)(lVar41 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
            lVar41 = lVar41 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
            fVar46 = *(float *)(lVar41 + 0x60);
            fVar58 = *(float *)(lVar41 + 100);
            fVar45 = fVar64 * (fVar44 / (float)iVar11) * fVar63 * fVar47 * fVar50 * fVar45;
          }
          fVar63 = *(float *)(unaff_x19 + 0x9b);
          fVar44 = 0.0;
          fVar47 = 0.0;
          if ((0.0 < fVar63) && (fVar47 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
            fVar47 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
          }
          fVar50 = *(float *)(unaff_x19 + 0x97);
          fVar61 = *(float *)((long)unaff_x19 + 0x4cc);
          fVar64 = *(float *)(unaff_x19 + 200);
          if ((char)unaff_x19[0x1e] == '\0') {
            if ((unaff_x19[0xca] == 0) || (lVar41 = *(long *)(unaff_x19[0xca] + 0x20), lVar41 == 0))
            goto LAB_035574b8;
            FUN_03776e6c(&stack0x000008a0,lVar41,0);
            fVar44 = (float)FUN_03776cb4(&stack0x00001700,0);
          }
          puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          fVar68 = *(float *)(unaff_x19 + 0x6c);
          fVar58 = (fStack000000000000009c - fVar46) - fVar58;
          bVar8 = true;
          if ((fVar68 <= fVar58) && (bVar8 = false, !NAN(fVar68))) {
            bVar8 = fVar68 == -1.0;
          }
          if (!bVar8) {
            fVar58 = fVar68;
          }
          fVar46 = 1.0;
          if ((uVar31 & 0x18) != 0) {
            fVar46 = DAT_00d38acc;
          }
          if (((fVar50 - (fVar61 - fVar63)) + fVar47 < fStack00000000000000c4) &&
             (ABS(fVar64) + fVar45 * fVar44 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
              fVar46 * fVar58)) {
            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_0358c4f0();
            lVar41 = *(long *)(*(long *)puVar6 + 0xb8);
            memcpy(&stack0x00000528,(void *)(lVar41 + 0x788),0x378);
            FUN_0209b210(lVar41 + 0x11f0,&stack0x00000528,
                         *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
          }
        }
        lVar41 = *unaff_x28;
        if (lVar41 == 0) goto LAB_035574b8;
        lVar28 = *(long *)(lVar41 + 0x38);
        unaff_d11 = (ulong)(uint)fVar67;
        if (lVar28 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        uVar14 = *(uint *)(unaff_x19 + 0x95);
        lVar28 = lVar28 + (long)(int)*unaff_x20 * unaff_x24;
        *(uint *)(lVar28 + 100) = uVar14;
        *(int *)(lVar28 + 0x68) = (int)unaff_x19[0x96];
        if ((bVar5) || ((uVar10 < 0xe && ((1 << (ulong)(uVar10 & 0x1f) & 0x2c00U) != 0)))) {
          lVar41 = *(long *)(lVar41 + 0x50);
          if (lVar41 == 0) goto LAB_035574b8;
          if (*(uint *)(lVar41 + 0x18) <= uVar14) goto LAB_035575f4;
          if (*(int *)(lVar41 + (long)(int)uVar14 * 0x5c + 0x24) == 1) goto LAB_0355346c;
        }
        else {
          lVar41 = *(long *)(lVar41 + 0x50);
          if (lVar41 == 0) goto LAB_035574b8;
LAB_0355346c:
          if (*(uint *)(lVar41 + 0x18) <= uVar14) goto LAB_035575f4;
          *(int *)(lVar41 + (long)(int)uVar14 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
        }
        if (uVar10 == 9) {
          if (*unaff_x21 == 0) goto LAB_035574b8;
          fVar58 = (float)FUN_03776a48(*unaff_x21 + 0x50,0);
          if (*unaff_x21 == 0) goto LAB_035574b8;
          fVar47 = *(float *)(unaff_x19 + 200);
          fVar44 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x21 + 0x1b9));
          fVar58 = fVar67 * fVar58 * fVar44;
          fVar44 = fVar58 * (float)(int)(fVar47 / fVar58);
          param_3 = (ulong)(uint)fVar44;
          if (fVar44 <= fVar47) {
            fVar44 = fVar47 + fVar58;
          }
LAB_03553678:
          *(float *)(unaff_x19 + 200) = fVar44;
        }
        else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
          if ((char)unaff_x19[0x1e] == '\0') {
            if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
              fVar47 = 1.0;
            }
            else {
              fVar47 = (float)thunk_FUN_036bc400(_fStack0000000000000078,0);
            }
            fVar44 = *(float *)(unaff_x19 + 200);
            fVar45 = (float)FUN_03776cb4(&stack0x00001790,0);
            if (unaff_x19[0x20] != 0) {
              fVar58 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
              fVar44 = fVar44 + fVar58 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                         fVar67 * (fStack000000000000012c + fVar47 * fVar45) +
                                         fStack00000000000000d4 *
                                         (fStack00000000000000d0 +
                                         fVar49 + *(float *)(unaff_x19[0x20] + 0x1ac)));
              *(float *)(unaff_x19 + 200) = fVar44;
              goto joined_r0x035535c0;
            }
            goto LAB_035574b8;
          }
          if (*unaff_x21 == 0) goto LAB_035574b8;
          fVar44 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                   (*(float *)((long)unaff_x19 + 0x2ac) +
                   fVar67 * fStack000000000000012c +
                   fStack00000000000000d4 *
                   (fStack00000000000000d0 + fVar49 + *(float *)(*unaff_x21 + 0x1ac)));
          param_3 = (ulong)(uint)fVar44;
          fVar44 = *(float *)(unaff_x19 + 200) - fVar44;
          *(float *)(unaff_x19 + 200) = fVar44;
          if ((uVar10 == 0x200b) || (uVar12 != 0)) {
            fVar58 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
            param_3 = (ulong)(uint)fVar58;
            fVar44 = fVar44 - fVar58;
            goto LAB_03553678;
          }
        }
        else {
          if (*unaff_x21 == 0) goto LAB_035574b8;
          fVar58 = *(float *)(unaff_x19 + 200);
          fVar44 = fVar58 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                            (*(float *)((long)unaff_x19 + 0x2ac) +
                            (*(float *)(unaff_x19 + 0x56) - fVar48) +
                            fStack00000000000000d4 * (fVar49 + *(float *)(*unaff_x21 + 0x1ac)));
          *(float *)(unaff_x19 + 200) = fVar44;
joined_r0x035535c0:
          if ((uVar10 == 0x200b) || (param_3 = (ulong)(uint)fVar58, uVar12 != 0)) {
            fVar58 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
            param_3 = (ulong)(uint)fVar58;
            fVar44 = fVar44 + fVar58;
            goto LAB_03553678;
          }
        }
        lVar41 = *unaff_x28;
        if ((lVar41 == 0) || (lVar28 = *(long *)(lVar41 + 0x38), lVar28 == 0)) goto LAB_035574b8;
        uVar14 = *unaff_x20;
        uVar31 = (uint)*(undefined8 *)(lVar28 + 0x18);
        if (uVar31 <= uVar14) goto LAB_035575f4;
        *(float *)(lVar28 + (long)(int)uVar14 * unaff_x24 + 0x144) = fVar44;
        uVar33 = uVar10;
        if ((int)uVar10 < 0xd) {
          if ((uVar10 - 10 < 2) || (uVar10 == 3)) goto LAB_0355371c;
LAB_03553700:
          if (((bool)(bVar5 & uVar10 == 0x2d)) || ((float)uVar14 == in_stack_00000088._4_4_))
          goto LAB_0355371c;
        }
        else {
          if (1 < uVar10 - 0x2028) {
            if (uVar10 != 0xd) goto LAB_03553700;
            param_3 = 0;
            *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
            if ((float)uVar14 != in_stack_00000088._4_4_) goto LAB_03553c8c;
          }
LAB_0355371c:
          if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
            fVar58 = *(float *)(unaff_x19 + 0x99);
            fVar44 = *(float *)(unaff_x19 + 0x9a);
            if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            fVar58 = fVar58 - fVar44;
            if (((fStack000000000000005c < ABS(fVar58)) &&
                (*(char *)((long)unaff_x19 + 0x2c4) == '\0')) &&
               (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
              FUN_0358c860(fVar58);
              *(float *)((long)unaff_x19 + 0x4c4) = *(float *)((long)unaff_x19 + 0x4c4) - fVar58;
              *(float *)(unaff_x19 + 0x9b) = fVar58 + *(float *)(unaff_x19 + 0x9b);
              puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
              lVar41 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar41 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar41 = *(long *)puVar6;
              }
              lVar28 = *(long *)(lVar41 + 0xb8);
              if (*(int *)(lVar28 + 0x7ac) == (int)unaff_x19[0x95]) {
                if (*(int *)(lVar41 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar28 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                }
                FUN_0209b778(lVar28 + 0x11f0,&stack0x000008a0,
                             *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                lVar41 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                memcpy((void *)(*(long *)(lVar41 + 0xb8) + 0x788),&stack0x000008a0,0x378);
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (*(long *)(lVar41 + 0xb8) + 0x818,0);
                lVar41 = *(long *)(*(long *)puVar6 + 0xb8);
                *(float *)(lVar41 + 0x7bc) = fVar58 + *(float *)(lVar41 + 0x7bc);
                *(float *)(lVar41 + 0x800) = fVar58 + *(float *)(lVar41 + 0x800);
                memcpy(&stack0x000001b0,(void *)(lVar41 + 0x788),0x378);
                FUN_0209b210(lVar41 + 0x11f0,&stack0x000001b0,
                             *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
              }
            }
          }
          fVar47 = *(float *)(unaff_x19 + 0x9b);
          *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
          fVar44 = *(float *)((long)unaff_x19 + 0x4cc) - fVar47;
          fVar58 = *(float *)((long)unaff_x19 + 0x4c4);
          if (fVar44 <= *(float *)((long)unaff_x19 + 0x4c4)) {
            fVar58 = fVar44;
          }
          *(float *)((long)unaff_x19 + 0x4c4) = fVar58;
          fVar45 = *(float *)(unaff_x19 + 0x99);
          if (in_stack_000017d4 == '\0') {
            in_stack_000017d8 = fVar58;
          }
          if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
             (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
              ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
            in_stack_000017d4 = '\x01';
          }
          lVar41 = *unaff_x28;
          if ((lVar41 == 0) || (lVar28 = *(long *)(lVar41 + 0x50), lVar28 == 0)) goto LAB_035574b8;
          uVar14 = *(uint *)(unaff_x19 + 0x95);
          if (*(uint *)(lVar28 + 0x18) <= uVar14) goto LAB_035575f4;
          lVar43 = unaff_x19[0x93];
          lVar20 = lVar28 + (long)(int)uVar14 * 0x5c;
          *(int *)(lVar20 + 0x34) = (int)lVar43;
          uVar31 = *(uint *)(unaff_x19 + 0x93);
          if ((int)lVar43 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
            uVar31 = *(uint *)((long)unaff_x19 + 0x49c);
          }
          *(uint *)((long)unaff_x19 + 0x49c) = uVar31;
          *(uint *)(lVar20 + 0x38) = uVar31;
          *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
          *(undefined4 *)(lVar20 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
          iVar11 = *(int *)((long)unaff_x19 + 0x49c);
          if ((int)uVar31 <= *(int *)((long)unaff_x19 + 0x4a4)) {
            iVar11 = *(int *)((long)unaff_x19 + 0x4a4);
          }
          *(int *)((long)unaff_x19 + 0x4a4) = iVar11;
          *(int *)(lVar20 + 0x40) = iVar11;
          *(int *)(lVar20 + 0x24) = (*(int *)(lVar20 + 0x3c) - *(int *)(lVar20 + 0x34)) + 1;
          *(undefined4 *)(lVar20 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
          lVar41 = *(long *)(lVar41 + 0x38);
          if (lVar41 == 0) goto LAB_035574b8;
          if (*(uint *)(lVar41 + 0x18) <= uVar31) goto LAB_035575f4;
          uVar66 = *(undefined4 *)(lVar41 + (long)(int)uVar31 * (long)iVar13 + 0x11c);
          lVar28 = lVar28 + (long)(int)uVar14 * 0x5c;
          *(float *)(lVar28 + 0x70) = fVar44;
          *(undefined4 *)(lVar28 + 0x6c) = uVar66;
          lVar41 = *unaff_x28;
          if ((lVar41 == 0) || (lVar28 = *(long *)(lVar41 + 0x50), lVar28 == 0)) goto LAB_035574b8;
          if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
          lVar41 = *(long *)(lVar41 + 0x38);
          if (lVar41 == 0) goto LAB_035574b8;
          if (*(uint *)(lVar41 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
          fVar45 = fVar45 - fVar47;
          param_3 = (ulong)(uint)fVar45;
          lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
          *(undefined4 *)(lVar28 + 0x74) =
               *(undefined4 *)
                (lVar41 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x128);
          *(float *)(lVar28 + 0x78) = fVar45;
          lVar41 = *unaff_x28;
          if ((lVar41 == 0) || (lVar43 = *(long *)(lVar41 + 0x50), lVar43 == 0)) goto LAB_035574b8;
          lVar20 = (long)(int)*(uint *)(unaff_x19 + 0x95);
          if (*(uint *)(lVar43 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
          lVar28 = lVar43 + lVar20 * 0x5c;
          *(float *)(lVar28 + 0x44) = *(float *)(lVar28 + 0x74) - fVar67 * fStack000000000000015c;
          *(float *)(lVar28 + 0x5c) = fStack00000000000000fc;
          if (*(int *)(lVar28 + 0x24) == 1) {
            *(int *)(lVar43 + lVar20 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
          }
          if ((*unaff_x21 == 0) || (lVar28 = *(long *)(lVar41 + 0x38), lVar28 == 0))
          goto LAB_035574b8;
          lVar36 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
          uVar31 = (uint)*(undefined8 *)(lVar28 + 0x18);
          if (uVar31 <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
          if ((*(char *)(lVar28 + lVar36 * unaff_x24 + 0x194) == '\0') &&
             (lVar36 = (long)(int)*(uint *)(unaff_x19 + 0x94), uVar31 <= *(uint *)(unaff_x19 + 0x94)
             )) goto LAB_035575f4;
          lVar43 = lVar43 + lVar20 * 0x5c;
          fVar67 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                   (fStack00000000000000d4 *
                    (fStack00000000000000d0 + fVar49 + *(float *)(*unaff_x21 + 0x1ac)) -
                   *(float *)((long)unaff_x19 + 0x2ac));
          fVar58 = -fVar67;
          if ((char)unaff_x19[0x1e] != '\0') {
            fVar58 = fVar67;
          }
          *(float *)(lVar43 + 0x58) = *(float *)(lVar28 + lVar36 * unaff_x24 + 0x144) + fVar58;
          *(float *)(lVar43 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
          *(float *)(lVar43 + 0x54) = fVar44;
          *(float *)(lVar43 + 0x48) = in_stack_00000060 + (fVar45 - fVar44);
          *(float *)(lVar43 + 0x4c) = fVar45;
          if ((int)uVar10 < 0x2d) {
            if (uVar10 - 10 < 2) {
LAB_03553b60:
              if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_0358c4f0();
              lVar41 = unaff_x19[0x6d];
              *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
              iVar13 = (int)unaff_x19[0x95] + 1;
              *(int *)(unaff_x19 + 0x95) = iVar13;
              *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
              if ((lVar41 != 0) && (*(long *)(lVar41 + 0x50) != 0)) {
                if (*(int *)(*(long *)(lVar41 + 0x50) + 0x18) <= iVar13) {
                  FUN_0358ca18();
                  lVar41 = unaff_x19[0x6d];
                  if (lVar41 == 0) goto LAB_035574b8;
                }
                lVar41 = *(long *)(lVar41 + 0x38);
                if (lVar41 != 0) {
                  if (*unaff_x20 < *(uint *)(lVar41 + 0x18)) {
                    fVar58 = *(float *)(lVar41 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
                    if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
                      if ((uVar10 == 0x2029) || (fVar67 = 0.0, uVar10 == 10)) {
                        fVar67 = *(float *)((long)unaff_x19 + 0x2cc);
                      }
                      uVar23 = 0;
                      fVar67 = fVar58 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                               fStack0000000000000058 *
                               (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700)) +
                               fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar67) +
                               *(float *)(unaff_x19 + 0x9b);
                    }
                    else {
                      if ((uVar10 == 0x2029) || (fVar67 = 0.0, uVar10 == 10)) {
                        fVar67 = *(float *)((long)unaff_x19 + 0x2cc);
                      }
                      uVar23 = 1;
                      fVar67 = *(float *)(unaff_x19 + 0x9b) +
                               *(float *)(unaff_x19 + 0x58) +
                               fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar67);
                    }
                    *(float *)(unaff_x19 + 0x9b) = fVar67;
                    *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar23;
                    puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                    lVar41 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                    if (*(int *)(lVar41 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar41 = *(long *)puVar6;
                    }
                    uVar17 = *(undefined8 *)(*(long *)(lVar41 + 0xb8) + 0x15a8);
                    *(float *)(unaff_x19 + 0x9a) = fVar58;
                    param_3 = NEON_rev64(uVar17,4);
                    unaff_x19[0x99] = param_3;
                    *(float *)(unaff_x19 + 200) =
                         *(float *)(unaff_x19 + 0x81) + 0.0 + *(float *)((long)unaff_x19 + 0x40c);
                    FUN_0358c4f0();
                    FUN_0358c4f0();
                    *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
                    uStack000000000000006c = 1;
                    in_w10 = 1;
                    goto LAB_03550bd0;
                  }
                  goto LAB_035575f4;
                }
              }
              goto LAB_035574b8;
            }
            if (uVar10 == 3) {
              if (unaff_x19[0x8f] == 0) goto LAB_035574b8;
              in_stack_000017a8 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
              uVar33 = 3;
            }
          }
          else if ((uVar10 - 0x2028 < 2) || (uVar10 == 0x2d)) goto LAB_03553b60;
        }
LAB_03553c8c:
        uVar14 = *unaff_x20;
        if (uVar31 <= uVar14) goto LAB_035575f4;
        if (*(char *)(lVar28 + (long)(int)uVar14 * unaff_x24 + 0x194) != '\0') {
          lVar28 = lVar28 + (long)(int)uVar14 * unaff_x24;
          uVar53 = *(ulong *)(lVar28 + 0x11c);
          uVar19 = *(ulong *)(in_stack_00000080 + 0x230);
          *(ulong *)(in_stack_00000080 + 0x230) =
               uVar19 ^ (uVar19 ^ uVar53) &
                        ~CONCAT44(-(uint)((float)(uVar19 >> 0x20) < (float)(uVar53 >> 0x20)),
                                  -(uint)((float)uVar19 < (float)uVar53));
          uVar19 = *(ulong *)(in_stack_00000080 + 0x238);
          param_3 = *(ulong *)(lVar28 + 0x128);
          *(ulong *)(in_stack_00000080 + 0x238) =
               uVar19 ^ (uVar19 ^ param_3) &
                        ~CONCAT44(-(uint)((float)(param_3 >> 0x20) < (float)(uVar19 >> 0x20)),
                                  -(uint)((float)param_3 < (float)uVar19));
        }
        if (((int)unaff_x19[0x5c] == 5) &&
           ((0xd < uVar33 || ((1 << (ulong)(uVar33 & 0x1f) & 0x2c00U) == 0)))) {
          lVar28 = *(long *)(lVar41 + 0x58);
          if (lVar28 == 0) goto LAB_035574b8;
          iVar11 = (int)unaff_x19[0x96] + 1;
          if (*(int *)(lVar28 + 0x18) < iVar11) {
            if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_01ff02b8((long *)(lVar41 + 0x58),iVar11,1,*(undefined8 *)OVRPlugin_MeshType_TypeInfo
                        );
            lVar41 = *unaff_x28;
            if (lVar41 == 0) goto LAB_035574b8;
          }
          lVar28 = *(long *)(lVar41 + 0x58);
          if (lVar28 == 0) goto LAB_035574b8;
          uVar31 = *(uint *)(unaff_x19 + 0x96);
          lVar43 = (long)(int)uVar31;
          uVar14 = *(uint *)(lVar28 + 0x18);
          if (uVar14 <= uVar31) goto LAB_035575f4;
          lVar20 = lVar28 + lVar43 * 0x14;
          fVar67 = *(float *)(lVar20 + 0x30);
          param_3 = (ulong)(uint)fVar67;
          *(undefined4 *)(lVar20 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
          fVar58 = *(float *)((long)unaff_x19 + 0x4c4);
          if (fVar67 <= *(float *)((long)unaff_x19 + 0x4c4)) {
            fVar58 = fVar67;
          }
          *(float *)(lVar20 + 0x30) = fVar58;
          uVar33 = *(uint *)((long)unaff_x19 + 0x494);
          if (uVar33 == 0 && uVar31 == 0) {
            *(uint *)(lVar28 + (ulong)uVar31 * 0x14 + 0x20) = uVar33;
          }
          else {
            uVar38 = uVar33 - 1;
            if (0 < (int)uVar33) {
              lVar41 = *(long *)(lVar41 + 0x38);
              if (lVar41 == 0) goto LAB_035574b8;
              if (*(uint *)(lVar41 + 0x18) <= uVar38) goto LAB_035575f4;
              if (uVar31 != *(uint *)(lVar41 + (ulong)uVar38 * (unaff_x24 & 0xffffffff) + 0x68)) {
                if (uVar31 - 1 < uVar14) {
                  *(uint *)(lVar28 + 0x20 + (long)(int)(uVar31 - 1) * 0x14 + 4) = uVar38;
                  *(uint *)(lVar28 + 0x20 + lVar43 * 0x14) = uVar33;
                  goto LAB_03553d10;
                }
                goto LAB_035575f4;
              }
            }
            if ((float)uVar33 == in_stack_00000088._4_4_) {
              *(float *)(lVar28 + lVar43 * 0x14 + 0x24) = in_stack_00000088._4_4_;
            }
          }
        }
LAB_03553d10:
        puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        unaff_x29 = (undefined8 *)&stack0x000008a0;
        if (((char)unaff_x19[0x5b] == '\0') &&
           ((6 < *(uint *)(unaff_x19 + 0x5c) ||
            ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0)))) goto LAB_035542ac;
        if ((uVar12 == 0) && (((uVar10 != 0x2d && (uVar10 != 0x200b)) && (uVar10 != 0xad)))) {
          if (*(char *)((long)unaff_x19 + 0x2da) == '\0') {
LAB_03553ef0:
            if (((((0x2bfd < uVar10 - 0xac01) && (0xfd < uVar10 - 0x1101)) &&
                 (0x1d < uVar10 - 0xa961)) || (uVar19 = FUN_03597a54(0), (uVar19 & 1) != 0)) &&
               ((((0xed < uVar10 - 0xff01 && (0x1d < uVar10 - 0xfe31)) && (0x717d < uVar10 - 0x2e81)
                 ) && (0x1fd < uVar10 - 0xf901)))) goto LAB_03553f78;
            lVar41 = FUN_035978e8(0);
            if ((lVar41 == 0) || (*(long *)(lVar41 + 0x10) == 0)) goto LAB_035574b8;
            uVar14 = FUN_0219c130(*(long *)(lVar41 + 0x10),&stack0x000008a0,
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
              if (uVar55 != uVar25 || ((in_w10 ^ 0xff) & 1) != 0) goto LAB_035542ac;
              if (uVar12 != 0) goto UnityEngine_Animator__get_bodyPositionInternal;
              goto LAB_0355422c;
            }
            lVar41 = FUN_035978e8(0);
            if (((lVar41 == 0) || (*unaff_x28 == 0)) ||
               (lVar28 = *(long *)(*unaff_x28 + 0x38), lVar28 == 0)) goto LAB_035574b8;
            if (*(uint *)(lVar28 + 0x18) <= *unaff_x20 + 1) goto LAB_035575f4;
            if (*(long *)(lVar41 + 0x18) == 0) goto LAB_035574b8;
            in_stack_000008a0 =
                 (uint)*(ushort *)(lVar28 + (long)(int)(*unaff_x20 + 1) * (long)iVar13 + 0x20);
            uVar19 = FUN_0219c130(*(long *)(lVar41 + 0x18),&stack0x000008a0,
                                  *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
            if ((uVar14 & 1) != 0) goto LAB_035541dc;
            if ((uVar19 & 1) == 0) goto LAB_03554270;
            if ((in_w10 & 1) == 0) goto LAB_035542a8;
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
            if ((in_w10 & 1) == 0) goto LAB_035542a8;
UnityEngine_Animator__set_animatePhysics:
            if ((bStack0000000000000074 & 1) == 0 && uVar10 == 0xad)
            goto UnityEngine_Animator__get_bodyPositionInternal;
LAB_0355422c:
            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_0358c4f0();
          }
          in_w10 = 1;
        }
        else if (*(char *)((long)unaff_x19 + 0x2da) == '\x01') {
LAB_03553f78:
          if ((in_w10 & 1) != 0) {
            if (uVar12 == 0) goto UnityEngine_Animator__set_animatePhysics;
UnityEngine_Animator__get_bodyPositionInternal:
            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_0358c4f0();
            goto LAB_0355422c;
          }
LAB_035542a8:
          in_w10 = 0;
        }
        else {
          if (((uVar10 - 0x2007 < 0x29) &&
              ((1L << ((ulong)(uVar10 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
             ((uVar10 == 0xa0 || (uVar10 == 0x2060)))) goto LAB_03553ef0;
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_0358c4f0();
          in_w10 = 0;
          *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xe78) = 0xffffffff;
        }
LAB_035542ac:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
      }
      else {
        fStack0000000000000158 = 1.0;
        if (iVar11 == 0) goto LAB_03550fec;
LAB_03550c00:
        if (iVar11 != 1) {
          lVar41 = *unaff_x28;
          fVar44 = 0.0;
          fVar67 = fVar44;
          if (uVar10 != 3 && uVar10 != 0xad) {
            fVar67 = fVar58;
          }
          if (lVar41 != 0) {
            fVar47 = 0.0;
            fVar45 = 0.0;
            goto LAB_035514cc;
          }
          goto LAB_035574b8;
        }
        if ((*unaff_x28 == 0) || (lVar41 = *(long *)(*unaff_x28 + 0x38), lVar41 == 0))
        goto LAB_035574b8;
        if (*(uint *)(lVar41 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        *in_stack_000000b8 = *(long *)(lVar41 + (long)(int)*unaff_x20 * unaff_x24 + 0x40);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((*unaff_x28 == 0) || (lVar41 = *(long *)(*unaff_x28 + 0x38), lVar41 == 0))
        goto LAB_035574b8;
        if (*(uint *)(lVar41 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        *(undefined4 *)((long)unaff_x19 + 0x6a4) =
             *(undefined4 *)(lVar41 + (long)(int)*unaff_x20 * unaff_x24 + 0x48);
        if ((unaff_x19[0xd3] == 0) ||
           (lVar41 = UnityEngine_Material__DisableKeyword(unaff_x19[0xd3],0), lVar41 == 0))
        goto LAB_035574b8;
        FUN_02215a88(lVar41,*(undefined4 *)((long)unaff_x19 + 0x6a4),&stack0x000008a0,
                     *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
        puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar41 = CONCAT44(in_stack_000008a4,in_stack_000008a0);
        if (lVar41 != 0) {
          if (uVar10 == 0x3c) {
            uVar10 = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
          }
          else {
            lVar43 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar43 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar43 = *(long *)puVar6;
            }
            *(undefined4 *)((long)unaff_x19 + 0x1bc) =
                 *(undefined4 *)(*(long *)(lVar43 + 0xb8) + 0x68);
          }
          if (unaff_x19[0x20] != 0) {
            fVar58 = *(float *)(unaff_x19 + 0x3d);
            memmove(&stack0x00001720,(void *)(unaff_x19[0x20] + 0x50),0x60);
            iVar11 = FUN_03776950(&stack0x00001720,0);
            if (*unaff_x21 != 0) {
              memmove(&stack0x00001720,(void *)(*unaff_x21 + 0x50),0x60);
              fVar44 = (float)FUN_03776960(&stack0x00001720,0);
              fVar67 = in_stack_00000098;
              if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                fVar67 = 1.0;
              }
              if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
              fVar67 = (fVar58 / (float)iVar11) * fVar44 * fVar67;
              iVar11 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
              fVar58 = *(float *)(unaff_x19 + 0x3d);
              if (iVar11 < 1) {
                if (*unaff_x21 == 0) goto LAB_035574b8;
                iVar11 = FUN_03776950(*unaff_x21 + 0x50,0);
                if (*unaff_x21 == 0) goto LAB_035574b8;
                fVar49 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
                fVar45 = in_stack_00000098;
                if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                  fVar45 = 1.0;
                }
                if (unaff_x19[0x20] == 0) goto LAB_035574b8;
                fVar63 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
                if (*(long *)(lVar41 + 0x20) == 0) goto LAB_035574b8;
                FUN_03776e6c(&stack0x000008a0,*(long *)(lVar41 + 0x20),0);
                fVar46 = (float)FUN_03776c9c(&stack0x00001700,0);
                if (*(long *)(lVar41 + 0x20) == 0) goto LAB_035574b8;
                fVar64 = *(float *)(lVar41 + 0x2c);
                fVar48 = (float)FUN_03776ea8(*(long *)(lVar41 + 0x20),0);
                if (*unaff_x21 == 0) goto LAB_035574b8;
                fVar47 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
                if (*unaff_x21 == 0) goto LAB_035574b8;
                fVar50 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
                if (*unaff_x21 == 0) goto LAB_035574b8;
                fVar61 = *(float *)((long)unaff_x19 + 0x404);
                fVar44 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
                if (unaff_x19[0x20] == 0) goto LAB_035574b8;
                fVar44 = fVar67 * fVar50 * fVar61 * fVar44;
                fVar45 = (fVar58 / (float)iVar11) * fVar49 * fVar45;
                fVar58 = fVar45 * (fVar63 / fVar46) * fVar64 * fVar48;
                fVar45 = fVar45 / fVar58;
                fVar47 = fVar45 * fVar47;
                fVar67 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
                fVar45 = fVar45 * fVar67;
              }
              else {
                if (*in_stack_000000b8 == 0) goto LAB_035574b8;
                iVar11 = FUN_03776950(*in_stack_000000b8 + 0x48,0);
                if (*in_stack_000000b8 == 0) goto LAB_035574b8;
                fVar45 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
                if (*(long *)(lVar41 + 0x20) == 0) goto LAB_035574b8;
                fVar63 = *(float *)(lVar41 + 0x2c);
                fVar49 = in_stack_00000098;
                if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                  fVar49 = 1.0;
                }
                fVar46 = (float)FUN_03776ea8(*(long *)(lVar41 + 0x20),0);
                if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
                fVar47 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
                if (*in_stack_000000b8 == 0) goto LAB_035574b8;
                fVar48 = (float)FUN_037769b0(*in_stack_000000b8 + 0x48,0);
                if (*in_stack_000000b8 == 0) goto LAB_035574b8;
                fVar64 = *(float *)((long)unaff_x19 + 0x404);
                fVar44 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
                if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
                fVar44 = fVar67 * fVar48 * fVar64 * fVar44;
                fVar58 = (fVar58 / (float)iVar11) * fVar45 * fVar49 * fVar63 * fVar46;
                fVar45 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
              }
              *in_stack_000000e0 = lVar41;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        (in_stack_000000e0,lVar41);
              if ((*unaff_x28 != 0) && (lVar41 = *(long *)(*unaff_x28 + 0x38), lVar41 != 0)) {
                if (*(uint *)(lVar41 + 0x18) <= *unaff_x20) goto LAB_035575f4;
                lVar41 = lVar41 + (long)(int)*unaff_x20 * unaff_x24;
                *(undefined4 *)(lVar41 + 0x2c) = 1;
                *(float *)(lVar41 + 0x160) = fVar58;
                *(long *)(lVar41 + 0x40) = *in_stack_000000b8;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                if ((*unaff_x28 != 0) && (lVar41 = *(long *)(*unaff_x28 + 0x38), lVar41 != 0)) {
                  if (*(uint *)(lVar41 + 0x18) <= *unaff_x20) goto LAB_035575f4;
                  *(long *)(lVar41 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *unaff_x21;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                  lVar41 = *unaff_x28;
                  if ((lVar41 != 0) && (lVar43 = *(long *)(lVar41 + 0x38), lVar43 != 0)) {
                    if (*unaff_x20 < *(uint *)(lVar43 + 0x18)) {
                      fStack000000000000015c = 0.0;
                      *(int *)(lVar43 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) =
                           (int)unaff_x19[0x24];
                      *(int *)(unaff_x19 + 0x24) = (int)lVar28;
                      goto LAB_035514b0;
                    }
                    goto LAB_035575f4;
                  }
                }
              }
            }
          }
          goto LAB_035574b8;
        }
UnityEngine_AnimatorStateInfo__get_fullPathHash:
        unaff_x29 = (undefined8 *)&stack0x000008a0;
      }
    }
  }
  else {
    *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
    *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
    uVar19 = FUN_03586568();
    if (((uVar19 & 1) == 0) ||
       (in_stack_000017a8 = in_stack_0000178c, *(int *)((long)unaff_x19 + 0x644) != 0))
    goto LAB_035509d4;
  }
LAB_03550bd0:
  in_w9 = in_stack_000017a8 + 1;
  param_1 = unaff_x19[0x8f];
  in_stack_000017a8 = in_w9;
  in_stack_000017dc = uVar10;
  if (param_1 == 0) goto LAB_035574b8;
  goto LAB_0355087c;
LAB_03554e78:
  uVar10 = uVar12 - 1;
  if (*(uint *)(lVar41 + 0x18) <= uVar10) goto LAB_035575f4;
  if ((*unaff_x28 == 0) || (lVar43 = *(long *)(*unaff_x28 + 0x50), lVar43 == 0)) goto LAB_035574b8;
  lVar36 = (long)(int)uVar10;
  lVar20 = lVar41 + lVar36 * 0x178;
  uVar25 = *(uint *)(lVar20 + 100);
  if (*(uint *)(lVar43 + 0x18) <= uVar25) goto LAB_035575f4;
  lVar39 = (long)(int)uVar25;
  lVar43 = lVar43 + lVar39 * 0x5c;
  lVar34 = *(long *)(lVar20 + 0x38);
  uVar3 = *(ushort *)(lVar20 + 0x20);
  uVar31 = *(uint *)(lVar43 + 0x3c);
  uVar14 = *(uint *)(lVar43 + 0x68);
  iVar2 = *(int *)(lVar43 + 0x20);
  iVar15 = *(int *)(lVar43 + 0x28);
  iVar16 = *(int *)(lVar43 + 0x2c);
  uVar33 = *(uint *)(lVar43 + 0x40);
  lVar20 = (long)(int)uVar33;
  fVar46 = *(float *)(lVar43 + 0x4c);
  fVar64 = *(float *)(lVar43 + 0x54);
  fVar49 = *(float *)(lVar43 + 0x58);
  fVar68 = *(float *)(lVar43 + 0x5c);
  fVar50 = *(float *)(lVar43 + 0x60);
  fVar61 = *(float *)(lVar43 + 0x6c);
  fVar57 = *(float *)(lVar43 + 0x70);
  fVar63 = *(float *)(lVar43 + 0x74);
  fVar48 = *(float *)(lVar43 + 0x78);
  uVar38 = (uint)uVar3;
  if ((int)uVar14 < 9) {
    switch(uVar14) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        fStack00000000000000fc = fVar50 + 0.0;
      }
      else {
        fStack00000000000000fc = 0.0 - fVar49;
      }
      break;
    case 2:
LAB_03555018:
      fStack00000000000000fc = (fVar50 + fVar68 * 0.5) - fVar49 * 0.5;
      break;
    default:
      goto switchD_03554f58_caseD_3;
    case 4:
      fStack00000000000000fc = (fVar68 + fVar50) - fVar49;
      if ((char)unaff_x19[0x1e] != '\0') {
        fStack00000000000000fc = fVar68 + fVar50;
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
      if (*(uint *)(lVar41 + 0x18) <= uVar31) goto LAB_035575f4;
      uVar4 = *(undefined2 *)(lVar41 + (long)(int)uVar31 * 0x178 + 0x20);
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
      if ((fVar49 <= fVar68) && (!bVar1 && uVar14 >> 4 == 0)) {
        fStack00000000000000fc = fVar50;
        if ((char)unaff_x19[0x1e] != '\0') {
          fStack00000000000000fc = fVar68 + fVar50;
        }
        goto LAB_03555088;
      }
      if (((uVar12 == 1) || (uVar25 != uVar55)) || (uVar10 == *(uint *)((long)unaff_x19 + 0x324))) {
        fStack00000000000000fc = fVar50;
        if ((char)unaff_x19[0x1e] != '\0') {
          fStack00000000000000fc = fVar68 + fVar50;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fStack0000000000000028 = (float)FUN_026b97f8(uVar38,0);
        uStack00000000000000e8 = 0;
      }
      else {
        cVar24 = (char)unaff_x19[0x1e];
        fVar50 = -fVar49;
        if (cVar24 != '\0') {
          fVar50 = fVar49;
        }
        if (*(uint *)(lVar41 + 0x18) <= uVar31) goto LAB_035575f4;
        iVar16 = (int)*(char *)(lVar41 + (long)(int)uVar31 * 0x178 + 0x194) +
                 (-iVar2 - ((uint)fStack0000000000000028 & 1)) + iVar16 + -1;
        if (iVar16 < 1) {
          fVar49 = 1.0;
          iVar16 = 1;
        }
        else {
          fVar49 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar38 == 9) {
LAB_03556e74:
          fVar49 = 1.0 - fVar49;
        }
        else {
          if (uVar38 != 0xa0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar19 = FUN_026b97f8(uVar38,0);
            cVar24 = (char)unaff_x19[0x1e];
            if ((uVar19 & 1) != 0) goto LAB_03556e74;
          }
          iVar16 = (iVar2 - (~(uint)fStack0000000000000028 & 1)) + iVar15;
        }
        fVar49 = ((fVar68 + fVar50) * fVar49) / (float)iVar16;
        if (cVar24 == '\0') {
          fStack00000000000000fc = fStack00000000000000fc + fVar49;
          uStack00000000000000e8 =
               CONCAT44((float)((ulong)uStack00000000000000e8 >> 0x20) + 0.0,
                        (float)uStack00000000000000e8 + 0.0);
        }
        else {
          fStack00000000000000fc = fStack00000000000000fc - fVar49;
        }
      }
    }
  }
  else if (uVar14 == 0x20) {
    fVar49 = fVar61 + fVar63;
    goto LAB_03555018;
  }
switchD_03554f58_caseD_3:
  uVar14 = (uint)*(undefined8 *)(lVar41 + 0x18);
  if (uVar14 <= uVar10) goto LAB_035575f4;
  lVar43 = lVar41 + lVar36 * 0x178;
  fVar68 = fStack00000000000000c4 + fStack00000000000000fc;
  fVar49 = SUB84(in_stack_000000b8,0) + (float)uStack00000000000000e8;
  fVar50 = (float)((ulong)in_stack_000000b8 >> 0x20) +
           (float)((ulong)uStack00000000000000e8 >> 0x20);
  if (*(char *)(lVar43 + 0x194) == '\0') goto LAB_03555938;
  iVar15 = *(int *)(lVar41 + lVar36 * 0x178 + 0x2c);
  if (iVar15 != 0) goto LAB_0355574c;
  fVar45 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar25,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar27 = lVar41 + lVar36 * 0x178;
    *(undefined4 *)(lVar27 + 0x84) = 0;
    *(undefined4 *)(lVar27 + 0xac) = 0;
    *(undefined4 *)(lVar27 + 0xd4) = 0x3f800000;
    fVar45 = 1.0;
    break;
  case 1:
    fVar48 = *(float *)(lVar41 + lVar36 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar27 = lVar41 + lVar36 * 0x178;
      fVar63 = (fStack00000000000000fc + fVar48) - *(float *)(in_stack_00000080 + 0x230);
      fVar48 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      goto LAB_035551cc;
    }
    lVar27 = lVar41 + lVar36 * 0x178;
    fVar63 = fVar63 - fVar61;
    *(float *)(lVar27 + 0x84) = fVar45 + (fVar48 - fVar61) / fVar63;
    *(float *)(lVar27 + 0xac) = fVar45 + (*(float *)(lVar27 + 0x98) - fVar61) / fVar63;
    *(float *)(lVar27 + 0xd4) = fVar45 + (*(float *)(lVar27 + 0xc0) - fVar61) / fVar63;
    fVar45 = fVar45 + (*(float *)(lVar27 + 0xe8) - fVar61) / fVar63;
    break;
  case 2:
    lVar27 = lVar41 + lVar36 * 0x178;
    fVar48 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
    fVar63 = (fStack00000000000000fc + *(float *)(lVar27 + 0x70)) -
             *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
    *(float *)(lVar27 + 0x84) = fVar45 + fVar63 / fVar48;
    *(float *)(lVar27 + 0xac) =
         fVar45 + ((fStack00000000000000fc + *(float *)(lVar27 + 0x98)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    *(float *)(lVar27 + 0xd4) =
         fVar45 + ((fStack00000000000000fc + *(float *)(lVar27 + 0xc0)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    fVar45 = fVar45 + ((fStack00000000000000fc + *(float *)(lVar27 + 0xe8)) -
                      *(float *)(in_stack_00000080 + 0x230)) /
                      (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar27 = lVar41 + lVar36 * 0x178;
      *(undefined4 *)(lVar27 + 0x88) = 0;
      *(undefined4 *)(lVar27 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar27 + 0xd8) = 0;
      *(undefined4 *)(lVar27 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar27 = lVar41 + lVar36 * 0x178;
      fVar48 = fVar48 - fVar57;
      fVar63 = fVar45 + (*(float *)(lVar27 + 0x74) - fVar57) / fVar48;
      fVar48 = fVar45 + (*(float *)(lVar27 + 0x9c) - fVar57) / fVar48;
      *(float *)(lVar27 + 0x88) = fVar63;
      *(float *)(lVar27 + 0xb0) = fVar48;
      *(float *)(lVar27 + 0xd8) = fVar63;
      *(float *)(lVar27 + 0x100) = fVar48;
      break;
    case 2:
      lVar27 = lVar41 + lVar36 * 0x178;
      fVar63 = fVar45 + (*(float *)(lVar27 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar27 + 0x88) = fVar63;
      fVar48 = *(float *)(unaff_x19 + 0x9c);
      fVar61 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar27 + 0xd8) = fVar63;
      fVar63 = fVar45 + (*(float *)(lVar27 + 0x9c) - fVar48) / (fVar61 - fVar48);
      *(float *)(lVar27 + 0xb0) = fVar63;
      *(float *)(lVar27 + 0x100) = fVar63;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar14 = (uint)*(undefined8 *)(lVar41 + 0x18);
    }
    if (uVar14 <= uVar10) goto LAB_035575f4;
    lVar27 = lVar41 + lVar36 * 0x178;
    fVar63 = *(float *)(lVar27 + 0x15c);
    fVar48 = (1.0 - (*(float *)(lVar27 + 0x88) + *(float *)(lVar27 + 0xb0)) * fVar63) * 0.5;
    fVar61 = fVar45 + *(float *)(lVar27 + 0x88) * fVar63 + fVar48;
    fVar45 = fVar45 + fVar48 + *(float *)(lVar27 + 0xb0) * fVar63;
    *(float *)(lVar27 + 0x84) = fVar61;
    *(float *)(lVar27 + 0xac) = fVar61;
    *(float *)(lVar27 + 0xd4) = fVar45;
    break;
  default:
    goto switchD_0355512c_default;
  }
  *(float *)(lVar41 + lVar36 * 0x178 + 0xfc) = fVar45;
switchD_0355512c_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar14 <= uVar10) goto LAB_035575f4;
    lVar27 = lVar41 + lVar36 * 0x178;
    *(undefined4 *)(lVar27 + 0x88) = 0;
    *(undefined4 *)(lVar27 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar27 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar27 + 0x100) = 0;
    break;
  case 1:
    if (uVar10 < uVar14) {
      lVar27 = lVar41 + lVar36 * 0x178;
      fVar46 = fVar46 - fVar64;
      fVar45 = (*(float *)(lVar27 + 0x74) - fVar64) / fVar46;
      fVar46 = (*(float *)(lVar27 + 0x9c) - fVar64) / fVar46;
      *(float *)(lVar27 + 0x88) = fVar45;
      goto UnityEngine_Animator__set_stabilizeFeet;
    }
    goto LAB_035575f4;
  case 2:
    if (uVar14 <= uVar10) goto LAB_035575f4;
    lVar27 = lVar41 + lVar36 * 0x178;
    fVar45 = (*(float *)(lVar27 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar27 + 0x88) = fVar45;
    fVar46 = (*(float *)(lVar27 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
    *(float *)(lVar27 + 0xb0) = fVar46;
    *(float *)(lVar27 + 0xd8) = fVar46;
    *(float *)(lVar27 + 0x100) = fVar45;
    break;
  case 3:
    if (uVar14 <= uVar10) goto LAB_035575f4;
    lVar27 = lVar41 + lVar36 * 0x178;
    fVar46 = *(float *)(lVar27 + 0x15c);
    fVar63 = (1.0 - (*(float *)(lVar27 + 0x84) + *(float *)(lVar27 + 0xd4)) / fVar46) * 0.5;
    fVar45 = *(float *)(lVar27 + 0x84) / fVar46 + fVar63;
    fVar63 = fVar63 + *(float *)(lVar27 + 0xd4) / fVar46;
    *(float *)(lVar27 + 0x88) = fVar45;
    *(float *)(lVar27 + 0xb0) = fVar63;
    *(float *)(lVar27 + 0x100) = fVar45;
    *(float *)(lVar27 + 0xd8) = fVar63;
  }
  if (uVar14 <= uVar10) goto LAB_035575f4;
  lVar27 = lVar41 + lVar36 * 0x178;
  fVar45 = *(float *)(lVar27 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar27 + 0x5c) == '\0') && ((*(byte *)(lVar41 + lVar36 * 0x178 + 400) & 1) != 0)) {
    fVar45 = -fVar45;
  }
  fVar63 = fVar58;
  if (((iVar11 == 2) || (fVar63 = fVar44, iVar11 == 1)) || (fVar63 = fVar58 / fVar67, iVar11 == 0))
  {
    fVar45 = fVar63 * fVar45;
  }
  lVar27 = lVar41 + lVar36 * 0x178;
  fVar46 = *(float *)(lVar27 + 0x88);
  fVar48 = *(float *)(lVar27 + 0x84);
  fVar63 = -2.1474836e+09;
  if (fVar48 != INFINITY) {
    fVar63 = (float)(int)fVar48;
  }
  fVar61 = *(float *)(lVar27 + 0xd4);
  fVar57 = *(float *)(lVar27 + 0xd8);
  fVar64 = -2.1474836e+09;
  if (fVar46 != INFINITY) {
    fVar64 = (float)(int)fVar46;
  }
  uVar52 = FUN_03591d3c(fVar48 - fVar63,fVar46 - fVar64);
  *(undefined4 *)(lVar27 + 0x84) = uVar52;
  if (*(uint *)(lVar41 + 0x18) <= uVar10) goto LAB_035575f4;
  fVar57 = fVar57 - fVar64;
  *(float *)(lVar27 + 0x88) = fVar45;
  uVar52 = FUN_03591d3c(fVar48 - fVar63,fVar57);
  *(undefined4 *)(lVar41 + lVar36 * 0x178 + 0xac) = uVar52;
  if (*(uint *)(lVar41 + 0x18) <= uVar10) goto LAB_035575f4;
  fVar61 = fVar61 - fVar63;
  *(float *)(lVar41 + lVar36 * 0x178 + 0xb0) = fVar45;
  fVar63 = (float)FUN_03591d3c(fVar61,fVar57);
  *(float *)(lVar27 + 0xd4) = fVar63;
  if (*(uint *)(lVar41 + 0x18) <= uVar10) goto LAB_035575f4;
  *(float *)(lVar27 + 0xd8) = fVar45;
  uVar52 = FUN_03591d3c(fVar61,fVar46 - fVar64);
  *(undefined4 *)(lVar41 + lVar36 * 0x178 + 0xfc) = uVar52;
  uVar14 = (uint)*(undefined8 *)(lVar41 + 0x18);
  if (uVar14 <= uVar10) goto LAB_035575f4;
  *(float *)(lVar41 + lVar36 * 0x178 + 0x100) = fVar45;
LAB_0355574c:
  if (((int)uVar10 < (int)unaff_x19[0x65]) &&
     ((int)fStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar25 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar14 <= uVar10) goto LAB_035575f4;
      lVar43 = lVar41 + lVar36 * 0x178;
      *(ulong *)(lVar43 + 0x70) =
           CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar43 + 0x70) >> 0x20),
                    fVar68 + (float)*(undefined8 *)(lVar43 + 0x70));
      *(float *)(lVar43 + 0x78) = fVar50 + *(float *)(lVar43 + 0x78);
      *(ulong *)(lVar43 + 0x98) =
           CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar43 + 0x98) >> 0x20),
                    fVar68 + (float)*(undefined8 *)(lVar43 + 0x98));
      *(float *)(lVar43 + 0xa0) = fVar50 + *(float *)(lVar43 + 0xa0);
      *(ulong *)(lVar43 + 0xc0) =
           CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar43 + 0xc0) >> 0x20),
                    fVar68 + (float)*(undefined8 *)(lVar43 + 0xc0));
      *(float *)(lVar43 + 200) = fVar50 + *(float *)(lVar43 + 200);
      *(ulong *)(lVar43 + 0xe8) =
           CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar43 + 0xe8) >> 0x20),
                    fVar68 + (float)*(undefined8 *)(lVar43 + 0xe8));
      *(float *)(lVar43 + 0xf0) = fVar50 + *(float *)(lVar43 + 0xf0);
      goto UnityEngine_Animator__GetAnimatorClipInfoCount;
    }
    if (((int)uVar25 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar10 < uVar14) {
        if (*(uint *)(lVar41 + lVar36 * 0x178 + 0x68) == uStack0000000000000030) {
          lVar43 = lVar41 + lVar36 * 0x178;
          *(ulong *)(lVar43 + 0x70) =
               CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar43 + 0x70) >> 0x20),
                        fVar68 + (float)*(undefined8 *)(lVar43 + 0x70));
          *(float *)(lVar43 + 0x78) = fVar50 + *(float *)(lVar43 + 0x78);
          *(ulong *)(lVar43 + 0x98) =
               CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar43 + 0x98) >> 0x20),
                        fVar68 + (float)*(undefined8 *)(lVar43 + 0x98));
          *(float *)(lVar43 + 0xa0) = fVar50 + *(float *)(lVar43 + 0xa0);
          *(ulong *)(lVar43 + 0xc0) =
               CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar43 + 0xc0) >> 0x20),
                        fVar68 + (float)*(undefined8 *)(lVar43 + 0xc0));
          *(float *)(lVar43 + 200) = fVar50 + *(float *)(lVar43 + 200);
          *(ulong *)(lVar43 + 0xe8) =
               CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar43 + 0xe8) >> 0x20),
                        fVar68 + (float)*(undefined8 *)(lVar43 + 0xe8));
          *(float *)(lVar43 + 0xf0) = fVar50 + *(float *)(lVar43 + 0xf0);
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
    uVar14 = *(uint *)(lVar41 + 0x18);
  }
  puVar6 = PTR_DAT_03cbded8;
  uVar52 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar27 = lVar41 + lVar36 * 0x178;
  *(undefined8 *)(lVar27 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar27 + 0x78) = uVar52;
  if (uVar14 <= uVar10) goto LAB_035575f4;
  uVar52 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
  lVar27 = lVar41 + lVar36 * 0x178;
  *(undefined8 *)(lVar27 + 0x98) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
  *(undefined4 *)(lVar27 + 0xa0) = uVar52;
  uVar52 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
  *(undefined8 *)(lVar27 + 0xc0) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
  *(undefined4 *)(lVar27 + 200) = uVar52;
  uVar52 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
  *(undefined8 *)(lVar27 + 0xe8) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
  *(undefined4 *)(lVar27 + 0xf0) = uVar52;
  *(undefined1 *)(lVar43 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
  if (iVar15 == 0) {
    pcVar30 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
    (*pcVar30)();
  }
  else if (iVar15 == 1) {
    pcVar30 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0355591c;
  }
LAB_03555938:
  if ((*unaff_x28 == 0) || (lVar43 = *(long *)(*unaff_x28 + 0x38), lVar43 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar43 + 0x18) <= uVar10) goto LAB_035575f4;
  lVar43 = lVar43 + lVar36 * 0x178;
  uVar17 = *(undefined8 *)(lVar43 + 0x11c);
  *(undefined8 *)(lVar43 + 0x11c) =
       CONCAT44(fVar49 + (float)((ulong)uVar17 >> 0x20),fVar68 + (float)uVar17);
  *(float *)(lVar43 + 0x124) = fVar50 + *(float *)(lVar43 + 0x124);
  if ((*unaff_x28 == 0) || (lVar43 = *(long *)(*unaff_x28 + 0x38), lVar43 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar43 + 0x18) <= uVar10) goto LAB_035575f4;
  lVar43 = lVar43 + lVar36 * 0x178;
  *(ulong *)(lVar43 + 0x110) =
       CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar43 + 0x110) >> 0x20),
                fVar68 + (float)*(undefined8 *)(lVar43 + 0x110));
  *(float *)(lVar43 + 0x118) = fVar50 + *(float *)(lVar43 + 0x118);
  if ((*unaff_x28 == 0) || (lVar43 = *(long *)(*unaff_x28 + 0x38), lVar43 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar43 + 0x18) <= uVar10) goto LAB_035575f4;
  lVar43 = lVar43 + lVar36 * 0x178;
  *(ulong *)(lVar43 + 0x128) =
       CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar43 + 0x128) >> 0x20),
                fVar68 + (float)*(undefined8 *)(lVar43 + 0x128));
  *(float *)(lVar43 + 0x130) = fVar50 + *(float *)(lVar43 + 0x130);
  if ((*unaff_x28 == 0) || (lVar43 = *(long *)(*unaff_x28 + 0x38), lVar43 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar43 + 0x18) <= uVar10) goto LAB_035575f4;
  lVar43 = lVar43 + lVar36 * 0x178;
  *(float *)(lVar43 + 0x134) = fVar68 + *(float *)(lVar43 + 0x134);
  *(ulong *)(lVar43 + 0x138) =
       CONCAT44(fVar50 + (float)((ulong)*(undefined8 *)(lVar43 + 0x138) >> 0x20),
                fVar49 + (float)*(undefined8 *)(lVar43 + 0x138));
  lVar43 = *unaff_x28;
  if ((lVar43 == 0) || (lVar27 = *(long *)(lVar43 + 0x38), lVar27 == 0)) goto LAB_035574b8;
  uVar14 = *(uint *)(lVar27 + 0x18);
  if (uVar14 <= uVar10) goto LAB_035575f4;
  lVar35 = lVar27 + lVar36 * 0x178;
  uVar53 = CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar35 + 0x140) >> 0x20),
                    fVar68 + (float)*(undefined8 *)(lVar35 + 0x140));
  fVar63 = fVar49 + *(float *)(lVar35 + 0x150);
  uVar54 = (ulong)(uint)fVar63;
  uVar56 = CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar35 + 0x148) >> 0x20),
                    fVar49 + (float)*(undefined8 *)(lVar35 + 0x148));
  *(float *)(lVar35 + 0x150) = fVar63;
  *(ulong *)(lVar35 + 0x140) = uVar53;
  *(ulong *)(lVar35 + 0x148) = uVar56;
  if (uVar25 == uVar55) {
    uVar55 = *unaff_x20 - 1;
    if (uVar10 == uVar55) goto LAB_03555b44;
  }
  else {
    lVar43 = *(long *)(lVar43 + 0x50);
    if (lVar43 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar43 + 0x18) <= uVar55) goto LAB_035575f4;
    lVar35 = (long)(int)uVar55;
    lVar37 = lVar43 + lVar35 * 0x5c;
    uVar56 = (ulong)(uint)*(float *)(lVar37 + 0x58);
    fVar63 = fVar49 + *(float *)(lVar37 + 0x54);
    uVar53 = (ulong)(uint)fVar63;
    fVar46 = fVar68 + *(float *)(lVar37 + 0x58);
    uVar54 = (ulong)(uint)fVar46;
    *(ulong *)(lVar37 + 0x4c) =
         CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar37 + 0x4c) >> 0x20),
                  fVar49 + (float)*(undefined8 *)(lVar37 + 0x4c));
    *(float *)(lVar37 + 0x54) = fVar63;
    *(float *)(lVar37 + 0x58) = fVar46;
    if (uVar14 <= *(uint *)(lVar37 + 0x34)) goto LAB_035575f4;
    uVar52 = *(undefined4 *)(lVar27 + (long)(int)*(uint *)(lVar37 + 0x34) * 0x178 + 0x11c);
    lVar43 = lVar43 + lVar35 * 0x5c;
    *(float *)(lVar43 + 0x70) = fVar63;
    *(undefined4 *)(lVar43 + 0x6c) = uVar52;
    lVar43 = *unaff_x28;
    if ((lVar43 == 0) || (lVar27 = *(long *)(lVar43 + 0x50), lVar27 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= uVar55) goto LAB_035575f4;
    lVar43 = *(long *)(lVar43 + 0x38);
    if (lVar43 == 0) goto LAB_035574b8;
    uVar55 = *(uint *)(lVar27 + lVar35 * 0x5c + 0x40);
    if (*(uint *)(lVar43 + 0x18) <= uVar55) goto LAB_035575f4;
    lVar27 = lVar27 + lVar35 * 0x5c;
    *(undefined4 *)(lVar27 + 0x74) = *(undefined4 *)(lVar43 + (long)(int)uVar55 * 0x178 + 0x128);
    *(undefined4 *)(lVar27 + 0x78) = *(undefined4 *)(lVar27 + 0x4c);
    uVar55 = *unaff_x20 - 1;
LAB_03555b44:
    if (uVar10 == uVar55) {
      lVar43 = *unaff_x28;
      if ((lVar43 == 0) || (lVar27 = *(long *)(lVar43 + 0x50), lVar27 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar25) goto LAB_035575f4;
      lVar35 = lVar27 + lVar39 * 0x5c;
      uVar56 = (ulong)(uint)*(float *)(lVar35 + 0x58);
      uVar53 = CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar35 + 0x4c) >> 0x20),
                        fVar49 + (float)*(undefined8 *)(lVar35 + 0x4c));
      fVar63 = fVar49 + *(float *)(lVar35 + 0x54);
      fVar68 = fVar68 + *(float *)(lVar35 + 0x58);
      uVar54 = (ulong)(uint)fVar68;
      *(ulong *)(lVar35 + 0x4c) = uVar53;
      *(float *)(lVar35 + 0x54) = fVar63;
      *(float *)(lVar35 + 0x58) = fVar68;
      lVar43 = *(long *)(lVar43 + 0x38);
      if (lVar43 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar43 + 0x18) <= *(uint *)(lVar35 + 0x34)) goto LAB_035575f4;
      uVar52 = *(undefined4 *)(lVar43 + (long)(int)*(uint *)(lVar35 + 0x34) * 0x178 + 0x11c);
      lVar27 = lVar27 + lVar39 * 0x5c;
      *(float *)(lVar27 + 0x70) = fVar63;
      *(undefined4 *)(lVar27 + 0x6c) = uVar52;
      lVar43 = *unaff_x28;
      if ((lVar43 == 0) || (lVar27 = *(long *)(lVar43 + 0x50), lVar27 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar25) goto LAB_035575f4;
      lVar43 = *(long *)(lVar43 + 0x38);
      if (lVar43 == 0) goto LAB_035574b8;
      uVar55 = *(uint *)(lVar27 + lVar39 * 0x5c + 0x40);
      if (*(uint *)(lVar43 + 0x18) <= uVar55) goto LAB_035575f4;
      lVar27 = lVar27 + lVar39 * 0x5c;
      *(undefined4 *)(lVar27 + 0x74) = *(undefined4 *)(lVar43 + (long)(int)uVar55 * 0x178 + 0x128);
      *(undefined4 *)(lVar27 + 0x78) = *(undefined4 *)(lVar27 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar19 = FUN_026b82c4(uVar38,0);
  if (((((uVar19 & 1) == 0) && (1 < uVar38 - 0x2010)) && (uVar38 != 0xad)) && (uVar38 != 0x2d)) {
    if (bVar8) {
      if (((uVar12 != 1) && ((int)uVar10 < (int)(*(uint *)(lVar41 + 0x18) - 1))) &&
         (((int)uVar10 < (int)*unaff_x20 && ((uVar38 == 0x2019 || (uVar38 == 0x27)))))) {
        if (*(uint *)(lVar41 + 0x18) <= uVar12 - 2) goto LAB_035575f4;
        uVar4 = *(undefined2 *)(lVar41 + lVar28 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar19 = FUN_026b82c4(uVar4,0);
        if ((uVar19 & 1) != 0) {
          if (*(uint *)(lVar41 + 0x18) <= uVar12) goto LAB_035575f4;
          uVar4 = *(undefined2 *)(lVar41 + lVar28 + -0x148);
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
      uVar19 = FUN_026b81f8(uVar38,0);
      if ((uVar19 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar19 = FUN_026b63d8(uVar38,0);
        if (((uVar38 != 0x200b) && ((uVar19 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0355686c;
      }
    }
    if (uVar10 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar19 = FUN_026b82c4(uVar38,0);
      iVar15 = iStack0000000000000128;
      if ((uVar19 & 1) == 0) goto LAB_03556070;
    }
    else {
LAB_03556070:
      iVar15 = uVar12 - 2;
    }
    lVar43 = *unaff_x28;
    if (lVar43 == 0) goto LAB_035574b8;
    lVar27 = *(long *)(lVar43 + 0x40);
    if (lVar27 == 0) goto LAB_035574b8;
    uVar55 = *(uint *)(lVar43 + 0x24);
    iVar16 = *(int *)(lVar27 + 0x18);
    if (iVar16 < (int)(uVar55 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar43 + 0x40),iVar16 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar43 = *unaff_x28;
      if (lVar43 == 0) goto LAB_035574b8;
    }
    lVar43 = *(long *)(lVar43 + 0x40);
    if (lVar43 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar43 + 0x18) <= uVar55) goto LAB_035575f4;
    lVar43 = lVar43 + (long)(int)uVar55 * 0x18;
    *(long **)(lVar43 + 0x20) = unaff_x19;
    *(float *)(lVar43 + 0x28) = fStack0000000000000158;
    *(int *)(lVar43 + 0x2c) = iVar15;
    *(int *)(lVar43 + 0x30) = (iVar15 - (int)fStack0000000000000158) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar43 = unaff_x19[0x6d];
    if (lVar43 == 0) goto LAB_035574b8;
    lVar27 = *(long *)(lVar43 + 0x50);
    *(int *)(lVar43 + 0x24) = *(int *)(lVar43 + 0x24) + 1;
    if (lVar27 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= uVar25) goto LAB_035575f4;
    lVar27 = lVar27 + lVar39 * 0x5c;
    bVar8 = false;
    fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
    *(int *)(lVar27 + 0x30) = *(int *)(lVar27 + 0x30) + 1;
  }
  else {
    if (!bVar8) {
      fStack0000000000000158 = (float)uVar10;
    }
    if (uVar10 == *unaff_x20 - 1) {
      lVar43 = *unaff_x28;
      if (lVar43 == 0) goto LAB_035574b8;
      lVar27 = *(long *)(lVar43 + 0x40);
      if (lVar27 == 0) goto LAB_035574b8;
      uVar55 = *(uint *)(lVar43 + 0x24);
      iVar15 = *(int *)(lVar27 + 0x18);
      if (iVar15 < (int)(uVar55 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar43 + 0x40),iVar15 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar43 = *unaff_x28;
        if (lVar43 == 0) goto LAB_035574b8;
      }
      lVar43 = *(long *)(lVar43 + 0x40);
      if (lVar43 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar43 + 0x18) <= uVar55) goto LAB_035575f4;
      lVar43 = lVar43 + (long)(int)uVar55 * 0x18;
      *(long **)(lVar43 + 0x20) = unaff_x19;
      *(float *)(lVar43 + 0x28) = fStack0000000000000158;
      *(uint *)(lVar43 + 0x2c) = uVar10;
      *(uint *)(lVar43 + 0x30) = uVar12 - (int)fStack0000000000000158;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar43 = unaff_x19[0x6d];
      if (lVar43 == 0) goto LAB_035574b8;
      lVar27 = *(long *)(lVar43 + 0x50);
      *(int *)(lVar43 + 0x24) = *(int *)(lVar43 + 0x24) + 1;
      if (lVar27 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar25) goto LAB_035575f4;
      lVar27 = lVar27 + lVar39 * 0x5c;
      fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
      *(int *)(lVar27 + 0x30) = *(int *)(lVar27 + 0x30) + 1;
    }
LAB_03555d68:
    bVar8 = true;
  }
LAB_03555d70:
  if ((*unaff_x28 == 0) || (lVar43 = *(long *)(*unaff_x28 + 0x38), lVar43 == 0)) goto LAB_035574b8;
  uVar55 = *(uint *)(lVar43 + 0x18);
  if (uVar55 <= uVar10) goto LAB_035575f4;
  if ((*(byte *)(lVar43 + lVar36 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar9) {
LAB_03555da0:
      if (uVar55 <= uVar12 - 2) goto LAB_035575f4;
      lVar39 = *unaff_x19;
      uVar55 = *(uint *)(lVar43 + lVar28 + -0x330);
      uVar52 = *(undefined4 *)(lVar43 + lVar28 + -0x2f8);
LAB_035562ec:
      pcVar30 = *(code **)(lVar39 + 0x8d8);
LAB_035562f4:
      uVar56 = (ulong)uVar55;
      uVar53 = (ulong)(uint)fStack0000000000000070;
      uVar54 = (ulong)_bStack0000000000000074;
      (*pcVar30)(fStack0000000000000078,uVar53,uVar54,uVar56,fStack0000000000000104,0,
                 in_stack_00000088._4_4_,uVar52);
      puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar43 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar43 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar43 = *(long *)puVar6;
      }
LAB_03556348:
      bVar9 = false;
      fVar47 = 0.0;
      fStack0000000000000104 = *(float *)(*(long *)(lVar43 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
    else {
LAB_03556254:
      bVar9 = false;
    }
  }
  else {
    lVar43 = lVar43 + lVar36 * 0x178;
    uVar55 = *(uint *)(lVar43 + 0x68);
    *(int *)(lVar43 + 0x16c) = iVar13;
    if ((((int)unaff_x19[0x65] < (int)uVar10) || ((int)unaff_x19[0x66] < (int)uVar25)) ||
       (((int)unaff_x19[0x5c] == 5 && (uVar55 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar19 = FUN_026b63d8(uVar38,0);
    if ((uVar38 != 0x200b) && ((uVar19 & 1) == 0)) {
      lVar43 = *unaff_x28;
      if ((lVar43 == 0) || (lVar39 = *(long *)(lVar43 + 0x38), lVar39 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar39 + 0x18) <= uVar10) goto LAB_035575f4;
      fVar63 = *(float *)(lVar39 + lVar36 * 0x178 + 0x160);
      if (fVar47 <= fVar63) {
        fVar47 = fVar63;
      }
      if (fStack0000000000000100 <= ABS(fVar45)) {
        fStack0000000000000100 = ABS(fVar45);
      }
      if (uVar55 != uStack000000000000006c) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar43 = *unaff_x28;
          if (lVar43 == 0) goto LAB_035574b8;
          lVar39 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar39 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar39 + 0x15a8);
      }
      lVar43 = *(long *)(lVar43 + 0x38);
      if (lVar43 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar43 + 0x18) <= uVar10) goto LAB_035575f4;
      if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
      fVar46 = *(float *)(lVar43 + lVar36 * 0x178 + 0x14c);
      fVar63 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar46 = fVar46 + fVar47 * fVar63;
      if (fVar46 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar46;
      }
      uVar53 = (ulong)(uint)fStack0000000000000104;
      uStack000000000000006c = uVar55;
    }
    if (!bVar9) {
      bVar9 = false;
      if ((((uVar38 == 0xd) || ((uVar38 & 0xfffe) == 10)) || ((int)uVar33 < (int)uVar10)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_03556364;
      if (uVar10 == uVar33) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar19 = FUN_026b97f8(uVar38,0);
        if ((uVar19 & 1) != 0) goto LAB_03556254;
      }
      if ((*unaff_x28 == 0) || (lVar43 = *(long *)(*unaff_x28 + 0x38), lVar43 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar43 + 0x18) <= uVar10) goto LAB_035575f4;
      lVar43 = lVar43 + lVar36 * 0x178;
      in_stack_00000088._4_4_ = *(float *)(lVar43 + 0x160);
      fStack0000000000000078 = *(float *)(lVar43 + 0x11c);
      uVar54 = (ulong)(uint)fStack0000000000000078;
      bVar9 = fVar47 != 0.0;
      fVar63 = in_stack_00000088._4_4_;
      if (bVar9) {
        fVar63 = fVar47;
      }
      fVar47 = fVar63;
      uVar66 = *(undefined4 *)(lVar43 + 0x168);
      _bStack0000000000000074 = 0;
      fVar63 = fVar45;
      if (bVar9) {
        fVar63 = fStack0000000000000100;
      }
      uVar53 = (ulong)(uint)fVar63;
      fStack0000000000000070 = fStack0000000000000104;
      fStack0000000000000100 = fVar63;
    }
    if (*unaff_x20 == 1) {
      if ((*unaff_x28 != 0) && (lVar43 = *(long *)(*unaff_x28 + 0x38), lVar43 != 0)) {
        if (uVar10 < *(uint *)(lVar43 + 0x18)) {
          lVar43 = lVar43 + lVar36 * 0x178;
          lVar39 = *unaff_x19;
          uVar55 = *(uint *)(lVar43 + 0x128);
          uVar52 = *(undefined4 *)(lVar43 + 0x160);
          goto LAB_035562ec;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if ((uVar10 == uVar31) || ((int)uVar33 <= (int)uVar10)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar19 = FUN_026b63d8(uVar38,0);
      if ((*unaff_x28 != 0) && (lVar43 = *(long *)(*unaff_x28 + 0x38), lVar43 != 0)) {
        lVar39 = lVar36;
        uVar55 = uVar10;
        if (uVar38 == 0x200b || (uVar19 & 1) != 0) {
          lVar39 = lVar20;
          uVar55 = uVar33;
        }
        if (uVar55 < *(uint *)(lVar43 + 0x18)) {
          lVar43 = lVar43 + lVar39 * 0x178;
          uVar55 = *(uint *)(lVar43 + 0x128);
          uVar52 = *(undefined4 *)(lVar43 + 0x160);
          pcVar30 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_035562f4;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (!bVar1) {
      if ((*unaff_x28 != 0) && (lVar43 = *(long *)(*unaff_x28 + 0x38), lVar43 != 0)) {
        uVar55 = *(uint *)(lVar43 + 0x18);
        goto LAB_03555da0;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar10 < (int)(*unaff_x20 - 1)) {
      if ((*unaff_x28 == 0) || (lVar43 = *(long *)(*unaff_x28 + 0x38), lVar43 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar43 + 0x18) <= uVar12) goto LAB_035575f4;
      uVar19 = FUN_03567ad8(uVar66,*(undefined4 *)(lVar43 + lVar28),0);
      if ((uVar19 & 1) == 0) {
        if ((*unaff_x28 != 0) && (lVar43 = *(long *)(*unaff_x28 + 0x38), lVar43 != 0)) {
          if (uVar10 < *(uint *)(lVar43 + 0x18)) {
            lVar43 = lVar43 + lVar36 * 0x178;
            uVar56 = (ulong)*(uint *)(lVar43 + 0x128);
            uVar54 = (ulong)_bStack0000000000000074;
            uVar53 = (ulong)(uint)fStack0000000000000070;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fStack0000000000000078,uVar53,uVar54,uVar56,fStack0000000000000104,0,
                       in_stack_00000088._4_4_,*(undefined4 *)(lVar43 + 0x160));
            puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar43 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar43 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar43 = *(long *)puVar6;
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
  if ((*unaff_x28 == 0) || (lVar43 = *(long *)(*unaff_x28 + 0x38), lVar43 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar43 + 0x18) <= uVar10) goto LAB_035575f4;
  if (lVar34 == 0) goto LAB_035574b8;
  uVar55 = *(uint *)(lVar43 + lVar36 * 0x178 + 400);
  fVar63 = (float)FUN_03776a30(lVar34 + 0x50,0);
  if ((uVar55 >> 6 & 1) == 0) {
    if ((_iStack0000000000000128 & 0x100000000) != 0) {
      if ((*unaff_x28 == 0) || (lVar43 = *(long *)(*unaff_x28 + 0x38), lVar43 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar43 + 0x18) <= uVar12 - 2) goto LAB_035575f4;
      uVar55 = *(uint *)(lVar43 + lVar28 + -0x330);
      fVar49 = *(float *)(lVar43 + lVar28 + -0x30c);
      pcVar30 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
      uVar56 = (ulong)uVar55;
      uVar53 = (ulong)(uint)fStack000000000000009c;
      uVar54 = (ulong)(uint)in_stack_00000098;
      (*pcVar30)(fStack00000000000000a0,uVar53,uVar54,uVar56,
                 fStack00000000000000a8 * fVar63 + fVar49,0,fStack00000000000000a8,
                 fStack00000000000000a8);
    }
LAB_03556948:
    _iStack0000000000000128 = _iStack0000000000000128 & 0xffffffff;
  }
  else {
    lVar43 = *unaff_x28;
    if ((lVar43 == 0) || (lVar39 = *(long *)(lVar43 + 0x38), lVar39 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar39 + 0x18) <= uVar10) goto LAB_035575f4;
    *(int *)(lVar39 + lVar36 * 0x178 + 0x174) = iVar13;
    if ((((int)unaff_x19[0x65] < (int)uVar10) || ((int)unaff_x19[0x66] < (int)uVar25)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar39 + lVar36 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar38 == 0xd) || ((uVar38 & 0xfffe) == 10)) || ((int)uVar33 < (int)uVar10)) ||
       ((_iStack0000000000000128 & 0x100000000) != 0 || !bVar1)) {
LAB_035564e8:
      if ((_iStack0000000000000128 & 0x100000000) == 0) goto LAB_03556948;
    }
    else {
      if (uVar10 == uVar33) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar19 = FUN_026b97f8(uVar38,0);
        if ((uVar19 & 1) != 0) goto LAB_035564e8;
        lVar43 = *unaff_x28;
        if (lVar43 == 0) goto LAB_035574b8;
      }
      lVar43 = *(long *)(lVar43 + 0x38);
      if (lVar43 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar43 + 0x18) <= uVar10) goto LAB_035575f4;
      lVar43 = lVar43 + lVar36 * 0x178;
      fStack0000000000000040 = *(float *)(lVar43 + 0x60);
      fStack0000000000000038 = *(float *)(lVar43 + 0x14c);
      uVar53 = (ulong)(uint)fStack0000000000000038;
      fStack00000000000000a0 = *(float *)(lVar43 + 0x11c);
      uVar54 = (ulong)(uint)fStack00000000000000a0;
      fStack00000000000000a8 = *(float *)(lVar43 + 0x160);
      fStack000000000000009c = fVar63 * fStack00000000000000a8 + fStack0000000000000038;
      in_stack_00000098 = 0.0;
    }
    uVar55 = *unaff_x20;
    if (uVar55 == 1) {
LAB_03556628:
      if ((*unaff_x28 != 0) && (lVar43 = *(long *)(*unaff_x28 + 0x38), lVar43 != 0)) {
        if (uVar10 < *(uint *)(lVar43 + 0x18)) {
          lVar43 = lVar43 + lVar36 * 0x178;
          lVar20 = *unaff_x19;
          uVar55 = *(uint *)(lVar43 + 0x128);
          fVar49 = *(float *)(lVar43 + 0x14c);
LAB_03556654:
          pcVar30 = *(code **)(lVar20 + 0x8d8);
          goto LAB_03556914;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (uVar10 == uVar31) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar19 = FUN_026b63d8(uVar38,0);
      if ((*unaff_x28 != 0) && (lVar43 = *(long *)(*unaff_x28 + 0x38), lVar43 != 0)) {
        uVar55 = *(uint *)(lVar43 + 0x18);
        if (uVar38 == 0x200b || (uVar19 & 1) != 0) {
          if (uVar55 <= uVar33) goto LAB_035575f4;
        }
        else {
FUN_035568e8:
          lVar20 = lVar36;
          if (uVar55 <= uVar10) goto LAB_035575f4;
        }
LAB_035568f0:
        lVar43 = lVar43 + lVar20 * 0x178;
        fVar49 = *(float *)(lVar43 + 0x14c);
        uVar55 = *(uint *)(lVar43 + 0x128);
        pcVar30 = *(code **)(*unaff_x19 + 0x8d8);
        goto LAB_03556914;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar10 < (int)uVar55) {
      lVar43 = *unaff_x28;
      if ((lVar43 != 0) && (lVar39 = *(long *)(lVar43 + 0x38), lVar39 != 0)) {
        if (uVar12 < *(uint *)(lVar39 + 0x18)) {
          if (*(float *)(lVar39 + lVar28 + -0x108) == fStack0000000000000040) {
            fVar46 = *(float *)(lVar39 + lVar28 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar53 = (ulong)(uint)fStack0000000000000038;
            uVar19 = FUN_03567bac(fVar49 + fVar46,uVar53,0);
            if ((uVar19 & 1) != 0) {
              uVar55 = *unaff_x20;
              goto LAB_03556744;
            }
            lVar43 = *unaff_x28;
            if (lVar43 == 0) goto LAB_035574b8;
          }
          lVar43 = *(long *)(lVar43 + 0x38);
          if (lVar43 != 0) {
            uVar55 = *(uint *)(lVar43 + 0x18);
            if ((int)uVar10 <= (int)uVar33) goto FUN_035568e8;
            if (uVar33 < uVar55) goto LAB_035568f0;
            goto LAB_035575f4;
          }
          goto LAB_035574b8;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
LAB_03556744:
    if ((int)uVar10 < (int)uVar55) {
      iVar15 = FUN_036d3364(lVar34,0);
      if (*(uint *)(lVar41 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar43 = *(long *)(lVar41 + lVar28 + -0x130);
      if (lVar43 == 0) goto LAB_035574b8;
      iVar16 = FUN_036d3364(lVar43,0);
      if (iVar15 != iVar16) goto LAB_03556628;
    }
    if (!bVar1) {
      if ((*unaff_x28 != 0) && (lVar43 = *(long *)(*unaff_x28 + 0x38), lVar43 != 0)) {
        if (uVar12 - 2 < *(uint *)(lVar43 + 0x18)) {
          lVar20 = *unaff_x19;
          uVar55 = *(uint *)(lVar43 + lVar28 + -0x330);
          fVar49 = *(float *)(lVar43 + lVar28 + -0x30c);
          goto LAB_03556654;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    _iStack0000000000000128 = CONCAT44(1,iStack0000000000000128);
  }
  if ((*unaff_x28 == 0) || (lVar43 = *(long *)(*unaff_x28 + 0x38), lVar43 == 0)) goto LAB_035574b8;
  uVar55 = (uint)*(undefined8 *)(lVar43 + 0x18);
  if (uVar55 <= uVar10) goto LAB_035575f4;
  if ((*(byte *)(lVar43 + lVar36 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar5) {
      uVar54 = (ulong)in_stack_000000c0;
      uVar53 = (ulong)(uint)fStack00000000000000dc;
      uVar56 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar53,uVar54,uVar56,fStack00000000000000d0,uVar54);
    }
LAB_035569b4:
    bVar5 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar10) || ((int)unaff_x19[0x66] < (int)uVar25)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar43 + lVar36 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar5) {
      if ((((uVar38 == 0xd) || ((uVar38 & 0xfffe) == 10)) || ((int)uVar33 < (int)uVar10)) ||
         (!bVar1)) goto LAB_035569b4;
      if (uVar10 == uVar33) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar19 = FUN_026b97f8(uVar38,0);
        if ((uVar19 & 1) != 0) goto LAB_035569b4;
      }
      puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar20 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar20 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar20 = *(long *)puVar6;
      }
      if ((*unaff_x28 == 0) || (lVar43 = *(long *)(*unaff_x28 + 0x38), lVar43 == 0))
      goto LAB_035574b8;
      uVar55 = (uint)*(undefined8 *)(lVar43 + 0x18);
      if (uVar55 <= uVar10) goto LAB_035575f4;
      lVar20 = *(long *)(lVar20 + 0xb8);
      lVar34 = lVar43 + lVar36 * 0x178;
      in_stack_000017b8 = *(undefined8 *)(lVar34 + 0x184);
      in_stack_000017b0 = *(undefined8 *)(lVar34 + 0x17c);
      fStack00000000000000d8 = *(float *)(lVar20 + 0x1598);
      fStack00000000000000dc = *(float *)(lVar20 + 0x159c);
      in_stack_000017c0 = *(float *)(lVar34 + 0x18c);
      fStack00000000000000c8 = *(float *)(lVar20 + 0x15a0);
      fStack00000000000000d0 = *(float *)(lVar20 + 0x15a4);
      in_stack_000000c0 = 0;
    }
    if (uVar55 <= uVar10) goto LAB_035575f4;
    lVar43 = lVar43 + lVar36 * 0x178;
    fVar63 = *(float *)(lVar43 + 0x128);
    fVar64 = *(float *)(lVar43 + 0x188);
    uVar18 = *(undefined8 *)(lVar43 + 0x17c);
    fVar61 = *(float *)(lVar43 + 0x184);
    uVar17 = *(undefined8 *)(lVar43 + 0x184);
    fVar50 = *(float *)(lVar43 + 0x18c);
    fVar49 = *(float *)(lVar43 + 0x11c);
    fVar48 = *(float *)(lVar43 + 0x148);
    fVar46 = *(float *)(lVar43 + 0x150);
    in_stack_00000178 = uVar18;
    fStack0000000000000180 = fVar61;
    fStack0000000000000184 = fVar64;
    in_stack_00000188 = fVar50;
    in_stack_00000190 = in_stack_000017b0;
    in_stack_00000198 = in_stack_000017b8;
    in_stack_000001a0 = in_stack_000017c0;
    uVar19 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
    lVar43 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if ((uVar19 & 1) == 0) {
      if (*(int *)(lVar43 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar43);
      }
      fVar63 = fVar63 + (float)in_stack_000017b8;
      uVar54 = (ulong)(uint)fVar63;
      fVar49 = fVar49 - (float)((ulong)in_stack_000017b0 >> 0x20);
      fVar46 = fVar46 - in_stack_000017c0;
      uVar53 = (ulong)(uint)fVar46;
      fVar48 = fVar48 + (float)((ulong)in_stack_000017b8 >> 0x20);
      uVar56 = (ulong)(uint)fVar48;
      if (fVar49 <= fStack00000000000000d8) {
        fStack00000000000000d8 = fVar49;
      }
      if (fVar46 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar46;
      }
      if (fStack00000000000000c8 <= fVar63) {
        fStack00000000000000c8 = fVar63;
      }
      if (fStack00000000000000d0 <= fVar48) {
        fStack00000000000000d0 = fVar48;
      }
    }
    else {
      if (*(int *)(lVar43 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar43);
      }
      fVar49 = (fVar49 + (fStack00000000000000c8 - (float)in_stack_000017b8)) * 0.5;
      uVar56 = (ulong)(uint)fVar49;
      if (fVar46 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar46;
      }
      uVar53 = (ulong)(uint)fStack00000000000000dc;
      uVar54 = (ulong)in_stack_000000c0;
      if (fStack00000000000000d0 <= fVar48) {
        fStack00000000000000d0 = fVar48;
      }
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar53,uVar54,uVar56,fStack00000000000000d0,uVar54);
      fStack00000000000000dc = fVar46 - fVar50;
      fStack00000000000000c8 = fVar63 + fVar61;
      in_stack_000000c0 = 0;
      fStack00000000000000d0 = fVar48 + fVar64;
      fStack00000000000000d8 = fVar49;
      in_stack_000017b0 = uVar18;
      in_stack_000017b8 = uVar17;
      in_stack_000017c0 = fVar50;
    }
    if (((*unaff_x20 == 1) || (uVar10 == uVar31)) || (((int)uVar33 <= (int)uVar10 || (!bVar1)))) {
      uVar54 = (ulong)in_stack_000000c0;
      uVar53 = (ulong)(uint)fStack00000000000000dc;
      uVar56 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar53,uVar54,uVar56,fStack00000000000000d0,uVar54);
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
  }
  uVar10 = *unaff_x20;
  lVar28 = lVar28 + 0x178;
  _iStack0000000000000128 = CONCAT44(fStack000000000000012c,iStack0000000000000128 + 1);
  bVar1 = (int)uVar10 <= (int)uVar12;
  uVar12 = uVar12 + 1;
  uVar55 = uVar25;
  if (bVar1) goto FUN_03556ed8;
  goto LAB_03554e78;
FUN_03556ed8:
  lVar41 = *unaff_x28;
  if (lVar41 != 0) {
    iVar13 = uVar25 + 1;
    plVar42 = (long *)OVRPlugin_Media_TypeInfo;
    fVar58 = fStack00000000000000d4;
LAB_03556f00:
    *(uint *)(lVar41 + 0x18) = uVar10;
    lVar28 = unaff_x19[0xd4];
    *(int *)(lVar41 + 0x2c) = iVar13;
    if ((int)uVar10 < 1 || fVar58 == 0.0) {
      fVar58 = 1.4013e-45;
    }
    *(int *)(lVar41 + 0x1c) = (int)lVar28;
    *(float *)(lVar41 + 0x24) = fVar58;
    *(int *)(lVar41 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar19 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar19 & 1) == 0)) {
LAB_03554724:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar41 = unaff_x19[0xdf];
    if (lVar41 != 0) {
      (**(code **)(lVar41 + 0x18))
                (*(undefined8 *)(lVar41 + 0x40),*unaff_x28,*(undefined8 *)(lVar41 + 0x28));
    }
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    iVar13 = FUN_03911ee4(unaff_x19[0xe5],0);
    if (iVar13 != 0x19) {
      lVar41 = unaff_x19[0xe5];
      if (lVar41 == 0) goto LAB_035574b8;
      uVar10 = FUN_03911ee4(lVar41,0);
      FUN_03911f20(lVar41,uVar10 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*unaff_x28 == 0) || (lVar41 = *(long *)(*unaff_x28 + 0x60), lVar41 == 0))
      goto LAB_035574b8;
      if (*(int *)(*plVar42 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar41 + 0x18) == 0) goto LAB_035575f4;
      FUN_03596b20(lVar41 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar41 = *(long *)(unaff_x19[0x6d] + 0x60), lVar41 != 0)) {
        if (*(int *)(lVar41 + 0x18) == 0) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar41 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar41 = *(long *)(unaff_x19[0x6d] + 0x60), lVar41 != 0)) {
            if (*(int *)(lVar41 + 0x18) == 0) goto LAB_035575f4;
            if (unaff_x19[0x74] != 0) {
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar41 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar41 = *(long *)(unaff_x19[0x6d] + 0x60), lVar41 != 0)) {
                if (*(int *)(lVar41 + 0x18) == 0) goto LAB_035575f4;
                if (unaff_x19[0x74] != 0) {
                  FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar41 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar41 = *(long *)(unaff_x19[0x6d] + 0x60), lVar41 != 0)) {
                    if (*(int *)(lVar41 + 0x18) == 0) goto LAB_035575f4;
                    if (unaff_x19[0x74] != 0) {
                      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar41 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_036aa280(unaff_x19[0x74],0);
                        if (unaff_x19[0xe4] != 0) {
                          FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
                          if (unaff_x19[0xe4] != 0) {
                            uVar17 = FUN_0390ef60(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar10 = FUN_0390ed3c(unaff_x19[0xe4],0);
                              lVar41 = *unaff_x28;
                              if (lVar41 != 0) {
                                lVar43 = 0;
                                lVar28 = 0;
                                do {
                                  uVar19 = lVar28 + 1;
                                  if ((long)*(int *)(lVar41 + 0x34) <= (long)uVar19)
                                  goto LAB_03554724;
                                  lVar41 = *(long *)(lVar41 + 0x60);
                                  if (lVar41 == 0) break;
                                  if (*(int *)(*plVar42 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  if (*(uint *)(lVar41 + 0x18) <= uVar19) goto LAB_035575f4;
                                  FUN_03596a20(lVar41 + lVar43 + 0x70,0);
                                  lVar41 = unaff_x19[0xe1];
                                  if (lVar41 == 0) break;
                                  if (*(uint *)(lVar41 + 0x18) <= uVar19) goto LAB_035575f4;
                                  uVar18 = *(undefined8 *)(lVar41 + lVar28 * 8 + 0x28);
                                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar22 = FUN_036d35a8(uVar18,0,0);
                                  if ((uVar22 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                      if ((*unaff_x28 == 0) ||
                                         (lVar41 = *(long *)(*unaff_x28 + 0x60), lVar41 == 0))
                                      break;
                                      if (*(int *)(*plVar42 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      if (*(uint *)(lVar41 + 0x18) <= uVar19) goto LAB_035575f4;
                                      FUN_03596b20(lVar41 + lVar43 + 0x70,1,0);
                                    }
                                    lVar41 = unaff_x19[0xe1];
                                    if (lVar41 == 0) break;
                                    if (*(uint *)(lVar41 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar41 = *(long *)(lVar41 + lVar28 * 8 + 0x28);
                                    if (lVar41 == 0) break;
                                    lVar41 = UnityEngine_Material__GetColorArray(lVar41,0);
                                    if ((*unaff_x28 == 0) ||
                                       (lVar20 = *(long *)(*unaff_x28 + 0x60), lVar20 == 0)) break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar19) goto LAB_035575f4;
                                    if (lVar41 == 0) break;
                                    FUN_036a460c(lVar41,*(undefined8 *)(lVar20 + lVar43 + 0x80),0);
                                    lVar41 = unaff_x19[0xe1];
                                    if (lVar41 == 0) break;
                                    if (*(uint *)(lVar41 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar41 = *(long *)(lVar41 + lVar28 * 8 + 0x28);
                                    if (lVar41 == 0) break;
                                    lVar41 = UnityEngine_Material__GetColorArray(lVar41,0);
                                    if ((*unaff_x28 == 0) ||
                                       (lVar20 = *(long *)(*unaff_x28 + 0x60), lVar20 == 0)) break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar19) goto LAB_035575f4;
                                    if (lVar41 == 0) break;
                                    FUN_036a4810(lVar41,*(undefined8 *)(lVar20 + lVar43 + 0x98),0);
                                    lVar41 = unaff_x19[0xe1];
                                    if (lVar41 == 0) break;
                                    if (*(uint *)(lVar41 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar41 = *(long *)(lVar41 + lVar28 * 8 + 0x28);
                                    if (lVar41 == 0) break;
                                    lVar41 = UnityEngine_Material__GetColorArray(lVar41,0);
                                    if ((*unaff_x28 == 0) ||
                                       (lVar20 = *(long *)(*unaff_x28 + 0x60), lVar20 == 0)) break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar19) goto LAB_035575f4;
                                    if (lVar41 == 0) break;
                                    FUN_036a48bc(lVar41,*(undefined8 *)(lVar20 + lVar43 + 0xa0),0);
                                    lVar41 = unaff_x19[0xe1];
                                    if (lVar41 == 0) break;
                                    if (*(uint *)(lVar41 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar41 = *(long *)(lVar41 + lVar28 * 8 + 0x28);
                                    if (lVar41 == 0) break;
                                    lVar41 = UnityEngine_Material__GetColorArray(lVar41,0);
                                    if ((*unaff_x28 == 0) ||
                                       (lVar20 = *(long *)(*unaff_x28 + 0x60), lVar20 == 0)) break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar19) goto LAB_035575f4;
                                    if (lVar41 == 0) break;
                                    FUN_036a4e24(lVar41,*(undefined8 *)(lVar20 + lVar43 + 0xa8),0);
                                    lVar41 = unaff_x19[0xe1];
                                    if (lVar41 == 0) break;
                                    if (*(uint *)(lVar41 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar41 = *(long *)(lVar41 + lVar28 * 8 + 0x28);
                                    if ((lVar41 == 0) ||
                                       (lVar41 = UnityEngine_Material__GetColorArray(lVar41,0),
                                       lVar41 == 0)) break;
                                    FUN_036aa280(lVar41,0);
                                    lVar41 = unaff_x19[0xe1];
                                    if (lVar41 == 0) break;
                                    if (*(uint *)(lVar41 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar41 = *(long *)(lVar41 + lVar28 * 8 + 0x28);
                                    if (lVar41 == 0) break;
                                    lVar41 = FUN_037b514c(lVar41,0);
                                    lVar20 = unaff_x19[0xe1];
                                    if (lVar20 == 0) break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar20 = *(long *)(lVar20 + lVar28 * 8 + 0x28);
                                    if ((lVar20 == 0) ||
                                       (uVar18 = UnityEngine_Material__GetColorArray(lVar20,0),
                                       lVar41 == 0)) break;
                                    FUN_0390f3a4(lVar41,uVar18,0);
                                    lVar41 = unaff_x19[0xe1];
                                    if (lVar41 == 0) break;
                                    if (*(uint *)(lVar41 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar41 = *(long *)(lVar41 + lVar28 * 8 + 0x28);
                                    if ((lVar41 == 0) ||
                                       (lVar41 = FUN_037b514c(lVar41,0), lVar41 == 0)) break;
                                    FUN_0390eec8(uVar17,uVar53,uVar54,uVar56,lVar41,0);
                                    lVar41 = unaff_x19[0xe1];
                                    if (lVar41 == 0) break;
                                    if (*(uint *)(lVar41 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar41 = *(long *)(lVar41 + lVar28 * 8 + 0x28);
                                    if ((lVar41 == 0) ||
                                       (lVar41 = FUN_037b514c(lVar41,0), lVar41 == 0)) break;
                                    FUN_0390ed78(lVar41,uVar10 & 1,0);
                                    lVar41 = unaff_x19[0xe1];
                                    if (lVar41 == 0) break;
                                    if (*(uint *)(lVar41 + 0x18) <= uVar19) goto LAB_035575f4;
                                    plVar40 = *(long **)(lVar41 + lVar28 * 8 + 0x28);
                                    uVar12 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar40 == (long *)0x0) break;
                                    (**(code **)(*plVar40 + 0x2c8))
                                              (plVar40,uVar12 & 1,*(undefined8 *)(*plVar40 + 0x2d0))
                                    ;
                                  }
                                  lVar41 = *unaff_x28;
                                  lVar28 = lVar28 + 1;
                                  lVar43 = lVar43 + 0x50;
                                } while (lVar41 != 0);
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


