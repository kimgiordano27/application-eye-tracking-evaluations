/*
FUNCTION_NAME: Unity.Entities.EnabledBitUtility.ShiftRightBurstForTests_00000A52$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 0308c2a0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;eye_or_gaze_keyword_boost_only
*/


void Unity_Entities_EnabledBitUtility_ShiftRightBurstForTests_00000A52_PostfixBurstDelegate__Invoke
               (long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  long lVar11;
  char *pcVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  undefined4 *puVar21;
  int *piVar22;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x26;
  ulong uVar23;
  long unaff_x28;
  long lVar24;
  long *unaff_x29;
  undefined4 uVar25;
  undefined8 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 unaff_s10;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 auVar33 [16];
  long in_stack_00000008;
  ulong in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  uint in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
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
  long in_stack_000000b0;
  undefined4 uStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  undefined4 uStack00000000000000c0;
  undefined4 uStack00000000000000c4;
  undefined4 uStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  long in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  long in_stack_00000100;
  undefined4 in_stack_00000108;
  undefined4 uStack0000000000000110;
  undefined8 uStack0000000000000114;
  
  do {
    lVar11 = *(long *)(param_1 + 0x20);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_01a46ff8();
    }
    pcVar12 = (char *)thunk_FUN_01a59484(&stack0x00000180,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80));
    if (*pcVar12 == '\0') {
      if (DAT_0411f172 == '\0') {
        FUN_01ab69ac(PTR_DAT_03cbded8);
        DAT_0411f172 = '\x01';
      }
      puVar21 = *(undefined4 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
      uVar30 = *puVar21;
      uVar29 = puVar21[1];
      uVar28 = puVar21[2];
    }
    else {
      FUN_022412e0(&stack0x00000180,&stack0x000000b0,*(undefined8 *)System_Xml_XmlNode_var);
      lVar11 = *unaff_x22;
      puVar21 = (undefined4 *)(in_stack_000000b0 + unaff_x28 * 0xc);
      uVar18 = (ulong)*(ushort *)(lVar11 + 0x12e);
      uVar30 = *puVar21;
      uVar29 = puVar21[1];
      uVar28 = puVar21[2];
      if (uVar18 != 0) {
        piVar22 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *unaff_x29) {
            puVar13 = (undefined8 *)(lVar11 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_0308c388;
          }
          uVar18 = uVar18 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar18 != 0);
      }
      puVar13 = (undefined8 *)FUN_01a472ec();
LAB_0308c388:
      uVar30 = (*(code *)*puVar13)(uVar30);
    }
    if (*(char *)(unaff_x23 + 0x1e3) == '\0') {
      FUN_01ab69ac();
      *(undefined1 *)(unaff_x23 + 0x1e3) = 1;
    }
    lVar11 = *(long *)(*unaff_x19 + 0x20);
    uVar31 = **(undefined4 **)(*unaff_x21 + 0xb8);
    uVar32 = (*(undefined4 **)(*unaff_x21 + 0xb8))[1];
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_01a46ff8();
    }
    pcVar12 = (char *)thunk_FUN_01a59484(&stack0x00000160,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80));
    if (*pcVar12 != '\0') {
      FUN_022412e0(&stack0x00000160,&stack0x000000b0,
                   *(undefined8 *)System_Xml_Serialization_XmlIgnoreAttribute_var);
      puVar21 = (undefined4 *)(in_stack_000000b0 + unaff_x28 * 8);
      uVar32 = puVar21[1];
      if ((in_stack_00000010 & 0x100000000) == 0) {
        uVar31 = FUN_0304ece0(*puVar21,0);
      }
      else {
        uVar31 = FUN_0304ecd8(0);
      }
    }
    lVar11 = *(long *)(*unaff_x19 + 0x20);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_01a46ff8();
    }
    pcVar12 = (char *)thunk_FUN_01a59484(&stack0x00000140,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80));
    if (*pcVar12 == '\0') {
      if (*(char *)(unaff_x23 + 0x1e3) == '\0') {
        FUN_01ab69ac();
        *(undefined1 *)(unaff_x23 + 0x1e3) = 1;
      }
      uVar25 = **(undefined4 **)(*unaff_x21 + 0xb8);
      uVar27 = (*(undefined4 **)(*unaff_x21 + 0xb8))[1];
    }
    else {
      FUN_022412e0(&stack0x00000140,&stack0x000000b0,
                   *(undefined8 *)System_Xml_Serialization_XmlIgnoreAttribute_var);
      puVar21 = (undefined4 *)(in_stack_000000b0 + unaff_x28 * 8);
      uVar27 = puVar21[1];
      uVar25 = FUN_0304ece0(*puVar21,0);
    }
    lVar11 = *(long *)(*(long *)System_Xml_XmlDocument_var + 0x20);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_01a46ff8();
    }
    pcVar12 = (char *)thunk_FUN_01a59484(&stack0x00000120,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80));
    uVar15 = in_stack_00000020;
    uVar26 = in_stack_00000028;
    if (*pcVar12 != '\0') {
      FUN_022412e0(&stack0x00000120,&stack0x000000b0,*(undefined8 *)System_Xml_XmlQualifiedName_var)
      ;
      puVar13 = (undefined8 *)(in_stack_000000b0 + unaff_x28 * 0x10);
      uVar26 = puVar13[1];
      uVar15 = *puVar13;
    }
    puVar21 = (undefined4 *)(*(long *)(unaff_x20 + 0x28) + (long)*(int *)(unaff_x20 + 0x10) * 0x18);
    *puVar21 = unaff_s10;
    puVar21[1] = uStack0000000000000044;
    puVar21[4] = uVar29;
    puVar21[5] = uVar28;
    puVar21[2] = uStack0000000000000040;
    puVar21[3] = uVar30;
    puVar13 = (undefined8 *)(*(long *)(unaff_x20 + 0x38) + (long)*(int *)(unaff_x20 + 0x10) * 0x20);
    puVar13[1] = uVar26;
    *puVar13 = uVar15;
    *(undefined4 *)(puVar13 + 2) = uVar31;
    *(undefined4 *)((long)puVar13 + 0x14) = uVar32;
    *(undefined4 *)(puVar13 + 3) = uVar25;
    *(undefined4 *)((long)puVar13 + 0x1c) = uVar27;
    FUN_0308f720(&stack0x000000b0);
    uStack0000000000000114 = CONCAT44(uStack00000000000000c8,uStack00000000000000c4);
    in_stack_00000108 = uStack00000000000000b8;
    in_stack_00000100 = in_stack_000000b0;
    uStack0000000000000110 = uStack00000000000000c0;
    lVar11 = *(long *)(*(long *)System_Xml_XmlAttribute_var + 0x20);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_01a46ff8();
    }
    pcVar12 = (char *)thunk_FUN_01a59484(&stack0x00000100,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80));
    if (*pcVar12 != '\0') {
      iVar2 = *(int *)(unaff_x20 + 0x10);
      FUN_022412e0(&stack0x00000100,&stack0x000000b0,
                   *(undefined8 *)System_Xml_Serialization_XmlIncludeAttribute_var);
      plVar16 = (long *)(*(long *)(unaff_x20 + 0x48) + (long)iVar2 * 0x18);
      plVar16[2] = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
      plVar16[1] = CONCAT44(uStack00000000000000bc,uStack00000000000000b8);
      *plVar16 = in_stack_000000b0;
    }
    unaff_x28 = unaff_x28 + 1;
    *(int *)(unaff_x20 + 0x10) = *(int *)(unaff_x20 + 0x10) + 1;
    puVar3 = PTR_DAT_03cc5740;
    if (unaff_x28 == unaff_x24) break;
    puVar21 = (undefined4 *)(unaff_x26 + unaff_x28 * 0xc);
    lVar11 = *unaff_x22;
    uStack0000000000000044 = puVar21[1];
    uStack0000000000000040 = puVar21[2];
    uVar30 = *puVar21;
    uVar18 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar18 != 0) {
      piVar22 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *unaff_x29) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_0308c274;
        }
        uVar18 = uVar18 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar18 != 0);
    }
    puVar13 = (undefined8 *)FUN_01a472ec();
