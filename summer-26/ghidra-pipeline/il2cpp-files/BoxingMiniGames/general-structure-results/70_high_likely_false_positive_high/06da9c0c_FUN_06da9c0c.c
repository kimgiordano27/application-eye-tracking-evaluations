/*
FUNCTION_NAME: FUN_06da9c0c
ENTRY_POINT: 06da9c0c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 71
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_10;telemetry_or_network_hits_2
*/


void FUN_06da9c0c(void *param_1,long *param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  uint uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  uint local_224;
  undefined8 local_220;
  undefined4 local_1f4;
  undefined8 local_1f0;
  undefined8 local_1e8;
  uint local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  int local_1b4;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  int local_b8;
  uint local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  uint local_a8;
  undefined4 local_a4;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_64;
  
  if ((DAT_07eead38 & 1) == 0) {
    FUN_03642964(UnityEngine_UIElements_IStyle_TypeInfo);
    FUN_03642964(UnityEngine_UIElements_IStylePropertyAnimationSystem_TypeInfo);
    FUN_03642964(UnityEngine_UIElements_IStylePropertyAnimations_TypeInfo);
    FUN_03642964(Sirenix_Utilities_DeepReflection_TypeInfo);
    FUN_03642964(Zenject_ISubContainerCreator_TypeInfo);
    FUN_03642964(PTR_DAT_079fedc8);
    FUN_03642964(UnityEngine_Experimental_Rendering_IScriptableRuntimeReflectionSystem_TypeInfo);
    FUN_03642964(PTR_DAT_079fe240);
    FUN_03642964(PTR_DAT_079fe190);
    FUN_03642964(PTR_DAT_079f8730);
    FUN_03642964(Mono_Net_Security_AsyncWriteRequest_TypeInfo);
    FUN_03642964(NAudio_Wave_SampleProviders_ISampleChunkConverter_TypeInfo);
    FUN_03642964(UnityEngine_EventSystems_ISubmitHandler_TypeInfo);
    FUN_03642964(UnityEngine_ISubsystem_TypeInfo);
    FUN_03642964(UnityEngine_ISubsystemDescriptor_TypeInfo);
    FUN_03642964(Unity_AppUI_UI_ISelectableElement_TypeInfo);
    DAT_07eead38 = 1;
  }
  local_64 = 0;
  local_70 = 0;
  memset(&local_140,0,0xd0);
  if (param_3 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = *(long *)(param_3 + 0x28);
  }
  uVar7 = FUN_05c97640(lVar16,0);
  if ((uVar7 & 1) != 0) {
    if (param_2 == (long *)0x0) goto LAB_06daa46c;
    lVar16 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
  }
  if (lVar16 == 0) {
LAB_06daa46c:
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  uVar6 = FUN_05c9c974(lVar16,0x2f,0);
  puVar4 = PTR_DAT_079fedc8;
  if (param_3 == 0) {
    local_1d0 = 0;
    local_1c8 = 0;
    uVar17 = 0;
  }
  else {
    local_1d0 = *(undefined8 *)(param_3 + 0x80);
    local_1c8 = *(undefined8 *)(param_3 + 0x88);
    uVar17 = *(undefined8 *)(param_3 + 0x18);
  }
  uVar7 = FUN_05c97640(uVar17,0);
  if (((uVar7 & 1) != 0) && (uVar6 == 0xffffffff)) {
    if (param_2 != (long *)0x0) {
      lVar10 = *(long *)puVar4;
      bVar1 = *(byte *)(lVar10 + 0x130);
      if (((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
          (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == lVar10)) &&
         (lVar10 = FUN_03c4f138(param_2,0,
                                *(undefined8 *)
                                 UnityEngine_UIElements_IStylePropertyAnimationSystem_TypeInfo),
         lVar10 != 0)) goto LAB_06da9e18;
    }
    uVar17 = FUN_06cedcb0(param_2,0);
    if (*(int *)(*(long *)PTR_DAT_079fe240 + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)PTR_DAT_079fe240);
    }
    uVar17 = FUN_06daa470(uVar17);
  }
LAB_06da9e18:
  if (param_3 == 0) {
    local_1d8 = 0;
    if (param_2 == (long *)0x0) {
LAB_06da9e6c:
      local_1b4 = -1;
    }
    else {
LAB_06da9e54:
      lVar8 = *(long *)puVar4;
      lVar10 = *param_2;
      bVar1 = *(byte *)(lVar8 + 0x130);
      if (*(byte *)(lVar10 + 0x130) < bVar1) goto LAB_06da9e6c;
      local_1b4 = -1;
      if ((*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar1 * 8 + -8) == lVar8) &&
         (uVar6 == 0xffffffff)) {
        uVar14 = (**(code **)(lVar10 + 0x1c8))(param_2,*(undefined8 *)(lVar10 + 0x1d0));
        uVar15 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
        if (*(int *)(*(long *)PTR_DAT_079f8730 + 0xe4) == 0) {
          thunk_FUN_036a1978(*(long *)PTR_DAT_079f8730);
        }
        local_70 = thunk_FUN_0364f28c(uVar14,uVar15,0);
        local_1b4 = FUN_05e63f54(&local_70,0);
      }
    }
    if (param_3 != 0) goto LAB_06da9e78;
    local_1e0 = 0xffffffff;
    local_1dc = 0;
    local_64 = 0;
LAB_06da9ebc:
    if ((local_1e0 & uVar6) == 0xffffffff) {
      uVar14 = FUN_06cedcb0(param_2,0);
      if (*(int *)(*(long *)PTR_DAT_079fe190 + 0xe4) == 0) {
        thunk_FUN_036a1978(*(long *)PTR_DAT_079fe190);
      }
      local_64 = FUN_06da00e8(uVar14);
      local_1e0 = 0xffffffff;
    }
    if (param_3 == 0) {
      uVar18 = 0;
      local_1f4 = 0;
      uVar14 = 0;
      uVar15 = 0;
      local_224 = 0;
      uVar12 = 0;
      uVar19 = 0;
      local_1f0 = 0;
      local_1e8 = 0;
      auVar20 = ZEXT816(0);
      auVar21 = ZEXT816(0);
      auVar22 = ZEXT816(0);
      goto LAB_06daa1ac;
    }
  }
  else {
    uVar7 = FUN_05c97640(*(undefined8 *)(param_3 + 0x20),0);
    local_1d8 = 0;
    if ((uVar7 & 1) == 0) {
      local_1d8 = *(undefined8 *)(param_3 + 0x20);
    }
    local_1b4 = *(int *)(param_3 + 0x74);
    if (local_1b4 == -1) {
      if (param_2 != (long *)0x0) goto LAB_06da9e54;
      goto LAB_06da9e6c;
    }
LAB_06da9e78:
    local_1dc = *(undefined4 *)(param_3 + 0x78);
    local_1e0 = *(uint *)(param_3 + 0x70);
    local_64 = 0;
    uVar7 = FUN_05c97640(*(undefined8 *)(param_3 + 0x30),0);
    if ((uVar7 & 1) != 0) goto LAB_06da9ebc;
    FUN_06ce465c(&local_64,*(undefined8 *)(param_3 + 0x30),0);
  }
  puVar5 = UnityEngine_UIElements_IStyle_TypeInfo;
  lVar10 = FUN_03b8bb94(*(undefined8 *)(param_3 + 0x58),*(undefined8 *)(param_3 + 0x60),
                        *(undefined8 *)UnityEngine_UIElements_IStyle_TypeInfo);
  puVar4 = Unity_AppUI_UI_ISelectableElement_TypeInfo;
  if (lVar10 == 0) {
    local_1e8 = 0;
  }
  else {
    lVar8 = *(long *)Unity_AppUI_UI_ISelectableElement_TypeInfo;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar8 = *(long *)puVar4;
    }
    puVar11 = *(undefined8 **)(lVar8 + 0xb8);
    lVar13 = puVar11[2];
    if (lVar13 == 0) {
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        puVar11 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
      }
      uVar14 = *puVar11;
      lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                   UnityEngine_Experimental_Rendering_IScriptableRuntimeReflectionSystem_TypeInfo
                                 );
      FUN_041597c8(lVar13,uVar14,*(undefined8 *)UnityEngine_ISubsystem_TypeInfo,0);
      plVar9 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
      *plVar9 = lVar13;
      thunk_FUN_036b7ad0(plVar9,lVar13);
    }
    uVar14 = FUN_03cb8fec(lVar10,lVar13,
                          *(undefined8 *)UnityEngine_UIElements_IStylePropertyAnimations_TypeInfo);
    local_1e8 = FUN_03cc3c60(uVar14,*(undefined8 *)Sirenix_Utilities_DeepReflection_TypeInfo);
  }
  lVar10 = FUN_03b8bb94(*(undefined8 *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x40),
                        *(undefined8 *)puVar5);
  puVar4 = Unity_AppUI_UI_ISelectableElement_TypeInfo;
  if (lVar10 == 0) {
    local_1f0 = 0;
  }
  else {
    lVar8 = *(long *)Unity_AppUI_UI_ISelectableElement_TypeInfo;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar8 = *(long *)puVar4;
    }
    puVar11 = *(undefined8 **)(lVar8 + 0xb8);
    lVar13 = puVar11[3];
    if (lVar13 == 0) {
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        puVar11 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
      }
      uVar14 = *puVar11;
      lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                   UnityEngine_Experimental_Rendering_IScriptableRuntimeReflectionSystem_TypeInfo
                                 );
      FUN_041597c8(lVar13,uVar14,*(undefined8 *)UnityEngine_ISubsystemDescriptor_TypeInfo,0);
      plVar9 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
      *plVar9 = lVar13;
      thunk_FUN_036b7ad0(plVar9,lVar13);
    }
    uVar14 = FUN_03cb8fec(lVar10,lVar13,
                          *(undefined8 *)UnityEngine_UIElements_IStylePropertyAnimations_TypeInfo);
    local_1f0 = FUN_03cc3c60(uVar14,*(undefined8 *)Sirenix_Utilities_DeepReflection_TypeInfo);
  }
  uVar7 = FUN_05c97640(*(undefined8 *)(param_3 + 0x48),0);
  uVar14 = 0;
  if ((uVar7 & 1) == 0) {
    uVar14 = FUN_06ce89e0(*(undefined8 *)(param_3 + 0x48),0);
  }
  uVar7 = FUN_05c97640(*(undefined8 *)(param_3 + 0x50),0);
  uVar15 = 0;
  if ((uVar7 & 1) == 0) {
    uVar15 = FUN_06ce82a4(*(undefined8 *)(param_3 + 0x50),0);
    uVar15 = FUN_03cc3ce8(uVar15,*(undefined8 *)Zenject_ISubContainerCreator_TypeInfo);
  }
  uVar7 = FUN_05c97640(*(undefined8 *)(param_3 + 0x68),0);
  uVar18 = 0;
  if ((uVar7 & 1) == 0) {
    uVar18 = *(undefined8 *)(param_3 + 0x68);
  }
  local_1f4 = *(undefined4 *)(param_3 + 0x7c);
  bVar1 = *(byte *)(param_3 + 0x90);
  bVar2 = *(byte *)(param_3 + 0x92);
  bVar3 = *(byte *)(param_3 + 0x91);
  auVar20 = FUN_06ceb0d0(*(undefined8 *)(param_3 + 0x98),0);
  auVar21 = FUN_06ceb0d0(*(undefined8 *)(param_3 + 0xa0),0);
  auVar22 = FUN_06ceb0d0(*(undefined8 *)(param_3 + 0xa8),0);
  uVar12 = (uint)bVar1 << 1;
  local_224 = (uint)bVar2 << 4;
  uVar19 = (uint)bVar3 << 2;
