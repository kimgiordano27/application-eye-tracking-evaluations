/*
FUNCTION_NAME: FUN_07d3e1ec
ENTRY_POINT: 07d3e1ec
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_12;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_21
*/


void FUN_07d3e1ec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  
  puVar2 = PTR_DAT_084914e0;
  if ((DAT_089996c9 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084935c8);
    FUN_03a8a718(PTR_DAT_084914e0);
    FUN_03a8a718(Unity_Services_Vivox_vx_resp_sessiongroup_control_audio_injection_t_TypeInfo);
    FUN_03a8a718(Unity_Services_Vivox_vx_resp_sessiongroup_create_t_TypeInfo);
    FUN_03a8a718(Unity_Services_Vivox_vx_resp_sessiongroup_get_stats_t_TypeInfo);
    FUN_03a8a718(Unity_Services_Vivox_vx_resp_sessiongroup_remove_session_t_TypeInfo);
    FUN_03a8a718(Unity_Services_Vivox_vx_resp_sessiongroup_reset_focus_t_TypeInfo);
    FUN_03a8a718(Unity_Services_Vivox_vx_resp_sessiongroup_set_focus_t_TypeInfo);
    FUN_03a8a718(Unity_Services_Vivox_vx_resp_sessiongroup_set_session_3d_position_t_TypeInfo);
    FUN_03a8a718(Unity_Services_Vivox_vx_resp_sessiongroup_set_tx_all_sessions_t_TypeInfo);
    FUN_03a8a718(Unity_Services_Vivox_vx_resp_sessiongroup_set_tx_no_session_t_TypeInfo);
    FUN_03a8a718(Unity_Services_Vivox_vx_resp_sessiongroup_set_tx_session_t_TypeInfo);
    FUN_03a8a718(Unity_Services_Vivox_vx_resp_sessiongroup_terminate_t_TypeInfo);
    FUN_03a8a718(Unity_Services_Vivox_vx_resp_sessiongroup_unset_focus_t_TypeInfo);
    FUN_03a8a718(Unity_Services_Vivox_vx_sdk_config_t_TypeInfo);
    FUN_03a8a718(Unity_Services_Vivox_vx_stat_sample_t_TypeInfo);
    FUN_03a8a718(Unity_Services_Vivox_vx_stat_thread_t_TypeInfo);
    FUN_03a8a718(Unity_Services_Vivox_vx_tts_voice_list_t_TypeInfo);
    FUN_03a8a718(Unity_Services_Vivox_vx_tts_voice_t_TypeInfo);
    FUN_03a8a718(Unity_Collections_xxHashDefaultKey_TypeInfo);
    FUN_03a8a718(Gley_TrafficSystem_Internal_AIEvents_ChangeDrivingState_TypeInfo);
    FUN_03a8a718(Gley_TrafficSystem_Internal_AIEvents_NotifyVehicles_TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_HighDefinition_AOVRequestData_<>c_TypeInfo);
    FUN_03a8a718(System_Text_ASCIIEncoding_ASCIIEncodingSealed_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_ATGTextJobSystem_<>c_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_ATGTextJobSystem_ManagedJobData_TypeInfo);
    FUN_03a8a718(Unity_Services_Vivox_vx_evt_keyboard_mouse_t_TypeInfo);
    DAT_089996c9 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  puVar4 = Unity_Services_Vivox_vx_evt_keyboard_mouse_t_TypeInfo;
  puVar1 = PTR_DAT_08486760;
  lVar8 = *(long *)(PTR_DAT_08486760 + 0x78);
  if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar5 = FUN_0675ff58(lVar8 + 0x20,0);
  uVar6 = FUN_0675ff58(*(long *)(puVar1 + 0x30) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(lVar8);
    lVar8 = *(long *)puVar4;
  }
  puVar3 = PTR_DAT_084935c8;
  puVar7 = *(undefined8 **)(lVar8 + 0xb8);
  lVar10 = puVar7[0x62];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_03ac74bc(*(undefined8 *)
                                 Unity_Services_Vivox_vx_resp_sessiongroup_create_t_TypeInfo);
    FUN_059a50e4(lVar10,uVar11,*(undefined8 *)Unity_Services_Vivox_vx_sdk_config_t_TypeInfo,0);
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x310) = lVar10;
    thunk_FUN_03afed3c(lVar8 + 0x310,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07d37188(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar8 = *(long *)(puVar1 + 0x78);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar5 = FUN_0675ff58(lVar8 + 0x20,0);
  uVar6 = FUN_0675ff58(*(long *)(puVar1 + 0x88) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(lVar8);
    lVar8 = *(long *)puVar4;
  }
  puVar7 = *(undefined8 **)(lVar8 + 0xb8);
  lVar10 = puVar7[99];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_03ac74bc(*(undefined8 *)
                                 Unity_Services_Vivox_vx_resp_sessiongroup_set_tx_session_t_TypeInfo
                               );
    FUN_059a4c4c(lVar10,uVar11,*(undefined8 *)Unity_Services_Vivox_vx_tts_voice_list_t_TypeInfo,0);
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x318) = lVar10;
    thunk_FUN_03afed3c(lVar8 + 0x318,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07d37188(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar8 = *(long *)(puVar1 + 0x78);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar5 = FUN_0675ff58(lVar8 + 0x20,0);
  uVar6 = FUN_0675ff58(*(long *)(puVar1 + 0x28) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(lVar8);
    lVar8 = *(long *)puVar4;
  }
  puVar7 = *(undefined8 **)(lVar8 + 0xb8);
  lVar10 = puVar7[100];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_03ac74bc(*(undefined8 *)
                                 Unity_Services_Vivox_vx_resp_sessiongroup_set_session_3d_position_t_TypeInfo
                               );
    FUN_059a4ac4(lVar10,uVar11,*(undefined8 *)Unity_Services_Vivox_vx_tts_voice_t_TypeInfo,0);
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 800) = lVar10;
    thunk_FUN_03afed3c(lVar8 + 800,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07d37188(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar8 = *(long *)(puVar1 + 0x78);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar5 = FUN_0675ff58(lVar8 + 0x20,0);
  uVar6 = FUN_0675ff58(*(long *)(puVar1 + 0x38) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(lVar8);
    lVar8 = *(long *)puVar4;
  }
  puVar7 = *(undefined8 **)(lVar8 + 0xb8);
  lVar10 = puVar7[0x65];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_03ac74bc(*(undefined8 *)
                                 Unity_Services_Vivox_vx_resp_sessiongroup_control_audio_injection_t_TypeInfo
                               );
    FUN_059a4dd4(lVar10,uVar11,*(undefined8 *)Unity_Collections_xxHashDefaultKey_TypeInfo,0);
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x328) = lVar10;
    thunk_FUN_03afed3c(lVar8 + 0x328,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07d37188(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar8 = *(long *)(puVar1 + 0x78);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar5 = FUN_0675ff58(lVar8 + 0x20,0);
  uVar6 = FUN_0675ff58(*(long *)(puVar1 + 0x48) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(lVar8);
    lVar8 = *(long *)puVar4;
  }
  puVar7 = *(undefined8 **)(lVar8 + 0xb8);
  lVar10 = puVar7[0x66];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_03ac74bc(*(undefined8 *)
                                 Unity_Services_Vivox_vx_resp_sessiongroup_set_focus_t_TypeInfo);
    FUN_059a4e98(lVar10,uVar11,
                 *(undefined8 *)Gley_TrafficSystem_Internal_AIEvents_ChangeDrivingState_TypeInfo,0);
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x330) = lVar10;
    thunk_FUN_03afed3c(lVar8 + 0x330,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07d37188(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar8 = *(long *)(puVar1 + 0x78);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar5 = FUN_0675ff58(lVar8 + 0x20,0);
  uVar6 = FUN_0675ff58(*(long *)(puVar1 + 0x68) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(lVar8);
    lVar8 = *(long *)puVar4;
  }
  puVar7 = *(undefined8 **)(lVar8 + 0xb8);
  lVar10 = puVar7[0x67];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_03ac74bc(*(undefined8 *)
                                 Unity_Services_Vivox_vx_resp_sessiongroup_terminate_t_TypeInfo);
    FUN_059a4f5c(lVar10,uVar11,
                 *(undefined8 *)Gley_TrafficSystem_Internal_AIEvents_NotifyVehicles_TypeInfo,0);
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x338) = lVar10;
    thunk_FUN_03afed3c(lVar8 + 0x338,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07d37188(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar8 = *(long *)(puVar1 + 0x78);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar5 = FUN_0675ff58(lVar8 + 0x20,0);
  uVar6 = FUN_0675ff58(*(long *)(puVar1 + 0x18) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(lVar8);
    lVar8 = *(long *)puVar4;
  }
  puVar7 = *(undefined8 **)(lVar8 + 0xb8);
  lVar10 = puVar7[0x68];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_03ac74bc(*(undefined8 *)
                                 Unity_Services_Vivox_vx_resp_sessiongroup_remove_session_t_TypeInfo
                               );
    FUN_059a4b88(lVar10,uVar11,
                 *(undefined8 *)UnityEngine_Rendering_HighDefinition_AOVRequestData_<>c_TypeInfo,0);
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x340) = lVar10;
    thunk_FUN_03afed3c(lVar8 + 0x340,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07d37188(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar8 = *(long *)(puVar1 + 0x78);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar5 = FUN_0675ff58(lVar8 + 0x20,0);
  uVar6 = FUN_0675ff58(*(long *)(puVar1 + 0x40) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(lVar8);
    lVar8 = *(long *)puVar4;
  }
  puVar7 = *(undefined8 **)(lVar8 + 0xb8);
  lVar10 = puVar7[0x69];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_03ac74bc(*(undefined8 *)
                                 Unity_Services_Vivox_vx_resp_sessiongroup_reset_focus_t_TypeInfo);
    FUN_059a5340(lVar10,uVar11,*(undefined8 *)System_Text_ASCIIEncoding_ASCIIEncodingSealed_TypeInfo
                 ,0);
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x348) = lVar10;
    thunk_FUN_03afed3c(lVar8 + 0x348,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07d37188(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar8 = *(long *)(puVar1 + 0x78);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar5 = FUN_0675ff58(lVar8 + 0x20,0);
  uVar6 = FUN_0675ff58(*(long *)(puVar1 + 0x50) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(lVar8);
    lVar8 = *(long *)puVar4;
  }
  puVar7 = *(undefined8 **)(lVar8 + 0xb8);
  lVar10 = puVar7[0x6a];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_03ac74bc(*(undefined8 *)
                                 Unity_Services_Vivox_vx_resp_sessiongroup_get_stats_t_TypeInfo);
    FUN_059a5404(lVar10,uVar11,*(undefined8 *)UnityEngine_UIElements_ATGTextJobSystem_<>c_TypeInfo,0
                );
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x350) = lVar10;
    thunk_FUN_03afed3c(lVar8 + 0x350,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07d37188(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar8 = *(long *)(puVar1 + 0x78);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar5 = FUN_0675ff58(lVar8 + 0x20,0);
  uVar6 = FUN_0675ff58(*(long *)(puVar1 + 0x70) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(lVar8);
    lVar8 = *(long *)puVar4;
  }
  puVar7 = *(undefined8 **)(lVar8 + 0xb8);
  lVar10 = puVar7[0x6b];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_03ac74bc(*(undefined8 *)
                                 Unity_Services_Vivox_vx_resp_sessiongroup_set_tx_all_sessions_t_TypeInfo
                               );
    FUN_059a54c8(lVar10,uVar11,
                 *(undefined8 *)UnityEngine_UIElements_ATGTextJobSystem_ManagedJobData_TypeInfo,0);
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x358) = lVar10;
    thunk_FUN_03afed3c(lVar8 + 0x358,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07d37188(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar8 = *(long *)(puVar1 + 0x78);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar5 = FUN_0675ff58(lVar8 + 0x20,0);
  uVar6 = FUN_0675ff58(*(long *)(puVar1 + 0x80) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(lVar8);
    lVar8 = *(long *)puVar4;
  }
  puVar7 = *(undefined8 **)(lVar8 + 0xb8);
  lVar10 = puVar7[0x6c];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_03ac74bc(*(undefined8 *)
                                 Unity_Services_Vivox_vx_resp_sessiongroup_set_tx_no_session_t_TypeInfo
                               );
    FUN_059a4d10(lVar10,uVar11,*(undefined8 *)Unity_Services_Vivox_vx_stat_sample_t_TypeInfo,0);
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x360) = lVar10;
    thunk_FUN_03afed3c(lVar8 + 0x360,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07d37188(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar8 = *(long *)(puVar1 + 0x78);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar5 = FUN_0675ff58(lVar8 + 0x20,0);
  uVar6 = FUN_0675ff58(*(long *)(puVar1 + 0x10) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(lVar8);
    lVar8 = *(long *)puVar4;
  }
  puVar7 = *(undefined8 **)(lVar8 + 0xb8);
  lVar10 = puVar7[0x6d];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_03ac74bc(*(undefined8 *)
                                 Unity_Services_Vivox_vx_resp_sessiongroup_unset_focus_t_TypeInfo);
    FUN_059a5020(lVar10,uVar11,*(undefined8 *)Unity_Services_Vivox_vx_stat_thread_t_TypeInfo,0);
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x368) = lVar10;
    thunk_FUN_03afed3c(lVar8 + 0x368,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07d37188(uVar9,uVar5,uVar6,lVar10);
  return;
}


