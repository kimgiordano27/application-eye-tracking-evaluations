/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor$$UnityEngine.XR.Interaction.Toolkit.Interactors.IXRSelectInteractor.OnSelectEntering
ENTRY_POINT: 06039228
PROGRAM: beastcraft-libil2cpp.so
SCORE: 71
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: validity_gate;ray_interaction;ui_interaction;frame_behavior;keyword_support;attempted_use
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__UnityEngine_XR_Interaction_Toolkit_Interactors_IXRSelectInteractor_OnSelectEntering
               (void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined *puVar8;
  bool bVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  undefined1 uVar21;
  char cVar22;
  float in_w8;
  long *plVar23;
  long lVar24;
  float *pfVar25;
  undefined8 *puVar26;
  code *pcVar27;
  float in_w9;
  long lVar28;
  float *pfVar29;
  long lVar30;
  long lVar31;
  long in_x10;
  int in_w11;
  uint uVar32;
  long *plVar33;
  long lVar34;
  float *in_x12;
  long *unaff_x19;
  ulong uVar35;
  uint unaff_w21;
  float unaff_w22;
  int iVar36;
  uint unaff_w23;
  float *unaff_x24;
  int *piVar37;
  int unaff_w25;
  ulong uVar38;
  uint uVar39;
  ulong uVar40;
  long *plVar41;
  undefined2 uVar42;
  undefined1 *unaff_x28;
  uint uVar43;
  long *unaff_x29;
  ushort uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined4 uVar49;
  float fVar50;
  float fVar51;
  undefined8 uVar52;
  float fVar55;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar56;
  undefined8 uVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar60;
  undefined4 uVar61;
  float fVar62;
  float fVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  undefined8 in_stack_00000018;
  int iStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float in_stack_00000030;
  uint uStack0000000000000040;
  float fStack0000000000000044;
  ulong in_stack_00000048;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  uint uStack0000000000000060;
  float fStack0000000000000064;
  undefined4 uStack0000000000000068;
  float fStack000000000000006c;
  undefined4 uStack0000000000000084;
  undefined4 uStack0000000000000088;
  float fStack0000000000000094;
  float fStack0000000000000098;
  float fStack00000000000000a0;
  ulong in_stack_000000a8;
  undefined1 (*in_stack_000000b0) [16];
  undefined8 in_stack_000000b8;
  float fStack00000000000000c0;
  undefined4 in_stack_000000d8;
  float fStack00000000000000dc;
  float fStack00000000000000e0;
  float fStack00000000000000e8;
  float fStack00000000000000ec;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000110;
  float in_stack_00000118;
  float fStack0000000000000120;
  float fStack0000000000000124;
  float fStack0000000000000134;
  float fStack0000000000000138;
  float fStack000000000000013c;
  float in_stack_00000140;
  float in_stack_00000148;
  float fStack000000000000016c;
  long *in_stack_00000170;
  float fStack000000000000017c;
  float fStack0000000000000180;
  float fStack0000000000000184;
  float fStack0000000000000190;
  float *in_stack_000001a8;
  float fStack00000000000001b0;
  undefined8 in_stack_000001c8;
  float fStack00000000000001d0;
  float fStack00000000000001d4;
  float in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  float in_stack_000001f0;
  undefined8 in_stack_000005c0;
  undefined8 in_stack_000005c8;
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
  
  uVar38 = _uStack0000000000000068;
code_r0x06039228:
  if ((in_w11 == 10) && (in_w8 != *(float *)(unaff_x19 + 0x96))) {
    if ((uint)in_w9 <= (int)in_w8 - 1U) goto LAB_0603fce4;
    in_x12 = (float *)(in_x10 + (long)(int)((int)in_w8 - 1U) * (long)(int)unaff_w21 + 0x38);
  }

  UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__UnityEngine_XR_Interaction_Toolkit_Interactors_IXRSelectInteractor_OnSelectExited
  :
  fVar66 = *in_x12;
  fVar45 = (float)FUN_0630f888(&stack0x000012a0,0);
  fVar46 = (float)FUN_0630f890(&stack0x000012a0,0);
  if (fStack00000000000001b0 == unaff_w22) {
    fStack0000000000000138 = 0.0;
    fStack000000000000013c = 0.0;
    if (in_stack_0000133c != 0x2026) goto LAB_060392a8;
  }
  else {
LAB_060392a8:
    fStack000000000000013c = (float)FUN_0630f8b8(&stack0x000012a0,0);
    fStack0000000000000138 = (float)FUN_0630f8e8(&stack0x000012a0,0);
  }
  lVar24 = unaff_x19[0xcd];
  if ((lVar24 != 0) && (*(long *)(lVar24 + 0x20) != 0)) {
    fVar69 = *(float *)((long)unaff_x19 + 0x444);
    fVar71 = *(float *)(lVar24 + 0x2c);
    fVar47 = (float)FUN_0630fd88(*(long *)(lVar24 + 0x20),0);
    fVar48 = (float)FUN_0630f8e0(&stack0x000012a0,0);
    fVar72 = *(float *)((long)unaff_x19 + 0x444);
    fStack000000000000017c = (float)FUN_0630f890(&stack0x000012a0,0);
    lVar24 = unaff_x19[0x75];
    if ((lVar24 != 0) && (lVar28 = *(long *)(lVar24 + 0x38), lVar28 != 0)) {
      if ((uint)*(float *)(lVar28 + 0x18) <= (uint)unaff_x24[10]) goto LAB_0603fce4;
      lVar28 = lVar28 + (long)(int)unaff_x24[10] * (long)(int)unaff_w21;
      *(undefined4 *)(lVar28 + 0x20) = 0;
      fVar45 = in_stack_00000118 * ((in_stack_00000148 * fVar66) / fVar45) * fVar46;
      fVar47 = fVar45 * fVar69 * fVar71 * fVar47;
      fStack000000000000017c = fVar45 * fVar48 * fVar72 * fStack000000000000017c;
      *(float *)(lVar28 + 0x15c) = fVar47;
      uVar12 = *(uint *)(unaff_x19 + 0x24);
      if (uVar12 == 0) {
        fVar45 = *(float *)(unaff_x19 + 199);
      }
      else {
        lVar28 = unaff_x19[0xe5];
        if (lVar28 == 0) goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar28 + 0x18) <= uVar12) goto LAB_0603fce4;
        lVar28 = *(long *)(lVar28 + (long)(int)uVar12 * 8 + 0x20);
        if (lVar28 == 0) goto thunk_FUN_02e3ccc4;
        fVar45 = *(float *)(lVar28 + 0x54);
      }
LAB_06039744:
      fVar46 = 0.0;
      if (in_stack_0000133c != 3 && in_stack_0000133c != 0xad) {
        fVar46 = fVar47;
      }
LAB_0603975c:
      fVar66 = fVar46;
      lVar24 = *(long *)(lVar24 + 0x38);
      if (lVar24 == 0) goto thunk_FUN_02e3ccc4;
      if ((uint)*(float *)(lVar24 + 0x18) <= (uint)unaff_x24[10]) goto LAB_0603fce4;
      lVar24 = lVar24 + (long)(int)unaff_x24[10] * (long)(int)unaff_w21;
      *(short *)(lVar24 + 0x24) = (short)in_stack_0000133c;
      *(int *)(lVar24 + 0x58) = (int)unaff_x19[0x42];
      *(int *)(lVar24 + 0x160) = (int)unaff_x19[0xa1];
      if ((unaff_x19[0x75] == 0) || (lVar24 = *(long *)(unaff_x19[0x75] + 0x38), lVar24 == 0))
      goto thunk_FUN_02e3ccc4;
      if ((uint)*(float *)(lVar24 + 0x18) <= (uint)unaff_x24[10]) goto LAB_0603fce4;
      *(int *)(lVar24 + (long)(int)unaff_x24[10] * (long)(int)unaff_w21 + 0x164) =
           (int)unaff_x19[0x2b];
      if ((unaff_x19[0x75] == 0) || (lVar24 = *(long *)(unaff_x19[0x75] + 0x38), lVar24 == 0))
      goto thunk_FUN_02e3ccc4;
      if ((uint)*(float *)(lVar24 + 0x18) <= (uint)unaff_x24[10]) goto LAB_0603fce4;
      *(undefined4 *)(lVar24 + (long)(int)unaff_x24[10] * (long)(int)unaff_w21 + 0x16c) =
           *(undefined4 *)((long)unaff_x19 + 0x15c);
      if ((unaff_x19[0x75] == 0) || (lVar24 = *(long *)(unaff_x19[0x75] + 0x38), lVar24 == 0))
      goto thunk_FUN_02e3ccc4;
      if ((uint)*(float *)(lVar24 + 0x18) <= (uint)unaff_x24[10]) goto LAB_0603fce4;
      lVar24 = lVar24 + (long)(int)unaff_x24[10] * (long)(int)unaff_w21;
      auVar53 = *in_stack_000000b0;
      *(undefined4 *)(lVar24 + 0x188) = *(undefined4 *)in_stack_000000b0[1];
      *(long *)(lVar24 + 0x180) = auVar53._8_8_;
      *(long *)(lVar24 + 0x178) = auVar53._0_8_;
      if ((unaff_x19[0x75] == 0) || (lVar24 = *(long *)(unaff_x19[0x75] + 0x38), lVar24 == 0))
      goto thunk_FUN_02e3ccc4;
      if ((uint)*(float *)(lVar24 + 0x18) <= (uint)unaff_x24[10]) goto LAB_0603fce4;
      lVar24 = lVar24 + (long)(int)unaff_x24[10] * (long)(int)unaff_w21;
      lVar28 = *(long *)(lVar24 + 0x38);
      *(undefined4 *)(lVar24 + 0x18c) = *(undefined4 *)((long)unaff_x19 + 0x284);
      if (lVar28 == 0) {
        if ((*in_stack_00000170 == 0) ||
           (lVar24 = *(long *)(*in_stack_00000170 + 0x20), lVar24 == 0)) goto thunk_FUN_02e3ccc4;
        FUN_0630fd4c(&stack0x00001340,lVar24,0);
        in_stack_000005c0 = *(undefined8 *)(unaff_x28 + 400);
        in_stack_000005c8 = *(undefined8 *)(unaff_x28 + 0x198);
      }
      else {
        FUN_0630fd4c(&stack0x000005c0,lVar28,0);
      }
      *(undefined8 *)(unaff_x28 + 0xd8) = in_stack_000005c8;
      *(undefined8 *)(unaff_x28 + 0xd0) = in_stack_000005c0;
      if (in_stack_0000133c >> 0x10 == 0) {
        if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar12 = FUN_0557df5c(in_stack_0000133c,0);
        uVar12 = uVar12 & 1;
      }
      else {
        uVar12 = 0;
      }
      fVar46 = *(float *)(unaff_x19 + 0x5a);
      if (((in_stack_000000a8 & 0x100000000) != 0) && (*(int *)((long)unaff_x19 + 0x664) == 0)) {
        if (*in_stack_00000170 == 0) goto thunk_FUN_02e3ccc4;
        fVar48 = unaff_x24[10];
        uVar15 = *(uint *)(*in_stack_00000170 + 0x28);
        if ((int)fVar48 < (int)fStack0000000000000050) {
          if ((unaff_x19[0x75] == 0) || (lVar24 = *(long *)(unaff_x19[0x75] + 0x38), lVar24 == 0))
          goto thunk_FUN_02e3ccc4;
          uVar13 = (int)fVar48 + 1;
          if (*(uint *)(lVar24 + 0x18) <= uVar13) goto LAB_0603fce4;
          if (*(int *)(lVar24 + 0x20 + (long)(int)uVar13 * (long)(int)unaff_w21) == 0) {
            lVar24 = *(long *)(lVar24 + 0x20 + (long)(int)uVar13 * (long)(int)unaff_w21 + 0x10);
            if ((((lVar24 == 0) || (unaff_x19[0x20] == 0)) ||
                (lVar28 = *(long *)(unaff_x19[0x20] + 0x178), lVar28 == 0)) ||
               (lVar28 = *(long *)(lVar28 + 0x40), lVar28 == 0)) goto thunk_FUN_02e3ccc4;
            uVar19 = FUN_04e75974(lVar28,uVar15 | *(int *)(lVar24 + 0x28) << 0x10,&stack0x000011b0,
                                  *(undefined8 *)
                                   System_Collections_Generic_List<ValueTuple<string,_Type>>_TypeInfo
                                 );
            if ((uVar19 & 1) != 0) {
              FUN_0631443c(&stack0x00001340,&stack0x000011b0,0);
              FUN_06314290(&stack0x00001190,0);
              uVar19 = FUN_06314478(&stack0x000011b0,0);
              if ((uVar19 & 0x100) != 0) {
                fVar46 = 0.0;
              }
            }
          }
          fVar48 = unaff_x24[10];
        }
        if (0 < (int)fVar48) {
          if ((unaff_x19[0x75] == 0) || (lVar24 = *(long *)(unaff_x19[0x75] + 0x38), lVar24 == 0))
          goto thunk_FUN_02e3ccc4;
          if (*(uint *)(lVar24 + 0x18) <= (int)fVar48 - 1U) goto LAB_0603fce4;
          lVar24 = *(long *)(lVar24 + (ulong)((int)fVar48 - 1U) * (ulong)unaff_w21 + 0x30);
          if (lVar24 == 0) goto thunk_FUN_02e3ccc4;
          uVar13 = *(uint *)(lVar24 + 0x28);
          lVar24 = FUN_060800c8();
          if ((lVar24 == 0) || (lVar24 = *(long *)(lVar24 + 0x38), lVar24 == 0))
          goto thunk_FUN_02e3ccc4;
          if (*(uint *)(lVar24 + 0x18) <= (int)in_stack_000001a8[10] - 1U) goto LAB_0603fce4;
          unaff_x24 = in_stack_000001a8;
          if (*(int *)(lVar24 + (long)(int)((int)in_stack_000001a8[10] - 1U) * (long)(int)unaff_w21
                      + 0x20) == 0) {
            if (((unaff_x19[0x20] == 0) ||
                (lVar24 = *(long *)(unaff_x19[0x20] + 0x178), lVar24 == 0)) ||
               (lVar24 = *(long *)(lVar24 + 0x40), lVar24 == 0)) goto thunk_FUN_02e3ccc4;
            uVar19 = FUN_04e75974(lVar24,uVar13 | uVar15 << 0x10,&stack0x000011b0,
                                  *(undefined8 *)
                                   System_Collections_Generic_List<ValueTuple<string,_Type>>_TypeInfo
                                 );
            if ((uVar19 & 1) != 0) {
              FUN_06314464(&stack0x00001340,&stack0x000011b0,0);
              FUN_06314290(&stack0x00001190,0);
              FUN_063140f0(0);
              uVar19 = FUN_06314478(&stack0x000011b0,0);
              if ((uVar19 & 0x100) != 0) {
                fVar46 = 0.0;
              }
            }
          }
        }
      }
      if ((unaff_x19[0x75] == 0) || (lVar24 = *(long *)(unaff_x19[0x75] + 0x38), lVar24 == 0))
      goto thunk_FUN_02e3ccc4;
      fVar48 = unaff_x24[10];
      uVar49 = FUN_063140cc(&stack0x00001270,0);
      if ((uint)*(float *)(lVar24 + 0x18) <= (uint)fVar48) goto LAB_0603fce4;
      *(undefined4 *)(lVar24 + (long)(int)fVar48 * (long)(int)unaff_w21 + 0x154) = uVar49;
      if (*(int *)(*(long *)System_Collections_Generic_List<AchievementProgress>_TypeInfo + 0xe4) ==
          0) {
        thunk_FUN_02e9a04c();
      }
      uVar19 = FUN_060b1c00(in_stack_0000133c,0);
      fVar48 = in_stack_000001a8[10];
      uVar35 = (ulong)(uint)fVar48;
      if ((uVar19 & 1) == 0) {
        if (0 < (int)fVar48) {
          if ((((uVar38 & 1) == 0) ||
              (uVar15 = *(uint *)((long)unaff_x19 + 0x334), uVar15 == 0x80000000)) ||
             (uVar15 != (int)fVar48 - 1U)) {
            if ((in_stack_00000048 & 1) == 0) {
              bVar9 = false;
            }
            else {
              lVar24 = uVar35 * unaff_w21 + 0x144;
              uVar40 = uVar35;
              do {
                uVar40 = uVar40 - 1;
                iVar14 = (int)uVar35;
                uVar15 = iVar14 - 1;
                uVar35 = (ulong)uVar15;
                if ((iVar14 < 1) || (uVar40 == *(uint *)((long)unaff_x19 + 0x334))) {
                  bVar9 = false;
                  goto LAB_06039e54;
                }
                if ((unaff_x19[0x75] == 0) ||
                   (lVar28 = *(long *)(unaff_x19[0x75] + 0x38), lVar28 == 0))
                goto thunk_FUN_02e3ccc4;
                if (*(uint *)(lVar28 + 0x18) <= uVar40) goto LAB_0603fce4;
                lVar28 = *(long *)(lVar28 + lVar24 + -0x28c);
                if ((lVar28 == 0) || (lVar28 = *(long *)(lVar28 + 0x20), lVar28 == 0))
                goto thunk_FUN_02e3ccc4;
                uVar13 = FUN_0630fd3c(lVar28,0);
                if ((*in_stack_00000170 == 0) ||
                   (((unaff_x19[0x20] == 0 ||
                     (lVar28 = *(long *)(unaff_x19[0x20] + 0x178), lVar28 == 0)) ||
                    (lVar28 = *(long *)(lVar28 + 0x50), lVar28 == 0)))) goto thunk_FUN_02e3ccc4;
                uVar20 = FUN_04e82f84(lVar28,uVar13 | *(int *)(*in_stack_00000170 + 0x28) << 0x10,
                                      &stack0x00001160,
                                      *(undefined8 *)
                                       System_Collections_Generic_List<ValueTuple<Type,_NetworkInputWeavedAttribute>>_TypeInfo
                                     );
                lVar24 = lVar24 + -0x178;
              } while ((uVar20 & 1) == 0);
              if ((unaff_x19[0x75] == 0) ||
                 (lVar28 = *(long *)(unaff_x19[0x75] + 0x38), lVar28 == 0)) goto thunk_FUN_02e3ccc4;
              if (*(uint *)(lVar28 + 0x18) <= uVar15) goto LAB_0603fce4;
              FUN_063140b4(((*(float *)(lVar28 + lVar24 + -0xc) - *(float *)(unaff_x19 + 0xcc)) /
                            fVar66 + in_stack_00001164) - in_stack_00001170,in_stack_00001164,
                           in_stack_00001170,&stack0x00001270,0);
              FUN_063140c4(&stack0x00001270,0);
              fVar46 = 0.0;
              bVar9 = true;
            }
LAB_06039e54:
            if ((uVar38 & 1) != 0) {
              uVar15 = *(uint *)((long)unaff_x19 + 0x334);
              if (uVar15 == 0x80000000) {
                bVar9 = true;
              }
              if (!bVar9) {
                if ((unaff_x19[0x75] == 0) ||
                   (lVar24 = *(long *)(unaff_x19[0x75] + 0x38), lVar24 == 0))
                goto thunk_FUN_02e3ccc4;
                if (*(uint *)(lVar24 + 0x18) <= uVar15) goto LAB_0603fce4;
                lVar24 = *(long *)(lVar24 + (long)(int)uVar15 * (long)(int)unaff_w21 + 0x30);
                if ((lVar24 == 0) || (lVar24 = *(long *)(lVar24 + 0x20), lVar24 == 0))
                goto thunk_FUN_02e3ccc4;
                uVar15 = FUN_0630fd3c(lVar24,0);
                if ((*in_stack_00000170 == 0) ||
                   (((unaff_x19[0x20] == 0 ||
                     (lVar24 = *(long *)(unaff_x19[0x20] + 0x178), lVar24 == 0)) ||
                    (lVar24 = *(long *)(lVar24 + 0x48), lVar24 == 0)))) goto thunk_FUN_02e3ccc4;
                uVar35 = FUN_04e7c424(lVar24,uVar15 | *(int *)(*in_stack_00000170 + 0x28) << 0x10,
                                      &stack0x00001148,
                                      *(undefined8 *)
                                       System_Collections_Generic_List<ValueTuple<TextureHandle,_int>>_TypeInfo
                                     );
                if ((uVar35 & 1) != 0) {
                  if ((unaff_x19[0x75] != 0) &&
                     (lVar24 = *(long *)(unaff_x19[0x75] + 0x38), lVar24 != 0)) {
                    if (*(uint *)((long)unaff_x19 + 0x334) < *(uint *)(lVar24 + 0x18)) {
                      FUN_063140b4((in_stack_0000114c +
                                   (*(float *)(lVar24 + (long)(int)*(uint *)((long)unaff_x19 + 0x334
                                                                            ) * (long)(int)unaff_w21
                                              + 0x138) - *(float *)(unaff_x19 + 0xcc)) / fVar66) -
                                   in_stack_00001158,in_stack_0000114c,in_stack_00001158,
                                   &stack0x00001270,0);
                      goto LAB_06039f50;
                    }
                    goto LAB_0603fce4;
                  }
                  goto thunk_FUN_02e3ccc4;
                }
              }
            }
          }
          else {
            if ((unaff_x19[0x75] == 0) || (lVar24 = *(long *)(unaff_x19[0x75] + 0x38), lVar24 == 0))
            goto thunk_FUN_02e3ccc4;
            if (*(uint *)(lVar24 + 0x18) <= uVar15) goto LAB_0603fce4;
            lVar24 = *(long *)(lVar24 + (long)(int)uVar15 * (long)(int)unaff_w21 + 0x30);
            if ((lVar24 == 0) || (lVar24 = *(long *)(lVar24 + 0x20), lVar24 == 0))
            goto thunk_FUN_02e3ccc4;
            uVar15 = FUN_0630fd3c(lVar24,0);
            if ((*in_stack_00000170 == 0) ||
               (((unaff_x19[0x20] == 0 || (lVar24 = *(long *)(unaff_x19[0x20] + 0x178), lVar24 == 0)
                 ) || (lVar24 = *(long *)(lVar24 + 0x48), lVar24 == 0)))) goto thunk_FUN_02e3ccc4;
            uVar35 = FUN_04e7c424(lVar24,uVar15 | *(int *)(*in_stack_00000170 + 0x28) << 0x10,
                                  &stack0x00001178,
                                  *(undefined8 *)
                                   System_Collections_Generic_List<ValueTuple<TextureHandle,_int>>_TypeInfo
                                 );
            if ((uVar35 & 1) != 0) {
              if ((unaff_x19[0x75] == 0) ||
                 (lVar24 = *(long *)(unaff_x19[0x75] + 0x38), lVar24 == 0)) goto thunk_FUN_02e3ccc4;
              if (*(uint *)(lVar24 + 0x18) <= *(uint *)((long)unaff_x19 + 0x334)) goto LAB_0603fce4;
              FUN_063140b4((in_stack_0000117c +
                           (*(float *)(lVar24 + (long)(int)*(uint *)((long)unaff_x19 + 0x334) *
                                                (long)(int)unaff_w21 + 0x138) -
                           *(float *)(unaff_x19 + 0xcc)) / fVar66) - in_stack_00001188,
                           in_stack_0000117c,in_stack_00001188,&stack0x00001270,0);
LAB_06039f50:
              FUN_063140c4(&stack0x00001270,0);
              fVar46 = 0.0;
            }
          }
        }
      }
      else {
        *(float *)((long)unaff_x19 + 0x334) = fVar48;
      }
      fVar48 = (float)FUN_063140bc(&stack0x00001270,0);
      fVar69 = (float)FUN_063140bc(&stack0x00001270,0);
      if ((char)unaff_x19[0x1e] != '\0') {
        fVar72 = *(float *)(unaff_x19 + 0xcc);
        fVar71 = (float)FUN_0630fb94(&stack0x00001280,0);
        fVar72 = fVar72 - fVar66 * *(float *)(unaff_x19 + 0x5c) *
                                   fVar71 * (1.0 - *(float *)((long)unaff_x19 + 0x304));
        *(float *)(unaff_x19 + 0xcc) = fVar72;
        if ((uVar12 != 0) || (in_stack_0000133c == 0x200b)) {
          *(float *)(unaff_x19 + 0xcc) =
               fVar72 - in_stack_00000100._4_4_ * *(float *)((long)unaff_x19 + 0x2e4);
        }
      }
      fVar71 = *(float *)(unaff_x19 + 0x5b);
      fVar72 = 0.0;
      fStack000000000000016c = 0.0;
      if (fVar71 != 0.0) {
        if (((*(char *)((long)unaff_x19 + 0x2dc) == '\0') || (0x3a < in_stack_0000133c)) ||
           (fVar72 = 0.25, (1L << ((ulong)in_stack_0000133c & 0x3f) & 0x400500000000000U) == 0)) {
          fVar72 = 0.5;
        }
        fVar50 = (float)FUN_0630fb74(&stack0x00001280,0);
        fVar51 = (float)FUN_0630fb84(&stack0x00001280,0);
        fVar72 = *(float *)(unaff_x19 + 0x5c) *
                 (1.0 - *(float *)((long)unaff_x19 + 0x304)) *
                 (fVar71 * fVar72 - fVar66 * (fVar50 * 0.5 + fVar51));
        *(float *)(unaff_x19 + 0xcc) = fVar72 + *(float *)(unaff_x19 + 0xcc);
      }
      if (*(int *)((long)unaff_x19 + 0x664) == 0) {
        fVar71 = 0.0;
        if ((unaff_w23 == 0) && ((*(byte *)((long)unaff_x19 + 0x284) & 1) != 0)) {
          if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
          fVar71 = *(float *)(unaff_x19[0x20] + 0x1ac);
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        lVar24 = unaff_x19[0x23];
        if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar35 = FUN_06267b6c(lVar24,0,0);
        fStack000000000000016c = 0.0;
        if ((uVar35 & 1) != 0) {
          lVar24 = unaff_x19[0x23];
          if (*(int *)(*(long *)System_Collections_Generic_List<WeakReference<IPool>>_TypeInfo +
                      0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          plVar23 = (long *)System_Collections_Generic_List<WeakReference<IPool>>_TypeInfo;
          if (lVar24 == 0) goto thunk_FUN_02e3ccc4;
          uVar35 = FUN_06238d70(lVar24,*(undefined4 *)
                                        (*(long *)(*(long *)
                                                  System_Collections_Generic_List<WeakReference<IPool>>_TypeInfo
                                                  + 0xb8) + 0x6c),0);
          if ((uVar35 & 1) != 0) {
            lVar24 = unaff_x19[0x23];
            if (*(int *)(*plVar23 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
              plVar23 = (long *)System_Collections_Generic_List<WeakReference<IPool>>_TypeInfo;
            }
            if (lVar24 == 0) goto thunk_FUN_02e3ccc4;
            uVar35 = FUN_06238d70(lVar24,*(undefined4 *)(*(long *)(*plVar23 + 0xb8) + 0xe4),0);
            if ((uVar35 & 1) != 0) {
              lVar24 = unaff_x19[0x23];
              if (*(int *)(*plVar23 + 0xe4) == 0) {
                thunk_FUN_02e9a04c();
                plVar23 = (long *)System_Collections_Generic_List<WeakReference<IPool>>_TypeInfo;
              }
              if (lVar24 == 0) goto thunk_FUN_02e3ccc4;
              fVar50 = (float)thunk_FUN_0623b08c(lVar24,*(undefined4 *)
                                                         (*(long *)(*plVar23 + 0xb8) + 0x6c),0);
              if (unaff_x19[0x23] == 0) goto thunk_FUN_02e3ccc4;
              fStack000000000000016c =
                   (float)thunk_FUN_0623b08c(unaff_x19[0x23],
                                             *(undefined4 *)(*(long *)(*plVar23 + 0xb8) + 0xe4),0);
              lVar24 = unaff_x19[0x20];
              if (bVar9) {
                if (lVar24 == 0) goto thunk_FUN_02e3ccc4;
                pfVar25 = (float *)(lVar24 + 0x1a0);
              }
              else {
                if (lVar24 == 0) goto thunk_FUN_02e3ccc4;
                pfVar25 = (float *)(lVar24 + 0x1a8);
              }
              fStack000000000000016c = fStack000000000000016c * fVar50 * *pfVar25 * 0.25;
              if (fVar50 < fVar45 + fStack000000000000016c) {
                fVar45 = fVar50 - fStack000000000000016c;
              }
            }
          }
        }
      }
      else {
        fVar71 = 0.0;
      }
      fVar62 = *(float *)(unaff_x19 + 0xcc);
      fVar50 = (float)FUN_0630fb84(&stack0x00001280,0);
      fVar67 = *(float *)((long)unaff_x19 + 0x484);
      fVar51 = (float)FUN_063140ac(&stack0x00001270,0);
      fVar62 = fVar62 + *(float *)(unaff_x19 + 0x5c) *
                        (1.0 - *(float *)((long)unaff_x19 + 0x304)) *
                        fVar66 * (fVar51 + ((fVar50 * fVar67 - fVar45) - fStack000000000000016c));
      fVar50 = (float)FUN_0630fb8c(&stack0x00001280,0);
      fVar51 = (float)FUN_063140bc(&stack0x00001270,0);
      fStack0000000000000180 =
           *(float *)((long)unaff_x19 + 0x63c) +
           ((fStack000000000000017c + fVar66 * (fVar45 + fVar50 + fVar51)) -
           *(float *)((long)unaff_x19 + 0x4f4));
      fVar50 = (float)FUN_0630fb7c(&stack0x00001280,0);
      fVar50 = fStack0000000000000180 - fVar66 * (fVar45 + fVar45 + fVar50);
      fVar51 = (float)FUN_0630fb74(&stack0x00001280,0);
      fVar51 = fVar62 + *(float *)(unaff_x19 + 0x5c) *
                        (1.0 - *(float *)((long)unaff_x19 + 0x304)) *
                        fVar66 * (fStack000000000000016c + fStack000000000000016c +
                                 fVar45 + fVar45 + fVar51 * *(float *)((long)unaff_x19 + 0x484));
      fVar67 = fVar62;
      fVar63 = fVar51;
      if (((*(int *)((long)unaff_x19 + 0x664) == 0) && (unaff_w23 == 0)) &&
         ((*(byte *)((long)unaff_x19 + 0x284) >> 1 & 1) != 0)) {
        if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
        lVar24 = unaff_x19[0xc2];
        fVar67 = (float)FUN_0630f8c0(unaff_x19[0x20] + 0x28,0);
        if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
        fVar55 = (float)FUN_0630f8e0(unaff_x19[0x20] + 0x28,0);
        if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
        fVar68 = *(float *)((long)unaff_x19 + 0x444);
        fVar70 = *(float *)((long)unaff_x19 + 0x63c);
        fVar63 = (float)(int)lVar24 * fStack0000000000000054;
        fVar60 = (float)FUN_0630f890(unaff_x19[0x20] + 0x28,0);
        fVar60 = fVar60 * fVar68 * (fVar67 - (fVar55 + fVar70)) * 0.5;
        fVar67 = (float)FUN_0630fb8c(&stack0x00001280,0);
        fVar70 = fVar63 * fVar66 * ((fStack000000000000016c + fVar45 + fVar67) - fVar60);
        fVar55 = (float)FUN_0630fb8c(&stack0x00001280,0);
        fVar68 = (float)FUN_0630fb7c(&stack0x00001280,0);
        fStack0000000000000180 = fStack0000000000000180 + 0.0;
        fVar50 = fVar50 + 0.0;
        fVar67 = fVar62 + fVar70;
        fVar63 = fVar63 * fVar66 * ((((fVar55 - fVar68) - fVar45) - fStack000000000000016c) - fVar60
                                   );
        fVar62 = fVar62 + fVar63;
        fVar63 = fVar51 + fVar63;
        fVar51 = fVar51 + fVar70;
      }
      uVar65 = *(undefined8 *)(_fStack00000000000000a0 + 0x1a0);
      uVar64 = *(undefined8 *)(_fStack00000000000000a0 + 0x1a8);
      if (DAT_06e84e41 == '\0') {
        FUN_02e3ca1c(PTR_DAT_06a2f028);
        DAT_06e84e41 = '\x01';
      }
      uVar52 = **(undefined8 **)(*(long *)PTR_DAT_06a2f028 + 0xb8);
      uVar57 = (*(undefined8 **)(*(long *)PTR_DAT_06a2f028 + 0xb8))[1];
      if (DAT_01317bfc <
          (float)((ulong)uVar64 >> 0x20) * (float)((ulong)uVar57 >> 0x20) +
          (float)uVar64 * (float)uVar57 +
          (float)uVar65 * (float)uVar52 +
          (float)((ulong)uVar65 >> 0x20) * (float)((ulong)uVar52 >> 0x20)) {
        fVar55 = 0.0;
        auVar53._4_12_ = SUB1612(ZEXT816(0),4);
        auVar53._0_4_ = fVar50;
        uVar65 = auVar53._0_8_;
        uVar35 = (ulong)(uint)fStack0000000000000180;
        uVar64 = uVar65;
      }
      else {
        FUN_062541ec(&stack0x00001340,*(undefined4 *)((long)unaff_x19 + 0x474),(int)unaff_x19[0x8f],
                     *(undefined4 *)((long)unaff_x19 + 0x47c),(int)unaff_x19[0x90],0);
        fVar63 = (fVar51 + fVar62) * 0.5;
        fVar60 = (fVar50 + fStack0000000000000180) * 0.5;
        fVar51 = 0.0;
        auVar53 = ZEXT416((uint)(fStack0000000000000180 - fVar60));
        fVar67 = (float)FUN_062540ec(&stack0x00001100,0);
        fVar67 = fVar63 + fVar67;
        fVar68 = 0.0;
        uVar35 = CONCAT44(fVar51 + 0.0,fVar60 + auVar53._0_4_);
        auVar53 = ZEXT416((uint)(fVar50 - fVar60));
        fVar62 = (float)FUN_062540ec(&stack0x00001100,0);
        fVar62 = fVar63 + fVar62;
        fVar55 = 0.0;
        uVar65 = CONCAT44(fVar68 + 0.0,fVar60 + auVar53._0_4_);
        auVar53 = ZEXT416((uint)(fStack0000000000000180 - fVar60));
        fVar51 = (float)FUN_062540ec(&stack0x00001100,0);
        fVar51 = fVar63 + fVar51;
        fVar68 = 0.0;
        fStack0000000000000180 = fVar60 + auVar53._0_4_;
        fVar55 = fVar55 + 0.0;
        auVar53 = ZEXT416((uint)(fVar50 - fVar60));
        fVar50 = (float)FUN_062540ec(&stack0x00001100,0);
        fVar63 = fVar63 + fVar50;
        uVar64 = CONCAT44(fVar68 + 0.0,fVar60 + auVar53._0_4_);
      }
      if ((unaff_x19[0x75] == 0) || (lVar24 = *(long *)(unaff_x19[0x75] + 0x38), lVar24 == 0))
      goto thunk_FUN_02e3ccc4;
      if ((uint)*(float *)(lVar24 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
      lVar24 = lVar24 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21;
      *(float *)(lVar24 + 0x114) = fVar62;
      *(undefined8 *)(lVar24 + 0x118) = uVar65;
      if ((unaff_x19[0x75] == 0) || (lVar24 = *(long *)(unaff_x19[0x75] + 0x38), lVar24 == 0))
      goto thunk_FUN_02e3ccc4;
      if ((uint)*(float *)(lVar24 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
      lVar24 = lVar24 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21;
      *(float *)(lVar24 + 0x108) = fVar67;
      *(ulong *)(lVar24 + 0x10c) = uVar35;
      if ((unaff_x19[0x75] == 0) || (lVar24 = *(long *)(unaff_x19[0x75] + 0x38), lVar24 == 0))
      goto thunk_FUN_02e3ccc4;
      if ((uint)*(float *)(lVar24 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
      lVar24 = lVar24 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21;
      *(float *)(lVar24 + 0x120) = fVar51;
      *(ulong *)(lVar24 + 0x124) = CONCAT44(fVar55,fStack0000000000000180);
      if ((unaff_x19[0x75] == 0) || (lVar24 = *(long *)(unaff_x19[0x75] + 0x38), lVar24 == 0))
      goto thunk_FUN_02e3ccc4;
      if ((uint)*(float *)(lVar24 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
      lVar24 = lVar24 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21;
      *(float *)(lVar24 + 300) = fVar63;
      *(undefined8 *)(lVar24 + 0x130) = uVar64;
      if ((unaff_x19[0x75] == 0) || (lVar24 = *(long *)(unaff_x19[0x75] + 0x38), lVar24 == 0))
      goto thunk_FUN_02e3ccc4;
      uVar15 = *(uint *)((long)unaff_x19 + 0x4ac);
      fVar67 = *(float *)(unaff_x19 + 0xcc);
      fVar50 = (float)FUN_063140ac(&stack0x00001270,0);
      if (*(uint *)(lVar24 + 0x18) <= uVar15) goto LAB_0603fce4;
      *(float *)(lVar24 + (long)(int)uVar15 * (long)(int)unaff_w21 + 0x138) =
           fVar67 + fVar66 * fVar50;
      if ((unaff_x19[0x75] == 0) || (lVar24 = *(long *)(unaff_x19[0x75] + 0x38), lVar24 == 0))
      goto thunk_FUN_02e3ccc4;
      uVar15 = *(uint *)((long)unaff_x19 + 0x4ac);
      fVar67 = *(float *)((long)unaff_x19 + 0x4f4);
      fVar63 = *(float *)((long)unaff_x19 + 0x63c);
      fVar50 = (float)FUN_063140bc(&stack0x00001270,0);
      if (*(uint *)(lVar24 + 0x18) <= uVar15) goto LAB_0603fce4;
      *(float *)(lVar24 + (long)(int)uVar15 * (long)(int)unaff_w21 + 0x144) =
           (fStack000000000000017c - fVar67) + fVar63 + fVar66 * fVar50;
      if ((unaff_x19[0x75] == 0) || (lVar24 = *(long *)(unaff_x19[0x75] + 0x38), lVar24 == 0))
      goto thunk_FUN_02e3ccc4;
      fVar50 = in_stack_000001a8[10];
      if ((uint)*(float *)(lVar24 + 0x18) <= (uint)fVar50) goto LAB_0603fce4;
      lVar24 = lVar24 + 0x20;
      *(float *)(lVar24 + (long)(int)fVar50 * (long)(int)unaff_w21 + 0x138) =
           (fVar51 - fVar62) / ((float)uVar35 - (float)uVar65);
      fVar48 = fVar66 * (fStack000000000000013c + fVar48);
      if (*(int *)((long)unaff_x19 + 0x664) == 0) {
        fVar48 = fVar48 / in_stack_00000148;
        fVar69 = (fVar66 * (fStack0000000000000138 + fVar69)) / in_stack_00000148;
      }
      else {
        fVar69 = fVar66 * (fStack0000000000000138 + fVar69);
      }
      fVar67 = *(float *)((long)unaff_x19 + 0x63c);
      fVar51 = *(float *)(unaff_x19 + 0x96);
      if ((uVar12 == 0) || (fVar50 == fVar51)) {
        fVar48 = fVar48 + fVar67;
        fVar69 = fVar69 + fVar67;
        fVar63 = fVar48;
        fVar62 = fVar69;
        if (fVar67 != 0.0) {
          fVar63 = (fVar48 - fVar67) / *(float *)((long)unaff_x19 + 0x444);
          fVar62 = (fVar69 - fVar67) / *(float *)((long)unaff_x19 + 0x444);
          if (fVar63 <= fVar48) {
            fVar63 = fVar48;
          }
          if (fVar69 <= fVar62) {
            fVar62 = fVar69;
          }
        }
        lVar24 = lVar24 + (long)(int)fVar50 * (long)(int)unaff_w21;
        fVar67 = fVar63;
        if (fVar63 <= *(float *)((long)unaff_x19 + 0x4e4)) {
          fVar67 = *(float *)((long)unaff_x19 + 0x4e4);
        }
        fVar55 = fVar62;
        if (*(float *)(unaff_x19 + 0x9d) <= fVar62) {
          fVar55 = *(float *)(unaff_x19 + 0x9d);
        }
        *(float *)((long)unaff_x19 + 0x4e4) = fVar67;
        *(float *)(unaff_x19 + 0x9d) = fVar55;
        *(float *)(lVar24 + 300) = fVar63;
        *(float *)(lVar24 + 0x130) = fVar62;
        fVar63 = *(float *)((long)unaff_x19 + 0x4f4);
        *(float *)(lVar24 + 0x120) = fVar48 - fVar63;
        *(float *)((long)unaff_x19 + 0x4dc) = fVar48 - fVar63;
        *(float *)(lVar24 + 0x128) = fVar69 - fVar63;
        *(float *)(unaff_x19 + 0x9c) = fVar69 - fVar63;
        if (((int)unaff_x19[0x98] == 0) || (*(char *)((long)unaff_x19 + 0x37c) != '\0')) {
          *(float *)((long)unaff_x19 + 0x4d4) = fVar67;
          if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
          fVar69 = *(float *)(unaff_x19 + 0x9b);
          fVar67 = (float)FUN_0630f8c0(unaff_x19[0x20] + 0x28,0);
          in_stack_00000148 = (fVar66 * fVar67) / in_stack_00000148;
          if (fVar69 <= in_stack_00000148) {
            fVar69 = in_stack_00000148;
          }
          fVar63 = *(float *)((long)unaff_x19 + 0x4f4);
          *(float *)(unaff_x19 + 0x9b) = fVar69;
        }
        if (fVar63 == 0.0) {
          fVar69 = *(float *)(unaff_x19 + 0x9a);
          if (*(float *)(unaff_x19 + 0x9a) <= fVar48) {
            fVar69 = fVar48;
          }
          *(float *)(unaff_x19 + 0x9a) = fVar69;
        }
      }
      else {
        lVar24 = lVar24 + (long)(int)fVar50 * (long)(int)unaff_w21;
        uVar64 = *(undefined8 *)(in_stack_000001a8 + 0x18);
        *(undefined8 *)(lVar24 + 300) = uVar64;
        fVar63 = *(float *)((long)unaff_x19 + 0x4f4);
        fVar48 = (float)uVar64 - fVar63;
        fVar69 = (float)((ulong)uVar64 >> 0x20) - fVar63;
        *(float *)(lVar24 + 0x120) = fVar48;
        *(float *)(lVar24 + 0x128) = fVar69;
        *(ulong *)(in_stack_000001a8 + 0x16) = CONCAT44(fVar69,fVar48);
      }
      lVar24 = unaff_x19[0x75];
      if ((lVar24 == 0) || (lVar28 = *(long *)(lVar24 + 0x38), lVar28 == 0))
      goto thunk_FUN_02e3ccc4;
      fVar48 = in_stack_000001a8[10];
      if ((uint)*(float *)(lVar28 + 0x18) <= (uint)fVar48) goto LAB_0603fce4;
      lVar28 = lVar28 + (long)(int)fVar48 * (long)(int)unaff_w21;
      *(undefined1 *)(lVar28 + 400) = 0;
      uVar15 = *(uint *)(unaff_x19 + 0x54);
      uVar13 = in_stack_0000133c;
      if ((((in_stack_0000133c == 9) ||
           ((in_stack_0000133c == 0x200b || uVar12 != 0 &&
            ((*(uint *)(unaff_x19 + 0x61) & 0xfffffffe) == 2)))) ||
          ((uVar12 == 0 &&
           (((in_stack_0000133c != 3 && (in_stack_0000133c != 0x200b)) &&
            (in_stack_0000133c != 0xad)))))) ||
         ((in_stack_0000133c == 0xad && ((uint)fStack0000000000000058 & 1) == 0 ||
          (*(int *)((long)unaff_x19 + 0x664) == 1)))) {
        *(undefined1 *)(lVar28 + 400) = 1;
        pfVar29 = _fStack0000000000000098;
        pfVar25 = _fStack00000000000000c0;
        if (fStack00000000000001b0 == unaff_w22) {
          lVar24 = *(long *)(lVar24 + 0x50);
          if (lVar24 == 0) goto thunk_FUN_02e3ccc4;
          if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x98)) goto LAB_0603fce4;
          lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x98) * 0x60;
          pfVar25 = (float *)(lVar24 + 100);
          pfVar29 = (float *)(lVar24 + 0x68);
        }
        fVar67 = *pfVar25;
        fVar63 = *pfVar29;
        fVar48 = *(float *)(unaff_x19 + 0x74);
        fVar69 = 0.0;
        fVar62 = *(float *)(unaff_x19 + 0xcc);
        in_stack_00000140 = (in_stack_000000b8._4_4_ - fVar67) - fVar63;
        bVar9 = true;
        if ((fVar48 <= in_stack_00000140) && (bVar9 = false, !NAN(fVar48))) {
          bVar9 = fVar48 == -1.0;
        }
        if (!bVar9) {
          in_stack_00000140 = fVar48;
        }
        fVar48 = 0.0;
        if ((char)unaff_x19[0x1e] == '\0') {
          fVar48 = (float)FUN_0630fb94(&stack0x00001280,0);
        }
        fVar55 = *(float *)((long)unaff_x19 + 0x4f4);
        if (in_stack_0000133c != 0xad) {
          fVar47 = fVar66;
        }
        fVar60 = *(float *)((long)unaff_x19 + 0x304);
        auVar58 = ZEXT416((uint)fVar60);
        if ((0.0 < fVar55) && (*(char *)((long)unaff_x19 + 0x2f4) == '\0')) {
          fVar69 = *(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4ec);
        }
        fVar68 = in_stack_000001a8[10];
        fVar69 = (*(float *)((long)unaff_x19 + 0x4d4) - (*(float *)(unaff_x19 + 0x9d) - fVar55)) +
                 fVar69;
        if (fStack00000000000000ec < fVar69) {
          if ((int)unaff_x19[99] == -1) {
            *(float *)(unaff_x19 + 99) = fVar68;
          }
          plVar23 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
          fVar70 = DAT_01317af0;
          if ((char)unaff_x19[0x4c] != '\0') {
            if (0.0 < fVar55) {
              fVar55 = *(float *)(unaff_x19 + 0x5f);
              if ((fVar55 < *(float *)((long)unaff_x19 + 0x2ec)) &&
                 (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
                fVar45 = *(float *)((long)unaff_x19 + 0x2ec) +
                         ((in_stack_00000018._4_4_ - fVar69) / (float)(int)unaff_x19[0x98]) /
                         in_stack_00000048._4_4_;
                if (fVar45 <= fVar55) {
                  fVar45 = fVar55;
                }
                goto LAB_0603fbd0;
              }
            }
            fVar69 = *(float *)((long)unaff_x19 + 0x20c);
            fVar55 = *(float *)(unaff_x19 + 0x4f);
            if ((fVar55 < fVar69) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
              *(float *)((long)unaff_x19 + 0x264) = fVar69;
              fVar45 = (fVar69 - *(float *)(unaff_x19 + 0x4d)) * 0.5;
              if (fVar45 <= fVar70) {
                fVar45 = fVar70;
              }
              fVar46 = (fVar69 - fVar45) * 20.0 + 0.5;
              fVar45 = _UNK_01317b80;
              if (fVar46 != INFINITY) {
                fVar45 = (float)(int)fVar46 / 20.0;
              }
              if (fVar45 <= fVar55) {
                fVar45 = fVar55;
              }
              *(float *)((long)unaff_x19 + 0x20c) = fVar45;
              return;
            }
          }
          iVar14 = *(int *)((long)unaff_x19 + 0x314);
          if (iVar14 < 5) {
            if (iVar14 == 1) {
              lVar24 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
              if (*(int *)(lVar24 + 0xe4) == 0) {
                thunk_FUN_02e9a04c();
                lVar24 = *plVar23;
              }
              lVar28 = *(long *)(lVar24 + 0xb8);
              if (*(int *)(lVar28 + 0x1708) != 0) {
                if (*(int *)(lVar24 + 0xe4) == 0) {
                  thunk_FUN_02e9a04c();
                  lVar28 = *(long *)(*plVar23 + 0xb8);
                }
                UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableBase_<PlaySequence>d__16<float>__System_Collections_IEnumerator_Reset
                          (&stack0x00001340,lVar28 + 0x1338,
                           *(undefined8 *)
                            System_Collections_Generic_List<AndroidAssetPackState>_TypeInfo);
                memcpy(&stack0x00000d48,&stack0x00001340,0x3b8);
LAB_0603b314:
                iVar14 = FUN_0608c590();
                in_stack_00001308 = iVar14 - 1;
                unaff_w25 = unaff_w25 + 1;
                fVar48 = (float)(*(int *)((long)unaff_x19 + 0x4ac) - 1);
                *(float *)((long)unaff_x19 + 0x4ac) = fVar48;
                uVar49 = 0x2026;
                goto LAB_0603b340;
              }
LAB_0603b348:
              in_stack_000001a8[10] = 0.0;
              in_stack_000001a8[0xb] = 0.0;
              in_stack_00001308 = 0xffffffff;
              in_stack_00001328 = DAT_01318128;
              goto LAB_06038edc;
            }
            if (iVar14 != 3) goto LAB_0603acbc;
            if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) ==
                0) {
              thunk_FUN_02e9a04c();
            }
LAB_0603af60:
            in_stack_00001308 = FUN_0608c590();
          }
          else {
            if (iVar14 == 5) {
              if (((int)in_stack_00001308 < 0) || (fVar68 == 0.0)) {
                in_stack_000001a8[10] = 0.0;
                plVar23 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
                in_stack_00001308 = 0xffffffff;
                in_stack_00001328 = DAT_01318128;
              }
              else {
                auVar58 = ZEXT416((uint)fStack00000000000000ec);
                if (fStack00000000000000ec < in_stack_000001a8[0x18] - *(float *)(unaff_x19 + 0x9d))
                {
                  if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo +
                              0xe4) == 0) {
                    thunk_FUN_02e9a04c();
                  }
                  goto LAB_0603af60;
                }
                if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4
                            ) == 0) {
                  thunk_FUN_02e9a04c();
                }
                in_stack_00001308 = FUN_0608c590();
                *(undefined4 *)(unaff_x19 + 0x96) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
                lVar24 = *plVar23;
                *(undefined1 *)((long)unaff_x19 + 0x37c) = 1;
                uVar64 = *(undefined8 *)(*(long *)(lVar24 + 0xb8) + 0x1730);
                *(undefined4 *)((long)unaff_x19 + 0x4ec) = 0;
                *(undefined4 *)((long)unaff_x19 + 0x4f4) = 0;
                *(float *)(unaff_x19 + 0xcc) = *(float *)((long)unaff_x19 + 0x44c) + 0.0;
                uVar64 = NEON_rev64(uVar64,4);
                auVar58 = ZEXT816(0);
                *(int *)(unaff_x19 + 0x98) = (int)unaff_x19[0x98] + 1;
                iVar14 = *(int *)((long)unaff_x19 + 0x4cc);
                *(undefined8 *)(in_stack_000001a8 + 0x18) = uVar64;
                unaff_x19[0x9a] = 0;
                *(int *)((long)unaff_x19 + 0x4cc) = iVar14 + 1;
              }
              goto LAB_06038edc;
            }
            if (iVar14 != 6) goto LAB_0603acbc;
            if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) ==
                0) {
              thunk_FUN_02e9a04c();
            }
            in_stack_00001308 = FUN_0608c590();
            lVar24 = unaff_x19[100];
            if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar19 = FUN_06267b6c(lVar24,0,0);
            if ((uVar19 & 1) == 0) goto LAB_0603af74;
            plVar41 = (long *)unaff_x19[100];
            uVar64 = (**(code **)(*unaff_x19 + 0x548))();
            if (plVar41 == (long *)0x0) goto thunk_FUN_02e3ccc4;
            (**(code **)(*plVar41 + 0x558))(plVar41,uVar64,*(undefined8 *)(*plVar41 + 0x560));
            lVar24 = unaff_x19[100];
            if (lVar24 == 0) goto thunk_FUN_02e3ccc4;
            *(int *)(lVar24 + 0x440) = (int)unaff_x19[0x88];
            FUN_0607fed4(lVar24,*(undefined4 *)((long)unaff_x19 + 0x4ac),0);
            plVar41 = (long *)unaff_x19[100];
            if (plVar41 == (long *)0x0) goto thunk_FUN_02e3ccc4;
            (**(code **)(*plVar41 + 0x7d8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7e0));
            *(undefined1 *)(unaff_x19 + 0x66) = 1;
          }
LAB_0603af74:
          in_stack_00001328 = CONCAT44(3,fVar68);
          goto LAB_06038edc;
        }
LAB_0603acbc:
        plVar23 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
        if ((uVar19 & 1) != 0) {
          fVar69 = 1.0;
          if ((uVar15 & 0x18) != 0) {
            fVar69 = _UNK_01317cd8;
          }
          fVar48 = ABS(fVar62) + *(float *)(unaff_x19 + 0x5c) * fVar48 * (1.0 - fVar60) * fVar47;
          if (fVar69 * in_stack_00000140 < fVar48) {
            if ((((int)unaff_x19[0x61] == 0) || ((int)unaff_x19[0x61] == 3)) ||
               (fVar68 == *(float *)(unaff_x19 + 0x96))) {
              if (((char)unaff_x19[0x4c] != '\0') &&
                 (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
                fVar47 = 100.0;
                fVar62 = *(float *)(unaff_x19 + 0x60) / 100.0;
                if (fVar60 < fVar62) goto LAB_0603fc3c;
                fVar62 = *(float *)((long)unaff_x19 + 0x20c);
                fVar55 = *(float *)(unaff_x19 + 0x4f);
                auVar58 = ZEXT416((uint)fVar55);
                if (fVar55 < fVar62) goto LAB_0603fc84;
              }
              iVar14 = *(int *)((long)unaff_x19 + 0x314);
              if (iVar14 == 1) {
                lVar24 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
                if (*(int *)(lVar24 + 0xe4) == 0) {
                  thunk_FUN_02e9a04c();
                  lVar24 = *plVar23;
                }
                lVar28 = *(long *)(lVar24 + 0xb8);
                if (*(int *)(lVar28 + 0x1708) == 0) goto LAB_0603b348;
                if (*(int *)(lVar24 + 0xe4) == 0) {
                  thunk_FUN_02e9a04c();
                  lVar28 = *(long *)(*plVar23 + 0xb8);
                }
                UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableBase_<PlaySequence>d__16<float>__System_Collections_IEnumerator_Reset
                          (&stack0x00001340,lVar28 + 0x1338,
                           *(undefined8 *)
                            System_Collections_Generic_List<AndroidAssetPackState>_TypeInfo);
                memcpy(&stack0x000005d8,&stack0x00001340,0x3b8);
                goto LAB_0603b314;
              }
              if (iVar14 == 6) {
                if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4
                            ) == 0) {
                  thunk_FUN_02e9a04c();
                }
                in_stack_00001308 = FUN_0608c590();
                lVar24 = unaff_x19[100];
                if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
                  thunk_FUN_02e9a04c();
                }
                uVar19 = FUN_06267b6c(lVar24,0,0);
                if ((uVar19 & 1) != 0) {
                  plVar41 = (long *)unaff_x19[100];
                  uVar64 = (**(code **)(*unaff_x19 + 0x548))();
                  if (plVar41 == (long *)0x0) goto thunk_FUN_02e3ccc4;
                  (**(code **)(*plVar41 + 0x558))(plVar41,uVar64,*(undefined8 *)(*plVar41 + 0x560));
                  lVar24 = unaff_x19[100];
                  if (lVar24 == 0) goto thunk_FUN_02e3ccc4;
                  *(int *)(lVar24 + 0x440) = (int)unaff_x19[0x88];
                  FUN_0607fed4(lVar24,*(undefined4 *)((long)unaff_x19 + 0x4ac),0);
                  plVar41 = (long *)unaff_x19[100];
                  if (plVar41 == (long *)0x0) goto thunk_FUN_02e3ccc4;
                  (**(code **)(*plVar41 + 0x7d8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7e0));
                  *(undefined1 *)(unaff_x19 + 0x66) = 1;
                }
                fVar48 = in_stack_000001a8[10];
                goto LAB_0603b288;
              }
              if (iVar14 == 3) {
                if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4
                            ) == 0) {
                  thunk_FUN_02e9a04c();
                }
                goto LAB_0603af60;
              }
            }
            else {
              if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4)
                  == 0) {
                thunk_FUN_02e9a04c();
              }
              in_stack_00001308 = FUN_0608c590();
              if (*(float *)(unaff_x19 + 0x5e) == DAT_01317908) {
                lVar24 = unaff_x19[0x75];
                if ((lVar24 == 0) || (lVar28 = *(long *)(lVar24 + 0x38), lVar28 == 0))
                goto thunk_FUN_02e3ccc4;
                if ((uint)*(float *)(lVar28 + 0x18) <= (uint)in_stack_000001a8[10])
                goto LAB_0603fce4;
                fVar62 = *(float *)((long)unaff_x19 + 0x4f4);
                fVar47 = 0.0;
                if ((0.0 < fVar62) && (*(char *)((long)unaff_x19 + 0x2f4) == '\0')) {
                  fVar47 = *(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4ec)
                  ;
                }
                fVar55 = in_stack_00000100._4_4_ * *(float *)(unaff_x19 + 0x5d) +
                         *(float *)(lVar28 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21
                                   + 0x14c) + (fVar47 - *(float *)(unaff_x19 + 0x9d)) +
                         in_stack_00000048._4_4_ *
                         (fStack0000000000000044 + *(float *)((long)unaff_x19 + 0x2ec));
              }
              else {
                lVar24 = unaff_x19[0x75];
                *(undefined1 *)((long)unaff_x19 + 0x2f4) = 1;
                if (lVar24 == 0) goto thunk_FUN_02e3ccc4;
                fVar55 = *(float *)(unaff_x19 + 0x5e) +
                         in_stack_00000100._4_4_ * *(float *)(unaff_x19 + 0x5d);
                fVar62 = *(float *)((long)unaff_x19 + 0x4f4);
              }
              puVar8 = System_Collections_Generic_List<AudioListener>_TypeInfo;
              lVar24 = *(long *)(lVar24 + 0x38);
              if (lVar24 == 0) goto thunk_FUN_02e3ccc4;
              fVar60 = *(float *)((long)unaff_x19 + 0x4ac);
              if (((uint)*(float *)(lVar24 + 0x18) <= (uint)fVar60) ||
                 (fVar70 = (float)((int)fVar60 - 1), (uint)*(float *)(lVar24 + 0x18) <= (uint)fVar70
                 )) goto LAB_0603fce4;
              fVar47 = *(float *)((long)unaff_x19 + 0x4d4);
              lVar24 = lVar24 + 0x20;
              fVar56 = *(float *)(lVar24 + (long)(int)fVar60 * (long)(int)unaff_w21 + 0x130);
              auVar58 = ZEXT416((uint)fVar56);
              fVar56 = (fVar55 + fVar47 + fVar62) - fVar56;
              if ((*(short *)(lVar24 + (long)(int)fVar70 * (long)(int)unaff_w21 + 4) == 0xad &&
                   ((uint)fStack0000000000000058 & 1) == 0) &&
                 ((*(int *)((long)unaff_x19 + 0x314) == 0 || (fVar56 < fStack00000000000000ec)))) {
                fStack0000000000000058 = 0.0;
                in_stack_000001a8[10] = fVar70;
                plVar23 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
                in_stack_00001308 = in_stack_00001308 - 1;
                in_stack_00001328 = CONCAT44(0x2d,fVar70);
                goto LAB_06038edc;
              }
              if (*(short *)(lVar24 + (long)(int)fVar60 * (long)(int)unaff_w21 + 4) == 0xad) {
                fStack0000000000000058 = 1.4013e-45;
                plVar23 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
                goto LAB_06038edc;
              }
              if ((char)unaff_x19[0x4c] != '\0' &&
                  (((uint)fStack000000000000006c ^ 0xffffffff) & 1) == 0) {
                fVar62 = *(float *)(unaff_x19 + 0x60) / 100.0;
                fVar60 = *(float *)((long)unaff_x19 + 0x304);
                if ((fVar60 < fVar62) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
                goto LAB_0603fc3c;
                fVar62 = *(float *)((long)unaff_x19 + 0x20c);
                fVar55 = *(float *)(unaff_x19 + 0x4f);
                auVar58 = ZEXT416((uint)fVar55);
                if ((fVar55 < fVar62) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
                goto LAB_0603fc84;
              }
              lVar24 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
              if (*(int *)(lVar24 + 0xe4) == 0) {
                thunk_FUN_02e9a04c();
                lVar24 = *(long *)puVar8;
              }
              if (((((uint)fStack000000000000006c & 1) != 0) &&
                  (iVar14 = *(int *)(*(long *)(lVar24 + 0xb8) + 0xf80), iVar14 != -1)) &&
                 (iVar14 != iStack0000000000000020)) {
                if (*(int *)(lVar24 + 0xe4) == 0) {
                  thunk_FUN_02e9a04c();
                }
                in_stack_00001308 = FUN_0608c590();
                if ((unaff_x19[0x75] == 0) ||
                   (lVar24 = *(long *)(unaff_x19[0x75] + 0x38), lVar24 == 0))
                goto thunk_FUN_02e3ccc4;
                fVar62 = (float)((int)in_stack_000001a8[10] - 1);
                if ((uint)*(float *)(lVar24 + 0x18) <= (uint)fVar62) goto LAB_0603fce4;
                iStack0000000000000020 = iVar14;
                if (*(short *)(lVar24 + (long)(int)fVar62 * (long)(int)unaff_w21 + 0x24) == 0xad) {
                  fStack0000000000000058 = 0.0;
                  in_stack_000001a8[10] = fVar62;
                  plVar23 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
                  in_stack_00001308 = in_stack_00001308 - 1;
                  in_stack_00001328 = CONCAT44(0x2d,fVar62);
                  goto LAB_06038edc;
                }
              }
              if (fVar56 <= fStack00000000000000ec) {
                auVar58 = ZEXT416((uint)fVar66);
                fVar47 = in_stack_00000100._4_4_;
                FUN_0608d070();
LAB_0603cc70:
                fStack000000000000006c = 1.4013e-45;
                fStack0000000000000058 = 0.0;
                uStack0000000000000060 = 1;
                plVar23 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
                goto LAB_06038edc;
              }
              if ((int)unaff_x19[99] == -1) {
                *(undefined4 *)(unaff_x19 + 99) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
              }
              if ((char)unaff_x19[0x4c] != '\0') {
                fVar62 = *(float *)(unaff_x19 + 0x5f);
                if ((fVar62 < *(float *)((long)unaff_x19 + 0x2ec)) &&
                   (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
                  fVar45 = *(float *)((long)unaff_x19 + 0x2ec) +
                           ((in_stack_00000018._4_4_ - fVar56) / (float)((int)unaff_x19[0x98] + 1))
                           / in_stack_00000048._4_4_;
                  if (fVar45 <= fVar62) {
                    fVar45 = fVar62;
                  }
LAB_0603fbd0:
                  *(float *)((long)unaff_x19 + 0x2ec) = fVar45;
                  return;
                }
                fVar62 = *(float *)(unaff_x19 + 0x60) / 100.0;
                fVar60 = *(float *)((long)unaff_x19 + 0x304);
                if ((fVar60 < fVar62) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
                {
LAB_0603fc3c:
                  fVar45 = fVar48;
                  if (0.0 < fVar60) {
                    fVar45 = fVar48 / (1.0 - fVar60);
                  }
                  fVar60 = fVar60 + (fVar48 - fVar69 * (in_stack_00000140 + _UNK_01317b20)) / fVar45
                  ;
                  if (fVar62 <= fVar60) {
                    fVar60 = fVar62;
                  }
                  *(float *)((long)unaff_x19 + 0x304) = fVar60;
                  return;
                }
                fVar62 = *(float *)((long)unaff_x19 + 0x20c);
                fVar55 = *(float *)(unaff_x19 + 0x4f);
                auVar58 = ZEXT416((uint)fVar55);
                if ((fVar55 < fVar62) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
                {
LAB_0603fc84:
                  fVar45 = DAT_01317af0;
                  *(float *)((long)unaff_x19 + 0x264) = fVar62;
                  fVar46 = (fVar62 - *(float *)(unaff_x19 + 0x4d)) * 0.5;
                  if (fVar46 <= fVar45) {
                    fVar46 = fVar45;
                  }
                  fVar46 = (fVar62 - fVar46) * 20.0 + 0.5;
                  fVar45 = _UNK_01317b80;
                  if (fVar46 != INFINITY) {
                    fVar45 = (float)(int)fVar46 / 20.0;
                  }
                  if (fVar45 <= fVar55) {
                    fVar45 = fVar55;
                  }
UnityEngine_XR_Interaction_Toolkit_Interactors_XRGazeInteractor__CalculateSnapColliderSize:
                  *(float *)((long)unaff_x19 + 0x20c) = fVar45;
                  return;
                }
              }
              iVar14 = *(int *)((long)unaff_x19 + 0x314);
              fStack0000000000000058 = 0.0;
              if (iVar14 < 3) {
                if (iVar14 != 0) {
                  if (iVar14 == 1) {
                    lVar24 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
                    if (*(int *)(lVar24 + 0xe4) == 0) {
                      thunk_FUN_02e9a04c();
                      lVar24 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
                    }
                    in_stack_00001328 = DAT_01318128;
                    lVar28 = *(long *)(lVar24 + 0xb8);
                    if (*(int *)(lVar28 + 0x1708) == 0) {
                      in_stack_00001308 = 0xffffffff;
                      in_stack_000001a8[10] = 0.0;
                      in_stack_000001a8[0xb] = 0.0;
                    }
                    else {
                      if (*(int *)(lVar24 + 0xe4) == 0) {
                        thunk_FUN_02e9a04c();
                        lVar28 = *(long *)(*(long *)
                                            System_Collections_Generic_List<AudioListener>_TypeInfo
                                          + 0xb8);
                      }
                      UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableBase_<PlaySequence>d__16<float>__System_Collections_IEnumerator_Reset
                                (&stack0x00001340,lVar28 + 0x1338,
                                 *(undefined8 *)
                                  System_Collections_Generic_List<AndroidAssetPackState>_TypeInfo);
                      memcpy(&stack0x00000990,&stack0x00001340,0x3b8);
                      iVar14 = FUN_0608c590();
                      in_stack_00001308 = iVar14 - 1;
                      iVar14 = *(int *)((long)unaff_x19 + 0x4ac) + -1;
                      unaff_w25 = unaff_w25 + 1;
                      *(int *)((long)unaff_x19 + 0x4ac) = iVar14;
                      in_stack_00001328 = CONCAT44(0x2026,iVar14);
                    }
                    goto LAB_0603cf9c;
                  }
                  if (iVar14 != 2) goto LAB_0603ada8;
                }
LAB_0603cca8:
                auVar58 = ZEXT416((uint)fVar66);
                fVar47 = in_stack_00000100._4_4_;
                FUN_0608d070();
                fStack0000000000000058 = 0.0;
                fStack000000000000006c = 1.4013e-45;
                uStack0000000000000060 = 1;
                plVar23 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
                goto LAB_06038edc;
              }
              if (4 < iVar14) {
                if (iVar14 == 5) {
                  auVar58 = ZEXT416((uint)fVar66);
                  *(undefined1 *)((long)unaff_x19 + 0x37c) = 1;
                  fVar47 = in_stack_00000100._4_4_;
                  FUN_0608d070();
                  *(undefined4 *)((long)unaff_x19 + 0x4ec) = 0;
                  *(undefined4 *)((long)unaff_x19 + 0x4f4) = 0;
                  *(int *)((long)unaff_x19 + 0x4cc) = *(int *)((long)unaff_x19 + 0x4cc) + 1;
                  unaff_x19[0x9a] = 0;
                  goto LAB_0603cc70;
                }
                if (iVar14 != 6) goto LAB_0603ada8;
                lVar24 = unaff_x19[100];
                if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
                  thunk_FUN_02e9a04c();
                }
                uVar19 = FUN_06267b6c(lVar24,0,0);
                if ((uVar19 & 1) != 0) {
                  plVar23 = (long *)unaff_x19[100];
                  uVar64 = (**(code **)(*unaff_x19 + 0x548))();
                  if (plVar23 == (long *)0x0) goto thunk_FUN_02e3ccc4;
                  (**(code **)(*plVar23 + 0x558))(plVar23,uVar64,*(undefined8 *)(*plVar23 + 0x560));
                  lVar24 = unaff_x19[100];
                  if (lVar24 == 0) goto thunk_FUN_02e3ccc4;
                  *(int *)(lVar24 + 0x440) = (int)unaff_x19[0x88];
                  FUN_0607fed4(lVar24,*(undefined4 *)((long)unaff_x19 + 0x4ac),0);
                  plVar23 = (long *)unaff_x19[100];
                  if (plVar23 == (long *)0x0) goto thunk_FUN_02e3ccc4;
                  (**(code **)(*plVar23 + 0x7d8))(plVar23,0,0,*(undefined8 *)(*plVar23 + 0x7e0));
                  *(undefined1 *)(unaff_x19 + 0x66) = 1;
                }
                in_stack_00001328 = CONCAT44(3,in_stack_000001a8[10]);
                goto LAB_0603cf9c;
              }
              if (iVar14 == 3) {
                if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4
                            ) == 0) {
                  thunk_FUN_02e9a04c();
                }
                in_stack_00001308 = FUN_0608c590();
                in_stack_00001328 = CONCAT44(3,fVar68);
LAB_0603cf9c:
                fStack0000000000000058 = 0.0;
                plVar23 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
                goto LAB_06038edc;
              }
              if (iVar14 == 4) goto LAB_0603cca8;
            }
          }
        }
