/*
FUNCTION_NAME: UnityEngine.UIElements.TextElement$$get_OnPlaceholderChanged
ENTRY_POINT: 07d3e6d0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_13
*/


void UnityEngine_UIElements_TextElement__get_OnPlaceholderChanged(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *in_x9;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x22;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  
  if (unaff_x22 == 0) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(param_1);
      in_x9 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar6 = *in_x9;
    uVar1 = thunk_FUN_03ac74bc(*(undefined8 *)
                                Unity_Services_Vivox_vx_resp_sessiongroup_control_audio_injection_t_TypeInfo
                              );
    FUN_059a4dd4(uVar1,uVar6,*(undefined8 *)Unity_Collections_xxHashDefaultKey_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(undefined8 *)(lVar2 + 0x328) = uVar1;
    thunk_FUN_03afed3c(lVar2 + 0x328,uVar1);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07d37188();
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar2 = *(long *)(unaff_x27 + 0x78);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar1 = FUN_0675ff58(lVar2 + 0x20,0);
  uVar6 = FUN_0675ff58(*(long *)(unaff_x27 + 0x48) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(lVar2);
    lVar2 = *unaff_x25;
  }
  puVar3 = *(undefined8 **)(lVar2 + 0xb8);
  lVar5 = puVar3[0x66];
  uVar4 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar2);
      puVar3 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar7 = *puVar3;
    lVar5 = thunk_FUN_03ac74bc(*(undefined8 *)
                                Unity_Services_Vivox_vx_resp_sessiongroup_set_focus_t_TypeInfo);
    FUN_059a4e98(lVar5,uVar7,
                 *(undefined8 *)Gley_TrafficSystem_Internal_AIEvents_ChangeDrivingState_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x330) = lVar5;
    thunk_FUN_03afed3c(lVar2 + 0x330,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07d37188(uVar4,uVar1,uVar6,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar2 = *(long *)(unaff_x27 + 0x78);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar1 = FUN_0675ff58(lVar2 + 0x20,0);
  uVar6 = FUN_0675ff58(*(long *)(unaff_x27 + 0x68) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(lVar2);
    lVar2 = *unaff_x25;
  }
  puVar3 = *(undefined8 **)(lVar2 + 0xb8);
  lVar5 = puVar3[0x67];
  uVar4 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar2);
      puVar3 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar7 = *puVar3;
    lVar5 = thunk_FUN_03ac74bc(*(undefined8 *)
                                Unity_Services_Vivox_vx_resp_sessiongroup_terminate_t_TypeInfo);
    FUN_059a4f5c(lVar5,uVar7,
                 *(undefined8 *)Gley_TrafficSystem_Internal_AIEvents_NotifyVehicles_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x338) = lVar5;
    thunk_FUN_03afed3c(lVar2 + 0x338,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07d37188(uVar4,uVar1,uVar6,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar2 = *(long *)(unaff_x27 + 0x78);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar1 = FUN_0675ff58(lVar2 + 0x20,0);
  uVar6 = FUN_0675ff58(*(long *)(unaff_x27 + 0x18) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(lVar2);
    lVar2 = *unaff_x25;
  }
  puVar3 = *(undefined8 **)(lVar2 + 0xb8);
  lVar5 = puVar3[0x68];
  uVar4 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar2);
      puVar3 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar7 = *puVar3;
    lVar5 = thunk_FUN_03ac74bc(*(undefined8 *)
                                Unity_Services_Vivox_vx_resp_sessiongroup_remove_session_t_TypeInfo)
    ;
    FUN_059a4b88(lVar5,uVar7,
                 *(undefined8 *)UnityEngine_Rendering_HighDefinition_AOVRequestData_<>c_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x340) = lVar5;
    thunk_FUN_03afed3c(lVar2 + 0x340,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07d37188(uVar4,uVar1,uVar6,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar2 = *(long *)(unaff_x27 + 0x78);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar1 = FUN_0675ff58(lVar2 + 0x20,0);
  uVar6 = FUN_0675ff58(*(long *)(unaff_x27 + 0x40) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(lVar2);
    lVar2 = *unaff_x25;
  }
  puVar3 = *(undefined8 **)(lVar2 + 0xb8);
  lVar5 = puVar3[0x69];
  uVar4 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar2);
      puVar3 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar7 = *puVar3;
    lVar5 = thunk_FUN_03ac74bc(*(undefined8 *)
                                Unity_Services_Vivox_vx_resp_sessiongroup_reset_focus_t_TypeInfo);
    FUN_059a5340(lVar5,uVar7,*(undefined8 *)System_Text_ASCIIEncoding_ASCIIEncodingSealed_TypeInfo,0
                );
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x348) = lVar5;
    thunk_FUN_03afed3c(lVar2 + 0x348,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07d37188(uVar4,uVar1,uVar6,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar2 = *(long *)(unaff_x27 + 0x78);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar1 = FUN_0675ff58(lVar2 + 0x20,0);
  uVar6 = FUN_0675ff58(*(long *)(unaff_x27 + 0x50) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(lVar2);
    lVar2 = *unaff_x25;
  }
  puVar3 = *(undefined8 **)(lVar2 + 0xb8);
  lVar5 = puVar3[0x6a];
  uVar4 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar2);
      puVar3 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar7 = *puVar3;
    lVar5 = thunk_FUN_03ac74bc(*(undefined8 *)
                                Unity_Services_Vivox_vx_resp_sessiongroup_get_stats_t_TypeInfo);
    FUN_059a5404(lVar5,uVar7,*(undefined8 *)UnityEngine_UIElements_ATGTextJobSystem_<>c_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x350) = lVar5;
    thunk_FUN_03afed3c(lVar2 + 0x350,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07d37188(uVar4,uVar1,uVar6,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar2 = *(long *)(unaff_x27 + 0x78);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar1 = FUN_0675ff58(lVar2 + 0x20,0);
  uVar6 = FUN_0675ff58(*(long *)(unaff_x27 + 0x70) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(lVar2);
    lVar2 = *unaff_x25;
  }
  puVar3 = *(undefined8 **)(lVar2 + 0xb8);
  lVar5 = puVar3[0x6b];
  uVar4 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar2);
      puVar3 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar7 = *puVar3;
    lVar5 = thunk_FUN_03ac74bc(*(undefined8 *)
                                Unity_Services_Vivox_vx_resp_sessiongroup_set_tx_all_sessions_t_TypeInfo
                              );
    FUN_059a54c8(lVar5,uVar7,
                 *(undefined8 *)UnityEngine_UIElements_ATGTextJobSystem_ManagedJobData_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x358) = lVar5;
    thunk_FUN_03afed3c(lVar2 + 0x358,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07d37188(uVar4,uVar1,uVar6,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar2 = *(long *)(unaff_x27 + 0x78);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar1 = FUN_0675ff58(lVar2 + 0x20,0);
  uVar6 = FUN_0675ff58(*(long *)(unaff_x27 + 0x80) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(lVar2);
    lVar2 = *unaff_x25;
  }
  puVar3 = *(undefined8 **)(lVar2 + 0xb8);
  lVar5 = puVar3[0x6c];
  uVar4 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar2);
      puVar3 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar7 = *puVar3;
    lVar5 = thunk_FUN_03ac74bc(*(undefined8 *)
                                Unity_Services_Vivox_vx_resp_sessiongroup_set_tx_no_session_t_TypeInfo
                              );
    FUN_059a4d10(lVar5,uVar7,*(undefined8 *)Unity_Services_Vivox_vx_stat_sample_t_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x360) = lVar5;
    thunk_FUN_03afed3c(lVar2 + 0x360,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07d37188(uVar4,uVar1,uVar6,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar2 = *(long *)(unaff_x27 + 0x78);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar1 = FUN_0675ff58(lVar2 + 0x20,0);
  uVar6 = FUN_0675ff58(*(long *)(unaff_x27 + 0x10) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(lVar2);
    lVar2 = *unaff_x25;
  }
  puVar3 = *(undefined8 **)(lVar2 + 0xb8);
  lVar5 = puVar3[0x6d];
  uVar4 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar2);
      puVar3 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar7 = *puVar3;
    lVar5 = thunk_FUN_03ac74bc(*(undefined8 *)
                                Unity_Services_Vivox_vx_resp_sessiongroup_unset_focus_t_TypeInfo);
    FUN_059a5020(lVar5,uVar7,*(undefined8 *)Unity_Services_Vivox_vx_stat_thread_t_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x368) = lVar5;
    thunk_FUN_03afed3c(lVar2 + 0x368,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07d37188(uVar4,uVar1,uVar6,lVar5);
  return;
}


