/*
FUNCTION_NAME: UnityEngine.Android.Permission$$RequestUserPermissions
ENTRY_POINT: 03551468
PROGRAM: vrlegs-libil2cpp.so
SCORE: 235
LABEL: framework_eye_tracking_support_or_permission_path_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;gaze_interaction;data_collection_or_telemetry;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;telemetry;structure_combo;attempted_use
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_7;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_gaze_interaction_hits_7;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_Android_Permission__RequestUserPermissions(void)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  int *piVar22;
  ulong uVar23;
  ulong uVar24;
  undefined1 uVar25;
  char cVar26;
  long lVar27;
  undefined4 *puVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  float *pfVar32;
  code *pcVar33;
  uint uVar34;
  float *pfVar35;
  long lVar36;
  uint uVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  uint uVar41;
  long lVar42;
  long *unaff_x19;
  uint *unaff_x20;
  long *unaff_x21;
  long *plVar43;
  uint unaff_w23;
  ulong unaff_x24;
  long lVar44;
  long *plVar45;
  uint unaff_w26;
  undefined4 unaff_w27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined4 uVar52;
  undefined8 uVar53;
  uint uVar54;
  ulong uVar55;
  float unaff_s8;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  ulong unaff_d11;
  float fVar61;
  float fVar62;
  float unaff_s14;
  undefined4 uVar63;
  float fVar64;
  float fVar65;
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
  float in_stack_00000128;
  float fStack000000000000012c;
  float in_stack_00000158;
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
  
code_r0x03551468:
  lVar27 = *unaff_x28;
  if ((lVar27 != 0) && (lVar30 = *(long *)(lVar27 + 0x38), lVar30 != 0)) {
    if (*unaff_x20 < *(uint *)(lVar30 + 0x18)) {
      fStack000000000000015c = 0.0;
      *(int *)(lVar30 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24];
      *(undefined4 *)(unaff_x19 + 0x24) = unaff_w27;
LAB_035514b0:
      uVar23 = 0;
      uVar21 = in_stack_000017c8;
      if (in_stack_000017dc != 3 && in_stack_000017dc != 0xad) {
        uVar23 = unaff_d11 & 0xffffffff;
      }
LAB_035514cc:
      lVar27 = *(long *)(lVar27 + 0x38);
      if (lVar27 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
      *(short *)(lVar27 + 0x20) = (short)in_stack_000017dc;
      *(int *)(lVar27 + 0x60) = (int)unaff_x19[0x3d];
      *(undefined4 *)(lVar27 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
      if ((unaff_x19[0x6d] == 0) || (lVar27 = *(long *)(unaff_x19[0x6d] + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(int *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x168) = (int)unaff_x19[0x2b];
      if ((unaff_x19[0x6d] == 0) || (lVar27 = *(long *)(unaff_x19[0x6d] + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(undefined4 *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x170) =
           *(undefined4 *)((long)unaff_x19 + 0x15c);
      if ((unaff_x19[0x6d] == 0) || (lVar27 = *(long *)(unaff_x19[0x6d] + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      uVar11 = *unaff_x20;
      FUN_0209a6e0(_fStack00000000000000c8,&stack0x000008a0,
                   *(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
      if (*(uint *)(lVar27 + 0x18) <= uVar11) goto LAB_035575f4;
      uVar53 = unaff_x29[1];
      uVar18 = *unaff_x29;
      lVar27 = lVar27 + (long)(int)uVar11 * unaff_x24;
      *(undefined4 *)(lVar27 + 0x18c) = in_stack_000008b0;
      *(undefined8 *)(lVar27 + 0x184) = uVar53;
      *(undefined8 *)(lVar27 + 0x17c) = uVar18;
      if ((*unaff_x28 == 0) || (lVar27 = *(long *)(*unaff_x28 + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(undefined4 *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
           *(undefined4 *)((long)unaff_x19 + 0x25c);
      if ((unaff_x19[0xc9] == 0) || (lVar27 = *(long *)(unaff_x19[0xc9] + 0x20), lVar27 == 0))
      goto LAB_035574b8;
      FUN_03776e6c(&stack0x00000c18,lVar27,0);
      puVar7 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
      unaff_x29[0x1df] = in_stack_00000c20;
      unaff_x29[0x1de] = CONCAT44(in_stack_00000c1c,in_stack_00000c18);
      if ((int)in_stack_000017dc < 0x10000) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar11 = FUN_026b63d8(in_stack_000017dc,0);
        uVar11 = uVar11 & 1;
      }
      else {
        uVar11 = 0;
      }
      fVar48 = *(float *)(unaff_x19 + 0x55);
      *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
      iVar12 = (int)unaff_x24;
      if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
        fStack000000000000012c = 0.0;
        fVar64 = 0.0;
        fVar61 = 0.0;
      }
      else {
        if (*in_stack_000000e0 == 0) goto LAB_035574b8;
        uVar54 = *unaff_x20;
        uVar17 = *(uint *)(*in_stack_000000e0 + 0x28);
        if ((int)uVar54 < (int)in_stack_00000088._4_4_) {
          if ((*unaff_x28 == 0) || (lVar27 = *(long *)(*unaff_x28 + 0x38), lVar27 == 0))
          goto LAB_035574b8;
          if (*(uint *)(lVar27 + 0x18) <= uVar54 + 1) goto LAB_035575f4;
          lVar27 = *(long *)(lVar27 + (long)(int)(uVar54 + 1) * (long)iVar12 + 0x30);
          if ((((lVar27 == 0) || (*unaff_x21 == 0)) ||
              (lVar30 = *(long *)(*unaff_x21 + 0x128), lVar30 == 0)) ||
             (lVar30 = *(long *)(lVar30 + 0x18), lVar30 == 0)) goto LAB_035574b8;
          in_stack_000008a0 = uVar17 | *(int *)(lVar27 + 0x28) << 0x10;
          uVar19 = FUN_0219f8b8(lVar30,&stack0x000008a0,&stack0x000016f8,
                                *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
          uVar63 = 0;
          if ((uVar19 & 1) == 0) {
            fStack000000000000012c = 0.0;
            fVar64 = 0.0;
            fVar61 = 0.0;
          }
          else {
            if (in_stack_000016f8 == 0) goto LAB_035574b8;
            fStack000000000000012c = *(float *)(in_stack_000016f8 + 0x1c);
            uVar63 = *(undefined4 *)(in_stack_000016f8 + 0x20);
            fVar61 = *(float *)(in_stack_000016f8 + 0x14);
            fVar64 = *(float *)(in_stack_000016f8 + 0x18);
            if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
              fVar48 = 0.0;
            }
          }
          uVar54 = *unaff_x20;
        }
        else {
          uVar63 = 0;
          fStack000000000000012c = 0.0;
          fVar64 = 0.0;
          fVar61 = 0.0;
        }
        if (0 < (int)uVar54) {
          if ((*unaff_x28 == 0) || (lVar27 = *(long *)(*unaff_x28 + 0x38), lVar27 == 0))
          goto LAB_035574b8;
          if (*(uint *)(lVar27 + 0x18) <= uVar54 - 1) goto LAB_035575f4;
          lVar27 = *(long *)(lVar27 + (ulong)(uVar54 - 1) * (unaff_x24 & 0xffffffff) + 0x30);
          if (((lVar27 == 0) || (*unaff_x21 == 0)) ||
             ((lVar30 = *(long *)(*unaff_x21 + 0x128), lVar30 == 0 ||
              (lVar30 = *(long *)(lVar30 + 0x18), lVar30 == 0)))) goto LAB_035574b8;
          in_stack_000008a0 = *(uint *)(lVar27 + 0x28) | uVar17 << 0x10;
          uVar19 = FUN_0219f8b8(lVar30,&stack0x000008a0,&stack0x000016f8,
                                *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
          if ((uVar19 & 1) != 0) {
            if ((in_stack_000016f8 == 0) ||
               (fVar61 = (float)FUN_03571cb4(fVar61,fVar64,fStack000000000000012c,uVar63,
                                             *(undefined4 *)(in_stack_000016f8 + 0x28),
                                             *(undefined4 *)(in_stack_000016f8 + 0x2c),
                                             *(undefined4 *)(in_stack_000016f8 + 0x30),
                                             *(undefined4 *)(in_stack_000016f8 + 0x34),0),
               in_stack_000016f8 == 0)) goto LAB_035574b8;
            if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
              fVar48 = 0.0;
            }
          }
        }
        *(float *)((long)unaff_x19 + 0x2fc) = fStack000000000000012c;
      }
      fVar46 = (float)uVar23;
      if ((char)unaff_x19[0x1e] != '\0') {
        fVar56 = *(float *)(unaff_x19 + 200);
        fVar49 = (float)FUN_03776cb4(&stack0x00001790,0);
        fVar56 = fVar56 - fVar46 * fVar49 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
        *(float *)(unaff_x19 + 200) = fVar56;
        if ((in_stack_000017dc == 0x200b) || (uVar11 != 0)) {
          *(float *)(unaff_x19 + 200) =
               fVar56 - fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
        }
      }
      fVar56 = *(float *)(unaff_x19 + 0x56);
      fVar49 = 0.0;
      if (fVar56 != 0.0) {
        fVar49 = (float)FUN_03776c94(&stack0x00001790,0);
        fVar50 = (float)FUN_03776ca4(&stack0x00001790,0);
        fVar49 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                 (fVar56 * 0.5 - fVar46 * (fVar49 * 0.5 + fVar50));
        *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + fVar49;
      }
      if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (unaff_w26 == 0)) &&
         ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
        lVar27 = *in_stack_00000160;
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar19 = FUN_036cee6c(lVar27,0,0);
        fVar50 = 0.0;
        if ((uVar19 & 1) != 0) {
          lVar27 = *in_stack_00000160;
          if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (lVar27 == 0) goto LAB_035574b8;
          uVar19 = FUN_03699d3c(lVar27,*(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x54),0);
          fVar50 = 0.0;
          if ((uVar19 & 1) != 0) {
            lVar27 = *in_stack_00000160;
            if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            if (lVar27 == 0) goto LAB_035574b8;
            fVar56 = (float)FUN_0369e060(lVar27,*(undefined4 *)
                                                 (*(long *)(*(long *)puVar7 + 0xb8) + 0x54),0);
            if ((*unaff_x21 == 0) || (*in_stack_00000160 == 0)) goto LAB_035574b8;
            fVar59 = *(float *)(*unaff_x21 + 0x1b0);
            fVar50 = (float)FUN_0369e060(*in_stack_00000160,
                                         *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xcc),0
                                        );
            fVar50 = fVar50 * fVar56 * fVar59 * 0.25;
            if (fVar56 < fStack000000000000015c + fVar50) {
              fStack000000000000015c = fVar56 - fVar50;
            }
          }
        }
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fStack00000000000000d0 = *(float *)(*unaff_x21 + 0x1b4);
      }
      else {
        lVar27 = *in_stack_00000160;
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar19 = FUN_036cee6c(lVar27,0,0);
        fStack00000000000000d0 = 0.0;
        if ((uVar19 & 1) != 0) {
          lVar27 = *in_stack_00000160;
          if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (lVar27 == 0) goto LAB_035574b8;
          uVar19 = FUN_03699d3c(lVar27,*(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x54),0);
          if ((uVar19 & 1) != 0) {
            lVar27 = *in_stack_00000160;
            if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            if (lVar27 == 0) goto LAB_035574b8;
            uVar19 = FUN_03699d3c(lVar27,*(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xcc),0
                                 );
            if ((uVar19 & 1) != 0) {
              lVar27 = *in_stack_00000160;
              if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              if (lVar27 != 0) {
                fVar56 = (float)FUN_0369e060(lVar27,*(undefined4 *)
                                                     (*(long *)(*(long *)puVar7 + 0xb8) + 0x54),0);
                if ((*unaff_x21 != 0) && (*in_stack_00000160 != 0)) {
                  fVar59 = *(float *)(*unaff_x21 + 0x1a8);
                  fVar50 = (float)FUN_0369e060(*in_stack_00000160,
                                               *(undefined4 *)
                                                (*(long *)(*(long *)puVar7 + 0xb8) + 0xcc),0);
                  fVar50 = fVar50 * fVar56 * fVar59 * 0.25;
                  if (fVar56 < fStack000000000000015c + fVar50) {
                    fStack000000000000015c = fVar56 - fVar50;
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
      fVar56 = *(float *)(unaff_x19 + 200);
      fVar59 = (float)FUN_03776ca4(&stack0x00001790,0);
      fVar56 = fVar56 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                        fVar46 * (fVar61 + ((fVar59 - fStack000000000000015c) - fVar50));
      fVar61 = (float)FUN_03776cac(&stack0x00001790,0);
      fVar65 = *(float *)((long)unaff_x19 + 0x61c) +
               ((unaff_s14 + fVar46 * (fVar64 + fStack000000000000015c + fVar61)) -
               *(float *)(unaff_x19 + 0x9b));
      fVar61 = (float)FUN_03776c9c(&stack0x00001790,0);
      fVar61 = fVar65 - fVar46 * (fStack000000000000015c + fStack000000000000015c + fVar61);
      fVar64 = (float)FUN_03776c94(&stack0x00001790,0);
      fVar59 = fVar56 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                        fVar46 * (fVar50 + fVar50 +
                                 fStack000000000000015c + fStack000000000000015c + fVar64);
      fStack0000000000000104 = fVar56;
      fVar64 = fVar59;
      if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (unaff_w26 == 0)) &&
         ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
        fVar58 = (float)(int)unaff_x19[0xbe] * fStack000000000000005c;
        fVar64 = (float)FUN_03776cac(&stack0x00001790,0);
        fVar57 = fVar58 * fVar46 * (fVar50 + fStack000000000000015c + fVar64);
        fVar64 = (float)FUN_03776cac(&stack0x00001790,0);
        fVar47 = (float)FUN_03776c9c(&stack0x00001790,0);
        fVar65 = fVar65 + 0.0;
        fVar61 = fVar61 + 0.0;
        fVar58 = fVar58 * fVar46 * (((fVar64 - fVar47) - fStack000000000000015c) - fVar50);
        fVar47 = fVar56 + fVar57;
        fVar64 = fVar59 + fVar58;
        fVar51 = (fVar57 - fVar58) * 0.5;
        fVar56 = (fVar56 + fVar58) - fVar51;
        fVar59 = (fVar59 + fVar57) - fVar51;
        fStack0000000000000104 = fVar47 - fVar51;
        fVar64 = fVar64 - fVar51;
      }
      if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
        fStack0000000000000114 = 0.0;
        fVar51 = 0.0;
        fVar57 = 0.0;
        fStack0000000000000100 = 0.0;
        fVar58 = fVar61;
        fVar47 = fVar65;
      }
      else {
        thunk_FUN_036bc400(_fStack0000000000000078,0);
        fVar60 = (fVar59 + fVar56) * 0.5;
        fVar62 = (fVar61 + fVar65) * 0.5;
        fVar65 = fVar65 - fVar62;
        fStack0000000000000100 = 0.0;
        fVar47 = fVar65;
        fStack0000000000000104 =
             (float)FUN_036bdd2c(fStack0000000000000104 - fVar60,_fStack0000000000000078,0);
        fStack0000000000000104 = fVar60 + fStack0000000000000104;
        fStack0000000000000100 = fStack0000000000000100 + 0.0;
        fVar58 = fVar61 - fVar62;
        fStack0000000000000114 = 0.0;
        fVar61 = fVar58;
        fVar56 = (float)FUN_036bdd2c(fVar56 - fVar60,_fStack0000000000000078,0);
        fVar56 = fVar60 + fVar56;
        fStack0000000000000114 = fStack0000000000000114 + 0.0;
        fVar61 = fVar62 + fVar61;
        fVar57 = 0.0;
        fVar59 = (float)FUN_036bdd2c(fVar59 - fVar60,_fStack0000000000000078,0);
        fVar59 = fVar60 + fVar59;
        fVar65 = fVar62 + fVar65;
        fVar57 = fVar57 + 0.0;
        fVar51 = 0.0;
        fVar64 = (float)FUN_036bdd2c(fVar64 - fVar60,_fStack0000000000000078,0);
        fVar64 = fVar60 + fVar64;
        fVar51 = fVar51 + 0.0;
        fVar58 = fVar62 + fVar58;
        fVar47 = fVar62 + fVar47;
      }
      if ((*unaff_x28 == 0) || (lVar27 = *(long *)(*unaff_x28 + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
      *(float *)(lVar27 + 0x11c) = fVar56;
      *(float *)(lVar27 + 0x120) = fVar61;
      *(float *)(lVar27 + 0x124) = fStack0000000000000114;
      if ((*unaff_x28 == 0) || (lVar27 = *(long *)(*unaff_x28 + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
      *(float *)(lVar27 + 0x114) = fVar47;
      *(float *)(lVar27 + 0x110) = fStack0000000000000104;
      *(float *)(lVar27 + 0x118) = fStack0000000000000100;
      if ((*unaff_x28 == 0) || (lVar27 = *(long *)(*unaff_x28 + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
      *(float *)(lVar27 + 0x128) = fVar59;
      *(float *)(lVar27 + 300) = fVar65;
      *(float *)(lVar27 + 0x130) = fVar57;
      if ((*unaff_x28 == 0) || (lVar27 = *(long *)(*unaff_x28 + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
      *(float *)(lVar27 + 0x134) = fVar64;
      *(float *)(lVar27 + 0x138) = fVar58;
      *(float *)(lVar27 + 0x13c) = fVar51;
      if ((*unaff_x28 == 0) || (lVar27 = *(long *)(*unaff_x28 + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      uVar17 = *unaff_x20;
      lVar30 = (long)(int)uVar17;
      if (*(uint *)(lVar27 + 0x18) <= uVar17) goto LAB_035575f4;
      lVar31 = lVar27 + lVar30 * unaff_x24;
      *(int *)(lVar31 + 0x140) = (int)unaff_x19[200];
      fVar65 = *(float *)(unaff_x19 + 0x9b);
      uVar19 = (ulong)(uint)fVar65;
      fVar64 = *(float *)((long)unaff_x19 + 0x61c);
      *(float *)(lVar31 + 0x15c) = (fVar59 - fVar56) / (fVar47 - fVar61);
      *(float *)(lVar31 + 0x14c) = (unaff_s14 - fVar65) + fVar64;
      in_stack_00000128 = in_stack_00000128 * fVar46;
      if (*(int *)((long)unaff_x19 + 0x644) == 0) {
        in_stack_00000128 = in_stack_00000128 / in_stack_00000158;
        fVar61 = (unaff_s8 * fVar46) / in_stack_00000158;
      }
      else {
        fVar61 = unaff_s8 * fVar46;
      }
      uVar54 = *(uint *)(unaff_x19 + 0x93);
      if ((uVar11 == 0) || (uVar17 == uVar54)) {
        fVar61 = fVar64 + fVar61;
        in_stack_00000128 = fVar64 + in_stack_00000128;
        fVar59 = fVar61;
        fVar56 = in_stack_00000128;
        if (fVar64 != 0.0) {
          fVar56 = (in_stack_00000128 - fVar64) / *(float *)((long)unaff_x19 + 0x404);
          fVar59 = (fVar61 - fVar64) / *(float *)((long)unaff_x19 + 0x404);
          if (fVar56 <= in_stack_00000128) {
            fVar56 = in_stack_00000128;
          }
          if (fVar61 <= fVar59) {
            fVar59 = fVar61;
          }
        }
        lVar27 = lVar27 + lVar30 * unaff_x24;
        fVar64 = fVar56;
        if (fVar56 <= *(float *)(unaff_x19 + 0x99)) {
          fVar64 = *(float *)(unaff_x19 + 0x99);
        }
        fVar47 = fVar59;
        if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar59) {
          fVar47 = *(float *)((long)unaff_x19 + 0x4cc);
        }
        *(float *)((long)unaff_x19 + 0x4cc) = fVar47;
        *(float *)(unaff_x19 + 0x99) = fVar64;
        *(float *)(lVar27 + 0x154) = fVar56;
        *(float *)(lVar27 + 0x158) = fVar59;
        *(float *)(lVar27 + 0x148) = in_stack_00000128 - fVar65;
        *(float *)(unaff_x19 + 0x98) = in_stack_00000128 - fVar65;
        *(float *)(lVar27 + 0x150) = fVar61 - fVar65;
        *(float *)((long)unaff_x19 + 0x4c4) = fVar61 - fVar65;
        if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
          *(float *)(unaff_x19 + 0x97) = fVar64;
          if (unaff_x19[0x20] == 0) goto LAB_035574b8;
          fVar61 = *(float *)((long)unaff_x19 + 0x4bc);
          fVar64 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
          in_stack_00000158 = (fVar46 * fVar64) / in_stack_00000158;
          uVar19 = (ulong)*(uint *)(unaff_x19 + 0x9b);
          if (fVar61 <= in_stack_00000158) {
            fVar61 = in_stack_00000158;
          }
          *(float *)((long)unaff_x19 + 0x4bc) = fVar61;
        }
        if ((float)uVar19 == 0.0) {
          fVar61 = *(float *)(in_stack_00000080 + 0x208);
          if (*(float *)(in_stack_00000080 + 0x208) <= in_stack_00000128) {
            fVar61 = in_stack_00000128;
          }
          *(float *)(in_stack_00000080 + 0x208) = fVar61;
        }
      }
      else {
        fVar61 = *(float *)(unaff_x19 + 0x99);
        lVar27 = lVar27 + lVar30 * unaff_x24;
        *(float *)(lVar27 + 0x154) = fVar61;
        fVar64 = *(float *)((long)unaff_x19 + 0x4cc);
        fVar61 = fVar61 - fVar65;
        *(float *)(lVar27 + 0x148) = fVar61;
        *(float *)(lVar27 + 0x158) = fVar64;
        *(float *)(unaff_x19 + 0x98) = fVar61;
        fVar64 = fVar64 - fVar65;
        *(float *)(lVar27 + 0x150) = fVar64;
        *(float *)((long)unaff_x19 + 0x4c4) = fVar64;
      }
      lVar27 = *unaff_x28;
      if ((lVar27 == 0) || (lVar30 = *(long *)(lVar27 + 0x38), lVar30 == 0)) goto LAB_035574b8;
      uVar13 = *unaff_x20;
      if (*(uint *)(lVar30 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar30 = lVar30 + (long)(int)uVar13 * unaff_x24;
      *(undefined1 *)(lVar30 + 0x194) = 0;
      uVar34 = *(uint *)(unaff_x19 + 0x4f);
      if (((in_stack_000017dc == 9) ||
          ((((uVar11 == 0 && (in_stack_000017dc != 3)) && (in_stack_000017dc != 0x200b)) &&
           (in_stack_000017dc != 0xad)))) ||
         (((in_stack_000017dc == 0xad & (bStack0000000000000074 ^ 0xff)) != 0 ||
          (*(int *)((long)unaff_x19 + 0x644) == 1)))) {
        *(undefined1 *)(lVar30 + 0x194) = 1;
        pfVar32 = _fStack00000000000000a0;
        pfVar35 = _fStack00000000000000a8;
        if (unaff_w23 != 0) {
          lVar27 = *(long *)(lVar27 + 0x50);
          if (lVar27 == 0) goto LAB_035574b8;
          if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
          lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
          pfVar35 = (float *)(lVar27 + 0x60);
          pfVar32 = (float *)(lVar27 + 100);
        }
        fVar64 = *pfVar35;
        fVar56 = *pfVar32;
        fVar61 = *(float *)(unaff_x19 + 0x6c);
        fVar59 = *(float *)(unaff_x19 + 200);
        in_stack_000000f8._4_4_ = (fStack000000000000009c - fVar64) - fVar56;
        bVar9 = true;
        if ((fVar61 <= in_stack_000000f8._4_4_) && (bVar9 = false, !NAN(fVar61))) {
          bVar9 = fVar61 == -1.0;
        }
        if (!bVar9) {
          in_stack_000000f8._4_4_ = fVar61;
        }
        fVar61 = 0.0;
        if ((char)unaff_x19[0x1e] == '\0') {
          fVar61 = (float)FUN_03776cb4(&stack0x00001790,0);
          uVar19 = (ulong)*(uint *)(unaff_x19 + 0x9b);
        }
        fVar47 = *(float *)((long)unaff_x19 + 0x2d4);
        fVar58 = *(float *)((long)unaff_x19 + 0x4cc);
        fVar65 = (float)unaff_d11;
        if (in_stack_000017dc != 0xad) {
          fVar65 = fVar46;
        }
        fVar57 = (float)uVar19;
        fVar51 = 0.0;
        if ((0.0 < fVar57) && (fVar51 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
          fVar51 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
        }
        uVar13 = *unaff_x20;
        fVar51 = (*(float *)(unaff_x19 + 0x97) - (fVar58 - fVar57)) + fVar51;
        if (fStack00000000000000c4 < fVar51) {
          if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
            *(uint *)((long)unaff_x19 + 0x2e4) = uVar13;
          }
          puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          in_stack_000017c8 = DAT_00d37868;
          if ((char)unaff_x19[0x47] != '\0') {
            fVar60 = *(float *)(unaff_x19 + 0x59);
            if (((fVar60 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar57)) &&
               (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
              fVar48 = *(float *)((long)unaff_x19 + 700) +
                       ((in_stack_00000018._4_4_ - fVar51) / (float)(int)unaff_x19[0x95]) /
                       fStack0000000000000058;
              if (fVar48 <= fVar60) {
                fVar48 = fVar60;
              }
              goto LAB_03554b48;
            }
            fVar57 = *(float *)((long)unaff_x19 + 0x1e4);
            fVar51 = *(float *)(unaff_x19 + 0x4a);
            uVar19 = (ulong)(uint)fVar51;
            if ((fVar51 < fVar57) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
              fVar48 = (fVar57 - *(float *)(unaff_x19 + 0x48)) * 0.5;
              if (fVar48 <= DAT_00d38b84) {
                fVar48 = DAT_00d38b84;
              }
              fVar61 = (fVar57 - fVar48) * 20.0 + 0.5;
              *(float *)((long)unaff_x19 + 0x23c) = fVar57;
              fVar48 = DAT_00d38e60;
              if (fVar61 != INFINITY) {
                fVar48 = (float)(int)fVar61 / 20.0;
              }
              if (fVar48 <= fVar51) {
                fVar48 = fVar51;
              }
              goto LAB_03554658;
            }
          }
          switch((int)unaff_x19[0x5c]) {
          case 1:
            lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar27 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar27 = *(long *)puVar7;
            }
            lVar30 = *(long *)(lVar27 + 0xb8);
            lVar27 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
            if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
              lVar27 = FUN_01a46ff8(lVar27);
            }
            piVar22 = (int *)thunk_FUN_01a59484(lVar30 + 0x11f0,
                                                *(long *)(*(long *)(*(long *)(lVar27 + 0xc0) + 8) +
                                                         0x80) + 0xa0);
            puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*piVar22 == 0) {
LAB_03554580:
              in_stack_000017c8 = DAT_00d37868;
              unaff_x20[0] = 0;
              unaff_x20[1] = 0;
              in_stack_000017a8 = 0xffffffff;
              goto LAB_03550bd0;
            }
            lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar27 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar27 = *(long *)puVar7;
            }
            FUN_0209b778(*(long *)(lVar27 + 0xb8) + 0x11f0,&stack0x000008a0,
                         *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
            memcpy(&stack0x00001380,&stack0x000008a0,0x378);
LAB_035529dc:
            iVar14 = FUN_0358c15c();
LAB_035529e8:
            iVar15 = *(int *)((long)unaff_x19 + 0x494) + -1;
            *(int *)((long)unaff_x19 + 0x494) = iVar15;
            in_stack_00000168._4_4_ = in_stack_00000168._4_4_ + 1;
            in_stack_000017a8 = iVar14 - 1;
            in_stack_000017c8 = CONCAT44(0x2026,iVar15);
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
            if ((uVar13 == 0) || ((int)in_stack_000017a8 < 0)) {
              in_stack_000017a8 = 0xffffffff;
              *unaff_x20 = 0;
              goto LAB_03550bd0;
            }
            fVar48 = *(float *)(unaff_x19 + 0x99);
            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            in_stack_000017a8 = FUN_0358c15c();
            if (fVar48 - fVar58 <= fStack00000000000000c4) {
              *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
              *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
              uVar19 = *(ulong *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8
                                 );
              *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
              *(undefined4 *)(unaff_x19 + 0x9a) = 0;
              lVar27 = NEON_rev64(uVar19,4);
              unaff_x19[0x99] = lVar27;
              *(undefined4 *)(unaff_x19 + 0x9b) = 0;
              *(undefined8 *)(in_stack_00000080 + 0x208) = 0;
              *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
              *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
              in_stack_000017c8 = uVar21;
              goto LAB_03550bd0;
            }
            break;
          case 6:
            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            in_stack_000017a8 = FUN_0358c15c();
            lVar27 = unaff_x19[0x5d];
            if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
              thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
            }
            uVar20 = FUN_036cee6c(lVar27,0,0);
            if ((uVar20 & 1) != 0) {
              plVar45 = (long *)unaff_x19[0x5d];
              uVar21 = (**(code **)(*unaff_x19 + 0x518))();
              if (plVar45 == (long *)0x0) goto LAB_035574b8;
              (**(code **)(*plVar45 + 0x528))(plVar45,uVar21,*(undefined8 *)(*plVar45 + 0x530));
              lVar27 = unaff_x19[0x5d];
              if (lVar27 == 0) goto LAB_035574b8;
              *(int *)(lVar27 + 0x400) = (int)unaff_x19[0x80];
              FUN_0357ee30(lVar27,*(undefined4 *)((long)unaff_x19 + 0x494),0);
              plVar45 = (long *)unaff_x19[0x5d];
              if (plVar45 == (long *)0x0) goto LAB_035574b8;
              (**(code **)(*plVar45 + 0x7a8))(plVar45,0,0,*(undefined8 *)(*plVar45 + 0x7b0));
              *(undefined1 *)(unaff_x19 + 0x5f) = 1;
            }
          }
UnityEngine_AnimationClip__get_hasMotionCurves:
          in_stack_000017c8 = CONCAT44(3,uVar13);
          goto LAB_03550bd0;
        }
UnityEngine_AnimationClip__set_wrapMode:
        puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        fVar59 = ABS(fVar59) + fVar61 * (1.0 - fVar47) * fVar65;
        fVar61 = 1.0;
        if ((uVar34 & 0x18) != 0) {
          fVar61 = DAT_00d38acc;
        }
        fVar65 = fVar61 * in_stack_000000f8._4_4_;
        if (fVar65 < fVar59) {
          uVar19 = (ulong)(uint)fVar50;
          if (((char)unaff_x19[0x5b] != '\0') && (uVar13 != *(uint *)(unaff_x19 + 0x93))) {
            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            in_stack_000017a8 = FUN_0358c15c();
            if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
              lVar27 = *in_stack_00000170;
              if ((lVar27 == 0) || (lVar30 = *(long *)(lVar27 + 0x38), lVar30 == 0))
              goto LAB_035574b8;
              if (*(uint *)(lVar30 + 0x18) <= *unaff_x20) goto LAB_035575f4;
              fVar65 = *(float *)(unaff_x19 + 0x9b);
              fVar47 = 0.0;
              if ((0.0 < fVar65) && (fVar47 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                fVar47 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
              }
              fVar47 = fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57) +
                       *(float *)(lVar30 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
                       (fVar47 - *(float *)((long)unaff_x19 + 0x4cc)) +
                       fStack0000000000000058 *
                       (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700));
            }
            else {
              lVar27 = unaff_x19[0x6d];
              *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
              if (lVar27 == 0) goto LAB_035574b8;
              fVar65 = *(float *)(unaff_x19 + 0x9b);
              fVar47 = *(float *)(unaff_x19 + 0x58) +
                       fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57);
            }
            puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar27 = *(long *)(lVar27 + 0x38);
            if (lVar27 != 0) {
              uVar37 = *(uint *)((long)unaff_x19 + 0x494);
              if ((*(uint *)(lVar27 + 0x18) <= uVar37) ||
                 (uVar5 = uVar37 - 1, *(uint *)(lVar27 + 0x18) <= uVar5)) goto LAB_035575f4;
              uVar19 = (ulong)(uint)(fVar47 + *(float *)(unaff_x19 + 0x97));
              fVar58 = (fVar47 + *(float *)(unaff_x19 + 0x97) + fVar65) -
                       *(float *)(lVar27 + (long)(int)uVar37 * unaff_x24 + 0x158);
              if (((bStack0000000000000074 & 1) == 0 &&
                   *(short *)(lVar27 + (long)(int)uVar5 * (long)iVar12 + 0x20) == 0xad) &&
                 ((fVar58 < fStack00000000000000c4 || ((int)unaff_x19[0x5c] == 0)))) {
                bStack0000000000000074 = 0;
                *unaff_x20 = uVar5;
                in_stack_000017a8 = in_stack_000017a8 - 1;
                in_stack_000017c8 = CONCAT44(0x2d,uVar5);
                goto LAB_03550bd0;
              }
              if (*(short *)(lVar27 + (long)(int)uVar37 * unaff_x24 + 0x20) == 0xad) {
                bStack0000000000000074 = 1;
                in_stack_000017c8 = uVar21;
                goto LAB_03550bd0;
              }
              if ((bStack0000000000000070 & *(byte *)(unaff_x19 + 0x47) & 1) != 0) {
                fVar47 = *(float *)((long)unaff_x19 + 0x2d4);
                fVar65 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                if ((fVar65 <= fVar47) ||
                   ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
                  fVar47 = *(float *)((long)unaff_x19 + 0x1e4);
                  uVar19 = (ulong)(uint)fVar47;
                  fVar65 = *(float *)(unaff_x19 + 0x4a);
                  if ((fVar47 <= fVar65) ||
                     ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) goto LAB_03552d44;
LAB_03557594:
                  fVar48 = (fVar47 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                  if (fVar48 <= DAT_00d38b84) {
                    fVar48 = DAT_00d38b84;
                  }
                  *(float *)((long)unaff_x19 + 0x23c) = fVar47;
                  fVar47 = fVar47 - fVar48;
                  goto LAB_03557524;
                }
LAB_03557558:
                fVar48 = fVar59;
                if (0.0 < fVar47) {
                  fVar48 = fVar59 / (1.0 - fVar47);
                }
                fVar47 = fVar47 + (fVar59 - fVar61 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) /
                                  fVar48;
LAB_035574e8:
                if (fVar65 <= fVar47) {
                  fVar47 = fVar65;
                }
                *(float *)((long)unaff_x19 + 0x2d4) = fVar47;
                return;
              }
LAB_03552d44:
              lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar27 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar27 = *(long *)puVar7;
              }
              iVar14 = *(int *)(*(long *)(lVar27 + 0xb8) + 0xe78);
              if (((iVar14 != iStack0000000000000034) && (iVar14 != -1)) &&
                 (((bStack0000000000000070 ^ 1) & 1) == 0)) {
                if (*(int *)(lVar27 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                in_stack_000017a8 = FUN_0358c15c();
                if ((unaff_x19[0x6d] == 0) ||
                   (lVar27 = *(long *)(unaff_x19[0x6d] + 0x38), lVar27 == 0)) goto LAB_035574b8;
                uVar37 = *unaff_x20 - 1;
                if (*(uint *)(lVar27 + 0x18) <= uVar37) goto LAB_035575f4;
                iStack0000000000000034 = iVar14;
                if (*(short *)(lVar27 + (long)(int)uVar37 * (long)iVar12 + 0x20) == 0xad) {
                  bStack0000000000000074 = 0;
                  *unaff_x20 = uVar37;
                  in_stack_000017a8 = in_stack_000017a8 - 1;
                  in_stack_000017c8 = CONCAT44(0x2d,uVar37);
                  goto LAB_03550bd0;
                }
              }
              if (fVar58 <= fStack00000000000000c4) {
switchD_03552ef4_caseD_0:
                uVar19 = uVar23;
                FUN_0358cbd4(fStack0000000000000058,uVar23,fStack00000000000000d4,
                             *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,fVar48,
                             in_stack_000000f8._4_4_,in_stack_00000050._4_4_);
              }
              else {
                if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                  *(undefined4 *)((long)unaff_x19 + 0x2e4) =
                       *(undefined4 *)((long)unaff_x19 + 0x494);
                }
                fVar65 = fStack00000000000000c4;
                if ((char)unaff_x19[0x47] != '\0') {
                  fVar65 = *(float *)(unaff_x19 + 0x59);
                  if ((fVar65 < *(float *)((long)unaff_x19 + 700)) &&
                     (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                    fVar48 = *(float *)((long)unaff_x19 + 700) +
                             ((in_stack_00000018._4_4_ - fVar58) / (float)((int)unaff_x19[0x95] + 1)
                             ) / fStack0000000000000058;
                    if (fVar48 <= fVar65) {
                      fVar48 = fVar65;
                    }
LAB_03554b48:
                    *(float *)((long)unaff_x19 + 700) = fVar48;
                    return;
                  }
                  fVar47 = *(float *)((long)unaff_x19 + 0x2d4);
                  fVar65 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                  if ((fVar47 < fVar65) &&
                     (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) goto LAB_03557558;
                  fVar47 = *(float *)((long)unaff_x19 + 0x1e4);
                  uVar19 = (ulong)(uint)fVar47;
                  fVar65 = *(float *)(unaff_x19 + 0x4a);
                  if ((fVar65 < fVar47) &&
                     (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) goto LAB_03557594;
                }
                switch((int)unaff_x19[0x5c]) {
                case 0:
                case 2:
                case 4:
                  goto switchD_03552ef4_caseD_0;
                case 1:
                  lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (*(int *)(lVar27 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  }
                  lVar30 = *(long *)(lVar27 + 0xb8);
                  lVar27 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
                  if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
                    lVar27 = FUN_01a46ff8(lVar27);
                  }
                  piVar22 = (int *)thunk_FUN_01a59484(lVar30 + 0x11f0,
                                                      *(long *)(*(long *)(*(long *)(lVar27 + 0xc0) +
                                                                         8) + 0x80) + 0xa0);
                  if (*piVar22 == 0) {
                    bStack0000000000000074 = 0;
                    goto LAB_03554580;
                  }
                  lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (*(int *)(lVar27 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  }
                  FUN_0209b778(*(long *)(lVar27 + 0xb8) + 0x11f0,&stack0x000008a0,
                               *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                  memcpy(&stack0x00001008,&stack0x000008a0,0x378);
                  iVar14 = FUN_0358c15c();
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
                  uVar19 = uVar23;
                  FUN_0358cbd4(fStack0000000000000058,uVar23,fStack00000000000000d4,
                               *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,
                               fVar48,in_stack_000000f8._4_4_,in_stack_00000050._4_4_);
                  *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                  *(undefined4 *)(unaff_x19 + 0x9b) = 0;
                  *(undefined8 *)(in_stack_00000080 + 0x208) = 0;
                  *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
                  break;
                case 6:
                  lVar27 = unaff_x19[0x5d];
                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar20 = FUN_036cee6c(lVar27,0,0);
                  if ((uVar20 & 1) != 0) {
                    plVar45 = (long *)unaff_x19[0x5d];
                    uVar21 = (**(code **)(*unaff_x19 + 0x518))();
                    if (plVar45 == (long *)0x0) goto LAB_035574b8;
                    (**(code **)(*plVar45 + 0x528))
                              (plVar45,uVar21,*(undefined8 *)(*plVar45 + 0x530));
                    lVar27 = unaff_x19[0x5d];
                    if (lVar27 == 0) goto LAB_035574b8;
                    *(int *)(lVar27 + 0x400) = (int)unaff_x19[0x80];
                    FUN_0357ee30(lVar27,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                    plVar45 = (long *)unaff_x19[0x5d];
                    if (plVar45 == (long *)0x0) goto LAB_035574b8;
                    (**(code **)(*plVar45 + 0x7a8))(plVar45,0,0,*(undefined8 *)(*plVar45 + 0x7b0));
                    *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                  }
                  bStack0000000000000074 = 0;
                  goto LAB_03552b00;
                default:
                  bStack0000000000000074 = 0;
                  goto LAB_03552f54;
                }
              }
              bStack0000000000000070 = 1;
              bStack0000000000000074 = 0;
              in_stack_00000068._4_4_ = 1;
              in_stack_000017c8 = uVar21;
              goto LAB_03550bd0;
            }
            goto LAB_035574b8;
          }
          if (((char)unaff_x19[0x47] != '\0') &&
             (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
            fVar65 = *(float *)(unaff_x19 + 0x5a) / 100.0;
            if (fVar47 < fVar65) {
              fVar48 = fVar59 / (1.0 - fVar47);
              if (fVar47 <= 0.0) {
                fVar48 = fVar59;
              }
              fVar47 = fVar47 + (fVar59 - fVar61 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) /
                                fVar48;
              goto LAB_035574e8;
            }
            fVar47 = *(float *)((long)unaff_x19 + 0x1e4);
            fVar65 = *(float *)(unaff_x19 + 0x4a);
            if (fVar65 < fVar47) {
              fVar48 = (fVar47 - *(float *)(unaff_x19 + 0x48)) * 0.5;
              if (fVar48 <= DAT_00d38b84) {
                fVar48 = DAT_00d38b84;
              }
              *(float *)((long)unaff_x19 + 0x23c) = fVar47;
              fVar47 = fVar47 - fVar48;
LAB_03557524:
              fVar61 = fVar47 * 20.0 + 0.5;
              fVar48 = DAT_00d38e60;
              if (fVar61 != INFINITY) {
                fVar48 = (float)(int)fVar61 / 20.0;
              }
              if (fVar48 <= fVar65) {
                fVar48 = fVar65;
              }
LAB_03554658:
              *(float *)((long)unaff_x19 + 0x1e4) = fVar48;
              return;
            }
          }
          iVar14 = (int)unaff_x19[0x5c];
          if (iVar14 == 1) {
            lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar27 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar27 = *(long *)puVar7;
            }
            lVar30 = *(long *)(lVar27 + 0xb8);
            lVar27 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
            if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
              lVar27 = FUN_01a46ff8(lVar27);
            }
            piVar22 = (int *)thunk_FUN_01a59484(lVar30 + 0x11f0,
                                                *(long *)(*(long *)(*(long *)(lVar27 + 0xc0) + 8) +
                                                         0x80) + 0xa0);
            puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*piVar22 == 0) goto LAB_03554580;
            lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar27 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar27 = *(long *)puVar7;
            }
            FUN_0209b778(*(long *)(lVar27 + 0xb8) + 0x11f0,&stack0x000008a0,
                         *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
            memcpy(&stack0x00000c90,&stack0x000008a0,0x378);
            goto LAB_035529dc;
          }
          if (iVar14 == 6) {
            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            in_stack_000017a8 = FUN_0358c15c();
            lVar27 = unaff_x19[0x5d];
            if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
              thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
            }
            uVar20 = FUN_036cee6c(lVar27,0,0);
            if ((uVar20 & 1) != 0) {
              plVar45 = (long *)unaff_x19[0x5d];
              uVar21 = (**(code **)(*unaff_x19 + 0x518))();
              if (plVar45 == (long *)0x0) goto LAB_035574b8;
              (**(code **)(*plVar45 + 0x528))(plVar45,uVar21,*(undefined8 *)(*plVar45 + 0x530));
              lVar27 = unaff_x19[0x5d];
              if (lVar27 == 0) goto LAB_035574b8;
              *(int *)(lVar27 + 0x400) = (int)unaff_x19[0x80];
              FUN_0357ee30(lVar27,*(undefined4 *)((long)unaff_x19 + 0x494),0);
              plVar45 = (long *)unaff_x19[0x5d];
              if (plVar45 == (long *)0x0) goto LAB_035574b8;
              (**(code **)(*plVar45 + 0x7a8))(plVar45,0,0,*(undefined8 *)(*plVar45 + 0x7b0));
              *(undefined1 *)(unaff_x19 + 0x5f) = 1;
            }
LAB_03552b00:
            in_stack_000017c8 = CONCAT44(3,*unaff_x20);
            goto LAB_03550bd0;
          }
          if (iVar14 == 3) {
            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            goto LAB_03552550;
          }
        }
LAB_03552f54:
        if (in_stack_000017dc == 0xad) {
          if ((*in_stack_00000170 == 0) ||
             (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0)) goto LAB_035574b8;
          if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
          *(undefined1 *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
        }
        else {
          if (in_stack_000017dc == 9) {
            lVar27 = *in_stack_00000170;
            if ((lVar27 != 0) && (lVar30 = *(long *)(lVar27 + 0x38), lVar30 != 0)) {
              uVar13 = *unaff_x20;
              if (uVar13 < *(uint *)(lVar30 + 0x18)) {
                *(undefined1 *)(lVar30 + (long)(int)uVar13 * unaff_x24 + 0x194) = 0;
                *(uint *)((long)unaff_x19 + 0x4a4) = uVar13;
                lVar30 = *(long *)(lVar27 + 0x50);
                if (lVar30 != 0) {
                  if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar30 + 0x18)) {
                    lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                    *(int *)(lVar30 + 0x2c) = *(int *)(lVar30 + 0x2c) + 1;
                    goto LAB_03552fcc;
                  }
                  goto LAB_035575f4;
                }
                goto LAB_035574b8;
              }
              goto LAB_035575f4;
            }
            goto LAB_035574b8;
          }
          if (*(int *)((long)unaff_x19 + 0x644) == 1) {
            (**(code **)(*unaff_x19 + 0x898))(fVar65,fVar50);
          }
          else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
            (**(code **)(*unaff_x19 + 0x888))(fStack000000000000015c);
          }
          uVar13 = *unaff_x20;
          if ((in_stack_00000068._4_4_ & 1) != 0) {
            *(uint *)(in_stack_00000080 + 0x1f0) = uVar13;
          }
          *(uint *)((long)unaff_x19 + 0x4a4) = uVar13;
          *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
          if ((unaff_x19[0x6d] == 0) || (lVar27 = *(long *)(unaff_x19[0x6d] + 0x50), lVar27 == 0))
          goto LAB_035574b8;
          if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
          lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
          in_stack_00000068._4_4_ = 0;
          *(float *)(lVar27 + 0x60) = fVar64;
          *(float *)(lVar27 + 100) = fVar56;
        }
      }
      else {
        if (((in_stack_000017dc & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
          fVar64 = (float)uVar19;
          fVar61 = 0.0;
          if ((0.0 < fVar64) && (fVar61 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
            fVar61 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
          }
          uVar19 = (ulong)(uint)fStack00000000000000c4;
          if (fStack00000000000000c4 <
              (*(float *)(unaff_x19 + 0x97) - (*(float *)((long)unaff_x19 + 0x4cc) - fVar64)) +
              fVar61) {
            if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
              *(uint *)((long)unaff_x19 + 0x2e4) = uVar13;
            }
            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            in_stack_000017a8 = FUN_0358c15c();
            lVar27 = unaff_x19[0x5d];
            if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
              thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
            }
            uVar20 = FUN_036cee6c(lVar27,0,0);
            if ((uVar20 & 1) != 0) {
              plVar45 = (long *)unaff_x19[0x5d];
              uVar21 = (**(code **)(*unaff_x19 + 0x518))();
              if (plVar45 != (long *)0x0) {
                (**(code **)(*plVar45 + 0x528))(plVar45,uVar21,*(undefined8 *)(*plVar45 + 0x530));
                lVar27 = unaff_x19[0x5d];
                if (lVar27 != 0) {
                  *(int *)(lVar27 + 0x400) = (int)unaff_x19[0x80];
                  FUN_0357ee30(lVar27,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                  plVar45 = (long *)unaff_x19[0x5d];
                  if (plVar45 != (long *)0x0) {
                    (**(code **)(*plVar45 + 0x7a8))(plVar45,0,0,*(undefined8 *)(*plVar45 + 0x7b0));
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
        if ((((in_stack_000017dc - 0x2007 < 0x23) &&
             ((1L << ((ulong)(in_stack_000017dc - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
            (in_stack_000017dc - 10 < 2)) || (in_stack_000017dc == 0xa0)) {
LAB_03552b54:
          if (((in_stack_000017dc != 0xad) && (in_stack_000017dc != 0x200b)) &&
             (in_stack_000017dc != 0x2060)) {
            lVar27 = *in_stack_00000170;
            if ((lVar27 == 0) || (lVar30 = *(long *)(lVar27 + 0x50), lVar30 == 0))
            goto LAB_035574b8;
            if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
            lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
            *(int *)(lVar30 + 0x2c) = *(int *)(lVar30 + 0x2c) + 1;
            *(int *)(lVar27 + 0x20) = *(int *)(lVar27 + 0x20) + 1;
          }
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar19 = FUN_026b97f8(in_stack_000017dc,0);
          if ((uVar19 & 1) != 0) goto LAB_03552b54;
        }
        if (in_stack_000017dc == 0xa0) {
          if ((*in_stack_00000170 == 0) ||
             (lVar27 = *(long *)(*in_stack_00000170 + 0x50), lVar27 == 0)) goto LAB_035574b8;
          if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
          lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_03552fcc:
          *(int *)(lVar27 + 0x20) = *(int *)(lVar27 + 0x20) + 1;
        }
      }
      if (((int)unaff_x19[0x5c] == 1) && ((in_stack_000017dc == 0x2d || (unaff_w23 != 1)))) {
        if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
        fVar61 = *(float *)(unaff_x19 + 0x3d);
        iVar14 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
        if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
        fVar56 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
        lVar27 = unaff_x19[0xca];
        fVar64 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar64 = 1.0;
        }
        if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto LAB_035574b8;
        fVar59 = *(float *)((long)unaff_x19 + 0x404);
        fVar47 = *(float *)(lVar27 + 0x2c);
        fVar50 = (float)FUN_03776ea8(*(long *)(lVar27 + 0x20),0);
        fVar65 = *_fStack00000000000000a8;
        fVar50 = fVar59 * (fVar61 / (float)iVar14) * fVar56 * fVar64 * fVar47 * fVar50;
        fVar61 = *_fStack00000000000000a0;
        if ((in_stack_000017dc == 10) && (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93])
           ) {
          if ((*in_stack_00000170 == 0) ||
             (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0)) goto LAB_035574b8;
          uVar13 = *(int *)((long)unaff_x19 + 0x494) - 1;
          if (*(uint *)(lVar27 + 0x18) <= uVar13) goto LAB_035575f4;
          if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
          fVar64 = *(float *)(lVar27 + (long)(int)uVar13 * (long)iVar12 + 0x60);
          iVar14 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
          if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
          fVar59 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
          lVar27 = unaff_x19[0xca];
          fVar56 = fStack0000000000000098;
          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
            fVar56 = 1.0;
          }
          if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto LAB_035574b8;
          fVar47 = *(float *)((long)unaff_x19 + 0x404);
          fVar58 = *(float *)(lVar27 + 0x2c);
          fVar50 = (float)FUN_03776ea8(*(long *)(lVar27 + 0x20),0);
          if ((*in_stack_00000170 == 0) ||
             (lVar27 = *(long *)(*in_stack_00000170 + 0x50), lVar27 == 0)) goto LAB_035574b8;
          if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
          lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
          fVar65 = *(float *)(lVar27 + 0x60);
          fVar61 = *(float *)(lVar27 + 100);
          fVar50 = fVar47 * (fVar64 / (float)iVar14) * fVar59 * fVar56 * fVar58 * fVar50;
        }
        fVar59 = *(float *)(unaff_x19 + 0x9b);
        fVar64 = 0.0;
        fVar56 = 0.0;
        if ((0.0 < fVar59) && (fVar56 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
          fVar56 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
        }
        fVar58 = *(float *)(unaff_x19 + 0x97);
        fVar51 = *(float *)((long)unaff_x19 + 0x4cc);
        fVar47 = *(float *)(unaff_x19 + 200);
        if ((char)unaff_x19[0x1e] == '\0') {
          if ((unaff_x19[0xca] == 0) || (lVar27 = *(long *)(unaff_x19[0xca] + 0x20), lVar27 == 0))
          goto LAB_035574b8;
          FUN_03776e6c(&stack0x000008a0,lVar27,0);
          fVar64 = (float)FUN_03776cb4(&stack0x00001700,0);
        }
        puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        fVar57 = *(float *)(unaff_x19 + 0x6c);
        fVar61 = (fStack000000000000009c - fVar65) - fVar61;
        bVar9 = true;
        if ((fVar57 <= fVar61) && (bVar9 = false, !NAN(fVar57))) {
          bVar9 = fVar57 == -1.0;
        }
        if (!bVar9) {
          fVar61 = fVar57;
        }
        fVar65 = 1.0;
        if ((uVar34 & 0x18) != 0) {
          fVar65 = DAT_00d38acc;
        }
        if (((fVar58 - (fVar51 - fVar59)) + fVar56 < fStack00000000000000c4) &&
           (ABS(fVar47) + fVar50 * fVar64 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
            fVar65 * fVar61)) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_0358c4f0();
          lVar27 = *(long *)(*(long *)puVar7 + 0xb8);
          memcpy(&stack0x00000528,(void *)(lVar27 + 0x788),0x378);
          FUN_0209b210(lVar27 + 0x11f0,&stack0x00000528,
                       *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
        }
      }
      lVar27 = *in_stack_00000170;
      if ((lVar27 == 0) || (lVar30 = *(long *)(lVar27 + 0x38), lVar30 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar30 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      uVar13 = *(uint *)(unaff_x19 + 0x95);
      lVar30 = lVar30 + (long)(int)*unaff_x20 * unaff_x24;
      *(uint *)(lVar30 + 100) = uVar13;
      *(int *)(lVar30 + 0x68) = (int)unaff_x19[0x96];
      if (((unaff_w23 & 1) == 0) &&
         ((0xd < in_stack_000017dc || ((1 << (ulong)(in_stack_000017dc & 0x1f) & 0x2c00U) == 0)))) {
        lVar27 = *(long *)(lVar27 + 0x50);
        if (lVar27 == 0) goto LAB_035574b8;
LAB_0355346c:
        if (*(uint *)(lVar27 + 0x18) <= uVar13) goto LAB_035575f4;
        *(int *)(lVar27 + (long)(int)uVar13 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
      }
      else {
        lVar27 = *(long *)(lVar27 + 0x50);
        if (lVar27 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar27 + 0x18) <= uVar13) goto LAB_035575f4;
        if (*(int *)(lVar27 + (long)(int)uVar13 * 0x5c + 0x24) == 1) goto LAB_0355346c;
      }
      if (in_stack_000017dc == 9) {
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar61 = (float)FUN_03776a48(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar49 = *(float *)(unaff_x19 + 200);
        fVar64 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x21 + 0x1b9));
        fVar61 = fVar46 * fVar61 * fVar64;
        fVar64 = fVar61 * (float)(int)(fVar49 / fVar61);
        uVar19 = (ulong)(uint)fVar64;
        if (fVar64 <= fVar49) {
          fVar64 = fVar49 + fVar61;
        }
LAB_03553678:
        *(float *)(unaff_x19 + 200) = fVar64;
      }
      else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
        if ((char)unaff_x19[0x1e] == '\0') {
          if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
            fVar49 = 1.0;
          }
          else {
            fVar49 = (float)thunk_FUN_036bc400(_fStack0000000000000078,0);
          }
          fVar64 = *(float *)(unaff_x19 + 200);
          fVar56 = (float)FUN_03776cb4(&stack0x00001790,0);
          if (unaff_x19[0x20] != 0) {
            fVar61 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
            fVar64 = fVar64 + fVar61 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                       fVar46 * (fStack000000000000012c + fVar49 * fVar56) +
                                       fStack00000000000000d4 *
                                       (fStack00000000000000d0 +
                                       fVar48 + *(float *)(unaff_x19[0x20] + 0x1ac)));
            *(float *)(unaff_x19 + 200) = fVar64;
            goto joined_r0x035535c0;
          }
          goto LAB_035574b8;
        }
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar64 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                 (*(float *)((long)unaff_x19 + 0x2ac) +
                 fVar46 * fStack000000000000012c +
                 fStack00000000000000d4 *
                 (fStack00000000000000d0 + fVar48 + *(float *)(*unaff_x21 + 0x1ac)));
        uVar19 = (ulong)(uint)fVar64;
        fVar64 = *(float *)(unaff_x19 + 200) - fVar64;
        *(float *)(unaff_x19 + 200) = fVar64;
        if ((in_stack_000017dc == 0x200b) || (uVar11 != 0)) {
          fVar61 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
          uVar19 = (ulong)(uint)fVar61;
          fVar64 = fVar64 - fVar61;
          goto LAB_03553678;
        }
      }
      else {
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar61 = *(float *)(unaff_x19 + 200);
        fVar64 = fVar61 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                          (*(float *)((long)unaff_x19 + 0x2ac) +
                          (*(float *)(unaff_x19 + 0x56) - fVar49) +
                          fStack00000000000000d4 * (fVar48 + *(float *)(*unaff_x21 + 0x1ac)));
        *(float *)(unaff_x19 + 200) = fVar64;
joined_r0x035535c0:
        if ((in_stack_000017dc == 0x200b) || (uVar19 = (ulong)(uint)fVar61, uVar11 != 0)) {
          fVar61 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
          uVar19 = (ulong)(uint)fVar61;
          fVar64 = fVar64 + fVar61;
          goto LAB_03553678;
        }
      }
      lVar27 = *in_stack_00000170;
      if ((lVar27 == 0) || (lVar30 = *(long *)(lVar27 + 0x38), lVar30 == 0)) goto LAB_035574b8;
      uVar13 = *unaff_x20;
      uVar34 = (uint)*(undefined8 *)(lVar30 + 0x18);
      if (uVar34 <= uVar13) goto LAB_035575f4;
      *(float *)(lVar30 + (long)(int)uVar13 * unaff_x24 + 0x144) = fVar64;
      uVar37 = in_stack_000017dc;
      if ((int)in_stack_000017dc < 0xd) {
        if ((in_stack_000017dc - 10 < 2) || (in_stack_000017dc == 3)) goto LAB_0355371c;
LAB_03553700:
        if (((unaff_w23 & in_stack_000017dc == 0x2d) != 0) ||
           ((float)uVar13 == in_stack_00000088._4_4_)) goto LAB_0355371c;
      }
      else {
        if (1 < in_stack_000017dc - 0x2028) {
          if (in_stack_000017dc != 0xd) goto LAB_03553700;
          uVar19 = 0;
          *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
          if ((float)uVar13 != in_stack_00000088._4_4_) goto LAB_03553c8c;
        }
LAB_0355371c:
        if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
          fVar61 = *(float *)(unaff_x19 + 0x99);
          fVar64 = *(float *)(unaff_x19 + 0x9a);
          if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          fVar61 = fVar61 - fVar64;
          if (((fStack000000000000005c < ABS(fVar61)) &&
              (*(char *)((long)unaff_x19 + 0x2c4) == '\0')) &&
             (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
            FUN_0358c860(fVar61);
            *(float *)((long)unaff_x19 + 0x4c4) = *(float *)((long)unaff_x19 + 0x4c4) - fVar61;
            *(float *)(unaff_x19 + 0x9b) = fVar61 + *(float *)(unaff_x19 + 0x9b);
            puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar27 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar27 = *(long *)puVar7;
            }
            lVar30 = *(long *)(lVar27 + 0xb8);
            if (*(int *)(lVar30 + 0x7ac) == (int)unaff_x19[0x95]) {
              if (*(int *)(lVar27 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar30 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
              }
              FUN_0209b778(lVar30 + 0x11f0,&stack0x000008a0,
                           *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
              puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
              lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              memcpy((void *)(*(long *)(lVar27 + 0xb8) + 0x788),&stack0x000008a0,0x378);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        (*(long *)(lVar27 + 0xb8) + 0x818,0);
              lVar27 = *(long *)(*(long *)puVar7 + 0xb8);
              *(float *)(lVar27 + 0x7bc) = fVar61 + *(float *)(lVar27 + 0x7bc);
              *(float *)(lVar27 + 0x800) = fVar61 + *(float *)(lVar27 + 0x800);
              memcpy(&stack0x000001b0,(void *)(lVar27 + 0x788),0x378);
              FUN_0209b210(lVar27 + 0x11f0,&stack0x000001b0,
                           *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
            }
          }
        }
        fVar49 = *(float *)(unaff_x19 + 0x9b);
        *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
        fVar64 = *(float *)((long)unaff_x19 + 0x4cc) - fVar49;
        fVar61 = *(float *)((long)unaff_x19 + 0x4c4);
        if (fVar64 <= *(float *)((long)unaff_x19 + 0x4c4)) {
          fVar61 = fVar64;
        }
        *(float *)((long)unaff_x19 + 0x4c4) = fVar61;
        fVar56 = *(float *)(unaff_x19 + 0x99);
        if (in_stack_000017d4 == '\0') {
          in_stack_000017d8 = fVar61;
        }
        if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
           (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
            ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
          in_stack_000017d4 = '\x01';
        }
        lVar27 = *in_stack_00000170;
        if ((lVar27 == 0) || (lVar30 = *(long *)(lVar27 + 0x50), lVar30 == 0)) goto LAB_035574b8;
        uVar13 = *(uint *)(unaff_x19 + 0x95);
        if (*(uint *)(lVar30 + 0x18) <= uVar13) goto LAB_035575f4;
        lVar31 = unaff_x19[0x93];
        lVar36 = lVar30 + (long)(int)uVar13 * 0x5c;
        *(int *)(lVar36 + 0x34) = (int)lVar31;
        uVar34 = *(uint *)(unaff_x19 + 0x93);
        if ((int)lVar31 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
          uVar34 = *(uint *)((long)unaff_x19 + 0x49c);
        }
        *(uint *)((long)unaff_x19 + 0x49c) = uVar34;
        *(uint *)(lVar36 + 0x38) = uVar34;
        *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
        *(undefined4 *)(lVar36 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
        iVar14 = *(int *)((long)unaff_x19 + 0x49c);
        if ((int)uVar34 <= *(int *)((long)unaff_x19 + 0x4a4)) {
          iVar14 = *(int *)((long)unaff_x19 + 0x4a4);
        }
        *(int *)((long)unaff_x19 + 0x4a4) = iVar14;
        *(int *)(lVar36 + 0x40) = iVar14;
        *(int *)(lVar36 + 0x24) = (*(int *)(lVar36 + 0x3c) - *(int *)(lVar36 + 0x34)) + 1;
        *(undefined4 *)(lVar36 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
        lVar27 = *(long *)(lVar27 + 0x38);
        if (lVar27 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar27 + 0x18) <= uVar34) goto LAB_035575f4;
        uVar63 = *(undefined4 *)(lVar27 + (long)(int)uVar34 * (long)iVar12 + 0x11c);
        lVar30 = lVar30 + (long)(int)uVar13 * 0x5c;
        *(float *)(lVar30 + 0x70) = fVar64;
        *(undefined4 *)(lVar30 + 0x6c) = uVar63;
        lVar27 = *in_stack_00000170;
        if ((lVar27 == 0) || (lVar30 = *(long *)(lVar27 + 0x50), lVar30 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
        lVar27 = *(long *)(lVar27 + 0x38);
        if (lVar27 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar27 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
        fVar56 = fVar56 - fVar49;
        uVar19 = (ulong)(uint)fVar56;
        lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(undefined4 *)(lVar30 + 0x74) =
             *(undefined4 *)
              (lVar27 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x128);
        *(float *)(lVar30 + 0x78) = fVar56;
        lVar27 = *in_stack_00000170;
        if ((lVar27 == 0) || (lVar31 = *(long *)(lVar27 + 0x50), lVar31 == 0)) goto LAB_035574b8;
        lVar36 = (long)(int)*(uint *)(unaff_x19 + 0x95);
        if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
        lVar30 = lVar31 + lVar36 * 0x5c;
        *(float *)(lVar30 + 0x44) = *(float *)(lVar30 + 0x74) - fVar46 * fStack000000000000015c;
        *(float *)(lVar30 + 0x5c) = in_stack_000000f8._4_4_;
        if (*(int *)(lVar30 + 0x24) == 1) {
          *(int *)(lVar31 + lVar36 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
        }
        if ((*unaff_x21 == 0) || (lVar30 = *(long *)(lVar27 + 0x38), lVar30 == 0))
        goto LAB_035574b8;
        lVar44 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
        uVar34 = (uint)*(undefined8 *)(lVar30 + 0x18);
        if (uVar34 <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
        if ((*(char *)(lVar30 + lVar44 * unaff_x24 + 0x194) == '\0') &&
           (lVar44 = (long)(int)*(uint *)(unaff_x19 + 0x94), uVar34 <= *(uint *)(unaff_x19 + 0x94)))
        goto LAB_035575f4;
        lVar31 = lVar31 + lVar36 * 0x5c;
        fVar61 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                 (fStack00000000000000d4 *
                  (fStack00000000000000d0 + fVar48 + *(float *)(*unaff_x21 + 0x1ac)) -
                 *(float *)((long)unaff_x19 + 0x2ac));
        fVar48 = -fVar61;
        if ((char)unaff_x19[0x1e] != '\0') {
          fVar48 = fVar61;
        }
        *(float *)(lVar31 + 0x58) = *(float *)(lVar30 + lVar44 * unaff_x24 + 0x144) + fVar48;
        *(float *)(lVar31 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
        *(float *)(lVar31 + 0x54) = fVar64;
        *(float *)(lVar31 + 0x48) = in_stack_00000060 + (fVar56 - fVar64);
        *(float *)(lVar31 + 0x4c) = fVar56;
        if ((int)in_stack_000017dc < 0x2d) {
          if (in_stack_000017dc - 10 < 2) {
LAB_03553b60:
            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_0358c4f0();
            lVar27 = unaff_x19[0x6d];
            *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
            iVar14 = (int)unaff_x19[0x95] + 1;
            *(int *)(unaff_x19 + 0x95) = iVar14;
            *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
            if ((lVar27 != 0) && (*(long *)(lVar27 + 0x50) != 0)) {
              if (*(int *)(*(long *)(lVar27 + 0x50) + 0x18) <= iVar14) {
                FUN_0358ca18();
                lVar27 = unaff_x19[0x6d];
                if (lVar27 == 0) goto LAB_035574b8;
              }
              lVar27 = *(long *)(lVar27 + 0x38);
              if (lVar27 != 0) {
                if (*unaff_x20 < *(uint *)(lVar27 + 0x18)) {
                  fVar48 = *(float *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
                  if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
                    if ((in_stack_000017dc == 0x2029) || (fVar61 = 0.0, in_stack_000017dc == 10)) {
                      fVar61 = *(float *)((long)unaff_x19 + 0x2cc);
                    }
                    uVar25 = 0;
                    fVar61 = fVar48 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                             fStack0000000000000058 *
                             (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700)) +
                             fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar61) +
                             *(float *)(unaff_x19 + 0x9b);
                  }
                  else {
                    if ((in_stack_000017dc == 0x2029) || (fVar61 = 0.0, in_stack_000017dc == 10)) {
                      fVar61 = *(float *)((long)unaff_x19 + 0x2cc);
                    }
                    uVar25 = 1;
                    fVar61 = *(float *)(unaff_x19 + 0x9b) +
                             *(float *)(unaff_x19 + 0x58) +
                             fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar61);
                  }
                  *(float *)(unaff_x19 + 0x9b) = fVar61;
                  *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar25;
                  puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                  lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (*(int *)(lVar27 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar27 = *(long *)puVar7;
                  }
                  uVar18 = *(undefined8 *)(*(long *)(lVar27 + 0xb8) + 0x15a8);
                  *(float *)(unaff_x19 + 0x9a) = fVar48;
                  uVar19 = NEON_rev64(uVar18,4);
                  unaff_x19[0x99] = uVar19;
                  *(float *)(unaff_x19 + 200) =
                       *(float *)(unaff_x19 + 0x81) + 0.0 + *(float *)((long)unaff_x19 + 0x40c);
                  FUN_0358c4f0();
                  FUN_0358c4f0();
                  *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
                  in_stack_00000068._4_4_ = 1;
                  bStack0000000000000070 = 1;
                  in_stack_000017c8 = uVar21;
                  goto LAB_03550bd0;
                }
                goto LAB_035575f4;
              }
            }
            goto LAB_035574b8;
          }
          if (in_stack_000017dc == 3) {
            if (unaff_x19[0x8f] == 0) goto LAB_035574b8;
            in_stack_000017a8 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
            uVar37 = 3;
          }
        }
        else if ((in_stack_000017dc - 0x2028 < 2) || (in_stack_000017dc == 0x2d)) goto LAB_03553b60;
      }
LAB_03553c8c:
      uVar13 = *unaff_x20;
      if (uVar34 <= uVar13) goto LAB_035575f4;
      if (*(char *)(lVar30 + (long)(int)uVar13 * unaff_x24 + 0x194) != '\0') {
        lVar30 = lVar30 + (long)(int)uVar13 * unaff_x24;
        uVar20 = *(ulong *)(lVar30 + 0x11c);
        uVar19 = *(ulong *)(in_stack_00000080 + 0x230);
        *(ulong *)(in_stack_00000080 + 0x230) =
             uVar19 ^ (uVar19 ^ uVar20) &
                      ~CONCAT44(-(uint)((float)(uVar19 >> 0x20) < (float)(uVar20 >> 0x20)),
                                -(uint)((float)uVar19 < (float)uVar20));
        uVar20 = *(ulong *)(in_stack_00000080 + 0x238);
        uVar19 = *(ulong *)(lVar30 + 0x128);
        *(ulong *)(in_stack_00000080 + 0x238) =
             uVar20 ^ (uVar20 ^ uVar19) &
                      ~CONCAT44(-(uint)((float)(uVar19 >> 0x20) < (float)(uVar20 >> 0x20)),
                                -(uint)((float)uVar19 < (float)uVar20));
      }
      if (((int)unaff_x19[0x5c] == 5) &&
         ((0xd < uVar37 || ((1 << (ulong)(uVar37 & 0x1f) & 0x2c00U) == 0)))) {
        lVar30 = *(long *)(lVar27 + 0x58);
        if (lVar30 == 0) goto LAB_035574b8;
        iVar14 = (int)unaff_x19[0x96] + 1;
        if (*(int *)(lVar30 + 0x18) < iVar14) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff02b8((long *)(lVar27 + 0x58),iVar14,1,*(undefined8 *)OVRPlugin_MeshType_TypeInfo);
          lVar27 = *in_stack_00000170;
          if (lVar27 == 0) goto LAB_035574b8;
        }
        lVar30 = *(long *)(lVar27 + 0x58);
        if (lVar30 == 0) goto LAB_035574b8;
        uVar34 = *(uint *)(unaff_x19 + 0x96);
        lVar31 = (long)(int)uVar34;
        uVar13 = *(uint *)(lVar30 + 0x18);
        if (uVar13 <= uVar34) goto LAB_035575f4;
        lVar36 = lVar30 + lVar31 * 0x14;
        fVar61 = *(float *)(lVar36 + 0x30);
        uVar19 = (ulong)(uint)fVar61;
        *(undefined4 *)(lVar36 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
        fVar48 = *(float *)((long)unaff_x19 + 0x4c4);
        if (fVar61 <= *(float *)((long)unaff_x19 + 0x4c4)) {
          fVar48 = fVar61;
        }
        *(float *)(lVar36 + 0x30) = fVar48;
        uVar37 = *(uint *)((long)unaff_x19 + 0x494);
        if (uVar37 == 0 && uVar34 == 0) {
          *(uint *)(lVar30 + (ulong)uVar34 * 0x14 + 0x20) = uVar37;
        }
        else {
          uVar5 = uVar37 - 1;
          if (0 < (int)uVar37) {
            lVar27 = *(long *)(lVar27 + 0x38);
            if (lVar27 == 0) goto LAB_035574b8;
            if (*(uint *)(lVar27 + 0x18) <= uVar5) goto LAB_035575f4;
            if (uVar34 != *(uint *)(lVar27 + (ulong)uVar5 * (unaff_x24 & 0xffffffff) + 0x68)) {
              if (uVar34 - 1 < uVar13) {
                *(uint *)(lVar30 + 0x20 + (long)(int)(uVar34 - 1) * 0x14 + 4) = uVar5;
                *(uint *)(lVar30 + 0x20 + lVar31 * 0x14) = uVar37;
                goto LAB_03553d10;
              }
              goto LAB_035575f4;
            }
          }
          if ((float)uVar37 == in_stack_00000088._4_4_) {
            *(float *)(lVar30 + lVar31 * 0x14 + 0x24) = in_stack_00000088._4_4_;
          }
        }
      }
LAB_03553d10:
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (((char)unaff_x19[0x5b] == '\0') &&
         ((6 < *(uint *)(unaff_x19 + 0x5c) ||
          ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0)))) goto LAB_035542ac;
      if ((uVar11 == 0) &&
         (((in_stack_000017dc != 0x2d && (in_stack_000017dc != 0x200b)) &&
          (in_stack_000017dc != 0xad)))) {
        if (*(char *)((long)unaff_x19 + 0x2da) == '\0') {
LAB_03553ef0:
          if (((((0x2bfd < in_stack_000017dc - 0xac01) && (0xfd < in_stack_000017dc - 0x1101)) &&
               (0x1d < in_stack_000017dc - 0xa961)) || (uVar20 = FUN_03597a54(0), (uVar20 & 1) != 0)
              ) && ((((0xed < in_stack_000017dc - 0xff01 && (0x1d < in_stack_000017dc - 0xfe31)) &&
                     (0x717d < in_stack_000017dc - 0x2e81)) && (0x1fd < in_stack_000017dc - 0xf901))
                   )) goto LAB_03553f78;
          lVar27 = FUN_035978e8(0);
          if ((lVar27 == 0) || (*(long *)(lVar27 + 0x10) == 0)) goto LAB_035574b8;
          uVar13 = FUN_0219c130(*(long *)(lVar27 + 0x10),&stack0x000008a0,
                                *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
          if ((int)in_stack_00000088._4_4_ <= (int)*unaff_x20) {
            in_stack_000008a0 = in_stack_000017dc;
            if ((uVar13 & 1) == 0) {
LAB_03554270:
              if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_0358c4f0();
              goto LAB_035542a8;
            }
LAB_035541dc:
            if (uVar17 != uVar54 || ((bStack0000000000000070 ^ 0xff) & 1) != 0) goto LAB_035542ac;
            if (uVar11 != 0) goto UnityEngine_Animator__get_bodyPositionInternal;
            goto LAB_0355422c;
          }
          lVar27 = FUN_035978e8(0);
          if (((lVar27 == 0) || (*in_stack_00000170 == 0)) ||
             (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0)) goto LAB_035574b8;
          if (*(uint *)(lVar30 + 0x18) <= *unaff_x20 + 1) goto LAB_035575f4;
          if (*(long *)(lVar27 + 0x18) == 0) goto LAB_035574b8;
          in_stack_000008a0 =
               (uint)*(ushort *)(lVar30 + (long)(int)(*unaff_x20 + 1) * (long)iVar12 + 0x20);
          uVar20 = FUN_0219c130(*(long *)(lVar27 + 0x18),&stack0x000008a0,
                                *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
          if ((uVar13 & 1) != 0) goto LAB_035541dc;
          if ((uVar20 & 1) == 0) goto LAB_03554270;
          if ((bStack0000000000000070 & 1) == 0) goto LAB_035542a8;
          if (uVar11 != 0) {
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
          if ((bStack0000000000000070 & 1) == 0) goto LAB_035542a8;
UnityEngine_Animator__set_animatePhysics:
          if ((bStack0000000000000074 & 1) == 0 && in_stack_000017dc == 0xad)
          goto UnityEngine_Animator__get_bodyPositionInternal;
LAB_0355422c:
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_0358c4f0();
        }
        bStack0000000000000070 = 1;
      }
      else if (*(char *)((long)unaff_x19 + 0x2da) == '\x01') {
LAB_03553f78:
        if ((bStack0000000000000070 & 1) != 0) {
          if (uVar11 == 0) goto UnityEngine_Animator__set_animatePhysics;
UnityEngine_Animator__get_bodyPositionInternal:
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_0358c4f0();
          goto LAB_0355422c;
        }
LAB_035542a8:
        bStack0000000000000070 = 0;
      }
      else {
        if (((in_stack_000017dc - 0x2007 < 0x29) &&
            ((1L << ((ulong)(in_stack_000017dc - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
           ((in_stack_000017dc == 0xa0 || (in_stack_000017dc == 0x2060)))) goto LAB_03553ef0;
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        bStack0000000000000070 = 0;
        *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xe78) = 0xffffffff;
      }
LAB_035542ac:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0358c4f0();
      *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
      in_stack_000017c8 = uVar21;
LAB_03550bd0:
      unaff_x29 = (undefined8 *)&stack0x000008a0;
      in_stack_000017a8 = in_stack_000017a8 + 1;
      lVar27 = unaff_x19[0x8f];
      if (lVar27 != 0) {
        if ((int)in_stack_000017a8 < (int)*(uint *)(lVar27 + 0x18)) {
          if (*(uint *)(lVar27 + 0x18) <= in_stack_000017a8) goto LAB_035575f4;
          uVar11 = *(uint *)(lVar27 + (long)(int)in_stack_000017a8 * 0xc + 0x20);
          if (uVar11 == 0) goto LAB_0355459c;
          if (5 < in_stack_00000168._4_4_) {
            uVar21 = FUN_0276793c(&stack0x000017dc,0);
            uVar18 = FUN_0276793c(&stack0x000017a8,0);
            uVar21 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,uVar21,
                                  *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo,uVar18,0);
            if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
              thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
            }
            FUN_0367ae18(uVar21,0);
            in_stack_000017c8 = CONCAT44(3,*unaff_x20);
          }
          if ((*(char *)((long)unaff_x19 + 0x302) != '\0') && (uVar11 == 0x3c))
          goto code_r0x0355094c;
          if ((*in_stack_00000170 != 0) &&
             (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 != 0)) {
            if (*unaff_x20 < *(uint *)(lVar27 + 0x18)) {
              lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
              *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar27 + 0x2c);
              *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar27 + 0x58);
              unaff_x19[0x20] = *(long *)(lVar27 + 0x38);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              goto LAB_035509d4;
            }
            goto LAB_035575f4;
          }
          goto LAB_035574b8;
        }
LAB_0355459c:
        fVar48 = (float)uVar19;
        if (((char)unaff_x19[0x47] != '\0') &&
           (fVar48 = DAT_00d389f8,
           DAT_00d389f8 < *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
          fVar48 = *(float *)((long)unaff_x19 + 0x1e4);
          fVar61 = *(float *)((long)unaff_x19 + 0x254);
          if ((fVar48 < fVar61) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
            if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0) {
              *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
            }
            fVar64 = (*(float *)((long)unaff_x19 + 0x23c) - fVar48) * 0.5;
            if (fVar64 <= DAT_00d38b84) {
              fVar64 = DAT_00d38b84;
            }
            *(float *)(unaff_x19 + 0x48) = fVar48;
            fVar64 = (fVar48 + fVar64) * 20.0 + 0.5;
            fVar48 = DAT_00d38e60;
            if (fVar64 != INFINITY) {
              fVar48 = (float)(int)fVar64 / 20.0;
            }
            if (fVar61 <= fVar48) {
              fVar48 = fVar61;
            }
            goto LAB_03554658;
          }
        }
        *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
        puVar7 = PTR_DAT_03cbdf88;
        if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
          uVar21 = FUN_0276793c(_fStack0000000000000038,0);
          uVar18 = FUN_0277fa90(_fStack0000000000000040,0);
          uVar21 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,uVar21,
                                *(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo,uVar18,0);
          if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
          }
          FUN_0367a6ec(uVar21,0);
        }
        puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if ((*unaff_x20 == 0) || ((*unaff_x20 == 1 && (in_stack_000017dc == 3)))) {
          (**(code **)(*unaff_x19 + 0x918))();
          goto LAB_03554724;
        }
        lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar27 = *(long *)puVar8;
        }
        plVar45 = (long *)OVRPlugin_Media_TypeInfo;
        lVar27 = **(long **)(lVar27 + 0xb8);
        if (lVar27 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0xd1)) goto LAB_035575f4;
        iVar12 = *(int *)(lVar27 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54) << 2;
        if ((*in_stack_00000170 == 0) ||
           (lVar27 = *(long *)(*in_stack_00000170 + 0x60), lVar27 == 0)) goto LAB_035574b8;
        if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(int *)(lVar27 + 0x18) == 0) goto LAB_035575f4;
        FUN_035968e8(lVar27 + 0x20,0,0);
        if (DAT_0411f172 == '\0') {
          FUN_01ab69ac(PTR_DAT_03cbded8);
          DAT_0411f172 = '\x01';
        }
        iVar14 = (int)unaff_x19[0x4e];
        in_stack_000000f8._4_4_ = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
        uStack00000000000000e8 = *(undefined8 *)(*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
        lVar27 = unaff_x19[0xe3];
        in_stack_000000b8 = (long *)uStack00000000000000e8;
        fStack00000000000000c4 = in_stack_000000f8._4_4_;
        if (iVar14 < 0x401) {
          if (iVar14 == 0x100) {
            if (lVar27 == 0) goto LAB_035574b8;
            if (*(uint *)(lVar27 + 0x18) < 2) goto LAB_035575f4;
            uVar21 = *(undefined8 *)(lVar27 + 0x30);
            if ((int)unaff_x19[0x5c] == 5) {
              if ((*in_stack_00000170 == 0) ||
                 (lVar30 = *(long *)(*in_stack_00000170 + 0x58), lVar30 == 0)) goto LAB_035574b8;
              if (*(uint *)(lVar30 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
              fVar48 = *(float *)(lVar30 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
            }
            else {
              fVar48 = *(float *)(unaff_x19 + 0x97);
            }
            fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar27 + 0x2c);
            fVar48 = (0.0 - fVar48) - fStack0000000000000020;
          }
          else if (iVar14 == 0x200) {
            if (lVar27 == 0) goto LAB_035574b8;
            if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0)) goto LAB_035575f4;
            fStack00000000000000c4 = (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
            uVar21 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20)) * 0.5,
                              ((float)*(undefined8 *)(lVar27 + 0x24) +
                              (float)*(undefined8 *)(lVar27 + 0x30)) * 0.5);
            if ((int)unaff_x19[0x5c] == 5) {
              if ((*in_stack_00000170 == 0) ||
                 (lVar27 = *(long *)(*in_stack_00000170 + 0x58), lVar27 == 0)) goto LAB_035574b8;
              if (*(uint *)(lVar27 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
              lVar27 = lVar27 + (long)(int)uStack0000000000000030 * 0x14;
              fStack00000000000000c4 = fStack000000000000002c + 0.0 + fStack00000000000000c4;
              fVar48 = ((fStack0000000000000020 + *(float *)(lVar27 + 0x28) +
                        *(float *)(lVar27 + 0x30)) - fStack0000000000000024) * -0.5 + 0.0;
            }
            else {
              fStack00000000000000c4 = fStack000000000000002c + 0.0 + fStack00000000000000c4;
              fVar48 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x97) + in_stack_000017d8)
                       - fStack0000000000000024) * -0.5 + 0.0;
            }
          }
          else {
            if (iVar14 != 0x400) goto LAB_03554c4c;
            if (lVar27 == 0) goto LAB_035574b8;
            if (*(int *)(lVar27 + 0x18) == 0) goto LAB_035575f4;
            uVar21 = *(undefined8 *)(lVar27 + 0x24);
            if ((int)unaff_x19[0x5c] == 5) {
              if ((*in_stack_00000170 == 0) ||
                 (lVar30 = *(long *)(*in_stack_00000170 + 0x58), lVar30 == 0)) goto LAB_035574b8;
              if (*(uint *)(lVar30 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
              in_stack_000017d8 =
                   *(float *)(lVar30 + (long)(int)uStack0000000000000030 * 0x14 + 0x30);
            }
            fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar27 + 0x20);
            fVar48 = fStack0000000000000024 + (0.0 - in_stack_000017d8);
          }
LAB_03554c3c:
          in_stack_000000b8 =
               (long *)CONCAT44((float)((ulong)uVar21 >> 0x20) + 0.0,(float)uVar21 + fVar48);
        }
        else if (iVar14 == 0x800) {
          if (lVar27 == 0) goto LAB_035574b8;
          if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0)) goto LAB_035575f4;
          fVar48 = fStack000000000000002c + 0.0 +
                   (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
          in_stack_000000b8 =
               (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20)) * 0.5 + 0.0,
                                ((float)*(undefined8 *)(lVar27 + 0x24) +
                                (float)*(undefined8 *)(lVar27 + 0x30)) * 0.5 + 0.0);
          fStack00000000000000c4 = fVar48;
        }
        else {
          if (iVar14 == 0x1000) {
            if (lVar27 == 0) goto LAB_035574b8;
            if ((*(int *)(lVar27 + 0x18) != 1) && (*(int *)(lVar27 + 0x18) != 0)) {
              uVar21 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20)) * 0.5,
                                ((float)*(undefined8 *)(lVar27 + 0x24) +
                                (float)*(undefined8 *)(lVar27 + 0x30)) * 0.5);
              fStack00000000000000c4 =
                   fStack000000000000002c + 0.0 +
                   (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
              fVar48 = 0.0 - ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x9d) +
                              *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000024) * 0.5;
              goto LAB_03554c3c;
            }
            goto LAB_035575f4;
          }
          if (iVar14 == 0x2000) {
            if (lVar27 == 0) goto LAB_035574b8;
            if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0)) goto LAB_035575f4;
            fVar48 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack0000000000000020) -
                           fStack0000000000000024) * 0.5;
            in_stack_000000b8 =
                 (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
                                  (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20)) * 0.5 +
                                  0.0,((float)*(undefined8 *)(lVar27 + 0x24) +
                                      (float)*(undefined8 *)(lVar27 + 0x30)) * 0.5 + fVar48);
            fStack00000000000000c4 =
                 fStack000000000000002c + 0.0 +
                 (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
          }
        }
LAB_03554c4c:
        if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
        uVar21 = FUN_03912334(unaff_x19[0xe5],0);
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)puVar7);
        }
        uVar23 = FUN_036d35a8(uVar21,0,0);
        lVar27 = FUN_0357f060();
        if (lVar27 == 0) goto LAB_035574b8;
        FUN_036df824(lVar27,0);
        *(float *)(unaff_x19 + 0xe2) = fVar48;
        if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
        iVar14 = FUN_039117fc(unaff_x19[0xe5],0);
        if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
        fVar61 = (float)FUN_03911954(unaff_x19[0xe5],0);
        uVar63 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
        FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
        if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
        }
        if (DAT_0412df1c == '\0') {
          FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
          DAT_0412df1c = '\x01';
        }
        puVar7 = OVRPlugin_Mesh_TypeInfo;
        lVar27 = *(long *)OVRPlugin_Mesh_TypeInfo;
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar27 = *(long *)puVar7;
        }
        puVar28 = *(undefined4 **)(lVar27 + 0xb8);
        uVar19 = (ulong)(uint)puVar28[1];
        uVar20 = (ulong)(uint)puVar28[2];
        uVar55 = (ulong)(uint)puVar28[3];
        FUN_035683a4(*puVar28,uVar19,uVar20,uVar55,&stack0x000017b0,0x4000ffff,0);
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        lVar27 = *in_stack_00000170;
        if (lVar27 == 0) goto LAB_035574b8;
        uVar11 = *unaff_x20;
        if ((int)uVar11 < 1) {
          fStack00000000000000d4 = 0.0;
          iVar12 = 0;
          goto LAB_03556f00;
        }
        lVar27 = *(long *)(lVar27 + 0x38);
        fVar48 = ABS(fVar48);
        fVar64 = 1.0;
        if ((uVar23 & 1) == 0) {
          fVar64 = fVar48;
        }
        if (lVar27 == 0) goto LAB_035574b8;
        bVar10 = false;
        bVar6 = false;
        _in_stack_00000128 = 0;
        bVar9 = false;
        fStack00000000000000d4 = 0.0;
        fStack0000000000000028 = 0.0;
        in_stack_00000158 = 0.0;
        in_stack_00000068._4_4_ = 0;
        lVar30 = 0x2e0;
        fVar49 = 0.0;
        fVar46 = 0.0;
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
        uVar17 = 1;
        uVar54 = 0;
        goto LAB_03554e78;
      }
      goto LAB_035574b8;
    }
    goto LAB_035575f4;
  }
  goto LAB_035574b8;
code_r0x0355094c:
  *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
  uVar20 = FUN_03586568();
  if (((uVar20 & 1) != 0) &&
     (in_stack_000017a8 = in_stack_0000178c, in_stack_000017dc = uVar11,
     *(int *)((long)unaff_x19 + 0x644) == 0)) goto LAB_03550bd0;
LAB_035509d4:
  if ((unaff_x19[0x6d] == 0) || (lVar27 = *(long *)(unaff_x19[0x6d] + 0x38), lVar27 == 0))
  goto LAB_035574b8;
  uVar17 = *unaff_x20;
  if (*(uint *)(lVar27 + 0x18) <= uVar17) goto LAB_035575f4;
  lVar30 = (long)(int)uVar17;
  unaff_w26 = (uint)*(byte *)(lVar27 + lVar30 * unaff_x24 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
  unaff_w27 = (undefined4)unaff_x19[0x24];
  if ((uint)in_stack_000017c8 == uVar17) {
    uVar11 = (uint)((ulong)in_stack_000017c8 >> 0x20);
    *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
    if (uVar11 == 0x2026) {
      *(long *)(lVar27 + lVar30 * unaff_x24 + 0x30) = unaff_x19[0xca];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((unaff_x19[0x6d] == 0) || (lVar27 = *(long *)(unaff_x19[0x6d] + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar27 + 0x2c) = 0;
      *(long *)(lVar27 + 0x38) = unaff_x19[0xcb];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((unaff_x19[0x6d] == 0) || (lVar27 = *(long *)(unaff_x19[0x6d] + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(long *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x50) = unaff_x19[0xcc];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      uVar17 = *unaff_x20;
      if (*(uint *)(lVar27 + 0x18) <= uVar17) goto LAB_035575f4;
      unaff_w23 = 1;
      *(int *)(lVar27 + (long)(int)uVar17 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
      in_stack_000017c8 = CONCAT44(3,uVar17 + 1);
    }
    else if (uVar11 == 3) {
      if ((*unaff_x21 == 0) || (lVar31 = FUN_03568ac0(*unaff_x21,0), lVar31 == 0))
      goto LAB_035574b8;
      in_stack_00000c18 = 3;
      FUN_0219b634(lVar31,&stack0x00000c18,&stack0x000008a0,*(undefined8 *)OVRPlugin_Hand_TypeInfo);
      if (*(uint *)(lVar27 + 0x18) <= uVar17) goto LAB_035575f4;
      *(ulong *)(lVar27 + lVar30 * unaff_x24 + 0x30) = CONCAT44(in_stack_000008a4,in_stack_000008a0)
      ;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      uVar17 = *(uint *)((long)unaff_x19 + 0x494);
      unaff_w23 = 1;
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
    }
    else {
      unaff_w23 = 1;
    }
  }
  else {
    unaff_w23 = 0;
  }
  in_stack_000017dc = uVar11;
  if (((int)uVar17 < *(int *)((long)unaff_x19 + 0x324)) && (uVar11 != 3)) {
    if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= uVar17) goto LAB_035575f4;
    lVar27 = lVar27 + (long)(int)uVar17 * (long)iVar12;
    *(undefined1 *)(lVar27 + 0x194) = 0;
    *(undefined2 *)(lVar27 + 0x20) = 0x200b;
    *(undefined4 *)(lVar27 + 100) = 0;
    *unaff_x20 = uVar17 + 1;
    goto LAB_03550bd0;
  }
  iVar14 = *(int *)((long)unaff_x19 + 0x644);
  if (iVar14 == 0) {
    uVar17 = *(uint *)((long)unaff_x19 + 0x25c);
    if ((uVar17 >> 4 & 1) == 0) {
      if ((uVar17 >> 3 & 1) == 0) {
        in_stack_00000158 = 1.0;
        if ((uVar17 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar20 = FUN_026b812c(uVar11,0);
          if ((uVar20 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar11 = FUN_026b8410(uVar11,0);
            uVar11 = uVar11 & 0xffff;
            in_stack_00000158 = fStack0000000000000028;
          }
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar20 = FUN_026b8070(uVar11,0);
        in_stack_00000158 = 1.0;
        if ((uVar20 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar11 = FUN_026b8594(uVar11,0);
          goto LAB_03550fdc;
        }
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar20 = FUN_026b812c(uVar11,0);
      in_stack_00000158 = 1.0;
      if ((uVar20 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar11 = FUN_026b8410(uVar11,0);
LAB_03550fdc:
        in_stack_00000158 = 1.0;
        uVar11 = uVar11 & 0xffff;
      }
    }
    iVar14 = *(int *)((long)unaff_x19 + 0x644);
    in_stack_000017dc = uVar11;
  }
  else {
    in_stack_00000158 = 1.0;
  }
  unaff_x28 = in_stack_00000170;
  if (iVar14 != 0) {
    if (iVar14 == 1) {
      if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *in_stack_000000b8 = *(long *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x40);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(undefined4 *)((long)unaff_x19 + 0x6a4) =
           *(undefined4 *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x48);
      if ((unaff_x19[0xd3] == 0) ||
         (lVar27 = UnityEngine_Material__DisableKeyword(unaff_x19[0xd3],0), lVar27 == 0))
      goto LAB_035574b8;
      FUN_02215a88(lVar27,*(undefined4 *)((long)unaff_x19 + 0x6a4),&stack0x000008a0,
                   *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar27 = CONCAT44(in_stack_000008a4,in_stack_000008a0);
      if (lVar27 != 0) {
        if (in_stack_000017dc == 0x3c) {
          in_stack_000017dc = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
        }
        else {
          lVar30 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar30 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar30 = *(long *)puVar7;
          }
          *(undefined4 *)((long)unaff_x19 + 0x1bc) =
               *(undefined4 *)(*(long *)(lVar30 + 0xb8) + 0x68);
        }
        if (unaff_x19[0x20] == 0) goto LAB_035574b8;
        fVar48 = *(float *)(unaff_x19 + 0x3d);
        memmove(&stack0x00001720,(void *)(unaff_x19[0x20] + 0x50),0x60);
        iVar12 = FUN_03776950(&stack0x00001720,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        memmove(&stack0x00001720,(void *)(*unaff_x21 + 0x50),0x60);
        fVar64 = (float)FUN_03776960(&stack0x00001720,0);
        fVar61 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar61 = 1.0;
        }
        if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
        fVar61 = (fVar48 / (float)iVar12) * fVar64 * fVar61;
        iVar12 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
        fVar48 = *(float *)(unaff_x19 + 0x3d);
        if (iVar12 < 1) {
          if (*unaff_x21 == 0) goto LAB_035574b8;
          iVar12 = FUN_03776950(*unaff_x21 + 0x50,0);
          if (*unaff_x21 == 0) goto LAB_035574b8;
          fVar46 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
          fVar64 = fStack0000000000000098;
          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
            fVar64 = 1.0;
          }
          if (unaff_x19[0x20] == 0) goto LAB_035574b8;
          fVar49 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
          if (*(long *)(lVar27 + 0x20) == 0) goto LAB_035574b8;
          FUN_03776e6c(&stack0x000008a0,*(long *)(lVar27 + 0x20),0);
          fVar56 = (float)FUN_03776c9c(&stack0x00001700,0);
          if (*(long *)(lVar27 + 0x20) == 0) goto LAB_035574b8;
          fVar59 = *(float *)(lVar27 + 0x2c);
          fVar50 = (float)FUN_03776ea8(*(long *)(lVar27 + 0x20),0);
          if (*unaff_x21 == 0) goto LAB_035574b8;
          in_stack_00000128 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
          if (*unaff_x21 == 0) goto LAB_035574b8;
          fVar65 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
          if (*unaff_x21 == 0) goto LAB_035574b8;
          fVar58 = *(float *)((long)unaff_x19 + 0x404);
          fVar47 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
          if (unaff_x19[0x20] == 0) goto LAB_035574b8;
          unaff_s14 = fVar61 * fVar65 * fVar58 * fVar47;
          fVar64 = (fVar48 / (float)iVar12) * fVar46 * fVar64;
          fVar61 = fVar64 * (fVar49 / fVar56) * fVar59 * fVar50;
          fVar64 = fVar64 / fVar61;
          in_stack_00000128 = fVar64 * in_stack_00000128;
          fVar48 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
          unaff_s8 = fVar64 * fVar48;
        }
        else {
          if (*in_stack_000000b8 == 0) goto LAB_035574b8;
          iVar12 = FUN_03776950(*in_stack_000000b8 + 0x48,0);
          if (*in_stack_000000b8 == 0) goto LAB_035574b8;
          fVar64 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
          if (*(long *)(lVar27 + 0x20) == 0) goto LAB_035574b8;
          fVar49 = *(float *)(lVar27 + 0x2c);
          fVar46 = fStack0000000000000098;
          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
            fVar46 = 1.0;
          }
          fVar56 = (float)FUN_03776ea8(*(long *)(lVar27 + 0x20),0);
          if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
          in_stack_00000128 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
          if (*in_stack_000000b8 == 0) goto LAB_035574b8;
          fVar50 = (float)FUN_037769b0(*in_stack_000000b8 + 0x48,0);
          if (*in_stack_000000b8 == 0) goto LAB_035574b8;
          fVar65 = *(float *)((long)unaff_x19 + 0x404);
          fVar59 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
          if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
          unaff_s14 = fVar61 * fVar50 * fVar65 * fVar59;
          fVar61 = (fVar48 / (float)iVar12) * fVar64 * fVar46 * fVar49 * fVar56;
          unaff_s8 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
        }
        unaff_d11 = (ulong)(uint)fVar61;
        *in_stack_000000e0 = lVar27;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000e0,lVar27);
        if (*in_stack_00000170 == 0) goto LAB_035574b8;
        lVar27 = *(long *)(*in_stack_00000170 + 0x38);
        unaff_x29 = (undefined8 *)&stack0x000008a0;
        if (lVar27 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
        *(undefined4 *)(lVar27 + 0x2c) = 1;
        *(float *)(lVar27 + 0x160) = fVar61;
        *(long *)(lVar27 + 0x40) = *in_stack_000000b8;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((*in_stack_00000170 == 0) ||
           (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        *(long *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *unaff_x21;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        goto code_r0x03551468;
      }
      goto LAB_03550bd0;
    }
    lVar27 = *in_stack_00000170;
    unaff_s14 = 0.0;
    uVar19 = 0;
    if (in_stack_000017dc != 3 && in_stack_000017dc != 0xad) {
      uVar19 = uVar23;
    }
    if (lVar27 == 0) goto LAB_035574b8;
    in_stack_00000128 = 0.0;
    unaff_s8 = 0.0;
    unaff_d11 = uVar23;
    uVar23 = uVar19;
    uVar21 = in_stack_000017c8;
    goto LAB_035514cc;
  }
  if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *in_stack_000000e0 = *(long *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000e0);
  if (*in_stack_000000e0 == 0) goto LAB_03550bd0;
  if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *unaff_x21 = *(long *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x38);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *in_stack_00000160 = *(long *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x50);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
  goto LAB_035574b8;
  uVar17 = *unaff_x20;
  uVar11 = *(uint *)(lVar27 + 0x18);
  if (uVar11 <= uVar17) goto LAB_035575f4;
  *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar27 + (long)(int)uVar17 * unaff_x24 + 0x58)
  ;
  if (unaff_w23 != 0) {
    lVar30 = unaff_x19[0x8f];
    if (lVar30 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar30 + 0x18) <= in_stack_000017a8) goto LAB_035575f4;
    if ((*(int *)(lVar30 + (long)(int)in_stack_000017a8 * 0xc + 0x20) == 10) &&
       (uVar17 != *(uint *)(unaff_x19 + 0x93))) {
      if (uVar11 <= uVar17 - 1) goto LAB_035575f4;
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar48 = *(float *)(lVar27 + (long)(int)(uVar17 - 1) * (long)iVar12 + 0x60);
      iVar12 = FUN_03776950(*unaff_x21 + 0x50,0);
      lVar27 = *unaff_x21;
      goto joined_r0x03552c2c;
    }
  }
  if (*unaff_x21 == 0) goto LAB_035574b8;
  fVar48 = *(float *)(unaff_x19 + 0x3d);
  iVar12 = FUN_03776950(*unaff_x21 + 0x50,0);
  lVar27 = unaff_x19[0x20];
joined_r0x03552c2c:
  if (lVar27 == 0) goto LAB_035574b8;
  fVar64 = (float)FUN_03776960(lVar27 + 0x50,0);
  fVar61 = fStack0000000000000098;
  if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
    fVar61 = 1.0;
  }
  unaff_s8 = 0.0;
  in_stack_00000128 = 0.0;
  if ((unaff_w23 & in_stack_000017dc == 0x2026) == 0) {
    if (*unaff_x21 == 0) goto LAB_035574b8;
    in_stack_00000128 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    unaff_s8 = (float)FUN_037769c0(*unaff_x21 + 0x50,0);
  }
  lVar27 = unaff_x19[0xc9];
  if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto LAB_035574b8;
  fVar49 = *(float *)((long)unaff_x19 + 0x404);
  fVar56 = *(float *)(lVar27 + 0x2c);
  fVar46 = (float)FUN_03776ea8(*(long *)(lVar27 + 0x20),0);
  if (*unaff_x21 == 0) goto LAB_035574b8;
  fVar50 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
  if (*unaff_x21 == 0) goto LAB_035574b8;
  fVar65 = *(float *)((long)unaff_x19 + 0x404);
  fVar59 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
  lVar27 = unaff_x19[0x6d];
  if ((lVar27 == 0) || (lVar30 = *(long *)(lVar27 + 0x38), lVar30 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar30 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar30 = lVar30 + (long)(int)*unaff_x20 * unaff_x24;
  *(undefined4 *)(lVar30 + 0x2c) = 0;
  fVar61 = ((in_stack_00000158 * fVar48) / (float)iVar12) * fVar64 * fVar61;
  fVar46 = fVar61 * fVar49 * fVar56 * fVar46;
  unaff_d11 = (ulong)(uint)fVar46;
  *(float *)(lVar30 + 0x160) = fVar46;
  uVar11 = *(uint *)(unaff_x19 + 0x24);
  unaff_s14 = fVar61 * fVar50 * fVar65 * fVar59;
  if (uVar11 == 0) {
    fStack000000000000015c = *(float *)(unaff_x19 + 0xc3);
    unaff_x29 = (undefined8 *)&stack0x000008a0;
    goto LAB_035514b0;
  }
  lVar30 = unaff_x19[0xe1];
  unaff_x29 = (undefined8 *)&stack0x000008a0;
  if (lVar30 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar30 + 0x18) <= uVar11) goto LAB_035575f4;
  lVar30 = *(long *)(lVar30 + (long)(int)uVar11 * 8 + 0x20);
  if (lVar30 == 0) goto LAB_035574b8;
  fStack000000000000015c = *(float *)(lVar30 + 0x10c);
  goto LAB_035514b0;
LAB_03554e78:
  uVar11 = uVar17 - 1;
  if (*(uint *)(lVar27 + 0x18) <= uVar11) goto LAB_035575f4;
  if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x50), lVar31 == 0))
  goto LAB_035574b8;
  lVar44 = (long)(int)uVar11;
  lVar36 = lVar27 + lVar44 * 0x178;
  uVar13 = *(uint *)(lVar36 + 100);
  if (*(uint *)(lVar31 + 0x18) <= uVar13) goto LAB_035575f4;
  lVar42 = (long)(int)uVar13;
  lVar31 = lVar31 + lVar42 * 0x5c;
  lVar38 = *(long *)(lVar36 + 0x38);
  uVar3 = *(ushort *)(lVar36 + 0x20);
  uVar37 = *(uint *)(lVar31 + 0x3c);
  uVar34 = *(uint *)(lVar31 + 0x68);
  iVar2 = *(int *)(lVar31 + 0x20);
  iVar15 = *(int *)(lVar31 + 0x28);
  iVar16 = *(int *)(lVar31 + 0x2c);
  uVar5 = *(uint *)(lVar31 + 0x40);
  lVar36 = (long)(int)uVar5;
  fVar59 = *(float *)(lVar31 + 0x4c);
  fVar47 = *(float *)(lVar31 + 0x54);
  fVar56 = *(float *)(lVar31 + 0x58);
  fVar57 = *(float *)(lVar31 + 0x5c);
  fVar58 = *(float *)(lVar31 + 0x60);
  fVar51 = *(float *)(lVar31 + 0x6c);
  fVar60 = *(float *)(lVar31 + 0x70);
  fVar50 = *(float *)(lVar31 + 0x74);
  fVar65 = *(float *)(lVar31 + 0x78);
  uVar41 = (uint)uVar3;
  if ((int)uVar34 < 9) {
    switch(uVar34) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar58 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar56;
      }
      break;
    case 2:
LAB_03555018:
      in_stack_000000f8._4_4_ = (fVar58 + fVar57 * 0.5) - fVar56 * 0.5;
      break;
    default:
      goto switchD_03554f58_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar57 + fVar58) - fVar56;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar57 + fVar58;
      }
      break;
    case 8:
      goto switchD_03554f58_caseD_8;
    }
LAB_03555088:
    uStack00000000000000e8 = 0;
  }
  else if (uVar34 == 0x10) {
switchD_03554f58_caseD_8:
    if (uVar3 < 0xad) {
      if ((uVar3 != 3) && (uVar3 != 10)) {
LAB_03554fac:
        if (*(uint *)(lVar27 + 0x18) <= uVar37) goto LAB_035575f4;
        uVar4 = *(undefined2 *)(lVar27 + (long)(int)uVar37 * 0x178 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar23 = FUN_026b8cc4(uVar4,0);
        if ((uVar23 & 1) == 0) {
          bVar1 = (int)uVar13 < (int)unaff_x19[0x95];
        }
        else {
          bVar1 = false;
        }
        if ((fVar56 <= fVar57) && (!bVar1 && uVar34 >> 4 == 0)) {
          in_stack_000000f8._4_4_ = fVar58;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_000000f8._4_4_ = fVar57 + fVar58;
          }
          goto LAB_03555088;
        }
        if (((uVar17 == 1) || (uVar13 != uVar54)) || (uVar11 == *(uint *)((long)unaff_x19 + 0x324)))
        {
          in_stack_000000f8._4_4_ = fVar58;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_000000f8._4_4_ = fVar57 + fVar58;
          }
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          fStack0000000000000028 = (float)FUN_026b97f8(uVar41,0);
          uStack00000000000000e8 = 0;
        }
        else {
          cVar26 = (char)unaff_x19[0x1e];
          fVar58 = -fVar56;
          if (cVar26 != '\0') {
            fVar58 = fVar56;
          }
          if (*(uint *)(lVar27 + 0x18) <= uVar37) goto LAB_035575f4;
          iVar16 = (int)*(char *)(lVar27 + (long)(int)uVar37 * 0x178 + 0x194) +
                   (-iVar2 - ((uint)fStack0000000000000028 & 1)) + iVar16 + -1;
          if (iVar16 < 1) {
            fVar56 = 1.0;
            iVar16 = 1;
          }
          else {
            fVar56 = *(float *)((long)unaff_x19 + 0x2dc);
          }
          if (uVar41 == 9) {
LAB_03556e74:
            fVar56 = 1.0 - fVar56;
          }
          else {
            if (uVar41 != 0xa0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar23 = FUN_026b97f8(uVar41,0);
              cVar26 = (char)unaff_x19[0x1e];
              if ((uVar23 & 1) != 0) goto LAB_03556e74;
            }
            iVar16 = (iVar2 - (~(uint)fStack0000000000000028 & 1)) + iVar15;
          }
          fVar56 = ((fVar57 + fVar58) * fVar56) / (float)iVar16;
          if (cVar26 == '\0') {
            in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar56;
            uStack00000000000000e8 =
                 CONCAT44((float)((ulong)uStack00000000000000e8 >> 0x20) + 0.0,
                          (float)uStack00000000000000e8 + 0.0);
          }
          else {
            in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar56;
          }
        }
      }
    }
    else if (((uVar3 != 0xad) && (uVar3 != 0x200b)) && (uVar3 != 0x2060)) goto LAB_03554fac;
  }
  else if (uVar34 == 0x20) {
    fVar56 = fVar51 + fVar50;
    goto LAB_03555018;
  }
switchD_03554f58_caseD_3:
  uVar34 = (uint)*(undefined8 *)(lVar27 + 0x18);
  if (uVar34 <= uVar11) goto LAB_035575f4;
  lVar31 = lVar27 + lVar44 * 0x178;
  fVar57 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar56 = SUB84(in_stack_000000b8,0) + (float)uStack00000000000000e8;
  fVar58 = (float)((ulong)in_stack_000000b8 >> 0x20) +
           (float)((ulong)uStack00000000000000e8 >> 0x20);
  if (*(char *)(lVar31 + 0x194) == '\0') goto LAB_03555938;
  iVar15 = *(int *)(lVar27 + lVar44 * 0x178 + 0x2c);
  if (iVar15 != 0) goto LAB_0355574c;
  fVar49 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar13,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar29 = lVar27 + lVar44 * 0x178;
    *(undefined4 *)(lVar29 + 0x84) = 0;
    *(undefined4 *)(lVar29 + 0xac) = 0;
    *(undefined4 *)(lVar29 + 0xd4) = 0x3f800000;
    fVar49 = 1.0;
    break;
  case 1:
    fVar65 = *(float *)(lVar27 + lVar44 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar29 = lVar27 + lVar44 * 0x178;
      fVar50 = (in_stack_000000f8._4_4_ + fVar65) - *(float *)(in_stack_00000080 + 0x230);
      fVar65 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      goto LAB_035551cc;
    }
    lVar29 = lVar27 + lVar44 * 0x178;
    fVar50 = fVar50 - fVar51;
    *(float *)(lVar29 + 0x84) = fVar49 + (fVar65 - fVar51) / fVar50;
    *(float *)(lVar29 + 0xac) = fVar49 + (*(float *)(lVar29 + 0x98) - fVar51) / fVar50;
    *(float *)(lVar29 + 0xd4) = fVar49 + (*(float *)(lVar29 + 0xc0) - fVar51) / fVar50;
    fVar49 = fVar49 + (*(float *)(lVar29 + 0xe8) - fVar51) / fVar50;
    break;
  case 2:
    lVar29 = lVar27 + lVar44 * 0x178;
    fVar65 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
    fVar50 = (in_stack_000000f8._4_4_ + *(float *)(lVar29 + 0x70)) -
             *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
    *(float *)(lVar29 + 0x84) = fVar49 + fVar50 / fVar65;
    *(float *)(lVar29 + 0xac) =
         fVar49 + ((in_stack_000000f8._4_4_ + *(float *)(lVar29 + 0x98)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    *(float *)(lVar29 + 0xd4) =
         fVar49 + ((in_stack_000000f8._4_4_ + *(float *)(lVar29 + 0xc0)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    fVar49 = fVar49 + ((in_stack_000000f8._4_4_ + *(float *)(lVar29 + 0xe8)) -
                      *(float *)(in_stack_00000080 + 0x230)) /
                      (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar29 = lVar27 + lVar44 * 0x178;
      *(undefined4 *)(lVar29 + 0x88) = 0;
      *(undefined4 *)(lVar29 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar29 + 0xd8) = 0;
      *(undefined4 *)(lVar29 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar29 = lVar27 + lVar44 * 0x178;
      fVar65 = fVar65 - fVar60;
      fVar50 = fVar49 + (*(float *)(lVar29 + 0x74) - fVar60) / fVar65;
      fVar65 = fVar49 + (*(float *)(lVar29 + 0x9c) - fVar60) / fVar65;
      *(float *)(lVar29 + 0x88) = fVar50;
      *(float *)(lVar29 + 0xb0) = fVar65;
      *(float *)(lVar29 + 0xd8) = fVar50;
      *(float *)(lVar29 + 0x100) = fVar65;
      break;
    case 2:
      lVar29 = lVar27 + lVar44 * 0x178;
      fVar50 = fVar49 + (*(float *)(lVar29 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar29 + 0x88) = fVar50;
      fVar65 = *(float *)(unaff_x19 + 0x9c);
      fVar51 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar29 + 0xd8) = fVar50;
      fVar50 = fVar49 + (*(float *)(lVar29 + 0x9c) - fVar65) / (fVar51 - fVar65);
      *(float *)(lVar29 + 0xb0) = fVar50;
      *(float *)(lVar29 + 0x100) = fVar50;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar34 = (uint)*(undefined8 *)(lVar27 + 0x18);
    }
    if (uVar34 <= uVar11) goto LAB_035575f4;
    lVar29 = lVar27 + lVar44 * 0x178;
    fVar50 = *(float *)(lVar29 + 0x15c);
    fVar65 = (1.0 - (*(float *)(lVar29 + 0x88) + *(float *)(lVar29 + 0xb0)) * fVar50) * 0.5;
    fVar51 = fVar49 + *(float *)(lVar29 + 0x88) * fVar50 + fVar65;
    fVar49 = fVar49 + fVar65 + *(float *)(lVar29 + 0xb0) * fVar50;
    *(float *)(lVar29 + 0x84) = fVar51;
    *(float *)(lVar29 + 0xac) = fVar51;
    *(float *)(lVar29 + 0xd4) = fVar49;
    break;
  default:
    goto switchD_0355512c_default;
  }
  *(float *)(lVar27 + lVar44 * 0x178 + 0xfc) = fVar49;
switchD_0355512c_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar34 <= uVar11) goto LAB_035575f4;
    lVar29 = lVar27 + lVar44 * 0x178;
    *(undefined4 *)(lVar29 + 0x88) = 0;
    *(undefined4 *)(lVar29 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar29 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar29 + 0x100) = 0;
    break;
  case 1:
    if (uVar11 < uVar34) {
      lVar29 = lVar27 + lVar44 * 0x178;
      fVar59 = fVar59 - fVar47;
      fVar49 = (*(float *)(lVar29 + 0x74) - fVar47) / fVar59;
      fVar59 = (*(float *)(lVar29 + 0x9c) - fVar47) / fVar59;
      *(float *)(lVar29 + 0x88) = fVar49;
      goto UnityEngine_Animator__set_stabilizeFeet;
    }
    goto LAB_035575f4;
  case 2:
    if (uVar34 <= uVar11) goto LAB_035575f4;
    lVar29 = lVar27 + lVar44 * 0x178;
    fVar49 = (*(float *)(lVar29 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar29 + 0x88) = fVar49;
    fVar59 = (*(float *)(lVar29 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
    *(float *)(lVar29 + 0xb0) = fVar59;
    *(float *)(lVar29 + 0xd8) = fVar59;
    *(float *)(lVar29 + 0x100) = fVar49;
    break;
  case 3:
    if (uVar34 <= uVar11) goto LAB_035575f4;
    lVar29 = lVar27 + lVar44 * 0x178;
    fVar59 = *(float *)(lVar29 + 0x15c);
    fVar50 = (1.0 - (*(float *)(lVar29 + 0x84) + *(float *)(lVar29 + 0xd4)) / fVar59) * 0.5;
    fVar49 = *(float *)(lVar29 + 0x84) / fVar59 + fVar50;
    fVar50 = fVar50 + *(float *)(lVar29 + 0xd4) / fVar59;
    *(float *)(lVar29 + 0x88) = fVar49;
    *(float *)(lVar29 + 0xb0) = fVar50;
    *(float *)(lVar29 + 0x100) = fVar49;
    *(float *)(lVar29 + 0xd8) = fVar50;
  }
  if (uVar34 <= uVar11) goto LAB_035575f4;
  lVar29 = lVar27 + lVar44 * 0x178;
  fVar49 = *(float *)(lVar29 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar29 + 0x5c) == '\0') && ((*(byte *)(lVar27 + lVar44 * 0x178 + 400) & 1) != 0)) {
    fVar49 = -fVar49;
  }
  fVar50 = fVar48;
  if (((iVar14 == 2) || (fVar50 = fVar64, iVar14 == 1)) || (fVar50 = fVar48 / fVar61, iVar14 == 0))
  {
    fVar49 = fVar50 * fVar49;
  }
  lVar29 = lVar27 + lVar44 * 0x178;
  fVar59 = *(float *)(lVar29 + 0x88);
  fVar65 = *(float *)(lVar29 + 0x84);
  fVar50 = -2.1474836e+09;
  if (fVar65 != INFINITY) {
    fVar50 = (float)(int)fVar65;
  }
  fVar51 = *(float *)(lVar29 + 0xd4);
  fVar60 = *(float *)(lVar29 + 0xd8);
  fVar47 = -2.1474836e+09;
  if (fVar59 != INFINITY) {
    fVar47 = (float)(int)fVar59;
  }
  uVar52 = FUN_03591d3c(fVar65 - fVar50,fVar59 - fVar47);
  *(undefined4 *)(lVar29 + 0x84) = uVar52;
  if (*(uint *)(lVar27 + 0x18) <= uVar11) goto LAB_035575f4;
  fVar60 = fVar60 - fVar47;
  *(float *)(lVar29 + 0x88) = fVar49;
  uVar52 = FUN_03591d3c(fVar65 - fVar50,fVar60);
  *(undefined4 *)(lVar27 + lVar44 * 0x178 + 0xac) = uVar52;
  if (*(uint *)(lVar27 + 0x18) <= uVar11) goto LAB_035575f4;
  fVar51 = fVar51 - fVar50;
  *(float *)(lVar27 + lVar44 * 0x178 + 0xb0) = fVar49;
  fVar50 = (float)FUN_03591d3c(fVar51,fVar60);
  *(float *)(lVar29 + 0xd4) = fVar50;
  if (*(uint *)(lVar27 + 0x18) <= uVar11) goto LAB_035575f4;
  *(float *)(lVar29 + 0xd8) = fVar49;
  uVar52 = FUN_03591d3c(fVar51,fVar59 - fVar47);
  *(undefined4 *)(lVar27 + lVar44 * 0x178 + 0xfc) = uVar52;
  uVar34 = (uint)*(undefined8 *)(lVar27 + 0x18);
  if (uVar34 <= uVar11) goto LAB_035575f4;
  *(float *)(lVar27 + lVar44 * 0x178 + 0x100) = fVar49;
LAB_0355574c:
  if (((int)uVar11 < (int)unaff_x19[0x65]) &&
     ((int)fStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar13 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar34 <= uVar11) goto LAB_035575f4;
      lVar31 = lVar27 + lVar44 * 0x178;
      *(ulong *)(lVar31 + 0x70) =
           CONCAT44(fVar56 + (float)((ulong)*(undefined8 *)(lVar31 + 0x70) >> 0x20),
                    fVar57 + (float)*(undefined8 *)(lVar31 + 0x70));
      *(float *)(lVar31 + 0x78) = fVar58 + *(float *)(lVar31 + 0x78);
      *(ulong *)(lVar31 + 0x98) =
           CONCAT44(fVar56 + (float)((ulong)*(undefined8 *)(lVar31 + 0x98) >> 0x20),
                    fVar57 + (float)*(undefined8 *)(lVar31 + 0x98));
      *(float *)(lVar31 + 0xa0) = fVar58 + *(float *)(lVar31 + 0xa0);
      *(ulong *)(lVar31 + 0xc0) =
           CONCAT44(fVar56 + (float)((ulong)*(undefined8 *)(lVar31 + 0xc0) >> 0x20),
                    fVar57 + (float)*(undefined8 *)(lVar31 + 0xc0));
      *(float *)(lVar31 + 200) = fVar58 + *(float *)(lVar31 + 200);
      *(ulong *)(lVar31 + 0xe8) =
           CONCAT44(fVar56 + (float)((ulong)*(undefined8 *)(lVar31 + 0xe8) >> 0x20),
                    fVar57 + (float)*(undefined8 *)(lVar31 + 0xe8));
      *(float *)(lVar31 + 0xf0) = fVar58 + *(float *)(lVar31 + 0xf0);
      goto UnityEngine_Animator__GetAnimatorClipInfoCount;
    }
    if (((int)uVar13 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar11 < uVar34) {
        if (*(uint *)(lVar27 + lVar44 * 0x178 + 0x68) == uStack0000000000000030) {
          lVar31 = lVar27 + lVar44 * 0x178;
          *(ulong *)(lVar31 + 0x70) =
               CONCAT44(fVar56 + (float)((ulong)*(undefined8 *)(lVar31 + 0x70) >> 0x20),
                        fVar57 + (float)*(undefined8 *)(lVar31 + 0x70));
          *(float *)(lVar31 + 0x78) = fVar58 + *(float *)(lVar31 + 0x78);
          *(ulong *)(lVar31 + 0x98) =
               CONCAT44(fVar56 + (float)((ulong)*(undefined8 *)(lVar31 + 0x98) >> 0x20),
                        fVar57 + (float)*(undefined8 *)(lVar31 + 0x98));
          *(float *)(lVar31 + 0xa0) = fVar58 + *(float *)(lVar31 + 0xa0);
          *(ulong *)(lVar31 + 0xc0) =
               CONCAT44(fVar56 + (float)((ulong)*(undefined8 *)(lVar31 + 0xc0) >> 0x20),
                        fVar57 + (float)*(undefined8 *)(lVar31 + 0xc0));
          *(float *)(lVar31 + 200) = fVar58 + *(float *)(lVar31 + 200);
          *(ulong *)(lVar31 + 0xe8) =
               CONCAT44(fVar56 + (float)((ulong)*(undefined8 *)(lVar31 + 0xe8) >> 0x20),
                        fVar57 + (float)*(undefined8 *)(lVar31 + 0xe8));
          *(float *)(lVar31 + 0xf0) = fVar58 + *(float *)(lVar31 + 0xf0);
          goto UnityEngine_Animator__GetAnimatorClipInfoCount;
        }
        goto UnityEngine_Animator__GetAnimatorTransitionInfo;
      }
      goto LAB_035575f4;
    }
  }
UnityEngine_Animator__GetAnimatorTransitionInfo:
  if (uVar34 <= uVar11) goto LAB_035575f4;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbded8);
    DAT_0411f172 = '\x01';
    uVar34 = *(uint *)(lVar27 + 0x18);
  }
  puVar7 = PTR_DAT_03cbded8;
  uVar52 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar29 = lVar27 + lVar44 * 0x178;
  *(undefined8 *)(lVar29 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar29 + 0x78) = uVar52;
  if (uVar34 <= uVar11) goto LAB_035575f4;
  uVar52 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  lVar29 = lVar27 + lVar44 * 0x178;
  *(undefined8 *)(lVar29 + 0x98) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar29 + 0xa0) = uVar52;
  uVar52 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar29 + 0xc0) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar29 + 200) = uVar52;
  uVar52 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar29 + 0xe8) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar29 + 0xf0) = uVar52;
  *(undefined1 *)(lVar31 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
  if (iVar15 == 0) {
    pcVar33 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
    (*pcVar33)();
  }
  else if (iVar15 == 1) {
    pcVar33 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0355591c;
  }
LAB_03555938:
  if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar31 + 0x18) <= uVar11) goto LAB_035575f4;
  lVar31 = lVar31 + lVar44 * 0x178;
  uVar21 = *(undefined8 *)(lVar31 + 0x11c);
  *(undefined8 *)(lVar31 + 0x11c) =
       CONCAT44(fVar56 + (float)((ulong)uVar21 >> 0x20),fVar57 + (float)uVar21);
  *(float *)(lVar31 + 0x124) = fVar58 + *(float *)(lVar31 + 0x124);
  if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar31 + 0x18) <= uVar11) goto LAB_035575f4;
  lVar31 = lVar31 + lVar44 * 0x178;
  *(ulong *)(lVar31 + 0x110) =
       CONCAT44(fVar56 + (float)((ulong)*(undefined8 *)(lVar31 + 0x110) >> 0x20),
                fVar57 + (float)*(undefined8 *)(lVar31 + 0x110));
  *(float *)(lVar31 + 0x118) = fVar58 + *(float *)(lVar31 + 0x118);
  if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar31 + 0x18) <= uVar11) goto LAB_035575f4;
  lVar31 = lVar31 + lVar44 * 0x178;
  *(ulong *)(lVar31 + 0x128) =
       CONCAT44(fVar56 + (float)((ulong)*(undefined8 *)(lVar31 + 0x128) >> 0x20),
                fVar57 + (float)*(undefined8 *)(lVar31 + 0x128));
  *(float *)(lVar31 + 0x130) = fVar58 + *(float *)(lVar31 + 0x130);
  if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar31 + 0x18) <= uVar11) goto LAB_035575f4;
  lVar31 = lVar31 + lVar44 * 0x178;
  *(float *)(lVar31 + 0x134) = fVar57 + *(float *)(lVar31 + 0x134);
  *(ulong *)(lVar31 + 0x138) =
       CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar31 + 0x138) >> 0x20),
                fVar56 + (float)*(undefined8 *)(lVar31 + 0x138));
  lVar31 = *in_stack_00000170;
  if ((lVar31 == 0) || (lVar29 = *(long *)(lVar31 + 0x38), lVar29 == 0)) goto LAB_035574b8;
  uVar34 = *(uint *)(lVar29 + 0x18);
  if (uVar34 <= uVar11) goto LAB_035575f4;
  lVar39 = lVar29 + lVar44 * 0x178;
  uVar19 = CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar39 + 0x140) >> 0x20),
                    fVar57 + (float)*(undefined8 *)(lVar39 + 0x140));
  fVar50 = fVar56 + *(float *)(lVar39 + 0x150);
  uVar20 = (ulong)(uint)fVar50;
  uVar55 = CONCAT44(fVar56 + (float)((ulong)*(undefined8 *)(lVar39 + 0x148) >> 0x20),
                    fVar56 + (float)*(undefined8 *)(lVar39 + 0x148));
  *(float *)(lVar39 + 0x150) = fVar50;
  *(ulong *)(lVar39 + 0x140) = uVar19;
  *(ulong *)(lVar39 + 0x148) = uVar55;
  if (uVar13 == uVar54) {
    uVar54 = *unaff_x20 - 1;
    if (uVar11 == uVar54) goto LAB_03555b44;
  }
  else {
    lVar31 = *(long *)(lVar31 + 0x50);
    if (lVar31 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar31 + 0x18) <= uVar54) goto LAB_035575f4;
    lVar39 = (long)(int)uVar54;
    lVar40 = lVar31 + lVar39 * 0x5c;
    uVar55 = (ulong)(uint)*(float *)(lVar40 + 0x58);
    fVar50 = fVar56 + *(float *)(lVar40 + 0x54);
    uVar19 = (ulong)(uint)fVar50;
    fVar59 = fVar57 + *(float *)(lVar40 + 0x58);
    uVar20 = (ulong)(uint)fVar59;
    *(ulong *)(lVar40 + 0x4c) =
         CONCAT44(fVar56 + (float)((ulong)*(undefined8 *)(lVar40 + 0x4c) >> 0x20),
                  fVar56 + (float)*(undefined8 *)(lVar40 + 0x4c));
    *(float *)(lVar40 + 0x54) = fVar50;
    *(float *)(lVar40 + 0x58) = fVar59;
    if (uVar34 <= *(uint *)(lVar40 + 0x34)) goto LAB_035575f4;
    uVar52 = *(undefined4 *)(lVar29 + (long)(int)*(uint *)(lVar40 + 0x34) * 0x178 + 0x11c);
    lVar31 = lVar31 + lVar39 * 0x5c;
    *(float *)(lVar31 + 0x70) = fVar50;
    *(undefined4 *)(lVar31 + 0x6c) = uVar52;
    lVar31 = *in_stack_00000170;
    if ((lVar31 == 0) || (lVar29 = *(long *)(lVar31 + 0x50), lVar29 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar29 + 0x18) <= uVar54) goto LAB_035575f4;
    lVar31 = *(long *)(lVar31 + 0x38);
    if (lVar31 == 0) goto LAB_035574b8;
    uVar54 = *(uint *)(lVar29 + lVar39 * 0x5c + 0x40);
    if (*(uint *)(lVar31 + 0x18) <= uVar54) goto LAB_035575f4;
    lVar29 = lVar29 + lVar39 * 0x5c;
    *(undefined4 *)(lVar29 + 0x74) = *(undefined4 *)(lVar31 + (long)(int)uVar54 * 0x178 + 0x128);
    *(undefined4 *)(lVar29 + 0x78) = *(undefined4 *)(lVar29 + 0x4c);
    uVar54 = *unaff_x20 - 1;
LAB_03555b44:
    if (uVar11 == uVar54) {
      lVar31 = *in_stack_00000170;
      if ((lVar31 == 0) || (lVar29 = *(long *)(lVar31 + 0x50), lVar29 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar29 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar39 = lVar29 + lVar42 * 0x5c;
      uVar55 = (ulong)(uint)*(float *)(lVar39 + 0x58);
      uVar19 = CONCAT44(fVar56 + (float)((ulong)*(undefined8 *)(lVar39 + 0x4c) >> 0x20),
                        fVar56 + (float)*(undefined8 *)(lVar39 + 0x4c));
      fVar50 = fVar56 + *(float *)(lVar39 + 0x54);
      fVar57 = fVar57 + *(float *)(lVar39 + 0x58);
      uVar20 = (ulong)(uint)fVar57;
      *(ulong *)(lVar39 + 0x4c) = uVar19;
      *(float *)(lVar39 + 0x54) = fVar50;
      *(float *)(lVar39 + 0x58) = fVar57;
      lVar31 = *(long *)(lVar31 + 0x38);
      if (lVar31 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar31 + 0x18) <= *(uint *)(lVar39 + 0x34)) goto LAB_035575f4;
      uVar52 = *(undefined4 *)(lVar31 + (long)(int)*(uint *)(lVar39 + 0x34) * 0x178 + 0x11c);
      lVar29 = lVar29 + lVar42 * 0x5c;
      *(float *)(lVar29 + 0x70) = fVar50;
      *(undefined4 *)(lVar29 + 0x6c) = uVar52;
      lVar31 = *in_stack_00000170;
      if ((lVar31 == 0) || (lVar29 = *(long *)(lVar31 + 0x50), lVar29 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar29 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar31 = *(long *)(lVar31 + 0x38);
      if (lVar31 == 0) goto LAB_035574b8;
      uVar54 = *(uint *)(lVar29 + lVar42 * 0x5c + 0x40);
      if (*(uint *)(lVar31 + 0x18) <= uVar54) goto LAB_035575f4;
      lVar29 = lVar29 + lVar42 * 0x5c;
      *(undefined4 *)(lVar29 + 0x74) = *(undefined4 *)(lVar31 + (long)(int)uVar54 * 0x178 + 0x128);
      *(undefined4 *)(lVar29 + 0x78) = *(undefined4 *)(lVar29 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar23 = FUN_026b82c4(uVar41,0);
  if (((((uVar23 & 1) == 0) && (1 < uVar41 - 0x2010)) && (uVar41 != 0xad)) && (uVar41 != 0x2d)) {
    if (bVar6) {
      if (((uVar17 != 1) && ((int)uVar11 < (int)(*(uint *)(lVar27 + 0x18) - 1))) &&
         (((int)uVar11 < (int)*unaff_x20 && ((uVar41 == 0x2019 || (uVar41 == 0x27)))))) {
        if (*(uint *)(lVar27 + 0x18) <= uVar17 - 2) goto LAB_035575f4;
        uVar4 = *(undefined2 *)(lVar27 + lVar30 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar23 = FUN_026b82c4(uVar4,0);
        if ((uVar23 & 1) != 0) {
          if (*(uint *)(lVar27 + 0x18) <= uVar17) goto LAB_035575f4;
          uVar4 = *(undefined2 *)(lVar27 + lVar30 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar23 = FUN_026b82c4(uVar4,0);
          if ((uVar23 & 1) != 0) goto LAB_03555d68;
        }
      }
    }
    else {
      if (uVar17 != 1) {
LAB_0355686c:
        bVar6 = false;
        goto LAB_03555d70;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar23 = FUN_026b81f8(uVar41,0);
      if ((uVar23 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar23 = FUN_026b63d8(uVar41,0);
        if (((uVar41 != 0x200b) && ((uVar23 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0355686c;
      }
    }
    if (uVar11 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar23 = FUN_026b82c4(uVar41,0);
      iVar15 = (int)in_stack_00000128;
      if ((uVar23 & 1) == 0) goto LAB_03556070;
    }
    else {
LAB_03556070:
      iVar15 = uVar17 - 2;
    }
    lVar31 = *in_stack_00000170;
    if (lVar31 == 0) goto LAB_035574b8;
    lVar29 = *(long *)(lVar31 + 0x40);
    if (lVar29 == 0) goto LAB_035574b8;
    uVar54 = *(uint *)(lVar31 + 0x24);
    iVar16 = *(int *)(lVar29 + 0x18);
    if (iVar16 < (int)(uVar54 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar31 + 0x40),iVar16 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar31 = *in_stack_00000170;
      if (lVar31 == 0) goto LAB_035574b8;
    }
    lVar31 = *(long *)(lVar31 + 0x40);
    if (lVar31 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar31 + 0x18) <= uVar54) goto LAB_035575f4;
    lVar31 = lVar31 + (long)(int)uVar54 * 0x18;
    *(long **)(lVar31 + 0x20) = unaff_x19;
    *(float *)(lVar31 + 0x28) = in_stack_00000158;
    *(int *)(lVar31 + 0x2c) = iVar15;
    *(int *)(lVar31 + 0x30) = (iVar15 - (int)in_stack_00000158) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar31 = unaff_x19[0x6d];
    if (lVar31 == 0) goto LAB_035574b8;
    lVar29 = *(long *)(lVar31 + 0x50);
    *(int *)(lVar31 + 0x24) = *(int *)(lVar31 + 0x24) + 1;
    if (lVar29 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar29 + 0x18) <= uVar13) goto LAB_035575f4;
    lVar29 = lVar29 + lVar42 * 0x5c;
    bVar6 = false;
    fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
    *(int *)(lVar29 + 0x30) = *(int *)(lVar29 + 0x30) + 1;
  }
  else {
    if (!bVar6) {
      in_stack_00000158 = (float)uVar11;
    }
    if (uVar11 == *unaff_x20 - 1) {
      lVar31 = *in_stack_00000170;
      if (lVar31 == 0) goto LAB_035574b8;
      lVar29 = *(long *)(lVar31 + 0x40);
      if (lVar29 == 0) goto LAB_035574b8;
      uVar54 = *(uint *)(lVar31 + 0x24);
      iVar15 = *(int *)(lVar29 + 0x18);
      if (iVar15 < (int)(uVar54 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar31 + 0x40),iVar15 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar31 = *in_stack_00000170;
        if (lVar31 == 0) goto LAB_035574b8;
      }
      lVar31 = *(long *)(lVar31 + 0x40);
      if (lVar31 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar31 + 0x18) <= uVar54) goto LAB_035575f4;
      lVar31 = lVar31 + (long)(int)uVar54 * 0x18;
      *(long **)(lVar31 + 0x20) = unaff_x19;
      *(float *)(lVar31 + 0x28) = in_stack_00000158;
      *(uint *)(lVar31 + 0x2c) = uVar11;
      *(uint *)(lVar31 + 0x30) = uVar17 - (int)in_stack_00000158;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar31 = unaff_x19[0x6d];
      if (lVar31 == 0) goto LAB_035574b8;
      lVar29 = *(long *)(lVar31 + 0x50);
      *(int *)(lVar31 + 0x24) = *(int *)(lVar31 + 0x24) + 1;
      if (lVar29 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar29 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar29 = lVar29 + lVar42 * 0x5c;
      fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
      *(int *)(lVar29 + 0x30) = *(int *)(lVar29 + 0x30) + 1;
    }
LAB_03555d68:
    bVar6 = true;
  }
LAB_03555d70:
  if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 == 0))
  goto LAB_035574b8;
  uVar54 = *(uint *)(lVar31 + 0x18);
  if (uVar54 <= uVar11) goto LAB_035575f4;
  if ((*(byte *)(lVar31 + lVar44 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar10) {
LAB_03555da0:
      if (uVar54 <= uVar17 - 2) goto LAB_035575f4;
      lVar42 = *unaff_x19;
      uVar54 = *(uint *)(lVar31 + lVar30 + -0x330);
      uVar52 = *(undefined4 *)(lVar31 + lVar30 + -0x2f8);
LAB_035562ec:
      pcVar33 = *(code **)(lVar42 + 0x8d8);
LAB_035562f4:
      uVar55 = (ulong)uVar54;
      uVar19 = (ulong)(uint)_bStack0000000000000070;
      uVar20 = (ulong)_bStack0000000000000074;
      (*pcVar33)(fStack0000000000000078,uVar19,uVar20,uVar55,fStack0000000000000104,0,
                 in_stack_00000088._4_4_,uVar52);
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar31 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar31 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar31 = *(long *)puVar7;
      }
LAB_03556348:
      bVar10 = false;
      fVar46 = 0.0;
      fStack0000000000000104 = *(float *)(*(long *)(lVar31 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
    else {
LAB_03556254:
      bVar10 = false;
    }
  }
  else {
    lVar31 = lVar31 + lVar44 * 0x178;
    iVar15 = *(int *)(lVar31 + 0x68);
    *(int *)(lVar31 + 0x16c) = iVar12;
    if ((((int)unaff_x19[0x65] < (int)uVar11) || ((int)unaff_x19[0x66] < (int)uVar13)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar15 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar23 = FUN_026b63d8(uVar41,0);
    if ((uVar41 != 0x200b) && ((uVar23 & 1) == 0)) {
      lVar31 = *in_stack_00000170;
      if ((lVar31 == 0) || (lVar42 = *(long *)(lVar31 + 0x38), lVar42 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar42 + 0x18) <= uVar11) goto LAB_035575f4;
      fVar50 = *(float *)(lVar42 + lVar44 * 0x178 + 0x160);
      if (fVar46 <= fVar50) {
        fVar46 = fVar50;
      }
      if (fStack0000000000000100 <= ABS(fVar49)) {
        fStack0000000000000100 = ABS(fVar49);
      }
      if (iVar15 != in_stack_00000068._4_4_) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar31 = *in_stack_00000170;
          if (lVar31 == 0) goto LAB_035574b8;
          lVar42 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar42 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar42 + 0x15a8);
      }
      lVar31 = *(long *)(lVar31 + 0x38);
      if (lVar31 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar31 + 0x18) <= uVar11) goto LAB_035575f4;
      if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
      fVar59 = *(float *)(lVar31 + lVar44 * 0x178 + 0x14c);
      fVar50 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar59 = fVar59 + fVar46 * fVar50;
      if (fVar59 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar59;
      }
      uVar19 = (ulong)(uint)fStack0000000000000104;
      in_stack_00000068._4_4_ = iVar15;
    }
    if (!bVar10) {
      bVar10 = false;
      if ((((uVar41 == 0xd) || ((uVar41 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar11)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_03556364;
      if (uVar11 == uVar5) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar23 = FUN_026b97f8(uVar41,0);
        if ((uVar23 & 1) != 0) goto LAB_03556254;
      }
      if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar31 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar31 = lVar31 + lVar44 * 0x178;
      in_stack_00000088._4_4_ = *(float *)(lVar31 + 0x160);
      fStack0000000000000078 = *(float *)(lVar31 + 0x11c);
      uVar20 = (ulong)(uint)fStack0000000000000078;
      bVar10 = fVar46 != 0.0;
      fVar50 = in_stack_00000088._4_4_;
      if (bVar10) {
        fVar50 = fVar46;
      }
      fVar46 = fVar50;
      uVar63 = *(undefined4 *)(lVar31 + 0x168);
      _bStack0000000000000074 = 0;
      fVar50 = fVar49;
      if (bVar10) {
        fVar50 = fStack0000000000000100;
      }
      uVar19 = (ulong)(uint)fVar50;
      _bStack0000000000000070 = fStack0000000000000104;
      fStack0000000000000100 = fVar50;
    }
    if (*unaff_x20 == 1) {
      if ((*in_stack_00000170 != 0) && (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 != 0))
      {
        if (uVar11 < *(uint *)(lVar31 + 0x18)) {
          lVar31 = lVar31 + lVar44 * 0x178;
          lVar42 = *unaff_x19;
          uVar54 = *(uint *)(lVar31 + 0x128);
          uVar52 = *(undefined4 *)(lVar31 + 0x160);
          goto LAB_035562ec;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if ((uVar11 == uVar37) || ((int)uVar5 <= (int)uVar11)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar23 = FUN_026b63d8(uVar41,0);
      if ((*in_stack_00000170 != 0) && (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 != 0))
      {
        lVar42 = lVar44;
        uVar54 = uVar11;
        if (uVar41 == 0x200b || (uVar23 & 1) != 0) {
          lVar42 = lVar36;
          uVar54 = uVar5;
        }
        if (uVar54 < *(uint *)(lVar31 + 0x18)) {
          lVar31 = lVar31 + lVar42 * 0x178;
          uVar54 = *(uint *)(lVar31 + 0x128);
          uVar52 = *(undefined4 *)(lVar31 + 0x160);
          pcVar33 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_035562f4;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 != 0))
      {
        uVar54 = *(uint *)(lVar31 + 0x18);
        goto LAB_03555da0;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar11 < (int)(*unaff_x20 - 1)) {
      if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar31 + 0x18) <= uVar17) goto LAB_035575f4;
      uVar23 = FUN_03567ad8(uVar63,*(undefined4 *)(lVar31 + lVar30),0);
      if ((uVar23 & 1) == 0) {
        if ((*in_stack_00000170 != 0) &&
           (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 != 0)) {
          if (uVar11 < *(uint *)(lVar31 + 0x18)) {
            lVar31 = lVar31 + lVar44 * 0x178;
            uVar55 = (ulong)*(uint *)(lVar31 + 0x128);
            uVar20 = (ulong)_bStack0000000000000074;
            uVar19 = (ulong)(uint)_bStack0000000000000070;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fStack0000000000000078,uVar19,uVar20,uVar55,fStack0000000000000104,0,
                       in_stack_00000088._4_4_,*(undefined4 *)(lVar31 + 0x160));
            puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar31 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar31 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar31 = *(long *)puVar7;
            }
            goto LAB_03556348;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
    }
    bVar10 = true;
  }
LAB_03556364:
  if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar31 + 0x18) <= uVar11) goto LAB_035575f4;
  if (lVar38 == 0) goto LAB_035574b8;
  uVar54 = *(uint *)(lVar31 + lVar44 * 0x178 + 400);
  fVar50 = (float)FUN_03776a30(lVar38 + 0x50,0);
  if ((uVar54 >> 6 & 1) == 0) {
    if ((_in_stack_00000128 & 0x100000000) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar31 + 0x18) <= uVar17 - 2) goto LAB_035575f4;
      uVar54 = *(uint *)(lVar31 + lVar30 + -0x330);
      fVar56 = *(float *)(lVar31 + lVar30 + -0x30c);
      pcVar33 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
      uVar55 = (ulong)uVar54;
      uVar19 = (ulong)(uint)fStack000000000000009c;
      uVar20 = (ulong)(uint)fStack0000000000000098;
      (*pcVar33)(fStack00000000000000a0,uVar19,uVar20,uVar55,
                 fStack00000000000000a8 * fVar50 + fVar56,0,fStack00000000000000a8,
                 fStack00000000000000a8);
    }
LAB_03556948:
    _in_stack_00000128 = _in_stack_00000128 & 0xffffffff;
  }
  else {
    lVar31 = *in_stack_00000170;
    if ((lVar31 == 0) || (lVar42 = *(long *)(lVar31 + 0x38), lVar42 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar42 + 0x18) <= uVar11) goto LAB_035575f4;
    *(int *)(lVar42 + lVar44 * 0x178 + 0x174) = iVar12;
    if ((((int)unaff_x19[0x65] < (int)uVar11) || ((int)unaff_x19[0x66] < (int)uVar13)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar42 + lVar44 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar41 == 0xd) || ((uVar41 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar11)) ||
       ((_in_stack_00000128 & 0x100000000) != 0 || !bVar1)) {
LAB_035564e8:
      if ((_in_stack_00000128 & 0x100000000) == 0) goto LAB_03556948;
    }
    else {
      if (uVar11 == uVar5) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar23 = FUN_026b97f8(uVar41,0);
        if ((uVar23 & 1) != 0) goto LAB_035564e8;
        lVar31 = *in_stack_00000170;
        if (lVar31 == 0) goto LAB_035574b8;
      }
      lVar31 = *(long *)(lVar31 + 0x38);
      if (lVar31 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar31 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar31 = lVar31 + lVar44 * 0x178;
      fStack0000000000000040 = *(float *)(lVar31 + 0x60);
      fStack0000000000000038 = *(float *)(lVar31 + 0x14c);
      uVar19 = (ulong)(uint)fStack0000000000000038;
      fStack00000000000000a0 = *(float *)(lVar31 + 0x11c);
      uVar20 = (ulong)(uint)fStack00000000000000a0;
      fStack00000000000000a8 = *(float *)(lVar31 + 0x160);
      fStack000000000000009c = fVar50 * fStack00000000000000a8 + fStack0000000000000038;
      fStack0000000000000098 = 0.0;
    }
    uVar54 = *unaff_x20;
    if (uVar54 == 1) {
LAB_03556628:
      if ((*in_stack_00000170 != 0) && (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 != 0))
      {
        if (uVar11 < *(uint *)(lVar31 + 0x18)) {
          lVar31 = lVar31 + lVar44 * 0x178;
          lVar36 = *unaff_x19;
          uVar54 = *(uint *)(lVar31 + 0x128);
          fVar56 = *(float *)(lVar31 + 0x14c);
LAB_03556654:
          pcVar33 = *(code **)(lVar36 + 0x8d8);
          goto LAB_03556914;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (uVar11 == uVar37) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar23 = FUN_026b63d8(uVar41,0);
      if ((*in_stack_00000170 != 0) && (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 != 0))
      {
        uVar54 = *(uint *)(lVar31 + 0x18);
        if (uVar41 == 0x200b || (uVar23 & 1) != 0) {
          if (uVar54 <= uVar5) goto LAB_035575f4;
        }
        else {
FUN_035568e8:
          lVar36 = lVar44;
          if (uVar54 <= uVar11) goto LAB_035575f4;
        }
LAB_035568f0:
        lVar31 = lVar31 + lVar36 * 0x178;
        fVar56 = *(float *)(lVar31 + 0x14c);
        uVar54 = *(uint *)(lVar31 + 0x128);
        pcVar33 = *(code **)(*unaff_x19 + 0x8d8);
        goto LAB_03556914;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar11 < (int)uVar54) {
      lVar31 = *in_stack_00000170;
      if ((lVar31 != 0) && (lVar42 = *(long *)(lVar31 + 0x38), lVar42 != 0)) {
        if (uVar17 < *(uint *)(lVar42 + 0x18)) {
          if (*(float *)(lVar42 + lVar30 + -0x108) == fStack0000000000000040) {
            fVar59 = *(float *)(lVar42 + lVar30 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar19 = (ulong)(uint)fStack0000000000000038;
            uVar23 = FUN_03567bac(fVar56 + fVar59,uVar19,0);
            if ((uVar23 & 1) != 0) {
              uVar54 = *unaff_x20;
              goto LAB_03556744;
            }
            lVar31 = *in_stack_00000170;
            if (lVar31 == 0) goto LAB_035574b8;
          }
          lVar31 = *(long *)(lVar31 + 0x38);
          if (lVar31 != 0) {
            uVar54 = *(uint *)(lVar31 + 0x18);
            if ((int)uVar11 <= (int)uVar5) goto FUN_035568e8;
            if (uVar5 < uVar54) goto LAB_035568f0;
            goto LAB_035575f4;
          }
          goto LAB_035574b8;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
LAB_03556744:
    if ((int)uVar11 < (int)uVar54) {
      iVar15 = FUN_036d3364(lVar38,0);
      if (*(uint *)(lVar27 + 0x18) <= uVar17) goto LAB_035575f4;
      lVar31 = *(long *)(lVar27 + lVar30 + -0x130);
      if (lVar31 == 0) goto LAB_035574b8;
      iVar16 = FUN_036d3364(lVar31,0);
      if (iVar15 != iVar16) goto LAB_03556628;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 != 0))
      {
        if (uVar17 - 2 < *(uint *)(lVar31 + 0x18)) {
          lVar36 = *unaff_x19;
          uVar54 = *(uint *)(lVar31 + lVar30 + -0x330);
          fVar56 = *(float *)(lVar31 + lVar30 + -0x30c);
          goto LAB_03556654;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    _in_stack_00000128 = CONCAT44(1,in_stack_00000128);
  }
  if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 == 0))
  goto LAB_035574b8;
  uVar54 = (uint)*(undefined8 *)(lVar31 + 0x18);
  if (uVar54 <= uVar11) goto LAB_035575f4;
  if ((*(byte *)(lVar31 + lVar44 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar9) {
      uVar20 = (ulong)uStack00000000000000c0;
      uVar19 = (ulong)(uint)fStack00000000000000dc;
      uVar55 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar19,uVar20,uVar55,fStack00000000000000d0,uVar20);
    }
LAB_035569b4:
    bVar9 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar11) || ((int)unaff_x19[0x66] < (int)uVar13)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar31 + lVar44 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar9) {
      if ((((uVar41 == 0xd) || ((uVar41 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar11)) || (!bVar1)
         ) goto LAB_035569b4;
      if (uVar11 == uVar5) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar23 = FUN_026b97f8(uVar41,0);
        if ((uVar23 & 1) != 0) goto LAB_035569b4;
      }
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar36 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar36 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar36 = *(long *)puVar7;
      }
      if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 == 0))
      goto LAB_035574b8;
      uVar54 = (uint)*(undefined8 *)(lVar31 + 0x18);
      if (uVar54 <= uVar11) goto LAB_035575f4;
      lVar36 = *(long *)(lVar36 + 0xb8);
      lVar38 = lVar31 + lVar44 * 0x178;
      in_stack_000017b8 = *(undefined8 *)(lVar38 + 0x184);
      in_stack_000017b0 = *(undefined8 *)(lVar38 + 0x17c);
      fStack00000000000000d8 = *(float *)(lVar36 + 0x1598);
      fStack00000000000000dc = *(float *)(lVar36 + 0x159c);
      in_stack_000017c0 = *(float *)(lVar38 + 0x18c);
      fStack00000000000000c8 = *(float *)(lVar36 + 0x15a0);
      fStack00000000000000d0 = *(float *)(lVar36 + 0x15a4);
      uStack00000000000000c0 = 0;
    }
    if (uVar54 <= uVar11) goto LAB_035575f4;
    lVar31 = lVar31 + lVar44 * 0x178;
    fVar50 = *(float *)(lVar31 + 0x128);
    fVar47 = *(float *)(lVar31 + 0x188);
    uVar18 = *(undefined8 *)(lVar31 + 0x17c);
    fVar51 = *(float *)(lVar31 + 0x184);
    uVar21 = *(undefined8 *)(lVar31 + 0x184);
    fVar58 = *(float *)(lVar31 + 0x18c);
    fVar56 = *(float *)(lVar31 + 0x11c);
    fVar65 = *(float *)(lVar31 + 0x148);
    fVar59 = *(float *)(lVar31 + 0x150);
    in_stack_00000178 = uVar18;
    fStack0000000000000180 = fVar51;
    fStack0000000000000184 = fVar47;
    in_stack_00000188 = fVar58;
    in_stack_00000190 = in_stack_000017b0;
    in_stack_00000198 = in_stack_000017b8;
    in_stack_000001a0 = in_stack_000017c0;
    uVar23 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
    lVar31 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if ((uVar23 & 1) == 0) {
      if (*(int *)(lVar31 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar31);
      }
      fVar50 = fVar50 + (float)in_stack_000017b8;
      uVar20 = (ulong)(uint)fVar50;
      fVar56 = fVar56 - (float)((ulong)in_stack_000017b0 >> 0x20);
      fVar59 = fVar59 - in_stack_000017c0;
      uVar19 = (ulong)(uint)fVar59;
      fVar65 = fVar65 + (float)((ulong)in_stack_000017b8 >> 0x20);
      uVar55 = (ulong)(uint)fVar65;
      if (fVar56 <= fStack00000000000000d8) {
        fStack00000000000000d8 = fVar56;
      }
      if (fVar59 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar59;
      }
      if (fStack00000000000000c8 <= fVar50) {
        fStack00000000000000c8 = fVar50;
      }
      if (fStack00000000000000d0 <= fVar65) {
        fStack00000000000000d0 = fVar65;
      }
    }
    else {
      if (*(int *)(lVar31 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar31);
      }
      fVar56 = (fVar56 + (fStack00000000000000c8 - (float)in_stack_000017b8)) * 0.5;
      uVar55 = (ulong)(uint)fVar56;
      if (fVar59 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar59;
      }
      uVar19 = (ulong)(uint)fStack00000000000000dc;
      uVar20 = (ulong)uStack00000000000000c0;
      if (fStack00000000000000d0 <= fVar65) {
        fStack00000000000000d0 = fVar65;
      }
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar19,uVar20,uVar55,fStack00000000000000d0,uVar20);
      fStack00000000000000dc = fVar59 - fVar58;
      fStack00000000000000c8 = fVar50 + fVar51;
      uStack00000000000000c0 = 0;
      fStack00000000000000d0 = fVar65 + fVar47;
      fStack00000000000000d8 = fVar56;
      in_stack_000017b0 = uVar18;
      in_stack_000017b8 = uVar21;
      in_stack_000017c0 = fVar58;
    }
    if (((*unaff_x20 == 1) || (uVar11 == uVar37)) || (((int)uVar5 <= (int)uVar11 || (!bVar1)))) {
      uVar20 = (ulong)uStack00000000000000c0;
      uVar19 = (ulong)(uint)fStack00000000000000dc;
      uVar55 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar19,uVar20,uVar55,fStack00000000000000d0,uVar20);
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
  }
  uVar11 = *unaff_x20;
  lVar30 = lVar30 + 0x178;
  _in_stack_00000128 = CONCAT44(fStack000000000000012c,(int)in_stack_00000128 + 1);
  bVar1 = (int)uVar11 <= (int)uVar17;
  uVar17 = uVar17 + 1;
  uVar54 = uVar13;
  if (bVar1) goto FUN_03556ed8;
  goto LAB_03554e78;
FUN_03556ed8:
  lVar27 = *in_stack_00000170;
  if (lVar27 != 0) {
    iVar12 = uVar13 + 1;
    plVar45 = (long *)OVRPlugin_Media_TypeInfo;
LAB_03556f00:
    *(uint *)(lVar27 + 0x18) = uVar11;
    lVar30 = unaff_x19[0xd4];
    *(int *)(lVar27 + 0x2c) = iVar12;
    if ((int)uVar11 < 1 || fStack00000000000000d4 == 0.0) {
      fStack00000000000000d4 = 1.4013e-45;
    }
    *(int *)(lVar27 + 0x1c) = (int)lVar30;
    *(float *)(lVar27 + 0x24) = fStack00000000000000d4;
    *(int *)(lVar27 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar23 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar23 & 1) == 0)) {
LAB_03554724:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar27 = unaff_x19[0xdf];
    if (lVar27 != 0) {
      (**(code **)(lVar27 + 0x18))
                (*(undefined8 *)(lVar27 + 0x40),*in_stack_00000170,*(undefined8 *)(lVar27 + 0x28));
    }
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    iVar12 = FUN_03911ee4(unaff_x19[0xe5],0);
    if (iVar12 != 0x19) {
      lVar27 = unaff_x19[0xe5];
      if (lVar27 == 0) goto LAB_035574b8;
      uVar11 = FUN_03911ee4(lVar27,0);
      FUN_03911f20(lVar27,uVar11 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x60), lVar27 == 0))
      goto LAB_035574b8;
      if (*(int *)(*plVar45 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar27 + 0x18) == 0) goto LAB_035575f4;
      FUN_03596b20(lVar27 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar27 = *(long *)(unaff_x19[0x6d] + 0x60), lVar27 != 0)) {
        if (*(int *)(lVar27 + 0x18) == 0) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar27 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar27 = *(long *)(unaff_x19[0x6d] + 0x60), lVar27 != 0)) {
            if (*(int *)(lVar27 + 0x18) == 0) goto LAB_035575f4;
            if (unaff_x19[0x74] != 0) {
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar27 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar27 = *(long *)(unaff_x19[0x6d] + 0x60), lVar27 != 0)) {
                if (*(int *)(lVar27 + 0x18) == 0) goto LAB_035575f4;
                if (unaff_x19[0x74] != 0) {
                  FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar27 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar27 = *(long *)(unaff_x19[0x6d] + 0x60), lVar27 != 0)) {
                    if (*(int *)(lVar27 + 0x18) == 0) goto LAB_035575f4;
                    if (unaff_x19[0x74] != 0) {
                      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar27 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_036aa280(unaff_x19[0x74],0);
                        if (unaff_x19[0xe4] != 0) {
                          FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
                          if (unaff_x19[0xe4] != 0) {
                            uVar21 = FUN_0390ef60(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar11 = FUN_0390ed3c(unaff_x19[0xe4],0);
                              lVar27 = *in_stack_00000170;
                              if (lVar27 != 0) {
                                lVar31 = 0;
                                lVar30 = 0;
                                do {
                                  uVar23 = lVar30 + 1;
                                  if ((long)*(int *)(lVar27 + 0x34) <= (long)uVar23)
                                  goto LAB_03554724;
                                  lVar27 = *(long *)(lVar27 + 0x60);
                                  if (lVar27 == 0) break;
                                  if (*(int *)(*plVar45 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  if (*(uint *)(lVar27 + 0x18) <= uVar23) goto LAB_035575f4;
                                  FUN_03596a20(lVar27 + lVar31 + 0x70,0);
                                  lVar27 = unaff_x19[0xe1];
                                  if (lVar27 == 0) break;
                                  if (*(uint *)(lVar27 + 0x18) <= uVar23) goto LAB_035575f4;
                                  uVar18 = *(undefined8 *)(lVar27 + lVar30 * 8 + 0x28);
                                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar24 = FUN_036d35a8(uVar18,0,0);
                                  if ((uVar24 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                      if ((*in_stack_00000170 == 0) ||
                                         (lVar27 = *(long *)(*in_stack_00000170 + 0x60), lVar27 == 0
                                         )) break;
                                      if (*(int *)(*plVar45 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      if (*(uint *)(lVar27 + 0x18) <= uVar23) goto LAB_035575f4;
                                      FUN_03596b20(lVar27 + lVar31 + 0x70,1,0);
                                    }
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar23) goto LAB_035575f4;
                                    lVar27 = *(long *)(lVar27 + lVar30 * 8 + 0x28);
                                    if (lVar27 == 0) break;
                                    lVar27 = UnityEngine_Material__GetColorArray(lVar27,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar36 = *(long *)(*in_stack_00000170 + 0x60), lVar36 == 0))
                                    break;
                                    if (*(uint *)(lVar36 + 0x18) <= uVar23) goto LAB_035575f4;
                                    if (lVar27 == 0) break;
                                    FUN_036a460c(lVar27,*(undefined8 *)(lVar36 + lVar31 + 0x80),0);
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar23) goto LAB_035575f4;
                                    lVar27 = *(long *)(lVar27 + lVar30 * 8 + 0x28);
                                    if (lVar27 == 0) break;
                                    lVar27 = UnityEngine_Material__GetColorArray(lVar27,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar36 = *(long *)(*in_stack_00000170 + 0x60), lVar36 == 0))
                                    break;
                                    if (*(uint *)(lVar36 + 0x18) <= uVar23) goto LAB_035575f4;
                                    if (lVar27 == 0) break;
                                    FUN_036a4810(lVar27,*(undefined8 *)(lVar36 + lVar31 + 0x98),0);
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar23) goto LAB_035575f4;
                                    lVar27 = *(long *)(lVar27 + lVar30 * 8 + 0x28);
                                    if (lVar27 == 0) break;
                                    lVar27 = UnityEngine_Material__GetColorArray(lVar27,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar36 = *(long *)(*in_stack_00000170 + 0x60), lVar36 == 0))
                                    break;
                                    if (*(uint *)(lVar36 + 0x18) <= uVar23) goto LAB_035575f4;
                                    if (lVar27 == 0) break;
                                    FUN_036a48bc(lVar27,*(undefined8 *)(lVar36 + lVar31 + 0xa0),0);
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar23) goto LAB_035575f4;
                                    lVar27 = *(long *)(lVar27 + lVar30 * 8 + 0x28);
                                    if (lVar27 == 0) break;
                                    lVar27 = UnityEngine_Material__GetColorArray(lVar27,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar36 = *(long *)(*in_stack_00000170 + 0x60), lVar36 == 0))
                                    break;
                                    if (*(uint *)(lVar36 + 0x18) <= uVar23) goto LAB_035575f4;
                                    if (lVar27 == 0) break;
                                    FUN_036a4e24(lVar27,*(undefined8 *)(lVar36 + lVar31 + 0xa8),0);
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar23) goto LAB_035575f4;
                                    lVar27 = *(long *)(lVar27 + lVar30 * 8 + 0x28);
                                    if ((lVar27 == 0) ||
                                       (lVar27 = UnityEngine_Material__GetColorArray(lVar27,0),
                                       lVar27 == 0)) break;
                                    FUN_036aa280(lVar27,0);
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar23) goto LAB_035575f4;
                                    lVar27 = *(long *)(lVar27 + lVar30 * 8 + 0x28);
                                    if (lVar27 == 0) break;
                                    lVar27 = FUN_037b514c(lVar27,0);
                                    lVar36 = unaff_x19[0xe1];
                                    if (lVar36 == 0) break;
                                    if (*(uint *)(lVar36 + 0x18) <= uVar23) goto LAB_035575f4;
                                    lVar36 = *(long *)(lVar36 + lVar30 * 8 + 0x28);
                                    if ((lVar36 == 0) ||
                                       (uVar18 = UnityEngine_Material__GetColorArray(lVar36,0),
                                       lVar27 == 0)) break;
                                    FUN_0390f3a4(lVar27,uVar18,0);
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar23) goto LAB_035575f4;
                                    lVar27 = *(long *)(lVar27 + lVar30 * 8 + 0x28);
                                    if ((lVar27 == 0) ||
                                       (lVar27 = FUN_037b514c(lVar27,0), lVar27 == 0)) break;
                                    FUN_0390eec8(uVar21,uVar19,uVar20,uVar55,lVar27,0);
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar23) goto LAB_035575f4;
                                    lVar27 = *(long *)(lVar27 + lVar30 * 8 + 0x28);
                                    if ((lVar27 == 0) ||
                                       (lVar27 = FUN_037b514c(lVar27,0), lVar27 == 0)) break;
                                    FUN_0390ed78(lVar27,uVar11 & 1,0);
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar23) goto LAB_035575f4;
                                    plVar43 = *(long **)(lVar27 + lVar30 * 8 + 0x28);
                                    uVar17 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar43 == (long *)0x0) break;
                                    (**(code **)(*plVar43 + 0x2c8))
                                              (plVar43,uVar17 & 1,*(undefined8 *)(*plVar43 + 0x2d0))
                                    ;
                                  }
                                  lVar27 = *in_stack_00000170;
                                  lVar30 = lVar30 + 1;
                                  lVar31 = lVar31 + 0x50;
                                } while (lVar27 != 0);
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