LAB_0308c274:
    unaff_s10 = (*(code *)*puVar13)(uVar30);
    param_1 = *(long *)System_Xml_XmlElement_var;
  } while( true );
  if (in_stack_00000018 != 0) {
    lVar11 = *(long *)(in_stack_00000018 + 0x28);
    if ((lVar11 != 0) && (0 < *(int *)(lVar11 + 0x18))) {
      in_stack_000000f8._4_4_ = 0;
      uVar18 = (ulong)in_stack_00000038;
      do {
        FUN_02215a88(lVar11,in_stack_000000f8._4_4_,&stack0x000000b0,
                     *(undefined8 *)System_Xml_XPath_XPathNavigator_var);
        lVar11 = in_stack_000000b0;
        if (in_stack_000000b0 == 0) goto LAB_0308cd10;
        if (*(int *)(in_stack_000000b0 + 0x10) == -1) {
          bVar8 = false;
        }
        else {
          if (((*(long *)(in_stack_00000048 + 0x28) == 0) ||
              (lVar14 = *(long *)(*(long *)(in_stack_00000048 + 0x28) + 0x28), lVar14 == 0)) ||
             (FUN_02215a88(lVar14,*(int *)(in_stack_000000b0 + 0x10),&stack0x000000b0,
                           *(undefined8 *)PTR_DAT_03cd8108), in_stack_000000b0 == 0))
          goto LAB_0308cd10;
          bVar8 = *(uint *)(in_stack_000000b0 + 0x2c) == in_stack_00000038;
        }
        if (*(int *)(lVar11 + 0x14) == -1) {
          bVar9 = false;
        }
        else {
          if (((*(long *)(in_stack_00000048 + 0x28) == 0) ||
              (lVar14 = *(long *)(*(long *)(in_stack_00000048 + 0x28) + 0x28), lVar14 == 0)) ||
             (FUN_02215a88(lVar14,*(int *)(lVar11 + 0x14),&stack0x000000b0,
                           *(undefined8 *)PTR_DAT_03cd8108), in_stack_000000b0 == 0))
          goto LAB_0308cd10;
          bVar9 = *(uint *)(in_stack_000000b0 + 0x2c) == in_stack_00000038;
        }
        if (*(int *)(lVar11 + 0x18) == -1) {
          bVar10 = false;
        }
        else {
          if (((*(long *)(in_stack_00000048 + 0x28) == 0) ||
              (lVar14 = *(long *)(*(long *)(in_stack_00000048 + 0x28) + 0x28), lVar14 == 0)) ||
             (FUN_02215a88(lVar14,*(int *)(lVar11 + 0x18),&stack0x000000b0,
                           *(undefined8 *)PTR_DAT_03cd8108), in_stack_000000b0 == 0))
          goto LAB_0308cd10;
          bVar10 = *(uint *)(in_stack_000000b0 + 0x2c) == in_stack_00000038;
        }
        uVar15 = FUN_0276793c((long)&stack0x000000f8 + 4,0);
        lVar14 = thunk_FUN_01a89e68(*(undefined8 *)System_Xml_Linq_XDocument_var);
        FUN_0304eb1c(lVar14,uVar15,in_stack_00000038,bVar8,bVar9,bVar10,0);
        if (*(long *)(unaff_x20 + 0x68) == 0) goto LAB_0308cd10;
        FUN_01b5f01c(*(long *)(unaff_x20 + 0x68),lVar14,
                     *(undefined8 *)System_Xml_XPath_XPathItem_var);
        puVar4 = System_Text_EncoderFallback_var;
        if (bVar8 != false) {
          auVar33 = FUN_01f7f7e8(in_stack_00000048,*(undefined4 *)(lVar11 + 0x10),
                                 *(undefined8 *)System_Xml_Linq_XNode_var);
          if ((lVar14 == 0) || (*(long *)(lVar14 + 0x18) == 0)) goto LAB_0308cd10;
          FUN_022158dc(*(long *)(lVar14 + 0x18),auVar33._8_8_,
                       *(undefined8 *)System_Xml_Schema_XmlAtomicValue_var);
          if (0 < (int)in_stack_00000038) {
            if (unaff_x22 == (long *)0x0) goto LAB_0308cd10;
            uVar23 = 0;
            do {
              lVar17 = *unaff_x22;
              puVar21 = (undefined4 *)(auVar33._0_8_ + uVar23 * 0xc);
              lVar24 = *(long *)(lVar14 + 0x18);
              uVar30 = puVar21[1];
              uVar29 = puVar21[2];
              uVar28 = *puVar21;
              uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar19 != 0) {
                piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar22 + -2) == *(long *)puVar4) {
                    puVar13 = (undefined8 *)(lVar17 + (long)*piVar22 * 0x10 + 0x138);
                    goto LAB_0308c87c;
                  }
                  uVar19 = uVar19 - 1;
                  piVar22 = piVar22 + 4;
                } while (uVar19 != 0);
              }
              puVar13 = (undefined8 *)FUN_01a472ec();
LAB_0308c87c:
              uVar28 = (*(code *)*puVar13)(uVar28);
              if (lVar24 == 0) goto LAB_0308cd10;
              in_stack_000000b0 = CONCAT44(uVar30,uVar28);
              uStack00000000000000b8 = uVar29;
              FUN_01b5f01c(lVar24,&stack0x000000b0,*(undefined8 *)puVar3);
              uVar23 = uVar23 + 1;
            } while (uVar23 != uVar18);
          }
        }
        if (bVar9 != false) {
          auVar33 = FUN_01f7f7e8(in_stack_00000048,*(undefined4 *)(lVar11 + 0x14),
                                 *(undefined8 *)System_Xml_Linq_XNode_var);
          if ((lVar14 == 0) || (*(long *)(lVar14 + 0x20) == 0)) goto LAB_0308cd10;
          FUN_022158dc(*(long *)(lVar14 + 0x20),auVar33._8_8_,
                       *(undefined8 *)System_Xml_Schema_XmlAtomicValue_var);
          if (0 < (int)in_stack_00000038) {
            if (unaff_x22 == (long *)0x0) goto LAB_0308cd10;
            uVar23 = 0;
            do {
              lVar17 = *unaff_x22;
              puVar21 = (undefined4 *)(auVar33._0_8_ + uVar23 * 0xc);
              lVar24 = *(long *)(lVar14 + 0x20);
              uVar30 = puVar21[1];
              uVar29 = puVar21[2];
              uVar28 = *puVar21;
              uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar19 != 0) {
                piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar22 + -2) == *(long *)puVar4) {
                    puVar13 = (undefined8 *)(lVar17 + (long)*piVar22 * 0x10 + 0x138);
                    goto LAB_0308c970;
                  }
                  uVar19 = uVar19 - 1;
                  piVar22 = piVar22 + 4;
                } while (uVar19 != 0);
              }
              puVar13 = (undefined8 *)FUN_01a472ec();
