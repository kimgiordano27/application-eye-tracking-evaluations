/*
FUNCTION_NAME: FUN_035942e0
ENTRY_POINT: 035942e0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_035942e0(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  long local_58;
  
  puVar4 = OVRPlugin_Sizef_TypeInfo;
  if ((DAT_0412e092 & 1) == 0) {
    FUN_01ab69ac(QFSW_QC_Utilities_ReflectionExtensions_<>c__DisplayClass10_0_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03d0f420);
    FUN_01ab69ac(QFSW_QC_Utilities_ReflectionExtensions_<>c__DisplayClass11_0_TypeInfo);
    FUN_01ab69ac(QFSW_QC_Utilities_ReflectionExtensions_<>c__DisplayClass16_0_TypeInfo);
    FUN_01ab69ac(QFSW_QC_Utilities_ReflectionExtensions_<>c__DisplayClass18_0_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_Sizef_TypeInfo);
    DAT_0412e092 = 1;
  }
  lVar9 = *(long *)puVar4;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar9 = *(long *)puVar4;
  }
  puVar7 = QFSW_QC_Utilities_ReflectionExtensions_<>c__DisplayClass18_0_TypeInfo;
  puVar6 = QFSW_QC_Utilities_ReflectionExtensions_<>c__DisplayClass11_0_TypeInfo;
  puVar5 = QFSW_QC_Utilities_ReflectionExtensions_<>c__DisplayClass10_0_TypeInfo;
  puVar3 = PTR_DAT_03d0f420;
  puVar2 = PTR_DAT_03cbdf88;
  lVar11 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
  if (lVar11 == 0) {
LAB_03594524:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(int *)(lVar11 + 0x18) == 0) {
    return;
  }
  iVar12 = 0;
  do {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar9 = *(long *)puVar4;
    }
    lVar11 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
    if (lVar11 == 0) goto LAB_03594524;
    iVar1 = *(int *)(lVar11 + 0x18);
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar11 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
      if (lVar11 == 0) goto LAB_03594524;
    }
    if (iVar1 <= iVar12) {
      lVar9 = *(long *)puVar6;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      uVar10 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 200));
      if ((uVar10 & 1) == 0) {
        *(undefined4 *)(lVar11 + 0x18) = 0;
        return;
      }
      iVar12 = *(int *)(lVar11 + 0x18);
      *(undefined4 *)(lVar11 + 0x18) = 0;
      if (iVar12 < 1) {
        return;
      }
      FUN_02793a34(*(undefined8 *)(lVar11 + 0x10),0,iVar12,0);
      return;
    }
    FUN_02215a88(lVar11,iVar12,&local_58,*(undefined8 *)puVar7);
    lVar9 = local_58;
    if (local_58 == 0) goto LAB_03594524;
    if (*(int *)(local_58 + 0x30) < 1) {
      lVar11 = *(long *)puVar4;
      lVar13 = *(long *)(local_58 + 0x28);
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar11 = *(long *)puVar4;
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
      if (lVar11 == 0) goto LAB_03594524;
      local_58 = *(long *)(lVar9 + 0x10);
      FUN_0219eaf8(lVar11,&local_58,*(undefined8 *)puVar5);
      if (lVar13 == 0) goto LAB_03594524;
      lVar9 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
      uVar8 = FUN_036d3364(lVar13,0);
      if (lVar9 == 0) goto LAB_03594524;
      local_58 = CONCAT44(local_58._4_4_,uVar8);
      FUN_0219eaf8(lVar9,&local_58,*(undefined8 *)puVar3);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_036d441c(lVar13,0);
    }
    lVar9 = *(long *)puVar4;
    iVar12 = iVar12 + 1;
  } while( true );
}


