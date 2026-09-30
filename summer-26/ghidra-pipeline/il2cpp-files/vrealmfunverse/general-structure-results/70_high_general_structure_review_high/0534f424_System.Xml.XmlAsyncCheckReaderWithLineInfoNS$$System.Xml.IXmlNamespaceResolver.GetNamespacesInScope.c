/*
FUNCTION_NAME: System.Xml.XmlAsyncCheckReaderWithLineInfoNS$$System.Xml.IXmlNamespaceResolver.GetNamespacesInScope
ENTRY_POINT: 0534f424
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_4;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


long * System_Xml_XmlAsyncCheckReaderWithLineInfoNS__System_Xml_IXmlNamespaceResolver_GetNamespacesInScope
                 (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined1 uVar16;
  undefined2 uVar17;
  undefined4 uVar18;
  int iVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  char *pcVar23;
  int *piVar24;
  undefined8 *puVar25;
  undefined2 *puVar26;
  undefined4 *puVar27;
  undefined1 *puVar28;
  undefined8 uVar29;
  long *plVar30;
  long *unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  undefined1 auVar31 [16];
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000078;
  undefined4 uStack0000000000000084;
  undefined8 uStack0000000000000088;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  undefined4 uStack00000000000000b0;
  undefined8 uStack00000000000000c0;
  undefined4 uStack00000000000000c8;
  undefined2 uStack00000000000000d0;
  undefined1 uStack00000000000000d4;
  undefined8 uStack00000000000000d8;
  ulong in_stack_000000e0;
  ulong in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  long in_stack_00000108;
  
  *(undefined1 *)(unaff_x23 + 0x632) = 1;
  uStack00000000000000d8 = 0;
  uStack00000000000000d4 = 0;
  uStack00000000000000d0 = 0;
  uStack00000000000000c8 = 0;
  uStack00000000000000c0 = 0;
  uStack00000000000000a0 = 0;
  uStack00000000000000a8 = 0;
  uStack00000000000000b0 = 0;
  uStack0000000000000090 = 0;
  uStack0000000000000098 = 0;
  uStack0000000000000088 = 0;
  uStack0000000000000084 = 0;
  uStack0000000000000078 = 0;
  uStack0000000000000060 = 0;
  uStack0000000000000068 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  uStack0000000000000048 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000020 = 0;
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar18 = FUN_0534cfe8();
  if (unaff_x19 == (long *)0x0) {
    if (*(long *)(unaff_x21 + 0x28) == in_stack_00000108) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    goto LAB_05350f44;
  }
  thunk_FUN_02b4c898();
  iVar19 = FUN_0534cfe8();
  puVar15 = PTR_DAT_0632e6c8;
  puVar3 = PTR_DAT_0631ec98;
  puVar2 = PTR_DAT_06317490;
  puVar1 = PTR_DAT_06312310;
  switch(uVar18) {
  case 3:
    if (*unaff_x19 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      uVar21 = thunk_FUN_04c08854(*(undefined8 *)PTR_DAT_0631b830);
      if ((uVar21 & 1) == 0) {
        if (*unaff_x19 != *(long *)(puVar1 + 0x90)) break;
        uVar21 = thunk_FUN_04c08854(*(undefined8 *)PTR_DAT_06317138);
        if ((uVar21 & 1) == 0) {
          if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          if (*unaff_x19 != *(long *)(puVar1 + 0x90)) break;
          uVar16 = FUN_0558107c();
          uVar29 = *(undefined8 *)(puVar1 + 0x28);
          in_stack_000000e0 = CONCAT71(in_stack_000000e0._1_7_,uVar16) & 0xffffffffffffff01;
        }
        else {
          uVar29 = *(undefined8 *)(puVar1 + 0x28);
          in_stack_000000e0 = in_stack_000000e0 & 0xffffffffffffff00;
        }
      }
      else {
        uVar29 = *(undefined8 *)(puVar1 + 0x28);
        in_stack_000000e0 = CONCAT71(in_stack_000000e0._1_7_,1);
      }
      goto LAB_05350118;
    }
    break;
  case 4:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    puVar1 = PTR_DAT_06312310;
    if (*unaff_x19 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      uVar17 = FUN_055814dc();
      uVar29 = *(undefined8 *)(puVar1 + 0x88);
LAB_0534fcd0:
      in_stack_000000e0 = CONCAT62(in_stack_000000e0._2_6_,uVar17);
      goto LAB_05350118;
    }
    break;
  case 5:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    puVar1 = PTR_DAT_06312310;
    if (*unaff_x19 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      uVar16 = FUN_05581b20();
      uVar29 = *(undefined8 *)(puVar1 + 0x30);
System_Xml_XmlAsyncCheckWriter__WriteStartDocument:
      in_stack_000000e0 = CONCAT71(in_stack_000000e0._1_7_,uVar16);
      goto LAB_05350118;
    }
    break;
  case 6:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    puVar1 = PTR_DAT_06312310;
    if (*unaff_x19 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      uVar16 = FUN_05582160();
      uVar29 = *(undefined8 *)(puVar1 + 0x18);
      goto System_Xml_XmlAsyncCheckWriter__WriteStartDocument;
    }
    break;
  case 7:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    puVar1 = PTR_DAT_06312310;
    if (*unaff_x19 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      uVar17 = FUN_05581cb0();
      uVar29 = *(undefined8 *)(puVar1 + 0x38);
      goto LAB_0534fcd0;
    }
    break;
  case 8:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    puVar1 = PTR_DAT_06312310;
    if (*unaff_x19 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      uVar17 = FUN_055822f0();
      uVar29 = *(undefined8 *)(puVar1 + 0x40);
      goto LAB_0534fcd0;
    }
    break;
  case 9:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    puVar1 = PTR_DAT_06312310;
    if (*unaff_x19 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      uVar18 = FUN_05581e40();
      uVar29 = *(undefined8 *)(puVar1 + 0x48);
LAB_0534f978:
      in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar18);
      goto LAB_05350118;
    }
    break;
  case 10:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    puVar1 = PTR_DAT_06312310;
    if (*unaff_x19 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      uVar18 = System_Net_ExceptionHelper__get_PropertyNotSupportedException();
      uVar29 = *(undefined8 *)(puVar1 + 0x50);
      goto LAB_0534f978;
    }
    break;
  case 0xb:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    puVar1 = PTR_DAT_06312310;
    if (*unaff_x19 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      uVar29 = FUN_05581fd0();
      in_stack_000000e0 = uVar29;
      uVar29 = *(undefined8 *)(puVar1 + 0x68);
      goto LAB_05350118;
    }
    break;
  case 0xc:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    puVar1 = PTR_DAT_06312310;
    if (*unaff_x19 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      uVar29 = FUN_05582610();
      in_stack_000000e0 = uVar29;
      uVar29 = *(undefined8 *)(puVar1 + 0x70);
      goto LAB_05350118;
    }
    break;
  case 0xd:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    puVar1 = PTR_DAT_06312310;
    if (*unaff_x19 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      uVar18 = FUN_055827a0();
      uVar29 = *(undefined8 *)(puVar1 + 0x78);
      in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar18);
      goto LAB_05350118;
    }
    break;
  case 0xe:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    puVar1 = PTR_DAT_06312310;
    if (*unaff_x19 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      uVar29 = FUN_05582b00();
      in_stack_000000e0 = uVar29;
      uVar29 = *(undefined8 *)(puVar1 + 0x80);
      goto LAB_05350118;
    }
    break;
  case 0xf:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (*unaff_x19 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      _in_stack_000000e0 = FUN_05581708();
      puVar25 = (undefined8 *)PTR_DAT_0631c498;
LAB_0534fda4:
      uVar29 = *puVar25;
      goto LAB_05350118;
    }
    break;
  case 0x10:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (*unaff_x19 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      uVar29 = FUN_05583a08();
      puVar25 = (undefined8 *)PTR_DAT_06313c50;
LAB_0534fdf8:
      in_stack_000000e0 = uVar29;
      uVar29 = *puVar25;
      goto LAB_05350118;
    }
    break;
  case 0x11:
    if (iVar19 == 9) {
      piVar24 = (int *)FUN_027629a4();
      lVar22 = (long)*piVar24;
    }
    else {
      if (iVar19 != 0xb) {
        if (iVar19 != 0x12) {
          puVar25 = (undefined8 *)FUN_027629a4();
          in_stack_000000e0 = *puVar25;
          uVar29 = *(undefined8 *)puVar2;
          goto LAB_05350118;
        }
        if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (*unaff_x19 == *(long *)(PTR_DAT_06312310 + 0x90)) {
          uVar29 = FUN_05583080();
          puVar25 = (undefined8 *)PTR_DAT_06317490;
          goto LAB_0534fdf8;
        }
        break;
      }
      plVar30 = (long *)FUN_027629a4();
      lVar22 = *plVar30;
    }
    in_stack_000000e0 = lVar22;
    uVar29 = *(undefined8 *)PTR_DAT_06317490;
LAB_05350118:
    unaff_x19 = (long *)DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody(uVar29);
    goto LAB_05350120;
  default:
    lVar22 = *(long *)PTR_DAT_0632e6c8;
    if (*(int *)(lVar22 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar22 = *(long *)puVar15;
    }
    puVar14 = PTR_DAT_0632ba98;
    puVar13 = PTR_DAT_0631ecd8;
    puVar12 = PTR_DAT_0631ecd0;
    puVar11 = PTR_DAT_0631ecc8;
    puVar10 = PTR_DAT_0631ecc0;
    puVar9 = PTR_DAT_0631ecb8;
    puVar8 = PTR_DAT_0631ecb0;
    puVar7 = PTR_DAT_0631eca8;
    puVar6 = PTR_DAT_0631eca0;
    puVar5 = PTR_DAT_0631ec98;
    puVar4 = PTR_DAT_0631ec90;
    puVar3 = PTR_DAT_0631ec88;
    puVar2 = PTR_DAT_0631ec80;
    puVar1 = PTR_DAT_0631ec78;
    auVar31._8_8_ = in_stack_000000e8;
    auVar31._0_8_ = in_stack_000000e0;
    if ((long *)**(undefined8 **)(lVar22 + 0xb8) == unaff_x19) {
      _in_stack_000000e0 = auVar31;
      if (*(int *)(lVar22 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        unaff_x19 = (long *)**(undefined8 **)(*(long *)puVar15 + 0xb8);
      }
      goto LAB_05350120;
    }
    switch(iVar19) {
    case 3:
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      pcVar23 = (char *)FUN_027629a4();
      if (*(long *)(unaff_x21 + 0x28) == in_stack_00000108) {
        plVar30 = (long *)FUN_055805e8(*pcVar23 != '\0',0);
        return plVar30;
      }
      break;
    case 4:
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      puVar26 = (undefined2 *)FUN_027629a4();
      if (*(long *)(unaff_x21 + 0x28) == in_stack_00000108) {
        plVar30 = (long *)FUN_05580650(*puVar26,0);
        return plVar30;
      }
      break;
    case 5:
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      puVar28 = (undefined1 *)FUN_027629a4();
      if (*(long *)(unaff_x21 + 0x28) == in_stack_00000108) {
        plVar30 = (long *)FUN_05580728(*puVar28,0);
        return plVar30;
      }
      break;
    case 6:
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      puVar28 = (undefined1 *)FUN_027629a4();
      if (*(long *)(unaff_x21 + 0x28) == in_stack_00000108) {
        plVar30 = (long *)FUN_055807d4(*puVar28,0);
        return plVar30;
      }
      break;
    case 7:
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      puVar26 = (undefined2 *)FUN_027629a4();
      if (*(long *)(unaff_x21 + 0x28) == in_stack_00000108) {
        plVar30 = (long *)FUN_05580754(*puVar26,0);
        return plVar30;
      }
      break;
    case 8:
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      puVar26 = (undefined2 *)FUN_027629a4();
      if (*(long *)(unaff_x21 + 0x28) == in_stack_00000108) {
        plVar30 = (long *)FUN_05580800(*puVar26,0);
        return plVar30;
      }
      break;
    case 9:
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      puVar27 = (undefined4 *)FUN_027629a4();
      if (*(long *)(unaff_x21 + 0x28) == in_stack_00000108) {
        plVar30 = (long *)FUN_05580780(*puVar27,0);
        return plVar30;
      }
      break;
    case 10:
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      puVar27 = (undefined4 *)FUN_027629a4();
      if (*(long *)(unaff_x21 + 0x28) == in_stack_00000108) {
        plVar30 = (long *)FUN_0558082c(*puVar27,0);
        return plVar30;
      }
      break;
    case 0xb:
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      puVar25 = (undefined8 *)FUN_027629a4();
      if (*(long *)(unaff_x21 + 0x28) == in_stack_00000108) {
        plVar30 = (long *)FUN_055807ac(*puVar25,0);
        return plVar30;
      }
      break;
    case 0xc:
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      puVar25 = (undefined8 *)FUN_027629a4();
      if (*(long *)(unaff_x21 + 0x28) == in_stack_00000108) {
        plVar30 = (long *)FUN_05580858(*puVar25,0);
        return plVar30;
      }
      break;
    case 0xd:
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      puVar27 = (undefined4 *)FUN_027629a4();
      uVar18 = *puVar27;
      if (*(long *)(unaff_x21 + 0x28) == in_stack_00000108) {
LAB_05350484:
        plVar30 = (long *)FUN_05580880(uVar18,0);
        return plVar30;
      }
      break;
    case 0xe:
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      puVar25 = (undefined8 *)FUN_027629a4();
      if (*(long *)(unaff_x21 + 0x28) == in_stack_00000108) {
        plVar30 = (long *)FUN_055809f0(*puVar25,0);
        return plVar30;
      }
      break;
    case 0xf:
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      puVar25 = (undefined8 *)FUN_027629a4();
      if (*(long *)(unaff_x21 + 0x28) == in_stack_00000108) {
        plVar30 = (long *)FUN_0558068c(*puVar25,puVar25[1],0);
        return plVar30;
      }
      break;
    case 0x10:
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      puVar25 = (undefined8 *)FUN_027629a4();
      if (*(long *)(unaff_x21 + 0x28) == in_stack_00000108) {
        plVar30 = (long *)System_Net_FtpWebRequest__AttemptedRecovery(*puVar25,3,0);
        return plVar30;
      }
      break;
    case 0x11:
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      puVar25 = (undefined8 *)FUN_027629a4();
      if (*(long *)(unaff_x21 + 0x28) == in_stack_00000108) {
        plVar30 = (long *)FUN_05580aec(*puVar25,0);
        return plVar30;
      }
      break;
    case 0x12:
      if (*unaff_x19 == *(long *)(PTR_DAT_06312310 + 0x90)) goto LAB_05350120;
      goto LAB_05350a68;
    case 0x13:
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      puVar25 = (undefined8 *)FUN_027629a4();
      if (*(long *)(unaff_x21 + 0x28) == in_stack_00000108) {
        plVar30 = (long *)FUN_05581058(*puVar25,puVar25[1],0);
        return plVar30;
      }
      break;
    default:
      lVar22 = thunk_FUN_02b79548();
      puVar1 = PTR_DAT_06322180;
      if (lVar22 == 0) {
        lVar22 = thunk_FUN_02b79548();
        if (lVar22 == 0) {
          if (*(long *)(unaff_x21 + 0x28) == in_stack_00000108) {
                    /* WARNING: Could not recover jumptable at 0x05350f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar30 = (long *)(**(code **)(*unaff_x19 + 0x168))();
            return plVar30;
          }
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_06312a10 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar29 = FUN_04d046d8(0);
          if (*(long *)(unaff_x21 + 0x28) == in_stack_00000108) {
            plVar30 = (long *)FUN_027da178(0,*(undefined8 *)puVar1,lVar22,0,uVar29);
            return plVar30;
          }
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_06312a10 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar29 = FUN_04d046d8(0);
        if (*(long *)(unaff_x21 + 0x28) == in_stack_00000108) {
          plVar30 = (long *)FUN_0275e8e0(0xf,*(undefined8 *)puVar14,lVar22,uVar29);
          return plVar30;
        }
      }
      break;
    case 0x15:
      uVar29 = FUN_027629d0();
System_Xml_XmlAutoDetectWriter__WriteRaw:
      if (*(long *)(unaff_x21 + 0x28) == in_stack_00000108) {
        plVar30 = (long *)FUN_04c0737c(0,uVar29,0);
        return plVar30;
      }
      break;
    case 0x17:
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      puVar25 = (undefined8 *)FUN_027629a4();
      if (*(long *)(unaff_x21 + 0x28) == in_stack_00000108) {
        plVar30 = (long *)FUN_05580fd0(*puVar25,puVar25[1],0);
        return plVar30;
      }
      break;
    case 0x1a:
      puVar25 = (undefined8 *)FUN_027629a4();
      uStack00000000000000d8 = *puVar25;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar29 = FUN_05333e08(&stack0x000000d8,0);
      if (*(int *)(*(long *)PTR_DAT_0631a6c0 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)PTR_DAT_0631a6c0);
      }
      unaff_x19 = (long *)FUN_04d024ac(uVar29,0);
      goto LAB_05350120;
    case 0x1b:
      puVar28 = (undefined1 *)FUN_027629a4();
      uStack00000000000000d4 = *puVar28;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar20 = FUN_053347f8(&stack0x000000d4,0);
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)UnityEngine_UIElements_Foldout_var);
      }
      unaff_x19 = (long *)FUN_055805e8(uVar20 & 1,0);
      goto LAB_05350120;
    case 0x1c:
      puVar26 = (undefined2 *)FUN_027629a4();
      uStack00000000000000d0 = *puVar26;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar18 = FUN_053359e8(&stack0x000000d0,0);
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)UnityEngine_UIElements_Foldout_var);
      }
      unaff_x19 = (long *)FUN_055807d4(uVar18,0);
      goto LAB_05350120;
    case 0x1d:
      if (*unaff_x19 ==
          *(long *)
           Oculus_Interaction_PoseDetection_Debug_HandShapeSkeletalDebugVisual_<AllFeatureStates>d__4_TypeInfo
         ) {
        uVar29 = FUN_0533710c();
        if (*(int *)(*(long *)PTR_DAT_0631a6c0 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)PTR_DAT_0631a6c0);
        }
        if (*(long *)(unaff_x21 + 0x28) == in_stack_00000108) {
          plVar30 = (long *)FUN_04d024ac(uVar29,0);
          return plVar30;
        }
        break;
      }
      goto LAB_05350a68;
    case 0x1e:
      if (*unaff_x19 == *(long *)HandleLockedGrabbable_<SetAfterAFrame>d__6_TypeInfo) {
        uVar29 = FUN_05337b10();
        goto System_Xml_XmlAutoDetectWriter__WriteRaw;
      }
      goto LAB_05350a68;
    case 0x1f:
      puVar25 = (undefined8 *)FUN_027629a4();
      uStack00000000000000c0 = *puVar25;
      uStack00000000000000c8 = *(undefined4 *)(puVar25 + 1);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar29 = FUN_05338680(&stack0x000000c0,0);
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)UnityEngine_UIElements_Foldout_var);
      }
      unaff_x19 = (long *)System_Net_FtpWebRequest__AttemptedRecovery(uVar29,3,0);
      goto LAB_05350120;
    case 0x20:
      puVar25 = (undefined8 *)FUN_027629a4();
      uStack00000000000000a8 = puVar25[1];
      uStack00000000000000a0 = *puVar25;
      uStack00000000000000b0 = *(undefined4 *)(puVar25 + 2);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      unaff_x19 = (long *)FUN_0533ad18(&stack0x000000a0,0);
      goto LAB_05350120;
    case 0x21:
      puVar25 = (undefined8 *)FUN_027629a4();
      uStack0000000000000098 = puVar25[1];
      uStack0000000000000090 = *puVar25;
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar29 = FUN_053401bc(&stack0x00000090,0);
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      unaff_x19 = (long *)FUN_055809f0(uVar29,0);
      goto LAB_05350120;
    case 0x22:
      puVar25 = (undefined8 *)FUN_027629a4();
      uStack0000000000000088 = *puVar25;
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      auVar31 = FUN_053418a8(&stack0x00000088,0);
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      unaff_x19 = (long *)FUN_05581058(auVar31._0_8_,auVar31._8_8_,0);
      goto LAB_05350120;
    case 0x23:
      puVar27 = (undefined4 *)FUN_027629a4();
      uStack0000000000000084 = *puVar27;
      if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar18 = FUN_0533e100(&stack0x00000084,0);
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)UnityEngine_UIElements_Foldout_var);
      }
      unaff_x19 = (long *)FUN_05580754(uVar18,0);
      goto LAB_05350120;
    case 0x24:
      puVar25 = (undefined8 *)FUN_027629a4();
      uStack0000000000000078 = *puVar25;
      if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar18 = FUN_0533e234(&stack0x00000078,0);
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)UnityEngine_UIElements_Foldout_var);
      }
      unaff_x19 = (long *)FUN_05580780(uVar18,0);
      goto LAB_05350120;
    case 0x25:
      puVar25 = (undefined8 *)FUN_027629a4();
      uStack0000000000000068 = puVar25[1];
      uStack0000000000000060 = *puVar25;
      if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar29 = FUN_05336074(&stack0x00000060,0);
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)UnityEngine_UIElements_Foldout_var);
      }
      unaff_x19 = (long *)FUN_055807ac(uVar29,0);
      goto LAB_05350120;
    case 0x26:
      puVar25 = (undefined8 *)FUN_027629a4();
      uStack0000000000000058 = puVar25[1];
      uStack0000000000000050 = *puVar25;
      if (*(int *)(*(long *)puVar11 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      auVar31 = FUN_05346670(&stack0x00000050,0);
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      unaff_x19 = (long *)FUN_0558068c(auVar31._0_8_,auVar31._8_8_,0);
      goto LAB_05350120;
    case 0x27:
      puVar25 = (undefined8 *)FUN_027629a4();
      uStack0000000000000048 = *puVar25;
      if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar18 = FUN_05347fe0(&stack0x00000048);
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      if (*(long *)(unaff_x21 + 0x28) == in_stack_00000108) goto LAB_05350484;
      break;
    case 0x28:
      puVar25 = (undefined8 *)FUN_027629a4();
      uStack0000000000000028 = puVar25[1];
      uStack0000000000000020 = *puVar25;
      uStack0000000000000038 = puVar25[3];
      uStack0000000000000030 = puVar25[2];
      if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      unaff_x19 = (long *)FUN_05349b40(&stack0x00000020);
LAB_05350120:
      if (*(long *)(unaff_x21 + 0x28) == in_stack_00000108) {
        return unaff_x19;
      }
    }
    goto LAB_05350f44;
  case 0x13:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (*unaff_x19 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      _in_stack_000000e0 = FUN_05583d0c();
      puVar25 = (undefined8 *)PTR_DAT_0631fac8;
      goto LAB_0534fda4;
    }
    break;
  case 0x17:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (*unaff_x19 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      _in_stack_000000e0 = FUN_05583c44();
      puVar25 = (undefined8 *)PTR_DAT_0631da78;
      goto LAB_0534fda4;
    }
    break;
  case 0x19:
    plVar30 = (long *)thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_0631e990);
    if (*unaff_x19 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      FUN_055c89a0();
      unaff_x19 = plVar30;
      goto LAB_05350120;
    }
    break;
  case 0x1a:
    if (*(int *)(*(long *)PTR_DAT_0631a6c0 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (*unaff_x19 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      uVar29 = FUN_04d02f84();
      in_stack_000000e0 = 0;
      FUN_05333d6c(&stack0x000000e0,uVar29,0);
      puVar25 = (undefined8 *)PTR_DAT_0631ec78;
LAB_0534ff40:
      uVar29 = *puVar25;
      goto LAB_05350118;
    }
    break;
  case 0x1b:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (*unaff_x19 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      uVar20 = FUN_0558107c();
      in_stack_000000e0 = in_stack_000000e0 & 0xffffffffffffff00;
      FUN_05334218(&stack0x000000e0,uVar20 & 1,0);
      uVar29 = *(undefined8 *)PTR_DAT_0631ec80;
      goto LAB_05350118;
    }
    break;
  case 0x1c:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (*unaff_x19 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      uVar18 = FUN_05582160();
      in_stack_000000e0 = in_stack_000000e0 & 0xffffffffffff0000;
      FUN_053359c8(&stack0x000000e0,uVar18,0);
      uVar29 = *(undefined8 *)PTR_DAT_0631ec88;
      goto LAB_05350118;
    }
    break;
  case 0x1d:
    if (*(int *)(*(long *)PTR_DAT_0631a6c0 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (*unaff_x19 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      uVar29 = FUN_04d02f84();
      unaff_x19 = (long *)thunk_FUN_02b79644(*(undefined8 *)
                                              Oculus_Interaction_PoseDetection_Debug_HandShapeSkeletalDebugVisual_<AllFeatureStates>d__4_TypeInfo
                                            );
      FUN_05336dd8(unaff_x19,uVar29,0);
      goto LAB_05350120;
    }
    break;
  case 0x1e:
    if (*unaff_x19 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      uVar29 = FUN_04c099d0();
      unaff_x19 = (long *)thunk_FUN_02b79644(*(undefined8 *)
                                              HandleLockedGrabbable_<SetAfterAFrame>d__6_TypeInfo);
      FUN_053377d0(unaff_x19,uVar29,0);
      goto LAB_05350120;
    }
    break;
  case 0x1f:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (*unaff_x19 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      uVar29 = FUN_05583a08();
      in_stack_000000e8 = in_stack_000000e8 & 0xffffffff00000000;
      in_stack_000000e0 = 0;
      FUN_05338094(&stack0x000000e0,uVar29,0);
      uVar29 = *(undefined8 *)PTR_DAT_0631ec90;
      goto LAB_05350118;
    }
    break;
  case 0x20:
    if (*(int *)(*(long *)PTR_DAT_0631ec98 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (*unaff_x19 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      FUN_0533b120(&stack0x000000e0);
      uVar29 = *(undefined8 *)puVar3;
      goto LAB_05350118;
    }
    break;
  case 0x21:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (*unaff_x19 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      FUN_05582b00();
      in_stack_000000e0 = 0;
      in_stack_000000e8 = 0;
      FUN_05340144(&stack0x000000e0,0);
      puVar25 = (undefined8 *)PTR_DAT_0631eca0;
LAB_0534fc80:
      uVar29 = *puVar25;
      goto LAB_05350118;
    }
    break;
  case 0x22:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (*unaff_x19 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      auVar31 = FUN_05583d0c();
      in_stack_000000e0 = 0;
      FUN_05341860(&stack0x000000e0,auVar31._0_8_,auVar31._8_8_,0);
      puVar25 = (undefined8 *)PTR_DAT_0631eca8;
      goto LAB_0534ff40;
    }
    break;
  case 0x23:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (*unaff_x19 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      uVar18 = FUN_05581cb0();
      in_stack_000000e0 = in_stack_000000e0 & 0xffffffff00000000;
      FUN_053425d0(&stack0x000000e0,uVar18,0);
      uVar29 = *(undefined8 *)PTR_DAT_0631ecb0;
      goto LAB_05350118;
    }
    break;
  case 0x24:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (*unaff_x19 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      uVar18 = FUN_05581e40();
      in_stack_000000e0 = 0;
      FUN_053439c0(&stack0x000000e0,uVar18,0);
      puVar25 = (undefined8 *)PTR_DAT_0631ecb8;
      goto LAB_0534ff40;
    }
    break;
  case 0x25:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (*unaff_x19 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      uVar29 = FUN_05581fd0();
      in_stack_000000e0 = 0;
      in_stack_000000e8 = 0;
      FUN_05344edc(&stack0x000000e0,uVar29,0);
      puVar25 = (undefined8 *)PTR_DAT_0631ecc0;
      goto LAB_0534fc80;
    }
    break;
  case 0x26:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (*unaff_x19 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      auVar31 = FUN_05581708();
      in_stack_000000e0 = 0;
      in_stack_000000e8 = 0;
      FUN_05346514(&stack0x000000e0,auVar31._0_8_,auVar31._8_8_,0);
      puVar25 = (undefined8 *)PTR_DAT_0631ecc8;
      goto LAB_0534fc80;
    }
    break;
  case 0x27:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (*unaff_x19 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      FUN_055827a0();
      in_stack_000000e0 = 0;
      FUN_05347f00(&stack0x000000e0);
      puVar25 = (undefined8 *)PTR_DAT_0631ecd0;
      goto LAB_0534ff40;
    }
    break;
  case 0x28:
    in_stack_000000e8 = 0;
    in_stack_000000e0 = 0;
    in_stack_000000f8 = 0;
    in_stack_000000f0 = 0;
    if (*unaff_x19 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      FUN_05349994(&stack0x000000e0);
      uVar29 = *(undefined8 *)PTR_DAT_0631ecd8;
      goto LAB_05350118;
    }
  }
LAB_05350a68:
  if (*(long *)(unaff_x21 + 0x28) == in_stack_00000108) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3ce44();
  }
LAB_05350f44:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


