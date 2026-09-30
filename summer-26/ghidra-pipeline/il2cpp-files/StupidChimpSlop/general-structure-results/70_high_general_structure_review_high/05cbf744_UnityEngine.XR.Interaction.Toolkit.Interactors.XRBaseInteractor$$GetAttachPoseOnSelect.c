/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor$$GetAttachPoseOnSelect
ENTRY_POINT: 05cbf744
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

void UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__GetAttachPoseOnSelect
               (long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined *puVar10;
  bool bVar11;
  byte bVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined8 uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  ulong extraout_x1_05;
  ulong extraout_x1_06;
  ulong extraout_x1_07;
  ulong extraout_x1_08;
  ulong extraout_x1_09;
  ulong extraout_x1_10;
  ulong extraout_x1_11;
  ulong extraout_x1_12;
  ulong extraout_x1_13;
  undefined1 uVar23;
  char cVar24;
  long *plVar25;
  long lVar26;
  long lVar27;
  undefined8 *puVar28;
  code *pcVar29;
  uint uVar30;
  float *pfVar31;
  long in_x9;
  long lVar32;
  uint in_w10;
  float *pfVar33;
  int in_w11;
  long *plVar34;
  long lVar35;
  long lVar36;
  uint in_w12;
  int in_w13;
  uint in_w14;
  long *unaff_x19;
  ulong uVar37;
  uint unaff_w21;
  uint unaff_w22;
  int iVar38;
  uint unaff_w23;
  undefined8 *unaff_x24;
  int *piVar39;
  ulong uVar40;
  uint unaff_w26;
  uint uVar41;
  ulong uVar42;
  uint unaff_w27;
  long *plVar43;
  long *unaff_x28;
  uint uVar44;
  long *unaff_x29;
  ushort uVar45;
  undefined4 uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined8 uVar50;
  float fVar53;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined8 uVar54;
  undefined1 auVar55 [16];
  float fVar56;
  float fVar57;
  undefined4 uVar58;
  undefined8 uVar59;
  undefined4 uVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float unaff_s13;
  float fVar67;
  float unaff_s15;
  undefined1 auVar68 [16];
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
  float in_stack_000000c0;
  undefined8 in_stack_000000d0;
  float fStack00000000000000d8;
  undefined8 in_stack_000000e0;
  float in_stack_000000e8;
  int iStack00000000000000ec;
  float in_stack_000000f0;
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
  float in_stack_00000158;
  float fStack000000000000015c;
  float in_stack_00000170;
  float fStack000000000000017c;
  float fStack0000000000000180;
  float fStack0000000000000184;
  float fStack0000000000000190;
  undefined8 *in_stack_000001a8;
  float in_stack_000001b0;
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
  uint in_stack_00001308;
  undefined4 in_stack_00001310;
  float in_stack_00001314;
  float in_stack_00001318;
  float in_stack_0000131c;
  float in_stack_00001320;
  ulong in_stack_00001328;
  char in_stack_00001334;
  float in_stack_00001338;
  uint in_stack_0000133c;
  
  uVar40 = _fStack0000000000000068;
  do {
    bVar11 = in_w12 == 0xa0;
    *(int *)(param_1 + 0x20) = in_w11;
    in_w12 = in_stack_0000133c;
    if (bVar11) {
      *(int *)(in_x9 + (long)(int)in_w10 * (long)in_w13) =
           *(int *)(in_x9 + (long)(int)in_w10 * (long)in_w13) + 1;
    }
LAB_05cbfe80:
    if (((int)unaff_x19[0x62] == 1) &&
       ((fStack0000000000000190 != (float)unaff_w21 || (in_w12 == 0x2d)))) {
      if (unaff_x19[0xce] == 0) goto LAB_05cc446c;
      fVar63 = *(float *)(unaff_x19 + 0x42);
      fVar47 = (float)FUN_05f84b24(unaff_x19[0xce] + 0x28,0);
      if (unaff_x19[0xce] == 0) goto LAB_05cc446c;
      fVar48 = (float)FUN_05f84b2c(unaff_x19[0xce] + 0x28,0);
      lVar26 = unaff_x19[0xcd];
      if ((lVar26 == 0) || (*(long *)(lVar26 + 0x20) == 0)) goto LAB_05cc446c;
      fVar64 = *(float *)((long)unaff_x19 + 0x43c);
      fVar66 = *(float *)(lVar26 + 0x2c);
      fVar49 = (float)FUN_05f85024(*(long *)(lVar26 + 0x20),0);
      uVar59 = *(undefined8 *)_fStack00000000000000b8;
      fVar49 = fVar64 * in_stack_00000120 * (fVar63 / fVar47) * fVar48 * fVar66 * fVar49;
      param_3 = extraout_x1_05;
      if ((in_w12 == 10) && (*(int *)((long)unaff_x19 + 0x4a4) != (int)unaff_x19[0x95])) {
        if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
        goto LAB_05cc446c;
        uVar14 = *(int *)((long)unaff_x19 + 0x4a4) - 1;
        if (*(uint *)(lVar26 + 0x18) <= uVar14) goto LAB_05cc45e8;
        if (unaff_x19[0xce] == 0) goto LAB_05cc446c;
        fVar63 = *(float *)(lVar26 + (long)(int)uVar14 * (long)(int)unaff_w23 + 0x58);
        fVar47 = (float)FUN_05f84b24(unaff_x19[0xce] + 0x28,0);
        if (unaff_x19[0xce] == 0) goto LAB_05cc446c;
        fVar48 = (float)FUN_05f84b2c(unaff_x19[0xce] + 0x28,0);
        lVar26 = unaff_x19[0xcd];
        if ((lVar26 == 0) || (*(long *)(lVar26 + 0x20) == 0)) goto LAB_05cc446c;
        fVar64 = *(float *)((long)unaff_x19 + 0x43c);
        fVar66 = *(float *)(lVar26 + 0x2c);
        fVar49 = (float)FUN_05f85024(*(long *)(lVar26 + 0x20),0);
        if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x50), lVar26 == 0))
        goto LAB_05cc446c;
        if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_05cc45e8;
        uVar59 = *(undefined8 *)(lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60 + 100);
        fVar49 = fVar64 * in_stack_00000120 * (fVar63 / fVar47) * fVar48 * fVar66 * fVar49;
        param_3 = extraout_x1_06;
      }
      fVar63 = *(float *)((long)unaff_x19 + 0x4ec);
      fVar47 = 0.0;
      fVar48 = 0.0;
      if ((0.0 < fVar63) && ((char)unaff_x19[0x5e] == '\0')) {
        fVar48 = *(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4e4);
      }
      fVar64 = *(float *)((long)unaff_x19 + 0x4cc);
      fVar66 = *(float *)(unaff_x19 + 0x9c);
      fVar67 = *(float *)(unaff_x19 + 0xcb);
      fStack0000000000000180 = (float)uVar59;
      fStack0000000000000184 = (float)((ulong)uVar59 >> 0x20);
      if ((char)unaff_x19[0x1e] == '\0') {
        if ((unaff_x19[0xcd] == 0) || (lVar26 = *(long *)(unaff_x19[0xcd] + 0x20), lVar26 == 0))
        goto LAB_05cc446c;
        FUN_05f84fe8(&stack0x00001340,lVar26,0);
        fVar47 = (float)FUN_05f84e30(&stack0x000011e0,0);
        param_3 = extraout_x1_07;
      }
      fVar57 = *(float *)(unaff_x19 + 0x73);
      fStack0000000000000184 = (in_stack_000000b0 - fStack0000000000000180) - fStack0000000000000184
      ;
      bVar11 = true;
      if ((fVar57 <= fStack0000000000000184) && (bVar11 = false, !NAN(fVar57))) {
        bVar11 = fVar57 == -1.0;
      }
      if (!bVar11) {
        fStack0000000000000184 = fVar57;
      }
      fVar57 = unaff_s15;
      if (in_w14 != 0) {
        fVar57 = DAT_01275388;
      }
      unaff_s13 = in_stack_00000158;
      if ((ABS(fVar67) + fVar49 * fVar47 * (unaff_s15 - *(float *)(unaff_x19 + 0x60)) <
           fVar57 * fStack0000000000000184) &&
         ((fVar64 - (fVar66 - fVar63)) + fVar48 < in_stack_000000e0._4_4_)) {
        if (*(int *)(*unaff_x28 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        FUN_05d115d4();
        lVar26 = *(long *)(*unaff_x28 + 0xb8);
        memcpy(&stack0x00001340,(void *)(lVar26 + 0x810),0x3b8);
        FUN_03cc2a20(lVar26 + 0x1338,&stack0x00001340,
                     *(undefined8 *)
                      Method_PlayFab_PlayFabMultiplayerInstanceAPI_RequestMultiplayerServer__);
        param_3 = extraout_x1_08;
      }
    }
    lVar26 = unaff_x19[0x74];
    if ((lVar26 == 0) || (lVar27 = *(long *)(lVar26 + 0x38), lVar27 == 0)) goto LAB_05cc446c;
    if (*(uint *)(lVar27 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_05cc45e8;
    lVar27 = lVar27 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * (long)(int)unaff_w23;
    uVar14 = *(uint *)(unaff_x19 + 0x97);
    *(uint *)(lVar27 + 0x5c) = uVar14;
    *(undefined4 *)(lVar27 + 0x60) = *(undefined4 *)((long)unaff_x19 + 0x4c4);
    if ((fStack0000000000000190 == (float)unaff_w21) ||
       ((in_w12 < 0xe && ((1 << (ulong)(in_w12 & 0x1f) & 0x2c00U) != 0)))) {
      lVar26 = *(long *)(lVar26 + 0x50);
      if (lVar26 == 0) goto LAB_05cc446c;
      if (*(uint *)(lVar26 + 0x18) <= uVar14) goto LAB_05cc45e8;
      if (*(int *)(lVar26 + (long)(int)uVar14 * 0x60 + 0x24) == 1) goto LAB_05cc0220;
    }
    else {
      lVar26 = *(long *)(lVar26 + 0x50);
      if (lVar26 == 0) goto LAB_05cc446c;
LAB_05cc0220:
      if (*(uint *)(lVar26 + 0x18) <= uVar14) goto LAB_05cc45e8;
      *(int *)(lVar26 + (long)(int)uVar14 * 0x60 + 0x6c) = (int)unaff_x19[0x54];
    }
    if (in_w12 == 9) {
      if (unaff_x19[0x20] == 0) goto LAB_05cc446c;
      fVar47 = (float)FUN_05f84bcc(unaff_x19[0x20] + 0x28,0);
      if (unaff_x19[0x20] == 0) goto LAB_05cc446c;
      fVar63 = (float)NEON_ucvtf((uint)*(byte *)(unaff_x19[0x20] + 0x1b1));
      fVar49 = *(float *)(unaff_x19 + 0xcb);
      auVar68 = ZEXT416((uint)fVar49);
      fVar48 = in_stack_00000170 * fVar47 * fVar63;
      param_3 = extraout_x1_09;
      if ((char)unaff_x19[0x1e] == '\0') {
        fVar63 = fVar48 * (float)(int)(fVar49 / fVar48);
        fVar47 = fVar63;
        if (fVar63 <= fVar49) {
          fVar47 = fVar48 + fVar49;
        }
      }
      else {
        fVar63 = fVar48 * (float)(int)(fVar49 / fVar48);
        fVar47 = fVar63;
        if (fVar49 <= fVar63) {
          fVar47 = fVar49 - fVar48;
        }
      }
LAB_05cc0464:
      *(float *)(unaff_x19 + 0xcb) = fVar47;
    }
    else {
      fVar47 = *(float *)(unaff_x19 + 0x5b);
      if (fVar47 == 0.0) {
        fVar47 = *(float *)(unaff_x19 + 0xcb);
        if ((char)unaff_x19[0x1e] == '\0') {
          fVar49 = (float)FUN_05f84e30(&stack0x00001280,0);
          fVar66 = *(float *)(unaff_x24 + 2);
          fVar64 = (float)FUN_05f89368(&stack0x00001270,0);
          if (unaff_x19[0x20] != 0) {
            fVar63 = *(float *)(unaff_x19 + 0x60);
            fVar48 = unaff_s15 - fVar63;
            fVar47 = fVar47 + fVar48 * (*(float *)((long)unaff_x19 + 0x2d4) +
                                       in_stack_00000170 * (fVar49 * fVar66 + fVar64) +
                                       in_stack_00000108 *
                                       (in_stack_000000f0 +
                                       in_stack_000000c0 + *(float *)(unaff_x19[0x20] + 0x1a4)));
            *(float *)(unaff_x19 + 0xcb) = fVar47;
            param_3 = extraout_x1_11;
            goto joined_r0x05cc03a4;
          }
          goto LAB_05cc446c;
        }
        fVar48 = (float)FUN_05f89368(&stack0x00001270,0);
        if (unaff_x19[0x20] == 0) goto LAB_05cc446c;
        fVar63 = *(float *)(unaff_x19 + 0x60);
        auVar68 = ZEXT416((uint)(unaff_s15 - fVar63));
        fVar47 = fVar47 - (unaff_s15 - fVar63) *
                          (*(float *)((long)unaff_x19 + 0x2d4) +
                          in_stack_00000170 * fVar48 +
                          in_stack_00000108 *
                          (in_stack_000000f0 +
                          in_stack_000000c0 + *(float *)(unaff_x19[0x20] + 0x1a4)));
        *(float *)(unaff_x19 + 0xcb) = fVar47;
        param_3 = extraout_x1_10;
        if ((unaff_w26 != 0) || (in_w12 == 0x200b)) {
          auVar68 = ZEXT416((uint)(in_stack_00000108 * *(float *)(unaff_x19 + 0x5c)));
          fVar63 = in_stack_00000108;
          fVar47 = fVar47 - in_stack_00000108 * *(float *)(unaff_x19 + 0x5c);
          goto LAB_05cc0464;
        }
      }
      else {
        if (((*(char *)((long)unaff_x19 + 0x2dc) != '\0') && (in_w12 < 0x3b)) &&
           ((1L << ((ulong)in_w12 & 0x3f) & 0x400500000000000U) != 0)) {
          fVar47 = fVar47 * 0.5;
        }
        if (unaff_x19[0x20] == 0) goto LAB_05cc446c;
        fVar63 = *(float *)(unaff_x19 + 0x60);
        fVar48 = *(float *)(unaff_x19 + 0xcb);
        fVar47 = fVar48 + (unaff_s15 - fVar63) *
                          (*(float *)((long)unaff_x19 + 0x2d4) +
                          (fVar47 - fStack0000000000000094) +
                          in_stack_00000108 *
                          (in_stack_000000c0 + *(float *)(unaff_x19[0x20] + 0x1a4)));
        *(float *)(unaff_x19 + 0xcb) = fVar47;
joined_r0x05cc03a4:
        if ((unaff_w26 != 0) || (auVar68 = ZEXT416((uint)fVar48), in_w12 == 0x200b)) {
          auVar68 = ZEXT416((uint)(in_stack_00000108 * *(float *)(unaff_x19 + 0x5c)));
          fVar63 = in_stack_00000108;
          fVar47 = fVar47 + in_stack_00000108 * *(float *)(unaff_x19 + 0x5c);
          goto LAB_05cc0464;
        }
      }
    }
    lVar26 = unaff_x19[0x74];
    if ((lVar26 == 0) || (lVar27 = *(long *)(lVar26 + 0x38), lVar27 == 0)) goto LAB_05cc446c;
    uVar14 = *(uint *)(unaff_x24 + 7);
    if (*(uint *)(lVar27 + 0x18) <= uVar14) goto LAB_05cc45e8;
    *(float *)(lVar27 + (long)(int)uVar14 * (long)(int)unaff_w23 + 0x13c) = fVar47;
    if (in_w12 == 0xd) {
      auVar68 = ZEXT816(0);
      *(float *)(unaff_x19 + 0xcb) = *(float *)((long)unaff_x19 + 0x444) + 0.0;
    }
    if (((int)unaff_x19[0x62] == 5) &&
       (((0xd < in_w12 || ((1 << (ulong)(in_w12 & 0x1f) & 0x2c00U) == 0)) && (1 < in_w12 - 0x2028)))
       ) {
      lVar27 = *(long *)(lVar26 + 0x58);
      if (lVar27 == 0) goto LAB_05cc446c;
      iVar16 = *(int *)((long)unaff_x19 + 0x4c4) + 1;
      if (*(int *)(lVar27 + 0x18) < iVar16) {
        if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListSecretSummaries__ +
                    0xe4) == 0) {
          thunk_FUN_02dabd98(*(long *)
                              Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListSecretSummaries__,
                             param_3);
        }
        FUN_0338e148((long *)(lVar26 + 0x58),iVar16,1,
                     *(undefined8 *)
                      Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListMultiplayerServers__);
        lVar26 = unaff_x19[0x74];
        if (lVar26 == 0) goto LAB_05cc446c;
      }
      unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
      lVar27 = *(long *)(lVar26 + 0x58);
      if (lVar27 == 0) goto LAB_05cc446c;
      uVar15 = *(uint *)((long)unaff_x19 + 0x4c4);
      if (*(uint *)(lVar27 + 0x18) <= uVar15) goto LAB_05cc45e8;
      lVar27 = lVar27 + 0x20;
      lVar35 = lVar27 + (long)(int)uVar15 * 0x14;
      *(int *)(lVar35 + 8) = (int)unaff_x19[0x99];
      fVar48 = *(float *)(lVar35 + 0x10);
      auVar68 = ZEXT416((uint)fVar48);
      fVar47 = *(float *)(unaff_x19 + 0x9b);
      if (fVar48 <= *(float *)(unaff_x19 + 0x9b)) {
        fVar47 = fVar48;
      }
      *(float *)(lVar35 + 0x10) = fVar47;
      if (*(char *)((long)unaff_x19 + 0x374) != '\0') {
        *(undefined1 *)((long)unaff_x19 + 0x374) = 0;
        *(undefined4 *)(lVar27 + (long)(int)uVar15 * 0x14) =
             *(undefined4 *)((long)unaff_x19 + 0x4a4);
      }
      uVar14 = *(uint *)(unaff_x24 + 7);
      *(uint *)(lVar27 + (long)(int)uVar15 * 0x14 + 4) = uVar14;
    }
    uVar15 = in_w12;
    if (((in_w12 < 0xc) && ((1 << (ulong)(in_w12 & 0x1f) & 0xc08U) != 0)) ||
       ((in_w12 - 0x2028 < 2 ||
        ((in_w12 == 0x2d && fStack0000000000000190 == (float)unaff_w21 ||
         (uVar14 == uStack0000000000000054)))))) {
      if (0.0 < *(float *)((long)unaff_x19 + 0x4ec)) {
        fVar47 = *(float *)((long)unaff_x19 + 0x4dc);
        fVar63 = *(float *)((long)unaff_x19 + 0x4e4);
        if (*(int *)(*(long *)PTR_DAT_06646780 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        fVar47 = fVar47 - fVar63;
        if (((fStack0000000000000058 < ABS(fVar47)) && ((char)unaff_x19[0x5e] == '\0')) &&
           (*(char *)((long)unaff_x19 + 0x374) == '\0')) {
          FUN_05d11990();
          lVar26 = *unaff_x28;
          *(float *)(unaff_x19 + 0x9b) = *(float *)(unaff_x19 + 0x9b) - fVar47;
          *(float *)((long)unaff_x19 + 0x4ec) = fVar47 + *(float *)((long)unaff_x19 + 0x4ec);
          if (*(int *)(lVar26 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            lVar26 = *unaff_x28;
          }
          lVar27 = *(long *)(lVar26 + 0xb8);
          if (*(int *)(lVar27 + 0x838) == (int)unaff_x19[0x97]) {
            if (*(int *)(lVar26 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
              lVar27 = *(long *)(*unaff_x28 + 0xb8);
            }
            FUN_03cc2b0c(&stack0x00000200,lVar27 + 0x1338,
                         *(undefined8 *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_RemoveMember__)
            ;
            lVar26 = *unaff_x28;
            memcpy((void *)(*(long *)(lVar26 + 0xb8) + 0x810),&stack0x00000200,0x3b8);
            thunk_FUN_02dc1ef0(*(long *)(lVar26 + 0xb8) + 0x8a8,0);
            lVar26 = *(long *)(*unaff_x28 + 0xb8);
            *(float *)(lVar26 + 0x848) = fVar47 + *(float *)(lVar26 + 0x848);
            *(float *)(lVar26 + 0x894) = fVar47 + *(float *)(lVar26 + 0x894);
            memcpy(&stack0x00001340,(void *)(lVar26 + 0x810),0x3b8);
            FUN_03cc2a20(lVar26 + 0x1338,&stack0x00001340,
                         *(undefined8 *)
                          Method_PlayFab_PlayFabMultiplayerInstanceAPI_RequestMultiplayerServer__);
          }
        }
      }
      fVar63 = *(float *)((long)unaff_x19 + 0x4ec);
      *(undefined1 *)((long)unaff_x19 + 0x374) = 0;
      fVar48 = *(float *)(unaff_x19 + 0x9c) - fVar63;
      fVar47 = *(float *)(unaff_x19 + 0x9b);
      if (fVar48 <= *(float *)(unaff_x19 + 0x9b)) {
        fVar47 = fVar48;
      }
      fVar49 = *(float *)((long)unaff_x19 + 0x4dc);
      *(float *)(unaff_x19 + 0x9b) = fVar47;
      if (in_stack_00001334 == '\0') {
        in_stack_00001338 = fVar47;
      }
      if ((*(char *)((long)unaff_x19 + 0x36c) != '\0') &&
         (((int)unaff_x19[0x6c] <= *(int *)((long)unaff_x19 + 0x4a4) ||
          ((int)unaff_x19[0x6d] <= (int)unaff_x19[0x97])))) {
        in_stack_00001334 = '\x01';
      }
      lVar26 = unaff_x19[0x74];
      if ((lVar26 == 0) || (lVar27 = *(long *)(lVar26 + 0x50), lVar27 == 0)) goto LAB_05cc446c;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_05cc45e8;
      lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
      iVar18 = (int)unaff_x19[0x95];
      *(int *)(lVar27 + 0x38) = iVar18;
      iVar16 = iVar18;
      if (iVar18 <= *(int *)((long)unaff_x19 + 0x4ac)) {
        iVar16 = *(int *)((long)unaff_x19 + 0x4ac);
      }
      *(int *)((long)unaff_x19 + 0x4ac) = iVar16;
      *(int *)(lVar27 + 0x3c) = iVar16;
      iVar38 = *(int *)((long)unaff_x19 + 0x4a4);
      *(int *)(unaff_x19 + 0x96) = iVar38;
      *(int *)(lVar27 + 0x40) = iVar38;
      iVar17 = *(int *)((long)unaff_x19 + 0x4ac);
      if (iVar16 <= *(int *)((long)unaff_x19 + 0x4b4)) {
        iVar17 = *(int *)((long)unaff_x19 + 0x4b4);
      }
      *(int *)((long)unaff_x19 + 0x4b4) = iVar17;
      *(int *)(lVar27 + 0x44) = iVar17;
      *(int *)(lVar27 + 0x24) = (iVar38 - iVar18) + 1;
      iVar16 = *(int *)((long)unaff_x19 + 0x4bc);
      *(int *)(lVar27 + 0x28) = iVar16;
      *(int *)(lVar27 + 0x30) = (iVar17 - (iVar18 + iVar16)) + 1;
      lVar26 = *(long *)(lVar26 + 0x38);
      if (lVar26 == 0) goto LAB_05cc446c;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x24 + 8)) goto LAB_05cc45e8;
      *(undefined4 *)(lVar27 + 0x70) =
           *(undefined4 *)
            (lVar26 + (long)(int)*(uint *)(unaff_x24 + 8) * (long)(int)unaff_w23 + 0x114);
      *(float *)(lVar27 + 0x74) = fVar48;
      lVar26 = unaff_x19[0x74];
      if ((lVar26 == 0) || (lVar27 = *(long *)(lVar26 + 0x50), lVar27 == 0)) goto LAB_05cc446c;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_05cc45e8;
      lVar26 = *(long *)(lVar26 + 0x38);
      if (lVar26 == 0) goto LAB_05cc446c;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4b4)) goto LAB_05cc45e8;
      fVar49 = fVar49 - fVar63;
      auVar68 = ZEXT416((uint)fVar49);
      lVar27 = lVar27 + 0x20 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
      *(undefined4 *)(lVar27 + 0x58) =
           *(undefined4 *)
            (lVar26 + (long)(int)*(uint *)((long)unaff_x19 + 0x4b4) * (long)(int)unaff_w23 + 0x120);
      *(float *)(lVar27 + 0x5c) = fVar49;
      lVar26 = unaff_x19[0x74];
      if ((lVar26 == 0) || (lVar27 = *(long *)(lVar26 + 0x50), lVar27 == 0)) goto LAB_05cc446c;
      uVar14 = *(uint *)(unaff_x19 + 0x97);
      if (*(uint *)(lVar27 + 0x18) <= uVar14) goto LAB_05cc45e8;
      lVar27 = lVar27 + 0x20;
      lVar35 = lVar27 + (long)(int)uVar14 * 0x60;
      *(float *)(lVar35 + 0x28) = *(float *)(lVar35 + 0x58) - in_stack_00000170 * unaff_s13;
      *(float *)(lVar35 + 0x40) = fStack000000000000014c;
      if (*(int *)(lVar35 + 4) == 1) {
        *(int *)(lVar27 + (long)(int)uVar14 * 0x60 + 0x4c) = (int)unaff_x19[0x54];
      }
      if ((unaff_x19[0x20] == 0) || (lVar35 = *(long *)(lVar26 + 0x38), lVar35 == 0))
      goto LAB_05cc446c;
      uVar30 = *(uint *)((long)unaff_x19 + 0x4b4);
      if (*(uint *)(lVar35 + 0x18) <= uVar30) goto LAB_05cc45e8;
      if ((*(char *)(lVar35 + 0x20 + (long)(int)uVar30 * (long)(int)unaff_w23 + 0x170) == '\0') &&
         (uVar30 = *(uint *)(unaff_x19 + 0x96), *(uint *)(lVar35 + 0x18) <= uVar30))
      goto LAB_05cc45e8;
      fVar63 = (unaff_s15 - *(float *)(unaff_x19 + 0x60)) *
               (*(float *)((long)unaff_x19 + 0x2d4) +
               in_stack_00000108 *
               (in_stack_000000f0 + in_stack_000000c0 + *(float *)(unaff_x19[0x20] + 0x1a4)));
      fVar47 = -fVar63;
      if ((char)unaff_x19[0x1e] != '\0') {
        fVar47 = fVar63;
      }
      lVar27 = lVar27 + (long)(int)uVar14 * 0x60;
      *(float *)(lVar27 + 0x3c) =
           *(float *)(lVar35 + 0x20 + (long)(int)uVar30 * (long)(int)unaff_w23 + 0x11c) + fVar47;
      fVar63 = 0.0 - *(float *)((long)unaff_x19 + 0x4ec);
      *(float *)(lVar27 + 0x34) = fVar63;
      *(float *)(lVar27 + 0x38) = fVar48;
      *(float *)(lVar27 + 0x2c) = fStack0000000000000064 + (fVar49 - fVar48);
      *(float *)(lVar27 + 0x30) = fVar49;
      if ((((in_w12 & 0xfffffffe) == 10) ||
          (fStack0000000000000190 == (float)unaff_w21 && in_w12 == 0x2d)) || (in_w12 - 0x2028 < 2))
      {
        if (*(int *)(*unaff_x28 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        FUN_05d115d4();
        lVar26 = unaff_x19[0x97];
        iVar18 = *(int *)((long)unaff_x19 + 0x4a4);
        unaff_x24[10] = 0;
        iVar16 = (int)lVar26 + 1;
        lVar26 = unaff_x19[0x74];
        *(int *)(unaff_x19 + 0x97) = iVar16;
        *(int *)(unaff_x19 + 0x95) = iVar18 + 1;
        if ((lVar26 == 0) || (*(long *)(lVar26 + 0x50) == 0)) goto LAB_05cc446c;
        if (*(int *)(*(long *)(lVar26 + 0x50) + 0x18) <= iVar16) {
          FUN_05d11b4c();
          lVar26 = unaff_x19[0x74];
          if (lVar26 == 0) goto LAB_05cc446c;
        }
        lVar26 = *(long *)(lVar26 + 0x38);
        if (lVar26 == 0) goto LAB_05cc446c;
        if (*(uint *)(unaff_x24 + 7) < *(uint *)(lVar26 + 0x18)) {
          fVar47 = *(float *)(lVar26 + (long)(int)*(uint *)(unaff_x24 + 7) * (long)(int)unaff_w23 +
                             0x14c);
          if (*(float *)((long)unaff_x19 + 0x2ec) == DAT_01274f94) {
            if ((in_w12 == 0x2029) || (fVar63 = 0.0, in_w12 == 10)) {
              fVar63 = *(float *)(unaff_x19 + 0x5f);
            }
            uVar23 = 0;
            fVar63 = fVar47 + (0.0 - *(float *)(unaff_x19 + 0x9c)) +
                     fStack0000000000000050 *
                     (fStack0000000000000048 + *(float *)(unaff_x19 + 0x5d)) +
                     in_stack_00000108 * (*(float *)((long)unaff_x19 + 0x2e4) + fVar63) +
                     *(float *)((long)unaff_x19 + 0x4ec);
          }
          else {
            if ((in_w12 == 0x2029) || (fVar63 = 0.0, in_w12 == 10)) {
              fVar63 = *(float *)(unaff_x19 + 0x5f);
            }
            uVar23 = 1;
            fVar63 = *(float *)((long)unaff_x19 + 0x4ec) +
                     *(float *)((long)unaff_x19 + 0x2ec) +
                     in_stack_00000108 * (*(float *)((long)unaff_x19 + 0x2e4) + fVar63);
          }
          lVar26 = *unaff_x28;
          *(float *)((long)unaff_x19 + 0x4ec) = fVar63;
          *(undefined1 *)(unaff_x19 + 0x5e) = uVar23;
          if (*(int *)(lVar26 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            lVar26 = *unaff_x28;
          }
          fVar48 = *(float *)(unaff_x19 + 0x88);
          uVar59 = *(undefined8 *)(*(long *)(lVar26 + 0xb8) + 0x1730);
          *(float *)((long)unaff_x19 + 0x4e4) = fVar47;
          fVar63 = *(float *)((long)unaff_x19 + 0x444);
          auVar68._0_8_ = NEON_rev64(uVar59,4);
          auVar68._8_8_ = 0;
          unaff_x24[0xe] = auVar68._0_8_;
          *(float *)(unaff_x19 + 0xcb) = fVar48 + 0.0 + fVar63;
          FUN_05d115d4();
          FUN_05d115d4();
          *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
          goto UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__set_onSelectExited;
        }
        goto LAB_05cc45e8;
      }
      if (in_w12 == 3) {
        if (unaff_x19[0x91] == 0) goto LAB_05cc446c;
        in_stack_00001308 = (uint)*(undefined8 *)(unaff_x19[0x91] + 0x18);
        uVar15 = 3;
      }
    }
    lVar26 = *(long *)(lVar26 + 0x38);
    if (lVar26 == 0) goto LAB_05cc446c;
    uVar30 = *(uint *)(unaff_x24 + 7);
    uVar14 = *(uint *)(lVar26 + 0x18);
    if (uVar14 <= uVar30) goto LAB_05cc45e8;
    lVar26 = lVar26 + 0x20;
    if (*(char *)(lVar26 + (long)(int)uVar30 * (long)(int)unaff_w23 + 0x170) != '\0') {
      lVar27 = lVar26 + (long)(int)uVar30 * (long)(int)unaff_w23;
      auVar51 = *(undefined1 (*) [16])(unaff_x19 + 0x9e);
      auVar55 = NEON_ext(auVar51,auVar51,8,1);
      uVar59 = *(undefined8 *)(lVar27 + 0xf4);
      fVar63 = (float)uVar59;
      uVar19 = *(undefined8 *)(lVar27 + 0x100);
      fVar47 = (float)uVar19;
      fVar48 = (float)((ulong)uVar19 >> 0x20);
      auVar68._0_4_ = (float)-(uint)(auVar51._0_4_ < fVar63);
      auVar68._4_4_ = (float)-(uint)(auVar51._4_4_ < (float)((ulong)uVar59 >> 0x20));
      auVar68._8_4_ = -(uint)(fVar47 < auVar55._0_4_);
      auVar68._12_4_ = -(uint)(fVar48 < auVar55._4_4_);
      auVar55._8_4_ = fVar47;
      auVar55._0_8_ = uVar59;
      auVar55._12_4_ = fVar48;
      auVar51 = auVar51 ^ (auVar51 ^ auVar55) & ~auVar68;
      unaff_x19[0x9f] = auVar51._8_8_;
      unaff_x19[0x9e] = auVar51._0_8_;
    }
    if (((*(int *)((long)unaff_x19 + 0x304) != 3) && (*(int *)((long)unaff_x19 + 0x304) != 0)) ||
       ((*(uint *)(unaff_x19 + 0x62) < 7 &&
        ((1 << (ulong)(*(uint *)(unaff_x19 + 0x62) & 0x1f) & 0x4aU) != 0)))) {
      if ((((unaff_w26 == 0) && (uVar15 != 0x2d)) && (uVar15 != 0x200b)) && (uVar15 != 0xad)) {
        if (*(char *)((long)unaff_x19 + 0x309) == '\0') goto LAB_05cc0e60;
LAB_05cc0cf4:
        if (((uint)in_stack_00000078._4_4_ & 1) == 0) {
          in_stack_00000078._4_4_ = 0.0;
        }
        else {
          uVar14 = (uint)(unaff_w26 == 0 || in_w12 == 0xa0) &
                   ((uint)(in_w12 != 0xad) | (uint)fStack000000000000005c) ^ 1;
LAB_05cc0d28:
          in_stack_00000078._4_4_ = 1.4013e-45;
UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__OnHoverExiting:
          if (*(int *)(*unaff_x28 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          FUN_05d115d4();
          if (uVar14 != 0) goto LAB_05cc0d64;
        }
      }
      else {
        if (*(char *)((long)unaff_x19 + 0x309) != '\0') goto LAB_05cc0cf4;
        if ((int)uVar15 < 0x2007) {
          if (uVar15 == 0x2d) {
            if (0 < (int)uVar30) {
              if (uVar14 <= uVar30 - 1) goto LAB_05cc45e8;
              uVar5 = *(undefined2 *)(lVar26 + (ulong)(uVar30 - 1) * (ulong)unaff_w23 + 4);
              if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              uVar20 = FUN_04f72380(uVar5,0);
              if ((uVar20 & 1) != 0) {
                if ((unaff_x19[0x74] == 0) ||
                   (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0)) goto LAB_05cc446c;
                if (*(uint *)(lVar26 + 0x18) <= *(int *)(unaff_x24 + 7) - 1U) goto LAB_05cc45e8;
                if (*(int *)(lVar26 + (long)(int)(*(int *)(unaff_x24 + 7) - 1U) *
                                      (long)(int)unaff_w23 + 0x5c) == (int)unaff_x19[0x97])
                goto LAB_05cc0dc4;
              }
            }
          }
          else if (uVar15 == 0xa0) goto LAB_05cc0e60;
LAB_05cc13e0:
          lVar26 = *unaff_x28;
          if (*(int *)(lVar26 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            lVar26 = *unaff_x28;
          }
          in_stack_00000078._4_4_ = 0.0;
          uVar14 = 0;
          *(undefined4 *)(*(long *)(lVar26 + 0xb8) + 0xf80) = 0xffffffff;
          goto UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__OnHoverExiting;
        }
        if (((0x28 < uVar15 - 0x2007) ||
            ((1L << ((ulong)(uVar15 - 0x2007) & 0x3f) & 0x10000000401U) == 0)) && (uVar15 != 0x2060)
           ) goto LAB_05cc13e0;
LAB_05cc0e60:
        if (*(int *)(*(long *)
                      Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListServerBackfillTicketsForPlayer__
                    + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar20 = FUN_05d36aac(uVar15,0);
        if ((uVar20 & 1) == 0) {
LAB_05cc0eac:
          if (*(int *)(*(long *)
                        Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListServerBackfillTicketsForPlayer__
                      + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar20 = FUN_05d36b08(in_w12,0);
          if ((uVar20 & 1) != 0) goto LAB_05cc0ed8;
          if ((*(char *)((long)unaff_x19 + 0x309) != '\0') ||
             (uVar14 = *(int *)(unaff_x24 + 7) + 1, iStack0000000000000060 <= (int)uVar14))
          goto LAB_05cc0cf4;
          if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
          goto LAB_05cc446c;
          if (*(uint *)(lVar26 + 0x18) <= uVar14) goto LAB_05cc45e8;
          uVar5 = *(undefined2 *)(lVar26 + (long)(int)uVar14 * (long)(int)unaff_w23 + 0x24);
          if (*(int *)(*(long *)
                        Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListServerBackfillTicketsForPlayer__
                      + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar20 = FUN_05d36b08(uVar5,0);
          if ((uVar20 & 1) == 0) goto LAB_05cc0cf4;
          if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
          goto LAB_05cc446c;
          if (*(int *)(unaff_x24 + 7) + 1U < *(uint *)(lVar26 + 0x18)) {
            uVar5 = *(undefined2 *)
                     (lVar26 + (long)(int)(*(int *)(unaff_x24 + 7) + 1U) * (long)(int)unaff_w23 +
                     0x24);
            if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__
                        + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            lVar26 = FUN_05d2cd04(0);
            if ((lVar26 != 0) && (*(long *)(lVar26 + 0x10) != 0)) {
              uVar14 = FUN_04cb59e0(*(long *)(lVar26 + 0x10),in_w12,
                                    *(undefined8 *)
                                     Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListBuildAliases__
                                   );
              lVar26 = FUN_05d2cd04(0);
              if ((lVar26 != 0) && (*(long *)(lVar26 + 0x18) != 0)) {
                uVar15 = FUN_04cb59e0(*(long *)(lVar26 + 0x18),uVar5,
                                      *(undefined8 *)
                                       Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListBuildAliases__
                                     );
                unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
                if (((uVar14 | uVar15) & 1) != 0) goto LAB_05cc0dc4;
                uVar14 = 0;
                goto UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__OnHoverExiting
                ;
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
        uVar20 = FUN_05d2cf18(0);
        if ((uVar20 & 1) != 0) goto LAB_05cc0eac;
LAB_05cc0ed8:
        if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__ +
                    0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        lVar26 = FUN_05d2cd04(0);
        if ((lVar26 == 0) || (*(long *)(lVar26 + 0x10) == 0)) goto LAB_05cc446c;
        uVar20 = FUN_04cb59e0(*(long *)(lVar26 + 0x10),in_w12,
                              *(undefined8 *)
                               Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListBuildAliases__);
        if ((int)uStack0000000000000054 <= *(int *)(unaff_x24 + 7)) {
          if ((uVar20 & 1) != 0) goto LAB_05cc10e0;
          in_stack_00000078._4_4_ = 0.0;
          uVar14 = 0;
          goto UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__OnHoverExiting;
        }
        if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__ +
                    0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        lVar26 = FUN_05d2cd04(0);
        if (((lVar26 == 0) || (unaff_x19[0x74] == 0)) ||
           (lVar27 = *(long *)(unaff_x19[0x74] + 0x38), lVar27 == 0)) goto LAB_05cc446c;
        if (*(uint *)(lVar27 + 0x18) <= *(int *)(unaff_x24 + 7) + 1U) goto LAB_05cc45e8;
        if (*(long *)(lVar26 + 0x18) == 0) goto LAB_05cc446c;
        uVar15 = FUN_04cb59e0(*(long *)(lVar26 + 0x18),
                              *(undefined2 *)
                               (lVar27 + (long)(int)(*(int *)(unaff_x24 + 7) + 1U) *
                                         (long)(int)unaff_w23 + 0x24),
                              *(undefined8 *)
                               Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListBuildAliases__);
        if ((uVar20 & 1) != 0) {
LAB_05cc10e0:
          uVar14 = (uint)(unaff_w26 != 0);
          if (((uint)in_stack_00000078._4_4_ & (uint)(unaff_w22 == unaff_w27)) == 0)
          goto LAB_05cc0dc4;
          goto LAB_05cc0d28;
        }
        in_stack_00000078._4_4_ = (float)(uVar15 & (uint)in_stack_00000078._4_4_);
        uVar14 = (uint)in_stack_00000078._4_4_ & (uint)(unaff_w26 != 0);
        if ((((uint)in_stack_00000078._4_4_ & 1) != 0) || (((uVar15 ^ 1) & 1) != 0))
        goto UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__OnHoverExiting;
        in_stack_00000078._4_4_ = 0.0;
        if (uVar14 == 0) goto LAB_05cc0dc4;
LAB_05cc0d64:
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
    FUN_05d115d4();
    *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
    fVar47 = in_stack_00000170;
LAB_05cbdbd4:
    do {
      lVar26 = unaff_x19[0x91];
      in_stack_00001308 = in_stack_00001308 + 1;
      if (lVar26 == 0) goto LAB_05cc446c;
      if ((int)*(uint *)(lVar26 + 0x18) <= (int)in_stack_00001308) {
LAB_05cc18bc:
        if ((char)unaff_x19[0x4c] == '\0') {
LAB_05cc1980:
          iVar16 = *(int *)((long)unaff_x19 + 0x26c);
          iVar18 = (int)unaff_x19[0x4e];
        }
        else {
          fVar63 = *(float *)((long)unaff_x19 + 0x264);
          auVar68 = ZEXT416((uint)DAT_01275268);
          if (fVar63 - *(float *)(unaff_x19 + 0x4d) <= DAT_01275268) goto LAB_05cc1980;
          fVar47 = *(float *)((long)unaff_x19 + 0x20c);
          fVar48 = *(float *)((long)unaff_x19 + 0x27c);
          auVar68 = ZEXT416((uint)fVar48);
          iVar16 = *(int *)((long)unaff_x19 + 0x26c);
          iVar18 = (int)unaff_x19[0x4e];
          if ((fVar47 < fVar48) && (iVar16 < iVar18)) {
            if (*(float *)(unaff_x19 + 0x60) < *(float *)((long)unaff_x19 + 0x2fc) / 100.0) {
              *(undefined4 *)(unaff_x19 + 0x60) = 0;
            }
            fVar49 = DAT_012751b0;
            *(float *)(unaff_x19 + 0x4d) = fVar47;
            fVar63 = (fVar63 - fVar47) * 0.5;
            if (fVar63 <= fVar49) {
              fVar63 = fVar49;
            }
            fVar63 = (fVar47 + fVar63) * 20.0 + 0.5;
            fVar47 = DAT_01275250;
            if (fVar63 != INFINITY) {
              fVar47 = (float)(int)fVar63 / 20.0;
            }
            if (fVar48 <= fVar47) {
              fVar47 = fVar48;
            }
            goto LAB_05cc1978;
          }
        }
        *(undefined1 *)((long)unaff_x19 + 0x274) = 1;
        if (iVar18 <= iVar16) {
          uVar59 = FUN_05000654((long)unaff_x19 + 0x26c,0);
          uVar19 = FUN_05015a18((long)unaff_x19 + 0x20c,0);
          uVar59 = FUN_04e80bdc(*(undefined8 *)
                                 Method_PlayFab_PlayFabMultiplayerInstanceAPI_UploadCertificate__,
                                uVar59,*(undefined8 *)
                                        Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildRegions__
                                ,uVar19,0);
          if (*(int *)(*unaff_x29 + 0xe4) == 0) {
            thunk_FUN_02dabd98(*unaff_x29);
          }
          FUN_05ea2238(uVar59,0);
        }
        if ((*(int *)(unaff_x24 + 7) == 0) || ((*(int *)(unaff_x24 + 7) == 1 && (in_w12 == 3)))) {
          (**(code **)(*unaff_x19 + 0x958))();
          goto LAB_05cc1a38;
        }
        lVar26 = *unaff_x28;
        if (*(int *)(lVar26 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar26 = *unaff_x28;
        }
        plVar43 = (long *)PTR_DAT_06649d28;
        lVar26 = **(long **)(lVar26 + 0xb8);
        if (lVar26 == 0) goto LAB_05cc446c;
        if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0xd4)) goto LAB_05cc45e8;
        iVar16 = *(int *)(lVar26 + (long)(int)*(uint *)(unaff_x19 + 0xd4) * 0x38 + 0x54) << 2;
        if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x60), lVar26 == 0))
        goto LAB_05cc446c;
        if (*(int *)(*(long *)PTR_DAT_06649d28 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        if (*(int *)(lVar26 + 0x18) == 0) goto LAB_05cc45e8;
        FUN_05d29d88(lVar26 + 0x20,0,0);
        in_stack_000000c0 = (float)FUN_02e694a0(0);
        iVar18 = (int)unaff_x19[0x53];
        lVar26 = unaff_x19[0xee];
        fStack00000000000000b8 = fVar63;
        if (iVar18 < 0x401) {
          if (iVar18 == 0x100) {
            if ((int)unaff_x19[0x62] == 5) {
              if (lVar26 == 0) goto LAB_05cc446c;
              if ((*(uint *)(lVar26 + 0x18) & 0xfffffffe) == 0) goto LAB_05cc45e8;
              if ((unaff_x19[0x74] == 0) ||
                 (lVar27 = *(long *)(unaff_x19[0x74] + 0x58), lVar27 == 0)) goto LAB_05cc446c;
              if (*(uint *)(lVar27 + 0x18) <= in_stack_00000040._4_4_) goto LAB_05cc45e8;
              fVar47 = *(float *)(lVar27 + (long)(int)in_stack_00000040._4_4_ * 0x14 + 0x28);
            }
            else {
              if (lVar26 == 0) goto LAB_05cc446c;
              if ((*(uint *)(lVar26 + 0x18) & 0xfffffffe) == 0) goto LAB_05cc45e8;
              fVar47 = *(float *)((long)unaff_x19 + 0x4cc);
            }
            fStack00000000000000b8 = *(float *)(lVar26 + 0x34);
            fStack000000000000002c = (0.0 - fVar47) - fStack0000000000000028;
            fVar63 = *(float *)(lVar26 + 0x2c);
            fVar47 = *(float *)(lVar26 + 0x30);
LAB_05cc1e30:
            fVar63 = in_stack_00000030 + 0.0 + fVar63;
            fVar47 = fVar47 + fStack000000000000002c;
          }
          else {
            if (iVar18 != 0x200) {
              if (iVar18 != 0x400) goto LAB_05cc1e44;
              if ((int)unaff_x19[0x62] == 5) {
                if (lVar26 == 0) goto LAB_05cc446c;
                if (*(int *)(lVar26 + 0x18) == 0) goto LAB_05cc45e8;
                if ((unaff_x19[0x74] == 0) ||
                   (lVar27 = *(long *)(unaff_x19[0x74] + 0x58), lVar27 == 0)) goto LAB_05cc446c;
                if (*(uint *)(lVar27 + 0x18) <= in_stack_00000040._4_4_) goto LAB_05cc45e8;
                in_stack_00001338 =
                     *(float *)(lVar27 + (long)(int)in_stack_00000040._4_4_ * 0x14 + 0x30);
              }
              else {
                if (lVar26 == 0) goto LAB_05cc446c;
                if (*(int *)(lVar26 + 0x18) == 0) goto LAB_05cc45e8;
              }
              fStack00000000000000b8 = *(float *)(lVar26 + 0x28);
              fStack000000000000002c = fStack000000000000002c + (0.0 - in_stack_00001338);
              fVar63 = *(float *)(lVar26 + 0x20);
              fVar47 = *(float *)(lVar26 + 0x24);
              goto LAB_05cc1e30;
            }
            if ((int)unaff_x19[0x62] != 5) {
              if (lVar26 == 0) goto LAB_05cc446c;
              if ((*(int *)(lVar26 + 0x18) != 1) && (*(int *)(lVar26 + 0x18) != 0)) {
                fVar47 = *(float *)((long)unaff_x19 + 0x4cc);
                goto LAB_05cc1d64;
              }
              goto LAB_05cc45e8;
            }
            if (lVar26 == 0) goto LAB_05cc446c;
            if ((*(int *)(lVar26 + 0x18) == 1) || (*(int *)(lVar26 + 0x18) == 0)) goto LAB_05cc45e8;
            if ((unaff_x19[0x74] == 0) || (lVar27 = *(long *)(unaff_x19[0x74] + 0x58), lVar27 == 0))
            goto LAB_05cc446c;
            if (*(uint *)(lVar27 + 0x18) <= in_stack_00000040._4_4_) goto LAB_05cc45e8;
            lVar27 = lVar27 + (long)(int)in_stack_00000040._4_4_ * 0x14;
            fStack00000000000000b8 = (*(float *)(lVar26 + 0x28) + *(float *)(lVar26 + 0x34)) * 0.5;
            fVar63 = in_stack_00000030 + 0.0 +
                     ((float)*(undefined8 *)(lVar26 + 0x20) + (float)*(undefined8 *)(lVar26 + 0x2c))
                     * 0.5;
            fVar47 = (0.0 - ((fStack0000000000000028 + *(float *)(lVar27 + 0x28) +
                             *(float *)(lVar27 + 0x30)) - fStack000000000000002c) * 0.5) +
                     ((float)((ulong)*(undefined8 *)(lVar26 + 0x20) >> 0x20) +
                     (float)((ulong)*(undefined8 *)(lVar26 + 0x2c) >> 0x20)) * 0.5;
          }
          fStack00000000000000b8 = fStack00000000000000b8 + 0.0;
          auVar68 = ZEXT416((uint)fVar47);
          in_stack_000000c0 = fVar63;
        }
        else if (iVar18 == 0x800) {
          if (lVar26 == 0) goto LAB_05cc446c;
          if ((*(int *)(lVar26 + 0x18) == 1) || (*(int *)(lVar26 + 0x18) == 0)) goto LAB_05cc45e8;
          fVar63 = (*(float *)(lVar26 + 0x28) + *(float *)(lVar26 + 0x34)) * 0.5;
          fStack00000000000000b8 = fVar63 + 0.0;
          auVar68 = ZEXT416((uint)(((float)((ulong)*(undefined8 *)(lVar26 + 0x20) >> 0x20) +
                                   (float)((ulong)*(undefined8 *)(lVar26 + 0x2c) >> 0x20)) * 0.5 +
                                  0.0));
          in_stack_000000c0 =
               ((float)*(undefined8 *)(lVar26 + 0x20) + (float)*(undefined8 *)(lVar26 + 0x2c)) * 0.5
               + in_stack_00000030 + 0.0;
        }
        else {
          if (iVar18 == 0x1000) {
            if (lVar26 == 0) goto LAB_05cc446c;
            if ((*(int *)(lVar26 + 0x18) == 1) || (*(int *)(lVar26 + 0x18) == 0)) goto LAB_05cc45e8;
            fVar47 = *(float *)((long)unaff_x19 + 0x4fc);
            in_stack_00001338 = *(float *)((long)unaff_x19 + 0x4f4);
LAB_05cc1d64:
            fStack0000000000000028 = fStack0000000000000028 + fVar47 + in_stack_00001338;
          }
          else {
            if (iVar18 != 0x2000) goto LAB_05cc1e44;
            if (lVar26 == 0) goto LAB_05cc446c;
            if ((*(int *)(lVar26 + 0x18) == 1) || (*(int *)(lVar26 + 0x18) == 0)) goto LAB_05cc45e8;
            fStack0000000000000028 = *(float *)(unaff_x19 + 0x9a) - fStack0000000000000028;
          }
          fVar63 = in_stack_00000030 + 0.0;
          auVar68._0_4_ =
               ((float)*(undefined8 *)(lVar26 + 0x24) + (float)*(undefined8 *)(lVar26 + 0x30)) * 0.5
               + (0.0 - (fStack0000000000000028 - fStack000000000000002c) * 0.5);
          auVar68._4_4_ =
               ((float)((ulong)*(undefined8 *)(lVar26 + 0x24) >> 0x20) +
               (float)((ulong)*(undefined8 *)(lVar26 + 0x30) >> 0x20)) * 0.5 + 0.0;
          auVar68._8_8_ = 0;
          fStack00000000000000b8 = auVar68._4_4_;
          in_stack_000000c0 = fVar63 + (*(float *)(lVar26 + 0x20) + *(float *)(lVar26 + 0x2c)) * 0.5
          ;
        }
LAB_05cc1e44:
        auVar55 = auVar68;
        in_stack_00000120 = (float)FUN_02e694a0(0);
        auVar51 = auVar55;
        FUN_02e694a0(0);
        lVar26 = FUN_05ccedf0();
        if (lVar26 == 0) goto LAB_05cc446c;
        FUN_05ef2218(lVar26,0);
        *(float *)((long)unaff_x19 + 0x6fc) = auVar51._0_4_;
        uVar46 = FUN_02efa70c(ZEXT816(0x3f800000),ZEXT816(0x3f800000),0x3f800000,0x3f800000,0);
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
        lVar26 = unaff_x19[0x74];
        if (lVar26 == 0) goto LAB_05cc446c;
        iVar18 = *(int *)(unaff_x24 + 7);
        if (iVar18 < 1) {
          iStack00000000000000ec = 0;
          iVar17 = 0;
          goto LAB_05cc4038;
        }
        lVar26 = *(long *)(lVar26 + 0x38);
        if (lVar26 == 0) goto LAB_05cc446c;
        fStack0000000000000190 = auVar55._0_4_;
        fVar48 = 0.0;
        bVar7 = false;
        uVar15 = 0;
        uVar14 = 0;
        lVar27 = lVar26 + 0x20;
        fStack0000000000000140 = *(float *)(*(long *)(*unaff_x28 + 0xb8) + 0x1730);
        bVar9 = false;
        bVar8 = false;
        bVar11 = false;
        iStack00000000000000ec = 0;
        fStack0000000000000124 = fStack0000000000000190;
        in_stack_000001b0 = auVar68._0_4_;
        fStack0000000000000050 = 0.0;
        fStack0000000000000064 = 0.0;
        in_stack_000000e0._4_4_ = in_stack_00000110._4_4_;
        fStack0000000000000068 = in_stack_00000110._4_4_;
        fStack000000000000013c = 0.0;
        in_stack_00000078._4_4_ = 0.0;
        fVar47 = 0.0;
        fStack000000000000005c = 0.0;
        in_stack_000000a0._4_4_ = 0.0;
        fStack00000000000000d8 = in_stack_000000e8;
        uStack000000000000006c = in_stack_000000d0._4_4_;
        fStack0000000000000070 = in_stack_000000e8;
        fStack0000000000000094 = in_stack_000000e8;
        fStack0000000000000098 = in_stack_00000110._4_4_;
        uStack0000000000000090 = in_stack_000000d0._4_4_;
        fStack0000000000000100 = fVar63;
        uVar30 = 0;
        goto LAB_05cc1fd0;
      }
      if (*(uint *)(lVar26 + 0x18) <= in_stack_00001308) goto LAB_05cc45e8;
      uVar14 = *(uint *)(lVar26 + (long)(int)in_stack_00001308 * 0x10 + 0x24);
      if (uVar14 == 0) goto LAB_05cc18bc;
      if (5 < (int)in_stack_000001b0) {
        uVar59 = FUN_0501f6b0(&stack0x0000133c,0);
        uVar19 = FUN_05000654(&stack0x00001308,0);
        uVar59 = FUN_04e80bdc(*(undefined8 *)
                               Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildRegion__,
                              uVar59,*(undefined8 *)
                                      Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateLobby__,
                              uVar19,0);
        if (*(int *)(*unaff_x29 + 0xe4) == 0) {
          thunk_FUN_02dabd98(*unaff_x29);
        }
        FUN_05ea29a0(uVar59,0);
        in_stack_00001328 = CONCAT44(3,*(undefined4 *)(unaff_x24 + 7));
      }
      in_w12 = uVar14;
    } while (uVar14 == 0x1a);
    if ((uVar14 == 0x3c) && (*(char *)((long)unaff_x19 + 0x33a) != '\0')) {
      *(undefined1 *)((long)unaff_x19 + 0x469) = 1;
      *(undefined4 *)((long)unaff_x19 + 0x65c) = 0;
      uVar20 = FUN_05d0be34();
      if (((uVar20 & 1) != 0) &&
         (in_stack_00001308 = in_stack_0000126c, *(int *)((long)unaff_x19 + 0x65c) == 0))
      goto LAB_05cbdbd4;
    }
    else {
      if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
      goto LAB_05cc446c;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x24 + 7)) goto LAB_05cc45e8;
      lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x24 + 7) * (long)(int)unaff_w23;
      *(undefined4 *)((long)unaff_x19 + 0x65c) = *(undefined4 *)(lVar26 + 0x20);
      *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar26 + 0x50);
      unaff_x19[0x20] = *(long *)(lVar26 + 0x40);
      thunk_FUN_02dc1ef0(unaff_x19 + 0x20);
    }
    if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
    goto LAB_05cc446c;
    unaff_w21 = *(uint *)(in_stack_000001a8 + 7);
    if (*(uint *)(lVar26 + 0x18) <= unaff_w21) goto LAB_05cc45e8;
    lVar27 = lVar26 + 0x20;
    uVar30 = (uint)in_stack_00001328;
    lVar35 = unaff_x19[0x24];
    _fStack0000000000000190 = in_stack_00001328 & 0xffffffff;
    cVar24 = *(char *)(lVar27 + (long)(int)unaff_w21 * (long)(int)unaff_w23 + 0x34);
    *(undefined1 *)((long)unaff_x19 + 0x469) = 0;
    uVar15 = unaff_w21;
    if (uVar30 == unaff_w21) {
      uVar14 = (uint)(in_stack_00001328 >> 0x20);
      *(undefined4 *)((long)unaff_x19 + 0x65c) = 0;
      if (uVar14 == 0x2026) {
        *(long *)(lVar27 + (long)(int)unaff_w21 * (long)(int)unaff_w23 + 0x10) = unaff_x19[0xcd];
        thunk_FUN_02dc1ef0();
        if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
        goto LAB_05cc446c;
        if (*(uint *)(lVar26 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
        lVar26 = lVar26 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23;
        *(long *)(lVar26 + 0x40) = unaff_x19[0xce];
        *(undefined4 *)(lVar26 + 0x20) = 0;
        thunk_FUN_02dc1ef0();
        if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
        goto LAB_05cc446c;
        if (*(uint *)(lVar26 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
        *(long *)(lVar26 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23 + 0x48
                 ) = unaff_x19[0xcf];
        thunk_FUN_02dc1ef0();
        if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
        goto LAB_05cc446c;
        if (*(uint *)(lVar26 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
        *(int *)(lVar26 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23 + 0x50)
             = (int)unaff_x19[0xd0];
        lVar26 = *unaff_x28;
        if (*(int *)(lVar26 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar26 = *unaff_x28;
        }
        lVar26 = **(long **)(lVar26 + 0xb8);
        if (lVar26 == 0) goto LAB_05cc446c;
        if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0xd4)) goto LAB_05cc45e8;
        lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0xd4) * 0x38;
        *(int *)(lVar26 + 0x54) = *(int *)(lVar26 + 0x54) + 1;
        *(undefined1 *)(unaff_x19 + 0x65) = 1;
        in_stack_00001328 = CONCAT44(3,*(uint *)((long)unaff_x19 + 0x4a4) + 1);
        uVar15 = *(uint *)((long)unaff_x19 + 0x4a4);
      }
      else if (uVar14 == 3) {
        if ((unaff_x19[0x20] == 0) || (lVar21 = FUN_05ce825c(unaff_x19[0x20],0), lVar21 == 0))
        goto LAB_05cc446c;
        uVar59 = FUN_048bdb30(lVar21,3,*(undefined8 *)
                                        Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListAssetSummaries__
                             );
        if (*(uint *)(lVar26 + 0x18) <= unaff_w21) goto LAB_05cc45e8;
        *(undefined8 *)(lVar27 + (long)(int)unaff_w21 * (long)(int)unaff_w23 + 0x10) = uVar59;
        thunk_FUN_02dc1ef0();
        *(undefined1 *)(unaff_x19 + 0x65) = 1;
        uVar15 = *(uint *)((long)unaff_x19 + 0x4a4);
      }
    }
    unaff_x24 = in_stack_000001a8;
    in_w12 = uVar14;
    if (((int)uVar15 < *(int *)((long)unaff_x19 + 0x35c)) && (uVar14 != 3)) {
      if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
      goto LAB_05cc446c;
      if (*(uint *)(lVar26 + 0x18) <= uVar15) goto LAB_05cc45e8;
      lVar26 = lVar26 + (long)(int)uVar15 * (long)(int)unaff_w23;
      *(undefined1 *)(lVar26 + 400) = 0;
      *(undefined2 *)(lVar26 + 0x24) = 0x200b;
      *(undefined4 *)(lVar26 + 0x5c) = 0;
      *(uint *)(in_stack_000001a8 + 7) = uVar15 + 1;
      goto LAB_05cbdbd4;
    }
    fStack000000000000015c = 1.0;
    fVar48 = fStack000000000000015c;
    fStack000000000000015c = 1.0;
    if (*(int *)((long)unaff_x19 + 0x65c) == 0) {
      uVar15 = *(uint *)((long)unaff_x19 + 0x284);
      if ((uVar15 >> 4 & 1) == 0) {
        if ((uVar15 >> 3 & 1) == 0) {
          if ((uVar15 >> 5 & 1) != 0) {
            if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            uVar20 = FUN_04f749ec(uVar14,0);
            if ((uVar20 & 1) != 0) {
              if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              uVar14 = FUN_04f74c74(uVar14,0);
              fStack000000000000015c = fStack0000000000000024;
              goto LAB_05cbd82c;
            }
          }
        }
        else {
          if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar20 = FUN_04f7494c(uVar14,0);
          if ((uVar20 & 1) != 0) {
            if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            uVar14 = FUN_04f74dec(uVar14,0);
            fStack000000000000015c = fVar48;
            goto LAB_05cbd82c;
          }
        }
      }
      else {
        if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar20 = FUN_04f749ec(uVar14,0);
        if ((uVar20 & 1) != 0) {
          if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar14 = FUN_04f74c74(uVar14,0);
          fStack000000000000015c = fVar48;
LAB_05cbd82c:
          in_w12 = uVar14 & 0xffff;
        }
      }
    }
    if (unaff_x19[0x20] == 0) goto LAB_05cc446c;
    memmove(&stack0x000012a0,(void *)(unaff_x19[0x20] + 0x28),0x60);
    if (*(int *)((long)unaff_x19 + 0x65c) == 1) {
      lVar26 = FUN_05d04cb4();
      if ((lVar26 == 0) || (lVar26 = *(long *)(lVar26 + 0x38), lVar26 == 0)) goto LAB_05cc446c;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
      plVar43 = *(long **)(lVar26 + (long)(int)*(uint *)(in_stack_000001a8 + 7) *
                                    (long)(int)unaff_w23 + 0x30);
      if (plVar43 == (long *)0x0) goto LAB_05cbdbd4;
      bVar12 = *(byte *)(*(long *)
                          Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListMatchmakingTicketsForPlayer__
                        + 0x130);
      if ((*(byte *)(*plVar43 + 0x130) < bVar12) ||
         (*(long *)(*(long *)(*plVar43 + 200) + (ulong)bVar12 * 8 + -8) !=
          *(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListMatchmakingTicketsForPlayer__))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02d4e268(plVar43);
      }
      plVar25 = (long *)plVar43[3];
      if (plVar25 == (long *)0x0) {
        plVar25 = (long *)0x0;
        *_fStack00000000000000d8 = 0;
      }
      else {
        lVar26 = *(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListMatchmakingQueues__;
        bVar12 = *(byte *)(lVar26 + 0x130);
        if (*(byte *)(*plVar25 + 0x130) < bVar12) {
          plVar34 = (long *)0x0;
        }
        else {
          plVar34 = plVar25;
          if (*(long *)(*(long *)(*plVar25 + 200) + (ulong)bVar12 * 8 + -8) != lVar26) {
            plVar34 = (long *)0x0;
          }
        }
        *_fStack00000000000000d8 = (long)plVar34;
        if (*(byte *)(*plVar25 + 0x130) < bVar12) {
          plVar25 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar25 + 200) + (ulong)bVar12 * 8 + -8) != lVar26) {
          plVar25 = (long *)0x0;
        }
      }
      thunk_FUN_02dc1ef0(_fStack00000000000000d8,plVar25);
      lVar26 = plVar43[5];
      *(int *)((long)unaff_x19 + 0x6bc) = (int)lVar26;
      if (in_w12 == 0x3c) {
        in_w12 = (int)lVar26 + 0xe000;
      }
      else {
        lVar26 = *unaff_x28;
        if (*(int *)(lVar26 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar26 = *unaff_x28;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1d4) = *(undefined4 *)(*(long *)(lVar26 + 0xb8) + 0x68);
      }
      fVar48 = *_fStack0000000000000070;
      fVar47 = (float)FUN_05f84b24(&stack0x000012a0,0);
      fVar63 = (float)FUN_05f84b2c(&stack0x000012a0,0);
      if (*_fStack00000000000000d8 == 0) goto LAB_05cc446c;
      fVar63 = in_stack_00000120 * (fVar48 / fVar47) * fVar63;
      memmove(&stack0x00001200,(void *)(*_fStack00000000000000d8 + 0x28),0x60);
      fVar47 = (float)FUN_05f84b24(&stack0x00001200,0);
      fVar48 = *_fStack0000000000000070;
      if (fVar47 <= 0.0) {
        fVar47 = (float)FUN_05f84b24(&stack0x000012a0,0);
        fVar49 = (float)FUN_05f84b2c(&stack0x000012a0,0);
        fVar64 = (float)FUN_05f84b54(&stack0x000012a0,0);
        if (plVar43[4] == 0) goto LAB_05cc446c;
        FUN_05f84fe8(&stack0x00001340,plVar43[4],0);
        fVar66 = (float)FUN_05f84e18(&stack0x000011e0,0);
        if (plVar43[4] == 0) goto LAB_05cc446c;
        fVar67 = *(float *)((long)plVar43 + 0x2c);
        fVar48 = in_stack_00000120 * (fVar48 / fVar47) * fVar49;
        fVar47 = (float)FUN_05f85024(plVar43[4],0);
        fVar47 = fVar48 * (fVar64 / fVar66) * fVar67 * fVar47;
        fStack0000000000000144 = 0.0;
        if (fVar47 != 0.0) {
          fStack0000000000000144 = fVar48 / fVar47;
        }
        fStack0000000000000148 = (float)FUN_05f84b54(&stack0x000012a0,0);
        fStack0000000000000148 = fStack0000000000000148 * fStack0000000000000144;
        fVar48 = (float)FUN_05f84b7c(&stack0x000012a0,0);
        fVar49 = *(float *)((long)unaff_x19 + 0x43c);
        fStack000000000000017c = (float)FUN_05f84b2c(&stack0x000012a0,0);
        fStack000000000000017c = fVar63 * fVar48 * fVar49 * fStack000000000000017c;
        fVar63 = (float)FUN_05f84b84(&stack0x000012a0,0);
        fStack0000000000000144 = fStack0000000000000144 * fVar63;
      }
      else {
        fVar47 = (float)FUN_05f84b24(&stack0x00001200,0);
        fVar49 = (float)FUN_05f84b2c(&stack0x00001200,0);
        if (plVar43[4] == 0) goto LAB_05cc446c;
        fVar66 = *(float *)((long)plVar43 + 0x2c);
        fVar64 = (float)FUN_05f85024(plVar43[4],0);
        fVar47 = in_stack_00000120 * (fVar48 / fVar47) * fVar49 * fVar66 * fVar64;
        fStack0000000000000148 = (float)FUN_05f84b54(&stack0x00001200,0);
        fVar48 = (float)FUN_05f84b7c(&stack0x00001200,0);
        fVar49 = *(float *)((long)unaff_x19 + 0x43c);
        fStack000000000000017c = (float)FUN_05f84b2c(&stack0x00001200,0);
        fStack000000000000017c = fVar63 * fVar48 * fVar49 * fStack000000000000017c;
        fStack0000000000000144 = (float)FUN_05f84b84(&stack0x00001200,0);
      }
      unaff_x19[0xcc] = (long)plVar43;
      thunk_FUN_02dc1ef0(_fStack0000000000000100,plVar43);
      if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
      goto LAB_05cc446c;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
      lVar26 = lVar26 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23;
      *(long *)(lVar26 + 0x40) = unaff_x19[0x20];
      *(undefined4 *)(lVar26 + 0x20) = 1;
      *(float *)(lVar26 + 0x15c) = fVar47;
      thunk_FUN_02dc1ef0();
      lVar26 = unaff_x19[0x74];
      if ((lVar26 == 0) || (lVar27 = *(long *)(lVar26 + 0x38), lVar27 == 0)) goto LAB_05cc446c;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
      unaff_s13 = 0.0;
      *(int *)(lVar27 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23 + 0x50) =
           (int)unaff_x19[0x24];
      *(int *)(unaff_x19 + 0x24) = (int)lVar35;
LAB_05cbdf70:
      in_stack_00000170 = 0.0;
      if (in_w12 != 3 && in_w12 != 0xad) {
        in_stack_00000170 = fVar47;
      }
    }
    else {
      lVar26 = unaff_x19[0x74];
      if (*(int *)((long)unaff_x19 + 0x65c) == 0) {
        if ((lVar26 == 0) || (lVar26 = *(long *)(lVar26 + 0x38), lVar26 == 0)) goto LAB_05cc446c;
        if (*(uint *)(lVar26 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
        *_fStack0000000000000100 =
             *(long *)(lVar26 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23 +
                      0x30);
        thunk_FUN_02dc1ef0(_fStack0000000000000100);
        if (*_fStack0000000000000100 == 0) goto LAB_05cbdbd4;
        if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
        goto LAB_05cc446c;
        if (*(uint *)(lVar26 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
        unaff_x19[0x20] =
             *(long *)(lVar26 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23 +
                      0x40);
        thunk_FUN_02dc1ef0(unaff_x19 + 0x20);
        if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
        goto LAB_05cc446c;
        if (*(uint *)(lVar26 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
        unaff_x19[0x23] =
             *(long *)(lVar26 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23 +
                      0x48);
        thunk_FUN_02dc1ef0(unaff_x19 + 0x23);
        if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
        goto LAB_05cc446c;
        uVar15 = *(uint *)(in_stack_000001a8 + 7);
        uVar14 = *(uint *)(lVar26 + 0x18);
        if (uVar14 <= uVar15) goto LAB_05cc45e8;
        *(undefined4 *)(unaff_x19 + 0x24) =
             *(undefined4 *)(lVar26 + 0x20 + (long)(int)uVar15 * (long)(int)unaff_w23 + 0x30);
        pfVar33 = _fStack0000000000000070;
        if (uVar30 == unaff_w21) {
          lVar27 = unaff_x19[0x91];
          if (lVar27 == 0) goto LAB_05cc446c;
          if (*(uint *)(lVar27 + 0x18) <= in_stack_00001308) goto LAB_05cc45e8;
          if ((*(int *)(lVar27 + (long)(int)in_stack_00001308 * 0x10 + 0x24) == 10) &&
             (uVar15 != *(uint *)(unaff_x19 + 0x95))) {
            if (uVar14 <= uVar15 - 1) goto LAB_05cc45e8;
            pfVar33 = (float *)(lVar26 + 0x20 + (long)(int)(uVar15 - 1) * (long)(int)unaff_w23 +
                               0x38);
          }
        }
        fVar49 = *pfVar33;
        fVar63 = (float)FUN_05f84b24(&stack0x000012a0,0);
        fVar48 = (float)FUN_05f84b2c(&stack0x000012a0,0);
        if (uVar30 == unaff_w21) {
          fStack0000000000000144 = 0.0;
          fStack0000000000000148 = 0.0;
          if (in_w12 != 0x2026) goto LAB_05cbdabc;
        }
        else {
LAB_05cbdabc:
          fStack0000000000000148 = (float)FUN_05f84b54(&stack0x000012a0,0);
          fStack0000000000000144 = (float)FUN_05f84b84(&stack0x000012a0,0);
        }
        lVar26 = unaff_x19[0xcc];
        if ((lVar26 == 0) || (*(long *)(lVar26 + 0x20) == 0)) goto LAB_05cc446c;
        fVar66 = *(float *)((long)unaff_x19 + 0x43c);
        fVar67 = *(float *)(lVar26 + 0x2c);
        fVar47 = (float)FUN_05f85024(*(long *)(lVar26 + 0x20),0);
        fVar64 = (float)FUN_05f84b7c(&stack0x000012a0,0);
        fVar57 = *(float *)((long)unaff_x19 + 0x43c);
        fStack000000000000017c = (float)FUN_05f84b2c(&stack0x000012a0,0);
        lVar26 = unaff_x19[0x74];
        if ((lVar26 == 0) || (lVar27 = *(long *)(lVar26 + 0x38), lVar27 == 0)) goto LAB_05cc446c;
        if (*(uint *)(lVar27 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
        lVar27 = lVar27 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23;
        *(undefined4 *)(lVar27 + 0x20) = 0;
        fVar63 = in_stack_00000120 * ((fStack000000000000015c * fVar49) / fVar63) * fVar48;
        fVar47 = fVar63 * fVar66 * fVar67 * fVar47;
        fStack000000000000017c = fVar63 * fVar64 * fVar57 * fStack000000000000017c;
        *(float *)(lVar27 + 0x15c) = fVar47;
        uVar14 = *(uint *)(unaff_x19 + 0x24);
        if (uVar14 != 0) {
          unaff_s15 = 1.0;
          lVar27 = unaff_x19[0xe4];
          if (lVar27 != 0) {
            if (uVar14 < *(uint *)(lVar27 + 0x18)) {
              lVar27 = *(long *)(lVar27 + (long)(int)uVar14 * 8 + 0x20);
              if (lVar27 != 0) {
                unaff_s13 = *(float *)(lVar27 + 0x54);
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
      in_stack_00000170 = 0.0;
      if (in_w12 != 3 && in_w12 != 0xad) {
        in_stack_00000170 = fVar47;
      }
      fStack000000000000017c = 0.0;
      fStack0000000000000148 = 0.0;
      fStack0000000000000144 = 0.0;
      if (lVar26 == 0) goto LAB_05cc446c;
    }
    lVar26 = *(long *)(lVar26 + 0x38);
    if (lVar26 == 0) goto LAB_05cc446c;
    if (*(uint *)(lVar26 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
    lVar26 = lVar26 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23;
    *(short *)(lVar26 + 0x24) = (short)in_w12;
    *(int *)(lVar26 + 0x58) = (int)unaff_x19[0x42];
    *(int *)(lVar26 + 0x160) = (int)unaff_x19[0xa0];
    if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
    goto LAB_05cc446c;
    if (*(uint *)(lVar26 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
    *(int *)(lVar26 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23 + 0x164) =
         (int)unaff_x19[0x2b];
    if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
    goto LAB_05cc446c;
    if (*(uint *)(lVar26 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
    *(undefined4 *)
     (lVar26 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23 + 0x16c) =
         *(undefined4 *)((long)unaff_x19 + 0x15c);
    if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
    goto LAB_05cc446c;
    if (*(uint *)(lVar26 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
    lVar26 = lVar26 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23;
    auVar68 = *in_stack_000000a8;
    *(undefined4 *)(lVar26 + 0x188) = *(undefined4 *)in_stack_000000a8[1];
    *(long *)(lVar26 + 0x180) = auVar68._8_8_;
    *(long *)(lVar26 + 0x178) = auVar68._0_8_;
    if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
    goto LAB_05cc446c;
    if (*(uint *)(lVar26 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
    lVar26 = lVar26 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23;
    lVar27 = *(long *)(lVar26 + 0x38);
    *(undefined4 *)(lVar26 + 0x18c) = *(undefined4 *)((long)unaff_x19 + 0x284);
    if (lVar27 == 0) {
      if ((*_fStack0000000000000100 == 0) ||
         (lVar26 = *(long *)(*_fStack0000000000000100 + 0x20), lVar26 == 0)) goto LAB_05cc446c;
      FUN_05f84fe8(&stack0x00001340,lVar26,0);
    }
    else {
      FUN_05f84fe8(&stack0x000005c0,lVar27,0);
    }
    if (in_w12 >> 0x10 == 0) {
      if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar14 = FUN_04f72380(in_w12,0);
      unaff_w26 = uVar14 & 1;
    }
    else {
      unaff_w26 = 0;
    }
    in_stack_000000c0 = *(float *)(unaff_x19 + 0x5a);
    if (((in_stack_000000a0 & 0x100000000) != 0) && (*(int *)((long)unaff_x19 + 0x65c) == 0)) {
      if (*_fStack0000000000000100 == 0) goto LAB_05cc446c;
      iVar16 = *(int *)(in_stack_000001a8 + 7);
      uVar14 = *(uint *)(*_fStack0000000000000100 + 0x28);
      if (iVar16 < (int)uStack0000000000000054) {
        if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
        goto LAB_05cc446c;
        uVar15 = iVar16 + 1;
        if (*(uint *)(lVar26 + 0x18) <= uVar15) goto LAB_05cc45e8;
        if (*(int *)(lVar26 + 0x20 + (long)(int)uVar15 * (long)(int)unaff_w23) == 0) {
          lVar26 = *(long *)(lVar26 + 0x20 + (long)(int)uVar15 * (long)(int)unaff_w23 + 0x10);
          if ((((lVar26 == 0) || (unaff_x19[0x20] == 0)) ||
              (lVar27 = *(long *)(unaff_x19[0x20] + 0x178), lVar27 == 0)) ||
             (lVar27 = *(long *)(lVar27 + 0x40), lVar27 == 0)) goto LAB_05cc446c;
          uVar20 = FUN_048a9f18(lVar27,uVar14 | *(int *)(lVar26 + 0x28) << 0x10,&stack0x000011b0,
                                *(undefined8 *)
                                 Method_PlayFab_PlayFabMultiplayerInstanceAPI_LeaveLobby__);
          if ((uVar20 & 1) != 0) {
            FUN_05f896d8(&stack0x00001340,&stack0x000011b0,0);
            FUN_05f8952c(&stack0x00001190,0);
            uVar20 = FUN_05f89714(&stack0x000011b0,0);
            if ((uVar20 & 0x100) != 0) {
              in_stack_000000c0 = 0.0;
            }
          }
        }
        iVar16 = *(int *)(in_stack_000001a8 + 7);
      }
      if (0 < iVar16) {
        if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
        goto LAB_05cc446c;
        if (*(uint *)(lVar26 + 0x18) <= iVar16 - 1U) goto LAB_05cc45e8;
        lVar26 = *(long *)(lVar26 + (ulong)(iVar16 - 1U) * (ulong)unaff_w23 + 0x30);
        if (lVar26 == 0) goto LAB_05cc446c;
        uVar15 = *(uint *)(lVar26 + 0x28);
        lVar26 = FUN_05d04cb4();
        if ((lVar26 == 0) || (lVar26 = *(long *)(lVar26 + 0x38), lVar26 == 0)) goto LAB_05cc446c;
        if (*(uint *)(lVar26 + 0x18) <= *(int *)(in_stack_000001a8 + 7) - 1U) goto LAB_05cc45e8;
        if (*(int *)(lVar26 + (long)(int)(*(int *)(in_stack_000001a8 + 7) - 1U) *
                              (long)(int)unaff_w23 + 0x20) == 0) {
          if (((unaff_x19[0x20] == 0) || (lVar26 = *(long *)(unaff_x19[0x20] + 0x178), lVar26 == 0))
             || (lVar26 = *(long *)(lVar26 + 0x40), lVar26 == 0)) goto LAB_05cc446c;
          uVar20 = FUN_048a9f18(lVar26,uVar15 | uVar14 << 0x10,&stack0x000011b0,
                                *(undefined8 *)
                                 Method_PlayFab_PlayFabMultiplayerInstanceAPI_LeaveLobby__);
          if ((uVar20 & 1) != 0) {
            FUN_05f89700(&stack0x00001340,&stack0x000011b0,0);
            FUN_05f8952c(&stack0x00001190,0);
            FUN_05f8938c(0);
            uVar20 = FUN_05f89714(&stack0x000011b0,0);
            if ((uVar20 & 0x100) != 0) {
              in_stack_000000c0 = 0.0;
            }
          }
        }
      }
    }
    if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
    goto LAB_05cc446c;
    uVar14 = *(uint *)(in_stack_000001a8 + 7);
    uVar46 = FUN_05f89368(&stack0x00001270,0);
    if (*(uint *)(lVar26 + 0x18) <= uVar14) goto LAB_05cc45e8;
    *(undefined4 *)(lVar26 + (long)(int)uVar14 * (long)(int)unaff_w23 + 0x154) = uVar46;
    if (*(int *)(*(long *)
                  Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListServerBackfillTicketsForPlayer__
                + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar20 = FUN_05d36848(in_w12,0);
    uVar14 = *(uint *)(in_stack_000001a8 + 7);
    uVar37 = (ulong)uVar14;
    if ((uVar20 & 1) == 0) {
      if (0 < (int)uVar14) {
        if ((((uVar40 & 0x100000000) == 0) ||
            (uVar15 = *(uint *)((long)unaff_x19 + 0x32c), uVar15 == 0x80000000)) ||
           (uVar15 != uVar14 - 1)) {
          if ((_fStack0000000000000048 & 0x100000000) == 0) {
            bVar11 = false;
          }
          else {
            lVar26 = uVar37 * unaff_w23 + 0x144;
            uVar42 = uVar37;
            do {
              uVar42 = uVar42 - 1;
              iVar16 = (int)uVar37;
              uVar14 = iVar16 - 1;
              uVar37 = (ulong)uVar14;
              if ((iVar16 < 1) || (uVar42 == *(uint *)((long)unaff_x19 + 0x32c))) {
                bVar11 = false;
                goto LAB_05cbe690;
              }
              if ((unaff_x19[0x74] == 0) ||
                 (lVar27 = *(long *)(unaff_x19[0x74] + 0x38), lVar27 == 0)) goto LAB_05cc446c;
              if (*(uint *)(lVar27 + 0x18) <= uVar42) goto LAB_05cc45e8;
              lVar27 = *(long *)(lVar27 + lVar26 + -0x28c);
              if ((lVar27 == 0) || (lVar27 = *(long *)(lVar27 + 0x20), lVar27 == 0))
              goto LAB_05cc446c;
              uVar15 = FUN_05f84fd8(lVar27,0);
              if ((*_fStack0000000000000100 == 0) ||
                 (((unaff_x19[0x20] == 0 ||
                   (lVar27 = *(long *)(unaff_x19[0x20] + 0x178), lVar27 == 0)) ||
                  (lVar27 = *(long *)(lVar27 + 0x50), lVar27 == 0)))) goto LAB_05cc446c;
              uVar22 = FUN_048b84e0(lVar27,uVar15 | *(int *)(*_fStack0000000000000100 + 0x28) <<
                                                    0x10,&stack0x00001160,
                                    *(undefined8 *)
                                     Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListArchivedMultiplayerServers__
                                   );
              lVar26 = lVar26 + -0x178;
            } while ((uVar22 & 1) == 0);
            if ((unaff_x19[0x74] == 0) || (lVar27 = *(long *)(unaff_x19[0x74] + 0x38), lVar27 == 0))
            goto LAB_05cc446c;
            if (*(uint *)(lVar27 + 0x18) <= uVar14) goto LAB_05cc45e8;
            FUN_05f89350(((*(float *)(lVar27 + lVar26 + -0xc) - *(float *)(unaff_x19 + 0xcb)) /
                          in_stack_00000170 + in_stack_00001164) - in_stack_00001170,
                         in_stack_00001164,in_stack_00001170,&stack0x00001270,0);
            FUN_05f89360(&stack0x00001270,0);
            in_stack_000000c0 = 0.0;
            bVar11 = true;
          }
LAB_05cbe690:
          if ((uVar40 & 0x100000000) != 0) {
            uVar14 = *(uint *)((long)unaff_x19 + 0x32c);
            if (uVar14 == 0x80000000) {
              bVar11 = true;
            }
            if (!bVar11) {
              if ((unaff_x19[0x74] == 0) ||
                 (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0)) goto LAB_05cc446c;
              if (*(uint *)(lVar26 + 0x18) <= uVar14) goto LAB_05cc45e8;
              lVar26 = *(long *)(lVar26 + (long)(int)uVar14 * (long)(int)unaff_w23 + 0x30);
              if ((lVar26 == 0) || (lVar26 = *(long *)(lVar26 + 0x20), lVar26 == 0))
              goto LAB_05cc446c;
              uVar14 = FUN_05f84fd8(lVar26,0);
              if ((*_fStack0000000000000100 == 0) ||
                 (((unaff_x19[0x20] == 0 ||
                   (lVar26 = *(long *)(unaff_x19[0x20] + 0x178), lVar26 == 0)) ||
                  (lVar26 = *(long *)(lVar26 + 0x48), lVar26 == 0)))) goto LAB_05cc446c;
              uVar37 = FUN_048b1190(lVar26,uVar14 | *(int *)(*_fStack0000000000000100 + 0x28) <<
                                                    0x10,&stack0x00001148,
                                    *(undefined8 *)
                                     Method_PlayFab_PlayFabMultiplayerInstanceAPI_LeaveLobbyAsServer__
                                   );
              if ((uVar37 & 1) != 0) {
                if ((unaff_x19[0x74] != 0) &&
                   (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 != 0)) {
                  if (*(uint *)((long)unaff_x19 + 0x32c) < *(uint *)(lVar26 + 0x18)) {
                    FUN_05f89350((in_stack_0000114c +
                                 (*(float *)(lVar26 + (long)(int)*(uint *)((long)unaff_x19 + 0x32c)
                                                      * (long)(int)unaff_w23 + 0x138) -
                                 *(float *)(unaff_x19 + 0xcb)) / in_stack_00000170) -
                                 in_stack_00001158,in_stack_0000114c,in_stack_00001158,
                                 &stack0x00001270,0);
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
          if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
          goto LAB_05cc446c;
          if (*(uint *)(lVar26 + 0x18) <= uVar15) goto LAB_05cc45e8;
          lVar26 = *(long *)(lVar26 + (long)(int)uVar15 * (long)(int)unaff_w23 + 0x30);
          if ((lVar26 == 0) || (lVar26 = *(long *)(lVar26 + 0x20), lVar26 == 0)) goto LAB_05cc446c;
          uVar14 = FUN_05f84fd8(lVar26,0);
          if ((*_fStack0000000000000100 == 0) ||
             (((unaff_x19[0x20] == 0 || (lVar26 = *(long *)(unaff_x19[0x20] + 0x178), lVar26 == 0))
              || (lVar26 = *(long *)(lVar26 + 0x48), lVar26 == 0)))) goto LAB_05cc446c;
          uVar37 = FUN_048b1190(lVar26,uVar14 | *(int *)(*_fStack0000000000000100 + 0x28) << 0x10,
                                &stack0x00001178,
                                *(undefined8 *)
                                 Method_PlayFab_PlayFabMultiplayerInstanceAPI_LeaveLobbyAsServer__);
          if ((uVar37 & 1) != 0) {
            if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
            goto LAB_05cc446c;
            if (*(uint *)(lVar26 + 0x18) <= *(uint *)((long)unaff_x19 + 0x32c)) goto LAB_05cc45e8;
            FUN_05f89350((in_stack_0000117c +
                         (*(float *)(lVar26 + (long)(int)*(uint *)((long)unaff_x19 + 0x32c) *
                                              (long)(int)unaff_w23 + 0x138) -
                         *(float *)(unaff_x19 + 0xcb)) / in_stack_00000170) - in_stack_00001188,
                         in_stack_0000117c,in_stack_00001188,&stack0x00001270,0);
LAB_05cbe788:
            FUN_05f89360(&stack0x00001270,0);
            in_stack_000000c0 = 0.0;
          }
        }
      }
    }
    else {
      *(uint *)((long)unaff_x19 + 0x32c) = uVar14;
    }
    fVar63 = (float)FUN_05f89358(&stack0x00001270,0);
    fVar48 = (float)FUN_05f89358(&stack0x00001270,0);
    if ((char)unaff_x19[0x1e] != '\0') {
      fVar64 = *(float *)(unaff_x19 + 0xcb);
      fVar49 = (float)FUN_05f84e30(&stack0x00001280,0);
      fVar64 = fVar64 - in_stack_00000170 * fVar49 * (unaff_s15 - *(float *)(unaff_x19 + 0x60));
      *(float *)(unaff_x19 + 0xcb) = fVar64;
      if ((unaff_w26 != 0) || (in_w12 == 0x200b)) {
        *(float *)(unaff_x19 + 0xcb) = fVar64 - in_stack_00000108 * *(float *)(unaff_x19 + 0x5c);
      }
    }
    fVar49 = *(float *)(unaff_x19 + 0x5b);
    fStack0000000000000094 = 0.0;
    if (fVar49 != 0.0) {
      if (((*(char *)((long)unaff_x19 + 0x2dc) == '\0') || (0x3a < in_w12)) ||
         (fVar64 = 0.25, (1L << ((ulong)in_w12 & 0x3f) & 0x400500000000000U) == 0)) {
        fVar64 = 0.5;
      }
      fVar66 = (float)FUN_05f84e10(&stack0x00001280,0);
      fVar67 = (float)FUN_05f84e20(&stack0x00001280,0);
      fStack0000000000000094 =
           (unaff_s15 - *(float *)(unaff_x19 + 0x60)) *
           (fVar49 * fVar64 - in_stack_00000170 * (fVar66 * 0.5 + fVar67));
      *(float *)(unaff_x19 + 0xcb) = fStack0000000000000094 + *(float *)(unaff_x19 + 0xcb);
    }
    if (((cVar24 == '\0') && (*(int *)((long)unaff_x19 + 0x65c) == 0)) &&
       ((*(byte *)((long)unaff_x19 + 0x284) & 1) != 0)) {
      lVar26 = unaff_x19[0x23];
      if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar37 = FUN_05ee1474(lVar26,0,0);
      fVar64 = 0.0;
      if ((uVar37 & 1) != 0) {
        lVar26 = unaff_x19[0x23];
        if (*(int *)(*(long *)PTR_DAT_06649ad0 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        plVar43 = (long *)PTR_DAT_06649ad0;
        if (lVar26 == 0) goto LAB_05cc446c;
        uVar37 = FUN_05eb4d10(lVar26,*(undefined4 *)
                                      (*(long *)(*(long *)PTR_DAT_06649ad0 + 0xb8) + 0x6c),0);
        if ((uVar37 & 1) != 0) {
          lVar26 = unaff_x19[0x23];
          if (*(int *)(*plVar43 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            plVar43 = (long *)PTR_DAT_06649ad0;
          }
          if (lVar26 == 0) goto LAB_05cc446c;
          fVar49 = (float)thunk_FUN_05eb6d50(lVar26,*(undefined4 *)
                                                     (*(long *)(*plVar43 + 0xb8) + 0x6c),0);
          if ((unaff_x19[0x20] == 0) || (unaff_x19[0x23] == 0)) goto LAB_05cc446c;
          fVar66 = *(float *)(unaff_x19[0x20] + 0x1a8);
          fVar64 = (float)thunk_FUN_05eb6d50(unaff_x19[0x23],
                                             *(undefined4 *)
                                              (*(long *)(*(long *)PTR_DAT_06649ad0 + 0xb8) + 0xe4),0
                                            );
          fVar64 = fVar64 * fVar49 * fVar66 * 0.25;
          if (fVar49 < unaff_s13 + fVar64) {
            unaff_s13 = fVar49 - fVar64;
          }
        }
      }
      if (unaff_x19[0x20] == 0) goto LAB_05cc446c;
      in_stack_000000f0 = *(float *)(unaff_x19[0x20] + 0x1ac);
    }
    else {
      lVar26 = unaff_x19[0x23];
      if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar37 = FUN_05ee1474(lVar26,0,0);
      in_stack_000000f0 = 0.0;
      if ((uVar37 & 1) != 0) {
        lVar26 = unaff_x19[0x23];
        if (*(int *)(*(long *)PTR_DAT_06649ad0 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        plVar43 = (long *)PTR_DAT_06649ad0;
        if (lVar26 == 0) goto LAB_05cc446c;
        uVar37 = FUN_05eb4d10(lVar26,*(undefined4 *)
                                      (*(long *)(*(long *)PTR_DAT_06649ad0 + 0xb8) + 0x6c),0);
        if ((uVar37 & 1) != 0) {
          lVar26 = unaff_x19[0x23];
          if (*(int *)(*plVar43 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            plVar43 = (long *)PTR_DAT_06649ad0;
          }
          if (lVar26 == 0) goto LAB_05cc446c;
          uVar37 = FUN_05eb4d10(lVar26,*(undefined4 *)(*(long *)(*plVar43 + 0xb8) + 0xe4),0);
          if ((uVar37 & 1) != 0) {
            lVar26 = unaff_x19[0x23];
            if (*(int *)(*plVar43 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
              plVar43 = (long *)PTR_DAT_06649ad0;
            }
            if (lVar26 != 0) {
              fVar49 = (float)thunk_FUN_05eb6d50(lVar26,*(undefined4 *)
                                                         (*(long *)(*plVar43 + 0xb8) + 0x6c),0);
              if ((unaff_x19[0x20] != 0) && (unaff_x19[0x23] != 0)) {
                fVar66 = *(float *)(unaff_x19[0x20] + 0x1a0);
                fVar64 = (float)thunk_FUN_05eb6d50(unaff_x19[0x23],
                                                   *(undefined4 *)
                                                    (*(long *)(*(long *)PTR_DAT_06649ad0 + 0xb8) +
                                                    0xe4),0);
                fVar64 = fVar64 * fVar49 * fVar66 * 0.25;
                if (fVar49 < unaff_s13 + fVar64) {
                  unaff_s13 = fVar49 - fVar64;
                }
                goto LAB_05cbeb4c;
              }
            }
            goto LAB_05cc446c;
          }
        }
      }
      fVar64 = 0.0;
    }
LAB_05cbeb4c:
    fVar61 = *(float *)(unaff_x19 + 0xcb);
    fVar49 = (float)FUN_05f84e20(&stack0x00001280,0);
    fVar67 = *(float *)((long)unaff_x19 + 0x47c);
    fVar66 = (float)FUN_05f89348(&stack0x00001270,0);
    fVar61 = fVar61 + (unaff_s15 - *(float *)(unaff_x19 + 0x60)) *
                      in_stack_00000170 * (fVar66 + ((fVar49 * fVar67 - unaff_s13) - fVar64));
    fVar49 = (float)FUN_05f84e28(&stack0x00001280,0);
    fVar66 = (float)FUN_05f89358(&stack0x00001270,0);
    fStack0000000000000180 =
         *(float *)((long)unaff_x19 + 0x634) +
         ((fStack000000000000017c + in_stack_00000170 * (unaff_s13 + fVar49 + fVar66)) -
         *(float *)((long)unaff_x19 + 0x4ec));
    fVar49 = (float)FUN_05f84e18(&stack0x00001280,0);
    fVar49 = fStack0000000000000180 - in_stack_00000170 * (unaff_s13 + unaff_s13 + fVar49);
    fVar66 = (float)FUN_05f84e10(&stack0x00001280,0);
    fVar66 = fVar61 + (unaff_s15 - *(float *)(unaff_x19 + 0x60)) *
                      in_stack_00000170 *
                      (fVar64 + fVar64 +
                      unaff_s13 + unaff_s13 + fVar66 * *(float *)((long)unaff_x19 + 0x47c));
    fVar67 = fVar61;
    fVar57 = fVar66;
    if (((*(int *)((long)unaff_x19 + 0x65c) == 0) && (cVar24 == '\0')) &&
       ((*(byte *)((long)unaff_x19 + 0x284) >> 1 & 1) != 0)) {
      if (unaff_x19[0x20] == 0) goto LAB_05cc446c;
      lVar26 = unaff_x19[0xc1];
      fVar67 = (float)FUN_05f84b5c(unaff_x19[0x20] + 0x28,0);
      if (unaff_x19[0x20] == 0) goto LAB_05cc446c;
      fVar53 = (float)FUN_05f84b7c(unaff_x19[0x20] + 0x28,0);
      if (unaff_x19[0x20] == 0) goto LAB_05cc446c;
      fVar62 = *(float *)((long)unaff_x19 + 0x43c);
      fVar65 = *(float *)((long)unaff_x19 + 0x634);
      fVar57 = (float)(int)lVar26 * fStack0000000000000058;
      fVar56 = (float)FUN_05f84b2c(unaff_x19[0x20] + 0x28,0);
      fVar56 = fVar56 * fVar62 * (fVar67 - (fVar53 + fVar65)) * 0.5;
      fVar67 = (float)FUN_05f84e28(&stack0x00001280,0);
      fVar65 = fVar57 * in_stack_00000170 * ((fVar64 + unaff_s13 + fVar67) - fVar56);
      fVar53 = (float)FUN_05f84e28(&stack0x00001280,0);
      fVar62 = (float)FUN_05f84e18(&stack0x00001280,0);
      fStack0000000000000180 = fStack0000000000000180 + 0.0;
      unaff_s15 = 1.0;
      fVar49 = fVar49 + 0.0;
      fVar67 = fVar61 + fVar65;
      fVar57 = fVar57 * in_stack_00000170 * ((((fVar53 - fVar62) - unaff_s13) - fVar64) - fVar56);
      fVar61 = fVar61 + fVar57;
      fVar57 = fVar66 + fVar57;
      fVar66 = fVar66 + fVar65;
    }
    uVar19 = *in_stack_000001a8;
    uVar59 = in_stack_000001a8[1];
    if (DAT_06a492ea == '\0') {
      FUN_02d4dc40(PTR_DAT_066463a8);
      DAT_06a492ea = '\x01';
    }
    uVar50 = **(undefined8 **)(*(long *)PTR_DAT_066463a8 + 0xb8);
    uVar54 = (*(undefined8 **)(*(long *)PTR_DAT_066463a8 + 0xb8))[1];
    if (DAT_012752bc <
        (float)((ulong)uVar59 >> 0x20) * (float)((ulong)uVar54 >> 0x20) +
        (float)uVar59 * (float)uVar54 +
        (float)uVar19 * (float)uVar50 +
        (float)((ulong)uVar19 >> 0x20) * (float)((ulong)uVar50 >> 0x20)) {
      fVar53 = 0.0;
      auVar51._4_12_ = SUB1612(ZEXT816(0),4);
      auVar51._0_4_ = fVar49;
      uVar19 = auVar51._0_8_;
      uVar37 = (ulong)(uint)fStack0000000000000180;
      uVar59 = uVar19;
    }
    else {
      FUN_05ece478(&stack0x00001340,*(undefined4 *)((long)unaff_x19 + 0x46c),(int)unaff_x19[0x8e],
                   *(undefined4 *)((long)unaff_x19 + 0x474),(int)unaff_x19[0x8f],0);
      fVar57 = (fVar66 + fVar61) * 0.5;
      fVar56 = (fVar49 + fStack0000000000000180) * 0.5;
      fVar66 = 0.0;
      auVar68 = ZEXT416((uint)(fStack0000000000000180 - fVar56));
      fVar67 = (float)FUN_05ece378(&stack0x00001100,0);
      fVar67 = fVar57 + fVar67;
      fVar62 = 0.0;
      uVar37 = CONCAT44(fVar66 + 0.0,fVar56 + auVar68._0_4_);
      auVar68 = ZEXT416((uint)(fVar49 - fVar56));
      fVar61 = (float)FUN_05ece378(&stack0x00001100,0);
      fVar61 = fVar57 + fVar61;
      fVar53 = 0.0;
      uVar19 = CONCAT44(fVar62 + 0.0,fVar56 + auVar68._0_4_);
      auVar68 = ZEXT416((uint)(fStack0000000000000180 - fVar56));
      fVar66 = (float)FUN_05ece378(&stack0x00001100,0);
      fVar66 = fVar57 + fVar66;
      fVar62 = 0.0;
      fStack0000000000000180 = fVar56 + auVar68._0_4_;
      fVar53 = fVar53 + 0.0;
      auVar68 = ZEXT416((uint)(fVar49 - fVar56));
      unaff_s15 = 1.0;
      fVar49 = (float)FUN_05ece378(&stack0x00001100,0);
      fVar57 = fVar57 + fVar49;
      uVar59 = CONCAT44(fVar62 + 0.0,fVar56 + auVar68._0_4_);
    }
    if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
    goto LAB_05cc446c;
    if (*(uint *)(lVar26 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
    lVar26 = lVar26 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23;
    *(float *)(lVar26 + 0x114) = fVar61;
    *(undefined8 *)(lVar26 + 0x118) = uVar19;
    if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
    goto LAB_05cc446c;
    if (*(uint *)(lVar26 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
    lVar26 = lVar26 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23;
    *(float *)(lVar26 + 0x108) = fVar67;
    *(ulong *)(lVar26 + 0x10c) = uVar37;
    if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
    goto LAB_05cc446c;
    if (*(uint *)(lVar26 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
    lVar26 = lVar26 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23;
    *(float *)(lVar26 + 0x120) = fVar66;
    *(ulong *)(lVar26 + 0x124) = CONCAT44(fVar53,fStack0000000000000180);
    if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
    goto LAB_05cc446c;
    if (*(uint *)(lVar26 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
    lVar26 = lVar26 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23;
    *(float *)(lVar26 + 300) = fVar57;
    *(undefined8 *)(lVar26 + 0x130) = uVar59;
    if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
    goto LAB_05cc446c;
    uVar14 = *(uint *)((long)unaff_x19 + 0x4a4);
    fVar67 = *(float *)(unaff_x19 + 0xcb);
    fVar49 = (float)FUN_05f89348(&stack0x00001270,0);
    if (*(uint *)(lVar26 + 0x18) <= uVar14) goto LAB_05cc45e8;
    *(float *)(lVar26 + (long)(int)uVar14 * (long)(int)unaff_w23 + 0x138) =
         fVar67 + in_stack_00000170 * fVar49;
    if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
    goto LAB_05cc446c;
    uVar14 = *(uint *)((long)unaff_x19 + 0x4a4);
    fVar67 = *(float *)((long)unaff_x19 + 0x4ec);
    fVar57 = *(float *)((long)unaff_x19 + 0x634);
    fVar49 = (float)FUN_05f89358(&stack0x00001270,0);
    if (*(uint *)(lVar26 + 0x18) <= uVar14) goto LAB_05cc45e8;
    *(float *)(lVar26 + (long)(int)uVar14 * (long)(int)unaff_w23 + 0x144) =
         (fStack000000000000017c - fVar67) + fVar57 + in_stack_00000170 * fVar49;
    if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
    goto LAB_05cc446c;
    unaff_w22 = *(uint *)(in_stack_000001a8 + 7);
    if (*(uint *)(lVar26 + 0x18) <= unaff_w22) goto LAB_05cc45e8;
    lVar26 = lVar26 + 0x20;
    *(float *)(lVar26 + (long)(int)unaff_w22 * (long)(int)unaff_w23 + 0x138) =
         (fVar66 - fVar61) / ((float)uVar37 - (float)uVar19);
    fVar63 = in_stack_00000170 * (fStack0000000000000148 + fVar63);
    if (*(int *)((long)unaff_x19 + 0x65c) == 0) {
      fVar63 = fVar63 / fStack000000000000015c;
      fVar48 = (in_stack_00000170 * (fStack0000000000000144 + fVar48)) / fStack000000000000015c;
    }
    else {
      fVar48 = in_stack_00000170 * (fStack0000000000000144 + fVar48);
    }
    fVar49 = *(float *)((long)unaff_x19 + 0x634);
    unaff_w27 = *(uint *)(unaff_x19 + 0x95);
    param_3 = extraout_x1;
    if ((unaff_w26 == 0) || (unaff_w22 == unaff_w27)) {
      fVar63 = fVar63 + fVar49;
      fVar48 = fVar48 + fVar49;
      fVar66 = fVar63;
      fVar67 = fVar48;
      if (fVar49 != 0.0) {
        fVar66 = (fVar63 - fVar49) / *(float *)((long)unaff_x19 + 0x43c);
        fVar67 = (fVar48 - fVar49) / *(float *)((long)unaff_x19 + 0x43c);
        if (fVar66 <= fVar63) {
          fVar66 = fVar63;
        }
        if (fVar48 <= fVar67) {
          fVar67 = fVar48;
        }
      }
      lVar26 = lVar26 + (long)(int)unaff_w22 * (long)(int)unaff_w23;
      fVar49 = fVar66;
      if (fVar66 <= *(float *)((long)unaff_x19 + 0x4dc)) {
        fVar49 = *(float *)((long)unaff_x19 + 0x4dc);
      }
      fVar57 = fVar67;
      if (*(float *)(unaff_x19 + 0x9c) <= fVar67) {
        fVar57 = *(float *)(unaff_x19 + 0x9c);
      }
      *(float *)((long)unaff_x19 + 0x4dc) = fVar49;
      *(float *)(unaff_x19 + 0x9c) = fVar57;
      *(float *)(lVar26 + 300) = fVar66;
      *(float *)(lVar26 + 0x130) = fVar67;
      fVar66 = *(float *)((long)unaff_x19 + 0x4ec);
      *(float *)(lVar26 + 0x120) = fVar63 - fVar66;
      *(float *)((long)unaff_x19 + 0x4d4) = fVar63 - fVar66;
      *(float *)(lVar26 + 0x128) = fVar48 - fVar66;
      *(float *)(unaff_x19 + 0x9b) = fVar48 - fVar66;
      if (((int)unaff_x19[0x97] == 0) || (*(char *)((long)unaff_x19 + 0x374) != '\0')) {
        *(float *)((long)unaff_x19 + 0x4cc) = fVar49;
        if (unaff_x19[0x20] == 0) goto LAB_05cc446c;
        fVar48 = *(float *)(unaff_x19 + 0x9a);
        fVar49 = (float)FUN_05f84b5c(unaff_x19[0x20] + 0x28,0);
        fStack000000000000015c = (in_stack_00000170 * fVar49) / fStack000000000000015c;
        if (fVar48 <= fStack000000000000015c) {
          fVar48 = fStack000000000000015c;
        }
        fVar66 = *(float *)((long)unaff_x19 + 0x4ec);
        *(float *)(unaff_x19 + 0x9a) = fVar48;
        param_3 = extraout_x1_00;
      }
      if (fVar66 == 0.0) {
        fVar48 = *(float *)(unaff_x19 + 0x99);
        if (*(float *)(unaff_x19 + 0x99) <= fVar63) {
          fVar48 = fVar63;
        }
        *(float *)(unaff_x19 + 0x99) = fVar48;
      }
    }
    else {
      lVar26 = lVar26 + (long)(int)unaff_w22 * (long)(int)unaff_w23;
      uVar59 = in_stack_000001a8[0xe];
      *(undefined8 *)(lVar26 + 300) = uVar59;
      fVar66 = *(float *)((long)unaff_x19 + 0x4ec);
      fVar63 = (float)uVar59 - fVar66;
      fVar48 = (float)((ulong)uVar59 >> 0x20) - fVar66;
      *(float *)(lVar26 + 0x120) = fVar63;
      *(float *)(lVar26 + 0x128) = fVar48;
      in_stack_000001a8[0xd] = CONCAT44(fVar48,fVar63);
    }
    lVar26 = unaff_x19[0x74];
    if ((lVar26 == 0) || (lVar27 = *(long *)(lVar26 + 0x38), lVar27 == 0)) goto LAB_05cc446c;
    uVar14 = *(uint *)(in_stack_000001a8 + 7);
    if (*(uint *)(lVar27 + 0x18) <= uVar14) goto LAB_05cc45e8;
    lVar27 = lVar27 + (long)(int)uVar14 * (long)(int)unaff_w23;
    *(undefined1 *)(lVar27 + 400) = 0;
    in_w14 = *(uint *)(unaff_x19 + 0x54) & 0x18;
    in_stack_00000158 = unaff_s13;
    if ((((in_w12 != 9) &&
         ((in_w12 != 0x200b && unaff_w26 == 0 ||
          ((*(uint *)((long)unaff_x19 + 0x304) & 0xfffffffe) != 2)))) &&
        ((unaff_w26 != 0 || (((in_w12 == 3 || (in_w12 == 0x200b)) || (in_w12 == 0xad)))))) &&
       ((in_w12 != 0xad || ((uint)fStack000000000000005c & 1) != 0 &&
        (*(int *)((long)unaff_x19 + 0x65c) != 1)))) {
      if (((in_w12 & 0xfffffffe) == 10) && ((int)unaff_x19[0x62] == 6)) {
        fVar47 = 0.0;
        if ((0.0 < fVar66) && ((char)unaff_x19[0x5e] == '\0')) {
          fVar47 = *(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4e4);
        }
        fVar63 = *(float *)((long)unaff_x19 + 0x4cc);
        auVar68 = ZEXT416((uint)in_stack_000000e0._4_4_);
        if (in_stack_000000e0._4_4_ < (fVar63 - (*(float *)(unaff_x19 + 0x9c) - fVar66)) + fVar47) {
          if (*(int *)((long)unaff_x19 + 0x314) == -1) {
            *(uint *)((long)unaff_x19 + 0x314) = uVar14;
          }
          unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
          if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__ +
                      0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          in_stack_00001308 = FUN_05d11230();
          lVar26 = unaff_x19[99];
          if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar20 = FUN_05ee1474(lVar26,0,0);
          if ((uVar20 & 1) != 0) {
            plVar43 = (long *)unaff_x19[99];
            uVar59 = (**(code **)(*unaff_x19 + 0x548))();
            if (plVar43 == (long *)0x0) goto LAB_05cc446c;
            (**(code **)(*plVar43 + 0x558))(plVar43,uVar59,*(undefined8 *)(*plVar43 + 0x560));
            lVar26 = unaff_x19[99];
            if (lVar26 == 0) goto LAB_05cc446c;
            *(int *)(lVar26 + 0x438) = (int)unaff_x19[0x87];
            FUN_05d04ac0(lVar26,*(undefined4 *)((long)unaff_x19 + 0x4a4),0);
            plVar43 = (long *)unaff_x19[99];
            if (plVar43 == (long *)0x0) goto LAB_05cc446c;
            (**(code **)(*plVar43 + 0x7d8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7e0));
            *(undefined1 *)(unaff_x19 + 0x65) = 1;
          }
LAB_05cbfb88:
          uVar46 = 3;
LAB_05cbfc38:
          fVar47 = in_stack_00000170;
          in_stack_00001328 = CONCAT44(uVar46,uVar14);
          goto LAB_05cbdbd4;
        }
      }
      if ((((in_w12 - 0x2007 < 0x23) &&
           ((1L << ((ulong)(in_w12 - 0x2007) & 0x3f) & 0x600000001U) != 0)) || (in_w12 - 10 < 2)) ||
         (in_w12 == 0xa0)) {
        unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
        if (in_w12 == 0xad) goto LAB_05cbfe80;
LAB_05cbfdd4:
        unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
        if ((in_w12 == 0x200b) || (in_w12 == 0x2060)) goto LAB_05cbfe80;
        lVar26 = unaff_x19[0x74];
        if ((lVar26 == 0) || (lVar27 = *(long *)(lVar26 + 0x50), lVar27 == 0)) goto LAB_05cc446c;
        if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_05cc45e8;
        lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
        *(int *)(lVar27 + 0x2c) = *(int *)(lVar27 + 0x2c) + 1;
        *(int *)(lVar26 + 0x20) = *(int *)(lVar26 + 0x20) + 1;
      }
      else {
        if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        auVar68 = FUN_04f758f0(in_w12,0);
        param_3 = auVar68._8_8_;
        if (((auVar68._0_8_ & 1) != 0) && (in_w12 != 0xad)) goto LAB_05cbfdd4;
      }
      unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
      if (in_w12 != 0xa0) goto LAB_05cbfe80;
      if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x50), lVar26 == 0))
      goto LAB_05cc446c;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_05cc45e8;
      lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
      *(int *)(lVar26 + 0x20) = *(int *)(lVar26 + 0x20) + 1;
      goto LAB_05cbfe80;
    }
    *(undefined1 *)(lVar27 + 400) = 1;
    pfVar31 = _fStack0000000000000098;
    pfVar33 = _fStack00000000000000b8;
    if (uVar30 == unaff_w21) {
      lVar26 = *(long *)(lVar26 + 0x50);
      if (lVar26 == 0) goto LAB_05cc446c;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_05cc45e8;
      lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
      pfVar33 = (float *)(lVar26 + 100);
      pfVar31 = (float *)(lVar26 + 0x68);
    }
    fVar49 = *pfVar33;
    fVar66 = *pfVar31;
    fVar63 = *(float *)(unaff_x19 + 0x73);
    fVar48 = 0.0;
    fVar67 = *(float *)(unaff_x19 + 0xcb);
    fStack000000000000014c = (in_stack_000000b0 - fVar49) - fVar66;
    bVar11 = true;
    if ((fVar63 <= fStack000000000000014c) && (bVar11 = false, !NAN(fVar63))) {
      bVar11 = fVar63 == -1.0;
    }
    if (!bVar11) {
      fStack000000000000014c = fVar63;
    }
    fVar57 = 0.0;
    if ((char)unaff_x19[0x1e] == '\0') {
      fVar57 = (float)FUN_05f84e30(&stack0x00001280,0);
      param_3 = extraout_x1_01;
    }
    fVar53 = *(float *)((long)unaff_x19 + 0x4ec);
    fVar61 = *(float *)(unaff_x19 + 0x60);
    fVar63 = fVar47;
    if (in_w12 != 0xad) {
      fVar63 = in_stack_00000170;
    }
    if ((0.0 < fVar53) && ((char)unaff_x19[0x5e] == '\0')) {
      fVar48 = *(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4e4);
    }
    iVar16 = *(int *)(in_stack_000001a8 + 7);
    auVar68 = ZEXT416((uint)fVar64);
    fVar48 = (*(float *)((long)unaff_x19 + 0x4cc) - (*(float *)(unaff_x19 + 0x9c) - fVar53)) +
             fVar48;
    if (in_stack_000000e0._4_4_ < fVar48) {
      if (*(int *)((long)unaff_x19 + 0x314) == -1) {
        *(int *)((long)unaff_x19 + 0x314) = iVar16;
      }
      unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
      fVar47 = DAT_012751b0;
      if ((char)unaff_x19[0x4c] != '\0') {
        if (0.0 < fVar53) {
          fVar64 = *(float *)((long)unaff_x19 + 0x2f4);
          if ((fVar64 < *(float *)(unaff_x19 + 0x5d)) &&
             (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
            fVar47 = *(float *)(unaff_x19 + 0x5d) +
                     ((in_stack_00000018._4_4_ - fVar48) / (float)(int)unaff_x19[0x97]) /
                     fStack0000000000000050;
            if (fVar47 <= fVar64) {
              fVar47 = fVar64;
            }
            goto LAB_05cc4498;
          }
        }
        fVar48 = *(float *)((long)unaff_x19 + 0x20c);
        fVar64 = *(float *)(unaff_x19 + 0x4f);
        if ((fVar64 < fVar48) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
          *(float *)((long)unaff_x19 + 0x264) = fVar48;
          fVar63 = (fVar48 - *(float *)(unaff_x19 + 0x4d)) * 0.5;
          if (fVar63 <= fVar47) {
            fVar63 = fVar47;
          }
          fVar63 = (fVar48 - fVar63) * 20.0 + 0.5;
          fVar47 = DAT_01275250;
          if (fVar63 != INFINITY) {
            fVar47 = (float)(int)fVar63 / 20.0;
          }
          if (fVar47 <= fVar64) {
            fVar47 = fVar64;
          }
          *(float *)((long)unaff_x19 + 0x20c) = fVar47;
          return;
        }
      }
      iVar18 = (int)unaff_x19[0x62];
      if (iVar18 < 5) {
        if (iVar18 == 1) {
          lVar26 = *(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
          if (*(int *)(lVar26 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            lVar26 = *unaff_x28;
          }
          lVar27 = *(long *)(lVar26 + 0xb8);
          if (*(int *)(lVar27 + 0x1708) != 0) {
            if (*(int *)(lVar26 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
              lVar27 = *(long *)(*unaff_x28 + 0xb8);
            }
            FUN_03cc2b0c(&stack0x00001340,lVar27 + 0x1338,
                         *(undefined8 *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_RemoveMember__)
            ;
            memcpy(&stack0x00000d48,&stack0x00001340,0x3b8);
LAB_05cbfc0c:
            iVar16 = FUN_05d11230();
            in_stack_00001308 = iVar16 - 1;
            in_stack_000001b0 = (float)((int)in_stack_000001b0 + 1);
            uVar14 = *(int *)((long)unaff_x19 + 0x4a4) - 1;
            *(uint *)((long)unaff_x19 + 0x4a4) = uVar14;
            uVar46 = 0x2026;
            goto LAB_05cbfc38;
          }
LAB_05cbfc40:
          in_stack_000001a8[7] = 0;
          fVar47 = in_stack_00000170;
          in_stack_00001308 = 0xffffffff;
          in_stack_00001328 = DAT_01274108;
          goto LAB_05cbdbd4;
        }
        if (iVar18 != 3) goto LAB_05cbf5cc;
        if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__ + 0xe4
                    ) == 0) {
          thunk_FUN_02dabd98();
        }
LAB_05cbf878:
        in_stack_00001308 = FUN_05d11230();
      }
      else {
        if (iVar18 == 5) {
          if (((int)in_stack_00001308 < 0) || (iVar16 == 0)) {
            *(undefined4 *)(in_stack_000001a8 + 7) = 0;
            in_stack_00001308 = 0xffffffff;
            unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
            fVar47 = in_stack_00000170;
            in_stack_00001328 = DAT_01274108;
          }
          else {
            auVar68 = ZEXT416((uint)in_stack_000000e0._4_4_);
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
            in_stack_00001308 = FUN_05d11230();
            *(undefined4 *)(unaff_x19 + 0x95) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
            lVar26 = *unaff_x28;
            *(undefined1 *)((long)unaff_x19 + 0x374) = 1;
            uVar59 = *(undefined8 *)(*(long *)(lVar26 + 0xb8) + 0x1730);
            *(undefined4 *)((long)unaff_x19 + 0x4e4) = 0;
            *(undefined4 *)((long)unaff_x19 + 0x4ec) = 0;
            *(float *)(unaff_x19 + 0xcb) = *(float *)((long)unaff_x19 + 0x444) + 0.0;
            uVar59 = NEON_rev64(uVar59,4);
            auVar68 = ZEXT816(0);
            *(int *)(unaff_x19 + 0x97) = (int)unaff_x19[0x97] + 1;
            iVar16 = *(int *)((long)unaff_x19 + 0x4c4);
            in_stack_000001a8[0xe] = uVar59;
            unaff_x19[0x99] = 0;
            *(int *)((long)unaff_x19 + 0x4c4) = iVar16 + 1;
            fVar47 = in_stack_00000170;
          }
          goto LAB_05cbdbd4;
        }
        if (iVar18 != 6) goto LAB_05cbf5cc;
        if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__ + 0xe4
                    ) == 0) {
          thunk_FUN_02dabd98();
        }
        in_stack_00001308 = FUN_05d11230();
        lVar26 = unaff_x19[99];
        if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar20 = FUN_05ee1474(lVar26,0,0);
        if ((uVar20 & 1) != 0) {
          plVar43 = (long *)unaff_x19[99];
          uVar59 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar43 == (long *)0x0) goto LAB_05cc446c;
          (**(code **)(*plVar43 + 0x558))(plVar43,uVar59,*(undefined8 *)(*plVar43 + 0x560));
          lVar26 = unaff_x19[99];
          if (lVar26 == 0) goto LAB_05cc446c;
          *(int *)(lVar26 + 0x438) = (int)unaff_x19[0x87];
          FUN_05d04ac0(lVar26,*(undefined4 *)((long)unaff_x19 + 0x4a4),0);
          plVar43 = (long *)unaff_x19[99];
          if (plVar43 == (long *)0x0) goto LAB_05cc446c;
          (**(code **)(*plVar43 + 0x7d8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x65) = 1;
        }
      }
      unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
      fVar47 = in_stack_00000170;
      in_stack_00001328 = CONCAT44(3,iVar16);
      goto LAB_05cbdbd4;
    }
LAB_05cbf5cc:
    unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
    if ((uVar20 & 1) == 0) goto joined_r0x05cbf6b8;
    fVar47 = unaff_s15;
    if (in_w14 != 0) {
      fVar47 = DAT_01275388;
    }
    fVar48 = ABS(fVar67) + fVar57 * (unaff_s15 - fVar61) * fVar63;
    if (fVar48 <= fVar47 * fStack000000000000014c) goto joined_r0x05cbf6b8;
    if (((*(int *)((long)unaff_x19 + 0x304) == 0) || (*(int *)((long)unaff_x19 + 0x304) == 3)) ||
       (iVar16 == (int)unaff_x19[0x95])) {
      if (((char)unaff_x19[0x4c] != '\0') &&
         (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
        fVar63 = 100.0;
        fVar64 = *(float *)((long)unaff_x19 + 0x2fc) / 100.0;
        if (fVar61 < fVar64) {
          fVar63 = fVar48;
          if (0.0 < fVar61) {
            fVar63 = fVar48 / (1.0 - fVar61);
          }
          fVar61 = fVar61 + (fVar48 - fVar47 * (fStack000000000000014c + DAT_012751f8)) / fVar63;
          goto LAB_05cc459c;
        }
        fVar64 = *(float *)((long)unaff_x19 + 0x20c);
        fVar67 = *(float *)(unaff_x19 + 0x4f);
        auVar68 = ZEXT416((uint)fVar67);
        if (fVar64 <= fVar67) goto LAB_05cbf664;
LAB_05cc4504:
        fVar47 = DAT_012751b0;
        *(float *)((long)unaff_x19 + 0x264) = fVar64;
        fVar63 = (fVar64 - *(float *)(unaff_x19 + 0x4d)) * 0.5;
        if (fVar63 <= fVar47) {
          fVar63 = fVar47;
        }
        fVar63 = (fVar64 - fVar63) * 20.0 + 0.5;
        fVar47 = DAT_01275250;
        if (fVar63 != INFINITY) {
          fVar47 = (float)(int)fVar63 / 20.0;
        }
        if (fVar47 <= fVar67) {
          fVar47 = fVar67;
        }
LAB_05cc1978:
        *(float *)((long)unaff_x19 + 0x20c) = fVar47;
        return;
      }
LAB_05cbf664:
      iVar18 = (int)unaff_x19[0x62];
      if (iVar18 == 1) {
        lVar26 = *(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
        if (*(int *)(lVar26 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar26 = *unaff_x28;
        }
        lVar27 = *(long *)(lVar26 + 0xb8);
        if (*(int *)(lVar27 + 0x1708) == 0) goto LAB_05cbfc40;
        if (*(int *)(lVar26 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar27 = *(long *)(*unaff_x28 + 0xb8);
        }
        FUN_03cc2b0c(&stack0x00001340,lVar27 + 0x1338,
                     *(undefined8 *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_RemoveMember__);
        memcpy(&stack0x000005d8,&stack0x00001340,0x3b8);
        goto LAB_05cbfc0c;
      }
      if (iVar18 == 6) {
        if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__ + 0xe4
                    ) == 0) {
          thunk_FUN_02dabd98();
        }
        in_stack_00001308 = FUN_05d11230();
        lVar26 = unaff_x19[99];
        if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar20 = FUN_05ee1474(lVar26,0,0);
        if ((uVar20 & 1) != 0) {
          plVar43 = (long *)unaff_x19[99];
          uVar59 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar43 == (long *)0x0) goto LAB_05cc446c;
          (**(code **)(*plVar43 + 0x558))(plVar43,uVar59,*(undefined8 *)(*plVar43 + 0x560));
          lVar26 = unaff_x19[99];
          if (lVar26 == 0) goto LAB_05cc446c;
          *(int *)(lVar26 + 0x438) = (int)unaff_x19[0x87];
          FUN_05d04ac0(lVar26,*(undefined4 *)((long)unaff_x19 + 0x4a4),0);
          plVar43 = (long *)unaff_x19[99];
          if (plVar43 == (long *)0x0) goto LAB_05cc446c;
          (**(code **)(*plVar43 + 0x7d8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x65) = 1;
        }
        uVar14 = *(uint *)(in_stack_000001a8 + 7);
        goto LAB_05cbfb88;
      }
      if (iVar18 == 3) {
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
    in_stack_00001308 = FUN_05d11230();
    if (*(float *)((long)unaff_x19 + 0x2ec) == DAT_01274f94) {
      lVar26 = unaff_x19[0x74];
      if ((lVar26 == 0) || (lVar27 = *(long *)(lVar26 + 0x38), lVar27 == 0)) goto LAB_05cc446c;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
      fVar64 = *(float *)((long)unaff_x19 + 0x4ec);
      fVar63 = 0.0;
      if ((0.0 < fVar64) && ((char)unaff_x19[0x5e] == '\0')) {
        fVar63 = *(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4e4);
      }
      fVar67 = in_stack_00000108 * *(float *)((long)unaff_x19 + 0x2e4) +
               *(float *)(lVar27 + (long)(int)*(uint *)(in_stack_000001a8 + 7) *
                                   (long)(int)unaff_w23 + 0x14c) +
               (fVar63 - *(float *)(unaff_x19 + 0x9c)) +
               fStack0000000000000050 * (fStack0000000000000048 + *(float *)(unaff_x19 + 0x5d));
    }
    else {
      lVar26 = unaff_x19[0x74];
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
      if (lVar26 == 0) goto LAB_05cc446c;
      fVar67 = *(float *)((long)unaff_x19 + 0x2ec) +
               in_stack_00000108 * *(float *)((long)unaff_x19 + 0x2e4);
      fVar64 = *(float *)((long)unaff_x19 + 0x4ec);
    }
    puVar10 = Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
    lVar26 = *(long *)(lVar26 + 0x38);
    if (lVar26 == 0) goto LAB_05cc446c;
    uVar14 = *(uint *)((long)unaff_x19 + 0x4a4);
    if ((*(uint *)(lVar26 + 0x18) <= uVar14) ||
       (uVar15 = uVar14 - 1, *(uint *)(lVar26 + 0x18) <= uVar15)) goto LAB_05cc45e8;
    fVar63 = *(float *)((long)unaff_x19 + 0x4cc);
    lVar26 = lVar26 + 0x20;
    fVar57 = *(float *)(lVar26 + (long)(int)uVar14 * (long)(int)unaff_w23 + 0x130);
    auVar68 = ZEXT416((uint)fVar57);
    fVar57 = (fVar67 + fVar63 + fVar64) - fVar57;
    if ((*(short *)(lVar26 + (long)(int)uVar15 * (long)(int)unaff_w23 + 4) == 0xad &&
         ((uint)fStack000000000000005c & 1) == 0) &&
       (((int)unaff_x19[0x62] == 0 || (fVar57 < in_stack_000000e0._4_4_)))) {
      fStack000000000000005c = 0.0;
      in_stack_00001308 = in_stack_00001308 - 1;
      *(uint *)(in_stack_000001a8 + 7) = uVar15;
      unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
      fVar47 = in_stack_00000170;
      in_stack_00001328 = CONCAT44(0x2d,uVar15);
      goto LAB_05cbdbd4;
    }
    if (*(short *)(lVar26 + (long)(int)uVar14 * (long)(int)unaff_w23 + 4) == 0xad) {
      fStack000000000000005c = 1.4013e-45;
      unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
      fVar47 = in_stack_00000170;
      goto LAB_05cbdbd4;
    }
    if ((char)unaff_x19[0x4c] != '\0' && (((uint)in_stack_00000078._4_4_ ^ 0xffffffff) & 1) == 0) {
      fVar64 = *(float *)((long)unaff_x19 + 0x2fc) / 100.0;
      fVar61 = *(float *)(unaff_x19 + 0x60);
      if ((fVar64 <= fVar61) || ((int)unaff_x19[0x4e] <= *(int *)((long)unaff_x19 + 0x26c))) {
        fVar64 = *(float *)((long)unaff_x19 + 0x20c);
        fVar67 = *(float *)(unaff_x19 + 0x4f);
        auVar68 = ZEXT416((uint)fVar67);
        if ((fVar67 < fVar64) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
        goto LAB_05cc4504;
        goto LAB_05cc1214;
      }
LAB_05cc45ac:
      fVar63 = fVar48;
      if (0.0 < fVar61) {
        fVar63 = fVar48 / (1.0 - fVar61);
      }
      fVar61 = fVar61 + (fVar48 - fVar47 * (fStack000000000000014c + DAT_012751f8)) / fVar63;
LAB_05cc459c:
      if (fVar64 <= fVar61) {
        fVar61 = fVar64;
      }
      *(float *)(unaff_x19 + 0x60) = fVar61;
      return;
    }
LAB_05cc1214:
    lVar26 = *(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
    param_3 = extraout_x1_04;
    if (*(int *)(lVar26 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar26 = *(long *)puVar10;
      param_3 = extraout_x1_12;
    }
    if (((((uint)in_stack_00000078._4_4_ & 1) != 0) &&
        (iVar18 = *(int *)(*(long *)(lVar26 + 0xb8) + 0xf80), iVar18 != -1)) &&
       (iVar18 != iStack0000000000000020)) {
      if (*(int *)(lVar26 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      in_stack_00001308 = FUN_05d11230();
      if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
      goto LAB_05cc446c;
      uVar14 = *(int *)(in_stack_000001a8 + 7) - 1;
      if (*(uint *)(lVar26 + 0x18) <= uVar14) goto LAB_05cc45e8;
      param_3 = extraout_x1_13;
      iStack0000000000000020 = iVar18;
      if (*(short *)(lVar26 + (long)(int)uVar14 * (long)(int)unaff_w23 + 0x24) == 0xad) {
        fStack000000000000005c = 0.0;
        in_stack_00001308 = in_stack_00001308 - 1;
        *(uint *)(in_stack_000001a8 + 7) = uVar14;
        unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
        fVar47 = in_stack_00000170;
        in_stack_00001328 = CONCAT44(0x2d,uVar14);
        goto LAB_05cbdbd4;
      }
    }
    if (fVar57 <= in_stack_000000e0._4_4_) {
      auVar68 = ZEXT416((uint)in_stack_00000170);
      fVar63 = in_stack_00000108;
      FUN_05d11cfc();
LAB_05cc1568:
      in_stack_00000078._4_4_ = 1.4013e-45;
      fStack000000000000005c = 0.0;
      fStack0000000000000068 = 1.4013e-45;
      unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
      fVar47 = in_stack_00000170;
      goto LAB_05cbdbd4;
    }
    if (*(int *)((long)unaff_x19 + 0x314) == -1) {
      *(undefined4 *)((long)unaff_x19 + 0x314) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
    }
    unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
    if ((char)unaff_x19[0x4c] != '\0') {
      fVar64 = *(float *)((long)unaff_x19 + 0x2f4);
      if ((fVar64 < *(float *)(unaff_x19 + 0x5d)) &&
         (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
        fVar47 = *(float *)(unaff_x19 + 0x5d) +
                 ((in_stack_00000018._4_4_ - fVar57) / (float)((int)unaff_x19[0x97] + 1)) /
                 fStack0000000000000050;
        if (fVar47 <= fVar64) {
          fVar47 = fVar64;
        }
LAB_05cc4498:
        *(float *)(unaff_x19 + 0x5d) = fVar47;
        return;
      }
      fVar64 = *(float *)((long)unaff_x19 + 0x2fc) / 100.0;
      fVar61 = *(float *)(unaff_x19 + 0x60);
      if ((fVar61 < fVar64) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
      goto LAB_05cc45ac;
      fVar64 = *(float *)((long)unaff_x19 + 0x20c);
      fVar67 = *(float *)(unaff_x19 + 0x4f);
      auVar68 = ZEXT416((uint)fVar67);
      if ((fVar67 < fVar64) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
      goto LAB_05cc4504;
    }
    iVar18 = (int)unaff_x19[0x62];
    fStack000000000000005c = 0.0;
    if (iVar18 < 3) {
      if (iVar18 != 0) {
        if (iVar18 == 1) {
          lVar26 = *(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
          if (*(int *)(lVar26 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            lVar26 = *(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
          }
          in_stack_00001328 = DAT_01274108;
          lVar27 = *(long *)(lVar26 + 0xb8);
          if (*(int *)(lVar27 + 0x1708) == 0) {
            in_stack_00001308 = 0xffffffff;
            in_stack_000001a8[7] = 0;
          }
          else {
            if (*(int *)(lVar26 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
              lVar27 = *(long *)(*(long *)
                                  Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__ +
                                0xb8);
            }
            FUN_03cc2b0c(&stack0x00001340,lVar27 + 0x1338,
                         *(undefined8 *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_RemoveMember__)
            ;
            memcpy(&stack0x00000990,&stack0x00001340,0x3b8);
            iVar16 = FUN_05d11230();
            in_stack_00001308 = iVar16 - 1;
            iVar16 = *(int *)((long)unaff_x19 + 0x4a4) + -1;
            *(int *)((long)unaff_x19 + 0x4a4) = iVar16;
            in_stack_000001b0 = (float)((int)in_stack_000001b0 + 1);
            in_stack_00001328 = CONCAT44(0x2026,iVar16);
          }
          goto LAB_05cc1884;
        }
        if (iVar18 != 2) goto joined_r0x05cbf6b8;
      }
LAB_05cc159c:
      auVar68 = ZEXT416((uint)in_stack_00000170);
      fVar63 = in_stack_00000108;
      FUN_05d11cfc();
      fStack000000000000005c = 0.0;
UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__set_onSelectExited:
      in_stack_00000078._4_4_ = 1.4013e-45;
      fStack0000000000000068 = 1.4013e-45;
      fVar47 = in_stack_00000170;
      goto LAB_05cbdbd4;
    }
    if (iVar18 < 5) {
      if (iVar18 != 3) {
        if (iVar18 == 4) goto LAB_05cc159c;
        goto joined_r0x05cbf6b8;
      }
      if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__ + 0xe4)
          == 0) {
        thunk_FUN_02dabd98();
      }
      in_stack_00001308 = FUN_05d11230();
      in_stack_00001328 = CONCAT44(3,iVar16);
LAB_05cc1884:
      fStack000000000000005c = 0.0;
      unaff_s15 = 1.0;
      unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
      fVar47 = in_stack_00000170;
      goto LAB_05cbdbd4;
    }
    if (iVar18 == 5) {
      auVar68 = ZEXT416((uint)in_stack_00000170);
      *(undefined1 *)((long)unaff_x19 + 0x374) = 1;
      fVar63 = in_stack_00000108;
      FUN_05d11cfc();
      *(undefined4 *)((long)unaff_x19 + 0x4e4) = 0;
      *(undefined4 *)((long)unaff_x19 + 0x4ec) = 0;
      *(int *)((long)unaff_x19 + 0x4c4) = *(int *)((long)unaff_x19 + 0x4c4) + 1;
      unaff_x19[0x99] = 0;
      goto LAB_05cc1568;
    }
    if (iVar18 == 6) {
      lVar26 = unaff_x19[99];
      if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar20 = FUN_05ee1474(lVar26,0,0);
      if ((uVar20 & 1) != 0) {
        plVar43 = (long *)unaff_x19[99];
        uVar59 = (**(code **)(*unaff_x19 + 0x548))();
        if (plVar43 == (long *)0x0) goto LAB_05cc446c;
        (**(code **)(*plVar43 + 0x558))(plVar43,uVar59,*(undefined8 *)(*plVar43 + 0x560));
        lVar26 = unaff_x19[99];
        if (lVar26 == 0) goto LAB_05cc446c;
        *(int *)(lVar26 + 0x438) = (int)unaff_x19[0x87];
        FUN_05d04ac0(lVar26,*(undefined4 *)((long)unaff_x19 + 0x4a4),0);
        plVar43 = (long *)unaff_x19[99];
        if (plVar43 == (long *)0x0) goto LAB_05cc446c;
        (**(code **)(*plVar43 + 0x7d8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7e0));
        *(undefined1 *)(unaff_x19 + 0x65) = 1;
      }
      in_stack_00001328 = CONCAT44(3,*(undefined4 *)(in_stack_000001a8 + 7));
      goto LAB_05cc1884;
    }
    unaff_s15 = 1.0;
joined_r0x05cbf6b8:
    Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__ = (undefined *)unaff_x28;
    if (unaff_w26 == 0) {
      if (in_w12 == 0xad) {
        if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
        goto LAB_05cc446c;
        if (*(uint *)(lVar26 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
        *(undefined1 *)
         (lVar26 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23 + 400) = 0;
      }
      else {
        lVar26 = 0x500;
        if (*(char *)((long)unaff_x19 + 0x1ec) != '\0') {
          lVar26 = 0x144;
        }
        param_3 = (ulong)*(uint *)((long)unaff_x19 + lVar26);
        if (*(int *)((long)unaff_x19 + 0x65c) == 1) {
          (**(code **)(*unaff_x19 + 0x8c8))();
          param_3 = extraout_x1_03;
        }
        else if (*(int *)((long)unaff_x19 + 0x65c) == 0) {
          (**(code **)(*unaff_x19 + 0x8b8))();
          param_3 = extraout_x1_02;
        }
        if (((uint)fStack0000000000000068 & 1) != 0) {
          *(undefined4 *)(in_stack_000001a8 + 8) = *(undefined4 *)(in_stack_000001a8 + 7);
        }
        *(undefined4 *)((long)unaff_x19 + 0x4b4) = *(undefined4 *)(in_stack_000001a8 + 7);
        *(int *)((long)unaff_x19 + 0x4bc) = *(int *)((long)unaff_x19 + 0x4bc) + 1;
        if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x50), lVar26 == 0))
        goto LAB_05cc446c;
        if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_05cc45e8;
        fStack0000000000000068 = 0.0;
        lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
        *(float *)(lVar26 + 100) = fVar49;
        *(float *)(lVar26 + 0x68) = fVar66;
      }
      goto LAB_05cbfe80;
    }
    param_1 = unaff_x19[0x74];
    if ((param_1 == 0) || (lVar26 = *(long *)(param_1 + 0x38), lVar26 == 0)) goto LAB_05cc446c;
    uVar14 = *(uint *)(in_stack_000001a8 + 7);
    if (*(uint *)(lVar26 + 0x18) <= uVar14) goto LAB_05cc45e8;
    *(undefined1 *)(lVar26 + (long)(int)uVar14 * (long)(int)unaff_w23 + 400) = 0;
    *(uint *)((long)unaff_x19 + 0x4b4) = uVar14;
    lVar26 = *(long *)(param_1 + 0x50);
    if (lVar26 == 0) goto LAB_05cc446c;
    uVar14 = *(uint *)(lVar26 + 0x18);
    if (uVar14 <= *(uint *)(unaff_x19 + 0x97)) goto LAB_05cc45e8;
    in_w13 = 0x60;
    in_x9 = lVar26 + 0x20;
    lVar26 = in_x9 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
    iVar16 = *(int *)(lVar26 + 0xc) + 1;
    *(int *)(lVar26 + 0xc) = iVar16;
    in_w10 = *(uint *)(unaff_x19 + 0x97);
    *(int *)(unaff_x19 + 0x98) = iVar16;
    if (uVar14 <= in_w10) goto LAB_05cc45e8;
    lVar26 = in_x9 + (long)(int)in_w10 * 0x60;
    *(float *)(lVar26 + 0x44) = fVar49;
    *(float *)(lVar26 + 0x48) = fVar66;
    in_w11 = *(int *)(param_1 + 0x20) + 1;
    in_stack_0000133c = in_w12;
  } while( true );
LAB_05cc1fd0:
  if (*(uint *)(lVar26 + 0x18) <= uVar14) goto LAB_05cc45e8;
  uVar40 = (ulong)uVar14;
  piVar39 = (int *)(lVar27 + uVar40 * 0x178);
  lVar35 = *(long *)(piVar39 + 8);
  uVar45 = *(ushort *)(piVar39 + 1);
  if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar44 = (uint)uVar45;
  bVar12 = FUN_04f72380(uVar45,0);
  if (*(uint *)(lVar26 + 0x18) <= uVar14) goto LAB_05cc45e8;
  if ((unaff_x19[0x74] == 0) || (lVar21 = *(long *)(unaff_x19[0x74] + 0x50), lVar21 == 0))
  goto LAB_05cc446c;
  uVar4 = *(uint *)(lVar27 + uVar40 * 0x178 + 0x3c);
  if (*(uint *)(lVar21 + 0x18) <= uVar4) goto LAB_05cc45e8;
  lVar21 = lVar21 + (long)(int)uVar4 * 0x60;
  uVar2 = *(uint *)(lVar21 + 0x40);
  uVar3 = *(uint *)(lVar21 + 0x44);
  fVar67 = *(float *)(lVar21 + 0x58);
  fVar63 = *(float *)(lVar21 + 0x5c);
  uVar41 = *(uint *)(lVar21 + 0x6c);
  fVar57 = *(float *)(lVar21 + 0x60);
  fVar56 = *(float *)(lVar21 + 100);
  iVar18 = *(int *)(lVar21 + 0x20);
  fVar53 = *(float *)(lVar21 + 0x70);
  fVar61 = *(float *)(lVar21 + 0x74);
  iVar17 = *(int *)(lVar21 + 0x28);
  fVar64 = *(float *)(lVar21 + 0x78);
  fVar49 = *(float *)(lVar21 + 0x7c);
  iVar38 = *(int *)(lVar21 + 0x30);
  fVar66 = *(float *)(lVar21 + 0x50);
  if ((int)uVar41 < 9) {
    if ((int)uVar41 < 3) {
      if (uVar41 == 1) {
        if ((char)unaff_x19[0x1e] == '\0') {
          in_stack_00000120 = fVar56 + 0.0;
        }
        else {
          in_stack_00000120 = 0.0 - fVar63;
        }
        fStack0000000000000100 = 0.0;
        fStack0000000000000124 = 0.0;
      }
      else if (uVar41 == 2) {
        in_stack_00000120 = (fVar56 + fVar57 * 0.5) - fVar63 * 0.5;
LAB_05cc22cc:
        fStack0000000000000124 = 0.0;
        fStack0000000000000100 = 0.0;
      }
      else {
LAB_05cc219c:
        uVar45 = NEON_umaxv(CONCAT26(-(ushort)(uVar45 == (ushort)((ulong)DAT_01274c08 >> 0x30)),
                                     CONCAT24(-(ushort)(uVar45 ==
                                                       (ushort)((ulong)DAT_01274c08 >> 0x20)),
                                              CONCAT22(-(ushort)(uVar45 ==
                                                                (ushort)((ulong)DAT_01274c08 >> 0x10
                                                                        )),
                                                       -(ushort)(uVar45 == (ushort)DAT_01274c08)))),
                            2);
        if (((((uVar45 & 1) == 0) && (uVar44 != 3)) && (uVar41 == 8)) && ((int)uVar14 <= (int)uVar3)
           ) goto LAB_05cc21dc;
      }
    }
    else if (uVar41 != 3) {
      if (uVar41 != 4) goto LAB_05cc219c;
      fStack0000000000000100 = 0.0;
      if ((char)unaff_x19[0x1e] != '\0') {
        fVar63 = 0.0;
      }
      in_stack_00000120 = (fVar57 + fVar56) - fVar63;
      fStack0000000000000124 = 0.0;
    }
  }
  else if (uVar41 == 0x10) {
    if ((int)uVar14 <= (int)uVar3) {
      if (uVar44 < 0xad) {
        if ((uVar44 != 3) && (uVar44 != 10)) {
LAB_05cc21dc:
          if (*(uint *)(lVar26 + 0x18) <= uVar2) goto LAB_05cc45e8;
          uVar5 = *(undefined2 *)(lVar27 + (long)(int)uVar2 * 0x178 + 4);
          if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar20 = FUN_04f7562c(uVar5,0);
          unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
          if ((uVar20 & 1) == 0) {
            bVar1 = (int)uVar4 < (int)unaff_x19[0x97];
          }
          else {
            bVar1 = false;
          }
          if ((!bVar1 && (uVar41 >> 4 & 1) == 0) && (fVar63 <= fVar57)) {
            in_stack_00000120 = -0.0;
            if ((char)unaff_x19[0x1e] != '\0') {
              in_stack_00000120 = fVar57;
            }
            in_stack_00000120 = fVar56 + in_stack_00000120;
            goto LAB_05cc22cc;
          }
          if (((uVar14 == 0) || (uVar4 != uVar30)) || (uVar14 == *(uint *)((long)unaff_x19 + 0x35c))
             ) {
            in_stack_00000120 = -0.0;
            if ((char)unaff_x19[0x1e] != '\0') {
              in_stack_00000120 = fVar57;
            }
            if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            in_stack_00000120 = fVar56 + in_stack_00000120;
            fStack0000000000000050 = (float)FUN_04f758f0(uVar44,0);
            fStack0000000000000124 = 0.0;
            fStack0000000000000100 = 0.0;
          }
          else {
            cVar24 = (char)unaff_x19[0x1e];
            iVar38 = (iVar38 - iVar18) - ((uint)fStack0000000000000050 & 1);
            fVar56 = -fVar63;
            if (cVar24 != '\0') {
              fVar56 = fVar63;
            }
            if (iVar38 < 1) {
              fVar63 = 1.0;
              iVar38 = 1;
            }
            else {
              fVar63 = *(float *)((long)unaff_x19 + 0x30c);
            }
            if (uVar44 == 9) {
LAB_05cc3f64:
              fVar63 = ((fVar57 + fVar56) * (1.0 - fVar63)) / (float)iVar38;
              if (cVar24 == '\0') {
                in_stack_00000120 = in_stack_00000120 + fVar63;
                fStack0000000000000124 = fStack0000000000000124 + 0.0;
                fStack0000000000000100 = fStack0000000000000100 + 0.0;
              }
              else {
                in_stack_00000120 = in_stack_00000120 - fVar63;
              }
            }
            else {
              if (uVar44 != 0xa0) {
                if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_02dabd98();
                }
                uVar20 = FUN_04f758f0(uVar44,0);
                cVar24 = (char)unaff_x19[0x1e];
                if ((uVar20 & 1) != 0) goto LAB_05cc3f64;
              }
              fVar63 = ((fVar57 + fVar56) * fVar63) /
                       (float)(int)((iVar18 - (((uint)fStack0000000000000050 ^ 0xffffffff) & 1)) +
                                   iVar17);
              if (cVar24 == '\0') {
                in_stack_00000120 = in_stack_00000120 + fVar63;
                fStack0000000000000124 = fStack0000000000000124 + 0.0;
                fStack0000000000000100 = fStack0000000000000100 + 0.0;
              }
              else {
                in_stack_00000120 = in_stack_00000120 - fVar63;
              }
            }
          }
        }
      }
      else if (((uVar44 != 0xad) && (uVar44 != 0x200b)) && (uVar44 != 0x2060)) goto LAB_05cc21dc;
    }
  }
  else if (uVar41 == 0x20) {
    in_stack_00000120 = (fVar56 + fVar57 * 0.5) - (fVar53 + fVar64) * 0.5;
    fStack0000000000000100 = 0.0;
    fStack0000000000000124 = 0.0;
  }
  uVar41 = (uint)*(undefined8 *)(lVar26 + 0x18);
  if (uVar41 <= uVar14) goto LAB_05cc45e8;
  lVar21 = lVar27 + uVar40 * 0x178;
  fVar63 = in_stack_000000c0 + in_stack_00000120;
  fVar57 = in_stack_000001b0 + fStack0000000000000124;
  fVar56 = fStack00000000000000b8 + fStack0000000000000100;
  if (*(char *)(lVar21 + 0x170) == '\0') goto LAB_05cc2aec;
  iVar18 = *piVar39;
  if (iVar18 == 0) {
    fVar48 = fmodf(*(float *)((long)unaff_x19 + 0x34c) * (float)(int)uVar4,1.0);
    iVar17 = *(int *)((long)unaff_x19 + 0x344);
    if (iVar17 < 2) {
      if (iVar17 == 0) {
        lVar32 = lVar27 + uVar40 * 0x178;
        *(undefined4 *)(lVar32 + 100) = 0;
        *(undefined4 *)(lVar32 + 0x8c) = 0;
        *(undefined4 *)(lVar32 + 0xb4) = 0x3f800000;
        *(undefined4 *)(lVar32 + 0xdc) = 0x3f800000;
      }
      else if (iVar17 == 1) {
        lVar32 = lVar27 + uVar40 * 0x178;
        fVar49 = *(float *)(lVar32 + 0x48);
        pfVar33 = (float *)(lVar32 + 100);
        if (*(int *)((long)unaff_x19 + 0x29c) == 0x208) {
          lVar32 = lVar27 + uVar40 * 0x178;
          fVar64 = *(float *)(lVar32 + 0x70);
          *pfVar33 = fVar48 + ((in_stack_00000120 + fVar49) - *(float *)(unaff_x19 + 0x9e)) /
                              (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
          *(float *)(lVar32 + 0x8c) =
               fVar48 + ((in_stack_00000120 + fVar64) - *(float *)(unaff_x19 + 0x9e)) /
                        (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
          *(float *)(lVar32 + 0xb4) =
               fVar48 + ((in_stack_00000120 + *(float *)(lVar32 + 0x98)) -
                        *(float *)(unaff_x19 + 0x9e)) /
                        (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
          *(float *)(lVar32 + 0xdc) =
               fVar48 + ((in_stack_00000120 + *(float *)(lVar32 + 0xc0)) -
                        *(float *)(unaff_x19 + 0x9e)) /
                        (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
        }
        else {
          lVar32 = lVar27 + uVar40 * 0x178;
          fVar64 = fVar64 - fVar53;
          fVar61 = *(float *)(lVar32 + 0x70);
          fVar62 = *(float *)(lVar32 + 0x98);
          fVar65 = *(float *)(lVar32 + 0xc0);
          *pfVar33 = fVar48 + (fVar49 - fVar53) / fVar64;
          *(float *)(lVar32 + 0x8c) = fVar48 + (fVar61 - fVar53) / fVar64;
          *(float *)(lVar32 + 0xb4) = fVar48 + (fVar62 - fVar53) / fVar64;
          *(float *)(lVar32 + 0xdc) = fVar48 + (fVar65 - fVar53) / fVar64;
        }
      }
    }
    else if (iVar17 == 2) {
      lVar32 = lVar27 + uVar40 * 0x178;
      *(float *)(lVar32 + 100) =
           fVar48 + ((in_stack_00000120 + *(float *)(lVar32 + 0x48)) - *(float *)(unaff_x19 + 0x9e))
                    / (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
      *(float *)(lVar32 + 0x8c) =
           fVar48 + ((in_stack_00000120 + *(float *)(lVar32 + 0x70)) - *(float *)(unaff_x19 + 0x9e))
                    / (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
      *(float *)(lVar32 + 0xb4) =
           fVar48 + ((in_stack_00000120 + *(float *)(lVar32 + 0x98)) - *(float *)(unaff_x19 + 0x9e))
                    / (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
      *(float *)(lVar32 + 0xdc) =
           fVar48 + ((in_stack_00000120 + *(float *)(lVar32 + 0xc0)) - *(float *)(unaff_x19 + 0x9e))
                    / (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
    }
    else if (iVar17 == 3) {
      iVar17 = (int)unaff_x19[0x69];
      if (iVar17 < 2) {
        if (iVar17 == 0) {
          lVar32 = lVar27 + uVar40 * 0x178;
          *(undefined4 *)(lVar32 + 0x68) = 0;
          *(undefined4 *)(lVar32 + 0x90) = 0x3f800000;
          *(undefined4 *)(lVar32 + 0xb8) = 0;
          *(undefined4 *)(lVar32 + 0xe0) = 0x3f800000;
        }
        else if (iVar17 == 1) {
          lVar32 = lVar27 + uVar40 * 0x178;
          fVar49 = fVar49 - fVar61;
          fVar64 = (*(float *)(lVar32 + 0x74) - fVar61) / fVar49;
          fVar49 = fVar48 + (*(float *)(lVar32 + 0x4c) - fVar61) / fVar49;
          *(float *)(lVar32 + 0x68) = fVar49;
          *(float *)(lVar32 + 0xb8) = fVar49;
          goto LAB_05cc26ec;
        }
      }
      else if (iVar17 == 2) {
        lVar32 = lVar27 + uVar40 * 0x178;
        fVar49 = fVar48 + (*(float *)(lVar32 + 0x4c) - *(float *)((long)unaff_x19 + 0x4f4)) /
                          (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4)
                          );
        *(float *)(lVar32 + 0x68) = fVar49;
        fVar64 = *(float *)((long)unaff_x19 + 0x4f4);
        fVar61 = *(float *)((long)unaff_x19 + 0x4fc);
        *(float *)(lVar32 + 0xb8) = fVar49;
        fVar64 = (*(float *)(lVar32 + 0x74) - fVar64) / (fVar61 - fVar64);
LAB_05cc26ec:
        *(float *)(lVar32 + 0x90) = fVar48 + fVar64;
        *(float *)(lVar32 + 0xe0) = fVar48 + fVar64;
      }
      else if (iVar17 == 3) {
        if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        FUN_05ea2238(*(undefined8 *)
                      Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateLobbyAsServer__,0);
        uVar41 = (uint)*(undefined8 *)(lVar26 + 0x18);
      }
      if (uVar41 <= uVar14) goto LAB_05cc45e8;
      lVar32 = lVar27 + uVar40 * 0x178;
      fVar61 = *(float *)(lVar32 + 0x138);
      fVar64 = (1.0 - (*(float *)(lVar32 + 0x68) + *(float *)(lVar32 + 0x90)) * fVar61) * 0.5;
      fVar49 = fVar48 + *(float *)(lVar32 + 0x68) * fVar61 + fVar64;
      fVar48 = fVar48 + fVar64 + *(float *)(lVar32 + 0x90) * fVar61;
      *(float *)(lVar32 + 100) = fVar49;
      *(float *)(lVar32 + 0x8c) = fVar49;
      *(float *)(lVar32 + 0xb4) = fVar48;
      *(float *)(lVar32 + 0xdc) = fVar48;
    }
    iVar17 = (int)unaff_x19[0x69];
    if (iVar17 < 2) {
      if (iVar17 == 0) {
        if (uVar41 <= uVar14) goto LAB_05cc45e8;
        lVar32 = lVar27 + uVar40 * 0x178;
        *(undefined4 *)(lVar32 + 0x68) = 0;
        *(undefined4 *)(lVar32 + 0x90) = 0x3f800000;
        *(undefined4 *)(lVar32 + 0xb8) = 0x3f800000;
        *(undefined4 *)(lVar32 + 0xe0) = 0;
      }
      else if (iVar17 == 1) {
        if (uVar14 < uVar41) {
          lVar32 = lVar27 + uVar40 * 0x178;
          fVar66 = fVar66 - fVar67;
          fVar48 = (*(float *)(lVar32 + 0x4c) - fVar67) / fVar66;
          fVar66 = (*(float *)(lVar32 + 0x74) - fVar67) / fVar66;
          *(float *)(lVar32 + 0x68) = fVar48;
          goto LAB_05cc2864;
        }
        goto LAB_05cc45e8;
      }
    }
    else if (iVar17 == 2) {
      if (uVar41 <= uVar14) goto LAB_05cc45e8;
      lVar32 = lVar27 + uVar40 * 0x178;
      fVar48 = (*(float *)(lVar32 + 0x4c) - *(float *)((long)unaff_x19 + 0x4f4)) /
               (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4));
      *(float *)(lVar32 + 0x68) = fVar48;
      fVar66 = (*(float *)(lVar32 + 0x74) - *(float *)((long)unaff_x19 + 0x4f4)) /
               (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4));
LAB_05cc2864:
      *(float *)(lVar32 + 0x90) = fVar66;
      *(float *)(lVar32 + 0xb8) = fVar66;
      *(float *)(lVar32 + 0xe0) = fVar48;
    }
    else if (iVar17 == 3) {
      if (uVar41 <= uVar14) goto LAB_05cc45e8;
      lVar32 = lVar27 + uVar40 * 0x178;
      fVar64 = *(float *)(lVar32 + 0x138);
      fVar49 = (1.0 - (*(float *)(lVar32 + 100) + *(float *)(lVar32 + 0xb4)) / fVar64) * 0.5;
      fVar48 = *(float *)(lVar32 + 100) / fVar64 + fVar49;
      fVar49 = fVar49 + *(float *)(lVar32 + 0xb4) / fVar64;
      *(float *)(lVar32 + 0x68) = fVar48;
      *(float *)(lVar32 + 0xe0) = fVar48;
      *(float *)(lVar32 + 0x90) = fVar49;
      *(float *)(lVar32 + 0xb8) = fVar49;
    }
    if (uVar41 <= uVar14) goto LAB_05cc45e8;
    lVar32 = lVar27 + uVar40 * 0x178;
    fVar48 = ABS(auVar51._0_4_) * *(float *)(lVar32 + 0x13c) * (1.0 - *(float *)(unaff_x19 + 0x60));
    if ((*(char *)(lVar32 + 0x34) == '\0') &&
       ((*(byte *)(lVar27 + uVar40 * 0x178 + 0x16c) & 1) != 0)) {
      fVar48 = -fVar48;
    }
    lVar32 = lVar27 + uVar40 * 0x178;
    *(float *)(lVar32 + 0x60) = fVar48;
    *(float *)(lVar32 + 0x88) = fVar48;
    *(float *)(lVar32 + 0xb0) = fVar48;
    *(float *)(lVar32 + 0xd8) = fVar48;
  }
  if (((int)uVar14 < (int)unaff_x19[0x6c]) &&
     (iStack00000000000000ec < *(int *)((long)unaff_x19 + 0x364))) {
    if (((int)unaff_x19[0x6d] <= (int)uVar4) || ((int)unaff_x19[0x62] == 5)) {
      if (((int)uVar4 < (int)unaff_x19[0x6d]) && ((int)unaff_x19[0x62] == 5)) {
        if (uVar14 < uVar41) {
          if (*(uint *)(lVar27 + uVar40 * 0x178 + 0x40) == in_stack_00000040._4_4_) {
            lVar21 = lVar27 + uVar40 * 0x178;
            *(ulong *)(lVar21 + 0x48) =
                 CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar21 + 0x48) >> 0x20),
                          fVar63 + (float)*(undefined8 *)(lVar21 + 0x48));
            *(float *)(lVar21 + 0x50) = fVar56 + *(float *)(lVar21 + 0x50);
            *(ulong *)(lVar21 + 0x70) =
                 CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar21 + 0x70) >> 0x20),
                          fVar63 + (float)*(undefined8 *)(lVar21 + 0x70));
            *(float *)(lVar21 + 0x78) = fVar56 + *(float *)(lVar21 + 0x78);
            *(ulong *)(lVar21 + 0x98) =
                 CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar21 + 0x98) >> 0x20),
                          fVar63 + (float)*(undefined8 *)(lVar21 + 0x98));
            *(float *)(lVar21 + 0xa0) = fVar56 + *(float *)(lVar21 + 0xa0);
            *(ulong *)(lVar21 + 0xc0) =
                 CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar21 + 0xc0) >> 0x20),
                          fVar63 + (float)*(undefined8 *)(lVar21 + 0xc0));
            *(float *)(lVar21 + 200) = fVar56 + *(float *)(lVar21 + 200);
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
    if (uVar41 <= uVar14) goto LAB_05cc45e8;
    lVar21 = lVar27 + uVar40 * 0x178;
    *(ulong *)(lVar21 + 0x48) =
         CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar21 + 0x48) >> 0x20),
                  fVar63 + (float)*(undefined8 *)(lVar21 + 0x48));
    *(float *)(lVar21 + 0x50) = fVar56 + *(float *)(lVar21 + 0x50);
    *(ulong *)(lVar21 + 0x70) =
         CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar21 + 0x70) >> 0x20),
                  fVar63 + (float)*(undefined8 *)(lVar21 + 0x70));
    *(float *)(lVar21 + 0x78) = fVar56 + *(float *)(lVar21 + 0x78);
    *(ulong *)(lVar21 + 0x98) =
         CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar21 + 0x98) >> 0x20),
                  fVar63 + (float)*(undefined8 *)(lVar21 + 0x98));
    *(float *)(lVar21 + 0xa0) = fVar56 + *(float *)(lVar21 + 0xa0);
    *(ulong *)(lVar21 + 0xc0) =
         CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar21 + 0xc0) >> 0x20),
                  fVar63 + (float)*(undefined8 *)(lVar21 + 0xc0));
    *(float *)(lVar21 + 200) = fVar56 + *(float *)(lVar21 + 200);
  }
  else {

    UnityEngine_XR_Interaction_Toolkit_Interactors_XRDirectInteractor_<UpdateCollidersAfterOnTriggerStay>d__36__System_Collections_IEnumerator_get_Current
    :
    if (uVar41 <= uVar14) goto LAB_05cc45e8;
    if (DAT_06a492ef == '\0') {
      FUN_02d4dc40(PTR_DAT_066463e8);
      uVar41 = *(uint *)(lVar26 + 0x18);
      DAT_06a492ef = '\x01';
    }
    puVar10 = PTR_DAT_066463e8;
    uVar58 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_066463e8 + 0xb8) + 1);
    *(undefined8 *)(lVar27 + uVar40 * 0x178 + 0x48) =
         **(undefined8 **)(*(long *)PTR_DAT_066463e8 + 0xb8);
    *(undefined4 *)(lVar27 + uVar40 * 0x178 + 0x50) = uVar58;
    if (uVar41 <= uVar14) goto LAB_05cc45e8;
    lVar32 = lVar27 + uVar40 * 0x178;
    uVar58 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar10 + 0xb8) + 1);
    *(undefined8 *)(lVar32 + 0x70) = **(undefined8 **)(*(long *)puVar10 + 0xb8);
    *(undefined4 *)(lVar32 + 0x78) = uVar58;
    uVar58 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar10 + 0xb8) + 1);
    *(undefined8 *)(lVar32 + 0x98) = **(undefined8 **)(*(long *)puVar10 + 0xb8);
    *(undefined4 *)(lVar32 + 0xa0) = uVar58;
    uVar59 = **(undefined8 **)(*(long *)puVar10 + 0xb8);
    uVar58 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar10 + 0xb8) + 1);
    *(undefined1 *)(lVar21 + 0x170) = 0;
    *(undefined8 *)(lVar32 + 0xc0) = uVar59;
    *(undefined4 *)(lVar32 + 200) = uVar58;
  }
LAB_05cc2a70:
  iVar17 = FUN_05eae77c(0);
  *(bool *)((long)unaff_x19 + 0x174) = iVar17 == 1;
  unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
  if (iVar18 == 0) {
    puVar28 = (undefined8 *)(*unaff_x19 + 0x8d8);
  }
  else {
    if (iVar18 != 1) goto LAB_05cc2aec;
    puVar28 = (undefined8 *)(*unaff_x19 + 0x8f8);
  }
  (*(code *)*puVar28)();
LAB_05cc2aec:
  if ((unaff_x19[0x74] == 0) || (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 == 0))
  goto LAB_05cc446c;
  if (*(uint *)(lVar21 + 0x18) <= uVar14) goto LAB_05cc45e8;
  lVar21 = lVar21 + uVar40 * 0x178;
  uVar59 = *(undefined8 *)(lVar21 + 0x114);
  *(float *)(lVar21 + 0x11c) = fVar56 + *(float *)(lVar21 + 0x11c);
  *(undefined8 *)(lVar21 + 0x114) =
       CONCAT44(fVar57 + (float)((ulong)uVar59 >> 0x20),fVar63 + (float)uVar59);
  if ((unaff_x19[0x74] == 0) || (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 == 0))
  goto LAB_05cc446c;
  if (*(uint *)(lVar21 + 0x18) <= uVar14) goto LAB_05cc45e8;
  lVar21 = lVar21 + uVar40 * 0x178;
  *(ulong *)(lVar21 + 0x108) =
       CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar21 + 0x108) >> 0x20),
                fVar63 + (float)*(undefined8 *)(lVar21 + 0x108));
  *(float *)(lVar21 + 0x110) = fVar56 + *(float *)(lVar21 + 0x110);
  if ((unaff_x19[0x74] == 0) || (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 == 0))
  goto LAB_05cc446c;
  if (*(uint *)(lVar21 + 0x18) <= uVar14) goto LAB_05cc45e8;
  lVar21 = lVar21 + uVar40 * 0x178;
  *(ulong *)(lVar21 + 0x120) =
       CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar21 + 0x120) >> 0x20),
                fVar63 + (float)*(undefined8 *)(lVar21 + 0x120));
  *(float *)(lVar21 + 0x128) = fVar56 + *(float *)(lVar21 + 0x128);
  if ((unaff_x19[0x74] == 0) || (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 == 0))
  goto LAB_05cc446c;
  if (*(uint *)(lVar21 + 0x18) <= uVar14) goto LAB_05cc45e8;
  lVar21 = lVar21 + uVar40 * 0x178;
  uVar59 = *(undefined8 *)(lVar21 + 300);
  *(float *)(lVar21 + 0x134) = fVar56 + *(float *)(lVar21 + 0x134);
  *(undefined8 *)(lVar21 + 300) =
       CONCAT44(fVar57 + (float)((ulong)uVar59 >> 0x20),fVar63 + (float)uVar59);
  lVar21 = unaff_x19[0x74];
  if ((lVar21 == 0) || (lVar32 = *(long *)(lVar21 + 0x38), lVar32 == 0)) goto LAB_05cc446c;
  uVar41 = *(uint *)(lVar32 + 0x18);
  if (uVar41 <= uVar14) goto LAB_05cc45e8;
  lVar36 = lVar32 + 0x20 + uVar40 * 0x178;
  uVar59 = *(undefined8 *)(lVar36 + 0x118);
  auVar52._0_8_ = CONCAT44(fVar63 + (float)((ulong)uVar59 >> 0x20),fVar63 + (float)uVar59);
  auVar52._8_4_ = fVar57 + (float)*(undefined8 *)(lVar36 + 0x120);
  auVar52._12_4_ = fVar57 + (float)((ulong)*(undefined8 *)(lVar36 + 0x120) >> 0x20);
  *(float *)(lVar36 + 0x128) = fVar57 + *(float *)(lVar36 + 0x128);
  *(long *)(lVar36 + 0x120) = auVar52._8_8_;
  *(undefined8 *)(lVar36 + 0x118) = auVar52._0_8_;
  if (uVar4 == uVar30) {
    uVar30 = *(int *)(in_stack_000001a8 + 7) - 1;
    if (uVar14 == uVar30) goto LAB_05cc2cfc;
  }
  else {
    lVar21 = *(long *)(lVar21 + 0x50);
    if (lVar21 == 0) goto LAB_05cc446c;
    if (*(uint *)(lVar21 + 0x18) <= uVar30) goto LAB_05cc45e8;
    lVar36 = lVar21 + 0x20 + (long)(int)uVar30 * 0x60;
    fVar49 = fVar57 + *(float *)(lVar36 + 0x38);
    *(ulong *)(lVar36 + 0x30) =
         CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar36 + 0x30) >> 0x20),
                  fVar57 + (float)*(undefined8 *)(lVar36 + 0x30));
    *(float *)(lVar36 + 0x38) = fVar49;
    *(float *)(lVar36 + 0x3c) = fVar63 + *(float *)(lVar36 + 0x3c);
    if (uVar41 <= *(uint *)(lVar36 + 0x18)) goto LAB_05cc45e8;
    lVar21 = lVar21 + 0x20 + (long)(int)uVar30 * 0x60;
    uVar58 = *(undefined4 *)(lVar32 + 0x20 + (long)(int)*(uint *)(lVar36 + 0x18) * 0x178 + 0xf4);
    *(float *)(lVar21 + 0x54) = fVar49;
    *(undefined4 *)(lVar21 + 0x50) = uVar58;
    lVar21 = unaff_x19[0x74];
    if ((lVar21 == 0) || (lVar32 = *(long *)(lVar21 + 0x50), lVar32 == 0)) goto LAB_05cc446c;
    if (*(uint *)(lVar32 + 0x18) <= uVar30) goto LAB_05cc45e8;
    lVar21 = *(long *)(lVar21 + 0x38);
    if (lVar21 == 0) goto LAB_05cc446c;
    uVar41 = *(uint *)(lVar32 + 0x20 + (long)(int)uVar30 * 0x60 + 0x24);
    if (*(uint *)(lVar21 + 0x18) <= uVar41) goto LAB_05cc45e8;
    lVar32 = lVar32 + 0x20 + (long)(int)uVar30 * 0x60;
    *(undefined4 *)(lVar32 + 0x58) = *(undefined4 *)(lVar21 + (long)(int)uVar41 * 0x178 + 0x120);
    *(undefined4 *)(lVar32 + 0x5c) = *(undefined4 *)(lVar32 + 0x30);
    uVar30 = *(int *)(in_stack_000001a8 + 7) - 1;
LAB_05cc2cfc:
    if (uVar14 == uVar30) {
      lVar21 = unaff_x19[0x74];
      if ((lVar21 == 0) || (lVar32 = *(long *)(lVar21 + 0x50), lVar32 == 0)) goto LAB_05cc446c;
      if (*(uint *)(lVar32 + 0x18) <= uVar4) goto LAB_05cc45e8;
      lVar36 = lVar32 + 0x20 + (long)(int)uVar4 * 0x60;
      fVar49 = fVar57 + *(float *)(lVar36 + 0x38);
      *(ulong *)(lVar36 + 0x30) =
           CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar36 + 0x30) >> 0x20),
                    fVar57 + (float)*(undefined8 *)(lVar36 + 0x30));
      *(float *)(lVar36 + 0x38) = fVar49;
      *(float *)(lVar36 + 0x3c) = fVar63 + *(float *)(lVar36 + 0x3c);
      lVar21 = *(long *)(lVar21 + 0x38);
      if (lVar21 == 0) goto LAB_05cc446c;
      uVar30 = *(uint *)(lVar32 + 0x20 + (long)(int)uVar4 * 0x60 + 0x18);
      if (*(uint *)(lVar21 + 0x18) <= uVar30) goto LAB_05cc45e8;
      *(undefined4 *)(lVar36 + 0x50) = *(undefined4 *)(lVar21 + (long)(int)uVar30 * 0x178 + 0x114);
      *(float *)(lVar36 + 0x54) = fVar49;
      lVar21 = unaff_x19[0x74];
      if ((lVar21 == 0) || (lVar32 = *(long *)(lVar21 + 0x50), lVar32 == 0)) goto LAB_05cc446c;
      if (*(uint *)(lVar32 + 0x18) <= uVar4) goto LAB_05cc45e8;
      lVar21 = *(long *)(lVar21 + 0x38);
      if (lVar21 == 0) goto LAB_05cc446c;
      uVar30 = *(uint *)(lVar32 + 0x20 + (long)(int)uVar4 * 0x60 + 0x24);
      if (*(uint *)(lVar21 + 0x18) <= uVar30) goto LAB_05cc45e8;
      lVar32 = lVar32 + 0x20 + (long)(int)uVar4 * 0x60;
      *(undefined4 *)(lVar32 + 0x58) = *(undefined4 *)(lVar21 + (long)(int)uVar30 * 0x178 + 0x120);
      *(undefined4 *)(lVar32 + 0x5c) = *(undefined4 *)(lVar32 + 0x30);
    }
  }
  if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar20 = FUN_04f74b44(uVar44,0);
  if (((((uVar20 & 1) == 0) && (1 < uVar44 - 0x2010)) && (uVar44 != 0xad)) && (uVar44 != 0x2d)) {
    if (bVar8) {
      if (((uVar14 != 0) && ((int)uVar14 < (int)(*(uint *)(lVar26 + 0x18) - 1))) &&
         (((int)uVar14 < *(int *)(in_stack_000001a8 + 7) && ((uVar44 == 0x2019 || (uVar44 == 0x27)))
          ))) {
        if (*(uint *)(lVar26 + 0x18) <= uVar14 - 1) goto LAB_05cc45e8;
        uVar5 = *(undefined2 *)(lVar27 + (ulong)(uVar14 - 1) * 0x178 + 4);
        if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar20 = FUN_04f74b44(uVar5,0);
        if ((uVar20 & 1) != 0) {
          if (*(uint *)(lVar26 + 0x18) <= uVar14 + 1) goto LAB_05cc45e8;
          uVar5 = *(undefined2 *)(lVar27 + (ulong)(uVar14 + 1) * 0x178 + 4);
          if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar20 = FUN_04f74b44(uVar5,0);
          unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
          if ((uVar20 & 1) != 0) goto LAB_05cc2ffc;
        }
      }
LAB_05cc3d38:
      if (uVar14 == *(int *)(in_stack_000001a8 + 7) - 1U) {
        if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar20 = FUN_04f74b44(uVar44,0);
        uVar30 = uVar14;
        if ((uVar20 & 1) == 0) goto LAB_05cc3d74;
      }
      else {
LAB_05cc3d74:
        uVar30 = uVar14 - 1;
      }
      lVar21 = unaff_x19[0x74];
      if (lVar21 != 0) {
        lVar32 = *(long *)(lVar21 + 0x40);
        if (lVar32 != 0) {
          uVar41 = *(uint *)(lVar21 + 0x24);
          iVar18 = *(int *)(lVar32 + 0x18);
          if (iVar18 < (int)(uVar41 + 1)) {
            if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListSecretSummaries__
                        + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            FUN_0338de80((long *)(lVar21 + 0x40),iVar18 + 1,
                         *(undefined8 *)
                          Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListQosServersForTitle__);
            lVar21 = unaff_x19[0x74];
            if (lVar21 == 0) goto LAB_05cc446c;
          }
          unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
          lVar21 = *(long *)(lVar21 + 0x40);
          if (lVar21 != 0) {
            if (uVar41 < *(uint *)(lVar21 + 0x18)) {
              lVar21 = lVar21 + (long)(int)uVar41 * 0x18;
              *(long **)(lVar21 + 0x20) = unaff_x19;
              *(uint *)(lVar21 + 0x28) = uVar15;
              *(uint *)(lVar21 + 0x2c) = uVar30;
              *(uint *)(lVar21 + 0x30) = (uVar30 - uVar15) + 1;
              thunk_FUN_02dc1ef0();
              lVar21 = unaff_x19[0x74];
              if (lVar21 != 0) {
                lVar32 = *(long *)(lVar21 + 0x50);
                *(int *)(lVar21 + 0x24) = *(int *)(lVar21 + 0x24) + 1;
                if (lVar32 != 0) {
                  if (uVar4 < *(uint *)(lVar32 + 0x18)) {
                    bVar8 = false;
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
    if (uVar14 == 0) {
      if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      bVar13 = FUN_04f74a9c(uVar44,0);
      if ((((uVar44 == 0x200b | bVar13 ^ 0xff | bVar12) & 1) != 0) ||
         (*(int *)(in_stack_000001a8 + 7) == 1)) goto LAB_05cc3d38;
    }
    bVar8 = false;
  }
  else {
    if (!bVar8) {
      uVar15 = uVar14;
    }
    if (uVar14 != *(int *)(in_stack_000001a8 + 7) - 1U) {
LAB_05cc2ffc:
      bVar8 = true;
      goto LAB_05cc3004;
    }
    lVar21 = unaff_x19[0x74];
    if (lVar21 == 0) goto LAB_05cc446c;
    lVar32 = *(long *)(lVar21 + 0x40);
    if (lVar32 == 0) goto LAB_05cc446c;
    uVar30 = *(uint *)(lVar21 + 0x24);
    iVar18 = *(int *)(lVar32 + 0x18);
    if (iVar18 < (int)(uVar30 + 1)) {
      if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListSecretSummaries__ +
                  0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      FUN_0338de80((long *)(lVar21 + 0x40),iVar18 + 1,
                   *(undefined8 *)
                    Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListQosServersForTitle__);
      lVar21 = unaff_x19[0x74];
      if (lVar21 == 0) goto LAB_05cc446c;
    }
    unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
    lVar21 = *(long *)(lVar21 + 0x40);
    if (lVar21 == 0) goto LAB_05cc446c;
    if (*(uint *)(lVar21 + 0x18) <= uVar30) goto LAB_05cc45e8;
    lVar21 = lVar21 + (long)(int)uVar30 * 0x18;
    *(long **)(lVar21 + 0x20) = unaff_x19;
    *(uint *)(lVar21 + 0x28) = uVar15;
    *(uint *)(lVar21 + 0x2c) = uVar14;
    *(uint *)(lVar21 + 0x30) = (uVar14 - uVar15) + 1;
    thunk_FUN_02dc1ef0();
    lVar21 = unaff_x19[0x74];
    if (lVar21 == 0) goto LAB_05cc446c;
    lVar32 = *(long *)(lVar21 + 0x50);
    *(int *)(lVar21 + 0x24) = *(int *)(lVar21 + 0x24) + 1;
    if (lVar32 == 0) goto LAB_05cc446c;
    if (*(uint *)(lVar32 + 0x18) <= uVar4) goto LAB_05cc45e8;
    bVar8 = true;
LAB_05cc2f18:
    lVar32 = lVar32 + (long)(int)uVar4 * 0x60;
    iStack00000000000000ec = iStack00000000000000ec + 1;
    *(int *)(lVar32 + 0x34) = *(int *)(lVar32 + 0x34) + 1;
  }
LAB_05cc3004:
  lVar21 = unaff_x19[0x74];
  if ((lVar21 == 0) || (lVar32 = *(long *)(lVar21 + 0x38), lVar32 == 0)) goto LAB_05cc446c;
  if (*(uint *)(lVar32 + 0x18) <= uVar14) goto LAB_05cc45e8;
  lVar36 = lVar32 + 0x20;
  if ((*(byte *)(lVar36 + uVar40 * 0x178 + 0x16c) >> 2 & 1) == 0) {
    if (bVar9) {
      if (*(uint *)(lVar32 + 0x18) <= (uint)((long)(int)uVar14 + -1)) goto LAB_05cc45e8;
      lVar36 = lVar36 + ((long)(int)uVar14 + -1) * 0x178;
      lVar32 = *unaff_x19;
      uVar58 = *(undefined4 *)(lVar36 + 0x100);
      uVar60 = *(undefined4 *)(lVar36 + 0x13c);
LAB_05cc32b0:
      pcVar29 = *(code **)(lVar32 + 0x908);
LAB_05cc32b8:
      (*pcVar29)(fStack0000000000000070,fStack0000000000000068,uStack000000000000006c,uVar58,
                 fStack0000000000000140,0,in_stack_00000078._4_4_,uVar60);
LAB_05cc32f4:
      lVar21 = *unaff_x28;
      if (*(int *)(lVar21 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar21 = *unaff_x28;
      }
      fVar47 = 0.0;
      fStack000000000000013c = 0.0;
      fStack0000000000000140 = *(float *)(*(long *)(lVar21 + 0xb8) + 0x1730);
    }
    bVar9 = false;
  }
  else {
    lVar32 = lVar36 + uVar40 * 0x178;
    *(int *)(lVar32 + 0x148) = iVar16;
    iVar18 = *(int *)(lVar32 + 0x40);
    if ((((int)unaff_x19[0x6c] < (int)uVar14) || ((int)unaff_x19[0x6d] < (int)uVar4)) ||
       (((int)unaff_x19[0x62] == 5 && (iVar18 + 1 != (int)unaff_x19[0x6e])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar12 & 1) == 0 && uVar44 != 0x200b) {
      fVar63 = *(float *)(lVar36 + uVar40 * 0x178 + 0x13c);
      if (fVar47 <= fVar63) {
        fVar47 = fVar63;
      }
      if (fStack000000000000013c <= ABS(fVar48)) {
        fStack000000000000013c = ABS(fVar48);
      }
      if ((float)iVar18 != fStack0000000000000064) {
        if (*(int *)(*unaff_x28 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar21 = unaff_x19[0x74];
          if (lVar21 == 0) goto LAB_05cc446c;
          lVar32 = *(long *)(*unaff_x28 + 0xb8);
        }
        else {
          lVar32 = *(long *)(*unaff_x28 + 0xb8);
        }
        fStack0000000000000140 = *(float *)(lVar32 + 0x1730);
      }
      lVar21 = *(long *)(lVar21 + 0x38);
      if (lVar21 == 0) goto LAB_05cc446c;
      if (*(uint *)(lVar21 + 0x18) <= uVar14) goto LAB_05cc45e8;
      if (unaff_x19[0x1f] == 0) goto LAB_05cc446c;
      fVar49 = *(float *)(lVar21 + uVar40 * 0x178 + 0x144);
      fVar63 = (float)FUN_05f84bac(unaff_x19[0x1f] + 0x28,0);
      fVar49 = fVar49 + fVar47 * fVar63;
      fStack0000000000000064 = (float)iVar18;
      if (fVar49 <= fStack0000000000000140) {
        fStack0000000000000140 = fVar49;
      }
    }
    fVar63 = fVar47;
    if (!bVar9) {
      bVar9 = false;
      if ((bVar1) && ((int)uVar14 <= (int)uVar3)) {
        if ((uVar44 & 0xfffe) == 10) goto LAB_05cc3324;
        if (uVar44 != 0xd) {
          if (uVar14 == uVar3) {
            if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            uVar20 = FUN_04f758f0(uVar44,0);
            if ((uVar20 & 1) != 0) goto LAB_05cc3208;
          }
          if ((unaff_x19[0x74] != 0) && (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 != 0)) {
            if (uVar14 < *(uint *)(lVar21 + 0x18)) {
              lVar21 = lVar21 + uVar40 * 0x178;
              in_stack_00000078._4_4_ = *(float *)(lVar21 + 0x15c);
              fVar49 = fVar48;
              fVar63 = in_stack_00000078._4_4_;
              if (fVar47 != 0.0) {
                fVar49 = fStack000000000000013c;
                fVar63 = fVar47;
              }
              uStack000000000000006c = 0;
              fStack0000000000000070 = *(float *)(lVar21 + 0x114);
              uVar46 = *(undefined4 *)(lVar21 + 0x164);
              fStack0000000000000068 = fStack0000000000000140;
              fStack000000000000013c = fVar49;
              goto LAB_05cc3274;
            }
            goto LAB_05cc45e8;
          }
          goto LAB_05cc446c;
        }
      }
LAB_05cc3208:
      bVar9 = false;
      goto LAB_05cc3324;
    }
LAB_05cc3274:
    if (*(int *)(in_stack_000001a8 + 7) == 1) {
      if ((unaff_x19[0x74] != 0) && (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 != 0)) {
        if (uVar14 < *(uint *)(lVar21 + 0x18)) {
          lVar21 = lVar21 + uVar40 * 0x178;
LAB_05cc32a4:
          lVar32 = *unaff_x19;
          uVar58 = *(undefined4 *)(lVar21 + 0x120);
          uVar60 = *(undefined4 *)(lVar21 + 0x15c);
          goto LAB_05cc32b0;
        }
        goto LAB_05cc45e8;
      }
      goto LAB_05cc446c;
    }
    if ((uVar14 == uVar2) || ((int)uVar3 <= (int)uVar14)) {
      lVar21 = unaff_x19[0x74];
      if ((bVar12 & 1) == 0 && uVar44 != 0x200b) {
        if ((lVar21 == 0) || (lVar21 = *(long *)(lVar21 + 0x38), lVar21 == 0)) goto LAB_05cc446c;
        if (*(uint *)(lVar21 + 0x18) <= uVar14) goto LAB_05cc45e8;
        lVar21 = lVar21 + uVar40 * 0x178;
      }
      else {
        if ((lVar21 == 0) || (lVar21 = *(long *)(lVar21 + 0x38), lVar21 == 0)) goto LAB_05cc446c;
        if (*(uint *)(lVar21 + 0x18) <= uVar3) goto LAB_05cc45e8;
        lVar21 = lVar21 + (long)(int)uVar3 * 0x178;
      }
      uVar58 = *(undefined4 *)(lVar21 + 0x120);
      uVar60 = *(undefined4 *)(lVar21 + 0x15c);
      pcVar29 = *(code **)(*unaff_x19 + 0x908);
      goto LAB_05cc32b8;
    }
    if (!bVar1) {
      if ((unaff_x19[0x74] != 0) && (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 != 0)) {
        if ((uint)((long)(int)uVar14 + -1) < *(uint *)(lVar21 + 0x18)) {
          lVar21 = lVar21 + ((long)(int)uVar14 + -1) * 0x178;
          goto LAB_05cc32a4;
        }
        goto LAB_05cc45e8;
      }
      goto LAB_05cc446c;
    }
    fVar47 = fVar63;
    if ((int)uVar14 < *(int *)(in_stack_000001a8 + 7) + -1) {
      if ((unaff_x19[0x74] == 0) || (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 == 0))
      goto LAB_05cc446c;
      if (*(uint *)(lVar21 + 0x18) <= uVar14 + 1) goto LAB_05cc45e8;
      uVar20 = FUN_05cdeba0(uVar46,*(undefined4 *)(lVar21 + (ulong)(uVar14 + 1) * 0x178 + 0x164),0);
      if ((uVar20 & 1) == 0) {
        if ((unaff_x19[0x74] != 0) && (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 != 0)) {
          if (uVar14 < *(uint *)(lVar21 + 0x18)) {
            lVar21 = lVar21 + uVar40 * 0x178;
            (**(code **)(*unaff_x19 + 0x908))
                      (fStack0000000000000070,fStack0000000000000068,uStack000000000000006c,
                       *(undefined4 *)(lVar21 + 0x120),fStack0000000000000140,0,
                       in_stack_00000078._4_4_,*(undefined4 *)(lVar21 + 0x15c));
            unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
            goto LAB_05cc32f4;
          }
          goto LAB_05cc45e8;
        }
        goto LAB_05cc446c;
      }
      bVar9 = true;
      unaff_x28 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
    }
    else {
      bVar9 = true;
    }
  }
LAB_05cc3324:
  if ((unaff_x19[0x74] == 0) || (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 == 0))
  goto LAB_05cc446c;
  if (*(uint *)(lVar21 + 0x18) <= uVar14) goto LAB_05cc45e8;
  if (lVar35 == 0) goto LAB_05cc446c;
  uVar30 = *(uint *)(lVar21 + uVar40 * 0x178 + 0x18c);
  fVar63 = (float)FUN_05f84bbc(lVar35 + 0x28,0);
  if ((uVar30 >> 6 & 1) == 0) {
    if (bVar11) {
      if ((unaff_x19[0x74] != 0) && (lVar35 = *(long *)(unaff_x19[0x74] + 0x38), lVar35 != 0)) {
        if ((uint)((long)(int)uVar14 + -1) < *(uint *)(lVar35 + 0x18)) {
          lVar35 = lVar35 + ((long)(int)uVar14 + -1) * 0x178;
          goto LAB_05cc35d8;
        }
        goto LAB_05cc45e8;
      }
      goto LAB_05cc446c;
    }
LAB_05cc346c:
    bVar11 = false;
  }
  else {
    lVar21 = unaff_x19[0x74];
    if ((lVar21 == 0) || (lVar32 = *(long *)(lVar21 + 0x38), lVar32 == 0)) goto LAB_05cc446c;
    if (*(uint *)(lVar32 + 0x18) <= uVar14) goto LAB_05cc45e8;
    *(int *)(lVar32 + 0x20 + uVar40 * 0x178 + 0x150) = iVar16;
    if ((((int)unaff_x19[0x6c] < (int)uVar14) || ((int)unaff_x19[0x6d] < (int)uVar4)) ||
       (((int)unaff_x19[0x62] == 5 &&
        (*(int *)(lVar32 + 0x20 + uVar40 * 0x178 + 0x40) + 1 != (int)unaff_x19[0x6e])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((((bool)(bVar11 | bVar1 ^ 1U)) || ((int)uVar3 < (int)uVar14)) || ((uVar44 & 0xfffe) == 10))
       || (uVar44 == 0xd)) {
LAB_05cc3464:
      if (!bVar11) goto LAB_05cc346c;
    }
    else {
      if (uVar14 == uVar3) {
        if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar20 = FUN_04f758f0(uVar44,0);
        if ((uVar20 & 1) != 0) goto LAB_05cc3464;
        lVar21 = unaff_x19[0x74];
        if (lVar21 == 0) goto LAB_05cc446c;
      }
      lVar21 = *(long *)(lVar21 + 0x38);
      if (lVar21 == 0) goto LAB_05cc446c;
      if (*(uint *)(lVar21 + 0x18) <= uVar14) goto LAB_05cc45e8;
      lVar21 = lVar21 + uVar40 * 0x178;
      in_stack_000000a0._4_4_ = *(float *)(lVar21 + 0x15c);
      fStack0000000000000098 = fVar63 * in_stack_000000a0._4_4_ + *(float *)(lVar21 + 0x144);
      uStack0000000000000090 = 0;
      fStack000000000000005c = *(float *)(lVar21 + 0x58);
      fStack0000000000000094 = *(float *)(lVar21 + 0x114);
    }
    iVar18 = *(int *)(in_stack_000001a8 + 7);
    if (iVar18 == 1) {
LAB_05cc35ac:
      if ((unaff_x19[0x74] == 0) || (lVar35 = *(long *)(unaff_x19[0x74] + 0x38), lVar35 == 0))
      goto LAB_05cc446c;
      if (*(uint *)(lVar35 + 0x18) <= uVar14) goto LAB_05cc45e8;
      lVar35 = lVar35 + uVar40 * 0x178;
LAB_05cc35d8:
      fVar49 = *(float *)(lVar35 + 0x144);
      lVar21 = *unaff_x19;
      uVar58 = *(undefined4 *)(lVar35 + 0x120);
    }
    else {
      if (uVar14 != uVar2) {
        if (iVar18 <= (int)uVar14) {
LAB_05cc36b0:
          if ((int)uVar14 < iVar18) {
            iVar18 = FUN_05ee6bc0(lVar35,0);
            if (*(uint *)(lVar26 + 0x18) <= uVar14 + 1) goto LAB_05cc45e8;
            lVar35 = *(long *)(lVar27 + (ulong)(uVar14 + 1) * 0x178 + 0x20);
            if (lVar35 == 0) goto LAB_05cc446c;
            iVar17 = FUN_05ee6bc0(lVar35,0);
            if (iVar18 != iVar17) goto LAB_05cc35ac;
          }
          if (bVar1) {
            bVar11 = true;
            goto LAB_05cc3888;
          }
          if ((unaff_x19[0x74] != 0) && (lVar35 = *(long *)(unaff_x19[0x74] + 0x38), lVar35 != 0)) {
            if ((uint)((long)(int)uVar14 + -1) < *(uint *)(lVar35 + 0x18)) {
              lVar35 = lVar35 + ((long)(int)uVar14 + -1) * 0x178;
              goto LAB_05cc35d8;
            }
            goto LAB_05cc45e8;
          }
          goto LAB_05cc446c;
        }
        if ((unaff_x19[0x74] == 0) || (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 == 0))
        goto LAB_05cc446c;
        if (uVar14 + 1 < *(uint *)(lVar21 + 0x18)) {
          if (*(float *)(lVar21 + (ulong)(uVar14 + 1) * 0x178 + 0x58) == fStack000000000000005c) {
            if (*(int *)(*(long *)
                          Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListCertificateSummaries__ +
                        0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            uVar20 = FUN_05cdf0a4(0);
            if ((uVar20 & 1) != 0) {
              iVar18 = *(int *)(in_stack_000001a8 + 7);
              goto LAB_05cc36b0;
            }
          }
          lVar35 = unaff_x19[0x74];
          if ((int)uVar3 < (int)uVar14) goto LAB_05cc3614;
          goto LAB_05cc3810;
        }
        goto LAB_05cc45e8;
      }
      lVar35 = unaff_x19[0x74];
      if ((uVar44 != 0x200b & (bVar12 ^ 0xff)) == 0) {
LAB_05cc3614:
        if ((lVar35 == 0) || (lVar35 = *(long *)(lVar35 + 0x38), lVar35 == 0)) goto LAB_05cc446c;
        if (*(uint *)(lVar35 + 0x18) <= uVar3) goto LAB_05cc45e8;
        lVar35 = lVar35 + (long)(int)uVar3 * 0x178;
      }
      else {
LAB_05cc3810:
        if ((lVar35 == 0) || (lVar35 = *(long *)(lVar35 + 0x38), lVar35 == 0)) goto LAB_05cc446c;
        if (*(uint *)(lVar35 + 0x18) <= uVar14) goto LAB_05cc45e8;
        lVar35 = lVar35 + uVar40 * 0x178;
      }
      fVar49 = *(float *)(lVar35 + 0x144);
      lVar21 = *unaff_x19;
      uVar58 = *(undefined4 *)(lVar35 + 0x120);
    }
    (**(code **)(lVar21 + 0x908))
              (fStack0000000000000094,fStack0000000000000098,uStack0000000000000090,uVar58,
               in_stack_000000a0._4_4_ * fVar63 + fVar49,0,in_stack_000000a0._4_4_,
               in_stack_000000a0._4_4_);
    bVar11 = false;
  }
LAB_05cc3888:
  if ((unaff_x19[0x74] == 0) || (lVar35 = *(long *)(unaff_x19[0x74] + 0x38), lVar35 == 0))
  goto LAB_05cc446c;
  uVar30 = (uint)*(undefined8 *)(lVar35 + 0x18);
  if (uVar30 <= uVar14) goto LAB_05cc45e8;
  if ((*(byte *)(lVar35 + 0x20 + uVar40 * 0x178 + 0x16d) >> 1 & 1) == 0) {
    if (bVar7) {
      (**(code **)(*unaff_x19 + 0x918))();
    }
    bVar7 = false;
  }
  else {
    if ((((int)unaff_x19[0x6c] < (int)uVar14) || ((int)unaff_x19[0x6d] < (int)uVar4)) ||
       (((int)unaff_x19[0x62] == 5 &&
        (*(int *)(lVar35 + 0x20 + uVar40 * 0x178 + 0x40) + 1 != (int)unaff_x19[0x6e])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar7) {
LAB_05cc3a0c:
      if (uVar30 <= uVar14) goto LAB_05cc45e8;
      lVar35 = lVar35 + uVar40 * 0x178;
      in_stack_000001e0 = CONCAT44(in_stack_00001314,in_stack_00001310);
      auVar6._8_4_ = in_stack_00001318;
      auVar6._0_8_ = in_stack_000001e0;
      auVar6._12_4_ = in_stack_0000131c;
      lVar21 = 0x118;
      if ((bVar12 & 1) == 0) {
        lVar21 = 0xf4;
      }
      fVar67 = *(float *)(lVar35 + 0x180);
      fVar57 = *(float *)(lVar35 + 0x184);
      fVar61 = *(float *)(lVar35 + 0x188);
      uVar59 = *(undefined8 *)(lVar35 + 0x178);
      fVar53 = *(float *)(lVar35 + 0x120);
      fVar63 = *(float *)(lVar35 + 0x13c);
      fVar66 = *(float *)(lVar35 + 0x140);
      fVar64 = *(float *)(lVar35 + 0x148);
      fVar49 = *(float *)(lVar35 + lVar21 + 0x20);
      in_stack_000001e8 = auVar6._8_8_;
      in_stack_000001c8 = uVar59;
      fStack00000000000001d0 = fVar67;
      fStack00000000000001d4 = fVar57;
      in_stack_000001d8 = fVar61;
      in_stack_000001f0 = in_stack_00001320;
      uVar40 = FUN_05ce01c8(&stack0x000001e0,&stack0x000001c8,0);
      if ((uVar40 & 1) == 0) {
        if ((bVar12 & 1) == 0) {
          fVar63 = fVar53;
        }
        if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImageTags__
                    + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        fVar49 = fVar49 - in_stack_00001314;
        if (fVar49 <= in_stack_000000e8) {
          in_stack_000000e8 = fVar49;
        }
        if (fStack00000000000000d8 <= fVar63 + in_stack_00001318) {
          fStack00000000000000d8 = fVar63 + in_stack_00001318;
        }
        if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImageTags__
                    + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        fVar64 = fVar64 - in_stack_00001320;
        fVar66 = fVar66 + in_stack_0000131c;
        if (fVar64 <= in_stack_00000110._4_4_) {
          in_stack_00000110._4_4_ = fVar64;
        }
        if (in_stack_000000e0._4_4_ <= fVar66) {
          in_stack_000000e0._4_4_ = fVar66;
        }
      }
      else {
        if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImageTags__
                    + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        in_stack_000000e8 = (fVar49 + (fStack00000000000000d8 - in_stack_00001318)) * 0.5;
        (**(code **)(*unaff_x19 + 0x918))();
        if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImageTags__
                    + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        if ((bVar12 & 1) == 0) {
          fVar63 = fVar53;
        }
        if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImageTags__
                    + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        in_stack_00000110._4_4_ = fVar64 - fVar61;
        fStack00000000000000d8 = fVar67 + fVar63;
        in_stack_00001310 = (undefined4)uVar59;
        in_stack_00001314 = (float)((ulong)uVar59 >> 0x20);
        in_stack_000000e0._4_4_ = fVar66 + fVar57;
        in_stack_00001318 = fVar67;
        in_stack_0000131c = fVar57;
        in_stack_00001320 = fVar61;
      }
      if (((*(int *)(in_stack_000001a8 + 7) != 1) && (uVar14 != uVar2)) &&
         (((int)uVar14 < (int)uVar3 && (bVar1)))) {
        bVar7 = true;
        goto LAB_05cc3c48;
      }
      (**(code **)(*unaff_x19 + 0x918))();
    }
    else {
      bVar7 = false;
      if ((((!bVar1) || ((int)uVar3 < (int)uVar14)) || ((uVar44 & 0xfffe) == 10)) || (uVar44 == 0xd)
         ) goto LAB_05cc3c48;
      if (uVar14 != uVar3) {
LAB_05cc398c:
        lVar21 = *unaff_x28;
        if (*(int *)(lVar21 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar21 = *unaff_x28;
        }
        if ((unaff_x19[0x74] != 0) && (lVar35 = *(long *)(unaff_x19[0x74] + 0x38), lVar35 != 0)) {
          uVar30 = (uint)*(undefined8 *)(lVar35 + 0x18);
          if (uVar14 < uVar30) {
            lVar32 = *(long *)(lVar21 + 0xb8);
            lVar21 = lVar35 + uVar40 * 0x178;
            fStack00000000000000d8 = *(float *)(lVar32 + 0x1728);
            in_stack_00001320 = *(float *)(lVar21 + 0x188);
            in_stack_000000e8 = *(float *)(lVar32 + 0x1720);
            in_stack_000000e0._4_4_ = *(float *)(lVar32 + 0x172c);
            in_stack_00000110._4_4_ = *(float *)(lVar32 + 0x1724);
            in_stack_00001318 = (float)*(undefined8 *)(lVar21 + 0x180);
            in_stack_0000131c = (float)((ulong)*(undefined8 *)(lVar21 + 0x180) >> 0x20);
            in_stack_00001310 = (undefined4)*(undefined8 *)(lVar21 + 0x178);
            in_stack_00001314 = (float)((ulong)*(undefined8 *)(lVar21 + 0x178) >> 0x20);
            goto LAB_05cc3a0c;
          }
          goto LAB_05cc45e8;
        }
        goto LAB_05cc446c;
      }
      if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar20 = FUN_04f758f0(uVar44,0);
      if ((uVar20 & 1) == 0) goto LAB_05cc398c;
    }
    bVar7 = false;
  }
LAB_05cc3c48:
  iVar18 = *(int *)(in_stack_000001a8 + 7);
  uVar14 = uVar14 + 1;
  uVar30 = uVar4;
  if (iVar18 <= (int)uVar14) goto LAB_05cc4014;
  goto LAB_05cc1fd0;
LAB_05cc4014:
  lVar26 = unaff_x19[0x74];
  if (lVar26 != 0) {
    iVar17 = uVar4 + 1;
    plVar43 = (long *)PTR_DAT_06649d28;
LAB_05cc4038:
    lVar27 = *(long *)(lVar26 + 0x60);
    if (lVar27 != 0) {
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0xd4)) {
LAB_05cc45e8:
                    /* WARNING: Subroutine does not return */
        FUN_02d4def0();
      }
      *(int *)(lVar27 + (long)(int)*(uint *)(unaff_x19 + 0xd4) * 0x50 + 0x28) = iVar16;
      *(int *)(lVar26 + 0x18) = iVar18;
      lVar27 = unaff_x19[0xd7];
      *(int *)(lVar26 + 0x2c) = iVar17;
      if (iVar18 < 1 || iStack00000000000000ec == 0) {
        iStack00000000000000ec = 1;
      }
      *(int *)(lVar26 + 0x1c) = (int)lVar27;
      *(int *)(lVar26 + 0x24) = iStack00000000000000ec;
      *(int *)(lVar26 + 0x30) = *(int *)((long)unaff_x19 + 0x4c4) + 1;
      if (((int)unaff_x19[0x6a] != 0xff) ||
         (uVar40 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar40 & 1) == 0)) {
LAB_05cc1a38:
        if (*(int *)(*(long *)PTR_DAT_06649b28 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        FUN_05cde0f8();
        return;
      }
      lVar26 = unaff_x19[0xde];
      if (lVar26 != 0) {
        (**(code **)(lVar26 + 0x18))
                  (*(undefined8 *)(lVar26 + 0x40),unaff_x19[0x74],*(undefined8 *)(lVar26 + 0x28));
      }
      if (*(int *)((long)unaff_x19 + 0x354) != 0) {
        if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x60), lVar26 == 0))
        goto LAB_05cc446c;
        if (*(int *)(*plVar43 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        if (*(int *)(lVar26 + 0x18) == 0) goto LAB_05cc45e8;
        FUN_05d29fd4(lVar26 + 0x20,1,0);
      }
      if (unaff_x19[0x7b] != 0) {
        FUN_05ebda30(unaff_x19[0x7b],0);
        if ((unaff_x19[0x74] != 0) && (lVar26 = *(long *)(unaff_x19[0x74] + 0x60), lVar26 != 0)) {
          if (*(int *)(lVar26 + 0x18) == 0) goto LAB_05cc45e8;
          if (unaff_x19[0x7b] != 0) {
            UnityEngine_TextCore_Text_TextGenerator_SpecialCharacter___ctor
                      (unaff_x19[0x7b],*(undefined8 *)(lVar26 + 0x30),0);
            if ((unaff_x19[0x74] != 0) && (lVar26 = *(long *)(unaff_x19[0x74] + 0x60), lVar26 != 0))
            {
              if (*(int *)(lVar26 + 0x18) == 0) goto LAB_05cc45e8;
              if (unaff_x19[0x7b] != 0) {
                FUN_05ebc96c(unaff_x19[0x7b],0,*(undefined8 *)(lVar26 + 0x48),0);
                if ((unaff_x19[0x74] != 0) &&
                   (lVar26 = *(long *)(unaff_x19[0x74] + 0x60), lVar26 != 0)) {
                  if (*(int *)(lVar26 + 0x18) == 0) goto LAB_05cc45e8;
                  if (unaff_x19[0x7b] != 0) {
                    FUN_05ebc06c(unaff_x19[0x7b],*(undefined8 *)(lVar26 + 0x50),0);
                    if ((unaff_x19[0x74] != 0) &&
                       (lVar26 = *(long *)(unaff_x19[0x74] + 0x60), lVar26 != 0)) {
                      if (*(int *)(lVar26 + 0x18) == 0) goto LAB_05cc45e8;
                      if (unaff_x19[0x7b] != 0) {
                        FUN_05ebc120(unaff_x19[0x7b],*(undefined8 *)(lVar26 + 0x58),0);
                        if (unaff_x19[0x7b] != 0) {
                          FUN_05ebd970(unaff_x19[0x7b],0);
                          lVar26 = unaff_x19[0x74];
                          if (lVar26 != 0) {
                            lVar35 = 0;
                            lVar27 = 0;
                            do {
                              uVar40 = lVar27 + 1;
                              if ((long)*(int *)(lVar26 + 0x34) <= (long)uVar40) goto LAB_05cc1a38;
                              lVar26 = *(long *)(lVar26 + 0x60);
                              if (lVar26 == 0) break;
                              if (*(int *)(*plVar43 + 0xe4) == 0) {
                                thunk_FUN_02dabd98();
                              }
                              if (*(uint *)(lVar26 + 0x18) <= uVar40) goto LAB_05cc45e8;
                              FUN_05d29eb0(lVar26 + lVar35 + 0x70,0);
                              lVar26 = unaff_x19[0xe4];
                              if (lVar26 == 0) break;
                              if (*(uint *)(lVar26 + 0x18) <= uVar40) goto LAB_05cc45e8;
                              uVar59 = *(undefined8 *)(lVar26 + lVar27 * 8 + 0x28);
                              if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
                                thunk_FUN_02dabd98();
                              }
                              uVar20 = FUN_05ee2f7c(uVar59,0,0);
                              if ((uVar20 & 1) == 0) {
                                if (*(int *)((long)unaff_x19 + 0x354) != 0) {
                                  if ((unaff_x19[0x74] == 0) ||
                                     (lVar26 = *(long *)(unaff_x19[0x74] + 0x60), lVar26 == 0))
                                  break;
                                  if (*(int *)(*plVar43 + 0xe4) == 0) {
                                    thunk_FUN_02dabd98();
                                  }
                                  if (*(uint *)(lVar26 + 0x18) <= uVar40) goto LAB_05cc45e8;
                                  FUN_05d29fd4(lVar26 + lVar35 + 0x70,1,0);
                                }
                                lVar26 = unaff_x19[0xe4];
                                if (lVar26 == 0) break;
                                if (*(uint *)(lVar26 + 0x18) <= uVar40) goto LAB_05cc45e8;
                                lVar26 = *(long *)(lVar26 + lVar27 * 8 + 0x28);
                                if (lVar26 == 0) break;
                                lVar26 = FUN_05d3308c(lVar26,0);
                                if ((unaff_x19[0x74] == 0) ||
                                   (lVar21 = *(long *)(unaff_x19[0x74] + 0x60), lVar21 == 0)) break;
                                if (*(uint *)(lVar21 + 0x18) <= uVar40) goto LAB_05cc45e8;
                                if (lVar26 == 0) break;
                                UnityEngine_TextCore_Text_TextGenerator_SpecialCharacter___ctor
                                          (lVar26,*(undefined8 *)(lVar21 + lVar35 + 0x80),0);
                                lVar26 = unaff_x19[0xe4];
                                if (lVar26 == 0) break;
                                if (*(uint *)(lVar26 + 0x18) <= uVar40) goto LAB_05cc45e8;
                                lVar26 = *(long *)(lVar26 + lVar27 * 8 + 0x28);
                                if (lVar26 == 0) break;
                                lVar26 = FUN_05d3308c(lVar26,0);
                                if ((unaff_x19[0x74] == 0) ||
                                   (lVar21 = *(long *)(unaff_x19[0x74] + 0x60), lVar21 == 0)) break;
                                if (*(uint *)(lVar21 + 0x18) <= uVar40) goto LAB_05cc45e8;
                                if (lVar26 == 0) break;
                                FUN_05ebc96c(lVar26,0,*(undefined8 *)(lVar21 + lVar35 + 0x98),0);
                                lVar26 = unaff_x19[0xe4];
                                if (lVar26 == 0) break;
                                if (*(uint *)(lVar26 + 0x18) <= uVar40) goto LAB_05cc45e8;
                                lVar26 = *(long *)(lVar26 + lVar27 * 8 + 0x28);
                                if (lVar26 == 0) break;
                                lVar26 = FUN_05d3308c(lVar26,0);
                                if ((unaff_x19[0x74] == 0) ||
                                   (lVar21 = *(long *)(unaff_x19[0x74] + 0x60), lVar21 == 0)) break;
                                if (*(uint *)(lVar21 + 0x18) <= uVar40) goto LAB_05cc45e8;
                                if (lVar26 == 0) break;
                                FUN_05ebc06c(lVar26,*(undefined8 *)(lVar21 + lVar35 + 0xa0),0);
                                lVar26 = unaff_x19[0xe4];
                                if (lVar26 == 0) break;
                                if (*(uint *)(lVar26 + 0x18) <= uVar40) goto LAB_05cc45e8;
                                lVar26 = *(long *)(lVar26 + lVar27 * 8 + 0x28);
                                if (lVar26 == 0) break;
                                lVar26 = FUN_05d3308c(lVar26,0);
                                if ((unaff_x19[0x74] == 0) ||
                                   (lVar21 = *(long *)(unaff_x19[0x74] + 0x60), lVar21 == 0)) break;
                                if (*(uint *)(lVar21 + 0x18) <= uVar40) goto LAB_05cc45e8;
                                if (lVar26 == 0) break;
                                FUN_05ebc120(lVar26,*(undefined8 *)(lVar21 + lVar35 + 0xa8),0);
                                lVar26 = unaff_x19[0xe4];
                                if (lVar26 == 0) break;
                                if (*(uint *)(lVar26 + 0x18) <= uVar40) goto LAB_05cc45e8;
                                lVar26 = *(long *)(lVar26 + lVar27 * 8 + 0x28);
                                if ((lVar26 == 0) || (lVar26 = FUN_05d3308c(lVar26,0), lVar26 == 0))
                                break;
                                FUN_05ebd970(lVar26,0);
                              }
                              lVar26 = unaff_x19[0x74];
                              lVar27 = lVar27 + 1;
                              lVar35 = lVar35 + 0x50;
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
LAB_05cc446c:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


