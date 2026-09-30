/*
FUNCTION_NAME: Unity.Entities.EnabledBitUtility.ShiftRightBurstForTests_00000A52$PostfixBurstDelegate$$.ctor
ENTRY_POINT: 0308c1ec
PROGRAM: vrlegs-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;telemetry_or_network_hits_2;eye_or_gaze_keyword_boost_only
*/


void Unity_Entities_EnabledBitUtility_ShiftRightBurstForTests_00000A52_PostfixBurstDelegate___ctor
               (void)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined8 *puVar13;
  char *pcVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined4 *puVar19;
  ulong uVar20;
  ulong uVar21;
  int iVar22;
  int *piVar23;
  long unaff_x20;
  long *unaff_x22;
  long unaff_x26;
  ulong uVar24;
  long lVar25;
  long *unaff_x29;
  undefined4 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  long in_stack_00000008;
  ulong in_stack_00000010;
  long in_stack_00000018;
  uint in_stack_00000038;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  undefined4 uStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  undefined4 uStack00000000000000c0;
  undefined4 uStack00000000000000c4;
  undefined4 uStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined4 in_stack_00000108;
  undefined4 uStack0000000000000110;
  undefined8 uStack0000000000000114;
  
  puVar7 = System_Xml_Serialization_XmlEnumAttribute_var;
  puVar5 = PTR_DAT_03cbeb70;
  if (unaff_x22 != (long *)0x0) {
    uVar24 = 0;
    auVar27 = NEON_fmov(0x3f800000,4);
    do {
      puVar19 = (undefined4 *)(unaff_x26 + uVar24 * 0xc);
      lVar17 = *unaff_x22;
      uVar32 = puVar19[1];
      uVar30 = puVar19[2];
      uVar34 = *puVar19;
      uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar20 != 0) {
        piVar23 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == *unaff_x29) {
            puVar13 = (undefined8 *)(lVar17 + (long)*piVar23 * 0x10 + 0x138);
            goto LAB_0308c274;
          }
                    /* try { // try from 0308c24c to 0318c257 has its CatchHandler @ 0308c5f0 */
          uVar20 = uVar20 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar20 != 0);
      }
      puVar13 = (undefined8 *)FUN_01a472ec();
LAB_0308c274:
                    /* try { // try from 0308c278 to 0318c283 has its CatchHandler @ 0308c600 */
                    /* try { // try from 0308c288 to 0318c297 has its CatchHandler @ 0308c5f4 */
      uVar34 = (*(code *)*puVar13)(uVar34);
                    /* try { // try from 0308c29c to 0318c2af has its CatchHandler @ 0308c5f8 */
      lVar17 = *(long *)(*(long *)System_Xml_XmlElement_var + 0x20);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = FUN_01a46ff8();
      }
      pcVar14 = (char *)thunk_FUN_01a59484(&stack0x00000180,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar17 + 0xc0) + 8) + 0x80));
      if (*pcVar14 == '\0') {
        if (DAT_0411f172 == '\0') {
          FUN_01ab69ac(PTR_DAT_03cbded8);
          DAT_0411f172 = '\x01';
        }
        puVar19 = *(undefined4 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
        uVar35 = *puVar19;
        uVar33 = puVar19[1];
        uVar31 = puVar19[2];
      }
      else {
        FUN_022412e0(&stack0x00000180,&stack0x000000b0,*(undefined8 *)System_Xml_XmlNode_var);
        lVar17 = *unaff_x22;
        puVar19 = (undefined4 *)
                  (CONCAT44(uStack00000000000000b4,uStack00000000000000b0) + uVar24 * 0xc);
        uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
        uVar35 = *puVar19;
        uVar33 = puVar19[1];
        uVar31 = puVar19[2];
        if (uVar20 != 0) {
          piVar23 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == *unaff_x29) {
              puVar13 = (undefined8 *)(lVar17 + (long)*piVar23 * 0x10 + 0x138);
              goto LAB_0308c388;
            }
            uVar20 = uVar20 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar20 != 0);
        }
        puVar13 = (undefined8 *)FUN_01a472ec();