LAB_0308c970:
              uVar28 = (*(code *)*puVar13)(uVar28);
              if (lVar24 == 0) goto LAB_0308cd10;
              in_stack_000000b0 = CONCAT44(uVar30,uVar28);
              uStack00000000000000b8 = uVar29;
              FUN_01b5f01c(lVar24,&stack0x000000b0,*(undefined8 *)puVar3);
              uVar23 = uVar23 + 1;
            } while (uVar23 != uVar18);
          }
        }
        if (bVar10 != false) {
          auVar33 = FUN_01f7f7e8(in_stack_00000048,*(undefined4 *)(lVar11 + 0x18),
                                 *(undefined8 *)System_Xml_Linq_XNode_var);
          if ((lVar14 == 0) || (*(long *)(lVar14 + 0x28) == 0)) goto LAB_0308cd10;
          FUN_022158dc(*(long *)(lVar14 + 0x28),auVar33._8_8_,
                       *(undefined8 *)System_Xml_Schema_XmlAtomicValue_var);
          if (0 < (int)in_stack_00000038) {
            if (unaff_x22 == (long *)0x0) goto LAB_0308cd10;
            uVar23 = 0;
            do {
              lVar11 = *unaff_x22;
              puVar21 = (undefined4 *)(auVar33._0_8_ + uVar23 * 0xc);
              lVar17 = *(long *)(lVar14 + 0x28);
              uVar30 = puVar21[1];
              uVar29 = puVar21[2];
              uVar28 = *puVar21;
              uVar19 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar19 != 0) {
                piVar22 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar22 + -2) == *(long *)puVar4) {
                    puVar13 = (undefined8 *)(lVar11 + (long)*piVar22 * 0x10 + 0x138);
                    goto LAB_0308ca64;
                  }
                  uVar19 = uVar19 - 1;
                  piVar22 = piVar22 + 4;
                } while (uVar19 != 0);
              }
              puVar13 = (undefined8 *)FUN_01a472ec();
