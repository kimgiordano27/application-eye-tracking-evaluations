/*
FUNCTION_NAME: FUN_0603c500
ENTRY_POINT: 0603c500
PROGRAM: beastcraft-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: validity_gate;ray_interaction;frame_behavior;keyword_support;attempted_use
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_3;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0603c500(undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined *puVar11;
  bool bVar12;
  byte bVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  undefined1 uVar25;
  char cVar26;
  float in_w8;
  long lVar27;
  long *plVar28;
  float *pfVar29;
  undefined8 *puVar30;
  code *pcVar31;
  float in_w9;
  uint uVar32;
  long lVar33;
  float *pfVar34;
  long lVar35;
  long in_x10;
  long *plVar36;
  long lVar37;
  long lVar38;
  long *unaff_x19;
  ulong uVar39;
  uint unaff_w21;
  int unaff_w22;
  int iVar40;
  float unaff_w23;
  float *unaff_x24;
  int *piVar41;
  int unaff_w25;
  ulong uVar42;
  float unaff_w26;
  uint uVar43;
  ulong uVar44;
  uint unaff_w27;
  long *plVar45;
  uint unaff_w28;
  uint uVar46;
  long *unaff_x29;
  ushort uVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined4 uVar52;
  float fVar53;
  undefined8 uVar54;
  float fVar56;
  undefined1 auVar55 [16];
  float fVar57;
  undefined8 uVar58;
  undefined1 auVar59 [16];
  float fVar60;
  float fVar61;
  undefined4 uVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float unaff_s12;
  float unaff_s13;
  float unaff_s15;
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
  float fStack000000000000016c;
  long *in_stack_00000170;
  float fStack000000000000017c;
  float fStack0000000000000180;
  float fStack0000000000000184;
  float in_stack_00000190;
  float *in_stack_000001a8;
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
  uint in_stack_00001308;
  undefined4 in_stack_00001310;
  float in_stack_00001314;
  float in_stack_00001318;
  float in_stack_0000131c;
  float in_stack_00001320;
  undefined8 in_stack_00001328;
  char in_stack_00001334;
  float in_stack_00001338;
  uint in_stack_0000133c;
  
  uVar42 = _uStack0000000000000068;
  do {
    if ((((in_stack_00000190 == 0.0) && (unaff_w27 != 0x2d)) && (unaff_w27 != 0x200b)) &&
       (unaff_w27 != 0xad)) {
      if (*(char *)((long)unaff_x19 + 0x30d) == '\0') goto LAB_0603c69c;
LAB_0603c510:
      if (((uint)fStack000000000000006c & 1) == 0) {
        fStack000000000000006c = 0.0;
      }
      else {
                    /* try { // try from 0603c534 to 0613c55b has its CatchHandler @ 0603c68c */
        uVar15 = (uint)(in_stack_00000190 == 0.0 || in_stack_0000133c == 0xa0) &
                 ((uint)(in_stack_0000133c != 0xad) | (uint)fStack0000000000000058) ^ 1;
