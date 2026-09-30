/*
FUNCTION_NAME: FUN_068aa680
ENTRY_POINT: 068aa680
PROGRAM: waitwhat-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_068aa680(long param_1)

{
  int iVar1;
  long lVar2;
  
  if ((DAT_075590e9 & 1) == 0) {
    FUN_03188a78(PTR_DAT_07128828);
    FUN_03188a78(OVRPlugin_OVRP_1_125_0_TypeInfo);
    FUN_03188a78(System_Net_Http_Headers_MediaTypeHeaderValue_<>c_TypeInfo);
    FUN_03188a78(System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass5_0_TypeInfo);
    DAT_075590e9 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x2f8);
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x18);
    *(undefined4 *)(lVar2 + 0x18) = 0;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_0595236c(*(undefined8 *)(lVar2 + 0x10),0,iVar1,0);
    }
    lVar2 = *(long *)(param_1 + 0x300);
    if (lVar2 != 0) {
      iVar1 = *(int *)(lVar2 + 0x18);
      *(undefined4 *)(lVar2 + 0x18) = 0;
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
      if (0 < iVar1) {
        FUN_0595236c(*(undefined8 *)(lVar2 + 0x10),0,iVar1,0);
      }
      lVar2 = *(long *)(param_1 + 0x2e8);
      if (lVar2 != 0) {
        iVar1 = *(int *)(lVar2 + 0x18);
        *(undefined4 *)(lVar2 + 0x18) = 0;
        *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
        if (0 < iVar1) {
          FUN_0595236c(*(undefined8 *)(lVar2 + 0x10),0,iVar1,0);
        }
        lVar2 = *(long *)(param_1 + 0x2f0);
        if (lVar2 != 0) {
          iVar1 = *(int *)(lVar2 + 0x1c);
          *(undefined1 *)(param_1 + 0x330) = 0;
          *(undefined4 *)(param_1 + 0x2e0) = 0;
          *(undefined4 *)(lVar2 + 0x18) = 0;
          *(int *)(lVar2 + 0x1c) = iVar1 + 1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


