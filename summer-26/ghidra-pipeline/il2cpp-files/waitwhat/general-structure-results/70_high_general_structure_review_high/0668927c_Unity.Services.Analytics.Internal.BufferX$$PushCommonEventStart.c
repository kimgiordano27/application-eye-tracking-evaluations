/*
FUNCTION_NAME: Unity.Services.Analytics.Internal.BufferX$$PushCommonEventStart
ENTRY_POINT: 0668927c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void Unity_Services_Analytics_Internal_BufferX__PushCommonEventStart(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_x7;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined1 auStack_1f0 [96];
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((DAT_07557e9f & 1) == 0) {
    FUN_03188a78(System_Net_HttpVersion_TypeInfo);
    FUN_03188a78(UnityEngine_XR_Interaction_Toolkit_HoverEnterEventArgs_TypeInfo);
    FUN_03188a78(System_Net_HttpWebRequest_TypeInfo);
    FUN_03188a78(UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo);
    FUN_03188a78(System_Net_HttpWebResponse_TypeInfo);
    FUN_03188a78(Sentry_Internal_Hub_TypeInfo);
    FUN_03188a78(Sentry_Extensibility_HubAdapter_TypeInfo);
    FUN_03188a78(Best_HTTP_Hosts_Connections_HTTP2_HuffmanEncoder_TypeInfo);
    FUN_03188a78(UnityEngine_HumanBodyBones_TypeInfo);
    DAT_07557e9f = 1;
  }
  local_c0 = 0;
  local_f0 = 0;
  local_120 = 0;
  local_150 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_138 = 0;
  local_140 = 0;
  local_128 = 0;
  uStack_130 = 0;
  uStack_108 = 0;
  local_110 = 0;
  local_f8 = 0;
  uStack_100 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_190 = 0;
  uStack_188 = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_066ace24(*(long *)(param_1 + 0x38),0,0);
    if (*(long *)(param_1 + 0x48) != 0) {
      FUN_03b4e5ac(auStack_1f0,*(long *)(param_1 + 0x48),0,3,
                   *(undefined8 *)System_Net_HttpWebResponse_TypeInfo);
      memcpy(&local_b0,auStack_1f0,0x60);
      if (*(long *)(param_1 + 0x48) != 0) {
        FUN_03b4e660(&local_218,*(long *)(param_1 + 0x48),3,0,1,
                     *(undefined8 *)Sentry_Internal_Hub_TypeInfo);
        local_c0 = local_1f8;
        uStack_d8 = uStack_210;
        local_e0 = local_218;
        local_c8 = uStack_200;
        local_d0 = uStack_208;
        if (*(long *)(param_1 + 0x48) != 0) {
          FUN_03b4e660(&local_240,*(long *)(param_1 + 0x48),3,1,1,
                       *(undefined8 *)UnityEngine_HumanBodyBones_TypeInfo);
          local_f0 = local_220;
          uStack_108 = uStack_238;
          local_110 = local_240;
          local_f8 = uStack_228;
          uStack_100 = uStack_230;
          if (*(long *)(param_1 + 0x48) != 0) {
            FUN_03b4e660(&local_268,*(long *)(param_1 + 0x48),3,0,1,
                         *(undefined8 *)Sentry_Extensibility_HubAdapter_TypeInfo);
            puVar4 = System_Net_HttpWebRequest_TypeInfo;
            puVar3 = System_Net_HttpVersion_TypeInfo;
            puVar2 = UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo;
            puVar1 = UnityEngine_XR_Interaction_Toolkit_HoverEnterEventArgs_TypeInfo;
            uStack_138 = uStack_260;
            local_140 = local_268;
            local_128 = uStack_250;
            uStack_130 = local_258;
            local_120 = local_248;
            if (*(long *)(param_1 + 0x48) != 0) {
              FUN_03b4e660(&local_290,*(long *)(param_1 + 0x48),3,0,1,
                           *(undefined8 *)Best_HTTP_Hosts_Connections_HTTP2_HuffmanEncoder_TypeInfo)
              ;
              uStack_168 = uStack_288;
              local_170 = local_290;
              uStack_158 = uStack_278;
              uStack_160 = uStack_280;
              local_150 = local_270;
              FUN_06689828(param_1,uStack_138,uStack_130,&uStack_178,&local_180,&uStack_188,3);
              auVar7 = FUN_0460e8d4(&uStack_178,*(undefined8 *)puVar1);
              local_190 = FUN_066899a0(param_1,auVar7._0_8_,auVar7._8_8_);
              uVar6 = local_120;
              uVar5 = local_128;
              auVar7 = FUN_0460e8d4(&uStack_178,*(undefined8 *)puVar1);
              FUN_06689ab0(param_1,uVar5,uVar6,auVar7._0_8_,auVar7._8_8_);
              FUN_06689b24(param_1,local_f8,local_f0);
              FUN_06689c5c(param_1,uStack_d8,local_d0,local_c8,local_c0,local_b0,uStack_a8);
              uStack_2b8 = uStack_168;
              local_2c0 = local_170;
              uStack_2a8 = uStack_158;
              uStack_2b0 = uStack_160;
              local_2a0 = local_150;
              auVar7 = FUN_0460e8d4(&local_190,*(undefined8 *)puVar1);
              FUN_06689cd4(param_1,&local_2c0,auVar7._0_8_,auVar7._8_8_);
              uVar6 = uStack_160;
              uVar5 = uStack_168;
              auVar7 = FUN_0460e8d4(&local_180,*(undefined8 *)puVar1);
              auVar8 = FUN_0460b114(&uStack_188,*(undefined8 *)puVar3);
              FUN_06689eac(param_1,uVar5,uVar6,auVar7._0_8_,auVar7._8_8_,auVar8._0_8_,auVar8._8_8_,
                           in_x7,uStack_108,uStack_100);
              FUN_069c9af8(&local_b0,0);
              FUN_069c9a9c(&local_e0,0);
              FUN_069c9a9c(&local_110,0);
              FUN_069c9a9c(&local_140,0);
              FUN_069c9a9c(&local_170,0);
              FUN_0460e7ac(&uStack_178,*(undefined8 *)puVar2);
              FUN_0460e7ac(&local_190,*(undefined8 *)puVar2);
              FUN_0460e7ac(&local_180,*(undefined8 *)puVar2);
              FUN_0460afec(&uStack_188,*(undefined8 *)puVar4);
              if (*(long *)(param_1 + 0x38) != 0) {
                FUN_066acf68(*(long *)(param_1 + 0x38),0);
                if (*(long *)(param_1 + 0x40) != 0) {
                  FUN_06686b88();
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


