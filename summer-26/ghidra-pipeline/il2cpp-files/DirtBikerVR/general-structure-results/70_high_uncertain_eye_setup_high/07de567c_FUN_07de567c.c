/*
FUNCTION_NAME: FUN_07de567c
ENTRY_POINT: 07de567c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_21
*/


long FUN_07de567c(undefined4 param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar2 = OVRPlugin_OVRP_1_116_0_TypeInfo;
  if ((DAT_0899a193 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08496118);
    FUN_03a8a718(OVRPlugin_OVRP_1_117_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_118_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_119_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_11_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_120_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_121_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_122_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_123_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_124_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_125_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_126_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_127_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_128_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_129_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_12_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_15_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_16_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_17_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_18_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_19_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_1_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_21_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_28_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_116_0_TypeInfo);
    DAT_0899a193 = 1;
  }
  lVar3 = *(long *)puVar2;
  iVar1 = *(int *)(lVar3 + 0xe4);
  switch(param_1) {
  case 1:
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[2] != 0) {
      return puVar5[2];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08496118);
    FUN_04966414(lVar3,uVar6,*(undefined8 *)OVRPlugin_OVRP_1_127_0_TypeInfo,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar4 = lVar3;
    break;
  case 2:
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[3] != 0) {
      return puVar5[3];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08496118);
    FUN_04966414(lVar3,uVar6,*(undefined8 *)OVRPlugin_OVRP_1_15_0_TypeInfo,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
    *plVar4 = lVar3;
    break;
  case 3:
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[4] != 0) {
      return puVar5[4];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08496118);
    FUN_04966414(lVar3,uVar6,*(undefined8 *)OVRPlugin_OVRP_1_16_0_TypeInfo,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
    *plVar4 = lVar3;
    break;
  case 4:
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[5] != 0) {
      return puVar5[5];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08496118);
    FUN_04966414(lVar3,uVar6,*(undefined8 *)OVRPlugin_OVRP_1_17_0_TypeInfo,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
    *plVar4 = lVar3;
    break;
  case 5:
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[6] != 0) {
      return puVar5[6];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08496118);
    FUN_04966414(lVar3,uVar6,*(undefined8 *)OVRPlugin_OVRP_1_18_0_TypeInfo,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
    *plVar4 = lVar3;
    break;
  case 6:
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[7] != 0) {
      return puVar5[7];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08496118);
    FUN_04966414(lVar3,uVar6,*(undefined8 *)OVRPlugin_OVRP_1_19_0_TypeInfo,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38);
    *plVar4 = lVar3;
    break;
  case 7:
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[8] != 0) {
      return puVar5[8];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08496118);
    FUN_04966414(lVar3,uVar6,*(undefined8 *)OVRPlugin_OVRP_1_1_0_TypeInfo,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40);
    *plVar4 = lVar3;
    break;
  case 8:
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[9] != 0) {
      return puVar5[9];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08496118);
    FUN_04966414(lVar3,uVar6,*(undefined8 *)OVRPlugin_OVRP_1_21_0_TypeInfo,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48);
    *plVar4 = lVar3;
    break;
  case 9:
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[10] != 0) {
      return puVar5[10];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08496118);
    FUN_04966414(lVar3,uVar6,*(undefined8 *)OVRPlugin_OVRP_1_28_0_TypeInfo,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x50);
    *plVar4 = lVar3;
    break;
  case 10:
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[0xb] != 0) {
      return puVar5[0xb];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08496118);
    FUN_04966414(lVar3,uVar6,*(undefined8 *)OVRPlugin_OVRP_1_118_0_TypeInfo,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x58);
    *plVar4 = lVar3;
    break;
  case 0xb:
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[0xc] != 0) {
      return puVar5[0xc];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08496118);
    FUN_04966414(lVar3,uVar6,*(undefined8 *)OVRPlugin_OVRP_1_119_0_TypeInfo,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x60);
    *plVar4 = lVar3;
    break;
  case 0xc:
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[0xd] != 0) {
      return puVar5[0xd];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08496118);
    FUN_04966414(lVar3,uVar6,*(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x68);
    *plVar4 = lVar3;
    break;
  case 0xd:
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[0xe] != 0) {
      return puVar5[0xe];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08496118);
    FUN_04966414(lVar3,uVar6,*(undefined8 *)OVRPlugin_OVRP_1_120_0_TypeInfo,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x70);
    *plVar4 = lVar3;
    break;
  case 0xe:
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[0xf] != 0) {
      return puVar5[0xf];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08496118);
    FUN_04966414(lVar3,uVar6,*(undefined8 *)OVRPlugin_OVRP_1_121_0_TypeInfo,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x78);
    *plVar4 = lVar3;
    break;
  case 0xf:
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[0x10] != 0) {
      return puVar5[0x10];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08496118);
    FUN_04966414(lVar3,uVar6,*(undefined8 *)OVRPlugin_OVRP_1_122_0_TypeInfo,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x80);
    *plVar4 = lVar3;
    break;
  case 0x10:
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[0x11] != 0) {
      return puVar5[0x11];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08496118);
    FUN_04966414(lVar3,uVar6,*(undefined8 *)OVRPlugin_OVRP_1_123_0_TypeInfo,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x88);
    *plVar4 = lVar3;
    break;
  case 0x11:
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[0x12] != 0) {
      return puVar5[0x12];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08496118);
    FUN_04966414(lVar3,uVar6,*(undefined8 *)OVRPlugin_OVRP_1_124_0_TypeInfo,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x90);
    *plVar4 = lVar3;
    break;
  case 0x12:
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[0x13] != 0) {
      return puVar5[0x13];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08496118);
    FUN_04966414(lVar3,uVar6,*(undefined8 *)OVRPlugin_OVRP_1_125_0_TypeInfo,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x98);
    *plVar4 = lVar3;
    break;
  case 0x13:
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[0x14] != 0) {
      return puVar5[0x14];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08496118);
    FUN_04966414(lVar3,uVar6,*(undefined8 *)OVRPlugin_OVRP_1_126_0_TypeInfo,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xa0);
    *plVar4 = lVar3;
    break;
  case 0x14:
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[0x15] != 0) {
      return puVar5[0x15];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08496118);
    FUN_04966414(lVar3,uVar6,*(undefined8 *)OVRPlugin_OVRP_1_128_0_TypeInfo,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xa8);
    *plVar4 = lVar3;
    break;
  case 0x15:
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[0x16] != 0) {
      return puVar5[0x16];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08496118);
    FUN_04966414(lVar3,uVar6,*(undefined8 *)OVRPlugin_OVRP_1_129_0_TypeInfo,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xb0);
    *plVar4 = lVar3;
    break;
  case 0x16:
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[0x17] != 0) {
      return puVar5[0x17];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08496118);
    FUN_04966414(lVar3,uVar6,*(undefined8 *)OVRPlugin_OVRP_1_12_0_TypeInfo,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xb8);
    *plVar4 = lVar3;
    break;
  default:
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[1] != 0) {
      return puVar5[1];
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar5;
    lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08496118);
    FUN_04966414(lVar3,uVar6,*(undefined8 *)OVRPlugin_OVRP_1_117_0_TypeInfo,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar4 = lVar3;
  }
  thunk_FUN_03afed3c(plVar4,lVar3);
  return lVar3;
}