LAB_0308c388:
        uVar35 = (*(code *)*puVar13)(uVar35);
      }
      if (DAT_0411f1e3 == '\0') {
        FUN_01ab69ac(puVar5);
        DAT_0411f1e3 = '\x01';
      }
      lVar17 = *(long *)(*(long *)puVar7 + 0x20);
      uVar36 = **(undefined4 **)(*(long *)puVar5 + 0xb8);
      uVar37 = (*(undefined4 **)(*(long *)puVar5 + 0xb8))[1];
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = FUN_01a46ff8();
      }
      pcVar14 = (char *)thunk_FUN_01a59484(&stack0x00000160,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar17 + 0xc0) + 8) + 0x80));
      if (*pcVar14 != '\0') {
        FUN_022412e0(&stack0x00000160,&stack0x000000b0,
                     *(undefined8 *)System_Xml_Serialization_XmlIgnoreAttribute_var);
        uVar37 = *(undefined4 *)
                  (CONCAT44(uStack00000000000000b4,uStack00000000000000b0) + uVar24 * 8 + 4);
        if ((in_stack_00000010 & 0x100000000) == 0) {
          uVar36 = FUN_0304ece0(0);
        }
        else {
          uVar36 = FUN_0304ecd8(0);
        }
      }
      lVar17 = *(long *)(*(long *)puVar7 + 0x20);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = FUN_01a46ff8();
      }
      pcVar14 = (char *)thunk_FUN_01a59484(&stack0x00000140,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar17 + 0xc0) + 8) + 0x80));
      if (*pcVar14 == '\0') {
        if (DAT_0411f1e3 == '\0') {
          FUN_01ab69ac(puVar5);
          DAT_0411f1e3 = '\x01';
        }
        uVar26 = **(undefined4 **)(*(long *)puVar5 + 0xb8);
        uVar29 = (*(undefined4 **)(*(long *)puVar5 + 0xb8))[1];
      }
      else {
        FUN_022412e0(&stack0x00000140,&stack0x000000b0,
                     *(undefined8 *)System_Xml_Serialization_XmlIgnoreAttribute_var);
        uVar29 = *(undefined4 *)
                  (CONCAT44(uStack00000000000000b4,uStack00000000000000b0) + uVar24 * 8 + 4);
        uVar26 = FUN_0304ece0(0);
      }
      lVar17 = *(long *)(*(long *)System_Xml_XmlDocument_var + 0x20);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = FUN_01a46ff8();
      }
      pcVar14 = (char *)thunk_FUN_01a59484(&stack0x00000120,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar17 + 0xc0) + 8) + 0x80));
      auVar28 = auVar27;
      if (*pcVar14 != '\0') {
        FUN_022412e0(&stack0x00000120,&stack0x000000b0,
                     *(undefined8 *)System_Xml_XmlQualifiedName_var);
        auVar28 = *(undefined1 (*) [16])
                   (CONCAT44(uStack00000000000000b4,uStack00000000000000b0) + uVar24 * 0x10);
      }
      puVar19 = (undefined4 *)
                (*(long *)(unaff_x20 + 0x28) + (long)*(int *)(unaff_x20 + 0x10) * 0x18);
      *puVar19 = uVar34;
      puVar19[1] = uVar32;
      puVar19[4] = uVar33;
      puVar19[5] = uVar31;
      puVar19[2] = uVar30;
      puVar19[3] = uVar35;
      puVar13 = (undefined8 *)
                (*(long *)(unaff_x20 + 0x38) + (long)*(int *)(unaff_x20 + 0x10) * 0x20);
      puVar13[1] = auVar28._8_8_;
      *puVar13 = auVar28._0_8_;
      *(undefined4 *)(puVar13 + 2) = uVar36;
      *(undefined4 *)((long)puVar13 + 0x14) = uVar37;
      *(undefined4 *)(puVar13 + 3) = uVar26;
      *(undefined4 *)((long)puVar13 + 0x1c) = uVar29;
      FUN_0308f720(&stack0x000000b0);
      in_stack_00000100 = CONCAT44(uStack00000000000000b4,uStack00000000000000b0);
      uStack0000000000000114 = CONCAT44(uStack00000000000000c8,uStack00000000000000c4);
      in_stack_00000108 = uStack00000000000000b8;
      uStack0000000000000110 = uStack00000000000000c0;
      lVar17 = *(long *)(*(long *)System_Xml_XmlAttribute_var + 0x20);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = FUN_01a46ff8();
      }
      pcVar14 = (char *)thunk_FUN_01a59484(&stack0x00000100,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar17 + 0xc0) + 8) + 0x80));
      if (*pcVar14 != '\0') {
        iVar2 = *(int *)(unaff_x20 + 0x10);
        FUN_022412e0(&stack0x00000100,&stack0x000000b0,
                     *(undefined8 *)System_Xml_Serialization_XmlIncludeAttribute_var);
        auVar28._8_4_ = uStack00000000000000b8;
        auVar28._0_8_ = CONCAT44(uStack00000000000000b4,uStack00000000000000b0);
        auVar28._12_4_ = uStack00000000000000bc;
        puVar13 = (undefined8 *)(*(long *)(unaff_x20 + 0x48) + (long)iVar2 * 0x18);
        puVar13[2] = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
        puVar13[1] = auVar28._8_8_;
        *puVar13 = CONCAT44(uStack00000000000000b4,uStack00000000000000b0);
      }
      uVar24 = uVar24 + 1;
      *(int *)(unaff_x20 + 0x10) = *(int *)(unaff_x20 + 0x10) + 1;
      puVar6 = PTR_DAT_03cc5740;
    } while (uVar24 != in_stack_00000038);
    if (in_stack_00000018 != 0) {
      lVar17 = *(long *)(in_stack_00000018 + 0x28);
      if ((lVar17 != 0) && (0 < *(int *)(lVar17 + 0x18))) {
        in_stack_000000f8._4_4_ = 0;
        uVar24 = (ulong)in_stack_00000038;
        do {
          FUN_02215a88(lVar17,in_stack_000000f8._4_4_,&stack0x000000b0,
                       *(undefined8 *)System_Xml_XPath_XPathNavigator_var);
          lVar17 = CONCAT44(uStack00000000000000b4,uStack00000000000000b0);
          if (lVar17 == 0) goto LAB_0308cd10;
          if (*(int *)(lVar17 + 0x10) == -1) {
            bVar10 = false;
          }
          else {
            if ((*(long *)(in_stack_00000048 + 0x28) == 0) ||
               (lVar15 = *(long *)(*(long *)(in_stack_00000048 + 0x28) + 0x28), lVar15 == 0))
            goto LAB_0308cd10;
            FUN_02215a88(lVar15,*(int *)(lVar17 + 0x10),&stack0x000000b0,
                         *(undefined8 *)PTR_DAT_03cd8108);
            if (CONCAT44(uStack00000000000000b4,uStack00000000000000b0) == 0) goto LAB_0308cd10;
            bVar10 = *(uint *)(CONCAT44(uStack00000000000000b4,uStack00000000000000b0) + 0x2c) ==
                     in_stack_00000038;
          }
          if (*(int *)(lVar17 + 0x14) == -1) {
            bVar11 = false;
          }
          else {
            if ((*(long *)(in_stack_00000048 + 0x28) == 0) ||
               (lVar15 = *(long *)(*(long *)(in_stack_00000048 + 0x28) + 0x28), lVar15 == 0))
            goto LAB_0308cd10;
            FUN_02215a88(lVar15,*(int *)(lVar17 + 0x14),&stack0x000000b0,
                         *(undefined8 *)PTR_DAT_03cd8108);
            if (CONCAT44(uStack00000000000000b4,uStack00000000000000b0) == 0) goto LAB_0308cd10;
            bVar11 = *(uint *)(CONCAT44(uStack00000000000000b4,uStack00000000000000b0) + 0x2c) ==
                     in_stack_00000038;
          }
          if (*(int *)(lVar17 + 0x18) == -1) {
            bVar12 = false;
          }
          else {
            if ((*(long *)(in_stack_00000048 + 0x28) == 0) ||
               (lVar15 = *(long *)(*(long *)(in_stack_00000048 + 0x28) + 0x28), lVar15 == 0))
            goto LAB_0308cd10;
            FUN_02215a88(lVar15,*(int *)(lVar17 + 0x18),&stack0x000000b0,
                         *(undefined8 *)PTR_DAT_03cd8108);
            if (CONCAT44(uStack00000000000000b4,uStack00000000000000b0) == 0) goto LAB_0308cd10;
            bVar12 = *(uint *)(CONCAT44(uStack00000000000000b4,uStack00000000000000b0) + 0x2c) ==
                     in_stack_00000038;
          }
          uVar16 = FUN_0276793c((long)&stack0x000000f8 + 4,0);
          lVar15 = thunk_FUN_01a89e68(*(undefined8 *)System_Xml_Linq_XDocument_var);
          FUN_0304eb1c(lVar15,uVar16,in_stack_00000038,bVar10,bVar11,bVar12,0);
          if (*(long *)(unaff_x20 + 0x68) == 0) goto LAB_0308cd10;
          FUN_01b5f01c(*(long *)(unaff_x20 + 0x68),lVar15,
                       *(undefined8 *)System_Xml_XPath_XPathItem_var);
          puVar5 = System_Text_EncoderFallback_var;
          if (bVar10 != false) {
            auVar27 = FUN_01f7f7e8(in_stack_00000048,*(undefined4 *)(lVar17 + 0x10),
                                   *(undefined8 *)System_Xml_Linq_XNode_var);
            if ((lVar15 == 0) || (*(long *)(lVar15 + 0x18) == 0)) goto LAB_0308cd10;
            FUN_022158dc(*(long *)(lVar15 + 0x18),auVar27._8_8_,
                         *(undefined8 *)System_Xml_Schema_XmlAtomicValue_var);
            if (0 < (int)in_stack_00000038) {
              if (unaff_x22 == (long *)0x0) goto LAB_0308cd10;
              uVar20 = 0;
              do {
                lVar18 = *unaff_x22;
                puVar19 = (undefined4 *)(auVar27._0_8_ + uVar20 * 0xc);
                lVar25 = *(long *)(lVar15 + 0x18);
                uVar32 = puVar19[1];
                uVar30 = puVar19[2];
                uVar34 = *puVar19;
                uVar21 = (ulong)*(ushort *)(lVar18 + 0x12e);
                if (uVar21 != 0) {
                  piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar23 + -2) == *(long *)puVar5) {
                      puVar13 = (undefined8 *)(lVar18 + (long)*piVar23 * 0x10 + 0x138);
                      goto LAB_0308c87c;
                    }
                    uVar21 = uVar21 - 1;
                    piVar23 = piVar23 + 4;
                  } while (uVar21 != 0);
                }
                puVar13 = (undefined8 *)FUN_01a472ec();
LAB_0308c87c:
                uVar34 = (*(code *)*puVar13)(uVar34);
                if (lVar25 == 0) goto LAB_0308cd10;
                uStack00000000000000b0 = uVar34;
                uStack00000000000000b4 = uVar32;
                uStack00000000000000b8 = uVar30;
                FUN_01b5f01c(lVar25,&stack0x000000b0,*(undefined8 *)puVar6);
                uVar20 = uVar20 + 1;
              } while (uVar20 != uVar24);
            }
          }
          if (bVar11 != false) {
            auVar27 = FUN_01f7f7e8(in_stack_00000048,*(undefined4 *)(lVar17 + 0x14),
                                   *(undefined8 *)System_Xml_Linq_XNode_var);
            if ((lVar15 == 0) || (*(long *)(lVar15 + 0x20) == 0)) goto LAB_0308cd10;
            FUN_022158dc(*(long *)(lVar15 + 0x20),auVar27._8_8_,
                         *(undefined8 *)System_Xml_Schema_XmlAtomicValue_var);
            if (0 < (int)in_stack_00000038) {
              if (unaff_x22 == (long *)0x0) goto LAB_0308cd10;
              uVar20 = 0;
              do {
                lVar18 = *unaff_x22;
                puVar19 = (undefined4 *)(auVar27._0_8_ + uVar20 * 0xc);
                lVar25 = *(long *)(lVar15 + 0x20);
                uVar32 = puVar19[1];
                uVar30 = puVar19[2];
                uVar34 = *puVar19;
                uVar21 = (ulong)*(ushort *)(lVar18 + 0x12e);
                if (uVar21 != 0) {
                  piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar23 + -2) == *(long *)puVar5) {
                      puVar13 = (undefined8 *)(lVar18 + (long)*piVar23 * 0x10 + 0x138);
                      goto LAB_0308c970;
                    }
                    uVar21 = uVar21 - 1;
                    piVar23 = piVar23 + 4;
                  } while (uVar21 != 0);
                }
                puVar13 = (undefined8 *)FUN_01a472ec();
