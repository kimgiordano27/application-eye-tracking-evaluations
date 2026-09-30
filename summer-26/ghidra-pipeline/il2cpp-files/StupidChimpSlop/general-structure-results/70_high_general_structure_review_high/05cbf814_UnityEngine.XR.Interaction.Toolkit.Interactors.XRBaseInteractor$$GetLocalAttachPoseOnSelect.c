/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor$$GetLocalAttachPoseOnSelect
ENTRY_POINT: 05cbf814
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_9;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;negative_framework_namespace_without_eye_use_flow
*/


/* WARNING: Type propagation algorithm not settling */

void UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__GetLocalAttachPoseOnSelect
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,undefined1 *param_4,
               undefined1 *param_5)

{
  bool bVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined *puVar9;
  bool bVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  undefined1 uVar26;
  char cVar27;
  long *plVar28;
  long lVar29;
  undefined8 *puVar30;
  code *pcVar31;
  long lVar32;
  float *pfVar33;
  long lVar34;
  float *pfVar35;
  uint uVar36;
  long *plVar37;
  long lVar38;
  long lVar39;
  long *unaff_x19;
  ulong uVar40;
  int unaff_w21;
  int iVar41;
  uint unaff_w23;
  undefined8 *unaff_x24;
  int *piVar42;
  undefined8 *unaff_x25;
  ulong uVar43;
  uint uVar44;
  ulong uVar45;
  long *plVar46;
  long *unaff_x28;
  long *unaff_x29;
  ushort uVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined4 uVar52;
  float fVar53;
  float fVar54;
  undefined8 uVar55;
  float fVar57;
  undefined1 auVar56 [16];
  undefined8 uVar58;
  undefined1 auVar59 [16];
  float fVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  undefined8 uVar68;
  float fVar69;
  float fVar70;
  float unaff_s12;
  float fVar71;
  float unaff_s13;
  float unaff_s15;
  undefined8 in_stack_00000018;
  int iStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float in_stack_00000030;
  undefined8 in_stack_00000040;
  float fStack0000000000000048;
  float fStack0000000000000050;
  uint uStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  int iStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  undefined4 uStack000000000000006c;
  float fStack0000000000000070;
  undefined8 in_stack_00000078;
  undefined4 uStack0000000000000090;
  float fStack0000000000000094;
  float fStack0000000000000098;
  ulong in_stack_000000a0;
  undefined1 (*in_stack_000000a8) [16];
  float in_stack_000000b0;
  float fStack00000000000000b8;
  float fStack00000000000000c0;
  undefined8 in_stack_000000d0;
  float fStack00000000000000d8;
  undefined8 in_stack_000000e0;
  float in_stack_000000e8;
  int iStack00000000000000ec;
  float fStack0000000000000100;
  float in_stack_00000108;
  undefined8 in_stack_00000110;
  float in_stack_00000120;
  float fStack0000000000000124;
  float fStack000000000000013c;
  float fStack0000000000000140;
  float fStack0000000000000144;
  float fStack0000000000000148;
  float fStack000000000000014c;
  float fStack000000000000015c;
  float fStack000000000000017c;
  float fStack0000000000000180;
  float fStack0000000000000184;
  float fStack0000000000000190;
  undefined8 *in_stack_000001a8;
  float fStack00000000000001b0;
  undefined8 in_stack_000001c8;
  float fStack00000000000001d0;
  float fStack00000000000001d4;
  float in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  float in_stack_000001f0;
  float in_stack_0000114c;
  float in_stack_00001158;
  float in_stack_00001164;
  float in_stack_00001170;
  float in_stack_0000117c;
  float in_stack_00001188;
  uint in_stack_0000126c;
  undefined4 in_stack_00001310;
  float in_stack_00001314;
  float in_stack_00001318;
  float in_stack_0000131c;
  float in_stack_00001320;
  uint uVar72;
  char in_stack_00001334;
  float in_stack_00001338;
  uint in_stack_0000133c;
  undefined8 in_stack_00001340;
  undefined8 in_stack_00001348;
  undefined4 in_stack_00001350;
  undefined4 in_stack_00001354;
  undefined8 in_stack_00001358;
  undefined8 in_stack_00001360;
  undefined8 in_stack_00001368;
  undefined8 in_stack_00001370;
  undefined8 in_stack_00001378;
  
  uVar43 = _fStack0000000000000068;
code_r0x05cbf814:
  memcpy(param_4,param_5 + 0x340,0x3b8);
LAB_05cbfc0c:
  iVar17 = FUN_05d11230();
  uVar16 = iVar17 - 1;
  unaff_w21 = unaff_w21 + 1;
  uVar13 = *(int *)((long)unaff_x19 + 0x4a4) - 1;
  *(uint *)((long)unaff_x19 + 0x4a4) = uVar13;
  uVar52 = 0x2026;
  do {
    fVar48 = unaff_s12;
    uVar21 = CONCAT44(uVar52,uVar13);
LAB_05cbdbd4:
    do {
      lVar29 = unaff_x19[0x91];
      uVar16 = uVar16 + 1;
      if (lVar29 == 0) goto LAB_05cc446c;
      if ((int)*(uint *)(lVar29 + 0x18) <= (int)uVar16) {
LAB_05cc18bc:
        if ((char)unaff_x19[0x4c] == '\0') {
LAB_05cc1980:
          iVar17 = *(int *)((long)unaff_x19 + 0x26c);
          iVar20 = (int)unaff_x19[0x4e];
        }
        else {
          param_3 = *(float *)((long)unaff_x19 + 0x264);
          param_2 = ZEXT416((uint)DAT_01275268);
          if (param_3 - *(float *)(unaff_x19 + 0x4d) <= DAT_01275268) goto LAB_05cc1980;
          fVar48 = *(float *)((long)unaff_x19 + 0x20c);
          fVar49 = *(float *)((long)unaff_x19 + 0x27c);
          param_2 = ZEXT416((uint)fVar49);
          iVar17 = *(int *)((long)unaff_x19 + 0x26c);
          iVar20 = (int)unaff_x19[0x4e];
          if ((fVar48 < fVar49) && (iVar17 < iVar20)) {
            if (*(float *)(unaff_x19 + 0x60) < *(float *)((long)unaff_x19 + 0x2fc) / 100.0) {
              *(undefined4 *)(unaff_x19 + 0x60) = 0;
            }
            fVar66 = DAT_012751b0;
            *(float *)(unaff_x19 + 0x4d) = fVar48;
            fVar50 = (param_3 - fVar48) * 0.5;
            if (fVar50 <= fVar66) {
              fVar50 = fVar66;
            }
            fVar66 = (fVar48 + fVar50) * 20.0 + 0.5;
            fVar48 = DAT_01275250;
            if (fVar66 != INFINITY) {
              fVar48 = (float)(int)fVar66 / 20.0;
            }
            if (fVar49 <= fVar48) {
              fVar48 = fVar49;
            }
            goto LAB_05cc1978;
          }
        }
        *(undefined1 *)((long)unaff_x19 + 0x274) = 1;
        if (iVar20 <= iVar17) {
          uVar21 = FUN_05000654((long)unaff_x19 + 0x26c,0);
          uVar22 = FUN_05015a18((long)unaff_x19 + 0x20c,0);
          uVar21 = FUN_04e80bdc(*(undefined8 *)
                                 Method_PlayFab_PlayFabMultiplayerInstanceAPI_UploadCertificate__,
                                uVar21,*(undefined8 *)
                                        Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildRegions__
                                ,uVar22,0);
          if (*(int *)(*unaff_x29 + 0xe4) == 0) {
            thunk_FUN_02dabd98(*unaff_x29);
          }
          FUN_05ea2238(uVar21,0);
        }
        if ((*(int *)(unaff_x24 + 7) == 0) ||
           ((*(int *)(unaff_x24 + 7) == 1 && (in_stack_0000133c == 3)))) {
          (**(code **)(*unaff_x19 + 0x958))();
          goto LAB_05cc1a38;
        }
        lVar29 = *unaff_x28;
        if (*(int *)(lVar29 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar29 = *unaff_x28;
        }
        plVar46 = (long *)PTR_DAT_06649d28;
        lVar29 = **(long **)(lVar29 + 0xb8);
        if (lVar29 == 0) goto LAB_05cc446c;
        if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0xd4)) goto LAB_05cc45e8;
        iVar17 = *(int *)(lVar29 + (long)(int)*(uint *)(unaff_x19 + 0xd4) * 0x38 + 0x54) << 2;
        if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x60), lVar29 == 0))
        goto LAB_05cc446c;
        if (*(int *)(*(long *)PTR_DAT_06649d28 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        if (*(int *)(lVar29 + 0x18) == 0) goto LAB_05cc45e8;
        FUN_05d29d88(lVar29 + 0x20,0,0);
        fStack00000000000000c0 = (float)FUN_02e694a0(0);
        iVar20 = (int)unaff_x19[0x53];
        lVar29 = unaff_x19[0xee];
        fStack00000000000000b8 = param_3;
        if (iVar20 < 0x401) {
          if (iVar20 == 0x100) {
            if ((int)unaff_x19[0x62] == 5) {
              if (lVar29 == 0) goto LAB_05cc446c;
              if ((*(uint *)(lVar29 + 0x18) & 0xfffffffe) == 0) goto LAB_05cc45e8;
              if ((unaff_x19[0x74] == 0) ||
                 (lVar32 = *(long *)(unaff_x19[0x74] + 0x58), lVar32 == 0)) goto LAB_05cc446c;
              if (*(uint *)(lVar32 + 0x18) <= in_stack_00000040._4_4_) goto LAB_05cc45e8;
              fVar48 = *(float *)(lVar32 + (long)(int)in_stack_00000040._4_4_ * 0x14 + 0x28);
            }
            else {
              if (lVar29 == 0) goto LAB_05cc446c;
              if ((*(uint *)(lVar29 + 0x18) & 0xfffffffe) == 0) goto LAB_05cc45e8;
              fVar48 = *(float *)((long)unaff_x19 + 0x4cc);
            }
            fStack00000000000000b8 = *(float *)(lVar29 + 0x34);
            fStack000000000000002c = (0.0 - fVar48) - fStack0000000000000028;
            param_3 = *(float *)(lVar29 + 0x2c);
            fVar48 = *(float *)(lVar29 + 0x30);
LAB_05cc1e30:
            param_3 = in_stack_00000030 + 0.0 + param_3;
            fVar48 = fVar48 + fStack000000000000002c;
          }
          else {
            if (iVar20 != 0x200) {
              if (iVar20 != 0x400) goto LAB_05cc1e44;
              if ((int)unaff_x19[0x62] == 5) {
                if (lVar29 == 0) goto LAB_05cc446c;
                if (*(int *)(lVar29 + 0x18) == 0) goto LAB_05cc45e8;
                if ((unaff_x19[0x74] == 0) ||
                   (lVar32 = *(long *)(unaff_x19[0x74] + 0x58), lVar32 == 0)) goto LAB_05cc446c;
                if (*(uint *)(lVar32 + 0x18) <= in_stack_00000040._4_4_) goto LAB_05cc45e8;
                in_stack_00001338 =
                     *(float *)(lVar32 + (long)(int)in_stack_00000040._4_4_ * 0x14 + 0x30);
              }
              else {
                if (lVar29 == 0) goto LAB_05cc446c;
                if (*(int *)(lVar29 + 0x18) == 0) goto LAB_05cc45e8;
              }
              fStack00000000000000b8 = *(float *)(lVar29 + 0x28);
              fStack000000000000002c = fStack000000000000002c + (0.0 - in_stack_00001338);
              param_3 = *(float *)(lVar29 + 0x20);
              fVar48 = *(float *)(lVar29 + 0x24);
              goto LAB_05cc1e30;
            }
            if ((int)unaff_x19[0x62] != 5) {
              if (lVar29 == 0) goto LAB_05cc446c;
              if ((*(int *)(lVar29 + 0x18) != 1) && (*(int *)(lVar29 + 0x18) != 0)) {
                fVar48 = *(float *)((long)unaff_x19 + 0x4cc);
                goto LAB_05cc1d64;
              }
              goto LAB_05cc45e8;
            }
            if (lVar29 == 0) goto LAB_05cc446c;
            if ((*(int *)(lVar29 + 0x18) == 1) || (*(int *)(lVar29 + 0x18) == 0)) goto LAB_05cc45e8;
            if ((unaff_x19[0x74] == 0) || (lVar32 = *(long *)(unaff_x19[0x74] + 0x58), lVar32 == 0))
            goto LAB_05cc446c;
            if (*(uint *)(lVar32 + 0x18) <= in_stack_00000040._4_4_) goto LAB_05cc45e8;
            lVar32 = lVar32 + (long)(int)in_stack_00000040._4_4_ * 0x14;
            fStack00000000000000b8 = (*(float *)(lVar29 + 0x28) + *(float *)(lVar29 + 0x34)) * 0.5;
            param_3 = in_stack_00000030 + 0.0 +
                      ((float)*(undefined8 *)(lVar29 + 0x20) + (float)*(undefined8 *)(lVar29 + 0x2c)
                      ) * 0.5;
            fVar48 = (0.0 - ((fStack0000000000000028 + *(float *)(lVar32 + 0x28) +
                             *(float *)(lVar32 + 0x30)) - fStack000000000000002c) * 0.5) +
                     ((float)((ulong)*(undefined8 *)(lVar29 + 0x20) >> 0x20) +
                     (float)((ulong)*(undefined8 *)(lVar29 + 0x2c) >> 0x20)) * 0.5;
          }
          fStack00000000000000b8 = fStack00000000000000b8 + 0.0;
          param_2 = ZEXT416((uint)fVar48);
          fStack00000000000000c0 = param_3;
        }
        else if (iVar20 == 0x800) {
          if (lVar29 == 0) goto LAB_05cc446c;
          if ((*(int *)(lVar29 + 0x18) == 1) || (*(int *)(lVar29 + 0x18) == 0)) goto LAB_05cc45e8;
          param_3 = (*(float *)(lVar29 + 0x28) + *(float *)(lVar29 + 0x34)) * 0.5;
          fStack00000000000000c0 =
               ((float)*(undefined8 *)(lVar29 + 0x20) + (float)*(undefined8 *)(lVar29 + 0x2c)) * 0.5
               + in_stack_00000030 + 0.0;
          fStack00000000000000b8 = param_3 + 0.0;
          param_2 = ZEXT416((uint)(((float)((ulong)*(undefined8 *)(lVar29 + 0x20) >> 0x20) +
                                   (float)((ulong)*(undefined8 *)(lVar29 + 0x2c) >> 0x20)) * 0.5 +
                                  0.0));
        }
        else {
          if (iVar20 == 0x1000) {
            if (lVar29 == 0) goto LAB_05cc446c;
            if ((*(int *)(lVar29 + 0x18) == 1) || (*(int *)(lVar29 + 0x18) == 0)) goto LAB_05cc45e8;
            fVar48 = *(float *)((long)unaff_x19 + 0x4fc);
            in_stack_00001338 = *(float *)((long)unaff_x19 + 0x4f4);
LAB_05cc1d64:
            fStack0000000000000028 = fStack0000000000000028 + fVar48 + in_stack_00001338;
          }
          else {
            if (iVar20 != 0x2000) goto LAB_05cc1e44;
            if (lVar29 == 0) goto LAB_05cc446c;
            if ((*(int *)(lVar29 + 0x18) == 1) || (*(int *)(lVar29 + 0x18) == 0)) goto LAB_05cc45e8;
            fStack0000000000000028 = *(float *)(unaff_x19 + 0x9a) - fStack0000000000000028;
          }
          param_3 = in_stack_00000030 + 0.0;
          param_2._0_4_ =
               ((float)*(undefined8 *)(lVar29 + 0x24) + (float)*(undefined8 *)(lVar29 + 0x30)) * 0.5
               + (0.0 - (fStack0000000000000028 - fStack000000000000002c) * 0.5);
          param_2._4_4_ =
               ((float)((ulong)*(undefined8 *)(lVar29 + 0x24) >> 0x20) +
               (float)((ulong)*(undefined8 *)(lVar29 + 0x30) >> 0x20)) * 0.5 + 0.0;
          param_2._8_8_ = 0;
          fStack00000000000000c0 =
               param_3 + (*(float *)(lVar29 + 0x20) + *(float *)(lVar29 + 0x2c)) * 0.5;
          fStack00000000000000b8 = param_2._4_4_;
        }
LAB_05cc1e44:
        auVar56 = param_2;
        in_stack_00000120 = (float)FUN_02e694a0(0);
        auVar59 = auVar56;
        FUN_02e694a0(0);
        lVar29 = FUN_05ccedf0();
        if (lVar29 == 0) goto LAB_05cc446c;
        FUN_05ef2218(lVar29,0);
        *(float *)((long)unaff_x19 + 0x6fc) = auVar59._0_4_;
        uVar52 = FUN_02efa70c(ZEXT816(0x3f800000),ZEXT816(0x3f800000),0x3f800000,0x3f800000,0);
        FUN_02efa70c(ZEXT816(0x3f800000),ZEXT816(0x3f800000),0x3f800000,0x3f800000,0);
        if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImageTags__
                    + 0xe4) == 0) {
          thunk_FUN_02dabd98(*(long *)
                              Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImageTags__)
          ;
        }
        FUN_05cc4624(0);
        FUN_05ce0118(&stack0x00001310,0x4000ffff,0);
        if (*(int *)(*unaff_x28 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        lVar29 = unaff_x19[0x74];
        if (lVar29 == 0) goto LAB_05cc446c;
        iVar20 = *(int *)(unaff_x24 + 7);
        if (iVar20 < 1) {
          iStack00000000000000ec = 0;
          iVar19 = 0;
          goto LAB_05cc4038;
        }
        lVar29 = *(long *)(lVar29 + 0x38);
        if (lVar29 == 0) goto LAB_05cc446c;
        fStack0000000000000190 = auVar56._0_4_;
        fVar49 = 0.0;
        bVar6 = false;
        uVar13 = 0;
        uVar16 = 0;
        lVar32 = lVar29 + 0x20;
        fStack0000000000000140 = *(float *)(*(long *)(*unaff_x28 + 0xb8) + 0x1730);
        bVar8 = false;
        bVar7 = false;
        bVar10 = false;
        iStack00000000000000ec = 0;
        fStack0000000000000124 = fStack0000000000000190;
        fStack00000000000001b0 = param_2._0_4_;
        fStack0000000000000050 = 0.0;
        fStack0000000000000064 = 0.0;
        in_stack_000000e0._4_4_ = in_stack_00000110._4_4_;
        fStack0000000000000068 = in_stack_00000110._4_4_;
        fStack000000000000013c = 0.0;
        in_stack_00000078._4_4_ = 0.0;
        fVar48 = 0.0;
        fStack000000000000005c = 0.0;
        in_stack_000000a0._4_4_ = 0.0;
        fStack00000000000000d8 = in_stack_000000e8;
        uStack000000000000006c = in_stack_000000d0._4_4_;
        fStack0000000000000070 = in_stack_000000e8;
        fStack0000000000000094 = in_stack_000000e8;
        fStack0000000000000098 = in_stack_00000110._4_4_;
        uStack0000000000000090 = in_stack_000000d0._4_4_;
        fStack0000000000000100 = param_3;
        uVar18 = 0;
        goto LAB_05cc1fd0;
      }
      if (*(uint *)(lVar29 + 0x18) <= uVar16) goto LAB_05cc45e8;
      uVar13 = *(uint *)(lVar29 + (long)(int)uVar16 * 0x10 + 0x24);
      if (uVar13 == 0) goto LAB_05cc18bc;
      if (5 < unaff_w21) {
        uVar21 = FUN_0501f6b0(&stack0x0000133c,0);
        uVar22 = FUN_05000654(&stack0x00001308,0);
        uVar21 = FUN_04e80bdc(*(undefined8 *)
                               Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildRegion__,
                              uVar21,*(undefined8 *)
                                      Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateLobby__,
                              uVar22,0);
        if (*(int *)(*unaff_x29 + 0xe4) == 0) {
          thunk_FUN_02dabd98(*unaff_x29);
        }
        FUN_05ea29a0(uVar21,0);
        uVar21 = CONCAT44(3,*(undefined4 *)(unaff_x24 + 7));
      }
      in_stack_0000133c = uVar13;
    } while (uVar13 == 0x1a);
    if ((uVar13 == 0x3c) && (*(char *)((long)unaff_x19 + 0x33a) != '\0')) {
      *(undefined1 *)((long)unaff_x19 + 0x469) = 1;
      *(undefined4 *)((long)unaff_x19 + 0x65c) = 0;
      uVar23 = FUN_05d0be34();
      if (((uVar23 & 1) != 0) &&
         (uVar16 = in_stack_0000126c, *(int *)((long)unaff_x19 + 0x65c) == 0)) goto LAB_05cbdbd4;
    }
    else {
      if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
      goto LAB_05cc446c;
      if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x24 + 7)) goto LAB_05cc45e8;
      lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x24 + 7) * (long)(int)unaff_w23;
      *(undefined4 *)((long)unaff_x19 + 0x65c) = *(undefined4 *)(lVar29 + 0x20);
      *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar29 + 0x50);
      unaff_x19[0x20] = *(long *)(lVar29 + 0x40);
      thunk_FUN_02dc1ef0(unaff_x19 + 0x20);
    }
    if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
    goto LAB_05cc446c;
    uVar18 = *(uint *)(in_stack_000001a8 + 7);
    if (*(uint *)(lVar29 + 0x18) <= uVar18) goto LAB_05cc45e8;
    lVar32 = lVar29 + 0x20;
    uVar72 = (uint)uVar21;
    lVar38 = unaff_x19[0x24];
    cVar27 = *(char *)(lVar32 + (long)(int)uVar18 * (long)(int)unaff_w23 + 0x34);
    *(undefined1 *)((long)unaff_x19 + 0x469) = 0;
    uVar14 = uVar18;
    if (uVar72 == uVar18) {
      uVar13 = (uint)((ulong)uVar21 >> 0x20);
      *(undefined4 *)((long)unaff_x19 + 0x65c) = 0;
      if (uVar13 == 0x2026) {
        *(long *)(lVar32 + (long)(int)uVar18 * (long)(int)unaff_w23 + 0x10) = unaff_x19[0xcd];
        thunk_FUN_02dc1ef0();
        if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
        goto LAB_05cc446c;
        if (*(uint *)(lVar29 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
        lVar29 = lVar29 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23;
        *(long *)(lVar29 + 0x40) = unaff_x19[0xce];
        *(undefined4 *)(lVar29 + 0x20) = 0;
        thunk_FUN_02dc1ef0();
        if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
        goto LAB_05cc446c;
        if (*(uint *)(lVar29 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
        *(long *)(lVar29 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23 + 0x48
                 ) = unaff_x19[0xcf];
        thunk_FUN_02dc1ef0();
        if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
        goto LAB_05cc446c;
        if (*(uint *)(lVar29 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
        *(int *)(lVar29 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23 + 0x50)
             = (int)unaff_x19[0xd0];
        lVar29 = *unaff_x28;
        if (*(int *)(lVar29 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar29 = *unaff_x28;
        }
        lVar29 = **(long **)(lVar29 + 0xb8);
        if (lVar29 == 0) goto LAB_05cc446c;
        if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0xd4)) goto LAB_05cc45e8;
        lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0xd4) * 0x38;
        *(int *)(lVar29 + 0x54) = *(int *)(lVar29 + 0x54) + 1;
        *(undefined1 *)(unaff_x19 + 0x65) = 1;
        uVar21 = CONCAT44(3,*(uint *)((long)unaff_x19 + 0x4a4) + 1);
        uVar14 = *(uint *)((long)unaff_x19 + 0x4a4);
      }
      else if (uVar13 == 3) {
        if ((unaff_x19[0x20] == 0) || (lVar24 = FUN_05ce825c(unaff_x19[0x20],0), lVar24 == 0))
        goto LAB_05cc446c;
        uVar22 = FUN_048bdb30(lVar24,3,*(undefined8 *)
                                        Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListAssetSummaries__
                             );
        if (*(uint *)(lVar29 + 0x18) <= uVar18) goto LAB_05cc45e8;
        *(undefined8 *)(lVar32 + (long)(int)uVar18 * (long)(int)unaff_w23 + 0x10) = uVar22;
        thunk_FUN_02dc1ef0();
        *(undefined1 *)(unaff_x19 + 0x65) = 1;
        uVar14 = *(uint *)((long)unaff_x19 + 0x4a4);
      }
    }
    unaff_x24 = in_stack_000001a8;
    in_stack_0000133c = uVar13;
    if (((int)uVar14 < *(int *)((long)unaff_x19 + 0x35c)) && (uVar13 != 3)) {
      if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
      goto LAB_05cc446c;
      if (*(uint *)(lVar29 + 0x18) <= uVar14) goto LAB_05cc45e8;
      lVar29 = lVar29 + (long)(int)uVar14 * (long)(int)unaff_w23;
      *(undefined1 *)(lVar29 + 400) = 0;
      *(undefined2 *)(lVar29 + 0x24) = 0x200b;
      *(undefined4 *)(lVar29 + 0x5c) = 0;
      *(uint *)(in_stack_000001a8 + 7) = uVar14 + 1;
      goto LAB_05cbdbd4;
    }
    fStack000000000000015c = 1.0;
    fVar49 = fStack000000000000015c;
    fStack000000000000015c = 1.0;
    if (*(int *)((long)unaff_x19 + 0x65c) == 0) {
      uVar14 = *(uint *)((long)unaff_x19 + 0x284);
      if ((uVar14 >> 4 & 1) == 0) {
        if ((uVar14 >> 3 & 1) == 0) {
          if ((uVar14 >> 5 & 1) != 0) {
            if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            uVar23 = FUN_04f749ec(uVar13,0);
            if ((uVar23 & 1) != 0) {
              if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              uVar13 = FUN_04f74c74(uVar13,0);
              fStack000000000000015c = fStack0000000000000024;
              goto LAB_05cbd82c;
            }
          }
        }
        else {
          if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar23 = FUN_04f7494c(uVar13,0);
          if ((uVar23 & 1) != 0) {
            if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            uVar13 = FUN_04f74dec(uVar13,0);
            fStack000000000000015c = fVar49;
            goto LAB_05cbd82c;
          }
        }
      }
      else {
        if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar23 = FUN_04f749ec(uVar13,0);
        if ((uVar23 & 1) != 0) {
          if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar13 = FUN_04f74c74(uVar13,0);
          fStack000000000000015c = fVar49;
LAB_05cbd82c:
          in_stack_0000133c = uVar13 & 0xffff;
        }
      }
    }
    if (unaff_x19[0x20] == 0) goto LAB_05cc446c;
    memmove(&stack0x000012a0,(void *)(unaff_x19[0x20] + 0x28),0x60);
    if (*(int *)((long)unaff_x19 + 0x65c) == 1) {
      lVar29 = FUN_05d04cb4();
      if ((lVar29 == 0) || (lVar29 = *(long *)(lVar29 + 0x38), lVar29 == 0)) goto LAB_05cc446c;
      if (*(uint *)(lVar29 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
      plVar46 = *(long **)(lVar29 + (long)(int)*(uint *)(in_stack_000001a8 + 7) *
                                    (long)(int)unaff_w23 + 0x30);
      if (plVar46 == (long *)0x0) goto LAB_05cbdbd4;
      bVar11 = *(byte *)(*(long *)
                          Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListMatchmakingTicketsForPlayer__
                        + 0x130);
      if ((*(byte *)(*plVar46 + 0x130) < bVar11) ||
         (*(long *)(*(long *)(*plVar46 + 200) + (ulong)bVar11 * 8 + -8) !=
          *(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListMatchmakingTicketsForPlayer__))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02d4e268(plVar46);
      }
      plVar28 = (long *)plVar46[3];
      if (plVar28 == (long *)0x0) {
        plVar28 = (long *)0x0;
        *_fStack00000000000000d8 = 0;
      }
      else {
        lVar29 = *(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListMatchmakingQueues__;
        bVar11 = *(byte *)(lVar29 + 0x130);
        if (*(byte *)(*plVar28 + 0x130) < bVar11) {
          plVar37 = (long *)0x0;
        }
        else {
          plVar37 = plVar28;
          if (*(long *)(*(long *)(*plVar28 + 200) + (ulong)bVar11 * 8 + -8) != lVar29) {
            plVar37 = (long *)0x0;
          }
        }
        *_fStack00000000000000d8 = (long)plVar37;
        if (*(byte *)(*plVar28 + 0x130) < bVar11) {
          plVar28 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar28 + 200) + (ulong)bVar11 * 8 + -8) != lVar29) {
          plVar28 = (long *)0x0;
        }
      }
      thunk_FUN_02dc1ef0(_fStack00000000000000d8,plVar28);
      lVar29 = plVar46[5];
      *(int *)((long)unaff_x19 + 0x6bc) = (int)lVar29;
      if (in_stack_0000133c == 0x3c) {
        in_stack_0000133c = (int)lVar29 + 0xe000;
      }
      else {
        lVar29 = *unaff_x28;
        if (*(int *)(lVar29 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar29 = *unaff_x28;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1d4) = *(undefined4 *)(*(long *)(lVar29 + 0xb8) + 0x68);
      }
      fVar66 = *_fStack0000000000000070;
      fVar48 = (float)FUN_05f84b24(&stack0x000012a0,0);
      fVar49 = (float)FUN_05f84b2c(&stack0x000012a0,0);
      if (*_fStack00000000000000d8 == 0) goto LAB_05cc446c;
      fVar49 = in_stack_00000120 * (fVar66 / fVar48) * fVar49;
      memmove(&stack0x00001200,(void *)(*_fStack00000000000000d8 + 0x28),0x60);
      fVar48 = (float)FUN_05f84b24(&stack0x00001200,0);
      fVar66 = *_fStack0000000000000070;
      if (fVar48 <= 0.0) {
        fVar48 = (float)FUN_05f84b24(&stack0x000012a0,0);
        fVar50 = (float)FUN_05f84b2c(&stack0x000012a0,0);
        fVar51 = (float)FUN_05f84b54(&stack0x000012a0,0);
        if (plVar46[4] == 0) goto LAB_05cc446c;
        FUN_05f84fe8(&stack0x00001340,plVar46[4],0);
        fVar67 = (float)FUN_05f84e18(&stack0x000011e0,0);
        if (plVar46[4] == 0) goto LAB_05cc446c;
        fVar53 = *(float *)((long)plVar46 + 0x2c);
        fVar66 = in_stack_00000120 * (fVar66 / fVar48) * fVar50;
        fVar48 = (float)FUN_05f85024(plVar46[4],0);
        fVar48 = fVar66 * (fVar51 / fVar67) * fVar53 * fVar48;
        fStack0000000000000144 = 0.0;
        if (fVar48 != 0.0) {
          fStack0000000000000144 = fVar66 / fVar48;
        }
        fStack0000000000000148 = (float)FUN_05f84b54(&stack0x000012a0,0);
        fStack0000000000000148 = fStack0000000000000148 * fStack0000000000000144;
        fVar66 = (float)FUN_05f84b7c(&stack0x000012a0,0);
        fVar50 = *(float *)((long)unaff_x19 + 0x43c);
        fStack000000000000017c = (float)FUN_05f84b2c(&stack0x000012a0,0);
        fStack000000000000017c = fVar49 * fVar66 * fVar50 * fStack000000000000017c;
        fVar49 = (float)FUN_05f84b84(&stack0x000012a0,0);
        fStack0000000000000144 = fStack0000000000000144 * fVar49;
      }
      else {
        fVar48 = (float)FUN_05f84b24(&stack0x00001200,0);
        fVar50 = (float)FUN_05f84b2c(&stack0x00001200,0);
        if (plVar46[4] == 0) goto LAB_05cc446c;
        fVar67 = *(float *)((long)plVar46 + 0x2c);
        fVar51 = (float)FUN_05f85024(plVar46[4],0);
        fVar48 = in_stack_00000120 * (fVar66 / fVar48) * fVar50 * fVar67 * fVar51;
        fStack0000000000000148 = (float)FUN_05f84b54(&stack0x00001200,0);
        fVar66 = (float)FUN_05f84b7c(&stack0x00001200,0);
        fVar50 = *(float *)((long)unaff_x19 + 0x43c);
        fStack000000000000017c = (float)FUN_05f84b2c(&stack0x00001200,0);
        fStack000000000000017c = fVar49 * fVar66 * fVar50 * fStack000000000000017c;
        fStack0000000000000144 = (float)FUN_05f84b84(&stack0x00001200,0);
      }
      unaff_x19[0xcc] = (long)plVar46;
      thunk_FUN_02dc1ef0(_fStack0000000000000100,plVar46);
      if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
      goto LAB_05cc446c;
      if (*(uint *)(lVar29 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
      lVar29 = lVar29 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23;
      *(long *)(lVar29 + 0x40) = unaff_x19[0x20];
      *(undefined4 *)(lVar29 + 0x20) = 1;
      *(float *)(lVar29 + 0x15c) = fVar48;
      thunk_FUN_02dc1ef0();
      lVar29 = unaff_x19[0x74];
      if ((lVar29 == 0) || (lVar32 = *(long *)(lVar29 + 0x38), lVar32 == 0)) goto LAB_05cc446c;
      if (*(uint *)(lVar32 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
      unaff_s13 = 0.0;
      *(int *)(lVar32 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23 + 0x50) =
           (int)unaff_x19[0x24];
      *(int *)(unaff_x19 + 0x24) = (int)lVar38;
LAB_05cbdf70:
      unaff_s12 = 0.0;
      if (in_stack_0000133c != 3 && in_stack_0000133c != 0xad) {
        unaff_s12 = fVar48;
      }
    }
    else {
      lVar29 = unaff_x19[0x74];
      if (*(int *)((long)unaff_x19 + 0x65c) == 0) {
        if ((lVar29 == 0) || (lVar29 = *(long *)(lVar29 + 0x38), lVar29 == 0)) goto LAB_05cc446c;
        if (*(uint *)(lVar29 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
        *_fStack0000000000000100 =
             *(long *)(lVar29 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23 +
                      0x30);
        thunk_FUN_02dc1ef0(_fStack0000000000000100);
        if (*_fStack0000000000000100 == 0) goto LAB_05cbdbd4;
        if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
        goto LAB_05cc446c;
        if (*(uint *)(lVar29 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
        unaff_x19[0x20] =
             *(long *)(lVar29 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23 +
                      0x40);
        thunk_FUN_02dc1ef0(unaff_x19 + 0x20);
        if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
        goto LAB_05cc446c;
        if (*(uint *)(lVar29 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
        unaff_x19[0x23] =
             *(long *)(lVar29 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23 +
                      0x48);
        thunk_FUN_02dc1ef0(unaff_x19 + 0x23);
        if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
        goto LAB_05cc446c;
        uVar14 = *(uint *)(in_stack_000001a8 + 7);
        uVar13 = *(uint *)(lVar29 + 0x18);
        if (uVar13 <= uVar14) goto LAB_05cc45e8;
        *(undefined4 *)(unaff_x19 + 0x24) =
             *(undefined4 *)(lVar29 + 0x20 + (long)(int)uVar14 * (long)(int)unaff_w23 + 0x30);
        pfVar35 = _fStack0000000000000070;
        if (uVar72 == uVar18) {
          lVar32 = unaff_x19[0x91];
          if (lVar32 == 0) goto LAB_05cc446c;
          if (*(uint *)(lVar32 + 0x18) <= uVar16) goto LAB_05cc45e8;
          if ((*(int *)(lVar32 + (long)(int)uVar16 * 0x10 + 0x24) == 10) &&
             (uVar14 != *(uint *)(unaff_x19 + 0x95))) {
            if (uVar13 <= uVar14 - 1) goto LAB_05cc45e8;
            pfVar35 = (float *)(lVar29 + 0x20 + (long)(int)(uVar14 - 1) * (long)(int)unaff_w23 +
                               0x38);
          }
        }
        fVar50 = *pfVar35;
        fVar49 = (float)FUN_05f84b24(&stack0x000012a0,0);
        fVar66 = (float)FUN_05f84b2c(&stack0x000012a0,0);
        if (uVar72 == uVar18) {
          fStack0000000000000144 = 0.0;
          fStack0000000000000148 = 0.0;
          if (in_stack_0000133c != 0x2026) goto LAB_05cbdabc;
        }
        else {
LAB_05cbdabc:
          fStack0000000000000148 = (float)FUN_05f84b54(&stack0x000012a0,0);
          fStack0000000000000144 = (float)FUN_05f84b84(&stack0x000012a0,0);
        }
        lVar29 = unaff_x19[0xcc];
        if ((lVar29 == 0) || (*(long *)(lVar29 + 0x20) == 0)) goto LAB_05cc446c;
        fVar67 = *(float *)((long)unaff_x19 + 0x43c);
        fVar53 = *(float *)(lVar29 + 0x2c);
        fVar48 = (float)FUN_05f85024(*(long *)(lVar29 + 0x20),0);
        fVar51 = (float)FUN_05f84b7c(&stack0x000012a0,0);
        fVar54 = *(float *)((long)unaff_x19 + 0x43c);
        fStack000000000000017c = (float)FUN_05f84b2c(&stack0x000012a0,0);
        lVar29 = unaff_x19[0x74];
        if ((lVar29 == 0) || (lVar32 = *(long *)(lVar29 + 0x38), lVar32 == 0)) goto LAB_05cc446c;
        if (*(uint *)(lVar32 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
        lVar32 = lVar32 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23;
        *(undefined4 *)(lVar32 + 0x20) = 0;
        fVar49 = in_stack_00000120 * ((fStack000000000000015c * fVar50) / fVar49) * fVar66;
        fVar48 = fVar49 * fVar67 * fVar53 * fVar48;
        fStack000000000000017c = fVar49 * fVar51 * fVar54 * fStack000000000000017c;
        *(float *)(lVar32 + 0x15c) = fVar48;
        uVar13 = *(uint *)(unaff_x19 + 0x24);
        if (uVar13 != 0) {
          unaff_s15 = 1.0;
          lVar32 = unaff_x19[0xe4];
          if (lVar32 != 0) {
            if (uVar13 < *(uint *)(lVar32 + 0x18)) {
              lVar32 = *(long *)(lVar32 + (long)(int)uVar13 * 8 + 0x20);
              if (lVar32 != 0) {
                unaff_s13 = *(float *)(lVar32 + 0x54);
                goto LAB_05cbdf70;
              }
              goto LAB_05cc446c;
            }
            goto LAB_05cc45e8;
          }
          goto LAB_05cc446c;
        }
        unaff_s15 = 1.0;
        unaff_s13 = *(float *)(unaff_x19 + 0xc6);
        goto LAB_05cbdf70;
      }
      unaff_s12 = 0.0;
      if (in_stack_0000133c != 3 && in_stack_0000133c != 0xad) {
        unaff_s12 = fVar48;
      }
      fStack000000000000017c = 0.0;
      fStack0000000000000148 = 0.0;
      fStack0000000000000144 = 0.0;
      if (lVar29 == 0) goto LAB_05cc446c;
    }
    lVar29 = *(long *)(lVar29 + 0x38);
    if (lVar29 == 0) goto LAB_05cc446c;
    if (*(uint *)(lVar29 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
    lVar29 = lVar29 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23;
    *(short *)(lVar29 + 0x24) = (short)in_stack_0000133c;
    *(int *)(lVar29 + 0x58) = (int)unaff_x19[0x42];
    *(int *)(lVar29 + 0x160) = (int)unaff_x19[0xa0];
    if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
    goto LAB_05cc446c;
    if (*(uint *)(lVar29 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
    *(int *)(lVar29 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23 + 0x164) =
         (int)unaff_x19[0x2b];
    if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
    goto LAB_05cc446c;
    if (*(uint *)(lVar29 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
    *(undefined4 *)
     (lVar29 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23 + 0x16c) =
         *(undefined4 *)((long)unaff_x19 + 0x15c);
    if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
    goto LAB_05cc446c;
    if (*(uint *)(lVar29 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
    lVar29 = lVar29 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23;
    auVar56 = *in_stack_000000a8;
    *(undefined4 *)(lVar29 + 0x188) = *(undefined4 *)in_stack_000000a8[1];
    *(long *)(lVar29 + 0x180) = auVar56._8_8_;
    *(long *)(lVar29 + 0x178) = auVar56._0_8_;
    if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
    goto LAB_05cc446c;
    if (*(uint *)(lVar29 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
    lVar29 = lVar29 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23;
    lVar32 = *(long *)(lVar29 + 0x38);
    *(undefined4 *)(lVar29 + 0x18c) = *(undefined4 *)((long)unaff_x19 + 0x284);
    if (lVar32 == 0) {
      if ((*_fStack0000000000000100 == 0) ||
         (lVar29 = *(long *)(*_fStack0000000000000100 + 0x20), lVar29 == 0)) goto LAB_05cc446c;
      FUN_05f84fe8(&stack0x00001340,lVar29,0);
      unaff_x25[1] = in_stack_00001348;
      *unaff_x25 = in_stack_00001340;
    }
    else {
      FUN_05f84fe8(&stack0x000005c0,lVar32,0);
    }
    if (in_stack_0000133c >> 0x10 == 0) {
      if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar14 = FUN_04f72380(in_stack_0000133c,0);
      uVar14 = uVar14 & 1;
    }
    else {
      uVar14 = 0;
    }
    fVar49 = *(float *)(unaff_x19 + 0x5a);
    if (((in_stack_000000a0 & 0x100000000) != 0) && (*(int *)((long)unaff_x19 + 0x65c) == 0)) {
      if (*_fStack0000000000000100 == 0) goto LAB_05cc446c;
      iVar17 = *(int *)(in_stack_000001a8 + 7);
      uVar13 = *(uint *)(*_fStack0000000000000100 + 0x28);
      if (iVar17 < (int)uStack0000000000000054) {
        if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
        goto LAB_05cc446c;
        uVar15 = iVar17 + 1;
        if (*(uint *)(lVar29 + 0x18) <= uVar15) goto LAB_05cc45e8;
        if (*(int *)(lVar29 + 0x20 + (long)(int)uVar15 * (long)(int)unaff_w23) == 0) {
          lVar29 = *(long *)(lVar29 + 0x20 + (long)(int)uVar15 * (long)(int)unaff_w23 + 0x10);
          if ((((lVar29 == 0) || (unaff_x19[0x20] == 0)) ||
              (lVar32 = *(long *)(unaff_x19[0x20] + 0x178), lVar32 == 0)) ||
             (lVar32 = *(long *)(lVar32 + 0x40), lVar32 == 0)) goto LAB_05cc446c;
          uVar23 = FUN_048a9f18(lVar32,uVar13 | *(int *)(lVar29 + 0x28) << 0x10,&stack0x000011b0,
                                *(undefined8 *)
                                 Method_PlayFab_PlayFabMultiplayerInstanceAPI_LeaveLobby__);
          if ((uVar23 & 1) != 0) {
            FUN_05f896d8(&stack0x00001340,&stack0x000011b0,0);
            unaff_x25[0x17b] = in_stack_00001348;
            unaff_x25[0x17a] = in_stack_00001340;
            FUN_05f8952c(&stack0x00001190,0);
            uVar23 = FUN_05f89714(&stack0x000011b0,0);
            if ((uVar23 & 0x100) != 0) {
              fVar49 = 0.0;
            }
          }
        }
        iVar17 = *(int *)(in_stack_000001a8 + 7);
      }
      if (0 < iVar17) {
        if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
        goto LAB_05cc446c;
        if (*(uint *)(lVar29 + 0x18) <= iVar17 - 1U) goto LAB_05cc45e8;
        lVar29 = *(long *)(lVar29 + (ulong)(iVar17 - 1U) * (ulong)unaff_w23 + 0x30);
        if (lVar29 == 0) goto LAB_05cc446c;
        uVar15 = *(uint *)(lVar29 + 0x28);
        lVar29 = FUN_05d04cb4();
        if ((lVar29 == 0) || (lVar29 = *(long *)(lVar29 + 0x38), lVar29 == 0)) goto LAB_05cc446c;
        if (*(uint *)(lVar29 + 0x18) <= *(int *)(in_stack_000001a8 + 7) - 1U) goto LAB_05cc45e8;
        if (*(int *)(lVar29 + (long)(int)(*(int *)(in_stack_000001a8 + 7) - 1U) *
                              (long)(int)unaff_w23 + 0x20) == 0) {
          if (((unaff_x19[0x20] == 0) || (lVar29 = *(long *)(unaff_x19[0x20] + 0x178), lVar29 == 0))
             || (lVar29 = *(long *)(lVar29 + 0x40), lVar29 == 0)) goto LAB_05cc446c;
          uVar23 = FUN_048a9f18(lVar29,uVar15 | uVar13 << 0x10,&stack0x000011b0,
                                *(undefined8 *)
                                 Method_PlayFab_PlayFabMultiplayerInstanceAPI_LeaveLobby__);
          if ((uVar23 & 1) != 0) {
            FUN_05f89700(&stack0x00001340,&stack0x000011b0,0);
            unaff_x25[0x17b] = in_stack_00001348;
            unaff_x25[0x17a] = in_stack_00001340;
            FUN_05f8952c(&stack0x00001190,0);
            FUN_05f8938c(0);
            uVar23 = FUN_05f89714(&stack0x000011b0,0);
            if ((uVar23 & 0x100) != 0) {
              fVar49 = 0.0;
            }
          }
        }
      }
    }
    if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
    goto LAB_05cc446c;
    uVar13 = *(uint *)(in_stack_000001a8 + 7);
    uVar52 = FUN_05f89368(&stack0x00001270,0);
    if (*(uint *)(lVar29 + 0x18) <= uVar13) goto LAB_05cc45e8;
    *(undefined4 *)(lVar29 + (long)(int)uVar13 * (long)(int)unaff_w23 + 0x154) = uVar52;
    if (*(int *)(*(long *)
                  Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListServerBackfillTicketsForPlayer__
                + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar23 = FUN_05d36848(in_stack_0000133c,0);
    uVar13 = *(uint *)(in_stack_000001a8 + 7);
    uVar40 = (ulong)uVar13;
    if ((uVar23 & 1) == 0) {
      if (0 < (int)uVar13) {
        if ((((uVar43 & 0x100000000) == 0) ||
            (uVar15 = *(uint *)((long)unaff_x19 + 0x32c), uVar15 == 0x80000000)) ||
           (uVar15 != uVar13 - 1)) {
          if ((_fStack0000000000000048 & 0x100000000) == 0) {
            bVar10 = false;
          }
          else {
            lVar29 = uVar40 * unaff_w23 + 0x144;
            uVar45 = uVar40;
            do {
              uVar45 = uVar45 - 1;
              iVar17 = (int)uVar40;
              uVar13 = iVar17 - 1;
              uVar40 = (ulong)uVar13;
              if ((iVar17 < 1) || (uVar45 == *(uint *)((long)unaff_x19 + 0x32c))) {
                bVar10 = false;
                goto LAB_05cbe690;
              }
              if ((unaff_x19[0x74] == 0) ||
                 (lVar32 = *(long *)(unaff_x19[0x74] + 0x38), lVar32 == 0)) goto LAB_05cc446c;
              if (*(uint *)(lVar32 + 0x18) <= uVar45) goto LAB_05cc45e8;
              lVar32 = *(long *)(lVar32 + lVar29 + -0x28c);
              if ((lVar32 == 0) || (lVar32 = *(long *)(lVar32 + 0x20), lVar32 == 0))
              goto LAB_05cc446c;
              uVar15 = FUN_05f84fd8(lVar32,0);
              if ((*_fStack0000000000000100 == 0) ||
                 (((unaff_x19[0x20] == 0 ||
                   (lVar32 = *(long *)(unaff_x19[0x20] + 0x178), lVar32 == 0)) ||
                  (lVar32 = *(long *)(lVar32 + 0x50), lVar32 == 0)))) goto LAB_05cc446c;
              uVar25 = FUN_048b84e0(lVar32,uVar15 | *(int *)(*_fStack0000000000000100 + 0x28) <<
                                                    0x10,&stack0x00001160,
                                    *(undefined8 *)
                                     Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListArchivedMultiplayerServers__
                                   );
              lVar29 = lVar29 + -0x178;
            } while ((uVar25 & 1) == 0);
            if ((unaff_x19[0x74] == 0) || (lVar32 = *(long *)(unaff_x19[0x74] + 0x38), lVar32 == 0))
            goto LAB_05cc446c;
            if (*(uint *)(lVar32 + 0x18) <= uVar13) goto LAB_05cc45e8;
            FUN_05f89350(((*(float *)(lVar32 + lVar29 + -0xc) - *(float *)(unaff_x19 + 0xcb)) /
                          unaff_s12 + in_stack_00001164) - in_stack_00001170,in_stack_00001164,
                         in_stack_00001170,&stack0x00001270,0);
            FUN_05f89360(&stack0x00001270,0);
            fVar49 = 0.0;
            bVar10 = true;
          }
LAB_05cbe690:
          if ((uVar43 & 0x100000000) != 0) {
            uVar13 = *(uint *)((long)unaff_x19 + 0x32c);
            if (uVar13 == 0x80000000) {
              bVar10 = true;
            }
            if (!bVar10) {
              if ((unaff_x19[0x74] == 0) ||
                 (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0)) goto LAB_05cc446c;
              if (*(uint *)(lVar29 + 0x18) <= uVar13) goto LAB_05cc45e8;
              lVar29 = *(long *)(lVar29 + (long)(int)uVar13 * (long)(int)unaff_w23 + 0x30);
              if ((lVar29 == 0) || (lVar29 = *(long *)(lVar29 + 0x20), lVar29 == 0))
              goto LAB_05cc446c;
              uVar13 = FUN_05f84fd8(lVar29,0);
              if ((*_fStack0000000000000100 == 0) ||
                 (((unaff_x19[0x20] == 0 ||
                   (lVar29 = *(long *)(unaff_x19[0x20] + 0x178), lVar29 == 0)) ||
                  (lVar29 = *(long *)(lVar29 + 0x48), lVar29 == 0)))) goto LAB_05cc446c;
              uVar40 = FUN_048b1190(lVar29,uVar13 | *(int *)(*_fStack0000000000000100 + 0x28) <<
                                                    0x10,&stack0x00001148,
                                    *(undefined8 *)
                                     Method_PlayFab_PlayFabMultiplayerInstanceAPI_LeaveLobbyAsServer__
                                   );
              if ((uVar40 & 1) != 0) {
                if ((unaff_x19[0x74] != 0) &&
                   (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 != 0)) {
                  if (*(uint *)((long)unaff_x19 + 0x32c) < *(uint *)(lVar29 + 0x18)) {
                    FUN_05f89350((in_stack_0000114c +
                                 (*(float *)(lVar29 + (long)(int)*(uint *)((long)unaff_x19 + 0x32c)
                                                      * (long)(int)unaff_w23 + 0x138) -
                                 *(float *)(unaff_x19 + 0xcb)) / unaff_s12) - in_stack_00001158,
                                 in_stack_0000114c,in_stack_00001158,&stack0x00001270,0);
                    goto LAB_05cbe788;
                  }
                  goto LAB_05cc45e8;
                }
                goto LAB_05cc446c;
              }
            }
          }
        }
        else {
          if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
          goto LAB_05cc446c;
          if (*(uint *)(lVar29 + 0x18) <= uVar15) goto LAB_05cc45e8;
          lVar29 = *(long *)(lVar29 + (long)(int)uVar15 * (long)(int)unaff_w23 + 0x30);
          if ((lVar29 == 0) || (lVar29 = *(long *)(lVar29 + 0x20), lVar29 == 0)) goto LAB_05cc446c;
          uVar13 = FUN_05f84fd8(lVar29,0);
          if ((*_fStack0000000000000100 == 0) ||
             (((unaff_x19[0x20] == 0 || (lVar29 = *(long *)(unaff_x19[0x20] + 0x178), lVar29 == 0))
              || (lVar29 = *(long *)(lVar29 + 0x48), lVar29 == 0)))) goto LAB_05cc446c;
          uVar40 = FUN_048b1190(lVar29,uVar13 | *(int *)(*_fStack0000000000000100 + 0x28) << 0x10,
                                &stack0x00001178,
                                *(undefined8 *)
                                 Method_PlayFab_PlayFabMultiplayerInstanceAPI_LeaveLobbyAsServer__);
          if ((uVar40 & 1) != 0) {
            if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
            goto LAB_05cc446c;
            if (*(uint *)(lVar29 + 0x18) <= *(uint *)((long)unaff_x19 + 0x32c)) goto LAB_05cc45e8;
            FUN_05f89350((in_stack_0000117c +
                         (*(float *)(lVar29 + (long)(int)*(uint *)((long)unaff_x19 + 0x32c) *
                                              (long)(int)unaff_w23 + 0x138) -
                         *(float *)(unaff_x19 + 0xcb)) / unaff_s12) - in_stack_00001188,
                         in_stack_0000117c,in_stack_00001188,&stack0x00001270,0);
LAB_05cbe788:
            FUN_05f89360(&stack0x00001270,0);
            fVar49 = 0.0;
          }
        }
      }
    }
    else {
      *(uint *)((long)unaff_x19 + 0x32c) = uVar13;
    }
    fVar66 = (float)FUN_05f89358(&stack0x00001270,0);
    fVar50 = (float)FUN_05f89358(&stack0x00001270,0);
    if ((char)unaff_x19[0x1e] != '\0') {
      fVar67 = *(float *)(unaff_x19 + 0xcb);
      fVar51 = (float)FUN_05f84e30(&stack0x00001280,0);
      fVar67 = fVar67 - unaff_s12 * fVar51 * (unaff_s15 - *(float *)(unaff_x19 + 0x60));
      *(float *)(unaff_x19 + 0xcb) = fVar67;
      if ((uVar14 != 0) || (in_stack_0000133c == 0x200b)) {
        *(float *)(unaff_x19 + 0xcb) = fVar67 - in_stack_00000108 * *(float *)(unaff_x19 + 0x5c);
      }
    }
    fVar67 = *(float *)(unaff_x19 + 0x5b);
    fVar51 = 0.0;
    if (fVar67 != 0.0) {
      if (((*(char *)((long)unaff_x19 + 0x2dc) == '\0') || (0x3a < in_stack_0000133c)) ||
         (fVar51 = 0.25, (1L << ((ulong)in_stack_0000133c & 0x3f) & 0x400500000000000U) == 0)) {
        fVar51 = 0.5;
      }
      fVar53 = (float)FUN_05f84e10(&stack0x00001280,0);
      fVar54 = (float)FUN_05f84e20(&stack0x00001280,0);
      fVar51 = (unaff_s15 - *(float *)(unaff_x19 + 0x60)) *
               (fVar67 * fVar51 - unaff_s12 * (fVar53 * 0.5 + fVar54));
      *(float *)(unaff_x19 + 0xcb) = fVar51 + *(float *)(unaff_x19 + 0xcb);
    }
    if (((cVar27 == '\0') && (*(int *)((long)unaff_x19 + 0x65c) == 0)) &&
       ((*(byte *)((long)unaff_x19 + 0x284) & 1) != 0)) {
      lVar29 = unaff_x19[0x23];
      if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar40 = FUN_05ee1474(lVar29,0,0);
      fVar54 = 0.0;
      if ((uVar40 & 1) != 0) {
        lVar29 = unaff_x19[0x23];
        if (*(int *)(*(long *)PTR_DAT_06649ad0 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        plVar46 = (long *)PTR_DAT_06649ad0;
        if (lVar29 == 0) goto LAB_05cc446c;
        uVar40 = FUN_05eb4d10(lVar29,*(undefined4 *)
                                      (*(long *)(*(long *)PTR_DAT_06649ad0 + 0xb8) + 0x6c),0);
        if ((uVar40 & 1) != 0) {
          lVar29 = unaff_x19[0x23];
          if (*(int *)(*plVar46 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            plVar46 = (long *)PTR_DAT_06649ad0;
          }
          if (lVar29 == 0) goto LAB_05cc446c;
          fVar67 = (float)thunk_FUN_05eb6d50(lVar29,*(undefined4 *)
                                                     (*(long *)(*plVar46 + 0xb8) + 0x6c),0);
          if ((unaff_x19[0x20] == 0) || (unaff_x19[0x23] == 0)) goto LAB_05cc446c;
          fVar53 = *(float *)(unaff_x19[0x20] + 0x1a8);
          fVar54 = (float)thunk_FUN_05eb6d50(unaff_x19[0x23],
                                             *(undefined4 *)
                                              (*(long *)(*(long *)PTR_DAT_06649ad0 + 0xb8) + 0xe4),0
                                            );
          fVar54 = fVar54 * fVar67 * fVar53 * 0.25;
          if (fVar67 < unaff_s13 + fVar54) {
            unaff_s13 = fVar67 - fVar54;
          }
        }
      }
      if (unaff_x19[0x20] == 0) goto LAB_05cc446c;
      fVar67 = *(float *)(unaff_x19[0x20] + 0x1ac);
    }
    else {
      lVar29 = unaff_x19[0x23];
      if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar40 = FUN_05ee1474(lVar29,0,0);
      fVar67 = 0.0;
      if ((uVar40 & 1) != 0) {
        lVar29 = unaff_x19[0x23];
        if (*(int *)(*(long *)PTR_DAT_06649ad0 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        plVar46 = (long *)PTR_DAT_06649ad0;
        if (lVar29 == 0) goto LAB_05cc446c;
        uVar40 = FUN_05eb4d10(lVar29,*(undefined4 *)
                                      (*(long *)(*(long *)PTR_DAT_06649ad0 + 0xb8) + 0x6c),0);
        if ((uVar40 & 1) != 0) {
          lVar29 = unaff_x19[0x23];
          if (*(int *)(*plVar46 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            plVar46 = (long *)PTR_DAT_06649ad0;
          }
          if (lVar29 == 0) goto LAB_05cc446c;
          uVar40 = FUN_05eb4d10(lVar29,*(undefined4 *)(*(long *)(*plVar46 + 0xb8) + 0xe4),0);
          if ((uVar40 & 1) != 0) {
            lVar29 = unaff_x19[0x23];
            if (*(int *)(*plVar46 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
              plVar46 = (long *)PTR_DAT_06649ad0;
            }
            if (lVar29 != 0) {
              fVar53 = (float)thunk_FUN_05eb6d50(lVar29,*(undefined4 *)
                                                         (*(long *)(*plVar46 + 0xb8) + 0x6c),0);
              if ((unaff_x19[0x20] != 0) && (unaff_x19[0x23] != 0)) {
                fVar63 = *(float *)(unaff_x19[0x20] + 0x1a0);
                fVar54 = (float)thunk_FUN_05eb6d50(unaff_x19[0x23],
                                                   *(undefined4 *)
                                                    (*(long *)(*(long *)PTR_DAT_06649ad0 + 0xb8) +
                                                    0xe4),0);
                fVar54 = fVar54 * fVar53 * fVar63 * 0.25;
                if (fVar53 < unaff_s13 + fVar54) {
                  unaff_s13 = fVar53 - fVar54;
                }
                goto LAB_05cbeb4c;
              }
            }
            goto LAB_05cc446c;
          }
        }
      }
      fVar54 = 0.0;
    }
LAB_05cbeb4c:
    fVar64 = *(float *)(unaff_x19 + 0xcb);
    fVar53 = (float)FUN_05f84e20(&stack0x00001280,0);
    fVar69 = *(float *)((long)unaff_x19 + 0x47c);
    fVar63 = (float)FUN_05f89348(&stack0x00001270,0);
    fVar64 = fVar64 + (unaff_s15 - *(float *)(unaff_x19 + 0x60)) *
                      unaff_s12 * (fVar63 + ((fVar53 * fVar69 - unaff_s13) - fVar54));
    fVar53 = (float)FUN_05f84e28(&stack0x00001280,0);
    fVar63 = (float)FUN_05f89358(&stack0x00001270,0);
    fStack0000000000000180 =
         *(float *)((long)unaff_x19 + 0x634) +
         ((fStack000000000000017c + unaff_s12 * (unaff_s13 + fVar53 + fVar63)) -
         *(float *)((long)unaff_x19 + 0x4ec));
    fVar53 = (float)FUN_05f84e18(&stack0x00001280,0);
    fVar53 = fStack0000000000000180 - unaff_s12 * (unaff_s13 + unaff_s13 + fVar53);
    fVar63 = (float)FUN_05f84e10(&stack0x00001280,0);
    fVar63 = fVar64 + (unaff_s15 - *(float *)(unaff_x19 + 0x60)) *
                      unaff_s12 *
                      (fVar54 + fVar54 +
                      unaff_s13 + unaff_s13 + fVar63 * *(float *)((long)unaff_x19 + 0x47c));
    fVar69 = fVar64;
    fVar65 = fVar63;
    if (((*(int *)((long)unaff_x19 + 0x65c) == 0) && (cVar27 == '\0')) &&
       ((*(byte *)((long)unaff_x19 + 0x284) >> 1 & 1) != 0)) {
      if (unaff_x19[0x20] == 0) goto LAB_05cc446c;
      lVar29 = unaff_x19[0xc1];
      fVar69 = (float)FUN_05f84b5c(unaff_x19[0x20] + 0x28,0);
      if (unaff_x19[0x20] == 0) goto LAB_05cc446c;
      fVar57 = (float)FUN_05f84b7c(unaff_x19[0x20] + 0x28,0);
      if (unaff_x19[0x20] == 0) goto LAB_05cc446c;
      fVar70 = *(float *)((long)unaff_x19 + 0x43c);
      fVar71 = *(float *)((long)unaff_x19 + 0x634);
      fVar65 = (float)(int)lVar29 * fStack0000000000000058;
      fVar60 = (float)FUN_05f84b2c(unaff_x19[0x20] + 0x28,0);
      fVar60 = fVar60 * fVar70 * (fVar69 - (fVar57 + fVar71)) * 0.5;
      fVar69 = (float)FUN_05f84e28(&stack0x00001280,0);
      fVar71 = fVar65 * unaff_s12 * ((fVar54 + unaff_s13 + fVar69) - fVar60);
      fVar57 = (float)FUN_05f84e28(&stack0x00001280,0);
      fVar70 = (float)FUN_05f84e18(&stack0x00001280,0);
      fStack0000000000000180 = fStack0000000000000180 + 0.0;
      unaff_s15 = 1.0;
      fVar53 = fVar53 + 0.0;
      fVar69 = fVar64 + fVar71;
      fVar65 = fVar65 * unaff_s12 * ((((fVar57 - fVar70) - unaff_s13) - fVar54) - fVar60);
      fVar64 = fVar64 + fVar65;
      fVar65 = fVar63 + fVar65;
      fVar63 = fVar63 + fVar71;
    }
    uVar68 = *in_stack_000001a8;
    uVar22 = in_stack_000001a8[1];
    if (DAT_06a492ea == '\0') {
      FUN_02d4dc40(PTR_DAT_066463a8);
      DAT_06a492ea = '\x01';
    }
    uVar55 = **(undefined8 **)(*(long *)PTR_DAT_066463a8 + 0xb8);
    uVar58 = (*(undefined8 **)(*(long *)PTR_DAT_066463a8 + 0xb8))[1];
    if (DAT_012752bc <
        (float)((ulong)uVar22 >> 0x20) * (float)((ulong)uVar58 >> 0x20) +
        (float)uVar22 * (float)uVar58 +
        (float)uVar68 * (float)uVar55 +
        (float)((ulong)uVar68 >> 0x20) * (float)((ulong)uVar55 >> 0x20)) {
      fVar57 = 0.0;
      auVar59._4_12_ = SUB1612(ZEXT816(0),4);
      auVar59._0_4_ = fVar53;
      uVar68 = auVar59._0_8_;
      uVar40 = (ulong)(uint)fStack0000000000000180;
      uVar22 = uVar68;
    }
    else {
      FUN_05ece478(&stack0x00001340,*(undefined4 *)((long)unaff_x19 + 0x46c),(int)unaff_x19[0x8e],
                   *(undefined4 *)((long)unaff_x19 + 0x474),(int)unaff_x19[0x8f],0);
      fVar65 = (fVar63 + fVar64) * 0.5;
      fVar60 = (fVar53 + fStack0000000000000180) * 0.5;
      unaff_x25[0x16b] = in_stack_00001358;
      unaff_x25[0x16a] = CONCAT44(in_stack_00001354,in_stack_00001350);
      unaff_x25[0x169] = in_stack_00001348;
      unaff_x25[0x168] = in_stack_00001340;
      unaff_x25[0x16d] = in_stack_00001368;
      unaff_x25[0x16c] = in_stack_00001360;
      fVar63 = 0.0;
      unaff_x25[0x16f] = in_stack_00001378;
      unaff_x25[0x16e] = in_stack_00001370;
      auVar56 = ZEXT416((uint)(fStack0000000000000180 - fVar60));
      fVar69 = (float)FUN_05ece378(&stack0x00001100,0);
      fVar69 = fVar65 + fVar69;
      fVar70 = 0.0;
      uVar40 = CONCAT44(fVar63 + 0.0,fVar60 + auVar56._0_4_);
      auVar56 = ZEXT416((uint)(fVar53 - fVar60));
      fVar64 = (float)FUN_05ece378(&stack0x00001100,0);
      fVar64 = fVar65 + fVar64;
      fVar57 = 0.0;
      uVar68 = CONCAT44(fVar70 + 0.0,fVar60 + auVar56._0_4_);
      auVar56 = ZEXT416((uint)(fStack0000000000000180 - fVar60));
      fVar63 = (float)FUN_05ece378(&stack0x00001100,0);
      fVar63 = fVar65 + fVar63;
      fVar70 = 0.0;
      fStack0000000000000180 = fVar60 + auVar56._0_4_;
      fVar57 = fVar57 + 0.0;
      auVar56 = ZEXT416((uint)(fVar53 - fVar60));
      unaff_s15 = 1.0;
      fVar53 = (float)FUN_05ece378(&stack0x00001100,0);
      fVar65 = fVar65 + fVar53;
      uVar22 = CONCAT44(fVar70 + 0.0,fVar60 + auVar56._0_4_);
    }
    if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
    goto LAB_05cc446c;
    if (*(uint *)(lVar29 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
    lVar29 = lVar29 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23;
    *(float *)(lVar29 + 0x114) = fVar64;
    *(undefined8 *)(lVar29 + 0x118) = uVar68;
    if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
    goto LAB_05cc446c;
    if (*(uint *)(lVar29 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
    lVar29 = lVar29 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23;
    *(float *)(lVar29 + 0x108) = fVar69;
    *(ulong *)(lVar29 + 0x10c) = uVar40;
    if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
    goto LAB_05cc446c;
    if (*(uint *)(lVar29 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
    lVar29 = lVar29 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23;
    *(float *)(lVar29 + 0x120) = fVar63;
    *(ulong *)(lVar29 + 0x124) = CONCAT44(fVar57,fStack0000000000000180);
    if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
    goto LAB_05cc446c;
    if (*(uint *)(lVar29 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
    lVar29 = lVar29 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23;
    *(float *)(lVar29 + 300) = fVar65;
    *(undefined8 *)(lVar29 + 0x130) = uVar22;
    if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
    goto LAB_05cc446c;
    uVar13 = *(uint *)((long)unaff_x19 + 0x4a4);
    fVar69 = *(float *)(unaff_x19 + 0xcb);
    fVar53 = (float)FUN_05f89348(&stack0x00001270,0);
    if (*(uint *)(lVar29 + 0x18) <= uVar13) goto LAB_05cc45e8;
    *(float *)(lVar29 + (long)(int)uVar13 * (long)(int)unaff_w23 + 0x138) =
         fVar69 + unaff_s12 * fVar53;
    if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
    goto LAB_05cc446c;
    uVar13 = *(uint *)((long)unaff_x19 + 0x4a4);
    fVar69 = *(float *)((long)unaff_x19 + 0x4ec);
    fVar65 = *(float *)((long)unaff_x19 + 0x634);
    fVar53 = (float)FUN_05f89358(&stack0x00001270,0);
    if (*(uint *)(lVar29 + 0x18) <= uVar13) goto LAB_05cc45e8;
    *(float *)(lVar29 + (long)(int)uVar13 * (long)(int)unaff_w23 + 0x144) =
         (fStack000000000000017c - fVar69) + fVar65 + unaff_s12 * fVar53;
    if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
    goto LAB_05cc446c;
    uVar15 = *(uint *)(in_stack_000001a8 + 7);
    if (*(uint *)(lVar29 + 0x18) <= uVar15) goto LAB_05cc45e8;
    lVar29 = lVar29 + 0x20;
    *(float *)(lVar29 + (long)(int)uVar15 * (long)(int)unaff_w23 + 0x138) =
         (fVar63 - fVar64) / ((float)uVar40 - (float)uVar68);
    fVar66 = unaff_s12 * (fStack0000000000000148 + fVar66);
    if (*(int *)((long)unaff_x19 + 0x65c) == 0) {
      fVar66 = fVar66 / fStack000000000000015c;
      fVar50 = (unaff_s12 * (fStack0000000000000144 + fVar50)) / fStack000000000000015c;
    }
    else {
      fVar50 = unaff_s12 * (fStack0000000000000144 + fVar50);
    }
    fVar53 = *(float *)((long)unaff_x19 + 0x634);
    uVar2 = *(uint *)(unaff_x19 + 0x95);
    if ((uVar14 == 0) || (uVar15 == uVar2)) {
      fVar66 = fVar66 + fVar53;
      fVar50 = fVar50 + fVar53;
      fVar63 = fVar66;
      fVar69 = fVar50;
      if (fVar53 != 0.0) {
        fVar63 = (fVar66 - fVar53) / *(float *)((long)unaff_x19 + 0x43c);
        fVar69 = (fVar50 - fVar53) / *(float *)((long)unaff_x19 + 0x43c);
        if (fVar63 <= fVar66) {
          fVar63 = fVar66;
        }
        if (fVar50 <= fVar69) {
          fVar69 = fVar50;
        }
      }
      lVar29 = lVar29 + (long)(int)uVar15 * (long)(int)unaff_w23;
      fVar53 = fVar63;
      if (fVar63 <= *(float *)((long)unaff_x19 + 0x4dc)) {
        fVar53 = *(float *)((long)unaff_x19 + 0x4dc);
      }
      fVar65 = fVar69;
      if (*(float *)(unaff_x19 + 0x9c) <= fVar69) {
        fVar65 = *(float *)(unaff_x19 + 0x9c);
      }
      *(float *)((long)unaff_x19 + 0x4dc) = fVar53;
      *(float *)(unaff_x19 + 0x9c) = fVar65;
      *(float *)(lVar29 + 300) = fVar63;
      *(float *)(lVar29 + 0x130) = fVar69;
      fVar63 = *(float *)((long)unaff_x19 + 0x4ec);
      *(float *)(lVar29 + 0x120) = fVar66 - fVar63;
      *(float *)((long)unaff_x19 + 0x4d4) = fVar66 - fVar63;
      *(float *)(lVar29 + 0x128) = fVar50 - fVar63;
      *(float *)(unaff_x19 + 0x9b) = fVar50 - fVar63;
      if (((int)unaff_x19[0x97] == 0) || (*(char *)((long)unaff_x19 + 0x374) != '\0')) {
        *(float *)((long)unaff_x19 + 0x4cc) = fVar53;
        if (unaff_x19[0x20] == 0) goto LAB_05cc446c;
        fVar50 = *(float *)(unaff_x19 + 0x9a);
        fVar53 = (float)FUN_05f84b5c(unaff_x19[0x20] + 0x28,0);
        fStack000000000000015c = (unaff_s12 * fVar53) / fStack000000000000015c;
        if (fVar50 <= fStack000000000000015c) {
          fVar50 = fStack000000000000015c;
        }
        fVar63 = *(float *)((long)unaff_x19 + 0x4ec);
        *(float *)(unaff_x19 + 0x9a) = fVar50;
      }
      if (fVar63 == 0.0) {
        fVar50 = *(float *)(unaff_x19 + 0x99);
        if (*(float *)(unaff_x19 + 0x99) <= fVar66) {
          fVar50 = fVar66;
        }
        *(float *)(unaff_x19 + 0x99) = fVar50;
      }
    }
    else {
      lVar29 = lVar29 + (long)(int)uVar15 * (long)(int)unaff_w23;
      uVar22 = in_stack_000001a8[0xe];
      *(undefined8 *)(lVar29 + 300) = uVar22;
      fVar63 = *(float *)((long)unaff_x19 + 0x4ec);
      fVar66 = (float)uVar22 - fVar63;
      fVar50 = (float)((ulong)uVar22 >> 0x20) - fVar63;
      *(float *)(lVar29 + 0x120) = fVar66;
      *(float *)(lVar29 + 0x128) = fVar50;
      in_stack_000001a8[0xd] = CONCAT44(fVar50,fVar66);
    }
    lVar29 = unaff_x19[0x74];
    if ((lVar29 == 0) || (lVar32 = *(long *)(lVar29 + 0x38), lVar32 == 0)) goto LAB_05cc446c;
    uVar13 = *(uint *)(in_stack_000001a8 + 7);
    if (*(uint *)(lVar32 + 0x18) <= uVar13) goto LAB_05cc45e8;
    lVar32 = lVar32 + (long)(int)uVar13 * (long)(int)unaff_w23;
    *(undefined1 *)(lVar32 + 400) = 0;
    uVar44 = *(uint *)(unaff_x19 + 0x54);
    if ((((in_stack_0000133c != 9) &&
         ((in_stack_0000133c != 0x200b && uVar14 == 0 ||
          ((*(uint *)((long)unaff_x19 + 0x304) & 0xfffffffe) != 2)))) &&
        ((uVar14 != 0 ||
         (((in_stack_0000133c == 3 || (in_stack_0000133c == 0x200b)) || (in_stack_0000133c == 0xad))
         )))) && ((in_stack_0000133c != 0xad || ((uint)fStack000000000000005c & 1) != 0 &&
                  (*(int *)((long)unaff_x19 + 0x65c) != 1)))) {
      if (((in_stack_0000133c & 0xfffffffe) == 10) && ((int)unaff_x19[0x62] == 6)) {
        fVar48 = 0.0;
        if ((0.0 < fVar63) && ((char)unaff_x19[0x5e] == '\0')) {
          fVar48 = *(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4e4);
        }
        param_3 = *(float *)((long)unaff_x19 + 0x4cc);
        param_2 = ZEXT416((uint)in_stack_000000e0._4_4_);
        if (in_stack_000000e0._4_4_ < (param_3 - (*(float *)(unaff_x19 + 0x9c) - fVar63)) + fVar48)
        {
          if (*(int *)((long)unaff_x19 + 0x314) == -1) {
            *(uint *)((long)unaff_x19 + 0x314) = uVar13;
          }
          unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
          if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__ +
                      0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar16 = FUN_05d11230();
          lVar29 = unaff_x19[99];
          if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar23 = FUN_05ee1474(lVar29,0,0);
          if ((uVar23 & 1) == 0) goto LAB_05cbfb88;
          plVar46 = (long *)unaff_x19[99];
          uVar21 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar46 == (long *)0x0) goto LAB_05cc446c;
          (**(code **)(*plVar46 + 0x558))(plVar46,uVar21,*(undefined8 *)(*plVar46 + 0x560));
          lVar29 = unaff_x19[99];
          if (lVar29 == 0) goto LAB_05cc446c;
          *(int *)(lVar29 + 0x438) = (int)unaff_x19[0x87];
          FUN_05d04ac0(lVar29,*(undefined4 *)((long)unaff_x19 + 0x4a4),0);
          plVar46 = (long *)unaff_x19[99];
          if (plVar46 == (long *)0x0) goto LAB_05cc446c;
          (**(code **)(*plVar46 + 0x7d8))(plVar46,0,0,*(undefined8 *)(*plVar46 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x65) = 1;
          goto LAB_05cbfb88;
        }
      }
      if ((((in_stack_0000133c - 0x2007 < 0x23) &&
           ((1L << ((ulong)(in_stack_0000133c - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
          (in_stack_0000133c - 10 < 2)) || (in_stack_0000133c == 0xa0)) {
        unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
        if (in_stack_0000133c != 0xad) goto LAB_05cbfdd4;
      }
      else {
        if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar23 = FUN_04f758f0(in_stack_0000133c,0);
        if (((uVar23 & 1) != 0) && (in_stack_0000133c != 0xad)) {
LAB_05cbfdd4:
          unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
          if ((in_stack_0000133c == 0x200b) || (in_stack_0000133c == 0x2060)) goto LAB_05cbfe80;
          lVar29 = unaff_x19[0x74];
          if ((lVar29 == 0) || (lVar32 = *(long *)(lVar29 + 0x50), lVar32 == 0)) goto LAB_05cc446c;
          if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_05cc45e8;
          lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
          *(int *)(lVar32 + 0x2c) = *(int *)(lVar32 + 0x2c) + 1;
          *(int *)(lVar29 + 0x20) = *(int *)(lVar29 + 0x20) + 1;
        }
        unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
        if (in_stack_0000133c == 0xa0) {
          if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x50), lVar29 == 0))
          goto LAB_05cc446c;
          if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_05cc45e8;
          lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
          *(int *)(lVar29 + 0x20) = *(int *)(lVar29 + 0x20) + 1;
        }
      }
      goto LAB_05cbfe80;
    }
    *(undefined1 *)(lVar32 + 400) = 1;
    pfVar33 = _fStack0000000000000098;
    pfVar35 = _fStack00000000000000b8;
    if (uVar72 == uVar18) {
      lVar29 = *(long *)(lVar29 + 0x50);
      if (lVar29 == 0) goto LAB_05cc446c;
      if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_05cc45e8;
      lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
      pfVar35 = (float *)(lVar29 + 100);
      pfVar33 = (float *)(lVar29 + 0x68);
    }
    fVar53 = *pfVar35;
    fVar63 = *pfVar33;
    fVar66 = *(float *)(unaff_x19 + 0x73);
    fVar50 = 0.0;
    fVar69 = *(float *)(unaff_x19 + 0xcb);
    fStack000000000000014c = (in_stack_000000b0 - fVar53) - fVar63;
    bVar10 = true;
    if ((fVar66 <= fStack000000000000014c) && (bVar10 = false, !NAN(fVar66))) {
      bVar10 = fVar66 == -1.0;
    }
    if (!bVar10) {
      fStack000000000000014c = fVar66;
    }
    fVar66 = 0.0;
    if ((char)unaff_x19[0x1e] == '\0') {
      fVar66 = (float)FUN_05f84e30(&stack0x00001280,0);
    }
    fVar64 = *(float *)((long)unaff_x19 + 0x4ec);
    fVar65 = *(float *)(unaff_x19 + 0x60);
    param_3 = fVar48;
    if (in_stack_0000133c != 0xad) {
      param_3 = unaff_s12;
    }
    if ((0.0 < fVar64) && ((char)unaff_x19[0x5e] == '\0')) {
      fVar50 = *(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4e4);
    }
    iVar17 = *(int *)(in_stack_000001a8 + 7);
    param_2 = ZEXT416((uint)fVar54);
    fVar50 = (*(float *)((long)unaff_x19 + 0x4cc) - (*(float *)(unaff_x19 + 0x9c) - fVar64)) +
             fVar50;
    if (in_stack_000000e0._4_4_ < fVar50) {
      if (*(int *)((long)unaff_x19 + 0x314) == -1) {
        *(int *)((long)unaff_x19 + 0x314) = iVar17;
      }
      unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
      fVar48 = DAT_012751b0;
      if ((char)unaff_x19[0x4c] != '\0') {
        if (0.0 < fVar64) {
          fVar54 = *(float *)((long)unaff_x19 + 0x2f4);
          if ((fVar54 < *(float *)(unaff_x19 + 0x5d)) &&
             (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
            fVar48 = *(float *)(unaff_x19 + 0x5d) +
                     ((in_stack_00000018._4_4_ - fVar50) / (float)(int)unaff_x19[0x97]) /
                     fStack0000000000000050;
            if (fVar48 <= fVar54) {
              fVar48 = fVar54;
            }
            goto LAB_05cc4498;
          }
        }
        fVar50 = *(float *)((long)unaff_x19 + 0x20c);
        fVar54 = *(float *)(unaff_x19 + 0x4f);
        if ((fVar54 < fVar50) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
          *(float *)((long)unaff_x19 + 0x264) = fVar50;
          fVar49 = (fVar50 - *(float *)(unaff_x19 + 0x4d)) * 0.5;
          if (fVar49 <= fVar48) {
            fVar49 = fVar48;
          }
          fVar49 = (fVar50 - fVar49) * 20.0 + 0.5;
          fVar48 = DAT_01275250;
          if (fVar49 != INFINITY) {
            fVar48 = (float)(int)fVar49 / 20.0;
          }
          if (fVar48 <= fVar54) {
            fVar48 = fVar54;
          }
          *(float *)((long)unaff_x19 + 0x20c) = fVar48;
          return;
        }
      }
      iVar20 = (int)unaff_x19[0x62];
      if (iVar20 < 5) {
        if (iVar20 == 1) {
          lVar29 = *(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
          if (*(int *)(lVar29 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            lVar29 = *unaff_x28;
          }
          lVar32 = *(long *)(lVar29 + 0xb8);
          if (*(int *)(lVar32 + 0x1708) != 0) {
            if (*(int *)(lVar29 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
              lVar32 = *(long *)(*unaff_x28 + 0xb8);
            }
            FUN_03cc2b0c(&stack0x00001340,lVar32 + 0x1338,
                         *(undefined8 *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_RemoveMember__)
            ;
            param_5 = &stack0x00001000;
            param_4 = &stack0x00000d48;
            goto code_r0x05cbf814;
          }
LAB_05cbfc40:
          in_stack_000001a8[7] = 0;
          fVar48 = unaff_s12;
          uVar16 = 0xffffffff;
          uVar21 = DAT_01274108;
          goto LAB_05cbdbd4;
        }
        if (iVar20 != 3) goto LAB_05cbf5cc;
        if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__ + 0xe4
                    ) == 0) {
          thunk_FUN_02dabd98();
        }
LAB_05cbf878:
        uVar16 = FUN_05d11230();
      }
      else {
        if (iVar20 == 5) {
          if (((int)uVar16 < 0) || (iVar17 == 0)) {
            *(undefined4 *)(in_stack_000001a8 + 7) = 0;
            uVar16 = 0xffffffff;
            unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
            fVar48 = unaff_s12;
            uVar21 = DAT_01274108;
          }
          else {
            param_2 = ZEXT416((uint)in_stack_000000e0._4_4_);
            if (in_stack_000000e0._4_4_ <
                *(float *)(in_stack_000001a8 + 0xe) - *(float *)(unaff_x19 + 0x9c)) {
              if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__
                          + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              goto LAB_05cbf878;
            }
            if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__ +
                        0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
            uVar16 = FUN_05d11230();
            *(undefined4 *)(unaff_x19 + 0x95) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
            lVar29 = *unaff_x28;
            *(undefined1 *)((long)unaff_x19 + 0x374) = 1;
            uVar22 = *(undefined8 *)(*(long *)(lVar29 + 0xb8) + 0x1730);
            *(undefined4 *)((long)unaff_x19 + 0x4e4) = 0;
            *(undefined4 *)((long)unaff_x19 + 0x4ec) = 0;
            *(float *)(unaff_x19 + 0xcb) = *(float *)((long)unaff_x19 + 0x444) + 0.0;
            uVar22 = NEON_rev64(uVar22,4);
            param_2 = ZEXT816(0);
            *(int *)(unaff_x19 + 0x97) = (int)unaff_x19[0x97] + 1;
            iVar17 = *(int *)((long)unaff_x19 + 0x4c4);
            in_stack_000001a8[0xe] = uVar22;
            unaff_x19[0x99] = 0;
            *(int *)((long)unaff_x19 + 0x4c4) = iVar17 + 1;
            fVar48 = unaff_s12;
          }
          goto LAB_05cbdbd4;
        }
        if (iVar20 != 6) goto LAB_05cbf5cc;
        if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__ + 0xe4
                    ) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar16 = FUN_05d11230();
        lVar29 = unaff_x19[99];
        if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar23 = FUN_05ee1474(lVar29,0,0);
        if ((uVar23 & 1) != 0) {
          plVar46 = (long *)unaff_x19[99];
          uVar21 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar46 == (long *)0x0) goto LAB_05cc446c;
          (**(code **)(*plVar46 + 0x558))(plVar46,uVar21,*(undefined8 *)(*plVar46 + 0x560));
          lVar29 = unaff_x19[99];
          if (lVar29 == 0) goto LAB_05cc446c;
          *(int *)(lVar29 + 0x438) = (int)unaff_x19[0x87];
          FUN_05d04ac0(lVar29,*(undefined4 *)((long)unaff_x19 + 0x4a4),0);
          plVar46 = (long *)unaff_x19[99];
          if (plVar46 == (long *)0x0) goto LAB_05cc446c;
          (**(code **)(*plVar46 + 0x7d8))(plVar46,0,0,*(undefined8 *)(*plVar46 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x65) = 1;
        }
      }
      unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
      fVar48 = unaff_s12;
      uVar21 = CONCAT44(3,iVar17);
      goto LAB_05cbdbd4;
    }
LAB_05cbf5cc:
    unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
    if ((uVar23 & 1) == 0) {
joined_r0x05cbf6b8:
      Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__ = (undefined *)unaff_x28;
      if (uVar14 == 0) {
        if (in_stack_0000133c == 0xad) {
          if ((unaff_x19[0x74] != 0) && (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 != 0)) {
            if (*(uint *)(in_stack_000001a8 + 7) < *(uint *)(lVar29 + 0x18)) {
              *(undefined1 *)
               (lVar29 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23 + 400) =
                   0;
              goto LAB_05cbfe80;
            }
            goto LAB_05cc45e8;
          }
          goto LAB_05cc446c;
        }
        if (*(int *)((long)unaff_x19 + 0x65c) == 1) {
          (**(code **)(*unaff_x19 + 0x8c8))();
        }
        else if (*(int *)((long)unaff_x19 + 0x65c) == 0) {
          (**(code **)(*unaff_x19 + 0x8b8))();
        }
        if (((uint)fStack0000000000000068 & 1) != 0) {
          *(undefined4 *)(in_stack_000001a8 + 8) = *(undefined4 *)(in_stack_000001a8 + 7);
        }
        *(undefined4 *)((long)unaff_x19 + 0x4b4) = *(undefined4 *)(in_stack_000001a8 + 7);
        *(int *)((long)unaff_x19 + 0x4bc) = *(int *)((long)unaff_x19 + 0x4bc) + 1;
        if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x50), lVar29 == 0))
        goto LAB_05cc446c;
        if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_05cc45e8;
        fStack0000000000000068 = 0.0;
        lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
        *(float *)(lVar29 + 100) = fVar53;
        *(float *)(lVar29 + 0x68) = fVar63;
      }
      else {
        lVar29 = unaff_x19[0x74];
        if ((lVar29 == 0) || (lVar32 = *(long *)(lVar29 + 0x38), lVar32 == 0)) goto LAB_05cc446c;
        uVar13 = *(uint *)(in_stack_000001a8 + 7);
        if (*(uint *)(lVar32 + 0x18) <= uVar13) goto LAB_05cc45e8;
        *(undefined1 *)(lVar32 + (long)(int)uVar13 * (long)(int)unaff_w23 + 400) = 0;
        *(uint *)((long)unaff_x19 + 0x4b4) = uVar13;
        lVar32 = *(long *)(lVar29 + 0x50);
        if (lVar32 == 0) goto LAB_05cc446c;
        uVar13 = *(uint *)(lVar32 + 0x18);
        if (uVar13 <= *(uint *)(unaff_x19 + 0x97)) goto LAB_05cc45e8;
        lVar32 = lVar32 + 0x20;
        lVar38 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
        iVar17 = *(int *)(lVar38 + 0xc) + 1;
        *(int *)(lVar38 + 0xc) = iVar17;
        uVar36 = *(uint *)(unaff_x19 + 0x97);
        *(int *)(unaff_x19 + 0x98) = iVar17;
        if (uVar13 <= uVar36) goto LAB_05cc45e8;
        lVar38 = lVar32 + (long)(int)uVar36 * 0x60;
        *(float *)(lVar38 + 0x44) = fVar53;
        *(float *)(lVar38 + 0x48) = fVar63;
        *(int *)(lVar29 + 0x20) = *(int *)(lVar29 + 0x20) + 1;
        if (in_stack_0000133c == 0xa0) {
          *(int *)(lVar32 + (long)(int)uVar36 * 0x60) =
               *(int *)(lVar32 + (long)(int)uVar36 * 0x60) + 1;
        }
      }
LAB_05cbfe80:
      if (((int)unaff_x19[0x62] == 1) && ((uVar72 != uVar18 || (in_stack_0000133c == 0x2d)))) {
        if (unaff_x19[0xce] == 0) goto LAB_05cc446c;
        fVar66 = *(float *)(unaff_x19 + 0x42);
        fVar48 = (float)FUN_05f84b24(unaff_x19[0xce] + 0x28,0);
        if (unaff_x19[0xce] == 0) goto LAB_05cc446c;
        fVar50 = (float)FUN_05f84b2c(unaff_x19[0xce] + 0x28,0);
        lVar29 = unaff_x19[0xcd];
        if ((lVar29 == 0) || (*(long *)(lVar29 + 0x20) == 0)) goto LAB_05cc446c;
        fVar54 = *(float *)((long)unaff_x19 + 0x43c);
        fVar63 = *(float *)(lVar29 + 0x2c);
        fVar53 = (float)FUN_05f85024(*(long *)(lVar29 + 0x20),0);
        uVar22 = *(undefined8 *)_fStack00000000000000b8;
        fVar53 = fVar54 * in_stack_00000120 * (fVar66 / fVar48) * fVar50 * fVar63 * fVar53;
        if ((in_stack_0000133c == 10) && (*(int *)((long)unaff_x19 + 0x4a4) != (int)unaff_x19[0x95])
           ) {
          if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
          goto LAB_05cc446c;
          uVar13 = *(int *)((long)unaff_x19 + 0x4a4) - 1;
          if (*(uint *)(lVar29 + 0x18) <= uVar13) goto LAB_05cc45e8;
          if (unaff_x19[0xce] == 0) goto LAB_05cc446c;
          fVar66 = *(float *)(lVar29 + (long)(int)uVar13 * (long)(int)unaff_w23 + 0x58);
          fVar48 = (float)FUN_05f84b24(unaff_x19[0xce] + 0x28,0);
          if (unaff_x19[0xce] == 0) goto LAB_05cc446c;
          fVar50 = (float)FUN_05f84b2c(unaff_x19[0xce] + 0x28,0);
          lVar29 = unaff_x19[0xcd];
          if ((lVar29 == 0) || (*(long *)(lVar29 + 0x20) == 0)) goto LAB_05cc446c;
          fVar54 = *(float *)((long)unaff_x19 + 0x43c);
          fVar63 = *(float *)(lVar29 + 0x2c);
          fVar53 = (float)FUN_05f85024(*(long *)(lVar29 + 0x20),0);
          if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x50), lVar29 == 0))
          goto LAB_05cc446c;
          if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_05cc45e8;
          uVar22 = *(undefined8 *)(lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60 + 100);
          fVar53 = fVar54 * in_stack_00000120 * (fVar66 / fVar48) * fVar50 * fVar63 * fVar53;
        }
        fVar66 = *(float *)((long)unaff_x19 + 0x4ec);
        fVar48 = 0.0;
        fVar50 = 0.0;
        if ((0.0 < fVar66) && ((char)unaff_x19[0x5e] == '\0')) {
          fVar50 = *(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4e4);
        }
        fVar54 = *(float *)((long)unaff_x19 + 0x4cc);
        fVar63 = *(float *)(unaff_x19 + 0x9c);
        fVar69 = *(float *)(unaff_x19 + 0xcb);
        fStack0000000000000180 = (float)uVar22;
        fStack0000000000000184 = (float)((ulong)uVar22 >> 0x20);
        if ((char)unaff_x19[0x1e] == '\0') {
          if ((unaff_x19[0xcd] == 0) || (lVar29 = *(long *)(unaff_x19[0xcd] + 0x20), lVar29 == 0))
          goto LAB_05cc446c;
          FUN_05f84fe8(&stack0x00001340,lVar29,0);
          fVar48 = (float)FUN_05f84e30(&stack0x000011e0,0);
        }
        fVar65 = *(float *)(unaff_x19 + 0x73);
        fStack0000000000000184 =
             (in_stack_000000b0 - fStack0000000000000180) - fStack0000000000000184;
        bVar10 = true;
        if ((fVar65 <= fStack0000000000000184) && (bVar10 = false, !NAN(fVar65))) {
          bVar10 = fVar65 == -1.0;
        }
        if (!bVar10) {
          fStack0000000000000184 = fVar65;
        }
        fVar65 = unaff_s15;
        if ((uVar44 & 0x18) != 0) {
          fVar65 = DAT_01275388;
        }
        if ((ABS(fVar69) + fVar53 * fVar48 * (unaff_s15 - *(float *)(unaff_x19 + 0x60)) <
             fVar65 * fStack0000000000000184) &&
           ((fVar54 - (fVar63 - fVar66)) + fVar50 < in_stack_000000e0._4_4_)) {
          if (*(int *)(*unaff_x28 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          FUN_05d115d4();
          lVar29 = *(long *)(*unaff_x28 + 0xb8);
          memcpy(&stack0x00001340,(void *)(lVar29 + 0x810),0x3b8);
          FUN_03cc2a20(lVar29 + 0x1338,&stack0x00001340,
                       *(undefined8 *)
                        Method_PlayFab_PlayFabMultiplayerInstanceAPI_RequestMultiplayerServer__);
        }
      }
      lVar29 = unaff_x19[0x74];
      if ((lVar29 == 0) || (lVar32 = *(long *)(lVar29 + 0x38), lVar32 == 0)) goto LAB_05cc446c;
      if (*(uint *)(lVar32 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_05cc45e8;
      lVar32 = lVar32 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * (long)(int)unaff_w23;
      uVar13 = *(uint *)(unaff_x19 + 0x97);
      *(uint *)(lVar32 + 0x5c) = uVar13;
      *(undefined4 *)(lVar32 + 0x60) = *(undefined4 *)((long)unaff_x19 + 0x4c4);
      if ((uVar72 == uVar18) ||
         ((in_stack_0000133c < 0xe && ((1 << (ulong)(in_stack_0000133c & 0x1f) & 0x2c00U) != 0)))) {
        lVar29 = *(long *)(lVar29 + 0x50);
        if (lVar29 == 0) goto LAB_05cc446c;
        if (*(uint *)(lVar29 + 0x18) <= uVar13) goto LAB_05cc45e8;
        if (*(int *)(lVar29 + (long)(int)uVar13 * 0x60 + 0x24) == 1) goto LAB_05cc0220;
      }
      else {
        lVar29 = *(long *)(lVar29 + 0x50);
        if (lVar29 == 0) goto LAB_05cc446c;
LAB_05cc0220:
        if (*(uint *)(lVar29 + 0x18) <= uVar13) goto LAB_05cc45e8;
        *(int *)(lVar29 + (long)(int)uVar13 * 0x60 + 0x6c) = (int)unaff_x19[0x54];
      }
      if (in_stack_0000133c == 9) {
        if (unaff_x19[0x20] == 0) goto LAB_05cc446c;
        fVar48 = (float)FUN_05f84bcc(unaff_x19[0x20] + 0x28,0);
        if (unaff_x19[0x20] == 0) goto LAB_05cc446c;
        fVar66 = (float)NEON_ucvtf((uint)*(byte *)(unaff_x19[0x20] + 0x1b1));
        fVar50 = *(float *)(unaff_x19 + 0xcb);
        param_2 = ZEXT416((uint)fVar50);
        fVar66 = unaff_s12 * fVar48 * fVar66;
        if ((char)unaff_x19[0x1e] == '\0') {
          param_3 = fVar66 * (float)(int)(fVar50 / fVar66);
          fVar48 = param_3;
          if (param_3 <= fVar50) {
            fVar48 = fVar66 + fVar50;
          }
        }
        else {
          param_3 = fVar66 * (float)(int)(fVar50 / fVar66);
          fVar48 = param_3;
          if (fVar50 <= param_3) {
            fVar48 = fVar50 - fVar66;
          }
        }
LAB_05cc0464:
        *(float *)(unaff_x19 + 0xcb) = fVar48;
      }
      else {
        fVar48 = *(float *)(unaff_x19 + 0x5b);
        if (fVar48 == 0.0) {
          fVar48 = *(float *)(unaff_x19 + 0xcb);
          if ((char)unaff_x19[0x1e] == '\0') {
            fVar50 = (float)FUN_05f84e30(&stack0x00001280,0);
            fVar53 = *(float *)(in_stack_000001a8 + 2);
            fVar51 = (float)FUN_05f89368(&stack0x00001270,0);
            if (unaff_x19[0x20] != 0) {
              param_3 = *(float *)(unaff_x19 + 0x60);
              fVar66 = unaff_s15 - param_3;
              fVar48 = fVar48 + fVar66 * (*(float *)((long)unaff_x19 + 0x2d4) +
                                         unaff_s12 * (fVar50 * fVar53 + fVar51) +
                                         in_stack_00000108 *
                                         (fVar67 + fVar49 + *(float *)(unaff_x19[0x20] + 0x1a4)));
              *(float *)(unaff_x19 + 0xcb) = fVar48;
              goto joined_r0x05cc03a4;
            }
            goto LAB_05cc446c;
          }
          fVar66 = (float)FUN_05f89368(&stack0x00001270,0);
          if (unaff_x19[0x20] == 0) goto LAB_05cc446c;
          param_3 = *(float *)(unaff_x19 + 0x60);
          param_2 = ZEXT416((uint)(unaff_s15 - param_3));
          fVar48 = fVar48 - (unaff_s15 - param_3) *
                            (*(float *)((long)unaff_x19 + 0x2d4) +
                            unaff_s12 * fVar66 +
                            in_stack_00000108 *
                            (fVar67 + fVar49 + *(float *)(unaff_x19[0x20] + 0x1a4)));
          *(float *)(unaff_x19 + 0xcb) = fVar48;
          if ((uVar14 != 0) || (in_stack_0000133c == 0x200b)) {
            param_2 = ZEXT416((uint)(in_stack_00000108 * *(float *)(unaff_x19 + 0x5c)));
            param_3 = in_stack_00000108;
            fVar48 = fVar48 - in_stack_00000108 * *(float *)(unaff_x19 + 0x5c);
            goto LAB_05cc0464;
          }
        }
        else {
          if (((*(char *)((long)unaff_x19 + 0x2dc) != '\0') && (in_stack_0000133c < 0x3b)) &&
             ((1L << ((ulong)in_stack_0000133c & 0x3f) & 0x400500000000000U) != 0)) {
            fVar48 = fVar48 * 0.5;
          }
          if (unaff_x19[0x20] == 0) goto LAB_05cc446c;
          param_3 = *(float *)(unaff_x19 + 0x60);
          fVar66 = *(float *)(unaff_x19 + 0xcb);
          fVar48 = fVar66 + (unaff_s15 - param_3) *
                            (*(float *)((long)unaff_x19 + 0x2d4) +
                            (fVar48 - fVar51) +
                            in_stack_00000108 * (fVar49 + *(float *)(unaff_x19[0x20] + 0x1a4)));
          *(float *)(unaff_x19 + 0xcb) = fVar48;
joined_r0x05cc03a4:
          if ((uVar14 != 0) || (param_2 = ZEXT416((uint)fVar66), in_stack_0000133c == 0x200b)) {
            param_2 = ZEXT416((uint)(in_stack_00000108 * *(float *)(unaff_x19 + 0x5c)));
            param_3 = in_stack_00000108;
            fVar48 = fVar48 + in_stack_00000108 * *(float *)(unaff_x19 + 0x5c);
            goto LAB_05cc0464;
          }
        }
      }
      lVar29 = unaff_x19[0x74];
      if ((lVar29 == 0) || (lVar32 = *(long *)(lVar29 + 0x38), lVar32 == 0)) goto LAB_05cc446c;
      uVar13 = *(uint *)(in_stack_000001a8 + 7);
      if (*(uint *)(lVar32 + 0x18) <= uVar13) goto LAB_05cc45e8;
      *(float *)(lVar32 + (long)(int)uVar13 * (long)(int)unaff_w23 + 0x13c) = fVar48;
      if (in_stack_0000133c == 0xd) {
        param_2 = ZEXT816(0);
        *(float *)(unaff_x19 + 0xcb) = *(float *)((long)unaff_x19 + 0x444) + 0.0;
      }
      if (((int)unaff_x19[0x62] == 5) &&
         (((0xd < in_stack_0000133c || ((1 << (ulong)(in_stack_0000133c & 0x1f) & 0x2c00U) == 0)) &&
          (1 < in_stack_0000133c - 0x2028)))) {
        lVar32 = *(long *)(lVar29 + 0x58);
        if (lVar32 == 0) goto LAB_05cc446c;
        iVar17 = *(int *)((long)unaff_x19 + 0x4c4) + 1;
        if (*(int *)(lVar32 + 0x18) < iVar17) {
          if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListSecretSummaries__ +
                      0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          FUN_0338e148((long *)(lVar29 + 0x58),iVar17,1,
                       *(undefined8 *)
                        Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListMultiplayerServers__);
          lVar29 = unaff_x19[0x74];
          if (lVar29 == 0) goto LAB_05cc446c;
        }
        unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
        lVar32 = *(long *)(lVar29 + 0x58);
        if (lVar32 == 0) goto LAB_05cc446c;
        uVar44 = *(uint *)((long)unaff_x19 + 0x4c4);
        if (*(uint *)(lVar32 + 0x18) <= uVar44) goto LAB_05cc45e8;
        lVar32 = lVar32 + 0x20;
        lVar38 = lVar32 + (long)(int)uVar44 * 0x14;
        *(int *)(lVar38 + 8) = (int)unaff_x19[0x99];
        fVar66 = *(float *)(lVar38 + 0x10);
        param_2 = ZEXT416((uint)fVar66);
        fVar48 = *(float *)(unaff_x19 + 0x9b);
        if (fVar66 <= *(float *)(unaff_x19 + 0x9b)) {
          fVar48 = fVar66;
        }
        *(float *)(lVar38 + 0x10) = fVar48;
        if (*(char *)((long)unaff_x19 + 0x374) != '\0') {
          *(undefined1 *)((long)unaff_x19 + 0x374) = 0;
          *(undefined4 *)(lVar32 + (long)(int)uVar44 * 0x14) =
               *(undefined4 *)((long)unaff_x19 + 0x4a4);
        }
        uVar13 = *(uint *)(in_stack_000001a8 + 7);
        *(uint *)(lVar32 + (long)(int)uVar44 * 0x14 + 4) = uVar13;
      }
      uVar44 = in_stack_0000133c;
      if (((in_stack_0000133c < 0xc) && ((1 << (ulong)(in_stack_0000133c & 0x1f) & 0xc08U) != 0)) ||
         ((in_stack_0000133c - 0x2028 < 2 ||
          ((in_stack_0000133c == 0x2d && uVar72 == uVar18 || (uVar13 == uStack0000000000000054))))))
      {
        if (0.0 < *(float *)((long)unaff_x19 + 0x4ec)) {
          fVar48 = *(float *)((long)unaff_x19 + 0x4dc);
          fVar66 = *(float *)((long)unaff_x19 + 0x4e4);
          if (*(int *)(*(long *)PTR_DAT_06646780 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          fVar48 = fVar48 - fVar66;
          if (((fStack0000000000000058 < ABS(fVar48)) && ((char)unaff_x19[0x5e] == '\0')) &&
             (*(char *)((long)unaff_x19 + 0x374) == '\0')) {
            FUN_05d11990();
            lVar29 = *unaff_x28;
            *(float *)(unaff_x19 + 0x9b) = *(float *)(unaff_x19 + 0x9b) - fVar48;
            *(float *)((long)unaff_x19 + 0x4ec) = fVar48 + *(float *)((long)unaff_x19 + 0x4ec);
            if (*(int *)(lVar29 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
              lVar29 = *unaff_x28;
            }
            lVar32 = *(long *)(lVar29 + 0xb8);
            if (*(int *)(lVar32 + 0x838) == (int)unaff_x19[0x97]) {
              if (*(int *)(lVar29 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
                lVar32 = *(long *)(*unaff_x28 + 0xb8);
              }
              FUN_03cc2b0c(&stack0x00000200,lVar32 + 0x1338,
                           *(undefined8 *)
                            Method_PlayFab_PlayFabMultiplayerInstanceAPI_RemoveMember__);
              lVar29 = *unaff_x28;
              memcpy((void *)(*(long *)(lVar29 + 0xb8) + 0x810),&stack0x00000200,0x3b8);
              thunk_FUN_02dc1ef0(*(long *)(lVar29 + 0xb8) + 0x8a8,0);
              lVar29 = *(long *)(*unaff_x28 + 0xb8);
              *(float *)(lVar29 + 0x848) = fVar48 + *(float *)(lVar29 + 0x848);
              *(float *)(lVar29 + 0x894) = fVar48 + *(float *)(lVar29 + 0x894);
              memcpy(&stack0x00001340,(void *)(lVar29 + 0x810),0x3b8);
              FUN_03cc2a20(lVar29 + 0x1338,&stack0x00001340,
                           *(undefined8 *)
                            Method_PlayFab_PlayFabMultiplayerInstanceAPI_RequestMultiplayerServer__)
              ;
            }
          }
        }
        fVar50 = *(float *)((long)unaff_x19 + 0x4ec);
        *(undefined1 *)((long)unaff_x19 + 0x374) = 0;
        fVar66 = *(float *)(unaff_x19 + 0x9c) - fVar50;
        fVar48 = *(float *)(unaff_x19 + 0x9b);
        if (fVar66 <= *(float *)(unaff_x19 + 0x9b)) {
          fVar48 = fVar66;
        }
        fVar51 = *(float *)((long)unaff_x19 + 0x4dc);
        *(float *)(unaff_x19 + 0x9b) = fVar48;
        if (in_stack_00001334 == '\0') {
          in_stack_00001338 = fVar48;
        }
        if ((*(char *)((long)unaff_x19 + 0x36c) != '\0') &&
           (((int)unaff_x19[0x6c] <= *(int *)((long)unaff_x19 + 0x4a4) ||
            ((int)unaff_x19[0x6d] <= (int)unaff_x19[0x97])))) {
          in_stack_00001334 = '\x01';
        }
        lVar29 = unaff_x19[0x74];
        if ((lVar29 == 0) || (lVar32 = *(long *)(lVar29 + 0x50), lVar32 == 0)) goto LAB_05cc446c;
        if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_05cc45e8;
        lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
        iVar20 = (int)unaff_x19[0x95];
        *(int *)(lVar32 + 0x38) = iVar20;
        iVar17 = iVar20;
        if (iVar20 <= *(int *)((long)unaff_x19 + 0x4ac)) {
          iVar17 = *(int *)((long)unaff_x19 + 0x4ac);
        }
        *(int *)((long)unaff_x19 + 0x4ac) = iVar17;
        *(int *)(lVar32 + 0x3c) = iVar17;
        iVar41 = *(int *)((long)unaff_x19 + 0x4a4);
        *(int *)(unaff_x19 + 0x96) = iVar41;
        *(int *)(lVar32 + 0x40) = iVar41;
        iVar19 = *(int *)((long)unaff_x19 + 0x4ac);
        if (iVar17 <= *(int *)((long)unaff_x19 + 0x4b4)) {
          iVar19 = *(int *)((long)unaff_x19 + 0x4b4);
        }
        *(int *)((long)unaff_x19 + 0x4b4) = iVar19;
        *(int *)(lVar32 + 0x44) = iVar19;
        *(int *)(lVar32 + 0x24) = (iVar41 - iVar20) + 1;
        iVar17 = *(int *)((long)unaff_x19 + 0x4bc);
        *(int *)(lVar32 + 0x28) = iVar17;
        *(int *)(lVar32 + 0x30) = (iVar19 - (iVar20 + iVar17)) + 1;
        lVar29 = *(long *)(lVar29 + 0x38);
        if (lVar29 == 0) goto LAB_05cc446c;
        if (*(uint *)(lVar29 + 0x18) <= *(uint *)(in_stack_000001a8 + 8)) goto LAB_05cc45e8;
        *(undefined4 *)(lVar32 + 0x70) =
             *(undefined4 *)
              (lVar29 + (long)(int)*(uint *)(in_stack_000001a8 + 8) * (long)(int)unaff_w23 + 0x114);
        *(float *)(lVar32 + 0x74) = fVar66;
        lVar29 = unaff_x19[0x74];
        if ((lVar29 == 0) || (lVar32 = *(long *)(lVar29 + 0x50), lVar32 == 0)) goto LAB_05cc446c;
        if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_05cc45e8;
        lVar29 = *(long *)(lVar29 + 0x38);
        if (lVar29 == 0) goto LAB_05cc446c;
        if (*(uint *)(lVar29 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4b4)) goto LAB_05cc45e8;
        fVar51 = fVar51 - fVar50;
        param_2 = ZEXT416((uint)fVar51);
        lVar32 = lVar32 + 0x20 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
        *(undefined4 *)(lVar32 + 0x58) =
             *(undefined4 *)
              (lVar29 + (long)(int)*(uint *)((long)unaff_x19 + 0x4b4) * (long)(int)unaff_w23 + 0x120
              );
        *(float *)(lVar32 + 0x5c) = fVar51;
        lVar29 = unaff_x19[0x74];
        if ((lVar29 == 0) || (lVar32 = *(long *)(lVar29 + 0x50), lVar32 == 0)) goto LAB_05cc446c;
        uVar13 = *(uint *)(unaff_x19 + 0x97);
        if (*(uint *)(lVar32 + 0x18) <= uVar13) goto LAB_05cc45e8;
        lVar32 = lVar32 + 0x20;
        lVar38 = lVar32 + (long)(int)uVar13 * 0x60;
        *(float *)(lVar38 + 0x28) = *(float *)(lVar38 + 0x58) - unaff_s12 * unaff_s13;
        *(float *)(lVar38 + 0x40) = fStack000000000000014c;
        if (*(int *)(lVar38 + 4) == 1) {
          *(int *)(lVar32 + (long)(int)uVar13 * 0x60 + 0x4c) = (int)unaff_x19[0x54];
        }
        if ((unaff_x19[0x20] == 0) || (lVar38 = *(long *)(lVar29 + 0x38), lVar38 == 0))
        goto LAB_05cc446c;
        uVar36 = *(uint *)((long)unaff_x19 + 0x4b4);
        if (*(uint *)(lVar38 + 0x18) <= uVar36) goto LAB_05cc45e8;
        if ((*(char *)(lVar38 + 0x20 + (long)(int)uVar36 * (long)(int)unaff_w23 + 0x170) == '\0') &&
           (uVar36 = *(uint *)(unaff_x19 + 0x96), *(uint *)(lVar38 + 0x18) <= uVar36))
        goto LAB_05cc45e8;
        fVar49 = (unaff_s15 - *(float *)(unaff_x19 + 0x60)) *
                 (*(float *)((long)unaff_x19 + 0x2d4) +
                 in_stack_00000108 * (fVar67 + fVar49 + *(float *)(unaff_x19[0x20] + 0x1a4)));
        fVar48 = -fVar49;
        if ((char)unaff_x19[0x1e] != '\0') {
          fVar48 = fVar49;
        }
        lVar32 = lVar32 + (long)(int)uVar13 * 0x60;
        *(float *)(lVar32 + 0x3c) =
             *(float *)(lVar38 + 0x20 + (long)(int)uVar36 * (long)(int)unaff_w23 + 0x11c) + fVar48;
        param_3 = 0.0 - *(float *)((long)unaff_x19 + 0x4ec);
        *(float *)(lVar32 + 0x34) = param_3;
        *(float *)(lVar32 + 0x38) = fVar66;
        *(float *)(lVar32 + 0x2c) = fStack0000000000000064 + (fVar51 - fVar66);
        *(float *)(lVar32 + 0x30) = fVar51;
        if ((((in_stack_0000133c & 0xfffffffe) == 10) ||
            (uVar72 == uVar18 && in_stack_0000133c == 0x2d)) || (in_stack_0000133c - 0x2028 < 2)) {
          if (*(int *)(*unaff_x28 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          unaff_x25 = (undefined8 *)&stack0x000005c0;
          FUN_05d115d4();
          lVar29 = unaff_x19[0x97];
          iVar20 = *(int *)((long)unaff_x19 + 0x4a4);
          in_stack_000001a8[10] = 0;
          iVar17 = (int)lVar29 + 1;
          lVar29 = unaff_x19[0x74];
          *(int *)(unaff_x19 + 0x97) = iVar17;
          *(int *)(unaff_x19 + 0x95) = iVar20 + 1;
          if ((lVar29 != 0) && (*(long *)(lVar29 + 0x50) != 0)) {
            if (*(int *)(*(long *)(lVar29 + 0x50) + 0x18) <= iVar17) {
              FUN_05d11b4c();
              lVar29 = unaff_x19[0x74];
              if (lVar29 == 0) goto LAB_05cc446c;
            }
            lVar29 = *(long *)(lVar29 + 0x38);
            if (lVar29 != 0) {
              if (*(uint *)(in_stack_000001a8 + 7) < *(uint *)(lVar29 + 0x18)) {
                fVar48 = *(float *)(lVar29 + (long)(int)*(uint *)(in_stack_000001a8 + 7) *
                                             (long)(int)unaff_w23 + 0x14c);
                if (*(float *)((long)unaff_x19 + 0x2ec) == DAT_01274f94) {
                  if ((in_stack_0000133c == 0x2029) || (fVar49 = 0.0, in_stack_0000133c == 10)) {
                    fVar49 = *(float *)(unaff_x19 + 0x5f);
                  }
                  uVar26 = 0;
                  fVar49 = fVar48 + (0.0 - *(float *)(unaff_x19 + 0x9c)) +
                           fStack0000000000000050 *
                           (fStack0000000000000048 + *(float *)(unaff_x19 + 0x5d)) +
                           in_stack_00000108 * (*(float *)((long)unaff_x19 + 0x2e4) + fVar49) +
                           *(float *)((long)unaff_x19 + 0x4ec);
                }
                else {
                  if ((in_stack_0000133c == 0x2029) || (fVar49 = 0.0, in_stack_0000133c == 10)) {
                    fVar49 = *(float *)(unaff_x19 + 0x5f);
                  }
                  uVar26 = 1;
                  fVar49 = *(float *)((long)unaff_x19 + 0x4ec) +
                           *(float *)((long)unaff_x19 + 0x2ec) +
                           in_stack_00000108 * (*(float *)((long)unaff_x19 + 0x2e4) + fVar49);
                }
                lVar29 = *unaff_x28;
                *(float *)((long)unaff_x19 + 0x4ec) = fVar49;
                *(undefined1 *)(unaff_x19 + 0x5e) = uVar26;
                if (*(int *)(lVar29 + 0xe4) == 0) {
                  thunk_FUN_02dabd98();
                  lVar29 = *unaff_x28;
                }
                fVar49 = *(float *)(unaff_x19 + 0x88);
                uVar22 = *(undefined8 *)(*(long *)(lVar29 + 0xb8) + 0x1730);
                *(float *)((long)unaff_x19 + 0x4e4) = fVar48;
                param_3 = *(float *)((long)unaff_x19 + 0x444);
                param_2._0_8_ = NEON_rev64(uVar22,4);
                param_2._8_8_ = 0;
                in_stack_000001a8[0xe] = param_2._0_8_;
                *(float *)(unaff_x19 + 0xcb) = fVar49 + 0.0 + param_3;
                FUN_05d115d4();
                FUN_05d115d4();
                *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
                goto 
                UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__set_onSelectExited;
              }
              goto LAB_05cc45e8;
            }
          }
          goto LAB_05cc446c;
        }
        if (in_stack_0000133c == 3) {
          if (unaff_x19[0x91] == 0) goto LAB_05cc446c;
          uVar16 = (uint)*(undefined8 *)(unaff_x19[0x91] + 0x18);
          uVar44 = 3;
        }
      }
      lVar29 = *(long *)(lVar29 + 0x38);
      if (lVar29 == 0) goto LAB_05cc446c;
      uVar18 = *(uint *)(in_stack_000001a8 + 7);
      uVar13 = *(uint *)(lVar29 + 0x18);
      if (uVar13 <= uVar18) goto LAB_05cc45e8;
      lVar29 = lVar29 + 0x20;
      if (*(char *)(lVar29 + (long)(int)uVar18 * (long)(int)unaff_w23 + 0x170) != '\0') {
        lVar32 = lVar29 + (long)(int)uVar18 * (long)(int)unaff_w23;
        auVar56 = *(undefined1 (*) [16])(unaff_x19 + 0x9e);
        auVar59 = NEON_ext(auVar56,auVar56,8,1);
        uVar22 = *(undefined8 *)(lVar32 + 0xf4);
        param_3 = (float)uVar22;
        uVar68 = *(undefined8 *)(lVar32 + 0x100);
        fVar48 = (float)uVar68;
        fVar49 = (float)((ulong)uVar68 >> 0x20);
        param_2._0_4_ = (float)-(uint)(auVar56._0_4_ < param_3);
        param_2._4_4_ = (float)-(uint)(auVar56._4_4_ < (float)((ulong)uVar22 >> 0x20));
        param_2._8_4_ = -(uint)(fVar48 < auVar59._0_4_);
        param_2._12_4_ = -(uint)(fVar49 < auVar59._4_4_);
        auVar4._8_4_ = fVar48;
        auVar4._0_8_ = uVar22;
        auVar4._12_4_ = fVar49;
        auVar56 = auVar56 ^ (auVar56 ^ auVar4) & ~param_2;
        unaff_x19[0x9f] = auVar56._8_8_;
        unaff_x19[0x9e] = auVar56._0_8_;
      }
      if (((*(int *)((long)unaff_x19 + 0x304) != 3) && (*(int *)((long)unaff_x19 + 0x304) != 0)) ||
         ((*(uint *)(unaff_x19 + 0x62) < 7 &&
          ((1 << (ulong)(*(uint *)(unaff_x19 + 0x62) & 0x1f) & 0x4aU) != 0)))) {
        if ((((uVar14 == 0) && (uVar44 != 0x2d)) && (uVar44 != 0x200b)) && (uVar44 != 0xad)) {
          if (*(char *)((long)unaff_x19 + 0x309) == '\0') goto LAB_05cc0e60;
LAB_05cc0cf4:
          if (((uint)in_stack_00000078._4_4_ & 1) == 0) {
            in_stack_00000078._4_4_ = 0.0;
            goto LAB_05cc0dc4;
          }
          uVar13 = (uint)(uVar14 == 0 || in_stack_0000133c == 0xa0) &
                   ((uint)(in_stack_0000133c != 0xad) | (uint)fStack000000000000005c) ^ 1;
LAB_05cc0d28:
          in_stack_00000078._4_4_ = 1.4013e-45;
UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__OnHoverExiting:
          if (*(int *)(*unaff_x28 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          FUN_05d115d4();
        }
        else {
          if (*(char *)((long)unaff_x19 + 0x309) != '\0') goto LAB_05cc0cf4;
          if ((int)uVar44 < 0x2007) {
            if (uVar44 == 0x2d) {
              if (0 < (int)uVar18) {
                if (uVar13 <= uVar18 - 1) goto LAB_05cc45e8;
                uVar3 = *(undefined2 *)(lVar29 + (ulong)(uVar18 - 1) * (ulong)unaff_w23 + 4);
                if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_02dabd98();
                }
                uVar23 = FUN_04f72380(uVar3,0);
                if ((uVar23 & 1) != 0) {
                  if ((unaff_x19[0x74] == 0) ||
                     (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0)) goto LAB_05cc446c;
                  if (*(uint *)(lVar29 + 0x18) <= *(int *)(in_stack_000001a8 + 7) - 1U)
                  goto LAB_05cc45e8;
                  if (*(int *)(lVar29 + (long)(int)(*(int *)(in_stack_000001a8 + 7) - 1U) *
                                        (long)(int)unaff_w23 + 0x5c) == (int)unaff_x19[0x97])
                  goto LAB_05cc0dc4;
                }
              }
            }
            else if (uVar44 == 0xa0) goto LAB_05cc0e60;
LAB_05cc13e0:
            lVar29 = *unaff_x28;
            if (*(int *)(lVar29 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
              lVar29 = *unaff_x28;
            }
            in_stack_00000078._4_4_ = 0.0;
            uVar13 = 0;
            *(undefined4 *)(*(long *)(lVar29 + 0xb8) + 0xf80) = 0xffffffff;
            goto UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__OnHoverExiting;
          }
          if (((0x28 < uVar44 - 0x2007) ||
              ((1L << ((ulong)(uVar44 - 0x2007) & 0x3f) & 0x10000000401U) == 0)) &&
             (uVar44 != 0x2060)) goto LAB_05cc13e0;
LAB_05cc0e60:
          if (*(int *)(*(long *)
                        Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListServerBackfillTicketsForPlayer__
                      + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar23 = FUN_05d36aac(uVar44,0);
          if ((uVar23 & 1) == 0) {
LAB_05cc0eac:
            if (*(int *)(*(long *)
                          Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListServerBackfillTicketsForPlayer__
                        + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            uVar23 = FUN_05d36b08(in_stack_0000133c,0);
            if ((uVar23 & 1) != 0) goto LAB_05cc0ed8;
            if ((*(char *)((long)unaff_x19 + 0x309) != '\0') ||
               (uVar13 = *(int *)(in_stack_000001a8 + 7) + 1, iStack0000000000000060 <= (int)uVar13)
               ) goto LAB_05cc0cf4;
            if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
            goto LAB_05cc446c;
            if (*(uint *)(lVar29 + 0x18) <= uVar13) goto LAB_05cc45e8;
            uVar3 = *(undefined2 *)(lVar29 + (long)(int)uVar13 * (long)(int)unaff_w23 + 0x24);
            if (*(int *)(*(long *)
                          Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListServerBackfillTicketsForPlayer__
                        + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            uVar23 = FUN_05d36b08(uVar3,0);
            if ((uVar23 & 1) == 0) goto LAB_05cc0cf4;
            if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
            goto LAB_05cc446c;
            if (*(int *)(in_stack_000001a8 + 7) + 1U < *(uint *)(lVar29 + 0x18)) {
              uVar3 = *(undefined2 *)
                       (lVar29 + (long)(int)(*(int *)(in_stack_000001a8 + 7) + 1U) *
                                 (long)(int)unaff_w23 + 0x24);
              if (*(int *)(*(long *)
                            Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__ +
                          0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              lVar29 = FUN_05d2cd04(0);
              if ((lVar29 != 0) && (*(long *)(lVar29 + 0x10) != 0)) {
                uVar13 = FUN_04cb59e0(*(long *)(lVar29 + 0x10),in_stack_0000133c,
                                      *(undefined8 *)
                                       Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListBuildAliases__
                                     );
                lVar29 = FUN_05d2cd04(0);
                if ((lVar29 != 0) && (*(long *)(lVar29 + 0x18) != 0)) {
                  uVar18 = FUN_04cb59e0(*(long *)(lVar29 + 0x18),uVar3,
                                        *(undefined8 *)
                                         Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListBuildAliases__
                                       );
                  unaff_x28 = (long *)
                              Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
                  if (((uVar13 | uVar18) & 1) != 0) goto LAB_05cc0dc4;
                  uVar13 = 0;
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__OnHoverExiting;
                }
              }
              goto LAB_05cc446c;
            }
            goto LAB_05cc45e8;
          }
          if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__ +
                      0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar23 = FUN_05d2cf18(0);
          if ((uVar23 & 1) != 0) goto LAB_05cc0eac;
LAB_05cc0ed8:
          if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__ +
                      0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          lVar29 = FUN_05d2cd04(0);
          if ((lVar29 == 0) || (*(long *)(lVar29 + 0x10) == 0)) goto LAB_05cc446c;
          uVar23 = FUN_04cb59e0(*(long *)(lVar29 + 0x10),in_stack_0000133c,
                                *(undefined8 *)
                                 Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListBuildAliases__);
          if ((int)uStack0000000000000054 <= *(int *)(in_stack_000001a8 + 7)) {
            if ((uVar23 & 1) != 0) goto LAB_05cc10e0;
            in_stack_00000078._4_4_ = 0.0;
            uVar13 = 0;
            goto UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__OnHoverExiting;
          }
          if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__ +
                      0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          lVar29 = FUN_05d2cd04(0);
          if (((lVar29 == 0) || (unaff_x19[0x74] == 0)) ||
             (lVar32 = *(long *)(unaff_x19[0x74] + 0x38), lVar32 == 0)) goto LAB_05cc446c;
          if (*(uint *)(lVar32 + 0x18) <= *(int *)(in_stack_000001a8 + 7) + 1U) goto LAB_05cc45e8;
          if (*(long *)(lVar29 + 0x18) == 0) goto LAB_05cc446c;
          uVar18 = FUN_04cb59e0(*(long *)(lVar29 + 0x18),
                                *(undefined2 *)
                                 (lVar32 + (long)(int)(*(int *)(in_stack_000001a8 + 7) + 1U) *
                                           (long)(int)unaff_w23 + 0x24),
                                *(undefined8 *)
                                 Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListBuildAliases__);
          if ((uVar23 & 1) != 0) {
LAB_05cc10e0:
            uVar13 = (uint)(uVar14 != 0);
            if (((uint)in_stack_00000078._4_4_ & (uint)(uVar15 == uVar2)) == 0) goto LAB_05cc0dc4;
            goto LAB_05cc0d28;
          }
          in_stack_00000078._4_4_ = (float)(uVar18 & (uint)in_stack_00000078._4_4_);
          uVar13 = (uint)in_stack_00000078._4_4_ & (uint)(uVar14 != 0);
          if ((((uint)in_stack_00000078._4_4_ & 1) != 0) || (((uVar18 ^ 1) & 1) != 0))
          goto UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__OnHoverExiting;
          in_stack_00000078._4_4_ = 0.0;
        }
        if (uVar13 != 0) {
          if (*(int *)(*unaff_x28 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          FUN_05d115d4();
        }
      }
LAB_05cc0dc4:
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      unaff_x25 = (undefined8 *)&stack0x000005c0;
      FUN_05d115d4();
      *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
      fVar48 = unaff_s12;
      goto LAB_05cbdbd4;
    }
    fVar48 = unaff_s15;
    if ((uVar44 & 0x18) != 0) {
      fVar48 = DAT_01275388;
    }
    fVar66 = ABS(fVar69) + fVar66 * (unaff_s15 - fVar65) * param_3;
    if (fVar66 <= fVar48 * fStack000000000000014c) goto joined_r0x05cbf6b8;
    if (((*(int *)((long)unaff_x19 + 0x304) != 0) && (*(int *)((long)unaff_x19 + 0x304) != 3)) &&
       (iVar17 != (int)unaff_x19[0x95])) {
      if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__ + 0xe4)
          == 0) {
        thunk_FUN_02dabd98();
      }
      uVar16 = FUN_05d11230();
      if (*(float *)((long)unaff_x19 + 0x2ec) == DAT_01274f94) {
        lVar29 = unaff_x19[0x74];
        if ((lVar29 == 0) || (lVar32 = *(long *)(lVar29 + 0x38), lVar32 == 0)) goto LAB_05cc446c;
        if (*(uint *)(lVar32 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
        fVar50 = *(float *)((long)unaff_x19 + 0x4ec);
        fVar54 = 0.0;
        if ((0.0 < fVar50) && ((char)unaff_x19[0x5e] == '\0')) {
          fVar54 = *(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4e4);
        }
        fVar54 = in_stack_00000108 * *(float *)((long)unaff_x19 + 0x2e4) +
                 *(float *)(lVar32 + (long)(int)*(uint *)(in_stack_000001a8 + 7) *
                                     (long)(int)unaff_w23 + 0x14c) +
                 (fVar54 - *(float *)(unaff_x19 + 0x9c)) +
                 fStack0000000000000050 * (fStack0000000000000048 + *(float *)(unaff_x19 + 0x5d));
      }
      else {
        lVar29 = unaff_x19[0x74];
        *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        if (lVar29 == 0) goto LAB_05cc446c;
        fVar54 = *(float *)((long)unaff_x19 + 0x2ec) +
                 in_stack_00000108 * *(float *)((long)unaff_x19 + 0x2e4);
        fVar50 = *(float *)((long)unaff_x19 + 0x4ec);
      }
      puVar9 = Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
      lVar29 = *(long *)(lVar29 + 0x38);
      if (lVar29 == 0) goto LAB_05cc446c;
      uVar13 = *(uint *)((long)unaff_x19 + 0x4a4);
      if ((*(uint *)(lVar29 + 0x18) <= uVar13) ||
         (uVar36 = uVar13 - 1, *(uint *)(lVar29 + 0x18) <= uVar36)) goto LAB_05cc45e8;
      param_3 = *(float *)((long)unaff_x19 + 0x4cc);
      lVar29 = lVar29 + 0x20;
      fVar69 = *(float *)(lVar29 + (long)(int)uVar13 * (long)(int)unaff_w23 + 0x130);
      param_2 = ZEXT416((uint)fVar69);
      fVar69 = (fVar54 + param_3 + fVar50) - fVar69;
      if ((*(short *)(lVar29 + (long)(int)uVar36 * (long)(int)unaff_w23 + 4) == 0xad &&
           ((uint)fStack000000000000005c & 1) == 0) &&
         (((int)unaff_x19[0x62] == 0 || (fVar69 < in_stack_000000e0._4_4_)))) {
        fStack000000000000005c = 0.0;
        uVar16 = uVar16 - 1;
        uVar21 = CONCAT44(0x2d,uVar36);
        *(uint *)(in_stack_000001a8 + 7) = uVar36;
        unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
        fVar48 = unaff_s12;
        goto LAB_05cbdbd4;
      }
      if (*(short *)(lVar29 + (long)(int)uVar13 * (long)(int)unaff_w23 + 4) == 0xad) {
        fStack000000000000005c = 1.4013e-45;
        unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
        fVar48 = unaff_s12;
        goto LAB_05cbdbd4;
      }
      if ((char)unaff_x19[0x4c] != '\0' && (((uint)in_stack_00000078._4_4_ ^ 0xffffffff) & 1) == 0)
      {
        fVar50 = *(float *)((long)unaff_x19 + 0x2fc) / 100.0;
        fVar65 = *(float *)(unaff_x19 + 0x60);
        if ((fVar50 <= fVar65) || ((int)unaff_x19[0x4e] <= *(int *)((long)unaff_x19 + 0x26c))) {
          fVar50 = *(float *)((long)unaff_x19 + 0x20c);
          fVar54 = *(float *)(unaff_x19 + 0x4f);
          param_2 = ZEXT416((uint)fVar54);
          if ((fVar54 < fVar50) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
          goto LAB_05cc4504;
          goto LAB_05cc1214;
        }
LAB_05cc45ac:
        fVar49 = fVar66;
        if (0.0 < fVar65) {
          fVar49 = fVar66 / (1.0 - fVar65);
        }
        fVar65 = fVar65 + (fVar66 - fVar48 * (fStack000000000000014c + DAT_012751f8)) / fVar49;
LAB_05cc459c:
        if (fVar50 <= fVar65) {
          fVar65 = fVar50;
        }
        *(float *)(unaff_x19 + 0x60) = fVar65;
        return;
      }
LAB_05cc1214:
      lVar29 = *(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
      if (*(int *)(lVar29 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar29 = *(long *)puVar9;
      }
      if (((((uint)in_stack_00000078._4_4_ & 1) != 0) &&
          (iVar20 = *(int *)(*(long *)(lVar29 + 0xb8) + 0xf80), iVar20 != -1)) &&
         (iVar20 != iStack0000000000000020)) {
        if (*(int *)(lVar29 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar16 = FUN_05d11230();
        if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
        goto LAB_05cc446c;
        uVar13 = *(int *)(in_stack_000001a8 + 7) - 1;
        if (*(uint *)(lVar29 + 0x18) <= uVar13) goto LAB_05cc45e8;
        iStack0000000000000020 = iVar20;
        if (*(short *)(lVar29 + (long)(int)uVar13 * (long)(int)unaff_w23 + 0x24) == 0xad) {
          fStack000000000000005c = 0.0;
          uVar16 = uVar16 - 1;
          uVar21 = CONCAT44(0x2d,uVar13);
          *(uint *)(in_stack_000001a8 + 7) = uVar13;
          unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
          fVar48 = unaff_s12;
          goto LAB_05cbdbd4;
        }
      }
      if (fVar69 <= in_stack_000000e0._4_4_) {
        param_2 = ZEXT416((uint)unaff_s12);
        param_3 = in_stack_00000108;
        FUN_05d11cfc();
LAB_05cc1568:
        in_stack_00000078._4_4_ = 1.4013e-45;
        fStack000000000000005c = 0.0;
        fStack0000000000000068 = 1.4013e-45;
        unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
        fVar48 = unaff_s12;
        goto LAB_05cbdbd4;
      }
      if (*(int *)((long)unaff_x19 + 0x314) == -1) {
        *(undefined4 *)((long)unaff_x19 + 0x314) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
      }
      unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
      if ((char)unaff_x19[0x4c] != '\0') {
        fVar50 = *(float *)((long)unaff_x19 + 0x2f4);
        if ((fVar50 < *(float *)(unaff_x19 + 0x5d)) &&
           (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
          fVar48 = *(float *)(unaff_x19 + 0x5d) +
                   ((in_stack_00000018._4_4_ - fVar69) / (float)((int)unaff_x19[0x97] + 1)) /
                   fStack0000000000000050;
          if (fVar48 <= fVar50) {
            fVar48 = fVar50;
          }
LAB_05cc4498:
          *(float *)(unaff_x19 + 0x5d) = fVar48;
          return;
        }
        fVar50 = *(float *)((long)unaff_x19 + 0x2fc) / 100.0;
        fVar65 = *(float *)(unaff_x19 + 0x60);
        if ((fVar65 < fVar50) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
        goto LAB_05cc45ac;
        fVar50 = *(float *)((long)unaff_x19 + 0x20c);
        fVar54 = *(float *)(unaff_x19 + 0x4f);
        param_2 = ZEXT416((uint)fVar54);
        if ((fVar54 < fVar50) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
        goto LAB_05cc4504;
      }
      iVar20 = (int)unaff_x19[0x62];
      fStack000000000000005c = 0.0;
      if (iVar20 < 3) {
        if (iVar20 != 0) {
          if (iVar20 == 1) {
            lVar29 = *(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
            if (*(int *)(lVar29 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
              lVar29 = *(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
            }
            uVar21 = DAT_01274108;
            lVar32 = *(long *)(lVar29 + 0xb8);
            if (*(int *)(lVar32 + 0x1708) == 0) {
              uVar16 = 0xffffffff;
              in_stack_000001a8[7] = 0;
            }
            else {
              if (*(int *)(lVar29 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
                lVar32 = *(long *)(*(long *)
                                    Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__
                                  + 0xb8);
              }
              FUN_03cc2b0c(&stack0x00001340,lVar32 + 0x1338,
                           *(undefined8 *)
                            Method_PlayFab_PlayFabMultiplayerInstanceAPI_RemoveMember__);
              memcpy(&stack0x00000990,&stack0x00001340,0x3b8);
              iVar17 = FUN_05d11230();
              uVar16 = iVar17 - 1;
              iVar17 = *(int *)((long)unaff_x19 + 0x4a4) + -1;
              *(int *)((long)unaff_x19 + 0x4a4) = iVar17;
              unaff_w21 = unaff_w21 + 1;
              uVar21 = CONCAT44(0x2026,iVar17);
            }
            goto LAB_05cc1884;
          }
          if (iVar20 != 2) goto joined_r0x05cbf6b8;
        }
LAB_05cc159c:
        param_2 = ZEXT416((uint)unaff_s12);
        param_3 = in_stack_00000108;
        FUN_05d11cfc();
        fStack000000000000005c = 0.0;
UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__set_onSelectExited:
        in_stack_00000078._4_4_ = 1.4013e-45;
        fStack0000000000000068 = 1.4013e-45;
        fVar48 = unaff_s12;
        goto LAB_05cbdbd4;
      }
      if (iVar20 < 5) {
        if (iVar20 != 3) {
          if (iVar20 == 4) goto LAB_05cc159c;
          goto joined_r0x05cbf6b8;
        }
        if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__ + 0xe4
                    ) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar16 = FUN_05d11230();
        uVar21 = CONCAT44(3,iVar17);
LAB_05cc1884:
        fStack000000000000005c = 0.0;
        unaff_s15 = 1.0;
        unaff_x25 = (undefined8 *)&stack0x000005c0;
        unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
        fVar48 = unaff_s12;
        goto LAB_05cbdbd4;
      }
      if (iVar20 == 5) {
        param_2 = ZEXT416((uint)unaff_s12);
        *(undefined1 *)((long)unaff_x19 + 0x374) = 1;
        param_3 = in_stack_00000108;
        FUN_05d11cfc();
        *(undefined4 *)((long)unaff_x19 + 0x4e4) = 0;
        *(undefined4 *)((long)unaff_x19 + 0x4ec) = 0;
        *(int *)((long)unaff_x19 + 0x4c4) = *(int *)((long)unaff_x19 + 0x4c4) + 1;
        unaff_x19[0x99] = 0;
        goto LAB_05cc1568;
      }
      if (iVar20 == 6) {
        lVar29 = unaff_x19[99];
        if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar23 = FUN_05ee1474(lVar29,0,0);
        if ((uVar23 & 1) != 0) {
          plVar46 = (long *)unaff_x19[99];
          uVar21 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar46 == (long *)0x0) goto LAB_05cc446c;
          (**(code **)(*plVar46 + 0x558))(plVar46,uVar21,*(undefined8 *)(*plVar46 + 0x560));
          lVar29 = unaff_x19[99];
          if (lVar29 == 0) goto LAB_05cc446c;
          *(int *)(lVar29 + 0x438) = (int)unaff_x19[0x87];
          FUN_05d04ac0(lVar29,*(undefined4 *)((long)unaff_x19 + 0x4a4),0);
          plVar46 = (long *)unaff_x19[99];
          if (plVar46 == (long *)0x0) goto LAB_05cc446c;
          (**(code **)(*plVar46 + 0x7d8))(plVar46,0,0,*(undefined8 *)(*plVar46 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x65) = 1;
        }
        uVar21 = CONCAT44(3,*(undefined4 *)(in_stack_000001a8 + 7));
        goto LAB_05cc1884;
      }
      unaff_s15 = 1.0;
      goto joined_r0x05cbf6b8;
    }
    if (((char)unaff_x19[0x4c] != '\0') &&
       (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
      param_3 = 100.0;
      fVar50 = *(float *)((long)unaff_x19 + 0x2fc) / 100.0;
      if (fVar65 < fVar50) {
        fVar49 = fVar66;
        if (0.0 < fVar65) {
          fVar49 = fVar66 / (1.0 - fVar65);
        }
        fVar65 = fVar65 + (fVar66 - fVar48 * (fStack000000000000014c + DAT_012751f8)) / fVar49;
        goto LAB_05cc459c;
      }
      fVar50 = *(float *)((long)unaff_x19 + 0x20c);
      fVar54 = *(float *)(unaff_x19 + 0x4f);
      param_2 = ZEXT416((uint)fVar54);
      if (fVar50 <= fVar54) goto LAB_05cbf664;
LAB_05cc4504:
      fVar48 = DAT_012751b0;
      *(float *)((long)unaff_x19 + 0x264) = fVar50;
      fVar49 = (fVar50 - *(float *)(unaff_x19 + 0x4d)) * 0.5;
      if (fVar49 <= fVar48) {
        fVar49 = fVar48;
      }
      fVar49 = (fVar50 - fVar49) * 20.0 + 0.5;
      fVar48 = DAT_01275250;
      if (fVar49 != INFINITY) {
        fVar48 = (float)(int)fVar49 / 20.0;
      }
      if (fVar48 <= fVar54) {
        fVar48 = fVar54;
      }
LAB_05cc1978:
      *(float *)((long)unaff_x19 + 0x20c) = fVar48;
      return;
    }
LAB_05cbf664:
    iVar20 = (int)unaff_x19[0x62];
    if (iVar20 == 1) {
      lVar29 = *(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
      if (*(int *)(lVar29 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar29 = *unaff_x28;
      }
      lVar32 = *(long *)(lVar29 + 0xb8);
      if (*(int *)(lVar32 + 0x1708) == 0) goto LAB_05cbfc40;
      if (*(int *)(lVar29 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar32 = *(long *)(*unaff_x28 + 0xb8);
      }
      FUN_03cc2b0c(&stack0x00001340,lVar32 + 0x1338,
                   *(undefined8 *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_RemoveMember__);
      memcpy(&stack0x000005d8,&stack0x00001340,0x3b8);
      goto LAB_05cbfc0c;
    }
    if (iVar20 != 6) {
      if (iVar20 == 3) {
        if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__ + 0xe4
                    ) == 0) {
          thunk_FUN_02dabd98();
        }
        goto LAB_05cbf878;
      }
      goto joined_r0x05cbf6b8;
    }
    if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__ + 0xe4) ==
        0) {
      thunk_FUN_02dabd98();
    }
    uVar16 = FUN_05d11230();
    lVar29 = unaff_x19[99];
    if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar23 = FUN_05ee1474(lVar29,0,0);
    if ((uVar23 & 1) != 0) {
      plVar46 = (long *)unaff_x19[99];
      uVar21 = (**(code **)(*unaff_x19 + 0x548))();
      if (plVar46 == (long *)0x0) goto LAB_05cc446c;
      (**(code **)(*plVar46 + 0x558))(plVar46,uVar21,*(undefined8 *)(*plVar46 + 0x560));
      lVar29 = unaff_x19[99];
      if (lVar29 == 0) goto LAB_05cc446c;
      *(int *)(lVar29 + 0x438) = (int)unaff_x19[0x87];
      FUN_05d04ac0(lVar29,*(undefined4 *)((long)unaff_x19 + 0x4a4),0);
      plVar46 = (long *)unaff_x19[99];
      if (plVar46 == (long *)0x0) goto LAB_05cc446c;
      (**(code **)(*plVar46 + 0x7d8))(plVar46,0,0,*(undefined8 *)(*plVar46 + 0x7e0));
      *(undefined1 *)(unaff_x19 + 0x65) = 1;
    }
    uVar13 = *(uint *)(in_stack_000001a8 + 7);
LAB_05cbfb88:
    uVar52 = 3;
  } while( true );
LAB_05cc1fd0:
  if (*(uint *)(lVar29 + 0x18) <= uVar16) goto LAB_05cc45e8;
  uVar43 = (ulong)uVar16;
  piVar42 = (int *)(lVar32 + uVar43 * 0x178);
  lVar38 = *(long *)(piVar42 + 8);
  uVar47 = *(ushort *)(piVar42 + 1);
  if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar14 = (uint)uVar47;
  bVar11 = FUN_04f72380(uVar47,0);
  if (*(uint *)(lVar29 + 0x18) <= uVar16) goto LAB_05cc45e8;
  if ((unaff_x19[0x74] == 0) || (lVar24 = *(long *)(unaff_x19[0x74] + 0x50), lVar24 == 0))
  goto LAB_05cc446c;
  uVar72 = *(uint *)(lVar32 + uVar43 * 0x178 + 0x3c);
  if (*(uint *)(lVar24 + 0x18) <= uVar72) goto LAB_05cc45e8;
  lVar24 = lVar24 + (long)(int)uVar72 * 0x60;
  uVar15 = *(uint *)(lVar24 + 0x40);
  uVar2 = *(uint *)(lVar24 + 0x44);
  fVar53 = *(float *)(lVar24 + 0x58);
  fVar66 = *(float *)(lVar24 + 0x5c);
  uVar44 = *(uint *)(lVar24 + 0x6c);
  fVar54 = *(float *)(lVar24 + 0x60);
  fVar65 = *(float *)(lVar24 + 100);
  iVar20 = *(int *)(lVar24 + 0x20);
  fVar69 = *(float *)(lVar24 + 0x70);
  fVar63 = *(float *)(lVar24 + 0x74);
  iVar19 = *(int *)(lVar24 + 0x28);
  fVar51 = *(float *)(lVar24 + 0x78);
  fVar50 = *(float *)(lVar24 + 0x7c);
  iVar41 = *(int *)(lVar24 + 0x30);
  fVar67 = *(float *)(lVar24 + 0x50);
  if ((int)uVar44 < 9) {
    if ((int)uVar44 < 3) {
      if (uVar44 == 1) {
        if ((char)unaff_x19[0x1e] == '\0') {
          in_stack_00000120 = fVar65 + 0.0;
        }
        else {
          in_stack_00000120 = 0.0 - fVar66;
        }
        fStack0000000000000100 = 0.0;
        fStack0000000000000124 = 0.0;
      }
      else if (uVar44 == 2) {
        in_stack_00000120 = (fVar65 + fVar54 * 0.5) - fVar66 * 0.5;
LAB_05cc22cc:
        fStack0000000000000124 = 0.0;
        fStack0000000000000100 = 0.0;
      }
      else {
LAB_05cc219c:
        uVar47 = NEON_umaxv(CONCAT26(-(ushort)(uVar47 == (ushort)((ulong)DAT_01274c08 >> 0x30)),
                                     CONCAT24(-(ushort)(uVar47 ==
                                                       (ushort)((ulong)DAT_01274c08 >> 0x20)),
                                              CONCAT22(-(ushort)(uVar47 ==
                                                                (ushort)((ulong)DAT_01274c08 >> 0x10
                                                                        )),
                                                       -(ushort)(uVar47 == (ushort)DAT_01274c08)))),
                            2);
        if (((((uVar47 & 1) == 0) && (uVar14 != 3)) && (uVar44 == 8)) && ((int)uVar16 <= (int)uVar2)
           ) goto LAB_05cc21dc;
      }
    }
    else if (uVar44 != 3) {
      if (uVar44 != 4) goto LAB_05cc219c;
      fStack0000000000000100 = 0.0;
      if ((char)unaff_x19[0x1e] != '\0') {
        fVar66 = 0.0;
      }
      in_stack_00000120 = (fVar54 + fVar65) - fVar66;
      fStack0000000000000124 = 0.0;
    }
  }
  else if (uVar44 == 0x10) {
    if ((int)uVar16 <= (int)uVar2) {
      if (uVar14 < 0xad) {
        if ((uVar14 != 3) && (uVar14 != 10)) {
LAB_05cc21dc:
          if (*(uint *)(lVar29 + 0x18) <= uVar15) goto LAB_05cc45e8;
          uVar3 = *(undefined2 *)(lVar32 + (long)(int)uVar15 * 0x178 + 4);
          if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar23 = FUN_04f7562c(uVar3,0);
          unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
          if ((uVar23 & 1) == 0) {
            bVar1 = (int)uVar72 < (int)unaff_x19[0x97];
          }
          else {
            bVar1 = false;
          }
          if ((!bVar1 && (uVar44 >> 4 & 1) == 0) && (fVar66 <= fVar54)) {
            in_stack_00000120 = -0.0;
            if ((char)unaff_x19[0x1e] != '\0') {
              in_stack_00000120 = fVar54;
            }
            in_stack_00000120 = fVar65 + in_stack_00000120;
            goto LAB_05cc22cc;
          }
          if (((uVar16 == 0) || (uVar72 != uVar18)) ||
             (uVar16 == *(uint *)((long)unaff_x19 + 0x35c))) {
            in_stack_00000120 = -0.0;
            if ((char)unaff_x19[0x1e] != '\0') {
              in_stack_00000120 = fVar54;
            }
            if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            in_stack_00000120 = fVar65 + in_stack_00000120;
            fStack0000000000000050 = (float)FUN_04f758f0(uVar14,0);
            fStack0000000000000124 = 0.0;
            fStack0000000000000100 = 0.0;
          }
          else {
            cVar27 = (char)unaff_x19[0x1e];
            iVar41 = (iVar41 - iVar20) - ((uint)fStack0000000000000050 & 1);
            fVar65 = -fVar66;
            if (cVar27 != '\0') {
              fVar65 = fVar66;
            }
            if (iVar41 < 1) {
              fVar66 = 1.0;
              iVar41 = 1;
            }
            else {
              fVar66 = *(float *)((long)unaff_x19 + 0x30c);
            }
            if (uVar14 == 9) {
LAB_05cc3f64:
              fVar66 = ((fVar54 + fVar65) * (1.0 - fVar66)) / (float)iVar41;
              if (cVar27 == '\0') {
                in_stack_00000120 = in_stack_00000120 + fVar66;
                fStack0000000000000124 = fStack0000000000000124 + 0.0;
                fStack0000000000000100 = fStack0000000000000100 + 0.0;
              }
              else {
                in_stack_00000120 = in_stack_00000120 - fVar66;
              }
            }
            else {
              if (uVar14 != 0xa0) {
                if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_02dabd98();
                }
                uVar23 = FUN_04f758f0(uVar14,0);
                cVar27 = (char)unaff_x19[0x1e];
                if ((uVar23 & 1) != 0) goto LAB_05cc3f64;
              }
              fVar66 = ((fVar54 + fVar65) * fVar66) /
                       (float)(int)((iVar20 - (((uint)fStack0000000000000050 ^ 0xffffffff) & 1)) +
                                   iVar19);
              if (cVar27 == '\0') {
                in_stack_00000120 = in_stack_00000120 + fVar66;
                fStack0000000000000124 = fStack0000000000000124 + 0.0;
                fStack0000000000000100 = fStack0000000000000100 + 0.0;
              }
              else {
                in_stack_00000120 = in_stack_00000120 - fVar66;
              }
            }
          }
        }
      }
      else if (((uVar14 != 0xad) && (uVar14 != 0x200b)) && (uVar14 != 0x2060)) goto LAB_05cc21dc;
    }
  }
  else if (uVar44 == 0x20) {
    in_stack_00000120 = (fVar65 + fVar54 * 0.5) - (fVar69 + fVar51) * 0.5;
    fStack0000000000000100 = 0.0;
    fStack0000000000000124 = 0.0;
  }
  uVar44 = (uint)*(undefined8 *)(lVar29 + 0x18);
  if (uVar44 <= uVar16) goto LAB_05cc45e8;
  lVar24 = lVar32 + uVar43 * 0x178;
  fVar66 = fStack00000000000000c0 + in_stack_00000120;
  fVar54 = fStack00000000000001b0 + fStack0000000000000124;
  fVar65 = fStack00000000000000b8 + fStack0000000000000100;
  if (*(char *)(lVar24 + 0x170) == '\0') goto LAB_05cc2aec;
  iVar20 = *piVar42;
  if (iVar20 == 0) {
    fVar49 = fmodf(*(float *)((long)unaff_x19 + 0x34c) * (float)(int)uVar72,1.0);
    iVar19 = *(int *)((long)unaff_x19 + 0x344);
    if (iVar19 < 2) {
      if (iVar19 == 0) {
        lVar34 = lVar32 + uVar43 * 0x178;
        *(undefined4 *)(lVar34 + 100) = 0;
        *(undefined4 *)(lVar34 + 0x8c) = 0;
        *(undefined4 *)(lVar34 + 0xb4) = 0x3f800000;
        *(undefined4 *)(lVar34 + 0xdc) = 0x3f800000;
      }
      else if (iVar19 == 1) {
        lVar34 = lVar32 + uVar43 * 0x178;
        fVar50 = *(float *)(lVar34 + 0x48);
        pfVar35 = (float *)(lVar34 + 100);
        if (*(int *)((long)unaff_x19 + 0x29c) == 0x208) {
          lVar34 = lVar32 + uVar43 * 0x178;
          fVar51 = *(float *)(lVar34 + 0x70);
          *pfVar35 = fVar49 + ((in_stack_00000120 + fVar50) - *(float *)(unaff_x19 + 0x9e)) /
                              (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
          *(float *)(lVar34 + 0x8c) =
               fVar49 + ((in_stack_00000120 + fVar51) - *(float *)(unaff_x19 + 0x9e)) /
                        (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
          *(float *)(lVar34 + 0xb4) =
               fVar49 + ((in_stack_00000120 + *(float *)(lVar34 + 0x98)) -
                        *(float *)(unaff_x19 + 0x9e)) /
                        (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
          *(float *)(lVar34 + 0xdc) =
               fVar49 + ((in_stack_00000120 + *(float *)(lVar34 + 0xc0)) -
                        *(float *)(unaff_x19 + 0x9e)) /
                        (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
        }
        else {
          lVar34 = lVar32 + uVar43 * 0x178;
          fVar51 = fVar51 - fVar69;
          fVar63 = *(float *)(lVar34 + 0x70);
          fVar64 = *(float *)(lVar34 + 0x98);
          fVar57 = *(float *)(lVar34 + 0xc0);
          *pfVar35 = fVar49 + (fVar50 - fVar69) / fVar51;
          *(float *)(lVar34 + 0x8c) = fVar49 + (fVar63 - fVar69) / fVar51;
          *(float *)(lVar34 + 0xb4) = fVar49 + (fVar64 - fVar69) / fVar51;
          *(float *)(lVar34 + 0xdc) = fVar49 + (fVar57 - fVar69) / fVar51;
        }
      }
    }
    else if (iVar19 == 2) {
      lVar34 = lVar32 + uVar43 * 0x178;
      *(float *)(lVar34 + 100) =
           fVar49 + ((in_stack_00000120 + *(float *)(lVar34 + 0x48)) - *(float *)(unaff_x19 + 0x9e))
                    / (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
      *(float *)(lVar34 + 0x8c) =
           fVar49 + ((in_stack_00000120 + *(float *)(lVar34 + 0x70)) - *(float *)(unaff_x19 + 0x9e))
                    / (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
      *(float *)(lVar34 + 0xb4) =
           fVar49 + ((in_stack_00000120 + *(float *)(lVar34 + 0x98)) - *(float *)(unaff_x19 + 0x9e))
                    / (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
      *(float *)(lVar34 + 0xdc) =
           fVar49 + ((in_stack_00000120 + *(float *)(lVar34 + 0xc0)) - *(float *)(unaff_x19 + 0x9e))
                    / (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
    }
    else if (iVar19 == 3) {
      iVar19 = (int)unaff_x19[0x69];
      if (iVar19 < 2) {
        if (iVar19 == 0) {
          lVar34 = lVar32 + uVar43 * 0x178;
          *(undefined4 *)(lVar34 + 0x68) = 0;
          *(undefined4 *)(lVar34 + 0x90) = 0x3f800000;
          *(undefined4 *)(lVar34 + 0xb8) = 0;
          *(undefined4 *)(lVar34 + 0xe0) = 0x3f800000;
        }
        else if (iVar19 == 1) {
          lVar34 = lVar32 + uVar43 * 0x178;
          fVar50 = fVar50 - fVar63;
          fVar51 = (*(float *)(lVar34 + 0x74) - fVar63) / fVar50;
          fVar50 = fVar49 + (*(float *)(lVar34 + 0x4c) - fVar63) / fVar50;
          *(float *)(lVar34 + 0x68) = fVar50;
          *(float *)(lVar34 + 0xb8) = fVar50;
          goto LAB_05cc26ec;
        }
      }
      else if (iVar19 == 2) {
        lVar34 = lVar32 + uVar43 * 0x178;
        fVar50 = fVar49 + (*(float *)(lVar34 + 0x4c) - *(float *)((long)unaff_x19 + 0x4f4)) /
                          (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4)
                          );
        *(float *)(lVar34 + 0x68) = fVar50;
        fVar51 = *(float *)((long)unaff_x19 + 0x4f4);
        fVar63 = *(float *)((long)unaff_x19 + 0x4fc);
        *(float *)(lVar34 + 0xb8) = fVar50;
        fVar51 = (*(float *)(lVar34 + 0x74) - fVar51) / (fVar63 - fVar51);
LAB_05cc26ec:
        *(float *)(lVar34 + 0x90) = fVar49 + fVar51;
        *(float *)(lVar34 + 0xe0) = fVar49 + fVar51;
      }
      else if (iVar19 == 3) {
        if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        FUN_05ea2238(*(undefined8 *)
                      Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateLobbyAsServer__,0);
        uVar44 = (uint)*(undefined8 *)(lVar29 + 0x18);
      }
      if (uVar44 <= uVar16) goto LAB_05cc45e8;
      lVar34 = lVar32 + uVar43 * 0x178;
      fVar63 = *(float *)(lVar34 + 0x138);
      fVar51 = (1.0 - (*(float *)(lVar34 + 0x68) + *(float *)(lVar34 + 0x90)) * fVar63) * 0.5;
      fVar50 = fVar49 + *(float *)(lVar34 + 0x68) * fVar63 + fVar51;
      fVar49 = fVar49 + fVar51 + *(float *)(lVar34 + 0x90) * fVar63;
      *(float *)(lVar34 + 100) = fVar50;
      *(float *)(lVar34 + 0x8c) = fVar50;
      *(float *)(lVar34 + 0xb4) = fVar49;
      *(float *)(lVar34 + 0xdc) = fVar49;
    }
    iVar19 = (int)unaff_x19[0x69];
    if (iVar19 < 2) {
      if (iVar19 == 0) {
        if (uVar44 <= uVar16) goto LAB_05cc45e8;
        lVar34 = lVar32 + uVar43 * 0x178;
        *(undefined4 *)(lVar34 + 0x68) = 0;
        *(undefined4 *)(lVar34 + 0x90) = 0x3f800000;
        *(undefined4 *)(lVar34 + 0xb8) = 0x3f800000;
        *(undefined4 *)(lVar34 + 0xe0) = 0;
      }
      else if (iVar19 == 1) {
        if (uVar16 < uVar44) {
          lVar34 = lVar32 + uVar43 * 0x178;
          fVar67 = fVar67 - fVar53;
          fVar49 = (*(float *)(lVar34 + 0x4c) - fVar53) / fVar67;
          fVar67 = (*(float *)(lVar34 + 0x74) - fVar53) / fVar67;
          *(float *)(lVar34 + 0x68) = fVar49;
          goto LAB_05cc2864;
        }
        goto LAB_05cc45e8;
      }
    }
    else if (iVar19 == 2) {
      if (uVar44 <= uVar16) goto LAB_05cc45e8;
      lVar34 = lVar32 + uVar43 * 0x178;
      fVar49 = (*(float *)(lVar34 + 0x4c) - *(float *)((long)unaff_x19 + 0x4f4)) /
               (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4));
      *(float *)(lVar34 + 0x68) = fVar49;
      fVar67 = (*(float *)(lVar34 + 0x74) - *(float *)((long)unaff_x19 + 0x4f4)) /
               (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4));
LAB_05cc2864:
      *(float *)(lVar34 + 0x90) = fVar67;
      *(float *)(lVar34 + 0xb8) = fVar67;
      *(float *)(lVar34 + 0xe0) = fVar49;
    }
    else if (iVar19 == 3) {
      if (uVar44 <= uVar16) goto LAB_05cc45e8;
      lVar34 = lVar32 + uVar43 * 0x178;
      fVar51 = *(float *)(lVar34 + 0x138);
      fVar50 = (1.0 - (*(float *)(lVar34 + 100) + *(float *)(lVar34 + 0xb4)) / fVar51) * 0.5;
      fVar49 = *(float *)(lVar34 + 100) / fVar51 + fVar50;
      fVar50 = fVar50 + *(float *)(lVar34 + 0xb4) / fVar51;
      *(float *)(lVar34 + 0x68) = fVar49;
      *(float *)(lVar34 + 0xe0) = fVar49;
      *(float *)(lVar34 + 0x90) = fVar50;
      *(float *)(lVar34 + 0xb8) = fVar50;
    }
    if (uVar44 <= uVar16) goto LAB_05cc45e8;
    lVar34 = lVar32 + uVar43 * 0x178;
    fVar49 = ABS(auVar59._0_4_) * *(float *)(lVar34 + 0x13c) * (1.0 - *(float *)(unaff_x19 + 0x60));
    if ((*(char *)(lVar34 + 0x34) == '\0') &&
       ((*(byte *)(lVar32 + uVar43 * 0x178 + 0x16c) & 1) != 0)) {
      fVar49 = -fVar49;
    }
    lVar34 = lVar32 + uVar43 * 0x178;
    *(float *)(lVar34 + 0x60) = fVar49;
    *(float *)(lVar34 + 0x88) = fVar49;
    *(float *)(lVar34 + 0xb0) = fVar49;
    *(float *)(lVar34 + 0xd8) = fVar49;
  }
  if (((int)uVar16 < (int)unaff_x19[0x6c]) &&
     (iStack00000000000000ec < *(int *)((long)unaff_x19 + 0x364))) {
    if (((int)unaff_x19[0x6d] <= (int)uVar72) || ((int)unaff_x19[0x62] == 5)) {
      if (((int)uVar72 < (int)unaff_x19[0x6d]) && ((int)unaff_x19[0x62] == 5)) {
        if (uVar16 < uVar44) {
          if (*(uint *)(lVar32 + uVar43 * 0x178 + 0x40) == in_stack_00000040._4_4_) {
            lVar24 = lVar32 + uVar43 * 0x178;
            *(ulong *)(lVar24 + 0x48) =
                 CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar24 + 0x48) >> 0x20),
                          fVar66 + (float)*(undefined8 *)(lVar24 + 0x48));
            *(float *)(lVar24 + 0x50) = fVar65 + *(float *)(lVar24 + 0x50);
            *(ulong *)(lVar24 + 0x70) =
                 CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar24 + 0x70) >> 0x20),
                          fVar66 + (float)*(undefined8 *)(lVar24 + 0x70));
            *(float *)(lVar24 + 0x78) = fVar65 + *(float *)(lVar24 + 0x78);
            *(ulong *)(lVar24 + 0x98) =
                 CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar24 + 0x98) >> 0x20),
                          fVar66 + (float)*(undefined8 *)(lVar24 + 0x98));
            *(float *)(lVar24 + 0xa0) = fVar65 + *(float *)(lVar24 + 0xa0);
            *(ulong *)(lVar24 + 0xc0) =
                 CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar24 + 0xc0) >> 0x20),
                          fVar66 + (float)*(undefined8 *)(lVar24 + 0xc0));
            *(float *)(lVar24 + 200) = fVar65 + *(float *)(lVar24 + 200);
            goto LAB_05cc2a70;
          }
          goto 
          UnityEngine_XR_Interaction_Toolkit_Interactors_XRDirectInteractor_<UpdateCollidersAfterOnTriggerStay>d__36__System_Collections_IEnumerator_get_Current
          ;
        }
        goto LAB_05cc45e8;
      }
      goto 
      UnityEngine_XR_Interaction_Toolkit_Interactors_XRDirectInteractor_<UpdateCollidersAfterOnTriggerStay>d__36__System_Collections_IEnumerator_get_Current
      ;
    }
    if (uVar44 <= uVar16) goto LAB_05cc45e8;
    lVar24 = lVar32 + uVar43 * 0x178;
    *(ulong *)(lVar24 + 0x48) =
         CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar24 + 0x48) >> 0x20),
                  fVar66 + (float)*(undefined8 *)(lVar24 + 0x48));
    *(float *)(lVar24 + 0x50) = fVar65 + *(float *)(lVar24 + 0x50);
    *(ulong *)(lVar24 + 0x70) =
         CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar24 + 0x70) >> 0x20),
                  fVar66 + (float)*(undefined8 *)(lVar24 + 0x70));
    *(float *)(lVar24 + 0x78) = fVar65 + *(float *)(lVar24 + 0x78);
    *(ulong *)(lVar24 + 0x98) =
         CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar24 + 0x98) >> 0x20),
                  fVar66 + (float)*(undefined8 *)(lVar24 + 0x98));
    *(float *)(lVar24 + 0xa0) = fVar65 + *(float *)(lVar24 + 0xa0);
    *(ulong *)(lVar24 + 0xc0) =
         CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar24 + 0xc0) >> 0x20),
                  fVar66 + (float)*(undefined8 *)(lVar24 + 0xc0));
    *(float *)(lVar24 + 200) = fVar65 + *(float *)(lVar24 + 200);
  }
  else {

    UnityEngine_XR_Interaction_Toolkit_Interactors_XRDirectInteractor_<UpdateCollidersAfterOnTriggerStay>d__36__System_Collections_IEnumerator_get_Current
    :
    if (uVar44 <= uVar16) goto LAB_05cc45e8;
    if (DAT_06a492ef == '\0') {
      FUN_02d4dc40(PTR_DAT_066463e8);
      uVar44 = *(uint *)(lVar29 + 0x18);
      DAT_06a492ef = '\x01';
    }
    puVar9 = PTR_DAT_066463e8;
    uVar61 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_066463e8 + 0xb8) + 1);
    *(undefined8 *)(lVar32 + uVar43 * 0x178 + 0x48) =
         **(undefined8 **)(*(long *)PTR_DAT_066463e8 + 0xb8);
    *(undefined4 *)(lVar32 + uVar43 * 0x178 + 0x50) = uVar61;
    if (uVar44 <= uVar16) goto LAB_05cc45e8;
    lVar34 = lVar32 + uVar43 * 0x178;
    uVar61 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
    *(undefined8 *)(lVar34 + 0x70) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
    *(undefined4 *)(lVar34 + 0x78) = uVar61;
    uVar61 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
    *(undefined8 *)(lVar34 + 0x98) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
    *(undefined4 *)(lVar34 + 0xa0) = uVar61;
    uVar21 = **(undefined8 **)(*(long *)puVar9 + 0xb8);
    uVar61 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
    *(undefined1 *)(lVar24 + 0x170) = 0;
    *(undefined8 *)(lVar34 + 0xc0) = uVar21;
    *(undefined4 *)(lVar34 + 200) = uVar61;
  }
LAB_05cc2a70:
  iVar19 = FUN_05eae77c(0);
  *(bool *)((long)unaff_x19 + 0x174) = iVar19 == 1;
  unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
  if (iVar20 == 0) {
    puVar30 = (undefined8 *)(*unaff_x19 + 0x8d8);
  }
  else {
    if (iVar20 != 1) goto LAB_05cc2aec;
    puVar30 = (undefined8 *)(*unaff_x19 + 0x8f8);
  }
  (*(code *)*puVar30)();
LAB_05cc2aec:
  if ((unaff_x19[0x74] == 0) || (lVar24 = *(long *)(unaff_x19[0x74] + 0x38), lVar24 == 0))
  goto LAB_05cc446c;
  if (*(uint *)(lVar24 + 0x18) <= uVar16) goto LAB_05cc45e8;
  lVar24 = lVar24 + uVar43 * 0x178;
  uVar21 = *(undefined8 *)(lVar24 + 0x114);
  *(float *)(lVar24 + 0x11c) = fVar65 + *(float *)(lVar24 + 0x11c);
  *(undefined8 *)(lVar24 + 0x114) =
       CONCAT44(fVar54 + (float)((ulong)uVar21 >> 0x20),fVar66 + (float)uVar21);
  if ((unaff_x19[0x74] == 0) || (lVar24 = *(long *)(unaff_x19[0x74] + 0x38), lVar24 == 0))
  goto LAB_05cc446c;
  if (*(uint *)(lVar24 + 0x18) <= uVar16) goto LAB_05cc45e8;
  lVar24 = lVar24 + uVar43 * 0x178;
  *(ulong *)(lVar24 + 0x108) =
       CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar24 + 0x108) >> 0x20),
                fVar66 + (float)*(undefined8 *)(lVar24 + 0x108));
  *(float *)(lVar24 + 0x110) = fVar65 + *(float *)(lVar24 + 0x110);
  if ((unaff_x19[0x74] == 0) || (lVar24 = *(long *)(unaff_x19[0x74] + 0x38), lVar24 == 0))
  goto LAB_05cc446c;
  if (*(uint *)(lVar24 + 0x18) <= uVar16) goto LAB_05cc45e8;
  lVar24 = lVar24 + uVar43 * 0x178;
  *(ulong *)(lVar24 + 0x120) =
       CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar24 + 0x120) >> 0x20),
                fVar66 + (float)*(undefined8 *)(lVar24 + 0x120));
  *(float *)(lVar24 + 0x128) = fVar65 + *(float *)(lVar24 + 0x128);
  if ((unaff_x19[0x74] == 0) || (lVar24 = *(long *)(unaff_x19[0x74] + 0x38), lVar24 == 0))
  goto LAB_05cc446c;
  if (*(uint *)(lVar24 + 0x18) <= uVar16) goto LAB_05cc45e8;
  lVar24 = lVar24 + uVar43 * 0x178;
  uVar21 = *(undefined8 *)(lVar24 + 300);
  *(float *)(lVar24 + 0x134) = fVar65 + *(float *)(lVar24 + 0x134);
  *(undefined8 *)(lVar24 + 300) =
       CONCAT44(fVar54 + (float)((ulong)uVar21 >> 0x20),fVar66 + (float)uVar21);
  lVar24 = unaff_x19[0x74];
  if ((lVar24 == 0) || (lVar34 = *(long *)(lVar24 + 0x38), lVar34 == 0)) goto LAB_05cc446c;
  uVar44 = *(uint *)(lVar34 + 0x18);
  if (uVar44 <= uVar16) goto LAB_05cc45e8;
  lVar39 = lVar34 + 0x20 + uVar43 * 0x178;
  uVar21 = *(undefined8 *)(lVar39 + 0x118);
  auVar56._0_8_ = CONCAT44(fVar66 + (float)((ulong)uVar21 >> 0x20),fVar66 + (float)uVar21);
  auVar56._8_4_ = fVar54 + (float)*(undefined8 *)(lVar39 + 0x120);
  auVar56._12_4_ = fVar54 + (float)((ulong)*(undefined8 *)(lVar39 + 0x120) >> 0x20);
  *(float *)(lVar39 + 0x128) = fVar54 + *(float *)(lVar39 + 0x128);
  *(long *)(lVar39 + 0x120) = auVar56._8_8_;
  *(undefined8 *)(lVar39 + 0x118) = auVar56._0_8_;
  if (uVar72 == uVar18) {
    uVar18 = *(int *)(in_stack_000001a8 + 7) - 1;
    if (uVar16 == uVar18) goto LAB_05cc2cfc;
  }
  else {
    lVar24 = *(long *)(lVar24 + 0x50);
    if (lVar24 == 0) goto LAB_05cc446c;
    if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_05cc45e8;
    lVar39 = lVar24 + 0x20 + (long)(int)uVar18 * 0x60;
    fVar50 = fVar54 + *(float *)(lVar39 + 0x38);
    *(ulong *)(lVar39 + 0x30) =
         CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar39 + 0x30) >> 0x20),
                  fVar54 + (float)*(undefined8 *)(lVar39 + 0x30));
    *(float *)(lVar39 + 0x38) = fVar50;
    *(float *)(lVar39 + 0x3c) = fVar66 + *(float *)(lVar39 + 0x3c);
    if (uVar44 <= *(uint *)(lVar39 + 0x18)) goto LAB_05cc45e8;
    lVar24 = lVar24 + 0x20 + (long)(int)uVar18 * 0x60;
    uVar61 = *(undefined4 *)(lVar34 + 0x20 + (long)(int)*(uint *)(lVar39 + 0x18) * 0x178 + 0xf4);
    *(float *)(lVar24 + 0x54) = fVar50;
    *(undefined4 *)(lVar24 + 0x50) = uVar61;
    lVar24 = unaff_x19[0x74];
    if ((lVar24 == 0) || (lVar34 = *(long *)(lVar24 + 0x50), lVar34 == 0)) goto LAB_05cc446c;
    if (*(uint *)(lVar34 + 0x18) <= uVar18) goto LAB_05cc45e8;
    lVar24 = *(long *)(lVar24 + 0x38);
    if (lVar24 == 0) goto LAB_05cc446c;
    uVar44 = *(uint *)(lVar34 + 0x20 + (long)(int)uVar18 * 0x60 + 0x24);
    if (*(uint *)(lVar24 + 0x18) <= uVar44) goto LAB_05cc45e8;
    lVar34 = lVar34 + 0x20 + (long)(int)uVar18 * 0x60;
    *(undefined4 *)(lVar34 + 0x58) = *(undefined4 *)(lVar24 + (long)(int)uVar44 * 0x178 + 0x120);
    *(undefined4 *)(lVar34 + 0x5c) = *(undefined4 *)(lVar34 + 0x30);
    uVar18 = *(int *)(in_stack_000001a8 + 7) - 1;
LAB_05cc2cfc:
    if (uVar16 == uVar18) {
      lVar24 = unaff_x19[0x74];
      if ((lVar24 == 0) || (lVar34 = *(long *)(lVar24 + 0x50), lVar34 == 0)) goto LAB_05cc446c;
      if (*(uint *)(lVar34 + 0x18) <= uVar72) goto LAB_05cc45e8;
      lVar39 = lVar34 + 0x20 + (long)(int)uVar72 * 0x60;
      fVar50 = fVar54 + *(float *)(lVar39 + 0x38);
      *(ulong *)(lVar39 + 0x30) =
           CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar39 + 0x30) >> 0x20),
                    fVar54 + (float)*(undefined8 *)(lVar39 + 0x30));
      *(float *)(lVar39 + 0x38) = fVar50;
      *(float *)(lVar39 + 0x3c) = fVar66 + *(float *)(lVar39 + 0x3c);
      lVar24 = *(long *)(lVar24 + 0x38);
      if (lVar24 == 0) goto LAB_05cc446c;
      uVar18 = *(uint *)(lVar34 + 0x20 + (long)(int)uVar72 * 0x60 + 0x18);
      if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_05cc45e8;
      *(undefined4 *)(lVar39 + 0x50) = *(undefined4 *)(lVar24 + (long)(int)uVar18 * 0x178 + 0x114);
      *(float *)(lVar39 + 0x54) = fVar50;
      lVar24 = unaff_x19[0x74];
      if ((lVar24 == 0) || (lVar34 = *(long *)(lVar24 + 0x50), lVar34 == 0)) goto LAB_05cc446c;
      if (*(uint *)(lVar34 + 0x18) <= uVar72) goto LAB_05cc45e8;
      lVar24 = *(long *)(lVar24 + 0x38);
      if (lVar24 == 0) goto LAB_05cc446c;
      uVar18 = *(uint *)(lVar34 + 0x20 + (long)(int)uVar72 * 0x60 + 0x24);
      if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_05cc45e8;
      lVar34 = lVar34 + 0x20 + (long)(int)uVar72 * 0x60;
      *(undefined4 *)(lVar34 + 0x58) = *(undefined4 *)(lVar24 + (long)(int)uVar18 * 0x178 + 0x120);
      *(undefined4 *)(lVar34 + 0x5c) = *(undefined4 *)(lVar34 + 0x30);
    }
  }
  if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar23 = FUN_04f74b44(uVar14,0);
  if (((((uVar23 & 1) == 0) && (1 < uVar14 - 0x2010)) && (uVar14 != 0xad)) && (uVar14 != 0x2d)) {
    if (bVar7) {
      if (((uVar16 != 0) && ((int)uVar16 < (int)(*(uint *)(lVar29 + 0x18) - 1))) &&
         (((int)uVar16 < *(int *)(in_stack_000001a8 + 7) && ((uVar14 == 0x2019 || (uVar14 == 0x27)))
          ))) {
        if (*(uint *)(lVar29 + 0x18) <= uVar16 - 1) goto LAB_05cc45e8;
        uVar3 = *(undefined2 *)(lVar32 + (ulong)(uVar16 - 1) * 0x178 + 4);
        if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar23 = FUN_04f74b44(uVar3,0);
        if ((uVar23 & 1) != 0) {
          if (*(uint *)(lVar29 + 0x18) <= uVar16 + 1) goto LAB_05cc45e8;
          uVar3 = *(undefined2 *)(lVar32 + (ulong)(uVar16 + 1) * 0x178 + 4);
          if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar23 = FUN_04f74b44(uVar3,0);
          unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
          if ((uVar23 & 1) != 0) goto LAB_05cc2ffc;
        }
      }
LAB_05cc3d38:
      if (uVar16 == *(int *)(in_stack_000001a8 + 7) - 1U) {
        if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar23 = FUN_04f74b44(uVar14,0);
        uVar18 = uVar16;
        if ((uVar23 & 1) == 0) goto LAB_05cc3d74;
      }
      else {
LAB_05cc3d74:
        uVar18 = uVar16 - 1;
      }
      lVar24 = unaff_x19[0x74];
      if (lVar24 != 0) {
        lVar34 = *(long *)(lVar24 + 0x40);
        if (lVar34 != 0) {
          uVar44 = *(uint *)(lVar24 + 0x24);
          iVar20 = *(int *)(lVar34 + 0x18);
          if (iVar20 < (int)(uVar44 + 1)) {
            if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListSecretSummaries__
                        + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            FUN_0338de80((long *)(lVar24 + 0x40),iVar20 + 1,
                         *(undefined8 *)
                          Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListQosServersForTitle__);
            lVar24 = unaff_x19[0x74];
            if (lVar24 == 0) goto LAB_05cc446c;
          }
          unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
          lVar24 = *(long *)(lVar24 + 0x40);
          if (lVar24 != 0) {
            if (uVar44 < *(uint *)(lVar24 + 0x18)) {
              lVar24 = lVar24 + (long)(int)uVar44 * 0x18;
              *(long **)(lVar24 + 0x20) = unaff_x19;
              *(uint *)(lVar24 + 0x28) = uVar13;
              *(uint *)(lVar24 + 0x2c) = uVar18;
              *(uint *)(lVar24 + 0x30) = (uVar18 - uVar13) + 1;
              thunk_FUN_02dc1ef0();
              lVar24 = unaff_x19[0x74];
              if (lVar24 != 0) {
                lVar34 = *(long *)(lVar24 + 0x50);
                *(int *)(lVar24 + 0x24) = *(int *)(lVar24 + 0x24) + 1;
                if (lVar34 != 0) {
                  if (uVar72 < *(uint *)(lVar34 + 0x18)) {
                    bVar7 = false;
                    goto LAB_05cc2f18;
                  }
                  goto LAB_05cc45e8;
                }
              }
              goto LAB_05cc446c;
            }
            goto LAB_05cc45e8;
          }
        }
      }
      goto LAB_05cc446c;
    }
    if (uVar16 == 0) {
      if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      bVar12 = FUN_04f74a9c(uVar14,0);
      if ((((uVar14 == 0x200b | bVar12 ^ 0xff | bVar11) & 1) != 0) ||
         (*(int *)(in_stack_000001a8 + 7) == 1)) goto LAB_05cc3d38;
    }
    bVar7 = false;
  }
  else {
    if (!bVar7) {
      uVar13 = uVar16;
    }
    if (uVar16 != *(int *)(in_stack_000001a8 + 7) - 1U) {
LAB_05cc2ffc:
      bVar7 = true;
      goto LAB_05cc3004;
    }
    lVar24 = unaff_x19[0x74];
    if (lVar24 == 0) goto LAB_05cc446c;
    lVar34 = *(long *)(lVar24 + 0x40);
    if (lVar34 == 0) goto LAB_05cc446c;
    uVar18 = *(uint *)(lVar24 + 0x24);
    iVar20 = *(int *)(lVar34 + 0x18);
    if (iVar20 < (int)(uVar18 + 1)) {
      if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListSecretSummaries__ +
                  0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      FUN_0338de80((long *)(lVar24 + 0x40),iVar20 + 1,
                   *(undefined8 *)
                    Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListQosServersForTitle__);
      lVar24 = unaff_x19[0x74];
      if (lVar24 == 0) goto LAB_05cc446c;
    }
    unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
    lVar24 = *(long *)(lVar24 + 0x40);
    if (lVar24 == 0) goto LAB_05cc446c;
    if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_05cc45e8;
    lVar24 = lVar24 + (long)(int)uVar18 * 0x18;
    *(long **)(lVar24 + 0x20) = unaff_x19;
    *(uint *)(lVar24 + 0x28) = uVar13;
    *(uint *)(lVar24 + 0x2c) = uVar16;
    *(uint *)(lVar24 + 0x30) = (uVar16 - uVar13) + 1;
    thunk_FUN_02dc1ef0();
    lVar24 = unaff_x19[0x74];
    if (lVar24 == 0) goto LAB_05cc446c;
    lVar34 = *(long *)(lVar24 + 0x50);
    *(int *)(lVar24 + 0x24) = *(int *)(lVar24 + 0x24) + 1;
    if (lVar34 == 0) goto LAB_05cc446c;
    if (*(uint *)(lVar34 + 0x18) <= uVar72) goto LAB_05cc45e8;
    bVar7 = true;
LAB_05cc2f18:
    lVar34 = lVar34 + (long)(int)uVar72 * 0x60;
    iStack00000000000000ec = iStack00000000000000ec + 1;
    *(int *)(lVar34 + 0x34) = *(int *)(lVar34 + 0x34) + 1;
  }
LAB_05cc3004:
  lVar24 = unaff_x19[0x74];
  if ((lVar24 == 0) || (lVar34 = *(long *)(lVar24 + 0x38), lVar34 == 0)) goto LAB_05cc446c;
  if (*(uint *)(lVar34 + 0x18) <= uVar16) goto LAB_05cc45e8;
  lVar39 = lVar34 + 0x20;
  if ((*(byte *)(lVar39 + uVar43 * 0x178 + 0x16c) >> 2 & 1) == 0) {
    if (bVar8) {
      if (*(uint *)(lVar34 + 0x18) <= (uint)((long)(int)uVar16 + -1)) goto LAB_05cc45e8;
      lVar39 = lVar39 + ((long)(int)uVar16 + -1) * 0x178;
      lVar34 = *unaff_x19;
      uVar61 = *(undefined4 *)(lVar39 + 0x100);
      uVar62 = *(undefined4 *)(lVar39 + 0x13c);
LAB_05cc32b0:
      pcVar31 = *(code **)(lVar34 + 0x908);
LAB_05cc32b8:
      (*pcVar31)(fStack0000000000000070,fStack0000000000000068,uStack000000000000006c,uVar61,
                 fStack0000000000000140,0,in_stack_00000078._4_4_,uVar62);
LAB_05cc32f4:
      lVar24 = *unaff_x28;
      if (*(int *)(lVar24 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar24 = *unaff_x28;
      }
      fVar48 = 0.0;
      fStack000000000000013c = 0.0;
      fStack0000000000000140 = *(float *)(*(long *)(lVar24 + 0xb8) + 0x1730);
    }
    bVar8 = false;
  }
  else {
    lVar34 = lVar39 + uVar43 * 0x178;
    *(int *)(lVar34 + 0x148) = iVar17;
    iVar20 = *(int *)(lVar34 + 0x40);
    if ((((int)unaff_x19[0x6c] < (int)uVar16) || ((int)unaff_x19[0x6d] < (int)uVar72)) ||
       (((int)unaff_x19[0x62] == 5 && (iVar20 + 1 != (int)unaff_x19[0x6e])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar11 & 1) == 0 && uVar14 != 0x200b) {
      fVar66 = *(float *)(lVar39 + uVar43 * 0x178 + 0x13c);
      if (fVar48 <= fVar66) {
        fVar48 = fVar66;
      }
      if (fStack000000000000013c <= ABS(fVar49)) {
        fStack000000000000013c = ABS(fVar49);
      }
      if ((float)iVar20 != fStack0000000000000064) {
        if (*(int *)(*unaff_x28 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar24 = unaff_x19[0x74];
          if (lVar24 == 0) goto LAB_05cc446c;
          lVar34 = *(long *)(*unaff_x28 + 0xb8);
        }
        else {
          lVar34 = *(long *)(*unaff_x28 + 0xb8);
        }
        fStack0000000000000140 = *(float *)(lVar34 + 0x1730);
      }
      lVar24 = *(long *)(lVar24 + 0x38);
      if (lVar24 == 0) goto LAB_05cc446c;
      if (*(uint *)(lVar24 + 0x18) <= uVar16) goto LAB_05cc45e8;
      if (unaff_x19[0x1f] == 0) goto LAB_05cc446c;
      fVar50 = *(float *)(lVar24 + uVar43 * 0x178 + 0x144);
      fVar66 = (float)FUN_05f84bac(unaff_x19[0x1f] + 0x28,0);
      fVar50 = fVar50 + fVar48 * fVar66;
      fStack0000000000000064 = (float)iVar20;
      if (fVar50 <= fStack0000000000000140) {
        fStack0000000000000140 = fVar50;
      }
    }
    fVar66 = fVar48;
    if (!bVar8) {
      bVar8 = false;
      if ((bVar1) && ((int)uVar16 <= (int)uVar2)) {
        if ((uVar14 & 0xfffe) == 10) goto LAB_05cc3324;
        if (uVar14 != 0xd) {
          if (uVar16 == uVar2) {
            if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            uVar23 = FUN_04f758f0(uVar14,0);
            if ((uVar23 & 1) != 0) goto LAB_05cc3208;
          }
          if ((unaff_x19[0x74] != 0) && (lVar24 = *(long *)(unaff_x19[0x74] + 0x38), lVar24 != 0)) {
            if (uVar16 < *(uint *)(lVar24 + 0x18)) {
              lVar24 = lVar24 + uVar43 * 0x178;
              in_stack_00000078._4_4_ = *(float *)(lVar24 + 0x15c);
              fVar50 = fVar49;
              fVar66 = in_stack_00000078._4_4_;
              if (fVar48 != 0.0) {
                fVar50 = fStack000000000000013c;
                fVar66 = fVar48;
              }
              uStack000000000000006c = 0;
              fStack0000000000000070 = *(float *)(lVar24 + 0x114);
              uVar52 = *(undefined4 *)(lVar24 + 0x164);
              fStack0000000000000068 = fStack0000000000000140;
              fStack000000000000013c = fVar50;
              goto LAB_05cc3274;
            }
            goto LAB_05cc45e8;
          }
          goto LAB_05cc446c;
        }
      }
LAB_05cc3208:
      bVar8 = false;
      goto LAB_05cc3324;
    }
LAB_05cc3274:
    if (*(int *)(in_stack_000001a8 + 7) == 1) {
      if ((unaff_x19[0x74] != 0) && (lVar24 = *(long *)(unaff_x19[0x74] + 0x38), lVar24 != 0)) {
        if (uVar16 < *(uint *)(lVar24 + 0x18)) {
          lVar24 = lVar24 + uVar43 * 0x178;
LAB_05cc32a4:
          lVar34 = *unaff_x19;
          uVar61 = *(undefined4 *)(lVar24 + 0x120);
          uVar62 = *(undefined4 *)(lVar24 + 0x15c);
          goto LAB_05cc32b0;
        }
        goto LAB_05cc45e8;
      }
      goto LAB_05cc446c;
    }
    if ((uVar16 == uVar15) || ((int)uVar2 <= (int)uVar16)) {
      lVar24 = unaff_x19[0x74];
      if ((bVar11 & 1) == 0 && uVar14 != 0x200b) {
        if ((lVar24 == 0) || (lVar24 = *(long *)(lVar24 + 0x38), lVar24 == 0)) goto LAB_05cc446c;
        if (*(uint *)(lVar24 + 0x18) <= uVar16) goto LAB_05cc45e8;
        lVar24 = lVar24 + uVar43 * 0x178;
      }
      else {
        if ((lVar24 == 0) || (lVar24 = *(long *)(lVar24 + 0x38), lVar24 == 0)) goto LAB_05cc446c;
        if (*(uint *)(lVar24 + 0x18) <= uVar2) goto LAB_05cc45e8;
        lVar24 = lVar24 + (long)(int)uVar2 * 0x178;
      }
      uVar61 = *(undefined4 *)(lVar24 + 0x120);
      uVar62 = *(undefined4 *)(lVar24 + 0x15c);
      pcVar31 = *(code **)(*unaff_x19 + 0x908);
      goto LAB_05cc32b8;
    }
    if (!bVar1) {
      if ((unaff_x19[0x74] != 0) && (lVar24 = *(long *)(unaff_x19[0x74] + 0x38), lVar24 != 0)) {
        if ((uint)((long)(int)uVar16 + -1) < *(uint *)(lVar24 + 0x18)) {
          lVar24 = lVar24 + ((long)(int)uVar16 + -1) * 0x178;
          goto LAB_05cc32a4;
        }
        goto LAB_05cc45e8;
      }
      goto LAB_05cc446c;
    }
    fVar48 = fVar66;
    if ((int)uVar16 < *(int *)(in_stack_000001a8 + 7) + -1) {
      if ((unaff_x19[0x74] == 0) || (lVar24 = *(long *)(unaff_x19[0x74] + 0x38), lVar24 == 0))
      goto LAB_05cc446c;
      if (*(uint *)(lVar24 + 0x18) <= uVar16 + 1) goto LAB_05cc45e8;
      uVar23 = FUN_05cdeba0(uVar52,*(undefined4 *)(lVar24 + (ulong)(uVar16 + 1) * 0x178 + 0x164),0);
      if ((uVar23 & 1) == 0) {
        if ((unaff_x19[0x74] != 0) && (lVar24 = *(long *)(unaff_x19[0x74] + 0x38), lVar24 != 0)) {
          if (uVar16 < *(uint *)(lVar24 + 0x18)) {
            lVar24 = lVar24 + uVar43 * 0x178;
            (**(code **)(*unaff_x19 + 0x908))
                      (fStack0000000000000070,fStack0000000000000068,uStack000000000000006c,
                       *(undefined4 *)(lVar24 + 0x120),fStack0000000000000140,0,
                       in_stack_00000078._4_4_,*(undefined4 *)(lVar24 + 0x15c));
            unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
            goto LAB_05cc32f4;
          }
          goto LAB_05cc45e8;
        }
        goto LAB_05cc446c;
      }
      bVar8 = true;
      unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
    }
    else {
      bVar8 = true;
    }
  }
LAB_05cc3324:
  if ((unaff_x19[0x74] == 0) || (lVar24 = *(long *)(unaff_x19[0x74] + 0x38), lVar24 == 0))
  goto LAB_05cc446c;
  if (*(uint *)(lVar24 + 0x18) <= uVar16) goto LAB_05cc45e8;
  if (lVar38 == 0) goto LAB_05cc446c;
  uVar18 = *(uint *)(lVar24 + uVar43 * 0x178 + 0x18c);
  fVar66 = (float)FUN_05f84bbc(lVar38 + 0x28,0);
  if ((uVar18 >> 6 & 1) == 0) {
    if (bVar10) {
      if ((unaff_x19[0x74] != 0) && (lVar38 = *(long *)(unaff_x19[0x74] + 0x38), lVar38 != 0)) {
        if ((uint)((long)(int)uVar16 + -1) < *(uint *)(lVar38 + 0x18)) {
          lVar38 = lVar38 + ((long)(int)uVar16 + -1) * 0x178;
          goto LAB_05cc35d8;
        }
        goto LAB_05cc45e8;
      }
      goto LAB_05cc446c;
    }
LAB_05cc346c:
    bVar10 = false;
  }
  else {
    lVar24 = unaff_x19[0x74];
    if ((lVar24 == 0) || (lVar34 = *(long *)(lVar24 + 0x38), lVar34 == 0)) goto LAB_05cc446c;
    if (*(uint *)(lVar34 + 0x18) <= uVar16) goto LAB_05cc45e8;
    *(int *)(lVar34 + 0x20 + uVar43 * 0x178 + 0x150) = iVar17;
    if ((((int)unaff_x19[0x6c] < (int)uVar16) || ((int)unaff_x19[0x6d] < (int)uVar72)) ||
       (((int)unaff_x19[0x62] == 5 &&
        (*(int *)(lVar34 + 0x20 + uVar43 * 0x178 + 0x40) + 1 != (int)unaff_x19[0x6e])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((((bool)(bVar10 | bVar1 ^ 1U)) || ((int)uVar2 < (int)uVar16)) || ((uVar14 & 0xfffe) == 10))
       || (uVar14 == 0xd)) {
LAB_05cc3464:
      if (!bVar10) goto LAB_05cc346c;
    }
    else {
      if (uVar16 == uVar2) {
        if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar23 = FUN_04f758f0(uVar14,0);
        if ((uVar23 & 1) != 0) goto LAB_05cc3464;
        lVar24 = unaff_x19[0x74];
        if (lVar24 == 0) goto LAB_05cc446c;
      }
      lVar24 = *(long *)(lVar24 + 0x38);
      if (lVar24 == 0) goto LAB_05cc446c;
      if (*(uint *)(lVar24 + 0x18) <= uVar16) goto LAB_05cc45e8;
      lVar24 = lVar24 + uVar43 * 0x178;
      in_stack_000000a0._4_4_ = *(float *)(lVar24 + 0x15c);
      fStack0000000000000098 = fVar66 * in_stack_000000a0._4_4_ + *(float *)(lVar24 + 0x144);
      uStack0000000000000090 = 0;
      fStack000000000000005c = *(float *)(lVar24 + 0x58);
      fStack0000000000000094 = *(float *)(lVar24 + 0x114);
    }
    iVar20 = *(int *)(in_stack_000001a8 + 7);
    if (iVar20 == 1) {
LAB_05cc35ac:
      if ((unaff_x19[0x74] == 0) || (lVar38 = *(long *)(unaff_x19[0x74] + 0x38), lVar38 == 0))
      goto LAB_05cc446c;
      if (*(uint *)(lVar38 + 0x18) <= uVar16) goto LAB_05cc45e8;
      lVar38 = lVar38 + uVar43 * 0x178;
LAB_05cc35d8:
      fVar50 = *(float *)(lVar38 + 0x144);
      lVar24 = *unaff_x19;
      uVar61 = *(undefined4 *)(lVar38 + 0x120);
    }
    else {
      if (uVar16 != uVar15) {
        if (iVar20 <= (int)uVar16) {
LAB_05cc36b0:
          if ((int)uVar16 < iVar20) {
            iVar20 = FUN_05ee6bc0(lVar38,0);
            if (*(uint *)(lVar29 + 0x18) <= uVar16 + 1) goto LAB_05cc45e8;
            lVar38 = *(long *)(lVar32 + (ulong)(uVar16 + 1) * 0x178 + 0x20);
            if (lVar38 == 0) goto LAB_05cc446c;
            iVar19 = FUN_05ee6bc0(lVar38,0);
            if (iVar20 != iVar19) goto LAB_05cc35ac;
          }
          if (bVar1) {
            bVar10 = true;
            goto LAB_05cc3888;
          }
          if ((unaff_x19[0x74] != 0) && (lVar38 = *(long *)(unaff_x19[0x74] + 0x38), lVar38 != 0)) {
            if ((uint)((long)(int)uVar16 + -1) < *(uint *)(lVar38 + 0x18)) {
              lVar38 = lVar38 + ((long)(int)uVar16 + -1) * 0x178;
              goto LAB_05cc35d8;
            }
            goto LAB_05cc45e8;
          }
          goto LAB_05cc446c;
        }
        if ((unaff_x19[0x74] == 0) || (lVar24 = *(long *)(unaff_x19[0x74] + 0x38), lVar24 == 0))
        goto LAB_05cc446c;
        if (uVar16 + 1 < *(uint *)(lVar24 + 0x18)) {
          if (*(float *)(lVar24 + (ulong)(uVar16 + 1) * 0x178 + 0x58) == fStack000000000000005c) {
            if (*(int *)(*(long *)
                          Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListCertificateSummaries__ +
                        0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            uVar23 = FUN_05cdf0a4(0);
            if ((uVar23 & 1) != 0) {
              iVar20 = *(int *)(in_stack_000001a8 + 7);
              goto LAB_05cc36b0;
            }
          }
          lVar38 = unaff_x19[0x74];
          if ((int)uVar2 < (int)uVar16) goto LAB_05cc3614;
          goto LAB_05cc3810;
        }
        goto LAB_05cc45e8;
      }
      lVar38 = unaff_x19[0x74];
      if ((uVar14 != 0x200b & (bVar11 ^ 0xff)) == 0) {
LAB_05cc3614:
        if ((lVar38 == 0) || (lVar38 = *(long *)(lVar38 + 0x38), lVar38 == 0)) goto LAB_05cc446c;
        if (*(uint *)(lVar38 + 0x18) <= uVar2) goto LAB_05cc45e8;
        lVar38 = lVar38 + (long)(int)uVar2 * 0x178;
      }
      else {
LAB_05cc3810:
        if ((lVar38 == 0) || (lVar38 = *(long *)(lVar38 + 0x38), lVar38 == 0)) goto LAB_05cc446c;
        if (*(uint *)(lVar38 + 0x18) <= uVar16) goto LAB_05cc45e8;
        lVar38 = lVar38 + uVar43 * 0x178;
      }
      fVar50 = *(float *)(lVar38 + 0x144);
      lVar24 = *unaff_x19;
      uVar61 = *(undefined4 *)(lVar38 + 0x120);
    }
    (**(code **)(lVar24 + 0x908))
              (fStack0000000000000094,fStack0000000000000098,uStack0000000000000090,uVar61,
               in_stack_000000a0._4_4_ * fVar66 + fVar50,0,in_stack_000000a0._4_4_,
               in_stack_000000a0._4_4_);
    bVar10 = false;
  }
LAB_05cc3888:
  if ((unaff_x19[0x74] == 0) || (lVar38 = *(long *)(unaff_x19[0x74] + 0x38), lVar38 == 0))
  goto LAB_05cc446c;
  uVar18 = (uint)*(undefined8 *)(lVar38 + 0x18);
  if (uVar18 <= uVar16) goto LAB_05cc45e8;
  if ((*(byte *)(lVar38 + 0x20 + uVar43 * 0x178 + 0x16d) >> 1 & 1) == 0) {
    if (bVar6) {
      (**(code **)(*unaff_x19 + 0x918))();
    }
    bVar6 = false;
  }
  else {
    if ((((int)unaff_x19[0x6c] < (int)uVar16) || ((int)unaff_x19[0x6d] < (int)uVar72)) ||
       (((int)unaff_x19[0x62] == 5 &&
        (*(int *)(lVar38 + 0x20 + uVar43 * 0x178 + 0x40) + 1 != (int)unaff_x19[0x6e])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar6) {
LAB_05cc3a0c:
      if (uVar18 <= uVar16) goto LAB_05cc45e8;
      lVar38 = lVar38 + uVar43 * 0x178;
      in_stack_000001e0 = CONCAT44(in_stack_00001314,in_stack_00001310);
      auVar5._8_4_ = in_stack_00001318;
      auVar5._0_8_ = in_stack_000001e0;
      auVar5._12_4_ = in_stack_0000131c;
      lVar24 = 0x118;
      if ((bVar11 & 1) == 0) {
        lVar24 = 0xf4;
      }
      fVar53 = *(float *)(lVar38 + 0x180);
      fVar54 = *(float *)(lVar38 + 0x184);
      fVar63 = *(float *)(lVar38 + 0x188);
      uVar21 = *(undefined8 *)(lVar38 + 0x178);
      fVar69 = *(float *)(lVar38 + 0x120);
      fVar66 = *(float *)(lVar38 + 0x13c);
      fVar67 = *(float *)(lVar38 + 0x140);
      fVar51 = *(float *)(lVar38 + 0x148);
      fVar50 = *(float *)(lVar38 + lVar24 + 0x20);
      in_stack_000001e8 = auVar5._8_8_;
      in_stack_000001c8 = uVar21;
      fStack00000000000001d0 = fVar53;
      fStack00000000000001d4 = fVar54;
      in_stack_000001d8 = fVar63;
      in_stack_000001f0 = in_stack_00001320;
      uVar43 = FUN_05ce01c8(&stack0x000001e0,&stack0x000001c8,0);
      if ((uVar43 & 1) == 0) {
        if ((bVar11 & 1) == 0) {
          fVar66 = fVar69;
        }
        if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImageTags__
                    + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        fVar50 = fVar50 - in_stack_00001314;
        if (fVar50 <= in_stack_000000e8) {
          in_stack_000000e8 = fVar50;
        }
        if (fStack00000000000000d8 <= fVar66 + in_stack_00001318) {
          fStack00000000000000d8 = fVar66 + in_stack_00001318;
        }
        if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImageTags__
                    + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        fVar51 = fVar51 - in_stack_00001320;
        fVar67 = fVar67 + in_stack_0000131c;
        if (fVar51 <= in_stack_00000110._4_4_) {
          in_stack_00000110._4_4_ = fVar51;
        }
        if (in_stack_000000e0._4_4_ <= fVar67) {
          in_stack_000000e0._4_4_ = fVar67;
        }
      }
      else {
        if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImageTags__
                    + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        in_stack_000000e8 = (fVar50 + (fStack00000000000000d8 - in_stack_00001318)) * 0.5;
        (**(code **)(*unaff_x19 + 0x918))();
        if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImageTags__
                    + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        if ((bVar11 & 1) == 0) {
          fVar66 = fVar69;
        }
        if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImageTags__
                    + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        in_stack_00000110._4_4_ = fVar51 - fVar63;
        fStack00000000000000d8 = fVar53 + fVar66;
        in_stack_00001310 = (undefined4)uVar21;
        in_stack_00001314 = (float)((ulong)uVar21 >> 0x20);
        in_stack_000000e0._4_4_ = fVar67 + fVar54;
        in_stack_00001318 = fVar53;
        in_stack_0000131c = fVar54;
        in_stack_00001320 = fVar63;
      }
      if (((*(int *)(in_stack_000001a8 + 7) != 1) && (uVar16 != uVar15)) &&
         (((int)uVar16 < (int)uVar2 && (bVar1)))) {
        bVar6 = true;
        goto LAB_05cc3c48;
      }
      (**(code **)(*unaff_x19 + 0x918))();
    }
    else {
      bVar6 = false;
      if ((((!bVar1) || ((int)uVar2 < (int)uVar16)) || ((uVar14 & 0xfffe) == 10)) || (uVar14 == 0xd)
         ) goto LAB_05cc3c48;
      if (uVar16 != uVar2) {
LAB_05cc398c:
        lVar24 = *unaff_x28;
        if (*(int *)(lVar24 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar24 = *unaff_x28;
        }
        if ((unaff_x19[0x74] != 0) && (lVar38 = *(long *)(unaff_x19[0x74] + 0x38), lVar38 != 0)) {
          uVar18 = (uint)*(undefined8 *)(lVar38 + 0x18);
          if (uVar16 < uVar18) {
            lVar34 = *(long *)(lVar24 + 0xb8);
            lVar24 = lVar38 + uVar43 * 0x178;
            fStack00000000000000d8 = *(float *)(lVar34 + 0x1728);
            in_stack_00001320 = *(float *)(lVar24 + 0x188);
            in_stack_000000e8 = *(float *)(lVar34 + 0x1720);
            in_stack_000000e0._4_4_ = *(float *)(lVar34 + 0x172c);
            in_stack_00000110._4_4_ = *(float *)(lVar34 + 0x1724);
            in_stack_00001318 = (float)*(undefined8 *)(lVar24 + 0x180);
            in_stack_0000131c = (float)((ulong)*(undefined8 *)(lVar24 + 0x180) >> 0x20);
            in_stack_00001310 = (undefined4)*(undefined8 *)(lVar24 + 0x178);
            in_stack_00001314 = (float)((ulong)*(undefined8 *)(lVar24 + 0x178) >> 0x20);
            goto LAB_05cc3a0c;
          }
          goto LAB_05cc45e8;
        }
        goto LAB_05cc446c;
      }
      if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar23 = FUN_04f758f0(uVar14,0);
      if ((uVar23 & 1) == 0) goto LAB_05cc398c;
    }
    bVar6 = false;
  }
LAB_05cc3c48:
  iVar20 = *(int *)(in_stack_000001a8 + 7);
  uVar16 = uVar16 + 1;
  uVar18 = uVar72;
  if (iVar20 <= (int)uVar16) goto LAB_05cc4014;
  goto LAB_05cc1fd0;
LAB_05cc4014:
  lVar29 = unaff_x19[0x74];
  if (lVar29 != 0) {
    iVar19 = uVar72 + 1;
    plVar46 = (long *)PTR_DAT_06649d28;
LAB_05cc4038:
    lVar32 = *(long *)(lVar29 + 0x60);
    if (lVar32 != 0) {
      if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0xd4)) {
LAB_05cc45e8:
                    /* WARNING: Subroutine does not return */
        FUN_02d4def0();
      }
      *(int *)(lVar32 + (long)(int)*(uint *)(unaff_x19 + 0xd4) * 0x50 + 0x28) = iVar17;
      *(int *)(lVar29 + 0x18) = iVar20;
      lVar32 = unaff_x19[0xd7];
      *(int *)(lVar29 + 0x2c) = iVar19;
      if (iVar20 < 1 || iStack00000000000000ec == 0) {
        iStack00000000000000ec = 1;
      }
      *(int *)(lVar29 + 0x1c) = (int)lVar32;
      *(int *)(lVar29 + 0x24) = iStack00000000000000ec;
      *(int *)(lVar29 + 0x30) = *(int *)((long)unaff_x19 + 0x4c4) + 1;
      if (((int)unaff_x19[0x6a] != 0xff) ||
         (uVar43 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar43 & 1) == 0)) {
LAB_05cc1a38:
        if (*(int *)(*(long *)PTR_DAT_06649b28 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        FUN_05cde0f8();
        return;
      }
      lVar29 = unaff_x19[0xde];
      if (lVar29 != 0) {
        (**(code **)(lVar29 + 0x18))
                  (*(undefined8 *)(lVar29 + 0x40),unaff_x19[0x74],*(undefined8 *)(lVar29 + 0x28));
      }
      if (*(int *)((long)unaff_x19 + 0x354) != 0) {
        if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x60), lVar29 == 0))
        goto LAB_05cc446c;
        if (*(int *)(*plVar46 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        if (*(int *)(lVar29 + 0x18) == 0) goto LAB_05cc45e8;
        FUN_05d29fd4(lVar29 + 0x20,1,0);
      }
      if (unaff_x19[0x7b] != 0) {
        FUN_05ebda30(unaff_x19[0x7b],0);
        if ((unaff_x19[0x74] != 0) && (lVar29 = *(long *)(unaff_x19[0x74] + 0x60), lVar29 != 0)) {
          if (*(int *)(lVar29 + 0x18) == 0) goto LAB_05cc45e8;
          if (unaff_x19[0x7b] != 0) {
            UnityEngine_TextCore_Text_TextGenerator_SpecialCharacter___ctor
                      (unaff_x19[0x7b],*(undefined8 *)(lVar29 + 0x30),0);
            if ((unaff_x19[0x74] != 0) && (lVar29 = *(long *)(unaff_x19[0x74] + 0x60), lVar29 != 0))
            {
              if (*(int *)(lVar29 + 0x18) == 0) goto LAB_05cc45e8;
              if (unaff_x19[0x7b] != 0) {
                FUN_05ebc96c(unaff_x19[0x7b],0,*(undefined8 *)(lVar29 + 0x48),0);
                if ((unaff_x19[0x74] != 0) &&
                   (lVar29 = *(long *)(unaff_x19[0x74] + 0x60), lVar29 != 0)) {
                  if (*(int *)(lVar29 + 0x18) == 0) goto LAB_05cc45e8;
                  if (unaff_x19[0x7b] != 0) {
                    FUN_05ebc06c(unaff_x19[0x7b],*(undefined8 *)(lVar29 + 0x50),0);
                    if ((unaff_x19[0x74] != 0) &&
                       (lVar29 = *(long *)(unaff_x19[0x74] + 0x60), lVar29 != 0)) {
                      if (*(int *)(lVar29 + 0x18) == 0) goto LAB_05cc45e8;
                      if (unaff_x19[0x7b] != 0) {
                        FUN_05ebc120(unaff_x19[0x7b],*(undefined8 *)(lVar29 + 0x58),0);
                        if (unaff_x19[0x7b] != 0) {
                          FUN_05ebd970(unaff_x19[0x7b],0);
                          lVar29 = unaff_x19[0x74];
                          if (lVar29 != 0) {
                            lVar38 = 0;
                            lVar32 = 0;
                            do {
                              uVar43 = lVar32 + 1;
                              if ((long)*(int *)(lVar29 + 0x34) <= (long)uVar43) goto LAB_05cc1a38;
                              lVar29 = *(long *)(lVar29 + 0x60);
                              if (lVar29 == 0) break;
                              if (*(int *)(*plVar46 + 0xe4) == 0) {
                                thunk_FUN_02dabd98();
                              }
                              if (*(uint *)(lVar29 + 0x18) <= uVar43) goto LAB_05cc45e8;
                              FUN_05d29eb0(lVar29 + lVar38 + 0x70,0);
                              lVar29 = unaff_x19[0xe4];
                              if (lVar29 == 0) break;
                              if (*(uint *)(lVar29 + 0x18) <= uVar43) goto LAB_05cc45e8;
                              uVar21 = *(undefined8 *)(lVar29 + lVar32 * 8 + 0x28);
                              if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
                                thunk_FUN_02dabd98();
                              }
                              uVar23 = FUN_05ee2f7c(uVar21,0,0);
                              if ((uVar23 & 1) == 0) {
                                if (*(int *)((long)unaff_x19 + 0x354) != 0) {
                                  if ((unaff_x19[0x74] == 0) ||
                                     (lVar29 = *(long *)(unaff_x19[0x74] + 0x60), lVar29 == 0))
                                  break;
                                  if (*(int *)(*plVar46 + 0xe4) == 0) {
                                    thunk_FUN_02dabd98();
                                  }
                                  if (*(uint *)(lVar29 + 0x18) <= uVar43) goto LAB_05cc45e8;
                                  FUN_05d29fd4(lVar29 + lVar38 + 0x70,1,0);
                                }
                                lVar29 = unaff_x19[0xe4];
                                if (lVar29 == 0) break;
                                if (*(uint *)(lVar29 + 0x18) <= uVar43) goto LAB_05cc45e8;
                                lVar29 = *(long *)(lVar29 + lVar32 * 8 + 0x28);
                                if (lVar29 == 0) break;
                                lVar29 = FUN_05d3308c(lVar29,0);
                                if ((unaff_x19[0x74] == 0) ||
                                   (lVar24 = *(long *)(unaff_x19[0x74] + 0x60), lVar24 == 0)) break;
                                if (*(uint *)(lVar24 + 0x18) <= uVar43) goto LAB_05cc45e8;
                                if (lVar29 == 0) break;
                                UnityEngine_TextCore_Text_TextGenerator_SpecialCharacter___ctor
                                          (lVar29,*(undefined8 *)(lVar24 + lVar38 + 0x80),0);
                                lVar29 = unaff_x19[0xe4];
                                if (lVar29 == 0) break;
                                if (*(uint *)(lVar29 + 0x18) <= uVar43) goto LAB_05cc45e8;
                                lVar29 = *(long *)(lVar29 + lVar32 * 8 + 0x28);
                                if (lVar29 == 0) break;
                                lVar29 = FUN_05d3308c(lVar29,0);
                                if ((unaff_x19[0x74] == 0) ||
                                   (lVar24 = *(long *)(unaff_x19[0x74] + 0x60), lVar24 == 0)) break;
                                if (*(uint *)(lVar24 + 0x18) <= uVar43) goto LAB_05cc45e8;
                                if (lVar29 == 0) break;
                                FUN_05ebc96c(lVar29,0,*(undefined8 *)(lVar24 + lVar38 + 0x98),0);
                                lVar29 = unaff_x19[0xe4];
                                if (lVar29 == 0) break;
                                if (*(uint *)(lVar29 + 0x18) <= uVar43) goto LAB_05cc45e8;
                                lVar29 = *(long *)(lVar29 + lVar32 * 8 + 0x28);
                                if (lVar29 == 0) break;
                                lVar29 = FUN_05d3308c(lVar29,0);
                                if ((unaff_x19[0x74] == 0) ||
                                   (lVar24 = *(long *)(unaff_x19[0x74] + 0x60), lVar24 == 0)) break;
                                if (*(uint *)(lVar24 + 0x18) <= uVar43) goto LAB_05cc45e8;
                                if (lVar29 == 0) break;
                                FUN_05ebc06c(lVar29,*(undefined8 *)(lVar24 + lVar38 + 0xa0),0);
                                lVar29 = unaff_x19[0xe4];
                                if (lVar29 == 0) break;
                                if (*(uint *)(lVar29 + 0x18) <= uVar43) goto LAB_05cc45e8;
                                lVar29 = *(long *)(lVar29 + lVar32 * 8 + 0x28);
                                if (lVar29 == 0) break;
                                lVar29 = FUN_05d3308c(lVar29,0);
                                if ((unaff_x19[0x74] == 0) ||
                                   (lVar24 = *(long *)(unaff_x19[0x74] + 0x60), lVar24 == 0)) break;
                                if (*(uint *)(lVar24 + 0x18) <= uVar43) goto LAB_05cc45e8;
                                if (lVar29 == 0) break;
                                FUN_05ebc120(lVar29,*(undefined8 *)(lVar24 + lVar38 + 0xa8),0);
                                lVar29 = unaff_x19[0xe4];
                                if (lVar29 == 0) break;
                                if (*(uint *)(lVar29 + 0x18) <= uVar43) goto LAB_05cc45e8;
                                lVar29 = *(long *)(lVar29 + lVar32 * 8 + 0x28);
                                if ((lVar29 == 0) || (lVar29 = FUN_05d3308c(lVar29,0), lVar29 == 0))
                                break;
                                FUN_05ebd970(lVar29,0);
                              }
                              lVar29 = unaff_x19[0x74];
                              lVar32 = lVar32 + 1;
                              lVar38 = lVar38 + 0x50;
                            } while (lVar29 != 0);
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
LAB_05cc446c:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


