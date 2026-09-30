/*
FUNCTION_NAME: OVRPlugin.Media$$SetMrcFrameImageFlipped
ENTRY_POINT: 06032498
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__SetMrcFrameImageFlipped(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if ((DAT_07a46bee & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075f7918);
    FUN_031f20f4(PTR_DAT_075f7920);
    FUN_031f20f4(PTR_DAT_075b8c38);
    DAT_07a46bee = 1;
  }
  puVar5 = PTR_DAT_075f7920;
  puVar4 = PTR_DAT_075b8c38;
  lVar6 = *(long *)(param_1 + 0x68);
  if (lVar6 == 0) {
LAB_060325a4:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  iVar3 = *(int *)(lVar6 + 0x18);
  if (0 < iVar3) {
    iVar7 = 0;
    do {
      iVar1 = iVar7 + 1;
      iVar2 = iVar1;
      if (iVar1 < iVar3) {
        do {
          lVar6 = FUN_047af170(lVar6,iVar7,*(undefined8 *)puVar5);
          if ((lVar6 == 0) || (*(long *)(param_1 + 0x68) == 0)) goto LAB_060325a4;
          uVar8 = *(undefined8 *)(lVar6 + 0x20);
          lVar6 = FUN_047af170(*(long *)(param_1 + 0x68),iVar2,*(undefined8 *)puVar5);
          if (lVar6 == 0) goto LAB_060325a4;
          uVar9 = *(undefined8 *)(lVar6 + 0x20);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)puVar4);
          }
          FUN_06ee4e9c(uVar8,uVar9,0);
          lVar6 = *(long *)(param_1 + 0x68);
          if (lVar6 == 0) goto LAB_060325a4;
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(lVar6 + 0x18));
      }
      iVar3 = *(int *)(lVar6 + 0x18);
      iVar7 = iVar1;
    } while (iVar1 < iVar3);
  }
  return;
}


