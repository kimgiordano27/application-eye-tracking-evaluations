/*
FUNCTION_NAME: FUN_05026bc8
ENTRY_POINT: 05026bc8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_05026bc8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  
  puVar1 = PTR_DAT_06324f78;
  if ((DAT_066cc182 & 1) == 0) {
    FUN_02b3c81c(OVRTask<OVRAnchor>_TypeInfo);
    FUN_02b3c81c(OVRTask<MRUK_LoadDeviceResult>_TypeInfo);
    FUN_02b3c81c(OVRTask<OVRPlugin_Result>_TypeInfo);
    FUN_02b3c81c(OVRTask<OVRSceneManager_LoadSceneModelResult>_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06324f78);
    DAT_066cc182 = 1;
  }
  FUN_05fa83dc(param_1,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  if (DAT_066cc211 == '\0') {
    FUN_02b3c81c(PTR_DAT_06324f78);
    DAT_066cc211 = '\x01';
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar4 = *(long *)puVar1;
  }
  **(undefined8 **)(lVar4 + 0xb8) = param_1;
  puVar3 = OVRTask<OVRSceneManager_LoadSceneModelResult>_TypeInfo;
  puVar2 = OVRTask<OVRAnchor>_TypeInfo;
  thunk_FUN_02bb0e9c(*(undefined8 *)(*(long *)puVar1 + 0xb8),param_1);
  iVar10 = 0;
  while( true ) {
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(lVar4);
      lVar4 = *(long *)puVar1;
    }
    lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
    if (lVar5 == 0) goto LAB_05026dec;
    if (*(int *)(lVar5 + 0x18) <= iVar10) break;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(lVar4);
      lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      if (lVar5 == 0) goto LAB_05026dec;
    }
    plVar6 = (long *)FUN_037a6268(lVar5,iVar10,*(undefined8 *)puVar3);
    if (plVar6 != (long *)0x0) {
      lVar4 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar4 + (long)(*piVar9 + 3) * 0x10 + 0x138);
            goto LAB_05026d60;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_02b7654c(plVar6,*(long *)puVar2,3);
LAB_05026d60:
      uVar8 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_05026df0(plVar6);
      }
    }
    iVar10 = iVar10 + 1;
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(lVar4);
    lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    if (lVar5 == 0) {
LAB_05026dec:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
  }
  iVar10 = *(int *)(lVar5 + 0x18);
  *(undefined4 *)(lVar5 + 0x18) = 0;
  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
  if (0 < iVar10) {
    FUN_04d9e084(*(undefined8 *)(lVar5 + 0x10),0,iVar10,0);
    return;
  }
  return;
}