LAB_0603ada8:
        if (uVar12 == 0) {
          if (in_stack_0000133c == 0xad) {
            if ((unaff_x19[0x75] != 0) && (lVar24 = *(long *)(unaff_x19[0x75] + 0x38), lVar24 != 0))
            {
              if ((uint)in_stack_000001a8[10] < (uint)*(float *)(lVar24 + 0x18)) {
                *(undefined1 *)
                 (lVar24 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21 + 400) = 0;
                goto LAB_0603b638;
              }
              goto LAB_0603fce4;
            }
            goto thunk_FUN_02e3ccc4;
          }
          if (*(int *)((long)unaff_x19 + 0x664) == 1) {
            (**(code **)(*unaff_x19 + 0x8c8))();
          }
          else if (*(int *)((long)unaff_x19 + 0x664) == 0) {
            (**(code **)(*unaff_x19 + 0x8b8))();
          }
          if ((uStack0000000000000060 & 1) != 0) {
            in_stack_000001a8[0xc] = in_stack_000001a8[10];
          }
          *(float *)((long)unaff_x19 + 0x4bc) = in_stack_000001a8[10];
          *(int *)((long)unaff_x19 + 0x4c4) = *(int *)((long)unaff_x19 + 0x4c4) + 1;
          if ((unaff_x19[0x75] == 0) || (lVar24 = *(long *)(unaff_x19[0x75] + 0x50), lVar24 == 0))
          goto thunk_FUN_02e3ccc4;
          if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x98)) goto LAB_0603fce4;
          uStack0000000000000060 = 0;
          lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x98) * 0x60;
          *(float *)(lVar24 + 100) = fVar67;
          *(float *)(lVar24 + 0x68) = fVar63;
        }
        else {
          lVar24 = unaff_x19[0x75];
          if ((lVar24 == 0) || (lVar28 = *(long *)(lVar24 + 0x38), lVar28 == 0))
          goto thunk_FUN_02e3ccc4;
          fVar47 = in_stack_000001a8[10];
          if ((uint)*(float *)(lVar28 + 0x18) <= (uint)fVar47) goto LAB_0603fce4;
          *(undefined1 *)(lVar28 + (long)(int)fVar47 * (long)(int)unaff_w21 + 400) = 0;
          *(float *)((long)unaff_x19 + 0x4bc) = fVar47;
          lVar28 = *(long *)(lVar24 + 0x50);
          if (lVar28 == 0) goto thunk_FUN_02e3ccc4;
          uVar43 = *(uint *)(lVar28 + 0x18);
          if (uVar43 <= *(uint *)(unaff_x19 + 0x98)) goto LAB_0603fce4;
          lVar28 = lVar28 + 0x20;
          lVar30 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x98) * 0x60;
          iVar14 = *(int *)(lVar30 + 0xc) + 1;
          *(int *)(lVar30 + 0xc) = iVar14;
          uVar32 = *(uint *)(unaff_x19 + 0x98);
          *(int *)(unaff_x19 + 0x99) = iVar14;
          if (uVar43 <= uVar32) goto LAB_0603fce4;
          lVar30 = lVar28 + (long)(int)uVar32 * 0x60;
          *(float *)(lVar30 + 0x44) = fVar67;
          *(float *)(lVar30 + 0x48) = fVar63;
          *(int *)(lVar24 + 0x20) = *(int *)(lVar24 + 0x20) + 1;
          if (in_stack_0000133c == 0xa0) {
            *(int *)(lVar28 + (long)(int)uVar32 * 0x60) =
                 *(int *)(lVar28 + (long)(int)uVar32 * 0x60) + 1;
          }
        }
      }
      else {
        if (((in_stack_0000133c & 0xfffffffe) == 10) && (*(int *)((long)unaff_x19 + 0x314) == 6)) {
          fVar69 = 0.0;
          if ((0.0 < fVar63) && (*(char *)((long)unaff_x19 + 0x2f4) == '\0')) {
            fVar69 = *(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4ec);
          }
          fVar47 = *(float *)((long)unaff_x19 + 0x4d4);
          auVar58 = ZEXT416((uint)fStack00000000000000ec);
          if (fStack00000000000000ec < (fVar47 - (*(float *)(unaff_x19 + 0x9d) - fVar63)) + fVar69)
          {
            if ((int)unaff_x19[99] == -1) {
              *(float *)(unaff_x19 + 99) = fVar48;
            }
            plVar23 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
            if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) ==
                0) {
              thunk_FUN_02e9a04c();
            }
            in_stack_00001308 = FUN_0608c590();
            lVar24 = unaff_x19[100];
            if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar19 = FUN_06267b6c(lVar24,0,0);
            if ((uVar19 & 1) != 0) {
              plVar41 = (long *)unaff_x19[100];
              uVar64 = (**(code **)(*unaff_x19 + 0x548))();
              if (plVar41 == (long *)0x0) goto thunk_FUN_02e3ccc4;
              (**(code **)(*plVar41 + 0x558))(plVar41,uVar64,*(undefined8 *)(*plVar41 + 0x560));
              lVar24 = unaff_x19[100];
              if (lVar24 == 0) goto thunk_FUN_02e3ccc4;
              *(int *)(lVar24 + 0x440) = (int)unaff_x19[0x88];
              FUN_0607fed4(lVar24,*(undefined4 *)((long)unaff_x19 + 0x4ac),0);
              plVar41 = (long *)unaff_x19[100];
              if (plVar41 == (long *)0x0) goto thunk_FUN_02e3ccc4;
              (**(code **)(*plVar41 + 0x7d8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7e0));
              *(undefined1 *)(unaff_x19 + 0x66) = 1;
            }
LAB_0603b288:
            uVar49 = 3;
LAB_0603b340:
            in_stack_00001328 = CONCAT44(uVar49,fVar48);
            goto LAB_06038edc;
          }
        }
        if ((((in_stack_0000133c - 0x2007 < 0x23) &&
             ((1L << ((ulong)(in_stack_0000133c - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
            (in_stack_0000133c - 10 < 2)) || (in_stack_0000133c == 0xa0)) {
          if (in_stack_0000133c == 0xad) goto LAB_0603b638;
LAB_0603b58c:
          if ((in_stack_0000133c == 0x200b) || (in_stack_0000133c == 0x2060)) goto LAB_0603b638;
          lVar24 = unaff_x19[0x75];
          if ((lVar24 == 0) || (lVar28 = *(long *)(lVar24 + 0x50), lVar28 == 0))
          goto thunk_FUN_02e3ccc4;
          if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x98)) goto LAB_0603fce4;
          lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x98) * 0x60;
          *(int *)(lVar28 + 0x2c) = *(int *)(lVar28 + 0x2c) + 1;
          *(int *)(lVar24 + 0x20) = *(int *)(lVar24 + 0x20) + 1;
        }
        else {
          if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          uVar19 = FUN_055814cc(in_stack_0000133c,0);
          if (((uVar19 & 1) != 0) && (in_stack_0000133c != 0xad)) goto LAB_0603b58c;
        }
        if (in_stack_0000133c == 0xa0) {
          if ((unaff_x19[0x75] == 0) || (lVar24 = *(long *)(unaff_x19[0x75] + 0x50), lVar24 == 0))
          goto thunk_FUN_02e3ccc4;
          if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x98)) goto LAB_0603fce4;
          lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x98) * 0x60;
          *(int *)(lVar24 + 0x20) = *(int *)(lVar24 + 0x20) + 1;
        }
      }