LAB_0308ca64:
              uVar28 = (*(code *)*puVar13)(uVar28);
              if (lVar17 == 0) goto LAB_0308cd10;
              in_stack_000000b0 = CONCAT44(uVar30,uVar28);
              uStack00000000000000b8 = uVar29;
              FUN_01b5f01c(lVar17,&stack0x000000b0,*(undefined8 *)puVar3);
              uVar23 = uVar23 + 1;
            } while (uVar23 != uVar18);
          }
        }
        in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + 1;
        lVar11 = *(long *)(in_stack_00000018 + 0x28);
        if (lVar11 == 0) goto LAB_0308cd10;
      } while (in_stack_000000f8._4_4_ < *(int *)(lVar11 + 0x18));
    }
    puVar7 = System_Xml_Linq_XObject_var;
    puVar6 = FMOD_FILE_ASYNCREAD_CALLBACK_var;
    puVar5 = FMOD_FILE_ASYNCCANCEL_CALLBACK_var;
    puVar4 = UnityEngine_XR_Eyes_var;
    puVar3 = PTR_DAT_03cbe508;
    if (*(long *)(in_stack_00000008 + 0x18) != 0) {
      Animancer_FadeGroup__get_TargetWeight
                (*(long *)(in_stack_00000008 + 0x18),&stack0x000000b0,
                 *(undefined8 *)FMOD_FILE_CLOSE_CALLBACK_var);
      in_stack_000000e8 = CONCAT44(uStack00000000000000bc,uStack00000000000000b8);
      in_stack_000000f0 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
      in_stack_000000e0 = in_stack_000000b0;
      do {
        uVar18 = FUN_021b51c8(&stack0x000000e0,*(undefined8 *)puVar5);
        if ((uVar18 & 1) == 0) {
          FUN_021b51c4(&stack0x000000e0,*(undefined8 *)puVar4);
          return;
        }
        FUN_01b7a454(&stack0x000000e0,&stack0x000000b0,*(undefined8 *)puVar6);
        lVar11 = in_stack_000000b0;
        if (in_stack_000000b0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar30 = *(undefined4 *)(unaff_x20 + 0x14);
        if (*(int *)(in_stack_000000b0 + 0x14) < 0) {
          if (*(long *)(in_stack_00000048 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(long *)(in_stack_000000b0 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar14 = *(long *)(*(long *)(in_stack_00000048 + 0x28) + 0x28);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_02215a88(lVar14,*(undefined4 *)(*(long *)(in_stack_000000b0 + 0x18) + 0x10),
                       &stack0x000000b0,*(undefined8 *)PTR_DAT_03cd8108);
          if (in_stack_000000b0 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          iVar2 = *(int *)(in_stack_000000b0 + 0x2c);
          if (0 < iVar2) {
            lVar14 = *(long *)(unaff_x20 + 0x18);
            iVar20 = 2;
            do {
              *(int *)(lVar14 + (long)*(int *)(unaff_x20 + 0x14) * 4) = iVar20;
              iVar2 = *(int *)(unaff_x20 + 0x14) + 1;
              *(int *)(unaff_x20 + 0x14) = iVar2;
              *(int *)(lVar14 + (long)iVar2 * 4) = iVar20 + -1;
              iVar2 = *(int *)(unaff_x20 + 0x14) + 1;
              *(int *)(unaff_x20 + 0x14) = iVar2;
              *(int *)(lVar14 + (long)iVar2 * 4) = iVar20 + -2;
              *(int *)(unaff_x20 + 0x14) = *(int *)(unaff_x20 + 0x14) + 1;
              iVar2 = *(int *)(in_stack_000000b0 + 0x2c);
              iVar1 = iVar20 + 1;
              iVar20 = iVar20 + 3;
            } while (iVar1 < iVar2);
          }
          lVar14 = *(long *)(unaff_x20 + 0x58);
          uStack00000000000000c8 = 0;
          uStack00000000000000cc = 0;
          uStack00000000000000c0 = 0;
          uStack00000000000000c4 = 0;
          in_stack_000000d8 = 0;
          in_stack_000000d0 = 0;
          uStack00000000000000b8 = 0;
          uStack00000000000000bc = 0;
          in_stack_000000b0 = 0;
          FUN_036edfe4(&stack0x000000b0,uVar30,iVar2,0,0);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          in_stack_00000058 = CONCAT44(uStack00000000000000bc,uStack00000000000000b8);
          in_stack_00000068 = CONCAT44(uStack00000000000000cc,uStack00000000000000c8);
          in_stack_00000060 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
          in_stack_00000050 = in_stack_000000b0;
          in_stack_00000078 = in_stack_000000d8;
          in_stack_00000070 = in_stack_000000d0;
          FUN_01b5f01c(lVar14,&stack0x00000050,*(undefined8 *)puVar7);
        }
        else {
          lVar14 = FUN_03076fac(in_stack_00000048,*(int *)(in_stack_000000b0 + 0x14),0);
          FUN_0308e24c();
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar17 = *(long *)(unaff_x20 + 0x58);
          uStack00000000000000c8 = 0;
          uStack00000000000000cc = 0;
          uStack00000000000000c0 = 0;
          uStack00000000000000c4 = 0;
          in_stack_000000d8 = 0;
          in_stack_000000d0 = 0;
          uStack00000000000000b8 = 0;
          uStack00000000000000bc = 0;
          in_stack_000000b0 = 0;
          FUN_036edfe4(&stack0x000000b0,uVar30,*(undefined4 *)(lVar14 + 0x30),0,0);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          in_stack_00000088 = CONCAT44(uStack00000000000000bc,uStack00000000000000b8);
          in_stack_00000098 = CONCAT44(uStack00000000000000cc,uStack00000000000000c8);
          in_stack_00000090 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
          in_stack_00000080 = in_stack_000000b0;
          in_stack_000000a8 = in_stack_000000d8;
          in_stack_000000a0 = in_stack_000000d0;
          FUN_01b5f01c(lVar17,&stack0x00000080,*(undefined8 *)puVar7);
        }
        if (*(long *)(unaff_x20 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        in_stack_000000b0 = CONCAT44(in_stack_000000b0._4_4_,*(undefined4 *)(lVar11 + 0x20));
        FUN_01b5f01c(*(long *)(unaff_x20 + 0x60),&stack0x000000b0,*(undefined8 *)puVar3);
      } while( true );
    }
  }
LAB_0308cd10:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


