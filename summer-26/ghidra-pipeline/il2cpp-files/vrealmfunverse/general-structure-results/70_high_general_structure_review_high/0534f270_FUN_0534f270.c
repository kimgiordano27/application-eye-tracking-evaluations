/*
FUNCTION_NAME: FUN_0534f270
ENTRY_POINT: 0534f270
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_4;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


long * FUN_0534f270(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
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
  undefined *puVar16;
  undefined *puVar17;
  undefined1 uVar18;
  undefined2 uVar19;
  undefined4 uVar20;
  int iVar21;
  uint uVar22;
  ulong uVar23;
  long lVar24;
  char *pcVar25;
  int *piVar26;
  ulong *puVar27;
  undefined2 *puVar28;
  undefined8 *puVar29;
  undefined4 *puVar30;
  undefined1 *puVar31;
  undefined8 uVar32;
  long *plVar33;
  undefined1 auVar34 [16];
  ulong local_150;
  ulong uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_90;
  undefined4 local_88;
  undefined2 local_80 [2];
  undefined1 local_7c [4];
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  puVar3 = System_Xml_XmlBaseReader_TypeInfo;
  puVar27 = &local_150;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((DAT_066d0632 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_0631c570);
    FUN_02b3c81c(PTR_DAT_0631a6c0);
    FUN_02b3c81c(PTR_DAT_06312a10);
    FUN_02b3c81c(PTR_DAT_0632e6c8);
    FUN_02b3c81c(System_Xml_XmlBaseReader_TypeInfo);
    FUN_02b3c81c(PTR_DAT_0631da78);
    FUN_02b3c81c(PTR_DAT_06313c50);
    FUN_02b3c81c(PTR_DAT_0631c498);
    FUN_02b3c81c(PTR_DAT_0631fac8);
    FUN_02b3c81c(PTR_DAT_0632ba98);
    FUN_02b3c81c(PTR_DAT_06322180);
    FUN_02b3c81c(PTR_DAT_0631ec78);
    FUN_02b3c81c(PTR_DAT_0631ec80);
    FUN_02b3c81c(PTR_DAT_0631ec88);
    FUN_02b3c81c(
                Oculus_Interaction_PoseDetection_Debug_HandShapeSkeletalDebugVisual_<AllFeatureStates>d__4_TypeInfo
                );
    FUN_02b3c81c(HandleLockedGrabbable_<SetAfterAFrame>d__6_TypeInfo);
    FUN_02b3c81c(PTR_DAT_0631ec90);
    FUN_02b3c81c(PTR_DAT_0631ec98);
    FUN_02b3c81c(PTR_DAT_0631eca0);
    FUN_02b3c81c(PTR_DAT_0631eca8);
    FUN_02b3c81c(PTR_DAT_0631ecb0);
    FUN_02b3c81c(PTR_DAT_0631ecb8);
    FUN_02b3c81c(PTR_DAT_0631ecc0);
    FUN_02b3c81c(PTR_DAT_0631ecc8);
    FUN_02b3c81c(PTR_DAT_0631ecd0);
    FUN_02b3c81c(PTR_DAT_0631ecd8);
    FUN_02b3c81c(PTR_DAT_06317490);
    FUN_02b3c81c(PTR_DAT_0631e990);
    FUN_02b3c81c(UnityEngine_UIElements_Foldout_var);
    FUN_02b3c81c(PTR_DAT_0631b830);
    FUN_02b3c81c(PTR_DAT_06317138);
    DAT_066d0632 = 1;
  }
  local_78 = 0;
  local_7c[0] = 0;
  local_80[0] = 0;
  local_88 = 0;
  local_90 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_c8 = 0;
  local_cc = 0;
  local_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_108 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar20 = FUN_0534cfe8(param_2);
  if (param_1 == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    goto LAB_05350f44;
  }
  thunk_FUN_02b4c898(param_1,0);
  iVar21 = FUN_0534cfe8();
  puVar17 = PTR_DAT_0632e6c8;
  puVar5 = PTR_DAT_0631ec98;
  puVar4 = PTR_DAT_06317490;
  puVar3 = PTR_DAT_06312310;
  switch(uVar20) {
  case 3:
    if (*param_1 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      uVar23 = thunk_FUN_04c08854(*(undefined8 *)PTR_DAT_0631b830,param_1,0);
      if ((uVar23 & 1) != 0) {
        uVar32 = *(undefined8 *)(puVar3 + 0x28);
        local_70[0] = 1;
        goto LAB_05350114;
      }
      if (*param_1 == *(long *)(puVar3 + 0x90)) {
        uVar23 = thunk_FUN_04c08854(*(undefined8 *)PTR_DAT_06317138,param_1,0);
        if ((uVar23 & 1) != 0) {
          uVar32 = *(undefined8 *)(puVar3 + 0x28);
          local_70._0_8_ = local_70._0_8_ & 0xffffffffffffff00;
          goto LAB_05350114;
        }
        if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (*param_1 == *(long *)(puVar3 + 0x90)) {
          uVar18 = FUN_0558107c(param_1,0);
          uVar32 = *(undefined8 *)(puVar3 + 0x28);
          local_70._0_8_ = CONCAT71(local_70._1_7_,uVar18) & 0xffffffffffffff01;
          auVar34._8_8_ = local_70._8_8_;
          auVar34._0_8_ = local_70._0_8_;
          goto LAB_0534fe00;
        }
      }
    }
    break;
  case 4:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    puVar3 = PTR_DAT_06312310;
    if (*param_1 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      uVar19 = FUN_055814dc(param_1,0);
      uVar32 = *(undefined8 *)(puVar3 + 0x88);
LAB_0534fcd0:
      local_70._0_2_ = uVar19;
      auVar34._8_8_ = local_70._8_8_;
      auVar34._0_8_ = local_70._0_8_;
LAB_0534fe00:
      puVar27 = (ulong *)local_70;
      goto LAB_05350118;
    }
    break;
  case 5:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    puVar3 = PTR_DAT_06312310;
    if (*param_1 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      uVar18 = FUN_05581b20(param_1,0);
      uVar32 = *(undefined8 *)(puVar3 + 0x30);
System_Xml_XmlAsyncCheckWriter__WriteStartDocument:
      local_70[0] = uVar18;
      auVar34._8_8_ = local_70._8_8_;
      auVar34._0_8_ = local_70._0_8_;
      goto LAB_0534fe00;
    }
    break;
  case 6:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    puVar3 = PTR_DAT_06312310;
    if (*param_1 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      uVar18 = FUN_05582160(param_1,0);
      uVar32 = *(undefined8 *)(puVar3 + 0x18);
      goto System_Xml_XmlAsyncCheckWriter__WriteStartDocument;
    }
    break;
  case 7:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    puVar3 = PTR_DAT_06312310;
    if (*param_1 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      uVar19 = FUN_05581cb0(param_1,0);
      uVar32 = *(undefined8 *)(puVar3 + 0x38);
      goto LAB_0534fcd0;
    }
    break;
  case 8:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    puVar3 = PTR_DAT_06312310;
    if (*param_1 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      uVar19 = FUN_055822f0(param_1,0);
      uVar32 = *(undefined8 *)(puVar3 + 0x40);
      goto LAB_0534fcd0;
    }
    break;
  case 9:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    puVar3 = PTR_DAT_06312310;
    if (*param_1 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      uVar20 = FUN_05581e40(param_1,0);
      uVar32 = *(undefined8 *)(puVar3 + 0x48);
LAB_0534f978:
      local_70._0_4_ = uVar20;
      auVar34._8_8_ = local_70._8_8_;
      auVar34._0_8_ = local_70._0_8_;
      goto LAB_0534fe00;
    }
    break;
  case 10:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    puVar3 = PTR_DAT_06312310;
    if (*param_1 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      uVar20 = System_Net_ExceptionHelper__get_PropertyNotSupportedException(param_1,0);
      uVar32 = *(undefined8 *)(puVar3 + 0x50);
      goto LAB_0534f978;
    }
    break;
  case 0xb:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    puVar3 = PTR_DAT_06312310;
    if (*param_1 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      uVar32 = FUN_05581fd0(param_1,0);
      auVar34._8_8_ = local_70._8_8_;
      auVar34._0_8_ = uVar32;
      uVar32 = *(undefined8 *)(puVar3 + 0x68);
      goto LAB_0534fe00;
    }
    break;
  case 0xc:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    puVar3 = PTR_DAT_06312310;
    if (*param_1 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      uVar32 = FUN_05582610(param_1,0);
      auVar34._8_8_ = local_70._8_8_;
      auVar34._0_8_ = uVar32;
      uVar32 = *(undefined8 *)(puVar3 + 0x70);
      goto LAB_0534fe00;
    }
    break;
  case 0xd:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    puVar3 = PTR_DAT_06312310;
    if (*param_1 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      uVar20 = FUN_055827a0(param_1,0);
      uVar32 = *(undefined8 *)(puVar3 + 0x78);
      local_70._0_4_ = uVar20;
      goto LAB_05350114;
    }
    break;
  case 0xe:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    puVar3 = PTR_DAT_06312310;
    if (*param_1 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      local_70._0_8_ = FUN_05582b00(param_1,0);
      uVar32 = *(undefined8 *)(puVar3 + 0x80);
      goto LAB_05350114;
    }
    break;
  case 0xf:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (*param_1 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      auVar34 = FUN_05581708(param_1,0);
      puVar29 = (undefined8 *)PTR_DAT_0631c498;
LAB_0534fda4:
      uVar32 = *puVar29;
      goto LAB_0534fe00;
    }
    break;
  case 0x10:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (*param_1 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      uVar32 = FUN_05583a08(param_1,3,0);
      puVar29 = (undefined8 *)PTR_DAT_06313c50;
LAB_0534fdf8:
      auVar34._8_8_ = local_70._8_8_;
      auVar34._0_8_ = uVar32;
      uVar32 = *puVar29;
      goto LAB_0534fe00;
    }
    break;
  case 0x11:
    if (iVar21 == 9) {
      piVar26 = (int *)FUN_027629a4(param_1,*(undefined8 *)(PTR_DAT_06312310 + 0x48));
      local_70._0_8_ = SEXT48(*piVar26);
    }
    else {
      if (iVar21 != 0xb) {
        if (iVar21 != 0x12) {
          puVar27 = (ulong *)FUN_027629a4(param_1,*(undefined8 *)PTR_DAT_06317490);
          local_70._0_8_ = *puVar27;
          uVar32 = *(undefined8 *)puVar4;
          goto LAB_05350114;
        }
        if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (*param_1 == *(long *)(PTR_DAT_06312310 + 0x90)) {
          uVar32 = FUN_05583080(param_1,0);
          puVar29 = (undefined8 *)PTR_DAT_06317490;
          goto LAB_0534fdf8;
        }
        break;
      }
      puVar27 = (ulong *)FUN_027629a4(param_1,*(undefined8 *)(PTR_DAT_06312310 + 0x68));
      local_70._0_8_ = *puVar27;
    }
    uVar32 = *(undefined8 *)PTR_DAT_06317490;
LAB_05350114:
    auVar34._8_8_ = local_70._8_8_;
    auVar34._0_8_ = local_70._0_8_;
    puVar27 = (ulong *)local_70;
LAB_05350118:
    local_70 = auVar34;
    param_1 = (long *)DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody(uVar32,puVar27);
    goto LAB_05350120;
  default:
    lVar24 = *(long *)PTR_DAT_0632e6c8;
    if (*(int *)(lVar24 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar24 = *(long *)puVar17;
    }
    puVar16 = PTR_DAT_0632ba98;
    puVar15 = PTR_DAT_0631ecd8;
    puVar14 = PTR_DAT_0631ecd0;
    puVar13 = PTR_DAT_0631ecc8;
    puVar12 = PTR_DAT_0631ecc0;
    puVar11 = PTR_DAT_0631ecb8;
    puVar10 = PTR_DAT_0631ecb0;
    puVar9 = PTR_DAT_0631eca8;
    puVar8 = PTR_DAT_0631eca0;
    puVar7 = PTR_DAT_0631ec98;
    puVar6 = PTR_DAT_0631ec90;
    puVar5 = PTR_DAT_0631ec88;
    puVar4 = PTR_DAT_0631ec80;
    puVar3 = PTR_DAT_0631ec78;
    auVar2._8_8_ = local_70._8_8_;
    auVar2._0_8_ = local_70._0_8_;
    if ((long *)**(undefined8 **)(lVar24 + 0xb8) == param_1) {
      local_70 = auVar2;
      if (*(int *)(lVar24 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        param_1 = (long *)**(long **)(*(long *)puVar17 + 0xb8);
      }
      goto LAB_05350120;
    }
    switch(iVar21) {
    case 3:
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      pcVar25 = (char *)FUN_027629a4(param_1,*(undefined8 *)(PTR_DAT_06312310 + 0x28));
      if (*(long *)(lVar1 + 0x28) == local_48) {
        plVar33 = (long *)FUN_055805e8(*pcVar25 != '\0',0);
        return plVar33;
      }
      break;
    case 4:
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      puVar28 = (undefined2 *)FUN_027629a4(param_1,*(undefined8 *)(PTR_DAT_06312310 + 0x88));
      if (*(long *)(lVar1 + 0x28) == local_48) {
        plVar33 = (long *)FUN_05580650(*puVar28,0);
        return plVar33;
      }
      break;
    case 5:
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      puVar31 = (undefined1 *)FUN_027629a4(param_1,*(undefined8 *)(PTR_DAT_06312310 + 0x30));
      if (*(long *)(lVar1 + 0x28) == local_48) {
        plVar33 = (long *)FUN_05580728(*puVar31,0);
        return plVar33;
      }
      break;
    case 6:
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      puVar31 = (undefined1 *)FUN_027629a4(param_1,*(undefined8 *)(PTR_DAT_06312310 + 0x18));
      if (*(long *)(lVar1 + 0x28) == local_48) {
        plVar33 = (long *)FUN_055807d4(*puVar31,0);
        return plVar33;
      }
      break;
    case 7:
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      puVar28 = (undefined2 *)FUN_027629a4(param_1,*(undefined8 *)(PTR_DAT_06312310 + 0x38));
      if (*(long *)(lVar1 + 0x28) == local_48) {
        plVar33 = (long *)FUN_05580754(*puVar28,0);
        return plVar33;
      }
      break;
    case 8:
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      puVar28 = (undefined2 *)FUN_027629a4(param_1,*(undefined8 *)(PTR_DAT_06312310 + 0x40));
      if (*(long *)(lVar1 + 0x28) == local_48) {
        plVar33 = (long *)FUN_05580800(*puVar28,0);
        return plVar33;
      }
      break;
    case 9:
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      puVar30 = (undefined4 *)FUN_027629a4(param_1,*(undefined8 *)(PTR_DAT_06312310 + 0x48));
      if (*(long *)(lVar1 + 0x28) == local_48) {
        plVar33 = (long *)FUN_05580780(*puVar30,0);
        return plVar33;
      }
      break;
    case 10:
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      puVar30 = (undefined4 *)FUN_027629a4(param_1,*(undefined8 *)(PTR_DAT_06312310 + 0x50));
      if (*(long *)(lVar1 + 0x28) == local_48) {
        plVar33 = (long *)FUN_0558082c(*puVar30,0);
        return plVar33;
      }
      break;
    case 0xb:
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      puVar29 = (undefined8 *)FUN_027629a4(param_1,*(undefined8 *)(PTR_DAT_06312310 + 0x68));
      if (*(long *)(lVar1 + 0x28) == local_48) {
        plVar33 = (long *)FUN_055807ac(*puVar29,0);
        return plVar33;
      }
      break;
    case 0xc:
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      puVar29 = (undefined8 *)FUN_027629a4(param_1,*(undefined8 *)(PTR_DAT_06312310 + 0x70));
      if (*(long *)(lVar1 + 0x28) == local_48) {
        plVar33 = (long *)FUN_05580858(*puVar29,0);
        return plVar33;
      }
      break;
    case 0xd:
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      puVar30 = (undefined4 *)FUN_027629a4(param_1,*(undefined8 *)(PTR_DAT_06312310 + 0x78));
      uVar20 = *puVar30;
      if (*(long *)(lVar1 + 0x28) == local_48) {
LAB_05350484:
        plVar33 = (long *)FUN_05580880(uVar20,0);
        return plVar33;
      }
      break;
    case 0xe:
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      puVar29 = (undefined8 *)FUN_027629a4(param_1,*(undefined8 *)(PTR_DAT_06312310 + 0x80));
      if (*(long *)(lVar1 + 0x28) == local_48) {
        plVar33 = (long *)FUN_055809f0(*puVar29,0);
        return plVar33;
      }
      break;
    case 0xf:
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      puVar29 = (undefined8 *)FUN_027629a4(param_1,*(undefined8 *)PTR_DAT_0631c498);
      if (*(long *)(lVar1 + 0x28) == local_48) {
        plVar33 = (long *)FUN_0558068c(*puVar29,puVar29[1],0);
        return plVar33;
      }
      break;
    case 0x10:
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      puVar29 = (undefined8 *)FUN_027629a4(param_1,*(undefined8 *)PTR_DAT_06313c50);
      if (*(long *)(lVar1 + 0x28) == local_48) {
        plVar33 = (long *)System_Net_FtpWebRequest__AttemptedRecovery(*puVar29,3,0);
        return plVar33;
      }
      break;
    case 0x11:
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      puVar29 = (undefined8 *)FUN_027629a4(param_1,*(undefined8 *)PTR_DAT_06317490);
      if (*(long *)(lVar1 + 0x28) == local_48) {
        plVar33 = (long *)FUN_05580aec(*puVar29,0);
        return plVar33;
      }
      break;
    case 0x12:
      if (*param_1 == *(long *)(PTR_DAT_06312310 + 0x90)) goto LAB_05350120;
      goto LAB_05350a68;
    case 0x13:
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      puVar29 = (undefined8 *)FUN_027629a4(param_1,*(undefined8 *)PTR_DAT_0631fac8);
      if (*(long *)(lVar1 + 0x28) == local_48) {
        plVar33 = (long *)FUN_05581058(*puVar29,puVar29[1],0);
        return plVar33;
      }
      break;
    default:
      lVar24 = thunk_FUN_02b79548(param_1,*(undefined8 *)PTR_DAT_0632ba98);
      puVar3 = PTR_DAT_06322180;
      if (lVar24 == 0) {
        lVar24 = thunk_FUN_02b79548(param_1,*(undefined8 *)PTR_DAT_06322180);
        if (lVar24 == 0) {
          if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x05350f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar33 = (long *)(**(code **)(*param_1 + 0x168))
                                        (param_1,*(undefined8 *)(*param_1 + 0x170));
            return plVar33;
          }
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_06312a10 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar32 = FUN_04d046d8(0);
          if (*(long *)(lVar1 + 0x28) == local_48) {
            plVar33 = (long *)FUN_027da178(0,*(undefined8 *)puVar3,lVar24,0,uVar32);
            return plVar33;
          }
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_06312a10 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar32 = FUN_04d046d8(0);
        if (*(long *)(lVar1 + 0x28) == local_48) {
          plVar33 = (long *)FUN_0275e8e0(0xf,*(undefined8 *)puVar16,lVar24,uVar32);
          return plVar33;
        }
      }
      break;
    case 0x15:
      uVar32 = FUN_027629d0(param_1,*(undefined8 *)PTR_DAT_0631c570);
System_Xml_XmlAutoDetectWriter__WriteRaw:
      if (*(long *)(lVar1 + 0x28) == local_48) {
        plVar33 = (long *)FUN_04c0737c(0,uVar32,0);
        return plVar33;
      }
      break;
    case 0x17:
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      puVar29 = (undefined8 *)FUN_027629a4(param_1,*(undefined8 *)PTR_DAT_0631da78);
      if (*(long *)(lVar1 + 0x28) == local_48) {
        plVar33 = (long *)FUN_05580fd0(*puVar29,puVar29[1],0);
        return plVar33;
      }
      break;
    case 0x1a:
      puVar29 = (undefined8 *)FUN_027629a4(param_1,*(undefined8 *)PTR_DAT_0631ec78);
      local_78 = *puVar29;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar32 = FUN_05333e08(&local_78,0);
      if (*(int *)(*(long *)PTR_DAT_0631a6c0 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)PTR_DAT_0631a6c0);
      }
      param_1 = (long *)FUN_04d024ac(uVar32,0);
      goto LAB_05350120;
    case 0x1b:
      puVar31 = (undefined1 *)FUN_027629a4(param_1,*(undefined8 *)PTR_DAT_0631ec80);
      local_7c[0] = *puVar31;
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar22 = FUN_053347f8(local_7c,0);
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)UnityEngine_UIElements_Foldout_var);
      }
      param_1 = (long *)FUN_055805e8(uVar22 & 1,0);
      goto LAB_05350120;
    case 0x1c:
      puVar28 = (undefined2 *)FUN_027629a4(param_1,*(undefined8 *)PTR_DAT_0631ec88);
      local_80[0] = *puVar28;
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar20 = FUN_053359e8(local_80,0);
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)UnityEngine_UIElements_Foldout_var);
      }
      param_1 = (long *)FUN_055807d4(uVar20,0);
      goto LAB_05350120;
    case 0x1d:
      if (*param_1 ==
          *(long *)
           Oculus_Interaction_PoseDetection_Debug_HandShapeSkeletalDebugVisual_<AllFeatureStates>d__4_TypeInfo
         ) {
        uVar32 = FUN_0533710c(param_1,0);
        if (*(int *)(*(long *)PTR_DAT_0631a6c0 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)PTR_DAT_0631a6c0);
        }
        if (*(long *)(lVar1 + 0x28) == local_48) {
          plVar33 = (long *)FUN_04d024ac(uVar32,0);
          return plVar33;
        }
        break;
      }
      goto LAB_05350a68;
    case 0x1e:
      if (*param_1 == *(long *)HandleLockedGrabbable_<SetAfterAFrame>d__6_TypeInfo) {
        uVar32 = FUN_05337b10(param_1,0);
        goto System_Xml_XmlAutoDetectWriter__WriteRaw;
      }
      goto LAB_05350a68;
    case 0x1f:
      puVar29 = (undefined8 *)FUN_027629a4(param_1,*(undefined8 *)PTR_DAT_0631ec90);
      local_90 = *puVar29;
      local_88 = *(undefined4 *)(puVar29 + 1);
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar32 = FUN_05338680(&local_90,0);
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)UnityEngine_UIElements_Foldout_var);
      }
      param_1 = (long *)System_Net_FtpWebRequest__AttemptedRecovery(uVar32,3,0);
      goto LAB_05350120;
    case 0x20:
      puVar29 = (undefined8 *)FUN_027629a4(param_1,*(undefined8 *)PTR_DAT_0631ec98);
      uStack_a8 = puVar29[1];
      local_b0 = *puVar29;
      local_a0 = *(undefined4 *)(puVar29 + 2);
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      param_1 = (long *)FUN_0533ad18(&local_b0,0);
      goto LAB_05350120;
    case 0x21:
      puVar29 = (undefined8 *)FUN_027629a4(param_1,*(undefined8 *)PTR_DAT_0631eca0);
      uStack_b8 = puVar29[1];
      local_c0 = *puVar29;
      if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar32 = FUN_053401bc(&local_c0,0);
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      param_1 = (long *)FUN_055809f0(uVar32,0);
      goto LAB_05350120;
    case 0x22:
      puVar29 = (undefined8 *)FUN_027629a4(param_1,*(undefined8 *)PTR_DAT_0631eca8);
      local_c8 = *puVar29;
      if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      auVar34 = FUN_053418a8(&local_c8,0);
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      param_1 = (long *)FUN_05581058(auVar34._0_8_,auVar34._8_8_,0);
      goto LAB_05350120;
    case 0x23:
      puVar30 = (undefined4 *)FUN_027629a4(param_1,*(undefined8 *)PTR_DAT_0631ecb0);
      local_cc = *puVar30;
      if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar20 = FUN_0533e100(&local_cc,0);
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)UnityEngine_UIElements_Foldout_var);
      }
      param_1 = (long *)FUN_05580754(uVar20,0);
      goto LAB_05350120;
    case 0x24:
      puVar29 = (undefined8 *)FUN_027629a4(param_1,*(undefined8 *)PTR_DAT_0631ecb8);
      local_d8 = *puVar29;
      if (*(int *)(*(long *)puVar11 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar20 = FUN_0533e234(&local_d8,0);
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)UnityEngine_UIElements_Foldout_var);
      }
      param_1 = (long *)FUN_05580780(uVar20,0);
      goto LAB_05350120;
    case 0x25:
      puVar29 = (undefined8 *)FUN_027629a4(param_1,*(undefined8 *)PTR_DAT_0631ecc0);
      uStack_e8 = puVar29[1];
      local_f0 = *puVar29;
      if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar32 = FUN_05336074(&local_f0,0);
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)UnityEngine_UIElements_Foldout_var);
      }
      param_1 = (long *)FUN_055807ac(uVar32,0);
      goto LAB_05350120;
    case 0x26:
      puVar29 = (undefined8 *)FUN_027629a4(param_1,*(undefined8 *)PTR_DAT_0631ecc8);
      uStack_f8 = puVar29[1];
      local_100 = *puVar29;
      if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      auVar34 = FUN_05346670(&local_100,0);
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      param_1 = (long *)FUN_0558068c(auVar34._0_8_,auVar34._8_8_,0);
      goto LAB_05350120;
    case 0x27:
      puVar29 = (undefined8 *)FUN_027629a4(param_1,*(undefined8 *)PTR_DAT_0631ecd0);
      local_108 = *puVar29;
      if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar20 = FUN_05347fe0(&local_108);
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      if (*(long *)(lVar1 + 0x28) == local_48) goto LAB_05350484;
      break;
    case 0x28:
      puVar29 = (undefined8 *)FUN_027629a4(param_1,*(undefined8 *)PTR_DAT_0631ecd8);
      uStack_128 = puVar29[1];
      local_130 = *puVar29;
      uStack_118 = puVar29[3];
      uStack_120 = puVar29[2];
      if (*(int *)(*(long *)puVar15 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      param_1 = (long *)FUN_05349b40(&local_130);
LAB_05350120:
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return param_1;
      }
    }
    goto LAB_05350f44;
  case 0x13:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (*param_1 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      auVar34 = FUN_05583d0c(param_1,0);
      puVar29 = (undefined8 *)PTR_DAT_0631fac8;
      goto LAB_0534fda4;
    }
    break;
  case 0x17:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (*param_1 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      auVar34 = FUN_05583c44(param_1,0);
      puVar29 = (undefined8 *)PTR_DAT_0631da78;
      goto LAB_0534fda4;
    }
    break;
  case 0x19:
    plVar33 = (long *)thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_0631e990);
    if (*param_1 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      FUN_055c89a0(plVar33,param_1,0);
      param_1 = plVar33;
      goto LAB_05350120;
    }
    break;
  case 0x1a:
    if (*(int *)(*(long *)PTR_DAT_0631a6c0 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (*param_1 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      uVar32 = FUN_04d02f84(param_1,0);
      local_70._0_8_ = 0;
      FUN_05333d6c(local_70,uVar32,0);
      puVar29 = (undefined8 *)PTR_DAT_0631ec78;
LAB_0534ff40:
      auVar34._8_8_ = local_70._8_8_;
      auVar34._0_8_ = local_70._0_8_;
      uVar32 = *puVar29;
      local_150 = local_70._0_8_;
      puVar27 = &local_150;
      goto LAB_05350118;
    }
    break;
  case 0x1b:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (*param_1 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      uVar22 = FUN_0558107c(param_1,0);
      local_70._0_8_ = local_70._0_8_ & 0xffffffffffffff00;
      FUN_05334218(local_70,uVar22 & 1,0);
      auVar34._8_8_ = local_70._8_8_;
      auVar34._0_8_ = local_70._0_8_;
      uVar32 = *(undefined8 *)PTR_DAT_0631ec80;
      local_150 = CONCAT71(local_150._1_7_,local_70[0]);
      goto LAB_05350118;
    }
    break;
  case 0x1c:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (*param_1 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      uVar20 = FUN_05582160(param_1,0);
      local_70._0_8_ = local_70._0_8_ & 0xffffffffffff0000;
      FUN_053359c8(local_70,uVar20,0);
      auVar34._8_8_ = local_70._8_8_;
      auVar34._0_8_ = local_70._0_8_;
      uVar32 = *(undefined8 *)PTR_DAT_0631ec88;
      local_150 = CONCAT62(local_150._2_6_,local_70._0_2_);
      puVar27 = &local_150;
      goto LAB_05350118;
    }
    break;
  case 0x1d:
    if (*(int *)(*(long *)PTR_DAT_0631a6c0 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (*param_1 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      uVar32 = FUN_04d02f84(param_1,0);
      param_1 = (long *)thunk_FUN_02b79644(*(undefined8 *)
                                            Oculus_Interaction_PoseDetection_Debug_HandShapeSkeletalDebugVisual_<AllFeatureStates>d__4_TypeInfo
                                          );
      FUN_05336dd8(param_1,uVar32,0);
      goto LAB_05350120;
    }
    break;
  case 0x1e:
    if (*param_1 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      uVar32 = FUN_04c099d0(param_1,0);
      param_1 = (long *)thunk_FUN_02b79644(*(undefined8 *)
                                            HandleLockedGrabbable_<SetAfterAFrame>d__6_TypeInfo);
      FUN_053377d0(param_1,uVar32,0);
      goto LAB_05350120;
    }
    break;
  case 0x1f:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (*param_1 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      uVar32 = FUN_05583a08(param_1,3,0);
      local_70._8_8_ = local_70._8_8_ & 0xffffffff00000000;
      local_70._0_8_ = 0;
      FUN_05338094(local_70,uVar32,0);
      auVar34._8_8_ = local_70._8_8_;
      auVar34._0_8_ = local_70._0_8_;
      local_150 = local_70._0_8_;
      uVar32 = *(undefined8 *)PTR_DAT_0631ec90;
      uStack_148 = CONCAT44(uStack_148._4_4_,local_70._8_4_);
      puVar27 = &local_150;
      goto LAB_05350118;
    }
    break;
  case 0x20:
    if (*(int *)(*(long *)PTR_DAT_0631ec98 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (*param_1 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      FUN_0533b120(local_70,param_1,0);
      auVar34._8_8_ = local_70._8_8_;
      auVar34._0_8_ = local_70._0_8_;
      uVar32 = *(undefined8 *)puVar5;
      uStack_148 = local_70._8_8_;
      local_150 = local_70._0_8_;
      local_140 = CONCAT44(local_140._4_4_,(undefined4)local_60);
      puVar27 = &local_150;
      goto LAB_05350118;
    }
    break;
  case 0x21:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (*param_1 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      FUN_05582b00(param_1,0);
      local_70._0_8_ = 0;
      local_70._8_8_ = 0;
      FUN_05340144(local_70,0);
      puVar29 = (undefined8 *)PTR_DAT_0631eca0;
LAB_0534fc80:
      auVar34._8_8_ = local_70._8_8_;
      auVar34._0_8_ = local_70._0_8_;
      uVar32 = *puVar29;
      uStack_148 = local_70._8_8_;
      local_150 = local_70._0_8_;
      puVar27 = &local_150;
      goto LAB_05350118;
    }
    break;
  case 0x22:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (*param_1 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      auVar34 = FUN_05583d0c(param_1,0);
      local_70._0_8_ = 0;
      FUN_05341860(local_70,auVar34._0_8_,auVar34._8_8_,0);
      puVar29 = (undefined8 *)PTR_DAT_0631eca8;
      goto LAB_0534ff40;
    }
    break;
  case 0x23:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (*param_1 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      uVar20 = FUN_05581cb0(param_1,0);
      local_70._0_8_ = local_70._0_8_ & 0xffffffff00000000;
      FUN_053425d0(local_70,uVar20,0);
      auVar34._8_8_ = local_70._8_8_;
      auVar34._0_8_ = local_70._0_8_;
      uVar32 = *(undefined8 *)PTR_DAT_0631ecb0;
      local_150 = CONCAT44(local_150._4_4_,local_70._0_4_);
      puVar27 = &local_150;
      goto LAB_05350118;
    }
    break;
  case 0x24:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (*param_1 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      uVar20 = FUN_05581e40(param_1,0);
      local_70._0_8_ = 0;
      FUN_053439c0(local_70,uVar20,0);
      puVar29 = (undefined8 *)PTR_DAT_0631ecb8;
      goto LAB_0534ff40;
    }
    break;
  case 0x25:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (*param_1 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      uVar32 = FUN_05581fd0(param_1,0);
      local_70._0_8_ = 0;
      local_70._8_8_ = 0;
      FUN_05344edc(local_70,uVar32,0);
      puVar29 = (undefined8 *)PTR_DAT_0631ecc0;
      goto LAB_0534fc80;
    }
    break;
  case 0x26:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (*param_1 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      auVar34 = FUN_05581708(param_1,0);
      local_70._0_8_ = 0;
      local_70._8_8_ = 0;
      FUN_05346514(local_70,auVar34._0_8_,auVar34._8_8_,0);
      puVar29 = (undefined8 *)PTR_DAT_0631ecc8;
      goto LAB_0534fc80;
    }
    break;
  case 0x27:
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (*param_1 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      FUN_055827a0(param_1,0);
      local_70._0_8_ = 0;
      FUN_05347f00(local_70);
      puVar29 = (undefined8 *)PTR_DAT_0631ecd0;
      goto LAB_0534ff40;
    }
    break;
  case 0x28:
    local_70._8_8_ = 0;
    local_70._0_8_ = 0;
    uStack_58 = 0;
    local_60 = 0;
    if (*param_1 == *(long *)(PTR_DAT_06312310 + 0x90)) {
      FUN_05349994(local_70,param_1);
      auVar34._8_8_ = local_70._8_8_;
      auVar34._0_8_ = local_70._0_8_;
      uStack_148 = local_70._8_8_;
      local_150 = local_70._0_8_;
      uStack_138 = uStack_58;
      local_140 = local_60;
      uVar32 = *(undefined8 *)PTR_DAT_0631ecd8;
      puVar27 = &local_150;
      goto LAB_05350118;
    }
  }
LAB_05350a68:
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3ce44(param_1);
  }
LAB_05350f44:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