LAB_0603c548:
        fStack000000000000006c = 1.4013e-45;
        plVar28 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor__PreprocessInteractor:
        if (*(int *)(*plVar28 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        FUN_0608c948();
        unaff_w22 = unaff_w25;
        if (uVar15 != 0) {
LAB_0603c590:
          if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) == 0
             ) {
            thunk_FUN_02e9a04c();
          }
          FUN_0608c948();
        }
      }
    }
    else {
      if (*(char *)((long)unaff_x19 + 0x30d) != '\0') goto LAB_0603c510;
                    /* catch() { ... } // from try @ 0603c33c with catch @ 0603c648 */
                    /* catch() { ... } // from try @ 0603c590 with catch @ 0603c64c */
                    /* catch() { ... } // from try @ 0603c600 with catch @ 0603c650 */
      if (0x2006 < (int)unaff_w27) {
                    /* catch() { ... } // from try @ 0603c574 with catch @ 0603c654 */
                    /* catch() { ... } // from try @ 0603c568 with catch @ 0603c658 */
                    /* catch() { ... } // from try @ 0603c55c with catch @ 0603c65c */
                    /* catch() { ... } // from try @ 0603c4e8 with catch @ 0603c660 */
                    /* catch() { ... } // from try @ 0603c4b4 with catch @ 0603c664
                       catch() { ... } // from try @ 0603c60c with catch @ 0603c664 */
                    /* catch() { ... } // from try @ 0603c494 with catch @ 0603c668 */
                    /* catch() { ... } // from try @ 0603c460 with catch @ 0603c66c */
                    /* catch() { ... } // from try @ 0603c310 with catch @ 0603c670
                       catch() { ... } // from try @ 0603c608 with catch @ 0603c670 */
                    /* catch() { ... } // from try @ 0603c2f0 with catch @ 0603c674 */
                    /* catch() { ... } // from try @ 0603c5fc with catch @ 0603c678 */
                    /* catch() { ... } // from try @ 0603c290 with catch @ 0603c67c */
                    /* catch() { ... } // from try @ 0603c288 with catch @ 0603c680 */
                    /* catch() { ... } // from try @ 0603c5f4 with catch @ 0603c684 */
        if (((0x28 < unaff_w27 - 0x2007) ||
            ((1L << ((ulong)(unaff_w27 - 0x2007) & 0x3f) & 0x10000000401U) == 0)) &&
           (unaff_w27 != 0x2060)) goto LAB_0603cad8;
LAB_0603c69c:
        if (*(int *)(*(long *)System_Collections_Generic_List<AchievementProgress>_TypeInfo + 0xe4)
            == 0) {
          thunk_FUN_02e9a04c();
        }
                    /* try { // try from 0603c6b4 to 0613c6b7 has its CatchHandler @ 0603c6d4 */
                    /* try { // try from 0603c6b8 to 0613c6d7 has its CatchHandler @ 0603c180 */
        uVar22 = FUN_060b1e64(unaff_w27,0);
        if ((uVar22 & 1) == 0) {
LAB_0603c6e8:
                    /* catch() { ... } // from try @ 0603c6d8 with catch @ 0603c6e8 */
                    /* try { // try from 0603c6ec to 0613c7ef has its CatchHandler @ 0603c6ec
                       catch() { ... } // from try @ 0603c6ec with catch @ 0603c6ec
                       catch() { ... } // from try @ 0603cd80 with catch @ 0603c6ec
                       catch() { ... } // from try @ 0603cdf4 with catch @ 0603c6ec
                       catch() { ... } // from try @ 0603cec8 with catch @ 0603c6ec
                       catch() { ... } // from try @ 0603ceec with catch @ 0603c6ec */
          if (*(int *)(*(long *)System_Collections_Generic_List<AchievementProgress>_TypeInfo + 0xe4
                      ) == 0) {
            thunk_FUN_02e9a04c();
          }
          uVar22 = FUN_060b1ec0(in_stack_0000133c,0);
          if ((uVar22 & 1) != 0) goto LAB_0603c714;
          if (*(char *)((long)unaff_x19 + 0x30d) != '\0') goto LAB_0603c510;
          if (*(int *)(*(long *)System_Collections_Generic_List<AchievementProgress>_TypeInfo + 0xe4
                      ) == 0) {
            thunk_FUN_02e9a04c();
          }
          uVar22 = FUN_060b1ec0(unaff_w28,0);
          if ((uVar22 & 1) == 0) goto LAB_0603c510;
          if (*(int *)(*(long *)System_Collections_Generic_List<object[]>_TypeInfo + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          lVar27 = FUN_060a80a0(0);
          if ((lVar27 != 0) && (*(long *)(lVar27 + 0x18) != 0)) {
            uVar22 = FUN_052f86ac(*(long *)(lVar27 + 0x18),unaff_w28,
                                  *(undefined8 *)
                                   System_Collections_Generic_List<ValueTuple<Rect,_Rect,_VisualElement>>_TypeInfo
                                 );
            if ((uVar22 & 1) != 0) goto LAB_0603c510;
LAB_0603cb44:
            uVar15 = 0;
            plVar28 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
            goto 
            UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor__PreprocessInteractor;
          }
        }
        else {
                    /* catch() { ... } // from try @ 0603c6b4 with catch @ 0603c6d4 */
          if (*(int *)(*(long *)System_Collections_Generic_List<object[]>_TypeInfo + 0xe4) == 0) {
                    /* try { // try from 0603c6d8 to 0613c6df has its CatchHandler @ 0603c6e8 */
            thunk_FUN_02e9a04c();
          }
                    /* try { // try from 0603c6e0 to 0613c6eb has its CatchHandler @ 0603c180 */
          uVar22 = FUN_060a82b4(0);
          if ((uVar22 & 1) != 0) goto LAB_0603c6e8;
LAB_0603c714:
          if (*(int *)(*(long *)System_Collections_Generic_List<object[]>_TypeInfo + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          lVar27 = FUN_060a80a0(0);
          if ((lVar27 != 0) && (*(long *)(lVar27 + 0x10) != 0)) {
            uVar22 = FUN_052f86ac(*(long *)(lVar27 + 0x10),in_stack_0000133c,
                                  *(undefined8 *)
                                   System_Collections_Generic_List<ValueTuple<Rect,_Rect,_VisualElement>>_TypeInfo
                                 );
            if ((int)fStack0000000000000050 <= (int)unaff_x24[10]) {
              if ((uVar22 & 1) == 0) {
                fStack000000000000006c = 0.0;
                goto LAB_0603cb44;
              }
LAB_0603c85c:
              uVar15 = (uint)(in_stack_00000190 != 0.0);
              if (unaff_w23 != unaff_w26 || (((uint)fStack000000000000006c ^ 0xffffffff) & 1) != 0)
              goto LAB_0603c5f8;
              goto LAB_0603c548;
            }
            if (*(int *)(*(long *)System_Collections_Generic_List<object[]>_TypeInfo + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            lVar27 = FUN_060a80a0(0);
            if ((lVar27 != 0) && (*(long *)(lVar27 + 0x18) != 0)) {
              uVar16 = FUN_052f86ac(*(long *)(lVar27 + 0x18),unaff_w28,
                                    *(undefined8 *)
                                     System_Collections_Generic_List<ValueTuple<Rect,_Rect,_VisualElement>>_TypeInfo
                                   );
              if ((uVar22 & 1) != 0) goto LAB_0603c85c;
              fStack000000000000006c = (float)(uVar16 & (uint)fStack000000000000006c);
              uVar15 = (uint)fStack000000000000006c & (uint)(in_stack_00000190 != 0.0);
              plVar28 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
              if ((((uint)fStack000000000000006c & 1) != 0) || (((uVar16 ^ 1) & 1) != 0))
              goto 
              UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor__PreprocessInteractor;
              fStack000000000000006c = 0.0;
              if (uVar15 == 0) goto LAB_0603c5f8;
              goto LAB_0603c590;
            }
          }
        }
        goto thunk_FUN_02e3ccc4;
      }
                    /* catch() { ... } // from try @ 0603c534 with catch @ 0603c68c */
                    /* catch() { ... } // from try @ 0603c47c with catch @ 0603c690 */
      if (unaff_w27 != 0x2d) {
                    /* catch() { ... } // from try @ 0603c2b0 with catch @ 0603c694
                       catch() { ... } // from try @ 0603c5f8 with catch @ 0603c694 */
                    /* catch() { ... } // from try @ 0603c2d0 with catch @ 0603c698
                       catch() { ... } // from try @ 0603c30c with catch @ 0603c698
                       catch() { ... } // from try @ 0603c3a4 with catch @ 0603c698
                       catch() { ... } // from try @ 0603c408 with catch @ 0603c698
                       catch() { ... } // from try @ 0603c45c with catch @ 0603c698
                       catch() { ... } // from try @ 0603c4b0 with catch @ 0603c698
                       catch() { ... } // from try @ 0603c5b4 with catch @ 0603c698 */
        if (unaff_w27 == 0xa0) goto LAB_0603c69c;
LAB_0603cad8:
        plVar28 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
        lVar27 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
        if (*(int *)(lVar27 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
          lVar27 = *plVar28;
        }
        fStack000000000000006c = 0.0;
        uVar15 = 0;
        *(undefined4 *)(*(long *)(lVar27 + 0xb8) + 0xf80) = 0xffffffff;
        goto UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor__PreprocessInteractor;
      }
      if ((int)in_w8 < 1) goto LAB_0603cad8;
      if ((uint)in_w9 <= (int)in_w8 - 1U) goto LAB_0603fce4;
      uVar5 = *(undefined2 *)(in_x10 + (ulong)((int)in_w8 - 1U) * (ulong)unaff_w21 + 4);
      if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      uVar22 = FUN_0557df5c(uVar5,0);
      if ((uVar22 & 1) == 0) goto LAB_0603cad8;
      if ((unaff_x19[0x75] == 0) || (lVar27 = *(long *)(unaff_x19[0x75] + 0x38), lVar27 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar27 + 0x18) <= (int)unaff_x24[10] - 1U) goto LAB_0603fce4;
      if (*(int *)(lVar27 + (long)(int)((int)unaff_x24[10] - 1U) * (long)(int)unaff_w21 + 0x5c) !=
          (int)unaff_x19[0x98]) goto LAB_0603cad8;
    }
LAB_0603c5f8:
    do {
      plVar28 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
      if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      FUN_0608c948();
      *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
LAB_06038edc:
      do {
        lVar27 = unaff_x19[0x92];
        in_stack_00001308 = in_stack_00001308 + 1;
        if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
        if ((int)*(uint *)(lVar27 + 0x18) <= (int)in_stack_00001308) {
LAB_0603cfc8:
          if ((char)unaff_x19[0x4c] == '\0') {
LAB_0603d08c:
            iVar17 = *(int *)((long)unaff_x19 + 0x26c);
            iVar19 = (int)unaff_x19[0x4e];
          }
          else {
            param_3 = *(float *)((long)unaff_x19 + 0x264);
            param_2 = ZEXT416((uint)_UNK_01317b9c);
            if (param_3 - *(float *)(unaff_x19 + 0x4d) <= _UNK_01317b9c) goto LAB_0603d08c;
            fVar65 = *(float *)((long)unaff_x19 + 0x20c);
            fVar57 = *(float *)((long)unaff_x19 + 0x27c);
            param_2 = ZEXT416((uint)fVar57);
            iVar17 = *(int *)((long)unaff_x19 + 0x26c);
            iVar19 = (int)unaff_x19[0x4e];
            if ((fVar65 < fVar57) && (iVar17 < iVar19)) {
              if (*(float *)((long)unaff_x19 + 0x304) < *(float *)(unaff_x19 + 0x60) / 100.0) {
                *(undefined4 *)((long)unaff_x19 + 0x304) = 0;
              }
              fVar61 = DAT_01317af0;
              *(float *)(unaff_x19 + 0x4d) = fVar65;
              fVar48 = (param_3 - fVar65) * 0.5;
              if (fVar48 <= fVar61) {
                fVar48 = fVar61;
              }
              fVar61 = (fVar65 + fVar48) * 20.0 + 0.5;
              fVar65 = _UNK_01317b80;
              if (fVar61 != INFINITY) {
                fVar65 = (float)(int)fVar61 / 20.0;
              }
              if (fVar57 <= fVar65) {
                fVar65 = fVar57;
              }
              goto 
              UnityEngine_XR_Interaction_Toolkit_Interactors_XRGazeInteractor__CalculateSnapColliderSize
              ;
            }
          }
          *(undefined1 *)((long)unaff_x19 + 0x274) = 1;
          if (iVar19 <= iVar17) {
            uVar20 = FUN_05603500((long)unaff_x19 + 0x26c,0);
            uVar21 = FUN_05618860((long)unaff_x19 + 0x20c,0);
            uVar20 = FUN_0548db04(*(undefined8 *)
                                   System_Collections_Generic_List<BigInteger>_TypeInfo,uVar20,
                                  *(undefined8 *)
                                   System_Collections_Generic_List<BaseInvokableCall>_TypeInfo,
                                  uVar21,0);
            if (*(int *)(*unaff_x29 + 0xe4) == 0) {
              thunk_FUN_02e9a04c(*unaff_x29);
            }
            FUN_062244a4(uVar20,0);
          }
          if ((unaff_x24[10] == 0.0) || ((unaff_x24[10] == 1.4013e-45 && (in_stack_0000133c == 3))))
          {
            (**(code **)(*unaff_x19 + 0x958))();
            goto LAB_0603d144;
          }
          lVar27 = *plVar28;
          if (*(int *)(lVar27 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
            lVar27 = *plVar28;
          }
          plVar45 = (long *)System_Collections_Generic_List<byte[]>_TypeInfo;
          lVar27 = **(long **)(lVar27 + 0xb8);
          if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
          if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0xd5)) goto LAB_0603fce4;
          iVar17 = *(int *)(lVar27 + (long)(int)*(uint *)(unaff_x19 + 0xd5) * 0x38 + 0x54) << 2;
          if ((unaff_x19[0x75] == 0) || (lVar27 = *(long *)(unaff_x19[0x75] + 0x60), lVar27 == 0))
          goto thunk_FUN_02e3ccc4;
          if (*(int *)(*(long *)System_Collections_Generic_List<byte[]>_TypeInfo + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          if (*(int *)(lVar27 + 0x18) == 0) goto LAB_0603fce4;
          FUN_060a5124(lVar27 + 0x20,0,0);
          fStack00000000000000c0 = (float)FUN_031c4efc(0);
          iVar19 = (int)unaff_x19[0x53];
          lVar27 = unaff_x19[0xef];
          in_stack_000000b8._4_4_ = param_3;
          if (iVar19 < 0x401) {
            if (iVar19 == 0x100) {
              if (*(int *)((long)unaff_x19 + 0x314) == 5) {
                if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
                if ((*(uint *)(lVar27 + 0x18) & 0xfffffffe) == 0) goto LAB_0603fce4;
                if ((unaff_x19[0x75] == 0) ||
                   (lVar33 = *(long *)(unaff_x19[0x75] + 0x58), lVar33 == 0))
                goto thunk_FUN_02e3ccc4;
                if (*(uint *)(lVar33 + 0x18) <= uStack0000000000000040) goto LAB_0603fce4;
                fVar65 = *(float *)(lVar33 + (long)(int)uStack0000000000000040 * 0x14 + 0x28);
              }
              else {
                if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
                if ((*(uint *)(lVar27 + 0x18) & 0xfffffffe) == 0) goto LAB_0603fce4;
                fVar65 = *(float *)((long)unaff_x19 + 0x4d4);
              }
              in_stack_000000b8._4_4_ = *(float *)(lVar27 + 0x34);
              fStack000000000000002c = (0.0 - fVar65) - fStack0000000000000028;
              param_3 = *(float *)(lVar27 + 0x2c);
              fVar65 = *(float *)(lVar27 + 0x30);
LAB_0603d53c:
              param_3 = in_stack_00000030 + 0.0 + param_3;
              fVar65 = fVar65 + fStack000000000000002c;
            }
            else {
              if (iVar19 != 0x200) {
                if (iVar19 != 0x400) goto LAB_0603d550;
                if (*(int *)((long)unaff_x19 + 0x314) == 5) {
                  if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
                  if (*(int *)(lVar27 + 0x18) == 0) goto LAB_0603fce4;
                  if ((unaff_x19[0x75] == 0) ||
                     (lVar33 = *(long *)(unaff_x19[0x75] + 0x58), lVar33 == 0))
                  goto thunk_FUN_02e3ccc4;
                  if (*(uint *)(lVar33 + 0x18) <= uStack0000000000000040) goto LAB_0603fce4;
                  in_stack_00001338 =
                       *(float *)(lVar33 + (long)(int)uStack0000000000000040 * 0x14 + 0x30);
                }
                else {
                  if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
                  if (*(int *)(lVar27 + 0x18) == 0) goto LAB_0603fce4;
                }
                in_stack_000000b8._4_4_ = *(float *)(lVar27 + 0x28);
                fStack000000000000002c = fStack000000000000002c + (0.0 - in_stack_00001338);
                param_3 = *(float *)(lVar27 + 0x20);
                fVar65 = *(float *)(lVar27 + 0x24);
                goto LAB_0603d53c;
              }
              if (*(int *)((long)unaff_x19 + 0x314) != 5) {
                if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
                if ((*(int *)(lVar27 + 0x18) != 1) && (*(int *)(lVar27 + 0x18) != 0)) {
                  fVar65 = *(float *)((long)unaff_x19 + 0x4d4);
                  goto LAB_0603d470;
                }
                goto LAB_0603fce4;
              }
              if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
              if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0))
              goto LAB_0603fce4;
              if ((unaff_x19[0x75] == 0) ||
                 (lVar33 = *(long *)(unaff_x19[0x75] + 0x58), lVar33 == 0)) goto thunk_FUN_02e3ccc4;
              if (*(uint *)(lVar33 + 0x18) <= uStack0000000000000040) goto LAB_0603fce4;
              lVar33 = lVar33 + (long)(int)uStack0000000000000040 * 0x14;
              in_stack_000000b8._4_4_ =
                   (*(float *)(lVar27 + 0x28) + *(float *)(lVar27 + 0x34)) * 0.5;
              param_3 = in_stack_00000030 + 0.0 +
                        ((float)*(undefined8 *)(lVar27 + 0x20) +
                        (float)*(undefined8 *)(lVar27 + 0x2c)) * 0.5;
              fVar65 = (0.0 - ((fStack0000000000000028 + *(float *)(lVar33 + 0x28) +
                               *(float *)(lVar33 + 0x30)) - fStack000000000000002c) * 0.5) +
                       ((float)((ulong)*(undefined8 *)(lVar27 + 0x20) >> 0x20) +
                       (float)((ulong)*(undefined8 *)(lVar27 + 0x2c) >> 0x20)) * 0.5;
            }
            in_stack_000000b8._4_4_ = in_stack_000000b8._4_4_ + 0.0;
            param_2 = ZEXT416((uint)fVar65);
            fStack00000000000000c0 = param_3;
          }
          else if (iVar19 == 0x800) {
            if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
            if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0)) goto LAB_0603fce4;
            param_3 = (*(float *)(lVar27 + 0x28) + *(float *)(lVar27 + 0x34)) * 0.5;
            fStack00000000000000c0 =
                 ((float)*(undefined8 *)(lVar27 + 0x20) + (float)*(undefined8 *)(lVar27 + 0x2c)) *
                 0.5 + in_stack_00000030 + 0.0;
            in_stack_000000b8._4_4_ = param_3 + 0.0;
            param_2 = ZEXT416((uint)(((float)((ulong)*(undefined8 *)(lVar27 + 0x20) >> 0x20) +
                                     (float)((ulong)*(undefined8 *)(lVar27 + 0x2c) >> 0x20)) * 0.5 +
                                    0.0));
          }
          else {
            if (iVar19 == 0x1000) {
              if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
              if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0))
              goto LAB_0603fce4;
              fVar65 = *(float *)((long)unaff_x19 + 0x504);
              in_stack_00001338 = *(float *)((long)unaff_x19 + 0x4fc);
LAB_0603d470:
              fStack0000000000000028 = fStack0000000000000028 + fVar65 + in_stack_00001338;
            }
            else {
              if (iVar19 != 0x2000) goto LAB_0603d550;
              if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
              if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0))
              goto LAB_0603fce4;
              fStack0000000000000028 = *(float *)(unaff_x19 + 0x9b) - fStack0000000000000028;
            }
            param_3 = in_stack_00000030 + 0.0;
            param_2._0_4_ =
                 ((float)*(undefined8 *)(lVar27 + 0x24) + (float)*(undefined8 *)(lVar27 + 0x30)) *
                 0.5 + (0.0 - (fStack0000000000000028 - fStack000000000000002c) * 0.5);
            param_2._4_4_ =
                 ((float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20)) * 0.5 + 0.0;
            param_2._8_8_ = 0;
            fStack00000000000000c0 =
                 param_3 + (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
            in_stack_000000b8._4_4_ = param_2._4_4_;
          }
LAB_0603d550:
          auVar55 = param_2;
          fStack0000000000000120 = (float)FUN_031c4efc(0);
          auVar59 = auVar55;
          FUN_031c4efc(0);
          lVar27 = FUN_0604a24c();
          if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
          FUN_0627938c(lVar27,0);
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
          if (*(int *)(*plVar28 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          lVar27 = unaff_x19[0x75];
          if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
          fVar65 = unaff_x24[10];
          if ((int)fVar65 < 1) {
            fStack00000000000000ec = 0.0;
            iVar19 = 0;
            goto LAB_0603f770;
          }
          lVar27 = *(long *)(lVar27 + 0x38);
          if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
          bVar10 = false;
          bVar8 = false;
          fVar61 = 0.0;
          bVar9 = false;
          fStack00000000000000ec = 0.0;
          uVar16 = 0;
          in_stack_00000048._4_4_ = 0.0;
          uVar15 = 0;
          lVar33 = lVar27 + 0x20;
          bVar12 = false;
          uStack0000000000000060 = 0;
          in_stack_00000190 = auVar55._0_4_;
          fStack0000000000000138 =
               *(float *)(*(long *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo
                                   + 0xb8) + 0x1730);
          fStack0000000000000124 = in_stack_00000190;
          fStack00000000000001b0 = param_2._0_4_;
          fStack0000000000000058 = 0.0;
          fStack0000000000000134 = 0.0;
          fStack000000000000016c = 0.0;
          fStack00000000000000a0 = 0.0;
          fStack000000000000006c = fStack00000000000000e8;
          fVar57 = 0.0;
          fStack00000000000000dc = fStack00000000000000e8;
          fStack00000000000000e0 = in_stack_00000110._4_4_;
          fStack0000000000000064 = in_stack_00000110._4_4_;
          uStack0000000000000068 = in_stack_000000d8;
          fStack0000000000000094 = fStack00000000000000e8;
          fStack0000000000000098 = in_stack_00000110._4_4_;
          uStack0000000000000088 = in_stack_000000d8;
          in_stack_00000100._4_4_ = param_3;
          uVar32 = 0;
          goto LAB_0603d6e0;
        }
        if (*(uint *)(lVar27 + 0x18) <= in_stack_00001308) goto LAB_0603fce4;
        uVar15 = *(uint *)(lVar27 + (long)(int)in_stack_00001308 * 0x10 + 0x24);
        if (uVar15 == 0) goto LAB_0603cfc8;
        if (5 < unaff_w22) {
          uVar20 = Oculus_Platform_CAPI__ovr_DestinationArray_HasNextPage(&stack0x0000133c,0);
          uVar21 = FUN_05603500(&stack0x00001308,0);
          uVar20 = FUN_0548db04(*(undefined8 *)
                                 System_Collections_Generic_List<BaseInputModule>_TypeInfo,uVar20,
                                *(undefined8 *)
                                 System_Collections_Generic_List<BaseRaycaster>_TypeInfo,uVar21,0);
          if (*(int *)(*unaff_x29 + 0xe4) == 0) {
            thunk_FUN_02e9a04c(*unaff_x29);
          }
          FUN_06224c0c(uVar20,0);
          in_stack_00001328 = CONCAT44(3,unaff_x24[10]);
        }
        in_stack_0000133c = uVar15;
      } while (uVar15 == 0x1a);
      if ((uVar15 == 0x3c) && (*(char *)((long)unaff_x19 + 0x342) != '\0')) {
        *(undefined1 *)((long)unaff_x19 + 0x471) = 1;
        *(undefined4 *)((long)unaff_x19 + 0x664) = 0;
        uVar22 = FUN_060872e4();
        if (((uVar22 & 1) != 0) &&
           (in_stack_00001308 = in_stack_0000126c, *(int *)((long)unaff_x19 + 0x664) == 0))
        goto LAB_06038edc;
      }
      else {
        if ((unaff_x19[0x75] == 0) || (lVar27 = *(long *)(unaff_x19[0x75] + 0x38), lVar27 == 0))
        goto thunk_FUN_02e3ccc4;
        if ((uint)*(float *)(lVar27 + 0x18) <= (uint)unaff_x24[10]) goto LAB_0603fce4;
        lVar27 = lVar27 + (long)(int)unaff_x24[10] * (long)(int)unaff_w21;
        *(undefined4 *)((long)unaff_x19 + 0x664) = *(undefined4 *)(lVar27 + 0x20);
        *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar27 + 0x50);
        unaff_x19[0x20] = *(long *)(lVar27 + 0x40);
        thunk_FUN_02ee2be8(unaff_x19 + 0x20);
      }
      if ((unaff_x19[0x75] == 0) || (lVar27 = *(long *)(unaff_x19[0x75] + 0x38), lVar27 == 0))
      goto thunk_FUN_02e3ccc4;
      fVar65 = in_stack_000001a8[10];
      if ((uint)*(float *)(lVar27 + 0x18) <= (uint)fVar65) goto LAB_0603fce4;
      lVar33 = lVar27 + 0x20;
      fVar61 = (float)in_stack_00001328;
      lVar37 = unaff_x19[0x24];
      cVar26 = *(char *)(lVar33 + (long)(int)fVar65 * (long)(int)unaff_w21 + 0x34);
      *(undefined1 *)((long)unaff_x19 + 0x471) = 0;
      fVar57 = fVar65;
      if (fVar61 == fVar65) {
        uVar15 = (uint)((ulong)in_stack_00001328 >> 0x20);
        *(undefined4 *)((long)unaff_x19 + 0x664) = 0;
        if (uVar15 == 0x2026) {
          *(long *)(lVar33 + (long)(int)fVar65 * (long)(int)unaff_w21 + 0x10) = unaff_x19[0xce];
          thunk_FUN_02ee2be8();
          if ((unaff_x19[0x75] == 0) || (lVar27 = *(long *)(unaff_x19[0x75] + 0x38), lVar27 == 0))
          goto thunk_FUN_02e3ccc4;
          if ((uint)*(float *)(lVar27 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
          lVar27 = lVar27 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21;
          *(long *)(lVar27 + 0x40) = unaff_x19[0xcf];
          *(undefined4 *)(lVar27 + 0x20) = 0;
          thunk_FUN_02ee2be8();
          if ((unaff_x19[0x75] == 0) || (lVar27 = *(long *)(unaff_x19[0x75] + 0x38), lVar27 == 0))
          goto thunk_FUN_02e3ccc4;
          if ((uint)*(float *)(lVar27 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
          *(long *)(lVar27 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21 + 0x48) =
               unaff_x19[0xd0];
          thunk_FUN_02ee2be8();
          if ((unaff_x19[0x75] == 0) || (lVar27 = *(long *)(unaff_x19[0x75] + 0x38), lVar27 == 0))
          goto thunk_FUN_02e3ccc4;
          if ((uint)*(float *)(lVar27 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
          *(int *)(lVar27 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21 + 0x50) =
               (int)unaff_x19[0xd1];
          puVar11 = System_Collections_Generic_List<AudioListener>_TypeInfo;
          lVar27 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
          if (*(int *)(lVar27 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
            lVar27 = *(long *)puVar11;
          }
          lVar27 = **(long **)(lVar27 + 0xb8);
          if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
          if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0xd5)) goto LAB_0603fce4;
          lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0xd5) * 0x38;
          *(int *)(lVar27 + 0x54) = *(int *)(lVar27 + 0x54) + 1;
          *(undefined1 *)(unaff_x19 + 0x66) = 1;
          in_stack_00001328 = CONCAT44(3,(int)*(float *)((long)unaff_x19 + 0x4ac) + 1);
          fVar57 = *(float *)((long)unaff_x19 + 0x4ac);
        }
        else if (uVar15 == 3) {
          if ((unaff_x19[0x20] == 0) || (lVar23 = FUN_0606364c(unaff_x19[0x20],0), lVar23 == 0))
          goto thunk_FUN_02e3ccc4;
          uVar20 = FUN_04e87e04(lVar23,3,*(undefined8 *)
                                          System_Collections_Generic_List<ValueTuple<int,_RichTextTagParser_TagType,_string>>_TypeInfo
                               );
          if ((uint)*(float *)(lVar27 + 0x18) <= (uint)fVar65) goto LAB_0603fce4;
          *(undefined8 *)(lVar33 + (long)(int)fVar65 * (long)(int)unaff_w21 + 0x10) = uVar20;
          thunk_FUN_02ee2be8();
          *(undefined1 *)(unaff_x19 + 0x66) = 1;
          fVar57 = *(float *)((long)unaff_x19 + 0x4ac);
        }
      }
      plVar28 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
      unaff_x24 = in_stack_000001a8;
      in_stack_0000133c = uVar15;
      if (((int)fVar57 < *(int *)((long)unaff_x19 + 0x364)) && (uVar15 != 3)) {
        if ((unaff_x19[0x75] == 0) || (lVar27 = *(long *)(unaff_x19[0x75] + 0x38), lVar27 == 0))
        goto thunk_FUN_02e3ccc4;
        if ((uint)*(float *)(lVar27 + 0x18) <= (uint)fVar57) goto LAB_0603fce4;
        lVar27 = lVar27 + (long)(int)fVar57 * (long)(int)unaff_w21;
        *(undefined1 *)(lVar27 + 400) = 0;
        *(undefined2 *)(lVar27 + 0x24) = 0x200b;
        *(undefined4 *)(lVar27 + 0x5c) = 0;
        in_stack_000001a8[10] = (float)((int)fVar57 + 1);
        goto LAB_06038edc;
      }
      fVar57 = 1.0;
      if (*(int *)((long)unaff_x19 + 0x664) == 0) {
        uVar16 = *(uint *)((long)unaff_x19 + 0x284);
        if ((uVar16 >> 4 & 1) == 0) {
          if ((uVar16 >> 3 & 1) == 0) {
            if ((uVar16 >> 5 & 1) != 0) {
              if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
                thunk_FUN_02e9a04c();
              }
              uVar22 = FUN_055805c8(uVar15,0);
              if ((uVar22 & 1) != 0) {
                if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_02e9a04c();
                }
                uVar15 = FUN_05580850(uVar15,0);
                fVar57 = fStack0000000000000024;
                goto LAB_0603901c;
              }
            }
          }
          else {
            if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar22 = FUN_05580528(uVar15,0);
            if ((uVar22 & 1) != 0) {
              if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
                thunk_FUN_02e9a04c();
              }
              uVar15 = FUN_055809c8(uVar15,0);
              goto LAB_0603901c;
            }
          }
        }
        else {
          if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          uVar22 = FUN_055805c8(uVar15,0);
          if ((uVar22 & 1) != 0) {
            if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar15 = FUN_05580850(uVar15,0);
LAB_0603901c:
            in_stack_0000133c = uVar15 & 0xffff;
          }
        }
      }
      if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
      memmove(&stack0x000012a0,(void *)(unaff_x19[0x20] + 0x28),0x60);
      if (*(int *)((long)unaff_x19 + 0x664) == 1) {
        lVar27 = FUN_060800c8();
        if ((lVar27 == 0) || (lVar27 = *(long *)(lVar27 + 0x38), lVar27 == 0))
        goto thunk_FUN_02e3ccc4;
        if ((uint)*(float *)(lVar27 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
        plVar45 = *(long **)(lVar27 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21 + 0x30
                            );
        plVar28 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
        if (plVar45 == (long *)0x0) goto LAB_06038edc;
        bVar13 = *(byte *)(*(long *)System_Collections_Generic_List<uint[]>_TypeInfo + 0x130);
        if ((*(byte *)(*plVar45 + 0x130) < bVar13) ||
           (*(long *)(*(long *)(*plVar45 + 200) + (ulong)bVar13 * 8 + -8) !=
            *(long *)System_Collections_Generic_List<uint[]>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3d044(plVar45);
        }
        plVar28 = (long *)plVar45[3];
        if (plVar28 == (long *)0x0) {
          plVar28 = (long *)0x0;
          *_fStack00000000000000e0 = 0;
        }
        else {
          lVar27 = *(long *)System_Collections_Generic_List<Type[]>_TypeInfo;
          bVar13 = *(byte *)(lVar27 + 0x130);
          if (*(byte *)(*plVar28 + 0x130) < bVar13) {
            plVar36 = (long *)0x0;
          }
          else {
            plVar36 = plVar28;
            if (*(long *)(*(long *)(*plVar28 + 200) + (ulong)bVar13 * 8 + -8) != lVar27) {
              plVar36 = (long *)0x0;
            }
          }
          *_fStack00000000000000e0 = (long)plVar36;
          if (*(byte *)(*plVar28 + 0x130) < bVar13) {
            plVar28 = (long *)0x0;
          }
          else if (*(long *)(*(long *)(*plVar28 + 200) + (ulong)bVar13 * 8 + -8) != lVar27) {
            plVar28 = (long *)0x0;
          }
        }
        thunk_FUN_02ee2be8(_fStack00000000000000e0,plVar28);
        lVar27 = plVar45[5];
        *(int *)((long)unaff_x19 + 0x6c4) = (int)lVar27;
        puVar11 = System_Collections_Generic_List<AudioListener>_TypeInfo;
        if (in_stack_0000133c == 0x3c) {
          in_stack_0000133c = (int)lVar27 + 0xe000;
        }
        else {
          lVar27 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
          if (*(int *)(lVar27 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
            lVar27 = *(long *)puVar11;
          }
          *(undefined4 *)((long)unaff_x19 + 0x1d4) =
               *(undefined4 *)(*(long *)(lVar27 + 0xb8) + 0x68);
        }
        fVar66 = *_uStack0000000000000088;
        fVar48 = (float)FUN_0630f888(&stack0x000012a0,0);
        fVar49 = (float)FUN_0630f890(&stack0x000012a0,0);
        if (*_fStack00000000000000e0 == 0) goto thunk_FUN_02e3ccc4;
        fVar49 = in_stack_00000118 * (fVar66 / fVar48) * fVar49;
        memmove(&stack0x00001200,(void *)(*_fStack00000000000000e0 + 0x28),0x60);
        fVar48 = (float)FUN_0630f888(&stack0x00001200,0);
        fVar66 = *_uStack0000000000000088;
        if (fVar48 <= 0.0) {
          fVar48 = (float)FUN_0630f888(&stack0x000012a0,0);
          fVar50 = (float)FUN_0630f890(&stack0x000012a0,0);
          fVar51 = (float)FUN_0630f8b8(&stack0x000012a0,0);
          if (plVar45[4] == 0) goto thunk_FUN_02e3ccc4;
          FUN_0630fd4c(&stack0x00001340,plVar45[4],0);
          fVar67 = (float)FUN_0630fb7c(&stack0x000011e0,0);
          if (plVar45[4] == 0) goto thunk_FUN_02e3ccc4;
          fVar53 = *(float *)((long)plVar45 + 0x2c);
          fVar66 = in_stack_00000118 * (fVar66 / fVar48) * fVar50;
          fVar48 = (float)FUN_0630fd88(plVar45[4],0);
          param_3 = fVar66 * (fVar51 / fVar67) * fVar53 * fVar48;
          fStack0000000000000138 = 0.0;
          if (param_3 != 0.0) {
            fStack0000000000000138 = fVar66 / param_3;
          }
          fStack000000000000013c = (float)FUN_0630f8b8(&stack0x000012a0,0);
          fStack000000000000013c = fStack000000000000013c * fStack0000000000000138;
          fVar48 = (float)FUN_0630f8e0(&stack0x000012a0,0);
          fVar66 = *(float *)((long)unaff_x19 + 0x444);
          fStack000000000000017c = (float)FUN_0630f890(&stack0x000012a0,0);
          fStack000000000000017c = fVar49 * fVar48 * fVar66 * fStack000000000000017c;
          fVar48 = (float)FUN_0630f8e8(&stack0x000012a0,0);
          fStack0000000000000138 = fStack0000000000000138 * fVar48;
        }
        else {
          fVar48 = (float)FUN_0630f888(&stack0x00001200,0);
          fVar50 = (float)FUN_0630f890(&stack0x00001200,0);
          if (plVar45[4] == 0) goto thunk_FUN_02e3ccc4;
          fVar67 = *(float *)((long)plVar45 + 0x2c);
          fVar51 = (float)FUN_0630fd88(plVar45[4],0);
          param_3 = in_stack_00000118 * (fVar66 / fVar48) * fVar50 * fVar67 * fVar51;
          fStack000000000000013c = (float)FUN_0630f8b8(&stack0x00001200,0);
          fVar48 = (float)FUN_0630f8e0(&stack0x00001200,0);
          fVar66 = *(float *)((long)unaff_x19 + 0x444);
          fStack000000000000017c = (float)FUN_0630f890(&stack0x00001200,0);
          fStack000000000000017c = fVar49 * fVar48 * fVar66 * fStack000000000000017c;
          fStack0000000000000138 = (float)FUN_0630f8e8(&stack0x00001200,0);
        }
        unaff_x19[0xcd] = (long)plVar45;
        thunk_FUN_02ee2be8(in_stack_00000170,plVar45);
        if ((unaff_x19[0x75] == 0) || (lVar27 = *(long *)(unaff_x19[0x75] + 0x38), lVar27 == 0))
        goto thunk_FUN_02e3ccc4;
        if ((uint)*(float *)(lVar27 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
        lVar27 = lVar27 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21;
        *(long *)(lVar27 + 0x40) = unaff_x19[0x20];
        *(undefined4 *)(lVar27 + 0x20) = 1;
        *(float *)(lVar27 + 0x15c) = param_3;
        thunk_FUN_02ee2be8();
        lVar27 = unaff_x19[0x75];
        if ((lVar27 == 0) || (lVar33 = *(long *)(lVar27 + 0x38), lVar33 == 0))
        goto thunk_FUN_02e3ccc4;
        if ((uint)*(float *)(lVar33 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
        unaff_s13 = 0.0;
        *(int *)(lVar33 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21 + 0x50) =
             (int)unaff_x19[0x24];
        *(int *)(unaff_x19 + 0x24) = (int)lVar37;
LAB_06039744:
        fVar48 = 0.0;
        if (in_stack_0000133c != 3 && in_stack_0000133c != 0xad) {
          fVar48 = param_3;
        }
      }
      else {
        lVar27 = unaff_x19[0x75];
        if (*(int *)((long)unaff_x19 + 0x664) == 0) {
          if ((lVar27 == 0) || (lVar27 = *(long *)(lVar27 + 0x38), lVar27 == 0))
          goto thunk_FUN_02e3ccc4;
          if ((uint)*(float *)(lVar27 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
          *in_stack_00000170 =
               *(long *)(lVar27 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21 + 0x30);
          thunk_FUN_02ee2be8(in_stack_00000170);
          plVar28 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
          if (*in_stack_00000170 == 0) goto LAB_06038edc;
          if ((unaff_x19[0x75] == 0) || (lVar27 = *(long *)(unaff_x19[0x75] + 0x38), lVar27 == 0))
          goto thunk_FUN_02e3ccc4;
          if ((uint)*(float *)(lVar27 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
          unaff_x19[0x20] =
               *(long *)(lVar27 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21 + 0x40);
          thunk_FUN_02ee2be8(unaff_x19 + 0x20);
          if ((unaff_x19[0x75] == 0) || (lVar27 = *(long *)(unaff_x19[0x75] + 0x38), lVar27 == 0))
          goto thunk_FUN_02e3ccc4;
          if ((uint)*(float *)(lVar27 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
          unaff_x19[0x23] =
               *(long *)(lVar27 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21 + 0x48);
          thunk_FUN_02ee2be8(unaff_x19 + 0x23);
          if ((unaff_x19[0x75] == 0) || (lVar27 = *(long *)(unaff_x19[0x75] + 0x38), lVar27 == 0))
          goto thunk_FUN_02e3ccc4;
          fVar49 = in_stack_000001a8[10];
          fVar48 = *(float *)(lVar27 + 0x18);
          if ((uint)fVar48 <= (uint)fVar49) goto LAB_0603fce4;
          *(undefined4 *)(unaff_x19 + 0x24) =
               *(undefined4 *)(lVar27 + 0x20 + (long)(int)fVar49 * (long)(int)unaff_w21 + 0x30);
          pfVar29 = _uStack0000000000000088;
          if (fVar61 == fVar65) {
            lVar33 = unaff_x19[0x92];
            if (lVar33 == 0) goto thunk_FUN_02e3ccc4;
            if (*(uint *)(lVar33 + 0x18) <= in_stack_00001308) goto LAB_0603fce4;
            if ((*(int *)(lVar33 + (long)(int)in_stack_00001308 * 0x10 + 0x24) == 10) &&
               (fVar49 != *(float *)(unaff_x19 + 0x96))) {
              if ((uint)fVar48 <= (int)fVar49 - 1U) goto LAB_0603fce4;
              pfVar29 = (float *)(lVar27 + 0x20 +
                                  (long)(int)((int)fVar49 - 1U) * (long)(int)unaff_w21 + 0x38);
            }
          }
          fVar66 = *pfVar29;
          fVar48 = (float)FUN_0630f888(&stack0x000012a0,0);
          fVar49 = (float)FUN_0630f890(&stack0x000012a0,0);
          if (fVar61 == fVar65) {
            fStack0000000000000138 = 0.0;
            fStack000000000000013c = 0.0;
            if (in_stack_0000133c != 0x2026) goto LAB_060392a8;
          }
          else {
LAB_060392a8:
            fStack000000000000013c = (float)FUN_0630f8b8(&stack0x000012a0,0);
            fStack0000000000000138 = (float)FUN_0630f8e8(&stack0x000012a0,0);
          }
          lVar27 = unaff_x19[0xcd];
          if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto thunk_FUN_02e3ccc4;
          fVar51 = *(float *)((long)unaff_x19 + 0x444);
          fVar67 = *(float *)(lVar27 + 0x2c);
          param_3 = (float)FUN_0630fd88(*(long *)(lVar27 + 0x20),0);
          fVar50 = (float)FUN_0630f8e0(&stack0x000012a0,0);
          fVar53 = *(float *)((long)unaff_x19 + 0x444);
          fStack000000000000017c = (float)FUN_0630f890(&stack0x000012a0,0);
          lVar27 = unaff_x19[0x75];
          if ((lVar27 == 0) || (lVar33 = *(long *)(lVar27 + 0x38), lVar33 == 0))
          goto thunk_FUN_02e3ccc4;
          if ((uint)*(float *)(lVar33 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
          lVar33 = lVar33 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21;
          *(undefined4 *)(lVar33 + 0x20) = 0;
          fVar48 = in_stack_00000118 * ((fVar57 * fVar66) / fVar48) * fVar49;
          param_3 = fVar48 * fVar51 * fVar67 * param_3;
          fStack000000000000017c = fVar48 * fVar50 * fVar53 * fStack000000000000017c;
          *(float *)(lVar33 + 0x15c) = param_3;
          uVar15 = *(uint *)(unaff_x19 + 0x24);
          if (uVar15 == 0) {
            unaff_s15 = 1.0;
            unaff_s13 = *(float *)(unaff_x19 + 199);
            goto LAB_06039744;
          }
          unaff_s15 = 1.0;
          lVar33 = unaff_x19[0xe5];
          if (lVar33 == 0) goto thunk_FUN_02e3ccc4;
          if (*(uint *)(lVar33 + 0x18) <= uVar15) goto LAB_0603fce4;
          lVar33 = *(long *)(lVar33 + (long)(int)uVar15 * 8 + 0x20);
          if (lVar33 == 0) goto thunk_FUN_02e3ccc4;
          unaff_s13 = *(float *)(lVar33 + 0x54);
          goto LAB_06039744;
        }
        fVar48 = 0.0;
        if (in_stack_0000133c != 3 && in_stack_0000133c != 0xad) {
          fVar48 = unaff_s12;
        }
        fStack000000000000017c = 0.0;
        fStack000000000000013c = 0.0;
        fStack0000000000000138 = 0.0;
        param_3 = unaff_s12;
        if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
      }
      unaff_s12 = fVar48;
      lVar27 = *(long *)(lVar27 + 0x38);
      if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
      if ((uint)*(float *)(lVar27 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
      lVar27 = lVar27 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21;
      *(short *)(lVar27 + 0x24) = (short)in_stack_0000133c;
      *(int *)(lVar27 + 0x58) = (int)unaff_x19[0x42];
      *(int *)(lVar27 + 0x160) = (int)unaff_x19[0xa1];
      if ((unaff_x19[0x75] == 0) || (lVar27 = *(long *)(unaff_x19[0x75] + 0x38), lVar27 == 0))
      goto thunk_FUN_02e3ccc4;
      if ((uint)*(float *)(lVar27 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
      *(int *)(lVar27 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21 + 0x164) =
           (int)unaff_x19[0x2b];
      if ((unaff_x19[0x75] == 0) || (lVar27 = *(long *)(unaff_x19[0x75] + 0x38), lVar27 == 0))
      goto thunk_FUN_02e3ccc4;
      if ((uint)*(float *)(lVar27 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
      *(undefined4 *)(lVar27 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21 + 0x16c) =
           *(undefined4 *)((long)unaff_x19 + 0x15c);
      if ((unaff_x19[0x75] == 0) || (lVar27 = *(long *)(unaff_x19[0x75] + 0x38), lVar27 == 0))
      goto thunk_FUN_02e3ccc4;
      if ((uint)*(float *)(lVar27 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
      lVar27 = lVar27 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21;
      auVar55 = *in_stack_000000b0;
      *(undefined4 *)(lVar27 + 0x188) = *(undefined4 *)in_stack_000000b0[1];
      *(long *)(lVar27 + 0x180) = auVar55._8_8_;
      *(long *)(lVar27 + 0x178) = auVar55._0_8_;
      if ((unaff_x19[0x75] == 0) || (lVar27 = *(long *)(unaff_x19[0x75] + 0x38), lVar27 == 0))
      goto thunk_FUN_02e3ccc4;
      if ((uint)*(float *)(lVar27 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
      lVar27 = lVar27 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21;
      lVar33 = *(long *)(lVar27 + 0x38);
      *(undefined4 *)(lVar27 + 0x18c) = *(undefined4 *)((long)unaff_x19 + 0x284);
      if (lVar33 == 0) {
        if ((*in_stack_00000170 == 0) ||
           (lVar27 = *(long *)(*in_stack_00000170 + 0x20), lVar27 == 0)) goto thunk_FUN_02e3ccc4;
        FUN_0630fd4c(&stack0x00001340,lVar27,0);
      }
      else {
        FUN_0630fd4c(&stack0x000005c0,lVar33,0);
      }
      if (in_stack_0000133c >> 0x10 == 0) {
        if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar15 = FUN_0557df5c(in_stack_0000133c,0);
        in_stack_00000190 = (float)(uVar15 & 1);
      }
      else {
        in_stack_00000190 = 0.0;
      }
      fVar48 = *(float *)(unaff_x19 + 0x5a);
      if (((in_stack_000000a8 & 0x100000000) != 0) && (*(int *)((long)unaff_x19 + 0x664) == 0)) {
        if (*in_stack_00000170 == 0) goto thunk_FUN_02e3ccc4;
        fVar49 = in_stack_000001a8[10];
        uVar15 = *(uint *)(*in_stack_00000170 + 0x28);
        if ((int)fVar49 < (int)fStack0000000000000050) {
          if ((unaff_x19[0x75] == 0) || (lVar27 = *(long *)(unaff_x19[0x75] + 0x38), lVar27 == 0))
          goto thunk_FUN_02e3ccc4;
          uVar16 = (int)fVar49 + 1;
          if (*(uint *)(lVar27 + 0x18) <= uVar16) goto LAB_0603fce4;
          if (*(int *)(lVar27 + 0x20 + (long)(int)uVar16 * (long)(int)unaff_w21) == 0) {
            lVar27 = *(long *)(lVar27 + 0x20 + (long)(int)uVar16 * (long)(int)unaff_w21 + 0x10);
            if ((((lVar27 == 0) || (unaff_x19[0x20] == 0)) ||
                (lVar33 = *(long *)(unaff_x19[0x20] + 0x178), lVar33 == 0)) ||
               (lVar33 = *(long *)(lVar33 + 0x40), lVar33 == 0)) goto thunk_FUN_02e3ccc4;
            uVar22 = FUN_04e75974(lVar33,uVar15 | *(int *)(lVar27 + 0x28) << 0x10,&stack0x000011b0,
                                  *(undefined8 *)
                                   System_Collections_Generic_List<ValueTuple<string,_Type>>_TypeInfo
                                 );
            if ((uVar22 & 1) != 0) {
              FUN_0631443c(&stack0x00001340,&stack0x000011b0,0);
              FUN_06314290(&stack0x00001190,0);
              uVar22 = FUN_06314478(&stack0x000011b0,0);
              if ((uVar22 & 0x100) != 0) {
                fVar48 = 0.0;
              }
            }
          }
          fVar49 = in_stack_000001a8[10];
        }
        if (0 < (int)fVar49) {
          if ((unaff_x19[0x75] == 0) || (lVar27 = *(long *)(unaff_x19[0x75] + 0x38), lVar27 == 0))
          goto thunk_FUN_02e3ccc4;
          if (*(uint *)(lVar27 + 0x18) <= (int)fVar49 - 1U) goto LAB_0603fce4;
          lVar27 = *(long *)(lVar27 + (ulong)((int)fVar49 - 1U) * (ulong)unaff_w21 + 0x30);
          if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
          uVar16 = *(uint *)(lVar27 + 0x28);
          lVar27 = FUN_060800c8();
          if ((lVar27 == 0) || (lVar27 = *(long *)(lVar27 + 0x38), lVar27 == 0))
          goto thunk_FUN_02e3ccc4;
          if (*(uint *)(lVar27 + 0x18) <= (int)in_stack_000001a8[10] - 1U) goto LAB_0603fce4;
          if (*(int *)(lVar27 + (long)(int)((int)in_stack_000001a8[10] - 1U) * (long)(int)unaff_w21
                      + 0x20) == 0) {
            if (((unaff_x19[0x20] == 0) ||
                (lVar27 = *(long *)(unaff_x19[0x20] + 0x178), lVar27 == 0)) ||
               (lVar27 = *(long *)(lVar27 + 0x40), lVar27 == 0)) goto thunk_FUN_02e3ccc4;
            uVar22 = FUN_04e75974(lVar27,uVar16 | uVar15 << 0x10,&stack0x000011b0,
                                  *(undefined8 *)
                                   System_Collections_Generic_List<ValueTuple<string,_Type>>_TypeInfo
                                 );
            if ((uVar22 & 1) != 0) {
              FUN_06314464(&stack0x00001340,&stack0x000011b0,0);
              FUN_06314290(&stack0x00001190,0);
              FUN_063140f0(0);
              uVar22 = FUN_06314478(&stack0x000011b0,0);
              if ((uVar22 & 0x100) != 0) {
                fVar48 = 0.0;
              }
            }
          }
        }
      }
      if ((unaff_x19[0x75] == 0) || (lVar27 = *(long *)(unaff_x19[0x75] + 0x38), lVar27 == 0))
      goto thunk_FUN_02e3ccc4;
      fVar49 = in_stack_000001a8[10];
      uVar52 = FUN_063140cc(&stack0x00001270,0);
      if ((uint)*(float *)(lVar27 + 0x18) <= (uint)fVar49) goto LAB_0603fce4;
      *(undefined4 *)(lVar27 + (long)(int)fVar49 * (long)(int)unaff_w21 + 0x154) = uVar52;
      if (*(int *)(*(long *)System_Collections_Generic_List<AchievementProgress>_TypeInfo + 0xe4) ==
          0) {
        thunk_FUN_02e9a04c();
      }
      uVar22 = FUN_060b1c00(in_stack_0000133c,0);
      fVar49 = in_stack_000001a8[10];
      uVar39 = (ulong)(uint)fVar49;
      if ((uVar22 & 1) == 0) {
        if (0 < (int)fVar49) {
          if ((((uVar42 & 1) == 0) ||
              (uVar15 = *(uint *)((long)unaff_x19 + 0x334), uVar15 == 0x80000000)) ||
             (uVar15 != (int)fVar49 - 1U)) {
            if ((in_stack_00000048 & 1) == 0) {
              bVar12 = false;
            }
            else {
              lVar27 = uVar39 * unaff_w21 + 0x144;
              uVar44 = uVar39;
              do {
                uVar44 = uVar44 - 1;
                iVar17 = (int)uVar39;
                uVar15 = iVar17 - 1;
                uVar39 = (ulong)uVar15;
                if ((iVar17 < 1) || (uVar44 == *(uint *)((long)unaff_x19 + 0x334))) {
                  bVar12 = false;
                  goto LAB_06039e54;
                }
                if ((unaff_x19[0x75] == 0) ||
                   (lVar33 = *(long *)(unaff_x19[0x75] + 0x38), lVar33 == 0))
                goto thunk_FUN_02e3ccc4;
                if (*(uint *)(lVar33 + 0x18) <= uVar44) goto LAB_0603fce4;
                lVar33 = *(long *)(lVar33 + lVar27 + -0x28c);
                if ((lVar33 == 0) || (lVar33 = *(long *)(lVar33 + 0x20), lVar33 == 0))
                goto thunk_FUN_02e3ccc4;
                uVar16 = FUN_0630fd3c(lVar33,0);
                if ((*in_stack_00000170 == 0) ||
                   (((unaff_x19[0x20] == 0 ||
                     (lVar33 = *(long *)(unaff_x19[0x20] + 0x178), lVar33 == 0)) ||
                    (lVar33 = *(long *)(lVar33 + 0x50), lVar33 == 0)))) goto thunk_FUN_02e3ccc4;
                uVar24 = FUN_04e82f84(lVar33,uVar16 | *(int *)(*in_stack_00000170 + 0x28) << 0x10,
                                      &stack0x00001160,
                                      *(undefined8 *)
                                       System_Collections_Generic_List<ValueTuple<Type,_NetworkInputWeavedAttribute>>_TypeInfo
                                     );
                lVar27 = lVar27 + -0x178;
              } while ((uVar24 & 1) == 0);
              if ((unaff_x19[0x75] == 0) ||
                 (lVar33 = *(long *)(unaff_x19[0x75] + 0x38), lVar33 == 0)) goto thunk_FUN_02e3ccc4;
              if (*(uint *)(lVar33 + 0x18) <= uVar15) goto LAB_0603fce4;
              FUN_063140b4(((*(float *)(lVar33 + lVar27 + -0xc) - *(float *)(unaff_x19 + 0xcc)) /
                            unaff_s12 + in_stack_00001164) - in_stack_00001170,in_stack_00001164,
                           in_stack_00001170,&stack0x00001270,0);
              FUN_063140c4(&stack0x00001270,0);
              fVar48 = 0.0;
              bVar12 = true;
            }
LAB_06039e54:
            if ((uVar42 & 1) != 0) {
              uVar15 = *(uint *)((long)unaff_x19 + 0x334);
              if (uVar15 == 0x80000000) {
                bVar12 = true;
              }
              if (!bVar12) {
                if ((unaff_x19[0x75] == 0) ||
                   (lVar27 = *(long *)(unaff_x19[0x75] + 0x38), lVar27 == 0))
                goto thunk_FUN_02e3ccc4;
                if (*(uint *)(lVar27 + 0x18) <= uVar15) goto LAB_0603fce4;
                lVar27 = *(long *)(lVar27 + (long)(int)uVar15 * (long)(int)unaff_w21 + 0x30);
                if ((lVar27 == 0) || (lVar27 = *(long *)(lVar27 + 0x20), lVar27 == 0))
                goto thunk_FUN_02e3ccc4;
                uVar15 = FUN_0630fd3c(lVar27,0);
                if ((*in_stack_00000170 == 0) ||
                   (((unaff_x19[0x20] == 0 ||
                     (lVar27 = *(long *)(unaff_x19[0x20] + 0x178), lVar27 == 0)) ||
                    (lVar27 = *(long *)(lVar27 + 0x48), lVar27 == 0)))) goto thunk_FUN_02e3ccc4;
                uVar39 = FUN_04e7c424(lVar27,uVar15 | *(int *)(*in_stack_00000170 + 0x28) << 0x10,
                                      &stack0x00001148,
                                      *(undefined8 *)
                                       System_Collections_Generic_List<ValueTuple<TextureHandle,_int>>_TypeInfo
                                     );
                if ((uVar39 & 1) != 0) {
                  if ((unaff_x19[0x75] != 0) &&
                     (lVar27 = *(long *)(unaff_x19[0x75] + 0x38), lVar27 != 0)) {
                    if (*(uint *)((long)unaff_x19 + 0x334) < *(uint *)(lVar27 + 0x18)) {
                      FUN_063140b4((in_stack_0000114c +
                                   (*(float *)(lVar27 + (long)(int)*(uint *)((long)unaff_x19 + 0x334
                                                                            ) * (long)(int)unaff_w21
                                              + 0x138) - *(float *)(unaff_x19 + 0xcc)) / unaff_s12)
                                   - in_stack_00001158,in_stack_0000114c,in_stack_00001158,
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
            if ((unaff_x19[0x75] == 0) || (lVar27 = *(long *)(unaff_x19[0x75] + 0x38), lVar27 == 0))
            goto thunk_FUN_02e3ccc4;
            if (*(uint *)(lVar27 + 0x18) <= uVar15) goto LAB_0603fce4;
            lVar27 = *(long *)(lVar27 + (long)(int)uVar15 * (long)(int)unaff_w21 + 0x30);
            if ((lVar27 == 0) || (lVar27 = *(long *)(lVar27 + 0x20), lVar27 == 0))
            goto thunk_FUN_02e3ccc4;
            uVar15 = FUN_0630fd3c(lVar27,0);
            if ((*in_stack_00000170 == 0) ||
               (((unaff_x19[0x20] == 0 || (lVar27 = *(long *)(unaff_x19[0x20] + 0x178), lVar27 == 0)
                 ) || (lVar27 = *(long *)(lVar27 + 0x48), lVar27 == 0)))) goto thunk_FUN_02e3ccc4;
            uVar39 = FUN_04e7c424(lVar27,uVar15 | *(int *)(*in_stack_00000170 + 0x28) << 0x10,
                                  &stack0x00001178,
                                  *(undefined8 *)
                                   System_Collections_Generic_List<ValueTuple<TextureHandle,_int>>_TypeInfo
                                 );
            if ((uVar39 & 1) != 0) {
              if ((unaff_x19[0x75] == 0) ||
                 (lVar27 = *(long *)(unaff_x19[0x75] + 0x38), lVar27 == 0)) goto thunk_FUN_02e3ccc4;
              if (*(uint *)(lVar27 + 0x18) <= *(uint *)((long)unaff_x19 + 0x334)) goto LAB_0603fce4;
              FUN_063140b4((in_stack_0000117c +
                           (*(float *)(lVar27 + (long)(int)*(uint *)((long)unaff_x19 + 0x334) *
                                                (long)(int)unaff_w21 + 0x138) -
                           *(float *)(unaff_x19 + 0xcc)) / unaff_s12) - in_stack_00001188,
                           in_stack_0000117c,in_stack_00001188,&stack0x00001270,0);
LAB_06039f50:
              FUN_063140c4(&stack0x00001270,0);
              fVar48 = 0.0;
            }
          }
        }
      }
      else {
        *(float *)((long)unaff_x19 + 0x334) = fVar49;
      }
      fVar49 = (float)FUN_063140bc(&stack0x00001270,0);
      fVar66 = (float)FUN_063140bc(&stack0x00001270,0);
      if ((char)unaff_x19[0x1e] != '\0') {
        fVar51 = *(float *)(unaff_x19 + 0xcc);
        fVar50 = (float)FUN_0630fb94(&stack0x00001280,0);
        fVar51 = fVar51 - unaff_s12 *
                          *(float *)(unaff_x19 + 0x5c) *
                          fVar50 * (unaff_s15 - *(float *)((long)unaff_x19 + 0x304));
        *(float *)(unaff_x19 + 0xcc) = fVar51;
        if ((in_stack_00000190 != 0.0) || (in_stack_0000133c == 0x200b)) {
          *(float *)(unaff_x19 + 0xcc) =
               fVar51 - in_stack_00000100._4_4_ * *(float *)((long)unaff_x19 + 0x2e4);
        }
      }
      fVar50 = *(float *)(unaff_x19 + 0x5b);
      fVar51 = 0.0;
      fStack000000000000016c = 0.0;
      if (fVar50 != 0.0) {
        if (((*(char *)((long)unaff_x19 + 0x2dc) == '\0') || (0x3a < in_stack_0000133c)) ||
           (fVar51 = 0.25, (1L << ((ulong)in_stack_0000133c & 0x3f) & 0x400500000000000U) == 0)) {
          fVar51 = 0.5;
        }
        fVar67 = (float)FUN_0630fb74(&stack0x00001280,0);
        fVar53 = (float)FUN_0630fb84(&stack0x00001280,0);
        fVar51 = *(float *)(unaff_x19 + 0x5c) *
                 (unaff_s15 - *(float *)((long)unaff_x19 + 0x304)) *
                 (fVar50 * fVar51 - unaff_s12 * (fVar67 * 0.5 + fVar53));
        *(float *)(unaff_x19 + 0xcc) = fVar51 + *(float *)(unaff_x19 + 0xcc);
      }
      if (*(int *)((long)unaff_x19 + 0x664) == 0) {
        fVar50 = 0.0;
        if ((cVar26 == '\0') && ((*(byte *)((long)unaff_x19 + 0x284) & 1) != 0)) {
          if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
          fVar50 = *(float *)(unaff_x19[0x20] + 0x1ac);
          bVar12 = false;
        }
        else {
          bVar12 = true;
        }
        lVar27 = unaff_x19[0x23];
        if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar39 = FUN_06267b6c(lVar27,0,0);
        fStack000000000000016c = 0.0;
        if ((uVar39 & 1) != 0) {
          lVar27 = unaff_x19[0x23];
          if (*(int *)(*(long *)System_Collections_Generic_List<WeakReference<IPool>>_TypeInfo +
                      0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          plVar28 = (long *)System_Collections_Generic_List<WeakReference<IPool>>_TypeInfo;
          if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
          uVar39 = FUN_06238d70(lVar27,*(undefined4 *)
                                        (*(long *)(*(long *)
                                                  System_Collections_Generic_List<WeakReference<IPool>>_TypeInfo
                                                  + 0xb8) + 0x6c),0);
          if ((uVar39 & 1) != 0) {
            lVar27 = unaff_x19[0x23];
            if (*(int *)(*plVar28 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
              plVar28 = (long *)System_Collections_Generic_List<WeakReference<IPool>>_TypeInfo;
            }
            if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
            uVar39 = FUN_06238d70(lVar27,*(undefined4 *)(*(long *)(*plVar28 + 0xb8) + 0xe4),0);
            if ((uVar39 & 1) != 0) {
              lVar27 = unaff_x19[0x23];
              if (*(int *)(*plVar28 + 0xe4) == 0) {
                thunk_FUN_02e9a04c();
                plVar28 = (long *)System_Collections_Generic_List<WeakReference<IPool>>_TypeInfo;
              }
              if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
              fVar67 = (float)thunk_FUN_0623b08c(lVar27,*(undefined4 *)
                                                         (*(long *)(*plVar28 + 0xb8) + 0x6c),0);
              if (unaff_x19[0x23] == 0) goto thunk_FUN_02e3ccc4;
              fStack000000000000016c =
                   (float)thunk_FUN_0623b08c(unaff_x19[0x23],
                                             *(undefined4 *)(*(long *)(*plVar28 + 0xb8) + 0xe4),0);
              lVar27 = unaff_x19[0x20];
              if (bVar12) {
                if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
                pfVar29 = (float *)(lVar27 + 0x1a0);
              }
              else {
                if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
                pfVar29 = (float *)(lVar27 + 0x1a8);
              }
              fStack000000000000016c = fStack000000000000016c * fVar67 * *pfVar29 * 0.25;
              if (fVar67 < unaff_s13 + fStack000000000000016c) {
                unaff_s13 = fVar67 - fStack000000000000016c;
              }
            }
          }
        }
      }
      else {
        fVar50 = 0.0;
      }
      fVar63 = *(float *)(unaff_x19 + 0xcc);
      fVar67 = (float)FUN_0630fb84(&stack0x00001280,0);
      fVar68 = *(float *)((long)unaff_x19 + 0x484);
      fVar53 = (float)FUN_063140ac(&stack0x00001270,0);
      fVar63 = fVar63 + *(float *)(unaff_x19 + 0x5c) *
                        (unaff_s15 - *(float *)((long)unaff_x19 + 0x304)) *
                        unaff_s12 *
                        (fVar53 + ((fVar67 * fVar68 - unaff_s13) - fStack000000000000016c));
      fVar67 = (float)FUN_0630fb8c(&stack0x00001280,0);
      fVar53 = (float)FUN_063140bc(&stack0x00001270,0);
      fStack0000000000000180 =
           *(float *)((long)unaff_x19 + 0x63c) +
           ((fStack000000000000017c + unaff_s12 * (unaff_s13 + fVar67 + fVar53)) -
           *(float *)((long)unaff_x19 + 0x4f4));
      fVar67 = (float)FUN_0630fb7c(&stack0x00001280,0);
      fVar67 = fStack0000000000000180 - unaff_s12 * (unaff_s13 + unaff_s13 + fVar67);
      fVar53 = (float)FUN_0630fb74(&stack0x00001280,0);
      fVar53 = fVar63 + *(float *)(unaff_x19 + 0x5c) *
                        (unaff_s15 - *(float *)((long)unaff_x19 + 0x304)) *
                        unaff_s12 *
                        (fStack000000000000016c + fStack000000000000016c +
                        unaff_s13 + unaff_s13 + fVar53 * *(float *)((long)unaff_x19 + 0x484));
      fVar68 = fVar63;
      fVar64 = fVar53;
      if (((*(int *)((long)unaff_x19 + 0x664) == 0) && (cVar26 == '\0')) &&
         ((*(byte *)((long)unaff_x19 + 0x284) >> 1 & 1) != 0)) {
        if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
        lVar27 = unaff_x19[0xc2];
        fVar68 = (float)FUN_0630f8c0(unaff_x19[0x20] + 0x28,0);
        if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
        fVar56 = (float)FUN_0630f8e0(unaff_x19[0x20] + 0x28,0);
        if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
        fVar69 = *(float *)((long)unaff_x19 + 0x444);
        fVar70 = *(float *)((long)unaff_x19 + 0x63c);
        fVar64 = (float)(int)lVar27 * fStack0000000000000054;
        fVar60 = (float)FUN_0630f890(unaff_x19[0x20] + 0x28,0);
        fVar60 = fVar60 * fVar69 * (fVar68 - (fVar56 + fVar70)) * 0.5;
        fVar68 = (float)FUN_0630fb8c(&stack0x00001280,0);
        fVar70 = fVar64 * unaff_s12 * ((fStack000000000000016c + unaff_s13 + fVar68) - fVar60);
        fVar56 = (float)FUN_0630fb8c(&stack0x00001280,0);
        fVar69 = (float)FUN_0630fb7c(&stack0x00001280,0);
        fStack0000000000000180 = fStack0000000000000180 + 0.0;
        unaff_s15 = 1.0;
        fVar67 = fVar67 + 0.0;
        fVar68 = fVar63 + fVar70;
        fVar64 = fVar64 * unaff_s12 *
                          ((((fVar56 - fVar69) - unaff_s13) - fStack000000000000016c) - fVar60);
        fVar63 = fVar63 + fVar64;
        fVar64 = fVar53 + fVar64;
        fVar53 = fVar53 + fVar70;
      }
      uVar21 = *(undefined8 *)(_fStack00000000000000a0 + 0x1a0);
      uVar20 = *(undefined8 *)(_fStack00000000000000a0 + 0x1a8);
      if (DAT_06e84e41 == '\0') {
        FUN_02e3ca1c(PTR_DAT_06a2f028);
        DAT_06e84e41 = '\x01';
      }
      uVar54 = **(undefined8 **)(*(long *)PTR_DAT_06a2f028 + 0xb8);
      uVar58 = (*(undefined8 **)(*(long *)PTR_DAT_06a2f028 + 0xb8))[1];
      if (DAT_01317bfc <
          (float)((ulong)uVar20 >> 0x20) * (float)((ulong)uVar58 >> 0x20) +
          (float)uVar20 * (float)uVar58 +
          (float)uVar21 * (float)uVar54 +
          (float)((ulong)uVar21 >> 0x20) * (float)((ulong)uVar54 >> 0x20)) {
        fVar56 = 0.0;
        auVar59._4_12_ = SUB1612(ZEXT816(0),4);
        auVar59._0_4_ = fVar67;
        uVar21 = auVar59._0_8_;
        uVar39 = (ulong)(uint)fStack0000000000000180;
        uVar20 = uVar21;
      }
      else {
        FUN_062541ec(&stack0x00001340,*(undefined4 *)((long)unaff_x19 + 0x474),(int)unaff_x19[0x8f],
                     *(undefined4 *)((long)unaff_x19 + 0x47c),(int)unaff_x19[0x90],0);
        fVar64 = (fVar53 + fVar63) * 0.5;
        fVar60 = (fVar67 + fStack0000000000000180) * 0.5;
        fVar53 = 0.0;
        auVar55 = ZEXT416((uint)(fStack0000000000000180 - fVar60));
        fVar68 = (float)FUN_062540ec(&stack0x00001100,0);
        fVar68 = fVar64 + fVar68;
        fVar69 = 0.0;
        uVar39 = CONCAT44(fVar53 + 0.0,fVar60 + auVar55._0_4_);
        auVar55 = ZEXT416((uint)(fVar67 - fVar60));
        fVar63 = (float)FUN_062540ec(&stack0x00001100,0);
        fVar63 = fVar64 + fVar63;
        fVar56 = 0.0;
        uVar21 = CONCAT44(fVar69 + 0.0,fVar60 + auVar55._0_4_);
        auVar55 = ZEXT416((uint)(fStack0000000000000180 - fVar60));
        fVar53 = (float)FUN_062540ec(&stack0x00001100,0);
        fVar53 = fVar64 + fVar53;
        fVar69 = 0.0;
        fStack0000000000000180 = fVar60 + auVar55._0_4_;
        fVar56 = fVar56 + 0.0;
        auVar55 = ZEXT416((uint)(fVar67 - fVar60));
        unaff_s15 = 1.0;
        fVar67 = (float)FUN_062540ec(&stack0x00001100,0);
        fVar64 = fVar64 + fVar67;
        uVar20 = CONCAT44(fVar69 + 0.0,fVar60 + auVar55._0_4_);
      }
      if ((unaff_x19[0x75] == 0) || (lVar27 = *(long *)(unaff_x19[0x75] + 0x38), lVar27 == 0))
      goto thunk_FUN_02e3ccc4;
      if ((uint)*(float *)(lVar27 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
      lVar27 = lVar27 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21;
      *(float *)(lVar27 + 0x114) = fVar63;
      *(undefined8 *)(lVar27 + 0x118) = uVar21;
      if ((unaff_x19[0x75] == 0) || (lVar27 = *(long *)(unaff_x19[0x75] + 0x38), lVar27 == 0))
      goto thunk_FUN_02e3ccc4;
      if ((uint)*(float *)(lVar27 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
      lVar27 = lVar27 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21;
      *(float *)(lVar27 + 0x108) = fVar68;
      *(ulong *)(lVar27 + 0x10c) = uVar39;
      if ((unaff_x19[0x75] == 0) || (lVar27 = *(long *)(unaff_x19[0x75] + 0x38), lVar27 == 0))
      goto thunk_FUN_02e3ccc4;
      if ((uint)*(float *)(lVar27 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
      lVar27 = lVar27 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21;
      *(float *)(lVar27 + 0x120) = fVar53;
      *(ulong *)(lVar27 + 0x124) = CONCAT44(fVar56,fStack0000000000000180);
      if ((unaff_x19[0x75] == 0) || (lVar27 = *(long *)(unaff_x19[0x75] + 0x38), lVar27 == 0))
      goto thunk_FUN_02e3ccc4;
      if ((uint)*(float *)(lVar27 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
      lVar27 = lVar27 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21;
      *(float *)(lVar27 + 300) = fVar64;
      *(undefined8 *)(lVar27 + 0x130) = uVar20;
      if ((unaff_x19[0x75] == 0) || (lVar27 = *(long *)(unaff_x19[0x75] + 0x38), lVar27 == 0))
      goto thunk_FUN_02e3ccc4;
      uVar15 = *(uint *)((long)unaff_x19 + 0x4ac);
      fVar68 = *(float *)(unaff_x19 + 0xcc);
      fVar67 = (float)FUN_063140ac(&stack0x00001270,0);
      if (*(uint *)(lVar27 + 0x18) <= uVar15) goto LAB_0603fce4;
      *(float *)(lVar27 + (long)(int)uVar15 * (long)(int)unaff_w21 + 0x138) =
           fVar68 + unaff_s12 * fVar67;
      if ((unaff_x19[0x75] == 0) || (lVar27 = *(long *)(unaff_x19[0x75] + 0x38), lVar27 == 0))
      goto thunk_FUN_02e3ccc4;
      uVar15 = *(uint *)((long)unaff_x19 + 0x4ac);
      fVar68 = *(float *)((long)unaff_x19 + 0x4f4);
      fVar64 = *(float *)((long)unaff_x19 + 0x63c);
      fVar67 = (float)FUN_063140bc(&stack0x00001270,0);
      if (*(uint *)(lVar27 + 0x18) <= uVar15) goto LAB_0603fce4;
      *(float *)(lVar27 + (long)(int)uVar15 * (long)(int)unaff_w21 + 0x144) =
           (fStack000000000000017c - fVar68) + fVar64 + unaff_s12 * fVar67;
      if ((unaff_x19[0x75] == 0) || (lVar27 = *(long *)(unaff_x19[0x75] + 0x38), lVar27 == 0))
      goto thunk_FUN_02e3ccc4;
      unaff_w23 = in_stack_000001a8[10];
      if ((uint)*(float *)(lVar27 + 0x18) <= (uint)unaff_w23) goto LAB_0603fce4;
      lVar27 = lVar27 + 0x20;
      *(float *)(lVar27 + (long)(int)unaff_w23 * (long)(int)unaff_w21 + 0x138) =
           (fVar53 - fVar63) / ((float)uVar39 - (float)uVar21);
      fVar49 = unaff_s12 * (fStack000000000000013c + fVar49);
      if (*(int *)((long)unaff_x19 + 0x664) == 0) {
        fVar49 = fVar49 / fVar57;
        fVar66 = (unaff_s12 * (fStack0000000000000138 + fVar66)) / fVar57;
      }
      else {
        fVar66 = unaff_s12 * (fStack0000000000000138 + fVar66);
      }
      fVar67 = *(float *)((long)unaff_x19 + 0x63c);
      unaff_w26 = *(float *)(unaff_x19 + 0x96);
      if ((in_stack_00000190 == 0.0) || (unaff_w23 == unaff_w26)) {
        fVar49 = fVar49 + fVar67;
        fVar66 = fVar66 + fVar67;
        fVar53 = fVar49;
        fVar68 = fVar66;
        if (fVar67 != 0.0) {
          fVar53 = (fVar49 - fVar67) / *(float *)((long)unaff_x19 + 0x444);
          fVar68 = (fVar66 - fVar67) / *(float *)((long)unaff_x19 + 0x444);
          if (fVar53 <= fVar49) {
            fVar53 = fVar49;
          }
          if (fVar66 <= fVar68) {
            fVar68 = fVar66;
          }
        }
        lVar27 = lVar27 + (long)(int)unaff_w23 * (long)(int)unaff_w21;
        fVar67 = fVar53;
        if (fVar53 <= *(float *)((long)unaff_x19 + 0x4e4)) {
          fVar67 = *(float *)((long)unaff_x19 + 0x4e4);
        }
        fVar64 = fVar68;
        if (*(float *)(unaff_x19 + 0x9d) <= fVar68) {
          fVar64 = *(float *)(unaff_x19 + 0x9d);
        }
        *(float *)((long)unaff_x19 + 0x4e4) = fVar67;
        *(float *)(unaff_x19 + 0x9d) = fVar64;
        *(float *)(lVar27 + 300) = fVar53;
        *(float *)(lVar27 + 0x130) = fVar68;
        fVar53 = *(float *)((long)unaff_x19 + 0x4f4);
        *(float *)(lVar27 + 0x120) = fVar49 - fVar53;
        *(float *)((long)unaff_x19 + 0x4dc) = fVar49 - fVar53;
        *(float *)(lVar27 + 0x128) = fVar66 - fVar53;
        *(float *)(unaff_x19 + 0x9c) = fVar66 - fVar53;
        if (((int)unaff_x19[0x98] == 0) || (*(char *)((long)unaff_x19 + 0x37c) != '\0')) {
          *(float *)((long)unaff_x19 + 0x4d4) = fVar67;
          if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
          fVar66 = *(float *)(unaff_x19 + 0x9b);
          fVar67 = (float)FUN_0630f8c0(unaff_x19[0x20] + 0x28,0);
          fVar57 = (unaff_s12 * fVar67) / fVar57;
          if (fVar66 <= fVar57) {
            fVar66 = fVar57;
          }
          fVar53 = *(float *)((long)unaff_x19 + 0x4f4);
          *(float *)(unaff_x19 + 0x9b) = fVar66;
        }
        if (fVar53 == 0.0) {
          fVar57 = *(float *)(unaff_x19 + 0x9a);
          if (*(float *)(unaff_x19 + 0x9a) <= fVar49) {
            fVar57 = fVar49;
          }
          *(float *)(unaff_x19 + 0x9a) = fVar57;
        }
      }
      else {
        lVar27 = lVar27 + (long)(int)unaff_w23 * (long)(int)unaff_w21;
        uVar20 = *(undefined8 *)(in_stack_000001a8 + 0x18);
        *(undefined8 *)(lVar27 + 300) = uVar20;
        fVar53 = *(float *)((long)unaff_x19 + 0x4f4);
        fVar57 = (float)uVar20 - fVar53;
        fVar49 = (float)((ulong)uVar20 >> 0x20) - fVar53;
        *(float *)(lVar27 + 0x120) = fVar57;
        *(float *)(lVar27 + 0x128) = fVar49;
        *(ulong *)(in_stack_000001a8 + 0x16) = CONCAT44(fVar49,fVar57);
      }
      lVar27 = unaff_x19[0x75];
      if ((lVar27 == 0) || (lVar33 = *(long *)(lVar27 + 0x38), lVar33 == 0))
      goto thunk_FUN_02e3ccc4;
      fVar57 = in_stack_000001a8[10];
      if ((uint)*(float *)(lVar33 + 0x18) <= (uint)fVar57) goto LAB_0603fce4;
      lVar33 = lVar33 + (long)(int)fVar57 * (long)(int)unaff_w21;
      *(undefined1 *)(lVar33 + 400) = 0;
      uVar15 = *(uint *)(unaff_x19 + 0x54);
      if ((((in_stack_0000133c == 9) ||
           ((in_stack_0000133c == 0x200b || in_stack_00000190 != 0.0 &&
            ((*(uint *)(unaff_x19 + 0x61) & 0xfffffffe) == 2)))) ||
          ((in_stack_00000190 == 0.0 &&
           (((in_stack_0000133c != 3 && (in_stack_0000133c != 0x200b)) &&
            (in_stack_0000133c != 0xad)))))) ||
         ((in_stack_0000133c == 0xad && ((uint)fStack0000000000000058 & 1) == 0 ||
          (*(int *)((long)unaff_x19 + 0x664) == 1)))) {
        *(undefined1 *)(lVar33 + 400) = 1;
        pfVar34 = _fStack0000000000000098;
        pfVar29 = _fStack00000000000000c0;
        if (fVar61 == fVar65) {
          lVar27 = *(long *)(lVar27 + 0x50);
          if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
          if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x98)) goto LAB_0603fce4;
          lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x98) * 0x60;
          pfVar29 = (float *)(lVar27 + 100);
          pfVar34 = (float *)(lVar27 + 0x68);
        }
        fVar66 = *pfVar29;
        fVar67 = *pfVar34;
        fVar57 = *(float *)(unaff_x19 + 0x74);
        fVar49 = 0.0;
        fVar53 = *(float *)(unaff_x19 + 0xcc);
        in_stack_00000140 = (in_stack_000000b8._4_4_ - fVar66) - fVar67;
        bVar12 = true;
        if ((fVar57 <= in_stack_00000140) && (bVar12 = false, !NAN(fVar57))) {
          bVar12 = fVar57 == -1.0;
        }
        if (!bVar12) {
          in_stack_00000140 = fVar57;
        }
        fVar57 = 0.0;
        if ((char)unaff_x19[0x1e] == '\0') {
          fVar57 = (float)FUN_0630fb94(&stack0x00001280,0);
        }
        fVar68 = *(float *)((long)unaff_x19 + 0x4f4);
        if (in_stack_0000133c != 0xad) {
          param_3 = unaff_s12;
        }
        fVar64 = *(float *)((long)unaff_x19 + 0x304);
        param_2 = ZEXT416((uint)fVar64);
        if ((0.0 < fVar68) && (*(char *)((long)unaff_x19 + 0x2f4) == '\0')) {
          fVar49 = *(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4ec);
        }
        fVar63 = in_stack_000001a8[10];
        fVar49 = (*(float *)((long)unaff_x19 + 0x4d4) - (*(float *)(unaff_x19 + 0x9d) - fVar68)) +
                 fVar49;
        if (fStack00000000000000ec < fVar49) {
          if ((int)unaff_x19[99] == -1) {
            *(float *)(unaff_x19 + 99) = fVar63;
          }
          plVar28 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
          fVar56 = DAT_01317af0;
          if ((char)unaff_x19[0x4c] != '\0') {
            if (0.0 < fVar68) {
              fVar68 = *(float *)(unaff_x19 + 0x5f);
              if ((fVar68 < *(float *)((long)unaff_x19 + 0x2ec)) &&
                 (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
                fVar65 = *(float *)((long)unaff_x19 + 0x2ec) +
                         ((in_stack_00000018._4_4_ - fVar49) / (float)(int)unaff_x19[0x98]) /
                         in_stack_00000048._4_4_;
                if (fVar65 <= fVar68) {
                  fVar65 = fVar68;
                }
                goto LAB_0603fbd0;
              }
            }
            fVar49 = *(float *)((long)unaff_x19 + 0x20c);
            fVar68 = *(float *)(unaff_x19 + 0x4f);
            if ((fVar68 < fVar49) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
              *(float *)((long)unaff_x19 + 0x264) = fVar49;
              fVar65 = (fVar49 - *(float *)(unaff_x19 + 0x4d)) * 0.5;
              if (fVar65 <= fVar56) {
                fVar65 = fVar56;
              }
              fVar57 = (fVar49 - fVar65) * 20.0 + 0.5;
              fVar65 = _UNK_01317b80;
              if (fVar57 != INFINITY) {
                fVar65 = (float)(int)fVar57 / 20.0;
              }
              if (fVar65 <= fVar68) {
                fVar65 = fVar68;
              }
              *(float *)((long)unaff_x19 + 0x20c) = fVar65;
              return;
            }
          }
          iVar17 = *(int *)((long)unaff_x19 + 0x314);
          if (iVar17 < 5) {
            if (iVar17 == 1) {
              lVar27 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
              if (*(int *)(lVar27 + 0xe4) == 0) {
                thunk_FUN_02e9a04c();
                lVar27 = *plVar28;
              }
              lVar33 = *(long *)(lVar27 + 0xb8);
              if (*(int *)(lVar33 + 0x1708) != 0) {
                if (*(int *)(lVar27 + 0xe4) == 0) {
                  thunk_FUN_02e9a04c();
                  lVar33 = *(long *)(*plVar28 + 0xb8);
                }
                UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableBase_<PlaySequence>d__16<float>__System_Collections_IEnumerator_Reset
                          (&stack0x00001340,lVar33 + 0x1338,
                           *(undefined8 *)
                            System_Collections_Generic_List<AndroidAssetPackState>_TypeInfo);
                memcpy(&stack0x00000d48,&stack0x00001340,0x3b8);
LAB_0603b314:
                iVar17 = FUN_0608c590();
                in_stack_00001308 = iVar17 - 1;
                unaff_w22 = unaff_w22 + 1;
                fVar57 = (float)(*(int *)((long)unaff_x19 + 0x4ac) - 1);
                *(float *)((long)unaff_x19 + 0x4ac) = fVar57;
                uVar52 = 0x2026;
                goto LAB_0603b340;
              }
LAB_0603b348:
              in_stack_000001a8[10] = 0.0;
              in_stack_000001a8[0xb] = 0.0;
              in_stack_00001308 = 0xffffffff;
              in_stack_00001328 = DAT_01318128;
              goto LAB_06038edc;
            }
            if (iVar17 != 3) goto LAB_0603acbc;
            if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) ==
                0) {
              thunk_FUN_02e9a04c();
            }
LAB_0603af60:
            in_stack_00001308 = FUN_0608c590();
          }
          else {
            if (iVar17 == 5) {
              if (((int)in_stack_00001308 < 0) || (fVar63 == 0.0)) {
                in_stack_000001a8[10] = 0.0;
                in_stack_00001308 = 0xffffffff;
                plVar28 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
                in_stack_00001328 = DAT_01318128;
              }
              else {
                param_2 = ZEXT416((uint)fStack00000000000000ec);
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
                lVar27 = *plVar28;
                *(undefined1 *)((long)unaff_x19 + 0x37c) = 1;
                uVar20 = *(undefined8 *)(*(long *)(lVar27 + 0xb8) + 0x1730);
                *(undefined4 *)((long)unaff_x19 + 0x4ec) = 0;
                *(undefined4 *)((long)unaff_x19 + 0x4f4) = 0;
                *(float *)(unaff_x19 + 0xcc) = *(float *)((long)unaff_x19 + 0x44c) + 0.0;
                uVar20 = NEON_rev64(uVar20,4);
                param_2 = ZEXT816(0);
                *(int *)(unaff_x19 + 0x98) = (int)unaff_x19[0x98] + 1;
                iVar17 = *(int *)((long)unaff_x19 + 0x4cc);
                *(undefined8 *)(in_stack_000001a8 + 0x18) = uVar20;
                unaff_x19[0x9a] = 0;
                *(int *)((long)unaff_x19 + 0x4cc) = iVar17 + 1;
              }
              goto LAB_06038edc;
            }
            if (iVar17 != 6) goto LAB_0603acbc;
            if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) ==
                0) {
              thunk_FUN_02e9a04c();
            }
            in_stack_00001308 = FUN_0608c590();
            lVar27 = unaff_x19[100];
            if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar22 = FUN_06267b6c(lVar27,0,0);
            if ((uVar22 & 1) != 0) {
              plVar45 = (long *)unaff_x19[100];
              uVar20 = (**(code **)(*unaff_x19 + 0x548))();
              if (plVar45 == (long *)0x0) goto thunk_FUN_02e3ccc4;
              (**(code **)(*plVar45 + 0x558))(plVar45,uVar20,*(undefined8 *)(*plVar45 + 0x560));
              lVar27 = unaff_x19[100];
              if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
              *(int *)(lVar27 + 0x440) = (int)unaff_x19[0x88];
              FUN_0607fed4(lVar27,*(undefined4 *)((long)unaff_x19 + 0x4ac),0);
              plVar45 = (long *)unaff_x19[100];
              if (plVar45 == (long *)0x0) goto thunk_FUN_02e3ccc4;
              (**(code **)(*plVar45 + 0x7d8))(plVar45,0,0,*(undefined8 *)(*plVar45 + 0x7e0));
              *(undefined1 *)(unaff_x19 + 0x66) = 1;
            }
          }
          in_stack_00001328 = CONCAT44(3,fVar63);
          goto LAB_06038edc;
        }
LAB_0603acbc:
        plVar28 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
        if ((uVar22 & 1) != 0) {
          fVar49 = unaff_s15;
          if ((uVar15 & 0x18) != 0) {
            fVar49 = _UNK_01317cd8;
          }
          fVar57 = ABS(fVar53) +
                   *(float *)(unaff_x19 + 0x5c) * fVar57 * (unaff_s15 - fVar64) * param_3;
          if (fVar49 * in_stack_00000140 < fVar57) {
            if ((((int)unaff_x19[0x61] == 0) || ((int)unaff_x19[0x61] == 3)) ||
               (fVar63 == *(float *)(unaff_x19 + 0x96))) {
              if (((char)unaff_x19[0x4c] != '\0') &&
                 (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
                param_3 = 100.0;
                fVar53 = *(float *)(unaff_x19 + 0x60) / 100.0;
                if (fVar64 < fVar53) goto LAB_0603fc3c;
                fVar53 = *(float *)((long)unaff_x19 + 0x20c);
                fVar68 = *(float *)(unaff_x19 + 0x4f);
                param_2 = ZEXT416((uint)fVar68);
                if (fVar68 < fVar53) goto LAB_0603fc84;
              }
              iVar17 = *(int *)((long)unaff_x19 + 0x314);
              if (iVar17 == 1) {
                lVar27 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
                if (*(int *)(lVar27 + 0xe4) == 0) {
                  thunk_FUN_02e9a04c();
                  lVar27 = *plVar28;
                }
                lVar33 = *(long *)(lVar27 + 0xb8);
                if (*(int *)(lVar33 + 0x1708) == 0) goto LAB_0603b348;
                if (*(int *)(lVar27 + 0xe4) == 0) {
                  thunk_FUN_02e9a04c();
                  lVar33 = *(long *)(*plVar28 + 0xb8);
                }
                UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableBase_<PlaySequence>d__16<float>__System_Collections_IEnumerator_Reset
                          (&stack0x00001340,lVar33 + 0x1338,
                           *(undefined8 *)
                            System_Collections_Generic_List<AndroidAssetPackState>_TypeInfo);
                memcpy(&stack0x000005d8,&stack0x00001340,0x3b8);
                goto LAB_0603b314;
              }
              if (iVar17 == 6) {
                if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4
                            ) == 0) {
                  thunk_FUN_02e9a04c();
                }
                in_stack_00001308 = FUN_0608c590();
                lVar27 = unaff_x19[100];
                if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
                  thunk_FUN_02e9a04c();
                }
                uVar22 = FUN_06267b6c(lVar27,0,0);
                if ((uVar22 & 1) != 0) {
                  plVar45 = (long *)unaff_x19[100];
                  uVar20 = (**(code **)(*unaff_x19 + 0x548))();
                  if (plVar45 == (long *)0x0) goto thunk_FUN_02e3ccc4;
                  (**(code **)(*plVar45 + 0x558))(plVar45,uVar20,*(undefined8 *)(*plVar45 + 0x560));
                  lVar27 = unaff_x19[100];
                  if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
                  *(int *)(lVar27 + 0x440) = (int)unaff_x19[0x88];
                  FUN_0607fed4(lVar27,*(undefined4 *)((long)unaff_x19 + 0x4ac),0);
                  plVar45 = (long *)unaff_x19[100];
                  if (plVar45 == (long *)0x0) goto thunk_FUN_02e3ccc4;
                  (**(code **)(*plVar45 + 0x7d8))(plVar45,0,0,*(undefined8 *)(*plVar45 + 0x7e0));
                  *(undefined1 *)(unaff_x19 + 0x66) = 1;
                }
                fVar57 = in_stack_000001a8[10];
                goto LAB_0603b288;
              }
              if (iVar17 == 3) {
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
                lVar27 = unaff_x19[0x75];
                if ((lVar27 == 0) || (lVar33 = *(long *)(lVar27 + 0x38), lVar33 == 0))
                goto thunk_FUN_02e3ccc4;
                if ((uint)*(float *)(lVar33 + 0x18) <= (uint)in_stack_000001a8[10])
                goto LAB_0603fce4;
                fVar53 = *(float *)((long)unaff_x19 + 0x4f4);
                fVar68 = 0.0;
                if ((0.0 < fVar53) && (*(char *)((long)unaff_x19 + 0x2f4) == '\0')) {
                  fVar68 = *(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4ec)
                  ;
                }
                fVar68 = in_stack_00000100._4_4_ * *(float *)(unaff_x19 + 0x5d) +
                         *(float *)(lVar33 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21
                                   + 0x14c) + (fVar68 - *(float *)(unaff_x19 + 0x9d)) +
                         in_stack_00000048._4_4_ *
                         (fStack0000000000000044 + *(float *)((long)unaff_x19 + 0x2ec));
              }
              else {
                lVar27 = unaff_x19[0x75];
                *(undefined1 *)((long)unaff_x19 + 0x2f4) = 1;
                if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
                fVar68 = *(float *)(unaff_x19 + 0x5e) +
                         in_stack_00000100._4_4_ * *(float *)(unaff_x19 + 0x5d);
                fVar53 = *(float *)((long)unaff_x19 + 0x4f4);
              }
              puVar11 = System_Collections_Generic_List<AudioListener>_TypeInfo;
              lVar27 = *(long *)(lVar27 + 0x38);
              if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
              fVar64 = *(float *)((long)unaff_x19 + 0x4ac);
              if (((uint)*(float *)(lVar27 + 0x18) <= (uint)fVar64) ||
                 (fVar56 = (float)((int)fVar64 - 1), (uint)*(float *)(lVar27 + 0x18) <= (uint)fVar56
                 )) goto LAB_0603fce4;
              param_3 = *(float *)((long)unaff_x19 + 0x4d4);
              lVar27 = lVar27 + 0x20;
              fVar60 = *(float *)(lVar27 + (long)(int)fVar64 * (long)(int)unaff_w21 + 0x130);
              param_2 = ZEXT416((uint)fVar60);
              fVar60 = (fVar68 + param_3 + fVar53) - fVar60;
              if ((*(short *)(lVar27 + (long)(int)fVar56 * (long)(int)unaff_w21 + 4) == 0xad &&
                   ((uint)fStack0000000000000058 & 1) == 0) &&
                 ((*(int *)((long)unaff_x19 + 0x314) == 0 || (fVar60 < fStack00000000000000ec)))) {
                fStack0000000000000058 = 0.0;
                in_stack_00001308 = in_stack_00001308 - 1;
                in_stack_000001a8[10] = fVar56;
                plVar28 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
                in_stack_00001328 = CONCAT44(0x2d,fVar56);
                goto LAB_06038edc;
              }
              if (*(short *)(lVar27 + (long)(int)fVar64 * (long)(int)unaff_w21 + 4) == 0xad) {
                fStack0000000000000058 = 1.4013e-45;
                plVar28 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
                goto LAB_06038edc;
              }
              if ((char)unaff_x19[0x4c] != '\0' &&
                  (((uint)fStack000000000000006c ^ 0xffffffff) & 1) == 0) {
                fVar53 = *(float *)(unaff_x19 + 0x60) / 100.0;
                fVar64 = *(float *)((long)unaff_x19 + 0x304);
                if ((fVar64 < fVar53) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
                goto LAB_0603fc3c;
                fVar53 = *(float *)((long)unaff_x19 + 0x20c);
                fVar68 = *(float *)(unaff_x19 + 0x4f);
                param_2 = ZEXT416((uint)fVar68);
                if ((fVar68 < fVar53) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
                goto LAB_0603fc84;
              }
              lVar27 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
              if (*(int *)(lVar27 + 0xe4) == 0) {
                thunk_FUN_02e9a04c();
                lVar27 = *(long *)puVar11;
              }
              if (((((uint)fStack000000000000006c & 1) != 0) &&
                  (iVar17 = *(int *)(*(long *)(lVar27 + 0xb8) + 0xf80), iVar17 != -1)) &&
                 (iVar17 != iStack0000000000000020)) {
                if (*(int *)(lVar27 + 0xe4) == 0) {
                  thunk_FUN_02e9a04c();
                }
                in_stack_00001308 = FUN_0608c590();
                if ((unaff_x19[0x75] == 0) ||
                   (lVar27 = *(long *)(unaff_x19[0x75] + 0x38), lVar27 == 0))
                goto thunk_FUN_02e3ccc4;
                fVar53 = (float)((int)in_stack_000001a8[10] - 1);
                if ((uint)*(float *)(lVar27 + 0x18) <= (uint)fVar53) goto LAB_0603fce4;
                iStack0000000000000020 = iVar17;
                if (*(short *)(lVar27 + (long)(int)fVar53 * (long)(int)unaff_w21 + 0x24) == 0xad) {
                  fStack0000000000000058 = 0.0;
                  in_stack_00001308 = in_stack_00001308 - 1;
                  in_stack_000001a8[10] = fVar53;
                  plVar28 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
                  in_stack_00001328 = CONCAT44(0x2d,fVar53);
                  goto LAB_06038edc;
                }
              }
              if (fVar60 <= fStack00000000000000ec) {
                param_2 = ZEXT416((uint)unaff_s12);
                param_3 = in_stack_00000100._4_4_;
                FUN_0608d070();
LAB_0603cc70:
                fStack000000000000006c = 1.4013e-45;
                fStack0000000000000058 = 0.0;
                uStack0000000000000060 = 1;
                plVar28 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
                goto LAB_06038edc;
              }
              if ((int)unaff_x19[99] == -1) {
                *(undefined4 *)(unaff_x19 + 99) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
              }
              if ((char)unaff_x19[0x4c] != '\0') {
                fVar53 = *(float *)(unaff_x19 + 0x5f);
                if ((fVar53 < *(float *)((long)unaff_x19 + 0x2ec)) &&
                   (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
                  fVar65 = *(float *)((long)unaff_x19 + 0x2ec) +
                           ((in_stack_00000018._4_4_ - fVar60) / (float)((int)unaff_x19[0x98] + 1))
                           / in_stack_00000048._4_4_;
                  if (fVar65 <= fVar53) {
                    fVar65 = fVar53;
                  }
LAB_0603fbd0:
                  *(float *)((long)unaff_x19 + 0x2ec) = fVar65;
                  return;
                }
                fVar53 = *(float *)(unaff_x19 + 0x60) / 100.0;
                fVar64 = *(float *)((long)unaff_x19 + 0x304);
                if ((fVar64 < fVar53) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
                {
LAB_0603fc3c:
                  fVar65 = fVar57;
                  if (0.0 < fVar64) {
                    fVar65 = fVar57 / (1.0 - fVar64);
                  }
                  fVar64 = fVar64 + (fVar57 - fVar49 * (in_stack_00000140 + _UNK_01317b20)) / fVar65
                  ;
                  if (fVar53 <= fVar64) {
                    fVar64 = fVar53;
                  }
                  *(float *)((long)unaff_x19 + 0x304) = fVar64;
                  return;
                }
                fVar53 = *(float *)((long)unaff_x19 + 0x20c);
                fVar68 = *(float *)(unaff_x19 + 0x4f);
                param_2 = ZEXT416((uint)fVar68);
                if ((fVar68 < fVar53) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
                {
LAB_0603fc84:
                  fVar65 = DAT_01317af0;
                  *(float *)((long)unaff_x19 + 0x264) = fVar53;
                  fVar57 = (fVar53 - *(float *)(unaff_x19 + 0x4d)) * 0.5;
                  if (fVar57 <= fVar65) {
                    fVar57 = fVar65;
                  }
                  fVar57 = (fVar53 - fVar57) * 20.0 + 0.5;
                  fVar65 = _UNK_01317b80;
                  if (fVar57 != INFINITY) {
                    fVar65 = (float)(int)fVar57 / 20.0;
                  }
                  if (fVar65 <= fVar68) {
                    fVar65 = fVar68;
                  }
UnityEngine_XR_Interaction_Toolkit_Interactors_XRGazeInteractor__CalculateSnapColliderSize:
                  *(float *)((long)unaff_x19 + 0x20c) = fVar65;
                  return;
                }
              }
              iVar17 = *(int *)((long)unaff_x19 + 0x314);
              fStack0000000000000058 = 0.0;
              if (iVar17 < 3) {
                if (iVar17 != 0) {
                  if (iVar17 == 1) {
                    lVar27 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
                    if (*(int *)(lVar27 + 0xe4) == 0) {
                      thunk_FUN_02e9a04c();
                      lVar27 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
                    }
                    in_stack_00001328 = DAT_01318128;
                    lVar33 = *(long *)(lVar27 + 0xb8);
                    if (*(int *)(lVar33 + 0x1708) == 0) {
                      in_stack_00001308 = 0xffffffff;
                      in_stack_000001a8[10] = 0.0;
                      in_stack_000001a8[0xb] = 0.0;
                    }
                    else {
                      if (*(int *)(lVar27 + 0xe4) == 0) {
                        thunk_FUN_02e9a04c();
                        lVar33 = *(long *)(*(long *)
                                            System_Collections_Generic_List<AudioListener>_TypeInfo
                                          + 0xb8);
                      }
                      UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableBase_<PlaySequence>d__16<float>__System_Collections_IEnumerator_Reset
                                (&stack0x00001340,lVar33 + 0x1338,
                                 *(undefined8 *)
                                  System_Collections_Generic_List<AndroidAssetPackState>_TypeInfo);
                      memcpy(&stack0x00000990,&stack0x00001340,0x3b8);
                      iVar17 = FUN_0608c590();
                      in_stack_00001308 = iVar17 - 1;
                      iVar17 = *(int *)((long)unaff_x19 + 0x4ac) + -1;
                      unaff_w22 = unaff_w22 + 1;
                      *(int *)((long)unaff_x19 + 0x4ac) = iVar17;
                      in_stack_00001328 = CONCAT44(0x2026,iVar17);
                    }
                    goto LAB_0603cf9c;
                  }
                  if (iVar17 != 2) goto LAB_0603ada8;
                }
LAB_0603cca8:
                param_2 = ZEXT416((uint)unaff_s12);
                param_3 = in_stack_00000100._4_4_;
                FUN_0608d070();
                fStack0000000000000058 = 0.0;
                fStack000000000000006c = 1.4013e-45;
                uStack0000000000000060 = 1;
                plVar28 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
                goto LAB_06038edc;
              }
              if (iVar17 < 5) {
                if (iVar17 == 3) {
                  if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo +
                              0xe4) == 0) {
                    thunk_FUN_02e9a04c();
                  }
                  in_stack_00001308 = FUN_0608c590();
                  in_stack_00001328 = CONCAT44(3,fVar63);
LAB_0603cf9c:
                  fStack0000000000000058 = 0.0;
                  unaff_s15 = 1.0;
                  plVar28 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
                  goto LAB_06038edc;
                }
                if (iVar17 == 4) goto LAB_0603cca8;
              }
              else {
                if (iVar17 == 5) {
                  param_2 = ZEXT416((uint)unaff_s12);
                  *(undefined1 *)((long)unaff_x19 + 0x37c) = 1;
                  param_3 = in_stack_00000100._4_4_;
                  FUN_0608d070();
                  *(undefined4 *)((long)unaff_x19 + 0x4ec) = 0;
                  *(undefined4 *)((long)unaff_x19 + 0x4f4) = 0;
                  *(int *)((long)unaff_x19 + 0x4cc) = *(int *)((long)unaff_x19 + 0x4cc) + 1;
                  unaff_x19[0x9a] = 0;
                  goto LAB_0603cc70;
                }
                if (iVar17 == 6) {
                  lVar27 = unaff_x19[100];
                  if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
                    thunk_FUN_02e9a04c();
                  }
                  uVar22 = FUN_06267b6c(lVar27,0,0);
                  if ((uVar22 & 1) != 0) {
                    plVar28 = (long *)unaff_x19[100];
                    uVar20 = (**(code **)(*unaff_x19 + 0x548))();
                    if (plVar28 == (long *)0x0) goto thunk_FUN_02e3ccc4;
                    (**(code **)(*plVar28 + 0x558))
                              (plVar28,uVar20,*(undefined8 *)(*plVar28 + 0x560));
                    lVar27 = unaff_x19[100];
                    if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
                    *(int *)(lVar27 + 0x440) = (int)unaff_x19[0x88];
                    FUN_0607fed4(lVar27,*(undefined4 *)((long)unaff_x19 + 0x4ac),0);
                    plVar28 = (long *)unaff_x19[100];
                    if (plVar28 == (long *)0x0) goto thunk_FUN_02e3ccc4;
                    (**(code **)(*plVar28 + 0x7d8))(plVar28,0,0,*(undefined8 *)(*plVar28 + 0x7e0));
                    *(undefined1 *)(unaff_x19 + 0x66) = 1;
                  }
                  in_stack_00001328 = CONCAT44(3,in_stack_000001a8[10]);
                  goto LAB_0603cf9c;
                }
                unaff_s15 = 1.0;
              }
            }
          }
        }
LAB_0603ada8:
        if (in_stack_00000190 == 0.0) {
          if (in_stack_0000133c == 0xad) {
            if ((unaff_x19[0x75] == 0) || (lVar27 = *(long *)(unaff_x19[0x75] + 0x38), lVar27 == 0))
            goto thunk_FUN_02e3ccc4;
            if ((uint)*(float *)(lVar27 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
            *(undefined1 *)(lVar27 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21 + 400)
                 = 0;
          }
          else {
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
            if ((unaff_x19[0x75] == 0) || (lVar27 = *(long *)(unaff_x19[0x75] + 0x50), lVar27 == 0))
            goto thunk_FUN_02e3ccc4;
            if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x98)) goto LAB_0603fce4;
            uStack0000000000000060 = 0;
            lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x98) * 0x60;
            *(float *)(lVar27 + 100) = fVar66;
            *(float *)(lVar27 + 0x68) = fVar67;
          }
        }
        else {
          lVar27 = unaff_x19[0x75];
          if ((lVar27 == 0) || (lVar33 = *(long *)(lVar27 + 0x38), lVar33 == 0))
          goto thunk_FUN_02e3ccc4;
          fVar57 = in_stack_000001a8[10];
          if ((uint)*(float *)(lVar33 + 0x18) <= (uint)fVar57) goto LAB_0603fce4;
          *(undefined1 *)(lVar33 + (long)(int)fVar57 * (long)(int)unaff_w21 + 400) = 0;
          *(float *)((long)unaff_x19 + 0x4bc) = fVar57;
          lVar33 = *(long *)(lVar27 + 0x50);
          if (lVar33 == 0) goto thunk_FUN_02e3ccc4;
          uVar16 = *(uint *)(lVar33 + 0x18);
          if (uVar16 <= *(uint *)(unaff_x19 + 0x98)) goto LAB_0603fce4;
          lVar33 = lVar33 + 0x20;
          lVar37 = lVar33 + (long)(int)*(uint *)(unaff_x19 + 0x98) * 0x60;
          iVar17 = *(int *)(lVar37 + 0xc) + 1;
          *(int *)(lVar37 + 0xc) = iVar17;
          uVar32 = *(uint *)(unaff_x19 + 0x98);
          *(int *)(unaff_x19 + 0x99) = iVar17;
          if (uVar16 <= uVar32) goto LAB_0603fce4;
          lVar37 = lVar33 + (long)(int)uVar32 * 0x60;
          *(float *)(lVar37 + 0x44) = fVar66;
          *(float *)(lVar37 + 0x48) = fVar67;
          *(int *)(lVar27 + 0x20) = *(int *)(lVar27 + 0x20) + 1;
          if (in_stack_0000133c == 0xa0) {
            *(int *)(lVar33 + (long)(int)uVar32 * 0x60) =
                 *(int *)(lVar33 + (long)(int)uVar32 * 0x60) + 1;
          }
        }
      }
      else {
        if (((in_stack_0000133c & 0xfffffffe) == 10) && (*(int *)((long)unaff_x19 + 0x314) == 6)) {
          fVar49 = 0.0;
          if ((0.0 < fVar53) && (*(char *)((long)unaff_x19 + 0x2f4) == '\0')) {
            fVar49 = *(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4ec);
          }
          param_3 = *(float *)((long)unaff_x19 + 0x4d4);
          param_2 = ZEXT416((uint)fStack00000000000000ec);
          if (fStack00000000000000ec < (param_3 - (*(float *)(unaff_x19 + 0x9d) - fVar53)) + fVar49)
          {
            if ((int)unaff_x19[99] == -1) {
              *(float *)(unaff_x19 + 99) = fVar57;
            }
            plVar28 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
            if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) ==
                0) {
              thunk_FUN_02e9a04c();
            }
            in_stack_00001308 = FUN_0608c590();
            lVar27 = unaff_x19[100];
            if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar22 = FUN_06267b6c(lVar27,0,0);
            if ((uVar22 & 1) != 0) {
              plVar45 = (long *)unaff_x19[100];
              uVar20 = (**(code **)(*unaff_x19 + 0x548))();
              if (plVar45 == (long *)0x0) goto thunk_FUN_02e3ccc4;
              (**(code **)(*plVar45 + 0x558))(plVar45,uVar20,*(undefined8 *)(*plVar45 + 0x560));
              lVar27 = unaff_x19[100];
              if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
              *(int *)(lVar27 + 0x440) = (int)unaff_x19[0x88];
              FUN_0607fed4(lVar27,*(undefined4 *)((long)unaff_x19 + 0x4ac),0);
              plVar45 = (long *)unaff_x19[100];
              if (plVar45 == (long *)0x0) goto thunk_FUN_02e3ccc4;
              (**(code **)(*plVar45 + 0x7d8))(plVar45,0,0,*(undefined8 *)(*plVar45 + 0x7e0));
              *(undefined1 *)(unaff_x19 + 0x66) = 1;
            }
LAB_0603b288:
            uVar52 = 3;
LAB_0603b340:
            in_stack_00001328 = CONCAT44(uVar52,fVar57);
            goto LAB_06038edc;
          }
        }
        if ((((in_stack_0000133c - 0x2007 < 0x23) &&
             ((1L << ((ulong)(in_stack_0000133c - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
            (in_stack_0000133c - 10 < 2)) || (in_stack_0000133c == 0xa0)) {
          if (in_stack_0000133c == 0xad) goto LAB_0603b638;
LAB_0603b58c:
          if ((in_stack_0000133c == 0x200b) || (in_stack_0000133c == 0x2060)) goto LAB_0603b638;
          lVar27 = unaff_x19[0x75];
          if ((lVar27 == 0) || (lVar33 = *(long *)(lVar27 + 0x50), lVar33 == 0))
          goto thunk_FUN_02e3ccc4;
          if (*(uint *)(lVar33 + 0x18) <= *(uint *)(unaff_x19 + 0x98)) goto LAB_0603fce4;
          lVar33 = lVar33 + (long)(int)*(uint *)(unaff_x19 + 0x98) * 0x60;
          *(int *)(lVar33 + 0x2c) = *(int *)(lVar33 + 0x2c) + 1;
          *(int *)(lVar27 + 0x20) = *(int *)(lVar27 + 0x20) + 1;
        }
        else {
          if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          uVar22 = FUN_055814cc(in_stack_0000133c,0);
          if (((uVar22 & 1) != 0) && (in_stack_0000133c != 0xad)) goto LAB_0603b58c;
        }
        if (in_stack_0000133c == 0xa0) {
          if ((unaff_x19[0x75] == 0) || (lVar27 = *(long *)(unaff_x19[0x75] + 0x50), lVar27 == 0))
          goto thunk_FUN_02e3ccc4;
          if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x98)) goto LAB_0603fce4;
          lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x98) * 0x60;
          *(int *)(lVar27 + 0x20) = *(int *)(lVar27 + 0x20) + 1;
        }
      }
LAB_0603b638:
      if ((*(int *)((long)unaff_x19 + 0x314) == 1) &&
         ((fVar61 != fVar65 || (in_stack_0000133c == 0x2d)))) {
        if (unaff_x19[0xcf] == 0) goto thunk_FUN_02e3ccc4;
        fVar49 = *(float *)(unaff_x19 + 0x42);
        fVar57 = (float)FUN_0630f888(unaff_x19[0xcf] + 0x28,0);
        if (unaff_x19[0xcf] == 0) goto thunk_FUN_02e3ccc4;
        fVar66 = (float)FUN_0630f890(unaff_x19[0xcf] + 0x28,0);
        lVar27 = unaff_x19[0xce];
        if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto thunk_FUN_02e3ccc4;
        fVar53 = *(float *)((long)unaff_x19 + 0x444);
        fVar68 = *(float *)(lVar27 + 0x2c);
        fVar67 = (float)FUN_0630fd88(*(long *)(lVar27 + 0x20),0);
        uVar20 = *(undefined8 *)_fStack00000000000000c0;
        fVar67 = fVar53 * in_stack_00000118 * (fVar49 / fVar57) * fVar66 * fVar68 * fVar67;
        if ((in_stack_0000133c == 10) && (*(int *)((long)unaff_x19 + 0x4ac) != (int)unaff_x19[0x96])
           ) {
          if ((unaff_x19[0x75] == 0) || (lVar27 = *(long *)(unaff_x19[0x75] + 0x38), lVar27 == 0))
          goto thunk_FUN_02e3ccc4;
          uVar16 = *(int *)((long)unaff_x19 + 0x4ac) - 1;
          if (*(uint *)(lVar27 + 0x18) <= uVar16) goto LAB_0603fce4;
          if (unaff_x19[0xcf] == 0) goto thunk_FUN_02e3ccc4;
          fVar49 = *(float *)(lVar27 + (long)(int)uVar16 * (long)(int)unaff_w21 + 0x58);
          fVar57 = (float)FUN_0630f888(unaff_x19[0xcf] + 0x28,0);
          if (unaff_x19[0xcf] == 0) goto thunk_FUN_02e3ccc4;
          fVar66 = (float)FUN_0630f890(unaff_x19[0xcf] + 0x28,0);
          lVar27 = unaff_x19[0xce];
          if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto thunk_FUN_02e3ccc4;
          fVar53 = *(float *)((long)unaff_x19 + 0x444);
          fVar68 = *(float *)(lVar27 + 0x2c);
          fVar67 = (float)FUN_0630fd88(*(long *)(lVar27 + 0x20),0);
          if ((unaff_x19[0x75] == 0) || (lVar27 = *(long *)(unaff_x19[0x75] + 0x50), lVar27 == 0))
          goto thunk_FUN_02e3ccc4;
          if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x98)) goto LAB_0603fce4;
          uVar20 = *(undefined8 *)(lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x98) * 0x60 + 100);
          fVar67 = fVar53 * in_stack_00000118 * (fVar49 / fVar57) * fVar66 * fVar68 * fVar67;
        }
        fVar49 = *(float *)((long)unaff_x19 + 0x4f4);
        fVar57 = 0.0;
        fVar66 = 0.0;
        if ((0.0 < fVar49) && (*(char *)((long)unaff_x19 + 0x2f4) == '\0')) {
          fVar66 = *(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4ec);
        }
        fVar53 = *(float *)((long)unaff_x19 + 0x4d4);
        fVar68 = *(float *)(unaff_x19 + 0x9d);
        fVar64 = *(float *)(unaff_x19 + 0xcc);
        fStack0000000000000180 = (float)uVar20;
        fStack0000000000000184 = (float)((ulong)uVar20 >> 0x20);
        if ((char)unaff_x19[0x1e] == '\0') {
          if ((unaff_x19[0xce] == 0) || (lVar27 = *(long *)(unaff_x19[0xce] + 0x20), lVar27 == 0))
          goto thunk_FUN_02e3ccc4;
          FUN_0630fd4c(&stack0x00001340,lVar27,0);
          fVar57 = (float)FUN_0630fb94(&stack0x000011e0,0);
        }
        puVar11 = System_Collections_Generic_List<AudioListener>_TypeInfo;
        fStack0000000000000184 =
             (in_stack_000000b8._4_4_ - fStack0000000000000180) - fStack0000000000000184;
        fVar63 = *(float *)(unaff_x19 + 0x74);
        bVar12 = true;
        if ((fVar63 <= fStack0000000000000184) && (bVar12 = false, !NAN(fVar63))) {
          bVar12 = fVar63 == -1.0;
        }
        if (!bVar12) {
          fStack0000000000000184 = fVar63;
        }
        fVar63 = unaff_s15;
        if ((uVar15 & 0x18) != 0) {
          fVar63 = _UNK_01317cd8;
        }
        if ((ABS(fVar64) +
             fVar67 * *(float *)(unaff_x19 + 0x5c) *
                      fVar57 * (unaff_s15 - *(float *)((long)unaff_x19 + 0x304)) <
             fVar63 * fStack0000000000000184) &&
           ((fVar53 - (fVar68 - fVar49)) + fVar66 < fStack00000000000000ec)) {
          if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) == 0
             ) {
            thunk_FUN_02e9a04c();
          }
          FUN_0608c948();
          lVar27 = *(long *)(*(long *)puVar11 + 0xb8);
          memcpy(&stack0x00001340,(void *)(lVar27 + 0x810),0x3b8);
          FUN_046b8738(lVar27 + 0x1338,&stack0x00001340,
                       *(undefined8 *)System_Collections_Generic_List<ApplicationInvite>_TypeInfo);
        }
      }
      lVar27 = unaff_x19[0x75];
      if ((lVar27 == 0) || (lVar33 = *(long *)(lVar27 + 0x38), lVar33 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar33 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
      lVar33 = lVar33 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * (long)(int)unaff_w21;
      uVar15 = *(uint *)(unaff_x19 + 0x98);
      *(uint *)(lVar33 + 0x5c) = uVar15;
      *(undefined4 *)(lVar33 + 0x60) = *(undefined4 *)((long)unaff_x19 + 0x4cc);
      if ((fVar61 == fVar65) ||
         ((in_stack_0000133c < 0xe && ((1 << (ulong)(in_stack_0000133c & 0x1f) & 0x2c00U) != 0)))) {
        lVar27 = *(long *)(lVar27 + 0x50);
        if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar27 + 0x18) <= uVar15) goto LAB_0603fce4;
        if (*(int *)(lVar27 + (long)(int)uVar15 * 0x60 + 0x24) == 1) goto LAB_0603b9e0;
      }
      else {
        lVar27 = *(long *)(lVar27 + 0x50);
        if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
LAB_0603b9e0:
        if (*(uint *)(lVar27 + 0x18) <= uVar15) goto LAB_0603fce4;
        *(int *)(lVar27 + (long)(int)uVar15 * 0x60 + 0x6c) = (int)unaff_x19[0x54];
      }
      if (in_stack_0000133c == 9) {
        if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
        fVar57 = (float)FUN_0630f930(unaff_x19[0x20] + 0x28,0);
        if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
        fVar49 = (float)NEON_ucvtf((uint)*(byte *)(unaff_x19[0x20] + 0x1b1));
        fVar66 = *(float *)(unaff_x19 + 0xcc);
        param_2 = ZEXT416((uint)fVar66);
        fVar49 = unaff_s12 * fVar57 * fVar49;
        if ((char)unaff_x19[0x1e] == '\0') {
          param_3 = fVar49 * (float)(int)(fVar66 / fVar49);
          fVar57 = param_3;
          if (param_3 <= fVar66) {
            fVar57 = fVar49 + fVar66;
          }
        }
        else {
          param_3 = fVar49 * (float)(int)(fVar66 / fVar49);
          fVar57 = param_3;
          if (fVar66 <= param_3) {
            fVar57 = fVar66 - fVar49;
          }
        }
LAB_0603bc44:
        *(float *)(unaff_x19 + 0xcc) = fVar57;
      }
      else {
        fVar57 = *(float *)(unaff_x19 + 0x5b);
        if (fVar57 == 0.0) {
          fVar57 = *(float *)(unaff_x19 + 0xcc);
          if ((char)unaff_x19[0x1e] == '\0') {
            fVar66 = (float)FUN_0630fb94(&stack0x00001280,0);
            fVar67 = *in_stack_000001a8;
            fVar51 = (float)FUN_063140cc(&stack0x00001270,0);
            if (unaff_x19[0x20] != 0) {
              param_3 = *(float *)((long)unaff_x19 + 0x304);
              fVar49 = *(float *)(unaff_x19 + 0x5c);
              fVar57 = fVar57 + fVar49 * (unaff_s15 - param_3) *
                                         (*(float *)((long)unaff_x19 + 0x2d4) +
                                         unaff_s12 * (fVar66 * fVar67 + fVar51) +
                                         in_stack_00000100._4_4_ *
                                         (fVar50 + fVar48 + *(float *)(unaff_x19[0x20] + 0x1a4)));
              *(float *)(unaff_x19 + 0xcc) = fVar57;
              goto joined_r0x0603bb78;
            }
            goto thunk_FUN_02e3ccc4;
          }
          fVar49 = (float)FUN_063140cc(&stack0x00001270,0);
          if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
          param_3 = *(float *)((long)unaff_x19 + 0x304);
          param_2 = ZEXT416((uint)*(float *)(unaff_x19 + 0x5c));
          fVar57 = fVar57 - *(float *)(unaff_x19 + 0x5c) *
                            (unaff_s15 - param_3) *
                            (*(float *)((long)unaff_x19 + 0x2d4) +
                            unaff_s12 * fVar49 +
                            in_stack_00000100._4_4_ *
                            (fVar50 + fVar48 + *(float *)(unaff_x19[0x20] + 0x1a4)));
          *(float *)(unaff_x19 + 0xcc) = fVar57;
          if ((in_stack_00000190 != 0.0) || (in_stack_0000133c == 0x200b)) {
            fVar49 = in_stack_00000100._4_4_ * *(float *)((long)unaff_x19 + 0x2e4);
            param_2 = ZEXT416((uint)fVar49);
            param_3 = in_stack_00000100._4_4_;
            fVar57 = fVar57 - fVar49;
            goto LAB_0603bc44;
          }
        }
        else {
          if (((*(char *)((long)unaff_x19 + 0x2dc) != '\0') && (in_stack_0000133c < 0x3b)) &&
             ((1L << ((ulong)in_stack_0000133c & 0x3f) & 0x400500000000000U) != 0)) {
            fVar57 = fVar57 * 0.5;
          }
          if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
          param_3 = *(float *)((long)unaff_x19 + 0x304);
          fVar49 = *(float *)(unaff_x19 + 0xcc);
          fVar57 = fVar49 + *(float *)(unaff_x19 + 0x5c) *
                            (unaff_s15 - param_3) *
                            (*(float *)((long)unaff_x19 + 0x2d4) +
                            (fVar57 - fVar51) +
                            in_stack_00000100._4_4_ * (fVar48 + *(float *)(unaff_x19[0x20] + 0x1a4))
                            );
          *(float *)(unaff_x19 + 0xcc) = fVar57;
joined_r0x0603bb78:
          if ((in_stack_00000190 != 0.0) ||
             (param_2 = ZEXT416((uint)fVar49), in_stack_0000133c == 0x200b)) {
            fVar49 = in_stack_00000100._4_4_ * *(float *)((long)unaff_x19 + 0x2e4);
            param_2 = ZEXT416((uint)fVar49);
            param_3 = in_stack_00000100._4_4_;
            fVar57 = fVar57 + fVar49;
            goto LAB_0603bc44;
          }
        }
      }
      lVar27 = unaff_x19[0x75];
      if ((lVar27 == 0) || (lVar33 = *(long *)(lVar27 + 0x38), lVar33 == 0))
      goto thunk_FUN_02e3ccc4;
      fVar49 = in_stack_000001a8[10];
      if ((uint)*(float *)(lVar33 + 0x18) <= (uint)fVar49) goto LAB_0603fce4;
      *(float *)(lVar33 + (long)(int)fVar49 * (long)(int)unaff_w21 + 0x13c) = fVar57;
      if (in_stack_0000133c == 0xd) {
        param_2 = ZEXT816(0);
        *(float *)(unaff_x19 + 0xcc) = *(float *)((long)unaff_x19 + 0x44c) + 0.0;
      }
      if ((*(int *)((long)unaff_x19 + 0x314) == 5) &&
         (((0xd < in_stack_0000133c || ((1 << (ulong)(in_stack_0000133c & 0x1f) & 0x2c00U) == 0)) &&
          (1 < in_stack_0000133c - 0x2028)))) {
        lVar33 = *(long *)(lVar27 + 0x58);
        if (lVar33 == 0) goto thunk_FUN_02e3ccc4;
        iVar17 = *(int *)((long)unaff_x19 + 0x4cc) + 1;
        if (*(int *)(lVar33 + 0x18) < iVar17) {
          if (*(int *)(*(long *)System_Collections_Generic_List<AchievementDefinition>_TypeInfo +
                      0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          FUN_03ab3b84((long *)(lVar27 + 0x58),iVar17,1,
                       *(undefined8 *)
                        System_Collections_Generic_List<XmlEventCache_XmlEvent[]>_TypeInfo);
          lVar27 = unaff_x19[0x75];
          if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
        }
        lVar33 = *(long *)(lVar27 + 0x58);
        if (lVar33 == 0) goto thunk_FUN_02e3ccc4;
        uVar15 = *(uint *)((long)unaff_x19 + 0x4cc);
        if (*(uint *)(lVar33 + 0x18) <= uVar15) goto LAB_0603fce4;
        lVar33 = lVar33 + 0x20;
        lVar37 = lVar33 + (long)(int)uVar15 * 0x14;
        *(int *)(lVar37 + 8) = (int)unaff_x19[0x9a];
        fVar49 = *(float *)(lVar37 + 0x10);
        param_2 = ZEXT416((uint)fVar49);
        fVar57 = *(float *)(unaff_x19 + 0x9c);
        if (fVar49 <= *(float *)(unaff_x19 + 0x9c)) {
          fVar57 = fVar49;
        }
        *(float *)(lVar37 + 0x10) = fVar57;
        if (*(char *)((long)unaff_x19 + 0x37c) != '\0') {
          *(undefined1 *)((long)unaff_x19 + 0x37c) = 0;
          *(undefined4 *)(lVar33 + (long)(int)uVar15 * 0x14) =
               *(undefined4 *)((long)unaff_x19 + 0x4ac);
        }
        fVar49 = in_stack_000001a8[10];
        *(float *)(lVar33 + (long)(int)uVar15 * 0x14 + 4) = fVar49;
      }
      unaff_w27 = in_stack_0000133c;
      if (((0xb < in_stack_0000133c) || ((1 << (ulong)(in_stack_0000133c & 0x1f) & 0xc08U) == 0)) &&
         ((1 < in_stack_0000133c - 0x2028 &&
          ((in_stack_0000133c != 0x2d || fVar61 != fVar65 && (fVar49 != fStack0000000000000050))))))
      goto LAB_0603c448;
      if (0.0 < *(float *)((long)unaff_x19 + 0x4f4)) {
        fVar57 = *(float *)((long)unaff_x19 + 0x4e4);
        fVar49 = *(float *)((long)unaff_x19 + 0x4ec);
        if (*(int *)(*(long *)PTR_DAT_06a2ef88 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        fVar57 = fVar57 - fVar49;
        if (((fStack0000000000000054 < ABS(fVar57)) && (*(char *)((long)unaff_x19 + 0x2f4) == '\0'))
           && (*(char *)((long)unaff_x19 + 0x37c) == '\0')) {
          FUN_0608cd04();
          puVar11 = System_Collections_Generic_List<AudioListener>_TypeInfo;
          lVar27 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
          *(float *)(unaff_x19 + 0x9c) = *(float *)(unaff_x19 + 0x9c) - fVar57;
          *(float *)((long)unaff_x19 + 0x4f4) = fVar57 + *(float *)((long)unaff_x19 + 0x4f4);
          if (*(int *)(lVar27 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
            lVar27 = *(long *)puVar11;
          }
          lVar33 = *(long *)(lVar27 + 0xb8);
          if (*(int *)(lVar33 + 0x838) == (int)unaff_x19[0x98]) {
            if (*(int *)(lVar27 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
              lVar33 = *(long *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo +
                                0xb8);
            }
            UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableBase_<PlaySequence>d__16<float>__System_Collections_IEnumerator_Reset
                      (&stack0x00000200,lVar33 + 0x1338,
                       *(undefined8 *)
                        System_Collections_Generic_List<AndroidAssetPackState>_TypeInfo);
            puVar11 = System_Collections_Generic_List<AudioListener>_TypeInfo;
            lVar27 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
            memcpy((void *)(*(long *)(lVar27 + 0xb8) + 0x810),&stack0x00000200,0x3b8);
            thunk_FUN_02ee2be8(*(long *)(lVar27 + 0xb8) + 0x8a8,0);
            lVar27 = *(long *)(*(long *)puVar11 + 0xb8);
            *(float *)(lVar27 + 0x848) = fVar57 + *(float *)(lVar27 + 0x848);
            *(float *)(lVar27 + 0x894) = fVar57 + *(float *)(lVar27 + 0x894);
            memcpy(&stack0x00001340,(void *)(lVar27 + 0x810),0x3b8);
            FUN_046b8738(lVar27 + 0x1338,&stack0x00001340,
                         *(undefined8 *)System_Collections_Generic_List<ApplicationInvite>_TypeInfo)
            ;
          }
        }
      }
      fVar66 = *(float *)((long)unaff_x19 + 0x4f4);
      *(undefined1 *)((long)unaff_x19 + 0x37c) = 0;
      fVar49 = *(float *)(unaff_x19 + 0x9d) - fVar66;
      fVar57 = *(float *)(unaff_x19 + 0x9c);
      if (fVar49 <= *(float *)(unaff_x19 + 0x9c)) {
        fVar57 = fVar49;
      }
      fVar51 = *(float *)((long)unaff_x19 + 0x4e4);
      *(float *)(unaff_x19 + 0x9c) = fVar57;
      if (in_stack_00001334 == '\0') {
        in_stack_00001338 = fVar57;
      }
      if ((*(char *)((long)unaff_x19 + 0x374) != '\0') &&
         (((int)unaff_x19[0x6d] <= *(int *)((long)unaff_x19 + 0x4ac) ||
          ((int)unaff_x19[0x6e] <= (int)unaff_x19[0x98])))) {
        in_stack_00001334 = '\x01';
      }
      lVar27 = unaff_x19[0x75];
      if ((lVar27 == 0) || (lVar33 = *(long *)(lVar27 + 0x50), lVar33 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar33 + 0x18) <= *(uint *)(unaff_x19 + 0x98)) goto LAB_0603fce4;
      lVar33 = lVar33 + (long)(int)*(uint *)(unaff_x19 + 0x98) * 0x60;
      iVar19 = (int)unaff_x19[0x96];
      *(int *)(lVar33 + 0x38) = iVar19;
      iVar17 = iVar19;
      if (iVar19 <= *(int *)((long)unaff_x19 + 0x4b4)) {
        iVar17 = *(int *)((long)unaff_x19 + 0x4b4);
      }
      *(int *)((long)unaff_x19 + 0x4b4) = iVar17;
      *(int *)(lVar33 + 0x3c) = iVar17;
      iVar40 = *(int *)((long)unaff_x19 + 0x4ac);
      *(int *)(unaff_x19 + 0x97) = iVar40;
      *(int *)(lVar33 + 0x40) = iVar40;
      iVar18 = *(int *)((long)unaff_x19 + 0x4b4);
      if (iVar17 <= *(int *)((long)unaff_x19 + 0x4bc)) {
        iVar18 = *(int *)((long)unaff_x19 + 0x4bc);
      }
      *(int *)((long)unaff_x19 + 0x4bc) = iVar18;
      *(int *)(lVar33 + 0x44) = iVar18;
      *(int *)(lVar33 + 0x24) = (iVar40 - iVar19) + 1;
      iVar17 = *(int *)((long)unaff_x19 + 0x4c4);
      *(int *)(lVar33 + 0x28) = iVar17;
      *(int *)(lVar33 + 0x30) = (iVar18 - (iVar19 + iVar17)) + 1;
      lVar27 = *(long *)(lVar27 + 0x38);
      if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
      if ((uint)*(float *)(lVar27 + 0x18) <= (uint)in_stack_000001a8[0xc]) goto LAB_0603fce4;
      *(undefined4 *)(lVar33 + 0x70) =
           *(undefined4 *)
            (lVar27 + (long)(int)in_stack_000001a8[0xc] * (long)(int)unaff_w21 + 0x114);
      *(float *)(lVar33 + 0x74) = fVar49;
      lVar27 = unaff_x19[0x75];
      if ((lVar27 == 0) || (lVar33 = *(long *)(lVar27 + 0x50), lVar33 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar33 + 0x18) <= *(uint *)(unaff_x19 + 0x98)) goto LAB_0603fce4;
      lVar27 = *(long *)(lVar27 + 0x38);
      if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4bc)) goto LAB_0603fce4;
      fVar51 = fVar51 - fVar66;
      param_2 = ZEXT416((uint)fVar51);
      lVar33 = lVar33 + 0x20 + (long)(int)*(uint *)(unaff_x19 + 0x98) * 0x60;
      *(undefined4 *)(lVar33 + 0x58) =
           *(undefined4 *)
            (lVar27 + (long)(int)*(uint *)((long)unaff_x19 + 0x4bc) * (long)(int)unaff_w21 + 0x120);
      *(float *)(lVar33 + 0x5c) = fVar51;
      lVar27 = unaff_x19[0x75];
      if ((lVar27 == 0) || (lVar33 = *(long *)(lVar27 + 0x50), lVar33 == 0))
      goto thunk_FUN_02e3ccc4;
      uVar15 = *(uint *)(unaff_x19 + 0x98);
      if (*(uint *)(lVar33 + 0x18) <= uVar15) goto LAB_0603fce4;
      lVar33 = lVar33 + 0x20;
      lVar37 = lVar33 + (long)(int)uVar15 * 0x60;
      *(float *)(lVar37 + 0x28) = *(float *)(lVar37 + 0x58) - unaff_s12 * unaff_s13;
      *(float *)(lVar37 + 0x40) = in_stack_00000140;
      if (*(int *)(lVar37 + 4) == 1) {
        *(int *)(lVar33 + (long)(int)uVar15 * 0x60 + 0x4c) = (int)unaff_x19[0x54];
      }
      if ((unaff_x19[0x20] == 0) || (lVar37 = *(long *)(lVar27 + 0x38), lVar37 == 0))
      goto thunk_FUN_02e3ccc4;
      uVar16 = *(uint *)((long)unaff_x19 + 0x4bc);
      if (*(uint *)(lVar37 + 0x18) <= uVar16) goto LAB_0603fce4;
      if ((*(char *)(lVar37 + 0x20 + (long)(int)uVar16 * (long)(int)unaff_w21 + 0x170) == '\0') &&
         (uVar16 = *(uint *)(unaff_x19 + 0x97), *(uint *)(lVar37 + 0x18) <= uVar16))
      goto LAB_0603fce4;
      fVar48 = *(float *)(unaff_x19 + 0x5c) *
               (unaff_s15 - *(float *)((long)unaff_x19 + 0x304)) *
               (*(float *)((long)unaff_x19 + 0x2d4) +
               in_stack_00000100._4_4_ * (fVar50 + fVar48 + *(float *)(unaff_x19[0x20] + 0x1a4)));
      fVar57 = -fVar48;
      if ((char)unaff_x19[0x1e] != '\0') {
        fVar57 = fVar48;
      }
      lVar33 = lVar33 + (long)(int)uVar15 * 0x60;
      *(float *)(lVar33 + 0x3c) =
           *(float *)(lVar37 + 0x20 + (long)(int)uVar16 * (long)(int)unaff_w21 + 0x11c) + fVar57;
      param_3 = 0.0 - *(float *)((long)unaff_x19 + 0x4f4);
      *(float *)(lVar33 + 0x34) = param_3;
      *(float *)(lVar33 + 0x38) = fVar49;
      *(float *)(lVar33 + 0x2c) = fStack000000000000005c + (fVar51 - fVar49);
      *(float *)(lVar33 + 0x30) = fVar51;
      plVar28 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
      if ((((in_stack_0000133c & 0xfffffffe) == 10) ||
          (fVar61 == fVar65 && in_stack_0000133c == 0x2d)) || (in_stack_0000133c - 0x2028 < 2)) {
        if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) == 0)
        {
          thunk_FUN_02e9a04c();
        }
        FUN_0608c948();
        lVar27 = unaff_x19[0x98];
        iVar19 = *(int *)((long)unaff_x19 + 0x4ac);
        in_stack_000001a8[0x10] = 0.0;
        in_stack_000001a8[0x11] = 0.0;
        iVar17 = (int)lVar27 + 1;
        lVar27 = unaff_x19[0x75];
        *(int *)(unaff_x19 + 0x98) = iVar17;
        *(int *)(unaff_x19 + 0x96) = iVar19 + 1;
        if ((lVar27 == 0) || (*(long *)(lVar27 + 0x50) == 0)) goto thunk_FUN_02e3ccc4;
        if (*(int *)(*(long *)(lVar27 + 0x50) + 0x18) <= iVar17) {
          FUN_0608cec0();
          lVar27 = unaff_x19[0x75];
          if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
        }
        lVar27 = *(long *)(lVar27 + 0x38);
        if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
        if ((uint)*(float *)(lVar27 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
        fVar65 = *(float *)(lVar27 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21 + 0x14c
                           );
        if (*(float *)(unaff_x19 + 0x5e) == DAT_01317908) {
          if ((in_stack_0000133c == 0x2029) || (fVar57 = 0.0, in_stack_0000133c == 10)) {
            fVar57 = *(float *)((long)unaff_x19 + 0x2fc);
          }
          uVar25 = 0;
          fVar57 = fVar65 + (0.0 - *(float *)(unaff_x19 + 0x9d)) +
                   in_stack_00000048._4_4_ *
                   (fStack0000000000000044 + *(float *)((long)unaff_x19 + 0x2ec)) +
                   in_stack_00000100._4_4_ * (*(float *)(unaff_x19 + 0x5d) + fVar57) +
                   *(float *)((long)unaff_x19 + 0x4f4);
        }
        else {
          if ((in_stack_0000133c == 0x2029) || (fVar57 = 0.0, in_stack_0000133c == 10)) {
            fVar57 = *(float *)((long)unaff_x19 + 0x2fc);
          }
          uVar25 = 1;
          fVar57 = *(float *)((long)unaff_x19 + 0x4f4) +
                   *(float *)(unaff_x19 + 0x5e) +
                   in_stack_00000100._4_4_ * (*(float *)(unaff_x19 + 0x5d) + fVar57);
        }
        lVar27 = *plVar28;
        *(float *)((long)unaff_x19 + 0x4f4) = fVar57;
        *(undefined1 *)((long)unaff_x19 + 0x2f4) = uVar25;
        if (*(int *)(lVar27 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
          lVar27 = *plVar28;
        }
        fVar57 = *(float *)(unaff_x19 + 0x89);
        uVar20 = *(undefined8 *)(*(long *)(lVar27 + 0xb8) + 0x1730);
        *(float *)((long)unaff_x19 + 0x4ec) = fVar65;
        param_3 = *(float *)((long)unaff_x19 + 0x44c);
        param_2._0_8_ = NEON_rev64(uVar20,4);
        param_2._8_8_ = 0;
        *(ulong *)(in_stack_000001a8 + 0x18) = param_2._0_8_;
        *(float *)(unaff_x19 + 0xcc) = fVar57 + 0.0 + param_3;
        FUN_0608c948();
        FUN_0608c948();
        *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
        fStack000000000000006c = 1.4013e-45;
        uStack0000000000000060 = 1;
        goto LAB_06038edc;
      }
      if (in_stack_0000133c == 3) {
        if (unaff_x19[0x92] == 0) goto thunk_FUN_02e3ccc4;
        in_stack_00001308 = (uint)*(undefined8 *)(unaff_x19[0x92] + 0x18);
        unaff_w27 = 3;
      }
LAB_0603c448:
      lVar27 = *(long *)(lVar27 + 0x38);
      if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
      in_w8 = in_stack_000001a8[10];
      in_w9 = *(float *)(lVar27 + 0x18);
      if ((uint)in_w9 <= (uint)in_w8) goto LAB_0603fce4;
      in_x10 = lVar27 + 0x20;
      if (*(char *)(in_x10 + (long)(int)in_w8 * (long)(int)unaff_w21 + 0x170) != '\0') {
        lVar27 = in_x10 + (long)(int)in_w8 * (long)(int)unaff_w21;
        auVar55 = *(undefined1 (*) [16])(in_stack_000001a8 + 0x1d);
        auVar59 = NEON_ext(auVar55,auVar55,8,1);
        uVar20 = *(undefined8 *)(lVar27 + 0xf4);
        param_3 = (float)uVar20;
        uVar21 = *(undefined8 *)(lVar27 + 0x100);
        fVar65 = (float)uVar21;
        fVar57 = (float)((ulong)uVar21 >> 0x20);
        param_2._0_4_ = (float)-(uint)(auVar55._0_4_ < param_3);
        param_2._4_4_ = (float)-(uint)(auVar55._4_4_ < (float)((ulong)uVar20 >> 0x20));
        param_2._8_4_ = -(uint)(fVar65 < auVar59._0_4_);
        param_2._12_4_ = -(uint)(fVar57 < auVar59._4_4_);
        auVar6._8_4_ = fVar65;
        auVar6._0_8_ = uVar20;
        auVar6._12_4_ = fVar57;
        auVar55 = auVar55 ^ (auVar55 ^ auVar6) & ~param_2;
        *(long *)(in_stack_000001a8 + 0x1f) = auVar55._8_8_;
        *(long *)(in_stack_000001a8 + 0x1d) = auVar55._0_8_;
      }
    } while ((((int)unaff_x19[0x61] == 3) || ((int)unaff_x19[0x61] == 0)) &&
            ((6 < *(uint *)((long)unaff_x19 + 0x314) ||
             ((1 << (ulong)(*(uint *)((long)unaff_x19 + 0x314) & 0x1f) & 0x4aU) == 0))));
    fVar65 = (float)((int)in_w8 + 1);
    unaff_w25 = unaff_w22;
    if ((int)fVar65 < (int)fStack0000000000000064) {
      if ((uint)in_w9 <= (uint)fVar65) goto LAB_0603fce4;
      unaff_w28 = (uint)*(ushort *)(in_x10 + (long)(int)fVar65 * (long)(int)unaff_w21 + 4);
    }
    else {
      unaff_w28 = 0;
    }
  } while( true );
LAB_0603d6e0:
  if (*(uint *)(lVar27 + 0x18) <= uVar15) goto LAB_0603fce4;
  uVar42 = (ulong)uVar15;
  piVar41 = (int *)(lVar33 + uVar42 * 0x178);
  lVar37 = *(long *)(piVar41 + 8);
  uVar47 = *(ushort *)(piVar41 + 1);
  if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar46 = (uint)uVar47;
  bVar13 = FUN_0557df5c(uVar47,0);
  if (*(uint *)(lVar27 + 0x18) <= uVar15) goto LAB_0603fce4;
  if ((unaff_x19[0x75] == 0) || (lVar23 = *(long *)(unaff_x19[0x75] + 0x50), lVar23 == 0))
  goto thunk_FUN_02e3ccc4;
  uVar4 = *(uint *)(lVar33 + uVar42 * 0x178 + 0x3c);
  if (*(uint *)(lVar23 + 0x18) <= uVar4) goto LAB_0603fce4;
  lVar23 = lVar23 + (long)(int)uVar4 * 0x60;
  uVar2 = *(uint *)(lVar23 + 0x40);
  uVar3 = *(uint *)(lVar23 + 0x44);
  fVar50 = *(float *)(lVar23 + 0x58);
  fVar65 = *(float *)(lVar23 + 0x5c);
  uVar43 = *(uint *)(lVar23 + 0x6c);
  fVar51 = *(float *)(lVar23 + 0x60);
  fVar68 = *(float *)(lVar23 + 100);
  iVar19 = *(int *)(lVar23 + 0x20);
  fVar53 = *(float *)(lVar23 + 0x70);
  fVar67 = *(float *)(lVar23 + 0x74);
  iVar18 = *(int *)(lVar23 + 0x28);
  fVar49 = *(float *)(lVar23 + 0x78);
  fVar48 = *(float *)(lVar23 + 0x7c);
  iVar40 = *(int *)(lVar23 + 0x30);
  fVar66 = *(float *)(lVar23 + 0x50);
  if ((int)uVar43 < 9) {
    if ((int)uVar43 < 3) {
      if (uVar43 == 1) {
        if ((char)unaff_x19[0x1e] == '\0') {
          fStack0000000000000120 = fVar68 + 0.0;
        }
        else {
          fStack0000000000000120 = 0.0 - fVar65;
        }
        in_stack_00000100._4_4_ = 0.0;
        fStack0000000000000124 = 0.0;
      }
      else if (uVar43 == 2) {
        fStack0000000000000120 = (fVar68 + fVar51 * 0.5) - fVar65 * 0.5;
LAB_0603d9dc:
        fStack0000000000000124 = 0.0;
        in_stack_00000100._4_4_ = 0.0;
      }
      else {
LAB_0603d8ac:
        uVar47 = NEON_umaxv(CONCAT26(-(ushort)(uVar47 == (ushort)((ulong)_UNK_01318f18 >> 0x30)),
                                     CONCAT24(-(ushort)(uVar47 ==
                                                       (ushort)((ulong)_UNK_01318f18 >> 0x20)),
                                              CONCAT22(-(ushort)(uVar47 ==
                                                                (ushort)((ulong)_UNK_01318f18 >>
                                                                        0x10)),
                                                       -(ushort)(uVar47 == (ushort)_UNK_01318f18))))
                            ,2);
        if (((((uVar47 & 1) == 0) && (uVar46 != 3)) && (uVar43 == 8)) && ((int)uVar15 <= (int)uVar3)
           ) goto LAB_0603d8ec;
      }
    }
    else if (uVar43 != 3) {
      if (uVar43 != 4) goto LAB_0603d8ac;
      in_stack_00000100._4_4_ = 0.0;
      if ((char)unaff_x19[0x1e] != '\0') {
        fVar65 = 0.0;
      }
      fStack0000000000000120 = (fVar51 + fVar68) - fVar65;
      fStack0000000000000124 = 0.0;
    }
  }
  else if (uVar43 == 0x10) {
    if ((int)uVar15 <= (int)uVar3) {
      if (uVar46 < 0xad) {
        if ((uVar46 != 3) && (uVar46 != 10)) {
LAB_0603d8ec:
          if (*(uint *)(lVar27 + 0x18) <= uVar2) goto LAB_0603fce4;
          uVar5 = *(undefined2 *)(lVar33 + (long)(int)uVar2 * 0x178 + 4);
          if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          uVar22 = FUN_05581208(uVar5,0);
          if ((uVar22 & 1) == 0) {
            bVar1 = (int)uVar4 < (int)unaff_x19[0x98];
          }
          else {
            bVar1 = false;
          }
          if ((!bVar1 && (uVar43 >> 4 & 1) == 0) && (fVar65 <= fVar51)) {
            fStack0000000000000120 = -0.0;
            if ((char)unaff_x19[0x1e] != '\0') {
              fStack0000000000000120 = fVar51;
            }
            fStack0000000000000120 = fVar68 + fStack0000000000000120;
            goto LAB_0603d9dc;
          }
          if (((uVar15 == 0) || (uVar4 != uVar32)) || (uVar15 == *(uint *)((long)unaff_x19 + 0x364))
             ) {
            fStack0000000000000120 = -0.0;
            if ((char)unaff_x19[0x1e] != '\0') {
              fStack0000000000000120 = fVar51;
            }
            if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            fStack0000000000000120 = fVar68 + fStack0000000000000120;
            in_stack_00000048._4_4_ = (float)FUN_055814cc(uVar46,0);
            fStack0000000000000124 = 0.0;
            in_stack_00000100._4_4_ = 0.0;
          }
          else {
            cVar26 = (char)unaff_x19[0x1e];
            iVar40 = (iVar40 - iVar19) - ((uint)in_stack_00000048._4_4_ & 1);
            fVar68 = -fVar65;
            if (cVar26 != '\0') {
              fVar68 = fVar65;
            }
            if (iVar40 < 1) {
              fVar65 = 1.0;
              iVar40 = 1;
            }
            else {
              fVar65 = *(float *)(unaff_x19 + 0x62);
            }
            if (uVar46 == 9) {
LAB_0603f69c:
              fVar65 = ((fVar51 + fVar68) * (1.0 - fVar65)) / (float)iVar40;
              if (cVar26 == '\0') {
                fStack0000000000000120 = fStack0000000000000120 + fVar65;
                fStack0000000000000124 = fStack0000000000000124 + 0.0;
                in_stack_00000100._4_4_ = in_stack_00000100._4_4_ + 0.0;
              }
              else {
                fStack0000000000000120 = fStack0000000000000120 - fVar65;
              }
            }
            else {
              if (uVar46 != 0xa0) {
                if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_02e9a04c();
                }
                uVar22 = FUN_055814cc(uVar46,0);
                cVar26 = (char)unaff_x19[0x1e];
                if ((uVar22 & 1) != 0) goto LAB_0603f69c;
              }
              fVar65 = ((fVar51 + fVar68) * fVar65) /
                       (float)(int)((iVar19 - (((uint)in_stack_00000048._4_4_ ^ 0xffffffff) & 1)) +
                                   iVar18);
              if (cVar26 == '\0') {
                fStack0000000000000120 = fStack0000000000000120 + fVar65;
                fStack0000000000000124 = fStack0000000000000124 + 0.0;
                in_stack_00000100._4_4_ = in_stack_00000100._4_4_ + 0.0;
              }
              else {
                fStack0000000000000120 = fStack0000000000000120 - fVar65;
              }
            }
          }
        }
      }
      else if (((uVar46 != 0xad) && (uVar46 != 0x200b)) && (uVar46 != 0x2060)) goto LAB_0603d8ec;
    }
  }
  else if (uVar43 == 0x20) {
    fStack0000000000000120 = (fVar68 + fVar51 * 0.5) - (fVar53 + fVar49) * 0.5;
    in_stack_00000100._4_4_ = 0.0;
    fStack0000000000000124 = 0.0;
  }
  uVar43 = (uint)*(undefined8 *)(lVar27 + 0x18);
  if (uVar43 <= uVar15) goto LAB_0603fce4;
  lVar23 = lVar33 + uVar42 * 0x178;
  fVar65 = fStack00000000000000c0 + fStack0000000000000120;
  fVar51 = fStack00000000000001b0 + fStack0000000000000124;
  fVar68 = in_stack_000000b8._4_4_ + in_stack_00000100._4_4_;
  if (*(char *)(lVar23 + 0x170) == '\0') goto LAB_0603e204;
  iVar19 = *piVar41;
  if (iVar19 == 0) {
    fVar61 = fmodf(*(float *)((long)unaff_x19 + 0x354) * (float)(int)uVar4,1.0);
    iVar18 = *(int *)((long)unaff_x19 + 0x34c);
    if (iVar18 < 2) {
      if (iVar18 == 0) {
        lVar35 = lVar33 + uVar42 * 0x178;
        *(undefined4 *)(lVar35 + 100) = 0;
        *(undefined4 *)(lVar35 + 0x8c) = 0;
        *(undefined4 *)(lVar35 + 0xb4) = 0x3f800000;
        *(undefined4 *)(lVar35 + 0xdc) = 0x3f800000;
      }
      else if (iVar18 == 1) {
        lVar35 = lVar33 + uVar42 * 0x178;
        fVar48 = *(float *)(lVar35 + 0x48);
        pfVar29 = (float *)(lVar35 + 100);
        if (*(int *)((long)unaff_x19 + 0x29c) == 0x208) {
          lVar35 = lVar33 + uVar42 * 0x178;
          fVar49 = *(float *)(lVar35 + 0x70);
          *pfVar29 = fVar61 + ((fStack0000000000000120 + fVar48) - *(float *)(unaff_x19 + 0x9f)) /
                              (*(float *)(unaff_x19 + 0xa0) - *(float *)(unaff_x19 + 0x9f));
          *(float *)(lVar35 + 0x8c) =
               fVar61 + ((fStack0000000000000120 + fVar49) - *(float *)(unaff_x19 + 0x9f)) /
                        (*(float *)(unaff_x19 + 0xa0) - *(float *)(unaff_x19 + 0x9f));
          *(float *)(lVar35 + 0xb4) =
               fVar61 + ((fStack0000000000000120 + *(float *)(lVar35 + 0x98)) -
                        *(float *)(unaff_x19 + 0x9f)) /
                        (*(float *)(unaff_x19 + 0xa0) - *(float *)(unaff_x19 + 0x9f));
          *(float *)(lVar35 + 0xdc) =
               fVar61 + ((fStack0000000000000120 + *(float *)(lVar35 + 0xc0)) -
                        *(float *)(unaff_x19 + 0x9f)) /
                        (*(float *)(unaff_x19 + 0xa0) - *(float *)(unaff_x19 + 0x9f));
        }
        else {
          lVar35 = lVar33 + uVar42 * 0x178;
          fVar49 = fVar49 - fVar53;
          fVar67 = *(float *)(lVar35 + 0x70);
          fVar64 = *(float *)(lVar35 + 0x98);
          fVar63 = *(float *)(lVar35 + 0xc0);
          *pfVar29 = fVar61 + (fVar48 - fVar53) / fVar49;
          *(float *)(lVar35 + 0x8c) = fVar61 + (fVar67 - fVar53) / fVar49;
          *(float *)(lVar35 + 0xb4) = fVar61 + (fVar64 - fVar53) / fVar49;
          *(float *)(lVar35 + 0xdc) = fVar61 + (fVar63 - fVar53) / fVar49;
        }
      }
    }
    else if (iVar18 == 2) {
      lVar35 = lVar33 + uVar42 * 0x178;
      *(float *)(lVar35 + 100) =
           fVar61 + ((fStack0000000000000120 + *(float *)(lVar35 + 0x48)) -
                    *(float *)(unaff_x19 + 0x9f)) /
                    (*(float *)(unaff_x19 + 0xa0) - *(float *)(unaff_x19 + 0x9f));
      *(float *)(lVar35 + 0x8c) =
           fVar61 + ((fStack0000000000000120 + *(float *)(lVar35 + 0x70)) -
                    *(float *)(unaff_x19 + 0x9f)) /
                    (*(float *)(unaff_x19 + 0xa0) - *(float *)(unaff_x19 + 0x9f));
      *(float *)(lVar35 + 0xb4) =
           fVar61 + ((fStack0000000000000120 + *(float *)(lVar35 + 0x98)) -
                    *(float *)(unaff_x19 + 0x9f)) /
                    (*(float *)(unaff_x19 + 0xa0) - *(float *)(unaff_x19 + 0x9f));
      *(float *)(lVar35 + 0xdc) =
           fVar61 + ((fStack0000000000000120 + *(float *)(lVar35 + 0xc0)) -
                    *(float *)(unaff_x19 + 0x9f)) /
                    (*(float *)(unaff_x19 + 0xa0) - *(float *)(unaff_x19 + 0x9f));
    }
    else if (iVar18 == 3) {
      iVar18 = (int)unaff_x19[0x6a];
      if (iVar18 < 2) {
        if (iVar18 == 0) {
          lVar35 = lVar33 + uVar42 * 0x178;
          *(undefined4 *)(lVar35 + 0x68) = 0;
          *(undefined4 *)(lVar35 + 0x90) = 0x3f800000;
          *(undefined4 *)(lVar35 + 0xb8) = 0;
          *(undefined4 *)(lVar35 + 0xe0) = 0x3f800000;
        }
        else if (iVar18 == 1) {
          lVar35 = lVar33 + uVar42 * 0x178;
          fVar48 = fVar48 - fVar67;
          fVar49 = (*(float *)(lVar35 + 0x74) - fVar67) / fVar48;
          fVar48 = fVar61 + (*(float *)(lVar35 + 0x4c) - fVar67) / fVar48;
          *(float *)(lVar35 + 0x68) = fVar48;
          *(float *)(lVar35 + 0xb8) = fVar48;
          goto LAB_0603ddfc;
        }
      }
      else if (iVar18 == 2) {
        lVar35 = lVar33 + uVar42 * 0x178;
        fVar48 = fVar61 + (*(float *)(lVar35 + 0x4c) - *(float *)((long)unaff_x19 + 0x4fc)) /
                          (*(float *)((long)unaff_x19 + 0x504) - *(float *)((long)unaff_x19 + 0x4fc)
                          );
        *(float *)(lVar35 + 0x68) = fVar48;
        fVar49 = *(float *)((long)unaff_x19 + 0x4fc);
        fVar67 = *(float *)((long)unaff_x19 + 0x504);
        *(float *)(lVar35 + 0xb8) = fVar48;
        fVar49 = (*(float *)(lVar35 + 0x74) - fVar49) / (fVar67 - fVar49);
LAB_0603ddfc:
        *(float *)(lVar35 + 0x90) = fVar61 + fVar49;
        *(float *)(lVar35 + 0xe0) = fVar61 + fVar49;
      }
      else if (iVar18 == 3) {
        if (*(int *)(*(long *)PTR_DAT_06a2ed98 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        FUN_062244a4(*(undefined8 *)System_Collections_Generic_List<BaseVideoBoardScreen>_TypeInfo,0
                    );
        uVar43 = (uint)*(undefined8 *)(lVar27 + 0x18);
      }
      if (uVar43 <= uVar15) goto LAB_0603fce4;
      lVar35 = lVar33 + uVar42 * 0x178;
      fVar67 = *(float *)(lVar35 + 0x138);
      fVar49 = (1.0 - (*(float *)(lVar35 + 0x68) + *(float *)(lVar35 + 0x90)) * fVar67) * 0.5;
      fVar48 = fVar61 + *(float *)(lVar35 + 0x68) * fVar67 + fVar49;
      fVar61 = fVar61 + fVar49 + *(float *)(lVar35 + 0x90) * fVar67;
      *(float *)(lVar35 + 100) = fVar48;
      *(float *)(lVar35 + 0x8c) = fVar48;
      *(float *)(lVar35 + 0xb4) = fVar61;
      *(float *)(lVar35 + 0xdc) = fVar61;
    }
    iVar18 = (int)unaff_x19[0x6a];
    if (iVar18 < 2) {
      if (iVar18 == 0) {
        if (uVar43 <= uVar15) goto LAB_0603fce4;
        lVar35 = lVar33 + uVar42 * 0x178;
        *(undefined4 *)(lVar35 + 0x68) = 0;
        *(undefined4 *)(lVar35 + 0x90) = 0x3f800000;
        *(undefined4 *)(lVar35 + 0xb8) = 0x3f800000;
        *(undefined4 *)(lVar35 + 0xe0) = 0;
      }
      else if (iVar18 == 1) {
        if (uVar15 < uVar43) {
          lVar35 = lVar33 + uVar42 * 0x178;
          fVar66 = fVar66 - fVar50;
          fVar61 = (*(float *)(lVar35 + 0x4c) - fVar50) / fVar66;
          fVar66 = (*(float *)(lVar35 + 0x74) - fVar50) / fVar66;
          *(float *)(lVar35 + 0x68) = fVar61;
          goto LAB_0603df74;
        }
        goto LAB_0603fce4;
      }
    }
    else if (iVar18 == 2) {
      if (uVar43 <= uVar15) goto LAB_0603fce4;
      lVar35 = lVar33 + uVar42 * 0x178;
      fVar61 = (*(float *)(lVar35 + 0x4c) - *(float *)((long)unaff_x19 + 0x4fc)) /
               (*(float *)((long)unaff_x19 + 0x504) - *(float *)((long)unaff_x19 + 0x4fc));
      *(float *)(lVar35 + 0x68) = fVar61;
      fVar66 = (*(float *)(lVar35 + 0x74) - *(float *)((long)unaff_x19 + 0x4fc)) /
               (*(float *)((long)unaff_x19 + 0x504) - *(float *)((long)unaff_x19 + 0x4fc));
LAB_0603df74:
      *(float *)(lVar35 + 0x90) = fVar66;
      *(float *)(lVar35 + 0xb8) = fVar66;
      *(float *)(lVar35 + 0xe0) = fVar61;
    }
    else if (iVar18 == 3) {
      if (uVar43 <= uVar15) goto LAB_0603fce4;
      lVar35 = lVar33 + uVar42 * 0x178;
      fVar49 = *(float *)(lVar35 + 0x138);
      fVar48 = (1.0 - (*(float *)(lVar35 + 100) + *(float *)(lVar35 + 0xb4)) / fVar49) * 0.5;
      fVar61 = *(float *)(lVar35 + 100) / fVar49 + fVar48;
      fVar48 = fVar48 + *(float *)(lVar35 + 0xb4) / fVar49;
      *(float *)(lVar35 + 0x68) = fVar61;
      *(float *)(lVar35 + 0xe0) = fVar61;
      *(float *)(lVar35 + 0x90) = fVar48;
      *(float *)(lVar35 + 0xb8) = fVar48;
    }
    if (uVar43 <= uVar15) goto LAB_0603fce4;
    lVar35 = lVar33 + uVar42 * 0x178;
    fVar61 = *(float *)(unaff_x19 + 0x5c) *
             ABS(auVar59._0_4_) * *(float *)(lVar35 + 0x13c) *
             (1.0 - *(float *)((long)unaff_x19 + 0x304));
    if ((*(char *)(lVar35 + 0x34) == '\0') &&
       ((*(byte *)(lVar33 + uVar42 * 0x178 + 0x16c) & 1) != 0)) {
      fVar61 = -fVar61;
    }
    lVar35 = lVar33 + uVar42 * 0x178;
    *(float *)(lVar35 + 0x60) = fVar61;
    *(float *)(lVar35 + 0x88) = fVar61;
    *(float *)(lVar35 + 0xb0) = fVar61;
    *(float *)(lVar35 + 0xd8) = fVar61;
  }
  if (((int)uVar15 < (int)unaff_x19[0x6d]) &&
     ((int)fStack00000000000000ec < *(int *)((long)unaff_x19 + 0x36c))) {
    if (((int)unaff_x19[0x6e] <= (int)uVar4) || (*(int *)((long)unaff_x19 + 0x314) == 5)) {
      if (((int)uVar4 < (int)unaff_x19[0x6e]) && (*(int *)((long)unaff_x19 + 0x314) == 5)) {
        if (uVar15 < uVar43) {
          if (*(uint *)(lVar33 + uVar42 * 0x178 + 0x40) == uStack0000000000000040) {
            lVar23 = lVar33 + uVar42 * 0x178;
            *(ulong *)(lVar23 + 0x48) =
                 CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar23 + 0x48) >> 0x20),
                          fVar65 + (float)*(undefined8 *)(lVar23 + 0x48));
            *(float *)(lVar23 + 0x50) = fVar68 + *(float *)(lVar23 + 0x50);
            *(ulong *)(lVar23 + 0x70) =
                 CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar23 + 0x70) >> 0x20),
                          fVar65 + (float)*(undefined8 *)(lVar23 + 0x70));
            *(float *)(lVar23 + 0x78) = fVar68 + *(float *)(lVar23 + 0x78);
            *(ulong *)(lVar23 + 0x98) =
                 CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar23 + 0x98) >> 0x20),
                          fVar65 + (float)*(undefined8 *)(lVar23 + 0x98));
            *(float *)(lVar23 + 0xa0) = fVar68 + *(float *)(lVar23 + 0xa0);
            *(ulong *)(lVar23 + 0xc0) =
                 CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar23 + 0xc0) >> 0x20),
                          fVar65 + (float)*(undefined8 *)(lVar23 + 0xc0));
            *(float *)(lVar23 + 200) = fVar68 + *(float *)(lVar23 + 200);
            goto LAB_0603e188;
          }
          goto LAB_0603e0c4;
        }
        goto LAB_0603fce4;
      }
      goto LAB_0603e0c4;
    }
    if (uVar43 <= uVar15) goto LAB_0603fce4;
    lVar23 = lVar33 + uVar42 * 0x178;
    *(ulong *)(lVar23 + 0x48) =
         CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar23 + 0x48) >> 0x20),
                  fVar65 + (float)*(undefined8 *)(lVar23 + 0x48));
    *(float *)(lVar23 + 0x50) = fVar68 + *(float *)(lVar23 + 0x50);
    *(ulong *)(lVar23 + 0x70) =
         CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar23 + 0x70) >> 0x20),
                  fVar65 + (float)*(undefined8 *)(lVar23 + 0x70));
    *(float *)(lVar23 + 0x78) = fVar68 + *(float *)(lVar23 + 0x78);
    *(ulong *)(lVar23 + 0x98) =
         CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar23 + 0x98) >> 0x20),
                  fVar65 + (float)*(undefined8 *)(lVar23 + 0x98));
    *(float *)(lVar23 + 0xa0) = fVar68 + *(float *)(lVar23 + 0xa0);
    *(ulong *)(lVar23 + 0xc0) =
         CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar23 + 0xc0) >> 0x20),
                  fVar65 + (float)*(undefined8 *)(lVar23 + 0xc0));
    *(float *)(lVar23 + 200) = fVar68 + *(float *)(lVar23 + 200);
  }
  else {
LAB_0603e0c4:
    if (uVar43 <= uVar15) goto LAB_0603fce4;
    if (DAT_06e84e3e == '\0') {
      FUN_02e3ca1c(PTR_DAT_06a2ef80);
      uVar43 = *(uint *)(lVar27 + 0x18);
      DAT_06e84e3e = '\x01';
    }
    puVar11 = PTR_DAT_06a2ef80;
    uVar52 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_06a2ef80 + 0xb8) + 1);
    *(undefined8 *)(lVar33 + uVar42 * 0x178 + 0x48) =
         **(undefined8 **)(*(long *)PTR_DAT_06a2ef80 + 0xb8);
    *(undefined4 *)(lVar33 + uVar42 * 0x178 + 0x50) = uVar52;
    if (uVar43 <= uVar15) goto LAB_0603fce4;
    lVar35 = lVar33 + uVar42 * 0x178;
    uVar52 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
    *(undefined8 *)(lVar35 + 0x70) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
    *(undefined4 *)(lVar35 + 0x78) = uVar52;
    uVar52 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
    *(undefined8 *)(lVar35 + 0x98) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
    *(undefined4 *)(lVar35 + 0xa0) = uVar52;
    uVar20 = **(undefined8 **)(*(long *)puVar11 + 0xb8);
    uVar52 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
    *(undefined1 *)(lVar23 + 0x170) = 0;
    *(undefined8 *)(lVar35 + 0xc0) = uVar20;
    *(undefined4 *)(lVar35 + 200) = uVar52;
  }
LAB_0603e188:
  iVar18 = FUN_06232690(0);
  *(bool *)((long)unaff_x19 + 0x174) = iVar18 == 1;
  if (iVar19 == 0) {
    puVar30 = (undefined8 *)(*unaff_x19 + 0x8d8);
  }
  else {
    if (iVar19 != 1) goto LAB_0603e204;
    puVar30 = (undefined8 *)(*unaff_x19 + 0x8f8);
  }
  (*(code *)*puVar30)();
LAB_0603e204:
  if ((unaff_x19[0x75] == 0) || (lVar23 = *(long *)(unaff_x19[0x75] + 0x38), lVar23 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar23 + 0x18) <= uVar15) goto LAB_0603fce4;
  lVar23 = lVar23 + uVar42 * 0x178;
  uVar20 = *(undefined8 *)(lVar23 + 0x114);
  *(float *)(lVar23 + 0x11c) = fVar68 + *(float *)(lVar23 + 0x11c);
  *(undefined8 *)(lVar23 + 0x114) =
       CONCAT44(fVar51 + (float)((ulong)uVar20 >> 0x20),fVar65 + (float)uVar20);
  if ((unaff_x19[0x75] == 0) || (lVar23 = *(long *)(unaff_x19[0x75] + 0x38), lVar23 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar23 + 0x18) <= uVar15) goto LAB_0603fce4;
  lVar23 = lVar23 + uVar42 * 0x178;
  *(ulong *)(lVar23 + 0x108) =
       CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar23 + 0x108) >> 0x20),
                fVar65 + (float)*(undefined8 *)(lVar23 + 0x108));
  *(float *)(lVar23 + 0x110) = fVar68 + *(float *)(lVar23 + 0x110);
  if ((unaff_x19[0x75] == 0) || (lVar23 = *(long *)(unaff_x19[0x75] + 0x38), lVar23 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar23 + 0x18) <= uVar15) goto LAB_0603fce4;
  lVar23 = lVar23 + uVar42 * 0x178;
  *(ulong *)(lVar23 + 0x120) =
       CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar23 + 0x120) >> 0x20),
                fVar65 + (float)*(undefined8 *)(lVar23 + 0x120));
  *(float *)(lVar23 + 0x128) = fVar68 + *(float *)(lVar23 + 0x128);
  if ((unaff_x19[0x75] == 0) || (lVar23 = *(long *)(unaff_x19[0x75] + 0x38), lVar23 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar23 + 0x18) <= uVar15) goto LAB_0603fce4;
  lVar23 = lVar23 + uVar42 * 0x178;
  uVar20 = *(undefined8 *)(lVar23 + 300);
  *(float *)(lVar23 + 0x134) = fVar68 + *(float *)(lVar23 + 0x134);
  *(undefined8 *)(lVar23 + 300) =
       CONCAT44(fVar51 + (float)((ulong)uVar20 >> 0x20),fVar65 + (float)uVar20);
  lVar23 = unaff_x19[0x75];
  if ((lVar23 == 0) || (lVar35 = *(long *)(lVar23 + 0x38), lVar35 == 0)) goto thunk_FUN_02e3ccc4;
  uVar43 = *(uint *)(lVar35 + 0x18);
  if (uVar43 <= uVar15) goto LAB_0603fce4;
  lVar38 = lVar35 + 0x20 + uVar42 * 0x178;
  uVar20 = *(undefined8 *)(lVar38 + 0x118);
  auVar55._0_8_ = CONCAT44(fVar65 + (float)((ulong)uVar20 >> 0x20),fVar65 + (float)uVar20);
  auVar55._8_4_ = fVar51 + (float)*(undefined8 *)(lVar38 + 0x120);
  auVar55._12_4_ = fVar51 + (float)((ulong)*(undefined8 *)(lVar38 + 0x120) >> 0x20);
  *(float *)(lVar38 + 0x128) = fVar51 + *(float *)(lVar38 + 0x128);
  *(long *)(lVar38 + 0x120) = auVar55._8_8_;
  *(undefined8 *)(lVar38 + 0x118) = auVar55._0_8_;
  if (uVar4 == uVar32) {
    uVar32 = (int)in_stack_000001a8[10] - 1;
    if (uVar15 == uVar32) goto LAB_0603e414;
  }
  else {
    lVar23 = *(long *)(lVar23 + 0x50);
    if (lVar23 == 0) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar23 + 0x18) <= uVar32) goto LAB_0603fce4;
    lVar38 = lVar23 + 0x20 + (long)(int)uVar32 * 0x60;
    fVar48 = fVar51 + *(float *)(lVar38 + 0x38);
    *(ulong *)(lVar38 + 0x30) =
         CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar38 + 0x30) >> 0x20),
                  fVar51 + (float)*(undefined8 *)(lVar38 + 0x30));
    *(float *)(lVar38 + 0x38) = fVar48;
    *(float *)(lVar38 + 0x3c) = fVar65 + *(float *)(lVar38 + 0x3c);
    if (uVar43 <= *(uint *)(lVar38 + 0x18)) goto LAB_0603fce4;
    lVar23 = lVar23 + 0x20 + (long)(int)uVar32 * 0x60;
    uVar52 = *(undefined4 *)(lVar35 + 0x20 + (long)(int)*(uint *)(lVar38 + 0x18) * 0x178 + 0xf4);
    *(float *)(lVar23 + 0x54) = fVar48;
    *(undefined4 *)(lVar23 + 0x50) = uVar52;
    lVar23 = unaff_x19[0x75];
    if ((lVar23 == 0) || (lVar35 = *(long *)(lVar23 + 0x50), lVar35 == 0)) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar35 + 0x18) <= uVar32) goto LAB_0603fce4;
    lVar23 = *(long *)(lVar23 + 0x38);
    if (lVar23 == 0) goto thunk_FUN_02e3ccc4;
    uVar43 = *(uint *)(lVar35 + 0x20 + (long)(int)uVar32 * 0x60 + 0x24);
    if (*(uint *)(lVar23 + 0x18) <= uVar43) goto LAB_0603fce4;
    lVar35 = lVar35 + 0x20 + (long)(int)uVar32 * 0x60;
    *(undefined4 *)(lVar35 + 0x58) = *(undefined4 *)(lVar23 + (long)(int)uVar43 * 0x178 + 0x120);
    *(undefined4 *)(lVar35 + 0x5c) = *(undefined4 *)(lVar35 + 0x30);
    uVar32 = (int)in_stack_000001a8[10] - 1;
LAB_0603e414:
    if (uVar15 == uVar32) {
      lVar23 = unaff_x19[0x75];
      if ((lVar23 == 0) || (lVar35 = *(long *)(lVar23 + 0x50), lVar35 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar35 + 0x18) <= uVar4) goto LAB_0603fce4;
      lVar38 = lVar35 + 0x20 + (long)(int)uVar4 * 0x60;
      fVar48 = fVar51 + *(float *)(lVar38 + 0x38);
      *(ulong *)(lVar38 + 0x30) =
           CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar38 + 0x30) >> 0x20),
                    fVar51 + (float)*(undefined8 *)(lVar38 + 0x30));
      *(float *)(lVar38 + 0x38) = fVar48;
      *(float *)(lVar38 + 0x3c) = fVar65 + *(float *)(lVar38 + 0x3c);
      lVar23 = *(long *)(lVar23 + 0x38);
      if (lVar23 == 0) goto thunk_FUN_02e3ccc4;
      uVar32 = *(uint *)(lVar35 + 0x20 + (long)(int)uVar4 * 0x60 + 0x18);
      if (*(uint *)(lVar23 + 0x18) <= uVar32) goto LAB_0603fce4;
      *(undefined4 *)(lVar38 + 0x50) = *(undefined4 *)(lVar23 + (long)(int)uVar32 * 0x178 + 0x114);
      *(float *)(lVar38 + 0x54) = fVar48;
      lVar23 = unaff_x19[0x75];
      if ((lVar23 == 0) || (lVar35 = *(long *)(lVar23 + 0x50), lVar35 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar35 + 0x18) <= uVar4) goto LAB_0603fce4;
      lVar23 = *(long *)(lVar23 + 0x38);
      if (lVar23 == 0) goto thunk_FUN_02e3ccc4;
      uVar32 = *(uint *)(lVar35 + 0x20 + (long)(int)uVar4 * 0x60 + 0x24);
      if (*(uint *)(lVar23 + 0x18) <= uVar32) goto LAB_0603fce4;
      lVar35 = lVar35 + 0x20 + (long)(int)uVar4 * 0x60;
      *(undefined4 *)(lVar35 + 0x58) = *(undefined4 *)(lVar23 + (long)(int)uVar32 * 0x178 + 0x120);
      *(undefined4 *)(lVar35 + 0x5c) = *(undefined4 *)(lVar35 + 0x30);
    }
  }
  if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar22 = FUN_05580720(uVar46,0);
  if (((((uVar22 & 1) == 0) && (1 < uVar46 - 0x2010)) && (uVar46 != 0xad)) && (uVar46 != 0x2d)) {
    if (bVar12) {
      if (((uVar15 != 0) && ((int)uVar15 < (int)(*(uint *)(lVar27 + 0x18) - 1))) &&
         (((int)uVar15 < (int)in_stack_000001a8[10] && ((uVar46 == 0x2019 || (uVar46 == 0x27)))))) {
        if (*(uint *)(lVar27 + 0x18) <= uVar15 - 1) goto LAB_0603fce4;
        uVar5 = *(undefined2 *)(lVar33 + (ulong)(uVar15 - 1) * 0x178 + 4);
        if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar22 = FUN_05580720(uVar5,0);
        if ((uVar22 & 1) != 0) {
          if (*(uint *)(lVar27 + 0x18) <= uVar15 + 1) goto LAB_0603fce4;
          uVar5 = *(undefined2 *)(lVar33 + (ulong)(uVar15 + 1) * 0x178 + 4);
          if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          uVar22 = FUN_05580720(uVar5,0);
          if ((uVar22 & 1) != 0) goto LAB_0603e714;
        }
      }
LAB_0603f468:
      if (uVar15 == (int)in_stack_000001a8[10] - 1U) {
        if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar22 = FUN_05580720(uVar46,0);
        uVar32 = uVar15;
        if ((uVar22 & 1) == 0) goto LAB_0603f4a4;
      }
      else {
LAB_0603f4a4:
        uVar32 = uVar15 - 1;
      }
      lVar23 = unaff_x19[0x75];
      if (lVar23 != 0) {
        lVar35 = *(long *)(lVar23 + 0x40);
        if (lVar35 != 0) {
          uVar43 = *(uint *)(lVar23 + 0x24);
          iVar19 = *(int *)(lVar35 + 0x18);
          if (iVar19 < (int)(uVar43 + 1)) {
            if (*(int *)(*(long *)System_Collections_Generic_List<AchievementDefinition>_TypeInfo +
                        0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            System_Array__InternalArray__ICollection_Add<ValueTuple<int,_Vector2Int>>
                      ((long *)(lVar23 + 0x40),iVar19 + 1,
                       *(undefined8 *)System_Collections_Generic_List<ABSSequentiable>_TypeInfo);
            lVar23 = unaff_x19[0x75];
            if (lVar23 == 0) goto thunk_FUN_02e3ccc4;
          }
          lVar23 = *(long *)(lVar23 + 0x40);
          if (lVar23 != 0) {
            if (uVar43 < *(uint *)(lVar23 + 0x18)) {
              lVar23 = lVar23 + (long)(int)uVar43 * 0x18;
              *(long **)(lVar23 + 0x20) = unaff_x19;
              *(uint *)(lVar23 + 0x28) = uVar16;
              *(uint *)(lVar23 + 0x2c) = uVar32;
              *(uint *)(lVar23 + 0x30) = (uVar32 - uVar16) + 1;
              thunk_FUN_02ee2be8();
              lVar23 = unaff_x19[0x75];
              if (lVar23 != 0) {
                lVar35 = *(long *)(lVar23 + 0x50);
                *(int *)(lVar23 + 0x24) = *(int *)(lVar23 + 0x24) + 1;
                if (lVar35 != 0) {
                  if (uVar4 < *(uint *)(lVar35 + 0x18)) {
                    bVar12 = false;
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
    if (uVar15 == 0) {
      if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      bVar14 = FUN_05580678(uVar46,0);
      if ((((uVar46 == 0x200b | bVar14 ^ 0xff | bVar13) & 1) != 0) ||
         (in_stack_000001a8[10] == 1.4013e-45)) goto LAB_0603f468;
    }
    bVar12 = false;
  }
  else {
    if (!bVar12) {
      uVar16 = uVar15;
    }
    if (uVar15 != (int)in_stack_000001a8[10] - 1U) {
LAB_0603e714:
      bVar12 = true;
      goto LAB_0603e71c;
    }
    lVar23 = unaff_x19[0x75];
    if (lVar23 == 0) goto thunk_FUN_02e3ccc4;
    lVar35 = *(long *)(lVar23 + 0x40);
    if (lVar35 == 0) goto thunk_FUN_02e3ccc4;
    uVar32 = *(uint *)(lVar23 + 0x24);
    iVar19 = *(int *)(lVar35 + 0x18);
    if (iVar19 < (int)(uVar32 + 1)) {
      if (*(int *)(*(long *)System_Collections_Generic_List<AchievementDefinition>_TypeInfo + 0xe4)
          == 0) {
        thunk_FUN_02e9a04c();
      }
      System_Array__InternalArray__ICollection_Add<ValueTuple<int,_Vector2Int>>
                ((long *)(lVar23 + 0x40),iVar19 + 1,
                 *(undefined8 *)System_Collections_Generic_List<ABSSequentiable>_TypeInfo);
      lVar23 = unaff_x19[0x75];
      if (lVar23 == 0) goto thunk_FUN_02e3ccc4;
    }
    lVar23 = *(long *)(lVar23 + 0x40);
    if (lVar23 == 0) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar23 + 0x18) <= uVar32) goto LAB_0603fce4;
    lVar23 = lVar23 + (long)(int)uVar32 * 0x18;
    *(long **)(lVar23 + 0x20) = unaff_x19;
    *(uint *)(lVar23 + 0x28) = uVar16;
    *(uint *)(lVar23 + 0x2c) = uVar15;
    *(uint *)(lVar23 + 0x30) = (uVar15 - uVar16) + 1;
    thunk_FUN_02ee2be8();
    lVar23 = unaff_x19[0x75];
    if (lVar23 == 0) goto thunk_FUN_02e3ccc4;
    lVar35 = *(long *)(lVar23 + 0x50);
    *(int *)(lVar23 + 0x24) = *(int *)(lVar23 + 0x24) + 1;
    if (lVar35 == 0) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar35 + 0x18) <= uVar4) goto LAB_0603fce4;
    bVar12 = true;
LAB_0603e630:
    lVar35 = lVar35 + (long)(int)uVar4 * 0x60;
    fStack00000000000000ec = (float)((int)fStack00000000000000ec + 1);
    *(int *)(lVar35 + 0x34) = *(int *)(lVar35 + 0x34) + 1;
  }
LAB_0603e71c:
  lVar23 = unaff_x19[0x75];
  if ((lVar23 == 0) || (lVar35 = *(long *)(lVar23 + 0x38), lVar35 == 0)) goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar35 + 0x18) <= uVar15) goto LAB_0603fce4;
  lVar38 = lVar35 + 0x20;
  if ((*(byte *)(lVar38 + uVar42 * 0x178 + 0x16c) >> 2 & 1) == 0) {
    if (bVar10) {
      if (*(uint *)(lVar35 + 0x18) <= (uint)((long)(int)uVar15 + -1)) goto LAB_0603fce4;
      lVar38 = lVar38 + ((long)(int)uVar15 + -1) * 0x178;
      lVar35 = *unaff_x19;
      uVar52 = *(undefined4 *)(lVar38 + 0x100);
      uVar62 = *(undefined4 *)(lVar38 + 0x13c);
LAB_0603e9d8:
      pcVar31 = *(code **)(lVar35 + 0x908);
LAB_0603e9e0:
      (*pcVar31)(fStack000000000000006c,fStack0000000000000064,uStack0000000000000068,uVar52,
                 fStack0000000000000138,0,fVar57,uVar62);
LAB_0603ea24:
      lVar23 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
      if (*(int *)(lVar23 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
        lVar23 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
      }
      fStack000000000000016c = 0.0;
      fStack0000000000000134 = 0.0;
      fStack0000000000000138 = *(float *)(*(long *)(lVar23 + 0xb8) + 0x1730);
    }
    bVar10 = false;
  }
  else {
    lVar35 = lVar38 + uVar42 * 0x178;
    *(int *)(lVar35 + 0x148) = iVar17;
    iVar19 = *(int *)(lVar35 + 0x40);
    if ((((int)unaff_x19[0x6d] < (int)uVar15) || ((int)unaff_x19[0x6e] < (int)uVar4)) ||
       ((*(int *)((long)unaff_x19 + 0x314) == 5 && (iVar19 + 1 != (int)unaff_x19[0x6f])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar13 & 1) == 0 && uVar46 != 0x200b) {
      fVar65 = *(float *)(lVar38 + uVar42 * 0x178 + 0x13c);
      if (fStack000000000000016c <= fVar65) {
        fStack000000000000016c = fVar65;
      }
      if (fStack0000000000000134 <= ABS(fVar61)) {
        fStack0000000000000134 = ABS(fVar61);
      }
      if (iVar19 != uStack0000000000000060) {
        if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) == 0)
        {
          thunk_FUN_02e9a04c();
          lVar23 = unaff_x19[0x75];
          if (lVar23 == 0) goto thunk_FUN_02e3ccc4;
          lVar35 = *(long *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xb8
                            );
        }
        else {
          lVar35 = *(long *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xb8
                            );
        }
        fStack0000000000000138 = *(float *)(lVar35 + 0x1730);
      }
      lVar23 = *(long *)(lVar23 + 0x38);
      if (lVar23 == 0) goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar23 + 0x18) <= uVar15) goto LAB_0603fce4;
      if (unaff_x19[0x1f] == 0) goto thunk_FUN_02e3ccc4;
      fVar48 = *(float *)(lVar23 + uVar42 * 0x178 + 0x144);
      fVar65 = (float)FUN_0630f910(unaff_x19[0x1f] + 0x28,0);
      fVar48 = fVar48 + fStack000000000000016c * fVar65;
      uStack0000000000000060 = iVar19;
      if (fVar48 <= fStack0000000000000138) {
        fStack0000000000000138 = fVar48;
      }
    }
    if (!bVar10) {
      bVar10 = false;
      if ((bVar1) && ((int)uVar15 <= (int)uVar3)) {
        if ((uVar46 & 0xfffe) == 10) goto LAB_0603ea5c;
        if (uVar46 != 0xd) {
          if (uVar15 == uVar3) {
            if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar22 = FUN_055814cc(uVar46,0);
            if ((uVar22 & 1) != 0) goto LAB_0603e930;
          }
          if ((unaff_x19[0x75] != 0) && (lVar23 = *(long *)(unaff_x19[0x75] + 0x38), lVar23 != 0)) {
            if (uVar15 < *(uint *)(lVar23 + 0x18)) {
              lVar23 = lVar23 + uVar42 * 0x178;
              fVar57 = *(float *)(lVar23 + 0x15c);
              fVar65 = fVar61;
              fVar48 = fVar57;
              if (fStack000000000000016c != 0.0) {
                fVar65 = fStack0000000000000134;
                fVar48 = fStack000000000000016c;
              }
              fStack000000000000016c = fVar48;
              uStack0000000000000068 = 0;
              fStack000000000000006c = *(float *)(lVar23 + 0x114);
              uStack0000000000000084 = *(undefined4 *)(lVar23 + 0x164);
              fStack0000000000000064 = fStack0000000000000138;
              fStack0000000000000134 = fVar65;
              goto LAB_0603e99c;
            }
            goto LAB_0603fce4;
          }
          goto thunk_FUN_02e3ccc4;
        }
      }
LAB_0603e930:
      bVar10 = false;
      goto LAB_0603ea5c;
    }
LAB_0603e99c:
    if (in_stack_000001a8[10] == 1.4013e-45) {
      if ((unaff_x19[0x75] != 0) && (lVar23 = *(long *)(unaff_x19[0x75] + 0x38), lVar23 != 0)) {
        if (uVar15 < *(uint *)(lVar23 + 0x18)) {
          lVar23 = lVar23 + uVar42 * 0x178;
LAB_0603e9cc:
          lVar35 = *unaff_x19;
          uVar52 = *(undefined4 *)(lVar23 + 0x120);
          uVar62 = *(undefined4 *)(lVar23 + 0x15c);
          goto LAB_0603e9d8;
        }
        goto LAB_0603fce4;
      }
      goto thunk_FUN_02e3ccc4;
    }
    if ((uVar15 == uVar2) || ((int)uVar3 <= (int)uVar15)) {
      lVar23 = unaff_x19[0x75];
      if ((bVar13 & 1) == 0 && uVar46 != 0x200b) {
        if ((lVar23 == 0) || (lVar23 = *(long *)(lVar23 + 0x38), lVar23 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar23 + 0x18) <= uVar15) goto LAB_0603fce4;
        lVar23 = lVar23 + uVar42 * 0x178;
      }
      else {
        if ((lVar23 == 0) || (lVar23 = *(long *)(lVar23 + 0x38), lVar23 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar23 + 0x18) <= uVar3) goto LAB_0603fce4;
        lVar23 = lVar23 + (long)(int)uVar3 * 0x178;
      }
      uVar52 = *(undefined4 *)(lVar23 + 0x120);
      uVar62 = *(undefined4 *)(lVar23 + 0x15c);
      pcVar31 = *(code **)(*unaff_x19 + 0x908);
      goto LAB_0603e9e0;
    }
    if (!bVar1) {
      if ((unaff_x19[0x75] != 0) && (lVar23 = *(long *)(unaff_x19[0x75] + 0x38), lVar23 != 0)) {
        if ((uint)((long)(int)uVar15 + -1) < *(uint *)(lVar23 + 0x18)) {
          lVar23 = lVar23 + ((long)(int)uVar15 + -1) * 0x178;
          goto LAB_0603e9cc;
        }
        goto LAB_0603fce4;
      }
      goto thunk_FUN_02e3ccc4;
    }
    if ((int)uVar15 < (int)in_stack_000001a8[10] + -1) {
      if ((unaff_x19[0x75] == 0) || (lVar23 = *(long *)(unaff_x19[0x75] + 0x38), lVar23 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar23 + 0x18) <= uVar15 + 1) goto LAB_0603fce4;
      uVar22 = FUN_06059f90(uStack0000000000000084,
                            *(undefined4 *)(lVar23 + (ulong)(uVar15 + 1) * 0x178 + 0x164),0);
      if ((uVar22 & 1) == 0) {
        if ((unaff_x19[0x75] != 0) && (lVar23 = *(long *)(unaff_x19[0x75] + 0x38), lVar23 != 0)) {
          if (uVar15 < *(uint *)(lVar23 + 0x18)) {
            lVar23 = lVar23 + uVar42 * 0x178;
            (**(code **)(*unaff_x19 + 0x908))
                      (fStack000000000000006c,fStack0000000000000064,uStack0000000000000068,
                       *(undefined4 *)(lVar23 + 0x120),fStack0000000000000138,0,fVar57,
                       *(undefined4 *)(lVar23 + 0x15c));
            goto LAB_0603ea24;
          }
          goto LAB_0603fce4;
        }
        goto thunk_FUN_02e3ccc4;
      }
      bVar10 = true;
    }
    else {
      bVar10 = true;
    }
  }
LAB_0603ea5c:
  if ((unaff_x19[0x75] == 0) || (lVar23 = *(long *)(unaff_x19[0x75] + 0x38), lVar23 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar23 + 0x18) <= uVar15) goto LAB_0603fce4;
  if (lVar37 == 0) goto thunk_FUN_02e3ccc4;
  uVar32 = *(uint *)(lVar23 + uVar42 * 0x178 + 0x18c);
  fVar65 = (float)FUN_0630f920(lVar37 + 0x28,0);
  if ((uVar32 >> 6 & 1) == 0) {
    if (bVar8) {
      if ((unaff_x19[0x75] != 0) && (lVar37 = *(long *)(unaff_x19[0x75] + 0x38), lVar37 != 0)) {
        if ((uint)((long)(int)uVar15 + -1) < *(uint *)(lVar37 + 0x18)) {
          lVar37 = lVar37 + ((long)(int)uVar15 + -1) * 0x178;
          goto LAB_0603ed10;
        }
        goto LAB_0603fce4;
      }
      goto thunk_FUN_02e3ccc4;
    }
LAB_0603eba4:
    bVar8 = false;
  }
  else {
    lVar23 = unaff_x19[0x75];
    if ((lVar23 == 0) || (lVar35 = *(long *)(lVar23 + 0x38), lVar35 == 0)) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar35 + 0x18) <= uVar15) goto LAB_0603fce4;
    *(int *)(lVar35 + 0x20 + uVar42 * 0x178 + 0x150) = iVar17;
    if ((((int)unaff_x19[0x6d] < (int)uVar15) || ((int)unaff_x19[0x6e] < (int)uVar4)) ||
       ((*(int *)((long)unaff_x19 + 0x314) == 5 &&
        (*(int *)(lVar35 + 0x20 + uVar42 * 0x178 + 0x40) + 1 != (int)unaff_x19[0x6f])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((((bool)(bVar8 | bVar1 ^ 1U)) || ((int)uVar3 < (int)uVar15)) || ((uVar46 & 0xfffe) == 10))
       || (uVar46 == 0xd)) {
LAB_0603eb9c:
      if (!bVar8) goto LAB_0603eba4;
    }
    else {
      if (uVar15 == uVar3) {
        if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar22 = FUN_055814cc(uVar46,0);
        if ((uVar22 & 1) != 0) goto LAB_0603eb9c;
        lVar23 = unaff_x19[0x75];
        if (lVar23 == 0) goto thunk_FUN_02e3ccc4;
      }
      lVar23 = *(long *)(lVar23 + 0x38);
      if (lVar23 == 0) goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar23 + 0x18) <= uVar15) goto LAB_0603fce4;
      lVar23 = lVar23 + uVar42 * 0x178;
      fStack00000000000000a0 = *(float *)(lVar23 + 0x15c);
      fStack0000000000000098 = fVar65 * fStack00000000000000a0 + *(float *)(lVar23 + 0x144);
      uStack0000000000000088 = 0;
      fStack0000000000000058 = *(float *)(lVar23 + 0x58);
      fStack0000000000000094 = *(float *)(lVar23 + 0x114);
    }
    fVar48 = in_stack_000001a8[10];
    if (fVar48 == 1.4013e-45) {
LAB_0603ece4:
      if ((unaff_x19[0x75] == 0) || (lVar37 = *(long *)(unaff_x19[0x75] + 0x38), lVar37 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar37 + 0x18) <= uVar15) goto LAB_0603fce4;
      lVar37 = lVar37 + uVar42 * 0x178;
LAB_0603ed10:
      fVar48 = *(float *)(lVar37 + 0x144);
      lVar23 = *unaff_x19;
      uVar52 = *(undefined4 *)(lVar37 + 0x120);
    }
    else {
      if (uVar15 != uVar2) {
        if ((int)fVar48 <= (int)uVar15) {
LAB_0603ede8:
          if ((int)uVar15 < (int)fVar48) {
            iVar19 = FUN_0626d24c(lVar37,0);
            if (*(uint *)(lVar27 + 0x18) <= uVar15 + 1) goto LAB_0603fce4;
            lVar37 = *(long *)(lVar33 + (ulong)(uVar15 + 1) * 0x178 + 0x20);
            if (lVar37 == 0) goto thunk_FUN_02e3ccc4;
            iVar18 = FUN_0626d24c(lVar37,0);
            if (iVar19 != iVar18) goto LAB_0603ece4;
          }
          if (bVar1) {
            bVar8 = true;
            goto LAB_0603efc0;
          }
          if ((unaff_x19[0x75] != 0) && (lVar37 = *(long *)(unaff_x19[0x75] + 0x38), lVar37 != 0)) {
            if ((uint)((long)(int)uVar15 + -1) < *(uint *)(lVar37 + 0x18)) {
              lVar37 = lVar37 + ((long)(int)uVar15 + -1) * 0x178;
              goto LAB_0603ed10;
            }
            goto LAB_0603fce4;
          }
          goto thunk_FUN_02e3ccc4;
        }
        if ((unaff_x19[0x75] == 0) || (lVar23 = *(long *)(unaff_x19[0x75] + 0x38), lVar23 == 0))
        goto thunk_FUN_02e3ccc4;
        if (uVar15 + 1 < *(uint *)(lVar23 + 0x18)) {
          if (*(float *)(lVar23 + (ulong)(uVar15 + 1) * 0x178 + 0x58) == fStack0000000000000058) {
            if (*(int *)(*(long *)
                          System_Collections_Generic_List<WeakReference<TMP_FontAsset>>_TypeInfo +
                        0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar22 = FUN_0605a494(0);
            if ((uVar22 & 1) != 0) {
              fVar48 = in_stack_000001a8[10];
              goto LAB_0603ede8;
            }
          }
          lVar37 = unaff_x19[0x75];
          if ((int)uVar3 < (int)uVar15) goto LAB_0603ed4c;
          goto LAB_0603ef48;
        }
        goto LAB_0603fce4;
      }
      lVar37 = unaff_x19[0x75];
      if ((uVar46 != 0x200b & (bVar13 ^ 0xff)) == 0) {
LAB_0603ed4c:
        if ((lVar37 == 0) || (lVar37 = *(long *)(lVar37 + 0x38), lVar37 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar37 + 0x18) <= uVar3) goto LAB_0603fce4;
        lVar37 = lVar37 + (long)(int)uVar3 * 0x178;
      }
      else {
LAB_0603ef48:
        if ((lVar37 == 0) || (lVar37 = *(long *)(lVar37 + 0x38), lVar37 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar37 + 0x18) <= uVar15) goto LAB_0603fce4;
        lVar37 = lVar37 + uVar42 * 0x178;
      }
      fVar48 = *(float *)(lVar37 + 0x144);
      lVar23 = *unaff_x19;
      uVar52 = *(undefined4 *)(lVar37 + 0x120);
    }
    (**(code **)(lVar23 + 0x908))
              (fStack0000000000000094,fStack0000000000000098,uStack0000000000000088,uVar52,
               fStack00000000000000a0 * fVar65 + fVar48,0,fStack00000000000000a0,
               fStack00000000000000a0);
    bVar8 = false;
  }
LAB_0603efc0:
  if ((unaff_x19[0x75] == 0) || (lVar37 = *(long *)(unaff_x19[0x75] + 0x38), lVar37 == 0))
  goto thunk_FUN_02e3ccc4;
  uVar32 = (uint)*(undefined8 *)(lVar37 + 0x18);
  if (uVar32 <= uVar15) goto LAB_0603fce4;
  if ((*(byte *)(lVar37 + 0x20 + uVar42 * 0x178 + 0x16d) >> 1 & 1) == 0) {
    if (bVar9) {
      (**(code **)(*unaff_x19 + 0x918))();
    }
    bVar9 = false;
  }
  else {
    if ((((int)unaff_x19[0x6d] < (int)uVar15) || ((int)unaff_x19[0x6e] < (int)uVar4)) ||
       ((*(int *)((long)unaff_x19 + 0x314) == 5 &&
        (*(int *)(lVar37 + 0x20 + uVar42 * 0x178 + 0x40) + 1 != (int)unaff_x19[0x6f])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar9) {
LAB_0603f144:
      if (uVar32 <= uVar15) goto LAB_0603fce4;
      lVar37 = lVar37 + uVar42 * 0x178;
      in_stack_000001e0 = CONCAT44(in_stack_00001314,in_stack_00001310);
      auVar7._8_4_ = in_stack_00001318;
      auVar7._0_8_ = in_stack_000001e0;
      auVar7._12_4_ = in_stack_0000131c;
      lVar23 = 0x118;
      if ((bVar13 & 1) == 0) {
        lVar23 = 0xf4;
      }
      fVar50 = *(float *)(lVar37 + 0x180);
      fVar51 = *(float *)(lVar37 + 0x184);
      fVar67 = *(float *)(lVar37 + 0x188);
      uVar20 = *(undefined8 *)(lVar37 + 0x178);
      fVar53 = *(float *)(lVar37 + 0x120);
      fVar65 = *(float *)(lVar37 + 0x13c);
      fVar66 = *(float *)(lVar37 + 0x140);
      fVar49 = *(float *)(lVar37 + 0x148);
      fVar48 = *(float *)(lVar37 + lVar23 + 0x20);
      in_stack_000001e8 = auVar7._8_8_;
      in_stack_000001c8 = uVar20;
      fStack00000000000001d0 = fVar50;
      fStack00000000000001d4 = fVar51;
      in_stack_000001d8 = fVar67;
      in_stack_000001f0 = in_stack_00001320;
      uVar42 = FUN_0605b5b8(&stack0x000001e0,&stack0x000001c8,0);
      if ((uVar42 & 1) == 0) {
        if ((bVar13 & 1) == 0) {
          fVar65 = fVar53;
        }
        if (*(int *)(*(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        fVar48 = fVar48 - in_stack_00001314;
        if (fVar48 <= fStack00000000000000e8) {
          fStack00000000000000e8 = fVar48;
        }
        if (fStack00000000000000dc <= fVar65 + in_stack_00001318) {
          fStack00000000000000dc = fVar65 + in_stack_00001318;
        }
        if (*(int *)(*(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        fVar49 = fVar49 - in_stack_00001320;
        fVar66 = fVar66 + in_stack_0000131c;
        if (fVar49 <= in_stack_00000110._4_4_) {
          in_stack_00000110._4_4_ = fVar49;
        }
        if (fStack00000000000000e0 <= fVar66) {
          fStack00000000000000e0 = fVar66;
        }
      }
      else {
        if (*(int *)(*(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        fStack00000000000000e8 = (fVar48 + (fStack00000000000000dc - in_stack_00001318)) * 0.5;
        (**(code **)(*unaff_x19 + 0x918))();
        if (*(int *)(*(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        if ((bVar13 & 1) == 0) {
          fVar65 = fVar53;
        }
        if (*(int *)(*(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        in_stack_00000110._4_4_ = fVar49 - fVar67;
        in_stack_00001310 = (undefined4)uVar20;
        in_stack_00001314 = (float)((ulong)uVar20 >> 0x20);
        fStack00000000000000dc = fVar50 + fVar65;
        fStack00000000000000e0 = fVar66 + fVar51;
        in_stack_00001318 = fVar50;
        in_stack_0000131c = fVar51;
        in_stack_00001320 = fVar67;
      }
      if (((in_stack_000001a8[10] != 1.4013e-45) && (uVar15 != uVar2)) &&
         (((int)uVar15 < (int)uVar3 && (bVar1)))) {
        bVar9 = true;
        goto LAB_0603f378;
      }
      (**(code **)(*unaff_x19 + 0x918))();
    }
    else {
      bVar9 = false;
      if ((((!bVar1) || ((int)uVar3 < (int)uVar15)) || ((uVar46 & 0xfffe) == 10)) || (uVar46 == 0xd)
         ) goto LAB_0603f378;
      if (uVar15 != uVar3) {
LAB_0603f0c8:
        puVar11 = System_Collections_Generic_List<AudioListener>_TypeInfo;
        lVar23 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
        if (*(int *)(lVar23 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
          lVar23 = *(long *)puVar11;
        }
        if ((unaff_x19[0x75] != 0) && (lVar37 = *(long *)(unaff_x19[0x75] + 0x38), lVar37 != 0)) {
          uVar32 = (uint)*(undefined8 *)(lVar37 + 0x18);
          if (uVar15 < uVar32) {
            lVar35 = *(long *)(lVar23 + 0xb8);
            lVar23 = lVar37 + uVar42 * 0x178;
            fStack00000000000000dc = *(float *)(lVar35 + 0x1728);
            fStack00000000000000e0 = *(float *)(lVar35 + 0x172c);
            in_stack_00001320 = *(float *)(lVar23 + 0x188);
            fStack00000000000000e8 = *(float *)(lVar35 + 0x1720);
            in_stack_00000110._4_4_ = *(float *)(lVar35 + 0x1724);
            in_stack_00001318 = (float)*(undefined8 *)(lVar23 + 0x180);
            in_stack_0000131c = (float)((ulong)*(undefined8 *)(lVar23 + 0x180) >> 0x20);
            in_stack_00001310 = (undefined4)*(undefined8 *)(lVar23 + 0x178);
            in_stack_00001314 = (float)((ulong)*(undefined8 *)(lVar23 + 0x178) >> 0x20);
            goto LAB_0603f144;
          }
          goto LAB_0603fce4;
        }
        goto thunk_FUN_02e3ccc4;
      }
      if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      uVar22 = FUN_055814cc(uVar46,0);
      if ((uVar22 & 1) == 0) goto LAB_0603f0c8;
    }
    bVar9 = false;
  }
LAB_0603f378:
  fVar65 = in_stack_000001a8[10];
  uVar15 = uVar15 + 1;
  uVar32 = uVar4;
  if ((int)fVar65 <= (int)uVar15) goto LAB_0603f74c;
  goto LAB_0603d6e0;
LAB_0603f74c:
  lVar27 = unaff_x19[0x75];
  if (lVar27 != 0) {
    iVar19 = uVar4 + 1;
    plVar45 = (long *)System_Collections_Generic_List<byte[]>_TypeInfo;
LAB_0603f770:
    lVar33 = *(long *)(lVar27 + 0x60);
    if (lVar33 != 0) {
      if (*(uint *)(lVar33 + 0x18) <= *(uint *)(unaff_x19 + 0xd5)) {
LAB_0603fce4:
                    /* WARNING: Subroutine does not return */
        FUN_02e3cccc();
      }
      *(int *)(lVar33 + (long)(int)*(uint *)(unaff_x19 + 0xd5) * 0x50 + 0x28) = iVar17;
      *(float *)(lVar27 + 0x18) = fVar65;
      lVar33 = unaff_x19[0xd8];
      *(int *)(lVar27 + 0x2c) = iVar19;
      if ((int)fVar65 < 1 || fStack00000000000000ec == 0.0) {
        fStack00000000000000ec = 1.4013e-45;
      }
      *(int *)(lVar27 + 0x1c) = (int)lVar33;
      *(float *)(lVar27 + 0x24) = fStack00000000000000ec;
      *(int *)(lVar27 + 0x30) = *(int *)((long)unaff_x19 + 0x4cc) + 1;
      if (((int)unaff_x19[0x6b] != 0xff) ||
         (uVar42 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar42 & 1) == 0)) {
LAB_0603d144:
        if (*(int *)(*(long *)PTR_DAT_06a3c3a0 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        FUN_060594e8();
        return;
      }
      lVar27 = unaff_x19[0xdf];
      if (lVar27 != 0) {
        (**(code **)(lVar27 + 0x18))
                  (*(undefined8 *)(lVar27 + 0x40),unaff_x19[0x75],*(undefined8 *)(lVar27 + 0x28));
      }
      if (*(int *)((long)unaff_x19 + 0x35c) != 0) {
        if ((unaff_x19[0x75] == 0) || (lVar27 = *(long *)(unaff_x19[0x75] + 0x60), lVar27 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(int *)(*plVar45 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        if (*(int *)(lVar27 + 0x18) == 0) goto LAB_0603fce4;
        FUN_060a5370(lVar27 + 0x20,1,0);
      }
      if (unaff_x19[0x7c] != 0) {
        FUN_06242810(unaff_x19[0x7c],0);
        if ((unaff_x19[0x75] != 0) && (lVar27 = *(long *)(unaff_x19[0x75] + 0x60), lVar27 != 0)) {
          if (*(int *)(lVar27 + 0x18) == 0) goto LAB_0603fce4;
          if (unaff_x19[0x7c] != 0) {
            FUN_06240928(unaff_x19[0x7c],*(undefined8 *)(lVar27 + 0x30),0);
            if ((unaff_x19[0x75] != 0) && (lVar27 = *(long *)(unaff_x19[0x75] + 0x60), lVar27 != 0))
            {
              if (*(int *)(lVar27 + 0x18) == 0) goto LAB_0603fce4;
              if (unaff_x19[0x7c] != 0) {
                FUN_06241714(unaff_x19[0x7c],0,*(undefined8 *)(lVar27 + 0x48),0);
                if ((unaff_x19[0x75] != 0) &&
                   (lVar27 = *(long *)(unaff_x19[0x75] + 0x60), lVar27 != 0)) {
                  if (*(int *)(lVar27 + 0x18) == 0) goto LAB_0603fce4;
                  if (unaff_x19[0x7c] != 0) {
                    FUN_06240b40(unaff_x19[0x7c],*(undefined8 *)(lVar27 + 0x50),0);
                    if ((unaff_x19[0x75] != 0) &&
                       (lVar27 = *(long *)(unaff_x19[0x75] + 0x60), lVar27 != 0)) {
                      if (*(int *)(lVar27 + 0x18) == 0) goto LAB_0603fce4;
                      if (unaff_x19[0x7c] != 0) {
                        UnityEngine_TextCore_Text_SpriteAsset__UpdateLookupTables
                                  (unaff_x19[0x7c],*(undefined8 *)(lVar27 + 0x58),0);
                        if (unaff_x19[0x7c] != 0) {
                          FUN_062425d0(unaff_x19[0x7c],0);
                          lVar27 = unaff_x19[0x75];
                          if (lVar27 != 0) {
                            lVar37 = 0;
                            lVar33 = 0;
                            do {
                              uVar42 = lVar33 + 1;
                              if ((long)*(int *)(lVar27 + 0x34) <= (long)uVar42) goto LAB_0603d144;
                              lVar27 = *(long *)(lVar27 + 0x60);
                              if (lVar27 == 0) break;
                              if (*(int *)(*plVar45 + 0xe4) == 0) {
                                thunk_FUN_02e9a04c();
                              }
                              if (*(uint *)(lVar27 + 0x18) <= uVar42) goto LAB_0603fce4;
                              FUN_060a524c(lVar27 + lVar37 + 0x70,0);
                              lVar27 = unaff_x19[0xe5];
                              if (lVar27 == 0) break;
                              if (*(uint *)(lVar27 + 0x18) <= uVar42) goto LAB_0603fce4;
                              uVar20 = *(undefined8 *)(lVar27 + lVar33 * 8 + 0x28);
                              if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
                                thunk_FUN_02e9a04c();
                              }
                              uVar22 = FUN_062696b0(uVar20,0,0);
                              if ((uVar22 & 1) == 0) {
                                if (*(int *)((long)unaff_x19 + 0x35c) != 0) {
                                  if ((unaff_x19[0x75] == 0) ||
                                     (lVar27 = *(long *)(unaff_x19[0x75] + 0x60), lVar27 == 0))
                                  break;
                                  if (*(int *)(*plVar45 + 0xe4) == 0) {
                                    thunk_FUN_02e9a04c();
                                  }
                                  if (*(uint *)(lVar27 + 0x18) <= uVar42) goto LAB_0603fce4;
                                  FUN_060a5370(lVar27 + lVar37 + 0x70,1,0);
                                }
                                lVar27 = unaff_x19[0xe5];
                                if (lVar27 == 0) break;
                                if (*(uint *)(lVar27 + 0x18) <= uVar42) goto LAB_0603fce4;
                                lVar27 = *(long *)(lVar27 + lVar33 * 8 + 0x28);
                                if (lVar27 == 0) break;
                                lVar27 = FUN_060ae428(lVar27,0);
                                if ((unaff_x19[0x75] == 0) ||
                                   (lVar23 = *(long *)(unaff_x19[0x75] + 0x60), lVar23 == 0)) break;
                                if (*(uint *)(lVar23 + 0x18) <= uVar42) goto LAB_0603fce4;
                                if (lVar27 == 0) break;
                                FUN_06240928(lVar27,*(undefined8 *)(lVar23 + lVar37 + 0x80),0);
                                lVar27 = unaff_x19[0xe5];
                                if (lVar27 == 0) break;
                                if (*(uint *)(lVar27 + 0x18) <= uVar42) goto LAB_0603fce4;
                                lVar27 = *(long *)(lVar27 + lVar33 * 8 + 0x28);
                                if (lVar27 == 0) break;
                                lVar27 = FUN_060ae428(lVar27,0);
                                if ((unaff_x19[0x75] == 0) ||
                                   (lVar23 = *(long *)(unaff_x19[0x75] + 0x60), lVar23 == 0)) break;
                                if (*(uint *)(lVar23 + 0x18) <= uVar42) goto LAB_0603fce4;
                                if (lVar27 == 0) break;
                                FUN_06241714(lVar27,0,*(undefined8 *)(lVar23 + lVar37 + 0x98),0);
                                lVar27 = unaff_x19[0xe5];
                                if (lVar27 == 0) break;
                                if (*(uint *)(lVar27 + 0x18) <= uVar42) goto LAB_0603fce4;
                                lVar27 = *(long *)(lVar27 + lVar33 * 8 + 0x28);
                                if (lVar27 == 0) break;
                                lVar27 = FUN_060ae428(lVar27,0);
                                if ((unaff_x19[0x75] == 0) ||
                                   (lVar23 = *(long *)(unaff_x19[0x75] + 0x60), lVar23 == 0)) break;
                                if (*(uint *)(lVar23 + 0x18) <= uVar42) goto LAB_0603fce4;
                                if (lVar27 == 0) break;
                                FUN_06240b40(lVar27,*(undefined8 *)(lVar23 + lVar37 + 0xa0),0);
                                lVar27 = unaff_x19[0xe5];
                                if (lVar27 == 0) break;
                                if (*(uint *)(lVar27 + 0x18) <= uVar42) goto LAB_0603fce4;
                                lVar27 = *(long *)(lVar27 + lVar33 * 8 + 0x28);
                                if (lVar27 == 0) break;
                                lVar27 = FUN_060ae428(lVar27,0);
                                if ((unaff_x19[0x75] == 0) ||
                                   (lVar23 = *(long *)(unaff_x19[0x75] + 0x60), lVar23 == 0)) break;
                                if (*(uint *)(lVar23 + 0x18) <= uVar42) goto LAB_0603fce4;
                                if (lVar27 == 0) break;
                                UnityEngine_TextCore_Text_SpriteAsset__UpdateLookupTables
                                          (lVar27,*(undefined8 *)(lVar23 + lVar37 + 0xa8),0);
                                lVar27 = unaff_x19[0xe5];
                                if (lVar27 == 0) break;
                                if (*(uint *)(lVar27 + 0x18) <= uVar42) goto LAB_0603fce4;
                                lVar27 = *(long *)(lVar27 + lVar33 * 8 + 0x28);
                                if ((lVar27 == 0) || (lVar27 = FUN_060ae428(lVar27,0), lVar27 == 0))
                                break;
                                FUN_062425d0(lVar27,0);
                              }
                              lVar27 = unaff_x19[0x75];
                              lVar33 = lVar33 + 1;
                              lVar37 = lVar37 + 0x50;
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
thunk_FUN_02e3ccc4:
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


