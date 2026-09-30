/*
FUNCTION_NAME: FUN_06dada10
ENTRY_POINT: 06dada10
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_18;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_2
*/


void FUN_06dada10(void *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  ulong local_210;
  undefined8 uStack_208;
  ulong local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0 [9];
  undefined4 local_178;
  undefined8 local_174;
  uint local_168;
  undefined4 uStack_164;
  undefined1 auStack_130 [72];
  ulong local_e8;
  undefined8 uStack_e0;
  ulong local_d8;
  undefined8 uStack_d0;
  ulong local_c8;
  undefined8 uStack_c0;
  ulong local_b8;
  undefined8 uStack_b0;
  undefined4 local_9c;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  
  if ((DAT_07eead57 & 1) == 0) {
    FUN_03642964(UnityEngine_UIElements_IStylePropertyAnimations_TypeInfo);
    FUN_03642964(Sirenix_Utilities_DeepReflection_TypeInfo);
    FUN_03642964(Zenject_ISubContainerCreator_TypeInfo);
    FUN_03642964(UnityEngine_Experimental_Rendering_IScriptableRuntimeReflectionSystem_TypeInfo);
    FUN_03642964(PTR_DAT_07a2b2c0);
    FUN_03642964(PTR_DAT_079fb388);
    FUN_03642964(PTR_DAT_079fb380);
    FUN_03642964(PTR_DAT_079fb378);
    FUN_03642964(Mono_Net_Security_AsyncWriteRequest_TypeInfo);
    FUN_03642964(NAudio_Wave_SampleProviders_ISampleChunkConverter_TypeInfo);
    FUN_03642964(UnityEngine_EventSystems_ISubmitHandler_TypeInfo);
    FUN_03642964(OVR_OpenVR_IVRApplications_TypeInfo);
    FUN_03642964(OVR_OpenVR_IVRChaperone_TypeInfo);
    FUN_03642964(OVR_OpenVR_IVRChaperoneSetup_TypeInfo);
    DAT_07eead57 = 1;
  }
  memset(auStack_130,0,0xd0);
  memset(&local_200,0,0xd0);
  local_210 = 0;
  uStack_208 = 0;
  FUN_06cdc1b4(&local_210,*(undefined8 *)(param_2 + 0x10),0);
  uStack_1f8 = uStack_208;
  local_200 = local_210;
  thunk_FUN_036b7ad0(&local_200,0);
  local_220 = 0;
  uStack_218 = 0;
  FUN_06cdc1b4(&local_220,*(undefined8 *)(param_2 + 0x18),0);
  uStack_1e8 = uStack_218;
  local_1f0 = local_220;
  thunk_FUN_036b7ad0(&local_1f0,0);
  local_230 = 0;
  uStack_228 = 0;
  FUN_06cdc1b4(&local_230,*(undefined8 *)(param_2 + 0x20),0);
  uStack_1d8 = uStack_228;
  local_1e0 = local_230;
  thunk_FUN_036b7ad0(&local_1e0,0);
  local_1c8 = *(undefined8 *)(param_2 + 0x80);
  thunk_FUN_036b7ad0(&local_1c8);
  local_1c0[0] = *(undefined8 *)(param_2 + 0x88);
  thunk_FUN_036b7ad0(local_1c0);
  local_178 = *(undefined4 *)(param_2 + 0x40);
  local_1d0 = *(undefined8 *)(param_2 + 0x38);
  thunk_FUN_036b7ad0(&local_1d0);
  local_174 = *(undefined8 *)(param_2 + 0x44);
  if (*(long *)(param_2 + 0x10) == 0) goto LAB_06dae0b4;
  iVar6 = FUN_05c9c974(*(long *)(param_2 + 0x10),0x2f,0);
  uVar13 = 8;
  if (*(char *)(param_2 + 0x92) != '\0') {
    uVar13 = 0xc;
  }
  uStack_164 = *(undefined4 *)(param_2 + 0x58);
  local_168 = uVar13 | local_168 & 0xffffffe0 | (uint)(iVar6 != -1) |
                       (*(byte *)(param_2 + 0x90) & 0x7ffffff9) << 1 |
                       (uint)*(byte *)(param_2 + 0x91) << 4;
  memcpy(auStack_130,&local_200,0xd0);
  uVar7 = FUN_05c97640(*(undefined8 *)(param_2 + 0x50),0);
  if ((uVar7 & 1) == 0) {
    local_210 = local_210 & 0xffffffff00000000;
    FUN_06ce465c(&local_210,*(undefined8 *)(param_2 + 0x50),0);
    local_9c = (undefined4)local_210;
  }
  puVar5 = OVR_OpenVR_IVRChaperoneSetup_TypeInfo;
  puVar4 = UnityEngine_UIElements_IStylePropertyAnimations_TypeInfo;
  puVar3 = PTR_DAT_07a2b2c0;
  puVar2 = PTR_DAT_079fb380;
  puVar1 = PTR_DAT_079fb378;
  uVar7 = FUN_05c97640(*(undefined8 *)(param_2 + 0x28),0);
  if (((uVar7 & 1) == 0) || (*(long *)(param_2 + 0x60) != 0)) {
    lVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
    FUN_0459e7d4(lVar8,*(undefined8 *)puVar2);
    uVar7 = FUN_05c97640(*(undefined8 *)(param_2 + 0x28),0);
    if ((uVar7 & 1) == 0) {
      if (lVar8 == 0) goto LAB_06dae0b4;
      lVar11 = *(long *)(lVar8 + 0x10);
      uVar10 = *(undefined8 *)(param_2 + 0x28);
      lVar14 = *(long *)PTR_DAT_079fb388;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar11 == 0) goto LAB_06dae0b4;
      uVar13 = *(uint *)(lVar8 + 0x18);
      if (uVar13 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar13 + 1;
        *(undefined8 *)(lVar11 + (long)(int)uVar13 * 8 + 0x20) = uVar10;
        thunk_FUN_036b7ad0();
      }
      else {
        FUN_0459f03c(lVar8,uVar10,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70)
                    );
      }
    }
    if (*(long *)(param_2 + 0x60) != 0) {
      if (lVar8 == 0) goto LAB_06dae0b4;
      FUN_0459f24c(lVar8,*(long *)(param_2 + 0x60),*(undefined8 *)puVar3);
    }
    lVar11 = *(long *)puVar5;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar11 = *(long *)puVar5;
    }
    puVar12 = *(undefined8 **)(lVar11 + 0xb8);
    lVar14 = puVar12[1];
    if (lVar14 == 0) {
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        puVar12 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
      }
      uVar10 = *puVar12;
      lVar14 = thunk_FUN_0367fe20(*(undefined8 *)
                                   UnityEngine_Experimental_Rendering_IScriptableRuntimeReflectionSystem_TypeInfo
                                 );
      FUN_041597c8(lVar14,uVar10,*(undefined8 *)OVR_OpenVR_IVRApplications_TypeInfo,0);
      plVar9 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
      *plVar9 = lVar14;
      thunk_FUN_036b7ad0(plVar9,lVar14);
    }
    uVar10 = FUN_03cb8fec(lVar8,lVar14,*(undefined8 *)puVar4);
    uVar10 = FUN_03cc3c60(uVar10,*(undefined8 *)Sirenix_Utilities_DeepReflection_TypeInfo);
    local_210 = 0;
    uStack_208 = 0;
    FUN_04c266cc(&local_210,uVar10,
                 *(undefined8 *)NAudio_Wave_SampleProviders_ISampleChunkConverter_TypeInfo);
    uStack_e0 = uStack_208;
    local_e8 = local_210;
    thunk_FUN_036b7ad0(&local_e8,0);
  }
  uVar7 = FUN_05c97640(*(undefined8 *)(param_2 + 0x30),0);
  if (((uVar7 & 1) == 0) || (*(long *)(param_2 + 0x68) != 0)) {
    lVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
    FUN_0459e7d4(lVar8,*(undefined8 *)puVar2);
    uVar7 = FUN_05c97640(*(undefined8 *)(param_2 + 0x30),0);
    if ((uVar7 & 1) == 0) {
      if (lVar8 == 0) goto LAB_06dae0b4;
      lVar11 = *(long *)(lVar8 + 0x10);
      uVar10 = *(undefined8 *)(param_2 + 0x30);
      lVar14 = *(long *)PTR_DAT_079fb388;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar11 == 0) goto LAB_06dae0b4;
      uVar13 = *(uint *)(lVar8 + 0x18);
      if (uVar13 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar13 + 1;
        *(undefined8 *)(lVar11 + (long)(int)uVar13 * 8 + 0x20) = uVar10;
        thunk_FUN_036b7ad0();
      }
      else {
        FUN_0459f03c(lVar8,uVar10,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70)
                    );
      }
    }
    if (*(long *)(param_2 + 0x68) != 0) {
      if (lVar8 == 0) {
LAB_06dae0b4:
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      FUN_0459f24c(lVar8,*(long *)(param_2 + 0x68),*(undefined8 *)puVar3);
    }
    lVar11 = *(long *)puVar5;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar11 = *(long *)puVar5;
    }
    puVar12 = *(undefined8 **)(lVar11 + 0xb8);
    lVar14 = puVar12[2];
    if (lVar14 == 0) {
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        puVar12 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
      }
      uVar10 = *puVar12;
      lVar14 = thunk_FUN_0367fe20(*(undefined8 *)
                                   UnityEngine_Experimental_Rendering_IScriptableRuntimeReflectionSystem_TypeInfo
                                 );
      FUN_041597c8(lVar14,uVar10,*(undefined8 *)OVR_OpenVR_IVRChaperone_TypeInfo,0);
      plVar9 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
      *plVar9 = lVar14;
      thunk_FUN_036b7ad0(plVar9,lVar14);
    }
    uVar10 = FUN_03cb8fec(lVar8,lVar14,*(undefined8 *)puVar4);
    uVar10 = FUN_03cc3c60(uVar10,*(undefined8 *)Sirenix_Utilities_DeepReflection_TypeInfo);
    local_210 = 0;
    uStack_208 = 0;
    FUN_04c266cc(&local_210,uVar10,
                 *(undefined8 *)NAudio_Wave_SampleProviders_ISampleChunkConverter_TypeInfo);
    uStack_d0 = uStack_208;
    local_d8 = local_210;
    thunk_FUN_036b7ad0(&local_d8,0);
  }
  uVar7 = FUN_05c97640(*(undefined8 *)(param_2 + 0x70),0);
  if ((uVar7 & 1) == 0) {
    uVar10 = FUN_06ce89e0(*(undefined8 *)(param_2 + 0x70),0);
    local_210 = 0;
    uStack_208 = 0;
    FUN_04c26f90(&local_210,uVar10,*(undefined8 *)Mono_Net_Security_AsyncWriteRequest_TypeInfo);
    uStack_c0 = uStack_208;
    local_c8 = local_210;
    thunk_FUN_036b7ad0(&local_c8,0);
  }
  uVar7 = FUN_05c97640(*(undefined8 *)(param_2 + 0x78),0);
  if ((uVar7 & 1) == 0) {
    uVar10 = FUN_06ce82a4(*(undefined8 *)(param_2 + 0x78),0);
    uVar10 = FUN_03cc3ce8(uVar10,*(undefined8 *)Zenject_ISubContainerCreator_TypeInfo);
    local_210 = 0;
    uStack_208 = 0;
    FUN_04c26b18(&local_210,uVar10,*(undefined8 *)UnityEngine_EventSystems_ISubmitHandler_TypeInfo);
    uStack_b0 = uStack_208;
    local_b8 = local_210;
    thunk_FUN_036b7ad0(&local_b8,0);
  }
  if (*(long *)(param_2 + 0x98) != 0) {
    local_90 = FUN_06ceb0d0(*(long *)(param_2 + 0x98),0);
  }
  if (*(long *)(param_2 + 0xa0) != 0) {
    local_80 = FUN_06ceb0d0(*(long *)(param_2 + 0xa0),0);
  }
  if (*(long *)(param_2 + 0xa8) != 0) {
    local_70 = FUN_06ceb0d0(*(long *)(param_2 + 0xa8),0);
  }
  memcpy(param_1,auStack_130,0xd0);
  return;
}