LAB_0603b638:
      if ((*(int *)((long)unaff_x19 + 0x314) == 1) &&
         ((fStack00000000000001b0 != unaff_w22 || (in_stack_0000133c == 0x2d)))) {
        if (unaff_x19[0xcf] == 0) goto thunk_FUN_02e3ccc4;
        fVar48 = *(float *)(unaff_x19 + 0x42);
        fVar47 = (float)FUN_0630f888(unaff_x19[0xcf] + 0x28,0);
        if (unaff_x19[0xcf] == 0) goto thunk_FUN_02e3ccc4;
        fVar69 = (float)FUN_0630f890(unaff_x19[0xcf] + 0x28,0);
        lVar24 = unaff_x19[0xce];
        if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto thunk_FUN_02e3ccc4;
        fVar63 = *(float *)((long)unaff_x19 + 0x444);
        fVar62 = *(float *)(lVar24 + 0x2c);
        fVar67 = (float)FUN_0630fd88(*(long *)(lVar24 + 0x20),0);
        uVar64 = *(undefined8 *)_fStack00000000000000c0;
        fVar67 = fVar63 * in_stack_00000118 * (fVar48 / fVar47) * fVar69 * fVar62 * fVar67;
        if ((in_stack_0000133c == 10) && (*(int *)((long)unaff_x19 + 0x4ac) != (int)unaff_x19[0x96])
           ) {
          if ((unaff_x19[0x75] == 0) || (lVar24 = *(long *)(unaff_x19[0x75] + 0x38), lVar24 == 0))
          goto thunk_FUN_02e3ccc4;
          uVar43 = *(int *)((long)unaff_x19 + 0x4ac) - 1;
          if (*(uint *)(lVar24 + 0x18) <= uVar43) goto LAB_0603fce4;
          if (unaff_x19[0xcf] == 0) goto thunk_FUN_02e3ccc4;
          fVar48 = *(float *)(lVar24 + (long)(int)uVar43 * (long)(int)unaff_w21 + 0x58);
          fVar47 = (float)FUN_0630f888(unaff_x19[0xcf] + 0x28,0);
          if (unaff_x19[0xcf] == 0) goto thunk_FUN_02e3ccc4;
          fVar69 = (float)FUN_0630f890(unaff_x19[0xcf] + 0x28,0);
          lVar24 = unaff_x19[0xce];
          if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto thunk_FUN_02e3ccc4;
          fVar63 = *(float *)((long)unaff_x19 + 0x444);
          fVar62 = *(float *)(lVar24 + 0x2c);
          fVar67 = (float)FUN_0630fd88(*(long *)(lVar24 + 0x20),0);
          if ((unaff_x19[0x75] == 0) || (lVar24 = *(long *)(unaff_x19[0x75] + 0x50), lVar24 == 0))
          goto thunk_FUN_02e3ccc4;
          if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x98)) goto LAB_0603fce4;
          uVar64 = *(undefined8 *)(lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x98) * 0x60 + 100);
          fVar67 = fVar63 * in_stack_00000118 * (fVar48 / fVar47) * fVar69 * fVar62 * fVar67;
        }
        fVar48 = *(float *)((long)unaff_x19 + 0x4f4);
        fVar47 = 0.0;
        fVar69 = 0.0;
        if ((0.0 < fVar48) && (*(char *)((long)unaff_x19 + 0x2f4) == '\0')) {
          fVar69 = *(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4ec);
        }
        fVar63 = *(float *)((long)unaff_x19 + 0x4d4);
        fVar62 = *(float *)(unaff_x19 + 0x9d);
        fVar55 = *(float *)(unaff_x19 + 0xcc);
        fStack0000000000000180 = (float)uVar64;
        fStack0000000000000184 = (float)((ulong)uVar64 >> 0x20);
        if ((char)unaff_x19[0x1e] == '\0') {
          if ((unaff_x19[0xce] == 0) || (lVar24 = *(long *)(unaff_x19[0xce] + 0x20), lVar24 == 0))
          goto thunk_FUN_02e3ccc4;
          FUN_0630fd4c(&stack0x00001340,lVar24,0);
          fVar47 = (float)FUN_0630fb94(&stack0x000011e0,0);
        }
        puVar8 = System_Collections_Generic_List<AudioListener>_TypeInfo;
        fStack0000000000000184 =
             (in_stack_000000b8._4_4_ - fStack0000000000000180) - fStack0000000000000184;
        fVar60 = *(float *)(unaff_x19 + 0x74);
        bVar9 = true;
        if ((fVar60 <= fStack0000000000000184) && (bVar9 = false, !NAN(fVar60))) {
          bVar9 = fVar60 == -1.0;
        }
        if (!bVar9) {
          fStack0000000000000184 = fVar60;
        }
        fVar60 = 1.0;
        if ((uVar15 & 0x18) != 0) {
          fVar60 = _UNK_01317cd8;
        }
        if ((ABS(fVar55) +
             fVar67 * *(float *)(unaff_x19 + 0x5c) *
                      fVar47 * (1.0 - *(float *)((long)unaff_x19 + 0x304)) <
             fVar60 * fStack0000000000000184) &&
           ((fVar63 - (fVar62 - fVar48)) + fVar69 < fStack00000000000000ec)) {
          if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) == 0
             ) {
            thunk_FUN_02e9a04c();
          }
          FUN_0608c948();
          lVar24 = *(long *)(*(long *)puVar8 + 0xb8);
          memcpy(&stack0x00001340,(void *)(lVar24 + 0x810),0x3b8);
          FUN_046b8738(lVar24 + 0x1338,&stack0x00001340,
                       *(undefined8 *)System_Collections_Generic_List<ApplicationInvite>_TypeInfo);
        }
      }
      lVar24 = unaff_x19[0x75];
      if ((lVar24 == 0) || (lVar28 = *(long *)(lVar24 + 0x38), lVar28 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
      lVar28 = lVar28 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * (long)(int)unaff_w21;
      uVar15 = *(uint *)(unaff_x19 + 0x98);
      *(uint *)(lVar28 + 0x5c) = uVar15;
      *(undefined4 *)(lVar28 + 0x60) = *(undefined4 *)((long)unaff_x19 + 0x4cc);
      if ((fStack00000000000001b0 == unaff_w22) ||
         ((in_stack_0000133c < 0xe && ((1 << (ulong)(in_stack_0000133c & 0x1f) & 0x2c00U) != 0)))) {
        lVar24 = *(long *)(lVar24 + 0x50);
        if (lVar24 == 0) goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar24 + 0x18) <= uVar15) goto LAB_0603fce4;
        if (*(int *)(lVar24 + (long)(int)uVar15 * 0x60 + 0x24) == 1) goto LAB_0603b9e0;
      }
      else {
        lVar24 = *(long *)(lVar24 + 0x50);
        if (lVar24 == 0) goto thunk_FUN_02e3ccc4;
LAB_0603b9e0:
        if (*(uint *)(lVar24 + 0x18) <= uVar15) goto LAB_0603fce4;
        *(int *)(lVar24 + (long)(int)uVar15 * 0x60 + 0x6c) = (int)unaff_x19[0x54];
      }
      if (in_stack_0000133c == 9) {
        if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
        fVar47 = (float)FUN_0630f930(unaff_x19[0x20] + 0x28,0);
        if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
        fVar48 = (float)NEON_ucvtf((uint)*(byte *)(unaff_x19[0x20] + 0x1b1));
        fVar72 = *(float *)(unaff_x19 + 0xcc);
        auVar58 = ZEXT416((uint)fVar72);
        fVar69 = fVar66 * fVar47 * fVar48;
        if ((char)unaff_x19[0x1e] == '\0') {
          fVar47 = fVar69 * (float)(int)(fVar72 / fVar69);
          fVar48 = fVar47;
          if (fVar47 <= fVar72) {
            fVar48 = fVar69 + fVar72;
          }
        }
        else {
          fVar47 = fVar69 * (float)(int)(fVar72 / fVar69);
          fVar48 = fVar47;
          if (fVar72 <= fVar47) {
            fVar48 = fVar72 - fVar69;
          }
        }
LAB_0603bc44:
        *(float *)(unaff_x19 + 0xcc) = fVar48;
      }
      else {
        fVar48 = *(float *)(unaff_x19 + 0x5b);
        if (fVar48 == 0.0) {
          fVar48 = *(float *)(unaff_x19 + 0xcc);
          if ((char)unaff_x19[0x1e] == '\0') {
            fVar72 = (float)FUN_0630fb94(&stack0x00001280,0);
            fVar63 = *in_stack_000001a8;
            fVar67 = (float)FUN_063140cc(&stack0x00001270,0);
            if (unaff_x19[0x20] != 0) {
              fVar47 = *(float *)((long)unaff_x19 + 0x304);
              fVar69 = *(float *)(unaff_x19 + 0x5c);
              fVar48 = fVar48 + fVar69 * (1.0 - fVar47) *
                                         (*(float *)((long)unaff_x19 + 0x2d4) +
                                         fVar66 * (fVar72 * fVar63 + fVar67) +
                                         in_stack_00000100._4_4_ *
                                         (fVar71 + fVar46 + *(float *)(unaff_x19[0x20] + 0x1a4)));
              *(float *)(unaff_x19 + 0xcc) = fVar48;
              goto joined_r0x0603bb78;
            }
            goto thunk_FUN_02e3ccc4;
          }
          fVar69 = (float)FUN_063140cc(&stack0x00001270,0);
          if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
          fVar47 = *(float *)((long)unaff_x19 + 0x304);
          auVar58 = ZEXT416((uint)*(float *)(unaff_x19 + 0x5c));
          fVar48 = fVar48 - *(float *)(unaff_x19 + 0x5c) *
                            (1.0 - fVar47) *
                            (*(float *)((long)unaff_x19 + 0x2d4) +
                            fVar66 * fVar69 +
                            in_stack_00000100._4_4_ *
                            (fVar71 + fVar46 + *(float *)(unaff_x19[0x20] + 0x1a4)));
          *(float *)(unaff_x19 + 0xcc) = fVar48;
          if ((uVar12 != 0) || (in_stack_0000133c == 0x200b)) {
            fVar69 = in_stack_00000100._4_4_ * *(float *)((long)unaff_x19 + 0x2e4);
            auVar58 = ZEXT416((uint)fVar69);
            fVar47 = in_stack_00000100._4_4_;
            fVar48 = fVar48 - fVar69;
            goto LAB_0603bc44;
          }
        }
        else {
          if (((*(char *)((long)unaff_x19 + 0x2dc) != '\0') && (in_stack_0000133c < 0x3b)) &&
             ((1L << ((ulong)in_stack_0000133c & 0x3f) & 0x400500000000000U) != 0)) {
            fVar48 = fVar48 * 0.5;
          }
          if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
          fVar47 = *(float *)((long)unaff_x19 + 0x304);
          fVar69 = *(float *)(unaff_x19 + 0xcc);
          fVar48 = fVar69 + *(float *)(unaff_x19 + 0x5c) *
                            (1.0 - fVar47) *
                            (*(float *)((long)unaff_x19 + 0x2d4) +
                            (fVar48 - fVar72) +
                            in_stack_00000100._4_4_ * (fVar46 + *(float *)(unaff_x19[0x20] + 0x1a4))
                            );
          *(float *)(unaff_x19 + 0xcc) = fVar48;
joined_r0x0603bb78:
          if ((uVar12 != 0) || (auVar58 = ZEXT416((uint)fVar69), in_stack_0000133c == 0x200b)) {
            fVar69 = in_stack_00000100._4_4_ * *(float *)((long)unaff_x19 + 0x2e4);
            auVar58 = ZEXT416((uint)fVar69);
            fVar47 = in_stack_00000100._4_4_;
            fVar48 = fVar48 + fVar69;
            goto LAB_0603bc44;
          }
        }
      }
      lVar24 = unaff_x19[0x75];
      if ((lVar24 == 0) || (lVar28 = *(long *)(lVar24 + 0x38), lVar28 == 0))
      goto thunk_FUN_02e3ccc4;
      fVar69 = in_stack_000001a8[10];
      if ((uint)*(float *)(lVar28 + 0x18) <= (uint)fVar69) goto LAB_0603fce4;
      *(float *)(lVar28 + (long)(int)fVar69 * (long)(int)unaff_w21 + 0x13c) = fVar48;
      if (in_stack_0000133c == 0xd) {
        auVar58 = ZEXT816(0);
        *(float *)(unaff_x19 + 0xcc) = *(float *)((long)unaff_x19 + 0x44c) + 0.0;
      }
      if ((*(int *)((long)unaff_x19 + 0x314) == 5) &&
         (((0xd < in_stack_0000133c || ((1 << (ulong)(in_stack_0000133c & 0x1f) & 0x2c00U) == 0)) &&
          (1 < in_stack_0000133c - 0x2028)))) {
        lVar28 = *(long *)(lVar24 + 0x58);
        if (lVar28 == 0) goto thunk_FUN_02e3ccc4;
        iVar14 = *(int *)((long)unaff_x19 + 0x4cc) + 1;
        if (*(int *)(lVar28 + 0x18) < iVar14) {
          if (*(int *)(*(long *)System_Collections_Generic_List<AchievementDefinition>_TypeInfo +
                      0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          FUN_03ab3b84((long *)(lVar24 + 0x58),iVar14,1,
                       *(undefined8 *)
                        System_Collections_Generic_List<XmlEventCache_XmlEvent[]>_TypeInfo);
          lVar24 = unaff_x19[0x75];
          if (lVar24 == 0) goto thunk_FUN_02e3ccc4;
        }
        lVar28 = *(long *)(lVar24 + 0x58);
        if (lVar28 == 0) goto thunk_FUN_02e3ccc4;
        uVar15 = *(uint *)((long)unaff_x19 + 0x4cc);
        if (*(uint *)(lVar28 + 0x18) <= uVar15) goto LAB_0603fce4;
        lVar28 = lVar28 + 0x20;
        lVar30 = lVar28 + (long)(int)uVar15 * 0x14;
        *(int *)(lVar30 + 8) = (int)unaff_x19[0x9a];
        fVar69 = *(float *)(lVar30 + 0x10);
        auVar58 = ZEXT416((uint)fVar69);
        fVar48 = *(float *)(unaff_x19 + 0x9c);
        if (fVar69 <= *(float *)(unaff_x19 + 0x9c)) {
          fVar48 = fVar69;
        }
        *(float *)(lVar30 + 0x10) = fVar48;
        if (*(char *)((long)unaff_x19 + 0x37c) != '\0') {
          *(undefined1 *)((long)unaff_x19 + 0x37c) = 0;
          *(undefined4 *)(lVar28 + (long)(int)uVar15 * 0x14) =
               *(undefined4 *)((long)unaff_x19 + 0x4ac);
        }
        fVar69 = in_stack_000001a8[10];
        *(float *)(lVar28 + (long)(int)uVar15 * 0x14 + 4) = fVar69;
      }
      uVar15 = in_stack_0000133c;
      if (((in_stack_0000133c < 0xc) && ((1 << (ulong)(in_stack_0000133c & 0x1f) & 0xc08U) != 0)) ||
         ((in_stack_0000133c - 0x2028 < 2 ||
          ((in_stack_0000133c == 0x2d && fStack00000000000001b0 == unaff_w22 ||
           (fVar69 == fStack0000000000000050)))))) {
        if (0.0 < *(float *)((long)unaff_x19 + 0x4f4)) {
          fVar47 = *(float *)((long)unaff_x19 + 0x4e4);
          fVar48 = *(float *)((long)unaff_x19 + 0x4ec);
          if (*(int *)(*(long *)PTR_DAT_06a2ef88 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          fVar47 = fVar47 - fVar48;
          if (((fStack0000000000000054 < ABS(fVar47)) &&
              (*(char *)((long)unaff_x19 + 0x2f4) == '\0')) &&
             (*(char *)((long)unaff_x19 + 0x37c) == '\0')) {
            FUN_0608cd04();
            puVar8 = System_Collections_Generic_List<AudioListener>_TypeInfo;
            lVar24 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
            *(float *)(unaff_x19 + 0x9c) = *(float *)(unaff_x19 + 0x9c) - fVar47;
            *(float *)((long)unaff_x19 + 0x4f4) = fVar47 + *(float *)((long)unaff_x19 + 0x4f4);
            if (*(int *)(lVar24 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
              lVar24 = *(long *)puVar8;
            }
            lVar28 = *(long *)(lVar24 + 0xb8);
            if (*(int *)(lVar28 + 0x838) == (int)unaff_x19[0x98]) {
              if (*(int *)(lVar24 + 0xe4) == 0) {
                thunk_FUN_02e9a04c();
                lVar28 = *(long *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo
                                  + 0xb8);
              }
              UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableBase_<PlaySequence>d__16<float>__System_Collections_IEnumerator_Reset
                        (&stack0x00000200,lVar28 + 0x1338,
                         *(undefined8 *)
                          System_Collections_Generic_List<AndroidAssetPackState>_TypeInfo);
              puVar8 = System_Collections_Generic_List<AudioListener>_TypeInfo;
              lVar24 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
              memcpy((void *)(*(long *)(lVar24 + 0xb8) + 0x810),&stack0x00000200,0x3b8);
              thunk_FUN_02ee2be8(*(long *)(lVar24 + 0xb8) + 0x8a8,0);
              lVar24 = *(long *)(*(long *)puVar8 + 0xb8);
              *(float *)(lVar24 + 0x848) = fVar47 + *(float *)(lVar24 + 0x848);
              *(float *)(lVar24 + 0x894) = fVar47 + *(float *)(lVar24 + 0x894);
              memcpy(&stack0x00001340,(void *)(lVar24 + 0x810),0x3b8);
              FUN_046b8738(lVar24 + 0x1338,&stack0x00001340,
                           *(undefined8 *)
                            System_Collections_Generic_List<ApplicationInvite>_TypeInfo);
            }
          }
        }
        fVar69 = *(float *)((long)unaff_x19 + 0x4f4);
        *(undefined1 *)((long)unaff_x19 + 0x37c) = 0;
        fVar48 = *(float *)(unaff_x19 + 0x9d) - fVar69;
        fVar47 = *(float *)(unaff_x19 + 0x9c);
        if (fVar48 <= *(float *)(unaff_x19 + 0x9c)) {
          fVar47 = fVar48;
        }
        fVar72 = *(float *)((long)unaff_x19 + 0x4e4);
        *(float *)(unaff_x19 + 0x9c) = fVar47;
        if (in_stack_00001334 == '\0') {
          in_stack_00001338 = fVar47;
        }
        if ((*(char *)((long)unaff_x19 + 0x374) != '\0') &&
           (((int)unaff_x19[0x6d] <= *(int *)((long)unaff_x19 + 0x4ac) ||
            ((int)unaff_x19[0x6e] <= (int)unaff_x19[0x98])))) {
          in_stack_00001334 = '\x01';
        }
        lVar24 = unaff_x19[0x75];
        if ((lVar24 == 0) || (lVar28 = *(long *)(lVar24 + 0x50), lVar28 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x98)) goto LAB_0603fce4;
        lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x98) * 0x60;
        iVar17 = (int)unaff_x19[0x96];
        *(int *)(lVar28 + 0x38) = iVar17;
        iVar14 = iVar17;
        if (iVar17 <= *(int *)((long)unaff_x19 + 0x4b4)) {
          iVar14 = *(int *)((long)unaff_x19 + 0x4b4);
        }
        *(int *)((long)unaff_x19 + 0x4b4) = iVar14;
        *(int *)(lVar28 + 0x3c) = iVar14;
        iVar36 = *(int *)((long)unaff_x19 + 0x4ac);
        *(int *)(unaff_x19 + 0x97) = iVar36;
        *(int *)(lVar28 + 0x40) = iVar36;
        iVar16 = *(int *)((long)unaff_x19 + 0x4b4);
        if (iVar14 <= *(int *)((long)unaff_x19 + 0x4bc)) {
          iVar16 = *(int *)((long)unaff_x19 + 0x4bc);
        }
        *(int *)((long)unaff_x19 + 0x4bc) = iVar16;
        *(int *)(lVar28 + 0x44) = iVar16;
        *(int *)(lVar28 + 0x24) = (iVar36 - iVar17) + 1;
        iVar14 = *(int *)((long)unaff_x19 + 0x4c4);
        *(int *)(lVar28 + 0x28) = iVar14;
        *(int *)(lVar28 + 0x30) = (iVar16 - (iVar17 + iVar14)) + 1;
        lVar24 = *(long *)(lVar24 + 0x38);
        if (lVar24 == 0) goto thunk_FUN_02e3ccc4;
        if ((uint)*(float *)(lVar24 + 0x18) <= (uint)in_stack_000001a8[0xc]) goto LAB_0603fce4;
        *(undefined4 *)(lVar28 + 0x70) =
             *(undefined4 *)
              (lVar24 + (long)(int)in_stack_000001a8[0xc] * (long)(int)unaff_w21 + 0x114);
        *(float *)(lVar28 + 0x74) = fVar48;
        lVar24 = unaff_x19[0x75];
        if ((lVar24 == 0) || (lVar28 = *(long *)(lVar24 + 0x50), lVar28 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x98)) goto LAB_0603fce4;
        lVar24 = *(long *)(lVar24 + 0x38);
        if (lVar24 == 0) goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar24 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4bc)) goto LAB_0603fce4;
        fVar72 = fVar72 - fVar69;
        auVar58 = ZEXT416((uint)fVar72);
        lVar28 = lVar28 + 0x20 + (long)(int)*(uint *)(unaff_x19 + 0x98) * 0x60;
        *(undefined4 *)(lVar28 + 0x58) =
             *(undefined4 *)
              (lVar24 + (long)(int)*(uint *)((long)unaff_x19 + 0x4bc) * (long)(int)unaff_w21 + 0x120
              );
        *(float *)(lVar28 + 0x5c) = fVar72;
        lVar24 = unaff_x19[0x75];
        if ((lVar24 == 0) || (lVar28 = *(long *)(lVar24 + 0x50), lVar28 == 0))
        goto thunk_FUN_02e3ccc4;
        uVar43 = *(uint *)(unaff_x19 + 0x98);
        if (*(uint *)(lVar28 + 0x18) <= uVar43) goto LAB_0603fce4;
        lVar28 = lVar28 + 0x20;
        lVar30 = lVar28 + (long)(int)uVar43 * 0x60;
        *(float *)(lVar30 + 0x28) = *(float *)(lVar30 + 0x58) - fVar66 * fVar45;
        *(float *)(lVar30 + 0x40) = in_stack_00000140;
        if (*(int *)(lVar30 + 4) == 1) {
          *(int *)(lVar28 + (long)(int)uVar43 * 0x60 + 0x4c) = (int)unaff_x19[0x54];
        }
        if ((unaff_x19[0x20] == 0) || (lVar30 = *(long *)(lVar24 + 0x38), lVar30 == 0))
        goto thunk_FUN_02e3ccc4;
        uVar32 = *(uint *)((long)unaff_x19 + 0x4bc);
        if (*(uint *)(lVar30 + 0x18) <= uVar32) goto LAB_0603fce4;
        if ((*(char *)(lVar30 + 0x20 + (long)(int)uVar32 * (long)(int)unaff_w21 + 0x170) == '\0') &&
           (uVar32 = *(uint *)(unaff_x19 + 0x97), *(uint *)(lVar30 + 0x18) <= uVar32))
        goto LAB_0603fce4;
        fVar47 = *(float *)(unaff_x19 + 0x5c) *
                 (1.0 - *(float *)((long)unaff_x19 + 0x304)) *
                 (*(float *)((long)unaff_x19 + 0x2d4) +
                 in_stack_00000100._4_4_ * (fVar71 + fVar46 + *(float *)(unaff_x19[0x20] + 0x1a4)));
        fVar46 = -fVar47;
        if ((char)unaff_x19[0x1e] != '\0') {
          fVar46 = fVar47;
        }
        lVar28 = lVar28 + (long)(int)uVar43 * 0x60;
        *(float *)(lVar28 + 0x3c) =
             *(float *)(lVar30 + 0x20 + (long)(int)uVar32 * (long)(int)unaff_w21 + 0x11c) + fVar46;
        fVar47 = 0.0 - *(float *)((long)unaff_x19 + 0x4f4);
        *(float *)(lVar28 + 0x34) = fVar47;
        *(float *)(lVar28 + 0x38) = fVar48;
        *(float *)(lVar28 + 0x2c) = fStack000000000000005c + (fVar72 - fVar48);
        *(float *)(lVar28 + 0x30) = fVar72;
        plVar23 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
        if ((((in_stack_0000133c & 0xfffffffe) == 10) ||
            (fStack00000000000001b0 == unaff_w22 && in_stack_0000133c == 0x2d)) ||
           (in_stack_0000133c - 0x2028 < 2)) {
          if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) == 0
             ) {
            thunk_FUN_02e9a04c();
          }
          FUN_0608c948();
          lVar24 = unaff_x19[0x98];
          iVar17 = *(int *)((long)unaff_x19 + 0x4ac);
          in_stack_000001a8[0x10] = 0.0;
          in_stack_000001a8[0x11] = 0.0;
          iVar14 = (int)lVar24 + 1;
          lVar24 = unaff_x19[0x75];
          *(int *)(unaff_x19 + 0x98) = iVar14;
          *(int *)(unaff_x19 + 0x96) = iVar17 + 1;
          if ((lVar24 != 0) && (*(long *)(lVar24 + 0x50) != 0)) {
            if (*(int *)(*(long *)(lVar24 + 0x50) + 0x18) <= iVar14) {
              FUN_0608cec0();
              lVar24 = unaff_x19[0x75];
              if (lVar24 == 0) goto thunk_FUN_02e3ccc4;
            }
            lVar24 = *(long *)(lVar24 + 0x38);
            if (lVar24 != 0) {
              if ((uint)in_stack_000001a8[10] < (uint)*(float *)(lVar24 + 0x18)) {
                fVar46 = *(float *)(lVar24 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21
                                   + 0x14c);
                if (*(float *)(unaff_x19 + 0x5e) == DAT_01317908) {
                  if ((in_stack_0000133c == 0x2029) || (fVar47 = 0.0, in_stack_0000133c == 10)) {
                    fVar47 = *(float *)((long)unaff_x19 + 0x2fc);
                  }
                  uVar21 = 0;
                  fVar47 = fVar46 + (0.0 - *(float *)(unaff_x19 + 0x9d)) +
                           in_stack_00000048._4_4_ *
                           (fStack0000000000000044 + *(float *)((long)unaff_x19 + 0x2ec)) +
                           in_stack_00000100._4_4_ * (*(float *)(unaff_x19 + 0x5d) + fVar47) +
                           *(float *)((long)unaff_x19 + 0x4f4);
                }
                else {
                  if ((in_stack_0000133c == 0x2029) || (fVar47 = 0.0, in_stack_0000133c == 10)) {
                    fVar47 = *(float *)((long)unaff_x19 + 0x2fc);
                  }
                  uVar21 = 1;
                  fVar47 = *(float *)((long)unaff_x19 + 0x4f4) +
                           *(float *)(unaff_x19 + 0x5e) +
                           in_stack_00000100._4_4_ * (*(float *)(unaff_x19 + 0x5d) + fVar47);
                }
                lVar24 = *plVar23;
                *(float *)((long)unaff_x19 + 0x4f4) = fVar47;
                *(undefined1 *)((long)unaff_x19 + 0x2f4) = uVar21;
                if (*(int *)(lVar24 + 0xe4) == 0) {
                  thunk_FUN_02e9a04c();
                  lVar24 = *plVar23;
                }
                fVar48 = *(float *)(unaff_x19 + 0x89);
                uVar64 = *(undefined8 *)(*(long *)(lVar24 + 0xb8) + 0x1730);
                *(float *)((long)unaff_x19 + 0x4ec) = fVar46;
                fVar47 = *(float *)((long)unaff_x19 + 0x44c);
                auVar58._0_8_ = NEON_rev64(uVar64,4);
                auVar58._8_8_ = 0;
                *(ulong *)(in_stack_000001a8 + 0x18) = auVar58._0_8_;
                *(float *)(unaff_x19 + 0xcc) = fVar48 + 0.0 + fVar47;
                FUN_0608c948();
                FUN_0608c948();
                *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
                fStack000000000000006c = 1.4013e-45;
                uStack0000000000000060 = 1;
                goto LAB_06038edc;
              }
              goto LAB_0603fce4;
            }
          }
          goto thunk_FUN_02e3ccc4;
        }
        if (in_stack_0000133c == 3) {
          if (unaff_x19[0x92] == 0) goto thunk_FUN_02e3ccc4;
          in_stack_00001308 = (uint)*(undefined8 *)(unaff_x19[0x92] + 0x18);
          uVar15 = 3;
        }
      }
      lVar24 = *(long *)(lVar24 + 0x38);
      if (lVar24 == 0) goto thunk_FUN_02e3ccc4;
      fVar48 = in_stack_000001a8[10];
      fVar46 = *(float *)(lVar24 + 0x18);
      if ((uint)fVar46 <= (uint)fVar48) goto LAB_0603fce4;
      lVar24 = lVar24 + 0x20;
      if (*(char *)(lVar24 + (long)(int)fVar48 * (long)(int)unaff_w21 + 0x170) != '\0') {
        lVar28 = lVar24 + (long)(int)fVar48 * (long)(int)unaff_w21;
        auVar53 = *(undefined1 (*) [16])(in_stack_000001a8 + 0x1d);
        auVar59 = NEON_ext(auVar53,auVar53,8,1);
        uVar64 = *(undefined8 *)(lVar28 + 0xf4);
        fVar47 = (float)uVar64;
        uVar65 = *(undefined8 *)(lVar28 + 0x100);
        fVar69 = (float)uVar65;
        fVar71 = (float)((ulong)uVar65 >> 0x20);
        auVar58._0_4_ = (float)-(uint)(auVar53._0_4_ < fVar47);
        auVar58._4_4_ = (float)-(uint)(auVar53._4_4_ < (float)((ulong)uVar64 >> 0x20));
        auVar58._8_4_ = -(uint)(fVar69 < auVar59._0_4_);
        auVar58._12_4_ = -(uint)(fVar71 < auVar59._4_4_);
        auVar59._8_4_ = fVar69;
        auVar59._0_8_ = uVar64;
        auVar59._12_4_ = fVar71;
        auVar53 = auVar53 ^ (auVar53 ^ auVar59) & ~auVar58;
        *(long *)(in_stack_000001a8 + 0x1f) = auVar53._8_8_;
        *(long *)(in_stack_000001a8 + 0x1d) = auVar53._0_8_;
      }
      if ((((int)unaff_x19[0x61] != 3) && ((int)unaff_x19[0x61] != 0)) ||
         ((*(uint *)((long)unaff_x19 + 0x314) < 7 &&
          ((1 << (ulong)(*(uint *)((long)unaff_x19 + 0x314) & 0x1f) & 0x4aU) != 0)))) {
        fVar69 = (float)((int)fVar48 + 1);
        if ((int)fVar69 < (int)fStack0000000000000064) {
          if ((uint)fVar46 <= (uint)fVar69) goto LAB_0603fce4;
          uVar42 = *(undefined2 *)(lVar24 + (long)(int)fVar69 * (long)(int)unaff_w21 + 4);
        }
        else {
          uVar42 = 0;
        }
        if ((((uVar12 == 0) && (uVar15 != 0x2d)) && (uVar15 != 0x200b)) && (uVar15 != 0xad)) {
          if (*(char *)((long)unaff_x19 + 0x30d) == '\0') goto LAB_0603c69c;
LAB_0603c510:
          if (((uint)fStack000000000000006c & 1) == 0) {
            fStack000000000000006c = 0.0;
          }
          else {
            uVar12 = (uint)(uVar12 == 0 || in_stack_0000133c == 0xa0) &
                     ((uint)(in_stack_0000133c != 0xad) | (uint)fStack0000000000000058) ^ 1;
LAB_0603c548:
            fStack000000000000006c = 1.4013e-45;
            plVar23 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor__PreprocessInteractor:
            if (*(int *)(*plVar23 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            FUN_0608c948();
            if (uVar12 != 0) goto LAB_0603c590;
          }
        }
        else {
          if (*(char *)((long)unaff_x19 + 0x30d) != '\0') goto LAB_0603c510;
          if ((int)uVar15 < 0x2007) {
            if (uVar15 == 0x2d) {
              if (0 < (int)fVar48) {
                if ((uint)fVar46 <= (int)fVar48 - 1U) goto LAB_0603fce4;
                uVar42 = *(undefined2 *)(lVar24 + (ulong)((int)fVar48 - 1U) * (ulong)unaff_w21 + 4);
                if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_02e9a04c();
                }
                uVar19 = FUN_0557df5c(uVar42,0);
                if ((uVar19 & 1) != 0) {
                  if ((unaff_x19[0x75] == 0) ||
                     (lVar24 = *(long *)(unaff_x19[0x75] + 0x38), lVar24 == 0))
                  goto thunk_FUN_02e3ccc4;
                  if (*(uint *)(lVar24 + 0x18) <= (int)in_stack_000001a8[10] - 1U)
                  goto LAB_0603fce4;
                  if (*(int *)(lVar24 + (long)(int)((int)in_stack_000001a8[10] - 1U) *
                                        (long)(int)unaff_w21 + 0x5c) == (int)unaff_x19[0x98])
                  goto LAB_0603c5f8;
                }
              }
            }
            else if (uVar15 == 0xa0) goto LAB_0603c69c;
LAB_0603cad8:
            plVar23 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
            lVar24 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
            if (*(int *)(lVar24 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
              lVar24 = *plVar23;
            }
            fStack000000000000006c = 0.0;
            uVar12 = 0;
            *(undefined4 *)(*(long *)(lVar24 + 0xb8) + 0xf80) = 0xffffffff;
            goto 
            UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor__PreprocessInteractor;
          }
          if (((0x28 < uVar15 - 0x2007) ||
              ((1L << ((ulong)(uVar15 - 0x2007) & 0x3f) & 0x10000000401U) == 0)) &&
             (uVar15 != 0x2060)) goto LAB_0603cad8;
LAB_0603c69c:
          if (*(int *)(*(long *)System_Collections_Generic_List<AchievementProgress>_TypeInfo + 0xe4
                      ) == 0) {
            thunk_FUN_02e9a04c();
          }
          uVar19 = FUN_060b1e64(uVar15,0);
          if ((uVar19 & 1) == 0) {
LAB_0603c6e8:
            if (*(int *)(*(long *)System_Collections_Generic_List<AchievementProgress>_TypeInfo +
                        0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar19 = FUN_060b1ec0(in_stack_0000133c,0);
            if ((uVar19 & 1) != 0) goto LAB_0603c714;
            if (*(char *)((long)unaff_x19 + 0x30d) != '\0') goto LAB_0603c510;
            if (*(int *)(*(long *)System_Collections_Generic_List<AchievementProgress>_TypeInfo +
                        0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar19 = FUN_060b1ec0(uVar42,0);
            if ((uVar19 & 1) == 0) goto LAB_0603c510;
            if (*(int *)(*(long *)System_Collections_Generic_List<object[]>_TypeInfo + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            lVar24 = FUN_060a80a0(0);
            if ((lVar24 != 0) && (*(long *)(lVar24 + 0x18) != 0)) {
              uVar19 = FUN_052f86ac(*(long *)(lVar24 + 0x18),uVar42,
                                    *(undefined8 *)
                                     System_Collections_Generic_List<ValueTuple<Rect,_Rect,_VisualElement>>_TypeInfo
                                   );
              if ((uVar19 & 1) != 0) goto LAB_0603c510;
LAB_0603cb44:
              uVar12 = 0;
              plVar23 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
              goto 
              UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor__PreprocessInteractor;
            }
            goto thunk_FUN_02e3ccc4;
          }
          if (*(int *)(*(long *)System_Collections_Generic_List<object[]>_TypeInfo + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          uVar19 = FUN_060a82b4(0);
          if ((uVar19 & 1) != 0) goto LAB_0603c6e8;
LAB_0603c714:
          if (*(int *)(*(long *)System_Collections_Generic_List<object[]>_TypeInfo + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          lVar24 = FUN_060a80a0(0);
          if ((lVar24 == 0) || (*(long *)(lVar24 + 0x10) == 0)) goto thunk_FUN_02e3ccc4;
          uVar19 = FUN_052f86ac(*(long *)(lVar24 + 0x10),in_stack_0000133c,
                                *(undefined8 *)
                                 System_Collections_Generic_List<ValueTuple<Rect,_Rect,_VisualElement>>_TypeInfo
                               );
          if ((int)fStack0000000000000050 <= (int)in_stack_000001a8[10]) {
            if ((uVar19 & 1) == 0) {
              fStack000000000000006c = 0.0;
              goto LAB_0603cb44;
            }
LAB_0603c85c:
            uVar12 = (uint)(uVar12 != 0);
            if (fVar50 != fVar51 || (((uint)fStack000000000000006c ^ 0xffffffff) & 1) != 0)
            goto LAB_0603c5f8;
            goto LAB_0603c548;
          }
          if (*(int *)(*(long *)System_Collections_Generic_List<object[]>_TypeInfo + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          lVar24 = FUN_060a80a0(0);
          if ((lVar24 == 0) || (*(long *)(lVar24 + 0x18) == 0)) goto thunk_FUN_02e3ccc4;
          uVar15 = FUN_052f86ac(*(long *)(lVar24 + 0x18),uVar42,
                                *(undefined8 *)
                                 System_Collections_Generic_List<ValueTuple<Rect,_Rect,_VisualElement>>_TypeInfo
                               );
          if ((uVar19 & 1) != 0) goto LAB_0603c85c;
          fStack000000000000006c = (float)(uVar15 & (uint)fStack000000000000006c);
          uVar12 = (uint)fStack000000000000006c & (uint)(uVar12 != 0);
          plVar23 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
          if ((((uint)fStack000000000000006c & 1) != 0) || (((uVar15 ^ 1) & 1) != 0))
          goto UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor__PreprocessInteractor;
          fStack000000000000006c = 0.0;
          if (uVar12 == 0) goto LAB_0603c5f8;
LAB_0603c590:
          if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) == 0
             ) {
            thunk_FUN_02e9a04c();
          }
          FUN_0608c948();
        }
      }
LAB_0603c5f8:
      plVar23 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
      if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      FUN_0608c948();
      *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
LAB_06038edc:
      do {
        unaff_x28 = &stack0x000011b0;
        lVar24 = unaff_x19[0x92];
        in_stack_00001308 = in_stack_00001308 + 1;
        if (lVar24 == 0) goto thunk_FUN_02e3ccc4;
        if ((int)*(uint *)(lVar24 + 0x18) <= (int)in_stack_00001308) {
LAB_0603cfc8:
          if ((char)unaff_x19[0x4c] == '\0') {
LAB_0603d08c:
            iVar14 = *(int *)((long)unaff_x19 + 0x26c);
            iVar17 = (int)unaff_x19[0x4e];
          }
          else {
            fVar47 = *(float *)((long)unaff_x19 + 0x264);
            auVar58 = ZEXT416((uint)_UNK_01317b9c);
            if (fVar47 - *(float *)(unaff_x19 + 0x4d) <= _UNK_01317b9c) goto LAB_0603d08c;
            fVar45 = *(float *)((long)unaff_x19 + 0x20c);
            fVar46 = *(float *)((long)unaff_x19 + 0x27c);
            auVar58 = ZEXT416((uint)fVar46);
            iVar14 = *(int *)((long)unaff_x19 + 0x26c);
            iVar17 = (int)unaff_x19[0x4e];
            if ((fVar45 < fVar46) && (iVar14 < iVar17)) {
              if (*(float *)((long)unaff_x19 + 0x304) < *(float *)(unaff_x19 + 0x60) / 100.0) {
                *(undefined4 *)((long)unaff_x19 + 0x304) = 0;
              }
              fVar66 = DAT_01317af0;
              *(float *)(unaff_x19 + 0x4d) = fVar45;
              fVar47 = (fVar47 - fVar45) * 0.5;
              if (fVar47 <= fVar66) {
                fVar47 = fVar66;
              }
              fVar66 = (fVar45 + fVar47) * 20.0 + 0.5;
              fVar45 = _UNK_01317b80;
              if (fVar66 != INFINITY) {
                fVar45 = (float)(int)fVar66 / 20.0;
              }
              if (fVar46 <= fVar45) {
                fVar45 = fVar46;
              }
              goto 
              UnityEngine_XR_Interaction_Toolkit_Interactors_XRGazeInteractor__CalculateSnapColliderSize
              ;
            }
          }
          *(undefined1 *)((long)unaff_x19 + 0x274) = 1;
          if (iVar17 <= iVar14) {
            uVar64 = FUN_05603500((long)unaff_x19 + 0x26c,0);
            uVar65 = FUN_05618860((long)unaff_x19 + 0x20c,0);
            uVar64 = FUN_0548db04(*(undefined8 *)
                                   System_Collections_Generic_List<BigInteger>_TypeInfo,uVar64,
                                  *(undefined8 *)
                                   System_Collections_Generic_List<BaseInvokableCall>_TypeInfo,
                                  uVar65,0);
            if (*(int *)(*unaff_x29 + 0xe4) == 0) {
              thunk_FUN_02e9a04c(*unaff_x29);
            }
            FUN_062244a4(uVar64,0);
          }
          if ((in_stack_000001a8[10] == 0.0) ||
             ((in_stack_000001a8[10] == 1.4013e-45 && (uVar13 == 3)))) {
            (**(code **)(*unaff_x19 + 0x958))();
            goto LAB_0603d144;
          }
          lVar24 = *plVar23;
          if (*(int *)(lVar24 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
            lVar24 = *plVar23;
          }
          plVar41 = (long *)System_Collections_Generic_List<byte[]>_TypeInfo;
          lVar24 = **(long **)(lVar24 + 0xb8);
          if (lVar24 == 0) goto thunk_FUN_02e3ccc4;
          if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0xd5)) goto LAB_0603fce4;
          iVar14 = *(int *)(lVar24 + (long)(int)*(uint *)(unaff_x19 + 0xd5) * 0x38 + 0x54) << 2;
          if ((unaff_x19[0x75] == 0) || (lVar24 = *(long *)(unaff_x19[0x75] + 0x60), lVar24 == 0))
          goto thunk_FUN_02e3ccc4;
          if (*(int *)(*(long *)System_Collections_Generic_List<byte[]>_TypeInfo + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          if (*(int *)(lVar24 + 0x18) == 0) goto LAB_0603fce4;
          FUN_060a5124(lVar24 + 0x20,0,0);
          fStack00000000000000c0 = (float)FUN_031c4efc(0);
          iVar17 = (int)unaff_x19[0x53];
          lVar24 = unaff_x19[0xef];
          in_stack_000000b8._4_4_ = fVar47;
          if (iVar17 < 0x401) {
            if (iVar17 == 0x100) {
              if (*(int *)((long)unaff_x19 + 0x314) == 5) {
                if (lVar24 == 0) goto thunk_FUN_02e3ccc4;
                if ((*(uint *)(lVar24 + 0x18) & 0xfffffffe) == 0) goto LAB_0603fce4;
                if ((unaff_x19[0x75] == 0) ||
                   (lVar28 = *(long *)(unaff_x19[0x75] + 0x58), lVar28 == 0))
                goto thunk_FUN_02e3ccc4;
                if (*(uint *)(lVar28 + 0x18) <= uStack0000000000000040) goto LAB_0603fce4;
                fVar45 = *(float *)(lVar28 + (long)(int)uStack0000000000000040 * 0x14 + 0x28);
              }
              else {
                if (lVar24 == 0) goto thunk_FUN_02e3ccc4;
                if ((*(uint *)(lVar24 + 0x18) & 0xfffffffe) == 0) goto LAB_0603fce4;
                fVar45 = *(float *)((long)unaff_x19 + 0x4d4);
              }
              in_stack_000000b8._4_4_ = *(float *)(lVar24 + 0x34);
              fStack000000000000002c = (0.0 - fVar45) - fStack0000000000000028;
              fVar47 = *(float *)(lVar24 + 0x2c);
              fVar45 = *(float *)(lVar24 + 0x30);
LAB_0603d53c:
              fVar47 = in_stack_00000030 + 0.0 + fVar47;
              fVar45 = fVar45 + fStack000000000000002c;
            }
            else {
              if (iVar17 != 0x200) {
                if (iVar17 != 0x400) goto LAB_0603d550;
                if (*(int *)((long)unaff_x19 + 0x314) == 5) {
                  if (lVar24 == 0) goto thunk_FUN_02e3ccc4;
                  if (*(int *)(lVar24 + 0x18) == 0) goto LAB_0603fce4;
                  if ((unaff_x19[0x75] == 0) ||
                     (lVar28 = *(long *)(unaff_x19[0x75] + 0x58), lVar28 == 0))
                  goto thunk_FUN_02e3ccc4;
                  if (*(uint *)(lVar28 + 0x18) <= uStack0000000000000040) goto LAB_0603fce4;
                  in_stack_00001338 =
                       *(float *)(lVar28 + (long)(int)uStack0000000000000040 * 0x14 + 0x30);
                }
                else {
                  if (lVar24 == 0) goto thunk_FUN_02e3ccc4;
                  if (*(int *)(lVar24 + 0x18) == 0) goto LAB_0603fce4;
                }
                in_stack_000000b8._4_4_ = *(float *)(lVar24 + 0x28);
                fStack000000000000002c = fStack000000000000002c + (0.0 - in_stack_00001338);
                fVar47 = *(float *)(lVar24 + 0x20);
                fVar45 = *(float *)(lVar24 + 0x24);
                goto LAB_0603d53c;
              }
              if (*(int *)((long)unaff_x19 + 0x314) != 5) {
                if (lVar24 == 0) goto thunk_FUN_02e3ccc4;
                if ((*(int *)(lVar24 + 0x18) != 1) && (*(int *)(lVar24 + 0x18) != 0)) {
                  fVar45 = *(float *)((long)unaff_x19 + 0x4d4);
                  goto LAB_0603d470;
                }
                goto LAB_0603fce4;
              }
              if (lVar24 == 0) goto thunk_FUN_02e3ccc4;
              if ((*(int *)(lVar24 + 0x18) == 1) || (*(int *)(lVar24 + 0x18) == 0))
              goto LAB_0603fce4;
              if ((unaff_x19[0x75] == 0) ||
                 (lVar28 = *(long *)(unaff_x19[0x75] + 0x58), lVar28 == 0)) goto thunk_FUN_02e3ccc4;
              if (*(uint *)(lVar28 + 0x18) <= uStack0000000000000040) goto LAB_0603fce4;
              lVar28 = lVar28 + (long)(int)uStack0000000000000040 * 0x14;
              in_stack_000000b8._4_4_ =
                   (*(float *)(lVar24 + 0x28) + *(float *)(lVar24 + 0x34)) * 0.5;
              fVar47 = in_stack_00000030 + 0.0 +
                       ((float)*(undefined8 *)(lVar24 + 0x20) +
                       (float)*(undefined8 *)(lVar24 + 0x2c)) * 0.5;
              fVar45 = (0.0 - ((fStack0000000000000028 + *(float *)(lVar28 + 0x28) +
                               *(float *)(lVar28 + 0x30)) - fStack000000000000002c) * 0.5) +
                       ((float)((ulong)*(undefined8 *)(lVar24 + 0x20) >> 0x20) +
                       (float)((ulong)*(undefined8 *)(lVar24 + 0x2c) >> 0x20)) * 0.5;
            }
            in_stack_000000b8._4_4_ = in_stack_000000b8._4_4_ + 0.0;
            auVar58 = ZEXT416((uint)fVar45);
            fStack00000000000000c0 = fVar47;
          }
          else if (iVar17 == 0x800) {
            if (lVar24 == 0) goto thunk_FUN_02e3ccc4;
            if ((*(int *)(lVar24 + 0x18) == 1) || (*(int *)(lVar24 + 0x18) == 0)) goto LAB_0603fce4;
            fVar47 = (*(float *)(lVar24 + 0x28) + *(float *)(lVar24 + 0x34)) * 0.5;
            in_stack_000000b8._4_4_ = fVar47 + 0.0;
            auVar58 = ZEXT416((uint)(((float)((ulong)*(undefined8 *)(lVar24 + 0x20) >> 0x20) +
                                     (float)((ulong)*(undefined8 *)(lVar24 + 0x2c) >> 0x20)) * 0.5 +
                                    0.0));
            fStack00000000000000c0 =
                 ((float)*(undefined8 *)(lVar24 + 0x20) + (float)*(undefined8 *)(lVar24 + 0x2c)) *
                 0.5 + in_stack_00000030 + 0.0;
          }
          else {
            if (iVar17 == 0x1000) {
              if (lVar24 == 0) goto thunk_FUN_02e3ccc4;
              if ((*(int *)(lVar24 + 0x18) == 1) || (*(int *)(lVar24 + 0x18) == 0))
              goto LAB_0603fce4;
              fVar45 = *(float *)((long)unaff_x19 + 0x504);
              in_stack_00001338 = *(float *)((long)unaff_x19 + 0x4fc);
LAB_0603d470:
              fStack0000000000000028 = fStack0000000000000028 + fVar45 + in_stack_00001338;
            }
            else {
              if (iVar17 != 0x2000) goto LAB_0603d550;
              if (lVar24 == 0) goto thunk_FUN_02e3ccc4;
              if ((*(int *)(lVar24 + 0x18) == 1) || (*(int *)(lVar24 + 0x18) == 0))
              goto LAB_0603fce4;
              fStack0000000000000028 = *(float *)(unaff_x19 + 0x9b) - fStack0000000000000028;
            }
            fVar47 = in_stack_00000030 + 0.0;
            auVar58._0_4_ =
                 ((float)*(undefined8 *)(lVar24 + 0x24) + (float)*(undefined8 *)(lVar24 + 0x30)) *
                 0.5 + (0.0 - (fStack0000000000000028 - fStack000000000000002c) * 0.5);
            auVar58._4_4_ =
                 ((float)((ulong)*(undefined8 *)(lVar24 + 0x24) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >> 0x20)) * 0.5 + 0.0;
            auVar58._8_8_ = 0;
            in_stack_000000b8._4_4_ = auVar58._4_4_;
            fStack00000000000000c0 =
                 fVar47 + (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
          }
LAB_0603d550:
          auVar53 = auVar58;
          fStack0000000000000120 = (float)FUN_031c4efc(0);
          auVar59 = auVar53;
          FUN_031c4efc(0);
          lVar24 = FUN_0604a24c();
          if (lVar24 == 0) goto thunk_FUN_02e3ccc4;
          FUN_0627938c(lVar24,0);
          *(float *)((long)unaff_x19 + 0x704) = auVar59._0_4_;
          uStack0000000000000084 =
               FUN_031c4f40(ZEXT816(0x3f800000),ZEXT816(0x3f800000),0x3f800000,0x3f800000,0);
          FUN_031c4f40(ZEXT816(0x3f800000),ZEXT816(0x3f800000),0x3f800000,0x3f800000,0);
          if (*(int *)(*(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo + 0xe4) == 0)
          {
            thunk_FUN_02e9a04c(*(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo);
          }
          FUN_0603fd20(0);
          FUN_0605b508(&stack0x00001310,0x4000ffff,0);
          if (*(int *)(*plVar23 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          lVar24 = unaff_x19[0x75];
          if (lVar24 == 0) goto thunk_FUN_02e3ccc4;
          fVar45 = in_stack_000001a8[10];
          if ((int)fVar45 < 1) {
            fStack00000000000000ec = 0.0;
            iVar17 = 0;
            goto LAB_0603f770;
          }
          lVar24 = *(long *)(lVar24 + 0x38);
          if (lVar24 == 0) goto thunk_FUN_02e3ccc4;
          bVar7 = false;
          bVar5 = false;
          fVar66 = 0.0;
          bVar6 = false;
          fStack00000000000000ec = 0.0;
          uVar15 = 0;
          in_stack_00000048._4_4_ = 0.0;
          uVar12 = 0;
          lVar28 = lVar24 + 0x20;
          bVar9 = false;
          uStack0000000000000060 = 0;
          fStack0000000000000190 = auVar53._0_4_;
          fStack0000000000000138 =
               *(float *)(*(long *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo
                                   + 0xb8) + 0x1730);
          fStack0000000000000124 = fStack0000000000000190;
          fStack00000000000001b0 = auVar58._0_4_;
          fStack0000000000000058 = 0.0;
          fStack0000000000000134 = 0.0;
          fStack000000000000016c = 0.0;
          fStack00000000000000a0 = 0.0;
          fStack000000000000006c = fStack00000000000000e8;
          fVar46 = 0.0;
          fStack00000000000000dc = fStack00000000000000e8;
          fStack00000000000000e0 = in_stack_00000110._4_4_;
          fStack0000000000000064 = in_stack_00000110._4_4_;
          uStack0000000000000068 = in_stack_000000d8;
          fStack0000000000000094 = fStack00000000000000e8;
          fStack0000000000000098 = in_stack_00000110._4_4_;
          uStack0000000000000088 = in_stack_000000d8;
          in_stack_00000100._4_4_ = fVar47;
          uVar13 = 0;
          goto LAB_0603d6e0;
        }
        if (*(uint *)(lVar24 + 0x18) <= in_stack_00001308) goto LAB_0603fce4;
        in_stack_0000133c = *(uint *)(lVar24 + (long)(int)in_stack_00001308 * 0x10 + 0x24);
        if (in_stack_0000133c == 0) goto LAB_0603cfc8;
        if (5 < unaff_w25) {
          uVar64 = Oculus_Platform_CAPI__ovr_DestinationArray_HasNextPage(&stack0x0000133c,0);
          uVar65 = FUN_05603500(&stack0x00001308,0);
          uVar64 = FUN_0548db04(*(undefined8 *)
                                 System_Collections_Generic_List<BaseInputModule>_TypeInfo,uVar64,
                                *(undefined8 *)
                                 System_Collections_Generic_List<BaseRaycaster>_TypeInfo,uVar65,0);
          if (*(int *)(*unaff_x29 + 0xe4) == 0) {
            thunk_FUN_02e9a04c(*unaff_x29);
          }
          FUN_06224c0c(uVar64,0);
          in_stack_00001328 = CONCAT44(3,in_stack_000001a8[10]);
        }
        uVar13 = in_stack_0000133c;
      } while (in_stack_0000133c == 0x1a);
      if ((in_stack_0000133c == 0x3c) && (*(char *)((long)unaff_x19 + 0x342) != '\0')) {
        *(undefined1 *)((long)unaff_x19 + 0x471) = 1;
        *(undefined4 *)((long)unaff_x19 + 0x664) = 0;
        uVar19 = FUN_060872e4();
        if (((uVar19 & 1) != 0) &&
           (in_stack_00001308 = in_stack_0000126c, *(int *)((long)unaff_x19 + 0x664) == 0))
        goto LAB_06038edc;
      }
      else {
        if ((unaff_x19[0x75] == 0) || (lVar24 = *(long *)(unaff_x19[0x75] + 0x38), lVar24 == 0))
        goto thunk_FUN_02e3ccc4;
        if ((uint)*(float *)(lVar24 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
        lVar24 = lVar24 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21;
        *(undefined4 *)((long)unaff_x19 + 0x664) = *(undefined4 *)(lVar24 + 0x20);
        *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar24 + 0x50);
        unaff_x19[0x20] = *(long *)(lVar24 + 0x40);
        thunk_FUN_02ee2be8(unaff_x19 + 0x20);
      }
      if ((unaff_x19[0x75] == 0) || (lVar24 = *(long *)(unaff_x19[0x75] + 0x38), lVar24 == 0))
      goto thunk_FUN_02e3ccc4;
      unaff_w22 = in_stack_000001a8[10];
      if ((uint)*(float *)(lVar24 + 0x18) <= (uint)unaff_w22) goto LAB_0603fce4;
      lVar28 = lVar24 + 0x20;
      fVar48 = (float)in_stack_00001328;
      lVar30 = unaff_x19[0x24];
      _fStack00000000000001b0 = in_stack_00001328 & 0xffffffff;
      unaff_w23 = (uint)*(byte *)(lVar28 + (long)(int)unaff_w22 * (long)(int)unaff_w21 + 0x34);
      *(undefined1 *)((long)unaff_x19 + 0x471) = 0;
      fVar46 = unaff_w22;
      if (fVar48 == unaff_w22) {
        in_stack_0000133c = (uint)(in_stack_00001328 >> 0x20);
        *(undefined4 *)((long)unaff_x19 + 0x664) = 0;
        if (in_stack_0000133c == 0x2026) {
          *(long *)(lVar28 + (long)(int)unaff_w22 * (long)(int)unaff_w21 + 0x10) = unaff_x19[0xce];
          thunk_FUN_02ee2be8();
          if ((unaff_x19[0x75] == 0) || (lVar24 = *(long *)(unaff_x19[0x75] + 0x38), lVar24 == 0))
          goto thunk_FUN_02e3ccc4;
          if ((uint)*(float *)(lVar24 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
          lVar24 = lVar24 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21;
          *(long *)(lVar24 + 0x40) = unaff_x19[0xcf];
          *(undefined4 *)(lVar24 + 0x20) = 0;
          thunk_FUN_02ee2be8();
          if ((unaff_x19[0x75] == 0) || (lVar24 = *(long *)(unaff_x19[0x75] + 0x38), lVar24 == 0))
          goto thunk_FUN_02e3ccc4;
          if ((uint)*(float *)(lVar24 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
          *(long *)(lVar24 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21 + 0x48) =
               unaff_x19[0xd0];
          thunk_FUN_02ee2be8();
          if ((unaff_x19[0x75] == 0) || (lVar24 = *(long *)(unaff_x19[0x75] + 0x38), lVar24 == 0))
          goto thunk_FUN_02e3ccc4;
          if ((uint)*(float *)(lVar24 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
          *(int *)(lVar24 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21 + 0x50) =
               (int)unaff_x19[0xd1];
          puVar8 = System_Collections_Generic_List<AudioListener>_TypeInfo;
          lVar24 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
          if (*(int *)(lVar24 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
            lVar24 = *(long *)puVar8;
          }
          lVar24 = **(long **)(lVar24 + 0xb8);
          if (lVar24 == 0) goto thunk_FUN_02e3ccc4;
          if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0xd5)) goto LAB_0603fce4;
          lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0xd5) * 0x38;
          *(int *)(lVar24 + 0x54) = *(int *)(lVar24 + 0x54) + 1;
          *(undefined1 *)(unaff_x19 + 0x66) = 1;
          in_stack_00001328 = CONCAT44(3,(int)*(float *)((long)unaff_x19 + 0x4ac) + 1);
          fVar46 = *(float *)((long)unaff_x19 + 0x4ac);
        }
        else if (in_stack_0000133c == 3) {
          if ((unaff_x19[0x20] == 0) || (lVar18 = FUN_0606364c(unaff_x19[0x20],0), lVar18 == 0))
          goto thunk_FUN_02e3ccc4;
          uVar64 = FUN_04e87e04(lVar18,3,*(undefined8 *)
                                          System_Collections_Generic_List<ValueTuple<int,_RichTextTagParser_TagType,_string>>_TypeInfo
                               );
          if ((uint)*(float *)(lVar24 + 0x18) <= (uint)unaff_w22) goto LAB_0603fce4;
          *(undefined8 *)(lVar28 + (long)(int)unaff_w22 * (long)(int)unaff_w21 + 0x10) = uVar64;
          thunk_FUN_02ee2be8();
          *(undefined1 *)(unaff_x19 + 0x66) = 1;
          fVar46 = *(float *)((long)unaff_x19 + 0x4ac);
        }
      }
      plVar23 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
      if (((int)fVar46 < *(int *)((long)unaff_x19 + 0x364)) && (in_stack_0000133c != 3)) {
        if ((unaff_x19[0x75] == 0) || (lVar24 = *(long *)(unaff_x19[0x75] + 0x38), lVar24 == 0))
        goto thunk_FUN_02e3ccc4;
        if ((uint)*(float *)(lVar24 + 0x18) <= (uint)fVar46) goto LAB_0603fce4;
        lVar24 = lVar24 + (long)(int)fVar46 * (long)(int)unaff_w21;
        *(undefined1 *)(lVar24 + 400) = 0;
        *(undefined2 *)(lVar24 + 0x24) = 0x200b;
        *(undefined4 *)(lVar24 + 0x5c) = 0;
        in_stack_000001a8[10] = (float)((int)fVar46 + 1);
        uVar13 = in_stack_0000133c;
        goto LAB_06038edc;
      }
      in_stack_00000148 = 1.0;
      if (*(int *)((long)unaff_x19 + 0x664) == 0) {
        uVar12 = *(uint *)((long)unaff_x19 + 0x284);
        if ((uVar12 >> 4 & 1) == 0) {
          if ((uVar12 >> 3 & 1) == 0) {
            if ((uVar12 >> 5 & 1) != 0) {
              if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
                thunk_FUN_02e9a04c();
              }
              uVar19 = FUN_055805c8(in_stack_0000133c,0);
              if ((uVar19 & 1) != 0) {
                if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_02e9a04c();
                }
                uVar12 = FUN_05580850(in_stack_0000133c,0);
                in_stack_00000148 = fStack0000000000000024;
                goto LAB_0603901c;
              }
            }
          }
          else {
            if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar19 = FUN_05580528(in_stack_0000133c,0);
            if ((uVar19 & 1) != 0) {
              if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
                thunk_FUN_02e9a04c();
              }
              uVar12 = FUN_055809c8(in_stack_0000133c,0);
              goto LAB_0603901c;
            }
          }
        }
        else {
          if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          uVar19 = FUN_055805c8(in_stack_0000133c,0);
          if ((uVar19 & 1) != 0) {
            if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar12 = FUN_05580850(in_stack_0000133c,0);
LAB_0603901c:
            in_stack_0000133c = uVar12 & 0xffff;
          }
        }
      }
      if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
      memmove(&stack0x000012a0,(void *)(unaff_x19[0x20] + 0x28),0x60);
      uVar13 = in_stack_0000133c;
      if (*(int *)((long)unaff_x19 + 0x664) == 1) {
        lVar24 = FUN_060800c8();
        if ((lVar24 == 0) || (lVar24 = *(long *)(lVar24 + 0x38), lVar24 == 0))
        goto thunk_FUN_02e3ccc4;
        if ((uint)*(float *)(lVar24 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
        plVar41 = *(long **)(lVar24 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21 + 0x30
                            );
        plVar23 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
        if (plVar41 != (long *)0x0) {
          bVar10 = *(byte *)(*(long *)System_Collections_Generic_List<uint[]>_TypeInfo + 0x130);
          if ((*(byte *)(*plVar41 + 0x130) < bVar10) ||
             (*(long *)(*(long *)(*plVar41 + 200) + (ulong)bVar10 * 8 + -8) !=
              *(long *)System_Collections_Generic_List<uint[]>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_02e3d044(plVar41);
          }
          plVar23 = (long *)plVar41[3];
          if (plVar23 == (long *)0x0) {
            plVar23 = (long *)0x0;
            *_fStack00000000000000e0 = 0;
          }
          else {
            lVar24 = *(long *)System_Collections_Generic_List<Type[]>_TypeInfo;
            bVar10 = *(byte *)(lVar24 + 0x130);
            if (*(byte *)(*plVar23 + 0x130) < bVar10) {
              plVar33 = (long *)0x0;
            }
            else {
              plVar33 = plVar23;
              if (*(long *)(*(long *)(*plVar23 + 200) + (ulong)bVar10 * 8 + -8) != lVar24) {
                plVar33 = (long *)0x0;
              }
            }
            *_fStack00000000000000e0 = (long)plVar33;
            if (*(byte *)(*plVar23 + 0x130) < bVar10) {
              plVar23 = (long *)0x0;
            }
            else if (*(long *)(*(long *)(*plVar23 + 200) + (ulong)bVar10 * 8 + -8) != lVar24) {
              plVar23 = (long *)0x0;
            }
          }
          thunk_FUN_02ee2be8(_fStack00000000000000e0,plVar23);
          lVar24 = plVar41[5];
          *(int *)((long)unaff_x19 + 0x6c4) = (int)lVar24;
          puVar8 = System_Collections_Generic_List<AudioListener>_TypeInfo;
          if (in_stack_0000133c == 0x3c) {
            in_stack_0000133c = (int)lVar24 + 0xe000;
          }
          else {
            lVar24 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
            if (*(int *)(lVar24 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
              lVar24 = *(long *)puVar8;
            }
            *(undefined4 *)((long)unaff_x19 + 0x1d4) =
                 *(undefined4 *)(*(long *)(lVar24 + 0xb8) + 0x68);
          }
          fVar66 = *_uStack0000000000000088;
          fVar45 = (float)FUN_0630f888(&stack0x000012a0,0);
          fVar46 = (float)FUN_0630f890(&stack0x000012a0,0);
          if (*_fStack00000000000000e0 == 0) goto thunk_FUN_02e3ccc4;
          fVar46 = in_stack_00000118 * (fVar66 / fVar45) * fVar46;
          memmove(&stack0x00001200,(void *)(*_fStack00000000000000e0 + 0x28),0x60);
          fVar45 = (float)FUN_0630f888(&stack0x00001200,0);
          fVar66 = *_uStack0000000000000088;
          if (fVar45 <= 0.0) {
            fVar45 = (float)FUN_0630f888(&stack0x000012a0,0);
            fVar47 = (float)FUN_0630f890(&stack0x000012a0,0);
            fVar48 = (float)FUN_0630f8b8(&stack0x000012a0,0);
            if (plVar41[4] == 0) goto thunk_FUN_02e3ccc4;
            FUN_0630fd4c(&stack0x00001340,plVar41[4],0);
            fVar69 = (float)FUN_0630fb7c(&stack0x000011e0,0);
            if (plVar41[4] == 0) goto thunk_FUN_02e3ccc4;
            fVar71 = *(float *)((long)plVar41 + 0x2c);
            fVar66 = in_stack_00000118 * (fVar66 / fVar45) * fVar47;
            fVar45 = (float)FUN_0630fd88(plVar41[4],0);
            fVar47 = fVar66 * (fVar48 / fVar69) * fVar71 * fVar45;
            fStack0000000000000138 = 0.0;
            if (fVar47 != 0.0) {
              fStack0000000000000138 = fVar66 / fVar47;
            }
            fStack000000000000013c = (float)FUN_0630f8b8(&stack0x000012a0,0);
            fStack000000000000013c = fStack000000000000013c * fStack0000000000000138;
            fVar45 = (float)FUN_0630f8e0(&stack0x000012a0,0);
            fVar66 = *(float *)((long)unaff_x19 + 0x444);
            fStack000000000000017c = (float)FUN_0630f890(&stack0x000012a0,0);
            fStack000000000000017c = fVar46 * fVar45 * fVar66 * fStack000000000000017c;
            fVar45 = (float)FUN_0630f8e8(&stack0x000012a0,0);
            fStack0000000000000138 = fStack0000000000000138 * fVar45;
          }
          else {
            fVar45 = (float)FUN_0630f888(&stack0x00001200,0);
            fVar47 = (float)FUN_0630f890(&stack0x00001200,0);
            if (plVar41[4] == 0) goto thunk_FUN_02e3ccc4;
            fVar69 = *(float *)((long)plVar41 + 0x2c);
            fVar48 = (float)FUN_0630fd88(plVar41[4],0);
            fVar47 = in_stack_00000118 * (fVar66 / fVar45) * fVar47 * fVar69 * fVar48;
            fStack000000000000013c = (float)FUN_0630f8b8(&stack0x00001200,0);
            fVar45 = (float)FUN_0630f8e0(&stack0x00001200,0);
            fVar66 = *(float *)((long)unaff_x19 + 0x444);
            fStack000000000000017c = (float)FUN_0630f890(&stack0x00001200,0);
            fStack000000000000017c = fVar46 * fVar45 * fVar66 * fStack000000000000017c;
            fStack0000000000000138 = (float)FUN_0630f8e8(&stack0x00001200,0);
          }
          unaff_x19[0xcd] = (long)plVar41;
          thunk_FUN_02ee2be8(in_stack_00000170,plVar41);
          if ((unaff_x19[0x75] == 0) || (lVar24 = *(long *)(unaff_x19[0x75] + 0x38), lVar24 == 0))
          goto thunk_FUN_02e3ccc4;
          if ((uint)*(float *)(lVar24 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
          lVar24 = lVar24 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21;
          *(long *)(lVar24 + 0x40) = unaff_x19[0x20];
          *(undefined4 *)(lVar24 + 0x20) = 1;
          *(float *)(lVar24 + 0x15c) = fVar47;
          thunk_FUN_02ee2be8();
          lVar24 = unaff_x19[0x75];
          if ((lVar24 == 0) || (lVar28 = *(long *)(lVar24 + 0x38), lVar28 == 0))
          goto thunk_FUN_02e3ccc4;
          if ((uint)*(float *)(lVar28 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
          fVar45 = 0.0;
          *(int *)(lVar28 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21 + 0x50) =
               (int)unaff_x19[0x24];
          *(int *)(unaff_x19 + 0x24) = (int)lVar30;
          unaff_x24 = in_stack_000001a8;
          goto LAB_06039744;
        }
        goto LAB_06038edc;
      }
      lVar24 = unaff_x19[0x75];
      if (*(int *)((long)unaff_x19 + 0x664) == 0) {
        if ((lVar24 == 0) || (lVar24 = *(long *)(lVar24 + 0x38), lVar24 == 0))
        goto thunk_FUN_02e3ccc4;
        if ((uint)*(float *)(lVar24 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
        *in_stack_00000170 =
             *(long *)(lVar24 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21 + 0x30);
        thunk_FUN_02ee2be8(in_stack_00000170);
        plVar23 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
        if (*in_stack_00000170 != 0) {
          if ((unaff_x19[0x75] == 0) || (lVar24 = *(long *)(unaff_x19[0x75] + 0x38), lVar24 == 0))
          goto thunk_FUN_02e3ccc4;
          if ((uint)*(float *)(lVar24 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
          unaff_x19[0x20] =
               *(long *)(lVar24 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21 + 0x40);
          thunk_FUN_02ee2be8(unaff_x19 + 0x20);
          if ((unaff_x19[0x75] == 0) || (lVar24 = *(long *)(unaff_x19[0x75] + 0x38), lVar24 == 0))
          goto thunk_FUN_02e3ccc4;
          if ((uint)*(float *)(lVar24 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
          unaff_x19[0x23] =
               *(long *)(lVar24 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21 + 0x48);
          thunk_FUN_02ee2be8(unaff_x19 + 0x23);
          if ((unaff_x19[0x75] == 0) || (lVar24 = *(long *)(unaff_x19[0x75] + 0x38), lVar24 == 0))
          goto thunk_FUN_02e3ccc4;
          in_w8 = in_stack_000001a8[10];
          in_w9 = *(float *)(lVar24 + 0x18);
          if ((uint)in_w9 <= (uint)in_w8) goto LAB_0603fce4;
          in_x10 = lVar24 + 0x20;
          *(undefined4 *)(unaff_x19 + 0x24) =
               *(undefined4 *)(in_x10 + (long)(int)in_w8 * (long)(int)unaff_w21 + 0x30);
          in_x12 = _uStack0000000000000088;
          unaff_x24 = in_stack_000001a8;
          if (fVar48 != unaff_w22)
          goto 
          UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__UnityEngine_XR_Interaction_Toolkit_Interactors_IXRSelectInteractor_OnSelectExited
          ;
          lVar24 = unaff_x19[0x92];
          if (lVar24 == 0) goto thunk_FUN_02e3ccc4;
          if (*(uint *)(lVar24 + 0x18) <= in_stack_00001308) goto LAB_0603fce4;
          in_w11 = *(int *)(lVar24 + (long)(int)in_stack_00001308 * 0x10 + 0x24);
          goto code_r0x06039228;
        }
        goto LAB_06038edc;
      }
      fVar46 = 0.0;
      if (in_stack_0000133c != 3 && in_stack_0000133c != 0xad) {
        fVar46 = fVar66;
      }
      fStack000000000000017c = 0.0;
      fStack000000000000013c = 0.0;
      fStack0000000000000138 = 0.0;
      unaff_x24 = in_stack_000001a8;
      fVar47 = fVar66;
      if (lVar24 == 0) goto thunk_FUN_02e3ccc4;
      goto LAB_0603975c;
    }
  }
  goto thunk_FUN_02e3ccc4;
LAB_0603d6e0:
  if (*(uint *)(lVar24 + 0x18) <= uVar12) goto LAB_0603fce4;
  uVar38 = (ulong)uVar12;
  piVar37 = (int *)(lVar28 + uVar38 * 0x178);
  lVar30 = *(long *)(piVar37 + 8);
  uVar44 = *(ushort *)(piVar37 + 1);
  if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar43 = (uint)uVar44;
  bVar10 = FUN_0557df5c(uVar44,0);
  if (*(uint *)(lVar24 + 0x18) <= uVar12) goto LAB_0603fce4;
  if ((unaff_x19[0x75] == 0) || (lVar18 = *(long *)(unaff_x19[0x75] + 0x50), lVar18 == 0))
  goto thunk_FUN_02e3ccc4;
  uVar32 = *(uint *)(lVar28 + uVar38 * 0x178 + 0x3c);
  if (*(uint *)(lVar18 + 0x18) <= uVar32) goto LAB_0603fce4;
  lVar18 = lVar18 + (long)(int)uVar32 * 0x60;
  uVar2 = *(uint *)(lVar18 + 0x40);
  uVar3 = *(uint *)(lVar18 + 0x44);
  fVar71 = *(float *)(lVar18 + 0x58);
  fVar45 = *(float *)(lVar18 + 0x5c);
  uVar39 = *(uint *)(lVar18 + 0x6c);
  fVar72 = *(float *)(lVar18 + 0x60);
  fVar67 = *(float *)(lVar18 + 100);
  iVar17 = *(int *)(lVar18 + 0x20);
  fVar51 = *(float *)(lVar18 + 0x70);
  fVar50 = *(float *)(lVar18 + 0x74);
  iVar16 = *(int *)(lVar18 + 0x28);
  fVar48 = *(float *)(lVar18 + 0x78);
  fVar47 = *(float *)(lVar18 + 0x7c);
  iVar36 = *(int *)(lVar18 + 0x30);
  fVar69 = *(float *)(lVar18 + 0x50);
  if ((int)uVar39 < 9) {
    if ((int)uVar39 < 3) {
      if (uVar39 == 1) {
        if ((char)unaff_x19[0x1e] == '\0') {
          fStack0000000000000120 = fVar67 + 0.0;
        }
        else {
          fStack0000000000000120 = 0.0 - fVar45;
        }
        in_stack_00000100._4_4_ = 0.0;
        fStack0000000000000124 = 0.0;
      }
      else if (uVar39 == 2) {
        fStack0000000000000120 = (fVar67 + fVar72 * 0.5) - fVar45 * 0.5;
LAB_0603d9dc:
        fStack0000000000000124 = 0.0;
        in_stack_00000100._4_4_ = 0.0;
      }
      else {
LAB_0603d8ac:
        uVar44 = NEON_umaxv(CONCAT26(-(ushort)(uVar44 == (ushort)((ulong)_UNK_01318f18 >> 0x30)),
                                     CONCAT24(-(ushort)(uVar44 ==
                                                       (ushort)((ulong)_UNK_01318f18 >> 0x20)),
                                              CONCAT22(-(ushort)(uVar44 ==
                                                                (ushort)((ulong)_UNK_01318f18 >>
                                                                        0x10)),
                                                       -(ushort)(uVar44 == (ushort)_UNK_01318f18))))
                            ,2);
        if (((((uVar44 & 1) == 0) && (uVar43 != 3)) && (uVar39 == 8)) && ((int)uVar12 <= (int)uVar3)
           ) goto LAB_0603d8ec;
      }
    }
    else if (uVar39 != 3) {
      if (uVar39 != 4) goto LAB_0603d8ac;
      in_stack_00000100._4_4_ = 0.0;
      if ((char)unaff_x19[0x1e] != '\0') {
        fVar45 = 0.0;
      }
      fStack0000000000000120 = (fVar72 + fVar67) - fVar45;
      fStack0000000000000124 = 0.0;
    }
  }
  else if (uVar39 == 0x10) {
    if ((int)uVar12 <= (int)uVar3) {
      if (uVar43 < 0xad) {
        if ((uVar43 != 3) && (uVar43 != 10)) {
LAB_0603d8ec:
          if (*(uint *)(lVar24 + 0x18) <= uVar2) goto LAB_0603fce4;
          uVar42 = *(undefined2 *)(lVar28 + (long)(int)uVar2 * 0x178 + 4);
          if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          uVar19 = FUN_05581208(uVar42,0);
          if ((uVar19 & 1) == 0) {
            bVar1 = (int)uVar32 < (int)unaff_x19[0x98];
          }
          else {
            bVar1 = false;
          }
          if ((!bVar1 && (uVar39 >> 4 & 1) == 0) && (fVar45 <= fVar72)) {
            fStack0000000000000120 = -0.0;
            if ((char)unaff_x19[0x1e] != '\0') {
              fStack0000000000000120 = fVar72;
            }
            fStack0000000000000120 = fVar67 + fStack0000000000000120;
            goto LAB_0603d9dc;
          }
          if (((uVar12 == 0) || (uVar32 != uVar13)) ||
             (uVar12 == *(uint *)((long)unaff_x19 + 0x364))) {
            fStack0000000000000120 = -0.0;
            if ((char)unaff_x19[0x1e] != '\0') {
              fStack0000000000000120 = fVar72;
            }
            if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            fStack0000000000000120 = fVar67 + fStack0000000000000120;
            in_stack_00000048._4_4_ = (float)FUN_055814cc(uVar43,0);
            fStack0000000000000124 = 0.0;
            in_stack_00000100._4_4_ = 0.0;
          }
          else {
            cVar22 = (char)unaff_x19[0x1e];
            iVar36 = (iVar36 - iVar17) - ((uint)in_stack_00000048._4_4_ & 1);
            fVar67 = -fVar45;
            if (cVar22 != '\0') {
              fVar67 = fVar45;
            }
            if (iVar36 < 1) {
              fVar45 = 1.0;
              iVar36 = 1;
            }
            else {
              fVar45 = *(float *)(unaff_x19 + 0x62);
            }
            if (uVar43 == 9) {
LAB_0603f69c:
              fVar45 = ((fVar72 + fVar67) * (1.0 - fVar45)) / (float)iVar36;
              if (cVar22 == '\0') {
                fStack0000000000000120 = fStack0000000000000120 + fVar45;
                fStack0000000000000124 = fStack0000000000000124 + 0.0;
                in_stack_00000100._4_4_ = in_stack_00000100._4_4_ + 0.0;
              }
              else {
                fStack0000000000000120 = fStack0000000000000120 - fVar45;
              }
            }
            else {
              if (uVar43 != 0xa0) {
                if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_02e9a04c();
                }
                uVar19 = FUN_055814cc(uVar43,0);
                cVar22 = (char)unaff_x19[0x1e];
                if ((uVar19 & 1) != 0) goto LAB_0603f69c;
              }
              fVar45 = ((fVar72 + fVar67) * fVar45) /
                       (float)(int)((iVar17 - (((uint)in_stack_00000048._4_4_ ^ 0xffffffff) & 1)) +
                                   iVar16);
              if (cVar22 == '\0') {
                fStack0000000000000120 = fStack0000000000000120 + fVar45;
                fStack0000000000000124 = fStack0000000000000124 + 0.0;
                in_stack_00000100._4_4_ = in_stack_00000100._4_4_ + 0.0;
              }
              else {
                fStack0000000000000120 = fStack0000000000000120 - fVar45;
              }
            }
          }
        }
      }
      else if (((uVar43 != 0xad) && (uVar43 != 0x200b)) && (uVar43 != 0x2060)) goto LAB_0603d8ec;
    }
  }
  else if (uVar39 == 0x20) {
    fStack0000000000000120 = (fVar67 + fVar72 * 0.5) - (fVar51 + fVar48) * 0.5;
    in_stack_00000100._4_4_ = 0.0;
    fStack0000000000000124 = 0.0;
  }
  uVar39 = (uint)*(undefined8 *)(lVar24 + 0x18);
  if (uVar39 <= uVar12) goto LAB_0603fce4;
  lVar18 = lVar28 + uVar38 * 0x178;
  fVar45 = fStack00000000000000c0 + fStack0000000000000120;
  fVar72 = fStack00000000000001b0 + fStack0000000000000124;
  fVar67 = in_stack_000000b8._4_4_ + in_stack_00000100._4_4_;
  if (*(char *)(lVar18 + 0x170) == '\0') goto LAB_0603e204;
  iVar17 = *piVar37;
  if (iVar17 == 0) {
    fVar66 = fmodf(*(float *)((long)unaff_x19 + 0x354) * (float)(int)uVar32,1.0);
    iVar16 = *(int *)((long)unaff_x19 + 0x34c);
    if (iVar16 < 2) {
      if (iVar16 == 0) {
        lVar31 = lVar28 + uVar38 * 0x178;
        *(undefined4 *)(lVar31 + 100) = 0;
        *(undefined4 *)(lVar31 + 0x8c) = 0;
        *(undefined4 *)(lVar31 + 0xb4) = 0x3f800000;
        *(undefined4 *)(lVar31 + 0xdc) = 0x3f800000;
      }
      else if (iVar16 == 1) {
        lVar31 = lVar28 + uVar38 * 0x178;
        fVar47 = *(float *)(lVar31 + 0x48);
        pfVar25 = (float *)(lVar31 + 100);
        if (*(int *)((long)unaff_x19 + 0x29c) == 0x208) {
          lVar31 = lVar28 + uVar38 * 0x178;
          fVar48 = *(float *)(lVar31 + 0x70);
          *pfVar25 = fVar66 + ((fStack0000000000000120 + fVar47) - *(float *)(unaff_x19 + 0x9f)) /
                              (*(float *)(unaff_x19 + 0xa0) - *(float *)(unaff_x19 + 0x9f));
          *(float *)(lVar31 + 0x8c) =
               fVar66 + ((fStack0000000000000120 + fVar48) - *(float *)(unaff_x19 + 0x9f)) /
                        (*(float *)(unaff_x19 + 0xa0) - *(float *)(unaff_x19 + 0x9f));
          *(float *)(lVar31 + 0xb4) =
               fVar66 + ((fStack0000000000000120 + *(float *)(lVar31 + 0x98)) -
                        *(float *)(unaff_x19 + 0x9f)) /
                        (*(float *)(unaff_x19 + 0xa0) - *(float *)(unaff_x19 + 0x9f));
          *(float *)(lVar31 + 0xdc) =
               fVar66 + ((fStack0000000000000120 + *(float *)(lVar31 + 0xc0)) -
                        *(float *)(unaff_x19 + 0x9f)) /
                        (*(float *)(unaff_x19 + 0xa0) - *(float *)(unaff_x19 + 0x9f));
        }
        else {
          lVar31 = lVar28 + uVar38 * 0x178;
          fVar48 = fVar48 - fVar51;
          fVar50 = *(float *)(lVar31 + 0x70);
          fVar63 = *(float *)(lVar31 + 0x98);
          fVar62 = *(float *)(lVar31 + 0xc0);
          *pfVar25 = fVar66 + (fVar47 - fVar51) / fVar48;
          *(float *)(lVar31 + 0x8c) = fVar66 + (fVar50 - fVar51) / fVar48;
          *(float *)(lVar31 + 0xb4) = fVar66 + (fVar63 - fVar51) / fVar48;
          *(float *)(lVar31 + 0xdc) = fVar66 + (fVar62 - fVar51) / fVar48;
        }
      }
    }
    else if (iVar16 == 2) {
      lVar31 = lVar28 + uVar38 * 0x178;
      *(float *)(lVar31 + 100) =
           fVar66 + ((fStack0000000000000120 + *(float *)(lVar31 + 0x48)) -
                    *(float *)(unaff_x19 + 0x9f)) /
                    (*(float *)(unaff_x19 + 0xa0) - *(float *)(unaff_x19 + 0x9f));
      *(float *)(lVar31 + 0x8c) =
           fVar66 + ((fStack0000000000000120 + *(float *)(lVar31 + 0x70)) -
                    *(float *)(unaff_x19 + 0x9f)) /
                    (*(float *)(unaff_x19 + 0xa0) - *(float *)(unaff_x19 + 0x9f));
      *(float *)(lVar31 + 0xb4) =
           fVar66 + ((fStack0000000000000120 + *(float *)(lVar31 + 0x98)) -
                    *(float *)(unaff_x19 + 0x9f)) /
                    (*(float *)(unaff_x19 + 0xa0) - *(float *)(unaff_x19 + 0x9f));
      *(float *)(lVar31 + 0xdc) =
           fVar66 + ((fStack0000000000000120 + *(float *)(lVar31 + 0xc0)) -
                    *(float *)(unaff_x19 + 0x9f)) /
                    (*(float *)(unaff_x19 + 0xa0) - *(float *)(unaff_x19 + 0x9f));
    }
    else if (iVar16 == 3) {
      iVar16 = (int)unaff_x19[0x6a];
      if (iVar16 < 2) {
        if (iVar16 == 0) {
          lVar31 = lVar28 + uVar38 * 0x178;
          *(undefined4 *)(lVar31 + 0x68) = 0;
          *(undefined4 *)(lVar31 + 0x90) = 0x3f800000;
          *(undefined4 *)(lVar31 + 0xb8) = 0;
          *(undefined4 *)(lVar31 + 0xe0) = 0x3f800000;
        }
        else if (iVar16 == 1) {
          lVar31 = lVar28 + uVar38 * 0x178;
          fVar47 = fVar47 - fVar50;
          fVar48 = (*(float *)(lVar31 + 0x74) - fVar50) / fVar47;
          fVar47 = fVar66 + (*(float *)(lVar31 + 0x4c) - fVar50) / fVar47;
          *(float *)(lVar31 + 0x68) = fVar47;
          *(float *)(lVar31 + 0xb8) = fVar47;
          goto LAB_0603ddfc;
        }
      }
      else if (iVar16 == 2) {
        lVar31 = lVar28 + uVar38 * 0x178;
        fVar47 = fVar66 + (*(float *)(lVar31 + 0x4c) - *(float *)((long)unaff_x19 + 0x4fc)) /
                          (*(float *)((long)unaff_x19 + 0x504) - *(float *)((long)unaff_x19 + 0x4fc)
                          );
        *(float *)(lVar31 + 0x68) = fVar47;
        fVar48 = *(float *)((long)unaff_x19 + 0x4fc);
        fVar50 = *(float *)((long)unaff_x19 + 0x504);
        *(float *)(lVar31 + 0xb8) = fVar47;
        fVar48 = (*(float *)(lVar31 + 0x74) - fVar48) / (fVar50 - fVar48);
LAB_0603ddfc:
        *(float *)(lVar31 + 0x90) = fVar66 + fVar48;
        *(float *)(lVar31 + 0xe0) = fVar66 + fVar48;
      }
      else if (iVar16 == 3) {
        if (*(int *)(*(long *)PTR_DAT_06a2ed98 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        FUN_062244a4(*(undefined8 *)System_Collections_Generic_List<BaseVideoBoardScreen>_TypeInfo,0
                    );
        uVar39 = (uint)*(undefined8 *)(lVar24 + 0x18);
      }
      if (uVar39 <= uVar12) goto LAB_0603fce4;
      lVar31 = lVar28 + uVar38 * 0x178;
      fVar50 = *(float *)(lVar31 + 0x138);
      fVar48 = (1.0 - (*(float *)(lVar31 + 0x68) + *(float *)(lVar31 + 0x90)) * fVar50) * 0.5;
      fVar47 = fVar66 + *(float *)(lVar31 + 0x68) * fVar50 + fVar48;
      fVar66 = fVar66 + fVar48 + *(float *)(lVar31 + 0x90) * fVar50;
      *(float *)(lVar31 + 100) = fVar47;
      *(float *)(lVar31 + 0x8c) = fVar47;
      *(float *)(lVar31 + 0xb4) = fVar66;
      *(float *)(lVar31 + 0xdc) = fVar66;
    }
    iVar16 = (int)unaff_x19[0x6a];
    if (iVar16 < 2) {
      if (iVar16 == 0) {
        if (uVar39 <= uVar12) goto LAB_0603fce4;
        lVar31 = lVar28 + uVar38 * 0x178;
        *(undefined4 *)(lVar31 + 0x68) = 0;
        *(undefined4 *)(lVar31 + 0x90) = 0x3f800000;
        *(undefined4 *)(lVar31 + 0xb8) = 0x3f800000;
        *(undefined4 *)(lVar31 + 0xe0) = 0;
      }
      else if (iVar16 == 1) {
        if (uVar12 < uVar39) {
          lVar31 = lVar28 + uVar38 * 0x178;
          fVar69 = fVar69 - fVar71;
          fVar66 = (*(float *)(lVar31 + 0x4c) - fVar71) / fVar69;
          fVar69 = (*(float *)(lVar31 + 0x74) - fVar71) / fVar69;
          *(float *)(lVar31 + 0x68) = fVar66;
          goto LAB_0603df74;
        }
        goto LAB_0603fce4;
      }
    }
    else if (iVar16 == 2) {
      if (uVar39 <= uVar12) goto LAB_0603fce4;
      lVar31 = lVar28 + uVar38 * 0x178;
      fVar66 = (*(float *)(lVar31 + 0x4c) - *(float *)((long)unaff_x19 + 0x4fc)) /
               (*(float *)((long)unaff_x19 + 0x504) - *(float *)((long)unaff_x19 + 0x4fc));
      *(float *)(lVar31 + 0x68) = fVar66;
      fVar69 = (*(float *)(lVar31 + 0x74) - *(float *)((long)unaff_x19 + 0x4fc)) /
               (*(float *)((long)unaff_x19 + 0x504) - *(float *)((long)unaff_x19 + 0x4fc));
LAB_0603df74:
      *(float *)(lVar31 + 0x90) = fVar69;
      *(float *)(lVar31 + 0xb8) = fVar69;
      *(float *)(lVar31 + 0xe0) = fVar66;
    }
    else if (iVar16 == 3) {
      if (uVar39 <= uVar12) goto LAB_0603fce4;
      lVar31 = lVar28 + uVar38 * 0x178;
      fVar48 = *(float *)(lVar31 + 0x138);
      fVar47 = (1.0 - (*(float *)(lVar31 + 100) + *(float *)(lVar31 + 0xb4)) / fVar48) * 0.5;
      fVar66 = *(float *)(lVar31 + 100) / fVar48 + fVar47;
      fVar47 = fVar47 + *(float *)(lVar31 + 0xb4) / fVar48;
      *(float *)(lVar31 + 0x68) = fVar66;
      *(float *)(lVar31 + 0xe0) = fVar66;
      *(float *)(lVar31 + 0x90) = fVar47;
      *(float *)(lVar31 + 0xb8) = fVar47;
    }
    if (uVar39 <= uVar12) goto LAB_0603fce4;
    lVar31 = lVar28 + uVar38 * 0x178;
    fVar66 = *(float *)(unaff_x19 + 0x5c) *
             ABS(auVar59._0_4_) * *(float *)(lVar31 + 0x13c) *
             (1.0 - *(float *)((long)unaff_x19 + 0x304));
    if ((*(char *)(lVar31 + 0x34) == '\0') &&
       ((*(byte *)(lVar28 + uVar38 * 0x178 + 0x16c) & 1) != 0)) {
      fVar66 = -fVar66;
    }
    lVar31 = lVar28 + uVar38 * 0x178;
    *(float *)(lVar31 + 0x60) = fVar66;
    *(float *)(lVar31 + 0x88) = fVar66;
    *(float *)(lVar31 + 0xb0) = fVar66;
    *(float *)(lVar31 + 0xd8) = fVar66;
  }
  if (((int)uVar12 < (int)unaff_x19[0x6d]) &&
     ((int)fStack00000000000000ec < *(int *)((long)unaff_x19 + 0x36c))) {
    if (((int)unaff_x19[0x6e] <= (int)uVar32) || (*(int *)((long)unaff_x19 + 0x314) == 5)) {
      if (((int)uVar32 < (int)unaff_x19[0x6e]) && (*(int *)((long)unaff_x19 + 0x314) == 5)) {
        if (uVar12 < uVar39) {
          if (*(uint *)(lVar28 + uVar38 * 0x178 + 0x40) == uStack0000000000000040) {
            lVar18 = lVar28 + uVar38 * 0x178;
            *(ulong *)(lVar18 + 0x48) =
                 CONCAT44(fVar72 + (float)((ulong)*(undefined8 *)(lVar18 + 0x48) >> 0x20),
                          fVar45 + (float)*(undefined8 *)(lVar18 + 0x48));
            *(float *)(lVar18 + 0x50) = fVar67 + *(float *)(lVar18 + 0x50);
            *(ulong *)(lVar18 + 0x70) =
                 CONCAT44(fVar72 + (float)((ulong)*(undefined8 *)(lVar18 + 0x70) >> 0x20),
                          fVar45 + (float)*(undefined8 *)(lVar18 + 0x70));
            *(float *)(lVar18 + 0x78) = fVar67 + *(float *)(lVar18 + 0x78);
            *(ulong *)(lVar18 + 0x98) =
                 CONCAT44(fVar72 + (float)((ulong)*(undefined8 *)(lVar18 + 0x98) >> 0x20),
                          fVar45 + (float)*(undefined8 *)(lVar18 + 0x98));
            *(float *)(lVar18 + 0xa0) = fVar67 + *(float *)(lVar18 + 0xa0);
            *(ulong *)(lVar18 + 0xc0) =
                 CONCAT44(fVar72 + (float)((ulong)*(undefined8 *)(lVar18 + 0xc0) >> 0x20),
                          fVar45 + (float)*(undefined8 *)(lVar18 + 0xc0));
            *(float *)(lVar18 + 200) = fVar67 + *(float *)(lVar18 + 200);
            goto LAB_0603e188;
          }
          goto LAB_0603e0c4;
        }
        goto LAB_0603fce4;
      }
      goto LAB_0603e0c4;
    }
    if (uVar39 <= uVar12) goto LAB_0603fce4;
    lVar18 = lVar28 + uVar38 * 0x178;
    *(ulong *)(lVar18 + 0x48) =
         CONCAT44(fVar72 + (float)((ulong)*(undefined8 *)(lVar18 + 0x48) >> 0x20),
                  fVar45 + (float)*(undefined8 *)(lVar18 + 0x48));
    *(float *)(lVar18 + 0x50) = fVar67 + *(float *)(lVar18 + 0x50);
    *(ulong *)(lVar18 + 0x70) =
         CONCAT44(fVar72 + (float)((ulong)*(undefined8 *)(lVar18 + 0x70) >> 0x20),
                  fVar45 + (float)*(undefined8 *)(lVar18 + 0x70));
    *(float *)(lVar18 + 0x78) = fVar67 + *(float *)(lVar18 + 0x78);
    *(ulong *)(lVar18 + 0x98) =
         CONCAT44(fVar72 + (float)((ulong)*(undefined8 *)(lVar18 + 0x98) >> 0x20),
                  fVar45 + (float)*(undefined8 *)(lVar18 + 0x98));
    *(float *)(lVar18 + 0xa0) = fVar67 + *(float *)(lVar18 + 0xa0);
    *(ulong *)(lVar18 + 0xc0) =
         CONCAT44(fVar72 + (float)((ulong)*(undefined8 *)(lVar18 + 0xc0) >> 0x20),
                  fVar45 + (float)*(undefined8 *)(lVar18 + 0xc0));
    *(float *)(lVar18 + 200) = fVar67 + *(float *)(lVar18 + 200);
  }
  else {
LAB_0603e0c4:
    if (uVar39 <= uVar12) goto LAB_0603fce4;
    if (DAT_06e84e3e == '\0') {
      FUN_02e3ca1c(PTR_DAT_06a2ef80);
      uVar39 = *(uint *)(lVar24 + 0x18);
      DAT_06e84e3e = '\x01';
    }
    puVar8 = PTR_DAT_06a2ef80;
    uVar49 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_06a2ef80 + 0xb8) + 1);
    *(undefined8 *)(lVar28 + uVar38 * 0x178 + 0x48) =
         **(undefined8 **)(*(long *)PTR_DAT_06a2ef80 + 0xb8);
    *(undefined4 *)(lVar28 + uVar38 * 0x178 + 0x50) = uVar49;
    if (uVar39 <= uVar12) goto LAB_0603fce4;
    lVar31 = lVar28 + uVar38 * 0x178;
    uVar49 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
    *(undefined8 *)(lVar31 + 0x70) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
    *(undefined4 *)(lVar31 + 0x78) = uVar49;
    uVar49 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
    *(undefined8 *)(lVar31 + 0x98) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
    *(undefined4 *)(lVar31 + 0xa0) = uVar49;
    uVar64 = **(undefined8 **)(*(long *)puVar8 + 0xb8);
    uVar49 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
    *(undefined1 *)(lVar18 + 0x170) = 0;
    *(undefined8 *)(lVar31 + 0xc0) = uVar64;
    *(undefined4 *)(lVar31 + 200) = uVar49;
  }
LAB_0603e188:
  iVar16 = FUN_06232690(0);
  *(bool *)((long)unaff_x19 + 0x174) = iVar16 == 1;
  if (iVar17 == 0) {
    puVar26 = (undefined8 *)(*unaff_x19 + 0x8d8);
  }
  else {
    if (iVar17 != 1) goto LAB_0603e204;
    puVar26 = (undefined8 *)(*unaff_x19 + 0x8f8);
  }
  (*(code *)*puVar26)();
LAB_0603e204:
  if ((unaff_x19[0x75] == 0) || (lVar18 = *(long *)(unaff_x19[0x75] + 0x38), lVar18 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar18 + 0x18) <= uVar12) goto LAB_0603fce4;
  lVar18 = lVar18 + uVar38 * 0x178;
  uVar64 = *(undefined8 *)(lVar18 + 0x114);
  *(float *)(lVar18 + 0x11c) = fVar67 + *(float *)(lVar18 + 0x11c);
  *(undefined8 *)(lVar18 + 0x114) =
       CONCAT44(fVar72 + (float)((ulong)uVar64 >> 0x20),fVar45 + (float)uVar64);
  if ((unaff_x19[0x75] == 0) || (lVar18 = *(long *)(unaff_x19[0x75] + 0x38), lVar18 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar18 + 0x18) <= uVar12) goto LAB_0603fce4;
  lVar18 = lVar18 + uVar38 * 0x178;
  *(ulong *)(lVar18 + 0x108) =
       CONCAT44(fVar72 + (float)((ulong)*(undefined8 *)(lVar18 + 0x108) >> 0x20),
                fVar45 + (float)*(undefined8 *)(lVar18 + 0x108));
  *(float *)(lVar18 + 0x110) = fVar67 + *(float *)(lVar18 + 0x110);
  if ((unaff_x19[0x75] == 0) || (lVar18 = *(long *)(unaff_x19[0x75] + 0x38), lVar18 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar18 + 0x18) <= uVar12) goto LAB_0603fce4;
  lVar18 = lVar18 + uVar38 * 0x178;
  *(ulong *)(lVar18 + 0x120) =
       CONCAT44(fVar72 + (float)((ulong)*(undefined8 *)(lVar18 + 0x120) >> 0x20),
                fVar45 + (float)*(undefined8 *)(lVar18 + 0x120));
  *(float *)(lVar18 + 0x128) = fVar67 + *(float *)(lVar18 + 0x128);
  if ((unaff_x19[0x75] == 0) || (lVar18 = *(long *)(unaff_x19[0x75] + 0x38), lVar18 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar18 + 0x18) <= uVar12) goto LAB_0603fce4;
  lVar18 = lVar18 + uVar38 * 0x178;
  uVar64 = *(undefined8 *)(lVar18 + 300);
  *(float *)(lVar18 + 0x134) = fVar67 + *(float *)(lVar18 + 0x134);
  *(undefined8 *)(lVar18 + 300) =
       CONCAT44(fVar72 + (float)((ulong)uVar64 >> 0x20),fVar45 + (float)uVar64);
  lVar18 = unaff_x19[0x75];
  if ((lVar18 == 0) || (lVar31 = *(long *)(lVar18 + 0x38), lVar31 == 0)) goto thunk_FUN_02e3ccc4;
  uVar39 = *(uint *)(lVar31 + 0x18);
  if (uVar39 <= uVar12) goto LAB_0603fce4;
  lVar34 = lVar31 + 0x20 + uVar38 * 0x178;
  uVar64 = *(undefined8 *)(lVar34 + 0x118);
  auVar54._0_8_ = CONCAT44(fVar45 + (float)((ulong)uVar64 >> 0x20),fVar45 + (float)uVar64);
  auVar54._8_4_ = fVar72 + (float)*(undefined8 *)(lVar34 + 0x120);
  auVar54._12_4_ = fVar72 + (float)((ulong)*(undefined8 *)(lVar34 + 0x120) >> 0x20);
  *(float *)(lVar34 + 0x128) = fVar72 + *(float *)(lVar34 + 0x128);
  *(long *)(lVar34 + 0x120) = auVar54._8_8_;
  *(undefined8 *)(lVar34 + 0x118) = auVar54._0_8_;
  if (uVar32 == uVar13) {
    uVar13 = (int)in_stack_000001a8[10] - 1;
    if (uVar12 == uVar13) goto LAB_0603e414;
  }
  else {
    lVar18 = *(long *)(lVar18 + 0x50);
    if (lVar18 == 0) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar18 + 0x18) <= uVar13) goto LAB_0603fce4;
    lVar34 = lVar18 + 0x20 + (long)(int)uVar13 * 0x60;
    fVar47 = fVar72 + *(float *)(lVar34 + 0x38);
    *(ulong *)(lVar34 + 0x30) =
         CONCAT44(fVar72 + (float)((ulong)*(undefined8 *)(lVar34 + 0x30) >> 0x20),
                  fVar72 + (float)*(undefined8 *)(lVar34 + 0x30));
    *(float *)(lVar34 + 0x38) = fVar47;
    *(float *)(lVar34 + 0x3c) = fVar45 + *(float *)(lVar34 + 0x3c);
    if (uVar39 <= *(uint *)(lVar34 + 0x18)) goto LAB_0603fce4;
    lVar18 = lVar18 + 0x20 + (long)(int)uVar13 * 0x60;
    uVar49 = *(undefined4 *)(lVar31 + 0x20 + (long)(int)*(uint *)(lVar34 + 0x18) * 0x178 + 0xf4);
    *(float *)(lVar18 + 0x54) = fVar47;
    *(undefined4 *)(lVar18 + 0x50) = uVar49;
    lVar18 = unaff_x19[0x75];
    if ((lVar18 == 0) || (lVar31 = *(long *)(lVar18 + 0x50), lVar31 == 0)) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar31 + 0x18) <= uVar13) goto LAB_0603fce4;
    lVar18 = *(long *)(lVar18 + 0x38);
    if (lVar18 == 0) goto thunk_FUN_02e3ccc4;
    uVar39 = *(uint *)(lVar31 + 0x20 + (long)(int)uVar13 * 0x60 + 0x24);
    if (*(uint *)(lVar18 + 0x18) <= uVar39) goto LAB_0603fce4;
    lVar31 = lVar31 + 0x20 + (long)(int)uVar13 * 0x60;
    *(undefined4 *)(lVar31 + 0x58) = *(undefined4 *)(lVar18 + (long)(int)uVar39 * 0x178 + 0x120);
    *(undefined4 *)(lVar31 + 0x5c) = *(undefined4 *)(lVar31 + 0x30);
    uVar13 = (int)in_stack_000001a8[10] - 1;
LAB_0603e414:
    if (uVar12 == uVar13) {
      lVar18 = unaff_x19[0x75];
      if ((lVar18 == 0) || (lVar31 = *(long *)(lVar18 + 0x50), lVar31 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar31 + 0x18) <= uVar32) goto LAB_0603fce4;
      lVar34 = lVar31 + 0x20 + (long)(int)uVar32 * 0x60;
      fVar47 = fVar72 + *(float *)(lVar34 + 0x38);
      *(ulong *)(lVar34 + 0x30) =
           CONCAT44(fVar72 + (float)((ulong)*(undefined8 *)(lVar34 + 0x30) >> 0x20),
                    fVar72 + (float)*(undefined8 *)(lVar34 + 0x30));
      *(float *)(lVar34 + 0x38) = fVar47;
      *(float *)(lVar34 + 0x3c) = fVar45 + *(float *)(lVar34 + 0x3c);
      lVar18 = *(long *)(lVar18 + 0x38);
      if (lVar18 == 0) goto thunk_FUN_02e3ccc4;
      uVar13 = *(uint *)(lVar31 + 0x20 + (long)(int)uVar32 * 0x60 + 0x18);
      if (*(uint *)(lVar18 + 0x18) <= uVar13) goto LAB_0603fce4;
      *(undefined4 *)(lVar34 + 0x50) = *(undefined4 *)(lVar18 + (long)(int)uVar13 * 0x178 + 0x114);
      *(float *)(lVar34 + 0x54) = fVar47;
      lVar18 = unaff_x19[0x75];
      if ((lVar18 == 0) || (lVar31 = *(long *)(lVar18 + 0x50), lVar31 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar31 + 0x18) <= uVar32) goto LAB_0603fce4;
      lVar18 = *(long *)(lVar18 + 0x38);
      if (lVar18 == 0) goto thunk_FUN_02e3ccc4;
      uVar13 = *(uint *)(lVar31 + 0x20 + (long)(int)uVar32 * 0x60 + 0x24);
      if (*(uint *)(lVar18 + 0x18) <= uVar13) goto LAB_0603fce4;
      lVar31 = lVar31 + 0x20 + (long)(int)uVar32 * 0x60;
      *(undefined4 *)(lVar31 + 0x58) = *(undefined4 *)(lVar18 + (long)(int)uVar13 * 0x178 + 0x120);
      *(undefined4 *)(lVar31 + 0x5c) = *(undefined4 *)(lVar31 + 0x30);
    }
  }
  if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar19 = FUN_05580720(uVar43,0);
  if (((((uVar19 & 1) == 0) && (1 < uVar43 - 0x2010)) && (uVar43 != 0xad)) && (uVar43 != 0x2d)) {
    if (bVar9) {
      if (((uVar12 != 0) && ((int)uVar12 < (int)(*(uint *)(lVar24 + 0x18) - 1))) &&
         (((int)uVar12 < (int)in_stack_000001a8[10] && ((uVar43 == 0x2019 || (uVar43 == 0x27)))))) {
        if (*(uint *)(lVar24 + 0x18) <= uVar12 - 1) goto LAB_0603fce4;
        uVar42 = *(undefined2 *)(lVar28 + (ulong)(uVar12 - 1) * 0x178 + 4);
        if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar19 = FUN_05580720(uVar42,0);
        if ((uVar19 & 1) != 0) {
          if (*(uint *)(lVar24 + 0x18) <= uVar12 + 1) goto LAB_0603fce4;
          uVar42 = *(undefined2 *)(lVar28 + (ulong)(uVar12 + 1) * 0x178 + 4);
          if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          uVar19 = FUN_05580720(uVar42,0);
          if ((uVar19 & 1) != 0) goto LAB_0603e714;
        }
      }
LAB_0603f468:
      if (uVar12 == (int)in_stack_000001a8[10] - 1U) {
        if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar19 = FUN_05580720(uVar43,0);
        uVar13 = uVar12;
        if ((uVar19 & 1) == 0) goto LAB_0603f4a4;
      }
      else {
LAB_0603f4a4:
        uVar13 = uVar12 - 1;
      }
      lVar18 = unaff_x19[0x75];
      if (lVar18 != 0) {
        lVar31 = *(long *)(lVar18 + 0x40);
        if (lVar31 != 0) {
          uVar39 = *(uint *)(lVar18 + 0x24);
          iVar17 = *(int *)(lVar31 + 0x18);
          if (iVar17 < (int)(uVar39 + 1)) {
            if (*(int *)(*(long *)System_Collections_Generic_List<AchievementDefinition>_TypeInfo +
                        0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            System_Array__InternalArray__ICollection_Add<ValueTuple<int,_Vector2Int>>
                      ((long *)(lVar18 + 0x40),iVar17 + 1,
                       *(undefined8 *)System_Collections_Generic_List<ABSSequentiable>_TypeInfo);
            lVar18 = unaff_x19[0x75];
            if (lVar18 == 0) goto thunk_FUN_02e3ccc4;
          }
          lVar18 = *(long *)(lVar18 + 0x40);
          if (lVar18 != 0) {
            if (uVar39 < *(uint *)(lVar18 + 0x18)) {
              lVar18 = lVar18 + (long)(int)uVar39 * 0x18;
              *(long **)(lVar18 + 0x20) = unaff_x19;
              *(uint *)(lVar18 + 0x28) = uVar15;
              *(uint *)(lVar18 + 0x2c) = uVar13;
              *(uint *)(lVar18 + 0x30) = (uVar13 - uVar15) + 1;
              thunk_FUN_02ee2be8();
              lVar18 = unaff_x19[0x75];
              if (lVar18 != 0) {
                lVar31 = *(long *)(lVar18 + 0x50);
                *(int *)(lVar18 + 0x24) = *(int *)(lVar18 + 0x24) + 1;
                if (lVar31 != 0) {
                  if (uVar32 < *(uint *)(lVar31 + 0x18)) {
                    bVar9 = false;
                    goto LAB_0603e630;
                  }
                  goto LAB_0603fce4;
                }
              }
              goto thunk_FUN_02e3ccc4;
            }
            goto LAB_0603fce4;
          }
        }
      }
      goto thunk_FUN_02e3ccc4;
    }
    if (uVar12 == 0) {
      if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      bVar11 = FUN_05580678(uVar43,0);
      if ((((uVar43 == 0x200b | bVar11 ^ 0xff | bVar10) & 1) != 0) ||
         (in_stack_000001a8[10] == 1.4013e-45)) goto LAB_0603f468;
    }
    bVar9 = false;
  }
  else {
    if (!bVar9) {
      uVar15 = uVar12;
    }
    if (uVar12 != (int)in_stack_000001a8[10] - 1U) {
LAB_0603e714:
      bVar9 = true;
      goto LAB_0603e71c;
    }
    lVar18 = unaff_x19[0x75];
    if (lVar18 == 0) goto thunk_FUN_02e3ccc4;
    lVar31 = *(long *)(lVar18 + 0x40);
    if (lVar31 == 0) goto thunk_FUN_02e3ccc4;
    uVar13 = *(uint *)(lVar18 + 0x24);
    iVar17 = *(int *)(lVar31 + 0x18);
    if (iVar17 < (int)(uVar13 + 1)) {
      if (*(int *)(*(long *)System_Collections_Generic_List<AchievementDefinition>_TypeInfo + 0xe4)
          == 0) {
        thunk_FUN_02e9a04c();
      }
      System_Array__InternalArray__ICollection_Add<ValueTuple<int,_Vector2Int>>
                ((long *)(lVar18 + 0x40),iVar17 + 1,
                 *(undefined8 *)System_Collections_Generic_List<ABSSequentiable>_TypeInfo);
      lVar18 = unaff_x19[0x75];
      if (lVar18 == 0) goto thunk_FUN_02e3ccc4;
    }
    lVar18 = *(long *)(lVar18 + 0x40);
    if (lVar18 == 0) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar18 + 0x18) <= uVar13) goto LAB_0603fce4;
    lVar18 = lVar18 + (long)(int)uVar13 * 0x18;
    *(long **)(lVar18 + 0x20) = unaff_x19;
    *(uint *)(lVar18 + 0x28) = uVar15;
    *(uint *)(lVar18 + 0x2c) = uVar12;
    *(uint *)(lVar18 + 0x30) = (uVar12 - uVar15) + 1;
    thunk_FUN_02ee2be8();
    lVar18 = unaff_x19[0x75];
    if (lVar18 == 0) goto thunk_FUN_02e3ccc4;
    lVar31 = *(long *)(lVar18 + 0x50);
    *(int *)(lVar18 + 0x24) = *(int *)(lVar18 + 0x24) + 1;
    if (lVar31 == 0) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar31 + 0x18) <= uVar32) goto LAB_0603fce4;
    bVar9 = true;
LAB_0603e630:
    lVar31 = lVar31 + (long)(int)uVar32 * 0x60;
    fStack00000000000000ec = (float)((int)fStack00000000000000ec + 1);
    *(int *)(lVar31 + 0x34) = *(int *)(lVar31 + 0x34) + 1;
  }
LAB_0603e71c:
  lVar18 = unaff_x19[0x75];
  if ((lVar18 == 0) || (lVar31 = *(long *)(lVar18 + 0x38), lVar31 == 0)) goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar31 + 0x18) <= uVar12) goto LAB_0603fce4;
  lVar34 = lVar31 + 0x20;
  if ((*(byte *)(lVar34 + uVar38 * 0x178 + 0x16c) >> 2 & 1) == 0) {
    if (bVar7) {
      if (*(uint *)(lVar31 + 0x18) <= (uint)((long)(int)uVar12 + -1)) goto LAB_0603fce4;
      lVar34 = lVar34 + ((long)(int)uVar12 + -1) * 0x178;
      lVar31 = *unaff_x19;
      uVar49 = *(undefined4 *)(lVar34 + 0x100);
      uVar61 = *(undefined4 *)(lVar34 + 0x13c);
LAB_0603e9d8:
      pcVar27 = *(code **)(lVar31 + 0x908);
LAB_0603e9e0:
      (*pcVar27)(fStack000000000000006c,fStack0000000000000064,uStack0000000000000068,uVar49,
                 fStack0000000000000138,0,fVar46,uVar61);
LAB_0603ea24:
      lVar18 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
      if (*(int *)(lVar18 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
        lVar18 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
      }
      fStack000000000000016c = 0.0;
      fStack0000000000000134 = 0.0;
      fStack0000000000000138 = *(float *)(*(long *)(lVar18 + 0xb8) + 0x1730);
    }
    bVar7 = false;
  }
  else {
    lVar31 = lVar34 + uVar38 * 0x178;
    *(int *)(lVar31 + 0x148) = iVar14;
    iVar17 = *(int *)(lVar31 + 0x40);
    if ((((int)unaff_x19[0x6d] < (int)uVar12) || ((int)unaff_x19[0x6e] < (int)uVar32)) ||
       ((*(int *)((long)unaff_x19 + 0x314) == 5 && (iVar17 + 1 != (int)unaff_x19[0x6f])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar10 & 1) == 0 && uVar43 != 0x200b) {
      fVar45 = *(float *)(lVar34 + uVar38 * 0x178 + 0x13c);
      if (fStack000000000000016c <= fVar45) {
        fStack000000000000016c = fVar45;
      }
      if (fStack0000000000000134 <= ABS(fVar66)) {
        fStack0000000000000134 = ABS(fVar66);
      }
      if (iVar17 != uStack0000000000000060) {
        if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) == 0)
        {
          thunk_FUN_02e9a04c();
          lVar18 = unaff_x19[0x75];
          if (lVar18 == 0) goto thunk_FUN_02e3ccc4;
          lVar31 = *(long *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xb8
                            );
        }
        else {
          lVar31 = *(long *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xb8
                            );
        }
        fStack0000000000000138 = *(float *)(lVar31 + 0x1730);
      }
      lVar18 = *(long *)(lVar18 + 0x38);
      if (lVar18 == 0) goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar18 + 0x18) <= uVar12) goto LAB_0603fce4;
      if (unaff_x19[0x1f] == 0) goto thunk_FUN_02e3ccc4;
      fVar47 = *(float *)(lVar18 + uVar38 * 0x178 + 0x144);
      fVar45 = (float)FUN_0630f910(unaff_x19[0x1f] + 0x28,0);
      fVar47 = fVar47 + fStack000000000000016c * fVar45;
      uStack0000000000000060 = iVar17;
      if (fVar47 <= fStack0000000000000138) {
        fStack0000000000000138 = fVar47;
      }
    }
    if (!bVar7) {
      bVar7 = false;
      if ((bVar1) && ((int)uVar12 <= (int)uVar3)) {
        if ((uVar43 & 0xfffe) == 10) goto LAB_0603ea5c;
        if (uVar43 != 0xd) {
          if (uVar12 == uVar3) {
            if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar19 = FUN_055814cc(uVar43,0);
            if ((uVar19 & 1) != 0) goto LAB_0603e930;
          }
          if ((unaff_x19[0x75] != 0) && (lVar18 = *(long *)(unaff_x19[0x75] + 0x38), lVar18 != 0)) {
            if (uVar12 < *(uint *)(lVar18 + 0x18)) {
              lVar18 = lVar18 + uVar38 * 0x178;
              fVar46 = *(float *)(lVar18 + 0x15c);
              fVar45 = fVar66;
              fVar47 = fVar46;
              if (fStack000000000000016c != 0.0) {
                fVar45 = fStack0000000000000134;
                fVar47 = fStack000000000000016c;
              }
              fStack000000000000016c = fVar47;
              uStack0000000000000068 = 0;
              fStack000000000000006c = *(float *)(lVar18 + 0x114);
              uStack0000000000000084 = *(undefined4 *)(lVar18 + 0x164);
              fStack0000000000000064 = fStack0000000000000138;
              fStack0000000000000134 = fVar45;
              goto LAB_0603e99c;
            }
            goto LAB_0603fce4;
          }
          goto thunk_FUN_02e3ccc4;
        }
      }
LAB_0603e930:
      bVar7 = false;
      goto LAB_0603ea5c;
    }
LAB_0603e99c:
    if (in_stack_000001a8[10] == 1.4013e-45) {
      if ((unaff_x19[0x75] != 0) && (lVar18 = *(long *)(unaff_x19[0x75] + 0x38), lVar18 != 0)) {
        if (uVar12 < *(uint *)(lVar18 + 0x18)) {
          lVar18 = lVar18 + uVar38 * 0x178;
LAB_0603e9cc:
          lVar31 = *unaff_x19;
          uVar49 = *(undefined4 *)(lVar18 + 0x120);
          uVar61 = *(undefined4 *)(lVar18 + 0x15c);
          goto LAB_0603e9d8;
        }
        goto LAB_0603fce4;
      }
      goto thunk_FUN_02e3ccc4;
    }
    if ((uVar12 == uVar2) || ((int)uVar3 <= (int)uVar12)) {
      lVar18 = unaff_x19[0x75];
      if ((bVar10 & 1) == 0 && uVar43 != 0x200b) {
        if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x38), lVar18 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar18 + 0x18) <= uVar12) goto LAB_0603fce4;
        lVar18 = lVar18 + uVar38 * 0x178;
      }
      else {
        if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x38), lVar18 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar18 + 0x18) <= uVar3) goto LAB_0603fce4;
        lVar18 = lVar18 + (long)(int)uVar3 * 0x178;
      }
      uVar49 = *(undefined4 *)(lVar18 + 0x120);
      uVar61 = *(undefined4 *)(lVar18 + 0x15c);
      pcVar27 = *(code **)(*unaff_x19 + 0x908);
      goto LAB_0603e9e0;
    }
    if (!bVar1) {
      if ((unaff_x19[0x75] != 0) && (lVar18 = *(long *)(unaff_x19[0x75] + 0x38), lVar18 != 0)) {
        if ((uint)((long)(int)uVar12 + -1) < *(uint *)(lVar18 + 0x18)) {
          lVar18 = lVar18 + ((long)(int)uVar12 + -1) * 0x178;
          goto LAB_0603e9cc;
        }
        goto LAB_0603fce4;
      }
      goto thunk_FUN_02e3ccc4;
    }
    if ((int)uVar12 < (int)in_stack_000001a8[10] + -1) {
      if ((unaff_x19[0x75] == 0) || (lVar18 = *(long *)(unaff_x19[0x75] + 0x38), lVar18 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar18 + 0x18) <= uVar12 + 1) goto LAB_0603fce4;
      uVar19 = FUN_06059f90(uStack0000000000000084,
                            *(undefined4 *)(lVar18 + (ulong)(uVar12 + 1) * 0x178 + 0x164),0);
      if ((uVar19 & 1) == 0) {
        if ((unaff_x19[0x75] != 0) && (lVar18 = *(long *)(unaff_x19[0x75] + 0x38), lVar18 != 0)) {
          if (uVar12 < *(uint *)(lVar18 + 0x18)) {
            lVar18 = lVar18 + uVar38 * 0x178;
            (**(code **)(*unaff_x19 + 0x908))
                      (fStack000000000000006c,fStack0000000000000064,uStack0000000000000068,
                       *(undefined4 *)(lVar18 + 0x120),fStack0000000000000138,0,fVar46,
                       *(undefined4 *)(lVar18 + 0x15c));
            goto LAB_0603ea24;
          }
          goto LAB_0603fce4;
        }
        goto thunk_FUN_02e3ccc4;
      }
      bVar7 = true;
    }
    else {
      bVar7 = true;
    }
  }
LAB_0603ea5c:
  if ((unaff_x19[0x75] == 0) || (lVar18 = *(long *)(unaff_x19[0x75] + 0x38), lVar18 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar18 + 0x18) <= uVar12) goto LAB_0603fce4;
  if (lVar30 == 0) goto thunk_FUN_02e3ccc4;
  uVar13 = *(uint *)(lVar18 + uVar38 * 0x178 + 0x18c);
  fVar45 = (float)FUN_0630f920(lVar30 + 0x28,0);
  if ((uVar13 >> 6 & 1) == 0) {
    if (bVar5) {
      if ((unaff_x19[0x75] != 0) && (lVar30 = *(long *)(unaff_x19[0x75] + 0x38), lVar30 != 0)) {
        if ((uint)((long)(int)uVar12 + -1) < *(uint *)(lVar30 + 0x18)) {
          lVar30 = lVar30 + ((long)(int)uVar12 + -1) * 0x178;
          goto LAB_0603ed10;
        }
        goto LAB_0603fce4;
      }
      goto thunk_FUN_02e3ccc4;
    }
LAB_0603eba4:
    bVar5 = false;
  }
  else {
    lVar18 = unaff_x19[0x75];
    if ((lVar18 == 0) || (lVar31 = *(long *)(lVar18 + 0x38), lVar31 == 0)) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar31 + 0x18) <= uVar12) goto LAB_0603fce4;
    *(int *)(lVar31 + 0x20 + uVar38 * 0x178 + 0x150) = iVar14;
    if ((((int)unaff_x19[0x6d] < (int)uVar12) || ((int)unaff_x19[0x6e] < (int)uVar32)) ||
       ((*(int *)((long)unaff_x19 + 0x314) == 5 &&
        (*(int *)(lVar31 + 0x20 + uVar38 * 0x178 + 0x40) + 1 != (int)unaff_x19[0x6f])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((((bool)(bVar5 | bVar1 ^ 1U)) || ((int)uVar3 < (int)uVar12)) || ((uVar43 & 0xfffe) == 10))
       || (uVar43 == 0xd)) {
LAB_0603eb9c:
      if (!bVar5) goto LAB_0603eba4;
    }
    else {
      if (uVar12 == uVar3) {
        if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar19 = FUN_055814cc(uVar43,0);
        if ((uVar19 & 1) != 0) goto LAB_0603eb9c;
        lVar18 = unaff_x19[0x75];
        if (lVar18 == 0) goto thunk_FUN_02e3ccc4;
      }
      lVar18 = *(long *)(lVar18 + 0x38);
      if (lVar18 == 0) goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar18 + 0x18) <= uVar12) goto LAB_0603fce4;
      lVar18 = lVar18 + uVar38 * 0x178;
      fStack00000000000000a0 = *(float *)(lVar18 + 0x15c);
      fStack0000000000000098 = fVar45 * fStack00000000000000a0 + *(float *)(lVar18 + 0x144);
      uStack0000000000000088 = 0;
      fStack0000000000000058 = *(float *)(lVar18 + 0x58);
      fStack0000000000000094 = *(float *)(lVar18 + 0x114);
    }
    fVar47 = in_stack_000001a8[10];
    if (fVar47 == 1.4013e-45) {
LAB_0603ece4:
      if ((unaff_x19[0x75] == 0) || (lVar30 = *(long *)(unaff_x19[0x75] + 0x38), lVar30 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar30 + 0x18) <= uVar12) goto LAB_0603fce4;
      lVar30 = lVar30 + uVar38 * 0x178;
LAB_0603ed10:
      fVar47 = *(float *)(lVar30 + 0x144);
      lVar18 = *unaff_x19;
      uVar49 = *(undefined4 *)(lVar30 + 0x120);
    }
    else {
      if (uVar12 != uVar2) {
        if ((int)fVar47 <= (int)uVar12) {
LAB_0603ede8:
          if ((int)uVar12 < (int)fVar47) {
            iVar17 = FUN_0626d24c(lVar30,0);
            if (*(uint *)(lVar24 + 0x18) <= uVar12 + 1) goto LAB_0603fce4;
            lVar30 = *(long *)(lVar28 + (ulong)(uVar12 + 1) * 0x178 + 0x20);
            if (lVar30 == 0) goto thunk_FUN_02e3ccc4;
            iVar16 = FUN_0626d24c(lVar30,0);
            if (iVar17 != iVar16) goto LAB_0603ece4;
          }
          if (bVar1) {
            bVar5 = true;
            goto LAB_0603efc0;
          }
          if ((unaff_x19[0x75] != 0) && (lVar30 = *(long *)(unaff_x19[0x75] + 0x38), lVar30 != 0)) {
            if ((uint)((long)(int)uVar12 + -1) < *(uint *)(lVar30 + 0x18)) {
              lVar30 = lVar30 + ((long)(int)uVar12 + -1) * 0x178;
              goto LAB_0603ed10;
            }
            goto LAB_0603fce4;
          }
          goto thunk_FUN_02e3ccc4;
        }
        if ((unaff_x19[0x75] == 0) || (lVar18 = *(long *)(unaff_x19[0x75] + 0x38), lVar18 == 0))
        goto thunk_FUN_02e3ccc4;
        if (uVar12 + 1 < *(uint *)(lVar18 + 0x18)) {
          if (*(float *)(lVar18 + (ulong)(uVar12 + 1) * 0x178 + 0x58) == fStack0000000000000058) {
            if (*(int *)(*(long *)
                          System_Collections_Generic_List<WeakReference<TMP_FontAsset>>_TypeInfo +
                        0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar19 = FUN_0605a494(0);
            if ((uVar19 & 1) != 0) {
              fVar47 = in_stack_000001a8[10];
              goto LAB_0603ede8;
            }
          }
          lVar30 = unaff_x19[0x75];
          if ((int)uVar3 < (int)uVar12) goto LAB_0603ed4c;
          goto LAB_0603ef48;
        }
        goto LAB_0603fce4;
      }
      lVar30 = unaff_x19[0x75];
      if ((uVar43 != 0x200b & (bVar10 ^ 0xff)) == 0) {
LAB_0603ed4c:
        if ((lVar30 == 0) || (lVar30 = *(long *)(lVar30 + 0x38), lVar30 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar30 + 0x18) <= uVar3) goto LAB_0603fce4;
        lVar30 = lVar30 + (long)(int)uVar3 * 0x178;
      }
      else {
LAB_0603ef48:
        if ((lVar30 == 0) || (lVar30 = *(long *)(lVar30 + 0x38), lVar30 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar30 + 0x18) <= uVar12) goto LAB_0603fce4;
        lVar30 = lVar30 + uVar38 * 0x178;
      }
      fVar47 = *(float *)(lVar30 + 0x144);
      lVar18 = *unaff_x19;
      uVar49 = *(undefined4 *)(lVar30 + 0x120);
    }
    (**(code **)(lVar18 + 0x908))
              (fStack0000000000000094,fStack0000000000000098,uStack0000000000000088,uVar49,
               fStack00000000000000a0 * fVar45 + fVar47,0,fStack00000000000000a0,
               fStack00000000000000a0);
    bVar5 = false;
  }
LAB_0603efc0:
  if ((unaff_x19[0x75] == 0) || (lVar30 = *(long *)(unaff_x19[0x75] + 0x38), lVar30 == 0))
  goto thunk_FUN_02e3ccc4;
  uVar13 = (uint)*(undefined8 *)(lVar30 + 0x18);
  if (uVar13 <= uVar12) goto LAB_0603fce4;
  if ((*(byte *)(lVar30 + 0x20 + uVar38 * 0x178 + 0x16d) >> 1 & 1) == 0) {
    if (bVar6) {
      (**(code **)(*unaff_x19 + 0x918))();
    }
    bVar6 = false;
  }
  else {
    if ((((int)unaff_x19[0x6d] < (int)uVar12) || ((int)unaff_x19[0x6e] < (int)uVar32)) ||
       ((*(int *)((long)unaff_x19 + 0x314) == 5 &&
        (*(int *)(lVar30 + 0x20 + uVar38 * 0x178 + 0x40) + 1 != (int)unaff_x19[0x6f])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar6) {
LAB_0603f144:
      if (uVar13 <= uVar12) goto LAB_0603fce4;
      lVar30 = lVar30 + uVar38 * 0x178;
      in_stack_000001e0 = CONCAT44(in_stack_00001314,in_stack_00001310);
      auVar4._8_4_ = in_stack_00001318;
      auVar4._0_8_ = in_stack_000001e0;
      auVar4._12_4_ = in_stack_0000131c;
      lVar18 = 0x118;
      if ((bVar10 & 1) == 0) {
        lVar18 = 0xf4;
      }
      fVar71 = *(float *)(lVar30 + 0x180);
      fVar72 = *(float *)(lVar30 + 0x184);
      fVar50 = *(float *)(lVar30 + 0x188);
      uVar64 = *(undefined8 *)(lVar30 + 0x178);
      fVar51 = *(float *)(lVar30 + 0x120);
      fVar45 = *(float *)(lVar30 + 0x13c);
      fVar69 = *(float *)(lVar30 + 0x140);
      fVar48 = *(float *)(lVar30 + 0x148);
      fVar47 = *(float *)(lVar30 + lVar18 + 0x20);
      in_stack_000001e8 = auVar4._8_8_;
      in_stack_000001c8 = uVar64;
      fStack00000000000001d0 = fVar71;
      fStack00000000000001d4 = fVar72;
      in_stack_000001d8 = fVar50;
      in_stack_000001f0 = in_stack_00001320;
      uVar38 = FUN_0605b5b8(&stack0x000001e0,&stack0x000001c8,0);
      if ((uVar38 & 1) == 0) {
        if ((bVar10 & 1) == 0) {
          fVar45 = fVar51;
        }
        if (*(int *)(*(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        fVar47 = fVar47 - in_stack_00001314;
        if (fVar47 <= fStack00000000000000e8) {
          fStack00000000000000e8 = fVar47;
        }
        if (fStack00000000000000dc <= fVar45 + in_stack_00001318) {
          fStack00000000000000dc = fVar45 + in_stack_00001318;
        }
        if (*(int *)(*(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        fVar48 = fVar48 - in_stack_00001320;
        fVar69 = fVar69 + in_stack_0000131c;
        if (fVar48 <= in_stack_00000110._4_4_) {
          in_stack_00000110._4_4_ = fVar48;
        }
        if (fStack00000000000000e0 <= fVar69) {
          fStack00000000000000e0 = fVar69;
        }
      }
      else {
        if (*(int *)(*(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        fStack00000000000000e8 = (fVar47 + (fStack00000000000000dc - in_stack_00001318)) * 0.5;
        (**(code **)(*unaff_x19 + 0x918))();
        if (*(int *)(*(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        if ((bVar10 & 1) == 0) {
          fVar45 = fVar51;
        }
        if (*(int *)(*(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        in_stack_00000110._4_4_ = fVar48 - fVar50;
        in_stack_00001310 = (undefined4)uVar64;
        in_stack_00001314 = (float)((ulong)uVar64 >> 0x20);
        fStack00000000000000dc = fVar71 + fVar45;
        fStack00000000000000e0 = fVar69 + fVar72;
        in_stack_00001318 = fVar71;
        in_stack_0000131c = fVar72;
        in_stack_00001320 = fVar50;
      }
      if (((in_stack_000001a8[10] != 1.4013e-45) && (uVar12 != uVar2)) &&
         (((int)uVar12 < (int)uVar3 && (bVar1)))) {
        bVar6 = true;
        goto LAB_0603f378;
      }
      (**(code **)(*unaff_x19 + 0x918))();
    }
    else {
      bVar6 = false;
      if ((((!bVar1) || ((int)uVar3 < (int)uVar12)) || ((uVar43 & 0xfffe) == 10)) || (uVar43 == 0xd)
         ) goto LAB_0603f378;
      if (uVar12 != uVar3) {
LAB_0603f0c8:
        puVar8 = System_Collections_Generic_List<AudioListener>_TypeInfo;
        lVar18 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
        if (*(int *)(lVar18 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
          lVar18 = *(long *)puVar8;
        }
        if ((unaff_x19[0x75] != 0) && (lVar30 = *(long *)(unaff_x19[0x75] + 0x38), lVar30 != 0)) {
          uVar13 = (uint)*(undefined8 *)(lVar30 + 0x18);
          if (uVar12 < uVar13) {
            lVar31 = *(long *)(lVar18 + 0xb8);
            lVar18 = lVar30 + uVar38 * 0x178;
            fStack00000000000000dc = *(float *)(lVar31 + 0x1728);
            fStack00000000000000e0 = *(float *)(lVar31 + 0x172c);
            in_stack_00001320 = *(float *)(lVar18 + 0x188);
            fStack00000000000000e8 = *(float *)(lVar31 + 0x1720);
            in_stack_00000110._4_4_ = *(float *)(lVar31 + 0x1724);
            in_stack_00001318 = (float)*(undefined8 *)(lVar18 + 0x180);
            in_stack_0000131c = (float)((ulong)*(undefined8 *)(lVar18 + 0x180) >> 0x20);
            in_stack_00001310 = (undefined4)*(undefined8 *)(lVar18 + 0x178);
            in_stack_00001314 = (float)((ulong)*(undefined8 *)(lVar18 + 0x178) >> 0x20);
            goto LAB_0603f144;
          }
          goto LAB_0603fce4;
        }
        goto thunk_FUN_02e3ccc4;
      }
      if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      uVar19 = FUN_055814cc(uVar43,0);
      if ((uVar19 & 1) == 0) goto LAB_0603f0c8;
    }
    bVar6 = false;
  }
LAB_0603f378:
  fVar45 = in_stack_000001a8[10];
  uVar12 = uVar12 + 1;
  uVar13 = uVar32;
  if ((int)fVar45 <= (int)uVar12) goto LAB_0603f74c;
  goto LAB_0603d6e0;
LAB_0603f74c:
  lVar24 = unaff_x19[0x75];
  if (lVar24 != 0) {
    iVar17 = uVar32 + 1;
    plVar41 = (long *)System_Collections_Generic_List<byte[]>_TypeInfo;
LAB_0603f770:
    lVar28 = *(long *)(lVar24 + 0x60);
    if (lVar28 != 0) {
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0xd5)) {
LAB_0603fce4:
                    /* WARNING: Subroutine does not return */
        FUN_02e3cccc();
      }
      *(int *)(lVar28 + (long)(int)*(uint *)(unaff_x19 + 0xd5) * 0x50 + 0x28) = iVar14;
      *(float *)(lVar24 + 0x18) = fVar45;
      lVar28 = unaff_x19[0xd8];
      *(int *)(lVar24 + 0x2c) = iVar17;
      if ((int)fVar45 < 1 || fStack00000000000000ec == 0.0) {
        fStack00000000000000ec = 1.4013e-45;
      }
      *(int *)(lVar24 + 0x1c) = (int)lVar28;
      *(float *)(lVar24 + 0x24) = fStack00000000000000ec;
      *(int *)(lVar24 + 0x30) = *(int *)((long)unaff_x19 + 0x4cc) + 1;
      if (((int)unaff_x19[0x6b] != 0xff) ||
         (uVar38 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar38 & 1) == 0)) {
LAB_0603d144:
        if (*(int *)(*(long *)PTR_DAT_06a3c3a0 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        FUN_060594e8();
        return;
      }
      lVar24 = unaff_x19[0xdf];
      if (lVar24 != 0) {
        (**(code **)(lVar24 + 0x18))
                  (*(undefined8 *)(lVar24 + 0x40),unaff_x19[0x75],*(undefined8 *)(lVar24 + 0x28));
      }
      if (*(int *)((long)unaff_x19 + 0x35c) != 0) {
        if ((unaff_x19[0x75] == 0) || (lVar24 = *(long *)(unaff_x19[0x75] + 0x60), lVar24 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(int *)(*plVar41 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        if (*(int *)(lVar24 + 0x18) == 0) goto LAB_0603fce4;
        FUN_060a5370(lVar24 + 0x20,1,0);
      }
      if (unaff_x19[0x7c] != 0) {
        FUN_06242810(unaff_x19[0x7c],0);
        if ((unaff_x19[0x75] != 0) && (lVar24 = *(long *)(unaff_x19[0x75] + 0x60), lVar24 != 0)) {
          if (*(int *)(lVar24 + 0x18) == 0) goto LAB_0603fce4;
          if (unaff_x19[0x7c] != 0) {
            FUN_06240928(unaff_x19[0x7c],*(undefined8 *)(lVar24 + 0x30),0);
            if ((unaff_x19[0x75] != 0) && (lVar24 = *(long *)(unaff_x19[0x75] + 0x60), lVar24 != 0))
            {
              if (*(int *)(lVar24 + 0x18) == 0) goto LAB_0603fce4;
              if (unaff_x19[0x7c] != 0) {
                FUN_06241714(unaff_x19[0x7c],0,*(undefined8 *)(lVar24 + 0x48),0);
                if ((unaff_x19[0x75] != 0) &&
                   (lVar24 = *(long *)(unaff_x19[0x75] + 0x60), lVar24 != 0)) {
                  if (*(int *)(lVar24 + 0x18) == 0) goto LAB_0603fce4;
                  if (unaff_x19[0x7c] != 0) {
                    FUN_06240b40(unaff_x19[0x7c],*(undefined8 *)(lVar24 + 0x50),0);
                    if ((unaff_x19[0x75] != 0) &&
                       (lVar24 = *(long *)(unaff_x19[0x75] + 0x60), lVar24 != 0)) {
                      if (*(int *)(lVar24 + 0x18) == 0) goto LAB_0603fce4;
                      if (unaff_x19[0x7c] != 0) {
                        UnityEngine_TextCore_Text_SpriteAsset__UpdateLookupTables
                                  (unaff_x19[0x7c],*(undefined8 *)(lVar24 + 0x58),0);
                        if (unaff_x19[0x7c] != 0) {
                          FUN_062425d0(unaff_x19[0x7c],0);
                          lVar24 = unaff_x19[0x75];
                          if (lVar24 != 0) {
                            lVar30 = 0;
                            lVar28 = 0;
                            do {
                              uVar38 = lVar28 + 1;
                              if ((long)*(int *)(lVar24 + 0x34) <= (long)uVar38) goto LAB_0603d144;
                              lVar24 = *(long *)(lVar24 + 0x60);
                              if (lVar24 == 0) break;
                              if (*(int *)(*plVar41 + 0xe4) == 0) {
                                thunk_FUN_02e9a04c();
                              }
                              if (*(uint *)(lVar24 + 0x18) <= uVar38) goto LAB_0603fce4;
                              FUN_060a524c(lVar24 + lVar30 + 0x70,0);
                              lVar24 = unaff_x19[0xe5];
                              if (lVar24 == 0) break;
                              if (*(uint *)(lVar24 + 0x18) <= uVar38) goto LAB_0603fce4;
                              uVar64 = *(undefined8 *)(lVar24 + lVar28 * 8 + 0x28);
                              if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
                                thunk_FUN_02e9a04c();
                              }
                              uVar19 = FUN_062696b0(uVar64,0,0);
                              if ((uVar19 & 1) == 0) {
                                if (*(int *)((long)unaff_x19 + 0x35c) != 0) {
                                  if ((unaff_x19[0x75] == 0) ||
                                     (lVar24 = *(long *)(unaff_x19[0x75] + 0x60), lVar24 == 0))
                                  break;
                                  if (*(int *)(*plVar41 + 0xe4) == 0) {
                                    thunk_FUN_02e9a04c();
                                  }
                                  if (*(uint *)(lVar24 + 0x18) <= uVar38) goto LAB_0603fce4;
                                  FUN_060a5370(lVar24 + lVar30 + 0x70,1,0);
                                }
                                lVar24 = unaff_x19[0xe5];
                                if (lVar24 == 0) break;
                                if (*(uint *)(lVar24 + 0x18) <= uVar38) goto LAB_0603fce4;
                                lVar24 = *(long *)(lVar24 + lVar28 * 8 + 0x28);
                                if (lVar24 == 0) break;
                                lVar24 = FUN_060ae428(lVar24,0);
                                if ((unaff_x19[0x75] == 0) ||
                                   (lVar18 = *(long *)(unaff_x19[0x75] + 0x60), lVar18 == 0)) break;
                                if (*(uint *)(lVar18 + 0x18) <= uVar38) goto LAB_0603fce4;
                                if (lVar24 == 0) break;
                                FUN_06240928(lVar24,*(undefined8 *)(lVar18 + lVar30 + 0x80),0);
                                lVar24 = unaff_x19[0xe5];
                                if (lVar24 == 0) break;
                                if (*(uint *)(lVar24 + 0x18) <= uVar38) goto LAB_0603fce4;
                                lVar24 = *(long *)(lVar24 + lVar28 * 8 + 0x28);
                                if (lVar24 == 0) break;
                                lVar24 = FUN_060ae428(lVar24,0);
                                if ((unaff_x19[0x75] == 0) ||
                                   (lVar18 = *(long *)(unaff_x19[0x75] + 0x60), lVar18 == 0)) break;
                                if (*(uint *)(lVar18 + 0x18) <= uVar38) goto LAB_0603fce4;
                                if (lVar24 == 0) break;
                                FUN_06241714(lVar24,0,*(undefined8 *)(lVar18 + lVar30 + 0x98),0);
                                lVar24 = unaff_x19[0xe5];
                                if (lVar24 == 0) break;
                                if (*(uint *)(lVar24 + 0x18) <= uVar38) goto LAB_0603fce4;
                                lVar24 = *(long *)(lVar24 + lVar28 * 8 + 0x28);
                                if (lVar24 == 0) break;
                                lVar24 = FUN_060ae428(lVar24,0);
                                if ((unaff_x19[0x75] == 0) ||
                                   (lVar18 = *(long *)(unaff_x19[0x75] + 0x60), lVar18 == 0)) break;
                                if (*(uint *)(lVar18 + 0x18) <= uVar38) goto LAB_0603fce4;
                                if (lVar24 == 0) break;
                                FUN_06240b40(lVar24,*(undefined8 *)(lVar18 + lVar30 + 0xa0),0);
                                lVar24 = unaff_x19[0xe5];
                                if (lVar24 == 0) break;
                                if (*(uint *)(lVar24 + 0x18) <= uVar38) goto LAB_0603fce4;
                                lVar24 = *(long *)(lVar24 + lVar28 * 8 + 0x28);
                                if (lVar24 == 0) break;
                                lVar24 = FUN_060ae428(lVar24,0);
                                if ((unaff_x19[0x75] == 0) ||
                                   (lVar18 = *(long *)(unaff_x19[0x75] + 0x60), lVar18 == 0)) break;
                                if (*(uint *)(lVar18 + 0x18) <= uVar38) goto LAB_0603fce4;
                                if (lVar24 == 0) break;
                                UnityEngine_TextCore_Text_SpriteAsset__UpdateLookupTables
                                          (lVar24,*(undefined8 *)(lVar18 + lVar30 + 0xa8),0);
                                lVar24 = unaff_x19[0xe5];
                                if (lVar24 == 0) break;
                                if (*(uint *)(lVar24 + 0x18) <= uVar38) goto LAB_0603fce4;
                                lVar24 = *(long *)(lVar24 + lVar28 * 8 + 0x28);
                                if ((lVar24 == 0) || (lVar24 = FUN_060ae428(lVar24,0), lVar24 == 0))
                                break;
                                FUN_062425d0(lVar24,0);
                              }
                              lVar24 = unaff_x19[0x75];
                              lVar28 = lVar28 + 1;
                              lVar30 = lVar30 + 0x50;
                            } while (lVar24 != 0);
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
thunk_FUN_02e3ccc4:
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