LAB_0308c970:
                uVar34 = (*(code *)*puVar13)(uVar34);
                if (lVar25 == 0) goto LAB_0308cd10;
                uStack00000000000000b0 = uVar34;
                uStack00000000000000b4 = uVar32;
                uStack00000000000000b8 = uVar30;
                FUN_01b5f01c(lVar25,&stack0x000000b0,*(undefined8 *)puVar6);
                uVar20 = uVar20 + 1;
              } while (uVar20 != uVar24);
            }
          }
          if (bVar12 != false) {
            auVar27 = FUN_01f7f7e8(in_stack_00000048,*(undefined4 *)(lVar17 + 0x18),
                                   *(undefined8 *)System_Xml_Linq_XNode_var);
            if ((lVar15 == 0) || (*(long *)(lVar15 + 0x28) == 0)) goto LAB_0308cd10;
            FUN_022158dc(*(long *)(lVar15 + 0x28),auVar27._8_8_,
                         *(undefined8 *)System_Xml_Schema_XmlAtomicValue_var);
            if (0 < (int)in_stack_00000038) {
              if (unaff_x22 == (long *)0x0) goto LAB_0308cd10;
              uVar20 = 0;
              do {
                lVar17 = *unaff_x22;
                puVar19 = (undefined4 *)(auVar27._0_8_ + uVar20 * 0xc);
                lVar18 = *(long *)(lVar15 + 0x28);
                uVar32 = puVar19[1];
                uVar30 = puVar19[2];
                uVar34 = *puVar19;
                uVar21 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar21 != 0) {
                  piVar23 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar23 + -2) == *(long *)puVar5) {
                      puVar13 = (undefined8 *)(lVar17 + (long)*piVar23 * 0x10 + 0x138);
                      goto LAB_0308ca64;
                    }
                    uVar21 = uVar21 - 1;
                    piVar23 = piVar23 + 4;
                  } while (uVar21 != 0);
                }
                puVar13 = (undefined8 *)FUN_01a472ec();
