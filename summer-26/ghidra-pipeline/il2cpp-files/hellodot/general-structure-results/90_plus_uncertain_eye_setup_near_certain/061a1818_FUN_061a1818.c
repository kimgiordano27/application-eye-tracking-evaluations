/*
FUNCTION_NAME: FUN_061a1818
ENTRY_POINT: 061a1818
PROGRAM: hellodot-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_11;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_11
*/


void FUN_061a1818(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  int iVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  if ((DAT_06a83d67 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8a48);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (OVR_OpenVR_IVRSystem__ShouldApplicationReduceRenderingWork_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dcda8);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_96_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_97_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dcdb0);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_98_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (OVR_OpenVR_IVRRenderModels__GetRenderModelCount_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_99_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (OVR_OpenVR_IVRRenderModels__GetRenderModelErrorNameFromEnum_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_9_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OverlayShape_TypeInfo);
    DAT_06a83d67 = 1;
  }
  puVar2 = OVR_OpenVR_IVRRenderModels__GetRenderModelErrorNameFromEnum_TypeInfo;
  puVar1 = PTR_DAT_065c8a48;
  if (param_1 == 0) goto LAB_061a1b74;
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    iVar8 = *(int *)(lVar3 + 0x18) + -1;
    if (-1 < iVar8) {
      do {
        plVar4 = (long *)FUN_03968108(lVar3,iVar8,*(undefined8 *)puVar2);
        if (plVar4 == (long *)0x0) break;
        lVar3 = *plVar4;
        uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_061a1958;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined8 *)FUN_02ce0a7c(plVar4,*(long *)puVar1,0);
LAB_061a1958:
        (*(code *)*puVar5)(plVar4,puVar5[1]);
        iVar8 = iVar8 + -1;
        if (iVar8 < 0) goto LAB_061a1978;
        lVar3 = *(long *)(param_1 + 0x10);
      } while (lVar3 != 0);
      goto LAB_061a1b74;
    }
LAB_061a1978:
    puVar1 = OVRPlugin_OVRP_1_96_0_TypeInfo;
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_97_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    lVar9 = *(long *)puVar1;
    lVar3 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02ce0978();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02ce0978();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    lVar3 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02ce0978();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02ce0978();
    }
    if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_061a1b74;
    FUN_04002dac(**(long **)(lVar3 + 0xb8),*(undefined8 *)(param_1 + 0x10),
                 *(undefined8 *)OVRPlugin_OVRP_1_9_0_TypeInfo);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  puVar2 = OVRPlugin_OVRP_1_99_0_TypeInfo;
  puVar1 = OVR_OpenVR_IVRSystem__ShouldApplicationReduceRenderingWork_TypeInfo;
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == 0) {
    return;
  }
  iVar8 = *(int *)(lVar3 + 0x18) + -1;
  if (iVar8 < 0) {
LAB_061a1ac4:
    puVar1 = PTR_DAT_065dcda8;
    if (*(int *)(*(long *)PTR_DAT_065dcdb0 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    lVar9 = *(long *)puVar1;
    lVar3 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02ce0978();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02ce0978();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    lVar3 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02ce0978();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02ce0978();
    }
    if (**(long **)(lVar3 + 0xb8) != 0) {
      FUN_04002dac(**(long **)(lVar3 + 0xb8),*(undefined8 *)(param_1 + 0x18),
                   *(undefined8 *)OVRPlugin_OverlayShape_TypeInfo);
      *(undefined8 *)(param_1 + 0x18) = 0;
      return;
    }
  }
  else {
    do {
      auVar10 = FUN_03a64d48(lVar3,iVar8,*(undefined8 *)puVar2);
      plVar4 = auVar10._0_8_;
      if (plVar4 == (long *)0x0) break;
      lVar3 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar3 + (long)(*piVar7 + 8) * 0x10 + 0x138);
            goto LAB_061a1aa0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_02ce0a7c(plVar4,*(long *)puVar1,8);
LAB_061a1aa0:
      (*(code *)*puVar5)(plVar4,auVar10._8_8_,puVar5[1]);
      iVar8 = iVar8 + -1;
      if (iVar8 < 0) goto LAB_061a1ac4;
      lVar3 = *(long *)(param_1 + 0x18);
    } while (lVar3 != 0);
  }
LAB_061a1b74:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


