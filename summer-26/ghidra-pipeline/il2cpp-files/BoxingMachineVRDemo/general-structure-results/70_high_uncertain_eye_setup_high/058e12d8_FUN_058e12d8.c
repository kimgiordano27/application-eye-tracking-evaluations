/*
FUNCTION_NAME: FUN_058e12d8
ENTRY_POINT: 058e12d8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_058e12d8(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 local_50 [16];
  
  puVar3 = PTR_DAT_06768438;
  if ((DAT_06b80b67 & 1) == 0) {
    FUN_02d6084c(OVRPlugin_OVRP_1_34_0_TypeInfo);
    FUN_02d6084c(PTR_DAT_06768438);
    FUN_02d6084c(PTR_DAT_067621a0);
    FUN_02d6084c(PTR_DAT_0675e1b8);
    FUN_02d6084c(System_Xml_XmlDocument_TypeInfo);
    FUN_02d6084c(
                UnityEngine_Rendering_UI_DebugUIHandlerPersistentCanvas_<>c__DisplayClass3_0_TypeInfo
                );
    DAT_06b80b67 = 1;
  }
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  local_50 = FUN_05855934(0);
  puVar4 = UnityEngine_Rendering_UI_DebugUIHandlerPersistentCanvas_<>c__DisplayClass3_0_TypeInfo;
  puVar2 = PTR_DAT_067621a0;
  if (0 < local_50._12_4_) {
    iVar8 = 0;
    do {
      plVar5 = (long *)FUN_03fcdf50(local_50,iVar8,*(undefined8 *)puVar4);
      if (plVar5 == (long *)0x0) goto LAB_058e14fc;
      uVar6 = FUN_0586383c(plVar5,0);
      if ((uVar6 & 1) != 0) {
        bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
        if ((bVar1 <= *(byte *)(*plVar5 + 0x130)) &&
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar2)) {
          *(long *)(param_1 + 0xf8) = (long)plVar5;
          thunk_FUN_02dd37b4((long *)(param_1 + 0xf8),plVar5);
          break;
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)local_50._12_4_);
  }
  puVar2 = PTR_DAT_0675e1b8;
  lVar9 = *(long *)(param_1 + 0xf8);
  if (lVar9 == 0) {
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar6 = FUN_0606a004(uVar11,0,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    lVar9 = *(long *)(param_1 + 0x28);
    if (lVar9 == 0) goto LAB_058e14fc;
    uVar11 = 1;
  }
  else {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_05856b34(lVar9,0,0);
    if (*(long *)(param_1 + 0xf0) != 0) {
      lVar9 = *(long *)(*(long *)(param_1 + 0xf0) + 0x188);
      if (lVar9 == 0) goto LAB_058e14fc;
      lVar10 = *(long *)(param_1 + 0xf8);
      puVar7 = (undefined4 *)FUN_037b9bf0(lVar9,*(undefined8 *)OVRPlugin_OVRP_1_34_0_TypeInfo);
      if (lVar10 == 0) goto LAB_058e14fc;
      FUN_05868748(*puVar7,puVar7[1],lVar10,0);
    }
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar6 = FUN_0606a004(uVar11,0,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    lVar9 = *(long *)(param_1 + 0x28);
    if (lVar9 == 0) {
LAB_058e14fc:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar11 = 0;
  }
  FUN_06066430(lVar9,uVar11,0);
  return;
}