LAB_06daa1ac:
  local_220 = auVar22._0_8_;
  memset(&local_140,0,0xd0);
  local_150 = 0;
  uStack_148 = 0;
  FUN_06cdc1b4(&local_150,lVar16,0);
  uStack_138 = uStack_148;
  local_140 = local_150;
  thunk_FUN_036b7ad0(&local_140,0);
  local_108 = local_1d0;
  thunk_FUN_036b7ad0(&local_108);
  local_100 = local_1c8;
  thunk_FUN_036b7ad0(&local_100);
  local_160 = 0;
  uStack_158 = 0;
  FUN_06cdc1b4(&local_160,uVar17,0);
  uStack_128 = uStack_158;
  local_130 = local_160;
  thunk_FUN_036b7ad0(&local_130,0);
  local_170 = 0;
  uStack_168 = 0;
  FUN_06cdc1b4(&local_170,local_1d8,0);
  uStack_118 = uStack_168;
  local_120 = local_170;
  thunk_FUN_036b7ad0(&local_120,0);
  local_110 = uVar18;
  thunk_FUN_036b7ad0(&local_110,uVar18);
  local_b8 = local_1b4;
  local_ac = local_64;
  local_b4 = local_1e0;
  local_b0 = local_1dc;
  local_180 = 0;
  uStack_178 = 0;
  FUN_04c26f90(&local_180,uVar14,*(undefined8 *)Mono_Net_Security_AsyncWriteRequest_TypeInfo);
  uStack_d0 = uStack_178;
  local_d8 = local_180;
  thunk_FUN_036b7ad0(&local_d8,0);
  local_190 = 0;
  uStack_188 = 0;
  FUN_04c26b18(&local_190,uVar15,*(undefined8 *)UnityEngine_EventSystems_ISubmitHandler_TypeInfo);
  uStack_c0 = uStack_188;
  local_c8 = local_190;
  thunk_FUN_036b7ad0(&local_c8,0);
  puVar4 = NAudio_Wave_SampleProviders_ISampleChunkConverter_TypeInfo;
  local_1a0 = 0;
  uStack_198 = 0;
  FUN_04c266cc(&local_1a0,local_1f0,
               *(undefined8 *)NAudio_Wave_SampleProviders_ISampleChunkConverter_TypeInfo);
  uStack_f0 = uStack_198;
  local_f8 = local_1a0;
  thunk_FUN_036b7ad0(&local_f8,0);
  local_1b0 = 0;
  uStack_1a8 = 0;
  FUN_04c266cc(&local_1b0,local_1e8,*(undefined8 *)puVar4);
  uStack_e0 = uStack_1a8;
  local_e8 = local_1b0;
  thunk_FUN_036b7ad0(&local_e8,0);
  local_a8 = local_224 | uVar12 | uVar19 | local_a8 & 0xffffffe0 | (uint)(uVar6 != 0xffffffff) | 8;
  local_a4 = local_1f4;
  local_80 = local_220;
  uStack_78 = auVar22._8_8_;
  local_90 = auVar21;
  local_a0 = auVar20;
  memcpy(param_1,&local_140,0xd0);
  return;
}


