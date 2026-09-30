/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_SetTrackingIPDEnabled
ENTRY_POINT: 05d46b14
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_6_0__ovrp_SetTrackingIPDEnabled(ulong param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  int iVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if ((param_1 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb90e8);
    FUN_02fe925c(PTR_DAT_06fb90f0);
    FUN_02fe925c(PTR_DAT_06f6ddb8);
    *(undefined1 *)(unaff_x20 + 0xb4e) = 1;
  }
  puVar5 = PTR_DAT_06fb90f0;
  puVar4 = PTR_DAT_06f6ddb8;
  lVar6 = *(long *)(param_2 + 0x68);
  if (lVar6 == 0) {
LAB_05d46c18:
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  iVar3 = *(int *)(lVar6 + 0x18);
  if (0 < iVar3) {
    iVar7 = 0;
    do {
      iVar1 = iVar7 + 1;
      iVar2 = iVar1;
      if (iVar1 < iVar3) {
        do {
          lVar6 = FUN_04430018(lVar6,iVar7,*(undefined8 *)puVar5);
          if ((lVar6 == 0) || (*(long *)(param_2 + 0x68) == 0)) goto LAB_05d46c18;
          uVar8 = *(undefined8 *)(lVar6 + 0x20);
          lVar6 = FUN_04430018(*(long *)(param_2 + 0x68),iVar2,*(undefined8 *)puVar5);
          if (lVar6 == 0) goto LAB_05d46c18;
          uVar9 = *(undefined8 *)(lVar6 + 0x20);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_02fdcff0(*(long *)puVar4);
          }
          FUN_0696e19c(uVar8,uVar9,0);
          lVar6 = *(long *)(param_2 + 0x68);
          if (lVar6 == 0) goto LAB_05d46c18;
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(lVar6 + 0x18));
      }
      iVar3 = *(int *)(lVar6 + 0x18);
      iVar7 = iVar1;
    } while (iVar1 < iVar3);
  }
  return;
}