LAB_0308ca64:
                uVar34 = (*(code *)*puVar13)(uVar34);
                if (lVar18 == 0) goto LAB_0308cd10;
                uStack00000000000000b0 = uVar34;
                uStack00000000000000b4 = uVar32;
                uStack00000000000000b8 = uVar30;
                FUN_01b5f01c(lVar18,&stack0x000000b0,*(undefined8 *)puVar6);
                uVar20 = uVar20 + 1;
              } while (uVar20 != uVar24);
            }
          }
          in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + 1;
          lVar17 = *(long *)(in_stack_00000018 + 0x28);
          if (lVar17 == 0) goto LAB_0308cd10;
        } while (in_stack_000000f8._4_4_ < *(int *)(lVar17 + 0x18));
      }
      puVar9 = System_Xml_Linq_XObject_var;
      puVar8 = FMOD_FILE_ASYNCREAD_CALLBACK_var;
      puVar6 = FMOD_FILE_ASYNCCANCEL_CALLBACK_var;
      puVar7 = UnityEngine_XR_Eyes_var;
      puVar5 = PTR_DAT_03cbe508;
      if (*(long *)(in_stack_00000008 + 0x18) != 0) {
        Animancer_FadeGroup__get_TargetWeight
                  (*(long *)(in_stack_00000008 + 0x18),&stack0x000000b0,
                   *(undefined8 *)FMOD_FILE_CLOSE_CALLBACK_var);
        in_stack_000000e0 = CONCAT44(uStack00000000000000b4,uStack00000000000000b0);
        auVar27._8_4_ = uStack00000000000000b8;
        auVar27._0_8_ = in_stack_000000e0;
        auVar27._12_4_ = uStack00000000000000bc;
        in_stack_000000f0 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
        in_stack_000000e8 = auVar27._8_8_;
        do {
          uVar24 = FUN_021b51c8(&stack0x000000e0,*(undefined8 *)puVar6);
          if ((uVar24 & 1) == 0) {
            FUN_021b51c4(&stack0x000000e0,*(undefined8 *)puVar7);
            return;
          }
          FUN_01b7a454(&stack0x000000e0,&stack0x000000b0,*(undefined8 *)puVar8);
          lVar17 = CONCAT44(uStack00000000000000b4,uStack00000000000000b0);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          uVar32 = *(undefined4 *)(unaff_x20 + 0x14);
          if (*(int *)(lVar17 + 0x14) < 0) {
            if (*(long *)(in_stack_00000048 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            if (*(long *)(lVar17 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            lVar15 = *(long *)(*(long *)(in_stack_00000048 + 0x28) + 0x28);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            FUN_02215a88(lVar15,*(undefined4 *)(*(long *)(lVar17 + 0x18) + 0x10),&stack0x000000b0,
                         *(undefined8 *)PTR_DAT_03cd8108);
            lVar15 = CONCAT44(uStack00000000000000b4,uStack00000000000000b0);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            iVar2 = *(int *)(lVar15 + 0x2c);
            if (0 < iVar2) {
              lVar18 = *(long *)(unaff_x20 + 0x18);
              iVar22 = 2;
              do {
                *(int *)(lVar18 + (long)*(int *)(unaff_x20 + 0x14) * 4) = iVar22;
                iVar2 = *(int *)(unaff_x20 + 0x14) + 1;
                *(int *)(unaff_x20 + 0x14) = iVar2;
                *(int *)(lVar18 + (long)iVar2 * 4) = iVar22 + -1;
                iVar2 = *(int *)(unaff_x20 + 0x14) + 1;
                *(int *)(unaff_x20 + 0x14) = iVar2;
                *(int *)(lVar18 + (long)iVar2 * 4) = iVar22 + -2;
                *(int *)(unaff_x20 + 0x14) = *(int *)(unaff_x20 + 0x14) + 1;
                iVar2 = *(int *)(lVar15 + 0x2c);
                iVar1 = iVar22 + 1;
                iVar22 = iVar22 + 3;
              } while (iVar1 < iVar2);
            }
            lVar15 = *(long *)(unaff_x20 + 0x58);
            uStack00000000000000c8 = 0;
            uStack00000000000000cc = 0;
            uStack00000000000000c0 = 0;
            uStack00000000000000c4 = 0;
            in_stack_000000d8 = 0;
            in_stack_000000d0 = 0;
            uStack00000000000000b8 = 0;
            uStack00000000000000bc = 0;
            uStack00000000000000b0 = 0;
            uStack00000000000000b4 = 0;
            FUN_036edfe4(&stack0x000000b0,uVar32,iVar2,0,0);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            in_stack_00000050 = CONCAT44(uStack00000000000000b4,uStack00000000000000b0);
            auVar4._8_4_ = uStack00000000000000b8;
            auVar4._0_8_ = in_stack_00000050;
            auVar4._12_4_ = uStack00000000000000bc;
            in_stack_00000068 = CONCAT44(uStack00000000000000cc,uStack00000000000000c8);
            in_stack_00000060 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
            in_stack_00000058 = auVar4._8_8_;
            in_stack_00000078 = in_stack_000000d8;
            in_stack_00000070 = in_stack_000000d0;
            FUN_01b5f01c(lVar15,&stack0x00000050,*(undefined8 *)puVar9);
          }
          else {
            lVar15 = FUN_03076fac(in_stack_00000048,*(int *)(lVar17 + 0x14),0);
            FUN_0308e24c();
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            lVar18 = *(long *)(unaff_x20 + 0x58);
            uStack00000000000000c8 = 0;
            uStack00000000000000cc = 0;
            uStack00000000000000c0 = 0;
            uStack00000000000000c4 = 0;
            in_stack_000000d8 = 0;
            in_stack_000000d0 = 0;
            uStack00000000000000b8 = 0;
            uStack00000000000000bc = 0;
            uStack00000000000000b0 = 0;
            uStack00000000000000b4 = 0;
            FUN_036edfe4(&stack0x000000b0,uVar32,*(undefined4 *)(lVar15 + 0x30),0,0);
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            in_stack_00000080 = CONCAT44(uStack00000000000000b4,uStack00000000000000b0);
            auVar3._8_4_ = uStack00000000000000b8;
            auVar3._0_8_ = in_stack_00000080;
            auVar3._12_4_ = uStack00000000000000bc;
            in_stack_00000098 = CONCAT44(uStack00000000000000cc,uStack00000000000000c8);
            in_stack_00000090 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
            in_stack_00000088 = auVar3._8_8_;
            in_stack_000000a8 = in_stack_000000d8;
            in_stack_000000a0 = in_stack_000000d0;
            FUN_01b5f01c(lVar18,&stack0x00000080,*(undefined8 *)puVar9);
          }
          if (*(long *)(unaff_x20 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          uStack00000000000000b0 = *(undefined4 *)(lVar17 + 0x20);
          FUN_01b5f01c(*(long *)(unaff_x20 + 0x60),&stack0x000000b0,*(undefined8 *)puVar5);
        } while( true );
      }
    }
  }
LAB_0308cd10:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


