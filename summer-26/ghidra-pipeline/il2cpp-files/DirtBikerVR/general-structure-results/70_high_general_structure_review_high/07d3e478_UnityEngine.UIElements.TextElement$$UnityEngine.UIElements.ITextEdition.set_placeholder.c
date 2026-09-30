/*
FUNCTION_NAME: UnityEngine.UIElements.TextElement$$UnityEngine.UIElements.ITextEdition.set_placeholder
ENTRY_POINT: 07d3e478
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_12;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_17
*/


void UnityEngine_UIElements_TextElement__UnityEngine_UIElements_ITextEdition_set_placeholder(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int in_w8;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  
  if (in_w8 == 0) {
    thunk_FUN_03ae8be4();
  }
                    /* try { // try from 07d3e484 to 07e3e4af has its CatchHandler @ 07d3e504 */
  lVar4 = *(long *)(unaff_x27 + 0x78);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar1 = FUN_0675ff58(lVar4 + 0x20,0);
  uVar2 = FUN_0675ff58(*(long *)(unaff_x27 + 0x88) + 0x20,0);
  lVar4 = *unaff_x25;
  if (*(int *)(lVar4 + 0xe4) == 0) {
                    /* try { // try from 07d3e4c4 to 07e3e4e3 has its CatchHandler @ 07d3e508 */
    thunk_FUN_03ae8be4(lVar4);
    lVar4 = *unaff_x25;
  }
  puVar3 = *(undefined8 **)(lVar4 + 0xb8);
  lVar6 = puVar3[99];
  uVar5 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar6 == 0) {
                    /* try { // try from 07d3e4e4 to 07e3e517 has its CatchHandler @ 07d3e3c8 */
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar4);
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 07d3e46c with catch @ 07d3e4f8
                        */
      puVar3 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 07d3e45c with catch @ 07d3e4fc
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 07d3e428 with catch @ 07d3e500
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 07d3e484 with catch @ 07d3e504
                        */
    uVar7 = *puVar3;
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 07d3e4c4 with catch @ 07d3e508
                        */
    lVar6 = thunk_FUN_03ac74bc(*(undefined8 *)
                                Unity_Services_Vivox_vx_resp_sessiongroup_set_tx_session_t_TypeInfo)
    ;
                    /* try { // try from 07d3e518 to 07e3e51b has its CatchHandler @ 07d3e528 */
                    /* try { // try from 07d3e51c to 07e3e52f has its CatchHandler @ 07d3e3c8 */
                    /* catch() { ... } // from try @ 07d3e518 with catch @ 07d3e528 */
    FUN_059a4c4c(lVar6,uVar7,*(undefined8 *)Unity_Services_Vivox_vx_tts_voice_list_t_TypeInfo,0);
                    /* try { // try from 07d3e530 to 07e3e537 has its CatchHandler @ 07d3e538 */
    lVar4 = *(long *)(*unaff_x25 + 0xb8);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 07d3e530 with catch @ 07d3e538
                        */
    *(long *)(lVar4 + 0x318) = lVar6;
    thunk_FUN_03afed3c(lVar4 + 0x318,lVar6);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07d37188(uVar5,uVar1,uVar2,lVar6);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar4 = *(long *)(unaff_x27 + 0x78);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar1 = FUN_0675ff58(lVar4 + 0x20,0);
  uVar2 = FUN_0675ff58(*(long *)(unaff_x27 + 0x28) + 0x20,0);
  lVar4 = *unaff_x25;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(lVar4);
    lVar4 = *unaff_x25;
  }
  puVar3 = *(undefined8 **)(lVar4 + 0xb8);
  lVar6 = puVar3[100];
  uVar5 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar6 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar4);
      puVar3 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar7 = *puVar3;
    lVar6 = thunk_FUN_03ac74bc(*(undefined8 *)
                                Unity_Services_Vivox_vx_resp_sessiongroup_set_session_3d_position_t_TypeInfo
                              );
    FUN_059a4ac4(lVar6,uVar7,*(undefined8 *)Unity_Services_Vivox_vx_tts_voice_t_TypeInfo,0);
    lVar4 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar4 + 800) = lVar6;
    thunk_FUN_03afed3c(lVar4 + 800,lVar6);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07d37188(uVar5,uVar1,uVar2,lVar6);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar4 = *(long *)(unaff_x27 + 0x78);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar1 = FUN_0675ff58(lVar4 + 0x20,0);
  uVar2 = FUN_0675ff58(*(long *)(unaff_x27 + 0x38) + 0x20,0);
  lVar4 = *unaff_x25;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(lVar4);
    lVar4 = *unaff_x25;
  }
  puVar3 = *(undefined8 **)(lVar4 + 0xb8);
  lVar6 = puVar3[0x65];
  uVar5 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar6 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar4);
      puVar3 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar7 = *puVar3;
    lVar6 = thunk_FUN_03ac74bc(*(undefined8 *)
                                Unity_Services_Vivox_vx_resp_sessiongroup_control_audio_injection_t_TypeInfo
                              );
    FUN_059a4dd4(lVar6,uVar7,*(undefined8 *)Unity_Collections_xxHashDefaultKey_TypeInfo,0);
    lVar4 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar4 + 0x328) = lVar6;
    thunk_FUN_03afed3c(lVar4 + 0x328,lVar6);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07d37188(uVar5,uVar1,uVar2,lVar6);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar4 = *(long *)(unaff_x27 + 0x78);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar1 = FUN_0675ff58(lVar4 + 0x20,0);
  uVar2 = FUN_0675ff58(*(long *)(unaff_x27 + 0x48) + 0x20,0);
  lVar4 = *unaff_x25;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(lVar4);
    lVar4 = *unaff_x25;
  }
  puVar3 = *(undefined8 **)(lVar4 + 0xb8);
  lVar6 = puVar3[0x66];
  uVar5 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar6 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar4);
      puVar3 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar7 = *puVar3;
    lVar6 = thunk_FUN_03ac74bc(*(undefined8 *)
                                Unity_Services_Vivox_vx_resp_sessiongroup_set_focus_t_TypeInfo);
    FUN_059a4e98(lVar6,uVar7,
                 *(undefined8 *)Gley_TrafficSystem_Internal_AIEvents_ChangeDrivingState_TypeInfo,0);
    lVar4 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar4 + 0x330) = lVar6;
    thunk_FUN_03afed3c(lVar4 + 0x330,lVar6);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07d37188(uVar5,uVar1,uVar2,lVar6);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar4 = *(long *)(unaff_x27 + 0x78);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar1 = FUN_0675ff58(lVar4 + 0x20,0);
  uVar2 = FUN_0675ff58(*(long *)(unaff_x27 + 0x68) + 0x20,0);
  lVar4 = *unaff_x25;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(lVar4);
    lVar4 = *unaff_x25;
  }
  puVar3 = *(undefined8 **)(lVar4 + 0xb8);
  lVar6 = puVar3[0x67];
  uVar5 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar6 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar4);
      puVar3 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar7 = *puVar3;
    lVar6 = thunk_FUN_03ac74bc(*(undefined8 *)
                                Unity_Services_Vivox_vx_resp_sessiongroup_terminate_t_TypeInfo);
    FUN_059a4f5c(lVar6,uVar7,
                 *(undefined8 *)Gley_TrafficSystem_Internal_AIEvents_NotifyVehicles_TypeInfo,0);
    lVar4 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar4 + 0x338) = lVar6;
    thunk_FUN_03afed3c(lVar4 + 0x338,lVar6);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07d37188(uVar5,uVar1,uVar2,lVar6);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar4 = *(long *)(unaff_x27 + 0x78);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar1 = FUN_0675ff58(lVar4 + 0x20,0);
  uVar2 = FUN_0675ff58(*(long *)(unaff_x27 + 0x18) + 0x20,0);
  lVar4 = *unaff_x25;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(lVar4);
    lVar4 = *unaff_x25;
  }
  puVar3 = *(undefined8 **)(lVar4 + 0xb8);
  lVar6 = puVar3[0x68];
  uVar5 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar6 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar4);
      puVar3 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar7 = *puVar3;
    lVar6 = thunk_FUN_03ac74bc(*(undefined8 *)
                                Unity_Services_Vivox_vx_resp_sessiongroup_remove_session_t_TypeInfo)
    ;
    FUN_059a4b88(lVar6,uVar7,
                 *(undefined8 *)UnityEngine_Rendering_HighDefinition_AOVRequestData_<>c_TypeInfo,0);
    lVar4 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar4 + 0x340) = lVar6;
    thunk_FUN_03afed3c(lVar4 + 0x340,lVar6);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07d37188(uVar5,uVar1,uVar2,lVar6);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar4 = *(long *)(unaff_x27 + 0x78);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar1 = FUN_0675ff58(lVar4 + 0x20,0);
  uVar2 = FUN_0675ff58(*(long *)(unaff_x27 + 0x40) + 0x20,0);
  lVar4 = *unaff_x25;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(lVar4);
    lVar4 = *unaff_x25;
  }
  puVar3 = *(undefined8 **)(lVar4 + 0xb8);
  lVar6 = puVar3[0x69];
  uVar5 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar6 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar4);
      puVar3 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar7 = *puVar3;
    lVar6 = thunk_FUN_03ac74bc(*(undefined8 *)
                                Unity_Services_Vivox_vx_resp_sessiongroup_reset_focus_t_TypeInfo);
    FUN_059a5340(lVar6,uVar7,*(undefined8 *)System_Text_ASCIIEncoding_ASCIIEncodingSealed_TypeInfo,0
                );
    lVar4 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar4 + 0x348) = lVar6;
    thunk_FUN_03afed3c(lVar4 + 0x348,lVar6);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07d37188(uVar5,uVar1,uVar2,lVar6);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar4 = *(long *)(unaff_x27 + 0x78);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar1 = FUN_0675ff58(lVar4 + 0x20,0);
  uVar2 = FUN_0675ff58(*(long *)(unaff_x27 + 0x50) + 0x20,0);
  lVar4 = *unaff_x25;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(lVar4);
    lVar4 = *unaff_x25;
  }
  puVar3 = *(undefined8 **)(lVar4 + 0xb8);
  lVar6 = puVar3[0x6a];
  uVar5 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar6 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar4);
      puVar3 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar7 = *puVar3;
    lVar6 = thunk_FUN_03ac74bc(*(undefined8 *)
                                Unity_Services_Vivox_vx_resp_sessiongroup_get_stats_t_TypeInfo);
    FUN_059a5404(lVar6,uVar7,*(undefined8 *)UnityEngine_UIElements_ATGTextJobSystem_<>c_TypeInfo,0);
    lVar4 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar4 + 0x350) = lVar6;
    thunk_FUN_03afed3c(lVar4 + 0x350,lVar6);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07d37188(uVar5,uVar1,uVar2,lVar6);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar4 = *(long *)(unaff_x27 + 0x78);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar1 = FUN_0675ff58(lVar4 + 0x20,0);
  uVar2 = FUN_0675ff58(*(long *)(unaff_x27 + 0x70) + 0x20,0);
  lVar4 = *unaff_x25;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(lVar4);
    lVar4 = *unaff_x25;
  }
  puVar3 = *(undefined8 **)(lVar4 + 0xb8);
  lVar6 = puVar3[0x6b];
  uVar5 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar6 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar4);
      puVar3 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar7 = *puVar3;
    lVar6 = thunk_FUN_03ac74bc(*(undefined8 *)
                                Unity_Services_Vivox_vx_resp_sessiongroup_set_tx_all_sessions_t_TypeInfo
                              );
    FUN_059a54c8(lVar6,uVar7,
                 *(undefined8 *)UnityEngine_UIElements_ATGTextJobSystem_ManagedJobData_TypeInfo,0);
    lVar4 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar4 + 0x358) = lVar6;
    thunk_FUN_03afed3c(lVar4 + 0x358,lVar6);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07d37188(uVar5,uVar1,uVar2,lVar6);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar4 = *(long *)(unaff_x27 + 0x78);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar1 = FUN_0675ff58(lVar4 + 0x20,0);
  uVar2 = FUN_0675ff58(*(long *)(unaff_x27 + 0x80) + 0x20,0);
  lVar4 = *unaff_x25;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(lVar4);
    lVar4 = *unaff_x25;
  }
  puVar3 = *(undefined8 **)(lVar4 + 0xb8);
  lVar6 = puVar3[0x6c];
  uVar5 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar6 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar4);
      puVar3 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar7 = *puVar3;
    lVar6 = thunk_FUN_03ac74bc(*(undefined8 *)
                                Unity_Services_Vivox_vx_resp_sessiongroup_set_tx_no_session_t_TypeInfo
                              );
    FUN_059a4d10(lVar6,uVar7,*(undefined8 *)Unity_Services_Vivox_vx_stat_sample_t_TypeInfo,0);
    lVar4 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar4 + 0x360) = lVar6;
    thunk_FUN_03afed3c(lVar4 + 0x360,lVar6);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07d37188(uVar5,uVar1,uVar2,lVar6);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar4 = *(long *)(unaff_x27 + 0x78);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar1 = FUN_0675ff58(lVar4 + 0x20,0);
  uVar2 = FUN_0675ff58(*(long *)(unaff_x27 + 0x10) + 0x20,0);
  lVar4 = *unaff_x25;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(lVar4);
    lVar4 = *unaff_x25;
  }
  puVar3 = *(undefined8 **)(lVar4 + 0xb8);
  lVar6 = puVar3[0x6d];
  uVar5 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar6 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar4);
      puVar3 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar7 = *puVar3;
    lVar6 = thunk_FUN_03ac74bc(*(undefined8 *)
                                Unity_Services_Vivox_vx_resp_sessiongroup_unset_focus_t_TypeInfo);
    FUN_059a5020(lVar6,uVar7,*(undefined8 *)Unity_Services_Vivox_vx_stat_thread_t_TypeInfo,0);
    lVar4 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar4 + 0x368) = lVar6;
    thunk_FUN_03afed3c(lVar4 + 0x368,lVar6);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07d37188(uVar5,uVar1,uVar2,lVar6);
  return;
}


