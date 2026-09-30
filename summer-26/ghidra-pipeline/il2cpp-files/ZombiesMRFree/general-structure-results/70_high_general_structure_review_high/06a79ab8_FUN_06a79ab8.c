/*
FUNCTION_NAME: FUN_06a79ab8
ENTRY_POINT: 06a79ab8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_18;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06a79f80) */
/* WARNING: Removing unreachable block (ram,0x06a79e4c) */
/* WARNING: Removing unreachable block (ram,0x06a79fb4) */
/* WARNING: Removing unreachable block (ram,0x06a79fd0) */
/* WARNING: Removing unreachable block (ram,0x06a7a034) */
/* WARNING: Removing unreachable block (ram,0x06a7a024) */

void FUN_06a79ab8(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  long local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60 [16];
  long local_48;
  
  if ((DAT_073aae30 & 1) == 0) {
    FUN_02fe925c(NodeCanvas_DialogueTrees_UI_Examples_DialogueUGUI_<>c__DisplayClass32_0_TypeInfo);
    FUN_02fe925c(NodeCanvas_DialogueTrees_UI_Examples_DialogueUGUI_<>c__DisplayClass36_0_TypeInfo);
    FUN_02fe925c(NodeCanvas_DialogueTrees_UI_Examples_DialogueUGUI_<>c__DisplayClass36_1_TypeInfo);
    FUN_02fe925c(NodeCanvas_DialogueTrees_UI_Examples_DialogueUGUI_<CheckInput>d__34_TypeInfo);
    FUN_02fe925c(NodeCanvas_DialogueTrees_UI_Examples_DialogueUGUI_<CountDown>d__37_TypeInfo);
    FUN_02fe925c(NodeCanvas_DialogueTrees_UI_Examples_DialogueUGUI_<DelayPrint>d__35_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f70b30);
    FUN_02fe925c(
                NodeCanvas_DialogueTrees_UI_Examples_DialogueUGUI_<Internal_OnSubtitlesRequestInfo>d__32_TypeInfo
                );
    FUN_02fe925c(PTR_DAT_06f70b38);
    FUN_02fe925c(NodeCanvas_DialogueTrees_UI_Examples_DialogueUGUI_SubtitleDelays_TypeInfo);
    FUN_02fe925c(
                Newtonsoft_Json_Converters_DiscriminatedUnionConverter_<>c__DisplayClass8_0_TypeInfo
                );
    FUN_02fe925c(
                Newtonsoft_Json_Converters_DiscriminatedUnionConverter_<>c__DisplayClass9_0_TypeInfo
                );
    FUN_02fe925c(Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union_TypeInfo);
    FUN_02fe925c(Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase_TypeInfo);
    FUN_02fe925c(
                Oculus_Interaction_DistanceReticles_DistantInteractionLineVisual_DummyPointReticle_TypeInfo
                );
    DAT_073aae30 = 1;
  }
  local_48 = 0;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  if (*(char *)(param_1 + 1000) != '\0') {
    return;
  }
  if (*(int *)(*(long *)
                NodeCanvas_DialogueTrees_UI_Examples_DialogueUGUI_<>c__DisplayClass36_0_TypeInfo +
              0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  local_60 = FUN_04d2f0b8(&local_48,
                          *(undefined8 *)
                           NodeCanvas_DialogueTrees_UI_Examples_DialogueUGUI_<>c__DisplayClass32_0_TypeInfo
                         );
  if (*(char *)(param_1 + 0x3c8) != '\0') {
    if (*(long *)(param_1 + 0x3d8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    plVar7 = (long *)FUN_06a97490(*(long *)(param_1 + 0x3d8),0);
    puVar6 = Newtonsoft_Json_Converters_DiscriminatedUnionConverter_<>c__DisplayClass8_0_TypeInfo;
    puVar5 = 
    NodeCanvas_DialogueTrees_UI_Examples_DialogueUGUI_<Internal_OnSubtitlesRequestInfo>d__32_TypeInfo
    ;
    puVar4 = PTR_DAT_06f70b38;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    do {
      lVar11 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_06a79c68;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_02feb5b8(plVar7,*(long *)puVar4,0);
LAB_06a79c68:
      uVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if ((uVar12 & 1) == 0) {
        if (plVar7 == (long *)0x0) break;
        lVar11 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 == 0) goto LAB_06a79e18;
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_06a79e00;
      }
      lVar11 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_06a79cc4;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_02feb5b8(plVar7,*(long *)puVar5,0);
LAB_06a79cc4:
      lVar11 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      if (*(int *)(lVar11 + 0x10) == -1) {
        uVar12 = System_Convert__ToDouble(*(undefined8 *)(lVar11 + 0x18),0);
        if ((uVar12 & 1) == 0) {
          if (*(long *)(param_1 + 0x420) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          lVar9 = FUN_06a92d90(*(long *)(param_1 + 0x420),*(undefined8 *)(lVar11 + 0x18),0);
          goto LAB_06a79d1c;
        }
LAB_06a79da8:
        *(undefined8 *)(lVar11 + 0x28) = 0;
        thunk_FUN_03048534((undefined8 *)(lVar11 + 0x28),0);
      }
      else {
        if (*(long *)(param_1 + 0x420) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        lVar9 = FUN_06a8d880(*(long *)(param_1 + 0x420),*(int *)(lVar11 + 0x10),0);
LAB_06a79d1c:
        if ((lVar9 == 0) || (*(char *)(lVar9 + 0x61) == '\0')) goto LAB_06a79da8;
        *(long *)(lVar11 + 0x28) = lVar9;
        thunk_FUN_03048534((long *)(lVar11 + 0x28),lVar9);
        lVar9 = local_48;
        uVar2 = *(undefined4 *)(lVar11 + 0x20);
        uStack_98 = 0;
        local_a0 = lVar11;
        thunk_FUN_03048534(&local_a0,lVar11);
        uStack_98 = CONCAT44(uStack_98._4_4_,uVar2);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        lVar11 = *(long *)(lVar9 + 0x10);
        lVar13 = *(long *)puVar6;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        uVar3 = *(uint *)(lVar9 + 0x18);
        if (uVar3 < *(uint *)(lVar11 + 0x18)) {
          lVar11 = lVar11 + (long)(int)uVar3 * 0x10;
          *(uint *)(lVar9 + 0x18) = uVar3 + 1;
          plVar10 = (long *)(lVar11 + 0x20);
          *plVar10 = local_a0;
          *(undefined8 *)(lVar11 + 0x28) = uStack_98;
          thunk_FUN_03048534(plVar10,0);
        }
        else {
          FUN_04593e80(lVar9,local_a0,uStack_98,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
      }
    } while( true );
  }
  goto LAB_06a79e50;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar14 = piVar14 + 4;
    if (uVar12 == 0) break;
LAB_06a79e00:
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06f70b30) {
      puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_06a79e34;
    }
  }
LAB_06a79e18:
  puVar8 = (undefined8 *)FUN_02feb5b8(plVar7,*(long *)PTR_DAT_06f70b30,0);
LAB_06a79e34:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_06a79e50:
  uVar12 = FUN_03c4b834(*(undefined8 *)(param_1 + 0x3e0),local_48,
                        *(undefined8 *)
                         NodeCanvas_DialogueTrees_UI_Examples_DialogueUGUI_<>c__DisplayClass36_1_TypeInfo
                       );
  if ((uVar12 & 1) == 0) {
    lVar11 = *(long *)(param_1 + 0x3d0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    iVar1 = *(int *)(lVar11 + 0x18);
    *(undefined4 *)(lVar11 + 0x18) = 0;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_05b11f04(*(undefined8 *)(lVar11 + 0x10),0,iVar1,0);
    }
    if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    FUN_045948d4(&local_a0,local_48,
                 *(undefined8 *)
                  Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union_TypeInfo);
    puVar5 = NodeCanvas_DialogueTrees_UI_Examples_DialogueUGUI_SubtitleDelays_TypeInfo;
    puVar4 = NodeCanvas_DialogueTrees_UI_Examples_DialogueUGUI_<CountDown>d__37_TypeInfo;
    uStack_78 = uStack_98;
    local_80 = local_a0;
    uStack_68 = uStack_88;
    local_70 = uStack_90;
    while( true ) {
      uVar12 = FUN_0556f944(&local_80,*(undefined8 *)puVar4);
      if ((uVar12 & 1) == 0) break;
      lVar11 = *(long *)(param_1 + 0x3d0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      lVar9 = *(long *)(lVar11 + 0x10);
      lVar13 = *(long *)puVar5;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      uVar3 = *(uint *)(lVar11 + 0x18);
      if (uVar3 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar11 + 0x18) = uVar3 + 1;
        puVar8 = (undefined8 *)(lVar9 + (long)(int)uVar3 * 8 + 0x20);
        *puVar8 = local_70;
        thunk_FUN_03048534(puVar8);
      }
      else {
        FUN_044302e8(lVar11,local_70,
                     *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_0556f940(&local_80,
                 *(undefined8 *)
                  NodeCanvas_DialogueTrees_UI_Examples_DialogueUGUI_<CheckInput>d__34_TypeInfo);
    FUN_03dba038(*(undefined8 *)(param_1 + 0x3e0),local_48,
                 *(undefined8 *)
                  Oculus_Interaction_DistanceReticles_DistantInteractionLineVisual_DummyPointReticle_TypeInfo
                );
    FUN_049413f4(local_60,*(undefined8 *)
                           Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase_TypeInfo
                );
    FUN_06a7badc(param_1);
    FUN_06a7bb14(param_1);
  }
  else {
    FUN_049413f4(local_60,*(undefined8 *)
                           Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase_TypeInfo
                );
  }
  return;
}


